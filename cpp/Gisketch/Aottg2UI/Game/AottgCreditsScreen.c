// Type: Gisketch.Aottg2UI.Game.AottgCreditsScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___cctor (const MethodInfo* method);
// 0x44e9530

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aec20 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aec20 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, const MethodInfo* method);
// 0x44e95a0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildCredits>b__10_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildCredits_b__10_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* states, const MethodInfo* method);
// 0x44e95b0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildCredits_b__10_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *states,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)states;
  if (g_data_057aec21 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsScreen);
    g_data_057aec21 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCreditsScreen + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading(states,method_00);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder(states,method_00);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty(states,method_00);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError(states,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildLoading>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildLoading_b__11_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loading, const MethodInfo* method);
// 0x44e9610

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildLoading_b__11_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loading,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *pGVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  bool_conflict bVar5;
  int iVar6;
  int iVar7;
  System_String_Fields SVar8;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  System_String_o *pSVar9;
  System_String_Fields SVar10;
  undefined8 *puVar11;
  MethodInfo *pMVar12;
  System_String_Fields group;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar13;
  System_Action_AottgUi__o *pSVar14;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar15;
  System_String_o *pSVar16;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar18;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar19;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar20;
  MethodInfo *method_00;
  System_String_o *extraout_RDX;
  System_String_o *extraout_RDX_00;
  System_String_o *extraout_RDX_01;
  System_String_Fields SVar21;
  System_String_c *pSVar22;
  long lVar23;
  long lVar24;
  System_String_o **ppSVar25;
  int iStack_15c;
  System_String_Fields SStack_158;
  System_String_Fields SStack_150;
  int iStack_148;
  int iStack_144;
  undefined8 uStack_140;
  System_String_Fields in_stack_ffffffffffffff08;
  int iStack_34;
  
  if (g_data_057aec22 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"credits-loading-row-");
    g_data_057aec22 = '\x01';
  }
  iStack_34 = 0;
  if (loading != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    do {
      pSVar16 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
      pSVar16 = System_String__Concat_3ae5ba0("credits-loading-row-",pSVar16,(MethodInfo *)0x0);
      pGVar19 = "Column";
      pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Percent
                          (*(float *)(&g_data_00d1d6e0 + (ulong)(iStack_34 == (iStack_34 / 3) * 3) * 4),
                           (MethodInfo *)0x0);
      pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
      pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)pGVar19,(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar17,pGVar18,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,0.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                (loading,pSVar16,pGVar19,"skeleton",(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      iStack_34 = iStack_34 + 1;
    } while (iStack_34 < 6);
    return;
  }
  pSVar16 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
  System_String__Concat_3ae5ba0("credits-loading-row-",pSVar16,(MethodInfo *)0x0);
  ppSVar25 = (System_String_o **)"Column";
  pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Percent
                      (*(float *)(&g_data_00d1d6e0 + (ulong)(iStack_34 == (iStack_34 / 3) * 3) * 4),
                       (MethodInfo *)0x0);
  pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
  SVar21._stringLength = 0;
  SVar21._firstChar = 0;
  SVar21._6_2_ = 0;
  Gisketch_Aottg2UI_Code_AottgUi__Layout
            ((System_String_o *)ppSVar25,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
             (System_String_o *)0x0,0.0,pGVar17,pGVar18,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
             (MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2c90();
  SVar8 = SVar21;
  if (g_data_057aec23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"credits-ready-text");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"credits-refreshing-text");
    il2cpp_runtime_helper_023445d0(&"Refreshing credits...");
    il2cpp_runtime_helper_023445d0(&"credits.refreshing");
    il2cpp_runtime_helper_023445d0(&"text");
    ppSVar25 = &"Credits loaded.";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec23 = '\x01';
  }
  if (SVar21 != (System_String_Fields)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar21,"Credits loaded.","text","credits-ready-text",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar21,"Refreshing credits...","profileInfoStatus","credits-refreshing-text",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0);
    pGVar19 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    SVar8._stringLength = 0;
    SVar8._firstChar = 0;
    SVar8._6_2_ = 0;
    ppSVar25 = (System_String_o **)pGVar19;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar19,(MethodInfo *)0x0);
    SVar21 = "credits.refreshing";
    if (pGVar19 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      ppSVar25 = &(pGVar19->fields).alignItems;
      (pGVar19->fields).alignItems = (System_String_o *)"credits.refreshing";
      il2cpp_runtime_helper_022b4080();
      SVar8 = SVar21;
      if (pGVar20 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar20->fields).contentLayout = pGVar19;
        il2cpp_runtime_helper_022b4080(&(pGVar20->fields).contentLayout,pGVar19);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SVar21 = SVar8;
  if (g_data_057aec24 == '\0') {
    il2cpp_runtime_helper_023445d0(&"credits-empty-text");
    il2cpp_runtime_helper_023445d0(&"Credits are empty.");
    ppSVar25 = &"text";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec24 = '\x01';
  }
  if (SVar8 != (System_String_Fields)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar8,"Credits are empty.","text","credits-empty-text",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  SVar10 = SVar21;
  if (g_data_057aec25 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Try again.");
    il2cpp_runtime_helper_023445d0(&"credits.retry");
    il2cpp_runtime_helper_023445d0(&"Retry");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"credits.error");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"Could not load credits.");
    il2cpp_runtime_helper_023445d0(&"credits-error-message");
    il2cpp_runtime_helper_023445d0(&"credits-retry");
    il2cpp_runtime_helper_023445d0(&"text");
    ppSVar25 = &"credits-error-title";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec25 = '\x01';
  }
  if (SVar21 != (System_String_Fields)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar21,"Could not load credits.","text","credits-error-title",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar21,"Try again.","profileInfoStatus","credits-error-message","credits.error",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar21,0,"Retry","credits.retry","credits-retry",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         "return",(MethodInfo *)0x0);
    in_stack_ffffffffffffff08._stringLength = 0;
    in_stack_ffffffffffffff08._firstChar = 0;
    in_stack_ffffffffffffff08._6_2_ = 0;
    SVar10._stringLength = 0;
    SVar10._firstChar = 0;
    SVar10._6_2_ = 0;
    ppSVar25 = (System_String_o **)"Column";
    pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar20 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar20->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar19;
      il2cpp_runtime_helper_022b4080(&(pGVar20->fields).search,pGVar19);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar16 = (((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)ppSVar25)->fields).direction;
  iVar6 = *(int *)&(((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)ppSVar25)->fields).justify;
  SStack_150 = SVar10;
  uStack_140 = 0;
  if (g_data_057aec08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsBrushHeader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&"-contributors");
    il2cpp_runtime_helper_023445d0(&"No credits listed.");
    il2cpp_runtime_helper_023445d0(&"-empty");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-description");
    il2cpp_runtime_helper_023445d0(&"credits-refreshing-text");
    il2cpp_runtime_helper_023445d0(&"Refreshing credits...");
    il2cpp_runtime_helper_023445d0(&"-core-header");
    il2cpp_runtime_helper_023445d0(&"credits.refreshing");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"-gap");
    il2cpp_runtime_helper_023445d0(&"-group-");
    g_data_057aec08 = '\x01';
  }
  iStack_15c = 0;
  group = "-core-header";
  SStack_158 = in_stack_ffffffffffffff08;
  SVar8 = (System_String_Fields)
          System_String__Concat_3ae5ba0
                    ((System_String_o *)in_stack_ffffffffffffff08,(System_String_o *)"-core-header",
                     (MethodInfo *)0x0);
  if (pSVar16 != (System_String_o *)0x0) {
    SVar21 = pSVar16->fields;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    group._stringLength = 0;
    group._firstChar = 0;
    group._6_2_ = 0;
    in_stack_ffffffffffffff08 = SVar8;
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)SVar8,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      SVar8 = "credits-category-header";
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this_00[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)SVar8;
      il2cpp_runtime_helper_022b4080(__this_00 + 1,SVar8);
      if (SVar21 == (System_String_Fields)0x0) {
        SVar21 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      in_stack_ffffffffffffff08 = (System_String_Fields)&__this_00[1].monitor;
      __this_00[1].monitor = (void *)SVar21;
      il2cpp_runtime_helper_022b4080();
      SVar8 = SStack_150;
      group = SVar21;
      if (SStack_150 != (System_String_Fields)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)SStack_150,__this_00,(MethodInfo *)0x0);
        in_stack_ffffffffffffff08 = (System_String_Fields)pSVar16[1].klass;
        group._stringLength = 0;
        group._firstChar = 0;
        group._6_2_ = 0;
        bVar5 = System_String__IsNullOrEmpty((System_String_o *)in_stack_ffffffffffffff08,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          group = (System_String_Fields)pSVar16[1].klass;
          pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)SStack_158,"-description",(MethodInfo *)0x0)
          ;
          in_stack_ffffffffffffff08 = SVar8;
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar8,(System_String_o *)group,"text",pSVar9,
                     (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        if (iVar6 == 0) {
          pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar8,"Refreshing credits...","profileInfoStatus",
                               "credits-refreshing-text",(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          SVar10 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          group._stringLength = 0;
          group._firstChar = 0;
          group._6_2_ = 0;
          in_stack_ffffffffffffff08 = SVar10;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)SVar10,(MethodInfo *)0x0);
          SVar21 = "credits.refreshing";
          if (SVar10 == (System_String_Fields)0x0) goto label_044e66c5;
          in_stack_ffffffffffffff08 = (System_String_Fields)((long)SVar10 + 0x20);
          *(System_String_Fields *)((long)SVar10 + 0x20) = "credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          group = SVar21;
          if (pGVar20 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          in_stack_ffffffffffffff08 = (System_String_Fields)&(pGVar20->fields).contentLayout;
          (pGVar20->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar10;
          il2cpp_runtime_helper_022b4080();
          group = SVar10;
        }
        SVar21 = (System_String_Fields)pSVar16[1].monitor;
        if (SVar21 != (System_String_Fields)0x0) {
          lVar24 = *(long *)SVar21;
          if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
            lVar23 = 0;
            do {
              if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                puVar11 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138);
                goto label_044e6411;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
          }
          puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar21,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          group = *(System_String_Fields *)(puVar11 + 1);
          iVar6 = (*(code *)*puVar11)();
          SVar10 = pSVar16[1].fields;
          in_stack_ffffffffffffff08 = SVar21;
          if (SVar10 != (System_String_Fields)0x0) {
            lVar24 = *(long *)SVar10;
            if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
              lVar23 = 0;
              do {
                if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar12 = (MethodInfo *)
                            ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138);
                  goto label_044e6481;
                }
                lVar23 = lVar23 + 0x10;
              } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
            }
            pMVar12 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar10,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            group = (System_String_Fields)pMVar12->virtualMethodPointer;
            iStack_144 = (*pMVar12->methodPointer)();
            in_stack_ffffffffffffff08 = SVar10;
            iStack_148 = iVar6;
            if (0 < iVar6) {
              group = (System_String_Fields)pSVar16[1].monitor;
              pSVar9 = System_String__Concat_3ae5ba0
                                 ((System_String_o *)SStack_158,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar8,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)group,pSVar9,
                         pMVar12);
              in_stack_ffffffffffffff08 = SVar8;
            }
            SVar21 = SStack_150;
            iStack_15c = 0;
            SVar8 = pSVar16[1].fields;
            if (SVar8 != (System_String_Fields)0x0) {
              do {
                iVar6 = iStack_15c;
                lVar24 = *(long *)SVar8;
                if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
                  lVar23 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      puVar11 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138
                                );
                      goto label_044e65b3;
                    }
                    lVar23 = lVar23 + 0x10;
                  } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
                }
                puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar8,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar7 = (*(code *)*puVar11)(SVar8);
                SVar8 = SStack_150;
                if (iVar7 <= iVar6) {
                  if ((iStack_144 < 1) && (iStack_148 < 1)) {
                    pSVar16 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)SStack_158,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar8,pSVar16,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar9 = System_Int32__ToString((int32_t)&iStack_15c,(MethodInfo *)0x0);
                group = (System_String_Fields)
                        System_String__Concat_3af7470
                                  ((System_String_o *)SStack_158,"-group-",pSVar9,"-gap",
                                   (MethodInfo *)0x0);
                in_stack_ffffffffffffff08 = SVar21;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar21,(System_String_o *)group,method_00);
                iVar6 = iStack_15c;
                SVar8 = pSVar16[1].fields;
                if (SVar8 == (System_String_Fields)0x0) break;
                lVar24 = *(long *)SVar8;
                if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
                  lVar23 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      puVar11 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138
                                );
                      goto label_044e64fd;
                    }
                    lVar23 = lVar23 + 0x10;
                  } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
                }
                puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar8,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                group = (System_String_Fields)(*(code *)*puVar11)(SVar8,iVar6,puVar11[1]);
                pSVar9 = System_Int32__ToString((int32_t)&iStack_15c,(MethodInfo *)0x0);
                pMVar12 = (MethodInfo *)0x0;
                pSVar9 = System_String__Concat_3af7150
                                   ((System_String_o *)SStack_158,"-group-",pSVar9,(MethodInfo *)0x0);
                in_stack_ffffffffffffff08 = SVar21;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar21,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)group,pSVar9,pMVar12);
                iStack_15c = iStack_15c + 1;
                SVar8 = pSVar16[1].fields;
              } while (SVar8 != (System_String_Fields)0x0);
            }
          }
        }
      }
    }
  }
label_044e66c5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildContributors_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass6_0);
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"Wrap");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aec0a = '\x01';
  }
  pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar16 = (System_String_o *)0x0;
  pGVar19 = pGVar13;
  System_Object___ctor((Il2CppObject *)pGVar13,(MethodInfo *)0x0);
  if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar13->fields).direction = (System_String_o *)group;
    il2cpp_runtime_helper_022b4080(&pGVar13->fields,group);
    (pGVar13->fields).justify = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar13->fields).justify,extraout_RDX);
    pSVar14 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar9 = (pGVar13->fields).justify;
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar16 = (System_String_o *)0x0;
    pGVar19 = "Row";
    pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)0x0,
                         (System_String_o *)"FlexStart",(System_String_o *)0x0,"Wrap",10.0,pGVar17,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (in_stack_ffffffffffffff08 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)in_stack_ffffffffffffff08,(System_String_o *)"default"
                 ,pSVar14,pSVar9,pGVar13,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec0f = '\x01';
  }
  pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  pSVar9 = (System_String_o *)0x0;
  pGVar13 = "Column";
  pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar17,pGVar18,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar19 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar19,(System_String_o *)"default",
               (System_Action_AottgUi__o *)0x0,pSVar16,pGVar15,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildGroup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass5_0);
    il2cpp_runtime_helper_023445d0(&"-contributors");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-empty");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"No contributors listed.");
    il2cpp_runtime_helper_023445d0(&"-header");
    g_data_057aec09 = '\x01';
  }
  pGVar15 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pSVar22 = (System_String_c *)0x0;
  pGVar19 = pGVar15;
  System_Object___ctor((Il2CppObject *)pGVar15,(MethodInfo *)0x0);
  if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar1 = &pGVar15->fields;
    (pGVar15->fields).direction = pSVar9;
    il2cpp_runtime_helper_022b4080(pGVar1,pSVar9);
    ppSVar25 = &(pGVar15->fields).justify;
    (pGVar15->fields).justify = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(ppSVar25,extraout_RDX_00);
    pSVar14 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar16 = System_String__Concat_3ae5ba0((pGVar15->fields).justify,"-header",(MethodInfo *)0x0);
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar22 = "FlexStart";
    pGVar19 = "Row";
    pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar17,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pSVar22 = "default";
      pGVar19 = pGVar13;
      pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,(System_String_o *)"default",pSVar14
                           ,pSVar16,pGVar15,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
      if ((pGVar1->direction != (System_String_o *)0x0) &&
         (pGVar20 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pSVar22 = pGVar1->direction[1].klass;
        pGVar19 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar20->fields).choiceOptionRenderer
        ;
        (pGVar20->fields).choiceOptionRenderer = (System_String_o *)pSVar22;
        il2cpp_runtime_helper_022b4080();
        if ((pGVar1->direction != (System_String_o *)0x0) &&
           (pGVar15 = pGVar1->direction[1].monitor,
           pGVar15 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0)) {
          pGVar3 = pGVar15->klass;
          uVar2._0_1_ = (pGVar3->_2).rank;
          uVar2._1_1_ = (pGVar3->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar4 = (pGVar3->_1).interfaceOffsets;
            lVar24 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar24) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                pMVar12 = (MethodInfo *)
                          (&(pGVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar24));
                goto label_044e6c71;
              }
              lVar24 = lVar24 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar24);
          }
          pMVar12 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pGVar15,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pSVar22 = (System_String_c *)pMVar12->virtualMethodPointer;
          iVar6 = (*pMVar12->methodPointer)();
          if (iVar6 < 1) {
            pSVar16 = System_String__Concat_3ae5ba0(*ppSVar25,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,pSVar16,"No contributors listed.",
                       (MethodInfo *)&"No contributors listed.");
            return;
          }
          pGVar19 = pGVar15;
          if (pGVar1->direction != (System_String_o *)0x0) {
            contributors = pGVar1->direction[1].monitor;
            pSVar16 = System_String__Concat_3ae5ba0(*ppSVar25,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,contributors,pSVar16,pMVar12);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmpty_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass10_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec0e = '\x01';
  }
  pGVar15 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  pGVar13 = pGVar15;
  System_Object___ctor((Il2CppObject *)pGVar15,(MethodInfo *)0x0);
  if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar15->fields).direction = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(&pGVar15->fields,extraout_RDX_01);
    (pGVar15->fields).justify = (System_String_o *)pSVar22;
    il2cpp_runtime_helper_022b4080(&(pGVar15->fields).justify,pSVar22);
    pSVar14 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar16 = (pGVar15->fields).justify;
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar13 = "Column";
    pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar17,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar19 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar19,(System_String_o *)"default",pSVar14,pSVar16,
                 pGVar15,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar13,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildReadyPlaceholder>b__12_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildReadyPlaceholder_b__12_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ready, const MethodInfo* method);
// 0x44e9890

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildReadyPlaceholder_b__12_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ready,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *pGVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_c *pGVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  bool_conflict bVar5;
  int iVar6;
  int iVar7;
  System_String_Fields SVar8;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  System_String_o *pSVar9;
  System_String_Fields SVar10;
  undefined8 *puVar11;
  MethodInfo *pMVar12;
  System_String_Fields SVar13;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar14;
  System_Action_AottgUi__o *pSVar15;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar16;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar18;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar19;
  MethodInfo *method_00;
  System_String_o *extraout_RDX;
  System_String_o *extraout_RDX_00;
  System_String_o *extraout_RDX_01;
  System_String_Fields SVar20;
  System_String_o *pSVar21;
  System_String_c *pSVar22;
  long lVar23;
  long lVar24;
  System_String_o **ppSVar25;
  int iStack_d4;
  System_String_Fields SStack_d0;
  System_String_Fields SStack_c8;
  int iStack_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  System_String_Fields in_stack_ffffffffffffff90;
  
  SVar8 = (System_String_Fields)ready;
  ppSVar25 = (System_String_o **)__this;
  if (g_data_057aec23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"credits-ready-text");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"credits-refreshing-text");
    il2cpp_runtime_helper_023445d0(&"Refreshing credits...");
    il2cpp_runtime_helper_023445d0(&"credits.refreshing");
    il2cpp_runtime_helper_023445d0(&"text");
    ppSVar25 = &"Credits loaded.";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec23 = '\x01';
  }
  if (ready != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ready,"Credits loaded.","text","credits-ready-text",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (ready,"Refreshing credits...","profileInfoStatus","credits-refreshing-text",(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar19 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    SVar8._stringLength = 0;
    SVar8._firstChar = 0;
    SVar8._6_2_ = 0;
    ppSVar25 = (System_String_o **)pGVar19;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar19,(MethodInfo *)0x0);
    SVar13 = "credits.refreshing";
    if (pGVar19 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      ppSVar25 = &(pGVar19->fields).alignItems;
      (pGVar19->fields).alignItems = (System_String_o *)"credits.refreshing";
      il2cpp_runtime_helper_022b4080();
      SVar8 = SVar13;
      if (pGVar18 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar18->fields).contentLayout = pGVar19;
        il2cpp_runtime_helper_022b4080(&(pGVar18->fields).contentLayout,pGVar19);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SVar13 = SVar8;
  if (g_data_057aec24 == '\0') {
    il2cpp_runtime_helper_023445d0(&"credits-empty-text");
    il2cpp_runtime_helper_023445d0(&"Credits are empty.");
    ppSVar25 = &"text";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec24 = '\x01';
  }
  if (SVar8 != (System_String_Fields)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar8,"Credits are empty.","text","credits-empty-text",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  SVar20 = SVar13;
  if (g_data_057aec25 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Try again.");
    il2cpp_runtime_helper_023445d0(&"credits.retry");
    il2cpp_runtime_helper_023445d0(&"Retry");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"credits.error");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"Could not load credits.");
    il2cpp_runtime_helper_023445d0(&"credits-error-message");
    il2cpp_runtime_helper_023445d0(&"credits-retry");
    il2cpp_runtime_helper_023445d0(&"text");
    ppSVar25 = &"credits-error-title";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec25 = '\x01';
  }
  if (SVar13 != (System_String_Fields)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,"Could not load credits.","text","credits-error-title",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,"Try again.","profileInfoStatus","credits-error-message","credits.error",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,0,"Retry","credits.retry","credits-retry",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         "return",(MethodInfo *)0x0);
    in_stack_ffffffffffffff90._stringLength = 0;
    in_stack_ffffffffffffff90._firstChar = 0;
    in_stack_ffffffffffffff90._6_2_ = 0;
    SVar20._stringLength = 0;
    SVar20._firstChar = 0;
    SVar20._6_2_ = 0;
    ppSVar25 = (System_String_o **)"Column";
    pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar18 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar18->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar19;
      il2cpp_runtime_helper_022b4080(&(pGVar18->fields).search,pGVar19);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar21 = (((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)ppSVar25)->fields).direction;
  iVar6 = *(int *)&(((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)ppSVar25)->fields).justify;
  SStack_c8 = SVar20;
  uStack_b8 = 0;
  if (g_data_057aec08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsBrushHeader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&"-contributors");
    il2cpp_runtime_helper_023445d0(&"No credits listed.");
    il2cpp_runtime_helper_023445d0(&"-empty");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-description");
    il2cpp_runtime_helper_023445d0(&"credits-refreshing-text");
    il2cpp_runtime_helper_023445d0(&"Refreshing credits...");
    il2cpp_runtime_helper_023445d0(&"-core-header");
    il2cpp_runtime_helper_023445d0(&"credits.refreshing");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"-gap");
    il2cpp_runtime_helper_023445d0(&"-group-");
    g_data_057aec08 = '\x01';
  }
  iStack_d4 = 0;
  SVar13 = "-core-header";
  SStack_d0 = in_stack_ffffffffffffff90;
  SVar8 = (System_String_Fields)
          System_String__Concat_3ae5ba0
                    ((System_String_o *)in_stack_ffffffffffffff90,(System_String_o *)"-core-header",
                     (MethodInfo *)0x0);
  if (pSVar21 != (System_String_o *)0x0) {
    SVar20 = pSVar21->fields;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    SVar13._stringLength = 0;
    SVar13._firstChar = 0;
    SVar13._6_2_ = 0;
    in_stack_ffffffffffffff90 = SVar8;
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)SVar8,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      SVar8 = "credits-category-header";
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this_00[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)SVar8;
      il2cpp_runtime_helper_022b4080(__this_00 + 1,SVar8);
      if (SVar20 == (System_String_Fields)0x0) {
        SVar20 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      in_stack_ffffffffffffff90 = (System_String_Fields)&__this_00[1].monitor;
      __this_00[1].monitor = (void *)SVar20;
      il2cpp_runtime_helper_022b4080();
      SVar8 = SStack_c8;
      SVar13 = SVar20;
      if (SStack_c8 != (System_String_Fields)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)SStack_c8,__this_00,(MethodInfo *)0x0);
        in_stack_ffffffffffffff90 = (System_String_Fields)pSVar21[1].klass;
        SVar13._stringLength = 0;
        SVar13._firstChar = 0;
        SVar13._6_2_ = 0;
        bVar5 = System_String__IsNullOrEmpty((System_String_o *)in_stack_ffffffffffffff90,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          SVar13 = (System_String_Fields)pSVar21[1].klass;
          pSVar9 = System_String__Concat_3ae5ba0((System_String_o *)SStack_d0,"-description",(MethodInfo *)0x0);
          in_stack_ffffffffffffff90 = SVar8;
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar8,(System_String_o *)SVar13,"text",pSVar9,
                     (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        if (iVar6 == 0) {
          pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar8,"Refreshing credits...","profileInfoStatus",
                               "credits-refreshing-text",(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          SVar10 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          SVar13._stringLength = 0;
          SVar13._firstChar = 0;
          SVar13._6_2_ = 0;
          in_stack_ffffffffffffff90 = SVar10;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)SVar10,(MethodInfo *)0x0);
          SVar20 = "credits.refreshing";
          if (SVar10 == (System_String_Fields)0x0) goto label_044e66c5;
          in_stack_ffffffffffffff90 = (System_String_Fields)((long)SVar10 + 0x20);
          *(System_String_Fields *)((long)SVar10 + 0x20) = "credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          SVar13 = SVar20;
          if (pGVar18 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          in_stack_ffffffffffffff90 = (System_String_Fields)&(pGVar18->fields).contentLayout;
          (pGVar18->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar10;
          il2cpp_runtime_helper_022b4080();
          SVar13 = SVar10;
        }
        SVar20 = (System_String_Fields)pSVar21[1].monitor;
        if (SVar20 != (System_String_Fields)0x0) {
          lVar24 = *(long *)SVar20;
          if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
            lVar23 = 0;
            do {
              if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                puVar11 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138);
                goto label_044e6411;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
          }
          puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar20,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          SVar13 = *(System_String_Fields *)(puVar11 + 1);
          iVar6 = (*(code *)*puVar11)();
          SVar10 = pSVar21[1].fields;
          in_stack_ffffffffffffff90 = SVar20;
          if (SVar10 != (System_String_Fields)0x0) {
            lVar24 = *(long *)SVar10;
            if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
              lVar23 = 0;
              do {
                if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar12 = (MethodInfo *)
                            ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138);
                  goto label_044e6481;
                }
                lVar23 = lVar23 + 0x10;
              } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
            }
            pMVar12 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar10,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            SVar13 = (System_String_Fields)pMVar12->virtualMethodPointer;
            iStack_bc = (*pMVar12->methodPointer)();
            in_stack_ffffffffffffff90 = SVar10;
            iStack_c0 = iVar6;
            if (0 < iVar6) {
              SVar13 = (System_String_Fields)pSVar21[1].monitor;
              pSVar9 = System_String__Concat_3ae5ba0
                                 ((System_String_o *)SStack_d0,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar8,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)SVar13,pSVar9,
                         pMVar12);
              in_stack_ffffffffffffff90 = SVar8;
            }
            SVar20 = SStack_c8;
            iStack_d4 = 0;
            SVar8 = pSVar21[1].fields;
            if (SVar8 != (System_String_Fields)0x0) {
              do {
                iVar6 = iStack_d4;
                lVar24 = *(long *)SVar8;
                if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
                  lVar23 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      puVar11 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138
                                );
                      goto label_044e65b3;
                    }
                    lVar23 = lVar23 + 0x10;
                  } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
                }
                puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar8,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar7 = (*(code *)*puVar11)(SVar8);
                SVar8 = SStack_c8;
                if (iVar7 <= iVar6) {
                  if ((iStack_bc < 1) && (iStack_c0 < 1)) {
                    pSVar21 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)SStack_d0,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar8,pSVar21,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar9 = System_Int32__ToString((int32_t)&iStack_d4,(MethodInfo *)0x0);
                SVar13 = (System_String_Fields)
                         System_String__Concat_3af7470
                                   ((System_String_o *)SStack_d0,"-group-",pSVar9,"-gap",
                                    (MethodInfo *)0x0);
                in_stack_ffffffffffffff90 = SVar20;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar20,(System_String_o *)SVar13,method_00);
                iVar6 = iStack_d4;
                SVar8 = pSVar21[1].fields;
                if (SVar8 == (System_String_Fields)0x0) break;
                lVar24 = *(long *)SVar8;
                if ((ulong)*(ushort *)(lVar24 + 0x12e) != 0) {
                  lVar23 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar24 + 0xb0) + lVar23) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      puVar11 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar24 + 0xb0) + 8 + lVar23) * 0x10 + lVar24 + 0x138
                                );
                      goto label_044e64fd;
                    }
                    lVar23 = lVar23 + 0x10;
                  } while ((ulong)*(ushort *)(lVar24 + 0x12e) << 4 != lVar23);
                }
                puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar8,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                SVar13 = (System_String_Fields)(*(code *)*puVar11)(SVar8,iVar6,puVar11[1]);
                pSVar9 = System_Int32__ToString((int32_t)&iStack_d4,(MethodInfo *)0x0);
                pMVar12 = (MethodInfo *)0x0;
                pSVar9 = System_String__Concat_3af7150
                                   ((System_String_o *)SStack_d0,"-group-",pSVar9,(MethodInfo *)0x0);
                in_stack_ffffffffffffff90 = SVar20;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar20,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)SVar13,pSVar9,pMVar12);
                iStack_d4 = iStack_d4 + 1;
                SVar8 = pSVar21[1].fields;
              } while (SVar8 != (System_String_Fields)0x0);
            }
          }
        }
      }
    }
  }
label_044e66c5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildContributors_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass6_0);
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"Wrap");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aec0a = '\x01';
  }
  pGVar14 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar21 = (System_String_o *)0x0;
  pGVar19 = pGVar14;
  System_Object___ctor((Il2CppObject *)pGVar14,(MethodInfo *)0x0);
  if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar14->fields).direction = (System_String_o *)SVar13;
    il2cpp_runtime_helper_022b4080(&pGVar14->fields,SVar13);
    (pGVar14->fields).justify = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar14->fields).justify,extraout_RDX);
    pSVar15 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar9 = (pGVar14->fields).justify;
    pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar21 = (System_String_o *)0x0;
    pGVar19 = "Row";
    pGVar14 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)0x0,
                         (System_String_o *)"FlexStart",(System_String_o *)0x0,"Wrap",10.0,pGVar16,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (in_stack_ffffffffffffff90 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)in_stack_ffffffffffffff90,(System_String_o *)"default"
                 ,pSVar15,pSVar9,pGVar14,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec0f = '\x01';
  }
  pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  pSVar9 = (System_String_o *)0x0;
  pGVar14 = "Column";
  pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar16,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar19 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar19,(System_String_o *)"default",
               (System_Action_AottgUi__o *)0x0,pSVar21,pGVar17,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildGroup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass5_0);
    il2cpp_runtime_helper_023445d0(&"-contributors");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-empty");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"No contributors listed.");
    il2cpp_runtime_helper_023445d0(&"-header");
    g_data_057aec09 = '\x01';
  }
  pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pSVar22 = (System_String_c *)0x0;
  pGVar19 = pGVar17;
  System_Object___ctor((Il2CppObject *)pGVar17,(MethodInfo *)0x0);
  if (pGVar17 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar1 = &pGVar17->fields;
    (pGVar17->fields).direction = pSVar9;
    il2cpp_runtime_helper_022b4080(pGVar1,pSVar9);
    ppSVar25 = &(pGVar17->fields).justify;
    (pGVar17->fields).justify = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(ppSVar25,extraout_RDX_00);
    pSVar15 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar21 = System_String__Concat_3ae5ba0((pGVar17->fields).justify,"-header",(MethodInfo *)0x0);
    pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar22 = "FlexStart";
    pGVar19 = "Row";
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar16,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pSVar22 = "default";
      pGVar19 = pGVar14;
      pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,(System_String_o *)"default",pSVar15
                           ,pSVar21,pGVar17,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
      if ((pGVar1->direction != (System_String_o *)0x0) &&
         (pGVar18 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pSVar22 = pGVar1->direction[1].klass;
        pGVar19 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar18->fields).choiceOptionRenderer
        ;
        (pGVar18->fields).choiceOptionRenderer = (System_String_o *)pSVar22;
        il2cpp_runtime_helper_022b4080();
        if ((pGVar1->direction != (System_String_o *)0x0) &&
           (pGVar17 = pGVar1->direction[1].monitor,
           pGVar17 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0)) {
          pGVar3 = pGVar17->klass;
          uVar2._0_1_ = (pGVar3->_2).rank;
          uVar2._1_1_ = (pGVar3->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar4 = (pGVar3->_1).interfaceOffsets;
            lVar24 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar24) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                pMVar12 = (MethodInfo *)
                          (&(pGVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar24));
                goto label_044e6c71;
              }
              lVar24 = lVar24 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar24);
          }
          pMVar12 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pGVar17,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pSVar22 = (System_String_c *)pMVar12->virtualMethodPointer;
          iVar6 = (*pMVar12->methodPointer)();
          if (iVar6 < 1) {
            pSVar21 = System_String__Concat_3ae5ba0(*ppSVar25,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,pSVar21,"No contributors listed.",
                       (MethodInfo *)&"No contributors listed.");
            return;
          }
          pGVar19 = pGVar17;
          if (pGVar1->direction != (System_String_o *)0x0) {
            contributors = pGVar1->direction[1].monitor;
            pSVar21 = System_String__Concat_3ae5ba0(*ppSVar25,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,contributors,pSVar21,pMVar12);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmpty_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass10_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec0e = '\x01';
  }
  pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  pGVar14 = pGVar17;
  System_Object___ctor((Il2CppObject *)pGVar17,(MethodInfo *)0x0);
  if (pGVar17 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar17->fields).direction = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(&pGVar17->fields,extraout_RDX_01);
    (pGVar17->fields).justify = (System_String_o *)pSVar22;
    il2cpp_runtime_helper_022b4080(&(pGVar17->fields).justify,pSVar22);
    pSVar15 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar21 = (pGVar17->fields).justify;
    pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar14 = "Column";
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar16,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar19 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar19,(System_String_o *)"default",pSVar15,pSVar21,
                 pGVar17,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar14,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildEmpty>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildEmpty_b__13_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* empty, const MethodInfo* method);
// 0x44e99e0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildEmpty_b__13_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *empty,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_Fields *pGVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  void *pvVar7;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar8;
  Il2CppObject *contributors;
  bool_conflict bVar9;
  int iVar10;
  int iVar11;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar13;
  Il2CppMethodPointer *ppIVar14;
  MethodInfo *pMVar15;
  undefined8 *puVar16;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar17;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar18;
  System_Action_AottgUi__o *pSVar19;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar20;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar21;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar22;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar23;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX_00;
  System_Collections_Generic_List_GisketchNodeDefinition__o *extraout_RDX_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar24;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o **ppGVar25;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar26;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar27;
  long lVar28;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar29;
  System_String_o **ppSVar30;
  System_Collections_Generic_List_GisketchNodeDefinition__c *pSVar31;
  int iStack_bc;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_b8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_b0;
  int iStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *in_stack_ffffffffffffffa8;
  
  pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)empty;
  ppSVar30 = (System_String_o **)__this;
  if (g_data_057aec24 == '\0') {
    il2cpp_runtime_helper_023445d0(&"credits-empty-text");
    il2cpp_runtime_helper_023445d0(&"Credits are empty.");
    ppSVar30 = &"text";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec24 = '\x01';
  }
  if (empty != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (empty,"Credits are empty.","text","credits-empty-text",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar27 = pGVar17;
  if (g_data_057aec25 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Try again.");
    il2cpp_runtime_helper_023445d0(&"credits.retry");
    il2cpp_runtime_helper_023445d0(&"Retry");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"credits.error");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"Could not load credits.");
    il2cpp_runtime_helper_023445d0(&"credits-error-message");
    il2cpp_runtime_helper_023445d0(&"credits-retry");
    il2cpp_runtime_helper_023445d0(&"text");
    ppSVar30 = &"credits-error-title";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec25 = '\x01';
  }
  if (pGVar17 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,"Could not load credits.","text","credits-error-title",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,"Try again.","profileInfoStatus","credits-error-message","credits.error"
               ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar22 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,0,"Retry","credits.retry","credits-retry",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         "return",(MethodInfo *)0x0);
    in_stack_ffffffffffffffa8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    ppSVar30 = (System_String_o **)"Column";
    pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar22 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar22->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar23;
      il2cpp_runtime_helper_022b4080(&(pGVar22->fields).search,pGVar23);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar26 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)ppSVar30)->fields)._children;
  iVar10 = *(int *)&(((Gisketch_Aottg2UI_Code_AottgUi_o *)ppSVar30)->fields)._actions;
  pGStack_b0 = pGVar27;
  uStack_a0 = 0;
  if (g_data_057aec08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsBrushHeader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&"-contributors");
    il2cpp_runtime_helper_023445d0(&"No credits listed.");
    il2cpp_runtime_helper_023445d0(&"-empty");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-description");
    il2cpp_runtime_helper_023445d0(&"credits-refreshing-text");
    il2cpp_runtime_helper_023445d0(&"Refreshing credits...");
    il2cpp_runtime_helper_023445d0(&"-core-header");
    il2cpp_runtime_helper_023445d0(&"credits.refreshing");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"-gap");
    il2cpp_runtime_helper_023445d0(&"-group-");
    g_data_057aec08 = '\x01';
  }
  iStack_bc = 0;
  pGVar17 = "-core-header";
  pGStack_b8 = in_stack_ffffffffffffffa8;
  pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
            System_String__Concat_3ae5ba0
                      ((System_String_o *)in_stack_ffffffffffffffa8,(System_String_o *)"-core-header",
                       (MethodInfo *)0x0);
  if (pSVar26 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    pGVar24 = (pSVar26->fields)._items;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    in_stack_ffffffffffffffa8 = pGVar27;
    bVar9 = System_String__IsNullOrEmpty((System_String_o *)pGVar27,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pGVar27 = "credits-category-header";
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this_00[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)pGVar27;
      il2cpp_runtime_helper_022b4080(__this_00 + 1,pGVar27);
      if (pGVar24 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        pGVar24 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)**(long **)(g_data_057b9c00 + 0xb8);
      }
      in_stack_ffffffffffffffa8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)&__this_00[1].monitor
      ;
      __this_00[1].monitor = pGVar24;
      il2cpp_runtime_helper_022b4080();
      pGVar27 = pGStack_b0;
      pGVar17 = pGVar24;
      if (pGStack_b0 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGStack_b0,__this_00,(MethodInfo *)0x0);
        in_stack_ffffffffffffffa8 =
             *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array **)&(pSVar26->fields)._size;
        pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
        bVar9 = System_String__IsNullOrEmpty((System_String_o *)in_stack_ffffffffffffffa8,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          pGVar17 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array **)&(pSVar26->fields)._size;
          pSVar12 = System_String__Concat_3ae5ba0
                              ((System_String_o *)pGStack_b8,"-description",(MethodInfo *)0x0);
          in_stack_ffffffffffffffa8 = pGVar27;
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar27,(System_String_o *)pGVar17,"text",
                     pSVar12,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        if (iVar10 == 0) {
          pGVar22 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar27,"Refreshing credits...","profileInfoStatus",
                               "credits-refreshing-text",(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
          in_stack_ffffffffffffffa8 = pGVar13;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar13,(MethodInfo *)0x0);
          pGVar24 = "credits.refreshing";
          if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_044e66c5;
          in_stack_ffffffffffffffa8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)pGVar13->m_Items;
          pGVar13->m_Items[0] = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)"credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          pGVar17 = pGVar24;
          if (pGVar22 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          in_stack_ffffffffffffffa8 =
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)&(pGVar22->fields).contentLayout;
          (pGVar22->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar13;
          il2cpp_runtime_helper_022b4080();
          pGVar17 = pGVar13;
        }
        pGVar24 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(pSVar26->fields)._syncRoot;
        if (pGVar24 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          pIVar5 = (pGVar24->obj).klass;
          uVar2._0_1_ = (pIVar5->_2).rank;
          uVar2._1_1_ = (pIVar5->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar6 = (pIVar5->_1).interfaceOffsets;
            lVar28 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar28) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                ppIVar14 = &(&((System_String_VTable *)pIVar5->vtable)->_0_Equals)
                            [*(int *)((long)&pIVar6->offset + lVar28)].methodPtr;
                goto label_044e6411;
              }
              lVar28 = lVar28 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar28);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pGVar24,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)ppIVar14[1];
          iVar10 = (**ppIVar14)();
          pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)pSVar26[1].klass;
          in_stack_ffffffffffffffa8 = pGVar24;
          if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            pIVar5 = (pGVar13->obj).klass;
            uVar3._0_1_ = (pIVar5->_2).rank;
            uVar3._1_1_ = (pIVar5->_2).minimumAlignment;
            if ((ulong)uVar3 != 0) {
              pIVar6 = (pIVar5->_1).interfaceOffsets;
              lVar28 = 0;
              do {
                if (*(long *)((long)&pIVar6->interfaceType + lVar28) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar15 = (MethodInfo *)(pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar28));
                  goto label_044e6481;
                }
                lVar28 = lVar28 + 0x10;
              } while ((ulong)uVar3 << 4 != lVar28);
            }
            pMVar15 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pGVar13,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)pMVar15->virtualMethodPointer;
            iStack_a4 = (*pMVar15->methodPointer)();
            in_stack_ffffffffffffffa8 = pGVar13;
            iStack_a8 = iVar10;
            if (0 < iVar10) {
              pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(pSVar26->fields)._syncRoot;
              pSVar12 = System_String__Concat_3ae5ba0
                                  ((System_String_o *)pGStack_b8,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar27,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)pGVar17,pSVar12
                         ,pMVar15);
              in_stack_ffffffffffffffa8 = pGVar27;
            }
            pGVar27 = pGStack_b0;
            iStack_bc = 0;
            pSVar31 = pSVar26[1].klass;
            if (pSVar31 != (System_Collections_Generic_List_GisketchNodeDefinition__c *)0x0) {
              do {
                iVar10 = iStack_bc;
                pvVar7 = (pSVar31->_1).image;
                if ((ulong)*(ushort *)((long)pvVar7 + 0x12e) != 0) {
                  lVar28 = 0;
                  do {
                    if (*(long *)(*(long *)((long)pvVar7 + 0xb0) + lVar28) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      puVar16 = (undefined8 *)
                                ((long)pvVar7 +
                                (long)*(int *)(*(long *)((long)pvVar7 + 0xb0) + 8 + lVar28) * 0x10 + 0x138);
                      goto label_044e65b3;
                    }
                    lVar28 = lVar28 + 0x10;
                  } while ((ulong)*(ushort *)((long)pvVar7 + 0x12e) << 4 != lVar28);
                }
                puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar31,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar11 = (*(code *)*puVar16)(pSVar31);
                pGVar17 = pGStack_b0;
                if (iVar11 <= iVar10) {
                  if ((iStack_a4 < 1) && (iStack_a8 < 1)) {
                    pSVar12 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)pGStack_b8,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,pSVar12,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar12 = System_Int32__ToString((int32_t)&iStack_bc,(MethodInfo *)0x0);
                pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                          System_String__Concat_3af7470
                                    ((System_String_o *)pGStack_b8,"-group-",pSVar12,"-gap",
                                     (MethodInfo *)0x0);
                in_stack_ffffffffffffffa8 = pGVar27;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar27,(System_String_o *)pGVar17,method_01);
                iVar10 = iStack_bc;
                pSVar31 = pSVar26[1].klass;
                if (pSVar31 == (System_Collections_Generic_List_GisketchNodeDefinition__c *)0x0) break;
                pvVar7 = (pSVar31->_1).image;
                if ((ulong)*(ushort *)((long)pvVar7 + 0x12e) != 0) {
                  lVar28 = 0;
                  do {
                    if (*(long *)(*(long *)((long)pvVar7 + 0xb0) + lVar28) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      puVar16 = (undefined8 *)
                                ((long)pvVar7 +
                                (long)*(int *)(*(long *)((long)pvVar7 + 0xb0) + 8 + lVar28) * 0x10 + 0x138);
                      goto label_044e64fd;
                    }
                    lVar28 = lVar28 + 0x10;
                  } while ((ulong)*(ushort *)((long)pvVar7 + 0x12e) << 4 != lVar28);
                }
                puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar31,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                pGVar17 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                          (*(code *)*puVar16)(pSVar31,iVar10,puVar16[1]);
                pSVar12 = System_Int32__ToString((int32_t)&iStack_bc,(MethodInfo *)0x0);
                pMVar15 = (MethodInfo *)0x0;
                pSVar12 = System_String__Concat_3af7150
                                    ((System_String_o *)pGStack_b8,"-group-",pSVar12,(MethodInfo *)0x0);
                in_stack_ffffffffffffffa8 = pGVar27;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar27,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)pGVar17,pSVar12,pMVar15);
                iStack_bc = iStack_bc + 1;
                pSVar31 = pSVar26[1].klass;
              } while (pSVar31 != (System_Collections_Generic_List_GisketchNodeDefinition__c *)0x0);
            }
          }
        }
      }
    }
  }
label_044e66c5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildContributors_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass6_0);
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"Wrap");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aec0a = '\x01';
  }
  pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar12 = (System_String_o *)0x0;
  pGVar29 = pGVar18;
  System_Object___ctor((Il2CppObject *)pGVar18,(MethodInfo *)0x0);
  if (pGVar18 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    (pGVar18->fields)._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)pGVar17;
    il2cpp_runtime_helper_022b4080(&pGVar18->fields,pGVar17);
    (pGVar18->fields)._actions = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar18->fields)._actions,extraout_RDX);
    pSVar19 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar8 = (pGVar18->fields)._actions;
    pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar12 = (System_String_o *)0x0;
    pGVar29 = "Row";
    pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)0x0,
                         (System_String_o *)"FlexStart",(System_String_o *)0x0,"Wrap",10.0,pGVar20,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (in_stack_ffffffffffffffa8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)in_stack_ffffffffffffffa8,(System_String_o *)"default"
                 ,pSVar19,(System_String_o *)pGVar8,pGVar23,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec0f = '\x01';
  }
  pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  pSVar26 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
  pGVar18 = "Column";
  pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar20,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar29 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar29,(System_String_o *)"default",(System_Action_AottgUi__o *)0x0,pSVar12,pGVar23,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildGroup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass5_0);
    il2cpp_runtime_helper_023445d0(&"-contributors");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-empty");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"No contributors listed.");
    il2cpp_runtime_helper_023445d0(&"-header");
    g_data_057aec09 = '\x01';
  }
  pGVar21 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pMVar15 = (MethodInfo *)0x0;
  pGVar29 = pGVar21;
  System_Object___ctor((Il2CppObject *)pGVar21,(MethodInfo *)0x0);
  if (pGVar21 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = &pGVar21->fields;
    (pGVar21->fields)._children = pSVar26;
    il2cpp_runtime_helper_022b4080(pGVar1,pSVar26);
    ppGVar25 = &(pGVar21->fields)._actions;
    (pGVar21->fields)._actions = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(ppGVar25,extraout_RDX_00);
    pSVar19 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar12 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pGVar21->fields)._actions,"-header",(MethodInfo *)0x0);
    pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pMVar15 = "FlexStart";
    pGVar29 = "Row";
    pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar20,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar18 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pMVar15 = "default";
      pGVar29 = pGVar18;
      pGVar22 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (pGVar18,(System_String_o *)"default",pSVar19,pSVar12,pGVar23,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
         (pGVar22 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pMVar15 = *(MethodInfo **)&(pGVar1->_children->fields)._size;
        pGVar29 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&(pGVar22->fields).choiceOptionRenderer;
        (pGVar22->fields).choiceOptionRenderer = (System_String_o *)pMVar15;
        il2cpp_runtime_helper_022b4080();
        if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
           (pGVar21 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar1->_children->fields)._syncRoot,
           pGVar21 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
          pIVar5 = (Il2CppClass *)pGVar21->klass;
          uVar4._0_1_ = (pIVar5->_2).rank;
          uVar4._1_1_ = (pIVar5->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar6 = (pIVar5->_1).interfaceOffsets;
            lVar28 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar28) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                method_00 = (MethodInfo *)&pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar28)].methodPtr;
                goto label_044e6c71;
              }
              lVar28 = lVar28 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar28);
          }
          method_00 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pGVar21,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pMVar15 = (MethodInfo *)method_00->virtualMethodPointer;
          iVar10 = (*method_00->methodPointer)();
          if (iVar10 < 1) {
            pSVar12 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar25,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      (pGVar18,pSVar12,"No contributors listed.",(MethodInfo *)&"No contributors listed.");
            return;
          }
          pGVar29 = pGVar21;
          if (pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
            contributors = (pGVar1->_children->fields)._syncRoot;
            pSVar12 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar25,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      (pGVar18,(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)
                               contributors,pSVar12,method_00);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmpty_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass10_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec0e = '\x01';
  }
  pGVar21 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  pGVar18 = pGVar21;
  System_Object___ctor((Il2CppObject *)pGVar21,(MethodInfo *)0x0);
  if (pGVar21 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    (pGVar21->fields)._children = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(&pGVar21->fields,extraout_RDX_01);
    (pGVar21->fields)._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar15;
    il2cpp_runtime_helper_022b4080(&(pGVar21->fields)._actions,pMVar15);
    pSVar19 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar8 = (pGVar21->fields)._actions;
    pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar18 = "Column";
    pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar20,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar29 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar29,(System_String_o *)"default",pSVar19,(System_String_o *)pGVar8,pGVar23,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar18,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildError>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildError_b__14_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* error, const MethodInfo* method);
// 0x44e9a60

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildError_b__14_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *error,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_Fields *pGVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  void *pvVar7;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar8;
  Il2CppObject *contributors;
  bool_conflict bVar9;
  int iVar10;
  int iVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar12;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar14;
  Il2CppMethodPointer *ppIVar15;
  MethodInfo *pMVar16;
  undefined8 *puVar17;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar18;
  System_Action_AottgUi__o *pSVar19;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar20;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar21;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar22;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar23;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX_00;
  System_Collections_Generic_List_GisketchNodeDefinition__o *extraout_RDX_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar24;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o **ppGVar25;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar26;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar27;
  long lVar28;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar29;
  System_String_o **ppSVar30;
  System_Collections_Generic_List_GisketchNodeDefinition__c *pSVar31;
  int iStack_a4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_a0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_98;
  int iStack_90;
  int iStack_8c;
  undefined8 uStack_88;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *in_stack_ffffffffffffffc0;
  
  pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)error;
  if (g_data_057aec25 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Try again.");
    il2cpp_runtime_helper_023445d0(&"credits.retry");
    il2cpp_runtime_helper_023445d0(&"Retry");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"credits.error");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"Could not load credits.");
    il2cpp_runtime_helper_023445d0(&"credits-error-message");
    il2cpp_runtime_helper_023445d0(&"credits-retry");
    il2cpp_runtime_helper_023445d0(&"text");
    ppSVar30 = &"credits-error-title";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec25 = '\x01';
    __this = (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *)ppSVar30;
  }
  if (error != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (error,"Could not load credits.","text","credits-error-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (error,"Try again.","profileInfoStatus","credits-error-message","credits.error",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar22 = Gisketch_Aottg2UI_Code_AottgUi__Button
                        (error,0,"Retry","credits.retry","credits-retry",(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",
                         (MethodInfo *)0x0);
    in_stack_ffffffffffffffc0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    __this = (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *)"Column";
    pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar22 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar22->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar23;
      il2cpp_runtime_helper_022b4080(&(pGVar22->fields).search,pGVar23);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar26 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._children;
  iVar10 = *(int *)&(((Gisketch_Aottg2UI_Code_AottgUi_o *)__this)->fields)._actions;
  pGStack_98 = pGVar27;
  uStack_88 = 0;
  if (g_data_057aec08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsBrushHeader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&"-contributors");
    il2cpp_runtime_helper_023445d0(&"No credits listed.");
    il2cpp_runtime_helper_023445d0(&"-empty");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-description");
    il2cpp_runtime_helper_023445d0(&"credits-refreshing-text");
    il2cpp_runtime_helper_023445d0(&"Refreshing credits...");
    il2cpp_runtime_helper_023445d0(&"-core-header");
    il2cpp_runtime_helper_023445d0(&"credits.refreshing");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"-gap");
    il2cpp_runtime_helper_023445d0(&"-group-");
    g_data_057aec08 = '\x01';
  }
  iStack_a4 = 0;
  pGVar27 = "-core-header";
  pGStack_a0 = in_stack_ffffffffffffffc0;
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
            System_String__Concat_3ae5ba0
                      ((System_String_o *)in_stack_ffffffffffffffc0,(System_String_o *)"-core-header",
                       (MethodInfo *)0x0);
  if (pSVar26 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    pGVar24 = (pSVar26->fields)._items;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    in_stack_ffffffffffffffc0 = pGVar12;
    bVar9 = System_String__IsNullOrEmpty((System_String_o *)pGVar12,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      pGVar12 = "credits-category-header";
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this_00[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)pGVar12;
      il2cpp_runtime_helper_022b4080(__this_00 + 1,pGVar12);
      if (pGVar24 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        pGVar24 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)**(long **)(g_data_057b9c00 + 0xb8);
      }
      in_stack_ffffffffffffffc0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)&__this_00[1].monitor
      ;
      __this_00[1].monitor = pGVar24;
      il2cpp_runtime_helper_022b4080();
      pGVar12 = pGStack_98;
      pGVar27 = pGVar24;
      if (pGStack_98 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGStack_98,__this_00,(MethodInfo *)0x0);
        in_stack_ffffffffffffffc0 =
             *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array **)&(pSVar26->fields)._size;
        pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
        bVar9 = System_String__IsNullOrEmpty((System_String_o *)in_stack_ffffffffffffffc0,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
          pGVar27 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array **)&(pSVar26->fields)._size;
          pSVar13 = System_String__Concat_3ae5ba0
                              ((System_String_o *)pGStack_a0,"-description",(MethodInfo *)0x0);
          in_stack_ffffffffffffffc0 = pGVar12;
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,(System_String_o *)pGVar27,"text",
                     pSVar13,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        if (iVar10 == 0) {
          pGVar22 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,"Refreshing credits...","profileInfoStatus",
                               "credits-refreshing-text",(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
          in_stack_ffffffffffffffc0 = pGVar14;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar14,(MethodInfo *)0x0);
          pGVar24 = "credits.refreshing";
          if (pGVar14 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_044e66c5;
          in_stack_ffffffffffffffc0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)pGVar14->m_Items;
          pGVar14->m_Items[0] = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)"credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          pGVar27 = pGVar24;
          if (pGVar22 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          in_stack_ffffffffffffffc0 =
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)&(pGVar22->fields).contentLayout;
          (pGVar22->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pGVar14;
          il2cpp_runtime_helper_022b4080();
          pGVar27 = pGVar14;
        }
        pGVar24 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(pSVar26->fields)._syncRoot;
        if (pGVar24 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          pIVar5 = (pGVar24->obj).klass;
          uVar2._0_1_ = (pIVar5->_2).rank;
          uVar2._1_1_ = (pIVar5->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar6 = (pIVar5->_1).interfaceOffsets;
            lVar28 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar28) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                ppIVar15 = &(&((System_String_VTable *)pIVar5->vtable)->_0_Equals)
                            [*(int *)((long)&pIVar6->offset + lVar28)].methodPtr;
                goto label_044e6411;
              }
              lVar28 = lVar28 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar28);
          }
          ppIVar15 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pGVar24,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)ppIVar15[1];
          iVar10 = (**ppIVar15)();
          pGVar14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)pSVar26[1].klass;
          in_stack_ffffffffffffffc0 = pGVar24;
          if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            pIVar5 = (pGVar14->obj).klass;
            uVar3._0_1_ = (pIVar5->_2).rank;
            uVar3._1_1_ = (pIVar5->_2).minimumAlignment;
            if ((ulong)uVar3 != 0) {
              pIVar6 = (pIVar5->_1).interfaceOffsets;
              lVar28 = 0;
              do {
                if (*(long *)((long)&pIVar6->interfaceType + lVar28) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar16 = (MethodInfo *)(pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar28));
                  goto label_044e6481;
                }
                lVar28 = lVar28 + 0x10;
              } while ((ulong)uVar3 << 4 != lVar28);
            }
            pMVar16 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pGVar14,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)pMVar16->virtualMethodPointer;
            iStack_8c = (*pMVar16->methodPointer)();
            in_stack_ffffffffffffffc0 = pGVar14;
            iStack_90 = iVar10;
            if (0 < iVar10) {
              pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(pSVar26->fields)._syncRoot;
              pSVar13 = System_String__Concat_3ae5ba0
                                  ((System_String_o *)pGStack_a0,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)pGVar27,pSVar13
                         ,pMVar16);
              in_stack_ffffffffffffffc0 = pGVar12;
            }
            pGVar12 = pGStack_98;
            iStack_a4 = 0;
            pSVar31 = pSVar26[1].klass;
            if (pSVar31 != (System_Collections_Generic_List_GisketchNodeDefinition__c *)0x0) {
              do {
                iVar10 = iStack_a4;
                pvVar7 = (pSVar31->_1).image;
                if ((ulong)*(ushort *)((long)pvVar7 + 0x12e) != 0) {
                  lVar28 = 0;
                  do {
                    if (*(long *)(*(long *)((long)pvVar7 + 0xb0) + lVar28) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      puVar17 = (undefined8 *)
                                ((long)pvVar7 +
                                (long)*(int *)(*(long *)((long)pvVar7 + 0xb0) + 8 + lVar28) * 0x10 + 0x138);
                      goto label_044e65b3;
                    }
                    lVar28 = lVar28 + 0x10;
                  } while ((ulong)*(ushort *)((long)pvVar7 + 0x12e) << 4 != lVar28);
                }
                puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar31,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar11 = (*(code *)*puVar17)(pSVar31);
                pGVar27 = pGStack_98;
                if (iVar11 <= iVar10) {
                  if ((iStack_8c < 1) && (iStack_90 < 1)) {
                    pSVar13 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)pGStack_a0,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar27,pSVar13,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar13 = System_Int32__ToString((int32_t)&iStack_a4,(MethodInfo *)0x0);
                pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                          System_String__Concat_3af7470
                                    ((System_String_o *)pGStack_a0,"-group-",pSVar13,"-gap",
                                     (MethodInfo *)0x0);
                in_stack_ffffffffffffffc0 = pGVar12;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,(System_String_o *)pGVar27,method_01);
                iVar10 = iStack_a4;
                pSVar31 = pSVar26[1].klass;
                if (pSVar31 == (System_Collections_Generic_List_GisketchNodeDefinition__c *)0x0) break;
                pvVar7 = (pSVar31->_1).image;
                if ((ulong)*(ushort *)((long)pvVar7 + 0x12e) != 0) {
                  lVar28 = 0;
                  do {
                    if (*(long *)(*(long *)((long)pvVar7 + 0xb0) + lVar28) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      puVar17 = (undefined8 *)
                                ((long)pvVar7 +
                                (long)*(int *)(*(long *)((long)pvVar7 + 0xb0) + 8 + lVar28) * 0x10 + 0x138);
                      goto label_044e64fd;
                    }
                    lVar28 = lVar28 + 0x10;
                  } while ((ulong)*(ushort *)((long)pvVar7 + 0x12e) << 4 != lVar28);
                }
                puVar17 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar31,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                pGVar27 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                          (*(code *)*puVar17)(pSVar31,iVar10,puVar17[1]);
                pSVar13 = System_Int32__ToString((int32_t)&iStack_a4,(MethodInfo *)0x0);
                pMVar16 = (MethodInfo *)0x0;
                pSVar13 = System_String__Concat_3af7150
                                    ((System_String_o *)pGStack_a0,"-group-",pSVar13,(MethodInfo *)0x0);
                in_stack_ffffffffffffffc0 = pGVar12;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar12,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)pGVar27,pSVar13,pMVar16);
                iStack_a4 = iStack_a4 + 1;
                pSVar31 = pSVar26[1].klass;
              } while (pSVar31 != (System_Collections_Generic_List_GisketchNodeDefinition__c *)0x0);
            }
          }
        }
      }
    }
  }
label_044e66c5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildContributors_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass6_0);
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"Wrap");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aec0a = '\x01';
  }
  pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar13 = (System_String_o *)0x0;
  pGVar29 = pGVar18;
  System_Object___ctor((Il2CppObject *)pGVar18,(MethodInfo *)0x0);
  if (pGVar18 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    (pGVar18->fields)._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)pGVar27;
    il2cpp_runtime_helper_022b4080(&pGVar18->fields,pGVar27);
    (pGVar18->fields)._actions = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar18->fields)._actions,extraout_RDX);
    pSVar19 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar8 = (pGVar18->fields)._actions;
    pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar13 = (System_String_o *)0x0;
    pGVar29 = "Row";
    pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)0x0,
                         (System_String_o *)"FlexStart",(System_String_o *)0x0,"Wrap",10.0,pGVar20,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (in_stack_ffffffffffffffc0 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)in_stack_ffffffffffffffc0,(System_String_o *)"default"
                 ,pSVar19,(System_String_o *)pGVar8,pGVar23,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec0f = '\x01';
  }
  pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  pSVar26 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
  pGVar18 = "Column";
  pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar20,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar29 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar29,(System_String_o *)"default",(System_Action_AottgUi__o *)0x0,pSVar13,pGVar23,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildGroup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass5_0);
    il2cpp_runtime_helper_023445d0(&"-contributors");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-empty");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"No contributors listed.");
    il2cpp_runtime_helper_023445d0(&"-header");
    g_data_057aec09 = '\x01';
  }
  pGVar21 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pMVar16 = (MethodInfo *)0x0;
  pGVar29 = pGVar21;
  System_Object___ctor((Il2CppObject *)pGVar21,(MethodInfo *)0x0);
  if (pGVar21 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = &pGVar21->fields;
    (pGVar21->fields)._children = pSVar26;
    il2cpp_runtime_helper_022b4080(pGVar1,pSVar26);
    ppGVar25 = &(pGVar21->fields)._actions;
    (pGVar21->fields)._actions = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(ppGVar25,extraout_RDX_00);
    pSVar19 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar13 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pGVar21->fields)._actions,"-header",(MethodInfo *)0x0);
    pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pMVar16 = "FlexStart";
    pGVar29 = "Row";
    pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar20,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar18 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pMVar16 = "default";
      pGVar29 = pGVar18;
      pGVar22 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (pGVar18,(System_String_o *)"default",pSVar19,pSVar13,pGVar23,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
         (pGVar22 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pMVar16 = *(MethodInfo **)&(pGVar1->_children->fields)._size;
        pGVar29 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&(pGVar22->fields).choiceOptionRenderer;
        (pGVar22->fields).choiceOptionRenderer = (System_String_o *)pMVar16;
        il2cpp_runtime_helper_022b4080();
        if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
           (pGVar21 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar1->_children->fields)._syncRoot,
           pGVar21 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
          pIVar5 = (Il2CppClass *)pGVar21->klass;
          uVar4._0_1_ = (pIVar5->_2).rank;
          uVar4._1_1_ = (pIVar5->_2).minimumAlignment;
          if ((ulong)uVar4 != 0) {
            pIVar6 = (pIVar5->_1).interfaceOffsets;
            lVar28 = 0;
            do {
              if (*(long *)((long)&pIVar6->interfaceType + lVar28) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                method_00 = (MethodInfo *)&pIVar5->vtable[*(int *)((long)&pIVar6->offset + lVar28)].methodPtr;
                goto label_044e6c71;
              }
              lVar28 = lVar28 + 0x10;
            } while ((ulong)uVar4 << 4 != lVar28);
          }
          method_00 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pGVar21,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pMVar16 = (MethodInfo *)method_00->virtualMethodPointer;
          iVar10 = (*method_00->methodPointer)();
          if (iVar10 < 1) {
            pSVar13 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar25,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      (pGVar18,pSVar13,"No contributors listed.",(MethodInfo *)&"No contributors listed.");
            return;
          }
          pGVar29 = pGVar21;
          if (pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
            contributors = (pGVar1->_children->fields)._syncRoot;
            pSVar13 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar25,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      (pGVar18,(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)
                               contributors,pSVar13,method_00);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmpty_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass10_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec0e = '\x01';
  }
  pGVar21 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  pGVar18 = pGVar21;
  System_Object___ctor((Il2CppObject *)pGVar21,(MethodInfo *)0x0);
  if (pGVar21 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    (pGVar21->fields)._children = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(&pGVar21->fields,extraout_RDX_01);
    (pGVar21->fields)._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar16;
    il2cpp_runtime_helper_022b4080(&(pGVar21->fields)._actions,pMVar16);
    pSVar19 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar8 = (pGVar21->fields)._actions;
    pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar18 = "Column";
    pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar20,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar29 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar29,(System_String_o *)"default",pSVar19,(System_String_o *)pGVar8,pGVar23,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar18,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x44e8990

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c__DisplayClass9_0$$<CreditSections>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___CreditSections_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x44e9c80

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___CreditSections_b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_Fields *pGVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_String_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  Il2CppMethodPointer pIVar8;
  System_Collections_Generic_IReadOnlyList_AottgCreditGroup__c *pSVar9;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar10;
  Il2CppObject *contributors;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAVar11;
  uint uVar12;
  bool_conflict bVar13;
  int iVar14;
  Il2CppClass *pIVar15;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  System_String_o *pSVar16;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar17;
  Il2CppClass *pIVar18;
  Il2CppMethodPointer *ppIVar19;
  MethodInfo *pMVar20;
  Il2CppClass *pIVar21;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar22;
  System_Action_AottgUi__o *pSVar23;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar24;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar25;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar26;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX_00;
  System_Collections_Generic_List_GisketchNodeDefinition__o *extraout_RDX_01;
  Il2CppClass *pIVar27;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o **ppGVar28;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar29;
  long lVar30;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar31;
  System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *pSVar32;
  ulong uVar33;
  uint uStack_4c;
  System_String_o *pSStack_48;
  Il2CppClass *pIStack_40;
  int iStack_38;
  int iStack_34;
  
  pAVar11 = (__this->fields).category;
  iVar14 = (__this->fields).index;
  pIStack_40 = (Il2CppClass *)content;
  if (g_data_057aec08 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsBrushHeader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&"-contributors");
    il2cpp_runtime_helper_023445d0(&"No credits listed.");
    il2cpp_runtime_helper_023445d0(&"-empty");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-description");
    il2cpp_runtime_helper_023445d0(&"credits-refreshing-text");
    il2cpp_runtime_helper_023445d0(&"Refreshing credits...");
    il2cpp_runtime_helper_023445d0(&"-core-header");
    il2cpp_runtime_helper_023445d0(&"credits.refreshing");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"-gap");
    il2cpp_runtime_helper_023445d0(&"-group-");
    g_data_057aec08 = '\x01';
  }
  uStack_4c = 0;
  pSStack_48 = context.fields._SectionId_k__BackingField;
  pIVar21 = "-core-header";
  pIVar15 = (Il2CppClass *)
            System_String__Concat_3ae5ba0
                      (context.fields._SectionId_k__BackingField,(System_String_o *)"-core-header",
                       (MethodInfo *)0x0);
  if (pAVar11 != (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0) {
    pIVar27 = (Il2CppClass *)(pAVar11->fields)._Name_k__BackingField;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    pIVar21 = (Il2CppClass *)0x0;
    context.fields._SectionId_k__BackingField = (System_String_o *)pIVar15;
    bVar13 = System_String__IsNullOrEmpty((System_String_o *)pIVar15,(MethodInfo *)0x0);
    if ((char)bVar13 != '\0') {
      pIVar15 = "credits-category-header";
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this_00[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)pIVar15;
      il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar15);
      if (pIVar27 == (Il2CppClass *)0x0) {
        pIVar27 = (Il2CppClass *)**(long **)(g_data_057b9c00 + 0xb8);
      }
      context.fields._SectionId_k__BackingField = (System_String_o *)&__this_00[1].monitor;
      __this_00[1].monitor = pIVar27;
      il2cpp_runtime_helper_022b4080();
      pIVar15 = pIStack_40;
      pIVar21 = pIVar27;
      if (pIStack_40 != (Il2CppClass *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIStack_40,__this_00,(MethodInfo *)0x0);
        context.fields._SectionId_k__BackingField = (pAVar11->fields)._Description_k__BackingField;
        pIVar21 = (Il2CppClass *)0x0;
        bVar13 = System_String__IsNullOrEmpty(context.fields._SectionId_k__BackingField,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          pIVar21 = (Il2CppClass *)(pAVar11->fields)._Description_k__BackingField;
          pSVar16 = System_String__Concat_3ae5ba0(pSStack_48,"-description",(MethodInfo *)0x0);
          context.fields._SectionId_k__BackingField = (System_String_o *)pIVar15;
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar15,(System_String_o *)pIVar21,"text",
                     pSVar16,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        if (iVar14 == 0) {
          pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar15,"Refreshing credits...","profileInfoStatus",
                               "credits-refreshing-text",(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pIVar21 = (Il2CppClass *)0x0;
          context.fields._SectionId_k__BackingField = (System_String_o *)pIVar18;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pIVar18,(MethodInfo *)0x0);
          pIVar27 = "credits.refreshing";
          if (pIVar18 == (Il2CppClass *)0x0) goto label_044e66c5;
          context.fields._SectionId_k__BackingField = (System_String_o *)&(pIVar18->_1).byval_arg;
          (pIVar18->_1).byval_arg.data = "credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          pIVar21 = pIVar27;
          if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          context.fields._SectionId_k__BackingField = (System_String_o *)&(pGVar17->fields).contentLayout;
          (pGVar17->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pIVar18;
          il2cpp_runtime_helper_022b4080();
          pIVar21 = pIVar18;
        }
        pIVar27 = (Il2CppClass *)(pAVar11->fields)._Contributors_k__BackingField;
        if (pIVar27 != (Il2CppClass *)0x0) {
          pSVar6 = (pIVar27->_1).image;
          uVar2._0_1_ = (pSVar6->_2).rank;
          uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar30 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar30) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                ppIVar19 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar30)].methodPtr;
                goto label_044e6411;
              }
              lVar30 = lVar30 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar30);
          }
          ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pIVar27,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          pIVar21 = (Il2CppClass *)ppIVar19[1];
          iVar14 = (**ppIVar19)();
          pIVar18 = (Il2CppClass *)(pAVar11->fields)._Groups_k__BackingField;
          context.fields._SectionId_k__BackingField = (System_String_o *)pIVar27;
          if (pIVar18 != (Il2CppClass *)0x0) {
            pIVar8 = (pIVar18->_1).image;
            if ((ulong)*(ushort *)(pIVar8 + 0x12e) != 0) {
              lVar30 = 0;
              do {
                if (*(long *)(*(long *)(pIVar8 + 0xb0) + lVar30) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar20 = (MethodInfo *)
                            (pIVar8 + (long)*(int *)(*(long *)(pIVar8 + 0xb0) + 8 + lVar30) * 0x10 + 0x138);
                  goto label_044e6481;
                }
                lVar30 = lVar30 + 0x10;
              } while ((ulong)*(ushort *)(pIVar8 + 0x12e) << 4 != lVar30);
            }
            pMVar20 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pIVar18,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            pIVar21 = (Il2CppClass *)pMVar20->virtualMethodPointer;
            iStack_34 = (*pMVar20->methodPointer)();
            context.fields._SectionId_k__BackingField = (System_String_o *)pIVar18;
            iStack_38 = iVar14;
            if (0 < iVar14) {
              pIVar21 = (Il2CppClass *)(pAVar11->fields)._Contributors_k__BackingField;
              pSVar16 = System_String__Concat_3ae5ba0(pSStack_48,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar15,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)pIVar21,pSVar16
                         ,pMVar20);
              context.fields._SectionId_k__BackingField = (System_String_o *)pIVar15;
            }
            pIVar15 = pIStack_40;
            uStack_4c = 0;
            pSVar32 = (pAVar11->fields)._Groups_k__BackingField;
            if (pSVar32 != (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)0x0) {
              do {
                uVar12 = uStack_4c;
                pSVar9 = pSVar32->klass;
                uVar3._0_1_ = (pSVar9->_2).rank;
                uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
                if ((ulong)uVar3 != 0) {
                  pIVar7 = (pSVar9->_1).interfaceOffsets;
                  lVar30 = 0;
                  do {
                    if (*(long *)((long)&pIVar7->interfaceType + lVar30) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      ppIVar19 = &pSVar9->vtable[*(int *)((long)&pIVar7->offset + lVar30)].methodPtr;
                      goto label_044e65b3;
                    }
                    lVar30 = lVar30 + 0x10;
                  } while ((ulong)uVar3 << 4 != lVar30);
                }
                ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar32,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar14 = (**ppIVar19)(pSVar32);
                pIVar21 = pIStack_40;
                if (iVar14 <= (int)uVar12) {
                  if ((iStack_34 < 1) && (iStack_38 < 1)) {
                    pSVar16 = System_String__Concat_3ae5ba0(pSStack_48,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar21,pSVar16,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar16 = System_Int32__ToString((int32_t)&uStack_4c,(MethodInfo *)0x0);
                pIVar21 = (Il2CppClass *)
                          System_String__Concat_3af7470
                                    (pSStack_48,"-group-",pSVar16,"-gap",(MethodInfo *)0x0);
                context.fields._SectionId_k__BackingField = (System_String_o *)pIVar15;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar15,(System_String_o *)pIVar21,method_01);
                pSVar32 = (pAVar11->fields)._Groups_k__BackingField;
                if (pSVar32 == (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)0x0) break;
                uVar33 = (ulong)uStack_4c;
                pSVar9 = pSVar32->klass;
                uVar4._0_1_ = (pSVar9->_2).rank;
                uVar4._1_1_ = (pSVar9->_2).minimumAlignment;
                if ((ulong)uVar4 != 0) {
                  pIVar7 = (pSVar9->_1).interfaceOffsets;
                  lVar30 = 0;
                  do {
                    if (*(long *)((long)&pIVar7->interfaceType + lVar30) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      ppIVar19 = &pSVar9->vtable[*(int *)((long)&pIVar7->offset + lVar30)].methodPtr;
                      goto label_044e64fd;
                    }
                    lVar30 = lVar30 + 0x10;
                  } while ((ulong)uVar4 << 4 != lVar30);
                }
                ppIVar19 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar32,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                pIVar21 = (Il2CppClass *)(**ppIVar19)(pSVar32,uVar33,(MethodInfo *)ppIVar19[1]);
                pSVar16 = System_Int32__ToString((int32_t)&uStack_4c,(MethodInfo *)0x0);
                pMVar20 = (MethodInfo *)0x0;
                pSVar16 = System_String__Concat_3af7150(pSStack_48,"-group-",pSVar16,(MethodInfo *)0x0);
                context.fields._SectionId_k__BackingField = (System_String_o *)pIVar15;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar15,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)pIVar21,pSVar16,pMVar20);
                uStack_4c = uStack_4c + 1;
                pSVar32 = (pAVar11->fields)._Groups_k__BackingField;
              } while (pSVar32 != (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)0x0);
            }
          }
        }
      }
    }
  }
label_044e66c5:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildContributors_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass6_0);
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"Wrap");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aec0a = '\x01';
  }
  pGVar22 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar16 = (System_String_o *)0x0;
  pGVar31 = pGVar22;
  System_Object___ctor((Il2CppObject *)pGVar22,(MethodInfo *)0x0);
  if (pGVar22 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    (pGVar22->fields)._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)pIVar21;
    il2cpp_runtime_helper_022b4080(&pGVar22->fields,pIVar21);
    (pGVar22->fields)._actions = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar22->fields)._actions,extraout_RDX);
    pSVar23 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar10 = (pGVar22->fields)._actions;
    pGVar24 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar16 = (System_String_o *)0x0;
    pGVar31 = "Row";
    pGVar25 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)0x0,
                         (System_String_o *)"FlexStart",(System_String_o *)0x0,"Wrap",10.0,pGVar24,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if ((Il2CppClass *)context.fields._SectionId_k__BackingField != (Il2CppClass *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)context.fields._SectionId_k__BackingField,
                 (System_String_o *)"default",pSVar23,(System_String_o *)pGVar10,pGVar25,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec0f = '\x01';
  }
  pGVar24 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  pSVar29 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
  pGVar22 = "Column";
  pGVar25 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar24,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar31 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar31,(System_String_o *)"default",(System_Action_AottgUi__o *)0x0,pSVar16,pGVar25,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec09 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildGroup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass5_0);
    il2cpp_runtime_helper_023445d0(&"-contributors");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-empty");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"No contributors listed.");
    il2cpp_runtime_helper_023445d0(&"-header");
    g_data_057aec09 = '\x01';
  }
  pGVar26 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pMVar20 = (MethodInfo *)0x0;
  pGVar31 = pGVar26;
  System_Object___ctor((Il2CppObject *)pGVar26,(MethodInfo *)0x0);
  if (pGVar26 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = &pGVar26->fields;
    (pGVar26->fields)._children = pSVar29;
    il2cpp_runtime_helper_022b4080(pGVar1,pSVar29);
    ppGVar28 = &(pGVar26->fields)._actions;
    (pGVar26->fields)._actions = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(ppGVar28,extraout_RDX_00);
    pSVar23 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar16 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pGVar26->fields)._actions,"-header",(MethodInfo *)0x0);
    pGVar24 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pMVar20 = "FlexStart";
    pGVar31 = "Row";
    pGVar25 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar24,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar22 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pMVar20 = "default";
      pGVar31 = pGVar22;
      pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (pGVar22,(System_String_o *)"default",pSVar23,pSVar16,pGVar25,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
         (pGVar17 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pMVar20 = *(MethodInfo **)&(pGVar1->_children->fields)._size;
        pGVar31 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&(pGVar17->fields).choiceOptionRenderer;
        (pGVar17->fields).choiceOptionRenderer = (System_String_o *)pMVar20;
        il2cpp_runtime_helper_022b4080();
        if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
           (pGVar26 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar1->_children->fields)._syncRoot,
           pGVar26 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
          pIVar21 = (Il2CppClass *)pGVar26->klass;
          uVar5._0_1_ = (pIVar21->_2).rank;
          uVar5._1_1_ = (pIVar21->_2).minimumAlignment;
          if ((ulong)uVar5 != 0) {
            pIVar7 = (pIVar21->_1).interfaceOffsets;
            lVar30 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar30) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                method_00 = (MethodInfo *)&pIVar21->vtable[*(int *)((long)&pIVar7->offset + lVar30)].methodPtr
                ;
                goto label_044e6c71;
              }
              lVar30 = lVar30 + 0x10;
            } while ((ulong)uVar5 << 4 != lVar30);
          }
          method_00 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pGVar26,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pMVar20 = (MethodInfo *)method_00->virtualMethodPointer;
          iVar14 = (*method_00->methodPointer)();
          if (iVar14 < 1) {
            pSVar16 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar28,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      (pGVar22,pSVar16,"No contributors listed.",(MethodInfo *)&"No contributors listed.");
            return;
          }
          pGVar31 = pGVar26;
          if (pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
            contributors = (pGVar1->_children->fields)._syncRoot;
            pSVar16 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar28,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      (pGVar22,(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)
                               contributors,pSVar16,method_00);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmpty_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass10_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec0e = '\x01';
  }
  pGVar26 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  pGVar22 = pGVar26;
  System_Object___ctor((Il2CppObject *)pGVar26,(MethodInfo *)0x0);
  if (pGVar26 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    (pGVar26->fields)._children = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(&pGVar26->fields,extraout_RDX_01);
    (pGVar26->fields)._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar20;
    il2cpp_runtime_helper_022b4080(&(pGVar26->fields)._actions,pMVar20);
    pSVar23 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar10 = (pGVar26->fields)._actions;
    pGVar24 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar22 = "Column";
    pGVar25 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar24,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar31 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar31,(System_String_o *)"default",pSVar23,(System_String_o *)pGVar10,pGVar25,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar22,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___cctor (const MethodInfo* method);
// 0x44e7d40

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___cctor(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  long lVar3;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  MethodInfo *method_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  System_String_Fields SVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int32_t local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (g_data_057aec15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushSidePanelOption);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsScreen);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgHoverMarqueeText);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileHover);
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"screen.main-menu");
    il2cpp_runtime_helper_023445d0(&"BACK");
    g_data_057aec15 = '\x01';
  }
  lVar3 = il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption,1);
  uVar10 = 0;
  uVar11 = 0;
  SVar8._stringLength = 0;
  SVar8._firstChar = 0;
  SVar8._6_2_ = 0;
  uVar9 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            ((Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o)ZEXT848(0),
             (System_String_o *)&stack0xffffffffffffff98,"BACK","screen.main-menu","return");
  if (lVar3 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar3 + 0x18) != 0) {
    local_28 = SVar8._stringLength;
    uStack_24 = SVar8._4_4_;
    uStack_20 = (undefined4)uVar9;
    uStack_1c = (undefined4)((ulong)uVar9 >> 0x20);
    local_18 = (undefined4)uVar10;
    uStack_14 = (undefined4)((ulong)uVar10 >> 0x20);
    uStack_10 = (undefined4)uVar11;
    uStack_c = (undefined4)((ulong)uVar11 >> 0x20);
    *(undefined4 *)(lVar3 + 0x40) = local_18;
    *(undefined4 *)(lVar3 + 0x44) = uStack_14;
    *(undefined4 *)(lVar3 + 0x48) = uStack_10;
    *(undefined4 *)(lVar3 + 0x4c) = uStack_c;
    *(int32_t *)(lVar3 + 0x30) = local_28;
    *(undefined4 *)(lVar3 + 0x34) = uStack_24;
    *(undefined4 *)(lVar3 + 0x38) = uStack_20;
    *(undefined4 *)(lVar3 + 0x3c) = uStack_1c;
    *(undefined4 *)(lVar3 + 0x20) = uVar4;
    *(undefined4 *)(lVar3 + 0x24) = uVar5;
    *(undefined4 *)(lVar3 + 0x28) = uVar6;
    *(undefined4 *)(lVar3 + 0x2c) = uVar7;
    il2cpp_runtime_helper_022b4080(lVar3 + 0x20,0);
    **(long **)(TypeInfo_AottgCreditsScreen + 0xb8) = lVar3;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsScreen + 0xb8),lVar3);
    if (*(int *)(TypeInfo_AottgPublicProfileHover + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4) == 0) {
      method_00 = TypeInfo_AottgHoverMarqueeText;
      il2cpp_runtime_helper_02337ed0();
      Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(method_00);
      return;
    }
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(TypeInfo_AottgHoverMarqueeText);
    return;
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aec29 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgHoverMarqueeText);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"AottgHoverMarqueeText");
    g_data_057aec29 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = (char)*TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer;
  }
  else {
    cVar1 = (char)*TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer;
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec16 == '\0') {
      il2cpp_runtime_helper_023445d0(&"mainMenuOverlay");
      g_data_057aec16 = '\x01';
    }
    return;
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgHoverMarqueeText",factory,(MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x44e8000

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,MethodInfo *method)

{
  if (g_data_057aec16 == '\0') {
    il2cpp_runtime_helper_023445d0(&"mainMenuOverlay");
    g_data_057aec16 = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x44e8030

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec17 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec17 = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__Build (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44e8100

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__Build
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int32_t index;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  System_String_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  Il2CppMethodPointer pIVar8;
  System_String_o *icon;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *sections;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  VirtualInvokeData *pVVar24;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *textKey;
  undefined8 *puVar25;
  Il2CppObject *__this_01;
  Il2CppClass *pIVar26;
  System_String_o *pSVar27;
  System_String_o *textKey_00;
  MethodInfo *method_00;
  undefined1 *puVar28;
  MethodInfo *pMVar29;
  System_Action_AottgUi__AottgScreenSectionContext__o **ppSVar30;
  long *plVar31;
  long lVar32;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar33;
  long *plVar34;
  long lVar35;
  System_String_o *id;
  undefined8 unaff_R13;
  ulong uVar36;
  undefined8 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  System_String_Fields SVar41;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar42;
  undefined8 uVar43;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar44;
  System_Action_AottgUi__o *pSVar45;
  int32_t iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int32_t iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  puVar28 = &stack0xffffffffffffffd8;
  if (g_data_057aec18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsScreen);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_runtime_helper_023445d0(&"CREDITS");
    il2cpp_runtime_helper_023445d0(&"credits-screen");
    g_data_057aec18 = '\x01';
  }
  pMVar29 = TypeInfo_AottgCreditsScreen;
  if (*(int *)((long)&TypeInfo_AottgCreditsScreen[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  sections = Gisketch_Aottg2UI_Game_AottgCreditsScreen__Sections(pMVar29);
  footerOptions =
       *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)TypeInfo_AottgCreditsScreen[2].virtualMethodPointer;
  uVar21 = Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_HasCategories(pMVar29);
  __this_00 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgScreenWithBrushSidePanel);
  plVar31 = (long *)__this_00;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor_4435830
            (__this_00,"CREDITS",sections,0,footerOptions,"credits-screen",(System_Action_AottgUi__o *)0x0,
             uVar21 & 0xff,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar33 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&stack0xffffffffffffff30;
  if (g_data_057aec19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsScreen);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenSection);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditCategory);
    il2cpp_runtime_helper_023445d0(&"credits");
    il2cpp_runtime_helper_023445d0(&"CREDITS");
    il2cpp_runtime_helper_023445d0(&"Credits");
    ppSVar30 = &"trophy";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec19 = '\x01';
    plVar31 = (long *)ppSVar30;
  }
  if (g_data_057aecb2 == '\0') {
    plVar31 = &TypeInfo_AottgCreditsScreenState;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecb2 = '\x01';
  }
  plVar34 = (long *)**(long **)(TypeInfo_AottgCreditsScreenState + 0xb8);
  if ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)plVar34 ==
      (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
label_044e8358:
    lVar32 = il2cpp_runtime_helper_022b2a40(TypeInfo_AottgScreenSection,1);
    textKey = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
    uVar37 = 0x44e8397;
    System_Action_object__AottgScreenSectionContext____ctor();
    pGVar44 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    pSVar45 = (System_Action_AottgUi__o *)0x0;
    pGVar42 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0;
    uVar43._0_4_ = 0;
    uVar43._4_4_ = 0;
    SVar41._stringLength = 0;
    SVar41._firstChar = 0;
    SVar41._6_2_ = 0;
    pSVar27 = (System_String_o *)0x0;
    uVar23 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
              ((Gisketch_Aottg2UI_Game_AottgScreenSection_o)
               ZEXT6480(CONCAT856(uVar37,ZEXT2456(CONCAT816("Credits",ZEXT816(0))))),
               (System_String_o *)&stack0xffffffffffffff30,"credits","CREDITS","trophy",
               (System_String_o *)textKey,(System_String_o *)0x0,0,(System_String_o *)0x0,
               (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,0,0,(MethodInfo *)0x0);
    plVar31 = (long *)pGVar33;
    if (lVar32 == 0) goto label_044e8499;
    plVar34 = (long *)pGVar33;
    if (*(int *)(lVar32 + 0x18) != 0) {
      *(undefined8 *)(lVar32 + 0x60) = 0;
      iStack_70 = SVar41._stringLength;
      uStack_6c = SVar41._4_4_;
      uStack_68 = SUB84(pSVar27,0);
      uStack_64 = (undefined4)((ulong)pSVar27 >> 0x20);
      uStack_60 = SUB84(pGVar42,0);
      uStack_5c = (undefined4)((ulong)pGVar42 >> 0x20);
      iStack_58 = (int32_t)uVar43;
      uStack_54 = SUB84(uVar43,4);
      uStack_50 = SUB84(pGVar44,0);
      uStack_4c = (undefined4)((ulong)pGVar44 >> 0x20);
      *(undefined4 *)(lVar32 + 0x50) = uStack_50;
      *(undefined4 *)(lVar32 + 0x54) = uStack_4c;
      *(int *)(lVar32 + 0x58) = (int)pSVar45;
      *(int *)(lVar32 + 0x5c) = (int)((ulong)pSVar45 >> 0x20);
      *(undefined4 *)(lVar32 + 0x40) = uStack_60;
      *(undefined4 *)(lVar32 + 0x44) = uStack_5c;
      *(int32_t *)(lVar32 + 0x48) = iStack_58;
      *(undefined4 *)(lVar32 + 0x4c) = uStack_54;
      *(int32_t *)(lVar32 + 0x30) = iStack_70;
      *(undefined4 *)(lVar32 + 0x34) = uStack_6c;
      *(undefined4 *)(lVar32 + 0x38) = uStack_68;
      *(undefined4 *)(lVar32 + 0x3c) = uStack_64;
      *(undefined4 *)(lVar32 + 0x20) = uVar23;
      *(undefined4 *)(lVar32 + 0x24) = uVar38;
      *(undefined4 *)(lVar32 + 0x28) = uVar39;
      *(undefined4 *)(lVar32 + 0x2c) = uVar40;
      il2cpp_runtime_helper_022b4080(lVar32 + 0x20,0);
      return;
    }
  }
  else {
    pSVar27 = (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)plVar34)->fields)._id;
    textKey = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)plVar34;
    if (pSVar27 != (System_String_o *)0x0) {
      pSVar6 = pSVar27->klass;
      uVar2._0_1_ = (pSVar6->_2).rank;
      uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar32 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar32) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
            pVVar24 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar32);
            goto label_044e8321;
          }
          lVar32 = lVar32 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar32);
      }
      pVVar24 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar27,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8321:
      iVar22 = (*pVVar24->methodPtr)(pSVar27,pVVar24->method);
      if (0 < iVar22) {
        if (*(int *)((long)&TypeInfo_AottgCreditsScreen[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        textKey = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0;
        goto Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections;
      }
      goto label_044e8358;
    }
label_044e8499:
    plVar34 = plVar31;
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2ca0();
  puVar28 = &stack0xffffffffffffff28;
  if (g_data_057aec28 == '\0') {
    plVar34 = &TypeInfo_IReadOnlyCollection_AottgCreditCategory;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec28 = '\x01';
  }
  if (g_data_057aecb2 == '\0') {
    plVar34 = &TypeInfo_AottgCreditsScreenState;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecb2 = '\x01';
  }
  if (**(long **)(TypeInfo_AottgCreditsScreenState + 0xb8) == 0) {
    return;
  }
  plVar31 = *(long **)(**(long **)(TypeInfo_AottgCreditsScreenState + 0xb8) + 0x10);
  if (plVar31 != (long *)0x0) {
    lVar32 = *plVar31;
    if ((ulong)*(ushort *)(lVar32 + 0x12e) != 0) {
      lVar35 = 0;
      do {
        if (*(long *)(*(long *)(lVar32 + 0xb0) + lVar35) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
          puVar25 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar32 + 0xb0) + 8 + lVar35) * 0x10 + lVar32 + 0x138);
          goto label_044e8575;
        }
        lVar35 = lVar35 + 0x10;
      } while ((ulong)*(ushort *)(lVar32 + 0x12e) << 4 != lVar35);
    }
    puVar25 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar31,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8575:
    (*(code *)*puVar25)(plVar31,puVar25[1]);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0;
Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections:
  *(ulong *)(puVar28 + -8) = (ulong)uVar21;
  *(Gisketch_Aottg2UI_Game_AottgScreenSection_array **)(puVar28 + -0x10) = sections;
  *(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o **)(puVar28 + -0x18) = textKey;
  *(undefined8 *)(puVar28 + -0x20) = unaff_R13;
  *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)(puVar28 + -0x28) = footerOptions;
  *(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o **)(puVar28 + -0x30) = __this_00;
  if (g_data_057aec1a == '\0') {
    *(undefined8 *)(puVar28 + -0xe0) = 0x44e85b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi_AottgScreenSectionContext);
    *(undefined8 *)(puVar28 + -0xe0) = 0x44e85c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenSection);
    *(undefined8 *)(puVar28 + -0xe0) = 0x44e85d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditCategory);
    *(undefined8 *)(puVar28 + -0xe0) = 0x44e85dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditCategory);
    *(undefined8 *)(puVar28 + -0xe0) = 0x44e85e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreditSections_b__0);
    *(undefined8 *)(puVar28 + -0xe0) = 0x44e85f5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass9_0);
    *(undefined8 *)(puVar28 + -0xe0) = 0x44e8601;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec1a = '\x01';
  }
  if (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)plVar34 !=
       (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) &&
     (pSVar27 = (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)plVar34)->fields)._id,
     pSVar27 != (System_String_o *)0x0)) {
    pSVar6 = pSVar27->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar32 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar32) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
          pVVar24 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar32);
          goto label_044e8681;
        }
        lVar32 = lVar32 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar32);
    }
    *(undefined8 *)(puVar28 + -0xe0) = 0x44e8669;
    pVVar24 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar27,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8681:
    pMVar29 = pVVar24->method;
    pIVar8 = pVVar24->methodPtr;
    *(undefined8 *)(puVar28 + -0xe0) = 0x44e868a;
    uVar23 = (*pIVar8)(pSVar27,pMVar29);
    *(undefined8 *)(puVar28 + -0xe0) = 0x44e869b;
    lVar32 = il2cpp_runtime_helper_022b2a40(TypeInfo_AottgScreenSection,uVar23);
    pSVar27 = (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)plVar34)->fields)._id;
    if (pSVar27 != (System_String_o *)0x0) {
      uVar36 = 0;
      *(long **)(puVar28 + -0xd0) = plVar34;
      do {
        pSVar6 = pSVar27->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar35 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar35) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
              pVVar24 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar35);
              goto label_044e8723;
            }
            lVar35 = lVar35 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar35);
        }
        *(undefined8 *)(puVar28 + -0xe0) = 0x44e8709;
        pVVar24 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar27,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8723:
        pIVar8 = pVVar24->methodPtr;
        *(undefined8 *)(puVar28 + -0xe0) = 0x44e872c;
        iVar22 = (*pIVar8)(pSVar27);
        if ((long)iVar22 <= (long)uVar36) {
          return;
        }
        *(undefined8 *)(puVar28 + -0xe0) = 0x44e8746;
        __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass9_0);
        *(undefined8 *)(puVar28 + -0xe0) = 0x44e8753;
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Il2CppObject *)0x0) break;
        *(int *)&__this_01[1].monitor = (int)uVar36;
        pSVar27 = (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)plVar34)->fields)._id;
        if (pSVar27 == (System_String_o *)0x0) break;
        pSVar6 = pSVar27->klass;
        uVar5._0_1_ = (pSVar6->_2).rank;
        uVar5._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar35 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar35) == TypeInfo_IReadOnlyList_AottgCreditCategory) {
              pVVar24 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar35);
              goto label_044e87d3;
            }
            lVar35 = lVar35 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar35);
        }
        *(undefined8 *)(puVar28 + -0xe0) = 0x44e87b9;
        pVVar24 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar27,TypeInfo_IReadOnlyList_AottgCreditCategory,0);
label_044e87d3:
        pMVar29 = pVVar24->method;
        pIVar8 = pVVar24->methodPtr;
        *(undefined8 *)(puVar28 + -0xe0) = 0x44e87df;
        pIVar26 = (Il2CppClass *)(*pIVar8)(pSVar27,uVar36 & 0xffffffff,pMVar29);
        __this_01[1].klass = pIVar26;
        *(undefined8 *)(puVar28 + -0xe0) = 0x44e87f2;
        il2cpp_runtime_helper_022b4080(__this_01 + 1,pIVar26);
        if (__this_01[1].klass == (Il2CppClass *)0x0) break;
        pSVar27 = (System_String_o *)((__this_01[1].klass)->_1).name;
        index = *(int32_t *)&__this_01[1].monitor;
        *(undefined8 *)(puVar28 + -0xe0) = 0x44e880b;
        pSVar27 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId(pSVar27,index,method_00);
        if (__this_01[1].klass == (Il2CppClass *)0x0) break;
        icon = (System_String_o *)((__this_01[1].klass)->_1).name;
        *(undefined8 *)(puVar28 + -0xe0) = 0x44e882e;
        textKey_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
        *(undefined8 *)(puVar28 + -0xe0) = 0x44e8848;
        System_Action_object__AottgScreenSectionContext____ctor();
        if (__this_01[1].klass == (Il2CppClass *)0x0) break;
        pcVar9 = ((__this_01[1].klass)->_1).name;
        *(undefined8 *)(puVar28 + -0x98) = 0;
        *(undefined8 *)(puVar28 + -0x90) = 0;
        *(undefined8 *)(puVar28 + -0xa8) = 0;
        *(undefined8 *)(puVar28 + -0xa0) = 0;
        *(undefined8 *)(puVar28 + -0xb8) = 0;
        *(undefined8 *)(puVar28 + -0xb0) = 0;
        *(undefined8 *)(puVar28 + -200) = 0;
        *(undefined8 *)(puVar28 + -0xc0) = 0;
        *(undefined8 *)(puVar28 + -0x88) = 0;
        id = (System_String_o *)(puVar28 + -200);
        *(undefined8 *)(puVar28 + -0xe8) = 0;
        *(undefined8 *)(puVar28 + -0xf0) = 1;
        *(undefined8 *)(puVar28 + -0xf8) = 1;
        *(undefined8 *)(puVar28 + -0x100) = 0;
        *(char **)(puVar28 + -0x108) = pcVar9;
        *(undefined8 *)(puVar28 + -0x110) = 0;
        *(undefined8 *)(puVar28 + -0x118) = 0;
        *(undefined8 *)(puVar28 + -0x120) = 0x44e88ad;
        Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                  ((Gisketch_Aottg2UI_Game_AottgScreenSection_o)
                   *(Gisketch_Aottg2UI_Game_AottgScreenSection_Fields *)(puVar28 + -0x118),id,pSVar27,icon,
                   "trophy",textKey_00,(System_String_o *)0x0,*(bool_conflict *)(puVar28 + -200),
                   *(System_String_o **)(puVar28 + -0xc0),
                   *(System_Action_AottgUi__AottgScreenSectionContext__o **)(puVar28 + -0xb8),
                   *(bool_conflict *)(puVar28 + -0xb0),*(bool_conflict *)(puVar28 + -0xa8),
                   *(MethodInfo **)(puVar28 + -0xa0));
        if (lVar32 == 0) break;
        *(undefined8 *)(puVar28 + -0x38) = *(undefined8 *)(puVar28 + -0x88);
        *(undefined4 *)(puVar28 + -0x48) = *(undefined4 *)(puVar28 + -0x98);
        *(undefined4 *)(puVar28 + -0x44) = *(undefined4 *)(puVar28 + -0x94);
        *(undefined4 *)(puVar28 + -0x40) = *(undefined4 *)(puVar28 + -0x90);
        *(undefined4 *)(puVar28 + -0x3c) = *(undefined4 *)(puVar28 + -0x8c);
        *(undefined4 *)(puVar28 + -0x58) = *(undefined4 *)(puVar28 + -0xa8);
        *(undefined4 *)(puVar28 + -0x54) = *(undefined4 *)(puVar28 + -0xa4);
        *(undefined4 *)(puVar28 + -0x50) = *(undefined4 *)(puVar28 + -0xa0);
        *(undefined4 *)(puVar28 + -0x4c) = *(undefined4 *)(puVar28 + -0x9c);
        *(undefined4 *)(puVar28 + -0x68) = *(undefined4 *)(puVar28 + -0xb8);
        *(undefined4 *)(puVar28 + -100) = *(undefined4 *)(puVar28 + -0xb4);
        *(undefined4 *)(puVar28 + -0x60) = *(undefined4 *)(puVar28 + -0xb0);
        *(undefined4 *)(puVar28 + -0x5c) = *(undefined4 *)(puVar28 + -0xac);
        *(undefined4 *)(puVar28 + -0x78) = *(undefined4 *)(puVar28 + -200);
        *(undefined4 *)(puVar28 + -0x74) = *(undefined4 *)(puVar28 + -0xc4);
        *(undefined4 *)(puVar28 + -0x70) = *(undefined4 *)(puVar28 + -0xc0);
        *(undefined4 *)(puVar28 + -0x6c) = *(undefined4 *)(puVar28 + -0xbc);
        plVar34 = *(long **)(puVar28 + -0xd0);
        if (*(uint *)(lVar32 + 0x18) <= uVar36) {
          *(undefined8 *)(puVar28 + -0xe0) = 0x44e898d;
          il2cpp_runtime_helper_022b2ca0();
          System_Object___ctor((Il2CppObject *)id,(MethodInfo *)0x0);
          return;
        }
        *(undefined8 *)(lVar32 + 0x60 + uVar36 * 0x48) = *(undefined8 *)(puVar28 + -0x38);
        uVar23 = *(undefined4 *)(puVar28 + -0x78);
        uVar38 = *(undefined4 *)(puVar28 + -0x74);
        uVar39 = *(undefined4 *)(puVar28 + -0x70);
        uVar40 = *(undefined4 *)(puVar28 + -0x6c);
        uVar10 = *(undefined4 *)(puVar28 + -0x68);
        uVar11 = *(undefined4 *)(puVar28 + -100);
        uVar12 = *(undefined4 *)(puVar28 + -0x60);
        uVar13 = *(undefined4 *)(puVar28 + -0x5c);
        uVar14 = *(undefined4 *)(puVar28 + -0x58);
        uVar15 = *(undefined4 *)(puVar28 + -0x54);
        uVar16 = *(undefined4 *)(puVar28 + -0x50);
        uVar17 = *(undefined4 *)(puVar28 + -0x4c);
        uVar18 = *(undefined4 *)(puVar28 + -0x44);
        uVar19 = *(undefined4 *)(puVar28 + -0x40);
        uVar20 = *(undefined4 *)(puVar28 + -0x3c);
        puVar1 = (undefined4 *)(lVar32 + 0x50 + uVar36 * 0x48);
        *puVar1 = *(undefined4 *)(puVar28 + -0x48);
        puVar1[1] = uVar18;
        puVar1[2] = uVar19;
        puVar1[3] = uVar20;
        puVar1 = (undefined4 *)(lVar32 + 0x40 + uVar36 * 0x48);
        *puVar1 = uVar14;
        puVar1[1] = uVar15;
        puVar1[2] = uVar16;
        puVar1[3] = uVar17;
        puVar1 = (undefined4 *)(lVar32 + 0x30 + uVar36 * 0x48);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        puVar1[2] = uVar12;
        puVar1[3] = uVar13;
        puVar1 = (undefined4 *)(lVar32 + 0x20 + uVar36 * 0x48);
        *puVar1 = uVar23;
        puVar1[1] = uVar38;
        puVar1[2] = uVar39;
        puVar1[3] = uVar40;
        *(undefined8 *)(puVar28 + -0xe0) = 0x44e895d;
        il2cpp_runtime_helper_022b4080(lVar32 + 0x20 + uVar36 * 0x48,0);
        uVar36 = uVar36 + 1;
        pSVar27 = (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)plVar34)->fields)._id;
      } while (pSVar27 != (System_String_o *)0x0);
    }
  }
  *(undefined8 *)(puVar28 + -0xe0) = 0x44e8973;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$Sections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgCreditsScreen__Sections (const MethodInfo* method);
// 0x44e81f0

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__Sections(MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Action_AottgUi__AottgScreenSectionContext__o **ppSVar2;
  int32_t index;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  System_String_o *icon;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  MethodInfo *textKey;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar20;
  Il2CppObject *__this;
  Il2CppClass *pIVar21;
  System_String_o *pSVar22;
  System_String_o *textKey_00;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *extraout_RAX;
  MethodInfo *method_00;
  undefined8 unaff_RBX;
  System_String_Fields SVar23;
  undefined8 unaff_RBP;
  long lVar24;
  MethodInfo *pMVar25;
  MethodInfo *pMVar26;
  System_String_o *id;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulong uVar27;
  MethodInfo *unaff_R14;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *unaff_R15;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  char *pcVar32;
  Il2CppType *pIVar33;
  Il2CppType **ppIVar34;
  _union_13 _Var35;
  int32_t local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pMVar25 = (MethodInfo *)&stack0xffffffffffffff58;
  if (g_data_057aec19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsScreen);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenSection);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditCategory);
    il2cpp_runtime_helper_023445d0(&"credits");
    il2cpp_runtime_helper_023445d0(&"CREDITS");
    il2cpp_runtime_helper_023445d0(&"Credits");
    method = (MethodInfo *)&"trophy";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec19 = '\x01';
  }
  if (g_data_057aecb2 == '\0') {
    method = (MethodInfo *)&TypeInfo_AottgCreditsScreenState;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecb2 = '\x01';
  }
  pMVar26 = (MethodInfo *)**(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8);
  if (pMVar26 == (MethodInfo *)0x0) {
label_044e8358:
    pGVar20 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgScreenSection,1);
    textKey = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
    uVar28 = 0x44e8397;
    System_Action_object__AottgScreenSectionContext____ctor();
    ppIVar34 = (Il2CppType **)0x0;
    _Var35.rgctx_data = (Il2CppRGCTXData *)0x0;
    pIVar21 = (Il2CppClass *)0x0;
    pIVar33 = (Il2CppType *)0x0;
    SVar23._stringLength = 0;
    SVar23._firstChar = 0;
    SVar23._6_2_ = 0;
    pcVar32 = (char *)0x0;
    uVar18 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
              ((Gisketch_Aottg2UI_Game_AottgScreenSection_o)
               ZEXT6480(CONCAT856(uVar28,ZEXT2456(CONCAT816("Credits",ZEXT816(0))))),
               (System_String_o *)&stack0xffffffffffffff58,"credits","CREDITS","trophy",
               (System_String_o *)textKey,(System_String_o *)0x0,0,(System_String_o *)0x0,
               (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,0,0,(MethodInfo *)0x0);
    method = pMVar25;
    if (pGVar20 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto label_044e8499;
    pMVar26 = pMVar25;
    unaff_R14 = textKey;
    if ((int)pGVar20->max_length != 0) {
      pGVar20->m_Items[0].fields.AutoAddKeywords = 0;
      pGVar20->m_Items[0].fields.HideSearch = 0;
      local_48 = SVar23._stringLength;
      uStack_44 = SVar23._4_4_;
      uStack_40 = SUB84(pcVar32,0);
      uStack_3c = (undefined4)((ulong)pcVar32 >> 0x20);
      local_38 = SUB84(pIVar21,0);
      uStack_34 = (undefined4)((ulong)pIVar21 >> 0x20);
      uStack_30 = SUB84(pIVar33,0);
      uStack_2c = (undefined4)((ulong)pIVar33 >> 0x20);
      local_28 = SUB84(ppIVar34,0);
      uStack_24 = (undefined4)((ulong)ppIVar34 >> 0x20);
      uStack_20 = _Var35._0_4_;
      uStack_1c = _Var35._4_4_;
      *(undefined4 *)&pGVar20->m_Items[0].fields.SearchTitle = local_28;
      *(undefined4 *)((long)&pGVar20->m_Items[0].fields.SearchTitle + 4) = uStack_24;
      *(undefined4 *)&pGVar20->m_Items[0].fields.Keywords = uStack_20;
      *(undefined4 *)((long)&pGVar20->m_Items[0].fields.Keywords + 4) = uStack_1c;
      *(undefined4 *)&pGVar20->m_Items[0].fields.TextKey = local_38;
      *(undefined4 *)((long)&pGVar20->m_Items[0].fields.TextKey + 4) = uStack_34;
      *(undefined4 *)&pGVar20->m_Items[0].fields.Icon = uStack_30;
      *(undefined4 *)((long)&pGVar20->m_Items[0].fields.Icon + 4) = uStack_2c;
      *(int32_t *)&pGVar20->m_Items[0].fields.Id = local_48;
      *(undefined4 *)((long)&pGVar20->m_Items[0].fields.Id + 4) = uStack_44;
      *(undefined4 *)&pGVar20->m_Items[0].fields.Label = uStack_40;
      *(undefined4 *)((long)&pGVar20->m_Items[0].fields.Label + 4) = uStack_3c;
      *(undefined4 *)&pGVar20->m_Items[0].fields._buildContent = uVar18;
      *(undefined4 *)((long)&pGVar20->m_Items[0].fields._buildContent + 4) = uVar29;
      *(undefined4 *)&pGVar20->m_Items[0].fields._buildHeaderActions = uVar30;
      *(undefined4 *)((long)&pGVar20->m_Items[0].fields._buildHeaderActions + 4) = uVar31;
      il2cpp_runtime_helper_022b4080(pGVar20->m_Items,0);
      return pGVar20;
    }
  }
  else {
    SVar23 = *(System_String_Fields *)&pMVar26->invoker_method;
    textKey = pMVar26;
    if (SVar23 != (System_String_Fields)0x0) {
      lVar3 = *(long *)SVar23;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar24 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar24) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
            puVar19 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar24) * 0x10 + lVar3 + 0x138);
            goto label_044e8321;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar24);
      }
      puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar23,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8321:
      iVar17 = (*(code *)*puVar19)(SVar23,puVar19[1]);
      if (0 < iVar17) {
        if (*(int *)(TypeInfo_AottgCreditsScreen + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        goto Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections;
      }
      goto label_044e8358;
    }
label_044e8499:
    pMVar26 = method;
    il2cpp_runtime_helper_022b2c90();
    unaff_R14 = textKey;
  }
  il2cpp_runtime_helper_022b2ca0();
  register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffff50;
  if (g_data_057aec28 == '\0') {
    pMVar26 = (MethodInfo *)&TypeInfo_IReadOnlyCollection_AottgCreditCategory;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec28 = '\x01';
  }
  if (g_data_057aecb2 == '\0') {
    pMVar26 = (MethodInfo *)&TypeInfo_AottgCreditsScreenState;
    il2cpp_runtime_helper_023445d0();
    g_data_057aecb2 = '\x01';
  }
  if (**(long **)(TypeInfo_AottgCreditsScreenState + 0xb8) == 0) {
    return (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0;
  }
  plVar4 = *(long **)(**(long **)(TypeInfo_AottgCreditsScreenState + 0xb8) + 0x10);
  if (plVar4 != (long *)0x0) {
    lVar3 = *plVar4;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar24 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar24) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
          puVar19 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar24) * 0x10 + lVar3 + 0x138);
          goto label_044e8575;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar24);
    }
    puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar4,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8575:
    uVar28 = (*(code *)*puVar19)(plVar4,puVar19[1]);
    return (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)
           CONCAT71((int7)((ulong)uVar28 >> 8),0 < (int)uVar28);
  }
  il2cpp_runtime_helper_022b2c90();
  unaff_RBX = 0;
Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(Gisketch_Aottg2UI_Game_AottgScreenSection_array **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(MethodInfo **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x30) = unaff_RBX;
  if (g_data_057aec1a == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e85b9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi_AottgScreenSectionContext);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e85c5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenSection);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e85d1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditCategory);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e85dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditCategory);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e85e9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreditSections_b__0);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e85f5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass9_0);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e8601;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec1a = '\x01';
  }
  if ((pMVar26 != (MethodInfo *)0x0) &&
     (SVar23 = *(System_String_Fields *)&pMVar26->invoker_method, SVar23 != (System_String_Fields)0x0)) {
    lVar3 = *(long *)SVar23;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar24 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar24) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
          puVar19 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar24) * 0x10 + lVar3 + 0x138);
          goto label_044e8681;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar24);
    }
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e8669;
    puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar23,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8681:
    uVar28 = puVar19[1];
    pcVar5 = (code *)*puVar19;
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e868a;
    uVar18 = (*pcVar5)(SVar23,uVar28);
    *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e869b;
    pGVar20 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgScreenSection,uVar18);
    SVar23 = *(System_String_Fields *)&pMVar26->invoker_method;
    if (SVar23 != (System_String_Fields)0x0) {
      uVar27 = 0;
      *(MethodInfo **)((long)register0x00000020 + -0xd0) = pMVar26;
      do {
        lVar3 = *(long *)SVar23;
        if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
          lVar24 = 0;
          do {
            if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar24) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
              puVar19 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar24) * 0x10 + lVar3 + 0x138);
              goto label_044e8723;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar24);
        }
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e8709;
        puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar23,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8723:
        pcVar5 = (code *)*puVar19;
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e872c;
        iVar17 = (*pcVar5)(SVar23);
        if ((long)iVar17 <= (long)uVar27) {
          return pGVar20;
        }
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e8746;
        __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass9_0);
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e8753;
        System_Object___ctor(__this,(MethodInfo *)0x0);
        unaff_R15 = pGVar20;
        if (__this == (Il2CppObject *)0x0) break;
        *(int *)&__this[1].monitor = (int)uVar27;
        SVar23 = *(System_String_Fields *)&pMVar26->invoker_method;
        if (SVar23 == (System_String_Fields)0x0) break;
        lVar3 = *(long *)SVar23;
        if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
          lVar24 = 0;
          do {
            if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar24) == TypeInfo_IReadOnlyList_AottgCreditCategory) {
              puVar19 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar24) * 0x10 + lVar3 + 0x138);
              goto label_044e87d3;
            }
            lVar24 = lVar24 + 0x10;
          } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar24);
        }
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e87b9;
        puVar19 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar23,TypeInfo_IReadOnlyList_AottgCreditCategory,0);
label_044e87d3:
        uVar28 = puVar19[1];
        pcVar5 = (code *)*puVar19;
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e87df;
        pIVar21 = (Il2CppClass *)(*pcVar5)(SVar23,uVar27 & 0xffffffff,uVar28);
        __this[1].klass = pIVar21;
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e87f2;
        il2cpp_runtime_helper_022b4080(__this + 1,pIVar21);
        if (__this[1].klass == (Il2CppClass *)0x0) break;
        pSVar22 = (System_String_o *)((__this[1].klass)->_1).name;
        index = *(int32_t *)&__this[1].monitor;
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e880b;
        pSVar22 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId(pSVar22,index,method_00);
        if (__this[1].klass == (Il2CppClass *)0x0) break;
        icon = (System_String_o *)((__this[1].klass)->_1).name;
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e882e;
        textKey_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e8848;
        System_Action_object__AottgScreenSectionContext____ctor();
        if (__this[1].klass == (Il2CppClass *)0x0) break;
        pcVar32 = ((__this[1].klass)->_1).name;
        *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
        *(undefined8 *)((long)register0x00000020 + -200) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
        id = (System_String_o *)((long)register0x00000020 + -200);
        *(undefined8 *)((long)register0x00000020 + -0xe8) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xf0) = 1;
        *(undefined8 *)((long)register0x00000020 + -0xf8) = 1;
        *(undefined8 *)((long)register0x00000020 + -0x100) = 0;
        *(char **)((long)register0x00000020 + -0x108) = pcVar32;
        *(undefined8 *)((long)register0x00000020 + -0x110) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x118) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x120) = 0x44e88ad;
        Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                  ((Gisketch_Aottg2UI_Game_AottgScreenSection_o)
                   *(Gisketch_Aottg2UI_Game_AottgScreenSection_Fields *)((long)register0x00000020 + -0x118),id
                   ,pSVar22,icon,"trophy",textKey_00,(System_String_o *)0x0,
                   *(bool_conflict *)((long)register0x00000020 + -200),
                   *(System_String_o **)((long)register0x00000020 + -0xc0),
                   *(System_Action_AottgUi__AottgScreenSectionContext__o **)((long)register0x00000020 + -0xb8)
                   ,*(bool_conflict *)((long)register0x00000020 + -0xb0),
                   *(bool_conflict *)((long)register0x00000020 + -0xa8),
                   *(MethodInfo **)((long)register0x00000020 + -0xa0));
        if (pGVar20 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
        *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)((long)register0x00000020 + -0x88);
        *(undefined4 *)((long)register0x00000020 + -0x48) = *(undefined4 *)((long)register0x00000020 + -0x98);
        *(undefined4 *)((long)register0x00000020 + -0x44) = *(undefined4 *)((long)register0x00000020 + -0x94);
        *(undefined4 *)((long)register0x00000020 + -0x40) = *(undefined4 *)((long)register0x00000020 + -0x90);
        *(undefined4 *)((long)register0x00000020 + -0x3c) = *(undefined4 *)((long)register0x00000020 + -0x8c);
        *(undefined4 *)((long)register0x00000020 + -0x58) = *(undefined4 *)((long)register0x00000020 + -0xa8);
        *(undefined4 *)((long)register0x00000020 + -0x54) = *(undefined4 *)((long)register0x00000020 + -0xa4);
        *(undefined4 *)((long)register0x00000020 + -0x50) = *(undefined4 *)((long)register0x00000020 + -0xa0);
        *(undefined4 *)((long)register0x00000020 + -0x4c) = *(undefined4 *)((long)register0x00000020 + -0x9c);
        *(undefined4 *)((long)register0x00000020 + -0x68) = *(undefined4 *)((long)register0x00000020 + -0xb8);
        *(undefined4 *)((long)register0x00000020 + -100) = *(undefined4 *)((long)register0x00000020 + -0xb4);
        *(undefined4 *)((long)register0x00000020 + -0x60) = *(undefined4 *)((long)register0x00000020 + -0xb0);
        *(undefined4 *)((long)register0x00000020 + -0x5c) = *(undefined4 *)((long)register0x00000020 + -0xac);
        *(undefined4 *)((long)register0x00000020 + -0x78) = *(undefined4 *)((long)register0x00000020 + -200);
        *(undefined4 *)((long)register0x00000020 + -0x74) = *(undefined4 *)((long)register0x00000020 + -0xc4);
        *(undefined4 *)((long)register0x00000020 + -0x70) = *(undefined4 *)((long)register0x00000020 + -0xc0);
        *(undefined4 *)((long)register0x00000020 + -0x6c) = *(undefined4 *)((long)register0x00000020 + -0xbc);
        pMVar26 = *(MethodInfo **)((long)register0x00000020 + -0xd0);
        if ((uint)pGVar20->max_length <= uVar27) {
          *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e898d;
          il2cpp_runtime_helper_022b2ca0();
          System_Object___ctor((Il2CppObject *)id,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        *(undefined8 *)(&pGVar20->m_Items[0].fields.AutoAddKeywords + uVar27 * 0x12) =
             *(undefined8 *)((long)register0x00000020 + -0x38);
        uVar18 = *(undefined4 *)((long)register0x00000020 + -0x78);
        uVar29 = *(undefined4 *)((long)register0x00000020 + -0x74);
        uVar30 = *(undefined4 *)((long)register0x00000020 + -0x70);
        uVar31 = *(undefined4 *)((long)register0x00000020 + -0x6c);
        uVar6 = *(undefined4 *)((long)register0x00000020 + -0x68);
        uVar7 = *(undefined4 *)((long)register0x00000020 + -100);
        uVar8 = *(undefined4 *)((long)register0x00000020 + -0x60);
        uVar9 = *(undefined4 *)((long)register0x00000020 + -0x5c);
        uVar10 = *(undefined4 *)((long)register0x00000020 + -0x58);
        uVar11 = *(undefined4 *)((long)register0x00000020 + -0x54);
        uVar12 = *(undefined4 *)((long)register0x00000020 + -0x50);
        uVar13 = *(undefined4 *)((long)register0x00000020 + -0x4c);
        uVar14 = *(undefined4 *)((long)register0x00000020 + -0x44);
        uVar15 = *(undefined4 *)((long)register0x00000020 + -0x40);
        uVar16 = *(undefined4 *)((long)register0x00000020 + -0x3c);
        ppSVar1 = &pGVar20->m_Items[0].fields.SearchTitle + uVar27 * 9;
        *(undefined4 *)ppSVar1 = *(undefined4 *)((long)register0x00000020 + -0x48);
        *(undefined4 *)((long)ppSVar1 + 4) = uVar14;
        *(undefined4 *)(ppSVar1 + 1) = uVar15;
        *(undefined4 *)((long)ppSVar1 + 0xc) = uVar16;
        ppSVar1 = &pGVar20->m_Items[0].fields.TextKey + uVar27 * 9;
        *(undefined4 *)ppSVar1 = uVar10;
        *(undefined4 *)((long)ppSVar1 + 4) = uVar11;
        *(undefined4 *)(ppSVar1 + 1) = uVar12;
        *(undefined4 *)((long)ppSVar1 + 0xc) = uVar13;
        ppSVar1 = &pGVar20->m_Items[0].fields.Id + uVar27 * 9;
        *(undefined4 *)ppSVar1 = uVar6;
        *(undefined4 *)((long)ppSVar1 + 4) = uVar7;
        *(undefined4 *)(ppSVar1 + 1) = uVar8;
        *(undefined4 *)((long)ppSVar1 + 0xc) = uVar9;
        ppSVar2 = &pGVar20->m_Items[0].fields._buildContent + uVar27 * 9;
        *(undefined4 *)ppSVar2 = uVar18;
        *(undefined4 *)((long)ppSVar2 + 4) = uVar29;
        *(undefined4 *)(ppSVar2 + 1) = uVar30;
        *(undefined4 *)((long)ppSVar2 + 0xc) = uVar31;
        *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e895d;
        il2cpp_runtime_helper_022b4080(&pGVar20->m_Items[0].fields._buildContent + uVar27 * 9,0);
        uVar27 = uVar27 + 1;
        SVar23 = *(System_String_Fields *)&pMVar26->invoker_method;
      } while (SVar23 != (System_String_Fields)0x0);
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0x44e8973;
  il2cpp_runtime_helper_022b2c90();
  return unaff_R15;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$CreditSections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x44e8590

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Action_AottgUi__AottgScreenSectionContext__o **ppSVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Generic_IReadOnlyList_AottgCreditCategory__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_String_o *icon;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this;
  undefined4 uVar8;
  int iVar9;
  VirtualInvokeData *pVVar10;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar11;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar12;
  System_String_o *label;
  System_String_o *textKey;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *extraout_RAX;
  MethodInfo *method_00;
  System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *pSVar13;
  long lVar14;
  System_String_o *id;
  ulong uVar15;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *unaff_R15;
  undefined8 uVar16;
  undefined8 in_stack_ffffffffffffff28;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar17;
  void *pvVar18;
  System_String_Fields SVar19;
  undefined8 uVar20;
  
  if (g_data_057aec1a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi_AottgScreenSectionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenSection);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditCategory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditCategory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreditSections_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass9_0);
    il2cpp_runtime_helper_023445d0();
    g_data_057aec1a = '\x01';
  }
  if ((credits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) &&
     (pSVar13 = (credits->fields)._Categories_k__BackingField,
     pSVar13 != (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)0x0)) {
    pSVar6 = pSVar13->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
          pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
          goto label_044e8681;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar14);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8681:
    uVar8 = (*pVVar10->methodPtr)(pSVar13,pVVar10->method);
    pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgScreenSection,uVar8);
    pSVar13 = (credits->fields)._Categories_k__BackingField;
    if (pSVar13 != (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)0x0) {
      uVar15 = 0;
      pAVar17 = credits;
      do {
        pSVar6 = pSVar13->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
              pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
              goto label_044e8723;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar14);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
label_044e8723:
        iVar9 = (*pVVar10->methodPtr)(pSVar13);
        if ((long)iVar9 <= (long)uVar15) {
          return pGVar11;
        }
        __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass9_0);
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        unaff_R15 = pGVar11;
        if (__this_00 == (Il2CppObject *)0x0) break;
        *(int *)&__this_00[1].monitor = (int)uVar15;
        pSVar13 = (credits->fields)._Categories_k__BackingField;
        if (pSVar13 == (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)0x0) break;
        pSVar6 = pSVar13->klass;
        uVar5._0_1_ = (pSVar6->_2).rank;
        uVar5._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IReadOnlyList_AottgCreditCategory) {
              pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
              credits = pAVar17;
              goto label_044e87d3;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar14);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar13,TypeInfo_IReadOnlyList_AottgCreditCategory,0);
        credits = pAVar17;
label_044e87d3:
        pIVar12 = (Il2CppClass *)(*pVVar10->methodPtr)(pSVar13,uVar15 & 0xffffffff,pVVar10->method);
        __this_00[1].klass = pIVar12;
        il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar12);
        if (__this_00[1].klass == (Il2CppClass *)0x0) break;
        label = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId
                          ((System_String_o *)((__this_00[1].klass)->_1).name,
                           *(int32_t *)&__this_00[1].monitor,method_00);
        if (__this_00[1].klass == (Il2CppClass *)0x0) break;
        icon = (System_String_o *)((__this_00[1].klass)->_1).name;
        textKey = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi_AottgScreenSectionContext);
        uVar16 = 0x44e8848;
        System_Action_object__AottgScreenSectionContext____ctor();
        if (__this_00[1].klass == (Il2CppClass *)0x0) break;
        uVar20 = 0;
        SVar19._stringLength = 0;
        SVar19._firstChar = 0;
        SVar19._6_2_ = 0;
        pvVar18 = (void *)0x0;
        id = (System_String_o *)&stack0xffffffffffffff38;
        __this.fields.Id = (System_String_o *)((__this_00[1].klass)->_1).name;
        __this.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
        __this.fields._buildHeaderActions = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
        __this.fields.Label = (System_String_o *)0x0;
        __this.fields.TextKey = (System_String_o *)0x1;
        __this.fields.Icon = (System_String_o *)0x1;
        __this.fields.SearchTitle = (System_String_o *)0x0;
        __this.fields.Keywords = (System_String_o *)uVar16;
        __this.fields.AutoAddKeywords = (int)in_stack_ffffffffffffff28;
        __this.fields.HideSearch = (int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
        __this.fields._72_8_ = credits;
        Gisketch_Aottg2UI_Game_AottgScreenSection___ctor_44353e0
                  (__this,id,label,icon,"trophy",textKey,(System_String_o *)0x0,0,(System_String_o *)0x0,
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,0,0,(MethodInfo *)0x0);
        if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
        if ((uint)pGVar11->max_length <= uVar15) {
          il2cpp_runtime_helper_022b2ca0();
          System_Object___ctor((Il2CppObject *)id,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        *(undefined8 *)(&pGVar11->m_Items[0].fields.AutoAddKeywords + uVar15 * 0x12) = 0;
        ppSVar1 = &pGVar11->m_Items[0].fields.SearchTitle + uVar15 * 9;
        *(undefined4 *)ppSVar1 = 0;
        *(undefined4 *)((long)ppSVar1 + 4) = 0;
        *(undefined4 *)(ppSVar1 + 1) = 0;
        *(undefined4 *)((long)ppSVar1 + 0xc) = 0;
        ppSVar1 = &pGVar11->m_Items[0].fields.TextKey + uVar15 * 9;
        *(undefined4 *)ppSVar1 = 0;
        *(undefined4 *)((long)ppSVar1 + 4) = 0;
        *(int *)(ppSVar1 + 1) = (int)uVar20;
        *(int *)((long)ppSVar1 + 0xc) = (int)((ulong)uVar20 >> 0x20);
        ppSVar1 = &pGVar11->m_Items[0].fields.Id + uVar15 * 9;
        *(int32_t *)ppSVar1 = SVar19._stringLength;
        *(int *)((long)ppSVar1 + 4) = SVar19._4_4_;
        *(undefined4 *)(ppSVar1 + 1) = 0;
        *(undefined4 *)((long)ppSVar1 + 0xc) = 0;
        ppSVar2 = &pGVar11->m_Items[0].fields._buildContent + uVar15 * 9;
        *(undefined4 *)ppSVar2 = 0;
        *(undefined4 *)((long)ppSVar2 + 4) = 0;
        *(int *)(ppSVar2 + 1) = (int)pvVar18;
        *(int *)((long)ppSVar2 + 0xc) = (int)((ulong)pvVar18 >> 0x20);
        pAVar17 = credits;
        il2cpp_runtime_helper_022b4080(&pGVar11->m_Items[0].fields._buildContent + uVar15 * 9,0);
        uVar15 = uVar15 + 1;
        pSVar13 = (credits->fields)._Categories_k__BackingField;
      } while (pSVar13 != (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)0x0);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return unaff_R15;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildCredits
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildCredits (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x44e89a0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildCredits
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  System_String_o *pSVar12;
  
  if (g_data_057aec1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildCredits_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"credits-content-mount");
    g_data_057aec1b = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&context;
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar11 = 0;
  pSVar12 = (System_String_o *)0x0;
  uVar9 = 0;
  uVar10 = 0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,16.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  __this.fields._8_8_ = uVar10;
  __this.fields._group = (System_String_o *)uVar9;
  __this.fields._SectionId_k__BackingField = (System_String_o *)uVar11;
  __this.fields._SectionTitle_k__BackingField = pSVar12;
  enter = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                    (__this,(int32_t)__this_00,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel(content,pSVar2,pSVar3,"credits-content-mount",pGVar5,enter,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLoading_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"credits-loading");
    il2cpp_runtime_helper_023445d0(&"credits.loading");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec1c = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = "Column";
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (__this_00,pSVar2,pSVar3,"credits-loading",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar6;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar6->fields).alignItems;
      (pGVar6->fields).alignItems = "credits.loading";
      il2cpp_runtime_helper_022b4080();
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReadyPlaceholder_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"credits.ready");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"credits-ready-placeholder");
    g_data_057aec1d = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar6 = "Column";
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar2,pSVar3,_DAT_055dc4b0,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar6 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "credits.ready";
      il2cpp_runtime_helper_022b4080();
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec1e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmpty_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"credits-empty");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"credits.empty");
    g_data_057aec1e = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
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
  pGVar5 = "Column";
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pSVar2,pSVar3,"credits-empty",pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar6;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar6->fields).alignItems;
      (pGVar6->fields).alignItems = "credits.empty";
      il2cpp_runtime_helper_022b4080();
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"credits.failed");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"credits-error");
    g_data_057aec1f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar6 = "Column";
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar2,pSVar3,"credits-error",pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar6 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "credits.failed";
      il2cpp_runtime_helper_022b4080();
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar6,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44e8ba0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  
  if (g_data_057aec1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLoading_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"credits-loading");
    il2cpp_runtime_helper_023445d0(&"credits.loading");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec1c = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,pSVar2,pSVar3,"credits-loading",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "credits.loading";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReadyPlaceholder_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"credits.ready");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"credits-ready-placeholder");
    g_data_057aec1d = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,pSVar2,pSVar3,_DAT_055dc4b0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
      (pGVar8->fields).alignItems = "credits.ready";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec1e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmpty_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"credits-empty");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"credits.empty");
    g_data_057aec1e = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
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
  pGVar8 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar2,pSVar3,"credits-empty",pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "credits.empty";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"credits.failed");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"credits-error");
    g_data_057aec1f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,pSVar2,pSVar3,"credits-error",pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
      (pGVar8->fields).alignItems = "credits.failed";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildReadyPlaceholder
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44e8e00

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  
  if (g_data_057aec1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReadyPlaceholder_b__12_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"credits.ready");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"credits-ready-placeholder");
    g_data_057aec1d = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,pSVar2,pSVar3,_DAT_055dc4b0,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "credits.ready";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec1e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmpty_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"credits-empty");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"credits.empty");
    g_data_057aec1e = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
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
  pGVar5 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,pSVar2,pSVar3,"credits-empty",pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
      (pGVar8->fields).alignItems = "credits.empty";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"credits.failed");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"credits-error");
    g_data_057aec1f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar2,pSVar3,"credits-error",pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "credits.failed";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildEmpty
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44e9060

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  
  if (g_data_057aec1e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmpty_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"credits-empty");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"credits.empty");
    g_data_057aec1e = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
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
  pGVar7 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,pSVar2,pSVar3,"credits-empty",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar7 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "credits.empty";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"credits.failed");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"credits-error");
    g_data_057aec1f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = "Column";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,pSVar2,pSVar3,"credits-error",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar7;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar7,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar7->fields).alignItems;
      (pGVar7->fields).alignItems = "credits.failed";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar7;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar7);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44e92c0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (g_data_057aec1f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"credits.failed");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"credits-error");
    g_data_057aec1f = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this = "Column";
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,build,"credits-error",pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    __this = pGVar2;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar2->fields).alignItems;
      (pGVar2->fields).alignItems = "credits.failed";
      il2cpp_runtime_helper_022b4080();
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x44e9520

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}



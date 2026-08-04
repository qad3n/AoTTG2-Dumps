// Type: Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHelpUpdatesDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___cctor (const MethodInfo* method);
// 0x44e5270

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aebfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aebfd = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, const MethodInfo* method);
// 0x44e52e0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestCard>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestCard_b__13_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x44e52f0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestCard_b__13_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  System_String_o *extraout_RDX;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  MethodInfo *pMVar13;
  MethodInfo *in_R8;
  
  pMVar13 = (MethodInfo *)card;
  if (g_data_057aebfe == '\0') {
    il2cpp_runtime_helper_023445d0(&"changelog.hub.empty");
    il2cpp_runtime_helper_023445d0(&"No published changelog yet.");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-empty");
    g_data_057aebfe = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestLoading(card,pMVar13);
  pMVar13 = "changelog.hub.empty";
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestState
            (card,(System_String_o *)"changelog.hub.empty","No published changelog yet.","help-updates-latest-empty",in_R8);
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestError(card,pMVar13);
  if (g_data_057aebf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestReady_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-ready");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.ready");
    g_data_057aebf5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)0x0,pSVar3,"help-updates-latest-ready",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "changelog.hub.ready";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestLoading_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-loading");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.loading");
    g_data_057aebf6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x20) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar11 = (System_String_o *)0x0;
  pGVar5 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,9.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,(System_String_o *)0x0,pSVar3,"help-updates-latest-loading",
                        pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar11 = (System_String_o *)0x0;
    pGVar5 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
    pSVar9 = "changelog.hub.loading";
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
      (pGVar8->fields).alignItems = "changelog.hub.loading";
      il2cpp_runtime_helper_022b4080();
      pSVar11 = pSVar9;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-line-3");
    il2cpp_runtime_helper_023445d0(&"-version");
    il2cpp_runtime_helper_023445d0(&"-line-0");
    il2cpp_runtime_helper_023445d0(&"-line-1");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"-line-2");
    g_data_057aebf7 = '\x01';
  }
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-version",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(28.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestError_b__17_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"help-updates-latest-failed");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"changelog.hub.failed");
      il2cpp_runtime_helper_023445d0(&"FlexStart");
      g_data_057aebf8 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    else {
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar2 + 0x28) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar9 = (System_String_o *)0x0;
    pSVar11 = (System_String_o *)0x0;
    pGVar5 = "Column";
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pSVar11 = "help-updates-latest-failed";
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,(System_String_o *)0x0,pSVar3,
                          "help-updates-latest-failed",pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pSVar9 = (System_String_o *)0x0;
      pGVar5 = pGVar8;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
      pSVar12 = "changelog.hub.failed";
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
        (pGVar8->fields).alignItems = "changelog.hub.failed";
        il2cpp_runtime_helper_022b4080();
        pSVar9 = pSVar12;
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).contentLayout = pGVar8;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestState_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
      il2cpp_runtime_helper_023445d0(&"Column");
      g_data_057aebf9 = '\x01';
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
    pGVar8 = pGVar7;
    System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar7->fields).direction = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&pGVar7->fields,extraout_RDX);
      (pGVar7->fields).justify = pSVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).justify,pSVar11);
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pSVar11 = (pGVar7->fields).justify;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar8 = "Column";
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)0x0,pSVar3,pSVar11,
                            pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
        ;
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar8 = pGVar5;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
          (pGVar5->fields).alignItems = pSVar9;
          il2cpp_runtime_helper_022b4080();
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar6->fields).contentLayout = pGVar5;
            il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar7,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-0",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-1",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(92.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-2",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(78.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_3ae5ba0(pSVar11,"-line-3",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(54.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar11,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestReady>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ready, const MethodInfo* method);
// 0x44e5370

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ready,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  long lVar6;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar8;
  
  if (g_data_057aebff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdownRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestReady_b__14_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-version");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-refreshing");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-ready-skeleton");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-markdown-preview");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"changelogPreviewMeta");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.refreshing");
    il2cpp_runtime_helper_023445d0(&"v");
    il2cpp_runtime_helper_023445d0(&"Refreshing...");
    il2cpp_runtime_helper_023445d0(&"help-updates-open-row");
    il2cpp_runtime_helper_023445d0(&"changelogPreviewVersion");
    g_data_057aebff = '\x01';
    method = extraout_RDX;
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044e53a2;
label_044e55c3:
    il2cpp_runtime_helper_02337ed0();
    method = extraout_RDX_00;
    if (g_data_057aeca9 != '\0') goto label_044e53af;
label_044e55d5:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057aeca9 = '\x01';
    method = extraout_RDX_01;
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044e53bf;
label_044e55f8:
    il2cpp_runtime_helper_02337ed0();
    lVar6 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10);
    method = extraout_RDX_02;
    if (lVar6 != 0) goto label_044e53d3;
label_044e5614:
    pGVar7 = "help-updates-latest-ready-skeleton";
    Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton
              (ready,(System_String_o *)"help-updates-latest-ready-skeleton",method);
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_044e582d;
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044e55c3;
label_044e53a2:
    if (g_data_057aeca9 == '\0') goto label_044e55d5;
label_044e53af:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044e55f8;
label_044e53bf:
    lVar6 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x10);
    if (lVar6 == 0) goto label_044e5614;
label_044e53d3:
    pGVar7 = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(lVar6 + 0x18);
    pSVar3 = System_String__Concat_3ae5ba0("v",(System_String_o *)pGVar7,(MethodInfo *)0x0);
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_044e582d;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ready,pSVar3,"changelogPreviewVersion","help-updates-latest-version",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = *(Gisketch_Aottg2UI_Code_AottgComponent_c **)(lVar6 + 0x20);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgChangelogMarkdownRenderer);
    pSVar3 = "help-updates-latest-markdown-preview";
    if (g_data_057aebdc == '\0') {
      il2cpp_runtime_helper_023445d0(&"changelog-markdown");
      g_data_057aebdc = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = pGVar1;
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pSVar3 = "changelog-markdown";
    }
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) goto label_044e582d;
    __this_00[1].monitor = pSVar3;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pSVar3);
    *(undefined4 *)&__this_00[2].klass = 5;
    Gisketch_Aottg2UI_Code_AottgUi__Component(ready,__this_00,(MethodInfo *)0x0);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                     (ready,"Refreshing...","changelogPreviewMeta","help-updates-latest-refreshing",(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
  pGVar8 = "changelog.hub.refreshing";
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar5->fields).alignItems = (System_String_o *)"changelog.hub.refreshing";
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignItems);
    pGVar7 = pGVar8;
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).contentLayout = pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar5);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (build == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar6 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar6 + 0x10) = build;
        il2cpp_runtime_helper_022b4080(lVar6 + 0x10,build);
      }
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexStart","Center",(System_String_o *)0x0,(System_String_o *)0x0
                          ,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ready,(System_String_o *)0x0,build,"help-updates-open-row",pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_044e582d:
  il2cpp_runtime_helper_022b2c90();
  pGVar8 = pGVar7;
  if (g_data_057aec00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"changelog.openLatest");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"help-updates-open-latest");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.open.enabled");
    il2cpp_runtime_helper_023445d0(&"SEE MORE");
    g_data_057aec00 = '\x01';
  }
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (pGVar7,0,"SEE MORE","changelog.openLatest","help-updates-open-latest",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",
                        (MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pGVar7 = "changelog.hub.open.enabled";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).alignSelf = (System_String_o *)"changelog.hub.open.enabled";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).alignSelf);
      pGVar8 = pGVar7;
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX_03;
  if (g_data_057aec01 == '\0') {
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-loading-skeleton");
    g_data_057aec01 = '\x01';
    method_00 = extraout_RDX_04;
  }
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton(pGVar8,"help-updates-latest-loading-skeleton",method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestReady>b__14_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_1 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x44e5840

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestReady_b__14_1
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *ui;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar2;
  
  ui = row;
  if (g_data_057aec00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"changelog.openLatest");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"help-updates-open-latest");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.open.enabled");
    il2cpp_runtime_helper_023445d0(&"SEE MORE");
    g_data_057aec00 = '\x01';
  }
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (row,0,"SEE MORE","changelog.openLatest","help-updates-open-latest",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",
                        (MethodInfo *)0x0);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,(MethodInfo *)0x0);
    pGVar2 = "changelog.hub.open.enabled";
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (__this_00->fields).alignSelf = (System_String_o *)"changelog.hub.open.enabled";
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).alignSelf);
      ui = pGVar2;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).contentLayout = __this_00;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).contentLayout,__this_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = extraout_RDX;
  if (g_data_057aec01 == '\0') {
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-loading-skeleton");
    g_data_057aec01 = '\x01';
    method_00 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton(ui,"help-updates-latest-loading-skeleton",method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestLoading>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestLoading_b__15_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loading, const MethodInfo* method);
// 0x44e5960

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestLoading_b__15_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loading,MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  
  if (g_data_057aec01 == '\0') {
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-loading-skeleton");
    g_data_057aec01 = '\x01';
    method = extraout_RDX;
  }
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton(loading,"help-updates-latest-loading-skeleton",method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildLatestError>b__17_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestError_b__17_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* failed, const MethodInfo* method);
// 0x44e59a0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildLatestError_b__17_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *failed,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_c *text;
  long lVar1;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  int iVar5;
  MethodInfo *pMVar6;
  System_String_o *pSVar7;
  System_Action_AottgUi__o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  System_String_Fields SVar13;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  System_String_o *pSVar14;
  System_String_Fields SVar15;
  undefined8 *puVar16;
  System_String_Fields SVar17;
  System_String_Fields SVar18;
  MethodInfo *in_RCX;
  int extraout_EDX;
  System_String_c *extraout_RDX;
  MethodInfo *method_00;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  System_String_Fields SVar19;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar20;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  undefined8 uVar21;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar22;
  long lVar23;
  System_String_c *pSVar24;
  int local_1bc;
  System_String_Fields local_1b8;
  System_String_Fields local_1b0;
  int local_1a8;
  int local_1a4;
  System_String_Fields SStack_1a0;
  System_Action_AottgUi__o *pSStack_198;
  System_String_Fields in_stack_fffffffffffffea8;
  
  pGVar20 = failed;
  if (g_data_057aec02 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Try again.");
    il2cpp_runtime_helper_023445d0(&"Retry");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.error");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-error-title");
    il2cpp_runtime_helper_023445d0(&"Could not load latest changelog.");
    il2cpp_runtime_helper_023445d0(&"changelog.retryLatest");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-retry");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-error");
    g_data_057aec02 = '\x01';
  }
  if (failed != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (failed,"Could not load latest changelog.","text","help-updates-latest-error-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (failed,"Try again.","profileInfoStatus","help-updates-latest-error","changelog.hub.error",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (failed,0,"Retry","changelog.retryLatest","help-updates-latest-retry",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscInfo);
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"Help data unavailable.");
    il2cpp_runtime_helper_023445d0(&"help-updates-help-missing");
    g_data_057aec03 = '\x01';
  }
  a = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    a = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pMVar6 = (a->klass->vtable)._16_get_IsArray.method;
      cVar2 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)();
      if (cVar2 == '\0') goto label_044e5c92;
      a = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
      if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pMVar6 = (a->klass->vtable)._11_get_Count.method;
        iVar4 = (*(a->klass->vtable)._11_get_Count.methodPtr)();
        if (iVar4 == 0) goto label_044e5c92;
        plVar22 = *(long **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
        a = (SimpleJSONFixed_JSONNode_o *)0x0;
        if (plVar22 != (long *)0x0) {
          iVar4 = 0;
          do {
            pMVar6 = *(MethodInfo **)(*plVar22 + 0x1f0);
            iVar5 = (**(code **)(*plVar22 + 0x1e8))();
            if (iVar5 <= iVar4) {
              return;
            }
            plVar22 = *(long **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
            a = (SimpleJSONFixed_JSONNode_o *)0x0;
            if (plVar22 == (long *)0x0) goto label_044e5cd4;
            pMVar6 = (MethodInfo *)
                     (**(code **)(*plVar22 + 0x188))(plVar22,iVar4,*(undefined8 *)(*plVar22 + 400));
            Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelpLink
                      (pGVar20,(SimpleJSONFixed_JSONNode_o *)pMVar6,iVar4,in_RCX);
            iVar4 = iVar4 + 1;
            plVar22 = *(long **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
          } while (plVar22 != (long *)0x0);
          a = (SimpleJSONFixed_JSONNode_o *)0x0;
        }
      }
    }
  }
  else {
label_044e5c92:
    if (pGVar20 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (pGVar20,"Help data unavailable.","profileInfoStatus","help-updates-help-missing",(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_044e5cd4:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec04 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aec04 = '\x01';
  }
  text = a[1].klass;
  pSVar14 = a[1].monitor;
  SVar13 = "-text";
  pSVar7 = System_String__Concat_3ae5ba0(pSVar14,(System_String_o *)"-text",(MethodInfo *)0x0);
  if (pMVar6 != (MethodInfo *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar6,(System_String_o *)text,"profileInfoStatus",pSVar7,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec05 == '\0') {
    il2cpp_runtime_helper_023445d0(&"credits-category-header");
    g_data_057aec05 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar14,(MethodInfo *)0x0);
  pGVar20 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  SVar17 = SVar13;
  bVar3 = System_String__IsNullOrEmpty((System_String_o *)SVar13,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    SVar13 = "credits-category-header";
  }
  if (pSVar14 != (System_String_o *)0x0) {
    pSVar14->fields = SVar13;
    il2cpp_runtime_helper_022b4080(&pSVar14->fields,SVar13);
    pSVar24 = extraout_RDX;
    if (extraout_RDX == (System_String_c *)0x0) {
      pSVar24 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar14[1].klass = pSVar24;
    il2cpp_runtime_helper_022b4080(pSVar14 + 1,pSVar24);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__3_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"creditsCategoryHeader");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aec06 = '\x01';
  }
  pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar14 = *(System_String_o **)((long)SVar17 + 0x10);
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
  __this_01 = "FlexStart";
  SVar13 = "Column";
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)"FlexStart",
                       (System_String_o *)"FlexStart",(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                       pGVar9,pGVar10,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar20 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar20,"creditsCategoryHeader",pSVar8,pSVar14,pGVar11,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec07 == '\0') {
    il2cpp_runtime_helper_023445d0(&"creditsCategoryHeaderText");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aec07 = '\x01';
  }
  SVar17 = *(System_String_Fields *)((long)SVar13 + 0x10);
  pSVar14 = *(System_String_o **)((long)SVar13 + 0x18);
  SVar18 = "-text";
  pSVar7 = System_String__Concat_3ae5ba0
                     ((System_String_o *)SVar17,(System_String_o *)"-text",(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (__this_01,pSVar14,"creditsCategoryHeaderText",pSVar7,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_fffffffffffffea8._stringLength = 0;
    in_stack_fffffffffffffea8._firstChar = 0;
    in_stack_fffffffffffffea8._6_2_ = 0;
    SVar18._stringLength = 0;
    SVar18._firstChar = 0;
    SVar18._6_2_ = 0;
    SVar17 = "Column";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    SVar13._stringLength = 0;
    SVar13._firstChar = 0;
    SVar13._6_2_ = 0;
    if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar12->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar12->fields).search,pGVar11);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  local_1b0 = SVar17;
  SStack_1a0 = SVar13;
  pSStack_198 = pSVar8;
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
  local_1bc = 0;
  SVar17 = "-core-header";
  local_1b8 = in_stack_fffffffffffffea8;
  SVar13 = (System_String_Fields)
           System_String__Concat_3ae5ba0
                     ((System_String_o *)in_stack_fffffffffffffea8,(System_String_o *)"-core-header",
                      (MethodInfo *)0x0);
  if (SVar18 != (System_String_Fields)0x0) {
    SVar19 = *(System_String_Fields *)((long)SVar18 + 0x10);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    SVar17._stringLength = 0;
    SVar17._firstChar = 0;
    SVar17._6_2_ = 0;
    in_stack_fffffffffffffea8 = SVar13;
    bVar3 = System_String__IsNullOrEmpty((System_String_o *)SVar13,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      SVar13 = "credits-category-header";
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this_00[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)SVar13;
      il2cpp_runtime_helper_022b4080(__this_00 + 1,SVar13);
      if (SVar19 == (System_String_Fields)0x0) {
        SVar19 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      in_stack_fffffffffffffea8 = (System_String_Fields)&__this_00[1].monitor;
      __this_00[1].monitor = (void *)SVar19;
      il2cpp_runtime_helper_022b4080();
      SVar13 = local_1b0;
      SVar17 = SVar19;
      if (local_1b0 != (System_String_Fields)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)local_1b0,__this_00,(MethodInfo *)0x0);
        in_stack_fffffffffffffea8 = *(System_String_Fields *)((long)SVar18 + 0x18);
        SVar17._stringLength = 0;
        SVar17._firstChar = 0;
        SVar17._6_2_ = 0;
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)in_stack_fffffffffffffea8,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          SVar17 = *(System_String_Fields *)((long)SVar18 + 0x18);
          pSVar14 = System_String__Concat_3ae5ba0((System_String_o *)local_1b8,"-description",(MethodInfo *)0x0)
          ;
          in_stack_fffffffffffffea8 = SVar13;
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,(System_String_o *)SVar17,"text",pSVar14
                     ,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        if (extraout_EDX == 0) {
          pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,"Refreshing credits...","profileInfoStatus",
                               "credits-refreshing-text",(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          SVar15 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          SVar17._stringLength = 0;
          SVar17._firstChar = 0;
          SVar17._6_2_ = 0;
          in_stack_fffffffffffffea8 = SVar15;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)SVar15,(MethodInfo *)0x0);
          SVar19 = "credits.refreshing";
          if (SVar15 == (System_String_Fields)0x0) goto label_044e66c5;
          in_stack_fffffffffffffea8 = (System_String_Fields)((long)SVar15 + 0x20);
          *(System_String_Fields *)((long)SVar15 + 0x20) = "credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          SVar17 = SVar19;
          if (pGVar12 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          in_stack_fffffffffffffea8 = (System_String_Fields)&(pGVar12->fields).contentLayout;
          (pGVar12->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar15;
          il2cpp_runtime_helper_022b4080();
          SVar17 = SVar15;
        }
        SVar19 = *(System_String_Fields *)((long)SVar18 + 0x20);
        if (SVar19 != (System_String_Fields)0x0) {
          lVar1 = *(long *)SVar19;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar23 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                puVar16 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar23) * 0x10 + lVar1 + 0x138);
                goto label_044e6411;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar23);
          }
          puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar19,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          SVar17 = *(System_String_Fields *)(puVar16 + 1);
          iVar4 = (*(code *)*puVar16)();
          SVar15 = *(System_String_Fields *)((long)SVar18 + 0x28);
          in_stack_fffffffffffffea8 = SVar19;
          if (SVar15 != (System_String_Fields)0x0) {
            lVar1 = *(long *)SVar15;
            if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
              lVar23 = 0;
              do {
                if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar6 = (MethodInfo *)
                           ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar23) * 0x10 + lVar1 + 0x138);
                  goto label_044e6481;
                }
                lVar23 = lVar23 + 0x10;
              } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar23);
            }
            pMVar6 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar15,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            SVar17 = (System_String_Fields)pMVar6->virtualMethodPointer;
            local_1a4 = (*pMVar6->methodPointer)();
            in_stack_fffffffffffffea8 = SVar15;
            local_1a8 = iVar4;
            if (0 < iVar4) {
              SVar17 = *(System_String_Fields *)((long)SVar18 + 0x20);
              pSVar14 = System_String__Concat_3ae5ba0
                                  ((System_String_o *)local_1b8,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)SVar17,pSVar14,
                         pMVar6);
              in_stack_fffffffffffffea8 = SVar13;
            }
            SVar13 = local_1b0;
            local_1bc = 0;
            plVar22 = *(long **)((long)SVar18 + 0x28);
            if (plVar22 != (long *)0x0) {
              do {
                iVar4 = local_1bc;
                lVar1 = *plVar22;
                if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
                  lVar23 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      puVar16 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar23) * 0x10 + lVar1 + 0x138);
                      goto label_044e65b3;
                    }
                    lVar23 = lVar23 + 0x10;
                  } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar23);
                }
                puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar5 = (*(code *)*puVar16)(plVar22);
                SVar17 = local_1b0;
                if (iVar5 <= iVar4) {
                  if ((local_1a4 < 1) && (local_1a8 < 1)) {
                    pSVar14 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)local_1b8,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,pSVar14,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar14 = System_Int32__ToString((int32_t)&local_1bc,(MethodInfo *)0x0);
                SVar17 = (System_String_Fields)
                         System_String__Concat_3af7470
                                   ((System_String_o *)local_1b8,"-group-",pSVar14,"-gap",
                                    (MethodInfo *)0x0);
                in_stack_fffffffffffffea8 = SVar13;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,(System_String_o *)SVar17,method_00);
                iVar4 = local_1bc;
                plVar22 = *(long **)((long)SVar18 + 0x28);
                if (plVar22 == (long *)0x0) break;
                lVar1 = *plVar22;
                if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
                  lVar23 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar23) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      puVar16 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar23) * 0x10 + lVar1 + 0x138);
                      goto label_044e64fd;
                    }
                    lVar23 = lVar23 + 0x10;
                  } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar23);
                }
                puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                SVar17 = (System_String_Fields)(*(code *)*puVar16)(plVar22,iVar4,puVar16[1]);
                pSVar14 = System_Int32__ToString((int32_t)&local_1bc,(MethodInfo *)0x0);
                pMVar6 = (MethodInfo *)0x0;
                pSVar14 = System_String__Concat_3af7150
                                    ((System_String_o *)local_1b8,"-group-",pSVar14,(MethodInfo *)0x0);
                in_stack_fffffffffffffea8 = SVar13;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)SVar17,pSVar14,pMVar6);
                local_1bc = local_1bc + 1;
                plVar22 = *(long **)((long)SVar18 + 0x28);
              } while (plVar22 != (long *)0x0);
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
  SVar18 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar14 = (System_String_o *)0x0;
  SVar13 = SVar18;
  System_Object___ctor((Il2CppObject *)SVar18,(MethodInfo *)0x0);
  if (SVar18 != (System_String_Fields)0x0) {
    *(System_String_Fields *)((long)SVar18 + 0x10) = SVar17;
    il2cpp_runtime_helper_022b4080((long)SVar18 + 0x10,SVar17);
    *(undefined8 *)((long)SVar18 + 0x18) = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080((long)SVar18 + 0x18,extraout_RDX_00);
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar7 = *(System_String_o **)((long)SVar18 + 0x18);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar14 = (System_String_o *)0x0;
    SVar13 = "Row";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)0x0,
                         (System_String_o *)"FlexStart",(System_String_o *)0x0,"Wrap",10.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (in_stack_fffffffffffffea8 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)in_stack_fffffffffffffea8,(System_String_o *)"default"
                 ,pSVar8,pSVar7,pGVar11,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
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
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  uVar21 = 0;
  SVar17 = "Column";
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,pGVar10,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (SVar13 != (System_String_Fields)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,(System_String_o *)"default",
               (System_Action_AottgUi__o *)0x0,pSVar14,pGVar11,
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
  SVar18 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pGVar20 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  SVar13 = SVar18;
  System_Object___ctor((Il2CppObject *)SVar18,(MethodInfo *)0x0);
  if (SVar18 != (System_String_Fields)0x0) {
    plVar22 = (long *)((long)SVar18 + 0x10);
    *(undefined8 *)((long)SVar18 + 0x10) = uVar21;
    il2cpp_runtime_helper_022b4080(plVar22,uVar21);
    puVar16 = (undefined8 *)((long)SVar18 + 0x18);
    *(undefined8 *)((long)SVar18 + 0x18) = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(puVar16,extraout_RDX_01);
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar14 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)SVar18 + 0x18),"-header",(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar20 = "FlexStart";
    SVar13 = "Row";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (SVar17 != (System_String_Fields)0x0) {
      pGVar20 = "default";
      SVar13 = SVar17;
      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,(System_String_o *)"default",pSVar8,
                           pSVar14,pGVar11,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
      if ((*plVar22 != 0) && (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pGVar20 = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(*plVar22 + 0x18);
        SVar13 = (System_String_Fields)&(pGVar12->fields).choiceOptionRenderer;
        (pGVar12->fields).choiceOptionRenderer = (System_String_o *)pGVar20;
        il2cpp_runtime_helper_022b4080();
        if ((*plVar22 != 0) &&
           (SVar18 = *(System_String_Fields *)(*plVar22 + 0x20), SVar18 != (System_String_Fields)0x0)) {
          lVar1 = *(long *)SVar18;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar23 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                pMVar6 = (MethodInfo *)
                         ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar23) * 0x10 + lVar1 + 0x138);
                goto label_044e6c71;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar23);
          }
          pMVar6 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar18,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pGVar20 = (Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar6->virtualMethodPointer;
          iVar4 = (*pMVar6->methodPointer)();
          if (iVar4 < 1) {
            pSVar14 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*puVar16,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,pSVar14,"No contributors listed.",
                       (MethodInfo *)&"No contributors listed.");
            return;
          }
          SVar13 = SVar18;
          if (*plVar22 != 0) {
            contributors = *(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o **)
                            (*plVar22 + 0x20);
            pSVar14 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*puVar16,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,contributors,pSVar14,pMVar6);
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
  SVar18 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  SVar17 = SVar18;
  System_Object___ctor((Il2CppObject *)SVar18,(MethodInfo *)0x0);
  if (SVar18 != (System_String_Fields)0x0) {
    *(undefined8 *)((long)SVar18 + 0x10) = extraout_RDX_02;
    il2cpp_runtime_helper_022b4080((long)SVar18 + 0x10,extraout_RDX_02);
    *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)SVar18 + 0x18) = pGVar20;
    il2cpp_runtime_helper_022b4080((long)SVar18 + 0x18,pGVar20);
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar14 = *(System_String_o **)((long)SVar18 + 0x18);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    SVar17 = "Column";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (SVar13 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,(System_String_o *)"default",pSVar8,pSVar14,
                 pGVar11,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)SVar17,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c$$<BuildHelp>b__19_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildHelp_b__19_0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* help, const MethodInfo* method);
// 0x44e5b20

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c___BuildHelp_b__19_0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *help,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_c *text;
  long lVar1;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  int iVar5;
  MethodInfo *pMVar6;
  System_String_o *pSVar7;
  System_Action_AottgUi__o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  System_String_Fields SVar13;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  System_String_o *pSVar14;
  System_String_Fields SVar15;
  undefined8 *puVar16;
  System_String_Fields SVar17;
  System_String_Fields SVar18;
  MethodInfo *in_RCX;
  int extraout_EDX;
  System_String_c *extraout_RDX;
  MethodInfo *method_00;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  System_String_Fields SVar19;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar20;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  undefined8 uVar21;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar22;
  long lVar23;
  System_String_c *pSVar24;
  int iStack_194;
  System_String_Fields SStack_190;
  System_String_Fields SStack_188;
  int iStack_180;
  int iStack_17c;
  System_String_Fields SStack_178;
  System_Action_AottgUi__o *pSStack_170;
  System_String_Fields in_stack_fffffffffffffed0;
  
  if (g_data_057aec03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscInfo);
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"Help data unavailable.");
    il2cpp_runtime_helper_023445d0(&"help-updates-help-missing");
    g_data_057aec03 = '\x01';
  }
  a = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar6 = (MethodInfo *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    a = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pMVar6 = (a->klass->vtable)._16_get_IsArray.method;
      cVar2 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)();
      if (cVar2 == '\0') goto label_044e5c92;
      a = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
      if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pMVar6 = (a->klass->vtable)._11_get_Count.method;
        iVar4 = (*(a->klass->vtable)._11_get_Count.methodPtr)();
        if (iVar4 == 0) goto label_044e5c92;
        plVar22 = *(long **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
        a = (SimpleJSONFixed_JSONNode_o *)0x0;
        if (plVar22 != (long *)0x0) {
          iVar4 = 0;
          do {
            pMVar6 = *(MethodInfo **)(*plVar22 + 0x1f0);
            iVar5 = (**(code **)(*plVar22 + 0x1e8))();
            if (iVar5 <= iVar4) {
              return;
            }
            plVar22 = *(long **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
            a = (SimpleJSONFixed_JSONNode_o *)0x0;
            if (plVar22 == (long *)0x0) goto label_044e5cd4;
            pMVar6 = (MethodInfo *)
                     (**(code **)(*plVar22 + 0x188))(plVar22,iVar4,*(undefined8 *)(*plVar22 + 400));
            Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelpLink
                      (help,(SimpleJSONFixed_JSONNode_o *)pMVar6,iVar4,in_RCX);
            iVar4 = iVar4 + 1;
            plVar22 = *(long **)(*(long *)(TypeInfo_MiscInfo + 0xb8) + 8);
          } while (plVar22 != (long *)0x0);
          a = (SimpleJSONFixed_JSONNode_o *)0x0;
        }
      }
    }
  }
  else {
label_044e5c92:
    if (help != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (help,"Help data unavailable.","profileInfoStatus","help-updates-help-missing",(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_044e5cd4:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec04 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aec04 = '\x01';
  }
  text = a[1].klass;
  pSVar14 = a[1].monitor;
  SVar13 = "-text";
  pSVar7 = System_String__Concat_3ae5ba0(pSVar14,(System_String_o *)"-text",(MethodInfo *)0x0);
  if (pMVar6 != (MethodInfo *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar6,(System_String_o *)text,"profileInfoStatus",pSVar7,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec05 == '\0') {
    il2cpp_runtime_helper_023445d0(&"credits-category-header");
    g_data_057aec05 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar14,(MethodInfo *)0x0);
  pGVar20 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  SVar17 = SVar13;
  bVar3 = System_String__IsNullOrEmpty((System_String_o *)SVar13,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    SVar13 = "credits-category-header";
  }
  if (pSVar14 != (System_String_o *)0x0) {
    pSVar14->fields = SVar13;
    il2cpp_runtime_helper_022b4080(&pSVar14->fields,SVar13);
    pSVar24 = extraout_RDX;
    if (extraout_RDX == (System_String_c *)0x0) {
      pSVar24 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar14[1].klass = pSVar24;
    il2cpp_runtime_helper_022b4080(pSVar14 + 1,pSVar24);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__3_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"creditsCategoryHeader");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aec06 = '\x01';
  }
  pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar14 = *(System_String_o **)((long)SVar17 + 0x10);
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
  __this_01 = "FlexStart";
  SVar13 = "Column";
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)"FlexStart",
                       (System_String_o *)"FlexStart",(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                       pGVar9,pGVar10,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar20 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar20,"creditsCategoryHeader",pSVar8,pSVar14,pGVar11,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec07 == '\0') {
    il2cpp_runtime_helper_023445d0(&"creditsCategoryHeaderText");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aec07 = '\x01';
  }
  SVar17 = *(System_String_Fields *)((long)SVar13 + 0x10);
  pSVar14 = *(System_String_o **)((long)SVar13 + 0x18);
  SVar18 = "-text";
  pSVar7 = System_String__Concat_3ae5ba0
                     ((System_String_o *)SVar17,(System_String_o *)"-text",(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (__this_01,pSVar14,"creditsCategoryHeaderText",pSVar7,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_fffffffffffffed0._stringLength = 0;
    in_stack_fffffffffffffed0._firstChar = 0;
    in_stack_fffffffffffffed0._6_2_ = 0;
    SVar18._stringLength = 0;
    SVar18._firstChar = 0;
    SVar18._6_2_ = 0;
    SVar17 = "Column";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    SVar13._stringLength = 0;
    SVar13._firstChar = 0;
    SVar13._6_2_ = 0;
    if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar12->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar12->fields).search,pGVar11);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SStack_188 = SVar17;
  SStack_178 = SVar13;
  pSStack_170 = pSVar8;
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
  iStack_194 = 0;
  SVar17 = "-core-header";
  SStack_190 = in_stack_fffffffffffffed0;
  SVar13 = (System_String_Fields)
           System_String__Concat_3ae5ba0
                     ((System_String_o *)in_stack_fffffffffffffed0,(System_String_o *)"-core-header",
                      (MethodInfo *)0x0);
  if (SVar18 != (System_String_Fields)0x0) {
    SVar19 = *(System_String_Fields *)((long)SVar18 + 0x10);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    SVar17._stringLength = 0;
    SVar17._firstChar = 0;
    SVar17._6_2_ = 0;
    in_stack_fffffffffffffed0 = SVar13;
    bVar3 = System_String__IsNullOrEmpty((System_String_o *)SVar13,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      SVar13 = "credits-category-header";
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this_00[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)SVar13;
      il2cpp_runtime_helper_022b4080(__this_00 + 1,SVar13);
      if (SVar19 == (System_String_Fields)0x0) {
        SVar19 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      in_stack_fffffffffffffed0 = (System_String_Fields)&__this_00[1].monitor;
      __this_00[1].monitor = (void *)SVar19;
      il2cpp_runtime_helper_022b4080();
      SVar13 = SStack_188;
      SVar17 = SVar19;
      if (SStack_188 != (System_String_Fields)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)SStack_188,__this_00,(MethodInfo *)0x0);
        in_stack_fffffffffffffed0 = *(System_String_Fields *)((long)SVar18 + 0x18);
        SVar17._stringLength = 0;
        SVar17._firstChar = 0;
        SVar17._6_2_ = 0;
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)in_stack_fffffffffffffed0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          SVar17 = *(System_String_Fields *)((long)SVar18 + 0x18);
          pSVar14 = System_String__Concat_3ae5ba0
                              ((System_String_o *)SStack_190,"-description",(MethodInfo *)0x0);
          in_stack_fffffffffffffed0 = SVar13;
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,(System_String_o *)SVar17,"text",pSVar14
                     ,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        if (extraout_EDX == 0) {
          pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,"Refreshing credits...","profileInfoStatus",
                               "credits-refreshing-text",(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          SVar15 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          SVar17._stringLength = 0;
          SVar17._firstChar = 0;
          SVar17._6_2_ = 0;
          in_stack_fffffffffffffed0 = SVar15;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)SVar15,(MethodInfo *)0x0);
          SVar19 = "credits.refreshing";
          if (SVar15 == (System_String_Fields)0x0) goto label_044e66c5;
          in_stack_fffffffffffffed0 = (System_String_Fields)((long)SVar15 + 0x20);
          *(System_String_Fields *)((long)SVar15 + 0x20) = "credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          SVar17 = SVar19;
          if (pGVar12 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          in_stack_fffffffffffffed0 = (System_String_Fields)&(pGVar12->fields).contentLayout;
          (pGVar12->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar15;
          il2cpp_runtime_helper_022b4080();
          SVar17 = SVar15;
        }
        SVar19 = *(System_String_Fields *)((long)SVar18 + 0x20);
        if (SVar19 != (System_String_Fields)0x0) {
          lVar1 = *(long *)SVar19;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar23 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                puVar16 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar23) * 0x10 + lVar1 + 0x138);
                goto label_044e6411;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar23);
          }
          puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar19,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          SVar17 = *(System_String_Fields *)(puVar16 + 1);
          iVar4 = (*(code *)*puVar16)();
          SVar15 = *(System_String_Fields *)((long)SVar18 + 0x28);
          in_stack_fffffffffffffed0 = SVar19;
          if (SVar15 != (System_String_Fields)0x0) {
            lVar1 = *(long *)SVar15;
            if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
              lVar23 = 0;
              do {
                if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar6 = (MethodInfo *)
                           ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar23) * 0x10 + lVar1 + 0x138);
                  goto label_044e6481;
                }
                lVar23 = lVar23 + 0x10;
              } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar23);
            }
            pMVar6 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar15,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            SVar17 = (System_String_Fields)pMVar6->virtualMethodPointer;
            iStack_17c = (*pMVar6->methodPointer)();
            in_stack_fffffffffffffed0 = SVar15;
            iStack_180 = iVar4;
            if (0 < iVar4) {
              SVar17 = *(System_String_Fields *)((long)SVar18 + 0x20);
              pSVar14 = System_String__Concat_3ae5ba0
                                  ((System_String_o *)SStack_190,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)SVar17,pSVar14,
                         pMVar6);
              in_stack_fffffffffffffed0 = SVar13;
            }
            SVar13 = SStack_188;
            iStack_194 = 0;
            plVar22 = *(long **)((long)SVar18 + 0x28);
            if (plVar22 != (long *)0x0) {
              do {
                iVar4 = iStack_194;
                lVar1 = *plVar22;
                if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
                  lVar23 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      puVar16 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar23) * 0x10 + lVar1 + 0x138);
                      goto label_044e65b3;
                    }
                    lVar23 = lVar23 + 0x10;
                  } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar23);
                }
                puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar5 = (*(code *)*puVar16)(plVar22);
                SVar17 = SStack_188;
                if (iVar5 <= iVar4) {
                  if ((iStack_17c < 1) && (iStack_180 < 1)) {
                    pSVar14 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)SStack_190,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,pSVar14,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar14 = System_Int32__ToString((int32_t)&iStack_194,(MethodInfo *)0x0);
                SVar17 = (System_String_Fields)
                         System_String__Concat_3af7470
                                   ((System_String_o *)SStack_190,"-group-",pSVar14,"-gap",
                                    (MethodInfo *)0x0);
                in_stack_fffffffffffffed0 = SVar13;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,(System_String_o *)SVar17,method_00);
                iVar4 = iStack_194;
                plVar22 = *(long **)((long)SVar18 + 0x28);
                if (plVar22 == (long *)0x0) break;
                lVar1 = *plVar22;
                if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
                  lVar23 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar23) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      puVar16 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar23) * 0x10 + lVar1 + 0x138);
                      goto label_044e64fd;
                    }
                    lVar23 = lVar23 + 0x10;
                  } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar23);
                }
                puVar16 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                SVar17 = (System_String_Fields)(*(code *)*puVar16)(plVar22,iVar4,puVar16[1]);
                pSVar14 = System_Int32__ToString((int32_t)&iStack_194,(MethodInfo *)0x0);
                pMVar6 = (MethodInfo *)0x0;
                pSVar14 = System_String__Concat_3af7150
                                    ((System_String_o *)SStack_190,"-group-",pSVar14,(MethodInfo *)0x0);
                in_stack_fffffffffffffed0 = SVar13;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)SVar17,pSVar14,pMVar6);
                iStack_194 = iStack_194 + 1;
                plVar22 = *(long **)((long)SVar18 + 0x28);
              } while (plVar22 != (long *)0x0);
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
  SVar18 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar14 = (System_String_o *)0x0;
  SVar13 = SVar18;
  System_Object___ctor((Il2CppObject *)SVar18,(MethodInfo *)0x0);
  if (SVar18 != (System_String_Fields)0x0) {
    *(System_String_Fields *)((long)SVar18 + 0x10) = SVar17;
    il2cpp_runtime_helper_022b4080((long)SVar18 + 0x10,SVar17);
    *(undefined8 *)((long)SVar18 + 0x18) = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080((long)SVar18 + 0x18,extraout_RDX_00);
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar7 = *(System_String_o **)((long)SVar18 + 0x18);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar14 = (System_String_o *)0x0;
    SVar13 = "Row";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)0x0,
                         (System_String_o *)"FlexStart",(System_String_o *)0x0,"Wrap",10.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (in_stack_fffffffffffffed0 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)in_stack_fffffffffffffed0,(System_String_o *)"default"
                 ,pSVar8,pSVar7,pGVar11,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
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
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  uVar21 = 0;
  SVar17 = "Column";
  pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,pGVar10,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (SVar13 != (System_String_Fields)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,(System_String_o *)"default",
               (System_Action_AottgUi__o *)0x0,pSVar14,pGVar11,
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
  SVar18 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pGVar20 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  SVar13 = SVar18;
  System_Object___ctor((Il2CppObject *)SVar18,(MethodInfo *)0x0);
  if (SVar18 != (System_String_Fields)0x0) {
    plVar22 = (long *)((long)SVar18 + 0x10);
    *(undefined8 *)((long)SVar18 + 0x10) = uVar21;
    il2cpp_runtime_helper_022b4080(plVar22,uVar21);
    puVar16 = (undefined8 *)((long)SVar18 + 0x18);
    *(undefined8 *)((long)SVar18 + 0x18) = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(puVar16,extraout_RDX_01);
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar14 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)SVar18 + 0x18),"-header",(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar20 = "FlexStart";
    SVar13 = "Row";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (SVar17 != (System_String_Fields)0x0) {
      pGVar20 = "default";
      SVar13 = SVar17;
      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,(System_String_o *)"default",pSVar8,
                           pSVar14,pGVar11,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
      if ((*plVar22 != 0) && (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pGVar20 = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(*plVar22 + 0x18);
        SVar13 = (System_String_Fields)&(pGVar12->fields).choiceOptionRenderer;
        (pGVar12->fields).choiceOptionRenderer = (System_String_o *)pGVar20;
        il2cpp_runtime_helper_022b4080();
        if ((*plVar22 != 0) &&
           (SVar18 = *(System_String_Fields *)(*plVar22 + 0x20), SVar18 != (System_String_Fields)0x0)) {
          lVar1 = *(long *)SVar18;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar23 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar23) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                pMVar6 = (MethodInfo *)
                         ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar23) * 0x10 + lVar1 + 0x138);
                goto label_044e6c71;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar23);
          }
          pMVar6 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar18,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pGVar20 = (Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar6->virtualMethodPointer;
          iVar4 = (*pMVar6->methodPointer)();
          if (iVar4 < 1) {
            pSVar14 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*puVar16,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,pSVar14,"No contributors listed.",
                       (MethodInfo *)&"No contributors listed.");
            return;
          }
          SVar13 = SVar18;
          if (*plVar22 != 0) {
            contributors = *(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o **)
                            (*plVar22 + 0x20);
            pSVar14 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*puVar16,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,contributors,pSVar14,pMVar6);
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
  SVar18 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  SVar17 = SVar18;
  System_Object___ctor((Il2CppObject *)SVar18,(MethodInfo *)0x0);
  if (SVar18 != (System_String_Fields)0x0) {
    *(undefined8 *)((long)SVar18 + 0x10) = extraout_RDX_02;
    il2cpp_runtime_helper_022b4080((long)SVar18 + 0x10,extraout_RDX_02);
    *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)SVar18 + 0x18) = pGVar20;
    il2cpp_runtime_helper_022b4080((long)SVar18 + 0x18,pGVar20);
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar14 = *(System_String_o **)((long)SVar18 + 0x18);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    SVar17 = "Column";
    pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (SVar13 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar13,(System_String_o *)"default",pSVar8,pSVar14,
                 pGVar11,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)SVar17,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___ctor (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x44e4ff0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___ctor
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog.<>c__DisplayClass18_0$$<BuildLatestState>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___BuildLatestState_b__0 (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* state, const MethodInfo* method);
// 0x44e5ce0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0___BuildLatestState_b__0
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *state,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  bool_conflict bVar2;
  int iVar3;
  int iVar4;
  System_String_o *id;
  System_Action_AottgUi__o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  System_String_Fields SVar11;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  System_String_o *pSVar12;
  System_String_Fields SVar13;
  undefined8 *puVar14;
  MethodInfo *pMVar15;
  System_String_Fields SVar16;
  System_String_Fields SVar17;
  int extraout_EDX;
  System_String_c *extraout_RDX;
  MethodInfo *method_00;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  System_String_Fields SVar18;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar19;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  System_String_c *pSVar23;
  int iStack_16c;
  System_String_Fields SStack_168;
  System_String_Fields SStack_160;
  int iStack_158;
  int iStack_154;
  System_String_Fields SStack_150;
  System_Action_AottgUi__o *pSStack_148;
  System_String_Fields in_stack_fffffffffffffef8;
  
  if (g_data_057aec04 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aec04 = '\x01';
  }
  pSVar12 = (__this->fields).text;
  pSVar9 = (__this->fields).id;
  SVar11 = "-text";
  id = System_String__Concat_3ae5ba0(pSVar9,(System_String_o *)"-text",(MethodInfo *)0x0);
  if (state != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (state,pSVar12,"profileInfoStatus",id,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec05 == '\0') {
    il2cpp_runtime_helper_023445d0(&"credits-category-header");
    g_data_057aec05 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)pSVar9,(MethodInfo *)0x0);
  pGVar19 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  SVar16 = SVar11;
  bVar2 = System_String__IsNullOrEmpty((System_String_o *)SVar11,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    SVar11 = "credits-category-header";
  }
  if (pSVar9 != (System_String_o *)0x0) {
    pSVar9->fields = SVar11;
    il2cpp_runtime_helper_022b4080(&pSVar9->fields,SVar11);
    pSVar23 = extraout_RDX;
    if (extraout_RDX == (System_String_c *)0x0) {
      pSVar23 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar9[1].klass = pSVar23;
    il2cpp_runtime_helper_022b4080(pSVar9 + 1,pSVar23);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__3_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"creditsCategoryHeader");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aec06 = '\x01';
  }
  pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar12 = *(System_String_o **)((long)SVar16 + 0x10);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
  __this_01 = "FlexStart";
  SVar11 = "Column";
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)"FlexStart",
                      (System_String_o *)"FlexStart",(System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6
                      ,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar19 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar19,"creditsCategoryHeader",pSVar5,pSVar12,pGVar8,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec07 == '\0') {
    il2cpp_runtime_helper_023445d0(&"creditsCategoryHeaderText");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aec07 = '\x01';
  }
  SVar16 = *(System_String_Fields *)((long)SVar11 + 0x10);
  pSVar12 = *(System_String_o **)((long)SVar11 + 0x18);
  SVar17 = "-text";
  pSVar9 = System_String__Concat_3ae5ba0
                     ((System_String_o *)SVar16,(System_String_o *)"-text",(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (__this_01,pSVar12,"creditsCategoryHeaderText",pSVar9,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_fffffffffffffef8._stringLength = 0;
    in_stack_fffffffffffffef8._firstChar = 0;
    in_stack_fffffffffffffef8._6_2_ = 0;
    SVar17._stringLength = 0;
    SVar17._firstChar = 0;
    SVar17._6_2_ = 0;
    SVar16 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    SVar11._stringLength = 0;
    SVar11._firstChar = 0;
    SVar11._6_2_ = 0;
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar8);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SStack_160 = SVar16;
  SStack_150 = SVar11;
  pSStack_148 = pSVar5;
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
  iStack_16c = 0;
  SVar16 = "-core-header";
  SStack_168 = in_stack_fffffffffffffef8;
  SVar11 = (System_String_Fields)
           System_String__Concat_3ae5ba0
                     ((System_String_o *)in_stack_fffffffffffffef8,(System_String_o *)"-core-header",
                      (MethodInfo *)0x0);
  if (SVar17 != (System_String_Fields)0x0) {
    SVar18 = *(System_String_Fields *)((long)SVar17 + 0x10);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    SVar16._stringLength = 0;
    SVar16._firstChar = 0;
    SVar16._6_2_ = 0;
    in_stack_fffffffffffffef8 = SVar11;
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)SVar11,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      SVar11 = "credits-category-header";
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this_00[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)SVar11;
      il2cpp_runtime_helper_022b4080(__this_00 + 1,SVar11);
      if (SVar18 == (System_String_Fields)0x0) {
        SVar18 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      in_stack_fffffffffffffef8 = (System_String_Fields)&__this_00[1].monitor;
      __this_00[1].monitor = (void *)SVar18;
      il2cpp_runtime_helper_022b4080();
      SVar11 = SStack_160;
      SVar16 = SVar18;
      if (SStack_160 != (System_String_Fields)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)SStack_160,__this_00,(MethodInfo *)0x0);
        in_stack_fffffffffffffef8 = *(System_String_Fields *)((long)SVar17 + 0x18);
        SVar16._stringLength = 0;
        SVar16._firstChar = 0;
        SVar16._6_2_ = 0;
        bVar2 = System_String__IsNullOrEmpty((System_String_o *)in_stack_fffffffffffffef8,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          SVar16 = *(System_String_Fields *)((long)SVar17 + 0x18);
          pSVar12 = System_String__Concat_3ae5ba0
                              ((System_String_o *)SStack_168,"-description",(MethodInfo *)0x0);
          in_stack_fffffffffffffef8 = SVar11;
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,(System_String_o *)SVar16,"text",pSVar12
                     ,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        if (extraout_EDX == 0) {
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,"Refreshing credits...","profileInfoStatus",
                               "credits-refreshing-text",(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          SVar13 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          SVar16._stringLength = 0;
          SVar16._firstChar = 0;
          SVar16._6_2_ = 0;
          in_stack_fffffffffffffef8 = SVar13;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)SVar13,(MethodInfo *)0x0);
          SVar18 = "credits.refreshing";
          if (SVar13 == (System_String_Fields)0x0) goto label_044e66c5;
          in_stack_fffffffffffffef8 = (System_String_Fields)((long)SVar13 + 0x20);
          *(System_String_Fields *)((long)SVar13 + 0x20) = "credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          SVar16 = SVar18;
          if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          in_stack_fffffffffffffef8 = (System_String_Fields)&(pGVar10->fields).contentLayout;
          (pGVar10->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar13;
          il2cpp_runtime_helper_022b4080();
          SVar16 = SVar13;
        }
        SVar18 = *(System_String_Fields *)((long)SVar17 + 0x20);
        if (SVar18 != (System_String_Fields)0x0) {
          lVar1 = *(long *)SVar18;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar21 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                puVar14 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar21) * 0x10 + lVar1 + 0x138);
                goto label_044e6411;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar21);
          }
          puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar18,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          SVar16 = *(System_String_Fields *)(puVar14 + 1);
          iVar3 = (*(code *)*puVar14)();
          SVar13 = *(System_String_Fields *)((long)SVar17 + 0x28);
          in_stack_fffffffffffffef8 = SVar18;
          if (SVar13 != (System_String_Fields)0x0) {
            lVar1 = *(long *)SVar13;
            if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
              lVar21 = 0;
              do {
                if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar15 = (MethodInfo *)
                            ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar21) * 0x10 + lVar1 + 0x138);
                  goto label_044e6481;
                }
                lVar21 = lVar21 + 0x10;
              } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar21);
            }
            pMVar15 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar13,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            SVar16 = (System_String_Fields)pMVar15->virtualMethodPointer;
            iStack_154 = (*pMVar15->methodPointer)();
            in_stack_fffffffffffffef8 = SVar13;
            iStack_158 = iVar3;
            if (0 < iVar3) {
              SVar16 = *(System_String_Fields *)((long)SVar17 + 0x20);
              pSVar12 = System_String__Concat_3ae5ba0
                                  ((System_String_o *)SStack_168,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)SVar16,pSVar12,
                         pMVar15);
              in_stack_fffffffffffffef8 = SVar11;
            }
            SVar11 = SStack_160;
            iStack_16c = 0;
            plVar22 = *(long **)((long)SVar17 + 0x28);
            if (plVar22 != (long *)0x0) {
              do {
                iVar3 = iStack_16c;
                lVar1 = *plVar22;
                if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
                  lVar21 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      puVar14 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar21) * 0x10 + lVar1 + 0x138);
                      goto label_044e65b3;
                    }
                    lVar21 = lVar21 + 0x10;
                  } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar21);
                }
                puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar4 = (*(code *)*puVar14)(plVar22);
                SVar16 = SStack_160;
                if (iVar4 <= iVar3) {
                  if ((iStack_154 < 1) && (iStack_158 < 1)) {
                    pSVar12 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)SStack_168,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar16,pSVar12,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar12 = System_Int32__ToString((int32_t)&iStack_16c,(MethodInfo *)0x0);
                SVar16 = (System_String_Fields)
                         System_String__Concat_3af7470
                                   ((System_String_o *)SStack_168,"-group-",pSVar12,"-gap",
                                    (MethodInfo *)0x0);
                in_stack_fffffffffffffef8 = SVar11;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,(System_String_o *)SVar16,method_00);
                iVar3 = iStack_16c;
                plVar22 = *(long **)((long)SVar17 + 0x28);
                if (plVar22 == (long *)0x0) break;
                lVar1 = *plVar22;
                if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
                  lVar21 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar21) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      puVar14 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar21) * 0x10 + lVar1 + 0x138);
                      goto label_044e64fd;
                    }
                    lVar21 = lVar21 + 0x10;
                  } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar21);
                }
                puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar22,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                SVar16 = (System_String_Fields)(*(code *)*puVar14)(plVar22,iVar3,puVar14[1]);
                pSVar12 = System_Int32__ToString((int32_t)&iStack_16c,(MethodInfo *)0x0);
                pMVar15 = (MethodInfo *)0x0;
                pSVar12 = System_String__Concat_3af7150
                                    ((System_String_o *)SStack_168,"-group-",pSVar12,(MethodInfo *)0x0);
                in_stack_fffffffffffffef8 = SVar11;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)SVar16,pSVar12,pMVar15);
                iStack_16c = iStack_16c + 1;
                plVar22 = *(long **)((long)SVar17 + 0x28);
              } while (plVar22 != (long *)0x0);
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
  SVar17 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar12 = (System_String_o *)0x0;
  SVar11 = SVar17;
  System_Object___ctor((Il2CppObject *)SVar17,(MethodInfo *)0x0);
  if (SVar17 != (System_String_Fields)0x0) {
    *(System_String_Fields *)((long)SVar17 + 0x10) = SVar16;
    il2cpp_runtime_helper_022b4080((long)SVar17 + 0x10,SVar16);
    *(undefined8 *)((long)SVar17 + 0x18) = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080((long)SVar17 + 0x18,extraout_RDX_00);
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar9 = *(System_String_o **)((long)SVar17 + 0x18);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar12 = (System_String_o *)0x0;
    SVar11 = "Row";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)0x0,(System_String_o *)"FlexStart"
                        ,(System_String_o *)0x0,"Wrap",10.0,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (in_stack_fffffffffffffef8 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)in_stack_fffffffffffffef8,(System_String_o *)"default"
                 ,pSVar5,pSVar9,pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
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
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  uVar20 = 0;
  SVar16 = "Column";
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar7,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (SVar11 != (System_String_Fields)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,(System_String_o *)"default",
               (System_Action_AottgUi__o *)0x0,pSVar12,pGVar8,
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
  SVar17 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pGVar19 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  SVar11 = SVar17;
  System_Object___ctor((Il2CppObject *)SVar17,(MethodInfo *)0x0);
  if (SVar17 != (System_String_Fields)0x0) {
    plVar22 = (long *)((long)SVar17 + 0x10);
    *(undefined8 *)((long)SVar17 + 0x10) = uVar20;
    il2cpp_runtime_helper_022b4080(plVar22,uVar20);
    puVar14 = (undefined8 *)((long)SVar17 + 0x18);
    *(undefined8 *)((long)SVar17 + 0x18) = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(puVar14,extraout_RDX_01);
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar12 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)SVar17 + 0x18),"-header",(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar19 = "FlexStart";
    SVar11 = "Row";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (SVar16 != (System_String_Fields)0x0) {
      pGVar19 = "default";
      SVar11 = SVar16;
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar16,(System_String_o *)"default",pSVar5,
                           pSVar12,pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
      if ((*plVar22 != 0) && (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pGVar19 = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(*plVar22 + 0x18);
        SVar11 = (System_String_Fields)&(pGVar10->fields).choiceOptionRenderer;
        (pGVar10->fields).choiceOptionRenderer = (System_String_o *)pGVar19;
        il2cpp_runtime_helper_022b4080();
        if ((*plVar22 != 0) &&
           (SVar17 = *(System_String_Fields *)(*plVar22 + 0x20), SVar17 != (System_String_Fields)0x0)) {
          lVar1 = *(long *)SVar17;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar21 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                pMVar15 = (MethodInfo *)
                          ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar21) * 0x10 + lVar1 + 0x138);
                goto label_044e6c71;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar21);
          }
          pMVar15 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar17,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pGVar19 = (Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar15->virtualMethodPointer;
          iVar3 = (*pMVar15->methodPointer)();
          if (iVar3 < 1) {
            pSVar12 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*puVar14,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar16,pSVar12,"No contributors listed.",
                       (MethodInfo *)&"No contributors listed.");
            return;
          }
          SVar11 = SVar17;
          if (*plVar22 != 0) {
            contributors = *(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o **)
                            (*plVar22 + 0x20);
            pSVar12 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*puVar14,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar16,contributors,pSVar12,pMVar15);
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
  SVar17 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  SVar16 = SVar17;
  System_Object___ctor((Il2CppObject *)SVar17,(MethodInfo *)0x0);
  if (SVar17 != (System_String_Fields)0x0) {
    *(undefined8 *)((long)SVar17 + 0x10) = extraout_RDX_02;
    il2cpp_runtime_helper_022b4080((long)SVar17 + 0x10,extraout_RDX_02);
    *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)SVar17 + 0x18) = pGVar19;
    il2cpp_runtime_helper_022b4080((long)SVar17 + 0x18,pGVar19);
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar12 = *(System_String_o **)((long)SVar17 + 0x18);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    SVar16 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (SVar11 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,(System_String_o *)"default",pSVar5,pSVar12,
                 pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)SVar16,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Title (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x44e39a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aebee == '\0') {
    il2cpp_runtime_helper_023445d0(&"Help & Updates");
    g_data_057aebee = '\x01';
  }
  return "Help & Updates";
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x44e39d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aebef == '\0') {
    il2cpp_runtime_helper_023445d0(&"question");
    g_data_057aebef = '\x01';
  }
  return "question";
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x44e3a00

int32_t Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x44e3a10

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aebf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aebf0 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(920.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(94.0,(MethodInfo *)0x0);
  maxHeight = Gisketch_Aottg2UI_Code_AottgUi__Percent(86.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,maxHeight,0.0,0.0,0.0,0.0,0.0,
                      0.0,0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x44e3b10

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aebf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057aebf1 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,10.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44e3bd0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body
               ,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  System_String_o *extraout_RDX;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgDialogFooter_o *__this_00;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar13;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  Gisketch_Aottg2UI_Data_GisketchLength_o *unaff_R14;
  undefined8 unaff_R15;
  undefined8 uVar14;
  
  method_00 = (MethodInfo *)body;
  if (g_data_057aebf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"help-updates-section-gap");
    g_data_057aebf2 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestCard(body,method_00);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0;
  pGVar13 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffff20;
    body = (Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13;
    if (g_data_057aebf4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestCard_b__13_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"help-updates-latest-title");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"Stretch");
      il2cpp_runtime_helper_023445d0(&"CHANGELOGS");
      il2cpp_runtime_helper_023445d0(&"row");
      il2cpp_runtime_helper_023445d0(&"changelogSectionHeader");
      body = (Gisketch_Aottg2UI_Code_AottgUi_o *)&"help-updates-latest-card";
      il2cpp_runtime_helper_023445d0();
      g_data_057aebf4 = '\x01';
    }
    if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,"CHANGELOGS","changelogSectionHeader","help-updates-latest-title",
                 (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = "row";
      pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar2 + 8) = pSVar6;
        il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar6);
      }
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,14.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,pSVar11,pSVar6,"help-updates-latest-card",pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = 0;
    unaff_R15 = 0;
  }
  else {
    __this_00 = (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,(System_String_o *)0x0,(System_Action_AottgUi__o *)0x0,"help-updates-section-gap",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = unaff_R14;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
  *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x10) = pGVar3;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_RBX;
  pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)body;
  if (g_data_057aebfa == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e3f55;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e3f61;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildHelp_b__19_0);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e3f6d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e3f79;
    il2cpp_runtime_helper_023445d0(&"Column");
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e3f85;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e3f91;
    il2cpp_runtime_helper_023445d0(&"help-updates-help-title");
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e3f9d;
    il2cpp_runtime_helper_023445d0(&"HELP");
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e3fa9;
    il2cpp_runtime_helper_023445d0(&"help-updates-help");
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e3fb5;
    il2cpp_runtime_helper_023445d0(&"row");
    pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&"changelogSectionHeader";
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e3fc1;
    il2cpp_runtime_helper_023445d0();
    g_data_057aebfa = '\x01';
  }
  if ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)body !=
      (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e4005;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,"HELP","changelogSectionHeader","help-updates-help-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               *(MethodInfo **)((long)register0x00000020 + -0x78));
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e401e;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = "row";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e404a;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e4067;
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e4081;
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar2 + 0x30) = pSVar6;
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e409c;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar6);
    }
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e40ab;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x38) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x40) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x48) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e4137;
    pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                         (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar3,
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x78),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x70),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x68),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x60),
                         *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x58),14.0,
                         0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x50),
                         *(float *)((long)register0x00000020 + -0x48),
                         *(float *)((long)register0x00000020 + -0x40),
                         *(float *)((long)register0x00000020 + -0x38),
                         *(MethodInfo **)((long)register0x00000020 + -0x30));
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x80) = 0x44e415d;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,pSVar11,pSVar6,"help-updates-help",pGVar13,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               *(MethodInfo **)((long)register0x00000020 + -0x78));
    return;
  }
  *(code **)((long)register0x00000020 + -0x80) = Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildFooter;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x80) = unaff_RBX;
  if (g_data_057aebf3 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44e4189;
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&"Close";
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44e4195;
    il2cpp_runtime_helper_023445d0();
    g_data_057aebf3 = '\x01';
  }
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet(__this_00,"Close","overlay.close",(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0x44e41c5;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
  *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x90) = pGVar3;
  *(undefined8 *)((long)register0x00000020 + -0x98) = unaff_R12;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
  if (g_data_057aebf5 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e4288;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e4294;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e42a0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestReady_b__14_0);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e42ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e42b8;
    il2cpp_runtime_helper_023445d0(&"Column");
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e42c4;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e42d0;
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-ready");
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e42dc;
    il2cpp_runtime_helper_023445d0(&"changelog.hub.ready");
    g_data_057aebf5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e4300;
    il2cpp_runtime_helper_02337ed0();
    pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  uVar14 = 0;
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e4225;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = **(undefined8 **)(TypeInfo_c + 0xb8);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e4242;
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e425c;
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(lVar2 + 0x18) = pGVar5;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e4277;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pGVar5);
  }
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e4327;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0xe8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xe0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xf8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xf0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0xb8) = 0;
  *(undefined4 *)((long)register0x00000020 + -0xc0) = 0;
  *(undefined4 *)((long)register0x00000020 + -200) = 0;
  *(undefined4 *)((long)register0x00000020 + -0xd0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xd8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e43ae;
  pGVar10 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar3,
                      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0xf8),
                      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0xf0),
                      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0xe8),
                      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0xe0),
                      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0xd8),0.0,0.0,
                      0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0xd0),
                      *(float *)((long)register0x00000020 + -200),*(float *)((long)register0x00000020 + -0xc0)
                      ,*(float *)((long)register0x00000020 + -0xb8),
                      *(MethodInfo **)((long)register0x00000020 + -0xb0));
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e43dc;
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,(System_String_o *)0x0,
                        (System_Action_AottgUi__o *)pGVar5,"help-updates-latest-ready",pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        *(MethodInfo **)((long)register0x00000020 + -0xf8));
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e43ee;
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e43fb;
    pGVar10 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "changelog.hub.ready";
      *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e441a;
      il2cpp_runtime_helper_022b4080();
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar8->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x100) = 0x44e4448;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x100) = uVar14;
  *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)register0x00000020 + -0x108) = pGVar8;
  *(long **)((long)register0x00000020 + -0x110) = &TypeInfo_c;
  *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)register0x00000020 + -0x118) = pGVar5;
  if (g_data_057aebf6 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e4508;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e4514;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e4520;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestLoading_b__15_0);
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e452c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e4538;
    il2cpp_runtime_helper_023445d0(&"Column");
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e4544;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e4550;
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-loading");
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e455c;
    il2cpp_runtime_helper_023445d0(&"changelog.hub.loading");
    g_data_057aebf6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e4580;
    il2cpp_runtime_helper_02337ed0();
    pGVar13 = *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    pGVar13 = *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e44a5;
      il2cpp_runtime_helper_02337ed0();
    }
    uVar14 = **(undefined8 **)(TypeInfo_c + 0xb8);
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e44c2;
    pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e44dc;
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(lVar2 + 0x20) = pGVar13;
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e44f7;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pGVar13);
  }
  *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e45a7;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x160) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x158) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x170) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x168) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x128) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x130) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x138) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x140) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x148) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0;
  pSVar11 = (System_String_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e462e;
  pGVar5 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,9.0,pGVar3,
                      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x170),
                      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x168),
                      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x160),
                      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x158),
                      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x150),0.0,0.0
                      ,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x148),
                      *(float *)((long)register0x00000020 + -0x140),
                      *(float *)((long)register0x00000020 + -0x138),
                      *(float *)((long)register0x00000020 + -0x130),
                      *(MethodInfo **)((long)register0x00000020 + -0x128));
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x170) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e465c;
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,(System_String_o *)0x0,
                        (System_Action_AottgUi__o *)pGVar13,"help-updates-latest-loading",pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        *(MethodInfo **)((long)register0x00000020 + -0x170));
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e466e;
    pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar11 = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e467b;
    pGVar5 = pGVar13;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar13,(MethodInfo *)0x0);
    pSVar9 = "changelog.hub.loading";
    if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar13->fields).alignItems;
      (pGVar13->fields).alignItems = "changelog.hub.loading";
      *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e469a;
      il2cpp_runtime_helper_022b4080();
      pSVar11 = pSVar9;
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar8->fields).contentLayout = pGVar13;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).contentLayout,pGVar13);
        return;
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x178) = 0x44e46c8;
  il2cpp_runtime_helper_022b2c90();
  *(undefined8 *)((long)register0x00000020 + -0x178) = unaff_RBP;
  *(undefined8 *)((long)register0x00000020 + -0x180) = uVar14;
  *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)register0x00000020 + -0x188) = pGVar8;
  *(undefined8 *)((long)register0x00000020 + -400) = unaff_R13;
  *(long **)((long)register0x00000020 + -0x198) = &TypeInfo_c;
  *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)register0x00000020 + -0x1a0) = pGVar13;
  if (g_data_057aebf7 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e46f9;
    il2cpp_runtime_helper_023445d0(&"Column");
    *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4705;
    il2cpp_runtime_helper_023445d0(&"-line-3");
    *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4711;
    il2cpp_runtime_helper_023445d0(&"-version");
    *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e471d;
    il2cpp_runtime_helper_023445d0(&"-line-0");
    *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4729;
    il2cpp_runtime_helper_023445d0(&"-line-1");
    *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4735;
    il2cpp_runtime_helper_023445d0(&"skeleton");
    *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4741;
    il2cpp_runtime_helper_023445d0(&"-line-2");
    g_data_057aebf7 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e475c;
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-version",(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e476e;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(28.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4780;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x1e0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1d8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0;
  *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f8) = pGVar4;
  *(undefined8 *)((long)register0x00000020 + -0x1b0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1b8) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1c0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1c8) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1d0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e47fa;
  pGVar13 = "Column";
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f8),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f0),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1e8),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1e0),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1d8),0.0,
                       0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x1d0),
                       *(float *)((long)register0x00000020 + -0x1c8),
                       *(float *)((long)register0x00000020 + -0x1c0),
                       *(float *)((long)register0x00000020 + -0x1b8),
                       *(MethodInfo **)((long)register0x00000020 + -0x1b0));
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4b65;
    il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x200) = 0;
    *(System_String_o **)((long)register0x00000020 + -0x208) = pSVar11;
    *(System_String_o **)((long)register0x00000020 + -0x210) = pSVar9;
    *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x218) = pGVar3;
    if (g_data_057aebf8 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4c28;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4c34;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4c40;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestError_b__17_0);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4c4c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4c58;
      il2cpp_runtime_helper_023445d0(&"help-updates-latest-failed");
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4c64;
      il2cpp_runtime_helper_023445d0(&"Column");
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4c70;
      il2cpp_runtime_helper_023445d0(&"changelog.hub.failed");
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4c7c;
      il2cpp_runtime_helper_023445d0(&"FlexStart");
      g_data_057aebf8 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4ca0;
      il2cpp_runtime_helper_02337ed0();
      pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    else {
      pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    uVar14 = 0;
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4bc5;
        il2cpp_runtime_helper_02337ed0();
      }
      uVar14 = **(undefined8 **)(TypeInfo_c + 0xb8);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4be2;
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4bfc;
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)(lVar2 + 0x28) = pGVar5;
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4c17;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pGVar5);
    }
    *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4cc7;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    *(undefined8 *)((long)register0x00000020 + -0x260) = 0;
    *(undefined8 *)((long)register0x00000020 + -600) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x270) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x268) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x228) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x230) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x238) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x240) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x248) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x250) = 0;
    pSVar9 = (System_String_o *)0x0;
    pSVar11 = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4d4e;
    pGVar10 = "Column";
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar3,
                        *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x270),
                        *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x268),
                        *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x260),
                        *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -600),
                        *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x250),0.0,
                        0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x248),
                        *(float *)((long)register0x00000020 + -0x240),
                        *(float *)((long)register0x00000020 + -0x238),
                        *(float *)((long)register0x00000020 + -0x230),
                        *(MethodInfo **)((long)register0x00000020 + -0x228));
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x270) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4d7c;
      pSVar11 = "help-updates-latest-failed";
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar13,(System_String_o *)0x0,
                          (System_Action_AottgUi__o *)pGVar5,"help-updates-latest-failed",pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          *(MethodInfo **)((long)register0x00000020 + -0x270));
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4d8e;
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pSVar9 = (System_String_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4d9b;
      pGVar10 = pGVar5;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      pSVar12 = "changelog.hub.failed";
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
        (pGVar5->fields).alignItems = "changelog.hub.failed";
        *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4dba;
        il2cpp_runtime_helper_022b4080();
        pSVar9 = pSVar12;
        if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar8->fields).contentLayout = pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar8->fields).contentLayout,pGVar5);
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x278) = 0x44e4de8;
    il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x278) = uVar14;
    *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)register0x00000020 + -0x280) = pGVar8;
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o ***)((long)register0x00000020 + -0x288) =
         &"Column";
    *(long **)((long)register0x00000020 + -0x290) = &TypeInfo_c;
    *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)register0x00000020 + -0x298) = pGVar5;
    if (g_data_057aebf9 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4e1e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4e2a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4e36;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestState_b__0);
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4e42;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4e4e;
      il2cpp_runtime_helper_023445d0(&"Column");
      g_data_057aebf9 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4e64;
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
    *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4e71;
    pGVar13 = pGVar5;
    System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).direction = extraout_RDX;
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4e8a;
      il2cpp_runtime_helper_022b4080(&pGVar5->fields,extraout_RDX);
      (pGVar5->fields).justify = pSVar11;
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4e9d;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify,pSVar11);
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4eac;
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4ec6;
      System_Action_object____ctor();
      pSVar11 = (pGVar5->fields).justify;
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4ed9;
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x2d8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x2d0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x2e8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x2e0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x2a0) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x2a8) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x2b0) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x2b8) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x2c0) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x2c8) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4f56;
      pGVar13 = "Column";
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x2e8),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x2e0),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x2d8),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x2d0),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x2c8),0.0
                          ,0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x2c0),
                          *(float *)((long)register0x00000020 + -0x2b8),
                          *(float *)((long)register0x00000020 + -0x2b0),
                          *(float *)((long)register0x00000020 + -0x2a8),
                          *(MethodInfo **)((long)register0x00000020 + -0x2a0));
      if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x2e8) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4f7d;
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,(System_String_o *)0x0,pSVar6,pSVar11,
                            pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            *(MethodInfo **)((long)register0x00000020 + -0x2e8));
        *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4f8f;
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4f9c;
        pGVar13 = pGVar5;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar13 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
          (pGVar5->fields).alignItems = pSVar9;
          *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4fb4;
          il2cpp_runtime_helper_022b4080();
          if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar8->fields).contentLayout = pGVar5;
            il2cpp_runtime_helper_022b4080(&(pGVar8->fields).contentLayout,pGVar5);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x2f0) = 0x44e4fe4;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pGVar13,(MethodInfo *)0x0);
    return;
  }
  *(undefined8 *)((long)register0x00000020 + -0x1f8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4829;
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar10,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)((long)register0x00000020 + -0x1f8),
             *(MethodInfo **)((long)register0x00000020 + -0x1f0));
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e483d;
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-0",(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e484f;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4861;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x1e0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1d8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0;
  *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f8) = pGVar4;
  *(undefined8 *)((long)register0x00000020 + -0x1b0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1b8) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1c0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1c8) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1d0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e48d4;
  pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f8),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f0),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1e8),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1e0),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1d8),0.0,
                       0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x1d0),
                       *(float *)((long)register0x00000020 + -0x1c8),
                       *(float *)((long)register0x00000020 + -0x1c0),
                       *(float *)((long)register0x00000020 + -0x1b8),
                       *(MethodInfo **)((long)register0x00000020 + -0x1b0));
  *(undefined8 *)((long)register0x00000020 + -0x1f8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e48f3;
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar13,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)((long)register0x00000020 + -0x1f8),
             *(MethodInfo **)((long)register0x00000020 + -0x1f0));
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4907;
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-1",(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4919;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(92.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e492b;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x1e0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1d8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0;
  *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f8) = pGVar4;
  *(undefined8 *)((long)register0x00000020 + -0x1b0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1b8) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1c0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1c8) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1d0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e499e;
  pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f8),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f0),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1e8),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1e0),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1d8),0.0,
                       0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x1d0),
                       *(float *)((long)register0x00000020 + -0x1c8),
                       *(float *)((long)register0x00000020 + -0x1c0),
                       *(float *)((long)register0x00000020 + -0x1b8),
                       *(MethodInfo **)((long)register0x00000020 + -0x1b0));
  *(undefined8 *)((long)register0x00000020 + -0x1f8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e49bd;
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar13,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)((long)register0x00000020 + -0x1f8),
             *(MethodInfo **)((long)register0x00000020 + -0x1f0));
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e49d1;
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-2",(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e49e3;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(78.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e49f5;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x1e0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1d8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0;
  *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f8) = pGVar4;
  *(undefined8 *)((long)register0x00000020 + -0x1b0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1b8) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1c0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1c8) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1d0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4a68;
  pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f8),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f0),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1e8),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1e0),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1d8),0.0,
                       0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x1d0),
                       *(float *)((long)register0x00000020 + -0x1c8),
                       *(float *)((long)register0x00000020 + -0x1c0),
                       *(float *)((long)register0x00000020 + -0x1b8),
                       *(MethodInfo **)((long)register0x00000020 + -0x1b0));
  *(undefined8 *)((long)register0x00000020 + -0x1f8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4a87;
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar13,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)((long)register0x00000020 + -0x1f8),
             *(MethodInfo **)((long)register0x00000020 + -0x1f0));
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4a9b;
  pSVar11 = System_String__Concat_3ae5ba0(pSVar11,"-line-3",(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4aad;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(54.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4abf;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x1e0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1d8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1e8) = 0;
  *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f8) = pGVar4;
  *(undefined8 *)((long)register0x00000020 + -0x1b0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1b8) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1c0) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1c8) = 0;
  *(undefined4 *)((long)register0x00000020 + -0x1d0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4b32;
  pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f8),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1f0),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1e8),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1e0),
                       *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x1d8),0.0,
                       0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x1d0),
                       *(float *)((long)register0x00000020 + -0x1c8),
                       *(float *)((long)register0x00000020 + -0x1c0),
                       *(float *)((long)register0x00000020 + -0x1b8),
                       *(MethodInfo **)((long)register0x00000020 + -0x1b0));
  *(undefined8 *)((long)register0x00000020 + -0x1f8) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x1f0) = 0;
  *(undefined8 *)((long)register0x00000020 + -0x200) = 0x44e4b51;
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar11,pGVar13,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)((long)register0x00000020 + -0x1f8),
             *(MethodInfo **)((long)register0x00000020 + -0x1f0));
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x44e4170

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  System_String_o *extraout_RDX;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  
  if (g_data_057aebf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    __this = (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *)&"Close";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebf3 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet(footer,"Close","overlay.close",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestReady_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-ready");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.ready");
    g_data_057aebf5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this,(System_String_o *)0x0,pSVar3,"help-updates-latest-ready",
                        pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "changelog.hub.ready";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestLoading_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-loading");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.loading");
    g_data_057aebf6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x20) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar11 = (System_String_o *)0x0;
  pGVar5 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,9.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,(System_String_o *)0x0,pSVar3,"help-updates-latest-loading",
                        pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar11 = (System_String_o *)0x0;
    pGVar5 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
    pSVar9 = "changelog.hub.loading";
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
      (pGVar8->fields).alignItems = "changelog.hub.loading";
      il2cpp_runtime_helper_022b4080();
      pSVar11 = pSVar9;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-line-3");
    il2cpp_runtime_helper_023445d0(&"-version");
    il2cpp_runtime_helper_023445d0(&"-line-0");
    il2cpp_runtime_helper_023445d0(&"-line-1");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"-line-2");
    g_data_057aebf7 = '\x01';
  }
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-version",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(28.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestError_b__17_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"help-updates-latest-failed");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"changelog.hub.failed");
      il2cpp_runtime_helper_023445d0(&"FlexStart");
      g_data_057aebf8 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    else {
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar2 + 0x28) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar9 = (System_String_o *)0x0;
    pSVar11 = (System_String_o *)0x0;
    pGVar5 = "Column";
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pSVar11 = "help-updates-latest-failed";
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,(System_String_o *)0x0,pSVar3,
                          "help-updates-latest-failed",pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pSVar9 = (System_String_o *)0x0;
      pGVar5 = pGVar8;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
      pSVar12 = "changelog.hub.failed";
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
        (pGVar8->fields).alignItems = "changelog.hub.failed";
        il2cpp_runtime_helper_022b4080();
        pSVar9 = pSVar12;
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).contentLayout = pGVar8;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestState_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
      il2cpp_runtime_helper_023445d0(&"Column");
      g_data_057aebf9 = '\x01';
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
    pGVar8 = pGVar7;
    System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar7->fields).direction = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&pGVar7->fields,extraout_RDX);
      (pGVar7->fields).justify = pSVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).justify,pSVar11);
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pSVar11 = (pGVar7->fields).justify;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar8 = "Column";
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)0x0,pSVar3,pSVar11,
                            pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
        ;
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar8 = pGVar5;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
          (pGVar5->fields).alignItems = pSVar9;
          il2cpp_runtime_helper_022b4080();
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar6->fields).contentLayout = pGVar5;
            il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar7,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-0",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-1",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(92.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-2",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(78.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_3ae5ba0(pSVar11,"-line-3",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(54.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar11,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestCard
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestCard (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44e3cf0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestCard
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  System_String_o *extraout_RDX;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  
  __this = body;
  if (g_data_057aebf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestCard_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-title");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"CHANGELOGS");
    il2cpp_runtime_helper_023445d0(&"row");
    il2cpp_runtime_helper_023445d0(&"changelogSectionHeader");
    __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)&"help-updates-latest-card";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebf4 = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,"CHANGELOGS","changelogSectionHeader","help-updates-latest-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = "row";
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
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,14.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,pSVar11,pSVar3,"help-updates-latest-card",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = __this;
  if (g_data_057aebfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildHelp_b__19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"help-updates-help-title");
    il2cpp_runtime_helper_023445d0(&"HELP");
    il2cpp_runtime_helper_023445d0(&"help-updates-help");
    il2cpp_runtime_helper_023445d0(&"row");
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&"changelogSectionHeader";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebfa = '\x01';
  }
  if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (__this,"HELP","changelogSectionHeader","help-updates-help-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = "row";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar2 + 0x30) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,14.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (__this,pSVar11,pSVar3,"help-updates-help",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&"Close";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebf3 = '\x01';
  }
  if (method != (MethodInfo *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)method,"Close","overlay.close",
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestReady_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-ready");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.ready");
    g_data_057aebf5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = "Column";
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (__this_00,(System_String_o *)0x0,pSVar3,"help-updates-latest-ready",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar6;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar6->fields).alignItems;
      (pGVar6->fields).alignItems = "changelog.hub.ready";
      il2cpp_runtime_helper_022b4080();
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestLoading_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-loading");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.loading");
    g_data_057aebf6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x20) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar11 = (System_String_o *)0x0;
  pGVar6 = "Column";
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,9.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)0x0,pSVar3,"help-updates-latest-loading",
                        pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar11 = (System_String_o *)0x0;
    pGVar6 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pSVar9 = "changelog.hub.loading";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "changelog.hub.loading";
      il2cpp_runtime_helper_022b4080();
      pSVar11 = pSVar9;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-line-3");
    il2cpp_runtime_helper_023445d0(&"-version");
    il2cpp_runtime_helper_023445d0(&"-line-0");
    il2cpp_runtime_helper_023445d0(&"-line-1");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"-line-2");
    g_data_057aebf7 = '\x01';
  }
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-version",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(28.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar5 = "Column";
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestError_b__17_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"help-updates-latest-failed");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"changelog.hub.failed");
      il2cpp_runtime_helper_023445d0(&"FlexStart");
      g_data_057aebf8 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    else {
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar2 + 0x28) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar9 = (System_String_o *)0x0;
    pSVar11 = (System_String_o *)0x0;
    pGVar6 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pSVar11 = "help-updates-latest-failed";
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)0x0,pSVar3,
                          "help-updates-latest-failed",pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pSVar9 = (System_String_o *)0x0;
      pGVar6 = pGVar5;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      pSVar12 = "changelog.hub.failed";
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
        (pGVar5->fields).alignItems = "changelog.hub.failed";
        il2cpp_runtime_helper_022b4080();
        pSVar9 = pSVar12;
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).contentLayout = pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestState_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
      il2cpp_runtime_helper_023445d0(&"Column");
      g_data_057aebf9 = '\x01';
    }
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
    pGVar5 = pGVar8;
    System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar8->fields).direction = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&pGVar8->fields,extraout_RDX);
      (pGVar8->fields).justify = pSVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).justify,pSVar11);
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pSVar11 = (pGVar8->fields).justify;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = "Column";
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,(System_String_o *)0x0,pSVar3,pSVar11,
                            pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
        ;
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar5 = pGVar6;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar6->fields).alignItems;
          (pGVar6->fields).alignItems = pSVar9;
          il2cpp_runtime_helper_022b4080();
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar7->fields).contentLayout = pGVar6;
            il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pSVar9,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-0",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pSVar9,pGVar5,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-1",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(92.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pSVar9,pGVar5,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-2",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(78.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pSVar9,pGVar5,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_3ae5ba0(pSVar11,"-line-3",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(54.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pSVar11,pGVar5,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestReady (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x44e41d0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestReady
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  System_String_o *extraout_RDX;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  
  if (g_data_057aebf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestReady_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-ready");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.ready");
    g_data_057aebf5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)0x0,pSVar3,"help-updates-latest-ready",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "changelog.hub.ready";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestLoading_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-loading");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.loading");
    g_data_057aebf6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x20) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar11 = (System_String_o *)0x0;
  pGVar5 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,9.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,(System_String_o *)0x0,pSVar3,"help-updates-latest-loading",
                        pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar11 = (System_String_o *)0x0;
    pGVar5 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
    pSVar9 = "changelog.hub.loading";
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
      (pGVar8->fields).alignItems = "changelog.hub.loading";
      il2cpp_runtime_helper_022b4080();
      pSVar11 = pSVar9;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-line-3");
    il2cpp_runtime_helper_023445d0(&"-version");
    il2cpp_runtime_helper_023445d0(&"-line-0");
    il2cpp_runtime_helper_023445d0(&"-line-1");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"-line-2");
    g_data_057aebf7 = '\x01';
  }
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-version",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(28.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestError_b__17_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"help-updates-latest-failed");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"changelog.hub.failed");
      il2cpp_runtime_helper_023445d0(&"FlexStart");
      g_data_057aebf8 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    else {
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar2 + 0x28) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar9 = (System_String_o *)0x0;
    pSVar11 = (System_String_o *)0x0;
    pGVar5 = "Column";
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pSVar11 = "help-updates-latest-failed";
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,(System_String_o *)0x0,pSVar3,
                          "help-updates-latest-failed",pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pSVar9 = (System_String_o *)0x0;
      pGVar5 = pGVar8;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
      pSVar12 = "changelog.hub.failed";
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
        (pGVar8->fields).alignItems = "changelog.hub.failed";
        il2cpp_runtime_helper_022b4080();
        pSVar9 = pSVar12;
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).contentLayout = pGVar8;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestState_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
      il2cpp_runtime_helper_023445d0(&"Column");
      g_data_057aebf9 = '\x01';
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
    pGVar8 = pGVar7;
    System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar7->fields).direction = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&pGVar7->fields,extraout_RDX);
      (pGVar7->fields).justify = pSVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).justify,pSVar11);
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pSVar11 = (pGVar7->fields).justify;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar8 = "Column";
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)0x0,pSVar3,pSVar11,
                            pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
        ;
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar8 = pGVar5;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
          (pGVar5->fields).alignItems = pSVar9;
          il2cpp_runtime_helper_022b4080();
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar6->fields).contentLayout = pGVar5;
            il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar7,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-0",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-1",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(92.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-2",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(78.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar9,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar11 = System_String__Concat_3ae5ba0(pSVar11,"-line-3",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(54.0,(MethodInfo *)0x0);
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar11,pGVar8,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestLoading (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x44e4450

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  System_String_o *extraout_RDX;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  
  if (g_data_057aebf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestLoading_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-loading");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.loading");
    g_data_057aebf6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x20) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar11 = (System_String_o *)0x0;
  pGVar10 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,9.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)0x0,pSVar3,"help-updates-latest-loading",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar11 = (System_String_o *)0x0;
    pGVar10 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pSVar7 = "changelog.hub.loading";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "changelog.hub.loading";
      il2cpp_runtime_helper_022b4080();
      pSVar11 = pSVar7;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-line-3");
    il2cpp_runtime_helper_023445d0(&"-version");
    il2cpp_runtime_helper_023445d0(&"-line-0");
    il2cpp_runtime_helper_023445d0(&"-line-1");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"-line-2");
    g_data_057aebf7 = '\x01';
  }
  pSVar7 = System_String__Concat_3ae5ba0(pSVar11,"-version",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(28.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar5 = "Column";
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,pSVar7,pGVar9,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_3ae5ba0(pSVar11,"-line-0",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,pSVar7,pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_3ae5ba0(pSVar11,"-line-1",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(92.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,pSVar7,pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar7 = System_String__Concat_3ae5ba0(pSVar11,"-line-2",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(78.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,pSVar7,pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar11 = System_String__Concat_3ae5ba0(pSVar11,"-line-3",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(54.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar8,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,pSVar11,pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestError_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-failed");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.failed");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aebf8 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x28) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)0x0;
  pSVar11 = (System_String_o *)0x0;
  pGVar10 = "Column";
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pSVar11 = "help-updates-latest-failed";
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)0x0,pSVar3,"help-updates-latest-failed",
                        pGVar9,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar7 = (System_String_o *)0x0;
    pGVar10 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pSVar12 = "changelog.hub.failed";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "changelog.hub.failed";
      il2cpp_runtime_helper_022b4080();
      pSVar7 = pSVar12;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestState_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    g_data_057aebf9 = '\x01';
  }
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
  pGVar5 = pGVar9;
  System_Object___ctor((Il2CppObject *)pGVar9,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar9->fields).direction = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&pGVar9->fields,extraout_RDX);
    (pGVar9->fields).justify = pSVar11;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).justify,pSVar11);
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar11 = (pGVar9->fields).justify;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = "Column";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,(System_String_o *)0x0,pSVar3,pSVar11,
                          pGVar9,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar5 = pGVar10;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar10,(MethodInfo *)0x0);
      if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar10->fields).alignItems;
        (pGVar10->fields).alignItems = pSVar7;
        il2cpp_runtime_helper_022b4080();
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).contentLayout = pGVar10;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar10);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildPreviewSkeleton
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* idPrefix, const MethodInfo* method);
// 0x44e46d0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildPreviewSkeleton
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *idPrefix,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  System_Action_AottgUi__o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  System_String_o *extraout_RDX;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  
  if (g_data_057aebf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-line-3");
    il2cpp_runtime_helper_023445d0(&"-version");
    il2cpp_runtime_helper_023445d0(&"-line-0");
    il2cpp_runtime_helper_023445d0(&"-line-1");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0(&"-line-2");
    g_data_057aebf7 = '\x01';
  }
  pSVar3 = System_String__Concat_3ae5ba0(idPrefix,"-version",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(28.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar7 = "Column";
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestError_b__17_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"help-updates-latest-failed");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"changelog.hub.failed");
      il2cpp_runtime_helper_023445d0(&"FlexStart");
      g_data_057aebf8 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar8 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    else {
      pSVar8 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
    }
    if (pSVar8 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar2 + 0x28) = pSVar8;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar8);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar11 = (System_String_o *)0x0;
    pSVar3 = (System_String_o *)0x0;
    pGVar6 = "Column";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pSVar3 = "help-updates-latest-failed";
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,(System_String_o *)0x0,pSVar8,
                           "help-updates-latest-failed",pGVar9,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pSVar11 = (System_String_o *)0x0;
      pGVar6 = pGVar7;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar7,(MethodInfo *)0x0);
      pSVar12 = "changelog.hub.failed";
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar7->fields).alignItems;
        (pGVar7->fields).alignItems = "changelog.hub.failed";
        il2cpp_runtime_helper_022b4080();
        pSVar11 = pSVar12;
        if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar10->fields).contentLayout = pGVar7;
          il2cpp_runtime_helper_022b4080(&(pGVar10->fields).contentLayout,pGVar7);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestState_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
      il2cpp_runtime_helper_023445d0(&"Column");
      g_data_057aebf9 = '\x01';
    }
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
    pGVar7 = pGVar9;
    System_Object___ctor((Il2CppObject *)pGVar9,(MethodInfo *)0x0);
    if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar9->fields).direction = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&pGVar9->fields,extraout_RDX);
      (pGVar9->fields).justify = pSVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar9->fields).justify,pSVar3);
      pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pSVar3 = (pGVar9->fields).justify;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar7 = "Column";
      pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,(System_String_o *)0x0,pSVar8,pSVar3,
                             pGVar9,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                            );
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pGVar7 = pGVar6;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar6->fields).alignItems;
          (pGVar6->fields).alignItems = pSVar11;
          il2cpp_runtime_helper_022b4080();
          if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar10->fields).contentLayout = pGVar6;
            il2cpp_runtime_helper_022b4080(&(pGVar10->fields).contentLayout,pGVar6);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (ui,pSVar3,pGVar6,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_3ae5ba0(idPrefix,"-line-0",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (ui,pSVar3,pGVar7,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_3ae5ba0(idPrefix,"-line-1",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(92.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (ui,pSVar3,pGVar7,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_3ae5ba0(idPrefix,"-line-2",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(78.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (ui,pSVar3,pGVar7,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_3ae5ba0(idPrefix,"-line-3",(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(54.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (ui,pSVar3,pGVar7,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestError (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x44e4b70

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestError
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *pSVar9;
  System_String_o *extraout_RDX;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  
  if (g_data_057aebf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestError_b__17_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"help-updates-latest-failed");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"changelog.hub.failed");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aebf8 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar2 + 0x28) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pSVar10 = (System_String_o *)0x0;
  pSVar9 = (System_String_o *)0x0;
  pGVar8 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSVar9 = "help-updates-latest-failed";
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,(System_String_o *)0x0,pSVar3,"help-updates-latest-failed",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar10 = (System_String_o *)0x0;
    pGVar8 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pSVar11 = "changelog.hub.failed";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "changelog.hub.failed";
      il2cpp_runtime_helper_022b4080();
      pSVar10 = pSVar11;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestState_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    g_data_057aebf9 = '\x01';
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
  pGVar5 = pGVar7;
  System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar7->fields).direction = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&pGVar7->fields,extraout_RDX);
    (pGVar7->fields).justify = pSVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).justify,pSVar9);
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar9 = (pGVar7->fields).justify;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = "Column";
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,(System_String_o *)0x0,pSVar3,pSVar9,
                          pGVar7,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar5 = pGVar8;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
        (pGVar8->fields).alignItems = pSVar10;
        il2cpp_runtime_helper_022b4080();
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).contentLayout = pGVar8;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildLatestState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestState (Gisketch_Aottg2UI_Code_AottgUi_o* card, System_String_o* visibleKey, System_String_o* text, System_String_o* id, const MethodInfo* method);
// 0x44e4df0

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildLatestState
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,System_String_o *visibleKey,System_String_o *text,
               System_String_o *id,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (g_data_057aebf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestState_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    g_data_057aebf9 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
  __this = pGVar1;
  System_Object___ctor((Il2CppObject *)pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar1->fields).direction = text;
    il2cpp_runtime_helper_022b4080(&pGVar1->fields,text);
    (pGVar1->fields).justify = id;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).justify,id);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    id_00 = (pGVar1->fields).justify;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this = "Column";
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (card,(System_String_o *)0x0,build,id_00,pGVar1,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      __this = pGVar1;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar1,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar1->fields).alignItems;
        (pGVar1->fields).alignItems = visibleKey;
        il2cpp_runtime_helper_022b4080();
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).contentLayout = pGVar1;
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar1);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildHelp
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelp (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44e3f30

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelp
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  System_String_o *extraout_RDX;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  
  __this = body;
  if (g_data_057aebfa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildHelp_b__19_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"help-updates-help-title");
    il2cpp_runtime_helper_023445d0(&"HELP");
    il2cpp_runtime_helper_023445d0(&"help-updates-help");
    il2cpp_runtime_helper_023445d0(&"row");
    __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)&"changelogSectionHeader";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebfa = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,"HELP","changelogSectionHeader","help-updates-help-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = "row";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar2 + 0x30) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x30,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,14.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,pSVar11,pSVar3,"help-updates-help",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)&"Close";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebf3 = '\x01';
  }
  if (method == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestReady_b__14_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"Stretch");
      il2cpp_runtime_helper_023445d0(&"help-updates-latest-ready");
      il2cpp_runtime_helper_023445d0(&"changelog.hub.ready");
      g_data_057aebf5 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    }
    else {
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    }
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar2 + 0x18) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x18,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = "Column";
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (__this,(System_String_o *)0x0,pSVar3,"help-updates-latest-ready",pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar5 = pGVar6;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar6->fields).alignItems;
        (pGVar6->fields).alignItems = "changelog.hub.ready";
        il2cpp_runtime_helper_022b4080();
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).contentLayout = pGVar6;
          il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestLoading_b__15_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"Stretch");
      il2cpp_runtime_helper_023445d0(&"help-updates-latest-loading");
      il2cpp_runtime_helper_023445d0(&"changelog.hub.loading");
      g_data_057aebf6 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    else {
      pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar2 + 0x20) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar11 = (System_String_o *)0x0;
    pGVar6 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,9.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)0x0,pSVar3,
                          "help-updates-latest-loading",pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pSVar11 = (System_String_o *)0x0;
      pGVar6 = pGVar5;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      pSVar9 = "changelog.hub.loading";
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
        (pGVar5->fields).alignItems = "changelog.hub.loading";
        il2cpp_runtime_helper_022b4080();
        pSVar11 = pSVar9;
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).contentLayout = pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aebf7 == '\0') {
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"-line-3");
      il2cpp_runtime_helper_023445d0(&"-version");
      il2cpp_runtime_helper_023445d0(&"-line-0");
      il2cpp_runtime_helper_023445d0(&"-line-1");
      il2cpp_runtime_helper_023445d0(&"skeleton");
      il2cpp_runtime_helper_023445d0(&"-line-2");
      g_data_057aebf7 = '\x01';
    }
    pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-version",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(28.0,(MethodInfo *)0x0);
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar5 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aebf8 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestError_b__17_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        il2cpp_runtime_helper_023445d0(&"help-updates-latest-failed");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"changelog.hub.failed");
        il2cpp_runtime_helper_023445d0(&"FlexStart");
        g_data_057aebf8 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Action_AottgUi__o **)(lVar2 + 0x28) = pSVar3;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x28,pSVar3);
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pSVar9 = (System_String_o *)0x0;
      pSVar11 = (System_String_o *)0x0;
      pGVar6 = "Column";
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                          (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pSVar11 = "help-updates-latest-failed";
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,(System_String_o *)0x0,pSVar3,
                            "help-updates-latest-failed",pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pSVar9 = (System_String_o *)0x0;
        pGVar6 = pGVar5;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
        pSVar12 = "changelog.hub.failed";
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
          (pGVar5->fields).alignItems = "changelog.hub.failed";
          il2cpp_runtime_helper_022b4080();
          pSVar9 = pSVar12;
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar7->fields).contentLayout = pGVar5;
            il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aebf9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLatestState_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass18_0);
        il2cpp_runtime_helper_023445d0(&"Column");
        g_data_057aebf9 = '\x01';
      }
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass18_0);
      pGVar5 = pGVar8;
      System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar8->fields).direction = extraout_RDX;
        il2cpp_runtime_helper_022b4080(&pGVar8->fields,extraout_RDX);
        (pGVar8->fields).justify = pSVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).justify,pSVar11);
        pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        pSVar11 = (pGVar8->fields).justify;
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar5 = "Column";
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,(System_String_o *)0x0,pSVar3,pSVar11
                              ,pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              (MethodInfo *)0x0);
          pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pGVar5 = pGVar6;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar6->fields).alignItems;
            (pGVar6->fields).alignItems = pSVar9;
            il2cpp_runtime_helper_022b4080();
            if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar7->fields).contentLayout = pGVar6;
              il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pSVar9,pGVar8,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-0",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pSVar9,pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-1",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(92.0,(MethodInfo *)0x0);
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pSVar9,pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_3ae5ba0(pSVar11,"-line-2",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(78.0,(MethodInfo *)0x0);
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pSVar9,pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar11 = System_String__Concat_3ae5ba0(pSVar11,"-line-3",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(54.0,(MethodInfo *)0x0);
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar10,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar6,pSVar11,pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
            ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)method,"Close","overlay.close",(MethodInfo *)0x0)
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$BuildHelpLink
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelpLink (Gisketch_Aottg2UI_Code_AottgUi_o* help, SimpleJSONFixed_JSONNode_o* node, int32_t index, const MethodInfo* method);
// 0x44e5000

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__BuildHelpLink
               (Gisketch_Aottg2UI_Code_AottgUi_o *help,SimpleJSONFixed_JSONNode_o *node,int32_t index,
               MethodInfo *method)

{
  bool_conflict bVar1;
  long *plVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  System_String_o *id;
  System_String_o *icon;
  System_String_o *__this;
  System_String_o **ppSVar4;
  int32_t local_1c;
  
  local_1c = index;
  if (g_data_057aebfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"changelog.openHelpLink");
    il2cpp_runtime_helper_023445d0(&"help-updates-link-");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"Help link");
    g_data_057aebfb = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (System_String_o *)node;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    if ((node == (SimpleJSONFixed_JSONNode_o *)0x0) ||
       (plVar2 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                   (node,"Title",(node->klass->vtable)._7_get_Item.method),
       __this = (System_String_o *)node, plVar2 == (long *)0x0)) goto label_044e5164;
    pSVar3 = (System_String_o *)(**(code **)(*plVar2 + 0x1c8))(plVar2);
  }
  bVar1 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pSVar3 = "Help link";
  }
  method_00 = (MethodInfo *)System_Int32__ToString((int32_t)&local_1c,(MethodInfo *)0x0);
  id = System_String__Concat_3ae5ba0("help-updates-link-",(System_String_o *)method_00,(MethodInfo *)0x0);
  __this = pSVar3;
  icon = Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__HelpIcon(pSVar3,method_00);
  if (help != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (help,3,pSVar3,"changelog.openHelpLink",id,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,icon,(MethodInfo *)0x0);
    return;
  }
label_044e5164:
  il2cpp_runtime_helper_022b2c90();
  ppSVar4 = (System_String_o **)__this;
  if (g_data_057aebfc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icons/material-icons/map");
    il2cpp_runtime_helper_023445d0(&"map");
    il2cpp_runtime_helper_023445d0(&"Icons/material-icons/integration_instructions");
    il2cpp_runtime_helper_023445d0(&"code");
    ppSVar4 = &"logic";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebfc = '\x01';
  }
  if (__this == (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    __this = (System_String_o *)ppSVar4;
  }
  else {
    pSVar3 = System_String__ToLowerInvariant(__this,(MethodInfo *)0x0);
  }
  if (pSVar3 == (System_String_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  bVar1 = System_String__Contains(pSVar3,"map",(MethodInfo *)0x0);
  if (((char)bVar1 == '\0') &&
     (bVar1 = System_String__Contains(pSVar3,"logic",(MethodInfo *)0x0), (char)bVar1 == '\0')) {
    System_String__Contains(pSVar3,"code",(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$HelpIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__HelpIcon (System_String_o* title, const MethodInfo* method);
// 0x44e5170

System_String_o *
Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog__HelpIcon(System_String_o *title,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *extraout_RAX;
  System_String_o *__this;
  System_String_o *pSVar2;
  undefined8 *puVar3;
  
  pSVar2 = title;
  if (g_data_057aebfc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icons/material-icons/map");
    il2cpp_runtime_helper_023445d0(&"map");
    il2cpp_runtime_helper_023445d0(&"Icons/material-icons/integration_instructions");
    il2cpp_runtime_helper_023445d0(&"code");
    pSVar2 = (System_String_o *)&"logic";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebfc = '\x01';
  }
  if (title == (System_String_o *)0x0) {
    __this = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    title = pSVar2;
  }
  else {
    __this = System_String__ToLowerInvariant(title,(MethodInfo *)0x0);
  }
  if (__this != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(__this,"map",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__Contains(__this,"logic",(MethodInfo *)0x0);
      puVar3 = &"Icons/material-icons/integration_instructions";
      if ((char)bVar1 == '\0') {
        System_String__Contains(__this,"code",(MethodInfo *)0x0);
      }
    }
    else {
      puVar3 = &"Icons/material-icons/map";
    }
    return (System_String_o *)*puVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)title,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgHelpUpdatesDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___ctor (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o* __this, const MethodInfo* method);
// 0x44e5260

void Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgHelpUpdatesDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}



// Type: Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgScreenWithBrushSidePanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x4535e50

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass23_0$$<BuildSectioned>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0___BuildSectioned_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x45378f0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0___BuildSectioned_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *buildFooter;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_Action_AottgUi__o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar9;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar11;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *in_RCX;
  MethodInfo *method_00;
  int iVar13;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar14;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *str0;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar16;
  MethodInfo *in_R8;
  
  pGVar9 = (__this->fields).__4__this;
  if (pGVar9 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    bVar1 = (__this->fields).deferSections;
    if (g_data_057aeee3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSections_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass28_0);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"DeferredSidePanelSections");
      il2cpp_runtime_helper_023445d0(&"-scroll");
      il2cpp_runtime_helper_023445d0(&"-deferred-sections");
      g_data_057aeee3 = '\x01';
    }
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass28_0);
    str0 = pGVar2;
    System_Object___ctor((Il2CppObject *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      str0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar2->fields).id;
      (pGVar2->fields).id = (System_String_o *)pGVar9;
      il2cpp_runtime_helper_022b4080();
      if ((char)bVar1 == '\0') {
        pGVar14 = (pGVar9->fields)._sections;
        if (pGVar14 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
          iVar13 = (int)pGVar14->max_length;
          *(int *)&(pGVar2->fields).type = iVar13;
          if (0 < iVar13) {
            iVar13 = 0;
            do {
              Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                        (pGVar9,content,iVar13,(MethodInfo *)in_RCX);
              iVar13 = iVar13 + 1;
            } while (iVar13 < *(int *)&(pGVar2->fields).type);
          }
          return;
        }
      }
      else {
        *(int32_t *)&(pGVar2->fields).type = 0;
        pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        str0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(pGVar9->fields)._id;
        pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-scroll",(MethodInfo *)0x0);
        if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached(content,pSVar3,pSVar4,(MethodInfo *)0x0);
          if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            return;
          }
          if (pGVar5->max_length == 0) {
            return;
          }
          pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
          str0 = pGVar2;
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
          if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar2->fields).type = "DeferredSidePanelSections";
            il2cpp_runtime_helper_022b4080(&pGVar2->fields);
            pSVar4 = System_String__Concat_3ae5ba0((pGVar9->fields)._id,"-deferred-sections",(MethodInfo *)0x0);
            (pGVar2->fields).id = pSVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar2->fields).id,pSVar4);
            *(undefined1 *)((long)&(pGVar2->fields).hasIcon + 2) = 1;
            (pGVar2->fields).steps = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)pGVar5;
            il2cpp_runtime_helper_022b4080(&(pGVar2->fields).steps,pGVar5);
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
            pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar7,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
            il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar8);
            Gisketch_Aottg2UI_Code_AottgUi__Add(content,pGVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)str0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar14 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)content;
  pGVar16 = pGVar9;
  if (g_data_057aeeef == '\0') {
    pGVar16 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&TypeInfo_AottgBrushSidePanel;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeef = '\x01';
  }
  pSVar4 = (pGVar9->fields)._id;
  if (pSVar4 != (System_String_o *)0x0) {
    pGVar15 = (pGVar9->fields)._sections;
    pGVar14 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)pSVar4[1].klass;
    in_RCX = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)pSVar4[2].klass;
    pGVar9 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBrushSidePanel);
    pGVar16 = pGVar9;
    Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor
              ((Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *)pGVar9,(System_String_o *)pGVar14,
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)pGVar15,in_RCX,in_R8);
    if ((Gisketch_Aottg2UI_Game_AottgScreenSection_array *)content !=
        (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar9,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = pGVar14;
  pGVar9 = pGVar16;
  if (g_data_057aeef0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelScreenScroll");
    pGVar9 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"-scroll";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef0 = '\x01';
  }
  pSVar4 = (pGVar16->fields)._title;
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar3 = (System_Action_AottgUi__o *)(pGVar16->fields)._id;
    pGVar10 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
              System_String__Concat_3ae5ba0((System_String_o *)pSVar4->fields,"-scroll",(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar11 = "brushSidePanelScreenScroll";
    pGVar15 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0;
    in_RCX = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    pGVar9 = "Column";
    contentLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)"Center",
                    (System_String_o *)0x0,(System_String_o *)0x0,48.0,pGVar6,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,98.0,
                    *(float *)(&g_data_00d1d670 +
                              (ulong)((pGVar16->fields)._sections ==
                                     (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) * 4),0.0,0.0,0.0,
                    1.0,(MethodInfo *)0x0);
    if (pGVar14 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,(System_String_o *)pGVar11,pSVar3,
                 (System_String_o *)pGVar10,pGVar8,contentLayout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      buildFooter = (pGVar16->fields)._sections;
      if (buildFooter == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
        return;
      }
      pGVar16 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar16->fields)._title;
      pGVar9 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0;
      in_RCX = pGVar10;
      pGVar15 = pGVar11;
      if (pGVar16 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddContentFooter
                  (pGVar16,(Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,(System_Action_AottgUi__o *)buildFooter
                   ,(MethodInfo *)pGVar10);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar14 = pGVar15;
  pGVar16 = pGVar9;
  if (g_data_057aeef1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddContentFooter_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-content-footer");
    pGVar16 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"brushSidePanelContentFooter";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef1 = '\x01';
  }
  pSVar4 = "brushSidePanelContentFooter";
  pGVar11 = (pGVar9->fields)._sections;
  if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    pGVar16 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&(pGVar9->fields)._sections;
    pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    in_RCX = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    System_Action_object____ctor();
    (pGVar9->fields)._sections = pGVar11;
    pGVar14 = pGVar11;
    il2cpp_runtime_helper_022b4080();
  }
  pSVar12 = (pGVar9->fields)._id;
  if (pSVar12 != (System_String_o *)0x0) {
    pSVar12 = System_String__Concat_3ae5ba0((System_String_o *)pSVar12->fields,"-content-footer",(MethodInfo *)0x0)
    ;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    in_RCX = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    pGVar14 = "Center";
    pGVar16 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)"Center","Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar15 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar15,pSVar4,(System_Action_AottgUi__o *)pGVar11,
                 pSVar12,pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar15 = pGVar14;
  pGVar9 = pGVar16;
  if (g_data_057aeef2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-content-footer-actions");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-content-footer-texture");
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Texture/SeamlessGrunge");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    pGVar9 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"brushSidePanelContentFooterTexture";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef2 = '\x01';
  }
  pSVar4 = (pGVar16->fields)._id;
  if (pSVar4 != (System_String_o *)0x0) {
    pGVar10 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
              System_String__Concat_3ae5ba0((System_String_o *)pSVar4->fields,"-content-footer-texture",(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar15 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0;
    in_RCX = "Absolute";
    pGVar9 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)"Absolute",(System_String_o *)0x0,0.0,pGVar6,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar14 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      pGVar15 = "GisketchUI/Texture/SeamlessGrunge";
      Gisketch_Aottg2UI_Code_AottgUi__Image
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,(System_String_o *)"GisketchUI/Texture/SeamlessGrunge","brushSidePanelContentFooterTexture",
                 (System_String_o *)pGVar10,pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      pGVar9 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar16->fields)._id;
      in_RCX = pGVar10;
      if (pGVar9 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        pGVar15 = pGVar14;
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge
                  (pGVar9,(Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,method_00);
        pSVar4 = (pGVar16->fields)._id;
        in_RCX = pGVar10;
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar3 = (System_Action_AottgUi__o *)(pGVar16->fields)._title;
          pSVar4 = System_String__Concat_3ae5ba0
                             ((System_String_o *)pSVar4->fields,"-content-footer-actions",(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row","FlexEnd",(System_String_o *)"Center",(System_String_o *)0x0
                              ,(System_String_o *)0x0,12.0,pGVar6,pGVar7,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,20.0,20.0,
                              0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar14,"default",pSVar3,pSVar4,pGVar8,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar16 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar9->fields)._title;
  if (pGVar16 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    iVar13 = *(int *)&(pGVar9->fields)._id;
    do {
      pGVar14 = (pGVar16->fields)._sections;
      if (pGVar14 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
      if ((int)pGVar14->max_length <= iVar13) {
        return;
      }
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                (pGVar16,(Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar15,iVar13,(MethodInfo *)in_RCX);
      iVar13 = iVar13 + 1;
      pGVar16 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar9->fields)._title;
    } while (pGVar16 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass23_0$$<BuildSectioned>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0___BuildSectioned_b__1 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x4537910

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0___BuildSectioned_b__1
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *buildFooter;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar2;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *in_RCX;
  MethodInfo *method_00;
  int index;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar10;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar11;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar12;
  MethodInfo *in_R8;
  
  pGVar10 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)panel;
  pGVar12 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)__this;
  if (g_data_057aeeef == '\0') {
    pGVar12 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&TypeInfo_AottgBrushSidePanel;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeef = '\x01';
  }
  pGVar2 = (__this->fields).__4__this;
  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    pGVar3 = (__this->fields).options;
    pGVar10 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)(pGVar2->fields)._title;
    in_RCX = (pGVar2->fields)._footerOptions;
    pGVar2 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBrushSidePanel);
    pGVar12 = pGVar2;
    Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor
              ((Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *)pGVar2,(System_String_o *)pGVar10,pGVar3,in_RCX
               ,in_R8);
    if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar2,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = pGVar10;
  pGVar2 = pGVar12;
  if (g_data_057aeef0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelScreenScroll");
    pGVar2 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"-scroll";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef0 = '\x01';
  }
  pSVar9 = (pGVar12->fields)._title;
  if (pSVar9 != (System_String_o *)0x0) {
    pSVar1 = (System_Action_AottgUi__o *)(pGVar12->fields)._id;
    pGVar3 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
             System_String__Concat_3ae5ba0((System_String_o *)pSVar9->fields,"-scroll",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar7 = "brushSidePanelScreenScroll";
    pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0;
    in_RCX = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    pGVar2 = "Column";
    contentLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)"Center",
                    (System_String_o *)0x0,(System_String_o *)0x0,48.0,pGVar4,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,98.0,
                    *(float *)(&g_data_00d1d670 +
                              (ulong)((pGVar12->fields)._sections ==
                                     (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) * 4),0.0,0.0,0.0,
                    1.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,(System_String_o *)pGVar7,pSVar1,
                 (System_String_o *)pGVar3,pGVar6,contentLayout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      buildFooter = (pGVar12->fields)._sections;
      if (buildFooter == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
        return;
      }
      pGVar12 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar12->fields)._title;
      pGVar2 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0;
      in_RCX = pGVar3;
      pGVar11 = pGVar7;
      if (pGVar12 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddContentFooter
                  (pGVar12,(Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,(System_Action_AottgUi__o *)buildFooter
                   ,(MethodInfo *)pGVar3);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar10 = pGVar11;
  pGVar12 = pGVar2;
  if (g_data_057aeef1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddContentFooter_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-content-footer");
    pGVar12 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"brushSidePanelContentFooter";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef1 = '\x01';
  }
  pSVar9 = "brushSidePanelContentFooter";
  pGVar7 = (pGVar2->fields)._sections;
  if (pGVar7 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    pGVar12 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&(pGVar2->fields)._sections;
    pGVar7 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    in_RCX = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    System_Action_object____ctor();
    (pGVar2->fields)._sections = pGVar7;
    pGVar10 = pGVar7;
    il2cpp_runtime_helper_022b4080();
  }
  pSVar8 = (pGVar2->fields)._id;
  if (pSVar8 != (System_String_o *)0x0) {
    pSVar8 = System_String__Concat_3ae5ba0((System_String_o *)pSVar8->fields,"-content-footer",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    in_RCX = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    pGVar10 = "Center";
    pGVar12 = "Column";
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)"Center","Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar11,pSVar9,(System_Action_AottgUi__o *)pGVar7,pSVar8,
                 pGVar6,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = pGVar10;
  pGVar2 = pGVar12;
  if (g_data_057aeef2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-content-footer-actions");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-content-footer-texture");
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Texture/SeamlessGrunge");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    pGVar2 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"brushSidePanelContentFooterTexture";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef2 = '\x01';
  }
  pSVar9 = (pGVar12->fields)._id;
  if (pSVar9 != (System_String_o *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
             System_String__Concat_3ae5ba0((System_String_o *)pSVar9->fields,"-content-footer-texture",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0;
    in_RCX = "Absolute";
    pGVar2 = "Column";
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)"Absolute",(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      pGVar11 = "GisketchUI/Texture/SeamlessGrunge";
      Gisketch_Aottg2UI_Code_AottgUi__Image
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,(System_String_o *)"GisketchUI/Texture/SeamlessGrunge","brushSidePanelContentFooterTexture",
                 (System_String_o *)pGVar3,pGVar6,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      pGVar2 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar12->fields)._id;
      in_RCX = pGVar3;
      if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        pGVar11 = pGVar10;
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge
                  (pGVar2,(Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,method_00);
        pSVar9 = (pGVar12->fields)._id;
        in_RCX = pGVar3;
        if (pSVar9 != (System_String_o *)0x0) {
          pSVar1 = (System_Action_AottgUi__o *)(pGVar12->fields)._title;
          pSVar9 = System_String__Concat_3ae5ba0
                             ((System_String_o *)pSVar9->fields,"-content-footer-actions",(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row","FlexEnd",(System_String_o *)"Center",(System_String_o *)0x0
                              ,(System_String_o *)0x0,12.0,pGVar4,pGVar5,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,20.0,20.0,
                              0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,"default",pSVar1,pSVar9,pGVar6,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar12 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar2->fields)._title;
  if (pGVar12 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    index = *(int *)&(pGVar2->fields)._id;
    do {
      pGVar10 = (pGVar12->fields)._sections;
      if (pGVar10 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
      if ((int)pGVar10->max_length <= index) {
        return;
      }
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                (pGVar12,(Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar11,index,(MethodInfo *)in_RCX);
      index = index + 1;
      pGVar12 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar2->fields)._title;
    } while (pGVar12 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass25_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x45366e0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass25_0$$<BuildContentLayer>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0___BuildContentLayer_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x45379a0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0___BuildContentLayer_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  MethodInfo *pMVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *build;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  int index;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar8;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar9;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar10;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar11;
  
  pGVar8 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)content;
  pGVar10 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)__this;
  if (g_data_057aeef0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelScreenScroll");
    pGVar10 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"-scroll";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef0 = '\x01';
  }
  pGVar11 = (__this->fields).__4__this;
  if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    pSVar1 = (__this->fields).build;
    pMVar2 = (MethodInfo *)System_String__Concat_3ae5ba0((pGVar11->fields)._id,"-scroll",(MethodInfo *)0x0)
    ;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar9 = "brushSidePanelScreenScroll";
    pGVar8 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0;
    in_RCX = (MethodInfo *)0x0;
    pGVar10 = "Column";
    contentLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)"Center",
                    (System_String_o *)0x0,(System_String_o *)0x0,48.0,pGVar3,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,98.0,
                    *(float *)(&g_data_00d1d670 +
                              (ulong)((__this->fields).buildFooter == (System_Action_AottgUi__o *)0x0) * 4),
                    0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                (content,(System_String_o *)pGVar9,pSVar1,(System_String_o *)pMVar2,pGVar5,contentLayout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar1 = (__this->fields).buildFooter;
      if (pSVar1 == (System_Action_AottgUi__o *)0x0) {
        return;
      }
      pGVar11 = (__this->fields).__4__this;
      pGVar10 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0;
      in_RCX = pMVar2;
      pGVar8 = pGVar9;
      if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddContentFooter(pGVar11,content,pSVar1,pMVar2);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar9 = pGVar8;
  pGVar11 = pGVar10;
  if (g_data_057aeef1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddContentFooter_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-content-footer");
    pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"brushSidePanelContentFooter";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef1 = '\x01';
  }
  pSVar7 = "brushSidePanelContentFooter";
  build = (pGVar10->fields)._sections;
  if (build == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&(pGVar10->fields)._sections;
    build = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    in_RCX = (MethodInfo *)0x0;
    System_Action_object____ctor();
    (pGVar10->fields)._sections = build;
    pGVar9 = build;
    il2cpp_runtime_helper_022b4080();
  }
  pSVar6 = (pGVar10->fields)._id;
  if (pSVar6 != (System_String_o *)0x0) {
    pSVar6 = System_String__Concat_3ae5ba0((System_String_o *)pSVar6->fields,"-content-footer",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    in_RCX = (MethodInfo *)0x0;
    pGVar9 = "Center";
    pGVar11 = "Column";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)"Center","Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,pSVar7,(System_Action_AottgUi__o *)build,pSVar6,
                 pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar8 = pGVar9;
  pGVar10 = pGVar11;
  if (g_data_057aeef2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-content-footer-actions");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-content-footer-texture");
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Texture/SeamlessGrunge");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    pGVar10 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"brushSidePanelContentFooterTexture";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef2 = '\x01';
  }
  pSVar7 = (pGVar11->fields)._id;
  if (pSVar7 != (System_String_o *)0x0) {
    pMVar2 = (MethodInfo *)
             System_String__Concat_3ae5ba0((System_String_o *)pSVar7->fields,"-content-footer-texture",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0;
    in_RCX = "Absolute";
    pGVar10 = "Column";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)"Absolute",(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar9 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      pGVar8 = "GisketchUI/Texture/SeamlessGrunge";
      Gisketch_Aottg2UI_Code_AottgUi__Image
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,(System_String_o *)"GisketchUI/Texture/SeamlessGrunge","brushSidePanelContentFooterTexture",
                 (System_String_o *)pMVar2,pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar11->fields)._id;
      in_RCX = pMVar2;
      if (pGVar10 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        pGVar8 = pGVar9;
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge
                  (pGVar10,(Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,method_00);
        pSVar7 = (pGVar11->fields)._id;
        in_RCX = pMVar2;
        if (pSVar7 != (System_String_o *)0x0) {
          pSVar1 = (System_Action_AottgUi__o *)(pGVar11->fields)._title;
          pSVar7 = System_String__Concat_3ae5ba0
                             ((System_String_o *)pSVar7->fields,"-content-footer-actions",(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row","FlexEnd",(System_String_o *)"Center",(System_String_o *)0x0
                              ,(System_String_o *)0x0,12.0,pGVar3,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,20.0,20.0,
                              0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar9,"default",pSVar1,pSVar7,pGVar5,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar10->fields)._title;
  if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    index = *(int *)&(pGVar10->fields)._id;
    do {
      pGVar9 = (pGVar11->fields)._sections;
      if (pGVar9 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
      if ((int)pGVar9->max_length <= index) {
        return;
      }
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                (pGVar11,(Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,index,in_RCX);
      index = index + 1;
      pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar10->fields)._title;
    } while (pGVar11 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x45368e0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass26_0$$<AddContentFooter>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0___AddContentFooter_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* layer, const MethodInfo* method);
// 0x4537be0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0___AddContentFooter_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *layer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  System_Action_AottgUi__o *pSVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  MethodInfo *id_00;
  System_String_o *pSVar6;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  int index;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar7;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar8;
  
  __this_00 = (System_Action_AottgUi__o *)layer;
  pGVar7 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)__this;
  if (g_data_057aeef1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddContentFooter_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-content-footer");
    pGVar7 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"brushSidePanelContentFooter";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef1 = '\x01';
  }
  pSVar6 = "brushSidePanelContentFooter";
  pSVar2 = (__this->fields).__9__1;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    pGVar7 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&(__this->fields).__9__1;
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    in_RCX = (MethodInfo *)0x0;
    System_Action_object____ctor();
    (__this->fields).__9__1 = pSVar2;
    __this_00 = pSVar2;
    il2cpp_runtime_helper_022b4080();
  }
  pGVar8 = (__this->fields).__4__this;
  if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    id = System_String__Concat_3ae5ba0((pGVar8->fields)._id,"-content-footer",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    in_RCX = (MethodInfo *)0x0;
    __this_00 = "Center";
    pGVar7 = "Column";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)"Center","Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (layer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (layer,pSVar6,pSVar2,id,pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar2 = __this_00;
  pGVar8 = pGVar7;
  if (g_data_057aeef2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-content-footer-actions");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-content-footer-texture");
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Texture/SeamlessGrunge");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    pGVar8 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"brushSidePanelContentFooterTexture";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef2 = '\x01';
  }
  pSVar6 = (pGVar7->fields)._id;
  if (pSVar6 != (System_String_o *)0x0) {
    id_00 = (MethodInfo *)
            System_String__Concat_3ae5ba0((System_String_o *)pSVar6->fields,"-content-footer-texture",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar2 = (System_Action_AottgUi__o *)0x0;
    in_RCX = "Absolute";
    pGVar8 = "Column";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)"Absolute",(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (__this_00 != (System_Action_AottgUi__o *)0x0) {
      pSVar2 = "GisketchUI/Texture/SeamlessGrunge";
      Gisketch_Aottg2UI_Code_AottgUi__Image
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,(System_String_o *)"GisketchUI/Texture/SeamlessGrunge","brushSidePanelContentFooterTexture",
                 (System_String_o *)id_00,pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      pGVar8 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar7->fields)._id;
      in_RCX = id_00;
      if (pGVar8 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        pSVar2 = __this_00;
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge
                  (pGVar8,(Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,method_00);
        pSVar6 = (pGVar7->fields)._id;
        in_RCX = id_00;
        if (pSVar6 != (System_String_o *)0x0) {
          pSVar2 = (System_Action_AottgUi__o *)(pGVar7->fields)._title;
          pSVar6 = System_String__Concat_3ae5ba0
                             ((System_String_o *)pSVar6->fields,"-content-footer-actions",(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row","FlexEnd",(System_String_o *)"Center",(System_String_o *)0x0
                              ,(System_String_o *)0x0,12.0,pGVar3,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,20.0,20.0,
                              0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,"default",pSVar2,pSVar6,pGVar5,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar7 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar8->fields)._title;
  if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    index = *(int *)&(pGVar8->fields)._id;
    do {
      pGVar1 = (pGVar7->fields)._sections;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
      if ((int)pGVar1->max_length <= index) {
        return;
      }
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                (pGVar7,(Gisketch_Aottg2UI_Code_AottgUi_o *)pSVar2,index,in_RCX);
      index = index + 1;
      pGVar7 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar8->fields)._title;
    } while (pGVar7 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass26_0$$<AddContentFooter>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0___AddContentFooter_b__1 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x4537db0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0___AddContentFooter_b__1
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  MethodInfo *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_String_o *id_00;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  int index;
  Gisketch_Aottg2UI_Code_AottgUi_o *content;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar5;
  
  content = footer;
  __this_00 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)__this;
  if (g_data_057aeef2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-content-footer-actions");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-content-footer-texture");
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Texture/SeamlessGrunge");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    __this_00 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&"brushSidePanelContentFooterTexture";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef2 = '\x01';
  }
  pGVar5 = (__this->fields).__4__this;
  if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    id = (MethodInfo *)System_String__Concat_3ae5ba0((pGVar5->fields)._id,"-content-footer-texture",(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    content = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    in_RCX = "Absolute";
    __this_00 = "Column";
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)"Absolute",(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      content = "GisketchUI/Texture/SeamlessGrunge";
      Gisketch_Aottg2UI_Code_AottgUi__Image
                (footer,(System_String_o *)"GisketchUI/Texture/SeamlessGrunge","brushSidePanelContentFooterTexture",(System_String_o *)id,pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      __this_00 = (__this->fields).__4__this;
      in_RCX = id;
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        content = footer;
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge(__this_00,footer,method_00);
        pGVar5 = (__this->fields).__4__this;
        in_RCX = id;
        if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
          build = (__this->fields).buildFooter;
          id_00 = System_String__Concat_3ae5ba0((pGVar5->fields)._id,"-content-footer-actions",(MethodInfo *)0x0);
          pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row","FlexEnd","Center",(System_String_o *)0x0,
                              (System_String_o *)0x0,12.0,pGVar2,pGVar3,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,20.0,20.0,
                              0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (footer,"default",build,id_00,pGVar4,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar5 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(__this_00->fields)._title;
  if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    index = *(int *)&(__this_00->fields)._id;
    do {
      pGVar1 = (pGVar5->fields)._sections;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
      if ((int)pGVar1->max_length <= index) {
        return;
      }
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection(pGVar5,content,index,in_RCX);
      index = index + 1;
      pGVar5 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(__this_00->fields)._title;
    } while (pGVar5 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass28_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x4536d80

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass28_0$$<BuildSections>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0___BuildSections_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* deferredUi, const MethodInfo* method);
// 0x4538080

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0___BuildSections_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *deferredUi,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  MethodInfo *in_RCX;
  int index;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    index = (__this->fields).immediateCount;
    do {
      pGVar1 = (__this_00->fields)._sections;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
      if ((int)pGVar1->max_length <= index) {
        return;
      }
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection(__this_00,deferredUi,index,in_RCX);
      index = index + 1;
      __this_00 = (__this->fields).__4__this;
    } while (__this_00 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x45371f0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass29_0$$<BuildSection>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___BuildSection_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x45380d0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___BuildSection_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar2;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o section;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *extraout_RDX;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  System_String_o *in_stack_ffffffffffffff60;
  
  if (g_data_057aeef3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSection_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"card");
    g_data_057aeef3 = '\x01';
    method = extraout_RDX;
  }
  __this_00 = (__this->fields).__4__this;
  uVar1 = (__this->fields).section.fields.AutoAddKeywords;
  uVar3 = (__this->fields).section.fields.HideSearch;
  pSVar4 = (__this->fields).section.fields.SearchTitle;
  pSVar9 = (__this->fields).section.fields.Keywords;
  uVar5 = (__this->fields).context.fields._group;
  uVar6 = (__this->fields).context.fields._order;
  uVar7 = *(undefined4 *)&(__this->fields).context.fields.field_0xc;
  uVar8 = (__this->fields).context.fields._SectionId_k__BackingField;
  context.fields._SectionId_k__BackingField = (System_String_o *)uVar8;
  context.fields._12_4_ = uVar7;
  context.fields._order = uVar6;
  context.fields._group = (System_String_o *)uVar5;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    section.fields.Icon._4_4_ = (int)((ulong)(__this->fields).section.fields.Icon >> 0x20);
    section.fields._0_44_ = *(undefined1 (*) [44])&(__this->fields).section.fields;
    section.fields.SearchTitle._0_4_ = (int)pSVar4;
    section.fields.SearchTitle._4_4_ = (int)((ulong)pSVar4 >> 0x20);
    section.fields.Keywords._0_4_ = (int)pSVar9;
    section.fields.Keywords._4_4_ = (int)((ulong)pSVar9 >> 0x20);
    section.fields.AutoAddKeywords = uVar1;
    section.fields.HideSearch = uVar3;
    section.fields.HideHeader = (__this->fields).section.fields.HideHeader;
    section.fields._76_4_ = *(undefined4 *)&(__this->fields).section.fields.field_0x4c;
    context.fields._SectionTitle_k__BackingField = in_stack_ffffffffffffff60;
    Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddSectionHeader
              (__this_00,panel,section,context,method);
    pSVar4 = "card";
    build = (System_Action_AottgUi__o *)(__this->fields).context.fields._SectionTitle_k__BackingField;
    if (build == (System_Action_AottgUi__o *)0x0) {
      __this_00 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)
                  &(__this->fields).context.fields._SectionTitle_k__BackingField;
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      (__this->fields).context.fields._SectionTitle_k__BackingField = (System_String_o *)build;
      il2cpp_runtime_helper_022b4080(__this_00,build);
    }
    pGVar2 = (__this->fields).__4__this;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
      pSVar9 = (__this->fields).section.fields.Id;
      if (g_data_057aeeed == '\0') {
        il2cpp_runtime_helper_023445d0(&"-body");
        g_data_057aeeed = '\x01';
      }
      if (g_data_057aeeeb == '\0') {
        il2cpp_runtime_helper_023445d0(&"-section-");
        g_data_057aeeeb = '\x01';
      }
      pSVar9 = System_String__Concat_3af7150((pGVar2->fields)._id,"-section-",pSVar9,(MethodInfo *)0x0);
      pSVar9 = System_String__Concat_3ae5ba0(pSVar9,"-body",(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      __this_00 = "Column";
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (panel,pSVar4,build,pSVar9,layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((__this_00->fields)._title != (System_String_o *)0x0) {
    il2cpp_runtime_helper_04558d00();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass29_0$$<BuildSection>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___BuildSection_b__1 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4538390

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___BuildSection_b__1
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar1;
  
  pSVar1 = (__this->fields).section.fields._buildContent;
  if (pSVar1 != (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
    il2cpp_runtime_helper_04558d00(pSVar1,body,0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass33_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x45377b0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass33_0$$<AddSectionHeader>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0___AddSectionHeader_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* headerRow, const MethodInfo* method);
// 0x45383d0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0___AddSectionHeader_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *headerRow,MethodInfo *method)

{
  long lVar1;
  System_String_o *text;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0_o *pGVar6;
  UnityEngine_GameObject_o *in_stack_ffffffffffffff78;
  
  pGVar6 = __this;
  if (g_data_057aeef4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    pGVar6 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0_o *)&"header";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef4 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).section.fields.HideHeader;
  if (lVar1 != 0) {
    pSVar3 = (__this->fields).section.fields.Id;
    text = (__this->fields).section.fields.Label;
    if (g_data_057aeeec == '\0') {
      il2cpp_runtime_helper_023445d0(&"-header");
      g_data_057aeeec = '\x01';
    }
    if (g_data_057aeeeb == '\0') {
      il2cpp_runtime_helper_023445d0(&"-section-");
      g_data_057aeeeb = '\x01';
    }
    pSVar3 = System_String__Concat_3af7150
                       (*(System_String_o **)(lVar1 + 0x10),"-section-",pSVar3,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat_3ae5ba0(pSVar3,"-header",(MethodInfo *)0x0);
    if (g_data_057aeeda == '\0') {
      il2cpp_runtime_helper_023445d0(&"slideLeft");
      g_data_057aeeda = '\x01';
    }
    pGVar6 = "slideLeft";
    enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                      ((System_String_o *)"slideLeft",(System_String_o *)(__this->fields).__4__this,0.12,0.01
                       ,0.018,*(int32_t *)&(__this->fields).context.fields._group,(MethodInfo *)0x0);
    if (headerRow != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0_o *)headerRow;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (headerRow,text,"header",pSVar3,(System_String_o *)0x0,enter,(MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).textKey = (__this->fields).section.fields.TextKey;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).textKey);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,1.0,(MethodInfo *)0x0);
        (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar4->fields).search,pGVar5);
        pSVar2 = (__this->fields).section.fields._buildHeaderActions;
        if (pSVar2 != (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
          il2cpp_runtime_helper_04558d00(pSVar2,headerRow,0);
        }
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
            (in_stack_ffffffffffffff78,(pGVar6->fields).section.fields.Id,0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass35_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x4537840

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass35_0$$<SectionOptions>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___SectionOptions_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4538610

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___SectionOptions_b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
            (context.fields.GameObject,(__this->fields).section.fields.Id,0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___cctor (const MethodInfo* method);
// 0x4535790

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o* sidePanel, System_Action_AottgUi__o* buildContent, System_Action_AottgUi__o* buildContentFooter, const MethodInfo* method);
// 0x45357a0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *sidePanel,System_Action_AottgUi__o *buildContent,
               System_Action_AottgUi__o *buildContentFooter,MethodInfo *method)

{
  if (g_data_057aeedc == '\0') {
    il2cpp_runtime_helper_023445d0(&"brush-side-panel");
    g_data_057aeedc = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = "brush-side-panel";
  il2cpp_runtime_helper_022b4080(&__this->fields);
  (__this->fields)._sidePanel = sidePanel;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._sidePanel,sidePanel);
  (__this->fields)._buildContent = buildContent;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._buildContent,buildContent);
  (__this->fields)._buildContentFooter = buildContentFooter;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._buildContentFooter,buildContentFooter);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* title, Gisketch_Aottg2UI_Game_AottgScreenSection_array* sections, int32_t layoutMode, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* footerOptions, System_String_o* id, System_Action_AottgUi__o* buildContentFooter, bool deferScrollSections, const MethodInfo* method);
// 0x4535830

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor_4435830
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,System_String_o *title,
               Gisketch_Aottg2UI_Game_AottgScreenSection_array *sections,int32_t layoutMode,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions,System_String_o *id,
               System_Action_AottgUi__o *buildContentFooter,bool_conflict deferScrollSections,
               MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar4;
  System_Action_AottgUi__o *build;
  System_Action_AottgUi__o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  bool bVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  undefined1 *puVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *ui;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *method_00;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *method_01;
  undefined1 auStack_38 [8];
  
  puVar11 = auStack_38;
  pSVar5 = (System_Action_AottgUi__o *)(ulong)(uint)layoutMode;
  method_01 = footerOptions;
  if (g_data_057aeedd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenSection);
    il2cpp_runtime_helper_023445d0(&"brush-side-panel");
    il2cpp_runtime_helper_023445d0(&"OPTIONS");
    g_data_057aeedd = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)id;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    id = "brush-side-panel";
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    (__this->fields)._id = id;
    il2cpp_runtime_helper_022b4080(&__this->fields);
    bVar1 = System_String__IsNullOrEmpty(title,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      title = "OPTIONS";
    }
    (__this->fields)._title = title;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._title,title);
    if (sections == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      sections = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgScreenSection,0);
    }
    (__this->fields)._sections = sections;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._sections,sections);
    (__this->fields)._layoutMode = layoutMode;
    (__this->fields)._footerOptions = footerOptions;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._footerOptions,footerOptions);
    (__this->fields)._buildContentFooter = buildContentFooter;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._buildContentFooter,buildContentFooter);
    *(undefined1 *)&(__this->fields)._deferScrollSections = (undefined1)deferScrollSections;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((pGVar12->fields).text == (System_String_o *)0x0) {
    puVar11 = &stack0xffffffffffffffa0;
    if (g_data_057aeedf == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLegacy_b__24_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
      il2cpp_runtime_helper_023445d0(&"brush-side-panel-layer");
      il2cpp_runtime_helper_023445d0(&"default");
      g_data_057aeedf = '\x01';
    }
    Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
              ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)pGVar12,
               (Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar2,(System_Action_AottgUi__o *)(pGVar12->fields).action
               ,(System_Action_AottgUi__o *)(pGVar12->fields).inputType,(MethodInfo *)method_01);
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    ui = pGVar12;
    System_Action_object____ctor();
    method_00 = TypeInfo_AottgScreenWithBrushSidePanel;
    if (*(int *)((long)&(TypeInfo_AottgScreenWithBrushSidePanel->fields).layout + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute((MethodInfo *)method_00)
    ;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar2,"default",pSVar5,"brush-side-panel-layer",pGVar6,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    footerOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    pGVar10 = pGVar12;
  }
  else {
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    ui = pGVar2;
    method_00 = pGVar12;
  }
  *(System_String_o **)(puVar11 + -8) = id;
  *(System_Action_AottgUi__o **)(puVar11 + -0x10) = pSVar5;
  *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)(puVar11 + -0x18) = footerOptions;
  *(System_String_o **)(puVar11 + -0x20) = title;
  *(Gisketch_Aottg2UI_Game_AottgScreenSection_array **)(puVar11 + -0x28) = sections;
  *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)(puVar11 + -0x30) = pGVar10;
  if (g_data_057aeede == '\0') {
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535a9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535aa9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535ab5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSidePanelLayoutMode);
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535ac1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535acd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSectioned_b__0);
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535ad9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSectioned_b__1);
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535ae5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535af1;
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-layer");
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535afd;
    il2cpp_runtime_helper_023445d0(&"Column");
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535b09;
    il2cpp_runtime_helper_023445d0(&"default");
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535b15;
    il2cpp_runtime_helper_023445d0(&"-section-navigator");
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535b21;
    il2cpp_runtime_helper_023445d0(&"SectionNavigator");
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535b2d;
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aeede = '\x01';
  }
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535b43;
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535b50;
  pGVar12 = pGVar2;
  System_Object___ctor((Il2CppObject *)pGVar2,(MethodInfo *)0x0);
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_04535e43;
  (pGVar2->fields).type = (System_String_o *)method_00;
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535b69;
  pGVar12 = method_00;
  il2cpp_runtime_helper_022b4080(&pGVar2->fields);
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535b71;
  pSVar3 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds
                     ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)method_00,
                      (MethodInfo *)pGVar12);
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535b7c;
  pGVar4 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions
                     ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)method_00,
                      (MethodInfo *)pGVar12);
  (pGVar2->fields).text = (System_String_o *)pGVar4;
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535b8f;
  il2cpp_runtime_helper_022b4080(&(pGVar2->fields).text);
  if (g_data_057aeee7 == '\0') {
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535ba4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057aeee7 = '\x01';
  }
  if (*(char *)&(method_00->fields).value == '\0') {
label_04535be4:
    bVar9 = false;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535bcb;
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = false;
    pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535bd4;
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)&(method_00->fields).textKey != 0) goto label_04535be4;
      pSVar7 = (method_00->fields).text;
      if (pSVar7 == (System_String_o *)0x0) goto label_04535e43;
      bVar9 = 1 < *(int *)&pSVar7[1].klass;
    }
  }
  *(bool *)&(pGVar2->fields).id = bVar9;
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535bf9;
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535c13;
  System_Action_object____ctor();
  pSVar5 = (System_Action_AottgUi__o *)(method_00->fields).inputType;
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535c26;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
            ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)method_00,
             (Gisketch_Aottg2UI_Code_AottgUi_o *)ui,build,pSVar5,(MethodInfo *)method_01);
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535c2f;
  pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535c49;
  System_Action_object____ctor();
  pGVar12 = TypeInfo_AottgScreenWithBrushSidePanel;
  if (*(int *)((long)&(TypeInfo_AottgScreenWithBrushSidePanel->fields).layout + 4) == 0) {
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535c61;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535c66;
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute((MethodInfo *)pGVar12);
  if (ui != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    *(undefined8 *)(puVar11 + -0x98) = 0;
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535c9c;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)ui,"default",pSVar5,"brush-side-panel-layer",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,*(MethodInfo **)(puVar11 + -0x98));
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535cab;
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined8 *)(puVar11 + -0xa0) = 0x4535cb8;
    pGVar12 = pGVar2;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).type = "SectionNavigator";
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535cd8;
      il2cpp_runtime_helper_022b4080(&pGVar2->fields);
      pSVar7 = (method_00->fields).type;
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535cee;
      pSVar7 = System_String__Concat_3ae5ba0(pSVar7,"-section-navigator",(MethodInfo *)0x0);
      (pGVar2->fields).id = pSVar7;
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535cfe;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).id,pSVar7);
      (pGVar2->fields).text = (method_00->fields).type;
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535d10;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).text);
      *(undefined8 *)(puVar11 + -0x48) = TypeInfo_AottgSidePanelLayoutMode;
      *(undefined8 *)(puVar11 + -0x40) = 0xffffffffffffffff;
      *(undefined4 *)(puVar11 + -0x38) = *(undefined4 *)&(method_00->fields).textKey;
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535d3d;
      pSVar7 = System_Enum__ToString((System_Enum_o *)(puVar11 + -0x48),(MethodInfo *)0x0);
      (pGVar2->fields).value = pSVar7;
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535d4d;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).value,pSVar7);
      *(System_String_array **)&(pGVar2->fields).maxVisibleItems = pSVar3;
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535d63;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).maxVisibleItems,pSVar3);
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535d6d;
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535d7a;
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      *(undefined8 *)(puVar11 + -0x80) = 0;
      *(undefined8 *)(puVar11 + -0x78) = 0;
      *(undefined8 *)(puVar11 + -0x90) = 0;
      *(undefined8 *)(puVar11 + -0x88) = 0;
      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar11 + -0x98) = pGVar8;
      *(undefined8 *)(puVar11 + -0x50) = 0;
      *(undefined4 *)(puVar11 + -0x58) = 0x3f800000;
      *(undefined4 *)(puVar11 + -0x60) = 0;
      *(undefined4 *)(puVar11 + -0x68) = 0;
      *(undefined4 *)(puVar11 + -0x70) = 0;
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535df8;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                          (System_String_o *)0x0,0.0,width,
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar11 + -0x98),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar11 + -0x90),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar11 + -0x88),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar11 + -0x80),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)(puVar11 + -0x78),0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,*(float *)(puVar11 + -0x70),*(float *)(puVar11 + -0x68),
                          *(float *)(puVar11 + -0x60),*(float *)(puVar11 + -0x58),
                          *(MethodInfo **)(puVar11 + -0x50));
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535e11;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar6);
      *(undefined8 *)(puVar11 + -0xa0) = 0x4535e1e;
      Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)ui,pGVar2,(MethodInfo *)0x0);
      return;
    }
  }
label_04535e43:
  *(undefined8 *)(puVar11 + -0xa0) = 0x4535e48;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar12,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__Build (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4535960

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__Build
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar4;
  System_Action_AottgUi__o *build;
  System_Action_AottgUi__o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  bool bVar9;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *unaff_RBX;
  undefined8 unaff_RBP;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  MethodInfo *in_R8;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  System_Action_AottgUi__o *unaff_R15;
  
  if ((__this->fields)._sections == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffd8;
    if (g_data_057aeedf == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLegacy_b__24_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
      il2cpp_runtime_helper_023445d0(&"brush-side-panel-layer");
      il2cpp_runtime_helper_023445d0(&"default");
      g_data_057aeedf = '\x01';
    }
    Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
              (__this,ui,(__this->fields)._buildContent,(__this->fields)._buildContentFooter,in_R8);
    unaff_R15 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    pGVar10 = __this;
    System_Action_object____ctor();
    pGVar11 = TypeInfo_AottgScreenWithBrushSidePanel;
    if (*(int *)((long)&(TypeInfo_AottgScreenWithBrushSidePanel->fields).layout + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute((MethodInfo *)pGVar11);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"default",unaff_R15,"brush-side-panel-layer",pGVar6,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    unaff_R14 = 0;
    unaff_RBX = __this;
    ui = (Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10;
    __this = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)pGVar11;
  }
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(System_Action_AottgUi__o **)((long)register0x00000020 + -0x10) = unaff_R15;
  *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
  *(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
  if (g_data_057aeede == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535a9d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535aa9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535ab5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSidePanelLayoutMode);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535ac1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535acd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSectioned_b__0);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535ad9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSectioned_b__1);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535ae5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535af1;
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-layer");
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535afd;
    il2cpp_runtime_helper_023445d0(&"Column");
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535b09;
    il2cpp_runtime_helper_023445d0(&"default");
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535b15;
    il2cpp_runtime_helper_023445d0(&"-section-navigator");
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535b21;
    il2cpp_runtime_helper_023445d0(&"SectionNavigator");
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535b2d;
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aeede = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535b43;
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535b50;
  pGVar11 = pGVar2;
  System_Object___ctor((Il2CppObject *)pGVar2,(MethodInfo *)0x0);
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_04535e43;
  (pGVar2->fields).type = (System_String_o *)__this;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535b69;
  pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this;
  il2cpp_runtime_helper_022b4080(&pGVar2->fields);
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535b71;
  pSVar3 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds(__this,(MethodInfo *)pGVar11);
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535b7c;
  pGVar4 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions(__this,(MethodInfo *)pGVar11);
  (pGVar2->fields).text = (System_String_o *)pGVar4;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535b8f;
  il2cpp_runtime_helper_022b4080(&(pGVar2->fields).text);
  if (g_data_057aeee7 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535ba4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057aeee7 = '\x01';
  }
  if (*(char *)&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this)->fields).value == '\0') {
label_04535be4:
    bVar9 = false;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535bcb;
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = false;
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535bd4;
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this)->fields).textKey != 0)
      goto label_04535be4;
      pSVar7 = (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this)->fields).text;
      if (pSVar7 == (System_String_o *)0x0) goto label_04535e43;
      bVar9 = 1 < *(int *)&pSVar7[1].klass;
    }
  }
  *(bool *)&(pGVar2->fields).id = bVar9;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535bf9;
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535c13;
  System_Action_object____ctor();
  pSVar5 = (System_Action_AottgUi__o *)
           (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this)->fields).inputType;
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535c26;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer(__this,ui,build,pSVar5,in_R8);
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535c2f;
  pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535c49;
  System_Action_object____ctor();
  pGVar11 = TypeInfo_AottgScreenWithBrushSidePanel;
  if (*(int *)((long)&(TypeInfo_AottgScreenWithBrushSidePanel->fields).layout + 4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535c61;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535c66;
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute((MethodInfo *)pGVar11);
  if ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ui !=
      (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535c9c;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",pSVar5,"brush-side-panel-layer",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               *(MethodInfo **)((long)register0x00000020 + -0x98));
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535cab;
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535cb8;
    pGVar11 = pGVar2;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).type = "SectionNavigator";
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535cd8;
      il2cpp_runtime_helper_022b4080(&pGVar2->fields);
      pSVar7 = (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this)->fields).type;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535cee;
      pSVar7 = System_String__Concat_3ae5ba0(pSVar7,"-section-navigator",(MethodInfo *)0x0);
      (pGVar2->fields).id = pSVar7;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535cfe;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).id,pSVar7);
      (pGVar2->fields).text = (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this)->fields).type;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535d10;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).text);
      *(undefined8 *)((long)register0x00000020 + -0x48) = TypeInfo_AottgSidePanelLayoutMode;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0xffffffffffffffff;
      *(undefined4 *)((long)register0x00000020 + -0x38) =
           *(undefined4 *)&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this)->fields).textKey;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535d3d;
      pSVar7 = System_Enum__ToString((System_Enum_o *)((long)register0x00000020 + -0x48),(MethodInfo *)0x0);
      (pGVar2->fields).value = pSVar7;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535d4d;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).value,pSVar7);
      *(System_String_array **)&(pGVar2->fields).maxVisibleItems = pSVar3;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535d63;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).maxVisibleItems,pSVar3);
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535d6d;
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535d7a;
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x80) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
      *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x98) = pGVar8;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x58) = 0x3f800000;
      *(undefined4 *)((long)register0x00000020 + -0x60) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x68) = 0;
      *(undefined4 *)((long)register0x00000020 + -0x70) = 0;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535df8;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                          (System_String_o *)0x0,0.0,width,
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x98),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x90),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x88),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x80),
                          *(Gisketch_Aottg2UI_Data_GisketchLength_o **)((long)register0x00000020 + -0x78),0.0,
                          0.0,0.0,0.0,0.0,0.0,0.0,*(float *)((long)register0x00000020 + -0x70),
                          *(float *)((long)register0x00000020 + -0x68),
                          *(float *)((long)register0x00000020 + -0x60),
                          *(float *)((long)register0x00000020 + -0x58),
                          *(MethodInfo **)((long)register0x00000020 + -0x50));
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535e11;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar6);
      *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535e1e;
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,pGVar2,(MethodInfo *)0x0);
      return;
    }
  }
label_04535e43:
  *(undefined8 *)((long)register0x00000020 + -0xa0) = 0x4535e48;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar11,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSectioned
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSectioned (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4535a70

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSectioned
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_array *pSVar4;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  bool bVar9;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *method_01;
  MethodInfo *in_R8;
  System_Enum_o SStack_48;
  int32_t iStack_38;
  
  if (g_data_057aeede == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSidePanelLayoutMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSectioned_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSectioned_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-layer");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-section-navigator");
    il2cpp_runtime_helper_023445d0(&"SectionNavigator");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aeede = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  method_01 = pGVar3;
  System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_04535e43;
  (pGVar3->fields).type = (System_String_o *)__this;
  method_00 = (MethodInfo *)__this;
  il2cpp_runtime_helper_022b4080(&pGVar3->fields);
  pSVar4 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds(__this,method_00);
  pGVar5 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions(__this,method_00);
  (pGVar3->fields).text = (System_String_o *)pGVar5;
  il2cpp_runtime_helper_022b4080(&(pGVar3->fields).text);
  if (g_data_057aeee7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057aeee7 = '\x01';
  }
  if ((char)(__this->fields)._deferScrollSections == '\0') {
label_04535be4:
    bVar9 = false;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = false;
    method_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if ((__this->fields)._layoutMode != 0) goto label_04535be4;
      pGVar1 = (__this->fields)._sections;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto label_04535e43;
      bVar9 = 1 < (int)pGVar1->max_length;
    }
  }
  *(bool *)&(pGVar3->fields).id = bVar9;
  pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
            (__this,ui,pSVar6,(__this->fields)._buildContentFooter,in_R8);
  pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  method_01 = TypeInfo_AottgScreenWithBrushSidePanel;
  if (*(int *)((long)&(TypeInfo_AottgScreenWithBrushSidePanel->fields).layout + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar7 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute((MethodInfo *)method_01);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",pSVar6,"brush-side-panel-layer",pGVar7,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    method_01 = pGVar3;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).type = "SectionNavigator";
      il2cpp_runtime_helper_022b4080(&pGVar3->fields);
      pSVar8 = System_String__Concat_3ae5ba0((__this->fields)._id,"-section-navigator",(MethodInfo *)0x0);
      (pGVar3->fields).id = pSVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id,pSVar8);
      (pGVar3->fields).text = (__this->fields)._id;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).text);
      SStack_48.klass = TypeInfo_AottgSidePanelLayoutMode;
      SStack_48.monitor = (void *)0xffffffffffffffff;
      iStack_38 = (__this->fields)._layoutMode;
      pSVar8 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
      (pGVar3->fields).value = pSVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).value,pSVar8);
      *(System_String_array **)&(pGVar3->fields).maxVisibleItems = pSVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).maxVisibleItems,pSVar4);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar3->fields).search,pGVar7);
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,pGVar3,(MethodInfo *)0x0);
      return;
    }
  }
label_04535e43:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)method_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildLegacy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildLegacy (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4535970

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildLegacy
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_array *pSVar5;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  bool bVar8;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *ui_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *method_00;
  MethodInfo *in_R8;
  System_Enum_o SStack_70;
  undefined4 uStack_60;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGStack_58;
  
  if (g_data_057aeedf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLegacy_b__24_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-layer");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aeedf = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
            (__this,ui,(__this->fields)._buildContent,(__this->fields)._buildContentFooter,in_R8);
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  ui_00 = __this;
  System_Action_object____ctor();
  method_00 = TypeInfo_AottgScreenWithBrushSidePanel;
  if (*(int *)((long)&(TypeInfo_AottgScreenWithBrushSidePanel->fields).layout + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute((MethodInfo *)method_00);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",pSVar2,"brush-side-panel-layer",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_58 = __this;
  if (g_data_057aeede == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSidePanelLayoutMode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSectioned_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSectioned_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-layer");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-section-navigator");
    il2cpp_runtime_helper_023445d0(&"SectionNavigator");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aeede = '\x01';
  }
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  pGVar9 = pGVar4;
  System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_04535e43;
  (pGVar4->fields).type = (System_String_o *)method_00;
  pGVar9 = method_00;
  il2cpp_runtime_helper_022b4080(&pGVar4->fields);
  pSVar5 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds
                     ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)method_00,(MethodInfo *)pGVar9
                     );
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions
                     ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)method_00,(MethodInfo *)pGVar9
                     );
  (pGVar4->fields).text = (System_String_o *)pGVar6;
  il2cpp_runtime_helper_022b4080(&(pGVar4->fields).text);
  if (g_data_057aeee7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057aeee7 = '\x01';
  }
  if (*(char *)&(method_00->fields).value == '\0') {
label_04535be4:
    bVar8 = false;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = false;
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)&(method_00->fields).textKey != 0) goto label_04535be4;
      pSVar7 = (method_00->fields).text;
      if (pSVar7 == (System_String_o *)0x0) goto label_04535e43;
      bVar8 = 1 < *(int *)&pSVar7[1].klass;
    }
  }
  *(bool *)&(pGVar4->fields).id = bVar8;
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
            ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)method_00,
             (Gisketch_Aottg2UI_Code_AottgUi_o *)ui_00,pSVar2,
             (System_Action_AottgUi__o *)(method_00->fields).inputType,in_R8);
  pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pGVar9 = TypeInfo_AottgScreenWithBrushSidePanel;
  if (*(int *)((long)&(TypeInfo_AottgScreenWithBrushSidePanel->fields).layout + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute((MethodInfo *)pGVar9);
  if (ui_00 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)ui_00,"default",pSVar2,"brush-side-panel-layer",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pGVar9 = pGVar4;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).type = "SectionNavigator";
      il2cpp_runtime_helper_022b4080(&pGVar4->fields);
      pSVar7 = System_String__Concat_3ae5ba0((method_00->fields).type,"-section-navigator",(MethodInfo *)0x0);
      (pGVar4->fields).id = pSVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).id,pSVar7);
      (pGVar4->fields).text = (method_00->fields).type;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).text);
      SStack_70.klass = TypeInfo_AottgSidePanelLayoutMode;
      SStack_70.monitor = (void *)0xffffffffffffffff;
      uStack_60 = *(undefined4 *)&(method_00->fields).textKey;
      pSVar7 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
      (pGVar4->fields).value = pSVar7;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).value,pSVar7);
      *(System_String_array **)&(pGVar4->fields).maxVisibleItems = pSVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).maxVisibleItems,pSVar5);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).search,pGVar3);
      Gisketch_Aottg2UI_Code_AottgUi__Add((Gisketch_Aottg2UI_Code_AottgUi_o *)ui_00,pGVar4,(MethodInfo *)0x0);
      return;
    }
  }
label_04535e43:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar9,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildContentLayer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Action_AottgUi__o* build, System_Action_AottgUi__o* buildFooter, const MethodInfo* method);
// 0x4536420

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_Action_AottgUi__o *build,
               System_Action_AottgUi__o *buildFooter,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_AottgUi__o *build_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  MethodInfo *method_00;
  
  if (g_data_057aeee0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildContentLayer_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass25_0);
    il2cpp_runtime_helper_023445d0(&"-content");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelContentIntro");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelScreenContent");
    g_data_057aeee0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass25_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)build;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,build);
    __this_00[1].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)buildFooter;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,buildFooter);
    build_00 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    id = System_String__Concat_3ae5ba0((__this->fields)._id,"-content",(MethodInfo *)0x0);
    method_00 = TypeInfo_AottgScreenWithBrushSidePanel;
    if (*(int *)((long)&TypeInfo_AottgScreenWithBrushSidePanel[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    layout = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(method_00);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       (_DAT_055db7d8,(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"brushSidePanelScreenContent",build_00,id,layout,pGVar1,(MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         (_DAT_055db7d8,(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).enter = pGVar1;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).enter,pGVar1);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeee == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeee = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Layout
            ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",(System_String_o *)0x0,
             0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddContentFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddContentFooter (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, System_Action_AottgUi__o* buildFooter, const MethodInfo* method);
// 0x45366f0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddContentFooter
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,System_Action_AottgUi__o *buildFooter,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *__this_00;
  
  if (g_data_057aeee1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddContentFooter_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass26_0);
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    il2cpp_runtime_helper_023445d0(&"-content-footer-layer");
    g_data_057aeee1 = '\x01';
  }
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass26_0);
  __this_00 = pSVar1;
  System_Object___ctor((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1->fields = (System_String_Fields)__this;
    il2cpp_runtime_helper_022b4080(&pSVar1->fields,__this);
    pSVar1[1].klass = (System_String_c *)buildFooter;
    il2cpp_runtime_helper_022b4080(pSVar1 + 1,buildFooter);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar1 = System_String__Concat_3ae5ba0((__this->fields)._id,"-content-footer-layer",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this_00 = "Column";
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","FlexEnd",(System_String_o *)0x0,"Absolute",(System_String_o *)0x0,
                        0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"default",build,pSVar1,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddFooterTopEdge
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x45368f0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *content;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  MethodInfo *in_RCX;
  char extraout_DL;
  int iVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  
  if (g_data_057aeee2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelContentFooterTopShadow");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    il2cpp_runtime_helper_023445d0(&"Divider");
    il2cpp_runtime_helper_023445d0(&"-content-footer-top-shadow");
    g_data_057aeee2 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  content = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  __this_00 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "Divider";
    il2cpp_runtime_helper_022b4080(&pGVar1->fields);
    pSVar2 = System_String__Concat_3ae5ba0((__this->fields)._id,"-content-footer-top-shadow",(MethodInfo *)0x0);
    (pGVar1->fields).id = pSVar2;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).id,pSVar2);
    (pGVar1->fields).style = "brushSidePanelContentFooterTopShadow";
    il2cpp_runtime_helper_022b4080();
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(2.0,(MethodInfo *)0x0);
    in_RCX = "Absolute";
    content = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)"Absolute",(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar1->fields).search;
    (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)content;
    il2cpp_runtime_helper_022b4080();
    if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(footer,pGVar1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeee3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSections_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass28_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"DeferredSidePanelSections");
    il2cpp_runtime_helper_023445d0(&"-scroll");
    il2cpp_runtime_helper_023445d0(&"-deferred-sections");
    g_data_057aeee3 = '\x01';
  }
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass28_0);
  pGVar1 = pGVar5;
  System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar5->fields).id;
    (pGVar5->fields).id = (System_String_o *)__this_00;
    il2cpp_runtime_helper_022b4080();
    if (extraout_DL == '\0') {
      pSVar2 = (__this_00->fields).text;
      if (pSVar2 != (System_String_o *)0x0) {
        iVar8 = *(int *)&pSVar2[1].klass;
        *(int *)&(pGVar5->fields).type = iVar8;
        if (0 < iVar8) {
          iVar8 = 0;
          do {
            Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                      ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)__this_00,
                       (Gisketch_Aottg2UI_Code_AottgUi_o *)content,iVar8,in_RCX);
            iVar8 = iVar8 + 1;
          } while (iVar8 < *(int *)&(pGVar5->fields).type);
        }
        return;
      }
    }
    else {
      *(int32_t *)&(pGVar5->fields).type = 0;
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this_00->fields).type;
      pSVar2 = System_String__Concat_3ae5ba0((System_String_o *)pGVar1,"-scroll",(MethodInfo *)0x0);
      if (content != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
                           ((Gisketch_Aottg2UI_Code_AottgUi_o *)content,build,pSVar2,(MethodInfo *)0x0);
        if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          return;
        }
        if (pGVar6->max_length == 0) {
          return;
        }
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        pGVar1 = pGVar5;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar5->fields).type = "DeferredSidePanelSections";
          il2cpp_runtime_helper_022b4080(&pGVar5->fields);
          pSVar2 = System_String__Concat_3ae5ba0((__this_00->fields).type,"-deferred-sections",(MethodInfo *)0x0);
          (pGVar5->fields).id = pSVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).id,pSVar2);
          *(undefined1 *)((long)&(pGVar5->fields).hasIcon + 2) = 1;
          (pGVar5->fields).steps = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)pGVar6;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).steps,pGVar6);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar7;
          il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar7);
          Gisketch_Aottg2UI_Code_AottgUi__Add
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)content,pGVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSections
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSections (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, bool deferSections, const MethodInfo* method);
// 0x4536ab0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSections
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,bool_conflict deferSections,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  int iVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *str0;
  
  if (g_data_057aeee3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSections_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass28_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"DeferredSidePanelSections");
    il2cpp_runtime_helper_023445d0(&"-scroll");
    il2cpp_runtime_helper_023445d0(&"-deferred-sections");
    g_data_057aeee3 = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass28_0);
  str0 = pGVar2;
  System_Object___ctor((Il2CppObject *)pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    str0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar2->fields).id;
    (pGVar2->fields).id = (System_String_o *)__this;
    il2cpp_runtime_helper_022b4080();
    if ((char)deferSections == '\0') {
      pGVar1 = (__this->fields)._sections;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
        iVar6 = (int)pGVar1->max_length;
        *(int *)&(pGVar2->fields).type = iVar6;
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection(__this,content,iVar6,method);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)&(pGVar2->fields).type);
        }
        return;
      }
    }
    else {
      *(int32_t *)&(pGVar2->fields).type = 0;
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      str0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this->fields)._id;
      pSVar3 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-scroll",(MethodInfo *)0x0);
      if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached(content,build,pSVar3,(MethodInfo *)0x0);
        if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          return;
        }
        if (pGVar4->max_length == 0) {
          return;
        }
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        str0 = pGVar2;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).type = "DeferredSidePanelSections";
          il2cpp_runtime_helper_022b4080(&pGVar2->fields);
          pSVar3 = System_String__Concat_3ae5ba0((__this->fields)._id,"-deferred-sections",(MethodInfo *)0x0);
          (pGVar2->fields).id = pSVar3;
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).id,pSVar3);
          *(undefined1 *)((long)&(pGVar2->fields).hasIcon + 2) = 1;
          (pGVar2->fields).steps = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)pGVar4;
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).steps,pGVar4);
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar5);
          Gisketch_Aottg2UI_Code_AottgUi__Add(content,pGVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)str0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, int32_t index, const MethodInfo* method);
// 0x4536d90

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,int32_t index,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o **ppSVar1;
  System_String_o **ppSVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar4;
  System_String_Fields SVar5;
  System_String_Fields value;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int32_t iVar10;
  int32_t iVar11;
  int32_t iVar12;
  int32_t iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int32_t iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  bool_conflict bVar23;
  System_String_o *pSVar24;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar25;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar26;
  long lVar27;
  MethodInfo *method_00;
  System_String_o *pSVar28;
  System_String_c *local_68;
  undefined8 uStack_60;
  System_String_Fields local_58;
  System_String_Fields aSStack_50 [2];
  System_String_o *local_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_38;
  
  if (g_data_057aeee4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSection_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass29_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"fade");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"section");
    g_data_057aeee4 = '\x01';
  }
  pSVar24 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass29_0);
  pSVar28 = pSVar24;
  System_Object___ctor((Il2CppObject *)pSVar24,(MethodInfo *)0x0);
  if (pSVar24 != (System_String_o *)0x0) {
    pSVar28 = (System_String_o *)&pSVar24->fields;
    pSVar24->fields = (System_String_Fields)__this;
    il2cpp_runtime_helper_022b4080();
    if (index < 0) {
      return;
    }
    pGVar4 = (__this->fields)._sections;
    if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      uVar3 = (uint)pGVar4->max_length;
      if ((int)uVar3 <= index) {
        return;
      }
      local_38 = content;
      if (uVar3 <= (uint)index) goto label_045371dc;
      lVar27 = (long)index;
      local_40 = pSVar24 + 1;
      ppSVar1 = &pGVar4->m_Items[0].fields._buildContent + lVar27 * 9;
      uVar6 = *(undefined4 *)ppSVar1;
      uVar7 = *(undefined4 *)((long)ppSVar1 + 4);
      uVar8 = *(undefined4 *)(ppSVar1 + 1);
      uVar9 = *(undefined4 *)((long)ppSVar1 + 0xc);
      ppSVar2 = &pGVar4->m_Items[0].fields.Id + lVar27 * 9;
      iVar10 = *(int32_t *)ppSVar2;
      iVar11 = *(int32_t *)((long)ppSVar2 + 4);
      iVar12 = *(int32_t *)(ppSVar2 + 1);
      iVar13 = *(int32_t *)((long)ppSVar2 + 0xc);
      ppSVar2 = &pGVar4->m_Items[0].fields.TextKey + lVar27 * 9;
      uVar14 = *(undefined4 *)ppSVar2;
      uVar15 = *(undefined4 *)((long)ppSVar2 + 4);
      iVar16 = *(int32_t *)(ppSVar2 + 1);
      uVar17 = *(undefined4 *)((long)ppSVar2 + 0xc);
      ppSVar2 = &pGVar4->m_Items[0].fields.SearchTitle + lVar27 * 9;
      uVar18 = *(undefined4 *)ppSVar2;
      uVar19 = *(undefined4 *)((long)ppSVar2 + 4);
      uVar20 = *(undefined4 *)(ppSVar2 + 1);
      uVar21 = *(undefined4 *)((long)ppSVar2 + 0xc);
      pSVar24[3].fields =
           *(System_String_Fields *)(&pGVar4->m_Items[0].fields.AutoAddKeywords + lVar27 * 0x12);
      *(undefined4 *)&pSVar24[3].klass = uVar18;
      *(undefined4 *)((long)&pSVar24[3].klass + 4) = uVar19;
      *(undefined4 *)&pSVar24[3].monitor = uVar20;
      *(undefined4 *)((long)&pSVar24[3].monitor + 4) = uVar21;
      *(undefined4 *)&pSVar24[2].monitor = uVar14;
      *(undefined4 *)((long)&pSVar24[2].monitor + 4) = uVar15;
      pSVar24[2].fields._stringLength = iVar16;
      *(undefined4 *)&pSVar24[2].fields._firstChar = uVar17;
      pSVar24[1].fields._stringLength = iVar10;
      *(int32_t *)&pSVar24[1].fields._firstChar = iVar11;
      *(int32_t *)&pSVar24[2].klass = iVar12;
      *(int32_t *)((long)&pSVar24[2].klass + 4) = iVar13;
      *(undefined4 *)&pSVar24[1].klass = uVar6;
      *(undefined4 *)((long)&pSVar24[1].klass + 4) = uVar7;
      *(undefined4 *)&pSVar24[1].monitor = uVar8;
      *(undefined4 *)((long)&pSVar24[1].monitor + 4) = uVar9;
      il2cpp_runtime_helper_022b4080(local_40,0);
      pSVar28 = (__this->fields)._id;
      SVar5 = pSVar24[1].fields;
      value = (System_String_Fields)pSVar24[3].klass;
      local_58._stringLength = 0;
      local_58._firstChar = 0;
      local_58._6_2_ = 0;
      aSStack_50[0]._stringLength = 0;
      aSStack_50[0]._firstChar = 0;
      aSStack_50[0]._6_2_ = 0;
      local_68 = (System_String_c *)0x0;
      uStack_60 = 0;
      iVar22 = index * 10 + 0x1e;
      if (g_data_057aeed9 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-");
        g_data_057aeed9 = '\x01';
      }
      local_68 = (System_String_c *)
                 System_String__Concat_3af7150
                           (pSVar28,"-",(System_String_o *)SVar5,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b4080(&local_68,local_68);
      local_58 = SVar5;
      il2cpp_runtime_helper_022b4080(&local_58);
      bVar23 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      aSStack_50[0] = value;
      if ((char)bVar23 != '\0') {
        aSStack_50[0] = SVar5;
      }
      il2cpp_runtime_helper_022b4080(aSStack_50,aSStack_50[0]);
      SVar5 = local_58;
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar22);
      pSVar24[4].fields._stringLength = local_58._stringLength;
      pSVar24[4].fields._firstChar = local_58._firstChar;
      *(undefined2 *)&pSVar24[4].fields.field_0x6 = local_58._6_2_;
      *(int32_t *)&pSVar24[5].klass = aSStack_50[0]._stringLength;
      *(undefined4 *)((long)&pSVar24[5].klass + 4) = aSStack_50[0]._4_4_;
      pSVar24[4].klass = local_68;
      *(int *)&pSVar24[4].monitor = iVar22;
      *(undefined4 *)((long)&pSVar24[4].monitor + 4) = uStack_60._4_4_;
      local_58 = SVar5;
      il2cpp_runtime_helper_022b4080(pSVar24 + 4,0);
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      SVar5 = pSVar24[1].fields;
      if (g_data_057aeeeb == '\0') {
        il2cpp_runtime_helper_023445d0(&"-section-");
        g_data_057aeeeb = '\x01';
      }
      pSVar24 = System_String__Concat_3af7150
                          ((__this->fields)._id,"-section-",(System_String_o *)SVar5,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(1120.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,12.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      pSVar28 = (System_String_o *)0x0;
      if (local_38 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        method_00 = "default";
        node = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (local_38,(System_String_o *)"default",build,pSVar24,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_AottgScreenWithBrushSidePanel + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion(node,method_00);
        pSVar28 = "fade";
        pGVar25 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                            ("fade",(System_String_o *)0x0,0.15,0.0,0.0,index,(MethodInfo *)0x0);
        if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (node->fields).motion = pGVar25;
          il2cpp_runtime_helper_022b4080(&(node->fields).motion,pGVar25);
          pGVar26 = Gisketch_Aottg2UI_Code_AottgUi__Search
                              ((System_String_o *)local_40[2].klass,local_40[2].monitor,
                               (uint)*(byte *)((long)&local_40[2].fields._stringLength + 1),
                               (System_String_o *)local_40[1].fields,"section",
                               (System_String_o *)local_40->fields,(System_String_o *)local_40[2].klass,
                               (uint)(byte)local_40[2].fields._stringLength,(MethodInfo *)0x0);
          (node->fields).popover = (System_String_o *)pGVar26;
          il2cpp_runtime_helper_022b4080(&(node->fields).popover,pGVar26);
          *(bool *)((long)&(node->fields).hasIcon + 2) = index == 0 || (__this->fields)._layoutMode == 0;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_045371dc:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pSVar28,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ClearSectionEnterMotion
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x4537250

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (g_data_057aeee5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
    g_data_057aeee5 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  pGVar1 = (node->fields).contentLayout;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).alignItems,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto label_045372ac;
  }
  (node->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b4080(&(node->fields).motion);
label_045372ac:
  nodes = (node->fields).deferredChildren;
  if (*(int *)(TypeInfo_AottgScreenWithBrushSidePanel + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion_44372f0(nodes,method_00);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion_44372f0
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(node->fields).steps,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ClearSectionEnterMotion
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, const MethodInfo* method);
// 0x45372f0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion_44372f0
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  MethodInfo *__this;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  undefined8 unaff_RBX;
  ulong uVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *node;
  MethodInfo *__this_00;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined2 uStack0000000000000020;
  undefined1 uStack0000000000000022;
  undefined1 uStack0000000000000023;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  int32_t iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint32_t uStack_68;
  undefined4 uStack_64;
  
  node = nodes;
  if (g_data_057aeee6 == '\0') {
    node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)&TypeInfo_AottgScreenWithBrushSidePanel;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeee6 = '\x01';
  }
  if ((nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) || ((int)nodes->max_length < 1)) {
    return;
  }
  uVar6 = 0;
  if ((nodes->max_length & 0xffffffff) != 0) {
    do {
      node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)nodes->m_Items[uVar6];
      if (*(int *)(TypeInfo_AottgScreenWithBrushSidePanel + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion
                ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)node,method);
      uVar6 = uVar6 + 1;
      uVar1 = (uint)nodes->max_length;
      if ((long)(int)uVar1 <= (long)uVar6) {
        return;
      }
    } while (uVar6 < uVar1);
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aeee8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddSectionHeader_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass33_0);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"header");
    il2cpp_runtime_helper_023445d0(&"-row");
    g_data_057aeee8 = '\x01';
  }
  __this = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass33_0);
  __this_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (MethodInfo *)0x0) {
    __this->slot = uStack0000000000000020;
    __this->parameters_count = uStack0000000000000022;
    __this->bitflags = uStack0000000000000023;
    *(undefined4 *)&__this->field_0x54 = uStack0000000000000024;
    iStack_a0 = (int32_t)unaff_RBX;
    uStack_9c = (undefined4)((ulong)unaff_RBX >> 0x20);
    uStack_98 = (undefined4)unaff_R12;
    uStack_94 = (undefined4)((ulong)unaff_R12 >> 0x20);
    uStack_90 = (undefined4)unaff_R14;
    uStack_8c = (undefined4)((ulong)unaff_R14 >> 0x20);
    uStack_88 = (undefined4)unaff_R15;
    uStack_84 = (undefined4)((ulong)unaff_R15 >> 0x20);
    uStack_80 = (undefined4)unaff_retaddr;
    uStack_7c = (undefined4)((ulong)unaff_retaddr >> 0x20);
    uStack_78 = (undefined4)in_stack_00000008;
    uStack_74 = (undefined4)((ulong)in_stack_00000008 >> 0x20);
    uStack_70 = (undefined4)in_stack_00000010;
    uStack_6c = (undefined4)((ulong)in_stack_00000010 >> 0x20);
    uStack_68 = (uint32_t)in_stack_00000018;
    uStack_64 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
    *(undefined4 *)&__this->field8_0x40 = uStack_70;
    *(undefined4 *)((long)&__this->field8_0x40 + 4) = uStack_6c;
    __this->token = uStack_68;
    __this->flags = (undefined2)uStack_64;
    __this->iflags = uStack_64._2_2_;
    *(undefined4 *)&__this->parameters = uStack_80;
    *(undefined4 *)((long)&__this->parameters + 4) = uStack_7c;
    *(undefined4 *)&__this->field7_0x38 = uStack_78;
    *(undefined4 *)((long)&__this->field7_0x38 + 4) = uStack_74;
    *(undefined4 *)&__this->klass = uStack_90;
    *(undefined4 *)((long)&__this->klass + 4) = uStack_8c;
    *(undefined4 *)&__this->return_type = uStack_88;
    *(undefined4 *)((long)&__this->return_type + 4) = uStack_84;
    ((System_String_Fields *)&__this->invoker_method)->_stringLength = iStack_a0;
    *(undefined4 *)&((System_String_Fields *)&__this->invoker_method)->_firstChar = uStack_9c;
    *(undefined4 *)&__this->name = uStack_98;
    *(undefined4 *)((long)&__this->name + 4) = uStack_94;
    il2cpp_runtime_helper_022b4080((System_String_Fields *)&__this->invoker_method,0);
    __this[1].methodPointer = (Il2CppMethodPointer)node;
    il2cpp_runtime_helper_022b4080(__this + 1,node);
    *(undefined4 *)&__this[1].name = in_stack_00000038;
    *(undefined4 *)((long)&__this[1].name + 4) = in_stack_0000003c;
    *(undefined4 *)&__this[1].klass = in_stack_00000040;
    *(undefined4 *)((long)&__this[1].klass + 4) = in_stack_00000044;
    *(undefined4 *)&__this[1].virtualMethodPointer = in_stack_00000028;
    *(undefined4 *)((long)&__this[1].virtualMethodPointer + 4) = in_stack_0000002c;
    *(undefined4 *)&__this[1].invoker_method = in_stack_00000030;
    *(undefined4 *)((long)&__this[1].invoker_method + 4) = in_stack_00000034;
    il2cpp_runtime_helper_022b4080(&__this[1].virtualMethodPointer,0);
    if (__this->parameters_count != '\0') {
      return;
    }
    if (__this->name == (char *)0x0) {
      pIVar2 = __this->klass;
      pSVar3 = (System_String_o *)__this->return_type;
      if (g_data_057aeeec == '\0') {
        il2cpp_runtime_helper_023445d0(&"-header");
        g_data_057aeeec = '\x01';
      }
      if (g_data_057aeeeb == '\0') {
        il2cpp_runtime_helper_023445d0(&"-section-");
        g_data_057aeeeb = '\x01';
      }
      pSVar4 = System_String__Concat_3af7150
                         (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&node->bounds)->type,
                          "-section-",(System_String_o *)pIVar2,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_3ae5ba0(pSVar4,"-header",(MethodInfo *)0x0);
      if (g_data_057aeeda == '\0') {
        il2cpp_runtime_helper_023445d0(&"slideLeft");
        g_data_057aeeda = '\x01';
      }
      __this_00 = "slideLeft";
      enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                        ((System_String_o *)"slideLeft",(System_String_o *)__this[1].virtualMethodPointer,
                         0.12,0.01,0.018,*(int32_t *)&__this[1].invoker_method,(MethodInfo *)0x0);
      if ((method != (MethodInfo *)0x0) &&
         (pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,pSVar3,"header",pSVar4,
                              (System_String_o *)0x0,enter,(MethodInfo *)0x0), __this_00 = method,
         pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        (pGVar5->fields).textKey = (System_String_o *)__this->parameters;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).textKey);
        return;
      }
    }
    else {
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pIVar2 = __this->klass;
      if (g_data_057aeeec == '\0') {
        il2cpp_runtime_helper_023445d0(&"-header");
        g_data_057aeeec = '\x01';
      }
      if (g_data_057aeeeb == '\0') {
        il2cpp_runtime_helper_023445d0(&"-section-");
        g_data_057aeeeb = '\x01';
      }
      pSVar3 = System_String__Concat_3af7150
                         (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&node->bounds)->type,
                          "-section-",(System_String_o *)pIVar2,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_3ae5ba0(pSVar3,"-header",(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_3ae5ba0(pSVar3,"-row",(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      __this_00 = "Row";
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Row","SpaceBetween","Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,16.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (method != (MethodInfo *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,"default",build,pSVar3,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ShouldDeferSections
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ShouldDeferSections (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, const MethodInfo* method);
// 0x45363a0

bool_conflict
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ShouldDeferSections
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  bool_conflict bVar2;
  Il2CppObject *__this_00;
  System_Action_AottgUi__o *build;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Il2CppClass *in_RCX;
  Il2CppClass *extraout_RDX;
  void *pvVar6;
  MethodInfo *method_00;
  
  if (g_data_057aeee7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057aeee7 = '\x01';
  }
  if ((char)(__this->fields)._deferScrollSections != '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar6 = (void *)0x0;
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return 0;
    }
    if ((__this->fields)._layoutMode == 0) {
      pGVar1 = (__this->fields)._sections;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
        return (uint)(1 < (int)pGVar1->max_length);
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeee0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildContentLayer_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass25_0);
        il2cpp_runtime_helper_023445d0(&"-content");
        il2cpp_runtime_helper_023445d0(&"brushSidePanelContentIntro");
        il2cpp_runtime_helper_023445d0(&"brushSidePanelScreenContent");
        g_data_057aeee0 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass25_0);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[1].klass = extraout_RDX;
        il2cpp_runtime_helper_022b4080(__this_00 + 1,extraout_RDX);
        __this_00[1].monitor = pvVar6;
        il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,pvVar6);
        __this_00[2].klass = in_RCX;
        il2cpp_runtime_helper_022b4080(__this_00 + 2,in_RCX);
        build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        id = System_String__Concat_3ae5ba0
                       (*(System_String_o **)((long)pvVar6 + 0x10),"-content",(MethodInfo *)0x0);
        method_00 = TypeInfo_AottgScreenWithBrushSidePanel;
        if (*(int *)((long)&TypeInfo_AottgScreenWithBrushSidePanel[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pGVar3 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(method_00);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           (_DAT_055db7d8,(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
        if (method != (MethodInfo *)0x0) {
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)method,"brushSidePanelScreenContent",build,id,pGVar3,pGVar4,
                              (MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                             (_DAT_055db7d8,(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar5->fields).enter = pGVar4;
            bVar2 = il2cpp_runtime_helper_022b4080(&(pGVar5->fields).enter,pGVar4);
            return bVar2;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeeee == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0();
        g_data_057aeeee = '\x01';
      }
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      return (bool_conflict)pGVar3;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddSectionHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddSectionHeader (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, Gisketch_Aottg2UI_Game_AottgScreenSection_o section, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x4537390

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddSectionHeader
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,Gisketch_Aottg2UI_Game_AottgScreenSection_o section,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_c *text;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  int32_t local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int32_t iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (g_data_057aeee8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddSectionHeader_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass33_0);
    il2cpp_runtime_helper_023445d0(&"SpaceBetween");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"header");
    il2cpp_runtime_helper_023445d0(&"-row");
    g_data_057aeee8 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass33_0);
  __this_01 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_00[2].klass = (Gisketch_Aottg2UI_Code_AottgUi_c *)section.fields._64_8_;
    local_78 = (int32_t)section.fields._buildContent;
    uStack_74 = section.fields._buildContent._4_4_;
    uStack_70 = section.fields._buildHeaderActions._0_4_;
    uStack_6c = section.fields._buildHeaderActions._4_4_;
    local_68 = section.fields.Id._0_4_;
    uStack_64 = section.fields.Id._4_4_;
    iStack_60 = (int32_t)section.fields.Label;
    uStack_5c = section.fields.Label._4_4_;
    local_58 = section.fields.TextKey._0_4_;
    uStack_54 = section.fields.TextKey._4_4_;
    uStack_50 = section.fields.Icon._0_4_;
    uStack_4c = section.fields.Icon._4_4_;
    local_48 = section.fields.SearchTitle._0_4_;
    uStack_44 = section.fields.SearchTitle._4_4_;
    uStack_40 = section.fields.Keywords._0_4_;
    uStack_3c = section.fields.Keywords._4_4_;
    *(undefined4 *)&__this_00[1].fields._actions = local_48;
    *(undefined4 *)((long)&__this_00[1].fields._actions + 4) = uStack_44;
    *(undefined4 *)&__this_00[1].fields._ownerId = uStack_40;
    *(undefined4 *)((long)&__this_00[1].fields._ownerId + 4) = uStack_3c;
    *(undefined4 *)&__this_00[1].monitor = local_58;
    *(undefined4 *)((long)&__this_00[1].monitor + 4) = uStack_54;
    *(undefined4 *)&__this_00[1].fields._children = uStack_50;
    *(undefined4 *)((long)&__this_00[1].fields._children + 4) = uStack_4c;
    *(undefined4 *)&(__this_00->fields)._ownerId = local_68;
    *(undefined4 *)((long)&(__this_00->fields)._ownerId + 4) = uStack_64;
    *(int32_t *)&__this_00[1].klass = iStack_60;
    *(undefined4 *)((long)&__this_00[1].klass + 4) = uStack_5c;
    *(int32_t *)&(__this_00->fields)._children = local_78;
    *(undefined4 *)((long)&(__this_00->fields)._children + 4) = uStack_74;
    *(undefined4 *)&(__this_00->fields)._actions = uStack_70;
    *(undefined4 *)((long)&(__this_00->fields)._actions + 4) = uStack_6c;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,0);
    *(Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o **)&__this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080((System_String_Fields *)&__this_00[2].monitor,__this);
    *(int32_t *)&__this_00[2].fields._ownerId = context.fields._order;
    *(undefined4 *)((long)&__this_00[2].fields._ownerId + 4) = context.fields._12_4_;
    *(undefined4 *)&__this_00[3].klass = context.fields._SectionId_k__BackingField._0_4_;
    *(undefined4 *)((long)&__this_00[3].klass + 4) = context.fields._SectionId_k__BackingField._4_4_;
    *(bool_conflict *)&__this_00[2].fields._children = section.fields.HideHeader;
    *(undefined4 *)((long)&__this_00[2].fields._children + 4) = section.fields._76_4_;
    *(undefined4 *)&__this_00[2].fields._actions = context.fields._group._0_4_;
    *(undefined4 *)((long)&__this_00[2].fields._actions + 4) = context.fields._group._4_4_;
    il2cpp_runtime_helper_022b4080(&__this_00[2].fields,0);
    if (*(char *)((long)&__this_00[2].klass + 2) != '\0') {
      return;
    }
    if ((__this_00->fields)._actions == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar1 = (__this_00->fields)._ownerId;
      text = __this_00[1].klass;
      if (g_data_057aeeec == '\0') {
        il2cpp_runtime_helper_023445d0(&"-header");
        g_data_057aeeec = '\x01';
      }
      if (g_data_057aeeeb == '\0') {
        il2cpp_runtime_helper_023445d0(&"-section-");
        g_data_057aeeeb = '\x01';
      }
      pSVar1 = System_String__Concat_3af7150((__this->fields)._id,"-section-",pSVar1,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_3ae5ba0(pSVar1,"-header",(MethodInfo *)0x0);
      if (g_data_057aeeda == '\0') {
        il2cpp_runtime_helper_023445d0(&"slideLeft");
        g_data_057aeeda = '\x01';
      }
      __this_01 = "slideLeft";
      enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                        ((System_String_o *)"slideLeft",(System_String_o *)__this_00[2].fields._children,0.12
                         ,0.01,0.018,*(int32_t *)&__this_00[2].fields._actions,(MethodInfo *)0x0);
      if ((panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
         (pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (panel,(System_String_o *)text,"header",pSVar1,(System_String_o *)0x0,enter,
                              (MethodInfo *)0x0), __this_01 = panel,
         pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        (pGVar2->fields).textKey = __this_00[1].monitor;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).textKey);
        return;
      }
    }
    else {
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pSVar1 = (__this_00->fields)._ownerId;
      if (g_data_057aeeec == '\0') {
        il2cpp_runtime_helper_023445d0(&"-header");
        g_data_057aeeec = '\x01';
      }
      if (g_data_057aeeeb == '\0') {
        il2cpp_runtime_helper_023445d0(&"-section-");
        g_data_057aeeeb = '\x01';
      }
      pSVar1 = System_String__Concat_3af7150((__this->fields)._id,"-section-",pSVar1,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_3ae5ba0(pSVar1,"-header",(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_3ae5ba0(pSVar1,"-row",(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      __this_01 = "Row";
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Row","SpaceBetween","Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,16.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (panel,"default",build,pSVar1,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionIds
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, const MethodInfo* method);
// 0x4535e60

System_String_array *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,MethodInfo *method)

{
  uint uVar1;
  void *pvVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar5;
  Il2CppObject *__this_00;
  undefined8 uVar6;
  void *pvVar7;
  System_Action_AottgUi__o *build;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Il2CppClass *pIVar10;
  Il2CppClass *extraout_RDX;
  ulong uVar11;
  System_String_o **ppSVar12;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Il2CppClass *pIVar13;
  undefined8 *puVar14;
  MethodInfo *method_00;
  System_String_array *pSVar15;
  Il2CppClass *pIVar16;
  Il2CppObject *pIVar17;
  System_String_array *unaff_R15;
  Il2CppClass *pIStack_130;
  void *pvStack_128;
  Il2CppClass *pIStack_120;
  void *pvStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  Il2CppClass *pIStack_c0;
  System_String_array *pSStack_b8;
  Il2CppClass *pIStack_b0;
  void *pvStack_a8;
  ulong uStack_a0;
  System_String_o **ppSStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_58;
  System_String_array *pSStack_50;
  Il2CppClass *pIStack_48;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGStack_40;
  System_String_array *pSStack_38;
  
  if (g_data_057aeee9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057aeee9 = '\x01';
  }
  if ((__this->fields)._sections != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    pIVar13 = TypeInfo_string;
    unaff_R15 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
    pGVar5 = (__this->fields)._sections;
    if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      if (unaff_R15 == (System_String_array *)0x0) goto label_04535f13;
      pIVar16 = (Il2CppClass *)unaff_R15->m_Items;
      pSVar15 = (System_String_array *)0x6;
      uVar11 = 0;
      do {
        uVar1 = (uint)pGVar5->max_length;
        if ((long)(int)uVar1 <= (long)uVar11) {
          return unaff_R15;
        }
        if ((uVar1 <= uVar11) || ((uint)unaff_R15->max_length <= uVar11)) {
          il2cpp_runtime_helper_022b2ca0();
          uStack_58 = uVar11;
          pSStack_50 = pSVar15;
          pIStack_48 = pIVar16;
          pGStack_40 = __this;
          pSStack_38 = unaff_R15;
          if (g_data_057aeeea == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushSidePanelOption);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SectionOptions_b__0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass35_0);
            g_data_057aeeea = '\x01';
          }
          if ((pIVar13->_1).byval_arg.data == (void *)0x0) goto label_04536211;
          pSVar15 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption);
          pvVar7 = (pIVar13->_1).byval_arg.data;
          if (pvVar7 == (void *)0x0) goto label_04536211;
          if (pSVar15 == (System_String_array *)0x0) goto label_04536216;
          ppSVar12 = pSVar15->m_Items;
          pIVar17 = (Il2CppObject *)&g_data_00000020;
          uVar11 = 0;
          pSStack_b8 = pSVar15;
          pIStack_b0 = pIVar13;
          goto label_04535fe0;
        }
        (pIVar16->_1).image = *(System_String_o **)((long)pGVar5->m_Items + (long)pSVar15 * 8 + -0x20);
        pIVar13 = pIVar16;
        il2cpp_runtime_helper_022b4080();
        uVar11 = uVar11 + 1;
        pGVar5 = (__this->fields)._sections;
        pIVar16 = (Il2CppClass *)&(pIVar16->_1).gc_desc;
        pSVar15 = (System_String_array *)((long)&(pSVar15->obj).monitor + 1);
      } while (pGVar5 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0);
    }
  }
  do {
    pGVar5 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_runtime_helper_022b2c90();
label_04535f13:
  } while (0 < (int)pGVar5->max_length);
  return unaff_R15;
  while( true ) {
    if (*(uint *)((long)pvVar7 + 0x18) <= uVar11) goto label_0453625c;
    pIStack_c0 = *(Il2CppClass **)((long)&pIVar17[4].klass + (long)pvVar7);
    puVar14 = (undefined8 *)((long)&pIVar17->klass + (long)pvVar7);
    uStack_100 = *puVar14;
    uStack_f8 = puVar14[1];
    puVar14 = (undefined8 *)((long)&pIVar17[1].klass + (long)pvVar7);
    uStack_f0 = *puVar14;
    uStack_e8 = puVar14[1];
    puVar14 = (undefined8 *)((long)&pIVar17[2].klass + (long)pvVar7);
    uStack_e0 = *puVar14;
    uStack_d8 = puVar14[1];
    puVar14 = (undefined8 *)((long)&pIVar17[3].klass + (long)pvVar7);
    uStack_d0 = *puVar14;
    uStack_c8 = puVar14[1];
    uStack_a0 = uVar11;
    ppSStack_98 = ppSVar12;
    if (__this_00 == (Il2CppObject *)0x0) break;
    __this_00[5].klass = pIStack_c0;
    uStack_100._4_4_ = (undefined4)((ulong)uStack_100 >> 0x20);
    uStack_f8._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
    uStack_f0._4_4_ = (undefined4)((ulong)uStack_f0 >> 0x20);
    uStack_e8._4_4_ = (undefined4)((ulong)uStack_e8 >> 0x20);
    uStack_e0._4_4_ = (undefined4)((ulong)uStack_e0 >> 0x20);
    uStack_d8._4_4_ = (undefined4)((ulong)uStack_d8 >> 0x20);
    uStack_d0._4_4_ = (undefined4)((ulong)uStack_d0 >> 0x20);
    uStack_c8._4_4_ = (undefined4)((ulong)uStack_c8 >> 0x20);
    *(undefined4 *)&__this_00[4].klass = (undefined4)uStack_d0;
    *(undefined4 *)((long)&__this_00[4].klass + 4) = uStack_d0._4_4_;
    *(undefined4 *)&__this_00[4].monitor = (undefined4)uStack_c8;
    *(undefined4 *)((long)&__this_00[4].monitor + 4) = uStack_c8._4_4_;
    *(undefined4 *)&__this_00[3].klass = (undefined4)uStack_e0;
    *(undefined4 *)((long)&__this_00[3].klass + 4) = uStack_e0._4_4_;
    *(undefined4 *)&__this_00[3].monitor = (undefined4)uStack_d8;
    *(undefined4 *)((long)&__this_00[3].monitor + 4) = uStack_d8._4_4_;
    *(undefined4 *)&__this_00[2].klass = (undefined4)uStack_f0;
    *(undefined4 *)((long)&__this_00[2].klass + 4) = uStack_f0._4_4_;
    *(undefined4 *)&__this_00[2].monitor = (undefined4)uStack_e8;
    *(undefined4 *)((long)&__this_00[2].monitor + 4) = uStack_e8._4_4_;
    *(undefined4 *)&__this_00[1].klass = (undefined4)uStack_100;
    *(undefined4 *)((long)&__this_00[1].klass + 4) = uStack_100._4_4_;
    *(undefined4 *)&__this_00[1].monitor = (undefined4)uStack_f8;
    *(undefined4 *)((long)&__this_00[1].monitor + 4) = uStack_f8._4_4_;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,0);
    pIVar13 = __this_00[2].klass;
    pvVar7 = __this_00[2].monitor;
    uVar6 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor();
    pIVar16 = __this_00[3].klass;
    pvStack_a8 = __this_00[3].monitor;
    pvStack_118 = (void *)0x0;
    uStack_110 = 0;
    pvStack_128 = (void *)0x0;
    pIStack_120 = (Il2CppClass *)0x0;
    uStack_108 = 0;
    pIStack_130 = pIVar13;
    il2cpp_runtime_helper_022b4080(&pIStack_130,pIVar13);
    pvStack_128 = pvVar7;
    il2cpp_runtime_helper_022b4080(&pvStack_128,pvVar7);
    pIStack_120 = pIVar16;
    il2cpp_runtime_helper_022b4080(&pIStack_120,pIVar16);
    uStack_108 = uVar6;
    il2cpp_runtime_helper_022b4080(&uStack_108,uVar6);
    pvStack_118 = pvStack_a8;
    il2cpp_runtime_helper_022b4080(&pvStack_118);
    uStack_110 = 0;
    il2cpp_runtime_helper_022b4080(&uStack_110);
    pSVar15 = pSStack_b8;
    uStack_70 = uStack_110;
    uVar6 = uStack_70;
    uStack_68 = uStack_108;
    uVar3 = uStack_68;
    uStack_80 = pIStack_120;
    pIVar10 = uStack_80;
    uStack_78 = pvStack_118;
    pvVar2 = uStack_78;
    uStack_90 = pIStack_130;
    pIVar16 = uStack_90;
    uStack_88 = pvStack_128;
    pvVar7 = uStack_88;
    if ((uint)pSStack_b8->max_length <= uStack_a0) goto label_0453625c;
    uVar11 = uStack_a0 + 1;
    pIVar17 = (Il2CppObject *)&pIVar17[4].monitor;
    uStack_90._0_4_ = SUB84(pIStack_130,0);
    uStack_90._4_4_ = (undefined4)((ulong)pIStack_130 >> 0x20);
    uStack_88._0_4_ = SUB84(pvStack_128,0);
    uStack_88._4_4_ = (undefined4)((ulong)pvStack_128 >> 0x20);
    uStack_80._0_4_ = SUB84(pIStack_120,0);
    uStack_80._4_4_ = (undefined4)((ulong)pIStack_120 >> 0x20);
    uStack_78._0_4_ = SUB84(pvStack_118,0);
    uStack_78._4_4_ = (undefined4)((ulong)pvStack_118 >> 0x20);
    uStack_70._0_4_ = (undefined4)uStack_110;
    uStack_70._4_4_ = (undefined4)((ulong)uStack_110 >> 0x20);
    uStack_68._0_4_ = (undefined4)uStack_108;
    uStack_68._4_4_ = (undefined4)((ulong)uStack_108 >> 0x20);
    *(undefined4 *)(ppSStack_98 + 4) = (undefined4)uStack_70;
    *(undefined4 *)((long)ppSStack_98 + 0x24) = uStack_70._4_4_;
    *(undefined4 *)(ppSStack_98 + 5) = (undefined4)uStack_68;
    *(undefined4 *)((long)ppSStack_98 + 0x2c) = uStack_68._4_4_;
    *(undefined4 *)(ppSStack_98 + 2) = (undefined4)uStack_80;
    *(undefined4 *)((long)ppSStack_98 + 0x14) = uStack_80._4_4_;
    *(undefined4 *)(ppSStack_98 + 3) = (undefined4)uStack_78;
    *(undefined4 *)((long)ppSStack_98 + 0x1c) = uStack_78._4_4_;
    *(undefined4 *)ppSStack_98 = (undefined4)uStack_90;
    *(undefined4 *)((long)ppSStack_98 + 4) = uStack_90._4_4_;
    *(undefined4 *)(ppSStack_98 + 1) = (undefined4)uStack_88;
    *(undefined4 *)((long)ppSStack_98 + 0xc) = uStack_88._4_4_;
    ppSVar12 = ppSStack_98 + 6;
    uStack_90 = pIVar16;
    uStack_88 = pvVar7;
    uStack_80 = pIVar10;
    uStack_78 = pvVar2;
    uStack_70 = uVar6;
    uStack_68 = uVar3;
    il2cpp_runtime_helper_022b4080(ppSStack_98);
    pvVar7 = (pIStack_b0->_1).byval_arg.data;
    pIVar13 = pIStack_b0;
    if (pvVar7 == (void *)0x0) break;
label_04535fe0:
    pIVar13 = pIStack_b0;
    if ((long)*(int *)((long)pvVar7 + 0x18) <= (long)uVar11) {
      return pSVar15;
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass35_0);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    pvVar7 = (pIVar13->_1).byval_arg.data;
    if (pvVar7 == (void *)0x0) break;
  }
label_04536211:
  do {
    do {
      pvVar7 = (void *)il2cpp_runtime_helper_022b2c90();
label_04536216:
      if (*(int *)((long)pvVar7 + 0x18) < 1) {
        return pSVar15;
      }
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass35_0);
      System_Object___ctor(pIVar17,(MethodInfo *)0x0);
      pvVar7 = (pIVar13->_1).byval_arg.data;
    } while (pvVar7 == (void *)0x0);
    if (*(int *)((long)pvVar7 + 0x18) == 0) {
label_0453625c:
      pvVar7 = (void *)il2cpp_runtime_helper_022b2ca0();
    }
    pIStack_c0 = *(Il2CppClass **)((long)pvVar7 + 0x60);
    uStack_100 = *(undefined8 *)((long)pvVar7 + 0x20);
    uStack_f8 = *(undefined8 *)((long)pvVar7 + 0x28);
    uStack_f0 = *(undefined8 *)((long)pvVar7 + 0x30);
    uStack_e8 = *(undefined8 *)((long)pvVar7 + 0x38);
    uStack_e0 = *(undefined8 *)((long)pvVar7 + 0x40);
    uStack_d8 = *(undefined8 *)((long)pvVar7 + 0x48);
    uStack_d0 = *(undefined8 *)((long)pvVar7 + 0x50);
    uStack_c8 = *(undefined8 *)((long)pvVar7 + 0x58);
  } while (pIVar17 == (Il2CppObject *)0x0);
  pIVar17[5].klass = pIStack_c0;
  uStack_100._4_4_ = (undefined4)((ulong)uStack_100 >> 0x20);
  uStack_f8._4_4_ = (undefined4)((ulong)uStack_f8 >> 0x20);
  uStack_f0._4_4_ = (undefined4)((ulong)uStack_f0 >> 0x20);
  uStack_e8._4_4_ = (undefined4)((ulong)uStack_e8 >> 0x20);
  uStack_e0._4_4_ = (undefined4)((ulong)uStack_e0 >> 0x20);
  uStack_d8._4_4_ = (undefined4)((ulong)uStack_d8 >> 0x20);
  uStack_d0._4_4_ = (undefined4)((ulong)uStack_d0 >> 0x20);
  uStack_c8._4_4_ = (undefined4)((ulong)uStack_c8 >> 0x20);
  *(undefined4 *)&pIVar17[4].klass = (undefined4)uStack_d0;
  *(undefined4 *)((long)&pIVar17[4].klass + 4) = uStack_d0._4_4_;
  *(undefined4 *)&pIVar17[4].monitor = (undefined4)uStack_c8;
  *(undefined4 *)((long)&pIVar17[4].monitor + 4) = uStack_c8._4_4_;
  *(undefined4 *)&pIVar17[3].klass = (undefined4)uStack_e0;
  *(undefined4 *)((long)&pIVar17[3].klass + 4) = uStack_e0._4_4_;
  *(undefined4 *)&pIVar17[3].monitor = (undefined4)uStack_d8;
  *(undefined4 *)((long)&pIVar17[3].monitor + 4) = uStack_d8._4_4_;
  *(undefined4 *)&pIVar17[2].klass = (undefined4)uStack_f0;
  *(undefined4 *)((long)&pIVar17[2].klass + 4) = uStack_f0._4_4_;
  *(undefined4 *)&pIVar17[2].monitor = (undefined4)uStack_e8;
  *(undefined4 *)((long)&pIVar17[2].monitor + 4) = uStack_e8._4_4_;
  *(undefined4 *)&pIVar17[1].klass = (undefined4)uStack_100;
  *(undefined4 *)((long)&pIVar17[1].klass + 4) = uStack_100._4_4_;
  *(undefined4 *)&pIVar17[1].monitor = (undefined4)uStack_f8;
  *(undefined4 *)((long)&pIVar17[1].monitor + 4) = uStack_f8._4_4_;
  il2cpp_runtime_helper_022b4080(pIVar17 + 1,0);
  pIVar13 = pIVar17[2].klass;
  pvVar7 = pIVar17[2].monitor;
  uVar6 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  pIVar10 = (Il2CppClass *)0x0;
  System_Action_GisketchActionContext____ctor();
  pIVar16 = pIVar17[3].klass;
  pvVar2 = pIVar17[3].monitor;
  pvStack_118 = (void *)0x0;
  uStack_110 = 0;
  pvStack_128 = (void *)0x0;
  pIStack_120 = (Il2CppClass *)0x0;
  uStack_108 = 0;
  pIStack_130 = pIVar13;
  il2cpp_runtime_helper_022b4080(&pIStack_130,pIVar13);
  pvStack_128 = pvVar7;
  il2cpp_runtime_helper_022b4080(&pvStack_128,pvVar7);
  pIStack_120 = pIVar16;
  il2cpp_runtime_helper_022b4080(&pIStack_120,pIVar16);
  uStack_108 = uVar6;
  il2cpp_runtime_helper_022b4080(&uStack_108,uVar6);
  pvStack_118 = pvVar2;
  il2cpp_runtime_helper_022b4080(&pvStack_118);
  uStack_110 = 0;
  puVar14 = &uStack_110;
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  il2cpp_runtime_helper_022b4080();
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeee7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057aeee7 = '\x01';
  }
  if (*(char *)(puVar14 + 10) != '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar7 = (void *)0x0;
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return (System_String_array *)0x0;
    }
    if (*(int *)(puVar14 + 5) == 0) {
      if (puVar14[4] != 0) {
        return (System_String_array *)(ulong)(1 < *(int *)(puVar14[4] + 0x18));
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeee0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildContentLayer_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass25_0);
        il2cpp_runtime_helper_023445d0(&"-content");
        il2cpp_runtime_helper_023445d0(&"brushSidePanelContentIntro");
        il2cpp_runtime_helper_023445d0(&"brushSidePanelScreenContent");
        g_data_057aeee0 = '\x01';
      }
      pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass25_0);
      System_Object___ctor(pIVar17,(MethodInfo *)0x0);
      if (pIVar17 != (Il2CppObject *)0x0) {
        pIVar17[1].klass = extraout_RDX;
        il2cpp_runtime_helper_022b4080(pIVar17 + 1,extraout_RDX);
        pIVar17[1].monitor = pvVar7;
        il2cpp_runtime_helper_022b4080(&pIVar17[1].monitor,pvVar7);
        pIVar17[2].klass = pIVar10;
        il2cpp_runtime_helper_022b4080(pIVar17 + 2,pIVar10);
        build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        id = System_String__Concat_3ae5ba0
                       (*(System_String_o **)((long)pvVar7 + 0x10),"-content",(MethodInfo *)0x0);
        method_00 = TypeInfo_AottgScreenWithBrushSidePanel;
        if (*(int *)((long)&TypeInfo_AottgScreenWithBrushSidePanel[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        layout = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(method_00);
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           (_DAT_055db7d8,(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                             (__this_01,"brushSidePanelScreenContent",build,id,layout,pGVar8,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                             (_DAT_055db7d8,(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
          if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar9->fields).enter = pGVar8;
            pSVar15 = (System_String_array *)il2cpp_runtime_helper_022b4080(&(pGVar9->fields).enter,pGVar8);
            return pSVar15;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeeee == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0();
        g_data_057aeeee = '\x01';
      }
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pSVar15 = (System_String_array *)
                Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                           (System_String_o *)0x0,0.0,width,height,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,1.0,(MethodInfo *)0x0);
      return pSVar15;
    }
  }
  return (System_String_array *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionOptions
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, const MethodInfo* method);
// 0x4535f30

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool_conflict bVar11;
  Il2CppObject *__this_00;
  undefined8 uVar12;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar13;
  void *pvVar14;
  System_Action_AottgUi__o *build;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar16;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Il2CppClass *pIVar18;
  Il2CppClass *extraout_RDX;
  ulong uVar19;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *pGVar20;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  undefined8 *puVar21;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *unaff_R12;
  Il2CppObject *pIVar22;
  Il2CppClass *local_108;
  void *pvStack_100;
  Il2CppClass *pIStack_f8;
  void *pvStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  Il2CppClass *local_98;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *local_90;
  Il2CppClass *local_88;
  void *local_80;
  ulong local_78;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (g_data_057aeeea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushSidePanelOption);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SectionOptions_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass35_0);
    g_data_057aeeea = '\x01';
  }
  if ((__this->fields)._sections != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    unaff_R12 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption);
    pGVar13 = (__this->fields)._sections;
    if (pGVar13 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      if (unaff_R12 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) goto label_04536216;
      pGVar20 = unaff_R12->m_Items;
      pIVar22 = (Il2CppObject *)&g_data_00000020;
      uVar19 = 0;
      local_90 = unaff_R12;
      local_88 = (Il2CppClass *)__this;
      do {
        __this = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)local_88;
        if ((long)(int)pGVar13->max_length <= (long)uVar19) {
          return unaff_R12;
        }
        __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass35_0);
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        pvVar14 = (((Il2CppClass *)__this)->_1).byval_arg.data;
        if (pvVar14 == (void *)0x0) break;
        if (*(uint *)((long)pvVar14 + 0x18) <= uVar19) goto label_0453625c;
        local_98 = *(Il2CppClass **)((long)&pIVar22[4].klass + (long)pvVar14);
        puVar21 = (undefined8 *)((long)&(pIVar22 + -2)[2].klass + (long)pvVar14);
        uVar12 = *puVar21;
        uVar4 = puVar21[1];
        puVar21 = (undefined8 *)((long)&pIVar22[1].klass + (long)pvVar14);
        uVar5 = *puVar21;
        uVar6 = puVar21[1];
        puVar21 = (undefined8 *)((long)&pIVar22[2].klass + (long)pvVar14);
        uVar7 = *puVar21;
        uVar8 = puVar21[1];
        puVar21 = (undefined8 *)((long)&pIVar22[3].klass + (long)pvVar14);
        uVar9 = *puVar21;
        uVar10 = puVar21[1];
        local_d8 = uVar12;
        uStack_d0 = uVar4;
        local_c8 = uVar5;
        uStack_c0 = uVar6;
        local_b8 = uVar7;
        uStack_b0 = uVar8;
        local_a8 = uVar9;
        uStack_a0 = uVar10;
        local_78 = uVar19;
        local_70 = pGVar20;
        if (__this_00 == (Il2CppObject *)0x0) break;
        __this_00[5].klass = local_98;
        local_d8._0_4_ = (undefined4)uVar12;
        local_d8._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
        uStack_d0._0_4_ = (undefined4)uVar4;
        uStack_d0._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
        local_c8._0_4_ = (undefined4)uVar5;
        local_c8._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
        uStack_c0._0_4_ = (undefined4)uVar6;
        uStack_c0._4_4_ = (undefined4)((ulong)uVar6 >> 0x20);
        local_b8._0_4_ = (undefined4)uVar7;
        local_b8._4_4_ = (undefined4)((ulong)uVar7 >> 0x20);
        uStack_b0._0_4_ = (undefined4)uVar8;
        uStack_b0._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
        local_a8._0_4_ = (undefined4)uVar9;
        local_a8._4_4_ = (undefined4)((ulong)uVar9 >> 0x20);
        uStack_a0._0_4_ = (undefined4)uVar10;
        uStack_a0._4_4_ = (undefined4)((ulong)uVar10 >> 0x20);
        *(undefined4 *)&__this_00[4].klass = (undefined4)local_a8;
        *(undefined4 *)((long)&__this_00[4].klass + 4) = local_a8._4_4_;
        *(undefined4 *)&__this_00[4].monitor = (undefined4)uStack_a0;
        *(undefined4 *)((long)&__this_00[4].monitor + 4) = uStack_a0._4_4_;
        *(undefined4 *)&__this_00[3].klass = (undefined4)local_b8;
        *(undefined4 *)((long)&__this_00[3].klass + 4) = local_b8._4_4_;
        *(undefined4 *)&__this_00[3].monitor = (undefined4)uStack_b0;
        *(undefined4 *)((long)&__this_00[3].monitor + 4) = uStack_b0._4_4_;
        *(undefined4 *)&__this_00[2].klass = (undefined4)local_c8;
        *(undefined4 *)((long)&__this_00[2].klass + 4) = local_c8._4_4_;
        *(undefined4 *)&__this_00[2].monitor = (undefined4)uStack_c0;
        *(undefined4 *)((long)&__this_00[2].monitor + 4) = uStack_c0._4_4_;
        *(undefined4 *)&__this_00[1].klass = (undefined4)local_d8;
        *(undefined4 *)((long)&__this_00[1].klass + 4) = local_d8._4_4_;
        *(undefined4 *)&__this_00[1].monitor = (undefined4)uStack_d0;
        *(undefined4 *)((long)&__this_00[1].monitor + 4) = uStack_d0._4_4_;
        il2cpp_runtime_helper_022b4080(__this_00 + 1,0);
        __this = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)__this_00[2].klass;
        pvVar14 = __this_00[2].monitor;
        uVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor();
        pIVar1 = __this_00[3].klass;
        local_80 = __this_00[3].monitor;
        pvStack_f0 = (void *)0x0;
        uStack_e8 = 0;
        pvStack_100 = (void *)0x0;
        pIStack_f8 = (Il2CppClass *)0x0;
        local_e0 = 0;
        local_108 = (Il2CppClass *)__this;
        il2cpp_runtime_helper_022b4080(&local_108,__this);
        pvStack_100 = pvVar14;
        il2cpp_runtime_helper_022b4080(&pvStack_100,pvVar14);
        pIStack_f8 = pIVar1;
        il2cpp_runtime_helper_022b4080(&pIStack_f8,pIVar1);
        local_e0 = uVar12;
        il2cpp_runtime_helper_022b4080(&local_e0,uVar12);
        pvStack_f0 = local_80;
        il2cpp_runtime_helper_022b4080(&pvStack_f0);
        uStack_e8 = 0;
        il2cpp_runtime_helper_022b4080(&uStack_e8);
        unaff_R12 = local_90;
        local_48 = uStack_e8;
        uVar12 = local_48;
        uStack_40 = local_e0;
        uVar4 = uStack_40;
        local_58 = pIStack_f8;
        pIVar2 = local_58;
        uStack_50 = pvStack_f0;
        pvVar3 = uStack_50;
        local_68 = local_108;
        pIVar1 = local_68;
        uStack_60 = pvStack_100;
        pvVar14 = uStack_60;
        if ((uint)local_90->max_length <= local_78) goto label_0453625c;
        uVar19 = local_78 + 1;
        pIVar22 = (Il2CppObject *)&pIVar22[4].monitor;
        local_68._0_4_ = SUB84(local_108,0);
        local_68._4_4_ = (undefined4)((ulong)local_108 >> 0x20);
        uStack_60._0_4_ = SUB84(pvStack_100,0);
        uStack_60._4_4_ = (undefined4)((ulong)pvStack_100 >> 0x20);
        local_58._0_4_ = SUB84(pIStack_f8,0);
        local_58._4_4_ = (undefined4)((ulong)pIStack_f8 >> 0x20);
        uStack_50._0_4_ = SUB84(pvStack_f0,0);
        uStack_50._4_4_ = (undefined4)((ulong)pvStack_f0 >> 0x20);
        local_48._0_4_ = (undefined4)uStack_e8;
        local_48._4_4_ = (undefined4)((ulong)uStack_e8 >> 0x20);
        uStack_40._0_4_ = (undefined4)local_e0;
        uStack_40._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
        *(undefined4 *)&(local_70->fields).ActionId = (undefined4)local_48;
        *(undefined4 *)((long)&(local_70->fields).ActionId + 4) = local_48._4_4_;
        *(undefined4 *)&(local_70->fields).Action = (undefined4)uStack_40;
        *(undefined4 *)((long)&(local_70->fields).Action + 4) = uStack_40._4_4_;
        *(undefined4 *)&(local_70->fields).TextKey = (undefined4)local_58;
        *(undefined4 *)((long)&(local_70->fields).TextKey + 4) = local_58._4_4_;
        *(undefined4 *)&(local_70->fields).Icon = (undefined4)uStack_50;
        *(undefined4 *)((long)&(local_70->fields).Icon + 4) = uStack_50._4_4_;
        *(undefined4 *)&(local_70->fields)._id = (undefined4)local_68;
        *(undefined4 *)((long)&(local_70->fields)._id + 4) = local_68._4_4_;
        *(undefined4 *)&(local_70->fields).Label = (undefined4)uStack_60;
        *(undefined4 *)((long)&(local_70->fields).Label + 4) = uStack_60._4_4_;
        pGVar20 = local_70 + 1;
        local_68 = pIVar1;
        uStack_60 = pvVar14;
        local_58 = pIVar2;
        uStack_50 = pvVar3;
        local_48 = uVar12;
        uStack_40 = uVar4;
        il2cpp_runtime_helper_022b4080(local_70);
        pGVar13 = (local_88->_1).byval_arg.data;
        __this = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)local_88;
      } while (pGVar13 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0);
    }
  }
  do {
    do {
      pGVar13 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_runtime_helper_022b2c90();
label_04536216:
      if ((int)pGVar13->max_length < 1) {
        return unaff_R12;
      }
      pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass35_0);
      System_Object___ctor(pIVar22,(MethodInfo *)0x0);
      pvVar14 = (((Il2CppClass *)__this)->_1).byval_arg.data;
    } while (pvVar14 == (void *)0x0);
    if (*(int *)((long)pvVar14 + 0x18) == 0) {
label_0453625c:
      pvVar14 = (void *)il2cpp_runtime_helper_022b2ca0();
    }
    local_98 = *(Il2CppClass **)((long)pvVar14 + 0x60);
    uVar12 = *(undefined8 *)((long)pvVar14 + 0x20);
    uVar4 = *(undefined8 *)((long)pvVar14 + 0x28);
    uVar5 = *(undefined8 *)((long)pvVar14 + 0x30);
    uVar6 = *(undefined8 *)((long)pvVar14 + 0x38);
    uVar7 = *(undefined8 *)((long)pvVar14 + 0x40);
    uVar8 = *(undefined8 *)((long)pvVar14 + 0x48);
    uVar9 = *(undefined8 *)((long)pvVar14 + 0x50);
    uVar10 = *(undefined8 *)((long)pvVar14 + 0x58);
    local_d8 = uVar12;
    uStack_d0 = uVar4;
    local_c8 = uVar5;
    uStack_c0 = uVar6;
    local_b8 = uVar7;
    uStack_b0 = uVar8;
    local_a8 = uVar9;
    uStack_a0 = uVar10;
  } while (pIVar22 == (Il2CppObject *)0x0);
  pIVar22[5].klass = local_98;
  local_d8._0_4_ = (undefined4)uVar12;
  local_d8._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
  uStack_d0._0_4_ = (undefined4)uVar4;
  uStack_d0._4_4_ = (undefined4)((ulong)uVar4 >> 0x20);
  local_c8._0_4_ = (undefined4)uVar5;
  local_c8._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
  uStack_c0._0_4_ = (undefined4)uVar6;
  uStack_c0._4_4_ = (undefined4)((ulong)uVar6 >> 0x20);
  local_b8._0_4_ = (undefined4)uVar7;
  local_b8._4_4_ = (undefined4)((ulong)uVar7 >> 0x20);
  uStack_b0._0_4_ = (undefined4)uVar8;
  uStack_b0._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
  local_a8._0_4_ = (undefined4)uVar9;
  local_a8._4_4_ = (undefined4)((ulong)uVar9 >> 0x20);
  uStack_a0._0_4_ = (undefined4)uVar10;
  uStack_a0._4_4_ = (undefined4)((ulong)uVar10 >> 0x20);
  *(undefined4 *)&pIVar22[4].klass = (undefined4)local_a8;
  *(undefined4 *)((long)&pIVar22[4].klass + 4) = local_a8._4_4_;
  *(undefined4 *)&pIVar22[4].monitor = (undefined4)uStack_a0;
  *(undefined4 *)((long)&pIVar22[4].monitor + 4) = uStack_a0._4_4_;
  *(undefined4 *)&pIVar22[3].klass = (undefined4)local_b8;
  *(undefined4 *)((long)&pIVar22[3].klass + 4) = local_b8._4_4_;
  *(undefined4 *)&pIVar22[3].monitor = (undefined4)uStack_b0;
  *(undefined4 *)((long)&pIVar22[3].monitor + 4) = uStack_b0._4_4_;
  *(undefined4 *)&pIVar22[2].klass = (undefined4)local_c8;
  *(undefined4 *)((long)&pIVar22[2].klass + 4) = local_c8._4_4_;
  *(undefined4 *)&pIVar22[2].monitor = (undefined4)uStack_c0;
  *(undefined4 *)((long)&pIVar22[2].monitor + 4) = uStack_c0._4_4_;
  *(undefined4 *)&pIVar22[1].klass = (undefined4)local_d8;
  *(undefined4 *)((long)&pIVar22[1].klass + 4) = local_d8._4_4_;
  *(undefined4 *)&pIVar22[1].monitor = (undefined4)uStack_d0;
  *(undefined4 *)((long)&pIVar22[1].monitor + 4) = uStack_d0._4_4_;
  il2cpp_runtime_helper_022b4080(pIVar22 + 1,0);
  pIVar1 = pIVar22[2].klass;
  pvVar14 = pIVar22[2].monitor;
  uVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  pIVar18 = (Il2CppClass *)0x0;
  System_Action_GisketchActionContext____ctor();
  pIVar2 = pIVar22[3].klass;
  pvVar3 = pIVar22[3].monitor;
  pvStack_f0 = (void *)0x0;
  uStack_e8 = 0;
  pvStack_100 = (void *)0x0;
  pIStack_f8 = (Il2CppClass *)0x0;
  local_e0 = 0;
  local_108 = pIVar1;
  il2cpp_runtime_helper_022b4080(&local_108,pIVar1);
  pvStack_100 = pvVar14;
  il2cpp_runtime_helper_022b4080(&pvStack_100,pvVar14);
  pIStack_f8 = pIVar2;
  il2cpp_runtime_helper_022b4080(&pIStack_f8,pIVar2);
  local_e0 = uVar12;
  il2cpp_runtime_helper_022b4080(&local_e0,uVar12);
  pvStack_f0 = pvVar3;
  il2cpp_runtime_helper_022b4080(&pvStack_f0);
  uStack_e8 = 0;
  puVar21 = &uStack_e8;
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  il2cpp_runtime_helper_022b4080();
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeee7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057aeee7 = '\x01';
  }
  if (*(char *)(puVar21 + 10) != '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar14 = (void *)0x0;
    bVar11 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    }
    if (*(int *)(puVar21 + 5) == 0) {
      if (puVar21[4] != 0) {
        return (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
               (ulong)(1 < *(int *)(puVar21[4] + 0x18));
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeee0 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenWithBrushSidePanel);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildContentLayer_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass25_0);
        il2cpp_runtime_helper_023445d0(&"-content");
        il2cpp_runtime_helper_023445d0(&"brushSidePanelContentIntro");
        il2cpp_runtime_helper_023445d0(&"brushSidePanelScreenContent");
        g_data_057aeee0 = '\x01';
      }
      pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass25_0);
      System_Object___ctor(pIVar22,(MethodInfo *)0x0);
      if (pIVar22 != (Il2CppObject *)0x0) {
        pIVar22[1].klass = extraout_RDX;
        il2cpp_runtime_helper_022b4080(pIVar22 + 1,extraout_RDX);
        pIVar22[1].monitor = pvVar14;
        il2cpp_runtime_helper_022b4080(&pIVar22[1].monitor,pvVar14);
        pIVar22[2].klass = pIVar18;
        il2cpp_runtime_helper_022b4080(pIVar22 + 2,pIVar18);
        build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        id = System_String__Concat_3ae5ba0
                       (*(System_String_o **)((long)pvVar14 + 0x10),"-content",(MethodInfo *)0x0);
        method_00 = TypeInfo_AottgScreenWithBrushSidePanel;
        if (*(int *)((long)&TypeInfo_AottgScreenWithBrushSidePanel[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        layout = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(method_00);
        pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                            (_DAT_055db7d8,(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                              (__this_01,"brushSidePanelScreenContent",build,id,layout,pGVar15,(MethodInfo *)0x0);
          pGVar15 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                              (_DAT_055db7d8,(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
          if (pGVar16 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar16->fields).enter = pGVar15;
            pGVar17 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
                      il2cpp_runtime_helper_022b4080(&(pGVar16->fields).enter,pGVar15);
            return pGVar17;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeeee == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0();
        g_data_057aeeee = '\x01';
      }
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar17 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
                Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                           (System_String_o *)0x0,0.0,width,height,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,1.0,(MethodInfo *)0x0);
      return pGVar17;
    }
  }
  return (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionRootId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionRootId (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x4537200

System_String_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionRootId
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,System_String_o *sectionId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057aeeeb == '\0') {
    il2cpp_runtime_helper_023445d0(&"-section-");
    g_data_057aeeeb = '\x01';
  }
  pSVar1 = System_String__Concat_3af7150((__this->fields)._id,"-section-",sectionId,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionHeaderId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionHeaderId (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x45377c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionHeaderId
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,System_String_o *sectionId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057aeeec == '\0') {
    il2cpp_runtime_helper_023445d0(&"-header");
    g_data_057aeeec = '\x01';
  }
  if (g_data_057aeeeb == '\0') {
    il2cpp_runtime_helper_023445d0(&"-section-");
    g_data_057aeeeb = '\x01';
  }
  pSVar1 = System_String__Concat_3af7150((__this->fields)._id,"-section-",sectionId,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0(pSVar1,"-header",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionBodyId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionBodyId (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x4537850

System_String_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionBodyId
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,System_String_o *sectionId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057aeeed == '\0') {
    il2cpp_runtime_helper_023445d0(&"-body");
    g_data_057aeeed = '\x01';
  }
  if (g_data_057aeeeb == '\0') {
    il2cpp_runtime_helper_023445d0(&"-section-");
    g_data_057aeeeb = '\x01';
  }
  pSVar1 = System_String__Concat_3af7150((__this->fields)._id,"-section-",sectionId,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3ae5ba0(pSVar1,"-body",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$FullScreenAbsolute
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute (const MethodInfo* method);
// 0x4536600

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aeeee == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeee = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                      (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$<BuildLegacy>b__24_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___BuildLegacy_b__24_0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x45378d0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___BuildLegacy_b__24_0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  char cVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_c *pGVar2;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *buildFooter;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar11;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar13;
  System_String_o *pSVar14;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *in_RCX;
  MethodInfo *method_00;
  int iVar15;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar16;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *str0;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar18;
  System_String_o **ppSVar19;
  System_String_o **ppSVar20;
  MethodInfo *in_R8;
  
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = (__this->fields)._sidePanel;
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *)0x0) {
      return;
    }
    pGVar2 = pGVar3->klass;
    vtableDispatch = (pGVar2->vtable)._4_Build.methodPtr;
    (*vtableDispatch)(pGVar3,panel,(pGVar2->vtable)._4_Build.method,pGVar2,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(__this->fields)._id;
  if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    cVar1 = *(char *)&(__this->fields)._title;
    if (g_data_057aeee3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildSections_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass28_0);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"DeferredSidePanelSections");
      il2cpp_runtime_helper_023445d0(&"-scroll");
      il2cpp_runtime_helper_023445d0(&"-deferred-sections");
      g_data_057aeee3 = '\x01';
    }
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass28_0);
    str0 = pGVar4;
    System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      str0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar4->fields).id;
      (pGVar4->fields).id = (System_String_o *)pGVar11;
      il2cpp_runtime_helper_022b4080();
      if (cVar1 == '\0') {
        pGVar16 = (pGVar11->fields)._sections;
        if (pGVar16 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
          iVar15 = (int)pGVar16->max_length;
          *(int *)&(pGVar4->fields).type = iVar15;
          if (0 < iVar15) {
            iVar15 = 0;
            do {
              Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                        (pGVar11,panel,iVar15,(MethodInfo *)in_RCX);
              iVar15 = iVar15 + 1;
            } while (iVar15 < *(int *)&(pGVar4->fields).type);
          }
          return;
        }
      }
      else {
        *(int32_t *)&(pGVar4->fields).type = 0;
        pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        str0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(pGVar11->fields)._id;
        pSVar6 = System_String__Concat_3ae5ba0((System_String_o *)str0,"-scroll",(MethodInfo *)0x0);
        if ((Gisketch_Aottg2UI_Game_AottgScreenSection_array *)panel !=
            (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached(panel,pSVar5,pSVar6,(MethodInfo *)0x0);
          if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            return;
          }
          if (pGVar7->max_length == 0) {
            return;
          }
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
          str0 = pGVar4;
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar4->fields).type = "DeferredSidePanelSections";
            il2cpp_runtime_helper_022b4080(&pGVar4->fields);
            pSVar6 = System_String__Concat_3ae5ba0((pGVar11->fields)._id,"-deferred-sections",(MethodInfo *)0x0);
            (pGVar4->fields).id = pSVar6;
            il2cpp_runtime_helper_022b4080(&(pGVar4->fields).id,pSVar6);
            *(undefined1 *)((long)&(pGVar4->fields).hasIcon + 2) = 1;
            (pGVar4->fields).steps = (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)pGVar7;
            il2cpp_runtime_helper_022b4080(&(pGVar4->fields).steps,pGVar7);
            pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
            pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
            pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0
                                 ,(System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,pGVar9,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                 (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                 0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
            (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
            il2cpp_runtime_helper_022b4080(&(pGVar4->fields).search,pGVar10);
            Gisketch_Aottg2UI_Code_AottgUi__Add(panel,pGVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)str0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar16 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)panel;
  pGVar18 = pGVar11;
  if (g_data_057aeeef == '\0') {
    pGVar18 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)&TypeInfo_AottgBrushSidePanel;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeef = '\x01';
  }
  pSVar6 = (pGVar11->fields)._id;
  if (pSVar6 != (System_String_o *)0x0) {
    pGVar17 = (pGVar11->fields)._sections;
    pGVar16 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)pSVar6[1].klass;
    in_RCX = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)pSVar6[2].klass;
    pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBrushSidePanel);
    pGVar18 = pGVar11;
    Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor
              ((Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *)pGVar11,(System_String_o *)pGVar16,
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)pGVar17,in_RCX,in_R8);
    if ((Gisketch_Aottg2UI_Game_AottgScreenSection_array *)panel !=
        (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar11,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar17 = pGVar16;
  ppSVar19 = (System_String_o **)pGVar18;
  if (g_data_057aeef0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelScreenScroll");
    ppSVar19 = &"-scroll";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef0 = '\x01';
  }
  pSVar6 = (pGVar18->fields)._title;
  if (pSVar6 != (System_String_o *)0x0) {
    pSVar5 = (System_Action_AottgUi__o *)(pGVar18->fields)._id;
    pGVar12 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
              System_String__Concat_3ae5ba0((System_String_o *)pSVar6->fields,"-scroll",(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar13 = "brushSidePanelScreenScroll";
    pGVar17 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0;
    in_RCX = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    ppSVar19 = (System_String_o **)"Column";
    contentLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)"Center",
                    (System_String_o *)0x0,(System_String_o *)0x0,48.0,pGVar8,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,98.0,
                    *(float *)(&g_data_00d1d670 +
                              (ulong)((pGVar18->fields)._sections ==
                                     (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) * 4),0.0,0.0,0.0,
                    1.0,(MethodInfo *)0x0);
    if (pGVar16 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar16,(System_String_o *)pGVar13,pSVar5,
                 (System_String_o *)pGVar12,pGVar10,contentLayout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      buildFooter = (pGVar18->fields)._sections;
      if (buildFooter == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
        return;
      }
      pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)(pGVar18->fields)._title;
      ppSVar19 = (System_String_o **)0x0;
      in_RCX = pGVar12;
      pGVar17 = pGVar13;
      if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddContentFooter
                  (pGVar11,(Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar16,(System_Action_AottgUi__o *)buildFooter
                   ,(MethodInfo *)pGVar12);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar16 = pGVar17;
  ppSVar20 = ppSVar19;
  if (g_data_057aeef1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddContentFooter_b__1);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"-content-footer");
    ppSVar20 = &"brushSidePanelContentFooter";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef1 = '\x01';
  }
  pSVar6 = "brushSidePanelContentFooter";
  pGVar13 = (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar19)->fields)._sections;
  if (pGVar13 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    ppSVar20 = (System_String_o **)
               &(((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar19)->fields)._sections;
    pGVar13 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    in_RCX = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    System_Action_object____ctor();
    (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar19)->fields)._sections = pGVar13;
    pGVar16 = pGVar13;
    il2cpp_runtime_helper_022b4080();
  }
  pSVar14 = (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar19)->fields)._id;
  if (pSVar14 != (System_String_o *)0x0) {
    pSVar14 = System_String__Concat_3ae5ba0((System_String_o *)pSVar14->fields,"-content-footer",(MethodInfo *)0x0)
    ;
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    in_RCX = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    pGVar16 = "Center";
    ppSVar20 = (System_String_o **)"Column";
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)"Center","Stretch",
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    if (pGVar17 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,pSVar6,(System_Action_AottgUi__o *)pGVar13,
                 pSVar14,pGVar10,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar17 = pGVar16;
  ppSVar19 = ppSVar20;
  if (g_data_057aeef2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"FlexEnd");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-content-footer-actions");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"-content-footer-texture");
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Texture/SeamlessGrunge");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    ppSVar19 = &"brushSidePanelContentFooterTexture";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeef2 = '\x01';
  }
  pSVar6 = (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar20)->fields)._id;
  if (pSVar6 != (System_String_o *)0x0) {
    pGVar12 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)
              System_String__Concat_3ae5ba0((System_String_o *)pSVar6->fields,"-content-footer-texture",(MethodInfo *)0x0);
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar17 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0;
    in_RCX = "Absolute";
    ppSVar19 = (System_String_o **)"Column";
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)"Absolute",(System_String_o *)0x0,0.0,pGVar8,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    if (pGVar16 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      pGVar17 = "GisketchUI/Texture/SeamlessGrunge";
      Gisketch_Aottg2UI_Code_AottgUi__Image
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar16,(System_String_o *)"GisketchUI/Texture/SeamlessGrunge","brushSidePanelContentFooterTexture",
                 (System_String_o *)pGVar12,pGVar10,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      ppSVar19 = (System_String_o **)
                 (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar20)->fields)._id;
      in_RCX = pGVar12;
      if ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar19 !=
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        pGVar17 = pGVar16;
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge
                  ((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar19,
                   (Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar16,method_00);
        pSVar6 = (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar20)->fields)._id;
        in_RCX = pGVar12;
        if (pSVar6 != (System_String_o *)0x0) {
          pSVar5 = (System_Action_AottgUi__o *)
                   (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar20)->fields)._title;
          pSVar6 = System_String__Concat_3ae5ba0
                             ((System_String_o *)pSVar6->fields,"-content-footer-actions",(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ("Row","FlexEnd",(System_String_o *)"Center",
                               (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar8,pGVar9,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,20.0,20.0
                               ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar16,"default",pSVar5,pSVar6,pGVar10,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)
            (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar19)->fields)._title;
  if (pGVar11 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    iVar15 = *(int *)&(((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar19)->fields)._id;
    do {
      pGVar16 = (pGVar11->fields)._sections;
      if (pGVar16 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
      if ((int)pGVar16->max_length <= iVar15) {
        return;
      }
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                (pGVar11,(Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar17,iVar15,(MethodInfo *)in_RCX);
      iVar15 = iVar15 + 1;
      pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)
                (((Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)ppSVar19)->fields)._title;
    } while (pGVar11 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}



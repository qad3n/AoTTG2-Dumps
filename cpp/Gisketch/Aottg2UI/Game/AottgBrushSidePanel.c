// Type: Gisketch.Aottg2UI.Game.AottgBrushSidePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBrushSidePanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c___cctor (const MethodInfo* method);
// 0x4533dd0

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aeec8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeec8 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c_o* __this, const MethodInfo* method);
// 0x4533e40

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c$$<Build>b__26_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c___Build_b__26_1 (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* texture, const MethodInfo* method);
// 0x4533e50

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c___Build_b__26_1
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *texture,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar4;
  undefined4 uVar5;
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
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option;
  il2cpp_array_size_t iVar16;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar18;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar19;
  MethodInfo *method_00;
  System_Action_AottgUi__o *pSVar20;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar21;
  Il2CppArrayBounds *pIVar22;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  ulong uVar23;
  undefined8 extraout_RDX;
  ulong uVar24;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar25;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar26;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar27;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar28;
  void *pvVar29;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar30;
  void **ppvVar31;
  long lVar32;
  
  if (g_data_057aeec9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"brushSidePanelTexture");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-texture");
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Texture/SeamlessGrunge");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeec9 = '\x01';
  }
  pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Points(920.0,(MethodInfo *)0x0);
  pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Points(2400.0,(MethodInfo *)0x0);
  pGVar25 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  pGVar28 = "Column";
  pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       "Absolute",(System_String_o *)0x0,0.0,pGVar17,pGVar18,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
  if (texture != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (texture,"GisketchUI/Texture/SeamlessGrunge",_DAT_055db818,"brush-side-panel-texture",pGVar19,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__26_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-button-");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-footer");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-buttons");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelHeader");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-footer-");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-header");
    il2cpp_runtime_helper_023445d0(&"brushSidePanel");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-outline");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelOutline");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-base");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Elements/SidePanelBase");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeca = '\x01';
  }
  method_00 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgUi__Points(954.0,(MethodInfo *)0x0);
  pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Points(2418.0,(MethodInfo *)0x0);
  pGVar26 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  pGVar30 = "Column";
  pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       "Absolute",(System_String_o *)0x0,0.0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,pGVar17,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,38.0,12.0,
                       0.0,1.0,(MethodInfo *)0x0);
  if (pGVar25 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar25,"GisketchUI/Elements/SidePanelBase","brushSidePanelOutline","brush-side-panel-outline",pGVar19,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar26 = "brushSidePanel";
    pSVar20 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pSVar20 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar20 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar32 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar32 + 8) = pSVar20;
      il2cpp_runtime_helper_022b4080(lVar32 + 8,pSVar20);
    }
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Points(920.0,(MethodInfo *)0x0);
    pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Points(2400.0,(MethodInfo *)0x0);
    pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         "Absolute",(System_String_o *)0x0,0.0,pGVar17,pGVar18,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar30 = pGVar25;
    pGVar21 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar25,(System_String_o *)pGVar26,pSVar20,
                         "brush-side-panel-base",pGVar19,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0);
    if (pGVar21 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar21->fields).sprite = "GisketchUI/Elements/SidePanelBase";
      il2cpp_runtime_helper_022b4080();
      pGVar26 = "brushSidePanelHeader";
      pSVar20 = (System_Action_AottgUi__o *)pGVar28->m_Items[0].fields._id;
      if (pSVar20 == (System_Action_AottgUi__o *)0x0) {
        pSVar20 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        pGVar28->m_Items[0].fields._id = (System_String_o *)pSVar20;
        il2cpp_runtime_helper_022b4080(pGVar28->m_Items,pSVar20);
      }
      pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Points(1380.0,(MethodInfo *)0x0);
      pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
      pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column","Center","Center","Absolute",
                           (System_String_o *)0x0,0.0,pGVar17,pGVar18,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-360.0,
                           -75.0,0.0,1.0,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pGVar30 = pGVar25;
      pGVar21 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar25,(System_String_o *)pGVar26,pSVar20,
                           "brush-side-panel-header",pGVar19,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
      pGVar27 = "GisketchUI/Elements/brushStroke_02";
      if (pGVar21 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        pGVar30 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)&(pGVar21->fields).sprite;
        (pGVar21->fields).sprite = (System_String_o *)"GisketchUI/Elements/brushStroke_02";
        il2cpp_runtime_helper_022b4080();
        pGVar26 = pGVar27;
        if (pGVar28->bounds != (Il2CppArrayBounds *)0x0) {
          pGVar26 = *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)
                     &pGVar28->bounds[1].lower_bound;
          pGVar30 = pGVar25;
          Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddOptionList
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar25,pGVar26,"brush-side-panel-buttons","brush-side-panel-button-",540.0,
                     *(float *)&pGVar28->max_length,1,method_00);
          if (pGVar28->bounds != (Il2CppArrayBounds *)0x0) {
            pGVar27 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)pGVar28->bounds[2].length;
            pGVar26 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
            if (pGVar27 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
              Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddOptionList
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar25,pGVar27,"brush-side-panel-footer","brush-side-panel-footer-",
                         *(float *)(&g_data_00d1d7e0 + (ulong)((int)pGVar27->max_length == 1) * 4),
                         *(float *)&pGVar28->max_length,0,method_00);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar28 = pGVar26;
  pGVar25 = pGVar30;
  if (g_data_057aeecb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-title");
    pGVar25 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)&"brushSidePanelHeaderText";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeecb = '\x01';
  }
  if ((pGVar30->bounds != (Il2CppArrayBounds *)0x0) &&
     (pGVar26 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0)) {
    pGVar21 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar26,
                         (System_String_o *)pGVar30->bounds[1].length,"brushSidePanelHeaderText","brush-side-panel-title",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0);
    method_00 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgUi__Percent(88.0,(MethodInfo *)0x0);
    pGVar17 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar28 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    pGVar25 = "Column";
    pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,pGVar17,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    if (pGVar21 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar21->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar19;
      il2cpp_runtime_helper_022b4080(&(pGVar21->fields).search,pGVar19);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar22 = pGVar25->bounds;
  if (pIVar22 != (Il2CppArrayBounds *)0x0) {
    lVar32 = 0x20;
    uVar24 = 0;
    pGVar26 = pGVar28;
    pGVar30 = pGVar25;
    do {
      uVar23 = (ulong)(uint)pIVar22[1].lower_bound;
      if ((long)pIVar22[1].lower_bound <= (long)uVar24) {
        return;
      }
      if (uVar23 <= uVar24) {
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057aeecc == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushButton);
          il2cpp_runtime_helper_023445d0(&"brushSidePanelBrushButton");
          g_data_057aeecc = '\x01';
        }
        uVar5 = *(undefined4 *)&pGVar30->bounds;
        uVar6 = *(undefined4 *)((long)&pGVar30->bounds + 4);
        iVar16 = pGVar30->max_length;
        uVar7 = *(undefined4 *)((long)&pGVar30->max_length + 4);
        uVar8 = *(undefined4 *)&pGVar30->m_Items[0].fields._id;
        uVar9 = *(undefined4 *)((long)&pGVar30->m_Items[0].fields._id + 4);
        uVar10 = *(undefined4 *)&pGVar30->m_Items[0].fields.Label;
        uVar11 = *(undefined4 *)((long)&pGVar30->m_Items[0].fields.Label + 4);
        uVar12 = *(undefined4 *)&pGVar30->m_Items[0].fields.TextKey;
        uVar13 = *(undefined4 *)((long)&pGVar30->m_Items[0].fields.TextKey + 4);
        uVar14 = *(undefined4 *)&pGVar30->m_Items[0].fields.Icon;
        uVar15 = *(undefined4 *)((long)&pGVar30->m_Items[0].fields.Icon + 4);
        pGVar4 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)pGVar30->m_Items[0].fields.ActionId;
        uVar3 = *(undefined1 *)&pGVar30->m_Items[0].fields.Action;
        __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBrushButton);
        pvVar29 = "brushSidePanelBrushButton";
        Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
        *(undefined4 *)&__this_00[3].klass = uVar12;
        *(undefined4 *)((long)&__this_00[3].klass + 4) = uVar13;
        *(undefined4 *)&__this_00[3].monitor = uVar14;
        *(undefined4 *)((long)&__this_00[3].monitor + 4) = uVar15;
        *(undefined4 *)&__this_00[2].klass = uVar8;
        *(undefined4 *)((long)&__this_00[2].klass + 4) = uVar9;
        *(undefined4 *)&__this_00[2].monitor = uVar10;
        *(undefined4 *)((long)&__this_00[2].monitor + 4) = uVar11;
        *(undefined4 *)&__this_00[1].klass = uVar5;
        *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar6;
        *(int *)&__this_00[1].monitor = (int)iVar16;
        *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar7;
        il2cpp_runtime_helper_022b4080(__this_00 + 1,0);
        __this_00[4].klass = pGVar4;
        il2cpp_runtime_helper_022b4080(__this_00 + 4,pGVar4);
        ppvVar31 = &__this_00[4].monitor;
        __this_00[4].monitor = pvVar29;
        il2cpp_runtime_helper_022b4080();
        *(undefined1 *)&__this_00[5].klass = uVar3;
        if (pGVar26 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          *ppvVar31 = (void *)0x0;
          il2cpp_runtime_helper_022b4080();
          ppvVar31[1] = pvVar29;
          il2cpp_runtime_helper_022b4080(ppvVar31 + 1,pvVar29);
          ppvVar31[2] = (void *)0x0;
          il2cpp_runtime_helper_022b4080(ppvVar31 + 2,0);
          ppvVar31[4] = (void *)extraout_RDX;
          il2cpp_runtime_helper_022b4080(ppvVar31 + 4,extraout_RDX);
          ppvVar31[3] = (void *)uVar23;
          il2cpp_runtime_helper_022b4080(ppvVar31 + 3,uVar23);
          ppvVar31[5] = (void *)0x0;
          il2cpp_runtime_helper_022b4080(ppvVar31 + 5,0);
          return;
        }
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar26,__this_00,(MethodInfo *)0x0);
        return;
      }
      puVar1 = (undefined8 *)((long)&pIVar22[1].length + lVar32);
      puVar2 = (undefined8 *)((long)&pIVar22[2].length + lVar32);
      pGVar26 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)(uVar24 & 0xffffffff);
      option.fields.TextKey = (System_String_o *)*puVar1;
      option.fields._0_16_ = *(undefined1 (*) [16])((long)&pIVar22->length + lVar32);
      option.fields.Icon = (System_String_o *)puVar1[1];
      option.fields.ActionId = (System_String_o *)*puVar2;
      option.fields.Action = (System_Action_GisketchActionContext__o *)puVar2[1];
      pGVar30 = pGVar28;
      Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddButtonRow
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar28,option,(int32_t)uVar24,
                 (System_String_o *)pGVar25->max_length,pGVar25->m_Items[0].fields._id,
                 *(float *)&pGVar25->m_Items[0].fields.Label,
                 (uint)*(byte *)((long)&pGVar25->m_Items[0].fields.Label + 4),method_00);
      uVar24 = uVar24 + 1;
      pIVar22 = pGVar25->bounds;
      lVar32 = lVar32 + 0x30;
    } while (pIVar22 != (Il2CppArrayBounds *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x45336e0

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass26_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* sidePanel, const MethodInfo* method);
// 0x4533f90

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *sidePanel,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *pGVar4;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar5;
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
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option;
  il2cpp_array_size_t iVar17;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar18;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar19;
  System_Action_AottgUi__o *pSVar20;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar21;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar22;
  Il2CppArrayBounds *pIVar23;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  ulong uVar24;
  undefined8 extraout_RDX;
  ulong uVar25;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar26;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar27;
  void *pvVar28;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar29;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar30;
  void **ppvVar31;
  long lVar32;
  
  if (g_data_057aeeca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__26_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-button-");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-footer");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-buttons");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelHeader");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-footer-");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-header");
    il2cpp_runtime_helper_023445d0(&"brushSidePanel");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-outline");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelOutline");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-base");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    il2cpp_runtime_helper_023445d0(&"GisketchUI/Elements/SidePanelBase");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeca = '\x01';
  }
  method_00 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgUi__Points(954.0,(MethodInfo *)0x0);
  pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Points(2418.0,(MethodInfo *)0x0);
  pGVar26 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
  pGVar29 = "Column";
  pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       "Absolute",(System_String_o *)0x0,0.0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,pGVar18,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,38.0,12.0,
                       0.0,1.0,(MethodInfo *)0x0);
  if (sidePanel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (sidePanel,"GisketchUI/Elements/SidePanelBase","brushSidePanelOutline","brush-side-panel-outline",pGVar19,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar26 = "brushSidePanel";
    pSVar20 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (pSVar20 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar20 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar32 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar32 + 8) = pSVar20;
      il2cpp_runtime_helper_022b4080(lVar32 + 8,pSVar20);
    }
    pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Points(920.0,(MethodInfo *)0x0);
    pGVar21 = Gisketch_Aottg2UI_Code_AottgUi__Points(2400.0,(MethodInfo *)0x0);
    pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         "Absolute",(System_String_o *)0x0,0.0,pGVar18,pGVar21,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pGVar29 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)sidePanel;
    pGVar22 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                        (sidePanel,(System_String_o *)pGVar26,pSVar20,"brush-side-panel-base",pGVar19,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar22 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar22->fields).sprite = "GisketchUI/Elements/SidePanelBase";
      il2cpp_runtime_helper_022b4080();
      pGVar26 = "brushSidePanelHeader";
      pSVar20 = (__this->fields).__9__2;
      if (pSVar20 == (System_Action_AottgUi__o *)0x0) {
        pSVar20 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
        System_Action_object____ctor();
        (__this->fields).__9__2 = pSVar20;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__9__2,pSVar20);
      }
      pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Points(1380.0,(MethodInfo *)0x0);
      pGVar21 = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
      pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column","Center","Center","Absolute",
                           (System_String_o *)0x0,0.0,pGVar18,pGVar21,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-360.0,
                           -75.0,0.0,1.0,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pGVar29 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)sidePanel;
      pGVar22 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (sidePanel,(System_String_o *)pGVar26,pSVar20,"brush-side-panel-header",pGVar19,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar27 = "GisketchUI/Elements/brushStroke_02";
      if (pGVar22 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        pGVar29 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)&(pGVar22->fields).sprite;
        (pGVar22->fields).sprite = (System_String_o *)"GisketchUI/Elements/brushStroke_02";
        il2cpp_runtime_helper_022b4080();
        pGVar4 = (__this->fields).__4__this;
        pGVar26 = pGVar27;
        if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *)0x0) {
          pGVar26 = (pGVar4->fields)._options;
          pGVar29 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)sidePanel;
          Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddOptionList
                    (sidePanel,pGVar26,"brush-side-panel-buttons","brush-side-panel-button-",540.0,(__this->fields).brushWidth,1,method_00
                    );
          pGVar4 = (__this->fields).__4__this;
          if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *)0x0) {
            pGVar27 = (pGVar4->fields)._footerOptions;
            pGVar26 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
            if (pGVar27 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
              Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddOptionList
                        (sidePanel,pGVar27,"brush-side-panel-footer","brush-side-panel-footer-",
                         *(float *)(&g_data_00d1d7e0 + (ulong)((int)pGVar27->max_length == 1) * 4),
                         (__this->fields).brushWidth,0,method_00);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar27 = pGVar26;
  pGVar30 = pGVar29;
  if (g_data_057aeecb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-title");
    pGVar30 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)&"brushSidePanelHeaderText";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeecb = '\x01';
  }
  if ((pGVar29->bounds != (Il2CppArrayBounds *)0x0) &&
     (pGVar26 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0)) {
    pGVar22 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar26,
                         (System_String_o *)pGVar29->bounds[1].length,"brushSidePanelHeaderText","brush-side-panel-title",
                         (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                         (MethodInfo *)0x0);
    method_00 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgUi__Percent(88.0,(MethodInfo *)0x0);
    pGVar18 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar27 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
    pGVar30 = "Column";
    pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)method_00,pGVar18,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    if (pGVar22 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar22->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar19;
      il2cpp_runtime_helper_022b4080(&(pGVar22->fields).search,pGVar19);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar23 = pGVar30->bounds;
  if (pIVar23 != (Il2CppArrayBounds *)0x0) {
    lVar32 = 0x20;
    uVar25 = 0;
    pGVar26 = pGVar27;
    pGVar29 = pGVar30;
    do {
      uVar24 = (ulong)(uint)pIVar23[1].lower_bound;
      if ((long)pIVar23[1].lower_bound <= (long)uVar25) {
        return;
      }
      if (uVar24 <= uVar25) {
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057aeecc == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushButton);
          il2cpp_runtime_helper_023445d0(&"brushSidePanelBrushButton");
          g_data_057aeecc = '\x01';
        }
        uVar6 = *(undefined4 *)&pGVar29->bounds;
        uVar7 = *(undefined4 *)((long)&pGVar29->bounds + 4);
        iVar17 = pGVar29->max_length;
        uVar8 = *(undefined4 *)((long)&pGVar29->max_length + 4);
        uVar9 = *(undefined4 *)&pGVar29->m_Items[0].fields._id;
        uVar10 = *(undefined4 *)((long)&pGVar29->m_Items[0].fields._id + 4);
        uVar11 = *(undefined4 *)&pGVar29->m_Items[0].fields.Label;
        uVar12 = *(undefined4 *)((long)&pGVar29->m_Items[0].fields.Label + 4);
        uVar13 = *(undefined4 *)&pGVar29->m_Items[0].fields.TextKey;
        uVar14 = *(undefined4 *)((long)&pGVar29->m_Items[0].fields.TextKey + 4);
        uVar15 = *(undefined4 *)&pGVar29->m_Items[0].fields.Icon;
        uVar16 = *(undefined4 *)((long)&pGVar29->m_Items[0].fields.Icon + 4);
        pGVar5 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)pGVar29->m_Items[0].fields.ActionId;
        uVar3 = *(undefined1 *)&pGVar29->m_Items[0].fields.Action;
        __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBrushButton);
        pvVar28 = "brushSidePanelBrushButton";
        Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
        *(undefined4 *)&__this_00[3].klass = uVar13;
        *(undefined4 *)((long)&__this_00[3].klass + 4) = uVar14;
        *(undefined4 *)&__this_00[3].monitor = uVar15;
        *(undefined4 *)((long)&__this_00[3].monitor + 4) = uVar16;
        *(undefined4 *)&__this_00[2].klass = uVar9;
        *(undefined4 *)((long)&__this_00[2].klass + 4) = uVar10;
        *(undefined4 *)&__this_00[2].monitor = uVar11;
        *(undefined4 *)((long)&__this_00[2].monitor + 4) = uVar12;
        *(undefined4 *)&__this_00[1].klass = uVar6;
        *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar7;
        *(int *)&__this_00[1].monitor = (int)iVar17;
        *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar8;
        il2cpp_runtime_helper_022b4080(__this_00 + 1,0);
        __this_00[4].klass = pGVar5;
        il2cpp_runtime_helper_022b4080(__this_00 + 4,pGVar5);
        ppvVar31 = &__this_00[4].monitor;
        __this_00[4].monitor = pvVar28;
        il2cpp_runtime_helper_022b4080();
        *(undefined1 *)&__this_00[5].klass = uVar3;
        if (pGVar26 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          *ppvVar31 = (void *)0x0;
          il2cpp_runtime_helper_022b4080();
          ppvVar31[1] = pvVar28;
          il2cpp_runtime_helper_022b4080(ppvVar31 + 1,pvVar28);
          ppvVar31[2] = (void *)0x0;
          il2cpp_runtime_helper_022b4080(ppvVar31 + 2,0);
          ppvVar31[4] = (void *)extraout_RDX;
          il2cpp_runtime_helper_022b4080(ppvVar31 + 4,extraout_RDX);
          ppvVar31[3] = (void *)uVar24;
          il2cpp_runtime_helper_022b4080(ppvVar31 + 3,uVar24);
          ppvVar31[5] = (void *)0x0;
          il2cpp_runtime_helper_022b4080(ppvVar31 + 5,0);
          return;
        }
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar26,__this_00,(MethodInfo *)0x0);
        return;
      }
      puVar1 = (undefined8 *)((long)&pIVar23[1].length + lVar32);
      puVar2 = (undefined8 *)((long)&pIVar23[2].length + lVar32);
      pGVar26 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)(uVar25 & 0xffffffff);
      option.fields.TextKey = (System_String_o *)*puVar1;
      option.fields._0_16_ = *(undefined1 (*) [16])((long)&pIVar23->length + lVar32);
      option.fields.Icon = (System_String_o *)puVar1[1];
      option.fields.ActionId = (System_String_o *)*puVar2;
      option.fields.Action = (System_Action_GisketchActionContext__o *)puVar2[1];
      pGVar29 = pGVar27;
      Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddButtonRow
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar27,option,(int32_t)uVar25,
                 (System_String_o *)pGVar30->max_length,pGVar30->m_Items[0].fields._id,
                 *(float *)&pGVar30->m_Items[0].fields.Label,
                 (uint)*(byte *)((long)&pGVar30->m_Items[0].fields.Label + 4),method_00);
      uVar25 = uVar25 + 1;
      pIVar23 = pGVar30->bounds;
      lVar32 = lVar32 + 0x30;
    } while (pIVar23 != (Il2CppArrayBounds *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass26_0$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0___Build_b__2 (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* title, const MethodInfo* method);
// 0x45344d0

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0___Build_b__2
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *title,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *pGVar5;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar6;
  int32_t iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int32_t iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar19;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar20;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar21;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  ulong uVar22;
  undefined8 extraout_RDX;
  ulong uVar23;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *parent;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *__this_01;
  void *pvVar24;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *pGVar25;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *pGVar26;
  void **ppvVar27;
  MethodInfo *in_R9;
  long lVar28;
  
  parent = (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *)title;
  pGVar25 = __this;
  if (g_data_057aeecb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"brush-side-panel-title");
    pGVar25 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *)&"brushSidePanelHeaderText";
    il2cpp_runtime_helper_023445d0();
    g_data_057aeecb = '\x01';
  }
  pGVar5 = (__this->fields).__4__this;
  if ((pGVar5 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *)0x0) &&
     (title != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
    pGVar19 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (title,(pGVar5->fields)._title,"brushSidePanelHeaderText","brush-side-panel-title",(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    in_R9 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgUi__Percent(88.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    parent = (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *)0x0;
    pGVar25 = "Column";
    pGVar20 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)in_R9,height,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,1.0,(MethodInfo *)0x0);
    if (pGVar19 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar19->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar20;
      il2cpp_runtime_helper_022b4080(&(pGVar19->fields).search,pGVar20);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar21 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)(pGVar25->fields).__4__this;
  if (pSVar21 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
    lVar28 = 0x20;
    uVar23 = 0;
    __this_01 = parent;
    pGVar26 = pGVar25;
    do {
      uVar4 = (pSVar21->fields)._size;
      uVar22 = (ulong)uVar4;
      if ((long)(int)uVar4 <= (long)uVar23) {
        return;
      }
      if (uVar22 <= uVar23) {
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057aeecc == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushButton);
          il2cpp_runtime_helper_023445d0(&"brushSidePanelBrushButton");
          g_data_057aeecc = '\x01';
        }
        iVar7 = *(int32_t *)&(pGVar26->fields).__4__this;
        uVar8 = *(undefined4 *)((long)&(pGVar26->fields).__4__this + 4);
        uVar9 = (pGVar26->fields).brushWidth;
        uVar10 = *(undefined4 *)&(pGVar26->fields).field_0xc;
        uVar11 = *(undefined4 *)&(pGVar26->fields).__9__2;
        uVar12 = *(undefined4 *)((long)&(pGVar26->fields).__9__2 + 4);
        iVar13 = *(int32_t *)&pGVar26[1].klass;
        uVar14 = *(undefined4 *)((long)&pGVar26[1].klass + 4);
        uVar15 = *(undefined4 *)&pGVar26[1].monitor;
        uVar16 = *(undefined4 *)((long)&pGVar26[1].monitor + 4);
        uVar17 = *(undefined4 *)&pGVar26[1].fields.__4__this;
        uVar18 = *(undefined4 *)((long)&pGVar26[1].fields.__4__this + 4);
        pGVar6 = *(Gisketch_Aottg2UI_Code_AottgComponent_c **)&pGVar26[1].fields.brushWidth;
        uVar3 = *(undefined1 *)&pGVar26[1].fields.__9__2;
        __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBrushButton);
        pvVar24 = "brushSidePanelBrushButton";
        Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
        *(undefined4 *)&__this_00[3].klass = uVar15;
        *(undefined4 *)((long)&__this_00[3].klass + 4) = uVar16;
        *(undefined4 *)&__this_00[3].monitor = uVar17;
        *(undefined4 *)((long)&__this_00[3].monitor + 4) = uVar18;
        *(undefined4 *)&__this_00[2].klass = uVar11;
        *(undefined4 *)((long)&__this_00[2].klass + 4) = uVar12;
        *(int32_t *)&__this_00[2].monitor = iVar13;
        *(undefined4 *)((long)&__this_00[2].monitor + 4) = uVar14;
        *(int32_t *)&__this_00[1].klass = iVar7;
        *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar8;
        *(undefined4 *)&__this_00[1].monitor = uVar9;
        *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar10;
        il2cpp_runtime_helper_022b4080(__this_00 + 1,0);
        __this_00[4].klass = pGVar6;
        il2cpp_runtime_helper_022b4080(__this_00 + 4,pGVar6);
        ppvVar27 = &__this_00[4].monitor;
        __this_00[4].monitor = pvVar24;
        il2cpp_runtime_helper_022b4080();
        *(undefined1 *)&__this_00[5].klass = uVar3;
        if (__this_01 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          *ppvVar27 = (void *)0x0;
          il2cpp_runtime_helper_022b4080();
          ppvVar27[1] = pvVar24;
          il2cpp_runtime_helper_022b4080(ppvVar27 + 1,pvVar24);
          ppvVar27[2] = (void *)0x0;
          il2cpp_runtime_helper_022b4080(ppvVar27 + 2,0);
          ppvVar27[4] = (void *)extraout_RDX;
          il2cpp_runtime_helper_022b4080(ppvVar27 + 4,extraout_RDX);
          ppvVar27[3] = (void *)uVar22;
          il2cpp_runtime_helper_022b4080(ppvVar27 + 3,uVar22);
          ppvVar27[5] = (void *)0x0;
          il2cpp_runtime_helper_022b4080(ppvVar27 + 5,0);
          return;
        }
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01,__this_00,(MethodInfo *)0x0);
        return;
      }
      puVar1 = (undefined8 *)((long)&(pSVar21->fields)._items + lVar28);
      puVar2 = (undefined8 *)((long)&(pSVar21->fields)._syncRoot + lVar28);
      __this_01 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass26_0_o *)(uVar23 & 0xffffffff);
      option.fields.TextKey = (System_String_o *)*puVar1;
      option.fields._0_16_ = *(undefined1 (*) [16])((long)&pSVar21->klass + lVar28);
      option.fields.Icon = (System_String_o *)puVar1[1];
      option.fields.ActionId = (System_String_o *)*puVar2;
      option.fields.Action = (System_Action_GisketchActionContext__o *)puVar2[1];
      pGVar26 = parent;
      Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddButtonRow
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)parent,option,(int32_t)uVar23,
                 (System_String_o *)
                 *(Gisketch_Aottg2UI_Code_AottgActionRegistry_o **)&(pGVar25->fields).brushWidth,
                 (System_String_o *)(pGVar25->fields).__9__2,*(float *)&pGVar25[1].klass,
                 (uint)*(byte *)((long)&pGVar25[1].klass + 4),in_R9);
      uVar23 = uVar23 + 1;
      pSVar21 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)(pGVar25->fields).__4__this;
      lVar28 = lVar28 + 0x30;
    } while (pSVar21 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass27_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass27_0___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass27_0_o* __this, const MethodInfo* method);
// 0x4533a30

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass27_0___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass27_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass27_0$$<AddOptionList>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass27_0___AddOptionList_b__0 (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass27_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* list, const MethodInfo* method);
// 0x4534620

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass27_0___AddOptionList_b__0
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass27_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *list,MethodInfo *method)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  bool_conflict bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar17;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  ulong uVar18;
  undefined8 extraout_RDX;
  ulong uVar19;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  void *pvVar20;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass27_0_o *pGVar21;
  void **ppvVar22;
  MethodInfo *in_R9;
  long lVar23;
  
  pGVar17 = (__this->fields).options;
  if (pGVar17 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    lVar23 = 0x20;
    uVar19 = 0;
    __this_01 = list;
    pGVar21 = __this;
    do {
      uVar4 = (uint)pGVar17->max_length;
      uVar18 = (ulong)uVar4;
      if ((long)(int)uVar4 <= (long)uVar19) {
        return;
      }
      if (uVar18 <= uVar19) {
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057aeecc == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushButton);
          il2cpp_runtime_helper_023445d0(&"brushSidePanelBrushButton");
          g_data_057aeecc = '\x01';
        }
        uVar5 = *(undefined4 *)&(pGVar21->fields).options;
        uVar6 = *(undefined4 *)((long)&(pGVar21->fields).options + 4);
        uVar7 = *(undefined4 *)&(pGVar21->fields).id;
        uVar8 = *(undefined4 *)((long)&(pGVar21->fields).id + 4);
        uVar9 = *(undefined4 *)&(pGVar21->fields).itemIdPrefix;
        uVar10 = *(undefined4 *)((long)&(pGVar21->fields).itemIdPrefix + 4);
        fVar11 = (pGVar21->fields).brushWidth;
        bVar12 = (pGVar21->fields).hideSearch;
        uVar13 = *(undefined4 *)&pGVar21[1].klass;
        uVar14 = *(undefined4 *)((long)&pGVar21[1].klass + 4);
        uVar15 = *(undefined4 *)&((Gisketch_Aottg2UI_Code_AottgUi_Fields *)&pGVar21[1].monitor)->_children;
        uVar16 = *(undefined4 *)
                  ((long)&((Gisketch_Aottg2UI_Code_AottgUi_Fields *)&pGVar21[1].monitor)->_children + 4);
        pGVar17 = pGVar21[1].fields.options;
        uVar3 = *(undefined1 *)&pGVar21[1].fields.id;
        __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBrushButton);
        pvVar20 = "brushSidePanelBrushButton";
        Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
        *(undefined4 *)&__this_00[3].klass = uVar13;
        *(undefined4 *)((long)&__this_00[3].klass + 4) = uVar14;
        *(undefined4 *)&__this_00[3].monitor = uVar15;
        *(undefined4 *)((long)&__this_00[3].monitor + 4) = uVar16;
        *(undefined4 *)&__this_00[2].klass = uVar9;
        *(undefined4 *)((long)&__this_00[2].klass + 4) = uVar10;
        *(float *)&__this_00[2].monitor = fVar11;
        *(bool_conflict *)((long)&__this_00[2].monitor + 4) = bVar12;
        *(undefined4 *)&__this_00[1].klass = uVar5;
        *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar6;
        *(undefined4 *)&__this_00[1].monitor = uVar7;
        *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar8;
        il2cpp_runtime_helper_022b4080(__this_00 + 1,0);
        __this_00[4].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)pGVar17;
        il2cpp_runtime_helper_022b4080(__this_00 + 4,pGVar17);
        ppvVar22 = &__this_00[4].monitor;
        __this_00[4].monitor = pvVar20;
        il2cpp_runtime_helper_022b4080();
        *(undefined1 *)&__this_00[5].klass = uVar3;
        if (__this_01 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          *ppvVar22 = (void *)0x0;
          il2cpp_runtime_helper_022b4080();
          ppvVar22[1] = pvVar20;
          il2cpp_runtime_helper_022b4080(ppvVar22 + 1,pvVar20);
          ppvVar22[2] = (void *)0x0;
          il2cpp_runtime_helper_022b4080(ppvVar22 + 2,0);
          ppvVar22[4] = (void *)extraout_RDX;
          il2cpp_runtime_helper_022b4080(ppvVar22 + 4,extraout_RDX);
          ppvVar22[3] = (void *)uVar18;
          il2cpp_runtime_helper_022b4080(ppvVar22 + 3,uVar18);
          ppvVar22[5] = (void *)0x0;
          il2cpp_runtime_helper_022b4080(ppvVar22 + 5,0);
          return;
        }
        Gisketch_Aottg2UI_Code_AottgUi__Component(__this_01,__this_00,(MethodInfo *)0x0);
        return;
      }
      puVar1 = (undefined8 *)((long)pGVar17->m_Items + lVar23 + -0x10);
      puVar2 = (undefined8 *)((long)&pGVar17->m_Items[0].fields._id + lVar23);
      __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(uVar19 & 0xffffffff);
      option.fields.TextKey = (System_String_o *)*puVar1;
      option.fields._0_16_ = *(undefined1 (*) [16])((long)pGVar17->m_Items + lVar23 + -0x20);
      option.fields.Icon = (System_String_o *)puVar1[1];
      option.fields.ActionId = (System_String_o *)*puVar2;
      option.fields.Action = (System_Action_GisketchActionContext__o *)puVar2[1];
      pGVar21 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass27_0_o *)list;
      Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddButtonRow
                (list,option,(int32_t)uVar19,(__this->fields).id,(__this->fields).itemIdPrefix,
                 (__this->fields).brushWidth,(uint)(byte)(__this->fields).hideSearch,in_R9);
      uVar19 = uVar19 + 1;
      pGVar17 = (__this->fields).options;
      lVar23 = lVar23 + 0x30;
    } while (pGVar17 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass31_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass31_0___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x4533d20

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass31_0___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass31_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel.<>c__DisplayClass31_0$$<AddButtonRow>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass31_0___AddButtonRow_b__0 (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass31_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x45346f0

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass31_0___AddButtonRow_b__0
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanel___c__DisplayClass31_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool_conflict bVar14;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  undefined8 in_RCX;
  undefined8 extraout_RDX;
  void *pvVar15;
  void **ppvVar16;
  
  if (g_data_057aeecc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushButton);
    il2cpp_runtime_helper_023445d0(&"brushSidePanelBrushButton");
    g_data_057aeecc = '\x01';
  }
  uVar2 = *(undefined4 *)&(__this->fields).option.fields._id;
  uVar3 = *(undefined4 *)((long)&(__this->fields).option.fields._id + 4);
  uVar4 = *(undefined4 *)&(__this->fields).option.fields.Label;
  uVar5 = *(undefined4 *)((long)&(__this->fields).option.fields.Label + 4);
  uVar6 = *(undefined4 *)&(__this->fields).option.fields.TextKey;
  uVar7 = *(undefined4 *)((long)&(__this->fields).option.fields.TextKey + 4);
  uVar8 = *(undefined4 *)&(__this->fields).option.fields.Icon;
  uVar9 = *(undefined4 *)((long)&(__this->fields).option.fields.Icon + 4);
  uVar10 = *(undefined4 *)&(__this->fields).option.fields.ActionId;
  uVar11 = *(undefined4 *)((long)&(__this->fields).option.fields.ActionId + 4);
  uVar12 = *(undefined4 *)&(__this->fields).option.fields.Action;
  uVar13 = *(undefined4 *)((long)&(__this->fields).option.fields.Action + 4);
  pGVar1 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)(__this->fields).enter;
  bVar14 = (__this->fields).hideSearch;
  __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBrushButton);
  pvVar15 = "brushSidePanelBrushButton";
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[3].klass = uVar10;
  *(undefined4 *)((long)&__this_00[3].klass + 4) = uVar11;
  *(undefined4 *)&__this_00[3].monitor = uVar12;
  *(undefined4 *)((long)&__this_00[3].monitor + 4) = uVar13;
  *(undefined4 *)&__this_00[2].klass = uVar6;
  *(undefined4 *)((long)&__this_00[2].klass + 4) = uVar7;
  *(undefined4 *)&__this_00[2].monitor = uVar8;
  *(undefined4 *)((long)&__this_00[2].monitor + 4) = uVar9;
  *(undefined4 *)&__this_00[1].klass = uVar2;
  *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar3;
  *(undefined4 *)&__this_00[1].monitor = uVar4;
  *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar5;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,0);
  __this_00[4].klass = pGVar1;
  il2cpp_runtime_helper_022b4080(__this_00 + 4,pGVar1);
  ppvVar16 = &__this_00[4].monitor;
  __this_00[4].monitor = pvVar15;
  il2cpp_runtime_helper_022b4080();
  *(char *)&__this_00[5].klass = (char)bVar14;
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(row,__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *ppvVar16 = (void *)0x0;
  il2cpp_runtime_helper_022b4080();
  ppvVar16[1] = pvVar15;
  il2cpp_runtime_helper_022b4080(ppvVar16 + 1,pvVar15);
  ppvVar16[2] = (void *)0x0;
  il2cpp_runtime_helper_022b4080(ppvVar16 + 2,0);
  ppvVar16[4] = (void *)extraout_RDX;
  il2cpp_runtime_helper_022b4080(ppvVar16 + 4,extraout_RDX);
  ppvVar16[3] = (void *)in_RCX;
  il2cpp_runtime_helper_022b4080(ppvVar16 + 3,in_RCX);
  ppvVar16[5] = (void *)0x0;
  il2cpp_runtime_helper_022b4080(ppvVar16 + 5,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o* __this, System_String_o* title, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* options, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* footerOptions, const MethodInfo* method);
// 0x45332d0

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *__this,System_String_o *title,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *options,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *groups;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *method_00;
  System_String_Fields SVar4;
  System_String_o *__this_02;
  float fVar5;
  
  if (g_data_057aeec4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushSidePanelOption);
    il2cpp_runtime_helper_023445d0(&"OPTIONS");
    g_data_057aeec4 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  SVar4 = (System_String_Fields)title;
  bVar1 = System_String__IsNullOrEmpty(title,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    title = "OPTIONS";
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *)0x0) {
    (__this->fields)._title = title;
    il2cpp_runtime_helper_022b4080(&__this->fields,title);
    if (options == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
      options = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption,0);
    }
    (__this->fields)._options = options;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._options,options);
    if (footerOptions == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
      footerOptions = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption,0);
    }
    (__this->fields)._footerOptions = footerOptions;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._footerOptions,footerOptions);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeec5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushSidePanelOption);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass26_0);
    il2cpp_runtime_helper_023445d0(&"brush-side-panel");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelShell");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"mainMenuPanel");
    g_data_057aeec5 = '\x01';
  }
  __this_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass26_0);
  __this_02 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_String_o *)0x0) {
    __this_00->fields = SVar4;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,SVar4);
    __this_02 = TypeInfo_AottgBrushSidePanelOption;
    groups = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *)il2cpp_runtime_helper_022b2a40();
    if (groups != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *)0x0) {
      if ((int)groups->max_length == 0) goto label_045336d8;
      __this_02 = (System_String_o *)groups->m_Items;
      groups->m_Items[0] = *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)((long)SVar4 + 0x18);
      il2cpp_runtime_helper_022b4080();
      if ((uint)groups->max_length < 2) goto label_045336d8;
      method_00 = *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)((long)SVar4 + 0x20);
      groups->m_Items[1] = method_00;
      il2cpp_runtime_helper_022b4080(groups->m_Items + 1);
      fVar5 = Gisketch_Aottg2UI_Game_AottgBrushSidePanel__BrushWidth(groups,(MethodInfo *)method_00);
      *(float *)&__this_00[1].klass = fVar5;
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"FlexStart","FlexStart",(System_String_o *)0x0
                          ,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      contentLayout =
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
      __this_02 = "mainMenuPanel";
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("mainMenuPanel",(System_String_o *)0x0,0.33600003,0.0,0.0,0,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__ScaleBox
                           (__this_01,"brushSidePanelShell",920.0,2400.0,build,"brush-side-panel",layout,contentLayout,pGVar2
                            ,(MethodInfo *)0x0);
        __this_02 = "mainMenuPanel";
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("mainMenuPanel",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar3->fields).enter = pGVar2;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields).enter,pGVar2);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_045336d8:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel__Build (Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x45333b0

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel__Build
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *groups;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *method_00;
  System_String_o *__this_01;
  float fVar3;
  
  if (g_data_057aeec5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBrushSidePanelOption);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass26_0);
    il2cpp_runtime_helper_023445d0(&"brush-side-panel");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"brushSidePanelShell");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"mainMenuPanel");
    g_data_057aeec5 = '\x01';
  }
  __this_00 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass26_0);
  __this_01 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_String_o *)0x0) {
    __this_00->fields = (System_String_Fields)__this;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,__this);
    __this_01 = TypeInfo_AottgBrushSidePanelOption;
    groups = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *)il2cpp_runtime_helper_022b2a40();
    if (groups != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *)0x0) {
      if ((int)groups->max_length == 0) goto label_045336d8;
      __this_01 = (System_String_o *)groups->m_Items;
      groups->m_Items[0] = (__this->fields)._options;
      il2cpp_runtime_helper_022b4080();
      if ((uint)groups->max_length < 2) goto label_045336d8;
      method_00 = (__this->fields)._footerOptions;
      groups->m_Items[1] = method_00;
      il2cpp_runtime_helper_022b4080(groups->m_Items + 1);
      fVar3 = Gisketch_Aottg2UI_Game_AottgBrushSidePanel__BrushWidth(groups,(MethodInfo *)method_00);
      *(float *)&__this_00[1].klass = fVar3;
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"FlexStart","FlexStart",(System_String_o *)0x0
                          ,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      contentLayout =
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
      __this_01 = "mainMenuPanel";
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("mainMenuPanel",(System_String_o *)0x0,0.33600003,0.0,0.0,0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__ScaleBox
                           (ui,"brushSidePanelShell",920.0,2400.0,build,"brush-side-panel",layout,contentLayout,pGVar1,
                            (MethodInfo *)0x0);
        __this_01 = "mainMenuPanel";
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("mainMenuPanel",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).enter = pGVar1;
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).enter,pGVar1);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_045336d8:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$AddOptionList
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddOptionList (Gisketch_Aottg2UI_Code_AottgUi_o* sidePanel, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* options, System_String_o* id, System_String_o* itemIdPrefix, float startY, float brushWidth, bool hideSearch, const MethodInfo* method);
// 0x45337e0

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddOptionList
               (Gisketch_Aottg2UI_Code_AottgUi_o *sidePanel,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *options,System_String_o *id,
               System_String_o *itemIdPrefix,float startY,float brushWidth,bool_conflict hideSearch,
               MethodInfo *method)

{
  System_String_c *id_00;
  System_String_o *__this;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *__this_00;
  
  if (g_data_057aeec6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddOptionList_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass27_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aeec6 = '\x01';
  }
  __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass27_0);
  __this_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (System_String_o *)0x0) {
    __this->fields = (System_String_Fields)options;
    il2cpp_runtime_helper_022b4080(&__this->fields,options);
    __this[1].klass = (System_String_c *)id;
    il2cpp_runtime_helper_022b4080(__this + 1,id);
    __this_00 = (System_String_o *)&__this[1].monitor;
    __this[1].monitor = itemIdPrefix;
    il2cpp_runtime_helper_022b4080();
    __this[1].fields._stringLength = (int32_t)brushWidth;
    *(char *)&__this[1].fields._firstChar = (char)hideSearch;
    if (__this->fields != (System_String_Fields)0x0) {
      if (*(long *)((long)__this->fields + 0x18) == 0) {
        return;
      }
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      id_00 = __this[1].klass;
      __this_00 = (System_String_o *)0x0;
      width = Gisketch_Aottg2UI_Code_AottgUi__Points((float)__this[1].fields._stringLength,(MethodInfo *)0x0);
      if (__this->fields != (System_String_Fields)0x0) {
        height = Gisketch_Aottg2UI_Code_AottgUi__Points
                           ((float)(*(int *)((long)__this->fields + 0x18) + -1) * 148.0 + 236.0,
                            (MethodInfo *)0x0);
        __this_00 = "Column";
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,"FlexStart","Absolute",
                            (System_String_o *)0x0,0.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-120.0,
                            -(startY + -75.0),0.0,1.0,(MethodInfo *)0x0);
        if (sidePanel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (sidePanel,"default",build,(System_String_o *)id_00,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$BrushWidth
// il2cpp: float Gisketch_Aottg2UI_Game_AottgBrushSidePanel__BrushWidth (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array* groups, const MethodInfo* method);
// 0x45336f0

float Gisketch_Aottg2UI_Game_AottgBrushSidePanel__BrushWidth
                (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *groups,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar3;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *value;
  System_String_c *id;
  bool_conflict bVar4;
  System_String_o *__this;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  void *in_RCX;
  System_String_c *extraout_RDX;
  System_String_o **ppSVar5;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *__this_00;
  System_String_o *__this_01;
  undefined1 uVar6;
  undefined8 in_R8;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  float fVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float in_XMM1_Da;
  
  uVar6 = (undefined1)in_R8;
  if (groups == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *)0x0) {
label_045337ac:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar2 = (int)groups->max_length;
    if (0 < iVar2) {
      uVar9 = 0;
      iVar7 = 0;
      __this_00 = groups;
      if (iVar2 != 0) {
        do {
          uVar6 = (undefined1)in_R8;
          pGVar3 = groups->m_Items[(int)uVar9];
          if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) goto label_045337ac;
          if (0 < (int)pGVar3->max_length) {
            ppSVar5 = &pGVar3->m_Items[0].fields.Label;
            uVar8 = 0;
            __this_00 = groups;
            if ((pGVar3->max_length & 0xffffffff) == 0) break;
            while( true ) {
              value = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *)*ppSVar5;
              method._0_4_ = 0;
              method._4_2_ = 0;
              method._6_2_ = 0;
              __this_00 = value;
              bVar4 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
              uVar6 = (undefined1)in_R8;
              if ((char)bVar4 == '\0') {
                if (value == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *)0x0)
                goto label_045337ac;
                iVar2 = ((System_String_Fields *)&value->bounds)->_stringLength;
                if (iVar7 <= iVar2) {
                  iVar7 = iVar2;
                }
              }
              uVar8 = uVar8 + 1;
              uVar1 = (uint)pGVar3->max_length;
              in_RCX = (void *)(long)(int)uVar1;
              ppSVar5 = ppSVar5 + 6;
              if ((long)in_RCX <= (long)uVar8) break;
              if (uVar1 <= uVar8) goto label_045337d8;
            }
          }
          uVar6 = (undefined1)in_R8;
          uVar9 = uVar9 + 1;
          uVar1 = (uint)groups->max_length;
          if ((int)uVar1 <= (int)uVar9) goto label_045337b4;
          __this_00 = groups;
        } while (uVar9 < uVar1);
      }
label_045337d8:
      fVar10 = (float)il2cpp_runtime_helper_022b2ca0();
      if (g_data_057aeec6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddOptionList_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass27_0);
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"default");
        il2cpp_runtime_helper_023445d0(&"FlexStart");
        il2cpp_runtime_helper_023445d0(&"Absolute");
        g_data_057aeec6 = '\x01';
      }
      __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass27_0);
      __this_01 = __this;
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      if (__this != (System_String_o *)0x0) {
        __this->fields = (System_String_Fields)method;
        il2cpp_runtime_helper_022b4080(&__this->fields,method);
        __this[1].klass = extraout_RDX;
        il2cpp_runtime_helper_022b4080(__this + 1,extraout_RDX);
        __this_01 = (System_String_o *)&__this[1].monitor;
        __this[1].monitor = in_RCX;
        il2cpp_runtime_helper_022b4080();
        __this[1].fields._stringLength = (int32_t)in_XMM1_Da;
        *(undefined1 *)&__this[1].fields._firstChar = uVar6;
        if (__this->fields != (System_String_Fields)0x0) {
          if (*(long *)((long)__this->fields + 0x18) == 0) {
            return in_XMM1_Da;
          }
          build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          id = __this[1].klass;
          __this_01 = (System_String_o *)0x0;
          width = Gisketch_Aottg2UI_Code_AottgUi__Points
                            ((float)__this[1].fields._stringLength,(MethodInfo *)0x0);
          if (__this->fields != (System_String_Fields)0x0) {
            height = Gisketch_Aottg2UI_Code_AottgUi__Points
                               ((float)(*(int *)((long)__this->fields + 0x18) + -1) * 148.0 + 236.0,
                                (MethodInfo *)0x0);
            __this_01 = "Column";
            layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,"FlexStart","Absolute",
                                (System_String_o *)0x0,0.0,width,height,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                -120.0,-(fVar10 + -75.0),0.0,1.0,(MethodInfo *)0x0);
            if (__this_00 != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array_array *)0x0) {
              Gisketch_Aottg2UI_Code_AottgUi__Panel
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_00,"default",build,
                         (System_String_o *)id,layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
                         ,(MethodInfo *)0x0);
              return extraout_XMM0_Da;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return extraout_XMM0_Da_00;
    }
  }
  iVar7 = 0;
label_045337b4:
  return (float)iVar7 * 74.0 + 64.0;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$Top
// il2cpp: float Gisketch_Aottg2UI_Game_AottgBrushSidePanel__Top (float y, const MethodInfo* method);
// 0x4533a40

float Gisketch_Aottg2UI_Game_AottgBrushSidePanel__Top(float y,MethodInfo *method)

{
  return -(y + -75.0);
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$FooterStartYFor
// il2cpp: float Gisketch_Aottg2UI_Game_AottgBrushSidePanel__FooterStartYFor (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* options, const MethodInfo* method);
// 0x4533a50

float Gisketch_Aottg2UI_Game_AottgBrushSidePanel__FooterStartYFor
                (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *options,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar1;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *in_RCX;
  System_String_o *group;
  int iVar3;
  Il2CppObject *__this_01;
  undefined1 in_R8B;
  float value;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined8 unaff_retaddr;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_ffffffffffffff20;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 in_stack_ffffffffffffff30;
  undefined8 in_stack_ffffffffffffff38;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  iVar3 = (int)method;
  if (options != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
    return *(float *)(&g_data_00d1d7e0 + (ulong)((int)options->max_length == 1) * 4);
  }
  value = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeec7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddButtonRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass31_0);
    il2cpp_runtime_helper_023445d0(&"mainMenuBrushIntro");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aeec7 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass31_0);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    uStack_70 = (undefined4)unaff_retaddr;
    uStack_6c = (undefined4)((ulong)unaff_retaddr >> 0x20);
    uStack_68 = (undefined4)in_stack_00000008;
    uStack_64 = (undefined4)((ulong)in_stack_00000008 >> 0x20);
    uStack_60 = (undefined4)in_stack_00000010;
    uStack_5c = (undefined4)((ulong)in_stack_00000010 >> 0x20);
    uStack_58 = (undefined4)in_stack_00000018;
    uStack_54 = (undefined4)((ulong)in_stack_00000018 >> 0x20);
    uStack_50 = (undefined4)in_stack_00000020;
    uStack_4c = (undefined4)((ulong)in_stack_00000020 >> 0x20);
    uStack_48 = (undefined4)in_stack_00000028;
    uStack_44 = (undefined4)((ulong)in_stack_00000028 >> 0x20);
    *(undefined4 *)&__this_00[3].klass = uStack_50;
    *(undefined4 *)((long)&__this_00[3].klass + 4) = uStack_4c;
    *(undefined4 *)&__this_00[3].monitor = uStack_48;
    *(undefined4 *)((long)&__this_00[3].monitor + 4) = uStack_44;
    *(undefined4 *)&__this_00[2].klass = uStack_60;
    *(undefined4 *)((long)&__this_00[2].klass + 4) = uStack_5c;
    *(undefined4 *)&__this_00[2].monitor = uStack_58;
    *(undefined4 *)((long)&__this_00[2].monitor + 4) = uStack_54;
    *(undefined4 *)&__this_00[1].klass = uStack_70;
    *(undefined4 *)((long)&__this_00[1].klass + 4) = uStack_6c;
    *(undefined4 *)&__this_00[1].monitor = uStack_68;
    *(undefined4 *)((long)&__this_00[1].monitor + 4) = uStack_64;
    il2cpp_runtime_helper_022b4080((MethodInfo *)(__this_00 + 1),0);
    *(undefined1 *)&__this_00[4].monitor = in_R8B;
    pIVar1 = (Il2CppClass *)
             Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuBrushIntro",group,0.120000005,0.030000001,0.027000003,iVar3 + 10,(MethodInfo *)0x0);
    __this_00[4].klass = pIVar1;
    il2cpp_runtime_helper_022b4080(__this_00 + 4,pIVar1);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    __this.fields.Label = (System_String_o *)in_stack_ffffffffffffff28;
    __this.fields._id = (System_String_o *)in_stack_ffffffffffffff20;
    __this.fields.TextKey = (System_String_o *)in_stack_ffffffffffffff30;
    __this.fields.Icon = (System_String_o *)in_stack_ffffffffffffff38;
    __this.fields.ActionId = (System_String_o *)in_stack_ffffffffffffff40;
    __this.fields.Action._0_4_ = in_stack_ffffffffffffff48;
    __this.fields.Action._4_4_ = in_stack_ffffffffffffff4c;
    pSVar2 = Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption__get_Id(__this,(MethodInfo *)(__this_00 + 1));
    pSVar2 = System_String__Concat_3ae5ba0(in_RCX,pSVar2,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(value,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(236.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"FlexStart","Absolute",(System_String_o *)0x0,
                        0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        (float)-iVar3 * 148.0,0.0,1.0,(MethodInfo *)0x0);
    __this_01 = (Il2CppObject *)0x0;
    if (options != (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)options,"default",build,pSVar2,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return extraout_XMM0_Da;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return extraout_XMM0_Da_00;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanel$$AddButtonRow
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddButtonRow (Gisketch_Aottg2UI_Code_AottgUi_o* parent, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option, int32_t index, System_String_o* motionGroup, System_String_o* idPrefix, float brushWidth, bool hideSearch, const MethodInfo* method);
// 0x4533a80

void Gisketch_Aottg2UI_Game_AottgBrushSidePanel__AddButtonRow
               (Gisketch_Aottg2UI_Code_AottgUi_o *parent,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option,int32_t index,
               System_String_o *motionGroup,System_String_o *idPrefix,float brushWidth,
               bool_conflict hideSearch,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar1;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Il2CppObject *__this_01;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 in_stack_ffffffffffffff30;
  undefined8 in_stack_ffffffffffffff38;
  undefined8 in_stack_ffffffffffffff40;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (g_data_057aeec7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddButtonRow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass31_0);
    il2cpp_runtime_helper_023445d0(&"mainMenuBrushIntro");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"Absolute");
    g_data_057aeec7 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass31_0);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    local_68 = option.fields._id._0_4_;
    uStack_64 = option.fields._id._4_4_;
    uStack_60 = option.fields.Label._0_4_;
    uStack_5c = option.fields.Label._4_4_;
    local_58 = option.fields.TextKey._0_4_;
    uStack_54 = option.fields.TextKey._4_4_;
    uStack_50 = option.fields.Icon._0_4_;
    uStack_4c = option.fields.Icon._4_4_;
    local_48 = option.fields.ActionId._0_4_;
    uStack_44 = option.fields.ActionId._4_4_;
    uStack_40 = option.fields.Action._0_4_;
    uStack_3c = option.fields.Action._4_4_;
    *(undefined4 *)&__this_00[3].klass = local_48;
    *(undefined4 *)((long)&__this_00[3].klass + 4) = uStack_44;
    *(undefined4 *)&__this_00[3].monitor = uStack_40;
    *(undefined4 *)((long)&__this_00[3].monitor + 4) = uStack_3c;
    *(undefined4 *)&__this_00[2].klass = local_58;
    *(undefined4 *)((long)&__this_00[2].klass + 4) = uStack_54;
    *(undefined4 *)&__this_00[2].monitor = uStack_50;
    *(undefined4 *)((long)&__this_00[2].monitor + 4) = uStack_4c;
    *(undefined4 *)&__this_00[1].klass = local_68;
    *(undefined4 *)((long)&__this_00[1].klass + 4) = uStack_64;
    *(undefined4 *)&__this_00[1].monitor = uStack_60;
    *(undefined4 *)((long)&__this_00[1].monitor + 4) = uStack_5c;
    il2cpp_runtime_helper_022b4080((MethodInfo *)(__this_00 + 1),0);
    *(char *)&__this_00[4].monitor = (char)hideSearch;
    pIVar1 = (Il2CppClass *)
             Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuBrushIntro",motionGroup,0.120000005,0.030000001,0.027000003,index + 10,
                        (MethodInfo *)0x0);
    __this_00[4].klass = pIVar1;
    il2cpp_runtime_helper_022b4080(__this_00 + 4,pIVar1);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    __this.fields.Label = (System_String_o *)in_stack_ffffffffffffff30;
    __this.fields._id = (System_String_o *)in_stack_ffffffffffffff28;
    __this.fields.TextKey = (System_String_o *)in_stack_ffffffffffffff38;
    __this.fields.Icon = (System_String_o *)in_stack_ffffffffffffff40;
    __this.fields.ActionId = (System_String_o *)in_stack_ffffffffffffff48;
    __this.fields.Action._0_4_ = in_stack_ffffffffffffff50;
    __this.fields.Action._4_4_ = in_stack_ffffffffffffff54;
    pSVar2 = Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption__get_Id(__this,(MethodInfo *)(__this_00 + 1));
    pSVar2 = System_String__Concat_3ae5ba0(idPrefix,pSVar2,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(brushWidth,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(236.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"FlexStart","Absolute",(System_String_o *)0x0,
                        0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        (float)-index * 148.0,0.0,1.0,(MethodInfo *)0x0);
    __this_01 = (Il2CppObject *)0x0;
    if (parent != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (parent,"default",build,pSVar2,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return;
}



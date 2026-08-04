// Type: Gisketch.Aottg2UI.Game.AottgCreditsRenderer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsRenderer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x44e7590

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass10_0$$<BuildEmpty>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___BuildEmpty_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* empty, const MethodInfo* method);
// 0x44e7830

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___BuildEmpty_b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *empty,MethodInfo *method)

{
  char cVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this_00;
  bool_conflict bVar2;
  int iVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  ApplicationManagers_Credits_AottgCreditContributor_o *contributor;
  System_String_o *pSVar9;
  undefined8 *puVar10;
  long lVar11;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  MethodInfo *pMVar12;
  System_String_Fields SVar13;
  int iVar14;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *grid;
  System_String_o *pSVar15;
  long lVar16;
  undefined8 *unaff_R12;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int32_t iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_d8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_d0;
  undefined8 *puStack_c8;
  
  if (g_data_057aec12 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aec12 = '\x01';
  }
  pSVar15 = (__this->fields).text;
  pSVar9 = (__this->fields).id;
  pGVar8 = "-text";
  pSVar4 = System_String__Concat_3ae5ba0(pSVar9,(System_String_o *)"-text",(MethodInfo *)0x0);
  if (empty != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (empty,pSVar15,"profileInfoStatus",pSVar4,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  grid = pGVar8;
  pSVar15 = pSVar9;
  if (g_data_057aec13 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-title");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-info");
    il2cpp_runtime_helper_023445d0(&"creditsInfoIcon");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/info-circle");
    pSVar15 = (System_String_o *)&"creditsSubcategoryHeader";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec13 = '\x01';
  }
  if (pSVar9->fields != (System_String_Fields)0x0) {
    __this = *(Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o **)
              ((long)pSVar9->fields + 0x10);
    pSVar15 = (System_String_o *)pSVar9[1].klass;
    grid = "-title";
    pSVar4 = System_String__Concat_3ae5ba0(pSVar15,(System_String_o *)"-title",(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      __this = (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *)
               Gisketch_Aottg2UI_Code_AottgUi__Text
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,(System_String_o *)__this,"creditsSubcategoryHeader",
                          pSVar4,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      unaff_R12 = &"Column";
      grid = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      pSVar15 = "Column";
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this !=
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        pSVar15 = (System_String_o *)
                  &(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this)->fields).search;
        (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this)->fields).search =
             (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
        il2cpp_runtime_helper_022b4080();
        grid = pGVar6;
        if (pSVar9->fields != (System_String_Fields)0x0) {
          bVar2 = System_String__IsNullOrEmpty
                            (*(System_String_o **)((long)pSVar9->fields + 0x18),(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            return;
          }
          pSVar15 = System_String__Concat_3ae5ba0
                              ((System_String_o *)pSVar9[1].klass,"-info",(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,"UI/Icons/info-circle","creditsInfoIcon",pSVar15,
                              (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
          grid = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
          pSVar15 = "Column";
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,height,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          __this = (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *)0x0;
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
            il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar8);
            return;
          }
        }
      }
    }
  }
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  pGStack_d0 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this;
  puStack_c8 = unaff_R12;
  if (g_data_057aec14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0();
    g_data_057aec14 = '\x01';
  }
  uStack_d8 = uStack_d8 & 0xffffffff;
  SVar13 = pSVar15->fields;
  if (SVar13 != (System_String_Fields)0x0) {
    iVar14 = 0;
    do {
      lVar11 = *(long *)SVar13;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar16) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar16) * 0x10 + lVar11 + 0x138);
            goto label_044e7ca3;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar16);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar13,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e7ca3:
      iVar3 = (*(code *)*puVar10)(SVar13,puVar10[1]);
      if (iVar3 <= iVar14) {
        return;
      }
      SVar13 = pSVar15->fields;
      if (SVar13 == (System_String_Fields)0x0) break;
      uVar17 = uStack_d8._4_4_;
      lVar11 = *(long *)SVar13;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar16) == TypeInfo_IReadOnlyList_AottgCreditContributor) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar16) * 0x10 + lVar11 + 0x138);
            goto label_044e7bed;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar16);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar13,TypeInfo_IReadOnlyList_AottgCreditContributor,0);
label_044e7bed:
      contributor = (ApplicationManagers_Credits_AottgCreditContributor_o *)
                    (*(code *)*puVar10)(SVar13,uVar17,puVar10[1]);
      pSVar9 = (System_String_o *)pSVar15[1].klass;
      pSVar4 = System_Int32__ToString((int)&uStack_d8 + 4,(MethodInfo *)0x0);
      pMVar12 = (MethodInfo *)0x0;
      pSVar9 = System_String__Concat_3af7150(pSVar9,"-",pSVar4,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)grid,contributor,pSVar9,pMVar12);
      iVar14 = uStack_d8._4_4_ + 1;
      uStack_d8 = CONCAT44(iVar14,(undefined4)uStack_d8);
      SVar13 = pSVar15->fields;
    } while (SVar13 != (System_String_Fields)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
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
  lVar11 = il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption,1);
  uVar22 = 0;
  uVar23 = 0;
  SVar13._stringLength = 0;
  SVar13._firstChar = 0;
  SVar13._6_2_ = 0;
  uVar21 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            ((Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o)ZEXT848(0),
             (System_String_o *)&stack0xfffffffffffffec0,"BACK","screen.main-menu","return");
  if (lVar11 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar11 + 0x18) != 0) {
    iStack_100 = SVar13._stringLength;
    uStack_fc = SVar13._4_4_;
    uStack_f8 = (undefined4)uVar21;
    uStack_f4 = (undefined4)((ulong)uVar21 >> 0x20);
    uStack_f0 = (undefined4)uVar22;
    uStack_ec = (undefined4)((ulong)uVar22 >> 0x20);
    uStack_e8 = (undefined4)uVar23;
    uStack_e4 = (undefined4)((ulong)uVar23 >> 0x20);
    *(undefined4 *)(lVar11 + 0x40) = uStack_f0;
    *(undefined4 *)(lVar11 + 0x44) = uStack_ec;
    *(undefined4 *)(lVar11 + 0x48) = uStack_e8;
    *(undefined4 *)(lVar11 + 0x4c) = uStack_e4;
    *(int32_t *)(lVar11 + 0x30) = iStack_100;
    *(undefined4 *)(lVar11 + 0x34) = uStack_fc;
    *(undefined4 *)(lVar11 + 0x38) = uStack_f8;
    *(undefined4 *)(lVar11 + 0x3c) = uStack_f4;
    *(undefined4 *)(lVar11 + 0x20) = uVar17;
    *(undefined4 *)(lVar11 + 0x24) = uVar18;
    *(undefined4 *)(lVar11 + 0x28) = uVar19;
    *(undefined4 *)(lVar11 + 0x2c) = uVar20;
    il2cpp_runtime_helper_022b4080(lVar11 + 0x20,0);
    **(long **)(TypeInfo_AottgCreditsScreen + 0xb8) = lVar11;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsScreen + 0xb8),lVar11);
    if (*(int *)(TypeInfo_AottgPublicProfileHover + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4) != 0) {
      Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(TypeInfo_AottgHoverMarqueeText);
      return;
    }
    pMVar12 = TypeInfo_AottgHoverMarqueeText;
    il2cpp_runtime_helper_02337ed0();
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(pMVar12);
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
    iVar14 = *(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4);
  }
  else {
    iVar14 = *(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4);
  }
  if (iVar14 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = (char)*TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer;
  }
  else {
    cVar1 = (char)*TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer;
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
                **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
    factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
    if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
      Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
                (__this_00,"AottgHoverMarqueeText",factory,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      *TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec16 == '\0') {
      il2cpp_runtime_helper_023445d0(&"mainMenuOverlay");
      g_data_057aec16 = '\x01';
    }
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x44e6ea0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass5_0$$<BuildGroup>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___BuildGroup_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x44e78c0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___BuildGroup_b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ApplicationManagers_Credits_AottgCreditGroup_c *pAVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this_00;
  ulong uVar6;
  bool_conflict bVar7;
  int iVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  ApplicationManagers_Credits_AottgCreditContributor_o *contributor;
  System_String_o *str2;
  Il2CppMethodPointer *ppIVar13;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  MethodInfo *pMVar14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *unaff_RBX;
  ApplicationManagers_Credits_AottgCreditGroup_o *pAVar15;
  int iVar16;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *grid;
  System_String_o **str0;
  long lVar17;
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o **unaff_R12;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  System_String_Fields SVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int32_t iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_a8;
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o **ppGStack_a0;
  
  grid = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)header;
  str0 = (System_String_o **)__this;
  if (g_data_057aec13 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-title");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-info");
    il2cpp_runtime_helper_023445d0(&"creditsInfoIcon");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/info-circle");
    str0 = &"creditsSubcategoryHeader";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec13 = '\x01';
  }
  pAVar15 = (__this->fields).group;
  if (pAVar15 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) {
    unaff_RBX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(pAVar15->fields)._Title_k__BackingField;
    str0 = (System_String_o **)(__this->fields).id;
    grid = "-title";
    pSVar9 = System_String__Concat_3ae5ba0
                       ((System_String_o *)str0,(System_String_o *)"-title",(MethodInfo *)0x0);
    if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      unaff_RBX = Gisketch_Aottg2UI_Code_AottgUi__Text
                            (header,(System_String_o *)unaff_RBX,"creditsSubcategoryHeader",pSVar9,(System_String_o *)0x0,
                             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      unaff_R12 = &"Column";
      grid = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      str0 = (System_String_o **)"Column";
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                          ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                           (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar10,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                           0.0,1.0,(MethodInfo *)0x0);
      if (unaff_RBX != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        str0 = (System_String_o **)&(unaff_RBX->fields).search;
        (unaff_RBX->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
        il2cpp_runtime_helper_022b4080();
        pAVar15 = (__this->fields).group;
        grid = pGVar11;
        if (pAVar15 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) {
          bVar7 = System_String__IsNullOrEmpty
                            ((pAVar15->fields)._Description_k__BackingField,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            return;
          }
          pSVar9 = System_String__Concat_3ae5ba0((__this->fields).id,"-info",(MethodInfo *)0x0);
          pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Image
                              (header,"UI/Icons/info-circle","creditsInfoIcon",pSVar9,
                               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
          grid = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
          str0 = (System_String_o **)"Column";
          pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                              ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                               (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar10,height,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                               0.0,0.0,0.0,(MethodInfo *)0x0);
          unaff_RBX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
          if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar12->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
            il2cpp_runtime_helper_022b4080(&(pGVar12->fields).search,pGVar11);
            return;
          }
        }
      }
    }
  }
  uStack_b0 = il2cpp_runtime_helper_022b2c90();
  pGStack_a8 = unaff_RBX;
  ppGStack_a0 = unaff_R12;
  if (g_data_057aec14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0();
    g_data_057aec14 = '\x01';
  }
  uStack_b0 = uStack_b0 & 0xffffffff;
  pAVar15 = (((Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *)str0)->fields).group;
  if (pAVar15 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) {
    iVar16 = 0;
    do {
      pAVar4 = pAVar15->klass;
      uVar2._0_1_ = (pAVar4->_2).rank;
      uVar2._1_1_ = (pAVar4->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar5 = (pAVar4->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar17) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
            ppIVar13 = &(&(pAVar4->vtable)._0_Equals)[*(int *)((long)&pIVar5->offset + lVar17)].methodPtr;
            goto label_044e7ca3;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar17);
      }
      ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pAVar15,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e7ca3:
      iVar8 = (**ppIVar13)(pAVar15,(MethodInfo *)ppIVar13[1]);
      if (iVar8 <= iVar16) {
        return;
      }
      pAVar15 = (((Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *)str0)->fields).group;
      if (pAVar15 == (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) break;
      uVar6 = uStack_b0 >> 0x20;
      pAVar4 = pAVar15->klass;
      uVar3._0_1_ = (pAVar4->_2).rank;
      uVar3._1_1_ = (pAVar4->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar5 = (pAVar4->_1).interfaceOffsets;
        lVar17 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar17) == TypeInfo_IReadOnlyList_AottgCreditContributor) {
            ppIVar13 = &(&(pAVar4->vtable)._0_Equals)[*(int *)((long)&pIVar5->offset + lVar17)].methodPtr;
            goto label_044e7bed;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar17);
      }
      ppIVar13 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pAVar15,TypeInfo_IReadOnlyList_AottgCreditContributor,0);
label_044e7bed:
      contributor = (ApplicationManagers_Credits_AottgCreditContributor_o *)
                    (**ppIVar13)(pAVar15,uVar6,(MethodInfo *)ppIVar13[1]);
      pSVar9 = (((Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *)str0)->fields).id;
      str2 = System_Int32__ToString((int)&uStack_b0 + 4,(MethodInfo *)0x0);
      pMVar14 = (MethodInfo *)0x0;
      pSVar9 = System_String__Concat_3af7150(pSVar9,"-",str2,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)grid,contributor,pSVar9,pMVar14);
      iVar16 = uStack_b0._4_4_ + 1;
      uStack_b0 = CONCAT44(iVar16,(undefined4)uStack_b0);
      pAVar15 = (((Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *)str0)->fields).group;
    } while (pAVar15 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
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
  lVar17 = il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption,1);
  uVar24 = 0;
  uVar25 = 0;
  SVar22._stringLength = 0;
  SVar22._firstChar = 0;
  SVar22._6_2_ = 0;
  uVar23 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            ((Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o)ZEXT848(0),
             (System_String_o *)&stack0xfffffffffffffee8,"BACK","screen.main-menu","return");
  if (lVar17 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar17 + 0x18) != 0) {
    iStack_d8 = SVar22._stringLength;
    uStack_d4 = SVar22._4_4_;
    uStack_d0 = (undefined4)uVar23;
    uStack_cc = (undefined4)((ulong)uVar23 >> 0x20);
    uStack_c8 = (undefined4)uVar24;
    uStack_c4 = (undefined4)((ulong)uVar24 >> 0x20);
    uStack_c0 = (undefined4)uVar25;
    uStack_bc = (undefined4)((ulong)uVar25 >> 0x20);
    *(undefined4 *)(lVar17 + 0x40) = uStack_c8;
    *(undefined4 *)(lVar17 + 0x44) = uStack_c4;
    *(undefined4 *)(lVar17 + 0x48) = uStack_c0;
    *(undefined4 *)(lVar17 + 0x4c) = uStack_bc;
    *(int32_t *)(lVar17 + 0x30) = iStack_d8;
    *(undefined4 *)(lVar17 + 0x34) = uStack_d4;
    *(undefined4 *)(lVar17 + 0x38) = uStack_d0;
    *(undefined4 *)(lVar17 + 0x3c) = uStack_cc;
    *(undefined4 *)(lVar17 + 0x20) = uVar18;
    *(undefined4 *)(lVar17 + 0x24) = uVar19;
    *(undefined4 *)(lVar17 + 0x28) = uVar20;
    *(undefined4 *)(lVar17 + 0x2c) = uVar21;
    il2cpp_runtime_helper_022b4080(lVar17 + 0x20,0);
    **(long **)(TypeInfo_AottgCreditsScreen + 0xb8) = lVar17;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsScreen + 0xb8),lVar17);
    if (*(int *)(TypeInfo_AottgPublicProfileHover + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4) != 0) {
      Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(TypeInfo_AottgHoverMarqueeText);
      return;
    }
    pMVar14 = TypeInfo_AottgHoverMarqueeText;
    il2cpp_runtime_helper_02337ed0();
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(pMVar14);
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
    iVar16 = *(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4);
  }
  else {
    iVar16 = *(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4);
  }
  if (iVar16 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = (char)*TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer;
  }
  else {
    cVar1 = (char)*TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer;
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
                **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
    factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
    if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
      Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
                (__this_00,"AottgHoverMarqueeText",factory,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      *TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec16 == '\0') {
      il2cpp_runtime_helper_023445d0(&"mainMenuOverlay");
      g_data_057aec16 = '\x01';
    }
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x44e6eb0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass6_0$$<BuildContributors>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___BuildContributors_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x44e7b70

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___BuildContributors_b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this_00;
  ulong uVar6;
  uint in_EAX;
  int iVar7;
  ApplicationManagers_Credits_AottgCreditContributor_o *contributor;
  System_String_o *str2;
  System_String_o *pSVar8;
  VirtualInvokeData *pVVar9;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  MethodInfo *pMVar10;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *pSVar11;
  int iVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  System_String_Fields SVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int32_t iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (g_data_057aec14 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0();
    g_data_057aec14 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  pSVar11 = (__this->fields).contributors;
  if (pSVar11 != (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)0x0) {
    iVar12 = 0;
    do {
      pSVar4 = pSVar11->klass;
      uVar2._0_1_ = (pSVar4->_2).rank;
      uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
            pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
            goto label_044e7ca3;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar13);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e7ca3:
      iVar7 = (*pVVar9->methodPtr)(pSVar11,pVVar9->method);
      if (iVar7 <= iVar12) {
        return;
      }
      pSVar11 = (__this->fields).contributors;
      if (pSVar11 == (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)0x0) break;
      uVar6 = uStack_38 >> 0x20;
      pSVar4 = pSVar11->klass;
      uVar3._0_1_ = (pSVar4->_2).rank;
      uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar5 = (pSVar4->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IReadOnlyList_AottgCreditContributor) {
            pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
            goto label_044e7bed;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar13);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyList_AottgCreditContributor,0);
label_044e7bed:
      contributor = (ApplicationManagers_Credits_AottgCreditContributor_o *)
                    (*pVVar9->methodPtr)(pSVar11,uVar6,pVVar9->method);
      pSVar8 = (__this->fields).id;
      str2 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
      pMVar10 = (MethodInfo *)0x0;
      pSVar8 = System_String__Concat_3af7150(pSVar8,"-",str2,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor(grid,contributor,pSVar8,pMVar10);
      iVar12 = uStack_38._4_4_ + 1;
      uStack_38 = CONCAT44(iVar12,(uint)uStack_38);
      pSVar11 = (__this->fields).contributors;
    } while (pSVar11 != (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
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
  lVar13 = il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption,1);
  uVar20 = 0;
  uVar21 = 0;
  SVar18._stringLength = 0;
  SVar18._firstChar = 0;
  SVar18._6_2_ = 0;
  uVar19 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            ((Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o)ZEXT848(0),
             (System_String_o *)&stack0xffffffffffffff60,"BACK","screen.main-menu","return");
  if (lVar13 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (*(int *)(lVar13 + 0x18) != 0) {
    iStack_60 = SVar18._stringLength;
    uStack_5c = SVar18._4_4_;
    uStack_58 = (undefined4)uVar19;
    uStack_54 = (undefined4)((ulong)uVar19 >> 0x20);
    uStack_50 = (undefined4)uVar20;
    uStack_4c = (undefined4)((ulong)uVar20 >> 0x20);
    uStack_48 = (undefined4)uVar21;
    uStack_44 = (undefined4)((ulong)uVar21 >> 0x20);
    *(undefined4 *)(lVar13 + 0x40) = uStack_50;
    *(undefined4 *)(lVar13 + 0x44) = uStack_4c;
    *(undefined4 *)(lVar13 + 0x48) = uStack_48;
    *(undefined4 *)(lVar13 + 0x4c) = uStack_44;
    *(int32_t *)(lVar13 + 0x30) = iStack_60;
    *(undefined4 *)(lVar13 + 0x34) = uStack_5c;
    *(undefined4 *)(lVar13 + 0x38) = uStack_58;
    *(undefined4 *)(lVar13 + 0x3c) = uStack_54;
    *(undefined4 *)(lVar13 + 0x20) = uVar14;
    *(undefined4 *)(lVar13 + 0x24) = uVar15;
    *(undefined4 *)(lVar13 + 0x28) = uVar16;
    *(undefined4 *)(lVar13 + 0x2c) = uVar17;
    il2cpp_runtime_helper_022b4080(lVar13 + 0x20,0);
    **(long **)(TypeInfo_AottgCreditsScreen + 0xb8) = lVar13;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsScreen + 0xb8),lVar13);
    if (*(int *)(TypeInfo_AottgPublicProfileHover + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4) != 0) {
      Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(TypeInfo_AottgHoverMarqueeText);
      return;
    }
    pMVar10 = TypeInfo_AottgHoverMarqueeText;
    il2cpp_runtime_helper_02337ed0();
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(pMVar10);
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
    iVar12 = *(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4);
  }
  else {
    iVar12 = *(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4);
  }
  if (iVar12 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = (char)*TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer;
  }
  else {
    cVar1 = (char)*TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer;
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
                **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
    factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
    if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
      Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
                (__this_00,"AottgHoverMarqueeText",factory,(MethodInfo *)0x0);
      if (*(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      *TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer = (Il2CppMethodPointer)0x1;
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aec16 == '\0') {
      il2cpp_runtime_helper_023445d0(&"mainMenuOverlay");
      g_data_057aec16 = '\x01';
    }
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildCategory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildCategory (Gisketch_Aottg2UI_Code_AottgUi_o* content, ApplicationManagers_Credits_AottgCreditCategory_o* category, int32_t categoryIndex, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x44e60d0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildCategory
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               ApplicationManagers_Credits_AottgCreditCategory_o *category,int32_t categoryIndex,
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
  uint uVar11;
  bool_conflict bVar12;
  int iVar13;
  Il2CppClass *pIVar14;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this;
  System_String_o *pSVar15;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar16;
  Il2CppClass *pIVar17;
  Il2CppMethodPointer *ppIVar18;
  MethodInfo *pMVar19;
  Il2CppClass *pIVar20;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar21;
  System_Action_AottgUi__o *pSVar22;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar23;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar24;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar25;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX_00;
  System_Collections_Generic_List_GisketchNodeDefinition__o *extraout_RDX_01;
  Il2CppClass *pIVar26;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o **ppGVar27;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar28;
  long lVar29;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar30;
  System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *pSVar31;
  ulong uVar32;
  uint uStack_4c;
  System_String_o *pSStack_48;
  Il2CppClass *pIStack_40;
  int iStack_38;
  int iStack_34;
  
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
  pIVar20 = "-core-header";
  pIVar14 = (Il2CppClass *)
            System_String__Concat_3ae5ba0
                      (context.fields._SectionId_k__BackingField,(System_String_o *)"-core-header",
                       (MethodInfo *)0x0);
  if (category != (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0) {
    pIVar26 = (Il2CppClass *)(category->fields)._Name_k__BackingField;
    __this = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this,(MethodInfo *)0x0);
    pIVar20 = (Il2CppClass *)0x0;
    context.fields._SectionId_k__BackingField = (System_String_o *)pIVar14;
    bVar12 = System_String__IsNullOrEmpty((System_String_o *)pIVar14,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      pIVar14 = "credits-category-header";
    }
    if (__this != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)pIVar14;
      il2cpp_runtime_helper_022b4080(__this + 1,pIVar14);
      if (pIVar26 == (Il2CppClass *)0x0) {
        pIVar26 = (Il2CppClass *)**(long **)(g_data_057b9c00 + 0xb8);
      }
      context.fields._SectionId_k__BackingField = (System_String_o *)&__this[1].monitor;
      __this[1].monitor = pIVar26;
      il2cpp_runtime_helper_022b4080();
      pIVar14 = pIStack_40;
      pIVar20 = pIVar26;
      if (pIStack_40 != (Il2CppClass *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIStack_40,__this,(MethodInfo *)0x0);
        context.fields._SectionId_k__BackingField = (category->fields)._Description_k__BackingField;
        pIVar20 = (Il2CppClass *)0x0;
        bVar12 = System_String__IsNullOrEmpty(context.fields._SectionId_k__BackingField,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
          pIVar20 = (Il2CppClass *)(category->fields)._Description_k__BackingField;
          pSVar15 = System_String__Concat_3ae5ba0(pSStack_48,"-description",(MethodInfo *)0x0);
          context.fields._SectionId_k__BackingField = (System_String_o *)pIVar14;
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar14,(System_String_o *)pIVar20,"text",
                     pSVar15,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        if (categoryIndex == 0) {
          pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar14,"Refreshing credits...","profileInfoStatus",
                               "credits-refreshing-text",(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          pIVar20 = (Il2CppClass *)0x0;
          context.fields._SectionId_k__BackingField = (System_String_o *)pIVar17;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pIVar17,(MethodInfo *)0x0);
          pIVar26 = "credits.refreshing";
          if (pIVar17 == (Il2CppClass *)0x0) goto label_044e66c5;
          context.fields._SectionId_k__BackingField = (System_String_o *)&(pIVar17->_1).byval_arg;
          (pIVar17->_1).byval_arg.data = "credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          pIVar20 = pIVar26;
          if (pGVar16 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          context.fields._SectionId_k__BackingField = (System_String_o *)&(pGVar16->fields).contentLayout;
          (pGVar16->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)pIVar17;
          il2cpp_runtime_helper_022b4080();
          pIVar20 = pIVar17;
        }
        pIVar26 = (Il2CppClass *)(category->fields)._Contributors_k__BackingField;
        if (pIVar26 != (Il2CppClass *)0x0) {
          pSVar6 = (pIVar26->_1).image;
          uVar2._0_1_ = (pSVar6->_2).rank;
          uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar29 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar29) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                ppIVar18 = &(&(pSVar6->vtable)._0_Equals)[*(int *)((long)&pIVar7->offset + lVar29)].methodPtr;
                goto label_044e6411;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar29);
          }
          ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pIVar26,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          pIVar20 = (Il2CppClass *)ppIVar18[1];
          iVar13 = (**ppIVar18)();
          pIVar17 = (Il2CppClass *)(category->fields)._Groups_k__BackingField;
          context.fields._SectionId_k__BackingField = (System_String_o *)pIVar26;
          if (pIVar17 != (Il2CppClass *)0x0) {
            pIVar8 = (pIVar17->_1).image;
            if ((ulong)*(ushort *)(pIVar8 + 0x12e) != 0) {
              lVar29 = 0;
              do {
                if (*(long *)(*(long *)(pIVar8 + 0xb0) + lVar29) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar19 = (MethodInfo *)
                            (pIVar8 + (long)*(int *)(*(long *)(pIVar8 + 0xb0) + 8 + lVar29) * 0x10 + 0x138);
                  goto label_044e6481;
                }
                lVar29 = lVar29 + 0x10;
              } while ((ulong)*(ushort *)(pIVar8 + 0x12e) << 4 != lVar29);
            }
            pMVar19 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pIVar17,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            pIVar20 = (Il2CppClass *)pMVar19->virtualMethodPointer;
            iStack_34 = (*pMVar19->methodPointer)();
            context.fields._SectionId_k__BackingField = (System_String_o *)pIVar17;
            iStack_38 = iVar13;
            if (0 < iVar13) {
              pIVar20 = (Il2CppClass *)(category->fields)._Contributors_k__BackingField;
              pSVar15 = System_String__Concat_3ae5ba0(pSStack_48,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar14,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)pIVar20,pSVar15
                         ,pMVar19);
              context.fields._SectionId_k__BackingField = (System_String_o *)pIVar14;
            }
            pIVar14 = pIStack_40;
            uStack_4c = 0;
            pSVar31 = (category->fields)._Groups_k__BackingField;
            if (pSVar31 != (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)0x0) {
              do {
                uVar11 = uStack_4c;
                pSVar9 = pSVar31->klass;
                uVar3._0_1_ = (pSVar9->_2).rank;
                uVar3._1_1_ = (pSVar9->_2).minimumAlignment;
                if ((ulong)uVar3 != 0) {
                  pIVar7 = (pSVar9->_1).interfaceOffsets;
                  lVar29 = 0;
                  do {
                    if (*(long *)((long)&pIVar7->interfaceType + lVar29) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      ppIVar18 = &pSVar9->vtable[*(int *)((long)&pIVar7->offset + lVar29)].methodPtr;
                      goto label_044e65b3;
                    }
                    lVar29 = lVar29 + 0x10;
                  } while ((ulong)uVar3 << 4 != lVar29);
                }
                ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar31,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar13 = (**ppIVar18)(pSVar31);
                pIVar20 = pIStack_40;
                if (iVar13 <= (int)uVar11) {
                  if ((iStack_34 < 1) && (iStack_38 < 1)) {
                    pSVar15 = System_String__Concat_3ae5ba0(pSStack_48,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar20,pSVar15,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar15 = System_Int32__ToString((int32_t)&uStack_4c,(MethodInfo *)0x0);
                pIVar20 = (Il2CppClass *)
                          System_String__Concat_3af7470
                                    (pSStack_48,"-group-",pSVar15,"-gap",(MethodInfo *)0x0);
                context.fields._SectionId_k__BackingField = (System_String_o *)pIVar14;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar14,(System_String_o *)pIVar20,method_01);
                pSVar31 = (category->fields)._Groups_k__BackingField;
                if (pSVar31 == (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)0x0) break;
                uVar32 = (ulong)uStack_4c;
                pSVar9 = pSVar31->klass;
                uVar4._0_1_ = (pSVar9->_2).rank;
                uVar4._1_1_ = (pSVar9->_2).minimumAlignment;
                if ((ulong)uVar4 != 0) {
                  pIVar7 = (pSVar9->_1).interfaceOffsets;
                  lVar29 = 0;
                  do {
                    if (*(long *)((long)&pIVar7->interfaceType + lVar29) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      ppIVar18 = &pSVar9->vtable[*(int *)((long)&pIVar7->offset + lVar29)].methodPtr;
                      goto label_044e64fd;
                    }
                    lVar29 = lVar29 + 0x10;
                  } while ((ulong)uVar4 << 4 != lVar29);
                }
                ppIVar18 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar31,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                pIVar20 = (Il2CppClass *)(**ppIVar18)(pSVar31,uVar32,(MethodInfo *)ppIVar18[1]);
                pSVar15 = System_Int32__ToString((int32_t)&uStack_4c,(MethodInfo *)0x0);
                pMVar19 = (MethodInfo *)0x0;
                pSVar15 = System_String__Concat_3af7150(pSStack_48,"-group-",pSVar15,(MethodInfo *)0x0);
                context.fields._SectionId_k__BackingField = (System_String_o *)pIVar14;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)pIVar14,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)pIVar20,pSVar15,pMVar19);
                uStack_4c = uStack_4c + 1;
                pSVar31 = (category->fields)._Groups_k__BackingField;
              } while (pSVar31 != (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)0x0);
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
  pGVar21 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar15 = (System_String_o *)0x0;
  pGVar30 = pGVar21;
  System_Object___ctor((Il2CppObject *)pGVar21,(MethodInfo *)0x0);
  if (pGVar21 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    (pGVar21->fields)._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)pIVar20;
    il2cpp_runtime_helper_022b4080(&pGVar21->fields,pIVar20);
    (pGVar21->fields)._actions = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(pGVar21->fields)._actions,extraout_RDX);
    pSVar22 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar10 = (pGVar21->fields)._actions;
    pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar15 = (System_String_o *)0x0;
    pGVar30 = "Row";
    pGVar24 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)0x0,
                         (System_String_o *)"FlexStart",(System_String_o *)0x0,"Wrap",10.0,pGVar23,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if ((Il2CppClass *)context.fields._SectionId_k__BackingField != (Il2CppClass *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)context.fields._SectionId_k__BackingField,
                 (System_String_o *)"default",pSVar22,(System_String_o *)pGVar10,pGVar24,
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
  pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  pSVar28 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
  pGVar21 = "Column";
  pGVar24 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar23,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar30 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar30,(System_String_o *)"default",(System_Action_AottgUi__o *)0x0,pSVar15,pGVar24,
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
  pGVar25 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pMVar19 = (MethodInfo *)0x0;
  pGVar30 = pGVar25;
  System_Object___ctor((Il2CppObject *)pGVar25,(MethodInfo *)0x0);
  if (pGVar25 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = &pGVar25->fields;
    (pGVar25->fields)._children = pSVar28;
    il2cpp_runtime_helper_022b4080(pGVar1,pSVar28);
    ppGVar27 = &(pGVar25->fields)._actions;
    (pGVar25->fields)._actions = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(ppGVar27,extraout_RDX_00);
    pSVar22 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar15 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pGVar25->fields)._actions,"-header",(MethodInfo *)0x0);
    pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pMVar19 = "FlexStart";
    pGVar30 = "Row";
    pGVar24 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar23,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar21 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pMVar19 = "default";
      pGVar30 = pGVar21;
      pGVar16 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (pGVar21,(System_String_o *)"default",pSVar22,pSVar15,pGVar24,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
         (pGVar16 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pMVar19 = *(MethodInfo **)&(pGVar1->_children->fields)._size;
        pGVar30 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&(pGVar16->fields).choiceOptionRenderer;
        (pGVar16->fields).choiceOptionRenderer = (System_String_o *)pMVar19;
        il2cpp_runtime_helper_022b4080();
        if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
           (pGVar25 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar1->_children->fields)._syncRoot,
           pGVar25 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
          pIVar20 = (Il2CppClass *)pGVar25->klass;
          uVar5._0_1_ = (pIVar20->_2).rank;
          uVar5._1_1_ = (pIVar20->_2).minimumAlignment;
          if ((ulong)uVar5 != 0) {
            pIVar7 = (pIVar20->_1).interfaceOffsets;
            lVar29 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar29) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                method_00 = (MethodInfo *)&pIVar20->vtable[*(int *)((long)&pIVar7->offset + lVar29)].methodPtr
                ;
                goto label_044e6c71;
              }
              lVar29 = lVar29 + 0x10;
            } while ((ulong)uVar5 << 4 != lVar29);
          }
          method_00 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pGVar25,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pMVar19 = (MethodInfo *)method_00->virtualMethodPointer;
          iVar13 = (*method_00->methodPointer)();
          if (iVar13 < 1) {
            pSVar15 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar27,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      (pGVar21,pSVar15,"No contributors listed.",(MethodInfo *)&"No contributors listed.");
            return;
          }
          pGVar30 = pGVar25;
          if (pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
            contributors = (pGVar1->_children->fields)._syncRoot;
            pSVar15 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar27,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      (pGVar21,(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)
                               contributors,pSVar15,method_00);
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
  pGVar25 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  pGVar21 = pGVar25;
  System_Object___ctor((Il2CppObject *)pGVar25,(MethodInfo *)0x0);
  if (pGVar25 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    (pGVar25->fields)._children = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080(&pGVar25->fields,extraout_RDX_01);
    (pGVar25->fields)._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar19;
    il2cpp_runtime_helper_022b4080(&(pGVar25->fields)._actions,pMVar19);
    pSVar22 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar10 = (pGVar25->fields)._actions;
    pGVar23 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar21 = "Column";
    pGVar24 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar23,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar30 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar30,(System_String_o *)"default",pSVar22,(System_String_o *)pGVar10,pGVar24,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar21,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildGroup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup (Gisketch_Aottg2UI_Code_AottgUi_o* content, ApplicationManagers_Credits_AottgCreditGroup_o* group, System_String_o* id, const MethodInfo* method);
// 0x44e69b0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               ApplicationManagers_Credits_AottgCreditGroup_o *group,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_Fields *pGVar1;
  ushort uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppObject *contributors;
  int iVar5;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar6;
  System_Action_AottgUi__o *pSVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  MethodInfo *method_00;
  System_String_o *__this;
  System_String_Fields extraout_RDX;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o **ppGVar12;
  System_String_c *pSVar13;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  long lVar14;
  
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
  pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pSVar13 = (System_String_c *)0x0;
  __this_00 = pGVar6;
  System_Object___ctor((Il2CppObject *)pGVar6,(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = &pGVar6->fields;
    (pGVar6->fields)._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)group;
    il2cpp_runtime_helper_022b4080(pGVar1,group);
    ppGVar12 = &(pGVar6->fields)._actions;
    (pGVar6->fields)._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)id;
    il2cpp_runtime_helper_022b4080(ppGVar12,id);
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar8 = System_String__Concat_3ae5ba0
                       ((System_String_o *)(pGVar6->fields)._actions,"-header",(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar13 = "FlexStart";
    __this_00 = "Row";
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pSVar13 = "default";
      __this_00 = content;
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (content,(System_String_o *)"default",pSVar7,pSVar8,pGVar10,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
         (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pSVar13 = *(System_String_c **)&(pGVar1->_children->fields)._size;
        __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&(pGVar11->fields).choiceOptionRenderer;
        (pGVar11->fields).choiceOptionRenderer = (System_String_o *)pSVar13;
        il2cpp_runtime_helper_022b4080();
        if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
           (pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar1->_children->fields)._syncRoot,
           pGVar6 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
          pIVar3 = (Il2CppClass *)pGVar6->klass;
          uVar2._0_1_ = (pIVar3->_2).rank;
          uVar2._1_1_ = (pIVar3->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            lVar14 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar14) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                method_00 = (MethodInfo *)(pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14));
                goto label_044e6c71;
              }
              lVar14 = lVar14 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar14);
          }
          method_00 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pGVar6,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pSVar13 = (System_String_c *)method_00->virtualMethodPointer;
          iVar5 = (*method_00->methodPointer)();
          if (iVar5 < 1) {
            pSVar8 = System_String__Concat_3ae5ba0
                               ((System_String_o *)*ppGVar12,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      (content,pSVar8,"No contributors listed.",(MethodInfo *)&"No contributors listed.");
            return;
          }
          __this_00 = pGVar6;
          if (pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
            contributors = (pGVar1->_children->fields)._syncRoot;
            pSVar8 = System_String__Concat_3ae5ba0
                               ((System_String_o *)*ppGVar12,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      (content,(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)
                               contributors,pSVar8,method_00);
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
  __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  pSVar8 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (System_String_o *)0x0) {
    __this->fields = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&__this->fields,extraout_RDX);
    __this[1].klass = pSVar13;
    il2cpp_runtime_helper_022b4080(__this + 1,pSVar13);
    pSVar7 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar13 = __this[1].klass;
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar8 = "Column";
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,0.0,pGVar9,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (__this_00,(System_String_o *)"default",pSVar7,(System_String_o *)pSVar13,pGVar10,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildContributors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* contributors, System_String_o* id, const MethodInfo* method);
// 0x44e66d0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors,
               System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_Fields *pGVar1;
  ushort uVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppObject *contributors_00;
  int iVar6;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar7;
  System_Action_AottgUi__o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX;
  System_Collections_Generic_List_GisketchNodeDefinition__o *extraout_RDX_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o **ppGVar13;
  System_String_o *pSVar14;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar15;
  MethodInfo *pMVar16;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar17;
  long lVar18;
  
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
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar14 = (System_String_o *)0x0;
  pGVar17 = pGVar7;
  System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    (pGVar7->fields)._children = (System_Collections_Generic_List_GisketchNodeDefinition__o *)contributors;
    il2cpp_runtime_helper_022b4080(&pGVar7->fields,contributors);
    (pGVar7->fields)._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)id;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields)._actions,id);
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar3 = (pGVar7->fields)._actions;
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar14 = (System_String_o *)0x0;
    pGVar17 = "Row";
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)0x0,
                         (System_String_o *)"FlexStart",(System_String_o *)0x0,"Wrap",10.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,(System_String_o *)"default",pSVar8,(System_String_o *)pGVar3,pGVar10,
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
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  pSVar15 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
  pGVar7 = "Column";
  pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
  if (pGVar17 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar17,(System_String_o *)"default",(System_Action_AottgUi__o *)0x0,pSVar14,pGVar10,
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
  pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pMVar16 = (MethodInfo *)0x0;
  pGVar17 = pGVar11;
  System_Object___ctor((Il2CppObject *)pGVar11,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = &pGVar11->fields;
    (pGVar11->fields)._children = pSVar15;
    il2cpp_runtime_helper_022b4080(pGVar1,pSVar15);
    ppGVar13 = &(pGVar11->fields)._actions;
    (pGVar11->fields)._actions = extraout_RDX;
    il2cpp_runtime_helper_022b4080(ppGVar13,extraout_RDX);
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar14 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pGVar11->fields)._actions,"-header",(MethodInfo *)0x0);
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pMVar16 = "FlexStart";
    pGVar17 = "Row";
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                         (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pMVar16 = "default";
      pGVar17 = pGVar7;
      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (pGVar7,(System_String_o *)"default",pSVar8,pSVar14,pGVar10,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
         (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pMVar16 = *(MethodInfo **)&(pGVar1->_children->fields)._size;
        pGVar17 = (Gisketch_Aottg2UI_Code_AottgUi_o *)&(pGVar12->fields).choiceOptionRenderer;
        (pGVar12->fields).choiceOptionRenderer = (System_String_o *)pMVar16;
        il2cpp_runtime_helper_022b4080();
        if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
           (pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar1->_children->fields)._syncRoot,
           pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
          pIVar4 = (Il2CppClass *)pGVar11->klass;
          uVar2._0_1_ = (pIVar4->_2).rank;
          uVar2._1_1_ = (pIVar4->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar5 = (pIVar4->_1).interfaceOffsets;
            lVar18 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar18) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                method_00 = (MethodInfo *)(pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar18));
                goto label_044e6c71;
              }
              lVar18 = lVar18 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar18);
          }
          method_00 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pGVar11,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pMVar16 = (MethodInfo *)method_00->virtualMethodPointer;
          iVar6 = (*method_00->methodPointer)();
          if (iVar6 < 1) {
            pSVar14 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar13,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      (pGVar7,pSVar14,"No contributors listed.",(MethodInfo *)&"No contributors listed.");
            return;
          }
          pGVar17 = pGVar11;
          if (pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
            contributors_00 = (pGVar1->_children->fields)._syncRoot;
            pSVar14 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar13,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      (pGVar7,(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)
                              contributors_00,pSVar14,method_00);
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
  pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  pGVar7 = pGVar11;
  System_Object___ctor((Il2CppObject *)pGVar11,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    (pGVar11->fields)._children = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(&pGVar11->fields,extraout_RDX_00);
    (pGVar11->fields)._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar16;
    il2cpp_runtime_helper_022b4080(&(pGVar11->fields)._actions,pMVar16);
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pGVar3 = (pGVar11->fields)._actions;
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar7 = "Column";
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar9,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
    if (pGVar17 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar17,(System_String_o *)"default",pSVar8,(System_String_o *)pGVar3,pGVar10,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildContributor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor (Gisketch_Aottg2UI_Code_AottgUi_o* grid, ApplicationManagers_Credits_AottgCreditContributor_o* contributor, System_String_o* id, const MethodInfo* method);
// 0x44e6ec0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor
               (Gisketch_Aottg2UI_Code_AottgUi_o *grid,
               ApplicationManagers_Credits_AottgCreditContributor_o *contributor,System_String_o *id,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (g_data_057aec0b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"creditsContributorCell");
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057aec0b = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_helper_022b4080(&(__this->fields).id,id);
    (__this->fields).style = "creditsContributorCell";
    il2cpp_runtime_helper_022b4080();
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Search
                       ((System_String_o *)0x0,(System_String_o *)0x0,1,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0,
                        (MethodInfo *)0x0);
    method_01 = (MethodInfo *)&(__this->fields).popover;
    (__this->fields).popover = (System_String_o *)pGVar1;
    il2cpp_runtime_helper_022b4080(method_01,pGVar1);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorCellLayout(method_01);
    (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields).search,pGVar2);
    pGVar3 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorChildren(contributor,id,method_00);
    (__this->fields).deferredChildren = pGVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields).deferredChildren,pGVar3);
    if (grid != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(grid,__this,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec0d = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(32.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Layout
            ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,(System_String_o *)0x0,
             8.0,width,height,minWidth,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0
             ,10.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$ContributorChildren
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorChildren (ApplicationManagers_Credits_AottgCreditContributor_o* contributor, System_String_o* id, const MethodInfo* method);
// 0x44e7110

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorChildren
          (ApplicationManagers_Credits_AottgCreditContributor_o *contributor,System_String_o *id,
          MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **ppGVar7;
  
  if (g_data_057aec0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPublicProfileHover);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"icon");
    il2cpp_runtime_helper_023445d0(&"singleplayer");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-hover");
    il2cpp_runtime_helper_023445d0(&"-account-icon");
    il2cpp_runtime_helper_023445d0(&"-name");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"AottgHoverMarqueeText");
    g_data_057aec0c = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  id_00 = __this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "AottgHoverMarqueeText";
    il2cpp_runtime_helper_022b4080(&__this->fields);
    pSVar2 = System_String__Concat_3ae5ba0(id,"-name",(MethodInfo *)0x0);
    id_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this->fields).id;
    (__this->fields).id = pSVar2;
    il2cpp_runtime_helper_022b4080();
    if (contributor != (ApplicationManagers_Credits_AottgCreditContributor_o *)0x0) {
      (__this->fields).text = (contributor->fields)._Name_k__BackingField;
      il2cpp_runtime_helper_022b4080(&(__this->fields).text);
      (__this->fields).style = "text";
      il2cpp_runtime_helper_022b4080(&(__this->fields).style);
      (__this->fields).value = "text";
      il2cpp_runtime_helper_022b4080();
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,pGVar4,minWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(__this->fields).search);
      bVar1 = ApplicationManagers_Credits_AottgCreditContributor__get_IsLinked(contributor,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        id_00 = TypeInfo_GisketchNodeDefinition;
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40();
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          if ((int)pGVar6->max_length != 0) {
            ppGVar7 = pGVar6->m_Items;
            pGVar6->m_Items[0] = __this;
label_044e7560:
            il2cpp_runtime_helper_022b4080(ppGVar7,__this);
            return pGVar6;
          }
          goto label_044e757c;
        }
      }
      else {
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40();
        __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        id_00 = __this_00;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_00->fields).type = "Icon";
          il2cpp_runtime_helper_022b4080(&__this_00->fields);
          pSVar2 = System_String__Concat_3ae5ba0(id,"-account-icon",(MethodInfo *)0x0);
          (__this_00->fields).id = pSVar2;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,pSVar2);
          (__this_00->fields).icon = "singleplayer";
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).icon);
          (__this_00->fields).style = "icon";
          il2cpp_runtime_helper_022b4080();
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          id_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_00->fields).search;
          (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
          il2cpp_runtime_helper_022b4080();
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar6->max_length != 0) {
              id_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pGVar6->m_Items;
              pGVar6->m_Items[0] = __this_00;
              il2cpp_runtime_helper_022b4080();
              if (1 < (uint)pGVar6->max_length) {
                pGVar6->m_Items[1] = __this;
                il2cpp_runtime_helper_022b4080(pGVar6->m_Items + 1,__this);
                id_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                        System_String__Concat_3ae5ba0(id,"-hover",(MethodInfo *)0x0);
                pSVar2 = (contributor->fields)._AccountId_k__BackingField;
                if (*(int *)(TypeInfo_AottgPublicProfileHover + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this = Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node
                                   ((System_String_o *)id_00,pSVar2,(MethodInfo *)0x0);
                if (2 < (uint)pGVar6->max_length) {
                  ppGVar7 = pGVar6->m_Items + 2;
                  pGVar6->m_Items[2] = __this;
                  goto label_044e7560;
                }
              }
            }
            goto label_044e757c;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044e757c:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)id_00,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$ContributorCellLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorCellLayout (const MethodInfo* method);
// 0x44e7010

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorCellLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec0d == '\0') {
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec0d = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(32.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,width,height,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,10.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildEmpty
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_String_o* id, System_String_o* text, const MethodInfo* method);
// 0x44e6d00

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,System_String_o *id,System_String_o *text,
               MethodInfo *method)

{
  System_String_c *id_00;
  System_String_o *__this;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *__this_00;
  
  if (g_data_057aec0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildEmpty_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass10_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aec0e = '\x01';
  }
  __this = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  __this_00 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (System_String_o *)0x0) {
    __this->fields = (System_String_Fields)text;
    il2cpp_runtime_helper_022b4080(&__this->fields,text);
    __this[1].klass = (System_String_c *)id;
    il2cpp_runtime_helper_022b4080(__this + 1,id);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    id_00 = __this[1].klass;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this_00 = "Column";
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"default",build,(System_String_o *)id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildGap
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_String_o* id, const MethodInfo* method);
// 0x44e68a0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgUi_Fields *pGVar1;
  ushort uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppObject *contributors;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *id_00;
  int iVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar8;
  System_Action_AottgUi__o *pSVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *extraout_RDX;
  System_Collections_Generic_List_GisketchNodeDefinition__o *extraout_RDX_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o **ppGVar12;
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar13;
  MethodInfo *pMVar14;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar15;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  long lVar16;
  
  if (g_data_057aec0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec0f = '\x01';
  }
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  pSVar13 = (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0;
  pGVar15 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,(System_String_o *)"default",(System_Action_AottgUi__o *)0x0,id,pGVar7,
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
  pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pMVar14 = (MethodInfo *)0x0;
  __this = pGVar8;
  System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = &pGVar8->fields;
    (pGVar8->fields)._children = pSVar13;
    il2cpp_runtime_helper_022b4080(pGVar1,pSVar13);
    ppGVar12 = &(pGVar8->fields)._actions;
    (pGVar8->fields)._actions = extraout_RDX;
    il2cpp_runtime_helper_022b4080(ppGVar12,extraout_RDX);
    pSVar9 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar10 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pGVar8->fields)._actions,"-header",(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pMVar14 = "FlexStart";
    __this = "Row";
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar15 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pMVar14 = "default";
      __this = pGVar15;
      pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (pGVar15,(System_String_o *)"default",pSVar9,pSVar10,pGVar7,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
         (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pMVar14 = *(MethodInfo **)&(pGVar1->_children->fields)._size;
        __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)&(pGVar11->fields).choiceOptionRenderer;
        (pGVar11->fields).choiceOptionRenderer = (System_String_o *)pMVar14;
        il2cpp_runtime_helper_022b4080();
        if ((pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
           (pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pGVar1->_children->fields)._syncRoot,
           pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
          pIVar3 = (Il2CppClass *)pGVar8->klass;
          uVar2._0_1_ = (pIVar3->_2).rank;
          uVar2._1_1_ = (pIVar3->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            lVar16 = 0;
            do {
              if (*(long *)((long)&pIVar4->interfaceType + lVar16) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                method_00 = (MethodInfo *)(pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar16));
                goto label_044e6c71;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar16);
          }
          method_00 = (MethodInfo *)il2cpp_runtime_helper_02300d20(pGVar8,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pMVar14 = (MethodInfo *)method_00->virtualMethodPointer;
          iVar5 = (*method_00->methodPointer)();
          if (iVar5 < 1) {
            pSVar10 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar12,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      (pGVar15,pSVar10,"No contributors listed.",(MethodInfo *)&"No contributors listed.");
            return;
          }
          __this = pGVar8;
          if (pGVar1->_children != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
            contributors = (pGVar1->_children->fields)._syncRoot;
            pSVar10 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*ppGVar12,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      (pGVar15,(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)
                               contributors,pSVar10,method_00);
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
  pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  pGVar15 = pGVar8;
  System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    (pGVar8->fields)._children = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(&pGVar8->fields,extraout_RDX_00);
    (pGVar8->fields)._actions = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)pMVar14;
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields)._actions,pMVar14);
    pSVar9 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    id_00 = (pGVar8->fields)._actions;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar15 = "Column";
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (__this,(System_String_o *)"default",pSVar9,(System_String_o *)id_00,pGVar7,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar15,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId (System_String_o* name, int32_t index, const MethodInfo* method);
// 0x44e75a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId(System_String_o *name,int32_t index,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str1;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  undefined1 local_14 [4];
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  if (g_data_057aec10 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"category-");
    il2cpp_runtime_helper_023445d0(&"00");
    g_data_057aec10 = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SafeId(name,method_00);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  str1 = System_Int32__ToString_3cb43b0((int32_t)local_14,"00",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pSVar2 = System_String__Concat_3ae5ba0("category-",str1,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = System_String__Concat_3af7470("category-",str1,"-",pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$SafeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SafeId (System_String_o* value, const MethodInfo* method);
// 0x44e7650

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SafeId(System_String_o *value,MethodInfo *method)

{
  code cVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  bool bVar2;
  uint16_t uVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  System_String_o *pSVar6;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  undefined4 extraout_var;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar11;
  ApplicationManagers_Credits_AottgCreditContributor_o *contributor;
  System_String_o *pSVar12;
  undefined8 *puVar13;
  long lVar14;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  MethodInfo *pMVar15;
  System_String_Fields SVar16;
  int iVar17;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *grid;
  System_String_o **str0;
  long lVar18;
  System_String_o **unaff_R12;
  System_Text_StringBuilder_o *unaff_R14;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int32_t iStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_110;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_108;
  System_String_o **ppSStack_100;
  
  if (g_data_057aec11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
    g_data_057aec11 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (value == (System_String_o *)0x0) {
label_044e7790:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar5 = (value->fields)._stringLength;
    unaff_R14 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor_3b026e0(unaff_R14,iVar5,(MethodInfo *)0x0);
    if ((value->fields)._stringLength < 1) {
label_044e778b:
      if (unaff_R14 != (System_Text_StringBuilder_o *)0x0) goto label_044e77ba;
      goto label_044e7790;
    }
    if (unaff_R14 == (System_Text_StringBuilder_o *)0x0) {
      uVar3 = System_String__get_Chars(value,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar3 = System_Char__ToLowerInvariant(uVar3,(MethodInfo *)0x0);
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(ulong)uVar3;
      __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aec12 == '\0') {
        il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
        il2cpp_runtime_helper_023445d0(&"-text");
        g_data_057aec12 = '\x01';
      }
      pSVar6 = (pGVar7->fields).type;
      pSVar12 = (pGVar7->fields).id;
      pGVar11 = "-text";
      id = System_String__Concat_3ae5ba0(pSVar12,(System_String_o *)"-text",(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (__this_00,pSVar6,"profileInfoStatus",id,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar7;
      }
      il2cpp_runtime_helper_022b2c90();
      grid = pGVar11;
      str0 = (System_String_o **)pSVar12;
      if (g_data_057aec13 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-title");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"-info");
        il2cpp_runtime_helper_023445d0(&"creditsInfoIcon");
        il2cpp_runtime_helper_023445d0(&"UI/Icons/info-circle");
        str0 = &"creditsSubcategoryHeader";
        il2cpp_runtime_helper_023445d0();
        g_data_057aec13 = '\x01';
      }
      if (pSVar12->fields != (System_String_Fields)0x0) {
        pGVar7 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)pSVar12->fields + 0x10);
        str0 = (System_String_o **)pSVar12[1].klass;
        grid = "-title";
        pSVar6 = System_String__Concat_3ae5ba0
                           ((System_String_o *)str0,(System_String_o *)"-title",(MethodInfo *)0x0);
        if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar11,(System_String_o *)pGVar7,
                              "creditsSubcategoryHeader",pSVar6,(System_String_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          unaff_R12 = &"Column";
          grid = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
          str0 = (System_String_o **)"Column";
          pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar8,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            str0 = (System_String_o **)&(pGVar7->fields).search;
            (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
            il2cpp_runtime_helper_022b4080();
            grid = pGVar9;
            if (pSVar12->fields != (System_String_Fields)0x0) {
              bVar4 = System_String__IsNullOrEmpty
                                (*(System_String_o **)((long)pSVar12->fields + 0x18),(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                return (System_String_o *)CONCAT44(extraout_var,bVar4);
              }
              pSVar6 = System_String__Concat_3ae5ba0
                                 ((System_String_o *)pSVar12[1].klass,"-info",(MethodInfo *)0x0);
              pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Image
                                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar11,"UI/Icons/info-circle","creditsInfoIcon",
                                   pSVar6,(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0)
              ;
              pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
              height = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
              grid = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
              str0 = (System_String_o **)"Column";
              pGVar11 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                  ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                   (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar8,height,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                   (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                   0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
              if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar11;
                pSVar6 = (System_String_o *)il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar11);
                return pSVar6;
              }
            }
          }
        }
      }
      uStack_110 = il2cpp_runtime_helper_022b2c90();
      pGStack_108 = pGVar7;
      ppSStack_100 = unaff_R12;
      if (g_data_057aec14 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgCreditContributor);
        il2cpp_runtime_helper_023445d0();
        g_data_057aec14 = '\x01';
      }
      uStack_110 = uStack_110 & 0xffffffff;
      SVar16 = ((System_String_o *)str0)->fields;
      if (SVar16 != (System_String_Fields)0x0) {
        iVar17 = 0;
        do {
          lVar14 = *(long *)SVar16;
          if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
            lVar18 = 0;
            do {
              if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar18) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                puVar13 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar18) * 0x10 + lVar14 + 0x138);
                goto label_044e7ca3;
              }
              lVar18 = lVar18 + 0x10;
            } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar18);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar16,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e7ca3:
          pSVar6 = (System_String_o *)(*(code *)*puVar13)(SVar16,puVar13[1]);
          if ((int)pSVar6 <= iVar17) {
            return pSVar6;
          }
          SVar16 = ((System_String_o *)str0)->fields;
          if (SVar16 == (System_String_Fields)0x0) break;
          uVar19 = uStack_110._4_4_;
          lVar14 = *(long *)SVar16;
          if ((ulong)*(ushort *)(lVar14 + 0x12e) != 0) {
            lVar18 = 0;
            do {
              if (*(long *)(*(long *)(lVar14 + 0xb0) + lVar18) == TypeInfo_IReadOnlyList_AottgCreditContributor) {
                puVar13 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar14 + 0xb0) + 8 + lVar18) * 0x10 + lVar14 + 0x138);
                goto label_044e7bed;
              }
              lVar18 = lVar18 + 0x10;
            } while ((ulong)*(ushort *)(lVar14 + 0x12e) << 4 != lVar18);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar16,TypeInfo_IReadOnlyList_AottgCreditContributor,0);
label_044e7bed:
          contributor = (ApplicationManagers_Credits_AottgCreditContributor_o *)
                        (*(code *)*puVar13)(SVar16,uVar19,puVar13[1]);
          pSVar6 = (System_String_o *)((System_String_o *)((long)str0 + 0x18))->klass;
          pSVar12 = System_Int32__ToString((int)&uStack_110 + 4,(MethodInfo *)0x0);
          pMVar15 = (MethodInfo *)0x0;
          pSVar6 = System_String__Concat_3af7150(pSVar6,"-",pSVar12,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)grid,contributor,pSVar6,pMVar15);
          iVar17 = uStack_110._4_4_ + 1;
          uStack_110 = CONCAT44(iVar17,(undefined4)uStack_110);
          SVar16 = ((System_String_o *)str0)->fields;
        } while (SVar16 != (System_String_Fields)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
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
      lVar14 = il2cpp_runtime_helper_022b2a40(TypeInfo_AottgBrushSidePanelOption,1);
      uVar24 = 0;
      uVar25 = 0;
      SVar16._stringLength = 0;
      SVar16._firstChar = 0;
      SVar16._6_2_ = 0;
      uVar23 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
                ((Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o)ZEXT848(0),
                 (System_String_o *)&stack0xfffffffffffffe88,"BACK","screen.main-menu","return");
      if (lVar14 == 0) {
        il2cpp_runtime_helper_022b2c90();
      }
      else if (*(int *)(lVar14 + 0x18) != 0) {
        iStack_138 = SVar16._stringLength;
        uStack_134 = SVar16._4_4_;
        uStack_130 = (undefined4)uVar23;
        uStack_12c = (undefined4)((ulong)uVar23 >> 0x20);
        uStack_128 = (undefined4)uVar24;
        uStack_124 = (undefined4)((ulong)uVar24 >> 0x20);
        uStack_120 = (undefined4)uVar25;
        uStack_11c = (undefined4)((ulong)uVar25 >> 0x20);
        *(undefined4 *)(lVar14 + 0x40) = uStack_128;
        *(undefined4 *)(lVar14 + 0x44) = uStack_124;
        *(undefined4 *)(lVar14 + 0x48) = uStack_120;
        *(undefined4 *)(lVar14 + 0x4c) = uStack_11c;
        *(int32_t *)(lVar14 + 0x30) = iStack_138;
        *(undefined4 *)(lVar14 + 0x34) = uStack_134;
        *(undefined4 *)(lVar14 + 0x38) = uStack_130;
        *(undefined4 *)(lVar14 + 0x3c) = uStack_12c;
        *(undefined4 *)(lVar14 + 0x20) = uVar19;
        *(undefined4 *)(lVar14 + 0x24) = uVar20;
        *(undefined4 *)(lVar14 + 0x28) = uVar21;
        *(undefined4 *)(lVar14 + 0x2c) = uVar22;
        il2cpp_runtime_helper_022b4080(lVar14 + 0x20,0);
        **(long **)(TypeInfo_AottgCreditsScreen + 0xb8) = lVar14;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsScreen + 0xb8),lVar14);
        if (*(int *)(TypeInfo_AottgPublicProfileHover + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4) != 0) {
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(TypeInfo_AottgHoverMarqueeText);
          return extraout_RAX;
        }
        pMVar15 = TypeInfo_AottgHoverMarqueeText;
        il2cpp_runtime_helper_02337ed0();
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(pMVar15);
        return extraout_RAX_00;
      }
      il2cpp_runtime_helper_022b2ca0();
      if (g_data_057aec29 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildRuntime);
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgHoverMarqueeText);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
        il2cpp_runtime_helper_023445d0(&"AottgHoverMarqueeText");
        g_data_057aec29 = '\x01';
        iVar17 = *(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4);
      }
      else {
        iVar17 = *(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4);
      }
      if (iVar17 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar6 = (System_String_o *)TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer;
        cVar1 = *(code *)&pSVar6->klass;
      }
      else {
        pSVar6 = (System_String_o *)TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer;
        cVar1 = *(code *)&pSVar6->klass;
      }
      if (cVar1 == (code)0x0) {
        if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
                 **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
        factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
        Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
        if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
          Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
                    (__this,"AottgHoverMarqueeText",factory,(MethodInfo *)0x0);
          if (*(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_String_o *)TypeInfo_AottgHoverMarqueeText[2].virtualMethodPointer;
          *(code *)&pSVar6->klass = (code)0x1;
          return pSVar6;
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057aec16 == '\0') {
          il2cpp_runtime_helper_023445d0(&"mainMenuOverlay");
          g_data_057aec16 = '\x01';
        }
        return "mainMenuOverlay";
      }
      return pSVar6;
    }
    bVar2 = false;
    iVar17 = 0;
    do {
      while( true ) {
        uVar3 = System_String__get_Chars(value,iVar17,(MethodInfo *)0x0);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar3 = System_Char__ToLowerInvariant(uVar3,(MethodInfo *)0x0);
        bVar4 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') break;
        bVar2 = false;
        System_Text_StringBuilder__Append_3b048f0(unaff_R14,uVar3,(MethodInfo *)0x0);
label_044e770f:
        iVar17 = iVar17 + 1;
        if ((value->fields)._stringLength <= iVar17) goto label_044e7785;
      }
      if ((bVar2) || (iVar5 = System_Text_StringBuilder__get_Length(unaff_R14,(MethodInfo *)0x0), iVar5 < 1))
      goto label_044e770f;
      System_Text_StringBuilder__Append_3b048f0(unaff_R14,0x2d,(MethodInfo *)0x0);
      bVar2 = true;
      iVar17 = iVar17 + 1;
    } while (iVar17 < (value->fields)._stringLength);
label_044e7785:
    if (!bVar2) goto label_044e778b;
  }
  iVar5 = System_Text_StringBuilder__get_Length(unaff_R14,(MethodInfo *)0x0);
  if (0 < iVar5) {
    iVar5 = System_Text_StringBuilder__get_Length(unaff_R14,(MethodInfo *)0x0);
    System_Text_StringBuilder__set_Length(unaff_R14,iVar5 + -1,(MethodInfo *)0x0);
  }
label_044e77ba:
  pSVar6 = (System_String_o *)
           (*(unaff_R14->klass->vtable)._3_ToString.methodPtr)
                     (unaff_R14,(unaff_R14->klass->vtable)._3_ToString.method);
  return pSVar6;
}



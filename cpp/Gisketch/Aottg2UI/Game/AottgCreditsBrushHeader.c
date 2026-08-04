// Type: Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsBrushHeader.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader___ctor (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o* __this, System_String_o* id, System_String_o* text, const MethodInfo* method);
// 0x44e5d70

void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *__this,System_String_o *id,
               System_String_o *text,MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  bool_conflict bVar3;
  int iVar4;
  int iVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  System_String_o *id_00;
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
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar18;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  System_String_o *pSVar19;
  undefined8 uVar20;
  long lVar21;
  int iStack_144;
  System_String_Fields SStack_140;
  System_String_Fields SStack_138;
  int iStack_130;
  int iStack_12c;
  System_String_Fields SStack_128;
  System_Action_AottgUi__o *pSStack_120;
  System_String_Fields in_stack_ffffffffffffff20;
  
  if (g_data_057aec05 == '\0') {
    il2cpp_runtime_helper_023445d0(&"credits-category-header");
    g_data_057aec05 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pSVar12 = id;
  bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    id = (System_String_o *)"credits-category-header";
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *)0x0) {
    (__this->fields)._id = id;
    il2cpp_runtime_helper_022b4080(&__this->fields,id);
    if (text == (System_String_o *)0x0) {
      text = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    (__this->fields)._text = text;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._text,text);
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
  pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  SVar16 = pSVar12->fields;
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
  __this_01 = "FlexStart";
  SVar11 = "Column";
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)"FlexStart",
                      (System_String_o *)"FlexStart",(System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7
                      ,pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar18 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar18,"creditsCategoryHeader",pSVar6,(System_String_o *)SVar16,pGVar9,
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
  pSVar19 = "-text";
  id_00 = System_String__Concat_3ae5ba0((System_String_o *)SVar16,"-text",(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (__this_01,pSVar12,"creditsCategoryHeaderText",id_00,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_ffffffffffffff20._stringLength = 0;
    in_stack_ffffffffffffff20._firstChar = 0;
    in_stack_ffffffffffffff20._6_2_ = 0;
    pSVar19 = (System_String_o *)0x0;
    SVar16 = "Column";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
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
      (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar9);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SStack_138 = SVar16;
  SStack_128 = SVar11;
  pSStack_120 = pSVar6;
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
  iStack_144 = 0;
  SVar16 = "-core-header";
  SStack_140 = in_stack_ffffffffffffff20;
  SVar11 = (System_String_Fields)
           System_String__Concat_3ae5ba0
                     ((System_String_o *)in_stack_ffffffffffffff20,(System_String_o *)"-core-header",
                      (MethodInfo *)0x0);
  if (pSVar19 != (System_String_o *)0x0) {
    SVar17 = pSVar19->fields;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    SVar16._stringLength = 0;
    SVar16._firstChar = 0;
    SVar16._6_2_ = 0;
    in_stack_ffffffffffffff20 = SVar11;
    bVar3 = System_String__IsNullOrEmpty((System_String_o *)SVar11,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      SVar11 = "credits-category-header";
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this_00[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)SVar11;
      il2cpp_runtime_helper_022b4080(__this_00 + 1,SVar11);
      if (SVar17 == (System_String_Fields)0x0) {
        SVar17 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      in_stack_ffffffffffffff20 = (System_String_Fields)&__this_00[1].monitor;
      __this_00[1].monitor = (void *)SVar17;
      il2cpp_runtime_helper_022b4080();
      SVar11 = SStack_138;
      SVar16 = SVar17;
      if (SStack_138 != (System_String_Fields)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)SStack_138,__this_00,(MethodInfo *)0x0);
        in_stack_ffffffffffffff20 = (System_String_Fields)pSVar19[1].klass;
        SVar16._stringLength = 0;
        SVar16._firstChar = 0;
        SVar16._6_2_ = 0;
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)in_stack_ffffffffffffff20,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          SVar16 = (System_String_Fields)pSVar19[1].klass;
          pSVar12 = System_String__Concat_3ae5ba0
                              ((System_String_o *)SStack_140,"-description",(MethodInfo *)0x0);
          in_stack_ffffffffffffff20 = SVar11;
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
          in_stack_ffffffffffffff20 = SVar13;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)SVar13,(MethodInfo *)0x0);
          SVar17 = "credits.refreshing";
          if (SVar13 == (System_String_Fields)0x0) goto label_044e66c5;
          in_stack_ffffffffffffff20 = (System_String_Fields)((long)SVar13 + 0x20);
          *(System_String_Fields *)((long)SVar13 + 0x20) = "credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          SVar16 = SVar17;
          if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          in_stack_ffffffffffffff20 = (System_String_Fields)&(pGVar10->fields).contentLayout;
          (pGVar10->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar13;
          il2cpp_runtime_helper_022b4080();
          SVar16 = SVar13;
        }
        SVar17 = (System_String_Fields)pSVar19[1].monitor;
        if (SVar17 != (System_String_Fields)0x0) {
          lVar2 = *(long *)SVar17;
          if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
            lVar21 = 0;
            do {
              if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                puVar14 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar21) * 0x10 + lVar2 + 0x138);
                goto label_044e6411;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar21);
          }
          puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar17,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          SVar16 = *(System_String_Fields *)(puVar14 + 1);
          iVar4 = (*(code *)*puVar14)();
          SVar13 = pSVar19[1].fields;
          in_stack_ffffffffffffff20 = SVar17;
          if (SVar13 != (System_String_Fields)0x0) {
            lVar2 = *(long *)SVar13;
            if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
              lVar21 = 0;
              do {
                if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar15 = (MethodInfo *)
                            ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar21) * 0x10 + lVar2 + 0x138);
                  goto label_044e6481;
                }
                lVar21 = lVar21 + 0x10;
              } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar21);
            }
            pMVar15 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar13,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            SVar16 = (System_String_Fields)pMVar15->virtualMethodPointer;
            iStack_12c = (*pMVar15->methodPointer)();
            in_stack_ffffffffffffff20 = SVar13;
            iStack_130 = iVar4;
            if (0 < iVar4) {
              SVar16 = (System_String_Fields)pSVar19[1].monitor;
              pSVar12 = System_String__Concat_3ae5ba0
                                  ((System_String_o *)SStack_140,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)SVar16,pSVar12,
                         pMVar15);
              in_stack_ffffffffffffff20 = SVar11;
            }
            SVar17 = SStack_138;
            iStack_144 = 0;
            SVar11 = pSVar19[1].fields;
            if (SVar11 != (System_String_Fields)0x0) {
              do {
                iVar4 = iStack_144;
                lVar2 = *(long *)SVar11;
                if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
                  lVar21 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      puVar14 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar21) * 0x10 + lVar2 + 0x138);
                      goto label_044e65b3;
                    }
                    lVar21 = lVar21 + 0x10;
                  } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar21);
                }
                puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar11,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar5 = (*(code *)*puVar14)(SVar11);
                SVar16 = SStack_138;
                if (iVar5 <= iVar4) {
                  if ((iStack_12c < 1) && (iStack_130 < 1)) {
                    pSVar12 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)SStack_140,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar16,pSVar12,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar12 = System_Int32__ToString((int32_t)&iStack_144,(MethodInfo *)0x0);
                SVar16 = (System_String_Fields)
                         System_String__Concat_3af7470
                                   ((System_String_o *)SStack_140,"-group-",pSVar12,"-gap",
                                    (MethodInfo *)0x0);
                in_stack_ffffffffffffff20 = SVar17;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,(System_String_o *)SVar16,method_00);
                iVar4 = iStack_144;
                SVar11 = pSVar19[1].fields;
                if (SVar11 == (System_String_Fields)0x0) break;
                lVar2 = *(long *)SVar11;
                if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
                  lVar21 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar21) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      puVar14 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar21) * 0x10 + lVar2 + 0x138);
                      goto label_044e64fd;
                    }
                    lVar21 = lVar21 + 0x10;
                  } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar21);
                }
                puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar11,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                SVar16 = (System_String_Fields)(*(code *)*puVar14)(SVar11,iVar4,puVar14[1]);
                pSVar12 = System_Int32__ToString((int32_t)&iStack_144,(MethodInfo *)0x0);
                pMVar15 = (MethodInfo *)0x0;
                pSVar12 = System_String__Concat_3af7150
                                    ((System_String_o *)SStack_140,"-group-",pSVar12,(MethodInfo *)0x0);
                in_stack_ffffffffffffff20 = SVar17;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)SVar16,pSVar12,pMVar15);
                iStack_144 = iStack_144 + 1;
                SVar11 = pSVar19[1].fields;
              } while (SVar11 != (System_String_Fields)0x0);
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
    *(undefined8 *)((long)SVar17 + 0x18) = extraout_RDX;
    il2cpp_runtime_helper_022b4080((long)SVar17 + 0x18,extraout_RDX);
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar19 = *(System_String_o **)((long)SVar17 + 0x18);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar12 = (System_String_o *)0x0;
    SVar11 = "Row";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)0x0,(System_String_o *)"FlexStart"
                        ,(System_String_o *)0x0,"Wrap",10.0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (in_stack_ffffffffffffff20 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)in_stack_ffffffffffffff20,(System_String_o *)"default"
                 ,pSVar6,pSVar19,pGVar9,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
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
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  uVar20 = 0;
  SVar16 = "Column";
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (SVar11 != (System_String_Fields)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,(System_String_o *)"default",
               (System_Action_AottgUi__o *)0x0,pSVar12,pGVar9,
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
  pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  SVar11 = SVar17;
  System_Object___ctor((Il2CppObject *)SVar17,(MethodInfo *)0x0);
  if (SVar17 != (System_String_Fields)0x0) {
    plVar1 = (long *)((long)SVar17 + 0x10);
    *(undefined8 *)((long)SVar17 + 0x10) = uVar20;
    il2cpp_runtime_helper_022b4080(plVar1,uVar20);
    puVar14 = (undefined8 *)((long)SVar17 + 0x18);
    *(undefined8 *)((long)SVar17 + 0x18) = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(puVar14,extraout_RDX_00);
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar12 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)SVar17 + 0x18),"-header",(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar18 = "FlexStart";
    SVar11 = "Row";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (SVar16 != (System_String_Fields)0x0) {
      pGVar18 = "default";
      SVar11 = SVar16;
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar16,(System_String_o *)"default",pSVar6,
                           pSVar12,pGVar9,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
      if ((*plVar1 != 0) && (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pGVar18 = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(*plVar1 + 0x18);
        SVar11 = (System_String_Fields)&(pGVar10->fields).choiceOptionRenderer;
        (pGVar10->fields).choiceOptionRenderer = (System_String_o *)pGVar18;
        il2cpp_runtime_helper_022b4080();
        if ((*plVar1 != 0) &&
           (SVar17 = *(System_String_Fields *)(*plVar1 + 0x20), SVar17 != (System_String_Fields)0x0)) {
          lVar2 = *(long *)SVar17;
          if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
            lVar21 = 0;
            do {
              if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                pMVar15 = (MethodInfo *)
                          ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar21) * 0x10 + lVar2 + 0x138);
                goto label_044e6c71;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar21);
          }
          pMVar15 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar17,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pGVar18 = (Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar15->virtualMethodPointer;
          iVar4 = (*pMVar15->methodPointer)();
          if (iVar4 < 1) {
            pSVar12 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*puVar14,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar16,pSVar12,"No contributors listed.",
                       (MethodInfo *)&"No contributors listed.");
            return;
          }
          SVar11 = SVar17;
          if (*plVar1 != 0) {
            contributors = *(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o **)
                            (*plVar1 + 0x20);
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
    *(undefined8 *)((long)SVar17 + 0x10) = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080((long)SVar17 + 0x10,extraout_RDX_01);
    *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)SVar17 + 0x18) = pGVar18;
    il2cpp_runtime_helper_022b4080((long)SVar17 + 0x18,pGVar18);
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar12 = *(System_String_o **)((long)SVar17 + 0x18);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    SVar16 = "Column";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (SVar11 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,(System_String_o *)"default",pSVar6,pSVar12,
                 pGVar9,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)SVar16,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader__Build (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44e5e10

void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader__Build
               (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  bool_conflict bVar3;
  int iVar4;
  int iVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  System_String_o *id;
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
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  System_String_o *pSVar18;
  undefined8 uVar19;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar20;
  long lVar21;
  int iStack_12c;
  System_String_Fields SStack_128;
  System_String_Fields SStack_120;
  int iStack_118;
  int iStack_114;
  System_String_Fields SStack_110;
  System_Action_AottgUi__o *pSStack_108;
  System_String_Fields in_stack_ffffffffffffff38;
  
  if (g_data_057aec06 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__3_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"creditsCategoryHeader");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aec06 = '\x01';
  }
  pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar12 = (__this->fields)._id;
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
  pGVar20 = "FlexStart";
  SVar11 = "Column";
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)"FlexStart",
                      (System_String_o *)"FlexStart",(System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7
                      ,pGVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"creditsCategoryHeader",pSVar6,pSVar12,pGVar9,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
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
  pSVar18 = "-text";
  id = System_String__Concat_3ae5ba0((System_String_o *)SVar16,"-text",(MethodInfo *)0x0);
  if (pGVar20 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Text
                        (pGVar20,pSVar12,"creditsCategoryHeaderText",id,(System_String_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_ffffffffffffff38._stringLength = 0;
    in_stack_ffffffffffffff38._firstChar = 0;
    in_stack_ffffffffffffff38._6_2_ = 0;
    pSVar18 = (System_String_o *)0x0;
    SVar16 = "Column";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
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
      (pGVar10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar10->fields).search,pGVar9);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SStack_120 = SVar16;
  SStack_110 = SVar11;
  pSStack_108 = pSVar6;
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
  iStack_12c = 0;
  SVar16 = "-core-header";
  SStack_128 = in_stack_ffffffffffffff38;
  SVar11 = (System_String_Fields)
           System_String__Concat_3ae5ba0
                     ((System_String_o *)in_stack_ffffffffffffff38,(System_String_o *)"-core-header",
                      (MethodInfo *)0x0);
  if (pSVar18 != (System_String_o *)0x0) {
    SVar17 = pSVar18->fields;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    SVar16._stringLength = 0;
    SVar16._firstChar = 0;
    SVar16._6_2_ = 0;
    in_stack_ffffffffffffff38 = SVar11;
    bVar3 = System_String__IsNullOrEmpty((System_String_o *)SVar11,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      SVar11 = "credits-category-header";
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this_00[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)SVar11;
      il2cpp_runtime_helper_022b4080(__this_00 + 1,SVar11);
      if (SVar17 == (System_String_Fields)0x0) {
        SVar17 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      in_stack_ffffffffffffff38 = (System_String_Fields)&__this_00[1].monitor;
      __this_00[1].monitor = (void *)SVar17;
      il2cpp_runtime_helper_022b4080();
      SVar11 = SStack_120;
      SVar16 = SVar17;
      if (SStack_120 != (System_String_Fields)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)SStack_120,__this_00,(MethodInfo *)0x0);
        in_stack_ffffffffffffff38 = (System_String_Fields)pSVar18[1].klass;
        SVar16._stringLength = 0;
        SVar16._firstChar = 0;
        SVar16._6_2_ = 0;
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)in_stack_ffffffffffffff38,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          SVar16 = (System_String_Fields)pSVar18[1].klass;
          pSVar12 = System_String__Concat_3ae5ba0
                              ((System_String_o *)SStack_128,"-description",(MethodInfo *)0x0);
          in_stack_ffffffffffffff38 = SVar11;
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
          in_stack_ffffffffffffff38 = SVar13;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)SVar13,(MethodInfo *)0x0);
          SVar17 = "credits.refreshing";
          if (SVar13 == (System_String_Fields)0x0) goto label_044e66c5;
          in_stack_ffffffffffffff38 = (System_String_Fields)((long)SVar13 + 0x20);
          *(System_String_Fields *)((long)SVar13 + 0x20) = "credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          SVar16 = SVar17;
          if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          in_stack_ffffffffffffff38 = (System_String_Fields)&(pGVar10->fields).contentLayout;
          (pGVar10->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar13;
          il2cpp_runtime_helper_022b4080();
          SVar16 = SVar13;
        }
        SVar17 = (System_String_Fields)pSVar18[1].monitor;
        if (SVar17 != (System_String_Fields)0x0) {
          lVar2 = *(long *)SVar17;
          if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
            lVar21 = 0;
            do {
              if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                puVar14 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar21) * 0x10 + lVar2 + 0x138);
                goto label_044e6411;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar21);
          }
          puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar17,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          SVar16 = *(System_String_Fields *)(puVar14 + 1);
          iVar4 = (*(code *)*puVar14)();
          SVar13 = pSVar18[1].fields;
          in_stack_ffffffffffffff38 = SVar17;
          if (SVar13 != (System_String_Fields)0x0) {
            lVar2 = *(long *)SVar13;
            if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
              lVar21 = 0;
              do {
                if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar15 = (MethodInfo *)
                            ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar21) * 0x10 + lVar2 + 0x138);
                  goto label_044e6481;
                }
                lVar21 = lVar21 + 0x10;
              } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar21);
            }
            pMVar15 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar13,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            SVar16 = (System_String_Fields)pMVar15->virtualMethodPointer;
            iStack_114 = (*pMVar15->methodPointer)();
            in_stack_ffffffffffffff38 = SVar13;
            iStack_118 = iVar4;
            if (0 < iVar4) {
              SVar16 = (System_String_Fields)pSVar18[1].monitor;
              pSVar12 = System_String__Concat_3ae5ba0
                                  ((System_String_o *)SStack_128,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)SVar16,pSVar12,
                         pMVar15);
              in_stack_ffffffffffffff38 = SVar11;
            }
            SVar17 = SStack_120;
            iStack_12c = 0;
            SVar11 = pSVar18[1].fields;
            if (SVar11 != (System_String_Fields)0x0) {
              do {
                iVar4 = iStack_12c;
                lVar2 = *(long *)SVar11;
                if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
                  lVar21 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      puVar14 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar21) * 0x10 + lVar2 + 0x138);
                      goto label_044e65b3;
                    }
                    lVar21 = lVar21 + 0x10;
                  } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar21);
                }
                puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar11,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar5 = (*(code *)*puVar14)(SVar11);
                SVar11 = SStack_120;
                if (iVar5 <= iVar4) {
                  if ((iStack_114 < 1) && (iStack_118 < 1)) {
                    pSVar12 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)SStack_128,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,pSVar12,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar12 = System_Int32__ToString((int32_t)&iStack_12c,(MethodInfo *)0x0);
                SVar16 = (System_String_Fields)
                         System_String__Concat_3af7470
                                   ((System_String_o *)SStack_128,"-group-",pSVar12,"-gap",
                                    (MethodInfo *)0x0);
                in_stack_ffffffffffffff38 = SVar17;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,(System_String_o *)SVar16,method_00);
                iVar4 = iStack_12c;
                SVar11 = pSVar18[1].fields;
                if (SVar11 == (System_String_Fields)0x0) break;
                lVar2 = *(long *)SVar11;
                if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
                  lVar21 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar21) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      puVar14 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar21) * 0x10 + lVar2 + 0x138);
                      goto label_044e64fd;
                    }
                    lVar21 = lVar21 + 0x10;
                  } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar21);
                }
                puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar11,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                SVar16 = (System_String_Fields)(*(code *)*puVar14)(SVar11,iVar4,puVar14[1]);
                pSVar12 = System_Int32__ToString((int32_t)&iStack_12c,(MethodInfo *)0x0);
                pMVar15 = (MethodInfo *)0x0;
                pSVar12 = System_String__Concat_3af7150
                                    ((System_String_o *)SStack_128,"-group-",pSVar12,(MethodInfo *)0x0);
                in_stack_ffffffffffffff38 = SVar17;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar17,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)SVar16,pSVar12,pMVar15);
                iStack_12c = iStack_12c + 1;
                SVar11 = pSVar18[1].fields;
              } while (SVar11 != (System_String_Fields)0x0);
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
    *(undefined8 *)((long)SVar17 + 0x18) = extraout_RDX;
    il2cpp_runtime_helper_022b4080((long)SVar17 + 0x18,extraout_RDX);
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar18 = *(System_String_o **)((long)SVar17 + 0x18);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar12 = (System_String_o *)0x0;
    SVar11 = "Row";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)0x0,(System_String_o *)"FlexStart"
                        ,(System_String_o *)0x0,"Wrap",10.0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (in_stack_ffffffffffffff38 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)in_stack_ffffffffffffff38,(System_String_o *)"default"
                 ,pSVar6,pSVar18,pGVar9,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
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
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  uVar19 = 0;
  SVar16 = "Column";
  pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (SVar11 != (System_String_Fields)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,(System_String_o *)"default",
               (System_Action_AottgUi__o *)0x0,pSVar12,pGVar9,
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
  pGVar20 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  SVar11 = SVar17;
  System_Object___ctor((Il2CppObject *)SVar17,(MethodInfo *)0x0);
  if (SVar17 != (System_String_Fields)0x0) {
    plVar1 = (long *)((long)SVar17 + 0x10);
    *(undefined8 *)((long)SVar17 + 0x10) = uVar19;
    il2cpp_runtime_helper_022b4080(plVar1,uVar19);
    puVar14 = (undefined8 *)((long)SVar17 + 0x18);
    *(undefined8 *)((long)SVar17 + 0x18) = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(puVar14,extraout_RDX_00);
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar12 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)SVar17 + 0x18),"-header",(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar20 = "FlexStart";
    SVar11 = "Row";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)"FlexStart","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,7.0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (SVar16 != (System_String_Fields)0x0) {
      pGVar20 = "default";
      SVar11 = SVar16;
      pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar16,(System_String_o *)"default",pSVar6,
                           pSVar12,pGVar9,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                           (MethodInfo *)0x0);
      if ((*plVar1 != 0) && (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pGVar20 = *(Gisketch_Aottg2UI_Code_AottgUi_o **)(*plVar1 + 0x18);
        SVar11 = (System_String_Fields)&(pGVar10->fields).choiceOptionRenderer;
        (pGVar10->fields).choiceOptionRenderer = (System_String_o *)pGVar20;
        il2cpp_runtime_helper_022b4080();
        if ((*plVar1 != 0) &&
           (SVar17 = *(System_String_Fields *)(*plVar1 + 0x20), SVar17 != (System_String_Fields)0x0)) {
          lVar2 = *(long *)SVar17;
          if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
            lVar21 = 0;
            do {
              if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                pMVar15 = (MethodInfo *)
                          ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar21) * 0x10 + lVar2 + 0x138);
                goto label_044e6c71;
              }
              lVar21 = lVar21 + 0x10;
            } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar21);
          }
          pMVar15 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar17,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pGVar20 = (Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar15->virtualMethodPointer;
          iVar4 = (*pMVar15->methodPointer)();
          if (iVar4 < 1) {
            pSVar12 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*puVar14,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar16,pSVar12,"No contributors listed.",
                       (MethodInfo *)&"No contributors listed.");
            return;
          }
          SVar11 = SVar17;
          if (*plVar1 != 0) {
            contributors = *(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o **)
                            (*plVar1 + 0x20);
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
    *(undefined8 *)((long)SVar17 + 0x10) = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080((long)SVar17 + 0x10,extraout_RDX_01);
    *(Gisketch_Aottg2UI_Code_AottgUi_o **)((long)SVar17 + 0x18) = pGVar20;
    il2cpp_runtime_helper_022b4080((long)SVar17 + 0x18,pGVar20);
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar12 = *(System_String_o **)((long)SVar17 + 0x18);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    SVar16 = "Column";
    pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (SVar11 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar11,(System_String_o *)"default",pSVar6,pSVar12,
                 pGVar9,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)SVar16,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$<Build>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader___Build_b__3_0 (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x44e5f80

void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader___Build_b__3_0
               (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  bool_conflict bVar3;
  int iVar4;
  int iVar5;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_Fields SVar9;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  System_String_o *pSVar10;
  System_String_Fields SVar11;
  undefined8 *puVar12;
  MethodInfo *pMVar13;
  System_String_Fields SVar14;
  System_String_Fields SVar15;
  System_Action_AottgUi__o *pSVar16;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  int extraout_EDX;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  System_String_o *pSVar17;
  undefined8 uVar18;
  long lVar19;
  int iStack_b4;
  System_String_Fields SStack_b0;
  System_String_Fields SStack_a8;
  int iStack_a0;
  int iStack_9c;
  Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *pGStack_98;
  System_String_Fields in_stack_ffffffffffffffb0;
  
  if (g_data_057aec07 == '\0') {
    il2cpp_runtime_helper_023445d0(&"creditsCategoryHeaderText");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aec07 = '\x01';
  }
  SVar14 = (System_String_Fields)(__this->fields)._id;
  pSVar10 = (__this->fields)._text;
  pSVar17 = "-text";
  id = System_String__Concat_3ae5ba0((System_String_o *)SVar14,"-text",(MethodInfo *)0x0);
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (header,pSVar10,"creditsCategoryHeaderText",id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    in_stack_ffffffffffffffb0._stringLength = 0;
    in_stack_ffffffffffffffb0._firstChar = 0;
    in_stack_ffffffffffffffb0._6_2_ = 0;
    pSVar17 = (System_String_o *)0x0;
    SVar14 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    __this = (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *)0x0;
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,pGVar8);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  SStack_a8 = SVar14;
  pGStack_98 = __this;
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
  iStack_b4 = 0;
  SVar14 = "-core-header";
  SStack_b0 = in_stack_ffffffffffffffb0;
  SVar9 = (System_String_Fields)
          System_String__Concat_3ae5ba0
                    ((System_String_o *)in_stack_ffffffffffffffb0,(System_String_o *)"-core-header",
                     (MethodInfo *)0x0);
  if (pSVar17 != (System_String_o *)0x0) {
    SVar15 = pSVar17->fields;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsBrushHeader);
    if (g_data_057aec05 == '\0') {
      il2cpp_runtime_helper_023445d0(&"credits-category-header");
      g_data_057aec05 = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    SVar14._stringLength = 0;
    SVar14._firstChar = 0;
    SVar14._6_2_ = 0;
    in_stack_ffffffffffffffb0 = SVar9;
    bVar3 = System_String__IsNullOrEmpty((System_String_o *)SVar9,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      SVar9 = "credits-category-header";
    }
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this_00[1].klass = (Gisketch_Aottg2UI_Code_AottgComponent_c *)SVar9;
      il2cpp_runtime_helper_022b4080(__this_00 + 1,SVar9);
      if (SVar15 == (System_String_Fields)0x0) {
        SVar15 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      in_stack_ffffffffffffffb0 = (System_String_Fields)&__this_00[1].monitor;
      __this_00[1].monitor = (void *)SVar15;
      il2cpp_runtime_helper_022b4080();
      SVar9 = SStack_a8;
      SVar14 = SVar15;
      if (SStack_a8 != (System_String_Fields)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)SStack_a8,__this_00,(MethodInfo *)0x0);
        in_stack_ffffffffffffffb0 = (System_String_Fields)pSVar17[1].klass;
        SVar14._stringLength = 0;
        SVar14._firstChar = 0;
        SVar14._6_2_ = 0;
        bVar3 = System_String__IsNullOrEmpty((System_String_o *)in_stack_ffffffffffffffb0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          SVar14 = (System_String_Fields)pSVar17[1].klass;
          pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)SStack_b0,"-description",(MethodInfo *)0x0)
          ;
          in_stack_ffffffffffffffb0 = SVar9;
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar9,(System_String_o *)SVar14,"text",pSVar10,
                     (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                     (MethodInfo *)0x0);
        }
        if (extraout_EDX == 0) {
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar9,"Refreshing credits...","profileInfoStatus","credits-refreshing-text"
                              ,(System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
                              ,(MethodInfo *)0x0);
          SVar11 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
          SVar14._stringLength = 0;
          SVar14._firstChar = 0;
          SVar14._6_2_ = 0;
          in_stack_ffffffffffffffb0 = SVar11;
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)SVar11,(MethodInfo *)0x0);
          SVar15 = "credits.refreshing";
          if (SVar11 == (System_String_Fields)0x0) goto label_044e66c5;
          in_stack_ffffffffffffffb0 = (System_String_Fields)((long)SVar11 + 0x20);
          *(System_String_Fields *)((long)SVar11 + 0x20) = "credits.refreshing";
          il2cpp_runtime_helper_022b4080();
          SVar14 = SVar15;
          if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_044e66c5;
          in_stack_ffffffffffffffb0 = (System_String_Fields)&(pGVar6->fields).contentLayout;
          (pGVar6->fields).contentLayout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar11;
          il2cpp_runtime_helper_022b4080();
          SVar14 = SVar11;
        }
        SVar15 = (System_String_Fields)pSVar17[1].monitor;
        if (SVar15 != (System_String_Fields)0x0) {
          lVar2 = *(long *)SVar15;
          if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
            lVar19 = 0;
            do {
              if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar19) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                puVar12 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar19) * 0x10 + lVar2 + 0x138);
                goto label_044e6411;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar19);
          }
          puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar15,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6411:
          SVar14 = *(System_String_Fields *)(puVar12 + 1);
          iVar4 = (*(code *)*puVar12)();
          SVar11 = pSVar17[1].fields;
          in_stack_ffffffffffffffb0 = SVar15;
          if (SVar11 != (System_String_Fields)0x0) {
            lVar2 = *(long *)SVar11;
            if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
              lVar19 = 0;
              do {
                if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar19) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar13 = (MethodInfo *)
                            ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar19) * 0x10 + lVar2 + 0x138);
                  goto label_044e6481;
                }
                lVar19 = lVar19 + 0x10;
              } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar19);
            }
            pMVar13 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar11,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e6481:
            SVar14 = (System_String_Fields)pMVar13->virtualMethodPointer;
            iStack_9c = (*pMVar13->methodPointer)();
            in_stack_ffffffffffffffb0 = SVar11;
            iStack_a0 = iVar4;
            if (0 < iVar4) {
              SVar14 = (System_String_Fields)pSVar17[1].monitor;
              pSVar10 = System_String__Concat_3ae5ba0
                                  ((System_String_o *)SStack_b0,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar9,
                         (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)SVar14,pSVar10,
                         pMVar13);
              in_stack_ffffffffffffffb0 = SVar9;
            }
            SVar15 = SStack_a8;
            iStack_b4 = 0;
            SVar9 = pSVar17[1].fields;
            if (SVar9 != (System_String_Fields)0x0) {
              do {
                iVar4 = iStack_b4;
                lVar2 = *(long *)SVar9;
                if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
                  lVar19 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar19) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      puVar12 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar19) * 0x10 + lVar2 + 0x138);
                      goto label_044e65b3;
                    }
                    lVar19 = lVar19 + 0x10;
                  } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar19);
                }
                puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar9,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
label_044e65b3:
                iVar5 = (*(code *)*puVar12)(SVar9);
                SVar14 = SStack_a8;
                if (iVar5 <= iVar4) {
                  if ((iStack_9c < 1) && (iStack_a0 < 1)) {
                    pSVar10 = System_String__Concat_3ae5ba0
                                        ((System_String_o *)SStack_b0,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar14,pSVar10,"No credits listed.",
                               (MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar10 = System_Int32__ToString((int32_t)&iStack_b4,(MethodInfo *)0x0);
                SVar14 = (System_String_Fields)
                         System_String__Concat_3af7470
                                   ((System_String_o *)SStack_b0,"-group-",pSVar10,"-gap",
                                    (MethodInfo *)0x0);
                in_stack_ffffffffffffffb0 = SVar15;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar15,(System_String_o *)SVar14,method_00);
                iVar4 = iStack_b4;
                SVar9 = pSVar17[1].fields;
                if (SVar9 == (System_String_Fields)0x0) break;
                lVar2 = *(long *)SVar9;
                if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
                  lVar19 = 0;
                  do {
                    if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar19) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      puVar12 = (undefined8 *)
                                ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar19) * 0x10 + lVar2 + 0x138);
                      goto label_044e64fd;
                    }
                    lVar19 = lVar19 + 0x10;
                  } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar19);
                }
                puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(SVar9,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
label_044e64fd:
                SVar14 = (System_String_Fields)(*(code *)*puVar12)(SVar9,iVar4,puVar12[1]);
                pSVar10 = System_Int32__ToString((int32_t)&iStack_b4,(MethodInfo *)0x0);
                pMVar13 = (MethodInfo *)0x0;
                pSVar10 = System_String__Concat_3af7150
                                    ((System_String_o *)SStack_b0,"-group-",pSVar10,(MethodInfo *)0x0);
                in_stack_ffffffffffffffb0 = SVar15;
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar15,
                           (ApplicationManagers_Credits_AottgCreditGroup_o *)SVar14,pSVar10,pMVar13);
                iStack_b4 = iStack_b4 + 1;
                SVar9 = pSVar17[1].fields;
              } while (SVar9 != (System_String_Fields)0x0);
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
  SVar15 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass6_0);
  pSVar10 = (System_String_o *)0x0;
  SVar9 = SVar15;
  System_Object___ctor((Il2CppObject *)SVar15,(MethodInfo *)0x0);
  if (SVar15 != (System_String_Fields)0x0) {
    *(System_String_Fields *)((long)SVar15 + 0x10) = SVar14;
    il2cpp_runtime_helper_022b4080((long)SVar15 + 0x10,SVar14);
    *(undefined8 *)((long)SVar15 + 0x18) = extraout_RDX;
    il2cpp_runtime_helper_022b4080((long)SVar15 + 0x18,extraout_RDX);
    pSVar16 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar17 = *(System_String_o **)((long)SVar15 + 0x18);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar10 = (System_String_o *)0x0;
    SVar9 = "Row";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row",(System_String_o *)0x0,"FlexStart",
                        (System_String_o *)0x0,"Wrap",10.0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (in_stack_ffffffffffffffb0 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)in_stack_ffffffffffffffb0,"default",pSVar16,pSVar17,
                 pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec0f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec0f = '\x01';
  }
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  uVar18 = 0;
  SVar14 = "Column";
  pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (SVar9 != (System_String_Fields)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar9,"default",(System_Action_AottgUi__o *)0x0,pSVar10,
               pGVar8,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
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
  SVar15 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass5_0);
  pSVar10 = (System_String_o *)0x0;
  SVar9 = SVar15;
  System_Object___ctor((Il2CppObject *)SVar15,(MethodInfo *)0x0);
  if (SVar15 != (System_String_Fields)0x0) {
    plVar1 = (long *)((long)SVar15 + 0x10);
    *(undefined8 *)((long)SVar15 + 0x10) = uVar18;
    il2cpp_runtime_helper_022b4080(plVar1,uVar18);
    puVar12 = (undefined8 *)((long)SVar15 + 0x18);
    *(undefined8 *)((long)SVar15 + 0x18) = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(puVar12,extraout_RDX_00);
    pSVar16 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar17 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)SVar15 + 0x18),"-header",(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar10 = "FlexStart";
    SVar9 = "Row";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Row","FlexStart","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,7.0,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (SVar14 != (System_String_Fields)0x0) {
      pSVar10 = "default";
      SVar9 = SVar14;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar14,"default",pSVar16,pSVar17,pGVar8,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((*plVar1 != 0) && (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pSVar10 = *(System_String_o **)(*plVar1 + 0x18);
        SVar9 = (System_String_Fields)&(pGVar6->fields).choiceOptionRenderer;
        (pGVar6->fields).choiceOptionRenderer = pSVar10;
        il2cpp_runtime_helper_022b4080();
        if ((*plVar1 != 0) &&
           (SVar15 = *(System_String_Fields *)(*plVar1 + 0x20), SVar15 != (System_String_Fields)0x0)) {
          lVar2 = *(long *)SVar15;
          if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
            lVar19 = 0;
            do {
              if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar19) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                pMVar13 = (MethodInfo *)
                          ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar19) * 0x10 + lVar2 + 0x138);
                goto label_044e6c71;
              }
              lVar19 = lVar19 + 0x10;
            } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar19);
          }
          pMVar13 = (MethodInfo *)il2cpp_runtime_helper_02300d20(SVar15,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
label_044e6c71:
          pSVar10 = (System_String_o *)pMVar13->virtualMethodPointer;
          iVar4 = (*pMVar13->methodPointer)();
          if (iVar4 < 1) {
            pSVar10 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*puVar12,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar14,pSVar10,"No contributors listed.",
                       (MethodInfo *)&"No contributors listed.");
            return;
          }
          SVar9 = SVar15;
          if (*plVar1 != 0) {
            contributors = *(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o **)
                            (*plVar1 + 0x20);
            pSVar10 = System_String__Concat_3ae5ba0
                                ((System_String_o *)*puVar12,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar14,contributors,pSVar10,pMVar13);
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
  SVar15 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass10_0);
  SVar14 = SVar15;
  System_Object___ctor((Il2CppObject *)SVar15,(MethodInfo *)0x0);
  if (SVar15 != (System_String_Fields)0x0) {
    *(undefined8 *)((long)SVar15 + 0x10) = extraout_RDX_01;
    il2cpp_runtime_helper_022b4080((long)SVar15 + 0x10,extraout_RDX_01);
    *(System_String_o **)((long)SVar15 + 0x18) = pSVar10;
    il2cpp_runtime_helper_022b4080((long)SVar15 + 0x18,pSVar10);
    pSVar16 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar10 = *(System_String_o **)((long)SVar15 + 0x18);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    SVar14 = "Column";
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (SVar9 != (System_String_Fields)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                ((Gisketch_Aottg2UI_Code_AottgUi_o *)SVar9,"default",pSVar16,pSVar10,pGVar8,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)SVar14,(MethodInfo *)0x0);
  return;
}



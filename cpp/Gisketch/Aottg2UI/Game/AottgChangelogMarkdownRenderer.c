// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogMarkdownRenderer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer___ctor (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o* __this, System_String_o* markdown, System_String_o* id, int32_t maxLines, const MethodInfo* method);
// 0x44e17a0

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this,System_String_o *markdown,
               System_String_o *id,int32_t maxLines,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_String_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  long *plVar8;
  bool_conflict bVar9;
  int iVar10;
  int32_t iVar11;
  System_String_o *pSVar12;
  VirtualInvokeData *pVVar13;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *block;
  System_String_o *pSVar14;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  undefined8 *puVar15;
  System_String_o *pSVar16;
  System_String_o **ppSVar17;
  long extraout_RDX;
  int index;
  uint uVar18;
  MethodInfo *pMVar19;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this_00;
  long lVar20;
  long lVar21;
  int iVar22;
  MethodInfo *in_R9;
  long *unaff_R12;
  int iVar23;
  ulong unaff_R13;
  uint uStack_a4;
  System_String_o *pSStack_a0;
  int32_t iStack_94;
  System_String_o *pSStack_90;
  long *plStack_88;
  ulong uStack_80;
  MethodInfo *pMStack_78;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *pGStack_70;
  System_String_o *pSStack_68;
  
  iVar11 = maxLines;
  if (g_data_057aebdc == '\0') {
    il2cpp_runtime_helper_023445d0(&"changelog-markdown");
    g_data_057aebdc = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._markdown = markdown;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  pMVar19 = (MethodInfo *)0x0;
  __this_00 = (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *)id;
  bVar9 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    id = "changelog-markdown";
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *)0x0) {
    (__this->fields)._id = id;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._id,id);
    (__this->fields)._maxLines = maxLines;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar19;
  if (g_data_057aebdd == '\0') {
    pSStack_68 = (System_String_o *)0x44e1856;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdown);
    pSStack_68 = (System_String_o *)0x44e1862;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock);
    pSStack_68 = (System_String_o *)0x44e186e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock);
    pSStack_68 = (System_String_o *)0x44e187a;
    il2cpp_runtime_helper_023445d0(&"Nothing to preview.");
    pSStack_68 = (System_String_o *)0x44e1886;
    il2cpp_runtime_helper_023445d0(&"-empty");
    pSStack_68 = (System_String_o *)0x44e1892;
    il2cpp_runtime_helper_023445d0(&"-truncated");
    pSStack_68 = (System_String_o *)0x44e189e;
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    pSStack_68 = (System_String_o *)0x44e18aa;
    il2cpp_runtime_helper_023445d0(&"text");
    pSStack_68 = (System_String_o *)0x44e18b6;
    il2cpp_runtime_helper_023445d0(&"...");
    g_data_057aebdd = '\x01';
  }
  pSVar14 = (__this_00->fields)._markdown;
  if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
    pSStack_68 = (System_String_o *)0x44e18d9;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_68 = (System_String_o *)0x44e18e1;
  pSVar16 = pSVar14;
  pSVar12 = (System_String_o *)Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Parse(pSVar14,method_00);
  iVar22 = (int)method;
  pSStack_90 = pSVar14;
  if (pSVar12 != (System_String_o *)0x0) {
    pSVar6 = pSVar12->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock) {
          pVVar13 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
          goto label_044e1951;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar20);
    }
    pSStack_68 = (System_String_o *)0x44e1939;
    pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar12,TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock,0);
label_044e1951:
    pSStack_68 = (System_String_o *)0x44e195a;
    iVar10 = (*pVVar13->methodPtr)(pSVar12,pVVar13->method);
    iVar22 = (int)method;
    iVar11 = (int32_t)pVVar13;
    pSStack_90 = pSVar12;
    if (iVar10 == 0) {
      pSVar16 = (__this_00->fields)._id;
      pSStack_68 = (System_String_o *)0x44e1abd;
      method_00 = "-empty";
      pSVar14 = System_String__Concat_3ae5ba0(pSVar16,(System_String_o *)"-empty",(MethodInfo *)0x0);
      if (pMVar19 != (MethodInfo *)0x0) {
        ppSVar17 = (System_String_o **)&"profileInfoStatus";
        pSVar16 = "Nothing to preview.";
        goto label_044e1b4d;
      }
    }
    else {
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *)0x0) {
        unaff_R12 = &TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock;
        markdown = (System_String_o *)0x0;
        unaff_R13 = 0;
        do {
          iVar22 = (int)method;
          pSVar6 = pSVar12->klass;
          uVar2._0_1_ = (pSVar6->_2).rank;
          uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock) {
                pVVar13 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
                goto label_044e1a23;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar20);
          }
          pSStack_68 = (System_String_o *)0x44e1a09;
          pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar12,TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock,0);
label_044e1a23:
          pSStack_68 = (System_String_o *)0x44e1a2c;
          iVar10 = (*pVVar13->methodPtr)(pSVar12,pVVar13->method);
          iVar11 = (int32_t)pVVar13;
          index = (int)markdown;
          if (iVar10 <= index) {
            return;
          }
          iVar10 = (__this_00->fields)._maxLines;
          iVar23 = (int)unaff_R13;
          if ((0 < iVar10) && (iVar10 <= iVar23)) goto label_044e1b1e;
          pSVar6 = pSVar12->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock) {
                pVVar13 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
                goto label_044e198d;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar20);
          }
          pSStack_68 = (System_String_o *)0x44e198a;
          pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar12,TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock,0);
label_044e198d:
          pSStack_68 = (System_String_o *)0x44e1998;
          block = (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)
                  (*pVVar13->methodPtr)(pSVar12,markdown,pVVar13->method);
          iVar22 = (__this_00->fields)._maxLines;
          uVar18 = iVar22 - iVar23;
          if (iVar22 < 1) {
            uVar18 = 0;
          }
          method = (MethodInfo *)(ulong)uVar18;
          pSStack_68 = (System_String_o *)0x44e19bd;
          iVar11 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__BuildBlock
                             (__this_00,(Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar19,block,index,uVar18,in_R9);
          unaff_R13 = (ulong)(uint)(iVar23 + iVar11);
          markdown = (System_String_o *)(ulong)(index + 1);
        } while( true );
      }
      pSVar6 = pSVar12->klass;
      uVar4._0_1_ = (pSVar6->_2).rank;
      uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock) {
            pVVar13 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
            goto label_044e1b8b;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar20);
      }
      pSStack_68 = (System_String_o *)0x44e1b19;
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar12,TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock,0);
label_044e1b8b:
      pSStack_68 = (System_String_o *)0x44e1b94;
      iVar10 = (*pVVar13->methodPtr)(pSVar12,pVVar13->method);
      if (iVar10 < 1) {
        return;
      }
      pSVar6 = pSVar12->klass;
      uVar5._0_1_ = (pSVar6->_2).rank;
      uVar5._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock) {
            pVVar13 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
            goto label_044e1bf1;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar20);
      }
      pSStack_68 = (System_String_o *)0x44e1bd9;
      pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar12,TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock,0);
label_044e1bf1:
      method_00 = (MethodInfo *)0x0;
      pSStack_68 = (System_String_o *)0x44e1bfc;
      pSVar16 = pSVar12;
      (*pVVar13->methodPtr)(pSVar12,0,pVVar13->method);
      iVar11 = (int32_t)pVVar13;
    }
  }
label_044e1bfc:
  pSStack_68 = (System_String_o *)0x44e1c01;
  il2cpp_runtime_helper_022b2c90();
  iStack_94 = iVar11;
  plStack_88 = unaff_R12;
  uStack_80 = unaff_R13;
  pMStack_78 = pMVar19;
  pGStack_70 = __this_00;
  pSStack_68 = markdown;
  if (g_data_057aebde == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdown);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&"-item-");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"changelogMarkdownHeader");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"- ");
    g_data_057aebde = '\x01';
  }
  uStack_a4 = 0;
  pSVar6 = pSVar16[1].klass;
  pSVar14 = System_Int32__ToString((int32_t)&iStack_94,(MethodInfo *)0x0);
  pMVar19 = "-";
  pSStack_a0 = System_String__Concat_3af7150
                         ((System_String_o *)pSVar6,(System_String_o *)"-",pSVar14,(MethodInfo *)0x0)
  ;
  if (extraout_RDX != 0) {
    iVar10 = *(int *)(extraout_RDX + 0x10);
    if (iVar10 == 3) {
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(12.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (method_00 != (MethodInfo *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)method_00,(System_String_o *)0x0,
                   (System_Action_AottgUi__o *)0x0,pSStack_a0,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (iVar10 == 2) {
      plVar8 = *(long **)(extraout_RDX + 0x20);
      if (plVar8 != (long *)0x0) {
        lVar20 = *plVar8;
        if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
          lVar21 = 0;
          do {
            if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_string) {
              puVar15 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + lVar20 + 0x138);
              goto label_044e1ef1;
            }
            lVar21 = lVar21 + 0x10;
          } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
        }
        puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IReadOnlyCollection_string,0);
label_044e1ef1:
        iVar11 = (*(code *)*puVar15)(plVar8,puVar15[1]);
        if (0 < iVar22) {
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar11 = System_Math__Min_3cb7d70(iVar11,iVar22,(MethodInfo *)0x0);
        }
        uStack_a4 = 0;
        if (iVar11 < 1) {
          return;
        }
        if (method_00 == (MethodInfo *)0x0) {
          plVar8 = *(long **)(extraout_RDX + 0x20);
          if (plVar8 != (long *)0x0) {
            lVar20 = *plVar8;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
              lVar21 = 0;
              do {
                if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IReadOnlyList_string) {
                  puVar15 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + lVar20 + 0x138);
                  goto label_044e20e1;
                }
                lVar21 = lVar21 + 0x10;
              } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
            }
            puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IReadOnlyList_string,0);
label_044e20e1:
            pMVar19 = (MethodInfo *)0x0;
            pSVar14 = (System_String_o *)(*(code *)*puVar15)(plVar8,0,puVar15[1]);
            if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar14 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar14,pMVar19);
            System_String__Concat_3ae5ba0("- ",pSVar14,(MethodInfo *)0x0);
            pSVar14 = System_Int32__ToString((int32_t)&uStack_a4,(MethodInfo *)0x0);
            System_String__Concat_3af7150(pSStack_a0,"-item-",pSVar14,(MethodInfo *)0x0);
          }
        }
        else {
          plVar8 = *(long **)(extraout_RDX + 0x20);
          uVar18 = uStack_a4;
          while (uStack_a4 = uVar18, plVar8 != (long *)0x0) {
            lVar20 = *plVar8;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
              lVar21 = 0;
              do {
                if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IReadOnlyList_string) {
                  puVar15 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + lVar20 + 0x138);
                  goto label_044e2043;
                }
                lVar21 = lVar21 + 0x10;
              } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
            }
            puVar15 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IReadOnlyList_string,0);
label_044e2043:
            pMVar19 = (MethodInfo *)(ulong)uVar18;
            pSVar14 = (System_String_o *)(*(code *)*puVar15)(plVar8,pMVar19,puVar15[1]);
            if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar14 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar14,pMVar19);
            pSVar14 = System_String__Concat_3ae5ba0("- ",pSVar14,(MethodInfo *)0x0);
            pSVar16 = System_Int32__ToString((int32_t)&uStack_a4,(MethodInfo *)0x0);
            pSVar16 = System_String__Concat_3af7150(pSStack_a0,"-item-",pSVar16,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Text
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)method_00,pSVar14,"text",pSVar16,
                       (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (MethodInfo *)0x0);
            uVar18 = uStack_a4 + 1;
            if (iVar11 <= (int)uVar18) {
              return;
            }
            plVar8 = *(long **)(extraout_RDX + 0x20);
          }
        }
      }
    }
    else if (iVar10 == 0) {
      pSVar14 = *(System_String_o **)(extraout_RDX + 0x18);
      if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar14,pMVar19);
      if (method_00 != (MethodInfo *)0x0) {
        ppSVar17 = (System_String_o **)&"changelogMarkdownHeader";
label_044e1ea7:
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)method_00,pSVar14,*ppSVar17,pSStack_a0,
                   (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar14 = *(System_String_o **)(extraout_RDX + 0x18);
      if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar14,pMVar19);
      if (method_00 != (MethodInfo *)0x0) {
        ppSVar17 = &"text";
        goto label_044e1ea7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebdf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Changelog");
    g_data_057aebdf = '\x01';
  }
  return;
label_044e1b1e:
  pSVar16 = (__this_00->fields)._id;
  pSStack_68 = (System_String_o *)0x44e1b33;
  method_00 = "-truncated";
  pSVar14 = System_String__Concat_3ae5ba0(pSVar16,(System_String_o *)"-truncated",(MethodInfo *)0x0);
  if (pMVar19 != (MethodInfo *)0x0) {
    ppSVar17 = &"text";
    pSVar16 = "...";
label_044e1b4d:
    pSStack_68 = (System_String_o *)0x44e1b69;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar19,pSVar16,*ppSVar17,pSVar14,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  goto label_044e1bfc;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__Build (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x44e1830

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__Build
               (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_String_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  long *plVar8;
  int iVar9;
  int32_t iVar10;
  System_String_o *pSVar11;
  VirtualInvokeData *pVVar12;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *block;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  undefined8 *puVar14;
  System_String_o *pSVar15;
  undefined4 in_ECX;
  System_String_o **ppSVar16;
  long extraout_RDX;
  int index;
  uint uVar17;
  ulong unaff_RBP;
  MethodInfo *pMVar18;
  MethodInfo *pMVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  ulong in_R8;
  MethodInfo *in_R9;
  long *unaff_R12;
  int iVar23;
  ulong unaff_R13;
  uint uStack_7c;
  System_String_o *pSStack_78;
  undefined4 uStack_6c;
  System_String_o *pSStack_68;
  long *plStack_60;
  ulong uStack_58;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_50;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *pGStack_48;
  ulong uStack_40;
  
  pMVar18 = (MethodInfo *)ui;
  if (g_data_057aebdd == '\0') {
    uStack_40 = 0x44e1856;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdown);
    uStack_40 = 0x44e1862;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock);
    uStack_40 = 0x44e186e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock);
    uStack_40 = 0x44e187a;
    il2cpp_runtime_helper_023445d0(&"Nothing to preview.");
    uStack_40 = 0x44e1886;
    il2cpp_runtime_helper_023445d0(&"-empty");
    uStack_40 = 0x44e1892;
    il2cpp_runtime_helper_023445d0(&"-truncated");
    uStack_40 = 0x44e189e;
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    uStack_40 = 0x44e18aa;
    il2cpp_runtime_helper_023445d0(&"text");
    uStack_40 = 0x44e18b6;
    il2cpp_runtime_helper_023445d0(&"...");
    g_data_057aebdd = '\x01';
  }
  pSVar13 = (__this->fields)._markdown;
  if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
    uStack_40 = 0x44e18d9;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_40 = 0x44e18e1;
  pSVar15 = pSVar13;
  pSVar11 = (System_String_o *)Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Parse(pSVar13,pMVar18);
  iVar22 = (int)in_R8;
  pSStack_68 = pSVar13;
  if (pSVar11 != (System_String_o *)0x0) {
    pSVar6 = pSVar11->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar20 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock) {
          pVVar12 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
          goto label_044e1951;
        }
        lVar20 = lVar20 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar20);
    }
    uStack_40 = 0x44e1939;
    pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock,0);
label_044e1951:
    uStack_40 = 0x44e195a;
    iVar9 = (*pVVar12->methodPtr)(pSVar11,pVVar12->method);
    iVar22 = (int)in_R8;
    in_ECX = SUB84(pVVar12,0);
    pSStack_68 = pSVar11;
    if (iVar9 == 0) {
      pSVar15 = (__this->fields)._id;
      uStack_40 = 0x44e1abd;
      pMVar18 = "-empty";
      pSVar13 = System_String__Concat_3ae5ba0(pSVar15,(System_String_o *)"-empty",(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        ppSVar16 = (System_String_o **)&"profileInfoStatus";
        pSVar15 = "Nothing to preview.";
        goto label_044e1b4d;
      }
    }
    else {
      if (__this != (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *)0x0) {
        unaff_R12 = &TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock;
        unaff_RBP = 0;
        unaff_R13 = 0;
        do {
          iVar22 = (int)in_R8;
          pSVar6 = pSVar11->klass;
          uVar2._0_1_ = (pSVar6->_2).rank;
          uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock) {
                pVVar12 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
                goto label_044e1a23;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar20);
          }
          uStack_40 = 0x44e1a09;
          pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock,0);
label_044e1a23:
          uStack_40 = 0x44e1a2c;
          iVar9 = (*pVVar12->methodPtr)(pSVar11,pVVar12->method);
          in_ECX = SUB84(pVVar12,0);
          index = (int)unaff_RBP;
          if (iVar9 <= index) {
            return;
          }
          iVar9 = (__this->fields)._maxLines;
          iVar23 = (int)unaff_R13;
          if ((0 < iVar9) && (iVar9 <= iVar23)) goto label_044e1b1e;
          pSVar6 = pSVar11->klass;
          uVar3._0_1_ = (pSVar6->_2).rank;
          uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar20 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock) {
                pVVar12 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
                goto label_044e198d;
              }
              lVar20 = lVar20 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar20);
          }
          uStack_40 = 0x44e198a;
          pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock,0);
label_044e198d:
          uStack_40 = 0x44e1998;
          block = (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)
                  (*pVVar12->methodPtr)(pSVar11,unaff_RBP,pVVar12->method);
          iVar22 = (__this->fields)._maxLines;
          uVar17 = iVar22 - iVar23;
          if (iVar22 < 1) {
            uVar17 = 0;
          }
          in_R8 = (ulong)uVar17;
          uStack_40 = 0x44e19bd;
          iVar10 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__BuildBlock
                             (__this,ui,block,index,uVar17,in_R9);
          unaff_R13 = (ulong)(uint)(iVar23 + iVar10);
          unaff_RBP = (ulong)(index + 1);
        } while( true );
      }
      pSVar6 = pSVar11->klass;
      uVar4._0_1_ = (pSVar6->_2).rank;
      uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock) {
            pVVar12 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
            goto label_044e1b8b;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar20);
      }
      uStack_40 = 0x44e1b19;
      pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyCollection_AottgChangelogMarkdownBlock,0);
label_044e1b8b:
      uStack_40 = 0x44e1b94;
      iVar9 = (*pVVar12->methodPtr)(pSVar11,pVVar12->method);
      if (iVar9 < 1) {
        return;
      }
      pSVar6 = pSVar11->klass;
      uVar5._0_1_ = (pSVar6->_2).rank;
      uVar5._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar20) == TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock) {
            pVVar12 = &(pSVar6->vtable)._0_Equals + *(int *)((long)&pIVar7->offset + lVar20);
            goto label_044e1bf1;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar20);
      }
      uStack_40 = 0x44e1bd9;
      pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyList_AottgChangelogMarkdownBlock,0);
label_044e1bf1:
      pMVar18 = (MethodInfo *)0x0;
      uStack_40 = 0x44e1bfc;
      pSVar15 = pSVar11;
      (*pVVar12->methodPtr)(pSVar11,0,pVVar12->method);
      in_ECX = SUB84(pVVar12,0);
    }
  }
label_044e1bfc:
  uStack_40 = 0x44e1c01;
  il2cpp_runtime_helper_022b2c90();
  uStack_6c = in_ECX;
  plStack_60 = unaff_R12;
  uStack_58 = unaff_R13;
  pGStack_50 = ui;
  pGStack_48 = __this;
  uStack_40 = unaff_RBP;
  if (g_data_057aebde == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdown);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&"-item-");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"changelogMarkdownHeader");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"- ");
    g_data_057aebde = '\x01';
  }
  uStack_7c = 0;
  pSVar6 = pSVar15[1].klass;
  pSVar13 = System_Int32__ToString((int32_t)&uStack_6c,(MethodInfo *)0x0);
  pMVar19 = "-";
  pSStack_78 = System_String__Concat_3af7150
                         ((System_String_o *)pSVar6,(System_String_o *)"-",pSVar13,(MethodInfo *)0x0)
  ;
  if (extraout_RDX != 0) {
    iVar9 = *(int *)(extraout_RDX + 0x10);
    if (iVar9 == 3) {
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(12.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pMVar18 != (MethodInfo *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar18,(System_String_o *)0x0,
                   (System_Action_AottgUi__o *)0x0,pSStack_78,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
    else if (iVar9 == 2) {
      plVar8 = *(long **)(extraout_RDX + 0x20);
      if (plVar8 != (long *)0x0) {
        lVar20 = *plVar8;
        if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
          lVar21 = 0;
          do {
            if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IReadOnlyCollection_string) {
              puVar14 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + lVar20 + 0x138);
              goto label_044e1ef1;
            }
            lVar21 = lVar21 + 0x10;
          } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
        }
        puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IReadOnlyCollection_string,0);
label_044e1ef1:
        iVar10 = (*(code *)*puVar14)(plVar8,puVar14[1]);
        if (0 < iVar22) {
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar10 = System_Math__Min_3cb7d70(iVar10,iVar22,(MethodInfo *)0x0);
        }
        uStack_7c = 0;
        if (iVar10 < 1) {
          return;
        }
        if (pMVar18 == (MethodInfo *)0x0) {
          plVar8 = *(long **)(extraout_RDX + 0x20);
          if (plVar8 != (long *)0x0) {
            lVar20 = *plVar8;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
              lVar21 = 0;
              do {
                if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IReadOnlyList_string) {
                  puVar14 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + lVar20 + 0x138);
                  goto label_044e20e1;
                }
                lVar21 = lVar21 + 0x10;
              } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IReadOnlyList_string,0);
label_044e20e1:
            pMVar18 = (MethodInfo *)0x0;
            pSVar13 = (System_String_o *)(*(code *)*puVar14)(plVar8,0,puVar14[1]);
            if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar13,pMVar18);
            System_String__Concat_3ae5ba0("- ",pSVar13,(MethodInfo *)0x0);
            pSVar13 = System_Int32__ToString((int32_t)&uStack_7c,(MethodInfo *)0x0);
            System_String__Concat_3af7150(pSStack_78,"-item-",pSVar13,(MethodInfo *)0x0);
          }
        }
        else {
          plVar8 = *(long **)(extraout_RDX + 0x20);
          uVar17 = uStack_7c;
          while (uStack_7c = uVar17, plVar8 != (long *)0x0) {
            lVar20 = *plVar8;
            if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
              lVar21 = 0;
              do {
                if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IReadOnlyList_string) {
                  puVar14 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + lVar20 + 0x138);
                  goto label_044e2043;
                }
                lVar21 = lVar21 + 0x10;
              } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21);
            }
            puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IReadOnlyList_string,0);
label_044e2043:
            pMVar19 = (MethodInfo *)(ulong)uVar17;
            pSVar13 = (System_String_o *)(*(code *)*puVar14)(plVar8,pMVar19,puVar14[1]);
            if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar13 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar13,pMVar19);
            pSVar13 = System_String__Concat_3ae5ba0("- ",pSVar13,(MethodInfo *)0x0);
            pSVar15 = System_Int32__ToString((int32_t)&uStack_7c,(MethodInfo *)0x0);
            pSVar15 = System_String__Concat_3af7150(pSStack_78,"-item-",pSVar15,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Text
                      ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar18,pSVar13,"text",pSVar15,
                       (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (MethodInfo *)0x0);
            uVar17 = uStack_7c + 1;
            if (iVar10 <= (int)uVar17) {
              return;
            }
            plVar8 = *(long **)(extraout_RDX + 0x20);
          }
        }
      }
    }
    else if (iVar9 == 0) {
      pSVar13 = *(System_String_o **)(extraout_RDX + 0x18);
      if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar13,pMVar19);
      if (pMVar18 != (MethodInfo *)0x0) {
        ppSVar16 = (System_String_o **)&"changelogMarkdownHeader";
label_044e1ea7:
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar18,pSVar13,*ppSVar16,pSStack_78,
                   (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar13 = *(System_String_o **)(extraout_RDX + 0x18);
      if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar13,pMVar19);
      if (pMVar18 != (MethodInfo *)0x0) {
        ppSVar16 = &"text";
        goto label_044e1ea7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebdf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Changelog");
    g_data_057aebdf = '\x01';
  }
  return;
label_044e1b1e:
  pSVar15 = (__this->fields)._id;
  uStack_40 = 0x44e1b33;
  pMVar18 = "-truncated";
  pSVar13 = System_String__Concat_3ae5ba0(pSVar15,(System_String_o *)"-truncated",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ppSVar16 = &"text";
    pSVar15 = "...";
label_044e1b4d:
    uStack_40 = 0x44e1b69;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ui,pSVar15,*ppSVar16,pSVar13,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  goto label_044e1bfc;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$BuildBlock
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__BuildBlock (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o* block, int32_t index, int32_t remainingLines, const MethodInfo* method);
// 0x44e1c10

int32_t Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__BuildBlock
                  (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this,
                  Gisketch_Aottg2UI_Code_AottgUi_o *ui,
                  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *block,int32_t index,
                  int32_t remainingLines,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  System_Collections_Generic_IReadOnlyList_string__o *pSVar5;
  System_Collections_Generic_IReadOnlyList_string__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  int32_t val1;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  VirtualInvokeData *pVVar10;
  System_String_o **ppSVar11;
  uint uVar12;
  MethodInfo *pMVar13;
  long lVar14;
  uint local_44;
  System_String_o *local_40;
  int32_t local_34;
  
  local_34 = index;
  if (g_data_057aebde == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdown);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&"-item-");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-");
    il2cpp_runtime_helper_023445d0(&"changelogMarkdownHeader");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"- ");
    g_data_057aebde = '\x01';
  }
  local_44 = 0;
  pSVar9 = (__this->fields)._id;
  pSVar8 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
  pMVar13 = "-";
  local_40 = System_String__Concat_3af7150(pSVar9,(System_String_o *)"-",pSVar8,(MethodInfo *)0x0);
  if (block != (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)0x0) {
    iVar4 = (block->fields)._Type_k__BackingField;
    if (iVar4 == 3) {
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(12.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,(System_String_o *)0x0,(System_Action_AottgUi__o *)0x0,local_40,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return 0;
      }
    }
    else if (iVar4 == 2) {
      pSVar5 = (block->fields)._Items_k__BackingField;
      if (pSVar5 != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
        pSVar6 = pSVar5->klass;
        uVar1._0_1_ = (pSVar6->_2).rank;
        uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar1 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IReadOnlyCollection_string) {
              pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
              goto label_044e1ef1;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar1 << 4 != lVar14);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IReadOnlyCollection_string,0);
label_044e1ef1:
        val1 = (*pVVar10->methodPtr)(pSVar5,pVVar10->method);
        if (0 < remainingLines) {
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          val1 = System_Math__Min_3cb7d70(val1,remainingLines,(MethodInfo *)0x0);
        }
        local_44 = 0;
        if (val1 < 1) {
          return val1;
        }
        if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          pSVar5 = (block->fields)._Items_k__BackingField;
          if (pSVar5 != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
            pSVar6 = pSVar5->klass;
            uVar3._0_1_ = (pSVar6->_2).rank;
            uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
            if ((ulong)uVar3 != 0) {
              pIVar7 = (pSVar6->_1).interfaceOffsets;
              lVar14 = 0;
              do {
                if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IReadOnlyList_string) {
                  pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
                  goto label_044e20e1;
                }
                lVar14 = lVar14 + 0x10;
              } while ((ulong)uVar3 << 4 != lVar14);
            }
            pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IReadOnlyList_string,0);
label_044e20e1:
            pMVar13 = (MethodInfo *)0x0;
            pSVar9 = (System_String_o *)(*pVVar10->methodPtr)(pSVar5,0,pVVar10->method);
            if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar9,pMVar13);
            System_String__Concat_3ae5ba0("- ",pSVar9,(MethodInfo *)0x0);
            pSVar9 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
            System_String__Concat_3af7150(local_40,"-item-",pSVar9,(MethodInfo *)0x0);
          }
        }
        else {
          pSVar5 = (block->fields)._Items_k__BackingField;
          uVar12 = local_44;
          while (local_44 = uVar12, pSVar5 != (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
            pSVar6 = pSVar5->klass;
            uVar2._0_1_ = (pSVar6->_2).rank;
            uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar7 = (pSVar6->_1).interfaceOffsets;
              lVar14 = 0;
              do {
                if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IReadOnlyList_string) {
                  pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
                  goto label_044e2043;
                }
                lVar14 = lVar14 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar14);
            }
            pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar5,TypeInfo_IReadOnlyList_string,0);
label_044e2043:
            pMVar13 = (MethodInfo *)(ulong)uVar12;
            pSVar9 = (System_String_o *)(*pVVar10->methodPtr)(pSVar5,pMVar13,pVVar10->method);
            if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar9 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar9,pMVar13);
            pSVar9 = System_String__Concat_3ae5ba0("- ",pSVar9,(MethodInfo *)0x0);
            pSVar8 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
            pSVar8 = System_String__Concat_3af7150(local_40,"-item-",pSVar8,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Text
                      (ui,pSVar9,"text",pSVar8,(System_String_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            uVar12 = local_44 + 1;
            if (val1 <= (int)uVar12) {
              return val1;
            }
            pSVar5 = (block->fields)._Items_k__BackingField;
          }
        }
      }
    }
    else if (iVar4 == 0) {
      pSVar9 = (block->fields)._Text_k__BackingField;
      if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar9,pMVar13);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        ppSVar11 = (System_String_o **)&"changelogMarkdownHeader";
label_044e1ea7:
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (ui,pSVar9,*ppSVar11,local_40,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return 1;
      }
    }
    else {
      pSVar9 = (block->fields)._Text_k__BackingField;
      if (*(int *)(TypeInfo_AottgChangelogMarkdown + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar9,pMVar13);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        ppSVar11 = &"text";
        goto label_044e1ea7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebdf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Changelog");
    g_data_057aebdf = '\x01';
  }
  return (int32_t)"Changelog";
}



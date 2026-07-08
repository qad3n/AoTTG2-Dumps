// Type: UI.EditProfileStatsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/EditProfileStatsPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/EditProfileStatsPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.EditProfileStatsPanel$$get_DoublePanel
// il2cpp: bool UI_EditProfileStatsPanel__get_DoublePanel (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x40ec1e0

bool_conflict
UI_EditProfileStatsPanel__get_DoublePanel(UI_EditProfileStatsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfileStatsPanel$$get_DoublePanelDivider
// il2cpp: bool UI_EditProfileStatsPanel__get_DoublePanelDivider (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x40ec1f0

bool_conflict
UI_EditProfileStatsPanel__get_DoublePanelDivider
          (UI_EditProfileStatsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfileStatsPanel$$get_ScrollBar
// il2cpp: bool UI_EditProfileStatsPanel__get_ScrollBar (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x40ec200

bool_conflict
UI_EditProfileStatsPanel__get_ScrollBar(UI_EditProfileStatsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.EditProfileStatsPanel$$get_VerticalSpacing
// il2cpp: float UI_EditProfileStatsPanel__get_VerticalSpacing (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x40ec210

float UI_EditProfileStatsPanel__get_VerticalSpacing
                (UI_EditProfileStatsPanel_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.EditProfileStatsPanel$$Setup
// il2cpp: void UI_EditProfileStatsPanel__Setup (UI_EditProfileStatsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40ec220

/* WARNING: Removing unreachable block (ram,0x040ed733) */

void UI_EditProfileStatsPanel__Setup
               (UI_EditProfileStatsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Collections_Generic_IEnumerable_ValueTuple_string__string___c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  int iVar5;
  UI_EditProfileStatsPanel_o *pUVar6;
  char cVar7;
  GameProgress_AchievementCount_o *pGVar8;
  System_String_o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  System_String_o *pSVar11;
  System_TimeSpan_o ts;
  System_Collections_Generic_IEnumerable_ValueTuple_string__string___o *pSVar12;
  VirtualInvokeData *pVVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined1 auVar20 [16];
  int32_t iStack_4c;
  UI_EditProfileStatsPanel_o *pUStack_48;
  UI_ElementStyle_o *pUStack_40;
  long lStack_38;
  
  pUStack_48 = __this;
  if (DAT_057047ec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_GameProgressManager);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_ValueTuple_string__string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_ValueTuple_string__string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Silver");
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Damage");
    il2cpp_init_method_metadata(&"Blade");
    il2cpp_init_method_metadata(&"Exp");
    il2cpp_init_method_metadata(&"Other");
    il2cpp_init_method_metadata(&"Total");
    il2cpp_init_method_metadata(&"Bronze");
    il2cpp_init_method_metadata(&"Achievements");
    il2cpp_init_method_metadata(&"Humans Killed");
    il2cpp_init_method_metadata(&"Gold");
    il2cpp_init_method_metadata(&"Highest speed");
    il2cpp_init_method_metadata(&"Playtime");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&"APG");
    il2cpp_init_method_metadata(&"Titans Killed");
    il2cpp_init_method_metadata(&"Level");
    il2cpp_init_method_metadata(&"AHSS");
    il2cpp_init_method_metadata(&"Thunder spear");
    DAT_057047ec = '\x01';
  }
  iStack_4c = 0;
  UI_BasePanel__Setup((UI_BasePanel_o *)pUStack_48,parent,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GameProgressManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar16 = *(long *)(*(long *)(TypeInfo_GameProgressManager + 0xb8) + 8);
  if ((lVar16 != 0) &&
     (*(GameProgress_AchievementContainer_o **)(lVar16 + 0x20) !=
      (GameProgress_AchievementContainer_o *)0x0)) {
    lVar17 = *(long *)(lVar16 + 0x30);
    pGVar8 = GameProgress_AchievementContainer__GetAchievementCount
                       (*(GameProgress_AchievementContainer_o **)(lVar16 + 0x20),(MethodInfo *)0x0);
    pUVar6 = pUStack_48;
    pSVar9 = (System_String_o *)
             (*(((UI_BasePanel_c *)pUStack_48->klass)->vtable)._4_get_ThemePanel.methodPtr)
                       (pUStack_48,
                        (((UI_BasePanel_c *)pUStack_48->klass)->vtable)._4_get_ThemePanel.method);
    pUStack_40 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(pUStack_40,0x18,100.0,20.0,pSVar9,(MethodInfo *)0x0);
    pSVar9 = "General";
    pUVar2 = ((UI_BasePanel_Fields *)&pUVar6->fields)->DoublePanelLeft;
    if (DAT_057047ee == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
      DAT_057047ee = '\x01';
    }
    pUVar10 = UI_ElementFactory__CreateDefaultLabel(pUVar2,pUStack_40,pSVar9,1,3,(MethodInfo *)0x0);
    if (((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
        (UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text), lVar17 != 0)) &&
       (*(long *)(lVar17 + 0x20) != 0)) {
      pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
      iStack_4c = *(int32_t *)(*(long *)(lVar17 + 0x20) + 0x14);
      pSVar11 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
      pSVar9 = "Level";
      if (DAT_057047ed == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
        il2cpp_init_method_metadata(&": ");
        DAT_057047ed = '\x01';
      }
      pSVar9 = System_String__Concat(pSVar9,": ",pSVar11,(MethodInfo *)0x0);
      pUVar10 = UI_ElementFactory__CreateDefaultLabel
                          (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
        if (*(long *)(lVar17 + 0x28) != 0) {
          pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
          iStack_4c = *(int32_t *)(*(long *)(lVar17 + 0x28) + 0x14);
          pSVar9 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
          iStack_4c = GameProgress_GameProgressManager__GetExpToNext((MethodInfo *)0x0);
          pSVar11 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
          pSVar11 = System_String__Concat(pSVar9,"/",pSVar11,(MethodInfo *)0x0);
          pSVar9 = "Exp";
          if (DAT_057047ed == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
            il2cpp_init_method_metadata(&": ");
            DAT_057047ed = '\x01';
          }
          pSVar9 = System_String__Concat(pSVar9,": ",pSVar11,(MethodInfo *)0x0);
          pUVar10 = UI_ElementFactory__CreateDefaultLabel
                              (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
            if (*(long *)(lVar17 + 0x30) != 0) {
              pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
              fVar19 = *(float *)(*(long *)(lVar17 + 0x30) + 0x14);
              if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
                lStack_38 = CONCAT44(lStack_38._4_4_,fVar19);
                il2cpp_init_class();
                fVar19 = (float)lStack_38;
              }
              ts = System_TimeSpan__FromSeconds((double)fVar19,(MethodInfo *)0x0);
              pSVar11 = Utility_Format__GetReadableTimespan(ts,(MethodInfo *)0x0);
              pSVar9 = "Playtime";
              if (DAT_057047ed == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                il2cpp_init_method_metadata(&": ");
                DAT_057047ed = '\x01';
              }
              pSVar9 = System_String__Concat(pSVar9,": ",pSVar11,(MethodInfo *)0x0);
              pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                  (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
              if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
                if (*(long *)(lVar17 + 0x38) != 0) {
                  pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
                  iStack_4c = (int32_t)*(float *)(*(long *)(lVar17 + 0x38) + 0x14);
                  pSVar11 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
                  pSVar9 = "Highest speed";
                  if (DAT_057047ed == '\0') {
                    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                    il2cpp_init_method_metadata(&": ");
                    DAT_057047ed = '\x01';
                  }
                  pSVar9 = System_String__Concat(pSVar9,": ",pSVar11,(MethodInfo *)0x0);
                  pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                      (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
                  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
                    pUVar6 = pUStack_48;
                    UI_BasePanel__CreateHorizontalDivider
                              ((UI_BasePanel_o *)pUStack_48,
                               ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft,1.0,
                               (MethodInfo *)0x0);
                    pSVar9 = "Achievements";
                    pUVar2 = ((UI_BasePanel_Fields *)&pUVar6->fields)->DoublePanelLeft;
                    if (DAT_057047ee == '\0') {
                      il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                      DAT_057047ee = '\x01';
                    }
                    pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                        (pUVar2,pUStack_40,pSVar9,1,3,(MethodInfo *)0x0);
                    if ((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
                       (UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text),
                       pGVar8 != (GameProgress_AchievementCount_o *)0x0)) {
                      pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
                      iVar5 = (int)pGVar8;
                      pSVar9 = System_Int32__ToString(iVar5 + 0x10,(MethodInfo *)0x0);
                      pSVar11 = System_Int32__ToString(iVar5 + 0x14,(MethodInfo *)0x0);
                      pSVar11 = System_String__Concat(pSVar9,"/",pSVar11,(MethodInfo *)0x0)
                      ;
                      pSVar9 = "Bronze";
                      if (DAT_057047ed == '\0') {
                        il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                        il2cpp_init_method_metadata(&": ");
                        DAT_057047ed = '\x01';
                      }
                      pSVar9 = System_String__Concat(pSVar9,": ",pSVar11,(MethodInfo *)0x0);
                      pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                          (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
                      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
                        pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
                        pSVar9 = System_Int32__ToString(iVar5 + 0x18,(MethodInfo *)0x0);
                        pSVar11 = System_Int32__ToString(iVar5 + 0x1c,(MethodInfo *)0x0);
                        pSVar11 = System_String__Concat
                                            (pSVar9,"/",pSVar11,(MethodInfo *)0x0);
                        pSVar9 = "Silver";
                        if (DAT_057047ed == '\0') {
                          il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                          il2cpp_init_method_metadata(&": ");
                          DAT_057047ed = '\x01';
                        }
                        pSVar9 = System_String__Concat
                                           (pSVar9,": ",pSVar11,(MethodInfo *)0x0);
                        pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                            (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
                        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
                          pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft;
                          pSVar9 = System_Int32__ToString(iVar5 + 0x20,(MethodInfo *)0x0);
                          pSVar11 = System_Int32__ToString(iVar5 + 0x24,(MethodInfo *)0x0);
                          pSVar11 = System_String__Concat
                                              (pSVar9,"/",pSVar11,(MethodInfo *)0x0);
                          pSVar9 = "Gold";
                          if (DAT_057047ed == '\0') {
                            il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                            il2cpp_init_method_metadata(&": ");
                            DAT_057047ed = '\x01';
                          }
                          pSVar9 = System_String__Concat
                                             (pSVar9,": ",pSVar11,(MethodInfo *)0x0);
                          pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                              (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
                          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
                            pUVar6 = pUStack_48;
                            UI_BasePanel__CreateHorizontalDivider
                                      ((UI_BasePanel_o *)pUStack_48,
                                       ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelLeft
                                       ,1.0,(MethodInfo *)0x0);
                            pSVar9 = "Damage";
                            pUVar2 = ((UI_BasePanel_Fields *)&pUVar6->fields)->DoublePanelLeft;
                            if (DAT_057047ee == '\0') {
                              il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                              DAT_057047ee = '\x01';
                            }
                            pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                                (pUVar2,pUStack_40,pSVar9,1,3,(MethodInfo *)0x0);
                            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
                              if ((*(GameProgress_DamageSetting_o **)(lVar17 + 0xa8) !=
                                   (GameProgress_DamageSetting_o *)0x0) &&
                                 (pSVar12 = GameProgress_DamageSetting__GetStatLabels
                                                      (*(GameProgress_DamageSetting_o **)
                                                        (lVar17 + 0xa8),(MethodInfo *)0x0),
                                 pSVar12 !=
                                 (System_Collections_Generic_IEnumerable_ValueTuple_string__string___o
                                  *)0x0)) {
                                pSVar3 = pSVar12->klass;
                                uVar1._0_1_ = (pSVar3->_2).rank;
                                uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
                                if ((ulong)uVar1 != 0) {
                                  pIVar4 = (pSVar3->_1).interfaceOffsets;
                                  lVar16 = 0;
                                  do {
                                    if (*(long *)((long)&pIVar4->interfaceType + lVar16) ==
                                        TypeInfo_IEnumerable_ValueTuple_string__string) {
                                      pVVar13 = pSVar3->vtable +
                                                *(int *)((long)&pIVar4->offset + lVar16);
                                      goto LAB_040ecb81;
                                    }
                                    lVar16 = lVar16 + 0x10;
                                  } while ((ulong)uVar1 << 4 != lVar16);
                                }
                                pVVar13 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar12,TypeInfo_IEnumerable_ValueTuple_string__string,0);
LAB_040ecb81:
                                lStack_38 = lVar17;
                                plVar14 = (long *)(*pVVar13->methodPtr)(pSVar12,pVVar13->method);
                                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  il2cpp_raise_exception();
                                }
                                do {
                                  lVar16 = *plVar14;
                                  if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
                                    lVar17 = 0;
                                    do {
                                      if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) ==
                                          TypeInfo_IEnumerator) {
                                        puVar15 = (undefined8 *)
                                                  ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 +
                                                                 lVar17) * 0x10 + lVar16 + 0x138);
                                        goto LAB_040ecc03;
                                      }
                                      lVar17 = lVar17 + 0x10;
                                    } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
                                  }
                                  puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar14,TypeInfo_IEnumerator,0);
LAB_040ecc03:
                                  cVar7 = (*(code *)*puVar15)(plVar14,puVar15[1]);
                                  lVar16 = lStack_38;
                                  if (cVar7 == '\0') {
                                    if (plVar14 == (long *)0x0) goto LAB_040ecd76;
                                    lVar17 = *plVar14;
                                    if ((ulong)*(ushort *)(lVar17 + 0x12e) == 0) goto LAB_040ecd4f;
                                    lVar18 = 0;
                                    goto LAB_040ecd40;
                                  }
                                  lVar16 = *plVar14;
                                  if ((ulong)*(ushort *)(lVar16 + 0x12e) != 0) {
                                    lVar17 = 0;
                                    do {
                                      if (*(long *)(*(long *)(lVar16 + 0xb0) + lVar17) ==
                                          TypeInfo_IEnumerator_ValueTuple_string__string) {
                                        puVar15 = (undefined8 *)
                                                  ((long)*(int *)(*(long *)(lVar16 + 0xb0) + 8 +
                                                                 lVar17) * 0x10 + lVar16 + 0x138);
                                        goto LAB_040ecc73;
                                      }
                                      lVar17 = lVar17 + 0x10;
                                    } while ((ulong)*(ushort *)(lVar16 + 0x12e) << 4 != lVar17);
                                  }
                                  puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar14,TypeInfo_IEnumerator_ValueTuple_string__string,0);
LAB_040ecc73:
                                  auVar20 = (*(code *)*puVar15)(plVar14,puVar15[1]);
                                  pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->
                                           DoublePanelLeft;
                                  if (DAT_057047ed == '\0') {
                                    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                                    il2cpp_init_method_metadata(&": ");
                                    DAT_057047ed = '\x01';
                                  }
                                  pSVar9 = System_String__Concat
                                                     (auVar20._0_8_,": ",auVar20._8_8_,
                                                      (MethodInfo *)0x0);
                                  pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                                      (pUVar2,pUStack_40,pSVar9,0,3,
                                                       (MethodInfo *)0x0);
                                  if (pUVar10 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    il2cpp_raise_exception();
                                  }
                                  UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text)
                                  ;
                                } while( true );
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_040ed724;
  while (lVar18 = lVar18 + 0x10, (ulong)*(ushort *)(lVar17 + 0x12e) << 4 != lVar18) {
LAB_040ecd40:
    if (*(long *)(*(long *)(lVar17 + 0xb0) + lVar18) == TypeInfo_IDisposable) {
      puVar15 = (undefined8 *)
                (lVar17 + (long)*(int *)(*(long *)(lVar17 + 0xb0) + 8 + lVar18) * 0x10 + 0x138);
      goto LAB_040ecd6d;
    }
  }
LAB_040ecd4f:
  puVar15 = (undefined8 *)il2cpp_runtime_glue(plVar14,TypeInfo_IDisposable,0);
LAB_040ecd6d:
  (*(code *)*puVar15)(plVar14,puVar15[1]);
LAB_040ecd76:
  pSVar9 = "Titans Killed";
  pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
  if (DAT_057047ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    DAT_057047ee = '\x01';
  }
  pUVar10 = UI_ElementFactory__CreateDefaultLabel(pUVar2,pUStack_40,pSVar9,1,3,(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
    if (*(long *)(lVar16 + 0x40) != 0) {
      pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
      iStack_4c = *(int32_t *)(*(long *)(lVar16 + 0x40) + 0x14);
      pSVar11 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
      pSVar9 = "Total";
      if (DAT_057047ed == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
        il2cpp_init_method_metadata(&": ");
        DAT_057047ed = '\x01';
      }
      pSVar9 = System_String__Concat(pSVar9,": ",pSVar11,(MethodInfo *)0x0);
      pUVar10 = UI_ElementFactory__CreateDefaultLabel
                          (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
        if (*(long *)(lVar16 + 0x48) != 0) {
          pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
          iStack_4c = *(int32_t *)(*(long *)(lVar16 + 0x48) + 0x14);
          pSVar11 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
          pSVar9 = "Blade";
          if (DAT_057047ed == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
            il2cpp_init_method_metadata(&": ");
            DAT_057047ed = '\x01';
          }
          pSVar9 = System_String__Concat(pSVar9,": ",pSVar11,(MethodInfo *)0x0);
          pUVar10 = UI_ElementFactory__CreateDefaultLabel
                              (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
            if (*(long *)(lVar16 + 0x50) != 0) {
              pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
              iStack_4c = *(int32_t *)(*(long *)(lVar16 + 0x50) + 0x14);
              pSVar11 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
              pSVar9 = "AHSS";
              if (DAT_057047ed == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                il2cpp_init_method_metadata(&": ");
                DAT_057047ed = '\x01';
              }
              pSVar9 = System_String__Concat(pSVar9,": ",pSVar11,(MethodInfo *)0x0);
              pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                  (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
              if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
                if (*(long *)(lVar16 + 0x60) != 0) {
                  pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
                  iStack_4c = *(int32_t *)(*(long *)(lVar16 + 0x60) + 0x14);
                  pSVar11 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
                  pSVar9 = "APG";
                  if (DAT_057047ed == '\0') {
                    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                    il2cpp_init_method_metadata(&": ");
                    DAT_057047ed = '\x01';
                  }
                  pSVar9 = System_String__Concat(pSVar9,": ",pSVar11,(MethodInfo *)0x0);
                  pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                      (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
                  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
                    if (*(long *)(lVar16 + 0x58) != 0) {
                      pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
                      iStack_4c = *(int32_t *)(*(long *)(lVar16 + 0x58) + 0x14);
                      pSVar11 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
                      pSVar9 = "Thunder spear";
                      if (DAT_057047ed == '\0') {
                        il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                        il2cpp_init_method_metadata(&": ");
                        DAT_057047ed = '\x01';
                      }
                      pSVar9 = System_String__Concat(pSVar9,": ",pSVar11,(MethodInfo *)0x0);
                      pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                          (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
                      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
                        if (*(long *)(lVar16 + 0x68) != 0) {
                          pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->DoublePanelRight;
                          iStack_4c = *(int32_t *)(*(long *)(lVar16 + 0x68) + 0x14);
                          pSVar11 = System_Int32__ToString((int32_t)&iStack_4c,(MethodInfo *)0x0);
                          pSVar9 = "Other";
                          if (DAT_057047ed == '\0') {
                            il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                            il2cpp_init_method_metadata(&": ");
                            DAT_057047ed = '\x01';
                          }
                          pSVar9 = System_String__Concat
                                             (pSVar9,": ",pSVar11,(MethodInfo *)0x0);
                          pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                              (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0);
                          if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
                            pUVar6 = pUStack_48;
                            UI_BasePanel__CreateHorizontalDivider
                                      ((UI_BasePanel_o *)pUStack_48,
                                       ((UI_BasePanel_Fields *)&pUStack_48->fields)->
                                       DoublePanelRight,1.0,(MethodInfo *)0x0);
                            pSVar9 = "Humans Killed";
                            pUVar2 = ((UI_BasePanel_Fields *)&pUVar6->fields)->DoublePanelRight;
                            if (DAT_057047ee == '\0') {
                              il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                              DAT_057047ee = '\x01';
                            }
                            pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                                (pUVar2,pUStack_40,pSVar9,1,3,(MethodInfo *)0x0);
                            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                              UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text);
                              if (*(long *)(lVar16 + 0x70) != 0) {
                                pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->
                                         DoublePanelRight;
                                iStack_4c = *(int32_t *)(*(long *)(lVar16 + 0x70) + 0x14);
                                pSVar11 = System_Int32__ToString
                                                    ((int32_t)&iStack_4c,(MethodInfo *)0x0);
                                pSVar9 = "Total";
                                if (DAT_057047ed == '\0') {
                                  il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                                  il2cpp_init_method_metadata(&": ");
                                  DAT_057047ed = '\x01';
                                }
                                pSVar9 = System_String__Concat
                                                   (pSVar9,": ",pSVar11,(MethodInfo *)0x0);
                                pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                                    (pUVar2,pUStack_40,pSVar9,0,3,(MethodInfo *)0x0)
                                ;
                                if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                  UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Text_GetComponent_Text)
                                  ;
                                  if (*(long *)(lVar16 + 0x78) != 0) {
                                    pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->
                                             DoublePanelRight;
                                    iStack_4c = *(int32_t *)(*(long *)(lVar16 + 0x78) + 0x14);
                                    pSVar11 = System_Int32__ToString
                                                        ((int32_t)&iStack_4c,(MethodInfo *)0x0);
                                    pSVar9 = "Blade";
                                    if (DAT_057047ed == '\0') {
                                      il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                                      il2cpp_init_method_metadata(&": ");
                                      DAT_057047ed = '\x01';
                                    }
                                    pSVar9 = System_String__Concat
                                                       (pSVar9,": ",pSVar11,
                                                        (MethodInfo *)0x0);
                                    pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                                        (pUVar2,pUStack_40,pSVar9,0,3,
                                                         (MethodInfo *)0x0);
                                    if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                      UnityEngine_GameObject__GetComponent<object>
                                                (pUVar10,MethodInfo_Text_GetComponent_Text);
                                      if (*(long *)(lVar16 + 0x80) != 0) {
                                        pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->
                                                 DoublePanelRight;
                                        iStack_4c = *(int32_t *)(*(long *)(lVar16 + 0x80) + 0x14);
                                        pSVar11 = System_Int32__ToString
                                                            ((int32_t)&iStack_4c,(MethodInfo *)0x0);
                                        pSVar9 = "AHSS";
                                        if (DAT_057047ed == '\0') {
                                          il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                                          il2cpp_init_method_metadata(&": ");
                                          DAT_057047ed = '\x01';
                                        }
                                        pSVar9 = System_String__Concat
                                                           (pSVar9,": ",pSVar11,
                                                            (MethodInfo *)0x0);
                                        pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                                            (pUVar2,pUStack_40,pSVar9,0,3,
                                                             (MethodInfo *)0x0);
                                        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                          UnityEngine_GameObject__GetComponent<object>
                                                    (pUVar10,MethodInfo_Text_GetComponent_Text);
                                          if (*(long *)(lVar16 + 0x90) != 0) {
                                            pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields)->
                                                     DoublePanelRight;
                                            iStack_4c = *(int32_t *)
                                                         (*(long *)(lVar16 + 0x90) + 0x14);
                                            pSVar11 = System_Int32__ToString
                                                                ((int32_t)&iStack_4c,
                                                                 (MethodInfo *)0x0);
                                            pSVar9 = "APG";
                                            if (DAT_057047ed == '\0') {
                                              il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                                              il2cpp_init_method_metadata(&": ");
                                              DAT_057047ed = '\x01';
                                            }
                                            pSVar9 = System_String__Concat
                                                               (pSVar9,": ",pSVar11,
                                                                (MethodInfo *)0x0);
                                            pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                                                (pUVar2,pUStack_40,pSVar9,0,3,
                                                                 (MethodInfo *)0x0);
                                            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                              UnityEngine_GameObject__GetComponent<object>
                                                        (pUVar10,MethodInfo_Text_GetComponent_Text);
                                              if (*(long *)(lVar16 + 0x88) != 0) {
                                                pUVar2 = ((UI_BasePanel_Fields *)&pUStack_48->fields
                                                         )->DoublePanelRight;
                                                iStack_4c = *(int32_t *)
                                                             (*(long *)(lVar16 + 0x88) + 0x14);
                                                pSVar11 = System_Int32__ToString
                                                                    ((int32_t)&iStack_4c,
                                                                     (MethodInfo *)0x0);
                                                pSVar9 = "Thunder spear";
                                                if (DAT_057047ed == '\0') {
                                                  il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                                                  il2cpp_init_method_metadata(&": ");
                                                  DAT_057047ed = '\x01';
                                                }
                                                pSVar9 = System_String__Concat
                                                                   (pSVar9,": ",pSVar11,
                                                                    (MethodInfo *)0x0);
                                                pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                                                    (pUVar2,pUStack_40,pSVar9,0,3,
                                                                     (MethodInfo *)0x0);
                                                if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                                  UnityEngine_GameObject__GetComponent<object>
                                                            (pUVar10,MethodInfo_Text_GetComponent_Text);
                                                  if (*(long *)(lVar16 + 0x98) != 0) {
                                                    pUVar2 = ((UI_BasePanel_Fields *)
                                                             &pUStack_48->fields)->DoublePanelRight;
                                                    iStack_4c = *(int32_t *)
                                                                 (*(long *)(lVar16 + 0x98) + 0x14);
                                                    pSVar11 = System_Int32__ToString
                                                                        ((int32_t)&iStack_4c,
                                                                         (MethodInfo *)0x0);
                                                    pSVar9 = "Titan";
                                                    if (DAT_057047ed == '\0') {
                                                      il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                                                      il2cpp_init_method_metadata(&": ");
                                                      DAT_057047ed = '\x01';
                                                    }
                                                    pSVar9 = System_String__Concat
                                                                       (pSVar9,": ",pSVar11,
                                                                        (MethodInfo *)0x0);
                                                    pUVar10 = UI_ElementFactory__CreateDefaultLabel
                                                                        (pUVar2,pUStack_40,pSVar9,0,
                                                                         3,(MethodInfo *)0x0);
                                                    if (pUVar10 != (UnityEngine_GameObject_o *)0x0)
                                                    {
                                                      UnityEngine_GameObject__GetComponent<object>
                                                                (pUVar10,MethodInfo_Text_GetComponent_Text);
                                                      if (*(long *)(lVar16 + 0xa0) != 0) {
                                                        pUVar2 = ((UI_BasePanel_Fields *)
                                                                 &pUStack_48->fields)->
                                                                 DoublePanelRight;
                                                        iStack_4c = *(int32_t *)
                                                                     (*(long *)(lVar16 + 0xa0) +
                                                                     0x14);
                                                        pSVar11 = System_Int32__ToString
                                                                            ((int32_t)&iStack_4c,
                                                                             (MethodInfo *)0x0);
                                                        pSVar9 = "Other";
                                                        if (DAT_057047ed == '\0') {
                                                          il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
                                                          il2cpp_init_method_metadata(&": ");
                                                          DAT_057047ed = '\x01';
                                                        }
                                                        pSVar9 = System_String__Concat
                                                                           (pSVar9,": ",
                                                                            pSVar11,(MethodInfo *)
                                                                                    0x0);
                                                        pUVar10 = 
                                                  UI_ElementFactory__CreateDefaultLabel
                                                            (pUVar2,pUStack_40,pSVar9,0,3,
                                                             (MethodInfo *)0x0);
                                                  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                                                    UnityEngine_GameObject__GetComponent<object>
                                                              (pUVar10,MethodInfo_Text_GetComponent_Text);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_040ed724:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileStatsPanel$$CreateStatLabel
// il2cpp: void UI_EditProfileStatsPanel__CreateStatLabel (UI_EditProfileStatsPanel_o* __this, UnityEngine_Transform_o* panel, UI_ElementStyle_o* style, System_String_o* title, System_String_o* value, const MethodInfo* method);
// 0x40ed890

void UI_EditProfileStatsPanel__CreateStatLabel
               (UI_EditProfileStatsPanel_o *__this,UnityEngine_Transform_o *panel,
               UI_ElementStyle_o *style,System_String_o *title,System_String_o *value,
               MethodInfo *method)

{
  System_String_o *title_00;
  UnityEngine_GameObject_o *__this_00;
  
  if (DAT_057047ed == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&": ");
    DAT_057047ed = '\x01';
  }
  title_00 = System_String__Concat(title,": ",value,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__CreateDefaultLabel(panel,style,title_00,0,3,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Text_GetComponent_Text);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileStatsPanel$$CreateTitleLabel
// il2cpp: void UI_EditProfileStatsPanel__CreateTitleLabel (UI_EditProfileStatsPanel_o* __this, UnityEngine_Transform_o* panel, UI_ElementStyle_o* style, System_String_o* title, const MethodInfo* method);
// 0x40ed820

void UI_EditProfileStatsPanel__CreateTitleLabel
               (UI_EditProfileStatsPanel_o *__this,UnityEngine_Transform_o *panel,
               UI_ElementStyle_o *style,System_String_o *title,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  if (DAT_057047ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    DAT_057047ee = '\x01';
  }
  __this_00 = UI_ElementFactory__CreateDefaultLabel(panel,style,title,1,3,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Text_GetComponent_Text);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EditProfileStatsPanel$$.ctor
// il2cpp: void UI_EditProfileStatsPanel___ctor (UI_EditProfileStatsPanel_o* __this, const MethodInfo* method);
// 0x40ed930

void UI_EditProfileStatsPanel___ctor(UI_EditProfileStatsPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}



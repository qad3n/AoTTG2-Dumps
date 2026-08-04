// Type: UI.StylebarHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/StylebarHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/StylebarHandler.cs
// --------------------------------

// UI.StylebarHandler$$Awake
// il2cpp: void UI_StylebarHandler__Awake (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x43ea920

void UI_StylebarHandler__Awake(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  UI_StylebarPopup_o **ppUVar1;
  UnityEngine_UI_Text_o *pUVar2;
  System_String_array *pSVar3;
  UnityEngine_UI_RectMask2D_o *pUVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar6;
  UnityEngine_Transform_o *parent;
  UI_StylebarPopup_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  System_String_array *values;
  System_String_o *pSVar9;
  undefined8 uVar10;
  uint uVar11;
  MethodInfo *method_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar12;
  System_String_o *pSVar13;
  System_String_array *pSVar14;
  UnityEngine_UI_Image_o *pUVar15;
  undefined8 in_R8;
  undefined8 in_R9;
  long lVar16;
  ulong uVar17;
  System_String_array *pSVar18;
  float value;
  
  if (g_data_057ae4ed == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_StylebarPopup_CreateDefaultPopup_StylebarPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_StylebarScaler_AddComponent_StylebarScaler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"<color=#");
    il2cpp_runtime_helper_023445d0(&"</color>");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&">");
    g_data_057ae4ed = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = (UI_StylebarPopup_o *)UI_ElementFactory__CreateDefaultPopup_object_(parent,0,MethodInfo_StylebarPopup_CreateDefaultPopup_StylebarPopup);
  ppUVar1 = &(__this->fields)._styleBarPopup;
  (__this->fields)._styleBarPopup = pUVar7;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar7 = (__this->fields)._styleBarPopup;
  if (pUVar7 != (UI_StylebarPopup_o *)0x0) {
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar8,5,5,(UnityEngine_Vector2_o)0xc1a00000,(MethodInfo *)0x0);
    if ((*ppUVar1 != (UI_StylebarPopup_o *)0x0) &&
       (pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__AddComponent_object_(pUVar8,MethodInfo_StylebarScaler_AddComponent_StylebarScaler);
      if ((*ppUVar1 != (UI_StylebarPopup_o *)0x0) &&
         (pUVar15 = ((*ppUVar1)->fields)._bladeFill, pUVar15 != (UnityEngine_UI_Image_o *)0x0)) {
        UnityEngine_UI_Image__set_fillAmount(pUVar15,1.0,(MethodInfo *)0x0);
        uVar10 = "";
        pUVar7 = *ppUVar1;
        if ((pUVar7 != (UI_StylebarPopup_o *)0x0) &&
           (pUVar2 = (pUVar7->fields)._scoreLabel, pUVar2 != (UnityEngine_UI_Text_o *)0x0)) {
          (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                    (pUVar2,"",(pUVar2->klass->vtable)._75_set_text.method);
          pUVar2 = (pUVar7->fields)._bottomLabel;
          if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                      (pUVar2,uVar10,(pUVar2->klass->vtable)._75_set_text.method);
            uVar10 = "";
            pUVar7 = *ppUVar1;
            if ((pUVar7 != (UI_StylebarPopup_o *)0x0) &&
               (pUVar2 = (pUVar7->fields)._letterLabel, pUVar2 != (UnityEngine_UI_Text_o *)0x0)) {
              (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                        (pUVar2,"",(pUVar2->klass->vtable)._75_set_text.method);
              pUVar2 = (pUVar7->fields)._sentenceLabel;
              if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                          (pUVar2,uVar10,(pUVar2->klass->vtable)._75_set_text.method);
                if (*ppUVar1 != (UI_StylebarPopup_o *)0x0) {
                  UI_StylebarPopup__SetRank(*ppUVar1,0,method_00);
                  pSVar18 = (__this->fields).Letters;
                  if (pSVar18 != (System_String_array *)0x0) {
                    lVar16 = 0x20;
                    uVar17 = 0;
                    do {
                      if ((long)(int)pSVar18->max_length <= (long)uVar17) {
                        return;
                      }
                      uVar12 = 5;
                      pSVar14 = TypeInfo_string;
                      values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                      pSVar9 = "<color=#";
                      if (values == (System_String_array *)0x0) break;
                      if ((int)values->max_length == 0) {
label_043eac69:
                        uVar10 = il2cpp_runtime_helper_022b2ca0();
                        pUVar15 = (UnityEngine_UI_Image_o *)pSVar14->m_Items[0x15];
                        if (pUVar15 != (UnityEngine_UI_Image_o *)0x0) {
                          UnityEngine_UI_Image__set_fillAmount(pUVar15,value,(MethodInfo *)0x0);
                          return;
                        }
                        il2cpp_runtime_helper_022b2c90();
                        pUVar4 = (pUVar15->fields).m_ParentMask;
                        if (pUVar4 != (UnityEngine_UI_RectMask2D_o *)0x0) {
                          (*pUVar4->klass[2].static_fields)();
                          plVar5 = *(long **)&(pUVar15->fields).m_Maskable;
                          if (plVar5 != (long *)0x0) {
                            UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x5e8);
                            (*UNRECOVERED_JUMPTABLE_00)
                                      (plVar5,extraout_RDX,*(undefined8 *)(*plVar5 + 0x5f0),
                                       UNRECOVERED_JUMPTABLE_00);
                            return;
                          }
                        }
                        lVar16 = 0;
                        il2cpp_runtime_helper_022b2c90();
                        if (*(long **)(lVar16 + 0xa8) != (long *)0x0) {
                          (**(code **)(**(long **)(lVar16 + 0xa8) + 0x5e8))();
                          plVar5 = *(long **)(lVar16 + 0xb0);
                          if (plVar5 != (long *)0x0) {
                            UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar5 + 0x5e8);
                            (*UNRECOVERED_JUMPTABLE_00)
                                      (plVar5,extraout_RDX_00,*(undefined8 *)(*plVar5 + 0x5f0),
                                       UNRECOVERED_JUMPTABLE_00,in_R8,in_R9,values,__this,uVar10);
                            return;
                          }
                        }
                        lVar16 = 0;
                        il2cpp_runtime_helper_022b2c90();
                        uVar11 = 0;
                        if (-1 < (int)uVar12) {
                          uVar11 = uVar12;
                        }
                        uVar12 = 9;
                        if ((int)uVar11 < 10) {
                          uVar12 = uVar11;
                        }
                        if (uVar12 == *(uint *)(lVar16 + 0xe8)) {
                          return;
                        }
                        *(uint *)(lVar16 + 0xe8) = uVar12;
                        lVar6 = *(long *)(lVar16 + 0xd8);
                        if (lVar6 != 0) {
                          if (*(uint *)(lVar6 + 0x18) <= uVar12) goto label_043eadd7;
                          if (*(UnityEngine_UI_Image_o **)(lVar16 + 200) != (UnityEngine_UI_Image_o *)0x0) {
                            UnityEngine_UI_Image__set_sprite
                                      (*(UnityEngine_UI_Image_o **)(lVar16 + 200),
                                       *(UnityEngine_Sprite_o **)(lVar6 + 0x20 + (ulong)uVar12 * 8),
                                       (MethodInfo *)0x0);
                            lVar6 = *(long *)(lVar16 + 0xe0);
                            if (lVar6 != 0) {
                              if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar16 + 0xe8)) goto label_043eadd7;
                              if (*(UnityEngine_UI_Image_o **)(lVar16 + 0xd0) != (UnityEngine_UI_Image_o *)0x0
                                 ) {
                                UnityEngine_UI_Image__set_sprite
                                          (*(UnityEngine_UI_Image_o **)(lVar16 + 0xd0),
                                           *(UnityEngine_Sprite_o **)
                                            (lVar6 + 0x20 + (long)(int)*(uint *)(lVar16 + 0xe8) * 8),
                                           (MethodInfo *)0x0);
                                return;
                              }
                            }
                          }
                        }
                        il2cpp_runtime_helper_022b2c90();
label_043eadd7:
                        il2cpp_runtime_helper_022b2ca0();
                        return;
                      }
                      pSVar14 = (System_String_array *)values->m_Items;
                      values->m_Items[0] = "<color=#";
                      il2cpp_runtime_helper_022b4080();
                      uVar12 = (uint)pSVar9;
                      pSVar3 = (__this->fields).ColorTags;
                      if (pSVar3 == (System_String_array *)0x0) break;
                      if (((uint)pSVar3->max_length <= uVar17) || ((uint)values->max_length < 2))
                      goto label_043eac69;
                      pSVar9 = pSVar3->m_Items[uVar17];
                      pSVar14 = (System_String_array *)(values->m_Items + 1);
                      values->m_Items[1] = pSVar9;
                      il2cpp_runtime_helper_022b4080();
                      pSVar13 = ">";
                      uVar12 = (uint)pSVar9;
                      if ((uint)values->max_length < 3) goto label_043eac69;
                      pSVar14 = (System_String_array *)(values->m_Items + 2);
                      values->m_Items[2] = ">";
                      il2cpp_runtime_helper_022b4080();
                      uVar12 = (uint)pSVar13;
                      pSVar3 = (__this->fields).Letters;
                      if (pSVar3 == (System_String_array *)0x0) break;
                      if (((uint)pSVar3->max_length <= uVar17) || ((uint)values->max_length < 4))
                      goto label_043eac69;
                      pSVar9 = pSVar3->m_Items[uVar17];
                      pSVar14 = (System_String_array *)(values->m_Items + 3);
                      values->m_Items[3] = pSVar9;
                      il2cpp_runtime_helper_022b4080();
                      uVar12 = (uint)pSVar9;
                      if ((uint)values->max_length < 5) goto label_043eac69;
                      values->m_Items[4] = "</color>";
                      il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                      uVar12 = 0;
                      pSVar14 = values;
                      pSVar9 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                      if ((uint)pSVar18->max_length <= uVar17) goto label_043eac69;
                      *(System_String_o **)((long)pSVar18->m_Items + lVar16 + -0x20) = pSVar9;
                      il2cpp_runtime_helper_022b4080((long)pSVar18->m_Items + lVar16 + -0x20,pSVar9);
                      uVar17 = uVar17 + 1;
                      pSVar18 = (__this->fields).Letters;
                      lVar16 = lVar16 + 8;
                    } while (pSVar18 != (System_String_array *)0x0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.StylebarHandler$$GetRank
// il2cpp: int32_t UI_StylebarHandler__GetRank (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x43eade0

int32_t UI_StylebarHandler__GetRank(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  return (__this->fields)._rank;
}


// UI.StylebarHandler$$OnHit
// il2cpp: void UI_StylebarHandler__OnHit (UI_StylebarHandler_o* __this, int32_t damage, const MethodInfo* method);
// 0x43eadf0

void UI_StylebarHandler__OnHit(UI_StylebarHandler_o *__this,int32_t damage,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  UI_StylebarPopup_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  System_String_array *pSVar7;
  UnityEngine_UI_Image_o *__this_00;
  int iVar8;
  uint in_EAX;
  int32_t iVar9;
  System_String_o *pSVar10;
  UI_StylebarHandler_o *str0;
  System_String_o *str2;
  UI_StylebarHandler_o *pUVar11;
  System_String_array *pSVar12;
  System_Single_array *pSVar13;
  System_Int32_array *pSVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  MethodInfo *pMVar19;
  MethodInfo *method_00;
  ulong uVar20;
  MethodInfo *pMVar21;
  UI_StylebarHandler_o *pUVar22;
  bool bVar23;
  float fVar24;
  float __this_01;
  float fVar25;
  undefined8 uStack_28;
  
  pUVar22 = __this;
  uStack_28._0_4_ = in_EAX;
  if (g_data_057ae4ee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"x");
    il2cpp_runtime_helper_023445d0(&"!");
    il2cpp_runtime_helper_023445d0(&"Hit");
    pUVar22 = (UI_StylebarHandler_o *)&"Hits";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4ee = '\x01';
  }
  uVar16 = (uint)uStack_28;
  uStack_28 = (ulong)(uint)uStack_28;
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0)) {
    if (*(char *)(lVar4 + 0x11) == '\0') {
      return;
    }
    fVar24 = (__this->fields)._points;
    if (damage < 0) {
      if ((fVar24 == 0.0) && (!NAN(fVar24))) {
        fVar24 = fVar24 + 1.0;
        (__this->fields)._points = fVar24;
        pSVar14 = (__this->fields).PointThresholds;
        if (pSVar14 == (System_Int32_array *)0x0) goto label_043eb144;
        iVar3 = (__this->fields)._rank;
        uVar15 = (uint)pSVar14->max_length;
        uVar17 = (ulong)uVar15;
        if (uVar17 != 0 && -1 < (long)(uVar17 << 0x20)) {
          pUVar22 = (UI_StylebarHandler_o *)(long)(int)uVar15;
          uVar20 = 0;
          do {
            if (uVar17 == uVar20) goto label_043eb13f;
            if (fVar24 <= (float)pSVar14->m_Items[uVar20]) {
              uVar15 = (uint)uVar20;
              (__this->fields)._rank = uVar15;
              goto joined_r0x043eb01f;
            }
            uVar20 = uVar20 + 1;
          } while ((long)uVar20 < (long)pUVar22);
        }
        (__this->fields)._rank = uVar15;
joined_r0x043eb01f:
        iVar8 = iVar3 - uVar15;
        bVar23 = SBORROW4(iVar3,uVar15);
        if ((int)uVar15 < iVar3) {
          if ((char)(__this->fields)._lostRank != '\0') goto label_043eaf69;
label_043eb001:
          *(undefined1 *)&(__this->fields)._lostRank = 1;
        }
        else {
label_043eb021:
          if (bVar23 != iVar8 < 0) {
            *(undefined1 *)&(__this->fields)._lostRank = 0;
          }
        }
      }
label_043eb027:
      uStack_28 = CONCAT44((int)fVar24,uVar16);
      pSVar10 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
      pUVar22 = (UI_StylebarHandler_o *)System_Int32__ToString((int)__this + 0x58,(MethodInfo *)0x0);
      if ((__this->fields)._hits < 2) {
        puVar18 = &"Hit";
      }
      else {
        puVar18 = &"Hits";
      }
      str0 = (UI_StylebarHandler_o *)
             System_String__Concat_3af7150
                       ((System_String_o *)pUVar22,(System_String_o *)*puVar18,"\n",(MethodInfo *)0x0)
      ;
      uVar16 = (__this->fields)._chainKillRank;
      pUVar11 = str0;
      if (0 < (long)(int)uVar16) {
        pSVar13 = (__this->fields).Multipliers;
        if (pSVar13 == (System_Single_array *)0x0) goto label_043eb144;
        if ((uint)pSVar13->max_length <= uVar16) goto label_043eb13f;
        str2 = System_Single__ToString(__this_01,(MethodInfo *)(pSVar13->m_Items + (int)uVar16));
        pUVar11 = (UI_StylebarHandler_o *)
                  System_String__Concat_3af7470
                            ((System_String_o *)str0,"x",str2,"!",(MethodInfo *)0x0);
        pUVar22 = str0;
      }
      pUVar5 = (__this->fields)._styleBarPopup;
      if (pUVar5 != (UI_StylebarPopup_o *)0x0) {
        pUVar6 = (pUVar5->fields)._scoreLabel;
        pUVar22 = (UI_StylebarHandler_o *)0x0;
        if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                    (pUVar6,pSVar10,(pUVar6->klass->vtable)._75_set_text.method);
          pUVar6 = (pUVar5->fields)._bottomLabel;
          pUVar22 = (UI_StylebarHandler_o *)0x0;
          if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                      (pUVar6,pUVar11,(pUVar6->klass->vtable)._75_set_text.method);
            UI_StylebarHandler__UpdateLabels(__this,(MethodInfo *)pUVar11);
            pUVar5 = (__this->fields)._styleBarPopup;
            pUVar22 = (UI_StylebarHandler_o *)0x0;
            if (pUVar5 != (UI_StylebarPopup_o *)0x0) {
              (*(pUVar5->klass->vtable)._21_Show.methodPtr)(pUVar5,(pUVar5->klass->vtable)._21_Show.method);
              return;
            }
          }
        }
      }
    }
    else {
      pSVar13 = (__this->fields).Multipliers;
      if (pSVar13 != (System_Single_array *)0x0) {
        uVar15 = (__this->fields)._chainKillRank;
        uVar2 = (uint)pSVar13->max_length;
        if (uVar15 < uVar2) {
          fVar24 = fVar24 + (float)(int)((float)(damage + 200) * pSVar13->m_Items[(int)uVar15]);
          (__this->fields)._points = fVar24;
          (__this->fields)._chainKillRank = ((int)uVar15 < (int)(uVar2 - 1)) + uVar15;
          (__this->fields)._chainTime = 5.0;
          piVar1 = &(__this->fields)._hits;
          *piVar1 = *piVar1 + 1;
          pSVar14 = (__this->fields).PointThresholds;
          if (pSVar14 != (System_Int32_array *)0x0) {
            iVar3 = (__this->fields)._rank;
            uVar15 = (uint)pSVar14->max_length;
            uVar17 = (ulong)uVar15;
            if (uVar17 != 0 && -1 < (long)(uVar17 << 0x20)) {
              pUVar22 = (UI_StylebarHandler_o *)(long)(int)uVar15;
              uVar20 = 0;
              do {
                if (uVar17 == uVar20) goto label_043eb13f;
                if (fVar24 <= (float)pSVar14->m_Items[uVar20]) {
                  uVar15 = (uint)uVar20;
                  (__this->fields)._rank = uVar15;
                  goto joined_r0x043eb00f;
                }
                uVar20 = uVar20 + 1;
              } while ((long)uVar20 < (long)pUVar22);
            }
            (__this->fields)._rank = uVar15;
joined_r0x043eb00f:
            iVar8 = iVar3 - uVar15;
            bVar23 = SBORROW4(iVar3,uVar15);
            if (iVar3 <= (int)uVar15) goto label_043eb021;
            if ((char)(__this->fields)._lostRank == '\0') goto label_043eb001;
label_043eaf69:
            (__this->fields)._hits = 0;
            (__this->fields)._points = 0.0;
            (__this->fields)._rank = 0;
            fVar24 = 0.0;
            goto label_043eb027;
          }
        }
        else {
label_043eb13f:
          il2cpp_runtime_helper_022b2ca0();
        }
      }
    }
  }
label_043eb144:
  il2cpp_runtime_helper_022b2c90();
  pSVar14 = (pUVar22->fields).PointThresholds;
  if (pSVar14 != (System_Int32_array *)0x0) {
    iVar3 = (pUVar22->fields)._rank;
    uVar16 = (uint)pSVar14->max_length;
    uVar17 = (ulong)uVar16;
    if (uVar17 != 0 && -1 < (long)(uVar17 << 0x20)) {
      uVar20 = 0;
      do {
        if (uVar17 <= uVar20) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_043eb1de;
        }
        if ((pUVar22->fields)._points <= (float)pSVar14->m_Items[uVar20]) {
          uVar16 = (uint)uVar20;
          (pUVar22->fields)._rank = uVar16;
          goto joined_r0x043eb1c9;
        }
        uVar20 = uVar20 + 1;
      } while ((long)uVar20 < (long)(int)uVar16);
    }
    (pUVar22->fields)._rank = uVar16;
joined_r0x043eb1c9:
    if (iVar3 <= (int)uVar16) {
      if (iVar3 < (int)uVar16) {
        *(undefined1 *)&(pUVar22->fields)._lostRank = 0;
      }
      return;
    }
    if ((char)(pUVar22->fields)._lostRank != '\0') {
      (pUVar22->fields)._hits = 0;
      (pUVar22->fields)._points = 0.0;
      (pUVar22->fields)._rank = 0;
      return;
    }
    *(undefined1 *)&(pUVar22->fields)._lostRank = 1;
    return;
  }
label_043eb1de:
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = (pUVar22->fields).Letters;
  pUVar11 = pUVar22;
  if (pSVar12 == (System_String_array *)0x0) {
label_043eb2c5:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar16 = (pUVar22->fields)._rank;
    if (uVar16 < (uint)pSVar12->max_length) {
      pSVar7 = (pUVar22->fields).Sentences;
      if (pSVar7 != (System_String_array *)0x0) {
        if ((uint)pSVar7->max_length <= uVar16) goto label_043eb2ca;
        pUVar5 = (pUVar22->fields)._styleBarPopup;
        if (pUVar5 != (UI_StylebarPopup_o *)0x0) {
          pUVar6 = (pUVar5->fields)._letterLabel;
          pUVar11 = (UI_StylebarHandler_o *)0x0;
          if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
            pMVar21 = (MethodInfo *)pSVar7->m_Items[(int)uVar16];
            (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                      (pUVar6,pSVar12->m_Items[(int)uVar16],(pUVar6->klass->vtable)._75_set_text.method);
            pUVar6 = (pUVar5->fields)._sentenceLabel;
            pUVar11 = (UI_StylebarHandler_o *)0x0;
            if (pUVar6 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                        (pUVar6,pMVar21,(pUVar6->klass->vtable)._75_set_text.method);
              pUVar5 = (pUVar22->fields)._styleBarPopup;
              pUVar11 = pUVar22;
              iVar9 = UI_StylebarHandler__GetRankPercent(pUVar22,pMVar21);
              if (pUVar5 != (UI_StylebarPopup_o *)0x0) {
                __this_00 = (pUVar5->fields)._bladeFill;
                pUVar11 = (UI_StylebarHandler_o *)0x0;
                if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                  UnityEngine_UI_Image__set_fillAmount(__this_00,(float)iVar9 * 0.01,(MethodInfo *)0x0);
                  pUVar5 = (pUVar22->fields)._styleBarPopup;
                  pUVar11 = (UI_StylebarHandler_o *)0x0;
                  if (pUVar5 != (UI_StylebarPopup_o *)0x0) {
                    UI_StylebarPopup__SetRank(pUVar5,(pUVar22->fields)._rank,method_00);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_043eb2c5;
    }
  }
label_043eb2ca:
  il2cpp_runtime_helper_022b2ca0();
  uVar16 = (pUVar11->fields)._rank;
  if ((int)uVar16 < 1) {
    if (uVar16 != 0) {
      return;
    }
    pSVar14 = (pUVar11->fields).PointThresholds;
    if (pSVar14 == (System_Int32_array *)0x0) goto label_043eb35b;
    if ((int)pSVar14->max_length != 0) {
      return;
    }
  }
  else {
    pSVar14 = (pUVar11->fields).PointThresholds;
    if (pSVar14 == (System_Int32_array *)0x0) {
label_043eb35b:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar15 = (uint)pSVar14->max_length;
      if ((int)uVar15 <= (int)uVar16) {
        return;
      }
      if ((uVar16 - 1 < uVar15) && (uVar16 < uVar15)) {
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pUVar22 = pUVar11;
  if (g_data_057ae4ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUVar22 = (UI_StylebarHandler_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4ef = '\x01';
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0)) {
    if (*(char *)(lVar4 + 0x11) == '\0') {
      pUVar5 = (pUVar11->fields)._styleBarPopup;
      pUVar22 = (UI_StylebarHandler_o *)0x0;
      if (pUVar5 != (UI_StylebarPopup_o *)0x0) {
        (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
        (pUVar11->fields)._points = 0.0;
        return;
      }
    }
    else {
      fVar24 = (pUVar11->fields)._points;
      if (fVar24 <= 0.0) {
        pUVar5 = (pUVar11->fields)._styleBarPopup;
        pUVar22 = (UI_StylebarHandler_o *)0x0;
        if (pUVar5 != (UI_StylebarPopup_o *)0x0) {
          (*(pUVar5->klass->vtable)._22_Hide.methodPtr)(pUVar5,(pUVar5->klass->vtable)._22_Hide.method);
          fVar24 = (pUVar11->fields)._chainTime;
joined_r0x043eb4ff:
          if (0.0 < fVar24) {
            fVar25 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            (pUVar11->fields)._chainTime = fVar24 - fVar25;
            return;
          }
          (pUVar11->fields)._chainTime = 0.0;
          (pUVar11->fields)._chainKillRank = 0;
          return;
        }
      }
      else {
        pSVar14 = (pUVar11->fields).PointDecays;
        if (pSVar14 != (System_Int32_array *)0x0) {
          uVar16 = (pUVar11->fields)._rank;
          if (uVar16 < (uint)pSVar14->max_length) {
            iVar3 = pSVar14->m_Items[(int)uVar16];
            pUVar22 = (UI_StylebarHandler_o *)0x0;
            fVar25 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            fVar24 = fVar24 + fVar25 * (float)iVar3 * -10.0;
            (pUVar11->fields)._points = fVar24;
            pSVar14 = (pUVar11->fields).PointThresholds;
            if (pSVar14 != (System_Int32_array *)0x0) {
              iVar3 = (pUVar11->fields)._rank;
              uVar16 = (uint)pSVar14->max_length;
              pMVar19 = (MethodInfo *)(ulong)uVar16;
              pMVar21 = (MethodInfo *)((long)pMVar19 << 0x20);
              if (pMVar19 != (MethodInfo *)0x0 && -1 < (long)pMVar21) {
                pUVar22 = (UI_StylebarHandler_o *)(long)(int)uVar16;
                pMVar21 = (MethodInfo *)0x0;
                do {
                  if (pMVar19 == pMVar21) goto label_043eb560;
                  if (fVar24 <= (float)pSVar14->m_Items[(long)pMVar21]) {
                    uVar16 = (uint)pMVar21;
                    (pUVar11->fields)._rank = uVar16;
                    goto joined_r0x043eb52b;
                  }
                  pMVar21 = (MethodInfo *)((long)&pMVar21->methodPointer + 1);
                } while ((long)pMVar21 < (long)pUVar22);
              }
              (pUVar11->fields)._rank = uVar16;
joined_r0x043eb52b:
              if ((int)uVar16 < iVar3) {
                if ((char)(pUVar11->fields)._lostRank == '\0') {
                  *(undefined1 *)&(pUVar11->fields)._lostRank = 1;
                }
                else {
                  (pUVar11->fields)._hits = 0;
                  (pUVar11->fields)._points = 0.0;
                  (pUVar11->fields)._rank = 0;
                }
              }
              else if (iVar3 < (int)uVar16) {
                *(undefined1 *)&(pUVar11->fields)._lostRank = 0;
              }
              UI_StylebarHandler__UpdateLabels(pUVar11,pMVar21);
              fVar24 = (pUVar11->fields)._chainTime;
              goto joined_r0x043eb4ff;
            }
          }
          else {
label_043eb560:
            il2cpp_runtime_helper_022b2ca0();
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4);
    il2cpp_runtime_helper_023445d0(&fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58);
    il2cpp_runtime_helper_023445d0(&fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61);
    il2cpp_runtime_helper_023445d0(&"mazing!");
    il2cpp_runtime_helper_023445d0(&"S");
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"oppin!");
    il2cpp_runtime_helper_023445d0(&"ENITH");
    il2cpp_runtime_helper_023445d0(&"asual");
    il2cpp_runtime_helper_023445d0(&"BE81F7");
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    il2cpp_runtime_helper_023445d0(&"FA8258");
    il2cpp_runtime_helper_023445d0(&"XX");
    il2cpp_runtime_helper_023445d0(&"FF0000");
    il2cpp_runtime_helper_023445d0(&"eja Vu");
    il2cpp_runtime_helper_023445d0(&"pectacular!!");
    il2cpp_runtime_helper_023445d0(&"000000");
    il2cpp_runtime_helper_023445d0(&"SS");
    il2cpp_runtime_helper_023445d0(&"TREME!!!");
    il2cpp_runtime_helper_023445d0(&"ACFA58");
    il2cpp_runtime_helper_023445d0(&"TREEME!!!");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"SSS");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"F4FA58");
    il2cpp_runtime_helper_023445d0(&"ensational!");
    il2cpp_runtime_helper_023445d0(&"A");
    il2cpp_runtime_helper_023445d0(&"tylish!!!");
    il2cpp_runtime_helper_023445d0(&"FAAC58");
    g_data_057ae4f0 = '\x01';
  }
  pSVar12 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
  if (pSVar12 != (System_String_array *)0x0) {
    if ((int)pSVar12->max_length != 0) {
      pSVar12->m_Items[0] = "D";
      il2cpp_runtime_helper_022b4080(pSVar12->m_Items);
      if (1 < (uint)pSVar12->max_length) {
        pSVar12->m_Items[1] = "C";
        il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 1);
        if (2 < (uint)pSVar12->max_length) {
          pSVar12->m_Items[2] = "B";
          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 2);
          if (3 < (uint)pSVar12->max_length) {
            pSVar12->m_Items[3] = "A";
            il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 3);
            if (4 < (uint)pSVar12->max_length) {
              pSVar12->m_Items[4] = "S";
              il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 4);
              if (5 < (uint)pSVar12->max_length) {
                pSVar12->m_Items[5] = "SS";
                il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 5);
                if (6 < (uint)pSVar12->max_length) {
                  pSVar12->m_Items[6] = "SSS";
                  il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 6);
                  if (7 < (uint)pSVar12->max_length) {
                    pSVar12->m_Items[7] = "X";
                    il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 7);
                    if (8 < (uint)pSVar12->max_length) {
                      pSVar12->m_Items[8] = "XX";
                      il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 8);
                      if (9 < (uint)pSVar12->max_length) {
                        pSVar12->m_Items[9] = "Z";
                        il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 9);
                        (pUVar22->fields).Letters = pSVar12;
                        il2cpp_runtime_helper_022b4080(&(pUVar22->fields).Letters,pSVar12);
                        pSVar12 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                        if (pSVar12 == (System_String_array *)0x0) goto label_043ebc49;
                        if ((int)pSVar12->max_length != 0) {
                          pSVar12->m_Items[0] = "FFFFFF";
                          il2cpp_runtime_helper_022b4080(pSVar12->m_Items);
                          if (1 < (uint)pSVar12->max_length) {
                            pSVar12->m_Items[1] = "ACFA58";
                            il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 1);
                            if (2 < (uint)pSVar12->max_length) {
                              pSVar12->m_Items[2] = "F4FA58";
                              il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 2);
                              if (3 < (uint)pSVar12->max_length) {
                                pSVar12->m_Items[3] = "FAAC58";
                                il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 3);
                                if (4 < (uint)pSVar12->max_length) {
                                  pSVar12->m_Items[4] = "FA8258";
                                  il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 4);
                                  if (5 < (uint)pSVar12->max_length) {
                                    pSVar12->m_Items[5] = "BE81F7";
                                    il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 5);
                                    if (6 < (uint)pSVar12->max_length) {
                                      pSVar12->m_Items[6] = "FF0000";
                                      il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 6);
                                      if (7 < (uint)pSVar12->max_length) {
                                        pSVar12->m_Items[7] = "000000";
                                        il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 7);
                                        if (8 < (uint)pSVar12->max_length) {
                                          pSVar12->m_Items[8] = "000000";
                                          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 8);
                                          if (9 < (uint)pSVar12->max_length) {
                                            pSVar12->m_Items[9] = "000000";
                                            il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 9);
                                            (pUVar22->fields).ColorTags = pSVar12;
                                            il2cpp_runtime_helper_022b4080(&(pUVar22->fields).ColorTags,pSVar12);
                                            pSVar12 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                                            if (pSVar12 == (System_String_array *)0x0) goto label_043ebc49;
                                            if ((int)pSVar12->max_length != 0) {
                                              pSVar12->m_Items[0] = "eja Vu";
                                              il2cpp_runtime_helper_022b4080(pSVar12->m_Items);
                                              if (1 < (uint)pSVar12->max_length) {
                                                pSVar12->m_Items[1] = "asual";
                                                il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 1);
                                                if (2 < (uint)pSVar12->max_length) {
                                                  pSVar12->m_Items[2] = "oppin!";
                                                  il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 2);
                                                  if (3 < (uint)pSVar12->max_length) {
                                                    pSVar12->m_Items[3] = "mazing!";
                                                    il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 3);
                                                    if (4 < (uint)pSVar12->max_length) {
                                                      pSVar12->m_Items[4] = "ensational!";
                                                      il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 4);
                                                      if (5 < (uint)pSVar12->max_length) {
                                                        pSVar12->m_Items[5] = "pectacular!!";
                                                        il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 5);
                                                        if (6 < (uint)pSVar12->max_length) {
                                                          pSVar12->m_Items[6] = "tylish!!!";
                                                          il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 6);
                                                          if (7 < (uint)pSVar12->max_length) {
                                                            pSVar12->m_Items[7] = "TREME!!!";
                                                            il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 7);
                                                            if (8 < (uint)pSVar12->max_length) {
                                                              pSVar12->m_Items[8] = "TREEME!!!";
                                                              il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 8);
                                                              if (9 < (uint)pSVar12->max_length) {
                                                                pSVar12->m_Items[9] = "ENITH";
                                                                il2cpp_runtime_helper_022b4080(pSVar12->m_Items + 9);
                                                                (pUVar22->fields).Sentences = pSVar12;
                                                                il2cpp_runtime_helper_022b4080(&(pUVar22->fields).
                                                                                    Sentences,pSVar12);
                                                                pSVar13 = (System_Single_array *)
                                                                          il2cpp_runtime_helper_022b2a40(TypeInfo_float,9);
                                                                                                                                
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar13,fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58,
                                                                  (MethodInfo *)0x0);
                                                       (pUVar22->fields).Multipliers = pSVar13;
                                                       il2cpp_runtime_helper_022b4080(&(pUVar22->fields).Multipliers,
                                                                          pSVar13);
                                                       pSVar14 = (System_Int32_array *)
                                                                 il2cpp_runtime_helper_022b2a40(TypeInfo_int,9);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar14,fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4,
                                                                  (MethodInfo *)0x0);
                                                       (pUVar22->fields).PointThresholds = pSVar14;
                                                       il2cpp_runtime_helper_022b4080(&(pUVar22->fields).PointThresholds,
                                                                          pSVar14);
                                                       pSVar14 = (System_Int32_array *)
                                                                 il2cpp_runtime_helper_022b2a40(TypeInfo_int,10);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar14,fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61,
                                                                  (MethodInfo *)0x0);
                                                       (pUVar22->fields).PointDecays = pSVar14;
                                                       il2cpp_runtime_helper_022b4080(&(pUVar22->fields).PointDecays);
                                                       UnityEngine_MonoBehaviour___ctor
                                                                 ((UnityEngine_MonoBehaviour_o *)pUVar22,
                                                                  (MethodInfo *)0x0);
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
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_043ebc49:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.StylebarHandler$$UpdateRank
// il2cpp: void UI_StylebarHandler__UpdateRank (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x43eb150

void UI_StylebarHandler__UpdateRank(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_String_array *pSVar3;
  UI_StylebarPopup_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_Image_o *__this_00;
  long lVar6;
  int32_t iVar7;
  System_String_array *pSVar8;
  System_Single_array *array;
  System_Int32_array *pSVar9;
  uint uVar10;
  ulong uVar11;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  ulong uVar13;
  MethodInfo *pMVar14;
  UI_StylebarHandler_o *__this_01;
  UI_StylebarHandler_o *__this_02;
  float fVar15;
  float fVar16;
  
  pSVar9 = (__this->fields).PointThresholds;
  if (pSVar9 != (System_Int32_array *)0x0) {
    iVar1 = (__this->fields)._rank;
    uVar10 = (uint)pSVar9->max_length;
    uVar11 = (ulong)uVar10;
    if (uVar11 != 0 && -1 < (long)(uVar11 << 0x20)) {
      uVar13 = 0;
      do {
        if (uVar11 <= uVar13) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_043eb1de;
        }
        if ((__this->fields)._points <= (float)pSVar9->m_Items[uVar13]) {
          uVar10 = (uint)uVar13;
          (__this->fields)._rank = uVar10;
          goto joined_r0x043eb1c9;
        }
        uVar13 = uVar13 + 1;
      } while ((long)uVar13 < (long)(int)uVar10);
    }
    (__this->fields)._rank = uVar10;
joined_r0x043eb1c9:
    if (iVar1 <= (int)uVar10) {
      if (iVar1 < (int)uVar10) {
        *(undefined1 *)&(__this->fields)._lostRank = 0;
      }
      return;
    }
    if ((char)(__this->fields)._lostRank == '\0') {
      *(undefined1 *)&(__this->fields)._lostRank = 1;
      return;
    }
    (__this->fields)._hits = 0;
    (__this->fields)._points = 0.0;
    (__this->fields)._rank = 0;
    return;
  }
label_043eb1de:
  il2cpp_runtime_helper_022b2c90();
  pSVar8 = (__this->fields).Letters;
  __this_01 = __this;
  if (pSVar8 == (System_String_array *)0x0) {
label_043eb2c5:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar10 = (__this->fields)._rank;
    if (uVar10 < (uint)pSVar8->max_length) {
      pSVar3 = (__this->fields).Sentences;
      if (pSVar3 != (System_String_array *)0x0) {
        if ((uint)pSVar3->max_length <= uVar10) goto label_043eb2ca;
        pUVar4 = (__this->fields)._styleBarPopup;
        if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
          pUVar5 = (pUVar4->fields)._letterLabel;
          __this_01 = (UI_StylebarHandler_o *)0x0;
          if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
            pMVar14 = (MethodInfo *)pSVar3->m_Items[(int)uVar10];
            (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                      (pUVar5,pSVar8->m_Items[(int)uVar10],(pUVar5->klass->vtable)._75_set_text.method);
            pUVar5 = (pUVar4->fields)._sentenceLabel;
            __this_01 = (UI_StylebarHandler_o *)0x0;
            if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                        (pUVar5,pMVar14,(pUVar5->klass->vtable)._75_set_text.method);
              pUVar4 = (__this->fields)._styleBarPopup;
              __this_01 = __this;
              iVar7 = UI_StylebarHandler__GetRankPercent(__this,pMVar14);
              if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
                __this_00 = (pUVar4->fields)._bladeFill;
                __this_01 = (UI_StylebarHandler_o *)0x0;
                if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                  UnityEngine_UI_Image__set_fillAmount(__this_00,(float)iVar7 * 0.01,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields)._styleBarPopup;
                  __this_01 = (UI_StylebarHandler_o *)0x0;
                  if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
                    UI_StylebarPopup__SetRank(pUVar4,(__this->fields)._rank,method_00);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_043eb2c5;
    }
  }
label_043eb2ca:
  il2cpp_runtime_helper_022b2ca0();
  uVar10 = (__this_01->fields)._rank;
  if ((int)uVar10 < 1) {
    if (uVar10 != 0) {
      return;
    }
    pSVar9 = (__this_01->fields).PointThresholds;
    if (pSVar9 == (System_Int32_array *)0x0) goto label_043eb35b;
    if ((int)pSVar9->max_length != 0) {
      return;
    }
  }
  else {
    pSVar9 = (__this_01->fields).PointThresholds;
    if (pSVar9 == (System_Int32_array *)0x0) {
label_043eb35b:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar2 = (uint)pSVar9->max_length;
      if ((int)uVar2 <= (int)uVar10) {
        return;
      }
      if ((uVar10 - 1 < uVar2) && (uVar10 < uVar2)) {
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_02 = __this_01;
  if (g_data_057ae4ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_02 = (UI_StylebarHandler_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4ef = '\x01';
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) {
    if (*(char *)(lVar6 + 0x11) == '\0') {
      pUVar4 = (__this_01->fields)._styleBarPopup;
      __this_02 = (UI_StylebarHandler_o *)0x0;
      if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
        (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
        (__this_01->fields)._points = 0.0;
        return;
      }
    }
    else {
      fVar16 = (__this_01->fields)._points;
      if (fVar16 <= 0.0) {
        pUVar4 = (__this_01->fields)._styleBarPopup;
        __this_02 = (UI_StylebarHandler_o *)0x0;
        if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
          (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
          fVar16 = (__this_01->fields)._chainTime;
joined_r0x043eb4ff:
          if (fVar16 <= 0.0) {
            (__this_01->fields)._chainTime = 0.0;
            (__this_01->fields)._chainKillRank = 0;
            return;
          }
          fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this_01->fields)._chainTime = fVar16 - fVar15;
          return;
        }
      }
      else {
        pSVar9 = (__this_01->fields).PointDecays;
        if (pSVar9 != (System_Int32_array *)0x0) {
          uVar10 = (__this_01->fields)._rank;
          if (uVar10 < (uint)pSVar9->max_length) {
            iVar1 = pSVar9->m_Items[(int)uVar10];
            __this_02 = (UI_StylebarHandler_o *)0x0;
            fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            fVar16 = fVar16 + fVar15 * (float)iVar1 * -10.0;
            (__this_01->fields)._points = fVar16;
            pSVar9 = (__this_01->fields).PointThresholds;
            if (pSVar9 != (System_Int32_array *)0x0) {
              iVar1 = (__this_01->fields)._rank;
              uVar10 = (uint)pSVar9->max_length;
              pMVar12 = (MethodInfo *)(ulong)uVar10;
              pMVar14 = (MethodInfo *)((long)pMVar12 << 0x20);
              if (pMVar12 != (MethodInfo *)0x0 && -1 < (long)pMVar14) {
                __this_02 = (UI_StylebarHandler_o *)(long)(int)uVar10;
                pMVar14 = (MethodInfo *)0x0;
                do {
                  if (pMVar12 == pMVar14) goto label_043eb560;
                  if (fVar16 <= (float)pSVar9->m_Items[(long)pMVar14]) {
                    uVar10 = (uint)pMVar14;
                    (__this_01->fields)._rank = uVar10;
                    goto joined_r0x043eb52b;
                  }
                  pMVar14 = (MethodInfo *)((long)&pMVar14->methodPointer + 1);
                } while ((long)pMVar14 < (long)__this_02);
              }
              (__this_01->fields)._rank = uVar10;
joined_r0x043eb52b:
              if ((int)uVar10 < iVar1) {
                if ((char)(__this_01->fields)._lostRank == '\0') {
                  *(undefined1 *)&(__this_01->fields)._lostRank = 1;
                }
                else {
                  (__this_01->fields)._hits = 0;
                  (__this_01->fields)._points = 0.0;
                  (__this_01->fields)._rank = 0;
                }
              }
              else if (iVar1 < (int)uVar10) {
                *(undefined1 *)&(__this_01->fields)._lostRank = 0;
              }
              UI_StylebarHandler__UpdateLabels(__this_01,pMVar14);
              fVar16 = (__this_01->fields)._chainTime;
              goto joined_r0x043eb4ff;
            }
          }
          else {
label_043eb560:
            il2cpp_runtime_helper_022b2ca0();
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4);
    il2cpp_runtime_helper_023445d0(&fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58);
    il2cpp_runtime_helper_023445d0(&fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61);
    il2cpp_runtime_helper_023445d0(&"mazing!");
    il2cpp_runtime_helper_023445d0(&"S");
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"oppin!");
    il2cpp_runtime_helper_023445d0(&"ENITH");
    il2cpp_runtime_helper_023445d0(&"asual");
    il2cpp_runtime_helper_023445d0(&"BE81F7");
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    il2cpp_runtime_helper_023445d0(&"FA8258");
    il2cpp_runtime_helper_023445d0(&"XX");
    il2cpp_runtime_helper_023445d0(&"FF0000");
    il2cpp_runtime_helper_023445d0(&"eja Vu");
    il2cpp_runtime_helper_023445d0(&"pectacular!!");
    il2cpp_runtime_helper_023445d0(&"000000");
    il2cpp_runtime_helper_023445d0(&"SS");
    il2cpp_runtime_helper_023445d0(&"TREME!!!");
    il2cpp_runtime_helper_023445d0(&"ACFA58");
    il2cpp_runtime_helper_023445d0(&"TREEME!!!");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"SSS");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"F4FA58");
    il2cpp_runtime_helper_023445d0(&"ensational!");
    il2cpp_runtime_helper_023445d0(&"A");
    il2cpp_runtime_helper_023445d0(&"tylish!!!");
    il2cpp_runtime_helper_023445d0(&"FAAC58");
    g_data_057ae4f0 = '\x01';
  }
  pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
  if (pSVar8 != (System_String_array *)0x0) {
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = "D";
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = "C";
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
        if (2 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[2] = "B";
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2);
          if (3 < (uint)pSVar8->max_length) {
            pSVar8->m_Items[3] = "A";
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 3);
            if (4 < (uint)pSVar8->max_length) {
              pSVar8->m_Items[4] = "S";
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 4);
              if (5 < (uint)pSVar8->max_length) {
                pSVar8->m_Items[5] = "SS";
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 5);
                if (6 < (uint)pSVar8->max_length) {
                  pSVar8->m_Items[6] = "SSS";
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 6);
                  if (7 < (uint)pSVar8->max_length) {
                    pSVar8->m_Items[7] = "X";
                    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 7);
                    if (8 < (uint)pSVar8->max_length) {
                      pSVar8->m_Items[8] = "XX";
                      il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 8);
                      if (9 < (uint)pSVar8->max_length) {
                        pSVar8->m_Items[9] = "Z";
                        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 9);
                        (__this_02->fields).Letters = pSVar8;
                        il2cpp_runtime_helper_022b4080(&(__this_02->fields).Letters,pSVar8);
                        pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                        if (pSVar8 == (System_String_array *)0x0) goto label_043ebc49;
                        if ((int)pSVar8->max_length != 0) {
                          pSVar8->m_Items[0] = "FFFFFF";
                          il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
                          if (1 < (uint)pSVar8->max_length) {
                            pSVar8->m_Items[1] = "ACFA58";
                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
                            if (2 < (uint)pSVar8->max_length) {
                              pSVar8->m_Items[2] = "F4FA58";
                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2);
                              if (3 < (uint)pSVar8->max_length) {
                                pSVar8->m_Items[3] = "FAAC58";
                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 3);
                                if (4 < (uint)pSVar8->max_length) {
                                  pSVar8->m_Items[4] = "FA8258";
                                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 4);
                                  if (5 < (uint)pSVar8->max_length) {
                                    pSVar8->m_Items[5] = "BE81F7";
                                    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 5);
                                    if (6 < (uint)pSVar8->max_length) {
                                      pSVar8->m_Items[6] = "FF0000";
                                      il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 6);
                                      if (7 < (uint)pSVar8->max_length) {
                                        pSVar8->m_Items[7] = "000000";
                                        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 7);
                                        if (8 < (uint)pSVar8->max_length) {
                                          pSVar8->m_Items[8] = "000000";
                                          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 8);
                                          if (9 < (uint)pSVar8->max_length) {
                                            pSVar8->m_Items[9] = "000000";
                                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 9);
                                            (__this_02->fields).ColorTags = pSVar8;
                                            il2cpp_runtime_helper_022b4080(&(__this_02->fields).ColorTags,pSVar8);
                                            pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                                            if (pSVar8 == (System_String_array *)0x0) goto label_043ebc49;
                                            if ((int)pSVar8->max_length != 0) {
                                              pSVar8->m_Items[0] = "eja Vu";
                                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
                                              if (1 < (uint)pSVar8->max_length) {
                                                pSVar8->m_Items[1] = "asual";
                                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
                                                if (2 < (uint)pSVar8->max_length) {
                                                  pSVar8->m_Items[2] = "oppin!";
                                                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2);
                                                  if (3 < (uint)pSVar8->max_length) {
                                                    pSVar8->m_Items[3] = "mazing!";
                                                    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 3);
                                                    if (4 < (uint)pSVar8->max_length) {
                                                      pSVar8->m_Items[4] = "ensational!";
                                                      il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 4);
                                                      if (5 < (uint)pSVar8->max_length) {
                                                        pSVar8->m_Items[5] = "pectacular!!";
                                                        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 5);
                                                        if (6 < (uint)pSVar8->max_length) {
                                                          pSVar8->m_Items[6] = "tylish!!!";
                                                          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 6);
                                                          if (7 < (uint)pSVar8->max_length) {
                                                            pSVar8->m_Items[7] = "TREME!!!";
                                                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 7);
                                                            if (8 < (uint)pSVar8->max_length) {
                                                              pSVar8->m_Items[8] = "TREEME!!!";
                                                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 8);
                                                              if (9 < (uint)pSVar8->max_length) {
                                                                pSVar8->m_Items[9] = "ENITH";
                                                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 9);
                                                                (__this_02->fields).Sentences = pSVar8;
                                                                il2cpp_runtime_helper_022b4080(&(__this_02->fields).
                                                                                    Sentences,pSVar8);
                                                                array = (System_Single_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_float,9);
                                                                                                                                
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)array,fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58,
                                                                  (MethodInfo *)0x0);
                                                       (__this_02->fields).Multipliers = array;
                                                       il2cpp_runtime_helper_022b4080(&(__this_02->fields).Multipliers,
                                                                          array);
                                                       pSVar9 = (System_Int32_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_int,9);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar9,fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4,
                                                                  (MethodInfo *)0x0);
                                                       (__this_02->fields).PointThresholds = pSVar9;
                                                       il2cpp_runtime_helper_022b4080(&(__this_02->fields).PointThresholds
                                                                          ,pSVar9);
                                                       pSVar9 = (System_Int32_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_int,10);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar9,fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61,
                                                                  (MethodInfo *)0x0);
                                                       (__this_02->fields).PointDecays = pSVar9;
                                                       il2cpp_runtime_helper_022b4080(&(__this_02->fields).PointDecays);
                                                       UnityEngine_MonoBehaviour___ctor
                                                                 ((UnityEngine_MonoBehaviour_o *)__this_02,
                                                                  (MethodInfo *)0x0);
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
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_043ebc49:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.StylebarHandler$$UpdateLabels
// il2cpp: void UI_StylebarHandler__UpdateLabels (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x43eb1f0

void UI_StylebarHandler__UpdateLabels(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_String_array *pSVar3;
  UI_StylebarPopup_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_Image_o *__this_00;
  long lVar6;
  int32_t iVar7;
  System_String_array *pSVar8;
  System_Single_array *array;
  System_Int32_array *pSVar9;
  uint uVar10;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  MethodInfo *pMVar12;
  UI_StylebarHandler_o *__this_01;
  UI_StylebarHandler_o *__this_02;
  float fVar13;
  float fVar14;
  
  pSVar8 = (__this->fields).Letters;
  __this_01 = __this;
  if (pSVar8 == (System_String_array *)0x0) {
label_043eb2c5:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar10 = (__this->fields)._rank;
    if (uVar10 < (uint)pSVar8->max_length) {
      pSVar3 = (__this->fields).Sentences;
      if (pSVar3 != (System_String_array *)0x0) {
        if ((uint)pSVar3->max_length <= uVar10) goto label_043eb2ca;
        pUVar4 = (__this->fields)._styleBarPopup;
        if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
          pUVar5 = (pUVar4->fields)._letterLabel;
          __this_01 = (UI_StylebarHandler_o *)0x0;
          if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
            pMVar12 = (MethodInfo *)pSVar3->m_Items[(int)uVar10];
            (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                      (pUVar5,pSVar8->m_Items[(int)uVar10],(pUVar5->klass->vtable)._75_set_text.method);
            pUVar5 = (pUVar4->fields)._sentenceLabel;
            __this_01 = (UI_StylebarHandler_o *)0x0;
            if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                        (pUVar5,pMVar12,(pUVar5->klass->vtable)._75_set_text.method);
              pUVar4 = (__this->fields)._styleBarPopup;
              __this_01 = __this;
              iVar7 = UI_StylebarHandler__GetRankPercent(__this,pMVar12);
              if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
                __this_00 = (pUVar4->fields)._bladeFill;
                __this_01 = (UI_StylebarHandler_o *)0x0;
                if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                  UnityEngine_UI_Image__set_fillAmount(__this_00,(float)iVar7 * 0.01,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields)._styleBarPopup;
                  __this_01 = (UI_StylebarHandler_o *)0x0;
                  if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
                    UI_StylebarPopup__SetRank(pUVar4,(__this->fields)._rank,method_00);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_043eb2c5;
    }
  }
label_043eb2ca:
  il2cpp_runtime_helper_022b2ca0();
  uVar10 = (__this_01->fields)._rank;
  if ((int)uVar10 < 1) {
    if (uVar10 != 0) {
      return;
    }
    pSVar9 = (__this_01->fields).PointThresholds;
    if (pSVar9 == (System_Int32_array *)0x0) goto label_043eb35b;
    if ((int)pSVar9->max_length != 0) {
      return;
    }
  }
  else {
    pSVar9 = (__this_01->fields).PointThresholds;
    if (pSVar9 == (System_Int32_array *)0x0) {
label_043eb35b:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar1 = (uint)pSVar9->max_length;
      if ((int)uVar1 <= (int)uVar10) {
        return;
      }
      if ((uVar10 - 1 < uVar1) && (uVar10 < uVar1)) {
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_02 = __this_01;
  if (g_data_057ae4ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_02 = (UI_StylebarHandler_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4ef = '\x01';
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) {
    if (*(char *)(lVar6 + 0x11) == '\0') {
      pUVar4 = (__this_01->fields)._styleBarPopup;
      __this_02 = (UI_StylebarHandler_o *)0x0;
      if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
        (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
        (__this_01->fields)._points = 0.0;
        return;
      }
    }
    else {
      fVar14 = (__this_01->fields)._points;
      if (fVar14 <= 0.0) {
        pUVar4 = (__this_01->fields)._styleBarPopup;
        __this_02 = (UI_StylebarHandler_o *)0x0;
        if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
          (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
          fVar14 = (__this_01->fields)._chainTime;
joined_r0x043eb4ff:
          if (0.0 < fVar14) {
            fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            (__this_01->fields)._chainTime = fVar14 - fVar13;
            return;
          }
          (__this_01->fields)._chainTime = 0.0;
          (__this_01->fields)._chainKillRank = 0;
          return;
        }
      }
      else {
        pSVar9 = (__this_01->fields).PointDecays;
        if (pSVar9 != (System_Int32_array *)0x0) {
          uVar10 = (__this_01->fields)._rank;
          if (uVar10 < (uint)pSVar9->max_length) {
            iVar2 = pSVar9->m_Items[(int)uVar10];
            __this_02 = (UI_StylebarHandler_o *)0x0;
            fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            fVar14 = fVar14 + fVar13 * (float)iVar2 * -10.0;
            (__this_01->fields)._points = fVar14;
            pSVar9 = (__this_01->fields).PointThresholds;
            if (pSVar9 != (System_Int32_array *)0x0) {
              iVar2 = (__this_01->fields)._rank;
              uVar10 = (uint)pSVar9->max_length;
              pMVar11 = (MethodInfo *)(ulong)uVar10;
              pMVar12 = (MethodInfo *)((long)pMVar11 << 0x20);
              if (pMVar11 != (MethodInfo *)0x0 && -1 < (long)pMVar12) {
                __this_02 = (UI_StylebarHandler_o *)(long)(int)uVar10;
                pMVar12 = (MethodInfo *)0x0;
                do {
                  if (pMVar11 == pMVar12) goto label_043eb560;
                  if (fVar14 <= (float)pSVar9->m_Items[(long)pMVar12]) {
                    uVar10 = (uint)pMVar12;
                    (__this_01->fields)._rank = uVar10;
                    goto joined_r0x043eb52b;
                  }
                  pMVar12 = (MethodInfo *)((long)&pMVar12->methodPointer + 1);
                } while ((long)pMVar12 < (long)__this_02);
              }
              (__this_01->fields)._rank = uVar10;
joined_r0x043eb52b:
              if ((int)uVar10 < iVar2) {
                if ((char)(__this_01->fields)._lostRank == '\0') {
                  *(undefined1 *)&(__this_01->fields)._lostRank = 1;
                }
                else {
                  (__this_01->fields)._hits = 0;
                  (__this_01->fields)._points = 0.0;
                  (__this_01->fields)._rank = 0;
                }
              }
              else if (iVar2 < (int)uVar10) {
                *(undefined1 *)&(__this_01->fields)._lostRank = 0;
              }
              UI_StylebarHandler__UpdateLabels(__this_01,pMVar12);
              fVar14 = (__this_01->fields)._chainTime;
              goto joined_r0x043eb4ff;
            }
          }
          else {
label_043eb560:
            il2cpp_runtime_helper_022b2ca0();
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4);
    il2cpp_runtime_helper_023445d0(&fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58);
    il2cpp_runtime_helper_023445d0(&fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61);
    il2cpp_runtime_helper_023445d0(&"mazing!");
    il2cpp_runtime_helper_023445d0(&"S");
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"oppin!");
    il2cpp_runtime_helper_023445d0(&"ENITH");
    il2cpp_runtime_helper_023445d0(&"asual");
    il2cpp_runtime_helper_023445d0(&"BE81F7");
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    il2cpp_runtime_helper_023445d0(&"FA8258");
    il2cpp_runtime_helper_023445d0(&"XX");
    il2cpp_runtime_helper_023445d0(&"FF0000");
    il2cpp_runtime_helper_023445d0(&"eja Vu");
    il2cpp_runtime_helper_023445d0(&"pectacular!!");
    il2cpp_runtime_helper_023445d0(&"000000");
    il2cpp_runtime_helper_023445d0(&"SS");
    il2cpp_runtime_helper_023445d0(&"TREME!!!");
    il2cpp_runtime_helper_023445d0(&"ACFA58");
    il2cpp_runtime_helper_023445d0(&"TREEME!!!");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"SSS");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"F4FA58");
    il2cpp_runtime_helper_023445d0(&"ensational!");
    il2cpp_runtime_helper_023445d0(&"A");
    il2cpp_runtime_helper_023445d0(&"tylish!!!");
    il2cpp_runtime_helper_023445d0(&"FAAC58");
    g_data_057ae4f0 = '\x01';
  }
  pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
  if (pSVar8 != (System_String_array *)0x0) {
    if ((int)pSVar8->max_length != 0) {
      pSVar8->m_Items[0] = "D";
      il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
      if (1 < (uint)pSVar8->max_length) {
        pSVar8->m_Items[1] = "C";
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
        if (2 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[2] = "B";
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2);
          if (3 < (uint)pSVar8->max_length) {
            pSVar8->m_Items[3] = "A";
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 3);
            if (4 < (uint)pSVar8->max_length) {
              pSVar8->m_Items[4] = "S";
              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 4);
              if (5 < (uint)pSVar8->max_length) {
                pSVar8->m_Items[5] = "SS";
                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 5);
                if (6 < (uint)pSVar8->max_length) {
                  pSVar8->m_Items[6] = "SSS";
                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 6);
                  if (7 < (uint)pSVar8->max_length) {
                    pSVar8->m_Items[7] = "X";
                    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 7);
                    if (8 < (uint)pSVar8->max_length) {
                      pSVar8->m_Items[8] = "XX";
                      il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 8);
                      if (9 < (uint)pSVar8->max_length) {
                        pSVar8->m_Items[9] = "Z";
                        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 9);
                        (__this_02->fields).Letters = pSVar8;
                        il2cpp_runtime_helper_022b4080(&(__this_02->fields).Letters,pSVar8);
                        pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                        if (pSVar8 == (System_String_array *)0x0) goto label_043ebc49;
                        if ((int)pSVar8->max_length != 0) {
                          pSVar8->m_Items[0] = "FFFFFF";
                          il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
                          if (1 < (uint)pSVar8->max_length) {
                            pSVar8->m_Items[1] = "ACFA58";
                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
                            if (2 < (uint)pSVar8->max_length) {
                              pSVar8->m_Items[2] = "F4FA58";
                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2);
                              if (3 < (uint)pSVar8->max_length) {
                                pSVar8->m_Items[3] = "FAAC58";
                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 3);
                                if (4 < (uint)pSVar8->max_length) {
                                  pSVar8->m_Items[4] = "FA8258";
                                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 4);
                                  if (5 < (uint)pSVar8->max_length) {
                                    pSVar8->m_Items[5] = "BE81F7";
                                    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 5);
                                    if (6 < (uint)pSVar8->max_length) {
                                      pSVar8->m_Items[6] = "FF0000";
                                      il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 6);
                                      if (7 < (uint)pSVar8->max_length) {
                                        pSVar8->m_Items[7] = "000000";
                                        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 7);
                                        if (8 < (uint)pSVar8->max_length) {
                                          pSVar8->m_Items[8] = "000000";
                                          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 8);
                                          if (9 < (uint)pSVar8->max_length) {
                                            pSVar8->m_Items[9] = "000000";
                                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 9);
                                            (__this_02->fields).ColorTags = pSVar8;
                                            il2cpp_runtime_helper_022b4080(&(__this_02->fields).ColorTags,pSVar8);
                                            pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                                            if (pSVar8 == (System_String_array *)0x0) goto label_043ebc49;
                                            if ((int)pSVar8->max_length != 0) {
                                              pSVar8->m_Items[0] = "eja Vu";
                                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
                                              if (1 < (uint)pSVar8->max_length) {
                                                pSVar8->m_Items[1] = "asual";
                                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
                                                if (2 < (uint)pSVar8->max_length) {
                                                  pSVar8->m_Items[2] = "oppin!";
                                                  il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 2);
                                                  if (3 < (uint)pSVar8->max_length) {
                                                    pSVar8->m_Items[3] = "mazing!";
                                                    il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 3);
                                                    if (4 < (uint)pSVar8->max_length) {
                                                      pSVar8->m_Items[4] = "ensational!";
                                                      il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 4);
                                                      if (5 < (uint)pSVar8->max_length) {
                                                        pSVar8->m_Items[5] = "pectacular!!";
                                                        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 5);
                                                        if (6 < (uint)pSVar8->max_length) {
                                                          pSVar8->m_Items[6] = "tylish!!!";
                                                          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 6);
                                                          if (7 < (uint)pSVar8->max_length) {
                                                            pSVar8->m_Items[7] = "TREME!!!";
                                                            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 7);
                                                            if (8 < (uint)pSVar8->max_length) {
                                                              pSVar8->m_Items[8] = "TREEME!!!";
                                                              il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 8);
                                                              if (9 < (uint)pSVar8->max_length) {
                                                                pSVar8->m_Items[9] = "ENITH";
                                                                il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 9);
                                                                (__this_02->fields).Sentences = pSVar8;
                                                                il2cpp_runtime_helper_022b4080(&(__this_02->fields).
                                                                                    Sentences,pSVar8);
                                                                array = (System_Single_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_float,9);
                                                                                                                                
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)array,fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58,
                                                                  (MethodInfo *)0x0);
                                                       (__this_02->fields).Multipliers = array;
                                                       il2cpp_runtime_helper_022b4080(&(__this_02->fields).Multipliers,
                                                                          array);
                                                       pSVar9 = (System_Int32_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_int,9);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar9,fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4,
                                                                  (MethodInfo *)0x0);
                                                       (__this_02->fields).PointThresholds = pSVar9;
                                                       il2cpp_runtime_helper_022b4080(&(__this_02->fields).PointThresholds
                                                                          ,pSVar9);
                                                       pSVar9 = (System_Int32_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_int,10);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar9,fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61,
                                                                  (MethodInfo *)0x0);
                                                       (__this_02->fields).PointDecays = pSVar9;
                                                       il2cpp_runtime_helper_022b4080(&(__this_02->fields).PointDecays);
                                                       UnityEngine_MonoBehaviour___ctor
                                                                 ((UnityEngine_MonoBehaviour_o *)__this_02,
                                                                  (MethodInfo *)0x0);
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
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_043ebc49:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.StylebarHandler$$GetRankPercent
// il2cpp: int32_t UI_StylebarHandler__GetRankPercent (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x43eb2d0

int32_t UI_StylebarHandler__GetRankPercent(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  UI_StylebarPopup_o *pUVar3;
  int32_t iVar4;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  int32_t extraout_EAX_01;
  System_String_array *pSVar5;
  System_Single_array *array;
  System_Int32_array *pSVar6;
  uint uVar7;
  long lVar8;
  MethodInfo *pMVar9;
  MethodInfo *method_00;
  UI_StylebarHandler_o *__this_00;
  float fVar10;
  float fVar11;
  
  uVar7 = (__this->fields)._rank;
  lVar8 = (long)(int)uVar7;
  if (lVar8 < 1) {
    if (uVar7 != 0) {
      return 100;
    }
    pSVar6 = (__this->fields).PointThresholds;
    if (pSVar6 == (System_Int32_array *)0x0) goto label_043eb35b;
    if ((int)pSVar6->max_length != 0) {
      return (int)((__this->fields)._points * 100.0) / pSVar6->m_Items[0];
    }
  }
  else {
    pSVar6 = (__this->fields).PointThresholds;
    if (pSVar6 == (System_Int32_array *)0x0) {
label_043eb35b:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      uVar1 = (uint)pSVar6->max_length;
      if ((int)uVar1 <= (int)uVar7) {
        return 100;
      }
      if ((uVar7 - 1 < uVar1) && (uVar7 < uVar1)) {
        return (int)((((__this->fields)._points - (float)pSVar6->m_Items[lVar8 + -1]) * 100.0) /
                    (float)(pSVar6->m_Items[lVar8] - pSVar6->m_Items[lVar8 + -1]));
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  __this_00 = __this;
  if (g_data_057ae4ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_00 = (UI_StylebarHandler_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4ef = '\x01';
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x38), lVar8 != 0)) {
    if (*(char *)(lVar8 + 0x11) == '\0') {
      pUVar3 = (__this->fields)._styleBarPopup;
      __this_00 = (UI_StylebarHandler_o *)0x0;
      if (pUVar3 != (UI_StylebarPopup_o *)0x0) {
        iVar4 = (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
        (__this->fields)._points = 0.0;
        return iVar4;
      }
    }
    else {
      fVar11 = (__this->fields)._points;
      if (fVar11 <= 0.0) {
        pUVar3 = (__this->fields)._styleBarPopup;
        __this_00 = (UI_StylebarHandler_o *)0x0;
        if (pUVar3 != (UI_StylebarPopup_o *)0x0) {
          iVar4 = (*(pUVar3->klass->vtable)._22_Hide.methodPtr)
                            (pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
          fVar11 = (__this->fields)._chainTime;
joined_r0x043eb4ff:
          if (0.0 < fVar11) {
            fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            (__this->fields)._chainTime = fVar11 - fVar10;
            return extraout_EAX;
          }
          (__this->fields)._chainTime = 0.0;
          (__this->fields)._chainKillRank = 0;
          return iVar4;
        }
      }
      else {
        pSVar6 = (__this->fields).PointDecays;
        if (pSVar6 != (System_Int32_array *)0x0) {
          uVar7 = (__this->fields)._rank;
          if (uVar7 < (uint)pSVar6->max_length) {
            iVar2 = pSVar6->m_Items[(int)uVar7];
            __this_00 = (UI_StylebarHandler_o *)0x0;
            fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            fVar11 = fVar11 + fVar10 * (float)iVar2 * -10.0;
            (__this->fields)._points = fVar11;
            pSVar6 = (__this->fields).PointThresholds;
            if (pSVar6 != (System_Int32_array *)0x0) {
              iVar2 = (__this->fields)._rank;
              uVar7 = (uint)pSVar6->max_length;
              pMVar9 = (MethodInfo *)(ulong)uVar7;
              method_00 = (MethodInfo *)((long)pMVar9 << 0x20);
              if (pMVar9 != (MethodInfo *)0x0 && -1 < (long)method_00) {
                __this_00 = (UI_StylebarHandler_o *)(long)(int)uVar7;
                method_00 = (MethodInfo *)0x0;
                do {
                  if (pMVar9 == method_00) goto label_043eb560;
                  if (fVar11 <= (float)pSVar6->m_Items[(long)method_00]) {
                    uVar7 = (uint)method_00;
                    (__this->fields)._rank = uVar7;
                    goto joined_r0x043eb52b;
                  }
                  method_00 = (MethodInfo *)((long)&method_00->methodPointer + 1);
                } while ((long)method_00 < (long)__this_00);
              }
              (__this->fields)._rank = uVar7;
joined_r0x043eb52b:
              if ((int)uVar7 < iVar2) {
                if ((char)(__this->fields)._lostRank == '\0') {
                  *(undefined1 *)&(__this->fields)._lostRank = 1;
                }
                else {
                  (__this->fields)._hits = 0;
                  (__this->fields)._points = 0.0;
                  (__this->fields)._rank = 0;
                }
              }
              else if (iVar2 < (int)uVar7) {
                *(undefined1 *)&(__this->fields)._lostRank = 0;
              }
              UI_StylebarHandler__UpdateLabels(__this,method_00);
              fVar11 = (__this->fields)._chainTime;
              iVar4 = extraout_EAX_00;
              goto joined_r0x043eb4ff;
            }
          }
          else {
label_043eb560:
            il2cpp_runtime_helper_022b2ca0();
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4);
    il2cpp_runtime_helper_023445d0(&fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58);
    il2cpp_runtime_helper_023445d0(&fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61);
    il2cpp_runtime_helper_023445d0(&"mazing!");
    il2cpp_runtime_helper_023445d0(&"S");
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"oppin!");
    il2cpp_runtime_helper_023445d0(&"ENITH");
    il2cpp_runtime_helper_023445d0(&"asual");
    il2cpp_runtime_helper_023445d0(&"BE81F7");
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    il2cpp_runtime_helper_023445d0(&"FA8258");
    il2cpp_runtime_helper_023445d0(&"XX");
    il2cpp_runtime_helper_023445d0(&"FF0000");
    il2cpp_runtime_helper_023445d0(&"eja Vu");
    il2cpp_runtime_helper_023445d0(&"pectacular!!");
    il2cpp_runtime_helper_023445d0(&"000000");
    il2cpp_runtime_helper_023445d0(&"SS");
    il2cpp_runtime_helper_023445d0(&"TREME!!!");
    il2cpp_runtime_helper_023445d0(&"ACFA58");
    il2cpp_runtime_helper_023445d0(&"TREEME!!!");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"SSS");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"F4FA58");
    il2cpp_runtime_helper_023445d0(&"ensational!");
    il2cpp_runtime_helper_023445d0(&"A");
    il2cpp_runtime_helper_023445d0(&"tylish!!!");
    il2cpp_runtime_helper_023445d0(&"FAAC58");
    g_data_057ae4f0 = '\x01';
  }
  pSVar5 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
  if (pSVar5 != (System_String_array *)0x0) {
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = "D";
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
      if (1 < (uint)pSVar5->max_length) {
        pSVar5->m_Items[1] = "C";
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1);
        if (2 < (uint)pSVar5->max_length) {
          pSVar5->m_Items[2] = "B";
          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 2);
          if (3 < (uint)pSVar5->max_length) {
            pSVar5->m_Items[3] = "A";
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 3);
            if (4 < (uint)pSVar5->max_length) {
              pSVar5->m_Items[4] = "S";
              il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 4);
              if (5 < (uint)pSVar5->max_length) {
                pSVar5->m_Items[5] = "SS";
                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 5);
                if (6 < (uint)pSVar5->max_length) {
                  pSVar5->m_Items[6] = "SSS";
                  il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 6);
                  if (7 < (uint)pSVar5->max_length) {
                    pSVar5->m_Items[7] = "X";
                    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 7);
                    if (8 < (uint)pSVar5->max_length) {
                      pSVar5->m_Items[8] = "XX";
                      il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 8);
                      if (9 < (uint)pSVar5->max_length) {
                        pSVar5->m_Items[9] = "Z";
                        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 9);
                        (__this_00->fields).Letters = pSVar5;
                        il2cpp_runtime_helper_022b4080(&(__this_00->fields).Letters,pSVar5);
                        pSVar5 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                        if (pSVar5 == (System_String_array *)0x0) goto label_043ebc49;
                        if ((int)pSVar5->max_length != 0) {
                          pSVar5->m_Items[0] = "FFFFFF";
                          il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
                          if (1 < (uint)pSVar5->max_length) {
                            pSVar5->m_Items[1] = "ACFA58";
                            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1);
                            if (2 < (uint)pSVar5->max_length) {
                              pSVar5->m_Items[2] = "F4FA58";
                              il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 2);
                              if (3 < (uint)pSVar5->max_length) {
                                pSVar5->m_Items[3] = "FAAC58";
                                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 3);
                                if (4 < (uint)pSVar5->max_length) {
                                  pSVar5->m_Items[4] = "FA8258";
                                  il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 4);
                                  if (5 < (uint)pSVar5->max_length) {
                                    pSVar5->m_Items[5] = "BE81F7";
                                    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 5);
                                    if (6 < (uint)pSVar5->max_length) {
                                      pSVar5->m_Items[6] = "FF0000";
                                      il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 6);
                                      if (7 < (uint)pSVar5->max_length) {
                                        pSVar5->m_Items[7] = "000000";
                                        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 7);
                                        if (8 < (uint)pSVar5->max_length) {
                                          pSVar5->m_Items[8] = "000000";
                                          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 8);
                                          if (9 < (uint)pSVar5->max_length) {
                                            pSVar5->m_Items[9] = "000000";
                                            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 9);
                                            (__this_00->fields).ColorTags = pSVar5;
                                            il2cpp_runtime_helper_022b4080(&(__this_00->fields).ColorTags,pSVar5);
                                            pSVar5 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                                            if (pSVar5 == (System_String_array *)0x0) goto label_043ebc49;
                                            if ((int)pSVar5->max_length != 0) {
                                              pSVar5->m_Items[0] = "eja Vu";
                                              il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
                                              if (1 < (uint)pSVar5->max_length) {
                                                pSVar5->m_Items[1] = "asual";
                                                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1);
                                                if (2 < (uint)pSVar5->max_length) {
                                                  pSVar5->m_Items[2] = "oppin!";
                                                  il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 2);
                                                  if (3 < (uint)pSVar5->max_length) {
                                                    pSVar5->m_Items[3] = "mazing!";
                                                    il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 3);
                                                    if (4 < (uint)pSVar5->max_length) {
                                                      pSVar5->m_Items[4] = "ensational!";
                                                      il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 4);
                                                      if (5 < (uint)pSVar5->max_length) {
                                                        pSVar5->m_Items[5] = "pectacular!!";
                                                        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 5);
                                                        if (6 < (uint)pSVar5->max_length) {
                                                          pSVar5->m_Items[6] = "tylish!!!";
                                                          il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 6);
                                                          if (7 < (uint)pSVar5->max_length) {
                                                            pSVar5->m_Items[7] = "TREME!!!";
                                                            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 7);
                                                            if (8 < (uint)pSVar5->max_length) {
                                                              pSVar5->m_Items[8] = "TREEME!!!";
                                                              il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 8);
                                                              if (9 < (uint)pSVar5->max_length) {
                                                                pSVar5->m_Items[9] = "ENITH";
                                                                il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 9);
                                                                (__this_00->fields).Sentences = pSVar5;
                                                                il2cpp_runtime_helper_022b4080(&(__this_00->fields).
                                                                                    Sentences,pSVar5);
                                                                array = (System_Single_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_float,9);
                                                                                                                                
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)array,fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58,
                                                                  (MethodInfo *)0x0);
                                                       (__this_00->fields).Multipliers = array;
                                                       il2cpp_runtime_helper_022b4080(&(__this_00->fields).Multipliers,
                                                                          array);
                                                       pSVar6 = (System_Int32_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_int,9);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar6,fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4,
                                                                  (MethodInfo *)0x0);
                                                       (__this_00->fields).PointThresholds = pSVar6;
                                                       il2cpp_runtime_helper_022b4080(&(__this_00->fields).PointThresholds
                                                                          ,pSVar6);
                                                       pSVar6 = (System_Int32_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_int,10);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar6,fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61,
                                                                  (MethodInfo *)0x0);
                                                       (__this_00->fields).PointDecays = pSVar6;
                                                       il2cpp_runtime_helper_022b4080(&(__this_00->fields).PointDecays);
                                                       UnityEngine_MonoBehaviour___ctor
                                                                 ((UnityEngine_MonoBehaviour_o *)__this_00,
                                                                  (MethodInfo *)0x0);
                                                       return extraout_EAX_01;
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
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_043ebc49:
  il2cpp_runtime_helper_022b2c90();
  return (int32_t)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.StylebarHandler$$Update
// il2cpp: void UI_StylebarHandler__Update (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x43eb370

void UI_StylebarHandler__Update(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  UI_StylebarPopup_o *pUVar3;
  System_String_array *pSVar4;
  System_Single_array *array;
  System_Int32_array *pSVar5;
  uint uVar6;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  UI_StylebarHandler_o *__this_00;
  float fVar8;
  float fVar9;
  
  __this_00 = __this;
  if (g_data_057ae4ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_00 = (UI_StylebarHandler_o *)&MethodInfo_Boolean_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae4ef = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x11) == '\0') {
      pUVar3 = (__this->fields)._styleBarPopup;
      __this_00 = (UI_StylebarHandler_o *)0x0;
      if (pUVar3 != (UI_StylebarPopup_o *)0x0) {
        (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
        (__this->fields)._points = 0.0;
        return;
      }
    }
    else {
      fVar9 = (__this->fields)._points;
      if (fVar9 <= 0.0) {
        pUVar3 = (__this->fields)._styleBarPopup;
        __this_00 = (UI_StylebarHandler_o *)0x0;
        if (pUVar3 != (UI_StylebarPopup_o *)0x0) {
          (*(pUVar3->klass->vtable)._22_Hide.methodPtr)(pUVar3,(pUVar3->klass->vtable)._22_Hide.method);
          fVar9 = (__this->fields)._chainTime;
joined_r0x043eb4ff:
          if (fVar9 <= 0.0) {
            (__this->fields)._chainTime = 0.0;
            (__this->fields)._chainKillRank = 0;
            return;
          }
          fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this->fields)._chainTime = fVar9 - fVar8;
          return;
        }
      }
      else {
        pSVar5 = (__this->fields).PointDecays;
        if (pSVar5 != (System_Int32_array *)0x0) {
          uVar6 = (__this->fields)._rank;
          if (uVar6 < (uint)pSVar5->max_length) {
            iVar1 = pSVar5->m_Items[(int)uVar6];
            __this_00 = (UI_StylebarHandler_o *)0x0;
            fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            fVar9 = fVar9 + fVar8 * (float)iVar1 * -10.0;
            (__this->fields)._points = fVar9;
            pSVar5 = (__this->fields).PointThresholds;
            if (pSVar5 != (System_Int32_array *)0x0) {
              iVar1 = (__this->fields)._rank;
              uVar6 = (uint)pSVar5->max_length;
              pMVar7 = (MethodInfo *)(ulong)uVar6;
              method_00 = (MethodInfo *)((long)pMVar7 << 0x20);
              if (pMVar7 != (MethodInfo *)0x0 && -1 < (long)method_00) {
                __this_00 = (UI_StylebarHandler_o *)(long)(int)uVar6;
                method_00 = (MethodInfo *)0x0;
                do {
                  if (pMVar7 == method_00) goto label_043eb560;
                  if (fVar9 <= (float)pSVar5->m_Items[(long)method_00]) {
                    uVar6 = (uint)method_00;
                    (__this->fields)._rank = uVar6;
                    goto joined_r0x043eb52b;
                  }
                  method_00 = (MethodInfo *)((long)&method_00->methodPointer + 1);
                } while ((long)method_00 < (long)__this_00);
              }
              (__this->fields)._rank = uVar6;
joined_r0x043eb52b:
              if ((int)uVar6 < iVar1) {
                if ((char)(__this->fields)._lostRank == '\0') {
                  *(undefined1 *)&(__this->fields)._lostRank = 1;
                }
                else {
                  (__this->fields)._hits = 0;
                  (__this->fields)._points = 0.0;
                  (__this->fields)._rank = 0;
                }
              }
              else if (iVar1 < (int)uVar6) {
                *(undefined1 *)&(__this->fields)._lostRank = 0;
              }
              UI_StylebarHandler__UpdateLabels(__this,method_00);
              fVar9 = (__this->fields)._chainTime;
              goto joined_r0x043eb4ff;
            }
          }
          else {
label_043eb560:
            il2cpp_runtime_helper_022b2ca0();
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae4f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4);
    il2cpp_runtime_helper_023445d0(&fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58);
    il2cpp_runtime_helper_023445d0(&fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61);
    il2cpp_runtime_helper_023445d0(&"mazing!");
    il2cpp_runtime_helper_023445d0(&"S");
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"oppin!");
    il2cpp_runtime_helper_023445d0(&"ENITH");
    il2cpp_runtime_helper_023445d0(&"asual");
    il2cpp_runtime_helper_023445d0(&"BE81F7");
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    il2cpp_runtime_helper_023445d0(&"FA8258");
    il2cpp_runtime_helper_023445d0(&"XX");
    il2cpp_runtime_helper_023445d0(&"FF0000");
    il2cpp_runtime_helper_023445d0(&"eja Vu");
    il2cpp_runtime_helper_023445d0(&"pectacular!!");
    il2cpp_runtime_helper_023445d0(&"000000");
    il2cpp_runtime_helper_023445d0(&"SS");
    il2cpp_runtime_helper_023445d0(&"TREME!!!");
    il2cpp_runtime_helper_023445d0(&"ACFA58");
    il2cpp_runtime_helper_023445d0(&"TREEME!!!");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"SSS");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"F4FA58");
    il2cpp_runtime_helper_023445d0(&"ensational!");
    il2cpp_runtime_helper_023445d0(&"A");
    il2cpp_runtime_helper_023445d0(&"tylish!!!");
    il2cpp_runtime_helper_023445d0(&"FAAC58");
    g_data_057ae4f0 = '\x01';
  }
  pSVar4 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
  if (pSVar4 != (System_String_array *)0x0) {
    if ((int)pSVar4->max_length != 0) {
      pSVar4->m_Items[0] = "D";
      il2cpp_runtime_helper_022b4080(pSVar4->m_Items);
      if (1 < (uint)pSVar4->max_length) {
        pSVar4->m_Items[1] = "C";
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 1);
        if (2 < (uint)pSVar4->max_length) {
          pSVar4->m_Items[2] = "B";
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 2);
          if (3 < (uint)pSVar4->max_length) {
            pSVar4->m_Items[3] = "A";
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 3);
            if (4 < (uint)pSVar4->max_length) {
              pSVar4->m_Items[4] = "S";
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 4);
              if (5 < (uint)pSVar4->max_length) {
                pSVar4->m_Items[5] = "SS";
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 5);
                if (6 < (uint)pSVar4->max_length) {
                  pSVar4->m_Items[6] = "SSS";
                  il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 6);
                  if (7 < (uint)pSVar4->max_length) {
                    pSVar4->m_Items[7] = "X";
                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 7);
                    if (8 < (uint)pSVar4->max_length) {
                      pSVar4->m_Items[8] = "XX";
                      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 8);
                      if (9 < (uint)pSVar4->max_length) {
                        pSVar4->m_Items[9] = "Z";
                        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 9);
                        (__this_00->fields).Letters = pSVar4;
                        il2cpp_runtime_helper_022b4080(&(__this_00->fields).Letters,pSVar4);
                        pSVar4 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                        if (pSVar4 == (System_String_array *)0x0) goto label_043ebc49;
                        if ((int)pSVar4->max_length != 0) {
                          pSVar4->m_Items[0] = "FFFFFF";
                          il2cpp_runtime_helper_022b4080(pSVar4->m_Items);
                          if (1 < (uint)pSVar4->max_length) {
                            pSVar4->m_Items[1] = "ACFA58";
                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 1);
                            if (2 < (uint)pSVar4->max_length) {
                              pSVar4->m_Items[2] = "F4FA58";
                              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 2);
                              if (3 < (uint)pSVar4->max_length) {
                                pSVar4->m_Items[3] = "FAAC58";
                                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 3);
                                if (4 < (uint)pSVar4->max_length) {
                                  pSVar4->m_Items[4] = "FA8258";
                                  il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 4);
                                  if (5 < (uint)pSVar4->max_length) {
                                    pSVar4->m_Items[5] = "BE81F7";
                                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 5);
                                    if (6 < (uint)pSVar4->max_length) {
                                      pSVar4->m_Items[6] = "FF0000";
                                      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 6);
                                      if (7 < (uint)pSVar4->max_length) {
                                        pSVar4->m_Items[7] = "000000";
                                        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 7);
                                        if (8 < (uint)pSVar4->max_length) {
                                          pSVar4->m_Items[8] = "000000";
                                          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 8);
                                          if (9 < (uint)pSVar4->max_length) {
                                            pSVar4->m_Items[9] = "000000";
                                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 9);
                                            (__this_00->fields).ColorTags = pSVar4;
                                            il2cpp_runtime_helper_022b4080(&(__this_00->fields).ColorTags,pSVar4);
                                            pSVar4 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                                            if (pSVar4 == (System_String_array *)0x0) goto label_043ebc49;
                                            if ((int)pSVar4->max_length != 0) {
                                              pSVar4->m_Items[0] = "eja Vu";
                                              il2cpp_runtime_helper_022b4080(pSVar4->m_Items);
                                              if (1 < (uint)pSVar4->max_length) {
                                                pSVar4->m_Items[1] = "asual";
                                                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 1);
                                                if (2 < (uint)pSVar4->max_length) {
                                                  pSVar4->m_Items[2] = "oppin!";
                                                  il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 2);
                                                  if (3 < (uint)pSVar4->max_length) {
                                                    pSVar4->m_Items[3] = "mazing!";
                                                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 3);
                                                    if (4 < (uint)pSVar4->max_length) {
                                                      pSVar4->m_Items[4] = "ensational!";
                                                      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 4);
                                                      if (5 < (uint)pSVar4->max_length) {
                                                        pSVar4->m_Items[5] = "pectacular!!";
                                                        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 5);
                                                        if (6 < (uint)pSVar4->max_length) {
                                                          pSVar4->m_Items[6] = "tylish!!!";
                                                          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 6);
                                                          if (7 < (uint)pSVar4->max_length) {
                                                            pSVar4->m_Items[7] = "TREME!!!";
                                                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 7);
                                                            if (8 < (uint)pSVar4->max_length) {
                                                              pSVar4->m_Items[8] = "TREEME!!!";
                                                              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 8);
                                                              if (9 < (uint)pSVar4->max_length) {
                                                                pSVar4->m_Items[9] = "ENITH";
                                                                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 9);
                                                                (__this_00->fields).Sentences = pSVar4;
                                                                il2cpp_runtime_helper_022b4080(&(__this_00->fields).
                                                                                    Sentences,pSVar4);
                                                                array = (System_Single_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_float,9);
                                                                                                                                
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)array,fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58,
                                                                  (MethodInfo *)0x0);
                                                       (__this_00->fields).Multipliers = array;
                                                       il2cpp_runtime_helper_022b4080(&(__this_00->fields).Multipliers,
                                                                          array);
                                                       pSVar5 = (System_Int32_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_int,9);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar5,fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4,
                                                                  (MethodInfo *)0x0);
                                                       (__this_00->fields).PointThresholds = pSVar5;
                                                       il2cpp_runtime_helper_022b4080(&(__this_00->fields).PointThresholds
                                                                          ,pSVar5);
                                                       pSVar5 = (System_Int32_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_int,10);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar5,fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61,
                                                                  (MethodInfo *)0x0);
                                                       (__this_00->fields).PointDecays = pSVar5;
                                                       il2cpp_runtime_helper_022b4080(&(__this_00->fields).PointDecays);
                                                       UnityEngine_MonoBehaviour___ctor
                                                                 ((UnityEngine_MonoBehaviour_o *)__this_00,
                                                                  (MethodInfo *)0x0);
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
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_043ebc49:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.StylebarHandler$$.ctor
// il2cpp: void UI_StylebarHandler___ctor (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x43eb570

void UI_StylebarHandler___ctor(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Single_array *array;
  System_Int32_array *pSVar2;
  
  if (g_data_057ae4f0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    il2cpp_runtime_helper_023445d0(&TypeInfo_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4);
    il2cpp_runtime_helper_023445d0(&fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58);
    il2cpp_runtime_helper_023445d0(&fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61);
    il2cpp_runtime_helper_023445d0(&"mazing!");
    il2cpp_runtime_helper_023445d0(&"S");
    il2cpp_runtime_helper_023445d0(&"Z");
    il2cpp_runtime_helper_023445d0(&"oppin!");
    il2cpp_runtime_helper_023445d0(&"ENITH");
    il2cpp_runtime_helper_023445d0(&"asual");
    il2cpp_runtime_helper_023445d0(&"BE81F7");
    il2cpp_runtime_helper_023445d0(&"FFFFFF");
    il2cpp_runtime_helper_023445d0(&"FA8258");
    il2cpp_runtime_helper_023445d0(&"XX");
    il2cpp_runtime_helper_023445d0(&"FF0000");
    il2cpp_runtime_helper_023445d0(&"eja Vu");
    il2cpp_runtime_helper_023445d0(&"pectacular!!");
    il2cpp_runtime_helper_023445d0(&"000000");
    il2cpp_runtime_helper_023445d0(&"SS");
    il2cpp_runtime_helper_023445d0(&"TREME!!!");
    il2cpp_runtime_helper_023445d0(&"ACFA58");
    il2cpp_runtime_helper_023445d0(&"TREEME!!!");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"B");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"SSS");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"F4FA58");
    il2cpp_runtime_helper_023445d0(&"ensational!");
    il2cpp_runtime_helper_023445d0(&"A");
    il2cpp_runtime_helper_023445d0(&"tylish!!!");
    il2cpp_runtime_helper_023445d0(&"FAAC58");
    g_data_057ae4f0 = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "D";
      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "C";
        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "B";
          il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "A";
            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = "S";
              il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = "SS";
                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = "SSS";
                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 6);
                  if (7 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[7] = "X";
                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 7);
                    if (8 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[8] = "XX";
                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 8);
                      if (9 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[9] = "Z";
                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 9);
                        (__this->fields).Letters = pSVar1;
                        il2cpp_runtime_helper_022b4080(&(__this->fields).Letters,pSVar1);
                        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                        if (pSVar1 == (System_String_array *)0x0) goto label_043ebc49;
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = "FFFFFF";
                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = "ACFA58";
                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                            if (2 < (uint)pSVar1->max_length) {
                              pSVar1->m_Items[2] = "F4FA58";
                              il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 2);
                              if (3 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[3] = "FAAC58";
                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 3);
                                if (4 < (uint)pSVar1->max_length) {
                                  pSVar1->m_Items[4] = "FA8258";
                                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 4);
                                  if (5 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[5] = "BE81F7";
                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 5);
                                    if (6 < (uint)pSVar1->max_length) {
                                      pSVar1->m_Items[6] = "FF0000";
                                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 6);
                                      if (7 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[7] = "000000";
                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 7);
                                        if (8 < (uint)pSVar1->max_length) {
                                          pSVar1->m_Items[8] = "000000";
                                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 8);
                                          if (9 < (uint)pSVar1->max_length) {
                                            pSVar1->m_Items[9] = "000000";
                                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 9);
                                            (__this->fields).ColorTags = pSVar1;
                                            il2cpp_runtime_helper_022b4080(&(__this->fields).ColorTags,pSVar1);
                                            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,10);
                                            if (pSVar1 == (System_String_array *)0x0) goto label_043ebc49;
                                            if ((int)pSVar1->max_length != 0) {
                                              pSVar1->m_Items[0] = "eja Vu";
                                              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                              if (1 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[1] = "asual";
                                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                if (2 < (uint)pSVar1->max_length) {
                                                  pSVar1->m_Items[2] = "oppin!";
                                                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 2);
                                                  if (3 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[3] = "mazing!";
                                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 3);
                                                    if (4 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[4] = "ensational!";
                                                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 4);
                                                      if (5 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[5] = "pectacular!!";
                                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 5);
                                                        if (6 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[6] = "tylish!!!";
                                                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 6);
                                                          if (7 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[7] = "TREME!!!";
                                                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 7);
                                                            if (8 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[8] = "TREEME!!!";
                                                              il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 8);
                                                              if (9 < (uint)pSVar1->max_length) {
                                                                pSVar1->m_Items[9] = "ENITH";
                                                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 9);
                                                                (__this->fields).Sentences = pSVar1;
                                                                il2cpp_runtime_helper_022b4080(&(__this->fields).Sentences
                                                                                   ,pSVar1);
                                                                array = (System_Single_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_float,9);
                                                                                                                                
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)array,fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D58,
                                                                  (MethodInfo *)0x0);
                                                       (__this->fields).Multipliers = array;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).Multipliers,array)
                                                       ;
                                                       pSVar2 = (System_Int32_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_int,9);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar2,fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F4,
                                                                  (MethodInfo *)0x0);
                                                       (__this->fields).PointThresholds = pSVar2;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).PointThresholds,
                                                                          pSVar2);
                                                       pSVar2 = (System_Int32_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_int,10);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                                                                 ((System_Array_o *)pSVar2,fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD61,
                                                                  (MethodInfo *)0x0);
                                                       (__this->fields).PointDecays = pSVar2;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).PointDecays);
                                                       UnityEngine_MonoBehaviour___ctor
                                                                 ((UnityEngine_MonoBehaviour_o *)__this,
                                                                  (MethodInfo *)0x0);
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
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_043ebc49:
  il2cpp_runtime_helper_022b2c90();
  return;
}



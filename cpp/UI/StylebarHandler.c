// Type: UI.StylebarHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/StylebarHandler.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/StylebarHandler.cs  [CHANGED since prior version]
// --------------------------------

// UI.StylebarHandler$$Awake
// il2cpp: void UI_StylebarHandler__Awake (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x40d7f00

void UI_StylebarHandler__Awake(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  UI_StylebarPopup_o **ppUVar1;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_UI_Text_o *pUVar2;
  System_String_array *pSVar3;
  undefined8 uVar4;
  UnityEngine_Transform_o *parent;
  UI_StylebarPopup_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  System_String_array *values;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  long lVar8;
  ulong uVar9;
  System_String_array *pSVar10;
  
  if (DAT_0570475c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_StylebarPopup_CreateDefaultPopup_StylebarPopup);
    il2cpp_init_method_metadata(&MethodInfo_StylebarScaler_AddComponent_StylebarScaler);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"<color=#");
    il2cpp_init_method_metadata(&"</color>");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&">");
    DAT_0570475c = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar5 = (UI_StylebarPopup_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(parent,0,MethodInfo_StylebarPopup_CreateDefaultPopup_StylebarPopup);
  ppUVar1 = &(__this->fields)._styleBarPopup;
  (__this->fields)._styleBarPopup = pUVar5;
  il2cpp_runtime_glue(ppUVar1);
  pUVar5 = (__this->fields)._styleBarPopup;
  if (pUVar5 != (UI_StylebarPopup_o *)0x0) {
    pUVar6 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar6,5,5,(UnityEngine_Vector2_o)0xc1a00000,(MethodInfo *)0x0);
    if (*ppUVar1 != (UI_StylebarPopup_o *)0x0) {
      pUVar6 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppUVar1,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent<object>(pUVar6,MethodInfo_StylebarScaler_AddComponent_StylebarScaler);
        if ((*ppUVar1 != (UI_StylebarPopup_o *)0x0) &&
           (__this_00 = ((*ppUVar1)->fields)._bladeFill, __this_00 != (UnityEngine_UI_Image_o *)0x0)
           ) {
          UnityEngine_UI_Image__set_fillAmount(__this_00,1.0,(MethodInfo *)0x0);
          uVar4 = "";
          pUVar5 = *ppUVar1;
          if ((pUVar5 != (UI_StylebarPopup_o *)0x0) &&
             (pUVar2 = (pUVar5->fields)._scoreLabel, pUVar2 != (UnityEngine_UI_Text_o *)0x0)) {
            (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                      (pUVar2,"",(pUVar2->klass->vtable)._75_set_text.method);
            pUVar2 = (pUVar5->fields)._bottomLabel;
            if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                        (pUVar2,uVar4,(pUVar2->klass->vtable)._75_set_text.method);
              uVar4 = "";
              pUVar5 = *ppUVar1;
              if ((pUVar5 != (UI_StylebarPopup_o *)0x0) &&
                 (pUVar2 = (pUVar5->fields)._letterLabel, pUVar2 != (UnityEngine_UI_Text_o *)0x0)) {
                (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                          (pUVar2,"",(pUVar2->klass->vtable)._75_set_text.method);
                pUVar2 = (pUVar5->fields)._sentenceLabel;
                if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
                  (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                            (pUVar2,uVar4,(pUVar2->klass->vtable)._75_set_text.method);
                  if (*ppUVar1 != (UI_StylebarPopup_o *)0x0) {
                    UI_StylebarPopup__SetRank(*ppUVar1,0,method_00);
                    pSVar10 = (__this->fields).Letters;
                    if (pSVar10 != (System_String_array *)0x0) {
                      lVar8 = 0x20;
                      uVar9 = 0;
                      do {
                        if ((long)(int)pSVar10->max_length <= (long)uVar9) {
                          return;
                        }
                        values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
                        if (values == (System_String_array *)0x0) break;
                        if ((int)values->max_length == 0) {
LAB_040d8249:
                    /* WARNING: Subroutine does not return */
                          il2cpp_raise_exception();
                        }
                        values->m_Items[0] = "<color=#";
                        il2cpp_runtime_glue(values->m_Items);
                        pSVar3 = (__this->fields).ColorTags;
                        if (pSVar3 == (System_String_array *)0x0) break;
                        if (((uint)pSVar3->max_length <= uVar9) || ((uint)values->max_length < 2))
                        goto LAB_040d8249;
                        values->m_Items[1] = pSVar3->m_Items[uVar9];
                        il2cpp_runtime_glue(values->m_Items + 1);
                        if ((uint)values->max_length < 3) goto LAB_040d8249;
                        values->m_Items[2] = ">";
                        il2cpp_runtime_glue(values->m_Items + 2);
                        pSVar3 = (__this->fields).Letters;
                        if (pSVar3 == (System_String_array *)0x0) break;
                        if (((uint)pSVar3->max_length <= uVar9) || ((uint)values->max_length < 4))
                        goto LAB_040d8249;
                        values->m_Items[3] = pSVar3->m_Items[uVar9];
                        il2cpp_runtime_glue(values->m_Items + 3);
                        if ((uint)values->max_length < 5) goto LAB_040d8249;
                        values->m_Items[4] = "</color>";
                        il2cpp_runtime_glue(values->m_Items + 4);
                        pSVar7 = System_String__Concat(values,(MethodInfo *)0x0);
                        if ((uint)pSVar10->max_length <= uVar9) goto LAB_040d8249;
                        *(System_String_o **)((long)pSVar10->m_Items + lVar8 + -0x20) = pSVar7;
                        il2cpp_runtime_glue((long)pSVar10->m_Items + lVar8 + -0x20,pSVar7);
                        uVar9 = uVar9 + 1;
                        pSVar10 = (__this->fields).Letters;
                        lVar8 = lVar8 + 8;
                      } while (pSVar10 != (System_String_array *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.StylebarHandler$$GetRank
// il2cpp: int32_t UI_StylebarHandler__GetRank (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x40d83c0

int32_t UI_StylebarHandler__GetRank(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  return (__this->fields)._rank;
}


// UI.StylebarHandler$$OnHit
// il2cpp: void UI_StylebarHandler__OnHit (UI_StylebarHandler_o* __this, int32_t damage, const MethodInfo* method);
// 0x40d83d0

void UI_StylebarHandler__OnHit(UI_StylebarHandler_o *__this,int32_t damage,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  System_Single_array *pSVar6;
  System_Int32_array *pSVar7;
  UI_StylebarPopup_o *pUVar8;
  UnityEngine_UI_Text_o *pUVar9;
  int iVar10;
  uint in_EAX;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  MethodInfo *method_00;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  bool bVar17;
  float fVar18;
  float __this_00;
  undefined8 uStack_28;
  
  uStack_28._0_4_ = in_EAX;
  if (DAT_0570475d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&"\n");
    il2cpp_init_method_metadata(&"x");
    il2cpp_init_method_metadata(&"!");
    il2cpp_init_method_metadata(&"Hit");
    il2cpp_init_method_metadata(&"Hits");
    DAT_0570475d = '\x01';
  }
  uVar4 = (uint)uStack_28;
  uStack_28 = (ulong)(uint)uStack_28;
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) goto LAB_040d8724;
  if (*(char *)(lVar5 + 0x11) == '\0') {
    return;
  }
  fVar18 = (__this->fields)._points;
  if (damage < 0) {
    if ((fVar18 == 0.0) && (!NAN(fVar18))) {
      fVar18 = fVar18 + 1.0;
      (__this->fields)._points = fVar18;
      pSVar7 = (__this->fields).PointThresholds;
      if (pSVar7 == (System_Int32_array *)0x0) goto LAB_040d8724;
      iVar3 = (__this->fields)._rank;
      uVar13 = (uint)pSVar7->max_length;
      uVar14 = (ulong)uVar13;
      if (uVar14 != 0 && -1 < (long)(uVar14 << 0x20)) {
        uVar16 = 0;
        do {
          if (uVar14 == uVar16) goto LAB_040d871f;
          if (fVar18 <= (float)pSVar7->m_Items[uVar16]) {
            uVar13 = (uint)uVar16;
            (__this->fields)._rank = uVar13;
            goto joined_r0x040d85ff;
          }
          uVar16 = uVar16 + 1;
        } while ((long)uVar16 < (long)(int)uVar13);
      }
      (__this->fields)._rank = uVar13;
joined_r0x040d85ff:
      iVar10 = iVar3 - uVar13;
      bVar17 = SBORROW4(iVar3,uVar13);
      if ((int)uVar13 < iVar3) {
        if ((char)(__this->fields)._lostRank != '\0') goto LAB_040d8549;
LAB_040d85e1:
        *(undefined1 *)&(__this->fields)._lostRank = 1;
      }
      else {
LAB_040d8601:
        if (bVar17 != iVar10 < 0) {
          *(undefined1 *)&(__this->fields)._lostRank = 0;
        }
      }
    }
  }
  else {
    pSVar6 = (__this->fields).Multipliers;
    if (pSVar6 == (System_Single_array *)0x0) goto LAB_040d8724;
    uVar13 = (__this->fields)._chainKillRank;
    uVar2 = (uint)pSVar6->max_length;
    if (uVar2 <= uVar13) goto LAB_040d871f;
    fVar18 = fVar18 + (float)(int)((float)(damage + 200) * pSVar6->m_Items[(int)uVar13]);
    (__this->fields)._points = fVar18;
    (__this->fields)._chainKillRank = ((int)uVar13 < (int)(uVar2 - 1)) + uVar13;
    (__this->fields)._chainTime = 5.0;
    piVar1 = &(__this->fields)._hits;
    *piVar1 = *piVar1 + 1;
    pSVar7 = (__this->fields).PointThresholds;
    if (pSVar7 == (System_Int32_array *)0x0) goto LAB_040d8724;
    iVar3 = (__this->fields)._rank;
    uVar13 = (uint)pSVar7->max_length;
    uVar14 = (ulong)uVar13;
    if (uVar14 != 0 && -1 < (long)(uVar14 << 0x20)) {
      uVar16 = 0;
      do {
        if (uVar14 == uVar16) goto LAB_040d871f;
        if (fVar18 <= (float)pSVar7->m_Items[uVar16]) {
          uVar13 = (uint)uVar16;
          (__this->fields)._rank = uVar13;
          goto joined_r0x040d85ef;
        }
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < (long)(int)uVar13);
    }
    (__this->fields)._rank = uVar13;
joined_r0x040d85ef:
    iVar10 = iVar3 - uVar13;
    bVar17 = SBORROW4(iVar3,uVar13);
    if (iVar3 <= (int)uVar13) goto LAB_040d8601;
    if ((char)(__this->fields)._lostRank == '\0') goto LAB_040d85e1;
LAB_040d8549:
    (__this->fields)._hits = 0;
    (__this->fields)._points = 0.0;
    (__this->fields)._rank = 0;
    fVar18 = 0.0;
  }
  uStack_28 = CONCAT44((int)fVar18,uVar4);
  pSVar11 = System_Int32__ToString((int)&uStack_28 + 4,(MethodInfo *)0x0);
  pSVar12 = System_Int32__ToString((int)__this + 0x58,(MethodInfo *)0x0);
  if ((__this->fields)._hits < 2) {
    puVar15 = &"Hit";
  }
  else {
    puVar15 = &"Hits";
  }
  method_00 = (MethodInfo *)
              System_String__Concat
                        (pSVar12,(System_String_o *)*puVar15,"\n",(MethodInfo *)0x0);
  uVar4 = (__this->fields)._chainKillRank;
  if (0 < (long)(int)uVar4) {
    pSVar6 = (__this->fields).Multipliers;
    if (pSVar6 == (System_Single_array *)0x0) goto LAB_040d8724;
    if ((uint)pSVar6->max_length <= uVar4) {
LAB_040d871f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar12 = System_Single__ToString(__this_00,(MethodInfo *)(pSVar6->m_Items + (int)uVar4));
    method_00 = (MethodInfo *)
                System_String__Concat
                          ((System_String_o *)method_00,"x",pSVar12,"!",
                           (MethodInfo *)0x0);
  }
  pUVar8 = (__this->fields)._styleBarPopup;
  if ((pUVar8 != (UI_StylebarPopup_o *)0x0) &&
     (pUVar9 = (pUVar8->fields)._scoreLabel, pUVar9 != (UnityEngine_UI_Text_o *)0x0)) {
    (*(pUVar9->klass->vtable)._75_set_text.methodPtr)
              (pUVar9,pSVar11,(pUVar9->klass->vtable)._75_set_text.method);
    pUVar9 = (pUVar8->fields)._bottomLabel;
    if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar9->klass->vtable)._75_set_text.methodPtr)
                (pUVar9,method_00,(pUVar9->klass->vtable)._75_set_text.method);
      UI_StylebarHandler__UpdateLabels(__this,method_00);
      pUVar8 = (__this->fields)._styleBarPopup;
      if (pUVar8 != (UI_StylebarPopup_o *)0x0) {
        (*(pUVar8->klass->vtable)._21_Show.methodPtr)
                  (pUVar8,(pUVar8->klass->vtable)._21_Show.method);
        return;
      }
    }
  }
LAB_040d8724:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.StylebarHandler$$UpdateRank
// il2cpp: void UI_StylebarHandler__UpdateRank (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x40d8730

void UI_StylebarHandler__UpdateRank(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Int32_array *pSVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  pSVar2 = (__this->fields).PointThresholds;
  if (pSVar2 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = (__this->fields)._rank;
  uVar3 = (uint)pSVar2->max_length;
  uVar4 = (ulong)uVar3;
  if (uVar4 != 0 && -1 < (long)(uVar4 << 0x20)) {
    uVar5 = 0;
    do {
      if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((__this->fields)._points <= (float)pSVar2->m_Items[uVar5]) {
        uVar3 = (uint)uVar5;
        (__this->fields)._rank = uVar3;
        goto joined_r0x040d87a9;
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)uVar3);
  }
  (__this->fields)._rank = uVar3;
joined_r0x040d87a9:
  if (iVar1 <= (int)uVar3) {
    if (iVar1 < (int)uVar3) {
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


// UI.StylebarHandler$$UpdateLabels
// il2cpp: void UI_StylebarHandler__UpdateLabels (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x40d87d0

void UI_StylebarHandler__UpdateLabels(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_String_array *pSVar3;
  UI_StylebarPopup_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_UI_Image_o *__this_00;
  int32_t iVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  pSVar2 = (__this->fields).Letters;
  if (pSVar2 != (System_String_array *)0x0) {
    uVar1 = (__this->fields)._rank;
    if ((uint)pSVar2->max_length <= uVar1) {
LAB_040d88aa:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar3 = (__this->fields).Sentences;
    if (pSVar3 != (System_String_array *)0x0) {
      if ((uint)pSVar3->max_length <= uVar1) goto LAB_040d88aa;
      pUVar4 = (__this->fields)._styleBarPopup;
      if ((pUVar4 != (UI_StylebarPopup_o *)0x0) &&
         (pUVar5 = (pUVar4->fields)._letterLabel, pUVar5 != (UnityEngine_UI_Text_o *)0x0)) {
        method_01 = (MethodInfo *)pSVar3->m_Items[(int)uVar1];
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,pSVar2->m_Items[(int)uVar1],(pUVar5->klass->vtable)._75_set_text.method);
        pUVar5 = (pUVar4->fields)._sentenceLabel;
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                    (pUVar5,method_01,(pUVar5->klass->vtable)._75_set_text.method);
          pUVar4 = (__this->fields)._styleBarPopup;
          iVar6 = UI_StylebarHandler__GetRankPercent(__this,method_01);
          if ((pUVar4 != (UI_StylebarPopup_o *)0x0) &&
             (__this_00 = (pUVar4->fields)._bladeFill, __this_00 != (UnityEngine_UI_Image_o *)0x0))
          {
            UnityEngine_UI_Image__set_fillAmount(__this_00,(float)iVar6 * 0.01,(MethodInfo *)0x0);
            pUVar4 = (__this->fields)._styleBarPopup;
            if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
              UI_StylebarPopup__SetRank(pUVar4,(__this->fields)._rank,method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.StylebarHandler$$GetRankPercent
// il2cpp: int32_t UI_StylebarHandler__GetRankPercent (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x40d88b0

int32_t UI_StylebarHandler__GetRankPercent(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_Int32_array *pSVar3;
  long lVar4;
  
  uVar1 = (__this->fields)._rank;
  lVar4 = (long)(int)uVar1;
  if (lVar4 < 1) {
    if (uVar1 == 0) {
      pSVar3 = (__this->fields).PointThresholds;
      if (pSVar3 != (System_Int32_array *)0x0) {
        if ((int)pSVar3->max_length != 0) {
          return (int)((__this->fields)._points * 100.0) / pSVar3->m_Items[0];
        }
        goto LAB_040d8940;
      }
      goto LAB_040d893b;
    }
  }
  else {
    pSVar3 = (__this->fields).PointThresholds;
    if (pSVar3 == (System_Int32_array *)0x0) {
LAB_040d893b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar2 = (uint)pSVar3->max_length;
    method = (MethodInfo *)(ulong)uVar2;
    if ((int)uVar1 < (int)uVar2) {
      if ((uVar1 - 1 < uVar2) && (uVar1 < uVar2)) {
        return (int)((((__this->fields)._points - (float)pSVar3->m_Items[lVar4 + -1]) * 100.0) /
                    (float)(pSVar3->m_Items[lVar4] - pSVar3->m_Items[lVar4 + -1]));
      }
LAB_040d8940:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception(__this,method);
    }
  }
  return 100;
}


// UI.StylebarHandler$$Update
// il2cpp: void UI_StylebarHandler__Update (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x40d8950

void UI_StylebarHandler__Update(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Int32_array *pSVar3;
  UI_StylebarPopup_o *pUVar4;
  uint uVar5;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  float fVar7;
  float fVar8;
  
  if (DAT_0570475e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata();
    DAT_0570475e = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x38), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x11) == '\0') {
      pUVar4 = (__this->fields)._styleBarPopup;
      if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
        (*(pUVar4->klass->vtable)._22_Hide.methodPtr)
                  (pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
        (__this->fields)._points = 0.0;
        return;
      }
    }
    else {
      fVar8 = (__this->fields)._points;
      if (fVar8 <= 0.0) {
        pUVar4 = (__this->fields)._styleBarPopup;
        if (pUVar4 != (UI_StylebarPopup_o *)0x0) {
          (*(pUVar4->klass->vtable)._22_Hide.methodPtr)
                    (pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
          fVar8 = (__this->fields)._chainTime;
joined_r0x040d8adf:
          if (fVar8 <= 0.0) {
            (__this->fields)._chainTime = 0.0;
            (__this->fields)._chainKillRank = 0;
            return;
          }
          fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this->fields)._chainTime = fVar8 - fVar7;
          return;
        }
      }
      else {
        pSVar3 = (__this->fields).PointDecays;
        if (pSVar3 != (System_Int32_array *)0x0) {
          uVar5 = (__this->fields)._rank;
          if ((uint)pSVar3->max_length <= uVar5) {
LAB_040d8b40:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          iVar1 = pSVar3->m_Items[(int)uVar5];
          fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          fVar8 = fVar8 + fVar7 * (float)iVar1 * -10.0;
          (__this->fields)._points = fVar8;
          pSVar3 = (__this->fields).PointThresholds;
          if (pSVar3 != (System_Int32_array *)0x0) {
            iVar1 = (__this->fields)._rank;
            uVar5 = (uint)pSVar3->max_length;
            pMVar6 = (MethodInfo *)(ulong)uVar5;
            method_00 = (MethodInfo *)((long)pMVar6 << 0x20);
            if (pMVar6 != (MethodInfo *)0x0 && -1 < (long)method_00) {
              method_00 = (MethodInfo *)0x0;
              do {
                if (pMVar6 == method_00) goto LAB_040d8b40;
                if (fVar8 <= (float)pSVar3->m_Items[(long)method_00]) {
                  uVar5 = (uint)method_00;
                  (__this->fields)._rank = uVar5;
                  goto joined_r0x040d8b0b;
                }
                method_00 = (MethodInfo *)((long)&method_00->methodPointer + 1);
              } while ((long)method_00 < (long)(int)uVar5);
            }
            (__this->fields)._rank = uVar5;
joined_r0x040d8b0b:
            if ((int)uVar5 < iVar1) {
              if ((char)(__this->fields)._lostRank == '\0') {
                *(undefined1 *)&(__this->fields)._lostRank = 1;
              }
              else {
                (__this->fields)._hits = 0;
                (__this->fields)._points = 0.0;
                (__this->fields)._rank = 0;
              }
            }
            else if (iVar1 < (int)uVar5) {
              *(undefined1 *)&(__this->fields)._lostRank = 0;
            }
            UI_StylebarHandler__UpdateLabels(__this,method_00);
            fVar8 = (__this->fields)._chainTime;
            goto joined_r0x040d8adf;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.StylebarHandler$$.ctor
// il2cpp: void UI_StylebarHandler___ctor (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x40d8b50

void UI_StylebarHandler___ctor(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Single_array *array;
  System_Int32_array *pSVar2;
  
  if (DAT_0570475f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&TypeInfo_float);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EA);
    il2cpp_init_method_metadata(&fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59);
    il2cpp_init_method_metadata(&fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7);
    il2cpp_init_method_metadata(&"mazing!");
    il2cpp_init_method_metadata(&"S");
    il2cpp_init_method_metadata(&"Z");
    il2cpp_init_method_metadata(&"oppin!");
    il2cpp_init_method_metadata(&"ENITH");
    il2cpp_init_method_metadata(&"asual");
    il2cpp_init_method_metadata(&"BE81F7");
    il2cpp_init_method_metadata(&"FFFFFF");
    il2cpp_init_method_metadata(&"FA8258");
    il2cpp_init_method_metadata(&"XX");
    il2cpp_init_method_metadata(&"FF0000");
    il2cpp_init_method_metadata(&"eja Vu");
    il2cpp_init_method_metadata(&"pectacular!!");
    il2cpp_init_method_metadata(&"000000");
    il2cpp_init_method_metadata(&"SS");
    il2cpp_init_method_metadata(&"TREME!!!");
    il2cpp_init_method_metadata(&"ACFA58");
    il2cpp_init_method_metadata(&"TREEME!!!");
    il2cpp_init_method_metadata(&"D");
    il2cpp_init_method_metadata(&"B");
    il2cpp_init_method_metadata(&"C");
    il2cpp_init_method_metadata(&"SSS");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata(&"F4FA58");
    il2cpp_init_method_metadata(&"ensational!");
    il2cpp_init_method_metadata(&"A");
    il2cpp_init_method_metadata(&"tylish!!!");
    il2cpp_init_method_metadata(&"FAAC58");
    DAT_0570475f = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,10);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "D";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "C";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "B";
          il2cpp_runtime_glue(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "A";
            il2cpp_runtime_glue(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = "S";
              il2cpp_runtime_glue(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = "SS";
                il2cpp_runtime_glue(pSVar1->m_Items + 5);
                if (6 < (uint)pSVar1->max_length) {
                  pSVar1->m_Items[6] = "SSS";
                  il2cpp_runtime_glue(pSVar1->m_Items + 6);
                  if (7 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[7] = "X";
                    il2cpp_runtime_glue(pSVar1->m_Items + 7);
                    if (8 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[8] = "XX";
                      il2cpp_runtime_glue(pSVar1->m_Items + 8);
                      if (9 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[9] = "Z";
                        il2cpp_runtime_glue(pSVar1->m_Items + 9);
                        (__this->fields).Letters = pSVar1;
                        il2cpp_runtime_glue(&(__this->fields).Letters,pSVar1);
                        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,10);
                        if (pSVar1 == (System_String_array *)0x0) goto LAB_040d9229;
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = "FFFFFF";
                          il2cpp_runtime_glue(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = "ACFA58";
                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                            if (2 < (uint)pSVar1->max_length) {
                              pSVar1->m_Items[2] = "F4FA58";
                              il2cpp_runtime_glue(pSVar1->m_Items + 2);
                              if (3 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[3] = "FAAC58";
                                il2cpp_runtime_glue(pSVar1->m_Items + 3);
                                if (4 < (uint)pSVar1->max_length) {
                                  pSVar1->m_Items[4] = "FA8258";
                                  il2cpp_runtime_glue(pSVar1->m_Items + 4);
                                  if (5 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[5] = "BE81F7";
                                    il2cpp_runtime_glue(pSVar1->m_Items + 5);
                                    if (6 < (uint)pSVar1->max_length) {
                                      pSVar1->m_Items[6] = "FF0000";
                                      il2cpp_runtime_glue(pSVar1->m_Items + 6);
                                      if (7 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[7] = "000000";
                                        il2cpp_runtime_glue(pSVar1->m_Items + 7);
                                        if (8 < (uint)pSVar1->max_length) {
                                          pSVar1->m_Items[8] = "000000";
                                          il2cpp_runtime_glue(pSVar1->m_Items + 8);
                                          if (9 < (uint)pSVar1->max_length) {
                                            pSVar1->m_Items[9] = "000000";
                                            il2cpp_runtime_glue(pSVar1->m_Items + 9);
                                            (__this->fields).ColorTags = pSVar1;
                                            il2cpp_runtime_glue(&(__this->fields).ColorTags,pSVar1);
                                            pSVar1 = (System_String_array *)
                                                     il2cpp_glue_02274930(TypeInfo_string,10);
                                            if (pSVar1 == (System_String_array *)0x0)
                                            goto LAB_040d9229;
                                            if ((int)pSVar1->max_length != 0) {
                                              pSVar1->m_Items[0] = "eja Vu";
                                              il2cpp_runtime_glue(pSVar1->m_Items);
                                              if (1 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[1] = "asual";
                                                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                if (2 < (uint)pSVar1->max_length) {
                                                  pSVar1->m_Items[2] = "oppin!";
                                                  il2cpp_runtime_glue(pSVar1->m_Items + 2);
                                                  if (3 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[3] = "mazing!";
                                                    il2cpp_runtime_glue(pSVar1->m_Items + 3);
                                                    if (4 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[4] = "ensational!";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 4);
                                                      if (5 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[5] = "pectacular!!";
                                                        il2cpp_runtime_glue(pSVar1->m_Items + 5);
                                                        if (6 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[6] = "tylish!!!";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 6);
                                                          if (7 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[7] = "TREME!!!";
                                                            il2cpp_runtime_glue(pSVar1->m_Items + 7);
                                                            if (8 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[8] = "TREEME!!!";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 8
                                                                                );
                                                              if (9 < (uint)pSVar1->max_length) {
                                                                pSVar1->m_Items[9] = "ENITH";
                                                                il2cpp_runtime_glue(pSVar1->m_Items +
                                                                                   9);
                                                                (__this->fields).Sentences = pSVar1;
                                                                il2cpp_runtime_glue(&(__this->fields)
                                                                                    .Sentences,
                                                                                   pSVar1);
                                                                array = (System_Single_array *)
                                                                        il2cpp_glue_02274930(TypeInfo_float,9)
                                                                ;
                                                                                                                                
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            ((System_Array_o *)array,fld_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59,
                                                             (MethodInfo *)0x0);
                                                  (__this->fields).Multipliers = array;
                                                  il2cpp_runtime_glue(&(__this->fields).Multipliers,
                                                                     array);
                                                  pSVar2 = (System_Int32_array *)
                                                           il2cpp_glue_02274930(TypeInfo_int,9);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            ((System_Array_o *)pSVar2,fld_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EA,
                                                             (MethodInfo *)0x0);
                                                  (__this->fields).PointThresholds = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).
                                                                      PointThresholds,pSVar2);
                                                  pSVar2 = (System_Int32_array *)
                                                           il2cpp_glue_02274930(TypeInfo_int,10);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            ((System_Array_o *)pSVar2,fld_62077555493F340E3B26815B1CEF687D5209109964DB5C7,
                                                             (MethodInfo *)0x0);
                                                  (__this->fields).PointDecays = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).PointDecays);
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040d9229:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}



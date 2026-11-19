// Type: UI.StylebarHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/StylebarHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/StylebarHandler.cs
// --------------------------------

// UI.StylebarHandler$$Awake
// il2cpp: void UI_StylebarHandler__Awake (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x5d50890
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d50a9f: nop 

void UI_StylebarHandler__Awake(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  UI_StylebarPopup_o **targetAddress;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  System_String_array *pSVar2;
  UnityEngine_Transform_o *parent;
  UI_StylebarPopup_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_String_array *values;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  long lVar6;
  ulong uVar7;
  System_String_array *pSVar8;
  
  if (Il2CppMethodInitialized_07547efd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_StylebarPopup)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_StylebarScaler)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_07547efd = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UI_ElementFactory__CreateDefaultPopup_object_
                     (parent,false,
                      (MethodInfo_34D7290 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_StylebarPopup);
  targetAddress = &(__this->fields)._styleBarPopup;
  (__this->fields)._styleBarPopup = pUVar3;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar3 = (__this->fields)._styleBarPopup;
  if (pUVar3 != (UI_StylebarPopup_o *)0x0) {
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
    UI_ElementFactory__SetAnchor(pUVar4,5,5,(UnityEngine_Vector2_o)0xc1a00000,(MethodInfo *)0x0);
    if (*targetAddress != (UI_StylebarPopup_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_
                  (pUVar4,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_StylebarScaler)
        ;
        if ((*targetAddress != (UI_StylebarPopup_o *)0x0) &&
           (__this_00 = ((*targetAddress)->fields)._bladeFill, __this_00 != (UnityEngine_UI_Image_o *)0x0)) {
          UnityEngine_UI_Image__set_fillAmount(__this_00,1.0,(MethodInfo *)0x0);
          pSVar5 = "";
          pUVar3 = *targetAddress;
          if ((pUVar3 != (UI_StylebarPopup_o *)0x0) &&
             (pUVar1 = (pUVar3->fields)._scoreLabel, pUVar1 != (UnityEngine_UI_Text_o *)0x0)) {
            (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                      (pUVar1,"",(pUVar1->klass->vtable)._75_set_text.method);
            pUVar1 = (pUVar3->fields)._bottomLabel;
            if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
              (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                        (pUVar1,pSVar5,(pUVar1->klass->vtable)._75_set_text.method);
              pSVar5 = "";
              pUVar3 = *targetAddress;
              if ((pUVar3 != (UI_StylebarPopup_o *)0x0) &&
                 (pUVar1 = (pUVar3->fields)._letterLabel, pUVar1 != (UnityEngine_UI_Text_o *)0x0)) {
                (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                          (pUVar1,"",(pUVar1->klass->vtable)._75_set_text.method);
                pUVar1 = (pUVar3->fields)._sentenceLabel;
                if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
                  (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                            (pUVar1,pSVar5,(pUVar1->klass->vtable)._75_set_text.method);
                  if (*targetAddress != (UI_StylebarPopup_o *)0x0) {
                    UI_StylebarPopup__SetRank(*targetAddress,0,method_00);
                    pSVar8 = (__this->fields).Letters;
                    if (pSVar8 != (System_String_array *)0x0) {
                      lVar6 = 0x20;
                      uVar7 = 0;
                      do {
                        if ((long)(int)pSVar8->max_length <= (long)uVar7) {
                          return;
                        }
                        values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
                        if (values == (System_String_array *)0x0) break;
                        if ((int)values->max_length == 0) {
label_05d50bdf:
                          ThrowIndexOutOfRangeException();
                        }
                        values->m_Items[0] = "<color=#";
                        Il2CppCodeGenWriteBarrier(values->m_Items);
                        pSVar2 = (__this->fields).ColorTags;
                        if (pSVar2 == (System_String_array *)0x0) break;
                        if (((uint)pSVar2->max_length <= uVar7) || ((values->max_length & 0xfffffffe) == 0))
                        goto label_05d50bdf;
                        values->m_Items[1] = pSVar2->m_Items[uVar7];
                        Il2CppCodeGenWriteBarrier(values->m_Items + 1);
                        if ((uint)values->max_length < 3) goto label_05d50bdf;
                        values->m_Items[2] = ">";
                        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
                        pSVar2 = (__this->fields).Letters;
                        if (pSVar2 == (System_String_array *)0x0) break;
                        if (((uint)pSVar2->max_length <= uVar7) || ((values->max_length & 0xfffffffc) == 0))
                        goto label_05d50bdf;
                        values->m_Items[3] = pSVar2->m_Items[uVar7];
                        Il2CppCodeGenWriteBarrier(values->m_Items + 3);
                        if ((uint)values->max_length < 5) goto label_05d50bdf;
                        values->m_Items[4] = "</color>";
                        Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                        pSVar5 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                        if ((uint)pSVar8->max_length <= uVar7) goto label_05d50bdf;
                        pSVar8->m_Items[uVar7] = pSVar5;
                        Il2CppCodeGenWriteBarrier((void **)((long)pSVar8->m_Items + lVar6 + -0x20));
                        uVar7 = uVar7 + 1;
                        pSVar8 = (__this->fields).Letters;
                        lVar6 = lVar6 + 8;
                      } while (pSVar8 != (System_String_array *)0x0);
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
  ThrowNullReferenceException();
}


// UI.StylebarHandler$$GetRank
// il2cpp: int32_t UI_StylebarHandler__GetRank (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x5d50d60

int32_t UI_StylebarHandler__GetRank(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  return (__this->fields)._rank;
}


// UI.StylebarHandler$$OnHit
// il2cpp: void UI_StylebarHandler__OnHit (UI_StylebarHandler_o* __this, int32_t damage, const MethodInfo* method);
// 0x5d50d70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d50ec1: jmp 0x5d50f28
// asm:   0x5d50efe: nop 
// asm:   0x5d50f1d: jmp 0x5d50f4b

void UI_StylebarHandler__OnHit(UI_StylebarHandler_o *__this,int32_t damage,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  Settings_UISettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  System_Single_array *pSVar7;
  System_Int32_array *pSVar8;
  UI_StylebarPopup_o *pUVar9;
  UnityEngine_UI_Text_o *pUVar10;
  int iVar11;
  undefined8 in_RAX;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  MethodInfo *method_00;
  int iVar14;
  System_String_o **ppSVar15;
  ulong uVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07547efe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"x");
    il2cpp_codegen_initialize_runtime_metadata(&"!");
    il2cpp_codegen_initialize_runtime_metadata(&"Hit");
    il2cpp_codegen_initialize_runtime_metadata(&"Hits");
    Il2CppMethodInitialized_07547efe = '\x01';
  }
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar5 == (Settings_UISettings_o *)0x0) ||
     (pSVar6 = (pSVar5->fields).ShowStylebar, pSVar6 == (Settings_BoolSetting_o *)0x0)) goto label_05d51073;
  if ((pSVar6->fields)._value == false) {
    return;
  }
  fVar19 = (__this->fields)._points;
  if (damage < 0) {
    if ((fVar19 == 0.0) && (!NAN(fVar19))) {
      fVar19 = fVar19 + 1.0;
      (__this->fields)._points = fVar19;
      pSVar8 = (__this->fields).PointThresholds;
      if (pSVar8 == (System_Int32_array *)0x0) goto label_05d51073;
      iVar4 = (__this->fields)._rank;
      iVar14 = (int)pSVar8->max_length;
      if (0 < iVar14) {
        uVar16 = 0;
        do {
          if (fVar19 <= (float)pSVar8->m_Items[uVar16]) {
            iVar14 = (int)uVar16;
            (__this->fields)._rank = iVar14;
            iVar11 = iVar14 - iVar4;
            goto joined_r0x05d50f49;
          }
          uVar16 = uVar16 + 1;
        } while ((pSVar8->max_length & 0xffffffff) != uVar16);
      }
      (__this->fields)._rank = iVar14;
      iVar11 = iVar14 - iVar4;
joined_r0x05d50f49:
      bVar17 = iVar14 == iVar4;
      bVar18 = SBORROW4(iVar14,iVar4);
      if (iVar14 < iVar4) {
        if ((__this->fields)._lostRank != false) goto label_05d50f2e;
label_05d50f51:
        (__this->fields)._lostRank = true;
      }
      else {
label_05d50f57:
        if (!bVar17 && bVar18 == iVar11 < 0) {
          (__this->fields)._lostRank = false;
        }
      }
    }
  }
  else {
    pSVar7 = (__this->fields).Multipliers;
    if (pSVar7 == (System_Single_array *)0x0) goto label_05d51073;
    uVar2 = (__this->fields)._chainKillRank;
    uVar3 = (uint)pSVar7->max_length;
    if (uVar3 <= uVar2) goto label_05d51078;
    fVar19 = fVar19 + (float)(int)((float)(damage + 200) * pSVar7->m_Items[(int)uVar2]);
    (__this->fields)._points = fVar19;
    (__this->fields)._chainKillRank = ((int)uVar2 < (int)(uVar3 - 1)) + uVar2;
    (__this->fields)._chainTime = 5.0;
    piVar1 = &(__this->fields)._hits;
    *piVar1 = *piVar1 + 1;
    pSVar8 = (__this->fields).PointThresholds;
    if (pSVar8 == (System_Int32_array *)0x0) goto label_05d51073;
    iVar4 = (__this->fields)._rank;
    iVar14 = (int)pSVar8->max_length;
    if (0 < iVar14) {
      uVar16 = 0;
      do {
        if (fVar19 <= (float)pSVar8->m_Items[uVar16]) {
          iVar14 = (int)uVar16;
          (__this->fields)._rank = iVar14;
          iVar11 = iVar14 - iVar4;
          goto joined_r0x05d50f26;
        }
        uVar16 = uVar16 + 1;
      } while ((pSVar8->max_length & 0xffffffff) != uVar16);
    }
    (__this->fields)._rank = iVar14;
    iVar11 = iVar14 - iVar4;
joined_r0x05d50f26:
    bVar17 = iVar14 == iVar4;
    bVar18 = SBORROW4(iVar14,iVar4);
    if (iVar4 <= iVar14) goto label_05d50f57;
    if ((__this->fields)._lostRank == false) goto label_05d50f51;
label_05d50f2e:
    (__this->fields)._hits = 0;
    (__this->fields)._points = 0.0;
    (__this->fields)._rank = 0;
    fVar19 = 0.0;
  }
  uStack_28 = CONCAT44((int)fVar19,(undefined4)uStack_28);
  pSVar12 = System_Int32__ToString((int32_t *)((long)&uStack_28 + 4),(MethodInfo *)0x0);
  pSVar13 = System_Int32__ToString(&(__this->fields)._hits,(MethodInfo *)0x0);
  if ((__this->fields)._hits < 2) {
    ppSVar15 = &"Hit";
  }
  else {
    ppSVar15 = &"Hits";
  }
  method_00 = (MethodInfo *)
              System_String__Concat_5301f10(pSVar13,*ppSVar15,"\n",(MethodInfo *)0x0);
  uVar2 = (__this->fields)._chainKillRank;
  if (0 < (int)uVar2) {
    pSVar7 = (__this->fields).Multipliers;
    if (pSVar7 == (System_Single_array *)0x0) goto label_05d51073;
    if ((uint)pSVar7->max_length <= uVar2) {
label_05d51078:
      ThrowIndexOutOfRangeException();
    }
    pSVar13 = System_Single__ToString(pSVar7->m_Items + uVar2,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)
                System_String__Concat_5302810
                          ((System_String_o *)method_00,"x",pSVar13,"!",
                           (MethodInfo *)0x0);
  }
  pUVar9 = (__this->fields)._styleBarPopup;
  if ((pUVar9 != (UI_StylebarPopup_o *)0x0) &&
     (pUVar10 = (pUVar9->fields)._scoreLabel, pUVar10 != (UnityEngine_UI_Text_o *)0x0)) {
    (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
              (pUVar10,pSVar12,(pUVar10->klass->vtable)._75_set_text.method);
    pUVar10 = (pUVar9->fields)._bottomLabel;
    if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                (pUVar10,(System_String_o *)method_00,(pUVar10->klass->vtable)._75_set_text.method);
      UI_StylebarHandler__UpdateLabels(__this,method_00);
      pUVar9 = (__this->fields)._styleBarPopup;
      if (pUVar9 != (UI_StylebarPopup_o *)0x0) {
        (*(pUVar9->klass->vtable)._21_Show.methodPtr)(pUVar9,(pUVar9->klass->vtable)._21_Show.method);
        return;
      }
    }
  }
label_05d51073:
  ThrowNullReferenceException();
}


// UI.StylebarHandler$$UpdateRank
// il2cpp: void UI_StylebarHandler__UpdateRank (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x5d51080
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d5109f: nop 

void UI_StylebarHandler__UpdateRank(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Int32_array *pSVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  pSVar2 = (__this->fields).PointThresholds;
  if (pSVar2 == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (__this->fields)._rank;
  iVar4 = (int)pSVar2->max_length;
  if (0 < iVar4) {
    uVar5 = 0;
    do {
      if ((__this->fields)._points <= (float)pSVar2->m_Items[uVar5]) {
        iVar4 = (int)uVar5;
        (__this->fields)._rank = iVar4;
        iVar3 = iVar4 - iVar1;
        goto joined_r0x05d510dd;
      }
      uVar5 = uVar5 + 1;
    } while ((pSVar2->max_length & 0xffffffff) != uVar5);
  }
  (__this->fields)._rank = iVar4;
  iVar3 = iVar4 - iVar1;
joined_r0x05d510dd:
  if (iVar1 <= iVar4) {
    if (iVar4 != iVar1 && SBORROW4(iVar4,iVar1) == iVar3 < 0) {
      (__this->fields)._lostRank = false;
    }
    return;
  }
  if ((__this->fields)._lostRank == false) {
    (__this->fields)._lostRank = true;
    return;
  }
  (__this->fields)._hits = 0;
  (__this->fields)._points = 0.0;
  (__this->fields)._rank = 0;
  return;
}


// UI.StylebarHandler$$UpdateLabels
// il2cpp: void UI_StylebarHandler__UpdateLabels (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x5d51100

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
label_05d511da:
      ThrowIndexOutOfRangeException();
    }
    pSVar3 = (__this->fields).Sentences;
    if (pSVar3 != (System_String_array *)0x0) {
      if ((uint)pSVar3->max_length <= uVar1) goto label_05d511da;
      pUVar4 = (__this->fields)._styleBarPopup;
      if ((pUVar4 != (UI_StylebarPopup_o *)0x0) &&
         (pUVar5 = (pUVar4->fields)._letterLabel, pUVar5 != (UnityEngine_UI_Text_o *)0x0)) {
        method_01 = (MethodInfo *)pSVar3->m_Items[(int)uVar1];
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,pSVar2->m_Items[(int)uVar1],(pUVar5->klass->vtable)._75_set_text.method);
        pUVar5 = (pUVar4->fields)._sentenceLabel;
        if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                    (pUVar5,(System_String_o *)method_01,(pUVar5->klass->vtable)._75_set_text.method);
          pUVar4 = (__this->fields)._styleBarPopup;
          iVar6 = UI_StylebarHandler__GetRankPercent(__this,method_01);
          if ((pUVar4 != (UI_StylebarPopup_o *)0x0) &&
             (__this_00 = (pUVar4->fields)._bladeFill, __this_00 != (UnityEngine_UI_Image_o *)0x0)) {
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
  ThrowNullReferenceException();
}


// UI.StylebarHandler$$GetRankPercent
// il2cpp: int32_t UI_StylebarHandler__GetRankPercent (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x5d511e0

int32_t UI_StylebarHandler__GetRankPercent(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_Int32_array *pSVar3;
  
  uVar1 = (__this->fields)._rank;
  if ((int)uVar1 < 1) {
    if ((ulong)uVar1 == 0) {
      pSVar3 = (__this->fields).PointThresholds;
      if (pSVar3 != (System_Int32_array *)0x0) {
        if ((int)pSVar3->max_length != 0) {
          return (int)((__this->fields)._points * 100.0) / pSVar3->m_Items[0];
        }
        goto label_05d51271;
      }
      goto label_05d5126c;
    }
  }
  else {
    pSVar3 = (__this->fields).PointThresholds;
    if (pSVar3 == (System_Int32_array *)0x0) {
label_05d5126c:
      ThrowNullReferenceException();
    }
    uVar2 = (uint)pSVar3->max_length;
    if ((int)uVar1 < (int)uVar2) {
      if ((uVar1 - 1 < uVar2) && (uVar1 < uVar2)) {
        return (int)((((__this->fields)._points - (float)pSVar3->m_Items[uVar1 - 1]) * 100.0) /
                    (float)(pSVar3->m_Items[uVar1] - pSVar3->m_Items[uVar1 - 1]));
      }
label_05d51271:
      ThrowIndexOutOfRangeException();
    }
  }
  return 100;
}


// UI.StylebarHandler$$Update
// il2cpp: void UI_StylebarHandler__Update (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x5d51280

void UI_StylebarHandler__Update(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Settings_UISettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  System_Int32_array *pSVar5;
  UI_StylebarPopup_o *pUVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  if (Il2CppMethodInitialized_07547eff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547eff = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar3 != (Settings_UISettings_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).ShowStylebar, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar4->fields)._value == false) {
      pUVar6 = (__this->fields)._styleBarPopup;
      if (pUVar6 != (UI_StylebarPopup_o *)0x0) {
        (*(pUVar6->klass->vtable)._22_Hide.methodPtr)(pUVar6,(pUVar6->klass->vtable)._22_Hide.method);
        (__this->fields)._points = 0.0;
        return;
      }
    }
    else {
      fVar10 = (__this->fields)._points;
      if (fVar10 <= 0.0) {
        pUVar6 = (__this->fields)._styleBarPopup;
        if (pUVar6 != (UI_StylebarPopup_o *)0x0) {
          (*(pUVar6->klass->vtable)._22_Hide.methodPtr)(pUVar6,(pUVar6->klass->vtable)._22_Hide.method);
          fVar10 = (__this->fields)._chainTime;
joined_r0x05d51401:
          if (fVar10 <= 0.0) {
            (__this->fields)._chainTime = 0.0;
            (__this->fields)._chainKillRank = 0;
            return;
          }
          fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          (__this->fields)._chainTime = fVar10 - fVar9;
          return;
        }
      }
      else {
        pSVar5 = (__this->fields).PointDecays;
        if (pSVar5 != (System_Int32_array *)0x0) {
          uVar1 = (__this->fields)._rank;
          if ((uint)pSVar5->max_length <= uVar1) {
            ThrowIndexOutOfRangeException();
          }
          iVar2 = pSVar5->m_Items[(int)uVar1];
          fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          fVar10 = fVar10 + fVar9 * (float)iVar2 * -10.0;
          (__this->fields)._points = fVar10;
          pSVar5 = (__this->fields).PointThresholds;
          if (pSVar5 != (System_Int32_array *)0x0) {
            iVar2 = (__this->fields)._rank;
            iVar8 = (int)pSVar5->max_length;
            if (0 < iVar8) {
              method = (MethodInfo *)0x0;
              do {
                if (fVar10 <= (float)pSVar5->m_Items[(long)method]) {
                  iVar8 = (int)method;
                  (__this->fields)._rank = iVar8;
                  iVar7 = iVar8 - iVar2;
                  goto joined_r0x05d5142c;
                }
                method = (MethodInfo *)((long)&method->methodPointer + 1);
              } while ((MethodInfo *)(pSVar5->max_length & 0xffffffff) != method);
            }
            (__this->fields)._rank = iVar8;
            iVar7 = iVar8 - iVar2;
joined_r0x05d5142c:
            if (iVar8 < iVar2) {
              if ((__this->fields)._lostRank == false) {
                (__this->fields)._lostRank = true;
              }
              else {
                (__this->fields)._hits = 0;
                (__this->fields)._points = 0.0;
                (__this->fields)._rank = 0;
              }
            }
            else if (iVar8 != iVar2 && SBORROW4(iVar8,iVar2) == iVar7 < 0) {
              (__this->fields)._lostRank = false;
            }
            UI_StylebarHandler__UpdateLabels(__this,method);
            fVar10 = (__this->fields)._chainTime;
            goto joined_r0x05d51401;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.StylebarHandler$$.ctor
// il2cpp: void UI_StylebarHandler___ctor (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x5d51470

void UI_StylebarHandler___ctor(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Single_array *array;
  System_Int32_array *pSVar2;
  
  if (Il2CppMethodInitialized_07547f00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_float_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F40B189691
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D5884225DBC
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD614C26EE8E
              );
    il2cpp_codegen_initialize_runtime_metadata(&"mazing!");
    il2cpp_codegen_initialize_runtime_metadata(&"S");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"oppin!");
    il2cpp_codegen_initialize_runtime_metadata(&"ENITH");
    il2cpp_codegen_initialize_runtime_metadata(&"asual");
    il2cpp_codegen_initialize_runtime_metadata(&"BE81F7");
    il2cpp_codegen_initialize_runtime_metadata(&"FFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"FA8258");
    il2cpp_codegen_initialize_runtime_metadata(&"XX");
    il2cpp_codegen_initialize_runtime_metadata(&"FF0000");
    il2cpp_codegen_initialize_runtime_metadata(&"eja Vu");
    il2cpp_codegen_initialize_runtime_metadata(&"pectacular!!");
    il2cpp_codegen_initialize_runtime_metadata(&"000000");
    il2cpp_codegen_initialize_runtime_metadata(&"SS");
    il2cpp_codegen_initialize_runtime_metadata(&"TREME!!!");
    il2cpp_codegen_initialize_runtime_metadata(&"ACFA58");
    il2cpp_codegen_initialize_runtime_metadata(&"TREEME!!!");
    il2cpp_codegen_initialize_runtime_metadata(&"D");
    il2cpp_codegen_initialize_runtime_metadata(&"B");
    il2cpp_codegen_initialize_runtime_metadata(&"C");
    il2cpp_codegen_initialize_runtime_metadata(&"SSS");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"F4FA58");
    il2cpp_codegen_initialize_runtime_metadata(&"ensational!");
    il2cpp_codegen_initialize_runtime_metadata(&"A");
    il2cpp_codegen_initialize_runtime_metadata(&"tylish!!!");
    il2cpp_codegen_initialize_runtime_metadata(&"FAAC58");
    Il2CppMethodInitialized_07547f00 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,10);
  if (pSVar1 == (System_String_array *)0x0) {
label_05d51b64:
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "D";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "C";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = "B";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        if ((pSVar1->max_length & 0xfffffffc) != 0) {
          pSVar1->m_Items[3] = "A";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
          if (4 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[4] = "S";
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 4);
            if (5 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[5] = "SS";
              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 5);
              if (6 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[6] = "SSS";
                Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 6);
                if ((pSVar1->max_length & 0xfffffff8) != 0) {
                  pSVar1->m_Items[7] = "X";
                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 7);
                  if (8 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[8] = "XX";
                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 8);
                    if (9 < (uint)pSVar1->max_length) {
                      pSVar1->m_Items[9] = "Z";
                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 9);
                      (__this->fields).Letters = pSVar1;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).Letters);
                      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,10);
                      if (pSVar1 == (System_String_array *)0x0) goto label_05d51b64;
                      if ((int)pSVar1->max_length != 0) {
                        pSVar1->m_Items[0] = "FFFFFF";
                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                          pSVar1->m_Items[1] = "ACFA58";
                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                          if (2 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[2] = "F4FA58";
                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
                            if ((pSVar1->max_length & 0xfffffffc) != 0) {
                              pSVar1->m_Items[3] = "FAAC58";
                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
                              if (4 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[4] = "FA8258";
                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 4);
                                if (5 < (uint)pSVar1->max_length) {
                                  pSVar1->m_Items[5] = "BE81F7";
                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 5);
                                  if (6 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[6] = "FF0000";
                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 6);
                                    if ((pSVar1->max_length & 0xfffffff8) != 0) {
                                      pSVar1->m_Items[7] = "000000";
                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 7);
                                      if (8 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[8] = "000000";
                                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 8);
                                        if (9 < (uint)pSVar1->max_length) {
                                          pSVar1->m_Items[9] = "000000";
                                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 9);
                                          (__this->fields).ColorTags = pSVar1;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields).ColorTags);
                                          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,10)
                                          ;
                                          if (pSVar1 == (System_String_array *)0x0) goto label_05d51b64;
                                          if ((int)pSVar1->max_length != 0) {
                                            pSVar1->m_Items[0] = "eja Vu";
                                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                              pSVar1->m_Items[1] = "asual";
                                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                              if (2 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[2] = "oppin!";
                                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
                                                if ((pSVar1->max_length & 0xfffffffc) != 0) {
                                                  pSVar1->m_Items[3] = "mazing!";
                                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
                                                  if (4 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[4] = "ensational!";
                                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 4);
                                                    if (5 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[5] = "pectacular!!";
                                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 5);
                                                      if (6 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[6] = "tylish!!!";
                                                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 6);
                                                        if ((pSVar1->max_length & 0xfffffff8) != 0) {
                                                          pSVar1->m_Items[7] = "TREME!!!";
                                                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 7);
                                                          if (8 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[8] = "TREEME!!!";
                                                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 8);
                                                            if (9 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[9] = "ENITH";
                                                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 9);
                                                              (__this->fields).Sentences = pSVar1;
                                                              Il2CppCodeGenWriteBarrier
                                                                        (&(__this->fields).Sentences);
                                                              array = (System_Single_array *)
                                                                      SZArrayNew(TypeInfo_float_array,9);
                                                                                                                            
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                                                                 ((System_Array_o *)array,
                                                                                                                                    
                                                       FieldRva_PrivateImplementationDetails_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D5884225DBC
                                                       ,(MethodInfo *)0x0);
                                                       (__this->fields).Multipliers = array;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).Multipliers);
                                                       pSVar2 = (System_Int32_array *)
                                                                SZArrayNew(TypeInfo_int_array,9);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                                                                 ((System_Array_o *)pSVar2,
                                                                                                                                    
                                                       FieldRva_PrivateImplementationDetails_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F40B189691
                                                       ,(MethodInfo *)0x0);
                                                       (__this->fields).PointThresholds = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).PointThresholds);
                                                       pSVar2 = (System_Int32_array *)
                                                                SZArrayNew(TypeInfo_int_array,10);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                                                                 ((System_Array_o *)pSVar2,
                                                                                                                                    
                                                       FieldRva_PrivateImplementationDetails_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD614C26EE8E
                                                       ,(MethodInfo *)0x0);
                                                       (__this->fields).PointDecays = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).PointDecays);
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
  ThrowIndexOutOfRangeException();
}



// Type: UI.StylebarHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/StylebarHandler.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/StylebarHandler.cs
// --------------------------------

// UI.StylebarHandler$$Awake
// il2cpp: void UI_StylebarHandler__Awake (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x18227fd80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18228014d: jmp 0x182280024

void UI_StylebarHandler__Awake(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_Sprite_array *pUVar4;
  System_String_array *pSVar5;
  System_String_array *pSVar6;
  UnityEngine_Transform_o *parent;
  UI_StylebarPopup_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  System_String_array *values;
  System_String_o *pSVar9;
  uint uVar10;
  
  if (Il2CppMethodInitialized_184347384 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_StylebarPopup)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_StylebarScaler)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"<color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color>");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_184347384 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UI_ElementFactory__CreateHeadedPanel_object_
                     (parent,false,
                      (MethodInfo_6ABA40 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_StylebarPopup);
  (__this->fields)._styleBarPopup = pUVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._styleBarPopup,pUVar7);
  pUVar7 = (__this->fields)._styleBarPopup;
  if (pUVar7 != (UI_StylebarPopup_o *)0x0) {
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
    uVar10 = 0;
    UI_ElementFactory__SetAnchor(pUVar8,5,5,(UnityEngine_Vector2_o)0xc1a00000,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._styleBarPopup;
    if ((pUVar7 != (UI_StylebarPopup_o *)0x0) &&
       (pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__AddComponent_object_
                (pUVar8,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_StylebarScaler);
      pUVar7 = (__this->fields)._styleBarPopup;
      if ((pUVar7 != (UI_StylebarPopup_o *)0x0) &&
         (pUVar2 = (pUVar7->fields)._bladeFill, pUVar2 != (UnityEngine_UI_Image_o *)0x0)) {
        UnityEngine_UI_Image__set_fillAmount(pUVar2,1.0,(MethodInfo *)0x0);
        pSVar9 = "";
        pUVar7 = (__this->fields)._styleBarPopup;
        if ((pUVar7 != (UI_StylebarPopup_o *)0x0) &&
           (pUVar3 = (pUVar7->fields)._scoreLabel, pUVar3 != (UnityEngine_UI_Text_o *)0x0)) {
          (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                    (pUVar3,"",(pUVar3->klass->vtable)._75_set_text.method);
          pUVar3 = (pUVar7->fields)._bottomLabel;
          if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                      (pUVar3,pSVar9,(pUVar3->klass->vtable)._75_set_text.method);
            pSVar9 = "";
            pUVar7 = (__this->fields)._styleBarPopup;
            if ((pUVar7 != (UI_StylebarPopup_o *)0x0) &&
               (pUVar3 = (pUVar7->fields)._letterLabel, pUVar3 != (UnityEngine_UI_Text_o *)0x0)) {
              (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                        (pUVar3,"",(pUVar3->klass->vtable)._75_set_text.method);
              pUVar3 = (pUVar7->fields)._sentenceLabel;
              if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                          (pUVar3,pSVar9,(pUVar3->klass->vtable)._75_set_text.method);
                pUVar7 = (__this->fields)._styleBarPopup;
                if (pUVar7 != (UI_StylebarPopup_o *)0x0) {
                  if ((pUVar7->fields)._rank != 0) {
                    pUVar4 = (pUVar7->fields)._fillSprites;
                    (pUVar7->fields)._rank = 0;
                    if (pUVar4 == (UnityEngine_Sprite_array *)0x0) goto label_182280167;
                    if ((int)pUVar4->max_length == 0) {
label_18228016d:
                      ThrowIndexOutOfRangeException();
                    }
                    pUVar2 = (pUVar7->fields)._bladeFill;
                    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_182280167;
                    UnityEngine_UI_Image__set_sprite(pUVar2,pUVar4->m_Items[0],(MethodInfo *)0x0);
                    pUVar4 = (pUVar7->fields)._backgroundSprites;
                    if (pUVar4 == (UnityEngine_Sprite_array *)0x0) goto label_182280167;
                    uVar1 = (pUVar7->fields)._rank;
                    if ((uint)pUVar4->max_length <= uVar1) goto label_18228016d;
                    pUVar2 = (pUVar7->fields)._bladeBackground;
                    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_182280167;
                    UnityEngine_UI_Image__set_sprite(pUVar2,pUVar4->m_Items[(int)uVar1],(MethodInfo *)0x0);
                  }
                  pSVar5 = (__this->fields).Letters;
                  while (pSVar5 != (System_String_array *)0x0) {
                    if ((int)pSVar5->max_length <= (int)uVar10) {
                      return;
                    }
                    pSVar5 = (__this->fields).Letters;
                    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
                    pSVar9 = "<color=#";
                    if (values == (System_String_array *)0x0) break;
                    if ((int)values->max_length == 0) goto label_18228016d;
                    values->m_Items[0] = "<color=#";
                    Il2CppCodeGenWriteBarrier(values->m_Items,pSVar9);
                    pSVar6 = (__this->fields).ColorTags;
                    if (pSVar6 == (System_String_array *)0x0) break;
                    if (((uint)pSVar6->max_length <= uVar10) || ((uint)values->max_length < 2))
                    goto label_18228016d;
                    pSVar9 = pSVar6->m_Items[(int)uVar10];
                    values->m_Items[1] = pSVar9;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar9);
                    pSVar9 = ">";
                    if ((uint)values->max_length < 3) goto label_18228016d;
                    values->m_Items[2] = ">";
                    Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar9);
                    pSVar6 = (__this->fields).Letters;
                    if (pSVar6 == (System_String_array *)0x0) break;
                    if (((uint)pSVar6->max_length <= uVar10) || ((uint)values->max_length < 4))
                    goto label_18228016d;
                    pSVar9 = pSVar6->m_Items[(int)uVar10];
                    values->m_Items[3] = pSVar9;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar9);
                    pSVar9 = "</color>";
                    if ((uint)values->max_length < 5) goto label_18228016d;
                    values->m_Items[4] = "</color>";
                    Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar9);
                    pSVar9 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                    if (pSVar5 == (System_String_array *)0x0) break;
                    if ((uint)pSVar5->max_length <= uVar10) goto label_18228016d;
                    pSVar5->m_Items[(int)uVar10] = pSVar9;
                    Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar10,pSVar9);
                    uVar10 = uVar10 + 1;
                    pSVar5 = (__this->fields).Letters;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_182280167:
  ThrowNullReferenceException();
}


// UI.StylebarHandler$$GetRank
// il2cpp: int32_t UI_StylebarHandler__GetRank (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x181a2a530

int32_t
UI_StylebarHandler__GetRank(UI_StylebarHandler_o* __this, MethodInfo* method)

{
  return (__this->fields)._rank;
}


// UI.StylebarHandler$$OnHit
// il2cpp: void UI_StylebarHandler__OnHit (UI_StylebarHandler_o* __this, int32_t damage, const MethodInfo* method);
// 0x182280270
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822803da: mov ecx, r14d
// asm:   0x1822803dd: mov eax, r14d

void UI_StylebarHandler__OnHit(UI_StylebarHandler_o *__this,int32_t damage,MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  Settings_UISettings_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  System_Int32_array *pSVar7;
  System_Single_array *pSVar8;
  UI_StylebarPopup_o *pUVar9;
  UnityEngine_UI_Text_o *pUVar10;
  il2cpp_array_size_t iVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  uint uVar15;
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184347385 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"x");
    il2cpp_codegen_initialize_runtime_metadata(&"!");
    il2cpp_codegen_initialize_runtime_metadata(&"Hit");
    il2cpp_codegen_initialize_runtime_metadata(&"Hits");
    Il2CppMethodInitialized_184347385 = '\x01';
  }
  uVar15 = 0;
  local_res20[0] = 0;
  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar5 == (Settings_UISettings_o *)0x0) ||
     (pSVar6 = (pSVar5->fields).ShowStylebar, pSVar6 == (Settings_BoolSetting_o *)0x0)) goto label_182280555;
  if ((pSVar6->fields)._value == false) {
    return;
  }
  fVar2 = (__this->fields)._points;
  if (damage < 0) {
    if (fVar2 == 0.0) {
      (__this->fields)._points = fVar2 + 1.0;
      UI_StylebarHandler__UpdateRank(__this,(MethodInfo *)0x0);
    }
  }
  else {
    pSVar8 = (__this->fields).Multipliers;
    if (pSVar8 == (System_Single_array *)0x0) goto label_182280555;
    uVar3 = (__this->fields)._chainKillRank;
    if ((uint)pSVar8->max_length <= uVar3) goto label_18228055b;
    (__this->fields)._points = (float)(int)((float)(damage + 200) * pSVar8->m_Items[(int)uVar3]) + fVar2;
    if (pSVar8 == (System_Single_array *)0x0) goto label_182280555;
    iVar11 = pSVar8->max_length;
    iVar4 = (__this->fields)._chainKillRank;
    pSVar7 = (__this->fields).PointThresholds;
    (__this->fields)._chainTime = 5.0;
    if (iVar4 < (int)iVar11 + -1) {
      iVar4 = iVar4 + 1;
    }
    piVar1 = &(__this->fields)._hits;
    *piVar1 = *piVar1 + 1;
    (__this->fields)._chainKillRank = iVar4;
    if (pSVar7 == (System_Int32_array *)0x0) goto label_182280555;
    for (; (int)uVar15 < (int)pSVar7->max_length; uVar15 = uVar15 + 1) {
      if ((uint)pSVar7->max_length <= uVar15) goto label_18228055b;
      if ((__this->fields)._points <= (float)pSVar7->m_Items[(int)uVar15]) break;
    }
    iVar4 = (__this->fields)._rank;
    if ((int)pSVar7->max_length <= (int)uVar15) {
      uVar15 = (uint)pSVar7->max_length;
    }
    (__this->fields)._rank = uVar15;
    if ((int)uVar15 < iVar4) {
      if ((__this->fields)._lostRank == false) {
        (__this->fields)._lostRank = true;
      }
      else {
        (__this->fields)._hits = 0;
        (__this->fields)._points = 0.0;
        (__this->fields)._rank = 0;
      }
    }
    else if (iVar4 < (int)uVar15) {
      (__this->fields)._lostRank = false;
    }
  }
  local_res20[0] = (int32_t)(__this->fields)._points;
  pSVar12 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
  pSVar13 = System_Int32__ToString(&(__this->fields)._hits,(MethodInfo *)0x0);
  pSVar14 = "Hits";
  if ((__this->fields)._hits < 2) {
    pSVar14 = "Hit";
  }
  pSVar14 = System_String__Concat_1969b70(pSVar13,pSVar14,"\n",(MethodInfo *)0x0);
  if (0 < (__this->fields)._chainKillRank) {
    pSVar8 = (__this->fields).Multipliers;
    if (pSVar8 == (System_Single_array *)0x0) goto label_182280555;
    uVar15 = (__this->fields)._chainKillRank;
    if ((uint)pSVar8->max_length <= uVar15) {
label_18228055b:
      ThrowIndexOutOfRangeException();
    }
    pSVar13 = System_Single__ToString(pSVar8->m_Items + (int)uVar15,(MethodInfo *)0x0);
    pSVar14 = System_String__Concat_1969590
                        (pSVar14,"x",pSVar13,"!",(MethodInfo *)0x0);
  }
  pUVar9 = (__this->fields)._styleBarPopup;
  if ((pUVar9 != (UI_StylebarPopup_o *)0x0) &&
     (pUVar10 = (pUVar9->fields)._scoreLabel, pUVar10 != (UnityEngine_UI_Text_o *)0x0)) {
    (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
              (pUVar10,pSVar12,(pUVar10->klass->vtable)._75_set_text.method);
    pUVar10 = (pUVar9->fields)._bottomLabel;
    if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                (pUVar10,pSVar14,(pUVar10->klass->vtable)._75_set_text.method);
      UI_StylebarHandler__UpdateLabels(__this,(MethodInfo *)0x0);
      pUVar9 = (__this->fields)._styleBarPopup;
      if (pUVar9 != (UI_StylebarPopup_o *)0x0) {
        (*(pUVar9->klass->vtable)._21_Show.methodPtr)(pUVar9,(pUVar9->klass->vtable)._21_Show.method);
        return;
      }
    }
  }
label_182280555:
  ThrowNullReferenceException();
}


// UI.StylebarHandler$$UpdateRank
// il2cpp: void UI_StylebarHandler__UpdateRank (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x182280740

void UI_StylebarHandler__UpdateRank(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Int32_array *pSVar2;
  uint uVar3;
  
  pSVar2 = (__this->fields).PointThresholds;
  if (pSVar2 != (System_Int32_array *)0x0) {
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if ((__this->fields)._points <= (float)pSVar2->m_Items[(int)uVar3]) break;
    }
    if (pSVar2 != (System_Int32_array *)0x0) {
      iVar1 = (__this->fields)._rank;
      if ((int)pSVar2->max_length <= (int)uVar3) {
        uVar3 = (uint)pSVar2->max_length;
      }
      (__this->fields)._rank = uVar3;
      if (iVar1 <= (int)uVar3) {
        if (iVar1 < (int)uVar3) {
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
  }
  ThrowNullReferenceException();
}


// UI.StylebarHandler$$UpdateLabels
// il2cpp: void UI_StylebarHandler__UpdateLabels (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x182280570

void UI_StylebarHandler__UpdateLabels(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_array *pSVar3;
  System_String_array *pSVar4;
  UI_StylebarPopup_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  System_String_o *pSVar7;
  System_Int32_array *pSVar8;
  UnityEngine_UI_Image_o *__this_00;
  int iVar9;
  
  pSVar3 = (__this->fields).Letters;
  if (pSVar3 == (System_String_array *)0x0) goto label_18228072b;
  uVar1 = (__this->fields)._rank;
  if ((uint)pSVar3->max_length <= uVar1) goto label_182280731;
  pSVar4 = (__this->fields).Sentences;
  if (pSVar4 == (System_String_array *)0x0) goto label_18228072b;
  uVar2 = (__this->fields)._rank;
  if ((uint)pSVar4->max_length <= uVar2) goto label_182280731;
  pUVar5 = (__this->fields)._styleBarPopup;
  if ((pUVar5 == (UI_StylebarPopup_o *)0x0) ||
     (pUVar6 = (pUVar5->fields)._letterLabel, pUVar6 == (UnityEngine_UI_Text_o *)0x0)) goto label_18228072b;
  pSVar7 = pSVar4->m_Items[(int)uVar2];
  (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
            (pUVar6,pSVar3->m_Items[(int)uVar1],(pUVar6->klass->vtable)._75_set_text.method);
  pUVar6 = (pUVar5->fields)._sentenceLabel;
  if (pUVar6 == (UnityEngine_UI_Text_o *)0x0) goto label_18228072b;
  (*(pUVar6->klass->vtable)._75_set_text.methodPtr)(pUVar6,pSVar7,(pUVar6->klass->vtable)._75_set_text.method)
  ;
  iVar9 = (__this->fields)._rank;
  if (iVar9 < 1) {
label_1822806a6:
    if (iVar9 == 0) {
      pSVar8 = (__this->fields).PointThresholds;
      if (pSVar8 == (System_Int32_array *)0x0) goto label_18228072b;
      uVar1 = (__this->fields)._rank;
      if ((uint)pSVar8->max_length <= uVar1) {
label_182280731:
        ThrowIndexOutOfRangeException();
      }
      iVar9 = (int)((__this->fields)._points * 100.0) / pSVar8->m_Items[(int)uVar1];
    }
    else {
      iVar9 = 100;
    }
  }
  else {
    pSVar8 = (__this->fields).PointThresholds;
    if (pSVar8 == (System_Int32_array *)0x0) goto label_18228072b;
    if ((int)pSVar8->max_length <= (__this->fields)._rank) {
      iVar9 = (__this->fields)._rank;
      goto label_1822806a6;
    }
    pSVar8 = (__this->fields).PointThresholds;
    iVar9 = (__this->fields)._rank;
    if ((uint)pSVar8->max_length <= iVar9 - 1U) goto label_182280731;
    if (pSVar8 == (System_Int32_array *)0x0) goto label_18228072b;
    uVar1 = (__this->fields)._rank;
    if ((uint)pSVar8->max_length <= uVar1) goto label_182280731;
    if (pSVar8 == (System_Int32_array *)0x0) goto label_18228072b;
    iVar9 = (int)((((__this->fields)._points - (float)pSVar8->m_Items[(longlong)iVar9 + -1]) * 100.0) /
                 (float)(pSVar8->m_Items[(int)uVar1] - pSVar8->m_Items[(longlong)(__this->fields)._rank + -1])
                 );
  }
  pUVar5 = (__this->fields)._styleBarPopup;
  if ((pUVar5 != (UI_StylebarPopup_o *)0x0) &&
     (__this_00 = (pUVar5->fields)._bladeFill, __this_00 != (UnityEngine_UI_Image_o *)0x0)) {
    UnityEngine_UI_Image__set_fillAmount(__this_00,(float)iVar9 * 0.01,(MethodInfo *)0x0);
    pUVar5 = (__this->fields)._styleBarPopup;
    if (pUVar5 != (UI_StylebarPopup_o *)0x0) {
      UI_StylebarPopup__SetRank(pUVar5,(__this->fields)._rank,(MethodInfo *)0x0);
      return;
    }
  }
label_18228072b:
  ThrowNullReferenceException();
}


// UI.StylebarHandler$$GetRankPercent
// il2cpp: int32_t UI_StylebarHandler__GetRankPercent (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x182280180

int32_t UI_StylebarHandler__GetRankPercent(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Int32_array *pSVar3;
  
  iVar1 = (__this->fields)._rank;
  if (0 < iVar1) {
    pSVar3 = (__this->fields).PointThresholds;
    if (pSVar3 == (System_Int32_array *)0x0) goto label_182280256;
    if ((__this->fields)._rank < (int)pSVar3->max_length) {
      pSVar3 = (__this->fields).PointThresholds;
      iVar1 = (__this->fields)._rank;
      if ((uint)pSVar3->max_length <= iVar1 - 1U) goto label_18228025c;
      if (pSVar3 != (System_Int32_array *)0x0) {
        uVar2 = (__this->fields)._rank;
        if ((uint)pSVar3->max_length <= uVar2) goto label_18228025c;
        if (pSVar3 != (System_Int32_array *)0x0) {
          return (int)((((__this->fields)._points - (float)pSVar3->m_Items[(longlong)iVar1 + -1]) * 100.0) /
                      (float)(pSVar3->m_Items[(int)uVar2] -
                             pSVar3->m_Items[(longlong)(__this->fields)._rank + -1]));
        }
      }
      goto label_182280256;
    }
    iVar1 = (__this->fields)._rank;
  }
  if (iVar1 != 0) {
    return 100;
  }
  pSVar3 = (__this->fields).PointThresholds;
  if (pSVar3 != (System_Int32_array *)0x0) {
    uVar2 = (__this->fields)._rank;
    if (uVar2 < (uint)pSVar3->max_length) {
      return (int)((__this->fields)._points * 100.0) / pSVar3->m_Items[(int)uVar2];
    }
label_18228025c:
    ThrowIndexOutOfRangeException();
  }
label_182280256:
  ThrowNullReferenceException();
}


// UI.StylebarHandler$$Update
// il2cpp: void UI_StylebarHandler__Update (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x1822807d0

void UI_StylebarHandler__Update(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  Settings_UISettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  UI_StylebarPopup_o *pUVar6;
  System_Int32_array *pSVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_184347386 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184347386 = '\x01';
  }
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar4 != (Settings_UISettings_o *)0x0) &&
     (pSVar5 = (pSVar4->fields).ShowStylebar, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar5->fields)._value == false) {
      pUVar6 = (__this->fields)._styleBarPopup;
      if (pUVar6 == (UI_StylebarPopup_o *)0x0) goto label_182280920;
      (*(pUVar6->klass->vtable)._22_Hide.methodPtr)(pUVar6,(pUVar6->klass->vtable)._22_Hide.method);
      (__this->fields)._points = 0.0;
    }
    else {
      fVar1 = (__this->fields)._points;
      if (0.0 < fVar1) {
        pSVar7 = (__this->fields).PointDecays;
        if (pSVar7 == (System_Int32_array *)0x0) goto label_182280920;
        uVar2 = (__this->fields)._rank;
        if ((uint)pSVar7->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        iVar3 = pSVar7->m_Items[(int)uVar2];
        fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        (__this->fields)._points = fVar1 - fVar8 * (float)iVar3 * 10.0;
        UI_StylebarHandler__UpdateRank(__this,(MethodInfo *)0x0);
        UI_StylebarHandler__UpdateLabels(__this,(MethodInfo *)0x0);
      }
      else {
        pUVar6 = (__this->fields)._styleBarPopup;
        if (pUVar6 == (UI_StylebarPopup_o *)0x0) goto label_182280920;
        (*(pUVar6->klass->vtable)._22_Hide.methodPtr)(pUVar6,(pUVar6->klass->vtable)._22_Hide.method);
      }
      fVar1 = (__this->fields)._chainTime;
      if (0.0 < fVar1) {
        fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        (__this->fields)._chainTime = fVar1 - fVar8;
      }
      else {
        (__this->fields)._chainTime = 0.0;
        (__this->fields)._chainKillRank = 0;
      }
    }
    return;
  }
label_182280920:
  ThrowNullReferenceException();
}


// UI.StylebarHandler$$.ctor
// il2cpp: void UI_StylebarHandler___ctor (UI_StylebarHandler_o* __this, const MethodInfo* method);
// 0x182280930

void UI_StylebarHandler___ctor(UI_StylebarHandler_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  System_Single_array *array;
  System_Int32_array *pSVar3;
  
  if (Il2CppMethodInitialized_184347387 == '\0') {
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
    Il2CppMethodInitialized_184347387 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,10);
  pSVar1 = "D";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "D";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      pSVar1 = "C";
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "C";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
        pSVar1 = "B";
        if (2 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[2] = "B";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
          pSVar1 = "A";
          if (3 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[3] = "A";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
            pSVar1 = "S";
            if (4 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[4] = "S";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
              pSVar1 = "SS";
              if (5 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[5] = "SS";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar1);
                pSVar1 = "SSS";
                if (6 < (uint)pSVar2->max_length) {
                  pSVar2->m_Items[6] = "SSS";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6,pSVar1);
                  pSVar1 = "X";
                  if (7 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[7] = "X";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 7,pSVar1);
                    pSVar1 = "XX";
                    if (8 < (uint)pSVar2->max_length) {
                      pSVar2->m_Items[8] = "XX";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 8,pSVar1);
                      pSVar1 = "Z";
                      if (9 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[9] = "Z";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 9,pSVar1);
                        (__this->fields).Letters = pSVar2;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).Letters,pSVar2);
                        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,10);
                        pSVar1 = "FFFFFF";
                        if (pSVar2 == (System_String_array *)0x0) goto label_182280faa;
                        if ((int)pSVar2->max_length != 0) {
                          pSVar2->m_Items[0] = "FFFFFF";
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                          pSVar1 = "ACFA58";
                          if (1 < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[1] = "ACFA58";
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                            pSVar1 = "F4FA58";
                            if (2 < (uint)pSVar2->max_length) {
                              pSVar2->m_Items[2] = "F4FA58";
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
                              pSVar1 = "FAAC58";
                              if (3 < (uint)pSVar2->max_length) {
                                pSVar2->m_Items[3] = "FAAC58";
                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
                                pSVar1 = "FA8258";
                                if (4 < (uint)pSVar2->max_length) {
                                  pSVar2->m_Items[4] = "FA8258";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
                                  pSVar1 = "BE81F7";
                                  if (5 < (uint)pSVar2->max_length) {
                                    pSVar2->m_Items[5] = "BE81F7";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar1);
                                    pSVar1 = "FF0000";
                                    if (6 < (uint)pSVar2->max_length) {
                                      pSVar2->m_Items[6] = "FF0000";
                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 6,pSVar1);
                                      pSVar1 = "000000";
                                      if (7 < (uint)pSVar2->max_length) {
                                        pSVar2->m_Items[7] = "000000";
                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 7,pSVar1);
                                        pSVar1 = "000000";
                                        if (8 < (uint)pSVar2->max_length) {
                                          pSVar2->m_Items[8] = "000000";
                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 8,pSVar1);
                                          pSVar1 = "000000";
                                          if (9 < (uint)pSVar2->max_length) {
                                            pSVar2->m_Items[9] = "000000";
                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 9,pSVar1);
                                            (__this->fields).ColorTags = pSVar2;
                                            Il2CppCodeGenWriteBarrier(&(__this->fields).ColorTags,pSVar2);
                                            pSVar2 = (System_String_array *)
                                                     SZArrayNew(TypeInfo_string_array,10);
                                            pSVar1 = "eja Vu";
                                            if (pSVar2 == (System_String_array *)0x0) goto label_182280faa;
                                            if ((int)pSVar2->max_length != 0) {
                                              pSVar2->m_Items[0] = "eja Vu";
                                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                              pSVar1 = "asual";
                                              if (1 < (uint)pSVar2->max_length) {
                                                pSVar2->m_Items[1] = "asual";
                                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                                pSVar1 = "oppin!";
                                                if (2 < (uint)pSVar2->max_length) {
                                                  pSVar2->m_Items[2] = "oppin!";
                                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2,pSVar1);
                                                  pSVar1 = "mazing!";
                                                  if (3 < (uint)pSVar2->max_length) {
                                                    pSVar2->m_Items[3] = "mazing!";
                                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 3,pSVar1);
                                                    pSVar1 = "ensational!";
                                                    if (4 < (uint)pSVar2->max_length) {
                                                      pSVar2->m_Items[4] = "ensational!";
                                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 4,pSVar1);
                                                      pSVar1 = "pectacular!!";
                                                      if (5 < (uint)pSVar2->max_length) {
                                                        pSVar2->m_Items[5] = "pectacular!!";
                                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 5,pSVar1);
                                                        pSVar1 = "tylish!!!";
                                                        if (6 < (uint)pSVar2->max_length) {
                                                          pSVar2->m_Items[6] = "tylish!!!";
                                                          Il2CppCodeGenWriteBarrier
                                                                    (pSVar2->m_Items + 6,pSVar1);
                                                          pSVar1 = "TREME!!!";
                                                          if (7 < (uint)pSVar2->max_length) {
                                                            pSVar2->m_Items[7] = "TREME!!!";
                                                            Il2CppCodeGenWriteBarrier
                                                                      (pSVar2->m_Items + 7,pSVar1);
                                                            pSVar1 = "TREEME!!!";
                                                            if (8 < (uint)pSVar2->max_length) {
                                                              pSVar2->m_Items[8] = "TREEME!!!";
                                                              Il2CppCodeGenWriteBarrier
                                                                        (pSVar2->m_Items + 8,pSVar1);
                                                              pSVar1 = "ENITH";
                                                              if (9 < (uint)pSVar2->max_length) {
                                                                pSVar2->m_Items[9] = "ENITH";
                                                                Il2CppCodeGenWriteBarrier
                                                                          (pSVar2->m_Items + 9,pSVar1);
                                                                (__this->fields).Sentences = pSVar2;
                                                                Il2CppCodeGenWriteBarrier
                                                                          (&(__this->fields).Sentences,pSVar2)
                                                                ;
                                                                array = (System_Single_array *)
                                                                        SZArrayNew(TypeInfo_float_array,9);
                                                                                                                                
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                                                                 ((System_Array_o *)array,
                                                                                                                                    
                                                       FieldRva_PrivateImplementationDetails_40E4E1C452BC96E6A3B53B8F78B903C005AC62F59F92A59FB9BB9D5884225DBC
                                                       ,(MethodInfo *)0x0);
                                                       (__this->fields).Multipliers = array;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).Multipliers,array);
                                                       pSVar3 = (System_Int32_array *)
                                                                SZArrayNew(TypeInfo_int_array,9);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                                                                 ((System_Array_o *)pSVar3,
                                                                                                                                    
                                                       FieldRva_PrivateImplementationDetails_077AA0ABB5BC1CF871733F227ABBAFF35FD561C825590EAFC51E52F40B189691
                                                       ,(MethodInfo *)0x0);
                                                       (__this->fields).PointThresholds = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).PointThresholds,pSVar3);
                                                       pSVar3 = (System_Int32_array *)
                                                                SZArrayNew(TypeInfo_int_array,10);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                                                                 ((System_Array_o *)pSVar3,
                                                                                                                                    
                                                       FieldRva_PrivateImplementationDetails_62077555493F340E3B26815B1CEF687D5209109964DB5C7497B1CD614C26EE8E
                                                       ,(MethodInfo *)0x0);
                                                       (__this->fields).PointDecays = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).PointDecays,pSVar3);
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
label_182280faa:
  ThrowNullReferenceException();
}



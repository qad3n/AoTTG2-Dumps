// Type: UI.ScoreboardCategoryPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/ScoreboardCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardCategoryPanel.cs
// --------------------------------

// UI.ScoreboardCategoryPanel$$get_ScrollBar
// il2cpp: bool UI_ScoreboardCategoryPanel__get_ScrollBar (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_ScoreboardCategoryPanel__get_ScrollBar(UI_ScoreboardCategoryPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.ScoreboardCategoryPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_ScoreboardCategoryPanel__get_ThemePanel (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x1822615b0

System_String_o *
UI_ScoreboardCategoryPanel__get_ThemePanel(UI_ScoreboardCategoryPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347303 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_184347303 = '\x01';
  }
  return "ScoreboardPopup";
}


// UI.ScoreboardCategoryPanel$$SetupGisketch
// il2cpp: void UI_ScoreboardCategoryPanel__SetupGisketch (UI_ScoreboardCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182261010

void UI_ScoreboardCategoryPanel__SetupGisketch
               (UI_ScoreboardCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Vector2_Fields position;
  UnityEngine_Vector2_o value;
  System_String_o *alignItems;
  bool bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_ScrollRect_o *__this_03;
  UnityEngine_Transform_o **targetAddress;
  System_String_o *direction;
  float fVar7;
  float fVar8;
  float value_00;
  
  if (Il2CppMethodInitialized_184347304 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    Il2CppMethodInitialized_184347304 = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent,parent);
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar7 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                    (__this,(__this->klass->vtable)._33_GetWidth.method);
  fVar8 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                    (__this,(__this->klass->vtable)._34_GetHeight.method);
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar4 = pUVar3;
    }
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if (pUVar3->klass == TypeInfo_UnityEngine_RectTransform) {
      pUVar4 = pUVar3;
    }
    value.fields.y = fVar8;
    value.fields.x = fVar7;
    UnityEngine_RectTransform__set_sizeDelta(pUVar4,value,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    Gisketch_Aottg2UI_Game_AottgInGameView___ctor(__this_00,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).type = "ScrollView";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).type,"ScrollView");
      (__this_01->fields).style = "clear";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).style,"clear");
      fVar7 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                        (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar7,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(value_00,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (__this_01->fields).layout = pGVar6;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout,pGVar6);
      bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                        (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
      direction = "Column";
      if (bVar1) {
        direction = "Row";
      }
      bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                        (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
      alignItems = "FlexStart";
      if (bVar1) {
        fVar7 = 0.0;
      }
      else {
        iVar2 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)(__this);
        fVar7 = (float)iVar2;
      }
      iVar2 = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                        (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
      bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                        (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
      if (bVar1) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                          (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
      }
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         (direction,(System_String_o *)0x0,alignItems,(System_String_o *)0x0,
                          (System_String_o *)0x0,fVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,fVar7,(float)iVar2,0.0,0.0,0.0,
                          0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      (__this_01->fields).contentLayout = pGVar6;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).contentLayout,pGVar6);
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
        __this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__Build
                              (__this_00,pUVar5,__this_01,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
          __this_03 = UnityEngine_GameObject__GetComponent_object_
                                (__this_02,
                                 (MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect);
          if (__this_03 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            pUVar5 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_18433e3c9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_18433e3c9 = '\x01';
            }
            position = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
            }
            Gisketch_Aottg2UI_Game_AottgInGameView__Position
                      (pUVar5,(UnityEngine_Vector2_o)position,(MethodInfo *)0x0);
            bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                              (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
            pUVar3 = (__this_03->fields).m_Content;
            if (bVar1) {
              pUVar5 = UI_ScoreboardCategoryPanel__CreateColumn
                                 (__this,__this_00,(UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
              (__this->fields).DoublePanelLeft = pUVar5;
              Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelLeft,pUVar5);
              pUVar3 = (UnityEngine_RectTransform_o *)
                       UI_ScoreboardCategoryPanel__CreateColumn
                                 (__this,__this_00,(UnityEngine_Transform_o *)(__this_03->fields).m_Content,
                                  (MethodInfo *)0x0);
              (__this->fields).DoublePanelRight = (UnityEngine_Transform_o *)pUVar3;
              targetAddress = &(__this->fields).DoublePanelRight;
            }
            else {
              (__this->fields).SinglePanel = (UnityEngine_Transform_o *)pUVar3;
              targetAddress = &(__this->fields).SinglePanel;
            }
            Il2CppCodeGenWriteBarrier(targetAddress,pUVar3);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardCategoryPanel$$CreateColumn
// il2cpp: UnityEngine_Transform_o* UI_ScoreboardCategoryPanel__CreateColumn (UI_ScoreboardCategoryPanel_o* __this, Gisketch_Aottg2UI_Game_AottgInGameView_o* view, UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x182260e00

UnityEngine_Transform_o *
UI_ScoreboardCategoryPanel__CreateColumn
          (UI_ScoreboardCategoryPanel_o *__this,Gisketch_Aottg2UI_Game_AottgInGameView_o *view,
          UnityEngine_Transform_o *parent,MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184347305 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_184347305 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"Panel");
    (__this_00->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"clear");
    fVar3 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                      (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar3 * 0.5,(MethodInfo *)0x0);
    iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)(__this);
    fVar3 = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,fVar3,width,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,(float)iVar1,0.0,0.0,0.0,0.0,0.0,0.0
                       ,0.0,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value);
    if (view != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(view,parent,__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        return pUVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardCategoryPanel$$.ctor
// il2cpp: void UI_ScoreboardCategoryPanel___ctor (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_ScoreboardCategoryPanel___ctor(UI_ScoreboardCategoryPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}



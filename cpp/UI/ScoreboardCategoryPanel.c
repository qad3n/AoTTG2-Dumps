// Type: UI.ScoreboardCategoryPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/ScoreboardCategoryPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardCategoryPanel.cs
// --------------------------------

// UI.ScoreboardCategoryPanel$$get_ScrollBar
// il2cpp: bool UI_ScoreboardCategoryPanel__get_ScrollBar (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x5d3c130

bool UI_ScoreboardCategoryPanel__get_ScrollBar(UI_ScoreboardCategoryPanel_o *__this,MethodInfo *method)

{
  return true;
}


// UI.ScoreboardCategoryPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_ScoreboardCategoryPanel__get_ThemePanel (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x5d3c140

System_String_o *
UI_ScoreboardCategoryPanel__get_ThemePanel(UI_ScoreboardCategoryPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547e74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScoreboardPopup");
    Il2CppMethodInitialized_07547e74 = '\x01';
  }
  return "ScoreboardPopup";
}


// UI.ScoreboardCategoryPanel$$SetupGisketch
// il2cpp: void UI_ScoreboardCategoryPanel__SetupGisketch (UI_ScoreboardCategoryPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d3c170

void UI_ScoreboardCategoryPanel__SetupGisketch
               (UI_ScoreboardCategoryPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Vector2_Fields position;
  System_String_o *direction;
  UnityEngine_Vector2_o value;
  System_String_o *alignItems;
  bool bVar1;
  int32_t iVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_UI_ScrollRect_o *__this_03;
  MethodInfo **method_00;
  System_String_o **ppSVar6;
  UnityEngine_Transform_o **targetAddress;
  float fVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_07547e75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    Il2CppMethodInitialized_07547e75 = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent);
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar7 = (*(__this->klass->vtable)._33_GetWidth.methodPtr)
                    (__this,(__this->klass->vtable)._33_GetWidth.method);
  fVar8 = (*(__this->klass->vtable)._34_GetHeight.methodPtr)
                    (__this,(__this->klass->vtable)._34_GetHeight.method);
  if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
    if (pUVar3->klass != TypeInfo_UnityEngine_RectTransform) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
    }
    value.fields.y = fVar8;
    value.fields.x = fVar7;
    UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    Gisketch_Aottg2UI_Game_AottgInGameView___ctor(__this_00,(MethodInfo *)0x0);
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).type = "ScrollView";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).type);
      (__this_01->fields).style = "clear";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).style);
      fVar7 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                        (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar7,(MethodInfo *)0x0);
      fVar7 = (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                        (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar7,(MethodInfo *)0x0);
      ppSVar6 = &"Column";
      fVar7 = 0.0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      (__this_01->fields).layout = pGVar5;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).layout);
      bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                        (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
      if (bVar1) {
        ppSVar6 = &"Row";
      }
      direction = *ppSVar6;
      bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                        (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
      alignItems = "FlexStart";
      if (!bVar1) {
        iVar2 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                          (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
        fVar7 = (float)iVar2;
      }
      iVar2 = (*(__this->klass->vtable)._9_get_VerticalPadding.methodPtr)
                        (__this,(__this->klass->vtable)._9_get_VerticalPadding.method);
      bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                        (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
      fVar8 = 0.0;
      if (!bVar1) {
        fVar8 = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                          (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
      }
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         (direction,(System_String_o *)0x0,alignItems,(System_String_o *)0x0,
                          (System_String_o *)0x0,fVar8,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,fVar7,(float)iVar2,0.0,0.0,0.0,
                          0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      (__this_01->fields).contentLayout = pGVar5;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).contentLayout);
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
        __this_02 = Gisketch_Aottg2UI_Game_AottgInGameView__Build
                              (__this_00,pUVar4,__this_01,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
          method_00 = &MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect;
          __this_03 = UnityEngine_GameObject__GetComponent_object_
                                (__this_02,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_ScrollRect);
          if (__this_03 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            position = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
            }
            Gisketch_Aottg2UI_Game_AottgInGameView__Position
                      (pUVar4,(UnityEngine_Vector2_o)position,(MethodInfo *)0x0);
            bVar1 = (*(__this->klass->vtable)._13_get_DoublePanel.methodPtr)
                              (__this,(__this->klass->vtable)._13_get_DoublePanel.method);
            pUVar3 = (__this_03->fields).m_Content;
            if (bVar1) {
              pUVar4 = UI_ScoreboardCategoryPanel__CreateColumn
                                 (__this,__this_00,(UnityEngine_Transform_o *)pUVar3,(MethodInfo *)method_00);
              (__this->fields).DoublePanelLeft = pUVar4;
              Il2CppCodeGenWriteBarrier(&(__this->fields).DoublePanelLeft);
              pUVar4 = UI_ScoreboardCategoryPanel__CreateColumn
                                 (__this,__this_00,(UnityEngine_Transform_o *)(__this_03->fields).m_Content,
                                  (MethodInfo *)method_00);
              (__this->fields).DoublePanelRight = pUVar4;
              targetAddress = &(__this->fields).DoublePanelRight;
            }
            else {
              (__this->fields).SinglePanel = (UnityEngine_Transform_o *)pUVar3;
              targetAddress = &(__this->fields).SinglePanel;
            }
            Il2CppCodeGenWriteBarrier(targetAddress);
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
// 0x5d3c630

UnityEngine_Transform_o *
UI_ScoreboardCategoryPanel__CreateColumn
          (UI_ScoreboardCategoryPanel_o *__this,Gisketch_Aottg2UI_Game_AottgInGameView_o *view,
          UnityEngine_Transform_o *parent,MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547e76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_07547e76 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    (__this_00->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    fVar4 = (*(__this->klass->vtable)._30_GetPanelWidth.methodPtr)
                      (__this,(__this->klass->vtable)._30_GetPanelWidth.method);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar4 * 0.5,(MethodInfo *)0x0);
    iVar1 = (*(__this->klass->vtable)._10_get_HorizontalPadding.methodPtr)
                      (__this,(__this->klass->vtable)._10_get_HorizontalPadding.method);
    fVar4 = (*(__this->klass->vtable)._11_get_VerticalSpacing.methodPtr)
                      (__this,(__this->klass->vtable)._11_get_VerticalSpacing.method);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,fVar4,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,(float)iVar1,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
    if (view != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
      __this_01 = Gisketch_Aottg2UI_Game_AottgInGameView__Build(view,parent,__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
        return pUVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ScoreboardCategoryPanel$$.ctor
// il2cpp: void UI_ScoreboardCategoryPanel___ctor (UI_ScoreboardCategoryPanel_o* __this, const MethodInfo* method);
// 0x5d3c800

void UI_ScoreboardCategoryPanel___ctor(UI_ScoreboardCategoryPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}



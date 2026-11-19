// Type: UI.LoadingProgressPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/LoadingProgressPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingProgressPanel.cs
// --------------------------------

// UI.LoadingProgressPanel$$get_Title
// il2cpp: System_String_o* UI_LoadingProgressPanel__get_Title (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x5d56570

System_String_o * UI_LoadingProgressPanel__get_Title(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547f2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Loading");
    Il2CppMethodInitialized_07547f2c = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Loading",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.LoadingProgressPanel$$get_Width
// il2cpp: float UI_LoadingProgressPanel__get_Width (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x5d565d0

float UI_LoadingProgressPanel__get_Width(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 340.0;
}


// UI.LoadingProgressPanel$$get_Height
// il2cpp: float UI_LoadingProgressPanel__get_Height (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x5d565e0

float UI_LoadingProgressPanel__get_Height(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 180.0;
}


// UI.LoadingProgressPanel$$get_TopBarHeight
// il2cpp: float UI_LoadingProgressPanel__get_TopBarHeight (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x5d565f0

float UI_LoadingProgressPanel__get_TopBarHeight(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 50.0;
}


// UI.LoadingProgressPanel$$get_BottomBarHeight
// il2cpp: float UI_LoadingProgressPanel__get_BottomBarHeight (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x5d56600

float UI_LoadingProgressPanel__get_BottomBarHeight(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 50.0;
}


// UI.LoadingProgressPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_LoadingProgressPanel__get_PopupAnimationType (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x5d56610

int32_t UI_LoadingProgressPanel__get_PopupAnimationType(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.LoadingProgressPanel$$get_AnimationTime
// il2cpp: float UI_LoadingProgressPanel__get_AnimationTime (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x5d56620

float UI_LoadingProgressPanel__get_AnimationTime(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.LoadingProgressPanel$$Setup
// il2cpp: void UI_LoadingProgressPanel__Setup (UI_LoadingProgressPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d56630

void UI_LoadingProgressPanel__Setup
               (UI_LoadingProgressPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  System_String_o *pSVar2;
  TMPro_TMP_Text_o *pTVar3;
  UnityEngine_RectTransform_o *pUVar4;
  float fVar5;
  float fVar6;
  float headerHeight;
  float footerHeight;
  System_Nullable_float__Fields local_28;
  
  if (Il2CppMethodInitialized_07547f2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"0%");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameText");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"ingame.loading.quit");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"inGameTitle");
    Il2CppMethodInitialized_07547f2d = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar5 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_Width.method);
  fVar6 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                    (__this,(__this->klass->vtable)._6_get_Height.method);
  headerHeight = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                           (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
  footerHeight = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                           (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgInGameView__ScaledPopupShell
                        (pUVar1,fVar5,fVar6,headerHeight,footerHeight,&(__this->fields).TopBar,
                         &(__this->fields).BottomBar,"inGameHeader",(MethodInfo *)0x0);
  pUVar1 = (__this->fields).TopBar;
  pSVar2 = (*(__this->klass->vtable)._35_get_Title.methodPtr)
                     (__this,(__this->klass->vtable)._35_get_Title.method);
  fVar5 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_Width.method);
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__Text
            (__this_00,pUVar1,pSVar2,fVar5 + -48.0,40.0,"inGameTitle",(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar5 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_Width.method);
  fVar6 = (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                    (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
  local_28.hasValue = false;
  local_28._1_3_ = 0;
  local_28.value = 0.0;
  System_Nullable_float____ctor
            ((System_Nullable_float__o *)&local_28,8.0,
             (MethodInfo_3CDA2B0 *)MethodInfo_System_Nullable_float_ctor);
  pUVar1 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                     (__this_00,pUVar1,"clear",fVar5 + -64.0,fVar6,false,
                      (System_Nullable_float__o)local_28,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__Position
            (pUVar1,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  fVar5 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_Width.method);
  pTVar3 = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                     (__this_00,pUVar1,"0%",fVar5 + -64.0,28.0,"inGameText",
                      (MethodInfo *)0x0);
  (__this->fields)._label = pTVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  fVar5 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_Width.method);
  pUVar4 = Gisketch_Aottg2UI_Game_AottgInGameView__ProgressBar
                     (__this_00,pUVar1,fVar5 + -64.0,10.0,(MethodInfo *)0x0);
  (__this->fields)._fill = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fill);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgInGameView__Button
            (__this_00,pUVar1,pSVar2,"ingame.loading.quit",(System_String_o *)0x0,200.0,36.0,3,
             (MethodInfo *)0x0);
  return;
}


// UI.LoadingProgressPanel$$ShowImmediate
// il2cpp: void UI_LoadingProgressPanel__ShowImmediate (UI_LoadingProgressPanel_o* __this, float progress, const MethodInfo* method);
// 0x5d56300

void UI_LoadingProgressPanel__ShowImmediate
               (UI_LoadingProgressPanel_o *__this,float progress,MethodInfo *method)

{
  UI_LoadingProgressPanel__SetProgress(__this,progress,method);
  UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LoadingProgressPanel$$Show
// il2cpp: void UI_LoadingProgressPanel__Show (UI_LoadingProgressPanel_o* __this, float progress, const MethodInfo* method);
// 0x5d56320

void UI_LoadingProgressPanel__Show(UI_LoadingProgressPanel_o *__this,float progress,MethodInfo *method)

{
  UI_LoadingProgressPanel__SetProgress(__this,progress,method);
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LoadingProgressPanel$$SetProgress
// il2cpp: void UI_LoadingProgressPanel__SetProgress (UI_LoadingProgressPanel_o* __this, float progress, const MethodInfo* method);
// 0x5d56a00

void UI_LoadingProgressPanel__SetProgress(UI_LoadingProgressPanel_o *__this,float progress,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  UnityEngine_RectTransform_o *fill;
  double dVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  float fVar4;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  int local_3c;
  double local_38;
  Il2CppMethodPointer local_30;
  undefined1 local_28 [16];
  
  if (g_data_07547f2e == '\0') {
    local_28._4_4_ = in_XMM0_Db;
    local_28._0_4_ = progress;
    local_28._8_4_ = in_XMM0_Dc;
    local_28._12_4_ = in_XMM0_Dd;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&"%");
    g_data_07547f2e = '\x01';
    progress = (float)local_28._0_4_;
  }
  fVar4 = 1.0;
  if (progress <= 1.0) {
    fVar4 = progress;
  }
  fVar4 = (float)(-(uint)(0.0 <= progress) & (uint)fVar4);
  pTVar1 = (__this->fields)._label;
  local_28 = ZEXT416((uint)fVar4);
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
    fVar4 = (float)local_28._0_4_;
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  local_38 = (double)(fVar4 * 100.0);
  method_00 = (MethodInfo *)&local_30;
  dVar2 = modf(local_38,(double *)method_00,method);
  if (0.0 <= fVar4 * 100.0) {
    if ((dVar2 != 0.5) || (NAN(dVar2))) {
      local_30 = (Il2CppMethodPointer)floor(local_38 + 0.5,method_00);
    }
    else if (((long)(double)local_30 & 1U) != 0) {
      local_30 = (Il2CppMethodPointer)((double)local_30 + 1.0);
    }
  }
  else if ((dVar2 != -0.5) || (NAN(dVar2))) {
    local_30 = (Il2CppMethodPointer)ceil(local_38 + -0.5,method_00);
  }
  else if (((long)(double)local_30 & 1U) != 0) {
    local_30 = (Il2CppMethodPointer)((double)local_30 + -1.0);
  }
  local_3c = (int)(double)local_30;
  pSVar3 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_52f0320(pSVar3,"%",(MethodInfo *)0x0);
  if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pTVar1->klass->vtable)._66_set_text.methodPtr)(pTVar1,pSVar3,(pTVar1->klass->vtable)._66_set_text.method)
  ;
  fill = (__this->fields)._fill;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__SetProgress(fill,(float)local_28._0_4_,(MethodInfo *)0x0);
  return;
}


// UI.LoadingProgressPanel$$.ctor
// il2cpp: void UI_LoadingProgressPanel___ctor (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x5d56bd0

void UI_LoadingProgressPanel___ctor(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}



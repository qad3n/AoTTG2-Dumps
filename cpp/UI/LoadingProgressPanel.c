// Type: UI.LoadingProgressPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/LoadingProgressPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/LoadingMenu/LoadingProgressPanel.cs
// --------------------------------

// UI.LoadingProgressPanel$$get_Title
// il2cpp: System_String_o* UI_LoadingProgressPanel__get_Title (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x18227b3f0

System_String_o * UI_LoadingProgressPanel__get_Title(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843473a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Loading");
    Il2CppMethodInitialized_1843473a8 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Loading",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.LoadingProgressPanel$$get_Width
// il2cpp: float UI_LoadingProgressPanel__get_Width (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x1821d9b60

float
UI_LoadingProgressPanel__get_Width(UI_LoadingProgressPanel_o* __this, MethodInfo* method)

{
  return 340.0;
}


// UI.LoadingProgressPanel$$get_Height
// il2cpp: float UI_LoadingProgressPanel__get_Height (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x18227b3e0

float UI_LoadingProgressPanel__get_Height(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 180.0;
}


// UI.LoadingProgressPanel$$get_TopBarHeight
// il2cpp: float UI_LoadingProgressPanel__get_TopBarHeight (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x1820cf520

float
UI_LoadingProgressPanel__get_TopBarHeight(UI_LoadingProgressPanel_o* __this, MethodInfo* method)

{
  return 50.0;
}


// UI.LoadingProgressPanel$$get_BottomBarHeight
// il2cpp: float UI_LoadingProgressPanel__get_BottomBarHeight (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x1820cf520

float UI_LoadingProgressPanel__get_BottomBarHeight(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 50.0;
}


// UI.LoadingProgressPanel$$get_PopupAnimationType
// il2cpp: int32_t UI_LoadingProgressPanel__get_PopupAnimationType (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_LoadingProgressPanel__get_PopupAnimationType(UI_LoadingProgressPanel_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.LoadingProgressPanel$$get_AnimationTime
// il2cpp: float UI_LoadingProgressPanel__get_AnimationTime (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x182245d40

float UI_LoadingProgressPanel__get_AnimationTime(UI_LoadingProgressPanel_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.LoadingProgressPanel$$Setup
// il2cpp: void UI_LoadingProgressPanel__Setup (UI_LoadingProgressPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18227af80

void UI_LoadingProgressPanel__Setup
               (UI_LoadingProgressPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Gisketch_Aottg2UI_Game_AottgInGameView_o *__this_00;
  System_String_o *pSVar2;
  TMPro_TMP_Text_o *value;
  UnityEngine_RectTransform_o *value_00;
  float fVar3;
  float fVar4;
  float headerHeight;
  float footerHeight;
  System_Nullable_float__Fields local_res8;
  
  if (Il2CppMethodInitialized_1843473a9 == '\0') {
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
    Il2CppMethodInitialized_1843473a9 = '\x01';
  }
  (__this->fields).Parent = parent;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parent,parent);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar3 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_Width.method);
  fVar4 = (*(__this->klass->vtable)._6_get_Height.methodPtr)
                    (__this,(__this->klass->vtable)._6_get_Height.method);
  headerHeight = (*(__this->klass->vtable)._36_get_TopBarHeight.methodPtr)
                           (__this,(__this->klass->vtable)._36_get_TopBarHeight.method);
  footerHeight = (*(__this->klass->vtable)._37_get_BottomBarHeight.methodPtr)
                           (__this,(__this->klass->vtable)._37_get_BottomBarHeight.method);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgInGameView__ScaledPopupShell
                        (pUVar1,fVar3,fVar4,headerHeight,footerHeight,&(__this->fields).TopBar,
                         &(__this->fields).BottomBar,"inGameHeader",(MethodInfo *)0x0);
  pUVar1 = (__this->fields).TopBar;
  pSVar2 = (*(__this->klass->vtable)._35_get_Title.methodPtr)
                     (__this,(__this->klass->vtable)._35_get_Title.method);
  fVar3 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_Width.method);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgInGameView_o *)0x0) {
    Gisketch_Aottg2UI_Game_AottgInGameView__Text
              (__this_00,pUVar1,pSVar2,fVar3 - 48.0,40.0,"inGameTitle",(MethodInfo *)0x0);
    pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    fVar3 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                      (__this,(__this->klass->vtable)._5_get_Width.method);
    fVar4 = (*(__this->klass->vtable)._31_GetPanelHeight.methodPtr)
                      (__this,(__this->klass->vtable)._31_GetPanelHeight.method);
    local_res8.hasValue = false;
    local_res8._1_3_ = 0;
    local_res8.value = 0.0;
    System_Nullable_float____ctor
              ((System_Nullable_float__o *)&local_res8,8.0,
               (MethodInfo_AE2920 *)MethodInfo_System_Nullable_float_ctor);
    pUVar1 = Gisketch_Aottg2UI_Game_AottgInGameView__Panel
                       (__this_00,pUVar1,"clear",fVar3 - 64.0,fVar4,false,
                        (System_Nullable_float__o)local_res8,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    Gisketch_Aottg2UI_Game_AottgInGameView__Position
              (pUVar1,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    fVar3 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                      (__this,(__this->klass->vtable)._5_get_Width.method);
    value = Gisketch_Aottg2UI_Game_AottgInGameView__Text
                      (__this_00,pUVar1,"0%",fVar3 - 64.0,28.0,"inGameText",
                       (MethodInfo *)0x0);
    (__this->fields)._label = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._label,value);
    fVar3 = (*(__this->klass->vtable)._5_get_Width.methodPtr)
                      (__this,(__this->klass->vtable)._5_get_Width.method);
    value_00 = Gisketch_Aottg2UI_Game_AottgInGameView__ProgressBar
                         (__this_00,pUVar1,fVar3 - 64.0,10.0,(MethodInfo *)0x0);
    (__this->fields)._fill = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._fill,value_00);
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
  ThrowNullReferenceException();
}


// UI.LoadingProgressPanel$$ShowImmediate
// il2cpp: void UI_LoadingProgressPanel__ShowImmediate (UI_LoadingProgressPanel_o* __this, float progress, const MethodInfo* method);
// 0x18227b3a0

void UI_LoadingProgressPanel__ShowImmediate
               (UI_LoadingProgressPanel_o *__this,float progress,MethodInfo *method)

{
  UI_LoadingProgressPanel__SetProgress(__this,progress,(MethodInfo *)0x0);
  UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LoadingProgressPanel$$Show
// il2cpp: void UI_LoadingProgressPanel__Show (UI_LoadingProgressPanel_o* __this, float progress, const MethodInfo* method);
// 0x18227b3c0

void UI_LoadingProgressPanel__Show(UI_LoadingProgressPanel_o *__this,float progress,MethodInfo *method)

{
  UI_LoadingProgressPanel__SetProgress(__this,progress,(MethodInfo *)0x0);
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LoadingProgressPanel$$SetProgress
// il2cpp: void UI_LoadingProgressPanel__SetProgress (UI_LoadingProgressPanel_o* __this, float progress, const MethodInfo* method);
// 0x18227adc0

void UI_LoadingProgressPanel__SetProgress(UI_LoadingProgressPanel_o *__this,float progress,MethodInfo *method)

{
  TMPro_TMP_Text_o *pTVar1;
  UnityEngine_RectTransform_o *fill;
  double x;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  double dVar3;
  Il2CppMethodPointer local_res8;
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_1843473aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
    il2cpp_codegen_initialize_runtime_metadata(&"%");
    Il2CppMethodInitialized_1843473aa = '\x01';
  }
  local_res10[0] = 0;
  if (progress < 0.0) {
    progress = 0.0;
  }
  else if (1.0 < progress) {
    progress = 1.0;
  }
  pTVar1 = (__this->fields)._label;
  if (Il2CppMethodInitialized_184340a0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_184340a0c = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  x = (double)(progress * 100.0);
  method_00 = (MethodInfo *)&local_res8;
  if (x < 0.0) {
    dVar3 = il2cpp_runtime_helper_1804f3b80(x,(double *)method_00,method);
    if (dVar3 == -0.5) {
      if (((longlong)(double)local_res8 & 1U) != 0) {
        local_res8 = (Il2CppMethodPointer)((double)local_res8 - 1.0);
      }
    }
    else {
      local_res8 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f45c0(x - 0.5,method_00);
    }
  }
  else {
    dVar3 = il2cpp_runtime_helper_1804f3b80(x,(double *)method_00,method);
    if (dVar3 == 0.5) {
      if (((longlong)(double)local_res8 & 1U) != 0) {
        local_res8 = (Il2CppMethodPointer)((double)local_res8 + 1.0);
      }
    }
    else {
      local_res8 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f4690(x + 0.5,method_00);
    }
  }
  local_res10[0] = (int32_t)(double)local_res8;
  pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_1969e50(pSVar2,"%",(MethodInfo *)0x0);
  if (pTVar1 == (TMPro_TMP_Text_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pTVar1->klass->vtable)._66_set_text.methodPtr)(pTVar1,pSVar2,(pTVar1->klass->vtable)._66_set_text.method)
  ;
  fill = (__this->fields)._fill;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgInGameView);
  }
  Gisketch_Aottg2UI_Game_AottgInGameView__SetProgress(fill,progress,(MethodInfo *)0x0);
  return;
}


// UI.LoadingProgressPanel$$.ctor
// il2cpp: void UI_LoadingProgressPanel___ctor (UI_LoadingProgressPanel_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_LoadingProgressPanel___ctor(UI_LoadingProgressPanel_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}



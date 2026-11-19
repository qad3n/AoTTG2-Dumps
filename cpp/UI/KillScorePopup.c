// Type: UI.KillScorePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/KillScorePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillScorePopup.cs
// --------------------------------

// UI.KillScorePopup$$get_EscapeBehavior
// il2cpp: int32_t UI_KillScorePopup__get_EscapeBehavior (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x5d34bb0

int32_t UI_KillScorePopup__get_EscapeBehavior(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.KillScorePopup$$get_Title
// il2cpp: System_String_o* UI_KillScorePopup__get_Title (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x5d34bc0

System_String_o * UI_KillScorePopup__get_Title(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.KillScorePopup$$get_Width
// il2cpp: float UI_KillScorePopup__get_Width (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x5d34be0

float UI_KillScorePopup__get_Width(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_Height
// il2cpp: float UI_KillScorePopup__get_Height (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x5d34bf0

float UI_KillScorePopup__get_Height(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_TopBarHeight
// il2cpp: float UI_KillScorePopup__get_TopBarHeight (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x5d34c00

float UI_KillScorePopup__get_TopBarHeight(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_BottomBarHeight
// il2cpp: float UI_KillScorePopup__get_BottomBarHeight (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x5d34c10

float UI_KillScorePopup__get_BottomBarHeight(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_PopupAnimationType
// il2cpp: int32_t UI_KillScorePopup__get_PopupAnimationType (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x5d34c20

int32_t UI_KillScorePopup__get_PopupAnimationType(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 3;
}


// UI.KillScorePopup$$get_AnimationTime
// il2cpp: float UI_KillScorePopup__get_AnimationTime (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x5d34c30

float UI_KillScorePopup__get_AnimationTime(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.KillScorePopup$$Setup
// il2cpp: void UI_KillScorePopup__Setup (UI_KillScorePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d34c40

void UI_KillScorePopup__Setup(UI_KillScorePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_Text_o **targetAddress;
  UnityEngine_UI_Text_o **targetAddress_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547e43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_LanguageFonts);
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/KillScoreLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Border");
    Il2CppMethodInitialized_07547e43 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/InGame/KillScoreLabel",(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    targetAddress = &(__this->fields)._scoreLabel;
    (__this->fields)._scoreLabel = pUVar3;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar3 = (__this->fields)._scoreLabel;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"BackgroundLabel",(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar1,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          targetAddress_00 = &(__this->fields)._backgroundLabel;
          (__this->fields)._backgroundLabel = pUVar3;
          Il2CppCodeGenWriteBarrier(targetAddress_00);
          pUVar3 = (__this->fields)._scoreLabel;
          if ((TypeInfo_UI_LanguageFonts->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_LanguageFonts);
          }
          UI_LanguageFonts__KeepDesignedFont(pUVar3,(MethodInfo *)0x0);
          UI_LanguageFonts__KeepDesignedFont(*targetAddress_00,(MethodInfo *)0x0);
          pUVar3 = *targetAddress;
          if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0)
            ;
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pUVar1 = UnityEngine_Transform__get_parent(pUVar1,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                pUVar1 = UnityEngine_Transform__Find(pUVar1,"Border",(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar2 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// UI.KillScorePopup$$Show
// il2cpp: void UI_KillScorePopup__Show (UI_KillScorePopup_o* __this, int32_t score, const MethodInfo* method);
// 0x5d34e00

void UI_KillScorePopup__Show(UI_KillScorePopup_o *__this,int32_t score,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Settings_UISettings_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  UnityEngine_GameObject_o *obj;
  bool *pbVar6;
  System_String_o *pSVar7;
  int value;
  float fVar8;
  UnityEngine_Vector2_o offset;
  int32_t local_20;
  float local_1c;
  
  local_20 = score;
  if (Il2CppMethodInitialized_07547e44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_07547e44 = '\x01';
  }
  (__this->fields)._shakeTimeLeft = 0.0;
  local_1c = UnityEngine_Time__get_time((MethodInfo *)0x0);
  obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  uVar1 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
  uVar2 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.y;
  offset.fields.x = (float)uVar1 * 100.0;
  offset.fields.y = (float)uVar2 * 100.0;
  UI_ElementFactory__SetAnchor(obj,4,4,offset,(MethodInfo *)0x0);
  if (1.0 <= local_1c - (__this->fields)._lastShowTime) {
    pbVar6 = &(__this->fields).IsActive;
  }
  else {
    (__this->fields)._shakeTimeLeft = 1.0;
    (__this->fields)._currentShakeDistance = 50.0;
    pbVar6 = &(__this->fields)._shakeFlip;
  }
  *pbVar6 = false;
  (__this->fields)._lastShowTime = local_1c;
  pUVar3 = (__this->fields)._scoreLabel;
  pSVar7 = System_Int32__ToString(&local_20,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
              (pUVar3,pSVar7,(pUVar3->klass->vtable)._75_set_text.method);
    pUVar3 = (__this->fields)._backgroundLabel;
    pSVar7 = System_Int32__ToString(&local_20,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pSVar7,(pUVar3->klass->vtable)._75_set_text.method);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if (((pSVar4 != (Settings_UISettings_o *)0x0) &&
          (pSVar5 = (pSVar4->fields).KillScoreScale, pSVar5 != (Settings_FloatSetting_o *)0x0)) &&
         (pUVar3 = (__this->fields)._scoreLabel, pUVar3 != (UnityEngine_UI_Text_o *)0x0)) {
        fVar8 = (float)local_20 / 3000.0;
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        value = (int)((float)((int)(fVar8 * 60.0) + 0x28) * (pSVar5->fields)._value);
        UnityEngine_UI_Text__set_fontSize(pUVar3,value,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._backgroundLabel;
        if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_UI_Text__set_fontSize(pUVar3,value,(MethodInfo *)0x0);
          UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.KillScorePopup$$ShowSnapshotViewer
// il2cpp: void UI_KillScorePopup__ShowSnapshotViewer (UI_KillScorePopup_o* __this, int32_t score, const MethodInfo* method);
// 0x5d35010

void UI_KillScorePopup__ShowSnapshotViewer(UI_KillScorePopup_o *__this,int32_t score,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *pSVar2;
  int32_t local_14;
  
  pUVar1 = (__this->fields)._scoreLabel;
  pSVar2 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._backgroundLabel;
    pSVar2 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                (pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method);
      pUVar1 = (__this->fields)._scoreLabel;
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        UnityEngine_UI_Text__set_fontSize(pUVar1,0x28,(MethodInfo *)0x0);
        pUVar1 = (__this->fields)._backgroundLabel;
        if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_UI_Text__set_fontSize(pUVar1,0x28,(MethodInfo *)0x0);
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.KillScorePopup$$Update
// il2cpp: void UI_KillScorePopup__Update (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x5d350d0

void UI_KillScorePopup__Update(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  bool *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  UnityEngine_Vector2_o offset;
  UnityEngine_GameObject_o *obj;
  float fVar5;
  float fVar6;
  
  if (((__this->fields).IsActive != false) && (fVar6 = (__this->fields)._shakeTimeLeft, 0.0 < fVar6)) {
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._shakeTimeLeft = fVar6 - fVar5;
    bVar4 = (__this->fields)._shakeFlip;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (bVar4 == false) {
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      fVar6 = 100.0 - (__this->fields)._currentShakeDistance;
    }
    else {
      if (Il2CppMethodInitialized_0753e72c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e72c = '\x01';
      }
      fVar6 = (__this->fields)._currentShakeDistance + 100.0;
    }
    uVar2 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
    uVar3 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.y;
    offset.fields.y = fVar6 * (float)uVar3;
    offset.fields.x = fVar6 * (float)uVar2;
    UI_ElementFactory__SetAnchor(obj,4,4,offset,(MethodInfo *)0x0);
    pbVar1 = &(__this->fields)._shakeFlip;
    *pbVar1 = (bool)(*pbVar1 ^ 1);
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._currentShakeDistance =
         (fVar6 * -0.2 * 60.0 + 1.0) * (__this->fields)._currentShakeDistance;
  }
  return;
}


// UI.KillScorePopup$$.ctor
// il2cpp: void UI_KillScorePopup___ctor (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x5d35200

void UI_KillScorePopup___ctor(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}



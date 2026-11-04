// Type: UI.KillScorePopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/KillScorePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillScorePopup.cs
// --------------------------------

// UI.KillScorePopup$$get_EscapeBehavior
// il2cpp: int32_t UI_KillScorePopup__get_EscapeBehavior (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
UI_KillScorePopup__get_EscapeBehavior(UI_KillScorePopup_o* __this, MethodInfo* method)

{
  return 2;
}


// UI.KillScorePopup$$get_Title
// il2cpp: System_String_o* UI_KillScorePopup__get_Title (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_KillScorePopup__get_Title(UI_KillScorePopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.KillScorePopup$$get_Width
// il2cpp: float UI_KillScorePopup__get_Width (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_KillScorePopup__get_Width(UI_KillScorePopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_Height
// il2cpp: float UI_KillScorePopup__get_Height (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_KillScorePopup__get_Height(UI_KillScorePopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_TopBarHeight
// il2cpp: float UI_KillScorePopup__get_TopBarHeight (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_KillScorePopup__get_TopBarHeight(UI_KillScorePopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_BottomBarHeight
// il2cpp: float UI_KillScorePopup__get_BottomBarHeight (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_KillScorePopup__get_BottomBarHeight(UI_KillScorePopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_PopupAnimationType
// il2cpp: int32_t UI_KillScorePopup__get_PopupAnimationType (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x180565fb0

int32_t
UI_KillScorePopup__get_PopupAnimationType(UI_KillScorePopup_o* __this, MethodInfo* method)

{
  return 3;
}


// UI.KillScorePopup$$get_AnimationTime
// il2cpp: float UI_KillScorePopup__get_AnimationTime (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x182245d40

float
UI_KillScorePopup__get_AnimationTime(UI_KillScorePopup_o* __this, MethodInfo* method)

{
  return 0.2;
}


// UI.KillScorePopup$$Setup
// il2cpp: void UI_KillScorePopup__Setup (UI_KillScorePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182258790

void UI_KillScorePopup__Setup(UI_KillScorePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  
  if (Il2CppMethodInitialized_1843472c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"BackgroundLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/KillScoreLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"Border");
    Il2CppMethodInitialized_1843472c6 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar2 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/InGame/KillScoreLabel",(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    (__this->fields)._scoreLabel = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._scoreLabel,pUVar3);
    pUVar3 = (__this->fields)._scoreLabel;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"BackgroundLabel",(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar1,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          (__this->fields)._backgroundLabel = pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._backgroundLabel,pUVar3);
          pUVar3 = (__this->fields)._scoreLabel;
          if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0)
            ;
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pUVar1 = UnityEngine_Transform__GetParent(pUVar1,(MethodInfo *)0x0);
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
// 0x1822589d0

void UI_KillScorePopup__Show(UI_KillScorePopup_o *__this,int32_t score,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_UI_Text_o *pUVar3;
  Settings_UISettings_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  UnityEngine_GameObject_o *obj;
  System_String_o *pSVar6;
  int value;
  float fVar7;
  UnityEngine_Vector2_o offset;
  int32_t local_res10 [6];
  
  local_res10[0] = score;
  if (Il2CppMethodInitialized_1843472c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843472c7 = '\x01';
  }
  (__this->fields)._shakeTimeLeft = 0.0;
  fVar7 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  uVar1 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
  uVar2 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.y;
  offset.fields.x = (float)uVar1 * 100.0;
  offset.fields.y = (float)uVar2 * 100.0;
  UI_ElementFactory__SetAnchor(obj,4,4,offset,(MethodInfo *)0x0);
  if (fVar7 - (__this->fields)._lastShowTime < 1.0) {
    (__this->fields)._shakeTimeLeft = 1.0;
    (__this->fields)._currentShakeDistance = 50.0;
    (__this->fields)._shakeFlip = false;
  }
  else {
    (__this->fields).IsActive = false;
  }
  pUVar3 = (__this->fields)._scoreLabel;
  (__this->fields)._lastShowTime = fVar7;
  pSVar6 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
              (pUVar3,pSVar6,(pUVar3->klass->vtable)._75_set_text.method);
    pUVar3 = (__this->fields)._backgroundLabel;
    pSVar6 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pSVar6,(pUVar3->klass->vtable)._75_set_text.method);
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if ((pSVar4 != (Settings_UISettings_o *)0x0) &&
         (pSVar5 = (pSVar4->fields).KillScoreScale, pSVar5 != (Settings_FloatSetting_o *)0x0)) {
        fVar7 = (float)local_res10[0] / 3000.0;
        if (1.0 <= fVar7) {
          fVar7 = 1.0;
        }
        pUVar3 = (__this->fields)._scoreLabel;
        if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
          value = (int)((float)(0x28 - (int)(fVar7 * -60.0)) * (pSVar5->fields)._value);
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
  }
  ThrowNullReferenceException();
}


// UI.KillScorePopup$$ShowSnapshotViewer
// il2cpp: void UI_KillScorePopup__ShowSnapshotViewer (UI_KillScorePopup_o* __this, int32_t score, const MethodInfo* method);
// 0x182258910

void UI_KillScorePopup__ShowSnapshotViewer(UI_KillScorePopup_o *__this,int32_t score,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *pSVar2;
  int32_t local_res10 [6];
  
  pUVar1 = (__this->fields)._scoreLabel;
  local_res10[0] = score;
  pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._backgroundLabel;
    pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
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
// 0x182258bf0

void UI_KillScorePopup__Update(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector2_o offset;
  UnityEngine_GameObject_o *obj;
  float fVar3;
  float fVar4;
  
  if (((__this->fields).IsActive != false) && (fVar4 = (__this->fields)._shakeTimeLeft, 0.0 < fVar4)) {
    fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._shakeTimeLeft = fVar4 - fVar3;
    if ((__this->fields)._shakeFlip == false) {
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      fVar4 = 100.0 - (__this->fields)._currentShakeDistance;
    }
    else {
      obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      fVar4 = (__this->fields)._currentShakeDistance + 100.0;
    }
    uVar1 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
    uVar2 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.y;
    offset.fields.y = (float)uVar2 * fVar4;
    offset.fields.x = (float)uVar1 * fVar4;
    UI_ElementFactory__SetAnchor(obj,4,4,offset,(MethodInfo *)0x0);
    (__this->fields)._shakeFlip = (__this->fields)._shakeFlip == false;
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._currentShakeDistance =
         (1.0 - fVar4 * 0.2 * 60.0) * (__this->fields)._currentShakeDistance;
  }
  return;
}


// UI.KillScorePopup$$.ctor
// il2cpp: void UI_KillScorePopup___ctor (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_KillScorePopup___ctor(UI_KillScorePopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}



// Type: UI.KillScorePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/KillScorePopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/KillScorePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.KillScorePopup$$get_Title
// il2cpp: System_String_o* UI_KillScorePopup__get_Title (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x40bebd0

System_String_o * UI_KillScorePopup__get_Title(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.KillScorePopup$$get_Width
// il2cpp: float UI_KillScorePopup__get_Width (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x40bebf0

float UI_KillScorePopup__get_Width(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_Height
// il2cpp: float UI_KillScorePopup__get_Height (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x40bec00

float UI_KillScorePopup__get_Height(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_TopBarHeight
// il2cpp: float UI_KillScorePopup__get_TopBarHeight (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x40bec10

float UI_KillScorePopup__get_TopBarHeight(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_BottomBarHeight
// il2cpp: float UI_KillScorePopup__get_BottomBarHeight (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x40bec20

float UI_KillScorePopup__get_BottomBarHeight(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_PopupAnimationType
// il2cpp: int32_t UI_KillScorePopup__get_PopupAnimationType (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x40bec30

int32_t UI_KillScorePopup__get_PopupAnimationType(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 3;
}


// UI.KillScorePopup$$get_AnimationTime
// il2cpp: float UI_KillScorePopup__get_AnimationTime (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x40bec40

float UI_KillScorePopup__get_AnimationTime(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.KillScorePopup$$Setup
// il2cpp: void UI_KillScorePopup__Setup (UI_KillScorePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40bec50

void UI_KillScorePopup__Setup(UI_KillScorePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_UI_Text_o *pUVar3;
  
  if (DAT_0570469d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&"BackgroundLabel");
    il2cpp_init_method_metadata(&"Prefabs/InGame/KillScoreLabel");
    il2cpp_init_method_metadata(&"Border");
    DAT_0570469d = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar2 = UI_ElementFactory__InstantiateAndBind(pUVar1,"Prefabs/InGame/KillScoreLabel",(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = (UnityEngine_UI_Text_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar2,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._scoreLabel = pUVar3;
    il2cpp_runtime_glue(&(__this->fields)._scoreLabel);
    pUVar3 = (__this->fields)._scoreLabel;
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        pUVar1 = UnityEngine_Transform__Find(pUVar1,"BackgroundLabel",(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = (UnityEngine_UI_Text_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)pUVar1,MethodInfo_Text_GetComponent_Text);
          (__this->fields)._backgroundLabel = pUVar3;
          il2cpp_runtime_glue(&(__this->fields)._backgroundLabel);
          pUVar3 = (__this->fields)._scoreLabel;
          if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
            pUVar1 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              pUVar1 = UnityEngine_Transform__get_parent(pUVar1,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                pUVar1 = UnityEngine_Transform__Find(pUVar1,"Border",(MethodInfo *)0x0);
                if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                  pUVar2 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar2,0,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KillScorePopup$$Show
// il2cpp: void UI_KillScorePopup__Show (UI_KillScorePopup_o* __this, int32_t score, const MethodInfo* method);
// 0x40bedd0

void UI_KillScorePopup__Show(UI_KillScorePopup_o *__this,int32_t score,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_UI_Text_o *pUVar2;
  long lVar3;
  UnityEngine_GameObject_o *obj;
  bool_conflict *pbVar4;
  System_String_o *pSVar5;
  int value;
  float fVar6;
  UnityEngine_Vector2_o offset;
  int32_t local_20;
  float local_1c;
  
  local_20 = score;
  if (DAT_0570469e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata();
    DAT_0570469e = '\x01';
  }
  (__this->fields)._shakeTimeLeft = 0.0;
  local_1c = UnityEngine_Time__get_time((MethodInfo *)0x0);
  obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (DAT_056fde1f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fde1f = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  offset.fields.x = (float)uVar1 * 100.0;
  offset.fields.y = (float)((ulong)uVar1 >> 0x20) * 100.0;
  UI_ElementFactory__SetAnchor(obj,4,4,offset,(MethodInfo *)0x0);
  if (1.0 <= local_1c - (__this->fields)._lastShowTime) {
    pbVar4 = &(__this->fields).IsActive;
  }
  else {
    (__this->fields)._shakeTimeLeft = 1.0;
    (__this->fields)._currentShakeDistance = 50.0;
    pbVar4 = &(__this->fields)._shakeFlip;
  }
  *(undefined1 *)pbVar4 = 0;
  (__this->fields)._lastShowTime = local_1c;
  pUVar2 = (__this->fields)._scoreLabel;
  pSVar5 = System_Int32__ToString((int32_t)&local_20,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,pSVar5,(pUVar2->klass->vtable)._75_set_text.method);
    pUVar2 = (__this->fields)._backgroundLabel;
    pSVar5 = System_Int32__ToString((int32_t)&local_20,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,pSVar5,(pUVar2->klass->vtable)._75_set_text.method);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x78), lVar3 != 0)) &&
         (pUVar2 = (__this->fields)._scoreLabel, pUVar2 != (UnityEngine_UI_Text_o *)0x0)) {
        fVar6 = (float)local_20 / 3000.0;
        if (1.0 <= fVar6) {
          fVar6 = 1.0;
        }
        value = (int)((float)((int)(fVar6 * 60.0) + 0x28) * *(float *)(lVar3 + 0x14));
        UnityEngine_UI_Text__set_fontSize(pUVar2,value,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._backgroundLabel;
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_UI_Text__set_fontSize(pUVar2,value,(MethodInfo *)0x0);
          UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KillScorePopup$$ShowSnapshotViewer
// il2cpp: void UI_KillScorePopup__ShowSnapshotViewer (UI_KillScorePopup_o* __this, int32_t score, const MethodInfo* method);
// 0x40befd0

void UI_KillScorePopup__ShowSnapshotViewer
               (UI_KillScorePopup_o *__this,int32_t score,MethodInfo *method)

{
  UnityEngine_UI_Text_o *pUVar1;
  System_String_o *pSVar2;
  undefined1 local_14 [4];
  
  pUVar1 = (__this->fields)._scoreLabel;
  pSVar2 = System_Int32__ToString((int32_t)local_14,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
              (pUVar1,pSVar2,(pUVar1->klass->vtable)._75_set_text.method);
    pUVar1 = (__this->fields)._backgroundLabel;
    pSVar2 = System_Int32__ToString((int32_t)local_14,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KillScorePopup$$Update
// il2cpp: void UI_KillScorePopup__Update (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x40bf090

void UI_KillScorePopup__Update(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *obj;
  float fVar4;
  UnityEngine_Vector2_o offset;
  float fVar5;
  
  if (((char)(__this->fields).IsActive != '\0') &&
     (fVar5 = (__this->fields)._shakeTimeLeft, 0.0 < fVar5)) {
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._shakeTimeLeft = fVar5 - fVar4;
    bVar3 = (__this->fields)._shakeFlip;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
    ;
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fVar5 = (__this->fields)._currentShakeDistance;
    if ((char)bVar3 == '\0') {
      fVar5 = 100.0 - fVar5;
    }
    else {
      fVar5 = fVar5 + 100.0;
    }
    offset.fields.x = (float)uVar2 * fVar5;
    offset.fields.y = (float)((ulong)uVar2 >> 0x20) * fVar5;
    UI_ElementFactory__SetAnchor(obj,4,4,offset,(MethodInfo *)0x0);
    pbVar1 = &(__this->fields)._shakeFlip;
    *(byte *)pbVar1 = (byte)*pbVar1 ^ 1;
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._currentShakeDistance =
         (fVar5 * -0.2 * 60.0 + 1.0) * (__this->fields)._currentShakeDistance;
  }
  return;
}


// UI.KillScorePopup$$.ctor
// il2cpp: void UI_KillScorePopup___ctor (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x40bf1b0

void UI_KillScorePopup___ctor(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}



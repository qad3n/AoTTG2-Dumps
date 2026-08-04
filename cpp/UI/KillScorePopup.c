// Type: UI.KillScorePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/KillScorePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillScorePopup.cs
// --------------------------------

// UI.KillScorePopup$$get_Title
// il2cpp: System_String_o* UI_KillScorePopup__get_Title (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x43d10c0

System_String_o * UI_KillScorePopup__get_Title(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// UI.KillScorePopup$$get_Width
// il2cpp: float UI_KillScorePopup__get_Width (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x43d10e0

float UI_KillScorePopup__get_Width(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_Height
// il2cpp: float UI_KillScorePopup__get_Height (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x43d10f0

float UI_KillScorePopup__get_Height(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_TopBarHeight
// il2cpp: float UI_KillScorePopup__get_TopBarHeight (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x43d1100

float UI_KillScorePopup__get_TopBarHeight(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_BottomBarHeight
// il2cpp: float UI_KillScorePopup__get_BottomBarHeight (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x43d1110

float UI_KillScorePopup__get_BottomBarHeight(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.KillScorePopup$$get_PopupAnimationType
// il2cpp: int32_t UI_KillScorePopup__get_PopupAnimationType (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x43d1120

int32_t UI_KillScorePopup__get_PopupAnimationType(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 3;
}


// UI.KillScorePopup$$get_AnimationTime
// il2cpp: float UI_KillScorePopup__get_AnimationTime (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x43d1130

float UI_KillScorePopup__get_AnimationTime(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.KillScorePopup$$Setup
// il2cpp: void UI_KillScorePopup__Setup (UI_KillScorePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43d1140

void UI_KillScorePopup__Setup(UI_KillScorePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  undefined8 uVar1;
  long *plVar2;
  UI_BasePopup_c *pUVar3;
  long lVar4;
  void *pvVar5;
  intptr_t iVar6;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  UnityEngine_UI_RectMask2D_o **ppUVar10;
  System_String_o *pSVar11;
  uint value;
  int iVar13;
  UI_BasePopup_o *__this_02;
  UnityEngine_Component_o *__this_03;
  float fVar14;
  float fVar15;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Component_o UStack_54;
  undefined1 auStack_38 [8];
  UI_KillScorePopup_o *pUStack_30;
  UI_BasePanel_o *pUStack_28;
  UI_BasePopup_o *pUVar12;
  
  if (g_data_057ae42e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&"BackgroundLabel");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/KillScoreLabel");
    il2cpp_runtime_helper_023445d0(&"Border");
    g_data_057ae42e = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_UI_Text_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pSVar11 = "Prefabs/InGame/KillScoreLabel";
  pUVar8 = UI_ElementFactory__InstantiateAndBind
                     ((UnityEngine_Transform_o *)pUVar7,"Prefabs/InGame/KillScoreLabel",(MethodInfo *)0x0);
  iVar13 = (int)pSVar11;
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._scoreLabel = pUVar7;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._scoreLabel);
    iVar13 = (int)pUVar7;
    pUVar7 = (__this->fields)._scoreLabel;
    if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
      iVar13 = 0;
      pUVar9 = (UnityEngine_UI_Text_o *)
               UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
        pSVar11 = "BackgroundLabel";
        __this_00 = UnityEngine_Transform__Find
                              ((UnityEngine_Transform_o *)pUVar9,"BackgroundLabel",(MethodInfo *)0x0);
        iVar13 = (int)pSVar11;
        pUVar7 = pUVar9;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = (UnityEngine_UI_Text_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)__this_00,MethodInfo_Text_GetComponent_Text);
          (__this->fields)._backgroundLabel = pUVar7;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._backgroundLabel);
          iVar13 = (int)pUVar7;
          pUVar7 = (__this->fields)._scoreLabel;
          if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
            iVar13 = 0;
            pUVar9 = (UnityEngine_UI_Text_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0)
            ;
            if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
              iVar13 = 0;
              __this_01 = (UnityEngine_UI_Text_o *)
                          UnityEngine_Transform__get_parent
                                    ((UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0);
              pUVar7 = pUVar9;
              if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
                pSVar11 = "Border";
                pUVar9 = (UnityEngine_UI_Text_o *)
                         UnityEngine_Transform__Find
                                   ((UnityEngine_Transform_o *)__this_01,"Border",(MethodInfo *)0x0);
                iVar13 = (int)pSVar11;
                pUVar7 = __this_01;
                if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
                  iVar13 = 0;
                  pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                  pUVar7 = pUVar9;
                  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  auStack_38._0_4_ = iVar13;
  pUStack_30 = __this;
  pUStack_28 = parent;
  if (g_data_057ae42f == '\0') {
    UStack_54._12_8_ = 0x43d12e5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    UStack_54._12_8_ = 0x43d12f1;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae42f = '\x01';
  }
  *(undefined4 *)((long)&(pUVar7->fields).m_ParentMask + 4) = 0;
  UStack_54._12_8_ = 0x43d130a;
  auStack_38._4_4_ = UnityEngine_Time__get_time((MethodInfo *)0x0);
  UStack_54._12_8_ = 0x43d131a;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  if (g_data_057a6844 == '\0') {
    UStack_54._12_8_ = 0x43d1332;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  offset.fields.x = (float)uVar1 * 100.0;
  offset.fields.y = (float)((ulong)uVar1 >> 0x20) * 100.0;
  UStack_54._12_8_ = 0x43d136a;
  UI_ElementFactory__SetAnchor(pUVar8,4,4,offset,(MethodInfo *)0x0);
  if (1.0 <= (float)auStack_38._4_4_ - (float)(pUVar7->fields).m_IsMaskingGraphic) {
    ppUVar10 = (UnityEngine_UI_RectMask2D_o **)&(pUVar7->fields).m_CachedMesh;
  }
  else {
    *(undefined8 *)((long)&(pUVar7->fields).m_ParentMask + 4) = 0x424800003f800000;
    ppUVar10 = &(pUVar7->fields).m_ParentMask;
  }
  *(undefined1 *)ppUVar10 = 0;
  (pUVar7->fields).m_IsMaskingGraphic = auStack_38._4_4_;
  plVar2 = *(long **)&(pUVar7->fields)._useLegacyMeshGeneration_k__BackingField;
  __this_02 = (UI_BasePopup_o *)auStack_38;
  UStack_54._12_8_ = 0x43d13cc;
  pSVar11 = System_Int32__ToString((int32_t)__this_02,(MethodInfo *)0x0);
  pUVar12 = (UI_BasePopup_o *)0x0;
  if (plVar2 != (long *)0x0) {
    UStack_54._12_8_ = 0x43d13eb;
    (**(code **)(*plVar2 + 0x5e8))(plVar2,pSVar11,*(undefined8 *)(*plVar2 + 0x5f0));
    pUVar12 = (UI_BasePopup_o *)(pUVar7->fields).m_MaskMaterial;
    __this_02 = (UI_BasePopup_o *)auStack_38;
    UStack_54._12_8_ = 0x43d13fe;
    pSVar11 = System_Int32__ToString((int32_t)__this_02,(MethodInfo *)0x0);
    if (pUVar12 != (UI_BasePopup_o *)0x0) {
      pUVar3 = pUVar12->klass;
      uVar1._0_4_ = pUVar3[1]._2.static_fields_size;
      uVar1._4_4_ = pUVar3[1]._2.thread_static_fields_size;
      UStack_54._12_8_ = 0x43d141d;
      __this_02 = pUVar12;
      (**(code **)&pUVar3[1]._2.element_size)(pUVar12,pSVar11,uVar1);
      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x78), lVar4 != 0)) &&
         (pUVar9 = *(UnityEngine_UI_Text_o **)&(pUVar7->fields)._useLegacyMeshGeneration_k__BackingField,
         __this_02 = (UI_BasePopup_o *)0x0, pUVar9 != (UnityEngine_UI_Text_o *)0x0)) {
        fVar14 = (float)(int)auStack_38._0_4_ / 3000.0;
        if (1.0 <= fVar14) {
          fVar14 = 1.0;
        }
        value = (uint)((float)((int)(fVar14 * 60.0) + 0x28) * *(float *)(lVar4 + 0x14));
        pUVar12 = (UI_BasePopup_o *)(ulong)value;
        UStack_54._12_8_ = 0x43d148d;
        UnityEngine_UI_Text__set_fontSize(pUVar9,value,(MethodInfo *)0x0);
        pUVar9 = (UnityEngine_UI_Text_o *)(pUVar7->fields).m_MaskMaterial;
        __this_02 = (UI_BasePopup_o *)0x0;
        if (pUVar9 != (UnityEngine_UI_Text_o *)0x0) {
          UStack_54._12_8_ = 0x43d14a2;
          UnityEngine_UI_Text__set_fontSize(pUVar9,value,(MethodInfo *)0x0);
          UStack_54._12_8_ = 0x43d14ac;
          UI_BasePopup__Show((UI_BasePopup_o *)pUVar7,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  UStack_54._12_8_ = 0x43d14bb;
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = __this_02[1].klass;
  __this_03 = &UStack_54;
  UStack_54._4_8_ = pUVar12;
  UStack_54._12_8_ = pUVar8;
  pSVar11 = System_Int32__ToString((int32_t)__this_03,(MethodInfo *)0x0);
  if (pUVar3 != (UI_BasePopup_c *)0x0) {
    pvVar5 = (pUVar3->_1).image;
    (**(code **)((long)pvVar5 + 0x5e8))(pUVar3,pSVar11,*(undefined8 *)((long)pvVar5 + 0x5f0));
    plVar2 = __this_02[1].monitor;
    __this_03 = &UStack_54;
    pSVar11 = System_Int32__ToString((int32_t)__this_03,(MethodInfo *)0x0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x5e8))(plVar2,pSVar11,*(undefined8 *)(*plVar2 + 0x5f0));
      __this_03 = (UnityEngine_Component_o *)0x0;
      if (__this_02[1].klass != (UI_BasePopup_c *)0x0) {
        UnityEngine_UI_Text__set_fontSize((UnityEngine_UI_Text_o *)__this_02[1].klass,0x28,(MethodInfo *)0x0);
        __this_03 = (UnityEngine_Component_o *)0x0;
        if (__this_02[1].monitor != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_UI_Text__set_fontSize(__this_02[1].monitor,0x28,(MethodInfo *)0x0);
          UI_BasePopup__ShowImmediate(__this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((*(char *)&__this_03[6].klass != '\0') &&
     (fVar14 = *(float *)((long)&__this_03[7].fields.m_CachedPtr + 4), 0.0 < fVar14)) {
    fVar15 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)((long)&__this_03[7].fields.m_CachedPtr + 4) = fVar14 - fVar15;
    iVar6 = __this_03[7].fields.m_CachedPtr;
    pUVar8 = UnityEngine_Component__get_gameObject(__this_03,(MethodInfo *)0x0);
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    if ((char)iVar6 == '\0') {
      fVar14 = 100.0 - *(float *)&__this_03[8].klass;
    }
    else {
      fVar14 = *(float *)&__this_03[8].klass + 100.0;
    }
    offset_00.fields.x = (float)uVar1 * fVar14;
    offset_00.fields.y = (float)((ulong)uVar1 >> 0x20) * fVar14;
    UI_ElementFactory__SetAnchor(pUVar8,4,4,offset_00,(MethodInfo *)0x0);
    *(byte *)&__this_03[7].fields.m_CachedPtr = (byte)__this_03[7].fields.m_CachedPtr ^ 1;
    fVar14 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)&__this_03[8].klass = (fVar14 * -0.2 * 60.0 + 1.0) * *(float *)&__this_03[8].klass;
  }
  return;
}


// UI.KillScorePopup$$Show
// il2cpp: void UI_KillScorePopup__Show (UI_KillScorePopup_o* __this, int32_t score, const MethodInfo* method);
// 0x43d12c0

void UI_KillScorePopup__Show(UI_KillScorePopup_o *__this,int32_t score,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_UI_Text_o *pUVar2;
  long lVar3;
  long *plVar4;
  UnityEngine_Material_o *pUVar5;
  intptr_t iVar6;
  UnityEngine_GameObject_o *pUVar7;
  bool_conflict *pbVar8;
  System_String_o *pSVar9;
  uint value;
  UnityEngine_UI_Text_o *__this_00;
  UnityEngine_Component_o *__this_01;
  float fVar11;
  float fVar12;
  UnityEngine_Vector2_o offset;
  UnityEngine_Vector2_o offset_00;
  UnityEngine_Component_o UStack_3c;
  undefined1 local_20 [8];
  UnityEngine_UI_Text_o *pUVar10;
  
  local_20._0_4_ = score;
  if (g_data_057ae42f == '\0') {
    UStack_3c._12_8_ = 0x43d12e5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    UStack_3c._12_8_ = 0x43d12f1;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae42f = '\x01';
  }
  (__this->fields)._shakeTimeLeft = 0.0;
  UStack_3c._12_8_ = 0x43d130a;
  local_20._4_4_ = UnityEngine_Time__get_time((MethodInfo *)0x0);
  UStack_3c._12_8_ = 0x43d131a;
  pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (g_data_057a6844 == '\0') {
    UStack_3c._12_8_ = 0x43d1332;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a6844 = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
  offset.fields.x = (float)uVar1 * 100.0;
  offset.fields.y = (float)((ulong)uVar1 >> 0x20) * 100.0;
  UStack_3c._12_8_ = 0x43d136a;
  UI_ElementFactory__SetAnchor(pUVar7,4,4,offset,(MethodInfo *)0x0);
  if (1.0 <= (float)local_20._4_4_ - (__this->fields)._lastShowTime) {
    pbVar8 = &(__this->fields).IsActive;
  }
  else {
    (__this->fields)._shakeTimeLeft = 1.0;
    (__this->fields)._currentShakeDistance = 50.0;
    pbVar8 = &(__this->fields)._shakeFlip;
  }
  *(undefined1 *)pbVar8 = 0;
  (__this->fields)._lastShowTime = (float)local_20._4_4_;
  pUVar2 = (__this->fields)._scoreLabel;
  __this_00 = (UnityEngine_UI_Text_o *)local_20;
  UStack_3c._12_8_ = 0x43d13cc;
  pSVar9 = System_Int32__ToString((int32_t)__this_00,(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_UI_Text_o *)0x0;
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    UStack_3c._12_8_ = 0x43d13eb;
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,pSVar9,(pUVar2->klass->vtable)._75_set_text.method);
    pUVar10 = (__this->fields)._backgroundLabel;
    __this_00 = (UnityEngine_UI_Text_o *)local_20;
    UStack_3c._12_8_ = 0x43d13fe;
    pSVar9 = System_Int32__ToString((int32_t)__this_00,(MethodInfo *)0x0);
    if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
      UStack_3c._12_8_ = 0x43d141d;
      __this_00 = pUVar10;
      (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                (pUVar10,pSVar9,(pUVar10->klass->vtable)._75_set_text.method);
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x78), lVar3 != 0)) &&
         (pUVar2 = (__this->fields)._scoreLabel, __this_00 = (UnityEngine_UI_Text_o *)0x0,
         pUVar2 != (UnityEngine_UI_Text_o *)0x0)) {
        fVar11 = (float)(int)local_20._0_4_ / 3000.0;
        if (1.0 <= fVar11) {
          fVar11 = 1.0;
        }
        value = (uint)((float)((int)(fVar11 * 60.0) + 0x28) * *(float *)(lVar3 + 0x14));
        pUVar10 = (UnityEngine_UI_Text_o *)(ulong)value;
        UStack_3c._12_8_ = 0x43d148d;
        UnityEngine_UI_Text__set_fontSize(pUVar2,value,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._backgroundLabel;
        __this_00 = (UnityEngine_UI_Text_o *)0x0;
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          UStack_3c._12_8_ = 0x43d14a2;
          UnityEngine_UI_Text__set_fontSize(pUVar2,value,(MethodInfo *)0x0);
          UStack_3c._12_8_ = 0x43d14ac;
          UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  UStack_3c._12_8_ = 0x43d14bb;
  il2cpp_runtime_helper_022b2c90();
  plVar4 = *(long **)&(__this_00->fields)._useLegacyMeshGeneration_k__BackingField;
  __this_01 = &UStack_3c;
  UStack_3c._4_8_ = pUVar10;
  UStack_3c._12_8_ = pUVar7;
  pSVar9 = System_Int32__ToString((int32_t)__this_01,(MethodInfo *)0x0);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x5e8))(plVar4,pSVar9,*(undefined8 *)(*plVar4 + 0x5f0));
    pUVar5 = (__this_00->fields).m_MaskMaterial;
    __this_01 = &UStack_3c;
    pSVar9 = System_Int32__ToString((int32_t)__this_01,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Material_o *)0x0) {
      (*pUVar5->klass[4]._1.gc_desc)(pUVar5,pSVar9,pUVar5->klass[4]._1.name);
      pUVar2 = *(UnityEngine_UI_Text_o **)&(__this_00->fields)._useLegacyMeshGeneration_k__BackingField;
      __this_01 = (UnityEngine_Component_o *)0x0;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        UnityEngine_UI_Text__set_fontSize(pUVar2,0x28,(MethodInfo *)0x0);
        pUVar2 = (UnityEngine_UI_Text_o *)(__this_00->fields).m_MaskMaterial;
        __this_01 = (UnityEngine_Component_o *)0x0;
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_UI_Text__set_fontSize(pUVar2,0x28,(MethodInfo *)0x0);
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((*(char *)&__this_01[6].klass != '\0') &&
     (fVar11 = *(float *)((long)&__this_01[7].fields.m_CachedPtr + 4), 0.0 < fVar11)) {
    fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)((long)&__this_01[7].fields.m_CachedPtr + 4) = fVar11 - fVar12;
    iVar6 = __this_01[7].fields.m_CachedPtr;
    pUVar7 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    if ((char)iVar6 == '\0') {
      fVar11 = 100.0 - *(float *)&__this_01[8].klass;
    }
    else {
      fVar11 = *(float *)&__this_01[8].klass + 100.0;
    }
    offset_00.fields.x = (float)uVar1 * fVar11;
    offset_00.fields.y = (float)((ulong)uVar1 >> 0x20) * fVar11;
    UI_ElementFactory__SetAnchor(pUVar7,4,4,offset_00,(MethodInfo *)0x0);
    *(byte *)&__this_01[7].fields.m_CachedPtr = (byte)__this_01[7].fields.m_CachedPtr ^ 1;
    fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)&__this_01[8].klass = (fVar11 * -0.2 * 60.0 + 1.0) * *(float *)&__this_01[8].klass;
  }
  return;
}


// UI.KillScorePopup$$ShowSnapshotViewer
// il2cpp: void UI_KillScorePopup__ShowSnapshotViewer (UI_KillScorePopup_o* __this, int32_t score, const MethodInfo* method);
// 0x43d14c0

void UI_KillScorePopup__ShowSnapshotViewer(UI_KillScorePopup_o *__this,int32_t score,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_UI_Text_o *pUVar2;
  intptr_t iVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_o *obj;
  UnityEngine_Component_o *__this_00;
  float fVar5;
  UnityEngine_Vector2_o offset;
  float fVar6;
  
  pUVar2 = (__this->fields)._scoreLabel;
  __this_00 = (UnityEngine_Component_o *)&stack0xffffffffffffffec;
  pSVar4 = System_Int32__ToString((int32_t)__this_00,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
    (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
              (pUVar2,pSVar4,(pUVar2->klass->vtable)._75_set_text.method);
    pUVar2 = (__this->fields)._backgroundLabel;
    __this_00 = (UnityEngine_Component_o *)&stack0xffffffffffffffec;
    pSVar4 = System_Int32__ToString((int32_t)__this_00,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                (pUVar2,pSVar4,(pUVar2->klass->vtable)._75_set_text.method);
      pUVar2 = (__this->fields)._scoreLabel;
      __this_00 = (UnityEngine_Component_o *)0x0;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        UnityEngine_UI_Text__set_fontSize(pUVar2,0x28,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._backgroundLabel;
        __this_00 = (UnityEngine_Component_o *)0x0;
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          UnityEngine_UI_Text__set_fontSize(pUVar2,0x28,(MethodInfo *)0x0);
          UI_BasePopup__ShowImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((*(char *)&__this_00[6].klass != '\0') &&
     (fVar6 = *(float *)((long)&__this_00[7].fields.m_CachedPtr + 4), 0.0 < fVar6)) {
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)((long)&__this_00[7].fields.m_CachedPtr + 4) = fVar6 - fVar5;
    iVar3 = __this_00[7].fields.m_CachedPtr;
    obj = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    if ((char)iVar3 == '\0') {
      fVar6 = 100.0 - *(float *)&__this_00[8].klass;
    }
    else {
      fVar6 = *(float *)&__this_00[8].klass + 100.0;
    }
    offset.fields.x = (float)uVar1 * fVar6;
    offset.fields.y = (float)((ulong)uVar1 >> 0x20) * fVar6;
    UI_ElementFactory__SetAnchor(obj,4,4,offset,(MethodInfo *)0x0);
    *(byte *)&__this_00[7].fields.m_CachedPtr = (byte)__this_00[7].fields.m_CachedPtr ^ 1;
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    *(float *)&__this_00[8].klass = (fVar6 * -0.2 * 60.0 + 1.0) * *(float *)&__this_00[8].klass;
  }
  return;
}


// UI.KillScorePopup$$Update
// il2cpp: void UI_KillScorePopup__Update (UI_KillScorePopup_o* __this, const MethodInfo* method);
// 0x43d1580

void UI_KillScorePopup__Update(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *obj;
  float fVar4;
  UnityEngine_Vector2_o offset;
  float fVar5;
  
  if (((char)(__this->fields).IsActive != '\0') && (fVar5 = (__this->fields)._shakeTimeLeft, 0.0 < fVar5)) {
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields)._shakeTimeLeft = fVar5 - fVar4;
    bVar3 = (__this->fields)._shakeFlip;
    obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (g_data_057a6844 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6844 = '\x01';
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
// 0x43d16a0

void UI_KillScorePopup___ctor(UI_KillScorePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}



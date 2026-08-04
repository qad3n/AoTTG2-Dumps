// Type: Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchDisabledSelectableOpacity.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Awake (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b93430

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Awake
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o *pUVar1;
  UnityEngine_UI_Graphic_array *pUVar2;
  
  if (g_data_057a9ed1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    g_data_057a9ed1 = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Selectable_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Selectable_GetComponent_Selectable);
  (__this->fields)._selectable = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._selectable,pUVar1);
  if (g_data_057a9ed3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Graphic_GetComponentsInChildren_Graphic);
    g_data_057a9ed3 = '\x01';
  }
  pUVar2 = (UnityEngine_UI_Graphic_array *)
           UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,1,MethodInfo_Graphic_GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = pUVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._graphics,pUVar2);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnEnable (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b93510

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnEnable
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **ppUVar1;
  UnityEngine_Vector2_Fields UVar2;
  int32_t index;
  long lVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  bool_conflict bVar4;
  UnityEngine_UI_Selectable_o *pUVar5;
  UnityEngine_UI_Graphic_array *pUVar6;
  bool bVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  UnityEngine_Vector3_o UVar12;
  
  if (g_data_057a9ed3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Graphic_GetComponentsInChildren_Graphic);
    g_data_057a9ed3 = '\x01';
  }
  pUVar6 = (UnityEngine_UI_Graphic_array *)
           UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,1,MethodInfo_Graphic_GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = pUVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._graphics);
  *(undefined1 *)&(__this->fields)._initialized = 0;
  if (g_data_057a9ed2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed2 = '\x01';
  }
  pUVar5 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._selectable;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar5 = (UnityEngine_UI_Selectable_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Selectable_GetComponent_Selectable);
    (__this->fields)._selectable = pUVar5;
    il2cpp_runtime_helper_022b4080(ppUVar1);
  }
  pUVar5 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar7 = true;
  if ((char)bVar4 == '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_00 = *(Gisketch_Aottg2UI_Actions_AottgChoiceControl_o **)&(pUVar5->fields).m_EnableCalled;
      if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
        return;
      }
      index = (pUVar5->fields).m_Navigation.fields.m_Mode;
      if (pMVar8 == (MethodInfo *)0x0) {
        UVar12 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        uVar10 = UVar12.fields._0_8_;
        pMVar8 = extraout_RDX_04;
      }
      else {
        uVar10 = *(undefined8 *)&pMVar8[2].field_0x54;
        pMVar8 = extraout_RDX_03;
      }
      if ((char)(__this_00->fields)._pointerSelectionLocked != '\0') {
        UVar2 = (__this_00->fields)._pointerLockPosition.fields;
        fVar9 = (float)uVar10 - UVar2.x;
        fVar11 = (float)((ulong)uVar10 >> 0x20) - UVar2.y;
        if (fVar11 * fVar11 + fVar9 * fVar9 < 4.0) {
          return;
        }
        *(undefined1 *)&(__this_00->fields)._pointerSelectionLocked = 0;
      }
      if (g_data_057a9eed == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9eed = '\x01';
        pMVar8 = extraout_RDX;
      }
      if (g_data_057a9c87 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9c87 = '\x01';
        pMVar8 = extraout_RDX_00;
      }
      lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      if (*(int *)(lVar3 + 0x18) != 0) {
        if (g_data_057a9f2a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
          g_data_057a9f2a = '\x01';
          lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          lVar3 = *(long *)(lVar3 + 0x10);
          pMVar8 = extraout_RDX_02;
        }
        else {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          lVar3 = *(long *)(lVar3 + 0x10);
        }
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
          pMVar8 = extraout_RDX_01;
        }
      }
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,index,pMVar8);
      return;
    }
    bVar7 = (char)((*ppUVar1)->fields).m_Interactable != '\0';
  }
  if (((char)(__this->fields)._initialized != '\0') &&
     ((bool)*(char *)((long)&(__this->fields)._initialized + 1) == bVar7)) {
    return;
  }
  *(undefined1 *)&(__this->fields)._initialized = 1;
  *(bool *)((long)&(__this->fields)._initialized + 1) = bVar7;
  if (bVar7 == false) {
    fVar9 = 0.5;
  }
  else {
    fVar9 = 1.0;
  }
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha(__this,fVar9,pMVar8);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnDisable (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b93570

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnDisable
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha(__this,1.0,method);
  *(undefined1 *)&(__this->fields)._initialized = 0;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$OnTransformChildrenChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnTransformChildrenChanged (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b93690

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__OnTransformChildrenChanged
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **ppUVar1;
  UnityEngine_Vector2_Fields UVar2;
  int32_t index;
  long lVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  bool_conflict bVar4;
  UnityEngine_UI_Selectable_o *pUVar5;
  UnityEngine_UI_Graphic_array *pUVar6;
  bool bVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  UnityEngine_Vector3_o UVar12;
  
  if (g_data_057a9ed3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Graphic_GetComponentsInChildren_Graphic);
    g_data_057a9ed3 = '\x01';
  }
  pUVar6 = (UnityEngine_UI_Graphic_array *)
           UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,1,MethodInfo_Graphic_GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = pUVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._graphics);
  *(undefined1 *)&(__this->fields)._initialized = 0;
  if (g_data_057a9ed2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed2 = '\x01';
  }
  pUVar5 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._selectable;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar5 = (UnityEngine_UI_Selectable_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Selectable_GetComponent_Selectable);
    (__this->fields)._selectable = pUVar5;
    il2cpp_runtime_helper_022b4080(ppUVar1);
  }
  pUVar5 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar7 = true;
  if ((char)bVar4 == '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_00 = *(Gisketch_Aottg2UI_Actions_AottgChoiceControl_o **)&(pUVar5->fields).m_EnableCalled;
      if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
        return;
      }
      index = (pUVar5->fields).m_Navigation.fields.m_Mode;
      if (pMVar8 == (MethodInfo *)0x0) {
        UVar12 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        uVar10 = UVar12.fields._0_8_;
        pMVar8 = extraout_RDX_04;
      }
      else {
        uVar10 = *(undefined8 *)&pMVar8[2].field_0x54;
        pMVar8 = extraout_RDX_03;
      }
      if ((char)(__this_00->fields)._pointerSelectionLocked != '\0') {
        UVar2 = (__this_00->fields)._pointerLockPosition.fields;
        fVar9 = (float)uVar10 - UVar2.x;
        fVar11 = (float)((ulong)uVar10 >> 0x20) - UVar2.y;
        if (fVar11 * fVar11 + fVar9 * fVar9 < 4.0) {
          return;
        }
        *(undefined1 *)&(__this_00->fields)._pointerSelectionLocked = 0;
      }
      if (g_data_057a9eed == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9eed = '\x01';
        pMVar8 = extraout_RDX;
      }
      if (g_data_057a9c87 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9c87 = '\x01';
        pMVar8 = extraout_RDX_00;
      }
      lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      if (*(int *)(lVar3 + 0x18) != 0) {
        if (g_data_057a9f2a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
          g_data_057a9f2a = '\x01';
          lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          lVar3 = *(long *)(lVar3 + 0x10);
          pMVar8 = extraout_RDX_02;
        }
        else {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          lVar3 = *(long *)(lVar3 + 0x10);
        }
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
          pMVar8 = extraout_RDX_01;
        }
      }
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,index,pMVar8);
      return;
    }
    bVar7 = (char)((*ppUVar1)->fields).m_Interactable != '\0';
  }
  if (((char)(__this->fields)._initialized != '\0') &&
     ((bool)*(char *)((long)&(__this->fields)._initialized + 1) == bVar7)) {
    return;
  }
  *(undefined1 *)&(__this->fields)._initialized = 1;
  *(bool *)((long)&(__this->fields)._initialized + 1) = bVar7;
  if (bVar7 == false) {
    fVar9 = 0.5;
  }
  else {
    fVar9 = 1.0;
  }
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha(__this,fVar9,pMVar8);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__LateUpdate (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b936f0

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__LateUpdate
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **ppUVar1;
  UnityEngine_Vector2_Fields UVar2;
  int32_t index;
  long lVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  bool_conflict bVar4;
  UnityEngine_UI_Selectable_o *pUVar5;
  bool bVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar7;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  float fVar8;
  float fVar10;
  undefined8 uVar9;
  UnityEngine_Vector3_o UVar11;
  
  if (g_data_057a9ed2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed2 = '\x01';
  }
  pUVar5 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._selectable;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar5 = (UnityEngine_UI_Selectable_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Selectable_GetComponent_Selectable);
    (__this->fields)._selectable = pUVar5;
    il2cpp_runtime_helper_022b4080(ppUVar1);
  }
  pUVar5 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar6 = true;
  if ((char)bVar4 == '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_00 = *(Gisketch_Aottg2UI_Actions_AottgChoiceControl_o **)&(pUVar5->fields).m_EnableCalled;
      if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
        return;
      }
      index = (pUVar5->fields).m_Navigation.fields.m_Mode;
      if (pMVar7 == (MethodInfo *)0x0) {
        UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        uVar9 = UVar11.fields._0_8_;
        pMVar7 = extraout_RDX_04;
      }
      else {
        uVar9 = *(undefined8 *)&pMVar7[2].field_0x54;
        pMVar7 = extraout_RDX_03;
      }
      if ((char)(__this_00->fields)._pointerSelectionLocked != '\0') {
        UVar2 = (__this_00->fields)._pointerLockPosition.fields;
        fVar8 = (float)uVar9 - UVar2.x;
        fVar10 = (float)((ulong)uVar9 >> 0x20) - UVar2.y;
        if (fVar10 * fVar10 + fVar8 * fVar8 < 4.0) {
          return;
        }
        *(undefined1 *)&(__this_00->fields)._pointerSelectionLocked = 0;
      }
      if (g_data_057a9eed == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9eed = '\x01';
        pMVar7 = extraout_RDX;
      }
      if (g_data_057a9c87 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9c87 = '\x01';
        pMVar7 = extraout_RDX_00;
      }
      lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      if (*(int *)(lVar3 + 0x18) != 0) {
        if (g_data_057a9f2a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
          g_data_057a9f2a = '\x01';
          lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          lVar3 = *(long *)(lVar3 + 0x10);
          pMVar7 = extraout_RDX_02;
        }
        else {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          lVar3 = *(long *)(lVar3 + 0x10);
        }
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
          pMVar7 = extraout_RDX_01;
        }
      }
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,index,pMVar7);
      return;
    }
    bVar6 = (char)((*ppUVar1)->fields).m_Interactable != '\0';
  }
  if (((char)(__this->fields)._initialized != '\0') &&
     ((bool)*(char *)((long)&(__this->fields)._initialized + 1) == bVar6)) {
    return;
  }
  *(undefined1 *)&(__this->fields)._initialized = 1;
  *(bool *)((long)&(__this->fields)._initialized + 1) = bVar6;
  if (bVar6 == false) {
    fVar8 = 0.5;
  }
  else {
    fVar8 = 1.0;
  }
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha(__this,fVar8,pMVar7);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b8d9c0

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Selectable_o **ppUVar1;
  UnityEngine_Vector2_Fields UVar2;
  int32_t index;
  long lVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  bool_conflict bVar4;
  UnityEngine_UI_Selectable_o *pUVar5;
  bool bVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar7;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  float fVar8;
  float fVar10;
  undefined8 uVar9;
  UnityEngine_Vector3_o UVar11;
  
  if (g_data_057a9ed2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ed2 = '\x01';
  }
  pUVar5 = (__this->fields)._selectable;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._selectable;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    pUVar5 = (UnityEngine_UI_Selectable_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Selectable_GetComponent_Selectable);
    (__this->fields)._selectable = pUVar5;
    il2cpp_runtime_helper_022b4080(ppUVar1);
  }
  pUVar5 = *ppUVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar6 = true;
  if ((char)bVar4 == '\0') {
    if (*ppUVar1 == (UnityEngine_UI_Selectable_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_00 = *(Gisketch_Aottg2UI_Actions_AottgChoiceControl_o **)&(pUVar5->fields).m_EnableCalled;
      if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
        return;
      }
      index = (pUVar5->fields).m_Navigation.fields.m_Mode;
      if (pMVar7 == (MethodInfo *)0x0) {
        UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        uVar9 = UVar11.fields._0_8_;
        pMVar7 = extraout_RDX_04;
      }
      else {
        uVar9 = *(undefined8 *)&pMVar7[2].field_0x54;
        pMVar7 = extraout_RDX_03;
      }
      if ((char)(__this_00->fields)._pointerSelectionLocked != '\0') {
        UVar2 = (__this_00->fields)._pointerLockPosition.fields;
        fVar8 = (float)uVar9 - UVar2.x;
        fVar10 = (float)((ulong)uVar9 >> 0x20) - UVar2.y;
        if (fVar10 * fVar10 + fVar8 * fVar8 < 4.0) {
          return;
        }
        *(undefined1 *)&(__this_00->fields)._pointerSelectionLocked = 0;
      }
      if (g_data_057a9eed == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9eed = '\x01';
        pMVar7 = extraout_RDX;
      }
      if (g_data_057a9c87 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9c87 = '\x01';
        pMVar7 = extraout_RDX_00;
      }
      lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      if (*(int *)(lVar3 + 0x18) != 0) {
        if (g_data_057a9f2a == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
          g_data_057a9f2a = '\x01';
          lVar3 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
          *(undefined4 *)(lVar3 + 0x18) = 0;
          lVar3 = *(long *)(lVar3 + 0x10);
          pMVar7 = extraout_RDX_02;
        }
        else {
          *(undefined4 *)(lVar3 + 0x18) = 0;
          lVar3 = *(long *)(lVar3 + 0x10);
        }
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
          pMVar7 = extraout_RDX_01;
        }
      }
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,index,pMVar7);
      return;
    }
    bVar6 = (char)((*ppUVar1)->fields).m_Interactable != '\0';
  }
  if (((char)(__this->fields)._initialized != '\0') &&
     ((bool)*(char *)((long)&(__this->fields)._initialized + 1) == bVar6)) {
    return;
  }
  *(undefined1 *)&(__this->fields)._initialized = 1;
  *(bool *)((long)&(__this->fields)._initialized + 1) = bVar6;
  if (bVar6 == false) {
    fVar8 = 0.5;
  }
  else {
    fVar8 = 1.0;
  }
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha(__this,fVar8,pMVar7);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$CacheGraphics
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__CacheGraphics (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b934c0

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__CacheGraphics
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Graphic_array *pUVar1;
  
  if (g_data_057a9ed3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Graphic_GetComponentsInChildren_Graphic);
    g_data_057a9ed3 = '\x01';
  }
  pUVar1 = (UnityEngine_UI_Graphic_array *)
           UnityEngine_Component__GetComponentsInChildren_object_
                     ((UnityEngine_Component_o *)__this,1,MethodInfo_Graphic_GetComponentsInChildren_Graphic);
  (__this->fields)._graphics = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._graphics,pUVar1);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$ApplyAlpha
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, float alpha, const MethodInfo* method);
// 0x3b93590

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,float alpha,
               MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Vector2_Fields UVar2;
  uint uVar3;
  long lVar4;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  intptr_t iVar5;
  bool_conflict bVar6;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_UI_Graphic_array *pUVar8;
  System_Object_array *pSVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  ulong uVar11;
  UnityEngine_Object_o *pUVar12;
  UnityEngine_UI_Graphic_o *__this_01;
  UnityEngine_UI_Graphic_o *__this_02;
  bool bVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  UnityEngine_Vector3_o UVar17;
  
  __this_01 = (UnityEngine_UI_Graphic_o *)__this;
  if (g_data_057a9ed4 == '\0') {
    __this_01 = (UnityEngine_UI_Graphic_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ed4 = '\x01';
  }
  pUVar8 = (__this->fields)._graphics;
  if (pUVar8 != (UnityEngine_UI_Graphic_array *)0x0) {
    uVar11 = 0;
    uVar3 = (uint)pUVar8->max_length;
    if (0 < (int)uVar3) {
      do {
        __this_02 = __this_01;
        if (uVar3 <= uVar11) goto label_03b9367e;
        __this_01 = pUVar8->m_Items[uVar11];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          pUVar8 = (__this->fields)._graphics;
          __this_02 = __this_01;
          if (pUVar8 != (UnityEngine_UI_Graphic_array *)0x0) {
            if ((uint)pUVar8->max_length <= uVar11) goto label_03b9367e;
            __this_02 = pUVar8->m_Items[uVar11];
            if ((__this_02 != (UnityEngine_UI_Graphic_o *)0x0) &&
               (__this_01 = (UnityEngine_UI_Graphic_o *)
                            UnityEngine_UI_Graphic__get_canvasRenderer(__this_02,(MethodInfo *)0x0),
               __this_01 != (UnityEngine_UI_Graphic_o *)0x0)) {
              UnityEngine_CanvasRenderer__SetAlpha
                        ((UnityEngine_CanvasRenderer_o *)__this_01,alpha,(MethodInfo *)0x0);
              goto label_03b935f0;
            }
          }
label_03b93679:
          il2cpp_runtime_helper_022b2c90();
label_03b9367e:
          il2cpp_runtime_helper_022b2ca0();
          if (g_data_057a9ed3 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Graphic_GetComponentsInChildren_Graphic);
            g_data_057a9ed3 = '\x01';
          }
          pSVar9 = UnityEngine_Component__GetComponentsInChildren_object_
                             ((UnityEngine_Component_o *)__this_02,1,MethodInfo_Graphic_GetComponentsInChildren_Graphic);
          *(System_Object_array **)&(__this_02->fields).m_Color.fields = pSVar9;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields).m_Color);
          *(undefined1 *)&(__this_02->fields).m_Color.fields.b = 0;
          if (g_data_057a9ed2 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9ed2 = '\x01';
          }
          pUVar12 = (UnityEngine_Object_o *)(__this_02->fields).m_Material;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ppUVar1 = &(__this_02->fields).m_Material;
          bVar6 = UnityEngine_Object__op_Equality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            pUVar7 = (UnityEngine_Material_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)__this_02,MethodInfo_Selectable_GetComponent_Selectable);
            (__this_02->fields).m_Material = pUVar7;
            il2cpp_runtime_helper_022b4080(ppUVar1);
          }
          pUVar12 = (UnityEngine_Object_o *)*ppUVar1;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar10 = (MethodInfo *)0x0;
          bVar6 = UnityEngine_Object__op_Equality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          bVar13 = true;
          if ((char)bVar6 == '\0') {
            if (*ppUVar1 == (UnityEngine_Material_o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              __this_00 = pUVar12[1].monitor;
              if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                return;
              }
              iVar5 = pUVar12[1].fields.m_CachedPtr;
              if (pMVar10 == (MethodInfo *)0x0) {
                UVar17 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
                uVar15 = UVar17.fields._0_8_;
                pMVar10 = extraout_RDX_04;
              }
              else {
                uVar15 = *(undefined8 *)&pMVar10[2].field_0x54;
                pMVar10 = extraout_RDX_03;
              }
              if ((char)(__this_00->fields)._pointerSelectionLocked != '\0') {
                UVar2 = (__this_00->fields)._pointerLockPosition.fields;
                fVar14 = (float)uVar15 - UVar2.x;
                fVar16 = (float)((ulong)uVar15 >> 0x20) - UVar2.y;
                if (fVar16 * fVar16 + fVar14 * fVar14 < 4.0) {
                  return;
                }
                *(undefined1 *)&(__this_00->fields)._pointerSelectionLocked = 0;
              }
              if (g_data_057a9eed == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
                g_data_057a9eed = '\x01';
                pMVar10 = extraout_RDX;
              }
              if (g_data_057a9c87 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
                g_data_057a9c87 = '\x01';
                pMVar10 = extraout_RDX_00;
              }
              lVar4 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
              if (*(int *)(lVar4 + 0x18) != 0) {
                if (g_data_057a9f2a == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
                  g_data_057a9f2a = '\x01';
                  lVar4 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
                  *(undefined4 *)(lVar4 + 0x18) = 0;
                  lVar4 = *(long *)(lVar4 + 0x10);
                  pMVar10 = extraout_RDX_02;
                }
                else {
                  *(undefined4 *)(lVar4 + 0x18) = 0;
                  lVar4 = *(long *)(lVar4 + 0x10);
                }
                if (lVar4 != 0) {
                  (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
                  pMVar10 = extraout_RDX_01;
                }
              }
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,(int32_t)iVar5,pMVar10)
              ;
              return;
            }
            bVar13 = *(char *)&(*ppUVar1)[9].klass != '\0';
          }
          if ((*(char *)&(__this_02->fields).m_Color.fields.b != '\0') &&
             ((bool)*(char *)((long)&(__this_02->fields).m_Color.fields.b + 1) == bVar13)) {
            return;
          }
          *(undefined1 *)&(__this_02->fields).m_Color.fields.b = 1;
          *(bool *)((long)&(__this_02->fields).m_Color.fields.b + 1) = bVar13;
          if (bVar13 == false) {
            fVar14 = 0.5;
          }
          else {
            fVar14 = 1.0;
          }
          Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__ApplyAlpha
                    ((Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *)__this_02,fVar14,pMVar10
                    );
          return;
        }
label_03b935f0:
        uVar11 = uVar11 + 1;
        pUVar8 = (__this->fields)._graphics;
        __this_02 = __this_01;
        if (pUVar8 == (UnityEngine_UI_Graphic_array *)0x0) goto label_03b93679;
        uVar3 = (uint)pUVar8->max_length;
      } while ((long)uVar11 < (long)(int)uVar3);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchDisabledSelectableOpacity$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity___ctor (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o* __this, const MethodInfo* method);
// 0x3b93700

void Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity___ctor
               (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



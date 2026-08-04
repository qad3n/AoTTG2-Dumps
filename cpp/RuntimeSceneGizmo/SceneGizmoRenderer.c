// Type: RuntimeSceneGizmo.SceneGizmoRenderer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/RuntimeSceneGizmo/SceneGizmoRenderer.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/RuntimeSceneGizmo/SceneGizmoRenderer.cs
// --------------------------------

// RuntimeSceneGizmo.SceneGizmoRenderer$$get_ReferenceTransform
// il2cpp: UnityEngine_Transform_o* RuntimeSceneGizmo_SceneGizmoRenderer__get_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x4083bf0

UnityEngine_Transform_o *
RuntimeSceneGizmo_SceneGizmoRenderer__get_ReferenceTransform
          (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  return (__this->fields).m_referenceTransform;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$set_ReferenceTransform
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__set_ReferenceTransform (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
// 0x4083c00

void RuntimeSceneGizmo_SceneGizmoRenderer__set_ReferenceTransform
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,UnityEngine_Transform_o *value,
               MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  MethodInfo *method_00;
  
  (__this->fields).m_referenceTransform = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_referenceTransform);
  __this_00 = (__this->fields).controller;
  if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform(__this_00,value,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$get_OnComponentClicked
// il2cpp: RuntimeSceneGizmo_ComponentClickedEvent_o* RuntimeSceneGizmo_SceneGizmoRenderer__get_OnComponentClicked (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x4083c40

RuntimeSceneGizmo_ComponentClickedEvent_o *
RuntimeSceneGizmo_SceneGizmoRenderer__get_OnComponentClicked
          (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  return (__this->fields).m_onComponentClicked;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$Awake
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__Awake (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x4083c50

void RuntimeSceneGizmo_SceneGizmoRenderer__Awake
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *pUVar1;
  UnityEngine_RectTransform_c *pUVar2;
  void *pvVar3;
  UnityEngine_Object_o *x;
  long *plVar4;
  UnityEngine_Component_c *x_00;
  UnityEngine_Component_c *pUVar5;
  Il2CppClass *__this_00;
  char cVar6;
  bool_conflict bVar7;
  int32_t arg0;
  UnityEngine_RectTransform_o *pUVar8;
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  UnityEngine_Camera_o *cam_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_EventSystems_PointerEventData_o *__this_01;
  UnityEngine_EventSystems_PointerEventData_o *__this_02;
  long lVar11;
  UnityEngine_Component_o *__this_03;
  UnityEngine_RectTransform_o *pUVar12;
  UnityEngine_RectTransform_o *unaff_R12;
  undefined1 auVar14 [16];
  undefined8 uVar13;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o normalizedPosition;
  UnityEngine_Vector3_o normalizedPosition_00;
  UnityEngine_Rect_o UVar17;
  UnityEngine_Vector2_Fields local_150;
  UnityEngine_Vector2_Fields local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  UnityEngine_EventSystems_PointerEventData_o *pUStack_120;
  UnityEngine_RectTransform_o *pUStack_118;
  UnityEngine_RectTransform_o *pUStack_110;
  Il2CppClass *pIStack_108;
  UnityEngine_Vector2_Fields local_f8;
  UnityEngine_Vector2_Fields local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [16];
  UnityEngine_EventSystems_PointerEventData_o *pUStack_c8;
  RuntimeSceneGizmo_SceneGizmoController_o *pRStack_c0;
  UnityEngine_Vector2_Fields local_b0;
  UnityEngine_Vector2_Fields local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  UnityEngine_Component_c *pUStack_80;
  
  if (g_data_057ac3be == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SceneGizmoController_Instantiate_SceneGizmoController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057ac3be = '\x01';
  }
  pUVar1 = (__this->fields).imageHolder;
  if (pUVar1 == (UnityEngine_UI_RawImage_o *)0x0) {
label_04083d41:
    pUVar8 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar8 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    pUVar2 = TypeInfo_RectTransform;
    if (pUVar8 == (UnityEngine_RectTransform_o *)0x0) {
      (__this->fields).imageHolderTR = (UnityEngine_RectTransform_o *)0x0;
label_04083cd3:
      il2cpp_runtime_helper_022b4080(&(__this->fields).imageHolderTR,pUVar8);
      pRVar9 = (__this->fields).controller;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pRVar9 = (RuntimeSceneGizmo_SceneGizmoController_o *)
               UnityEngine_Object__Instantiate_object_((Il2CppObject *)pRVar9,MethodInfo_SceneGizmoController_Instantiate_SceneGizmoController);
      (__this->fields).controller = pRVar9;
      il2cpp_runtime_helper_022b4080(&(__this->fields).controller);
      pRVar9 = (__this->fields).controller;
      if ((pRVar9 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
         (pUVar1 = (__this->fields).imageHolder, pUVar1 != (UnityEngine_UI_RawImage_o *)0x0)) {
        UnityEngine_UI_RawImage__set_texture
                  (pUVar1,(UnityEngine_Texture_o *)(pRVar9->fields)._TargetTexture_k__BackingField,
                   (MethodInfo *)0x0);
        return;
      }
      goto label_04083d41;
    }
    if ((pUVar8->klass == TypeInfo_RectTransform) && ((__this->fields).imageHolderTR = pUVar8, pUVar8->klass == pUVar2))
    goto label_04083cd3;
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ac3bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3bf = '\x01';
  }
  pUVar2 = pUVar8[3].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pUVar2 = pUVar8[3].klass;
  if (pUVar2 != (UnityEngine_RectTransform_c *)0x0) {
    pvVar3 = (pUVar2->_1).image;
    cVar6 = (**(code **)((long)pvVar3 + 0x138))(pUVar2,0,*(undefined8 *)((long)pvVar3 + 0x140));
    if (cVar6 != '\0') {
      return;
    }
    if (pUVar8[2].klass != (UnityEngine_RectTransform_c *)0x0) {
      RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform
                ((RuntimeSceneGizmo_SceneGizmoController_o *)pUVar8[2].klass,
                 (UnityEngine_Transform_o *)pUVar8[3].klass,method_01);
      return;
    }
  }
  lVar11 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3c0 = '\x01';
  }
  x = *(UnityEngine_Object_o **)(lVar11 + 0x30);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  plVar4 = *(long **)(lVar11 + 0x30);
  __this_03 = (UnityEngine_Component_o *)0x0;
  if (plVar4 != (long *)0x0) {
    cVar6 = (**(code **)(*plVar4 + 0x138))(plVar4,0,*(undefined8 *)(*plVar4 + 0x140));
    if (cVar6 != '\0') {
      return;
    }
    __this_03 = *(UnityEngine_Component_o **)(lVar11 + 0x30);
    if ((__this_03 != (UnityEngine_Component_o *)0x0) &&
       (pUVar10 = UnityEngine_Component__get_gameObject(__this_03,(MethodInfo *)0x0),
       pUVar10 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar10,1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3c1 = '\x01';
  }
  x_00 = __this_03[2].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pUVar5 = __this_03[2].klass;
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (pUVar5 != (UnityEngine_Component_c *)0x0) {
    pvVar3 = (pUVar5->_1).image;
    __this_01 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    cVar6 = (**(code **)((long)pvVar3 + 0x138))(pUVar5,0,*(undefined8 *)((long)pvVar3 + 0x140));
    if (cVar6 != '\0') {
      return;
    }
    cam = (UnityEngine_EventSystems_PointerEventData_o *)__this_03[2].klass;
    if (cam != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      __this_01 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
      pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam,(MethodInfo *)0x0);
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar10,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (Il2CppClass *)(cam->fields)._pointerDrag_k__BackingField;
  if (__this_00 == (Il2CppClass *)0x0) {
    return;
  }
  pRVar9 = ((Il2CppType *)&(cam->fields)._lastPress_k__BackingField)->data;
  pUStack_80 = x_00;
  if (g_data_057ac3c3 == '\0') {
    pRStack_c0 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083f84;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ac3c3 = '\x01';
  }
  local_b0.x = 0.0;
  local_b0.y = 0.0;
  pUVar8 = (UnityEngine_RectTransform_o *)(cam->fields).m_PointerPress;
  pUVar12 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
    pRStack_c0 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fa8;
    UVar17 = UnityEngine_RectTransform__get_rect(pUVar8,(MethodInfo *)0x0);
    local_98._8_4_ = in_XMM1_Dc;
    local_98._0_8_ = UVar17.fields._8_8_;
    local_98._12_4_ = in_XMM1_Dd;
    unaff_R12 = (UnityEngine_RectTransform_o *)(cam->fields).m_PointerPress;
    local_a8.x = (float)(__this_00->_2).native_size;
    local_a8.y = (float)(__this_00->_2).static_fields_size;
    uStack_a0 = 0;
    pRStack_c0 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fc9;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_enterEventCamera
                    ((UnityEngine_EventSystems_PointerEventData_o *)__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pRStack_c0 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fe4;
      il2cpp_runtime_helper_02337ed0();
    }
    pRStack_c0 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083ffb;
    __this_01 = cam;
    pUVar12 = unaff_R12;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (unaff_R12,(UnityEngine_Vector2_o)local_a8,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)&local_b0,(MethodInfo *)0x0);
    if (pRVar9 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      auVar14._8_8_ = 0;
      auVar14._0_4_ = local_b0.x;
      auVar14._4_4_ = local_b0.y;
      auVar14 = divps(auVar14,local_98);
      normalizedPosition.fields.x = auVar14._0_4_ + 1.0;
      normalizedPosition.fields.y = auVar14._4_4_ + 1.0;
      pRStack_c0 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x408401d;
      normalizedPosition.fields.z = 0.0;
      RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
                (pRVar9,normalizedPosition,(MethodInfo *)__this_01);
      return;
    }
  }
  pRStack_c0 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x408402e;
  uVar13 = il2cpp_runtime_helper_022b2c90();
  __this_02 = __this_01;
  pUStack_c8 = cam;
  pRStack_c0 = pRVar9;
  if (g_data_057ac3c3 == '\0') {
    pIStack_108 = (Il2CppClass *)0x4084052;
    uVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ac3c3 = '\x01';
  }
  local_f8.x = 0.0;
  local_f8.y = 0.0;
  pUVar8 = (UnityEngine_RectTransform_o *)pUVar12[1].fields.m_CachedPtr;
  if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
    __this_02 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    pIStack_108 = (Il2CppClass *)0x4084072;
    UVar17 = UnityEngine_RectTransform__get_rect(pUVar8,(MethodInfo *)0x0);
    uVar13 = UVar17.fields._0_8_;
    local_e0._8_4_ = in_XMM1_Dc;
    local_e0._0_8_ = UVar17.fields._8_8_;
    local_e0._12_4_ = in_XMM1_Dd;
    if (__this_01 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      pUVar8 = (UnityEngine_RectTransform_o *)pUVar12[1].fields.m_CachedPtr;
      local_f0 = (__this_01->fields)._position_k__BackingField.fields;
      uStack_e8 = 0;
      pIStack_108 = (Il2CppClass *)0x4084097;
      cam_00 = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(__this_01,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        pIStack_108 = (Il2CppClass *)0x40840b2;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_108 = (Il2CppClass *)0x40840c9;
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar8,(UnityEngine_Vector2_o)local_f0,cam_00,(UnityEngine_Vector2_o *)&local_f8,
                 (MethodInfo *)0x0);
      auVar15._8_8_ = 0;
      auVar15._0_4_ = local_f8.x;
      auVar15._4_4_ = local_f8.y;
      divps(auVar15,local_e0);
      return;
    }
  }
  pIStack_108 = (Il2CppClass *)0x40840eb;
  il2cpp_runtime_helper_022b2c90(uVar13);
  pUStack_120 = __this_01;
  pUStack_118 = unaff_R12;
  pUStack_110 = pUVar12;
  pIStack_108 = __this_00;
  if (g_data_057ac3c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
    g_data_057ac3c2 = '\x01';
  }
  if (__this_02 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if (*(char *)((long)&(__this_02->fields)._useDragThreshold_k__BackingField + 1) != '\0') {
      return;
    }
    pUVar2 = pUVar8[2].klass;
    if (g_data_057ac3c3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057ac3c3 = '\x01';
    }
    local_150.x = 0.0;
    local_150.y = 0.0;
    pUVar12 = (UnityEngine_RectTransform_o *)pUVar8[1].fields.m_CachedPtr;
    if (pUVar12 != (UnityEngine_RectTransform_o *)0x0) {
      UVar17 = UnityEngine_RectTransform__get_rect(pUVar12,(MethodInfo *)0x0);
      local_138._8_4_ = in_XMM1_Dc;
      local_138._0_8_ = UVar17.fields._8_8_;
      local_138._12_4_ = in_XMM1_Dd;
      pUVar12 = (UnityEngine_RectTransform_o *)pUVar8[1].fields.m_CachedPtr;
      local_148 = (__this_02->fields)._position_k__BackingField.fields;
      uStack_140 = 0;
      method_00 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(__this_02,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar12,(UnityEngine_Vector2_o)local_148,(UnityEngine_Camera_o *)method_00,
                 (UnityEngine_Vector2_o *)&local_150,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_RectTransform_c *)0x0) {
        auVar16._8_8_ = 0;
        auVar16._0_4_ = local_150.x;
        auVar16._4_4_ = local_150.y;
        auVar14 = divps(auVar16,local_138);
        normalizedPosition_00.fields.x = auVar14._0_4_ + 1.0;
        normalizedPosition_00.fields.y = auVar14._4_4_ + 1.0;
        normalizedPosition_00.fields.z = 0.0;
        arg0 = RuntimeSceneGizmo_SceneGizmoController__Raycast
                         ((RuntimeSceneGizmo_SceneGizmoController_o *)pUVar2,normalizedPosition_00,method_00);
        if (arg0 != -1) {
          if (pUVar8[3].monitor == (UnityEngine_Events_UnityEvent_T0__o *)0x0) goto label_0408420f;
          UnityEngine_Events_UnityEvent_Int32Enum___Invoke(pUVar8[3].monitor,arg0,MethodInfo_Void_Invoke);
        }
        return;
      }
    }
  }
label_0408420f:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$Start
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__Start (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x4083d50

void RuntimeSceneGizmo_SceneGizmoRenderer__Start
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar2;
  UnityEngine_Object_o *x;
  long *plVar3;
  UnityEngine_Component_c *x_00;
  UnityEngine_Component_c *pUVar4;
  void *pvVar5;
  Il2CppClass *__this_00;
  UnityEngine_RectTransform_c *__this_01;
  char cVar6;
  bool_conflict bVar7;
  int32_t arg0;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  UnityEngine_Camera_o *cam_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_EventSystems_PointerEventData_o *__this_02;
  UnityEngine_EventSystems_PointerEventData_o *__this_03;
  long lVar9;
  UnityEngine_Component_o *__this_04;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_RectTransform_o *unaff_R12;
  undefined1 auVar13 [16];
  undefined8 uVar12;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o normalizedPosition;
  UnityEngine_Vector3_o normalizedPosition_00;
  UnityEngine_Rect_o UVar16;
  UnityEngine_Vector2_Fields UStack_138;
  UnityEngine_Vector2_Fields UStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [16];
  UnityEngine_EventSystems_PointerEventData_o *pUStack_108;
  UnityEngine_RectTransform_o *pUStack_100;
  UnityEngine_RectTransform_o *pUStack_f8;
  Il2CppClass *pIStack_f0;
  UnityEngine_Vector2_Fields UStack_e0;
  UnityEngine_Vector2_Fields UStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  UnityEngine_EventSystems_PointerEventData_o *pUStack_b0;
  RuntimeSceneGizmo_SceneGizmoController_o *pRStack_a8;
  UnityEngine_Vector2_Fields UStack_98;
  UnityEngine_Vector2_Fields UStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  UnityEngine_Component_c *pUStack_68;
  
  if (g_data_057ac3bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3bf = '\x01';
  }
  pUVar1 = (__this->fields).m_referenceTransform;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pUVar1 = (__this->fields).m_referenceTransform;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    cVar6 = (*(pUVar1->klass->vtable)._0_Equals.methodPtr)(pUVar1,0,(pUVar1->klass->vtable)._0_Equals.method);
    if (cVar6 != '\0') {
      return;
    }
    pRVar2 = (__this->fields).controller;
    if (pRVar2 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      RuntimeSceneGizmo_SceneGizmoController__set_ReferenceTransform
                (pRVar2,(__this->fields).m_referenceTransform,method_01);
      return;
    }
  }
  lVar9 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3c0 = '\x01';
  }
  x = *(UnityEngine_Object_o **)(lVar9 + 0x30);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  plVar3 = *(long **)(lVar9 + 0x30);
  __this_04 = (UnityEngine_Component_o *)0x0;
  if (plVar3 != (long *)0x0) {
    cVar6 = (**(code **)(*plVar3 + 0x138))(plVar3,0,*(undefined8 *)(*plVar3 + 0x140));
    if (cVar6 != '\0') {
      return;
    }
    __this_04 = *(UnityEngine_Component_o **)(lVar9 + 0x30);
    if ((__this_04 != (UnityEngine_Component_o *)0x0) &&
       (pUVar8 = UnityEngine_Component__get_gameObject(__this_04,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar8,1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3c1 = '\x01';
  }
  x_00 = __this_04[2].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pUVar4 = __this_04[2].klass;
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (pUVar4 != (UnityEngine_Component_c *)0x0) {
    pvVar5 = (pUVar4->_1).image;
    __this_02 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    cVar6 = (**(code **)((long)pvVar5 + 0x138))(pUVar4,0,*(undefined8 *)((long)pvVar5 + 0x140));
    if (cVar6 != '\0') {
      return;
    }
    cam = (UnityEngine_EventSystems_PointerEventData_o *)__this_04[2].klass;
    if (cam != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      __this_02 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (Il2CppClass *)(cam->fields)._pointerDrag_k__BackingField;
  if (__this_00 == (Il2CppClass *)0x0) {
    return;
  }
  pRVar2 = ((Il2CppType *)&(cam->fields)._lastPress_k__BackingField)->data;
  pUStack_68 = x_00;
  if (g_data_057ac3c3 == '\0') {
    pRStack_a8 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083f84;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ac3c3 = '\x01';
  }
  UStack_98.x = 0.0;
  UStack_98.y = 0.0;
  pUVar11 = (UnityEngine_RectTransform_o *)(cam->fields).m_PointerPress;
  pUVar10 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
    pRStack_a8 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fa8;
    UVar16 = UnityEngine_RectTransform__get_rect(pUVar11,(MethodInfo *)0x0);
    auStack_80._8_4_ = in_XMM1_Dc;
    auStack_80._0_8_ = UVar16.fields._8_8_;
    auStack_80._12_4_ = in_XMM1_Dd;
    unaff_R12 = (UnityEngine_RectTransform_o *)(cam->fields).m_PointerPress;
    UStack_90.x = (float)(__this_00->_2).native_size;
    UStack_90.y = (float)(__this_00->_2).static_fields_size;
    uStack_88 = 0;
    pRStack_a8 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fc9;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_enterEventCamera
                    ((UnityEngine_EventSystems_PointerEventData_o *)__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pRStack_a8 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fe4;
      il2cpp_runtime_helper_02337ed0();
    }
    pRStack_a8 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083ffb;
    __this_02 = cam;
    pUVar10 = unaff_R12;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (unaff_R12,(UnityEngine_Vector2_o)UStack_90,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)&UStack_98,(MethodInfo *)0x0);
    if (pRVar2 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      auVar13._8_8_ = 0;
      auVar13._0_4_ = UStack_98.x;
      auVar13._4_4_ = UStack_98.y;
      auVar13 = divps(auVar13,auStack_80);
      normalizedPosition.fields.x = auVar13._0_4_ + 1.0;
      normalizedPosition.fields.y = auVar13._4_4_ + 1.0;
      pRStack_a8 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x408401d;
      normalizedPosition.fields.z = 0.0;
      RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
                (pRVar2,normalizedPosition,(MethodInfo *)__this_02);
      return;
    }
  }
  pRStack_a8 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x408402e;
  uVar12 = il2cpp_runtime_helper_022b2c90();
  __this_03 = __this_02;
  pUStack_b0 = cam;
  pRStack_a8 = pRVar2;
  if (g_data_057ac3c3 == '\0') {
    pIStack_f0 = (Il2CppClass *)0x4084052;
    uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ac3c3 = '\x01';
  }
  UStack_e0.x = 0.0;
  UStack_e0.y = 0.0;
  pUVar11 = (UnityEngine_RectTransform_o *)pUVar10[1].fields.m_CachedPtr;
  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
    __this_03 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    pIStack_f0 = (Il2CppClass *)0x4084072;
    UVar16 = UnityEngine_RectTransform__get_rect(pUVar11,(MethodInfo *)0x0);
    uVar12 = UVar16.fields._0_8_;
    auStack_c8._8_4_ = in_XMM1_Dc;
    auStack_c8._0_8_ = UVar16.fields._8_8_;
    auStack_c8._12_4_ = in_XMM1_Dd;
    if (__this_02 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      pUVar11 = (UnityEngine_RectTransform_o *)pUVar10[1].fields.m_CachedPtr;
      UStack_d8 = (__this_02->fields)._position_k__BackingField.fields;
      uStack_d0 = 0;
      pIStack_f0 = (Il2CppClass *)0x4084097;
      cam_00 = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(__this_02,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        pIStack_f0 = (Il2CppClass *)0x40840b2;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStack_f0 = (Il2CppClass *)0x40840c9;
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar11,(UnityEngine_Vector2_o)UStack_d8,cam_00,(UnityEngine_Vector2_o *)&UStack_e0,
                 (MethodInfo *)0x0);
      auVar14._8_8_ = 0;
      auVar14._0_4_ = UStack_e0.x;
      auVar14._4_4_ = UStack_e0.y;
      divps(auVar14,auStack_c8);
      return;
    }
  }
  pIStack_f0 = (Il2CppClass *)0x40840eb;
  il2cpp_runtime_helper_022b2c90(uVar12);
  pUStack_108 = __this_02;
  pUStack_100 = unaff_R12;
  pUStack_f8 = pUVar10;
  pIStack_f0 = __this_00;
  if (g_data_057ac3c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
    g_data_057ac3c2 = '\x01';
  }
  if (__this_03 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if (*(char *)((long)&(__this_03->fields)._useDragThreshold_k__BackingField + 1) != '\0') {
      return;
    }
    __this_01 = pUVar11[2].klass;
    if (g_data_057ac3c3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057ac3c3 = '\x01';
    }
    UStack_138.x = 0.0;
    UStack_138.y = 0.0;
    pUVar10 = (UnityEngine_RectTransform_o *)pUVar11[1].fields.m_CachedPtr;
    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
      UVar16 = UnityEngine_RectTransform__get_rect(pUVar10,(MethodInfo *)0x0);
      auStack_120._8_4_ = in_XMM1_Dc;
      auStack_120._0_8_ = UVar16.fields._8_8_;
      auStack_120._12_4_ = in_XMM1_Dd;
      pUVar10 = (UnityEngine_RectTransform_o *)pUVar11[1].fields.m_CachedPtr;
      UStack_130 = (__this_03->fields)._position_k__BackingField.fields;
      uStack_128 = 0;
      method_00 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(__this_03,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar10,(UnityEngine_Vector2_o)UStack_130,(UnityEngine_Camera_o *)method_00,
                 (UnityEngine_Vector2_o *)&UStack_138,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_RectTransform_c *)0x0) {
        auVar15._8_8_ = 0;
        auVar15._0_4_ = UStack_138.x;
        auVar15._4_4_ = UStack_138.y;
        auVar13 = divps(auVar15,auStack_120);
        normalizedPosition_00.fields.x = auVar13._0_4_ + 1.0;
        normalizedPosition_00.fields.y = auVar13._4_4_ + 1.0;
        normalizedPosition_00.fields.z = 0.0;
        arg0 = RuntimeSceneGizmo_SceneGizmoController__Raycast
                         ((RuntimeSceneGizmo_SceneGizmoController_o *)__this_01,normalizedPosition_00,
                          method_00);
        if (arg0 != -1) {
          if (pUVar11[3].monitor == (UnityEngine_Events_UnityEvent_T0__o *)0x0) goto label_0408420f;
          UnityEngine_Events_UnityEvent_Int32Enum___Invoke(pUVar11[3].monitor,arg0,MethodInfo_Void_Invoke);
        }
        return;
      }
    }
  }
label_0408420f:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnEnable
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnEnable (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x4083df0

void RuntimeSceneGizmo_SceneGizmoRenderer__OnEnable
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar1;
  UnityEngine_Renderer_array *pUVar2;
  Il2CppClass *pIVar3;
  UnityEngine_EventSystems_PointerEventData_o *__this_00;
  UnityEngine_RectTransform_c *__this_01;
  char cVar4;
  bool_conflict bVar5;
  int32_t arg0;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Renderer_array *cam;
  UnityEngine_Camera_o *cam_00;
  MethodInfo *method_00;
  UnityEngine_Renderer_array *__this_02;
  UnityEngine_Renderer_array *pUVar7;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_03;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_RectTransform_o *__this_04;
  UnityEngine_RectTransform_o *unaff_R12;
  undefined1 auVar10 [16];
  undefined8 uVar9;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o normalizedPosition;
  UnityEngine_Vector3_o normalizedPosition_00;
  UnityEngine_Rect_o UVar13;
  UnityEngine_Vector2_Fields UStack_120;
  UnityEngine_Vector2_Fields UStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  UnityEngine_Renderer_array *pUStack_f0;
  UnityEngine_RectTransform_o *pUStack_e8;
  UnityEngine_RectTransform_o *pUStack_e0;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_d8;
  UnityEngine_Vector2_Fields UStack_c8;
  UnityEngine_Vector2_Fields UStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  UnityEngine_Renderer_array *pUStack_98;
  RuntimeSceneGizmo_SceneGizmoController_o *pRStack_90;
  UnityEngine_Vector2_Fields UStack_80;
  UnityEngine_Vector2_Fields UStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  UnityEngine_Renderer_array *pUStack_50;
  
  if (g_data_057ac3c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3c0 = '\x01';
  }
  pRVar1 = (__this->fields).controller;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pRVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pRVar1 = (__this->fields).controller;
  __this_03 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x0;
  if (pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    cVar4 = (*(pRVar1->klass->vtable)._0_Equals.methodPtr)(pRVar1,0,(pRVar1->klass->vtable)._0_Equals.method);
    if (cVar4 != '\0') {
      return;
    }
    __this_03 = (__this->fields).controller;
    if ((__this_03 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) &&
       (pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
       , pUVar6 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar6,1,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3c1 = '\x01';
  }
  pUVar7 = (__this_03->fields).gizmoComponents;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (UnityEngine_Renderer_array *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  pUVar2 = (__this_03->fields).gizmoComponents;
  cam = (UnityEngine_Renderer_array *)0x0;
  if (pUVar2 != (UnityEngine_Renderer_array *)0x0) {
    pIVar3 = (pUVar2->obj).klass;
    __this_02 = (UnityEngine_Renderer_array *)0x0;
    cVar4 = (*pIVar3->vtable[0].methodPtr)(pUVar2,0,pIVar3->vtable[0].method);
    if (cVar4 != '\0') {
      return;
    }
    cam = (__this_03->fields).gizmoComponents;
    if (cam != (UnityEngine_Renderer_array *)0x0) {
      __this_02 = (UnityEngine_Renderer_array *)0x0;
      pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar6,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = ((_union_14 *)(cam->m_Items + 4))->genericMethod;
  if (__this_00 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  pRVar1 = (RuntimeSceneGizmo_SceneGizmoController_o *)cam->m_Items[2];
  pUStack_50 = pUVar7;
  if (g_data_057ac3c3 == '\0') {
    pRStack_90 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083f84;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ac3c3 = '\x01';
  }
  UStack_80.x = 0.0;
  UStack_80.y = 0.0;
  pUVar8 = (UnityEngine_RectTransform_o *)0x0;
  if ((UnityEngine_RectTransform_o *)cam->m_Items[1] != (UnityEngine_RectTransform_o *)0x0) {
    pRStack_90 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fa8;
    UVar13 = UnityEngine_RectTransform__get_rect
                       ((UnityEngine_RectTransform_o *)cam->m_Items[1],(MethodInfo *)0x0);
    auStack_68._8_4_ = in_XMM1_Dc;
    auStack_68._0_8_ = UVar13.fields._8_8_;
    auStack_68._12_4_ = in_XMM1_Dd;
    unaff_R12 = (UnityEngine_RectTransform_o *)cam->m_Items[1];
    UStack_78 = (__this_00->fields)._position_k__BackingField.fields;
    uStack_70 = 0;
    pRStack_90 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fc9;
    cam = (UnityEngine_Renderer_array *)
          UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pRStack_90 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fe4;
      il2cpp_runtime_helper_02337ed0();
    }
    pRStack_90 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083ffb;
    __this_02 = cam;
    pUVar8 = unaff_R12;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (unaff_R12,(UnityEngine_Vector2_o)UStack_78,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)&UStack_80,(MethodInfo *)0x0);
    if (pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      auVar10._8_8_ = 0;
      auVar10._0_4_ = UStack_80.x;
      auVar10._4_4_ = UStack_80.y;
      auVar10 = divps(auVar10,auStack_68);
      normalizedPosition.fields.x = auVar10._0_4_ + 1.0;
      normalizedPosition.fields.y = auVar10._4_4_ + 1.0;
      pRStack_90 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x408401d;
      normalizedPosition.fields.z = 0.0;
      RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
                (pRVar1,normalizedPosition,(MethodInfo *)__this_02);
      return;
    }
  }
  pRStack_90 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x408402e;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  pUVar7 = __this_02;
  pUStack_98 = cam;
  pRStack_90 = pRVar1;
  if (g_data_057ac3c3 == '\0') {
    pUStack_d8 = (UnityEngine_EventSystems_PointerEventData_o *)0x4084052;
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ac3c3 = '\x01';
  }
  UStack_c8.x = 0.0;
  UStack_c8.y = 0.0;
  __this_04 = (UnityEngine_RectTransform_o *)pUVar8[1].fields.m_CachedPtr;
  if (__this_04 != (UnityEngine_RectTransform_o *)0x0) {
    pUVar7 = (UnityEngine_Renderer_array *)0x0;
    pUStack_d8 = (UnityEngine_EventSystems_PointerEventData_o *)0x4084072;
    UVar13 = UnityEngine_RectTransform__get_rect(__this_04,(MethodInfo *)0x0);
    uVar9 = UVar13.fields._0_8_;
    auStack_b0._8_4_ = in_XMM1_Dc;
    auStack_b0._0_8_ = UVar13.fields._8_8_;
    auStack_b0._12_4_ = in_XMM1_Dd;
    if (__this_02 != (UnityEngine_Renderer_array *)0x0) {
      pUVar8 = (UnityEngine_RectTransform_o *)pUVar8[1].fields.m_CachedPtr;
      UStack_c0 = ((UnityEngine_Vector2_o *)((long)__this_02->m_Items + 0xe4))->fields;
      uStack_b8 = 0;
      pUStack_d8 = (UnityEngine_EventSystems_PointerEventData_o *)0x4084097;
      cam_00 = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera
                         ((UnityEngine_EventSystems_PointerEventData_o *)__this_02,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        pUStack_d8 = (UnityEngine_EventSystems_PointerEventData_o *)0x40840b2;
        il2cpp_runtime_helper_02337ed0();
      }
      pUStack_d8 = (UnityEngine_EventSystems_PointerEventData_o *)0x40840c9;
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar8,(UnityEngine_Vector2_o)UStack_c0,cam_00,(UnityEngine_Vector2_o *)&UStack_c8,
                 (MethodInfo *)0x0);
      auVar11._8_8_ = 0;
      auVar11._0_4_ = UStack_c8.x;
      auVar11._4_4_ = UStack_c8.y;
      divps(auVar11,auStack_b0);
      return;
    }
  }
  pUStack_d8 = (UnityEngine_EventSystems_PointerEventData_o *)0x40840eb;
  il2cpp_runtime_helper_022b2c90(uVar9);
  pUStack_f0 = __this_02;
  pUStack_e8 = unaff_R12;
  pUStack_e0 = pUVar8;
  pUStack_d8 = __this_00;
  if (g_data_057ac3c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
    g_data_057ac3c2 = '\x01';
  }
  if (pUVar7 != (UnityEngine_Renderer_array *)0x0) {
    if (*(undefined1 *)((long)pUVar7->m_Items + 0x125) != '\0') {
      return;
    }
    __this_01 = __this_04[2].klass;
    if (g_data_057ac3c3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057ac3c3 = '\x01';
    }
    UStack_120.x = 0.0;
    UStack_120.y = 0.0;
    pUVar8 = (UnityEngine_RectTransform_o *)__this_04[1].fields.m_CachedPtr;
    if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
      UVar13 = UnityEngine_RectTransform__get_rect(pUVar8,(MethodInfo *)0x0);
      auStack_108._8_4_ = in_XMM1_Dc;
      auStack_108._0_8_ = UVar13.fields._8_8_;
      auStack_108._12_4_ = in_XMM1_Dd;
      pUVar8 = (UnityEngine_RectTransform_o *)__this_04[1].fields.m_CachedPtr;
      UStack_118 = ((UnityEngine_Vector2_o *)((long)pUVar7->m_Items + 0xe4))->fields;
      uStack_110 = 0;
      method_00 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_enterEventCamera
                            ((UnityEngine_EventSystems_PointerEventData_o *)pUVar7,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar8,(UnityEngine_Vector2_o)UStack_118,(UnityEngine_Camera_o *)method_00,
                 (UnityEngine_Vector2_o *)&UStack_120,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_RectTransform_c *)0x0) {
        auVar12._8_8_ = 0;
        auVar12._0_4_ = UStack_120.x;
        auVar12._4_4_ = UStack_120.y;
        auVar10 = divps(auVar12,auStack_108);
        normalizedPosition_00.fields.x = auVar10._0_4_ + 1.0;
        normalizedPosition_00.fields.y = auVar10._4_4_ + 1.0;
        normalizedPosition_00.fields.z = 0.0;
        arg0 = RuntimeSceneGizmo_SceneGizmoController__Raycast
                         ((RuntimeSceneGizmo_SceneGizmoController_o *)__this_01,normalizedPosition_00,
                          method_00);
        if (arg0 != -1) {
          if (__this_04[3].monitor == (UnityEngine_Events_UnityEvent_T0__o *)0x0) goto label_0408420f;
          UnityEngine_Events_UnityEvent_Int32Enum___Invoke(__this_04[3].monitor,arg0,MethodInfo_Void_Invoke);
        }
        return;
      }
    }
  }
label_0408420f:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnDisable
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnDisable (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x4083ea0

void RuntimeSceneGizmo_SceneGizmoRenderer__OnDisable
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *x;
  RuntimeSceneGizmo_SceneGizmoController_o *pRVar1;
  UnityEngine_EventSystems_PointerEventData_o *__this_00;
  UnityEngine_RectTransform_c *__this_01;
  char cVar2;
  bool_conflict bVar3;
  int32_t arg0;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_EventSystems_PointerEventData_o *cam;
  UnityEngine_Camera_o *cam_00;
  MethodInfo *method_00;
  UnityEngine_EventSystems_PointerEventData_o *__this_03;
  UnityEngine_EventSystems_PointerEventData_o *__this_04;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_RectTransform_o *unaff_R12;
  undefined1 auVar7 [16];
  undefined8 uVar6;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o normalizedPosition;
  UnityEngine_Vector3_o normalizedPosition_00;
  UnityEngine_Rect_o UVar10;
  UnityEngine_Vector2_Fields UStack_108;
  UnityEngine_Vector2_Fields UStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  UnityEngine_EventSystems_PointerEventData_o *pUStack_d8;
  UnityEngine_RectTransform_o *pUStack_d0;
  UnityEngine_RectTransform_o *pUStack_c8;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_c0;
  UnityEngine_Vector2_Fields UStack_b0;
  UnityEngine_Vector2_Fields UStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  UnityEngine_EventSystems_PointerEventData_o *pUStack_80;
  RuntimeSceneGizmo_SceneGizmoController_o *pRStack_78;
  UnityEngine_Vector2_Fields UStack_68;
  UnityEngine_Vector2_Fields UStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  RuntimeSceneGizmo_SceneGizmoController_o *pRStack_38;
  
  if (g_data_057ac3c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac3c1 = '\x01';
  }
  x = (__this->fields).controller;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pRVar1 = (__this->fields).controller;
  cam = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
  if (pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    __this_03 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    cVar2 = (*(pRVar1->klass->vtable)._0_Equals.methodPtr)(pRVar1,0,(pRVar1->klass->vtable)._0_Equals.method);
    if (cVar2 != '\0') {
      return;
    }
    cam = (UnityEngine_EventSystems_PointerEventData_o *)(__this->fields).controller;
    if (cam != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      __this_03 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
      __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_02,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (UnityEngine_EventSystems_PointerEventData_o *)(cam->fields)._pointerDrag_k__BackingField;
  if (__this_00 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  pRVar1 = (RuntimeSceneGizmo_SceneGizmoController_o *)(cam->fields)._lastPress_k__BackingField;
  pRStack_38 = x;
  if (g_data_057ac3c3 == '\0') {
    pRStack_78 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083f84;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ac3c3 = '\x01';
  }
  UStack_68.x = 0.0;
  UStack_68.y = 0.0;
  pUVar5 = (UnityEngine_RectTransform_o *)(cam->fields).m_PointerPress;
  pUVar4 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
    pRStack_78 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fa8;
    UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    auStack_50._8_4_ = in_XMM1_Dc;
    auStack_50._0_8_ = UVar10.fields._8_8_;
    auStack_50._12_4_ = in_XMM1_Dd;
    unaff_R12 = (UnityEngine_RectTransform_o *)(cam->fields).m_PointerPress;
    UStack_60 = (__this_00->fields)._position_k__BackingField.fields;
    uStack_58 = 0;
    pRStack_78 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fc9;
    cam = (UnityEngine_EventSystems_PointerEventData_o *)
          UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pRStack_78 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fe4;
      il2cpp_runtime_helper_02337ed0();
    }
    pRStack_78 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083ffb;
    __this_03 = cam;
    pUVar4 = unaff_R12;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (unaff_R12,(UnityEngine_Vector2_o)UStack_60,(UnityEngine_Camera_o *)cam,
               (UnityEngine_Vector2_o *)&UStack_68,(MethodInfo *)0x0);
    if (pRVar1 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      auVar7._8_8_ = 0;
      auVar7._0_4_ = UStack_68.x;
      auVar7._4_4_ = UStack_68.y;
      auVar7 = divps(auVar7,auStack_50);
      normalizedPosition.fields.x = auVar7._0_4_ + 1.0;
      normalizedPosition.fields.y = auVar7._4_4_ + 1.0;
      pRStack_78 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x408401d;
      normalizedPosition.fields.z = 0.0;
      RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
                (pRVar1,normalizedPosition,(MethodInfo *)__this_03);
      return;
    }
  }
  pRStack_78 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x408402e;
  uVar6 = il2cpp_runtime_helper_022b2c90();
  __this_04 = __this_03;
  pUStack_80 = cam;
  pRStack_78 = pRVar1;
  if (g_data_057ac3c3 == '\0') {
    pUStack_c0 = (UnityEngine_EventSystems_PointerEventData_o *)0x4084052;
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ac3c3 = '\x01';
  }
  UStack_b0.x = 0.0;
  UStack_b0.y = 0.0;
  pUVar5 = (UnityEngine_RectTransform_o *)pUVar4[1].fields.m_CachedPtr;
  if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
    __this_04 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    pUStack_c0 = (UnityEngine_EventSystems_PointerEventData_o *)0x4084072;
    UVar10 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
    uVar6 = UVar10.fields._0_8_;
    auStack_98._8_4_ = in_XMM1_Dc;
    auStack_98._0_8_ = UVar10.fields._8_8_;
    auStack_98._12_4_ = in_XMM1_Dd;
    if (__this_03 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      pUVar5 = (UnityEngine_RectTransform_o *)pUVar4[1].fields.m_CachedPtr;
      UStack_a8 = (__this_03->fields)._position_k__BackingField.fields;
      uStack_a0 = 0;
      pUStack_c0 = (UnityEngine_EventSystems_PointerEventData_o *)0x4084097;
      cam_00 = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(__this_03,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        pUStack_c0 = (UnityEngine_EventSystems_PointerEventData_o *)0x40840b2;
        il2cpp_runtime_helper_02337ed0();
      }
      pUStack_c0 = (UnityEngine_EventSystems_PointerEventData_o *)0x40840c9;
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar5,(UnityEngine_Vector2_o)UStack_a8,cam_00,(UnityEngine_Vector2_o *)&UStack_b0,
                 (MethodInfo *)0x0);
      auVar8._8_8_ = 0;
      auVar8._0_4_ = UStack_b0.x;
      auVar8._4_4_ = UStack_b0.y;
      divps(auVar8,auStack_98);
      return;
    }
  }
  pUStack_c0 = (UnityEngine_EventSystems_PointerEventData_o *)0x40840eb;
  il2cpp_runtime_helper_022b2c90(uVar6);
  pUStack_d8 = __this_03;
  pUStack_d0 = unaff_R12;
  pUStack_c8 = pUVar4;
  pUStack_c0 = __this_00;
  if (g_data_057ac3c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
    g_data_057ac3c2 = '\x01';
  }
  if (__this_04 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if (*(char *)((long)&(__this_04->fields)._useDragThreshold_k__BackingField + 1) != '\0') {
      return;
    }
    __this_01 = pUVar5[2].klass;
    if (g_data_057ac3c3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057ac3c3 = '\x01';
    }
    UStack_108.x = 0.0;
    UStack_108.y = 0.0;
    pUVar4 = (UnityEngine_RectTransform_o *)pUVar5[1].fields.m_CachedPtr;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar10 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      auStack_f0._8_4_ = in_XMM1_Dc;
      auStack_f0._0_8_ = UVar10.fields._8_8_;
      auStack_f0._12_4_ = in_XMM1_Dd;
      pUVar4 = (UnityEngine_RectTransform_o *)pUVar5[1].fields.m_CachedPtr;
      UStack_100 = (__this_04->fields)._position_k__BackingField.fields;
      uStack_f8 = 0;
      method_00 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(__this_04,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar4,(UnityEngine_Vector2_o)UStack_100,(UnityEngine_Camera_o *)method_00,
                 (UnityEngine_Vector2_o *)&UStack_108,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_RectTransform_c *)0x0) {
        auVar9._8_8_ = 0;
        auVar9._0_4_ = UStack_108.x;
        auVar9._4_4_ = UStack_108.y;
        auVar7 = divps(auVar9,auStack_f0);
        normalizedPosition_00.fields.x = auVar7._0_4_ + 1.0;
        normalizedPosition_00.fields.y = auVar7._4_4_ + 1.0;
        normalizedPosition_00.fields.z = 0.0;
        arg0 = RuntimeSceneGizmo_SceneGizmoController__Raycast
                         ((RuntimeSceneGizmo_SceneGizmoController_o *)__this_01,normalizedPosition_00,
                          method_00);
        if (arg0 != -1) {
          if (pUVar5[3].monitor == (UnityEngine_Events_UnityEvent_T0__o *)0x0) goto label_0408420f;
          UnityEngine_Events_UnityEvent_Int32Enum___Invoke(pUVar5[3].monitor,arg0,MethodInfo_Void_Invoke);
        }
        return;
      }
    }
  }
label_0408420f:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$Update
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__Update (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x4083f50

void RuntimeSceneGizmo_SceneGizmoRenderer__Update
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_EventSystems_PointerEventData_o *__this_00;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_01;
  UnityEngine_RectTransform_c *__this_02;
  int32_t arg0;
  UnityEngine_Camera_o *cam;
  MethodInfo *method_00;
  UnityEngine_EventSystems_PointerEventData_o *__this_03;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *unaff_R12;
  undefined1 auVar4 [16];
  undefined8 uVar3;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o normalizedPosition;
  UnityEngine_Vector3_o normalizedPosition_00;
  UnityEngine_Rect_o UVar7;
  UnityEngine_Vector2_Fields UStack_f0;
  UnityEngine_Vector2_Fields UStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  UnityEngine_EventSystems_PointerEventData_o *pUStack_c0;
  UnityEngine_RectTransform_o *pUStack_b8;
  UnityEngine_RectTransform_o *pUStack_b0;
  UnityEngine_EventSystems_PointerEventData_o *pUStack_a8;
  UnityEngine_Vector2_Fields UStack_98;
  UnityEngine_Vector2_Fields UStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  UnityEngine_EventSystems_PointerEventData_o *pUStack_68;
  RuntimeSceneGizmo_SceneGizmoController_o *pRStack_60;
  UnityEngine_Vector2_Fields UStack_50;
  UnityEngine_Vector2_Fields UStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  
  __this_00 = (__this->fields).hoveringPointer;
  if (__this_00 == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  __this_01 = (__this->fields).controller;
  if (g_data_057ac3c3 == '\0') {
    pRStack_60 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083f84;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ac3c3 = '\x01';
  }
  UStack_50.x = 0.0;
  UStack_50.y = 0.0;
  pUVar2 = (__this->fields).imageHolderTR;
  pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    pRStack_60 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fa8;
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    auStack_38._8_4_ = in_XMM1_Dc;
    auStack_38._0_8_ = UVar7.fields._8_8_;
    auStack_38._12_4_ = in_XMM1_Dd;
    unaff_R12 = (__this->fields).imageHolderTR;
    UStack_48 = (__this_00->fields)._position_k__BackingField.fields;
    uStack_40 = 0;
    pRStack_60 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fc9;
    __this = (RuntimeSceneGizmo_SceneGizmoRenderer_o *)
             UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pRStack_60 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083fe4;
      il2cpp_runtime_helper_02337ed0();
    }
    pRStack_60 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x4083ffb;
    method = (MethodInfo *)__this;
    pUVar1 = unaff_R12;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (unaff_R12,(UnityEngine_Vector2_o)UStack_48,(UnityEngine_Camera_o *)__this,
               (UnityEngine_Vector2_o *)&UStack_50,(MethodInfo *)0x0);
    if (__this_01 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
      auVar4._8_8_ = 0;
      auVar4._0_4_ = UStack_50.x;
      auVar4._4_4_ = UStack_50.y;
      auVar4 = divps(auVar4,auStack_38);
      normalizedPosition.fields.x = auVar4._0_4_ + 1.0;
      normalizedPosition.fields.y = auVar4._4_4_ + 1.0;
      pRStack_60 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x408401d;
      normalizedPosition.fields.z = 0.0;
      RuntimeSceneGizmo_SceneGizmoController__OnPointerHover(__this_01,normalizedPosition,method);
      return;
    }
  }
  pRStack_60 = (RuntimeSceneGizmo_SceneGizmoController_o *)0x408402e;
  uVar3 = il2cpp_runtime_helper_022b2c90();
  __this_03 = (UnityEngine_EventSystems_PointerEventData_o *)method;
  pUStack_68 = (UnityEngine_EventSystems_PointerEventData_o *)__this;
  pRStack_60 = __this_01;
  if (g_data_057ac3c3 == '\0') {
    pUStack_a8 = (UnityEngine_EventSystems_PointerEventData_o *)0x4084052;
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ac3c3 = '\x01';
  }
  UStack_98.x = 0.0;
  UStack_98.y = 0.0;
  pUVar2 = (UnityEngine_RectTransform_o *)pUVar1[1].fields.m_CachedPtr;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    __this_03 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    pUStack_a8 = (UnityEngine_EventSystems_PointerEventData_o *)0x4084072;
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    uVar3 = UVar7.fields._0_8_;
    auStack_80._8_4_ = in_XMM1_Dc;
    auStack_80._0_8_ = UVar7.fields._8_8_;
    auStack_80._12_4_ = in_XMM1_Dd;
    if ((UnityEngine_EventSystems_PointerEventData_o *)method !=
        (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      pUVar2 = (UnityEngine_RectTransform_o *)pUVar1[1].fields.m_CachedPtr;
      UStack_90 = (((UnityEngine_EventSystems_PointerEventData_o *)method)->fields)._position_k__BackingField.
                  fields;
      uStack_88 = 0;
      pUStack_a8 = (UnityEngine_EventSystems_PointerEventData_o *)0x4084097;
      cam = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera
                      ((UnityEngine_EventSystems_PointerEventData_o *)method,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        pUStack_a8 = (UnityEngine_EventSystems_PointerEventData_o *)0x40840b2;
        il2cpp_runtime_helper_02337ed0();
      }
      pUStack_a8 = (UnityEngine_EventSystems_PointerEventData_o *)0x40840c9;
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar2,(UnityEngine_Vector2_o)UStack_90,cam,(UnityEngine_Vector2_o *)&UStack_98,
                 (MethodInfo *)0x0);
      auVar5._8_8_ = 0;
      auVar5._0_4_ = UStack_98.x;
      auVar5._4_4_ = UStack_98.y;
      divps(auVar5,auStack_80);
      return;
    }
  }
  pUStack_a8 = (UnityEngine_EventSystems_PointerEventData_o *)0x40840eb;
  il2cpp_runtime_helper_022b2c90(uVar3);
  pUStack_c0 = (UnityEngine_EventSystems_PointerEventData_o *)method;
  pUStack_b8 = unaff_R12;
  pUStack_b0 = pUVar1;
  pUStack_a8 = __this_00;
  if (g_data_057ac3c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
    g_data_057ac3c2 = '\x01';
  }
  if (__this_03 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if (*(char *)((long)&(__this_03->fields)._useDragThreshold_k__BackingField + 1) != '\0') {
      return;
    }
    __this_02 = pUVar2[2].klass;
    if (g_data_057ac3c3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057ac3c3 = '\x01';
    }
    UStack_f0.x = 0.0;
    UStack_f0.y = 0.0;
    pUVar1 = (UnityEngine_RectTransform_o *)pUVar2[1].fields.m_CachedPtr;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar7 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      auStack_d8._8_4_ = in_XMM1_Dc;
      auStack_d8._0_8_ = UVar7.fields._8_8_;
      auStack_d8._12_4_ = in_XMM1_Dd;
      pUVar1 = (UnityEngine_RectTransform_o *)pUVar2[1].fields.m_CachedPtr;
      UStack_e8 = (__this_03->fields)._position_k__BackingField.fields;
      uStack_e0 = 0;
      method_00 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(__this_03,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar1,(UnityEngine_Vector2_o)UStack_e8,(UnityEngine_Camera_o *)method_00,
                 (UnityEngine_Vector2_o *)&UStack_f0,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_RectTransform_c *)0x0) {
        auVar6._8_8_ = 0;
        auVar6._0_4_ = UStack_f0.x;
        auVar6._4_4_ = UStack_f0.y;
        auVar4 = divps(auVar6,auStack_d8);
        normalizedPosition_00.fields.x = auVar4._0_4_ + 1.0;
        normalizedPosition_00.fields.y = auVar4._4_4_ + 1.0;
        normalizedPosition_00.fields.z = 0.0;
        arg0 = RuntimeSceneGizmo_SceneGizmoController__Raycast
                         ((RuntimeSceneGizmo_SceneGizmoController_o *)__this_02,normalizedPosition_00,
                          method_00);
        if (arg0 != -1) {
          if (pUVar2[3].monitor == (UnityEngine_Events_UnityEvent_T0__o *)0x0) goto label_0408420f;
          UnityEngine_Events_UnityEvent_Int32Enum___Invoke(pUVar2[3].monitor,arg0,MethodInfo_Void_Invoke);
        }
        return;
      }
    }
  }
label_0408420f:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerClick
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerClick (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x40840f0

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerClick
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  RuntimeSceneGizmo_ComponentClickedEvent_o *__this_01;
  int32_t arg0;
  MethodInfo *method_00;
  undefined1 auVar2 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o normalizedPosition;
  UnityEngine_Rect_o UVar3;
  UnityEngine_Vector2_Fields UStack_50;
  UnityEngine_Vector2_Fields UStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  
  if (g_data_057ac3c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
    g_data_057ac3c2 = '\x01';
  }
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if (*(char *)((long)&(eventData->fields)._useDragThreshold_k__BackingField + 1) != '\0') {
      return;
    }
    __this_00 = (__this->fields).controller;
    if (g_data_057ac3c3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057ac3c3 = '\x01';
    }
    UStack_50.x = 0.0;
    UStack_50.y = 0.0;
    pUVar1 = (__this->fields).imageHolderTR;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      auStack_38._8_4_ = in_XMM1_Dc;
      auStack_38._0_8_ = UVar3.fields._8_8_;
      auStack_38._12_4_ = in_XMM1_Dd;
      pUVar1 = (__this->fields).imageHolderTR;
      UStack_48 = (eventData->fields)._position_k__BackingField.fields;
      uStack_40 = 0;
      method_00 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(eventData,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar1,(UnityEngine_Vector2_o)UStack_48,(UnityEngine_Camera_o *)method_00,
                 (UnityEngine_Vector2_o *)&UStack_50,(MethodInfo *)0x0);
      if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
        auVar2._8_8_ = 0;
        auVar2._0_4_ = UStack_50.x;
        auVar2._4_4_ = UStack_50.y;
        auVar2 = divps(auVar2,auStack_38);
        normalizedPosition.fields.x = auVar2._0_4_ + 1.0;
        normalizedPosition.fields.y = auVar2._4_4_ + 1.0;
        normalizedPosition.fields.z = 0.0;
        arg0 = RuntimeSceneGizmo_SceneGizmoController__Raycast(__this_00,normalizedPosition,method_00);
        if (arg0 != -1) {
          __this_01 = (__this->fields).m_onComponentClicked;
          if (__this_01 == (RuntimeSceneGizmo_ComponentClickedEvent_o *)0x0) goto label_0408420f;
          UnityEngine_Events_UnityEvent_Int32Enum___Invoke
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,arg0,MethodInfo_Void_Invoke);
        }
        return;
      }
    }
  }
label_0408420f:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnDrag
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnDrag (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x4084220

void RuntimeSceneGizmo_SceneGizmoRenderer__OnDrag
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$GetNormalizedPointerPosition
// il2cpp: UnityEngine_Vector3_o RuntimeSceneGizmo_SceneGizmoRenderer__GetNormalizedPointerPosition (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x4084030

UnityEngine_Vector3_o
RuntimeSceneGizmo_SceneGizmoRenderer__GetNormalizedPointerPosition
          (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
          UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_RectTransform_c *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  int32_t arg0;
  UnityEngine_Camera_o *cam;
  MethodInfo *method_00;
  UnityEngine_EventSystems_PointerEventData_o *__this_01;
  UnityEngine_RectTransform_o *pUVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float in_XMM1_Da;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o normalizedPosition;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Vector2_Fields UStack_98;
  UnityEngine_Vector2_Fields UStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  UnityEngine_EventSystems_PointerEventData_o *pUStack_68;
  UnityEngine_Vector2_Fields UStack_40;
  UnityEngine_Vector2_Fields UStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [16];
  undefined8 extraout_XMM0_Qa;
  
  __this_01 = eventData;
  if (g_data_057ac3c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057ac3c3 = '\x01';
  }
  UStack_40.x = 0.0;
  UStack_40.y = 0.0;
  pUVar2 = (__this->fields).imageHolderTR;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    __this_01 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    in_XMM1_Da = UVar9.fields.m_Width;
    auStack_28._8_4_ = in_XMM1_Dc;
    auStack_28._0_8_ = UVar9.fields._8_8_;
    auStack_28._12_4_ = in_XMM1_Dd;
    if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      pUVar2 = (__this->fields).imageHolderTR;
      UStack_38 = (eventData->fields)._position_k__BackingField.fields;
      uStack_30 = 0;
      cam = UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(eventData,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar2,(UnityEngine_Vector2_o)UStack_38,cam,(UnityEngine_Vector2_o *)&UStack_40,
                 (MethodInfo *)0x0);
      auVar4._8_8_ = 0;
      auVar4._0_4_ = UStack_40.x;
      auVar4._4_4_ = UStack_40.y;
      auVar5 = divps(auVar4,auStack_28);
      UVar6.fields.x = auVar5._0_4_ + 1.0;
      UVar6.fields.y = auVar5._4_4_ + 1.0;
      UVar6.fields.z = 0.0;
      return (UnityEngine_Vector3_o)UVar6.fields;
    }
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  pUStack_68 = eventData;
  if (g_data_057ac3c2 == '\0') {
    uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
    g_data_057ac3c2 = '\x01';
  }
  if (__this_01 != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if (*(char *)((long)&(__this_01->fields)._useDragThreshold_k__BackingField + 1) != '\0')
    goto label_04084203;
    __this_00 = pUVar2[2].klass;
    if (g_data_057ac3c3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057ac3c3 = '\x01';
    }
    UStack_98.x = 0.0;
    UStack_98.y = 0.0;
    pUVar1 = (UnityEngine_RectTransform_o *)pUVar2[1].fields.m_CachedPtr;
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar9 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      in_XMM1_Da = UVar9.fields.m_Width;
      auStack_80._8_4_ = in_XMM1_Dc;
      auStack_80._0_8_ = UVar9.fields._8_8_;
      auStack_80._12_4_ = in_XMM1_Dd;
      pUVar1 = (UnityEngine_RectTransform_o *)pUVar2[1].fields.m_CachedPtr;
      UStack_90 = (__this_01->fields)._position_k__BackingField.fields;
      uStack_88 = 0;
      method_00 = (MethodInfo *)
                  UnityEngine_EventSystems_PointerEventData__get_enterEventCamera(__this_01,(MethodInfo *)0x0)
      ;
      if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                (pUVar1,(UnityEngine_Vector2_o)UStack_90,(UnityEngine_Camera_o *)method_00,
                 (UnityEngine_Vector2_o *)&UStack_98,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_RectTransform_c *)0x0) {
        auVar5._8_8_ = 0;
        auVar5._0_4_ = UStack_98.x;
        auVar5._4_4_ = UStack_98.y;
        auVar5 = divps(auVar5,auStack_80);
        normalizedPosition.fields.x = auVar5._0_4_ + 1.0;
        normalizedPosition.fields.y = auVar5._4_4_ + 1.0;
        normalizedPosition.fields.z = 0.0;
        in_XMM1_Da = 0.0;
        arg0 = RuntimeSceneGizmo_SceneGizmoController__Raycast
                         ((RuntimeSceneGizmo_SceneGizmoController_o *)__this_00,normalizedPosition,method_00);
        uVar3 = extraout_XMM0_Qa;
        if (arg0 != -1) {
          if (pUVar2[3].monitor == (UnityEngine_Events_UnityEvent_T0__o *)0x0) goto label_0408420f;
          UnityEngine_Events_UnityEvent_Int32Enum___Invoke(pUVar2[3].monitor,arg0,MethodInfo_Void_Invoke);
          uVar3 = extraout_XMM0_Qa_00;
        }
label_04084203:
        UVar7.fields.z = in_XMM1_Da;
        UVar7.fields.x = (float)(int)uVar3;
        UVar7.fields.y = (float)(int)((ulong)uVar3 >> 0x20);
        return (UnityEngine_Vector3_o)UVar7.fields;
      }
    }
  }
label_0408420f:
  UVar8.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  UVar8.fields.z = in_XMM1_Da;
  return (UnityEngine_Vector3_o)UVar8.fields;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerEnter
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerEnter (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x4084230

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerEnter
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if ((char)(__this->fields).highlightHoveredComponents != '\0') {
    (__this->fields).hoveringPointer = eventData;
    il2cpp_runtime_helper_022b4080(&(__this->fields).hoveringPointer);
    return;
  }
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$OnPointerExit
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerExit (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x4084250

void RuntimeSceneGizmo_SceneGizmoRenderer__OnPointerExit
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_EventSystems_PointerEventData_o **ppUVar1;
  RuntimeSceneGizmo_SceneGizmoController_o *__this_00;
  
  if ((__this->fields).hoveringPointer == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields).controller;
  if (__this_00 != (RuntimeSceneGizmo_SceneGizmoController_o *)0x0) {
    ppUVar1 = &(__this->fields).hoveringPointer;
    RuntimeSceneGizmo_SceneGizmoController__OnPointerHover
              (__this_00,(UnityEngine_Vector3_o)ZEXT812(0xc1200000c1200000),(MethodInfo *)eventData);
    *ppUVar1 = (UnityEngine_EventSystems_PointerEventData_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar1,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&(__this_00->fields).labels = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// RuntimeSceneGizmo.SceneGizmoRenderer$$.ctor
// il2cpp: void RuntimeSceneGizmo_SceneGizmoRenderer___ctor (RuntimeSceneGizmo_SceneGizmoRenderer_o* __this, const MethodInfo* method);
// 0x4084290

void RuntimeSceneGizmo_SceneGizmoRenderer___ctor
               (RuntimeSceneGizmo_SceneGizmoRenderer_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields).highlightHoveredComponents = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



// Type: Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScrollbarVisibility.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$Setup
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, UnityEngine_UI_ScrollRect_o* scroll, const MethodInfo* method);
// 0x3b87080

void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,
               UnityEngine_UI_ScrollRect_o *scroll,MethodInfo *method)

{
  (__this->fields)._scroll = scroll;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._scroll);
  Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility(__this,(MethodInfo *)scroll);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__LateUpdate (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x3b87350

bool_conflict
Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__LateUpdate
          (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined3 uVar4;
  float fVar5;
  bool_conflict bVar6;
  uint uVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Scrollbar_o *unaff_RBX;
  undefined8 unaff_RBP;
  MethodInfo *method_00;
  UnityEngine_UI_Scrollbar_o *__this_01;
  UnityEngine_UI_ScrollRect_o **unaff_R12;
  undefined8 *unaff_R13;
  ulong unaff_R14;
  UnityEngine_UI_Scrollbar_o *unaff_R15;
  bool bVar9;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar10;
  
  do {
    __this_01 = (UnityEngine_UI_Scrollbar_o *)__this;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(UnityEngine_UI_Scrollbar_o **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(UnityEngine_UI_ScrollRect_o ***)((long)register0x00000020 + -0x28) = unaff_R12;
    *(UnityEngine_UI_Scrollbar_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    if (g_data_057a9e83 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b870c6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponent_ScrollRect);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b870d2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9e83 = '\x01';
    }
    pUVar1 = ((Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_Fields *)&__this_01->fields)->_scroll;
    unaff_R13 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b870f6;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R12 = &((Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_Fields *)&__this_01->fields)->
                 _scroll;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87106;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8711c;
      pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_ScrollRect_GetComponent_ScrollRect);
      *(Il2CppObject **)&(__this_01->fields).m_EnableCalled = pIVar8;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8712b;
      il2cpp_runtime_helper_022b4080(unaff_R12);
    }
    unaff_RBX = (UnityEngine_UI_Scrollbar_o *)*unaff_R12;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87141;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87150;
    __this = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)unaff_RBX;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return 0;
    }
    if (*unaff_R12 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      unaff_RBX = *(UnityEngine_UI_Scrollbar_o **)&((*unaff_R12)->fields).m_ScrollSensitivity;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8717b;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R14 = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8718a;
      __this = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)unaff_RBX;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return 0;
      }
      if (*unaff_R12 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        unaff_RBX = (UnityEngine_UI_Scrollbar_o *)((*unaff_R12)->fields).m_Content;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b871b5;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R14 = 0;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b871c4;
        __this = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)unaff_RBX;
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          return 0;
        }
        if (*unaff_R12 != (UnityEngine_UI_ScrollRect_o *)0x0) {
          unaff_RBX = ((*unaff_R12)->fields).m_HorizontalScrollbar;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b871ef;
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b871fe;
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            return 0;
          }
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8720e;
          __this = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)__this_01;
          uVar7 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent
                            ((Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)__this_01,method_00);
          unaff_R14 = (ulong)uVar7;
          lVar2 = *(long *)&(__this_01->fields).m_EnableCalled;
          if ((lVar2 != 0) &&
             (__this = *(Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o **)(lVar2 + 0x20),
             (UnityEngine_UI_Scrollbar_o *)__this != (UnityEngine_UI_Scrollbar_o *)0x0)) {
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87232;
            UVar10 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)__this,(MethodInfo *)0x0);
            pUVar1 = *unaff_R12;
            if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
              auVar3._8_4_ = in_XMM1_Dc;
              auVar3._0_8_ = UVar10.fields._8_8_;
              auVar3._12_4_ = in_XMM1_Dd;
              *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar3;
              __this = *(Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o **)
                        &(pUVar1->fields).m_ScrollSensitivity;
              if ((UnityEngine_UI_Scrollbar_o *)__this != (UnityEngine_UI_Scrollbar_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87257;
                UVar10 = UnityEngine_RectTransform__get_rect
                                   ((UnityEngine_RectTransform_o *)__this,(MethodInfo *)0x0);
                if ((*unaff_R12 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                   (__this = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)
                             ((*unaff_R12)->fields).m_HorizontalScrollbar,
                   (UnityEngine_UI_Scrollbar_o *)__this != (UnityEngine_UI_Scrollbar_o *)0x0)) {
                  *(float *)((long)register0x00000020 + -0x48) =
                       *(float *)((long)register0x00000020 + -0x44) - UVar10.fields.m_Height;
                  *(float *)((long)register0x00000020 + -0x44) = *(float *)((long)register0x00000020 + -0x44);
                  *(undefined4 *)((long)register0x00000020 + -0x40) =
                       *(undefined4 *)((long)register0x00000020 + -0x40);
                  *(undefined4 *)((long)register0x00000020 + -0x3c) =
                       *(undefined4 *)((long)register0x00000020 + -0x3c);
                  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8728c;
                  __this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  uVar4 = (undefined3)(uVar7 >> 8);
                  if (*(char *)((long)&(__this_01->fields).m_Navigation.fields.m_SelectOnUp + 2) != '\0') {
                    bVar9 = -2.0 < *(float *)((long)register0x00000020 + -0x48);
                    if (*(char *)((long)&(__this_01->fields).m_Navigation.fields.m_SelectOnUp + 3) == '\0') {
                      bVar9 = 2.0 < *(float *)((long)register0x00000020 + -0x48);
                    }
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b872c8;
                    bVar6 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility
                                      ((Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)__this_01,
                                       __this_00,(uint)bVar9,(MethodInfo *)(ulong)bVar9);
                    return CONCAT31(uVar4,(byte)uVar7 | (byte)bVar6);
                  }
                  fVar5 = *(float *)((long)register0x00000020 + -0x48);
                  *(bool *)((long)&(__this_01->fields).m_Navigation.fields.m_SelectOnUp + 3) = 0.5 < fVar5;
                  *(undefined1 *)((long)&(__this_01->fields).m_Navigation.fields.m_SelectOnUp + 2) = 1;
                  *(undefined2 *)((long)&(__this_01->fields).m_Navigation.fields.m_SelectOnUp + 4) = 0;
                  *(undefined4 *)&(__this_01->fields).m_Navigation.fields.m_SelectOnDown = 0;
                  unaff_RBX = (UnityEngine_UI_Scrollbar_o *)0x0;
                  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8730e;
                    bVar6 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                    bVar9 = (byte)((byte)bVar6 ^ 0.5 < fVar5) == 1;
                    if (bVar9) {
                      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87330;
                      UnityEngine_GameObject__SetActive
                                (__this_00,(uint)(0.5 < *(float *)((long)register0x00000020 + -0x48)),
                                 (MethodInfo *)0x0);
                    }
                    return CONCAT31(uVar4,(byte)uVar7 | bVar9);
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8734d;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R15 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$UpdateVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x3b870a0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility
          (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined3 uVar4;
  float fVar5;
  bool_conflict bVar6;
  uint uVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Scrollbar_o *unaff_RBX;
  undefined8 unaff_RBP;
  MethodInfo *method_00;
  UnityEngine_UI_Scrollbar_o *__this_01;
  UnityEngine_UI_ScrollRect_o **unaff_R12;
  undefined8 *unaff_R13;
  ulong unaff_R14;
  UnityEngine_UI_Scrollbar_o *unaff_R15;
  bool bVar9;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar10;
  
  do {
    __this_01 = (UnityEngine_UI_Scrollbar_o *)__this;
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(UnityEngine_UI_Scrollbar_o **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(UnityEngine_UI_ScrollRect_o ***)((long)register0x00000020 + -0x28) = unaff_R12;
    *(UnityEngine_UI_Scrollbar_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    if (g_data_057a9e83 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b870c6;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponent_ScrollRect);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b870d2;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9e83 = '\x01';
    }
    pUVar1 = ((Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_Fields *)&__this_01->fields)->_scroll;
    unaff_R13 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b870f6;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R12 = &((Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_Fields *)&__this_01->fields)->
                 _scroll;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87106;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8711c;
      pIVar8 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_ScrollRect_GetComponent_ScrollRect);
      *(Il2CppObject **)&(__this_01->fields).m_EnableCalled = pIVar8;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8712b;
      il2cpp_runtime_helper_022b4080(unaff_R12);
    }
    unaff_RBX = (UnityEngine_UI_Scrollbar_o *)*unaff_R12;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87141;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87150;
    __this = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)unaff_RBX;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return 0;
    }
    if (*unaff_R12 != (UnityEngine_UI_ScrollRect_o *)0x0) {
      unaff_RBX = *(UnityEngine_UI_Scrollbar_o **)&((*unaff_R12)->fields).m_ScrollSensitivity;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8717b;
        il2cpp_runtime_helper_02337ed0();
      }
      unaff_R14 = 0;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8718a;
      __this = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)unaff_RBX;
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        return 0;
      }
      if (*unaff_R12 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        unaff_RBX = (UnityEngine_UI_Scrollbar_o *)((*unaff_R12)->fields).m_Content;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b871b5;
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R14 = 0;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b871c4;
        __this = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)unaff_RBX;
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          return 0;
        }
        if (*unaff_R12 != (UnityEngine_UI_ScrollRect_o *)0x0) {
          unaff_RBX = ((*unaff_R12)->fields).m_HorizontalScrollbar;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b871ef;
            il2cpp_runtime_helper_02337ed0();
          }
          method_00 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b871fe;
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            return 0;
          }
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8720e;
          __this = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)__this_01;
          uVar7 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent
                            ((Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)__this_01,method_00);
          unaff_R14 = (ulong)uVar7;
          lVar2 = *(long *)&(__this_01->fields).m_EnableCalled;
          if ((lVar2 != 0) &&
             (__this = *(Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o **)(lVar2 + 0x20),
             (UnityEngine_UI_Scrollbar_o *)__this != (UnityEngine_UI_Scrollbar_o *)0x0)) {
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87232;
            UVar10 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)__this,(MethodInfo *)0x0);
            pUVar1 = *unaff_R12;
            if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
              auVar3._8_4_ = in_XMM1_Dc;
              auVar3._0_8_ = UVar10.fields._8_8_;
              auVar3._12_4_ = in_XMM1_Dd;
              *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar3;
              __this = *(Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o **)
                        &(pUVar1->fields).m_ScrollSensitivity;
              if ((UnityEngine_UI_Scrollbar_o *)__this != (UnityEngine_UI_Scrollbar_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87257;
                UVar10 = UnityEngine_RectTransform__get_rect
                                   ((UnityEngine_RectTransform_o *)__this,(MethodInfo *)0x0);
                if ((*unaff_R12 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                   (__this = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)
                             ((*unaff_R12)->fields).m_HorizontalScrollbar,
                   (UnityEngine_UI_Scrollbar_o *)__this != (UnityEngine_UI_Scrollbar_o *)0x0)) {
                  *(float *)((long)register0x00000020 + -0x48) =
                       *(float *)((long)register0x00000020 + -0x44) - UVar10.fields.m_Height;
                  *(float *)((long)register0x00000020 + -0x44) = *(float *)((long)register0x00000020 + -0x44);
                  *(undefined4 *)((long)register0x00000020 + -0x40) =
                       *(undefined4 *)((long)register0x00000020 + -0x40);
                  *(undefined4 *)((long)register0x00000020 + -0x3c) =
                       *(undefined4 *)((long)register0x00000020 + -0x3c);
                  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8728c;
                  __this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  uVar4 = (undefined3)(uVar7 >> 8);
                  if (*(char *)((long)&(__this_01->fields).m_Navigation.fields.m_SelectOnUp + 2) != '\0') {
                    bVar9 = -2.0 < *(float *)((long)register0x00000020 + -0x48);
                    if (*(char *)((long)&(__this_01->fields).m_Navigation.fields.m_SelectOnUp + 3) == '\0') {
                      bVar9 = 2.0 < *(float *)((long)register0x00000020 + -0x48);
                    }
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b872c8;
                    bVar6 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility
                                      ((Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)__this_01,
                                       __this_00,(uint)bVar9,(MethodInfo *)(ulong)bVar9);
                    return CONCAT31(uVar4,(byte)uVar7 | (byte)bVar6);
                  }
                  fVar5 = *(float *)((long)register0x00000020 + -0x48);
                  *(bool *)((long)&(__this_01->fields).m_Navigation.fields.m_SelectOnUp + 3) = 0.5 < fVar5;
                  *(undefined1 *)((long)&(__this_01->fields).m_Navigation.fields.m_SelectOnUp + 2) = 1;
                  *(undefined2 *)((long)&(__this_01->fields).m_Navigation.fields.m_SelectOnUp + 4) = 0;
                  *(undefined4 *)&(__this_01->fields).m_Navigation.fields.m_SelectOnDown = 0;
                  unaff_RBX = (UnityEngine_UI_Scrollbar_o *)0x0;
                  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8730e;
                    bVar6 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                    bVar9 = (byte)((byte)bVar6 ^ 0.5 < fVar5) == 1;
                    if (bVar9) {
                      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b87330;
                      UnityEngine_GameObject__SetActive
                                (__this_00,(uint)(0.5 < *(float *)((long)register0x00000020 + -0x48)),
                                 (MethodInfo *)0x0);
                    }
                    return CONCAT31(uVar4,(byte)uVar7 | bVar9);
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8734d;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R15 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$FitAutoHeightToContent
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x3b87360

bool_conflict
Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__FitAutoHeightToContent
          (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o **ppGVar1;
  byte bVar2;
  ushort uVar3;
  UnityEngine_UI_ScrollRect_o *pUVar4;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar5;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar6;
  byte bVar7;
  bool_conflict bVar8;
  int iVar9;
  bool_conflict bVar10;
  Gilzoide_FlexUi_FlexLayout_o *pGVar11;
  ulong uVar12;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  float fVar13;
  MethodInfo_37E2D20 *__this_00;
  Gilzoide_FlexUi_FlexLayout_o *__this_01;
  Gilzoide_FlexUi_FlexLayout_o *pGVar14;
  uint value_00;
  bool bVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Rect_o UVar18;
  undefined1 auVar19 [12];
  undefined8 uStack_98;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_90;
  undefined8 uStack_88;
  undefined2 local_3a;
  float local_38;
  float fStack_34;
  
  if (g_data_057a9e84 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9e84 = '\x01';
  }
  pGVar11 = (__this->fields)._flex;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppGVar1 = &(__this->fields)._flex;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pGVar11 = (Gilzoide_FlexUi_FlexLayout_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_FlexLayout_GetComponent_FlexLayout);
    (__this->fields)._flex = pGVar11;
    il2cpp_runtime_helper_022b4080(ppGVar1);
  }
  pGVar11 = *ppGVar1;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (MethodInfo_37E2D20 *)0x0;
  __this_01 = pGVar11;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return 0;
  }
  if ((char)(__this->fields)._autoHeight.fields.hasValue == '\0') {
    if (*ppGVar1 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      uVar12 = (ulong)((*ppGVar1)->fields)._height.fields >> 0x20;
      local_3a = 0;
      System_Nullable_bool____ctor
                ((System_Nullable_bool__o)&local_3a,(uint)(uVar12 == 0 || uVar12 == 3),MethodInfo_Nullable_1_Boolean);
      *(undefined2 *)&(__this->fields)._autoHeight.fields.hasValue = local_3a;
      goto label_03b87499;
    }
  }
  else {
label_03b87499:
    __this_01 = (Gilzoide_FlexUi_FlexLayout_o *)&(__this->fields)._autoHeight;
    __this_00 = MethodInfo_Boolean_get_Value;
    bVar8 = System_Nullable_bool___get_Value((System_Nullable_bool__o)__this_01,MethodInfo_Boolean_get_Value);
    if ((char)bVar8 == '\0') {
      return 0;
    }
    pUVar4 = (__this->fields)._scroll;
    if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (__this_01 = (Gilzoide_FlexUi_FlexLayout_o *)(pUVar4->fields).m_Content,
       __this_01 != (Gilzoide_FlexUi_FlexLayout_o *)0x0)) {
      __this_00 = (MethodInfo_37E2D20 *)0x0;
      UVar18 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0)
      ;
      fVar17 = UVar18.fields.m_Height;
      if (fVar17 <= 0.0) {
        return 0;
      }
      pGVar14 = *ppGVar1;
      pGVar11 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      if (pGVar14 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        GVar5 = (pGVar14->fields)._height.fields;
        GVar6 = (pGVar14->fields)._paddingTop.fields;
        fVar16 = 0.0;
        if ((ulong)GVar6 >> 0x20 == 1) {
          fVar13 = GVar6.Value;
        }
        else {
          fVar13 = 0.0;
        }
        GVar6 = (pGVar14->fields)._paddingBottom.fields;
        if ((ulong)GVar6 >> 0x20 == 1) {
          fVar16 = GVar6.Value;
        }
        fVar16 = fVar17 + fVar13 + fVar16;
        if (((ulong)GVar5 >> 0x20 == 1) && (ABS(GVar5.Value - fVar16) <= 0.5)) {
          return 0;
        }
        if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
          local_38 = fVar16;
          fStack_34 = fVar17;
          il2cpp_runtime_helper_02337ed0();
          fVar16 = local_38;
        }
        value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar16,(MethodInfo *)0x0);
        Gilzoide_FlexUi_FlexLayout__set_Height(pGVar14,value,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (__this_01 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    bVar8 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
    bVar15 = (byte)((byte)bVar8 ^ (byte)__this_00) == 1;
    if (bVar15) {
      UnityEngine_GameObject__SetActive
                ((UnityEngine_GameObject_o *)__this_01,(uint)__this_00 & 0xff,(MethodInfo *)0x0);
    }
    return (uint)bVar15;
  }
  auVar19 = il2cpp_runtime_helper_022b2c90();
  uStack_98 = auVar19._0_8_;
  uStack_88 = 0;
  bVar7 = auVar19[8];
  pGVar14 = __this_01;
  pGStack_90 = pGVar11;
  if (g_data_057a9e85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    pGVar14 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e85 = '\x01';
  }
  bVar2 = *(byte *)((long)&(__this_01->fields)._positionLeft.fields.Unit + 3);
  value_00 = auVar19._8_4_ & 0xff;
  if (value_00 == bVar2) {
    *(undefined2 *)&(__this_01->fields)._positionTop.fields.Value = 0;
    (__this_01->fields)._positionTop.fields.Unit = 0;
    if (__this_00 == (MethodInfo_37E2D20 *)0x0) {
label_03b87740:
      il2cpp_runtime_helper_022b2c90();
      bVar8 = (bool_conflict)((ulong)pGVar14 >> 0x20);
      if ((ulong)pGVar14 >> 0x20 != 1) {
        return bVar8;
      }
      return bVar8;
    }
    __this = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)0x0;
    bVar8 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    if ((byte)((byte)bVar8 ^ bVar2 != 0) != 1) {
      return 0;
    }
    UnityEngine_GameObject__SetActive
              ((UnityEngine_GameObject_o *)__this_00,(uint)(bVar2 != 0),(MethodInfo *)0x0);
  }
  else {
    uVar3 = *(ushort *)&(__this_01->fields)._positionTop.fields.Value;
    if (((char)uVar3 != '\0') && (uVar3 < 0x100 != (bool)bVar7)) {
      iVar9 = (__this_01->fields)._positionTop.fields.Unit + 1;
      (__this_01->fields)._positionTop.fields.Unit = iVar9;
      bVar8 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      if (iVar9 < 2) {
        return bVar8;
      }
      *(byte *)((long)&(__this_01->fields)._positionLeft.fields.Unit + 3) = bVar7;
      *(undefined2 *)&(__this_01->fields)._positionTop.fields.Value = 0;
      (__this_01->fields)._positionTop.fields.Unit = 0;
      if (__this_00 != (MethodInfo_37E2D20 *)0x0) {
        bVar10 = UnityEngine_GameObject__get_activeSelf
                           ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
        if ((byte)((byte)bVar10 ^ bVar7) == 1) {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_00,value_00,(MethodInfo *)0x0);
          return bVar8;
        }
        return bVar8;
      }
      goto label_03b87740;
    }
    uStack_98 = uStack_98 & 0xffffffffffff;
    System_Nullable_bool____ctor((System_Nullable_bool__o)((long)&uStack_98 + 6),value_00,MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)&(__this_01->fields)._positionTop.fields.Value = uStack_98._6_2_;
    (__this_01->fields)._positionTop.fields.Unit = 1;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$UpdateStableVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, UnityEngine_GameObject_o* scrollbar, bool desired, const MethodInfo* method);
// 0x3b87600

bool_conflict
Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateStableVisibility
          (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,
          UnityEngine_GameObject_o *scrollbar,bool_conflict desired,MethodInfo *method)

{
  ushort uVar1;
  bool_conflict bVar2;
  int iVar3;
  bool_conflict bVar4;
  ulong in_RAX;
  Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *pGVar5;
  uint value;
  byte bVar6;
  undefined8 unaff_R15;
  undefined8 uStack_38;
  
  pGVar5 = __this;
  uStack_38 = in_RAX;
  if (g_data_057a9e85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    pGVar5 = (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)0x0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e85 = '\x01';
  }
  bVar6 = *(byte *)((long)&(__this->fields)._autoHeight.fields.hasValue + 3);
  value = desired & 0xff;
  if (value == bVar6) {
    *(undefined2 *)&(__this->fields)._autoHeight.fields.value = 0;
    (__this->fields)._hasVisibleState = 0;
    if (scrollbar == (UnityEngine_GameObject_o *)0x0) {
label_03b87740:
      il2cpp_runtime_helper_022b2c90();
      bVar2 = (bool_conflict)((ulong)pGVar5 >> 0x20);
      if ((ulong)pGVar5 >> 0x20 == 1) {
        return bVar2;
      }
      return bVar2;
    }
    unaff_R15 = 0;
    bVar2 = UnityEngine_GameObject__get_activeSelf(scrollbar,(MethodInfo *)0x0);
    if ((byte)((byte)bVar2 ^ bVar6 != 0) != 1) {
      return 0;
    }
    UnityEngine_GameObject__SetActive(scrollbar,(uint)(bVar6 != 0),(MethodInfo *)0x0);
  }
  else {
    uVar1 = (ushort)(__this->fields)._autoHeight.fields.value;
    if (((char)uVar1 != '\0') && (bVar6 = (byte)desired, uVar1 < 0x100 != (bool)bVar6)) {
      iVar3 = (__this->fields)._hasVisibleState + 1;
      (__this->fields)._hasVisibleState = iVar3;
      bVar2 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
      if (iVar3 < 2) {
        return bVar2;
      }
      *(byte *)((long)&(__this->fields)._autoHeight.fields.hasValue + 3) = bVar6;
      *(undefined2 *)&(__this->fields)._autoHeight.fields.value = 0;
      (__this->fields)._hasVisibleState = 0;
      if (scrollbar != (UnityEngine_GameObject_o *)0x0) {
        bVar4 = UnityEngine_GameObject__get_activeSelf(scrollbar,(MethodInfo *)0x0);
        if ((byte)((byte)bVar4 ^ bVar6) != 1) {
          return bVar2;
        }
        UnityEngine_GameObject__SetActive(scrollbar,value,(MethodInfo *)0x0);
        return bVar2;
      }
      goto label_03b87740;
    }
    uStack_38 = uStack_38 & 0xffffffffffff;
    System_Nullable_bool____ctor((System_Nullable_bool__o)((long)&uStack_38 + 6),value,MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)&(__this->fields)._autoHeight.fields.value = uStack_38._6_2_;
    (__this->fields)._hasVisibleState = 1;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$ApplyVisibility
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__ApplyVisibility (UnityEngine_GameObject_o* scrollbar, bool visible, const MethodInfo* method);
// 0x3b875c0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__ApplyVisibility
          (UnityEngine_GameObject_o *scrollbar,bool_conflict visible,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  bool_conflict bVar4;
  int iVar5;
  bool_conflict bVar6;
  undefined4 in_register_00000034;
  UnityEngine_GameObject_o *__this;
  UnityEngine_GameObject_o *pUVar7;
  uint value;
  undefined8 unaff_R15;
  bool bVar8;
  undefined1 auVar9 [12];
  undefined8 uStack_50;
  
  __this = (UnityEngine_GameObject_o *)CONCAT44(in_register_00000034,visible);
  if (scrollbar != (UnityEngine_GameObject_o *)0x0) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(scrollbar,(MethodInfo *)0x0);
    bVar8 = (byte)((byte)bVar4 ^ (byte)visible) == 1;
    if (bVar8) {
      UnityEngine_GameObject__SetActive(scrollbar,visible & 0xff,(MethodInfo *)0x0);
    }
    return (uint)bVar8;
  }
  auVar9 = il2cpp_runtime_helper_022b2c90();
  uStack_50 = auVar9._0_8_;
  bVar3 = auVar9[8];
  pUVar7 = scrollbar;
  if (g_data_057a9e85 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    pUVar7 = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e85 = '\x01';
  }
  bVar1 = *(byte *)((long)&scrollbar[2].klass + 3);
  value = auVar9._8_4_ & 0xff;
  if (value == bVar1) {
    *(undefined2 *)((long)&scrollbar[2].klass + 4) = 0;
    *(undefined4 *)&scrollbar[2].monitor = 0;
    if (__this == (UnityEngine_GameObject_o *)0x0) {
label_03b87740:
      il2cpp_runtime_helper_022b2c90();
      bVar4 = (bool_conflict)((ulong)pUVar7 >> 0x20);
      if ((ulong)pUVar7 >> 0x20 == 1) {
        return bVar4;
      }
      return bVar4;
    }
    unaff_R15 = 0;
    bVar4 = UnityEngine_GameObject__get_activeSelf(__this,(MethodInfo *)0x0);
    if ((byte)((byte)bVar4 ^ bVar1 != 0) != 1) {
      return 0;
    }
    UnityEngine_GameObject__SetActive(__this,(uint)(bVar1 != 0),(MethodInfo *)0x0);
  }
  else {
    uVar2 = *(ushort *)((long)&scrollbar[2].klass + 4);
    if (((char)uVar2 != '\0') && (uVar2 < 0x100 != (bool)bVar3)) {
      iVar5 = *(int *)&scrollbar[2].monitor + 1;
      *(int *)&scrollbar[2].monitor = iVar5;
      bVar4 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
      if (iVar5 < 2) {
        return bVar4;
      }
      *(byte *)((long)&scrollbar[2].klass + 3) = bVar3;
      *(undefined2 *)((long)&scrollbar[2].klass + 4) = 0;
      *(undefined4 *)&scrollbar[2].monitor = 0;
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        bVar6 = UnityEngine_GameObject__get_activeSelf(__this,(MethodInfo *)0x0);
        if ((byte)((byte)bVar6 ^ bVar3) != 1) {
          return bVar4;
        }
        UnityEngine_GameObject__SetActive(__this,value,(MethodInfo *)0x0);
        return bVar4;
      }
      goto label_03b87740;
    }
    uStack_50 = uStack_50 & 0xffffffffffff;
    System_Nullable_bool____ctor((System_Nullable_bool__o)((long)&uStack_50 + 6),value,MethodInfo_Nullable_1_Boolean);
    *(undefined2 *)((long)&scrollbar[2].klass + 4) = uStack_50._6_2_;
    *(undefined4 *)&scrollbar[2].monitor = 1;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$Point
// il2cpp: float Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Point (Gilzoide_FlexUi_Yoga_YGValue_o value, const MethodInfo* method);
// 0x3b87750

float Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Point
                (Gilzoide_FlexUi_Yoga_YGValue_o value,MethodInfo *method)

{
  if ((ulong)value.fields >> 0x20 != 1) {
    return 0.0;
  }
  return value.fields.Value;
}


// Gisketch.Aottg2UI.Building.GisketchScrollbarVisibility$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility___ctor (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o* __this, const MethodInfo* method);
// 0x3b87770

void Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility___ctor
               (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



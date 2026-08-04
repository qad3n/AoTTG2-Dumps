// Type: UI.TooltipPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/TooltipPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/TooltipPopup.cs
// --------------------------------

// UI.TooltipPopup$$get_AnimationTime
// il2cpp: float UI_TooltipPopup__get_AnimationTime (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x4355fb0

float UI_TooltipPopup__get_AnimationTime(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  return 0.15;
}


// UI.TooltipPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_TooltipPopup__get_PopupAnimationType (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x4355fc0

int32_t UI_TooltipPopup__get_PopupAnimationType(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.TooltipPopup$$get_TextColor
// il2cpp: System_String_o* UI_TooltipPopup__get_TextColor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x4355fd0

System_String_o * UI_TooltipPopup__get_TextColor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae161 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TooltipTextColor");
    g_data_057ae161 = '\x01';
  }
  return "TooltipTextColor";
}


// UI.TooltipPopup$$get_BackgroundColor
// il2cpp: System_String_o* UI_TooltipPopup__get_BackgroundColor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x4356000

System_String_o * UI_TooltipPopup__get_BackgroundColor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae162 == '\0') {
    il2cpp_runtime_helper_023445d0(&"TooltipBackgroundColor");
    g_data_057ae162 = '\x01';
  }
  return "TooltipBackgroundColor";
}


// UI.TooltipPopup$$Setup
// il2cpp: void UI_TooltipPopup__Setup (UI_TooltipPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4356030

void UI_TooltipPopup__Setup(UI_TooltipPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  UnityEngine_Vector2_o UVar3;
  uint uVar4;
  bool_conflict bVar5;
  System_String_Fields SVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  System_String_Fields panel;
  Il2CppObject *pIVar10;
  System_String_o *item;
  undefined8 uVar11;
  System_String_o *unaff_RBX;
  undefined1 *puVar12;
  System_String_o **unaff_RBP;
  System_String_Fields *pSVar13;
  System_String_Fields __this_00;
  System_String_Fields unaff_R14;
  float fVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Color_o UVar17;
  undefined1 auStack_38 [8];
  
  puVar12 = auStack_38;
  if (g_data_057ae163 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"DefaultSetting");
    il2cpp_runtime_helper_023445d0(&"Background");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"Panel/Label");
    g_data_057ae163 = '\x01';
  }
  panel = (System_String_Fields)__this;
  SVar6 = (System_String_Fields)
          UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((SVar6 != (System_String_Fields)0x0) &&
     (pUVar7 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)SVar6,"Panel/Label",(MethodInfo *)0x0),
     panel = SVar6, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
    pUVar8 = (UnityEngine_UI_Text_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
    (__this->fields)._label = pUVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._label,pUVar8);
    pUVar8 = (__this->fields)._label;
    panel._stringLength = 0;
    panel._firstChar = 0;
    panel._6_2_ = 0;
    if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar8->klass->vtable)._75_set_text.methodPtr)
                (pUVar8,**(undefined8 **)(g_data_057b9c00 + 0xb8),(pUVar8->klass->vtable)._75_set_text.method);
      panel = (System_String_Fields)__this;
      SVar6 = (System_String_Fields)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((SVar6 != (System_String_Fields)0x0) &&
         (pUVar7 = UnityEngine_Transform__Find
                             ((UnityEngine_Transform_o *)SVar6,"Panel",(MethodInfo *)0x0), panel = SVar6,
         pUVar7 != (UnityEngine_Transform_o *)0x0)) {
        pUVar9 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
        unaff_R14 = (System_String_Fields)&(__this->fields)._panel;
        (__this->fields)._panel = pUVar9;
        il2cpp_runtime_helper_022b4080(unaff_R14,pUVar9);
        pUVar8 = (__this->fields)._label;
        panel = (System_String_Fields)
                (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        unaff_RBX = (System_String_o *)
                    (*(__this->klass->vtable)._59_get_TextColor.methodPtr)
                              (__this,(__this->klass->vtable)._59_get_TextColor.method);
        if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_RBP = &"DefaultPanel";
        UVar17 = UI_UIManager__GetThemeColor
                           ((System_String_o *)panel,"DefaultSetting",unaff_RBX,"DefaultPanel",(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar8->klass->vtable)._23_set_color.methodPtr)
                    (UVar17.fields.r,UVar17.fields._8_8_,pUVar8,(pUVar8->klass->vtable)._23_set_color.method);
          panel = *(System_String_Fields *)unaff_R14;
          if ((panel != (System_String_Fields)0x0) &&
             (pUVar7 = UnityEngine_Transform__Find
                                 ((UnityEngine_Transform_o *)panel,"Background",(MethodInfo *)0x0),
             pUVar7 != (UnityEngine_Transform_o *)0x0)) {
            pIVar10 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
            unaff_R14 = (System_String_Fields)
                        (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                  (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
            item = (System_String_o *)
                   (*(__this->klass->vtable)._60_get_BackgroundColor.methodPtr)
                             (__this,(__this->klass->vtable)._60_get_BackgroundColor.method);
            panel = unaff_R14;
            UVar17 = UI_UIManager__GetThemeColor
                               ((System_String_o *)unaff_R14,"DefaultSetting",item,"DefaultPanel",(MethodInfo *)0x0)
            ;
            unaff_RBX = (System_String_o *)0x0;
            if (pIVar10 != (Il2CppObject *)0x0) {
              (*pIVar10->klass->vtable[0x17].methodPtr)
                        (UVar17.fields.r,UVar17.fields._8_8_,pIVar10,pIVar10->klass->vtable[0x17].method);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar13 = (System_String_Fields *)unaff_RBP;
  while( true ) {
    *(System_String_Fields **)(puVar12 + -8) = pSVar13;
    *(System_String_o **)(puVar12 + -0x10) = unaff_RBX;
    if (g_data_057ae164 == '\0') {
      *(undefined8 *)(puVar12 + -0x40) = 0x435630e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
      *(undefined8 *)(puVar12 + -0x40) = 0x435631a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae164 = '\x01';
    }
    *(undefined8 *)(puVar12 + -0x40) = 0x4356333;
    SVar6 = panel;
    pUVar9 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)panel,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
      *(undefined8 *)(puVar12 + -0x40) = 0x4356346;
      UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar9,(MethodInfo *)0x0);
      fVar14 = UVar3.fields.x;
      fVar15 = *(float *)&((UnityEngine_Transform_o *)((long)panel + 0xc0))->klass;
      pSVar13 = &TypeInfo_UIManager;
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        *(float *)(puVar12 + -0x30) = fVar15;
        auVar1._8_4_ = extraout_XMM0_Dc;
        auVar1._0_4_ = UVar3.fields.x;
        auVar1._4_4_ = UVar3.fields.y;
        auVar1._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])(puVar12 + -0x28) = auVar1;
        *(undefined8 *)(puVar12 + -0x40) = 0x4356372;
        il2cpp_runtime_helper_02337ed0();
        fVar14 = *(float *)(puVar12 + -0x28);
        fVar15 = *(float *)(puVar12 + -0x30);
      }
      __this_00 = *(System_String_Fields *)((long)panel + 0xb8);
      SVar6 = TypeInfo_UIManager;
      if (__this_00 != (System_String_Fields)0x0) {
        *(float *)(puVar12 + -0x30) =
             (fVar15 + fVar14 * 0.5) * *(float *)(*(long *)((long)TypeInfo_UIManager + 0xb8) + 0x38);
        *(undefined8 *)(puVar12 + -0x40) = 0x43563b9;
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        SVar6 = __this_00;
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)(puVar12 + -0x40) = 0x43563c8;
          UVar16 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          auVar2._8_4_ = extraout_XMM0_Dc_00;
          auVar2._0_8_ = UVar16.fields._0_8_;
          auVar2._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])(puVar12 + -0x28) = auVar2;
          *(float *)(puVar12 + -0x2c) = UVar16.fields.z;
          *(undefined8 *)(puVar12 + -0x40) = 0x43563da;
          uVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
          pSVar13 = (System_String_Fields *)(ulong)uVar4;
          *(undefined8 *)(puVar12 + -0x40) = 0x43563e6;
          SVar6 = panel;
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)panel,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            fVar15 = *(float *)(puVar12 + -0x30) + *(float *)(puVar12 + -0x28);
            if ((float)(int)uVar4 < fVar15) {
              fVar15 = *(float *)(puVar12 + -0x28) - *(float *)(puVar12 + -0x30);
            }
            UVar16.fields.y = (float)*(undefined4 *)(puVar12 + -0x24);
            UVar16.fields.x = fVar15;
            UVar16.fields.z = *(float *)(puVar12 + -0x2c);
            UnityEngine_Transform__set_position(pUVar7,UVar16,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)(puVar12 + -0x40) = 0x4356435;
    uVar11 = il2cpp_runtime_helper_022b2c90();
    *(System_String_Fields *)(puVar12 + -0x40) = unaff_R14;
    *(System_String_Fields *)(puVar12 + -0x48) = panel;
    *(undefined8 *)(puVar12 + -0x50) = uVar11;
    if (g_data_057ae165 == '\0') {
      *(undefined8 *)(puVar12 + -0x58) = 0x435645c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae165 = '\x01';
    }
    x = (UnityEngine_Object_o *)((UnityEngine_Transform_Fields *)((long)SVar6 + 0xb8))->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar12 + -0x58) = 0x4356482;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar12 + -0x58) = 0x435648e;
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') break;
    unaff_RBX = *(System_String_o **)(puVar12 + -0x48);
    unaff_R14 = *(System_String_Fields *)(puVar12 + -0x40);
    puVar12 = puVar12 + -0x38;
    panel = SVar6;
  }
  return;
}


// UI.TooltipPopup$$Show
// il2cpp: void UI_TooltipPopup__Show (UI_TooltipPopup_o* __this, System_String_o* message, UnityEngine_Component_o* caller, float offset, const MethodInfo* method);
// 0x434d190

void UI_TooltipPopup__Show
               (UI_TooltipPopup_o *__this,System_String_o *message,UnityEngine_Component_o *caller,
               float offset,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o **ppSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *__this_00;
  UI_TooltipPopup_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  UI_TooltipPopup_o *y;
  System_Collections_Generic_List_BasePopup__o *__this_03;
  float value;
  
  y = __this;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar4 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
label_0434d23f:
      pUVar2 = (__this->fields)._label;
      y = (UI_TooltipPopup_o *)0x0;
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,message,(pUVar2->klass->vtable)._75_set_text.method);
        (__this->fields).Caller = caller;
        il2cpp_runtime_helper_022b4080();
        (__this->fields)._offset = offset;
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        UI_TooltipPopup__SetTooltipPosition(__this,(MethodInfo *)caller);
        UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)caller);
        return;
      }
    }
    else {
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      value = (float)(*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)(__this);
      if (g_data_057ae0e3 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        g_data_057ae0e3 = '\x01';
      }
      y = __this;
      __this_01 = (UI_TooltipPopup_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UI_TooltipPopup_o *)0x0) {
        __this_02 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_01,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        y = __this_01;
        if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
          UnityEngine_CanvasGroup__set_alpha(__this_02,value,(MethodInfo *)0x0);
          goto label_0434d23f;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae118 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae118 = '\x01';
  }
  __this_03 = (y->fields)._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppSVar1 = &(y->fields)._popups;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_03,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*ppSVar1 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
label_0434d36c:
      il2cpp_runtime_helper_022b2c90();
      *(undefined4 *)&__this_03[1].klass = 0x42200000;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
      return;
    }
    x = *(UnityEngine_Object_o **)&(*ppSVar1)[4].fields._size;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pSVar3 = *ppSVar1;
      __this_03 = (System_Collections_Generic_List_BasePopup__o *)0x0;
      if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_0434d36c;
      (*(pSVar3->klass->vtable)._22_Clear.methodPtr)(pSVar3,(pSVar3->klass->vtable)._22_Clear.method);
    }
  }
  *ppSVar1 = (System_Collections_Generic_List_BasePopup__o *)0x0;
  il2cpp_runtime_helper_022b4080(ppSVar1,0);
  return;
}


// UI.TooltipPopup$$SetTooltipPosition
// il2cpp: void UI_TooltipPopup__SetTooltipPosition (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x43562f0

void UI_TooltipPopup__SetTooltipPosition(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  UnityEngine_Vector2_o UVar3;
  uint uVar4;
  bool_conflict bVar5;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  undefined8 *unaff_RBP;
  UI_TooltipPopup_o *pUVar8;
  UI_TooltipPopup_o *__this_01;
  undefined8 unaff_R14;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  
  while( true ) {
    *(undefined8 **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_RBX;
    if (g_data_057ae164 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x435630e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x435631a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae164 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4356333;
    pUVar8 = __this;
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4356346;
      UVar3 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
      fVar9 = UVar3.fields.x;
      fVar10 = (__this->fields)._offset;
      unaff_RBP = &TypeInfo_UIManager;
      if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
        *(float *)((long)register0x00000020 + -0x30) = fVar10;
        auVar1._8_4_ = extraout_XMM0_Dc;
        auVar1._0_4_ = UVar3.fields.x;
        auVar1._4_4_ = UVar3.fields.y;
        auVar1._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = auVar1;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4356372;
        il2cpp_runtime_helper_02337ed0();
        fVar9 = *(float *)((long)register0x00000020 + -0x28);
        fVar10 = *(float *)((long)register0x00000020 + -0x30);
      }
      __this_01 = (UI_TooltipPopup_o *)(__this->fields).Caller;
      pUVar8 = TypeInfo_UIManager;
      if (__this_01 != (UI_TooltipPopup_o *)0x0) {
        *(float *)((long)register0x00000020 + -0x30) =
             (fVar10 + fVar9 * 0.5) * *(float *)&(TypeInfo_UIManager->fields).Caller[2].monitor;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43563b9;
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        pUVar8 = __this_01;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43563c8;
          UVar11 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          auVar2._8_4_ = extraout_XMM0_Dc_00;
          auVar2._0_8_ = UVar11.fields._0_8_;
          auVar2._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = auVar2;
          *(float *)((long)register0x00000020 + -0x2c) = UVar11.fields.z;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43563da;
          uVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
          unaff_RBP = (undefined8 *)(ulong)uVar4;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43563e6;
          pUVar8 = __this;
          pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            fVar10 = *(float *)((long)register0x00000020 + -0x30) +
                     *(float *)((long)register0x00000020 + -0x28);
            if ((float)(int)uVar4 < fVar10) {
              fVar10 = *(float *)((long)register0x00000020 + -0x28) -
                       *(float *)((long)register0x00000020 + -0x30);
            }
            UVar11.fields.y = (float)*(undefined4 *)((long)register0x00000020 + -0x24);
            UVar11.fields.x = fVar10;
            UVar11.fields.z = *(float *)((long)register0x00000020 + -0x2c);
            UnityEngine_Transform__set_position(pUVar6,UVar11,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4356435;
    uVar7 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x40) = unaff_R14;
    *(UI_TooltipPopup_o **)((long)register0x00000020 + -0x48) = __this;
    *(undefined8 *)((long)register0x00000020 + -0x50) = uVar7;
    if (g_data_057ae165 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x435645c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae165 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pUVar8->fields).Caller;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0x4356482;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0x435648e;
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') break;
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x48);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x40);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x38);
    __this = pUVar8;
  }
  return;
}


// UI.TooltipPopup$$Update
// il2cpp: void UI_TooltipPopup__Update (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x4356440

void UI_TooltipPopup__Update(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  UnityEngine_Vector2_o UVar3;
  uint uVar4;
  bool_conflict bVar5;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  undefined8 in_RAX;
  UI_TooltipPopup_o *unaff_RBX;
  undefined8 *unaff_RBP;
  UI_TooltipPopup_o *pUVar7;
  UI_TooltipPopup_o *__this_01;
  undefined8 unaff_R14;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
    *(UI_TooltipPopup_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057ae165 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x435645c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057ae165 = '\x01';
    }
    x = (UnityEngine_Object_o *)(__this->fields).Caller;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4356482;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x435648e;
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') break;
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -8);
    *(undefined8 **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = *(undefined8 *)((long)register0x00000020 + -0x10);
    if (g_data_057ae164 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x435630e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x435631a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae164 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4356333;
    pUVar7 = __this;
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4356346;
      UVar3 = UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
      fVar8 = UVar3.fields.x;
      fVar9 = (__this->fields)._offset;
      unaff_RBP = &TypeInfo_UIManager;
      if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
        *(float *)((long)register0x00000020 + -0x30) = fVar9;
        auVar1._8_4_ = extraout_XMM0_Dc;
        auVar1._0_4_ = UVar3.fields.x;
        auVar1._4_4_ = UVar3.fields.y;
        auVar1._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = auVar1;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4356372;
        il2cpp_runtime_helper_02337ed0();
        fVar8 = *(float *)((long)register0x00000020 + -0x28);
        fVar9 = *(float *)((long)register0x00000020 + -0x30);
      }
      __this_01 = (UI_TooltipPopup_o *)(__this->fields).Caller;
      pUVar7 = TypeInfo_UIManager;
      if (__this_01 != (UI_TooltipPopup_o *)0x0) {
        *(float *)((long)register0x00000020 + -0x30) =
             (fVar9 + fVar8 * 0.5) * *(float *)&(TypeInfo_UIManager->fields).Caller[2].monitor;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43563b9;
        pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        pUVar7 = __this_01;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43563c8;
          UVar10 = UnityEngine_Transform__get_position(pUVar6,(MethodInfo *)0x0);
          auVar2._8_4_ = extraout_XMM0_Dc_00;
          auVar2._0_8_ = UVar10.fields._0_8_;
          auVar2._12_4_ = extraout_XMM0_Dd_00;
          *(undefined1 (*) [16])((long)register0x00000020 + -0x28) = auVar2;
          *(float *)((long)register0x00000020 + -0x2c) = UVar10.fields.z;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43563da;
          uVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
          unaff_RBP = (undefined8 *)(ulong)uVar4;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x43563e6;
          pUVar7 = __this;
          pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
            fVar9 = *(float *)((long)register0x00000020 + -0x30) +
                    *(float *)((long)register0x00000020 + -0x28);
            if ((float)(int)uVar4 < fVar9) {
              fVar9 = *(float *)((long)register0x00000020 + -0x28) -
                      *(float *)((long)register0x00000020 + -0x30);
            }
            UVar10.fields.y = (float)*(undefined4 *)((long)register0x00000020 + -0x24);
            UVar10.fields.x = fVar9;
            UVar10.fields.z = *(float *)((long)register0x00000020 + -0x2c);
            UnityEngine_Transform__set_position(pUVar6,UVar10,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x4356435;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = __this;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x38);
    __this = pUVar7;
  }
  return;
}


// UI.TooltipPopup$$.ctor
// il2cpp: void UI_TooltipPopup___ctor (UI_TooltipPopup_o* __this, const MethodInfo* method);
// 0x4355fa0

void UI_TooltipPopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor(__this,method);
  return;
}



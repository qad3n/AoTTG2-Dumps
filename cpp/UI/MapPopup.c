// Type: UI.MapPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MapPopup.cs
// --------------------------------

// UI.MapPopup$$get_Title
// il2cpp: System_String_o* UI_MapPopup__get_Title (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d16b0

System_String_o * UI_MapPopup__get_Title(UI_MapPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae430 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Map");
    g_data_057ae430 = '\x01';
  }
  return "Map";
}


// UI.MapPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_MapPopup__get_PopupAnimationType (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d16e0

int32_t UI_MapPopup__get_PopupAnimationType(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.MapPopup$$get_MinFadeAlpha
// il2cpp: float UI_MapPopup__get_MinFadeAlpha (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d16f0

float UI_MapPopup__get_MinFadeAlpha(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.MapPopup$$get_Width
// il2cpp: float UI_MapPopup__get_Width (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d1700

float UI_MapPopup__get_Width(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 900.0;
}


// UI.MapPopup$$get_Height
// il2cpp: float UI_MapPopup__get_Height (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d1710

float UI_MapPopup__get_Height(UI_MapPopup_o *__this,MethodInfo *method)

{
  return 1030.0;
}


// UI.MapPopup$$Setup
// il2cpp: void UI_MapPopup__Setup (UI_MapPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43d1720

void UI_MapPopup__Setup(UI_MapPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o **ppUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector2_o value;
  int32_t fontSize;
  UnityEngine_UI_RawImage_o *pUVar3;
  UI_ElementStyle_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  Il2CppObject *pIVar6;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_UI_Text_o *pUVar7;
  System_String_o *pSVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  float fVar10;
  
  if (g_data_057ae431 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae431 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_MapPopup__SetupBottomButtons(__this,(MethodInfo *)parent);
  pUVar3 = (UnityEngine_UI_RawImage_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar4,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar10 = (float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4);
  pUVar5 = UI_ElementFactory__CreateRawImage
                     ((UnityEngine_Transform_o *)pUVar3,pUVar4,"",fVar10,fVar10,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = (UnityEngine_UI_RawImage_o *)UnityEngine_GameObject__GetComponent_object_(pUVar5,MethodInfo_RawImage_GetComponent_RawImage);
    ppUVar1 = &(__this->fields)._background;
    (__this->fields)._background = pUVar3;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar3);
    pUVar3 = (__this->fields)._background;
    if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
      pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar3,MethodInfo_LayoutElement_GetComponent_LayoutElement);
      if (pIVar6 != (Il2CppObject *)0x0) {
        (*pIVar6->klass->vtable[0x1c].methodPtr)(pIVar6,1,pIVar6->klass->vtable[0x1c].method);
        pUVar3 = *ppUVar1;
        if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
          __this_00 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar3,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            fVar10 = (float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4);
            value.fields.y = fVar10;
            value.fields.x = fVar10;
            UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
            pUVar3 = (UnityEngine_UI_RawImage_o *)
                     UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
            UI_ElementStyle___ctor(pUVar4,0x18,120.0,20.0,"DefaultPanel",(MethodInfo *)0x0);
            pUVar5 = UI_ElementFactory__CreateWhiteLabel
                               ((UnityEngine_Transform_o *)pUVar3,pUVar4,"",0,4,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              pUVar7 = (UnityEngine_UI_Text_o *)
                       UnityEngine_GameObject__GetComponent_object_(pUVar5,MethodInfo_Text_GetComponent_Text);
              (__this->fields)._label = pUVar7;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._label);
              pUVar7 = (__this->fields)._label;
              pUVar3 = (UnityEngine_UI_RawImage_o *)0x0;
              if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
                pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                UI_ElementFactory__SetAnchor
                          (pUVar5,2,2,(UnityEngine_Vector2_o)0xc2960000c1700000,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae436 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__26_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__26_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__26_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Zoom Out");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Zoom In");
    g_data_057ae436 = '\x01';
  }
  fontSize = (*(pUVar3->klass->vtable)._41_UpdateGeometry.methodPtr)
                       (pUVar3,(pUVar3->klass->vtable)._41_UpdateGeometry.method);
  pSVar8 = (System_String_o *)
           (*(pUVar3->klass->vtable)._4_Awake.methodPtr)(pUVar3,(pUVar3->klass->vtable)._4_Awake.method);
  pUVar4 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(pUVar4,fontSize,120.0,20.0,pSVar8,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_Transform_o *)(pUVar3->fields).m_Canvas;
  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,pUVar4,"Zoom In",0.0,pUVar9,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_Transform_o *)(pUVar3->fields).m_Canvas;
  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,pUVar4,"Zoom Out",0.0,pUVar9,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_Transform_o *)(pUVar3->fields).m_Canvas;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar9 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar2,pUVar4,pSVar8,0.0,pUVar9,(MethodInfo *)0x0);
  return;
}


// UI.MapPopup$$Show
// il2cpp: void UI_MapPopup__Show (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d1bd0

void UI_MapPopup__Show(UI_MapPopup_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  UI_MapPopup__Sync(__this,method_00);
  (__this->fields)._syncTimeLeft = 1.0;
  return;
}


// UI.MapPopup$$Update
// il2cpp: void UI_MapPopup__Update (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d1e40

void UI_MapPopup__Update(UI_MapPopup_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  undefined4 uVar3;
  byte bVar4;
  int32_t length;
  int iVar5;
  uint uVar6;
  Il2CppClass *pIVar7;
  System_String_Fields SVar8;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar9;
  long lVar10;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  undefined1 auVar11 [16];
  bool_conflict bVar12;
  System_String_array *values;
  System_String_o *pSVar13;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Object_o *pUVar15;
  UnityEngine_GameObject_o *pUVar16;
  long *plVar17;
  char cVar18;
  System_String_o **unaff_RBP;
  System_String_array *pSVar19;
  System_String_o *unaff_R12;
  MethodInfo **unaff_R13;
  UnityEngine_UI_Text_o *unaff_R15;
  bool bVar20;
  float __this_08;
  float fVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar22;
  undefined1 auVar23 [12];
  undefined8 in_stack_fffffffffffffed0;
  System_String_array *in_stack_fffffffffffffed8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar24;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [8];
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_d0 [12];
  float fStack_c4;
  undefined1 auStack_c0 [16];
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_90;
  System_String_array *pSStack_78;
  System_String_o *pSStack_70;
  MethodInfo **ppMStack_68;
  UI_MapPopup_o *pUStack_60;
  UnityEngine_UI_Text_o *pUStack_58;
  System_String_o **ppSStack_50;
  System_String_c *pSStack_40;
  float fStack_38;
  float fStack_34;
  
  uVar3 = in_XMM1_Db;
  if (g_data_057ae432 == '\0') {
    ppSStack_50 = (System_String_o **)0x43d1e66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    ppSStack_50 = (System_String_o **)0x43d1e72;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppSStack_50 = (System_String_o **)0x43d1e7e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    ppSStack_50 = (System_String_o **)0x43d1e8a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    ppSStack_50 = (System_String_o **)0x43d1e96;
    il2cpp_runtime_helper_023445d0(&"F0");
    ppSStack_50 = (System_String_o **)0x43d1ea2;
    il2cpp_runtime_helper_023445d0(&", ");
    g_data_057ae432 = '\x01';
    uVar3 = in_XMM1_Db;
  }
  fStack_38 = 0.0;
  pSStack_40 = (System_String_c *)0x0;
  values = *(System_String_array **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (values == (System_String_array *)0x0) goto label_043d210a;
  pIVar7 = (values->obj).klass;
  bVar4 = (TypeInfo_InGameCamera->_2).naturalAligment;
  if (((pIVar7->_2).naturalAligment < bVar4) || ((pIVar7->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_InGameCamera)
     ) goto label_043d2114;
  if ((values->m_Items[1] == (System_String_o *)0x0) ||
     (SVar8 = values->m_Items[1]->fields, SVar8 == (System_String_Fields)0x0)) {
label_043d210a:
    ppSStack_50 = (System_String_o **)0x43d210f;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    ppSStack_50 = (System_String_o **)0x43d1f2b;
    UVar22 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)SVar8,(MethodInfo *)0x0);
    fStack_38 = UVar22.fields.z;
    pSStack_40 = UVar22.fields._0_8_;
    unaff_R15 = (UnityEngine_UI_Text_o *)values->m_Items[3];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      ppSStack_50 = (System_String_o **)0x43d1f52;
      il2cpp_runtime_helper_02337ed0();
    }
    ppSStack_50 = (System_String_o **)0x43d1f5e;
    bVar12 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar12 != '\0') {
      if (((values->m_Items[3] == (System_String_o *)0x0) ||
          (SVar8 = values->m_Items[3][4].fields, SVar8 == (System_String_Fields)0x0)) ||
         (pUVar14 = *(UnityEngine_Transform_o **)((long)SVar8 + 0x10),
         pUVar14 == (UnityEngine_Transform_o *)0x0)) goto label_043d210a;
      ppSStack_50 = (System_String_o **)0x43d1f90;
      UVar22 = UnityEngine_Transform__get_position(pUVar14,(MethodInfo *)0x0);
      fStack_38 = UVar22.fields.z;
      pSStack_40 = UVar22.fields._0_8_;
    }
    unaff_R15 = (__this->fields)._label;
    ppSStack_50 = (System_String_o **)0x43d1fb6;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
    unaff_R13 = &"F0";
    ppSStack_50 = (System_String_o **)0x43d1fd0;
    pSVar13 = System_Single__ToString_3cccfe0(__this_08,(System_String_o *)&pSStack_40,"F0");
    if (values == (System_String_array *)0x0) goto label_043d210a;
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar13;
      ppSStack_50 = (System_String_o **)0x43d1ff3;
      il2cpp_runtime_helper_022b4080(values->m_Items);
      if (1 < (uint)values->max_length) {
        unaff_RBP = &", ";
        values->m_Items[1] = ", ";
        ppSStack_50 = (System_String_o **)0x43d2015;
        fVar21 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 1);
        ppSStack_50 = (System_String_o **)0x43d2025;
        pSVar13 = System_Single__ToString_3cccfe0
                            (fVar21,(System_String_o *)((long)&pSStack_40 + 4),"F0");
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar13;
          ppSStack_50 = (System_String_o **)0x43d203f;
          il2cpp_runtime_helper_022b4080(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            unaff_R12 = (System_String_o *)&fStack_38;
            values->m_Items[3] = ", ";
            ppSStack_50 = (System_String_o **)0x43d205f;
            fVar21 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 3);
            ppSStack_50 = (System_String_o **)0x43d206d;
            pSVar13 = System_Single__ToString_3cccfe0(fVar21,unaff_R12,"F0");
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar13;
              ppSStack_50 = (System_String_o **)0x43d208a;
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              ppSStack_50 = (System_String_o **)0x43d2094;
              method_00 = (MethodInfo *)System_String__Concat_3af7570(values,(MethodInfo *)0x0);
              if (unaff_R15 != (UnityEngine_UI_Text_o *)0x0) {
                ppSStack_50 = (System_String_o **)0x43d20af;
                (*(unaff_R15->klass->vtable)._75_set_text.methodPtr)
                          (unaff_R15,method_00,(unaff_R15->klass->vtable)._75_set_text.method);
                fStack_34 = (__this->fields)._syncTimeLeft;
                ppSStack_50 = (System_String_o **)0x43d20c5;
                fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                (__this->fields)._syncTimeLeft = fStack_34 - fVar21;
                if (fStack_34 - fVar21 <= 0.0) {
                  ppSStack_50 = (System_String_o **)0x43d20e8;
                  UI_MapPopup__Sync(__this,method_00);
                  (__this->fields)._syncTimeLeft = 1.0;
                }
                ppSStack_50 = (System_String_o **)0x43d20fb;
                UI_MapPopup__UpdateIcons(__this,method_00);
                return;
              }
              goto label_043d210a;
            }
          }
        }
      }
    }
  }
  ppSStack_50 = (System_String_o **)0x43d2114;
  il2cpp_runtime_helper_022b2ca0();
label_043d2114:
  ppSStack_50 = (System_String_o **)0x43d211c;
  pSVar19 = values;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_78 = values;
  pSStack_70 = unaff_R12;
  ppMStack_68 = unaff_R13;
  pUStack_60 = __this;
  pUStack_58 = unaff_R15;
  ppSStack_50 = unaff_RBP;
  if (g_data_057ae433 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae433 = '\x01';
  }
  pSVar24 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_100._0_8_ = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  auStack_100._8_8_ = (Il2CppType *)0x0;
  auStack_100._16_8_ = (Il2CppObject *)0x0;
  pSVar13 = pSVar19->m_Items[0x19];
  if (pSVar13 == (System_String_o *)0x0) goto label_043d27fd;
  piVar1 = (int *)((long)&pSVar13[1].klass + 4);
  *piVar1 = *piVar1 + 1;
  length = *(int32_t *)&pSVar13[1].klass;
  *(undefined4 *)&pSVar13[1].klass = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)pSVar13->fields,0,length,(MethodInfo *)0x0);
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)pSVar19->m_Items[0x13] ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d27fd;
  __this_07 = System_Collections_Generic_Dictionary_object__object___get_Keys
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar19->m_Items[0x13],
                         MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
  if (__this_07 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_043d27fd;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            (&SStack_90,__this_07,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  in_stack_fffffffffffffed8 = pSVar19;
  pSVar24 = SStack_90.fields._dictionary;
  while( true ) {
    do {
      while( true ) {
        while( true ) {
          __this_01.fields._8_8_ = in_stack_fffffffffffffed8;
          __this_01.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffed0;
          __this_01.fields._currentKey = (Il2CppObject *)pSVar24;
          bVar12 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (__this_01,(MethodInfo_3251B20 *)&stack0xfffffffffffffee0);
          if ((char)bVar12 == '\0') {
            __this_02.fields._8_8_ = in_stack_fffffffffffffed8;
            __this_02.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffed0;
            __this_02.fields._currentKey = (Il2CppObject *)pSVar24;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_02,(MethodInfo_3251B10 *)&stack0xfffffffffffffee0);
            goto label_043d2739;
          }
          if ((System_Collections_Generic_Dictionary_object__object__o *)pSVar19->m_Items[0x13] ==
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d27c6;
          pUVar14 = (UnityEngine_Transform_o *)
                    System_Collections_Generic_Dictionary_object__object___get_Item
                              ((System_Collections_Generic_Dictionary_object__object__o *)
                               pSVar19->m_Items[0x13],SStack_90.fields._currentKey,MethodInfo_Transform_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)SStack_90.fields._currentKey,(UnityEngine_Object_o *)0x0
                              ,(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            bVar20 = false;
            iVar5 = *(int *)(TypeInfo_Object + 0xe4);
          }
          else {
            if ((UnityEngine_Transform_o *)SStack_90.fields._currentKey == (UnityEngine_Transform_o *)0x0)
            goto label_043d27d0;
            pUVar15 = (UnityEngine_Object_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)SStack_90.fields._currentKey,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar12 = UnityEngine_Object__op_Inequality(pUVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            cVar18 = '\0';
            if ((char)bVar12 != '\0') {
              if (pUVar15 == (UnityEngine_Object_o *)0x0) goto label_043d27e9;
              cVar18 = *(char *)&pUVar15[4].monitor;
            }
            bVar20 = cVar18 != '\0';
            iVar5 = *(int *)(TypeInfo_Object + 0xe4);
            pSVar19 = in_stack_fffffffffffffed8;
          }
          if (iVar5 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar12 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)SStack_90.fields._currentKey,(UnityEngine_Object_o *)0x0
                              ,(MethodInfo *)0x0);
          lVar10 = MethodInfo_Void_Add;
          if (!bVar20 && (char)bVar12 == '\0') break;
          __this_00 = (System_Collections_Generic_List_object__o *)pSVar19->m_Items[0x19];
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_043d27d5;
          piVar2 = &(__this_00->fields)._version;
          *piVar2 = *piVar2 + 1;
          pSVar9 = (__this_00->fields)._items;
          if (pSVar9 == (System_Object_array *)0x0) goto label_043d27df;
          uVar6 = (__this_00->fields)._size;
          if (uVar6 < (uint)pSVar9->max_length) {
            (__this_00->fields)._size = uVar6 + 1;
            pSVar9->m_Items[(int)uVar6] = SStack_90.fields._currentKey;
            il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar6);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_00,SStack_90.fields._currentKey,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_043d27da;
          pUVar15 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__Destroy_4e01c60(pUVar15,(MethodInfo *)0x0);
        }
        if ((UnityEngine_Transform_o *)SStack_90.fields._currentKey == (UnityEngine_Transform_o *)0x0)
        goto label_043d27cb;
        UVar22 = UnityEngine_Transform__get_position
                           ((UnityEngine_Transform_o *)SStack_90.fields._currentKey,(MethodInfo *)0x0);
        fStack_d8 = (float)extraout_XMM0_Dc;
        auStack_e0 = (undefined1  [8])UVar22.fields._0_8_;
        fStack_d4 = (float)extraout_XMM0_Dd;
        auStack_a0 = ZEXT416(*(uint *)((long)pSVar19->m_Items + 0xbc));
        UVar22 = UnityEngine_Transform__get_position
                           ((UnityEngine_Transform_o *)SStack_90.fields._currentKey,(MethodInfo *)0x0);
        fStack_b0 = UVar22.fields.z;
        auStack_c0 = ZEXT416(*(uint *)((long)pSVar19->m_Items + 0xc4));
        uStack_ac = uVar3;
        uStack_a8 = in_XMM1_Dc;
        uStack_a4 = in_XMM1_Dd;
        if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        _auStack_d0 = ZEXT416((uint)((float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4) /
                                    *(float *)(pSVar19->m_Items + 0x12)));
        if (g_data_057a6841 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          iVar5 = *(int *)(TypeInfo_Math + 0xe4);
        }
        else {
          iVar5 = *(int *)(TypeInfo_Math + 0xe4);
        }
        if (iVar5 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        auStack_e0._0_4_ = (float)auStack_d0._0_4_ * ((float)auStack_e0._0_4_ - (float)auStack_a0._0_4_);
        auStack_e0._4_4_ = (float)auStack_d0._0_4_ * (fStack_b0 - (float)auStack_c0._0_4_);
        auStack_d0._0_4_ = (float)auStack_d0._0_4_ * 0.0;
        fStack_d8 = (float)auStack_d0._8_4_ * (fStack_d8 - (float)auStack_a0._4_4_);
        fStack_d4 = fStack_c4 * (fStack_d4 - (float)auStack_c0._4_4_);
        fVar21 = (float)auStack_d0._0_4_ * (float)auStack_d0._0_4_ +
                 (float)auStack_e0._4_4_ * (float)auStack_e0._4_4_ +
                 (float)auStack_e0._0_4_ * (float)auStack_e0._0_4_;
        if (fVar21 < 0.0) {
          fVar21 = sqrtf(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        uVar3 = 0;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        if ((float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4) * 0.5 < fVar21) break;
        if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_043d27e4;
        pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
        if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_043d27ee;
        bVar12 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
          pUVar16 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
          if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_043d2807;
          UnityEngine_GameObject__SetActive(pUVar16,1,(MethodInfo *)0x0);
        }
        auVar11 = _auStack_e0;
        UVar22.fields.z = (float)auStack_d0._0_4_;
        UVar22.fields.x = (float)auStack_e0._0_4_;
        UVar22.fields.y = (float)auStack_e0._4_4_;
        _auStack_e0 = auVar11;
        UnityEngine_Transform__set_localPosition(pUVar14,UVar22,(MethodInfo *)0x0);
        if (g_data_057a6843 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
          g_data_057a6843 = '\x01';
        }
        uVar3 = (*(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8))->w;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        UnityEngine_Transform__set_rotation
                  (pUVar14,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8)
                   ,(MethodInfo *)0x0);
      }
      if (pUVar14 == (UnityEngine_Transform_o *)0x0) goto label_043d27f3;
      pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
      if (pUVar16 == (UnityEngine_GameObject_o *)0x0) goto label_043d27f8;
      bVar12 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
    } while ((char)bVar12 == '\0');
    pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar14,(MethodInfo *)0x0);
    if (pUVar16 == (UnityEngine_GameObject_o *)0x0) break;
    UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
  }
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_043d2807:
    pSVar19 = in_stack_fffffffffffffed8;
    auVar23 = il2cpp_runtime_helper_022b2c90();
    if (auVar23._8_4_ != 1) goto label_043d2a6c;
    in_stack_fffffffffffffed8 = pSVar19;
    plVar17 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar10 = *plVar17;
    __cxa_end_catch();
    __this_05.fields._8_8_ = in_stack_fffffffffffffed8;
    __this_05.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffed0;
    __this_05.fields._currentKey = (Il2CppObject *)pSVar24;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251B10 *)&stack0xfffffffffffffee0);
    if (lVar10 != 0) break;
label_043d2739:
    if ((System_Collections_Generic_List_object__o *)pSVar19->m_Items[0x19] !=
        (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_100,
                 (System_Collections_Generic_List_object__o *)pSVar19->m_Items[0x19],MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
      while( true ) {
        __this_03.fields._8_8_ = in_stack_fffffffffffffed8;
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
        __this_03.fields._current = (Il2CppObject *)pSVar24;
        bVar12 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_03,(MethodInfo_321A1D0 *)auStack_100);
        if ((char)bVar12 == '\0') {
          __this_04.fields._8_8_ = in_stack_fffffffffffffed8;
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffed0;
          __this_04.fields._current = (Il2CppObject *)pSVar24;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_04,(MethodInfo_321A1C0 *)auStack_100);
          return;
        }
        if ((System_Collections_Generic_Dictionary_object__object__o *)pSVar19->m_Items[0x13] ==
            (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Remove
                  ((System_Collections_Generic_Dictionary_object__object__o *)pSVar19->m_Items[0x13],
                   (Il2CppObject *)auStack_100._16_8_,MethodInfo_Boolean_Remove);
      }
      il2cpp_runtime_helper_022b2c90();
label_043d27c6:
      il2cpp_runtime_helper_022b2c90();
label_043d27cb:
      il2cpp_runtime_helper_022b2c90();
label_043d27d0:
      il2cpp_runtime_helper_022b2c90();
label_043d27d5:
      il2cpp_runtime_helper_022b2c90();
label_043d27da:
      il2cpp_runtime_helper_022b2c90();
label_043d27df:
      il2cpp_runtime_helper_022b2c90();
label_043d27e4:
      il2cpp_runtime_helper_022b2c90();
label_043d27e9:
      il2cpp_runtime_helper_022b2c90();
label_043d27ee:
      il2cpp_runtime_helper_022b2c90();
label_043d27f3:
      il2cpp_runtime_helper_022b2c90();
label_043d27f8:
      il2cpp_runtime_helper_022b2c90();
    }
label_043d27fd:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022fefe0(lVar10);
  pSVar19 = in_stack_fffffffffffffed8;
label_043d2a6c:
  __this_06.fields._8_8_ = pSVar19;
  __this_06.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffed0;
  __this_06.fields._currentKey = (Il2CppObject *)pSVar24;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_06,(MethodInfo_3251B10 *)&stack0xfffffffffffffee0);
  _Unwind_Resume(auVar23._0_8_);
}


// UI.MapPopup$$UpdateIcons
// il2cpp: void UI_MapPopup__UpdateIcons (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d2120

void UI_MapPopup__UpdateIcons(UI_MapPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  int32_t length;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_List_Transform__o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  UnityEngine_Transform_array *pUVar7;
  long lVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_05;
  undefined1 auVar9 [16];
  bool_conflict bVar10;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  UnityEngine_Transform_o *__this_07;
  UnityEngine_Object_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  long *plVar13;
  char cVar14;
  bool bVar15;
  float fVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar17;
  undefined1 auVar18 [12];
  undefined8 in_stack_ffffffffffffff18;
  UI_MapPopup_o *in_stack_ffffffffffffff20;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar19;
  undefined1 local_b8 [32];
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [12];
  float fStack_7c;
  undefined1 local_78 [16];
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  uVar2 = in_XMM1_Db;
  if (g_data_057ae433 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae433 = '\x01';
    uVar2 = in_XMM1_Db;
  }
  pSVar19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b8._0_8_ = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  local_b8._8_8_ = (Il2CppType *)0x0;
  local_b8._16_8_ = (Il2CppObject *)0x0;
  pSVar5 = (__this->fields)._iconsToRemove;
  if (pSVar5 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_043d27fd;
  piVar1 = &(pSVar5->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar5->fields)._size;
  (pSVar5->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d27fd;
  __this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar6,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
  if (__this_06 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_043d27fd;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            (&local_48,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  in_stack_ffffffffffffff20 = __this;
  pSVar19 = local_48.fields._dictionary;
  while( true ) {
    do {
      while( true ) {
        while( true ) {
          __this_00.fields._8_8_ = in_stack_ffffffffffffff20;
          __this_00.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff18;
          __this_00.fields._currentKey = (Il2CppObject *)pSVar19;
          bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                             (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff28);
          if ((char)bVar10 == '\0') {
            __this_01.fields._8_8_ = in_stack_ffffffffffffff20;
            __this_01.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff18;
            __this_01.fields._currentKey = (Il2CppObject *)pSVar19;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffff28);
            goto label_043d2739;
          }
          pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d27c6;
          __this_07 = (UnityEngine_Transform_o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar6,local_48.fields._currentKey,MethodInfo_Transform_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar10 = UnityEngine_Object__op_Inequality
                             ((UnityEngine_Object_o *)local_48.fields._currentKey,(UnityEngine_Object_o *)0x0,
                              (MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            bVar15 = false;
            iVar3 = *(int *)(TypeInfo_Object + 0xe4);
          }
          else {
            if ((UnityEngine_Transform_o *)local_48.fields._currentKey == (UnityEngine_Transform_o *)0x0)
            goto label_043d27d0;
            pUVar11 = (UnityEngine_Object_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)local_48.fields._currentKey,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar10 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            cVar14 = '\0';
            if ((char)bVar10 != '\0') {
              if (pUVar11 == (UnityEngine_Object_o *)0x0) goto label_043d27e9;
              cVar14 = *(char *)&pUVar11[4].monitor;
            }
            bVar15 = cVar14 != '\0';
            iVar3 = *(int *)(TypeInfo_Object + 0xe4);
            __this = in_stack_ffffffffffffff20;
          }
          if (iVar3 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar10 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)local_48.fields._currentKey,(UnityEngine_Object_o *)0x0,
                              (MethodInfo *)0x0);
          lVar8 = MethodInfo_Void_Add;
          if (!bVar15 && (char)bVar10 == '\0') break;
          pSVar5 = (__this->fields)._iconsToRemove;
          if (pSVar5 == (System_Collections_Generic_List_Transform__o *)0x0) goto label_043d27d5;
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar7 = (pSVar5->fields)._items;
          if (pUVar7 == (UnityEngine_Transform_array *)0x0) goto label_043d27df;
          uVar4 = (pSVar5->fields)._size;
          if (uVar4 < (uint)pUVar7->max_length) {
            (pSVar5->fields)._size = uVar4 + 1;
            pUVar7->m_Items[(int)uVar4] = (UnityEngine_Transform_o *)local_48.fields._currentKey;
            il2cpp_runtime_helper_022b4080(pUVar7->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,local_48.fields._currentKey,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          if (__this_07 == (UnityEngine_Transform_o *)0x0) goto label_043d27da;
          pUVar11 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__Destroy_4e01c60(pUVar11,(MethodInfo *)0x0);
        }
        if ((UnityEngine_Transform_o *)local_48.fields._currentKey == (UnityEngine_Transform_o *)0x0)
        goto label_043d27cb;
        UVar17 = UnityEngine_Transform__get_position
                           ((UnityEngine_Transform_o *)local_48.fields._currentKey,(MethodInfo *)0x0);
        fStack_90 = (float)extraout_XMM0_Dc;
        local_98 = (undefined1  [8])UVar17.fields._0_8_;
        fStack_8c = (float)extraout_XMM0_Dd;
        local_58 = ZEXT416((uint)(__this->fields)._syncPosition.fields.x);
        UVar17 = UnityEngine_Transform__get_position
                           ((UnityEngine_Transform_o *)local_48.fields._currentKey,(MethodInfo *)0x0);
        local_68 = UVar17.fields.z;
        local_78 = ZEXT416((uint)(__this->fields)._syncPosition.fields.z);
        uStack_64 = uVar2;
        uStack_60 = in_XMM1_Dc;
        uStack_5c = in_XMM1_Dd;
        if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        _local_88 = ZEXT416((uint)((float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4) /
                                  (__this->fields)._height));
        if (g_data_057a6841 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
          g_data_057a6841 = '\x01';
          iVar3 = *(int *)(TypeInfo_Math + 0xe4);
        }
        else {
          iVar3 = *(int *)(TypeInfo_Math + 0xe4);
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        local_98._0_4_ = (float)local_88._0_4_ * ((float)local_98._0_4_ - (float)local_58._0_4_);
        local_98._4_4_ = (float)local_88._0_4_ * (local_68 - (float)local_78._0_4_);
        local_88._0_4_ = (float)local_88._0_4_ * 0.0;
        fStack_90 = (float)local_88._8_4_ * (fStack_90 - (float)local_58._4_4_);
        fStack_8c = fStack_7c * (fStack_8c - (float)local_78._4_4_);
        fVar16 = (float)local_88._0_4_ * (float)local_88._0_4_ +
                 (float)local_98._4_4_ * (float)local_98._4_4_ + (float)local_98._0_4_ * (float)local_98._0_4_
        ;
        if (fVar16 < 0.0) {
          fVar16 = sqrtf(fVar16);
        }
        else {
          fVar16 = SQRT(fVar16);
        }
        uVar2 = 0;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        if ((float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4) * 0.5 < fVar16) break;
        if (__this_07 == (UnityEngine_Transform_o *)0x0) goto label_043d27e4;
        pUVar12 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_043d27ee;
        bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          pUVar12 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
          if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_043d2807;
          UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
        }
        auVar9 = _local_98;
        UVar17.fields.z = (float)local_88._0_4_;
        UVar17.fields.x = (float)local_98._0_4_;
        UVar17.fields.y = (float)local_98._4_4_;
        _local_98 = auVar9;
        UnityEngine_Transform__set_localPosition(__this_07,UVar17,(MethodInfo *)0x0);
        if (g_data_057a6843 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
          g_data_057a6843 = '\x01';
        }
        uVar2 = (*(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8))->w;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        UnityEngine_Transform__set_rotation
                  (__this_07,
                   (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                   (MethodInfo *)0x0);
      }
      if (__this_07 == (UnityEngine_Transform_o *)0x0) goto label_043d27f3;
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
      if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_043d27f8;
      bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
    } while ((char)bVar10 == '\0');
    pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) break;
    UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
  }
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
label_043d2807:
    __this = in_stack_ffffffffffffff20;
    auVar18 = il2cpp_runtime_helper_022b2c90();
    if (auVar18._8_4_ != 1) goto label_043d2a6c;
    in_stack_ffffffffffffff20 = __this;
    plVar13 = (long *)__cxa_begin_catch(auVar18._0_8_);
    lVar8 = *plVar13;
    __cxa_end_catch();
    __this_04.fields._8_8_ = in_stack_ffffffffffffff20;
    __this_04.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff18;
    __this_04.fields._currentKey = (Il2CppObject *)pSVar19;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff28);
    if (lVar8 != 0) break;
label_043d2739:
    pSVar5 = (__this->fields)._iconsToRemove;
    if (pSVar5 != (System_Collections_Generic_List_Transform__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_b8,
                 (System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
      while( true ) {
        __this_02.fields._8_8_ = in_stack_ffffffffffffff20;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
        __this_02.fields._current = (Il2CppObject *)pSVar19;
        bVar10 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           (__this_02,(MethodInfo_321A1D0 *)local_b8);
        if ((char)bVar10 == '\0') {
          __this_03.fields._8_8_ = in_stack_ffffffffffffff20;
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
          __this_03.fields._current = (Il2CppObject *)pSVar19;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_03,(MethodInfo_321A1C0 *)local_b8);
          return;
        }
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary_object__object___Remove
                  (pSVar6,(Il2CppObject *)local_b8._16_8_,MethodInfo_Boolean_Remove);
      }
      il2cpp_runtime_helper_022b2c90();
label_043d27c6:
      il2cpp_runtime_helper_022b2c90();
label_043d27cb:
      il2cpp_runtime_helper_022b2c90();
label_043d27d0:
      il2cpp_runtime_helper_022b2c90();
label_043d27d5:
      il2cpp_runtime_helper_022b2c90();
label_043d27da:
      il2cpp_runtime_helper_022b2c90();
label_043d27df:
      il2cpp_runtime_helper_022b2c90();
label_043d27e4:
      il2cpp_runtime_helper_022b2c90();
label_043d27e9:
      il2cpp_runtime_helper_022b2c90();
label_043d27ee:
      il2cpp_runtime_helper_022b2c90();
label_043d27f3:
      il2cpp_runtime_helper_022b2c90();
label_043d27f8:
      il2cpp_runtime_helper_022b2c90();
    }
label_043d27fd:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022fefe0(lVar8);
  __this = in_stack_ffffffffffffff20;
label_043d2a6c:
  __this_05.fields._8_8_ = __this;
  __this_05.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff18;
  __this_05.fields._currentKey = (Il2CppObject *)pSVar19;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_05,(MethodInfo_3251B10 *)&stack0xffffffffffffff28);
  _Unwind_Resume(auVar18._0_8_);
}


// UI.MapPopup$$Sync
// il2cpp: void UI_MapPopup__Sync (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d1bf0

void UI_MapPopup__Sync(UI_MapPopup_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t *piVar2;
  UnityEngine_Texture2D_o **ppUVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  int32_t length;
  int iVar7;
  Cameras_MinimapCamera_o *pCVar8;
  UnityEngine_Texture2D_o *pUVar9;
  UnityEngine_UI_RawImage_o *__this_00;
  Il2CppClass *pIVar10;
  System_String_Fields SVar11;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar12;
  long lVar13;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_07;
  undefined1 auVar14 [16];
  bool_conflict bVar15;
  System_String_array *values;
  System_String_o *pSVar16;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_08;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_Object_o *pUVar18;
  UnityEngine_GameObject_o *pUVar19;
  char cVar20;
  System_String_Fields unaff_RBX;
  System_String_o **unaff_RBP;
  UI_MapPopup_o *__this_09;
  System_String_array *pSVar21;
  long *plVar22;
  MethodInfo **unaff_R13;
  bool bVar23;
  float __this_10;
  float fVar24;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar25;
  UnityEngine_Vector3_o position;
  undefined1 auVar26 [12];
  undefined8 in_stack_fffffffffffffe88;
  System_String_array *in_stack_fffffffffffffe90;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar27;
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [8];
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_118 [12];
  float fStack_10c;
  undefined1 auStack_108 [16];
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [16];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_d8;
  System_String_array *pSStack_c0;
  System_String_o *pSStack_b8;
  MethodInfo **ppMStack_b0;
  UI_MapPopup_o *pUStack_a8;
  UnityEngine_UI_Text_o *pUStack_a0;
  System_String_o **ppSStack_98;
  undefined1 local_88 [8];
  float local_80;
  float local_7c;
  System_String_Fields SStack_78;
  System_String_Fields SStack_70;
  
  uVar4 = in_XMM1_Db;
  if (g_data_057ae434 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    g_data_057ae434 = '\x01';
    uVar4 = in_XMM1_Db;
  }
  UI_MapPopup__SyncIcons(__this,method);
  plVar22 = &TypeInfo_SceneLoader;
  pCVar8 = *(Cameras_MinimapCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x20);
  __this_09 = (UI_MapPopup_o *)0x0;
  if (pCVar8 == (Cameras_MinimapCamera_o *)0x0) {
label_043d1e2d:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    bVar15 = Cameras_MinimapCamera__Ready(pCVar8,(MethodInfo *)0x0);
    if ((char)bVar15 == '\0') {
      return;
    }
    pUVar9 = (__this->fields)._texture;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppUVar3 = &(__this->fields)._texture;
    bVar15 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      pUVar9 = *ppUVar3;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    uVar6 = *(uint *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4);
    unaff_RBP = (System_String_o **)(ulong)uVar6;
    unaff_RBX = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Texture2D);
    UnityEngine_Texture2D___ctor_4dd9130
              ((UnityEngine_Texture2D_o *)unaff_RBX,uVar6,uVar6,3,0,(MethodInfo *)0x0);
    *ppUVar3 = (UnityEngine_Texture2D_o *)unaff_RBX;
    il2cpp_runtime_helper_022b4080(ppUVar3);
    __this_09 = *(UI_MapPopup_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (__this_09 == (UI_MapPopup_o *)0x0) goto label_043d1e2d;
    bVar5 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar5 <= (__this_09->klass->_2).naturalAligment) &&
       ((__this_09->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_InGameCamera)) {
      pUVar17 = (__this_09->fields).DoublePanelLeft;
      if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
        pUVar17 = (UnityEngine_Transform_o *)(pUVar17->fields).m_CachedPtr;
        __this_09 = (UI_MapPopup_o *)0x0;
        if (pUVar17 != (UnityEngine_Transform_o *)0x0) {
          UVar25 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
          position.fields.z = UVar25.fields.z;
          position.fields.x = UVar25.fields.x;
          pCVar8 = *(Cameras_MinimapCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x20);
          __this_09 = (UI_MapPopup_o *)0x0;
          if (pCVar8 != (Cameras_MinimapCamera_o *)0x0) {
            fVar24 = (__this->fields)._height;
            position.fields.y = fVar24;
            Cameras_MinimapCamera__TakeSnapshot
                      (pCVar8,position,fVar24,(__this->fields)._texture,0,1,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._background;
            __this_09 = (UI_MapPopup_o *)0x0;
            if (__this_00 != (UnityEngine_UI_RawImage_o *)0x0) {
              UnityEngine_UI_RawImage__set_texture
                        (__this_00,(UnityEngine_Texture_o *)(__this->fields)._texture,(MethodInfo *)0x0);
              (__this->fields)._syncPosition.fields.x = (float)(int)UVar25.fields._0_8_;
              (__this->fields)._syncPosition.fields.y = (float)(int)((ulong)UVar25.fields._0_8_ >> 0x20);
              (__this->fields)._syncPosition.fields.z = position.fields.z;
              return;
            }
          }
        }
      }
      goto label_043d1e2d;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  SStack_70 = (System_String_Fields)&TypeInfo_SceneLoader;
  SStack_78 = unaff_RBX;
  if (g_data_057ae432 == '\0') {
    ppSStack_98 = (System_String_o **)0x43d1e66;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    ppSStack_98 = (System_String_o **)0x43d1e72;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    ppSStack_98 = (System_String_o **)0x43d1e7e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    ppSStack_98 = (System_String_o **)0x43d1e8a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    ppSStack_98 = (System_String_o **)0x43d1e96;
    il2cpp_runtime_helper_023445d0(&"F0");
    ppSStack_98 = (System_String_o **)0x43d1ea2;
    il2cpp_runtime_helper_023445d0(&", ");
    g_data_057ae432 = '\x01';
  }
  local_80 = 0.0;
  local_88 = (undefined1  [8])0x0;
  values = *(System_String_array **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (values == (System_String_array *)0x0) goto label_043d210a;
  pIVar10 = (values->obj).klass;
  bVar5 = (TypeInfo_InGameCamera->_2).naturalAligment;
  if (((pIVar10->_2).naturalAligment < bVar5) ||
     ((pIVar10->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_InGameCamera)) goto label_043d2114;
  if ((values->m_Items[1] == (System_String_o *)0x0) ||
     (SVar11 = values->m_Items[1]->fields, SVar11 == (System_String_Fields)0x0)) {
label_043d210a:
    ppSStack_98 = (System_String_o **)0x43d210f;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    ppSStack_98 = (System_String_o **)0x43d1f2b;
    UVar25 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)SVar11,(MethodInfo *)0x0);
    local_80 = UVar25.fields.z;
    local_88 = UVar25.fields._0_8_;
    __this = (UI_MapPopup_o *)values->m_Items[3];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      ppSStack_98 = (System_String_o **)0x43d1f52;
      il2cpp_runtime_helper_02337ed0();
    }
    ppSStack_98 = (System_String_o **)0x43d1f5e;
    bVar15 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar15 != '\0') {
      if (((values->m_Items[3] == (System_String_o *)0x0) ||
          (SVar11 = values->m_Items[3][4].fields, SVar11 == (System_String_Fields)0x0)) ||
         (pUVar17 = *(UnityEngine_Transform_o **)((long)SVar11 + 0x10),
         pUVar17 == (UnityEngine_Transform_o *)0x0)) goto label_043d210a;
      ppSStack_98 = (System_String_o **)0x43d1f90;
      UVar25 = UnityEngine_Transform__get_position(pUVar17,(MethodInfo *)0x0);
      local_80 = UVar25.fields.z;
      local_88 = UVar25.fields._0_8_;
    }
    __this = (UI_MapPopup_o *)(__this_09->fields)._label;
    ppSStack_98 = (System_String_o **)0x43d1fb6;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
    unaff_R13 = &"F0";
    ppSStack_98 = (System_String_o **)0x43d1fd0;
    pSVar16 = System_Single__ToString_3cccfe0(__this_10,(System_String_o *)local_88,"F0");
    if (values == (System_String_array *)0x0) goto label_043d210a;
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar16;
      ppSStack_98 = (System_String_o **)0x43d1ff3;
      il2cpp_runtime_helper_022b4080(values->m_Items);
      if (1 < (uint)values->max_length) {
        unaff_RBP = &", ";
        values->m_Items[1] = ", ";
        ppSStack_98 = (System_String_o **)0x43d2015;
        fVar24 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 1);
        ppSStack_98 = (System_String_o **)0x43d2025;
        pSVar16 = System_Single__ToString_3cccfe0(fVar24,(System_String_o *)(local_88 + 4),"F0");
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = pSVar16;
          ppSStack_98 = (System_String_o **)0x43d203f;
          il2cpp_runtime_helper_022b4080(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            plVar22 = (long *)&local_80;
            values->m_Items[3] = ", ";
            ppSStack_98 = (System_String_o **)0x43d205f;
            fVar24 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 3);
            ppSStack_98 = (System_String_o **)0x43d206d;
            pSVar16 = System_Single__ToString_3cccfe0(fVar24,(System_String_o *)plVar22,"F0");
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar16;
              ppSStack_98 = (System_String_o **)0x43d208a;
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              ppSStack_98 = (System_String_o **)0x43d2094;
              method_00 = (MethodInfo *)System_String__Concat_3af7570(values,(MethodInfo *)0x0);
              if ((UnityEngine_UI_Text_o *)__this != (UnityEngine_UI_Text_o *)0x0) {
                ppSStack_98 = (System_String_o **)0x43d20af;
                (*(((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.methodPtr)
                          (__this,method_00,
                           (((UnityEngine_UI_Text_o *)__this)->klass->vtable)._75_set_text.method);
                local_7c = (__this_09->fields)._syncTimeLeft;
                ppSStack_98 = (System_String_o **)0x43d20c5;
                fVar24 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                (__this_09->fields)._syncTimeLeft = local_7c - fVar24;
                if (local_7c - fVar24 <= 0.0) {
                  ppSStack_98 = (System_String_o **)0x43d20e8;
                  UI_MapPopup__Sync(__this_09,method_00);
                  (__this_09->fields)._syncTimeLeft = 1.0;
                }
                ppSStack_98 = (System_String_o **)0x43d20fb;
                UI_MapPopup__UpdateIcons(__this_09,method_00);
                return;
              }
              goto label_043d210a;
            }
          }
        }
      }
    }
  }
  ppSStack_98 = (System_String_o **)0x43d2114;
  il2cpp_runtime_helper_022b2ca0();
label_043d2114:
  ppSStack_98 = (System_String_o **)0x43d211c;
  pSVar21 = values;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_c0 = values;
  pSStack_b8 = (System_String_o *)plVar22;
  ppMStack_b0 = unaff_R13;
  pUStack_a8 = __this_09;
  pUStack_a0 = (UnityEngine_UI_Text_o *)__this;
  ppSStack_98 = unaff_RBP;
  if (g_data_057ae433 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae433 = '\x01';
  }
  pSVar27 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_148._0_8_ = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  auStack_148._8_8_ = (Il2CppType *)0x0;
  auStack_148._16_8_ = (Il2CppObject *)0x0;
  pSVar16 = pSVar21->m_Items[0x19];
  if (pSVar16 == (System_String_o *)0x0) goto label_043d27fd;
  piVar1 = (int *)((long)&pSVar16[1].klass + 4);
  *piVar1 = *piVar1 + 1;
  length = *(int32_t *)&pSVar16[1].klass;
  *(undefined4 *)&pSVar16[1].klass = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)pSVar16->fields,0,length,(MethodInfo *)0x0);
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[0x13] ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d27fd;
  __this_08 = System_Collections_Generic_Dictionary_object__object___get_Keys
                        ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[0x13],
                         MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
  if (__this_08 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_043d27fd;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            (&SStack_d8,__this_08,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  in_stack_fffffffffffffe90 = pSVar21;
  pSVar27 = SStack_d8.fields._dictionary;
  while( true ) {
    while( true ) {
      __this_02.fields._8_8_ = in_stack_fffffffffffffe90;
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe88;
      __this_02.fields._currentKey = (Il2CppObject *)pSVar27;
      bVar15 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                         (__this_02,(MethodInfo_3251B20 *)&stack0xfffffffffffffe98);
      if ((char)bVar15 == '\0') {
        __this_03.fields._8_8_ = in_stack_fffffffffffffe90;
        __this_03.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe88;
        __this_03.fields._currentKey = (Il2CppObject *)pSVar27;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251B10 *)&stack0xfffffffffffffe98);
        goto label_043d2739;
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[0x13] ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_043d27c6;
      pUVar17 = (UnityEngine_Transform_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[0x13],
                           SStack_d8.fields._currentKey,MethodInfo_Transform_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar15 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)SStack_d8.fields._currentKey,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar15 == '\0') {
        bVar23 = false;
        iVar7 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        if ((UnityEngine_Transform_o *)SStack_d8.fields._currentKey == (UnityEngine_Transform_o *)0x0)
        goto label_043d27d0;
        pUVar18 = (UnityEngine_Object_o *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)SStack_d8.fields._currentKey,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar15 = UnityEngine_Object__op_Inequality(pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        cVar20 = '\0';
        if ((char)bVar15 != '\0') {
          if (pUVar18 == (UnityEngine_Object_o *)0x0) goto label_043d27e9;
          cVar20 = *(char *)&pUVar18[4].monitor;
        }
        bVar23 = cVar20 != '\0';
        iVar7 = *(int *)(TypeInfo_Object + 0xe4);
        pSVar21 = in_stack_fffffffffffffe90;
      }
      if (iVar7 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar15 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)SStack_d8.fields._currentKey,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      lVar13 = MethodInfo_Void_Add;
      if (bVar23 || (char)bVar15 != '\0') break;
      if ((UnityEngine_Transform_o *)SStack_d8.fields._currentKey == (UnityEngine_Transform_o *)0x0)
      goto label_043d27cb;
      UVar25 = UnityEngine_Transform__get_position
                         ((UnityEngine_Transform_o *)SStack_d8.fields._currentKey,(MethodInfo *)0x0);
      fStack_120 = (float)extraout_XMM0_Dc;
      auStack_128 = (undefined1  [8])UVar25.fields._0_8_;
      fStack_11c = (float)extraout_XMM0_Dd;
      auStack_e8 = ZEXT416(*(uint *)((long)pSVar21->m_Items + 0xbc));
      UVar25 = UnityEngine_Transform__get_position
                         ((UnityEngine_Transform_o *)SStack_d8.fields._currentKey,(MethodInfo *)0x0);
      fStack_f8 = UVar25.fields.z;
      auStack_108 = ZEXT416(*(uint *)((long)pSVar21->m_Items + 0xc4));
      uStack_f4 = uVar4;
      uStack_f0 = in_XMM1_Dc;
      uStack_ec = in_XMM1_Dd;
      if (*(int *)(TypeInfo_MinimapCamera + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      _auStack_118 = ZEXT416((uint)((float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4) /
                                   *(float *)(pSVar21->m_Items + 0x12)));
      if (g_data_057a6841 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
        g_data_057a6841 = '\x01';
        iVar7 = *(int *)(TypeInfo_Math + 0xe4);
      }
      else {
        iVar7 = *(int *)(TypeInfo_Math + 0xe4);
      }
      if (iVar7 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      auStack_128._0_4_ = (float)auStack_118._0_4_ * ((float)auStack_128._0_4_ - (float)auStack_e8._0_4_);
      auStack_128._4_4_ = (float)auStack_118._0_4_ * (fStack_f8 - (float)auStack_108._0_4_);
      auStack_118._0_4_ = (float)auStack_118._0_4_ * 0.0;
      fStack_120 = (float)auStack_118._8_4_ * (fStack_120 - (float)auStack_e8._4_4_);
      fStack_11c = fStack_10c * (fStack_11c - (float)auStack_108._4_4_);
      fVar24 = (float)auStack_118._0_4_ * (float)auStack_118._0_4_ +
               (float)auStack_128._4_4_ * (float)auStack_128._4_4_ +
               (float)auStack_128._0_4_ * (float)auStack_128._0_4_;
      if (fVar24 < 0.0) {
        fVar24 = sqrtf(fVar24);
      }
      else {
        fVar24 = SQRT(fVar24);
      }
      uVar4 = 0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      if ((float)*(int *)(*(long *)(TypeInfo_MinimapCamera + 0xb8) + 4) * 0.5 < fVar24) {
        if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_043d27f3;
        pUVar19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
        if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_043d27f8;
        bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar19,(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          pUVar19 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
          if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_043d2802;
          UnityEngine_GameObject__SetActive(pUVar19,0,(MethodInfo *)0x0);
        }
      }
      else {
        if (pUVar17 == (UnityEngine_Transform_o *)0x0) goto label_043d27e4;
        pUVar19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
        if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_043d27ee;
        bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar19,(MethodInfo *)0x0);
        if ((char)bVar15 == '\0') {
          pUVar19 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
          if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_043d2807;
          UnityEngine_GameObject__SetActive(pUVar19,1,(MethodInfo *)0x0);
        }
        auVar14 = _auStack_128;
        UVar25.fields.z = (float)auStack_118._0_4_;
        UVar25.fields.x = (float)auStack_128._0_4_;
        UVar25.fields.y = (float)auStack_128._4_4_;
        _auStack_128 = auVar14;
        UnityEngine_Transform__set_localPosition(pUVar17,UVar25,(MethodInfo *)0x0);
        if (g_data_057a6843 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
          g_data_057a6843 = '\x01';
        }
        uVar4 = (*(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8))->w;
        in_XMM1_Dc = 0;
        in_XMM1_Dd = 0;
        UnityEngine_Transform__set_rotation
                  (pUVar17,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8)
                   ,(MethodInfo *)0x0);
      }
    }
    __this_01 = (System_Collections_Generic_List_object__o *)pSVar21->m_Items[0x19];
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_043d27d5;
    piVar2 = &(__this_01->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar12 = (__this_01->fields)._items;
    if (pSVar12 == (System_Object_array *)0x0) goto label_043d27df;
    uVar6 = (__this_01->fields)._size;
    if (uVar6 < (uint)pSVar12->max_length) {
      (__this_01->fields)._size = uVar6 + 1;
      pSVar12->m_Items[(int)uVar6] = SStack_d8.fields._currentKey;
      il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar6);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_01,SStack_d8.fields._currentKey,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    if (pUVar17 == (UnityEngine_Transform_o *)0x0) break;
    pUVar18 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar18,(MethodInfo *)0x0);
  }
  do {
    il2cpp_runtime_helper_022b2c90();
label_043d27df:
    il2cpp_runtime_helper_022b2c90();
label_043d27e4:
    il2cpp_runtime_helper_022b2c90();
label_043d27e9:
    il2cpp_runtime_helper_022b2c90();
label_043d27ee:
    il2cpp_runtime_helper_022b2c90();
label_043d27f3:
    il2cpp_runtime_helper_022b2c90();
label_043d27f8:
    il2cpp_runtime_helper_022b2c90();
label_043d27fd:
    do {
      il2cpp_runtime_helper_022b2c90();
label_043d2802:
      il2cpp_runtime_helper_022b2c90();
label_043d2807:
      pSVar21 = in_stack_fffffffffffffe90;
      auVar26 = il2cpp_runtime_helper_022b2c90();
      if (auVar26._8_4_ != 1) {
label_043d2a6c:
        __this_07.fields._8_8_ = pSVar21;
        __this_07.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe88;
        __this_07.fields._currentKey = (Il2CppObject *)pSVar27;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_07,(MethodInfo_3251B10 *)&stack0xfffffffffffffe98);
        _Unwind_Resume(auVar26._0_8_);
      }
      in_stack_fffffffffffffe90 = pSVar21;
      plVar22 = (long *)__cxa_begin_catch(auVar26._0_8_);
      lVar13 = *plVar22;
      __cxa_end_catch();
      __this_06.fields._8_8_ = in_stack_fffffffffffffe90;
      __this_06.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffe88;
      __this_06.fields._currentKey = (Il2CppObject *)pSVar27;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_06,(MethodInfo_3251B10 *)&stack0xfffffffffffffe98);
      if (lVar13 != 0) {
        il2cpp_runtime_helper_022fefe0(lVar13);
        pSVar21 = in_stack_fffffffffffffe90;
        goto label_043d2a6c;
      }
label_043d2739:
    } while ((System_Collections_Generic_List_object__o *)pSVar21->m_Items[0x19] ==
             (System_Collections_Generic_List_object__o *)0x0);
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_148,
               (System_Collections_Generic_List_object__o *)pSVar21->m_Items[0x19],MethodInfo_List_1_T_Enumerator_UnityEngine_Transform_GetEnumerator);
    while( true ) {
      __this_04.fields._8_8_ = in_stack_fffffffffffffe90;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe88;
      __this_04.fields._current = (Il2CppObject *)pSVar27;
      bVar15 = System_Collections_Generic_List_Enumerator_object___MoveNext
                         (__this_04,(MethodInfo_321A1D0 *)auStack_148);
      if ((char)bVar15 == '\0') {
        __this_05.fields._8_8_ = in_stack_fffffffffffffe90;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffe88;
        __this_05.fields._current = (Il2CppObject *)pSVar27;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)auStack_148);
        return;
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[0x13] ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Remove
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar21->m_Items[0x13],
                 (Il2CppObject *)auStack_148._16_8_,MethodInfo_Boolean_Remove);
    }
    il2cpp_runtime_helper_022b2c90();
label_043d27c6:
    il2cpp_runtime_helper_022b2c90();
label_043d27cb:
    il2cpp_runtime_helper_022b2c90();
label_043d27d0:
    il2cpp_runtime_helper_022b2c90();
label_043d27d5:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// UI.MapPopup$$SyncIcons
// il2cpp: void UI_MapPopup__SyncIcons (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d2ab0

void UI_MapPopup__SyncIcons(UI_MapPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  UnityEngine_UI_RawImage_o *__this_00;
  long lVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_05;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  UnityEngine_Component_o *__this_07;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *p;
  long *plVar6;
  MethodInfo *method_00;
  undefined1 auVar7 [12];
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar8;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (g_data_057ae435 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MinimapHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_Instantiate_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae435 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  if (*(int *)((long)&TypeInfo_MinimapHandler[2].parameters + 4) == 0) {
    method_00 = TypeInfo_MinimapHandler;
    il2cpp_runtime_helper_02337ed0();
    __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)
                UI_MinimapHandler__GetIcons(method_00);
  }
  else {
    __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)
                UI_MinimapHandler__GetIcons(TypeInfo_MinimapHandler);
  }
  if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    return;
  }
  __this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys(__this_05,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Trans);
  if (__this_06 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
label_043d2ea9:
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ == 1) {
      plVar6 = (long *)__cxa_begin_catch(auVar7._0_8_);
      lVar2 = *plVar6;
      __cxa_end_catch();
      __this_03.fields._8_8_ = __this;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
      __this_03.fields._currentKey = (Il2CppObject *)pSVar8;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
      if (lVar2 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_04.fields._8_8_ = __this;
    __this_04.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
    __this_04.fields._currentKey = (Il2CppObject *)pSVar8;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
    _Unwind_Resume(auVar7._0_8_);
  }
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            (&local_48,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  pSVar8 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
           local_48.fields._dictionary;
label_043d2c00:
  do {
    __this_01.fields._8_8_ = __this;
    __this_01.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
    __this_01.fields._currentKey = (Il2CppObject *)pSVar8;
    bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                      (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff98);
    if ((char)bVar3 == '\0') {
      __this_02.fields._8_8_ = __this;
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
      __this_02.fields._currentKey = (Il2CppObject *)pSVar8;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)local_48.fields._currentKey,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
  } while ((char)bVar3 != '\0');
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto code_r0x043d2c50;
  il2cpp_runtime_helper_022b2c90();
  goto label_043d2e81;
code_r0x043d2c50:
  bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (pSVar1,local_48.fields._currentKey,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar3 != '\0') goto label_043d2c00;
  __this_07 = (UnityEngine_Component_o *)
              System_Collections_Generic_Dictionary_object__object___get_Item
                        (__this_05,local_48.fields._currentKey,MethodInfo_Transform_get_Item);
  if (__this_07 == (UnityEngine_Component_o *)0x0) {
label_043d2e81:
    il2cpp_runtime_helper_022b2c90();
label_043d2e86:
    il2cpp_runtime_helper_022b2c90();
label_043d2e8b:
    il2cpp_runtime_helper_022b2c90();
label_043d2e90:
    il2cpp_runtime_helper_022b2c90();
label_043d2e95:
    il2cpp_runtime_helper_022b2c90();
label_043d2e9a:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pUVar4 = UnityEngine_Component__get_gameObject(__this_07,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar4 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate_object_((Il2CppObject *)pUVar4,MethodInfo_GameObject_Instantiate_GameObject);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto label_043d2e86;
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._background;
    if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043d2e8b;
    p = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_043d2e90;
    UnityEngine_Transform__SetParent(pUVar5,p,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (g_data_057a65d5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
    }
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_043d2e95;
    UnityEngine_Transform__set_localPosition
              (pUVar5,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
               (MethodInfo *)0x0);
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (g_data_057a6932 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6932 = '\x01';
    }
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_043d2e9a;
    UnityEngine_Transform__set_localScale
              (pUVar5,(UnityEngine_Vector3_o)
                      *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),(MethodInfo *)0x0)
    ;
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    if (g_data_057a6843 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
      g_data_057a6843 = '\x01';
    }
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation
                (pUVar5,(UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                 (MethodInfo *)0x0);
      UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._icons;
      pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,local_48.fields._currentKey,(Il2CppObject *)pUVar5,MethodInfo_Void_Add);
        goto label_043d2c00;
      }
      goto label_043d2ea4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_043d2ea4:
  il2cpp_runtime_helper_022b2c90();
  goto label_043d2ea9;
}


// UI.MapPopup$$SetupBottomButtons
// il2cpp: void UI_MapPopup__SetupBottomButtons (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d19d0

void UI_MapPopup__SetupBottomButtons(UI_MapPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (g_data_057ae436 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__26_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__26_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupBottomButtons_b__26_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Zoom Out");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Zoom In");
    g_data_057ae436 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,"Zoom In",0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,"Zoom Out",0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.MapPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapPopup__OnBottomBarButtonClick (UI_MapPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43d3180

void UI_MapPopup__OnBottomBarButtonClick(UI_MapPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  undefined4 uVar2;
  bool_conflict bVar3;
  UI_StylebarHandler_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  UI_InGameMenu_o *__this_02;
  float fVar4;
  
  if (g_data_057ae437 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Plus");
    il2cpp_runtime_helper_023445d0(&"Minus");
    g_data_057ae437 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    method_00 = "Plus";
    bVar3 = System_String__op_Equality(name,(System_String_o *)"Plus",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      method_00 = "Minus";
      bVar3 = System_String__op_Equality(name,(System_String_o *)"Minus",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      fVar4 = (__this->fields)._height + 500.0;
    }
    else {
      fVar4 = (__this->fields)._height + -500.0;
      if (fVar4 <= 100.0) {
        fVar4 = 100.0;
      }
    }
    (__this->fields)._height = fVar4;
    UI_MapPopup__Sync(__this,method_00);
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_02 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__SetMapMenu(__this_02,0,1,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae438 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    il2cpp_runtime_helper_023445d0(&"MapPopup");
    g_data_057ae438 = '\x01';
  }
  (__this_02->fields).CharacterInfoHandler = "MapPopup";
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).CharacterInfoHandler);
  *(undefined4 *)&(__this_02->fields).HUDBottomHandler = 0x44fa0000;
  __this_00 = (UI_StylebarHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
  (__this_02->fields).StylebarHandler = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).StylebarHandler,__this_00);
  *(undefined4 *)&(__this_02->fields).VoiceChatPanel = 0x3f800000;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar2 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  *(undefined8 *)((long)&(__this_02->fields).VoiceChatPanel + 4) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  *(undefined4 *)((long)&(__this_02->fields).TopLeftHud + 4) = uVar2;
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_Transform);
  (__this_02->fields).KDRReference = (UnityEngine_GameObject_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).KDRReference);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.MapPopup$$.ctor
// il2cpp: void UI_MapPopup___ctor (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d32f0

void UI_MapPopup___ctor(UI_MapPopup_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_Transform__o *__this_01;
  
  if (g_data_057ae438 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    il2cpp_runtime_helper_023445d0(&"MapPopup");
    g_data_057ae438 = '\x01';
  }
  (__this->fields).LocaleCategory = "MapPopup";
  il2cpp_runtime_helper_022b4080(&(__this->fields).LocaleCategory);
  (__this->fields)._height = 2000.0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
  (__this->fields)._icons = (System_Collections_Generic_Dictionary_Transform__Transform__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._icons,__this_00);
  (__this->fields)._syncTimeLeft = 1.0;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._syncPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._syncPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._syncPosition.fields.z = fVar1;
  __this_01 = (System_Collections_Generic_List_Transform__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_UnityEngine_Transform);
  (__this->fields)._iconsToRemove = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._iconsToRemove);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapPopup$$<SetupBottomButtons>b__26_0
// il2cpp: void UI_MapPopup___SetupBottomButtons_b__26_0 (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d3440

void UI_MapPopup___SetupBottomButtons_b__26_0(UI_MapPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  undefined4 uVar2;
  MethodInfo *a;
  bool_conflict bVar3;
  UI_StylebarHandler_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  UI_InGameMenu_o *__this_02;
  float fVar4;
  
  if (g_data_057ae439 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Plus");
    g_data_057ae439 = '\x01';
  }
  a = "Plus";
  if (g_data_057ae437 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Plus");
    il2cpp_runtime_helper_023445d0(&"Minus");
    g_data_057ae437 = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    method_00 = "Plus";
    bVar3 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Plus",(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      method_00 = "Minus";
      bVar3 = System_String__op_Equality
                        ((System_String_o *)a,(System_String_o *)"Minus",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      fVar4 = (__this->fields)._height + 500.0;
    }
    else {
      fVar4 = (__this->fields)._height + -500.0;
      if (fVar4 <= 100.0) {
        fVar4 = 100.0;
      }
    }
    (__this->fields)._height = fVar4;
    UI_MapPopup__Sync(__this,method_00);
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_02 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__SetMapMenu(__this_02,0,1,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae438 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    il2cpp_runtime_helper_023445d0(&"MapPopup");
    g_data_057ae438 = '\x01';
  }
  (__this_02->fields).CharacterInfoHandler = "MapPopup";
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).CharacterInfoHandler);
  *(undefined4 *)&(__this_02->fields).HUDBottomHandler = 0x44fa0000;
  __this_00 = (UI_StylebarHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
  (__this_02->fields).StylebarHandler = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).StylebarHandler,__this_00);
  *(undefined4 *)&(__this_02->fields).VoiceChatPanel = 0x3f800000;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar2 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  *(undefined8 *)((long)&(__this_02->fields).VoiceChatPanel + 4) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  *(undefined4 *)((long)&(__this_02->fields).TopLeftHud + 4) = uVar2;
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_Transform);
  (__this_02->fields).KDRReference = (UnityEngine_GameObject_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).KDRReference);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.MapPopup$$<SetupBottomButtons>b__26_1
// il2cpp: void UI_MapPopup___SetupBottomButtons_b__26_1 (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d3480

void UI_MapPopup___SetupBottomButtons_b__26_1(UI_MapPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  undefined4 uVar2;
  MethodInfo *a;
  bool_conflict bVar3;
  UI_StylebarHandler_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  UI_InGameMenu_o *__this_02;
  float fVar4;
  
  if (g_data_057ae43a == '\0') {
    il2cpp_runtime_helper_023445d0(&"Minus");
    g_data_057ae43a = '\x01';
  }
  a = "Minus";
  if (g_data_057ae437 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Plus");
    il2cpp_runtime_helper_023445d0(&"Minus");
    g_data_057ae437 = '\x01';
  }
  bVar3 = System_String__op_Equality((System_String_o *)a,"Back",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    method_00 = "Plus";
    bVar3 = System_String__op_Equality((System_String_o *)a,(System_String_o *)"Plus",(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      method_00 = "Minus";
      bVar3 = System_String__op_Equality
                        ((System_String_o *)a,(System_String_o *)"Minus",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      fVar4 = (__this->fields)._height + 500.0;
    }
    else {
      fVar4 = (__this->fields)._height + -500.0;
      if (fVar4 <= 100.0) {
        fVar4 = 100.0;
      }
    }
    (__this->fields)._height = fVar4;
    UI_MapPopup__Sync(__this,method_00);
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_02 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__SetMapMenu(__this_02,0,1,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae438 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    il2cpp_runtime_helper_023445d0(&"MapPopup");
    g_data_057ae438 = '\x01';
  }
  (__this_02->fields).CharacterInfoHandler = "MapPopup";
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).CharacterInfoHandler);
  *(undefined4 *)&(__this_02->fields).HUDBottomHandler = 0x44fa0000;
  __this_00 = (UI_StylebarHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
  (__this_02->fields).StylebarHandler = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).StylebarHandler,__this_00);
  *(undefined4 *)&(__this_02->fields).VoiceChatPanel = 0x3f800000;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar2 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  *(undefined8 *)((long)&(__this_02->fields).VoiceChatPanel + 4) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  *(undefined4 *)((long)&(__this_02->fields).TopLeftHud + 4) = uVar2;
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_Transform);
  (__this_02->fields).KDRReference = (UnityEngine_GameObject_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).KDRReference);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.MapPopup$$<SetupBottomButtons>b__26_2
// il2cpp: void UI_MapPopup___SetupBottomButtons_b__26_2 (UI_MapPopup_o* __this, const MethodInfo* method);
// 0x43d34c0

void UI_MapPopup___SetupBottomButtons_b__26_2(UI_MapPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  undefined4 uVar2;
  System_String_o *a;
  bool_conflict bVar3;
  UI_StylebarHandler_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *method_00;
  UI_InGameMenu_o *__this_02;
  float fVar4;
  
  if (g_data_057ae43b == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae43b = '\x01';
  }
  a = "Back";
  if (g_data_057ae437 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Plus");
    il2cpp_runtime_helper_023445d0(&"Minus");
    g_data_057ae437 = '\x01';
  }
  bVar3 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    method_00 = "Plus";
    bVar3 = System_String__op_Equality(a,(System_String_o *)"Plus",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      method_00 = "Minus";
      bVar3 = System_String__op_Equality(a,(System_String_o *)"Minus",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      fVar4 = (__this->fields)._height + 500.0;
    }
    else {
      fVar4 = (__this->fields)._height + -500.0;
      if (fVar4 <= 100.0) {
        fVar4 = 100.0;
      }
    }
    (__this->fields)._height = fVar4;
    UI_MapPopup__Sync(__this,method_00);
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (__this_02 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (__this_02->klass->_2).naturalAligment) &&
       ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      UI_InGameMenu__SetMapMenu(__this_02,0,1,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae438 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Transform_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Transform);
    il2cpp_runtime_helper_023445d0(&"MapPopup");
    g_data_057ae438 = '\x01';
  }
  (__this_02->fields).CharacterInfoHandler = "MapPopup";
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).CharacterInfoHandler);
  *(undefined4 *)&(__this_02->fields).HUDBottomHandler = 0x44fa0000;
  __this_00 = (UI_StylebarHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Transform_Transform);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,MethodInfo_Dictionary_2_UnityEngine_Transform_UnityEngine_Transform);
  (__this_02->fields).StylebarHandler = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).StylebarHandler,__this_00);
  *(undefined4 *)&(__this_02->fields).VoiceChatPanel = 0x3f800000;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar2 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  *(undefined8 *)((long)&(__this_02->fields).VoiceChatPanel + 4) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  *(undefined4 *)((long)&(__this_02->fields).TopLeftHud + 4) = uVar2;
  __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Transform);
  System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_Transform);
  (__this_02->fields).KDRReference = (UnityEngine_GameObject_o *)__this_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).KDRReference);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_02,(MethodInfo *)0x0);
  return;
}



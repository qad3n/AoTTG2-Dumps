// Type: UI.WheelPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/WheelPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/WheelPopup.cs
// --------------------------------

// UI.WheelPopup.<>c__DisplayClass8_0$$.ctor
// il2cpp: void UI_WheelPopup___c__DisplayClass8_0___ctor (UI_WheelPopup___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x43ee450

void UI_WheelPopup___c__DisplayClass8_0___ctor
               (UI_WheelPopup___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.WheelPopup.<>c__DisplayClass8_0$$<Setup>b__0
// il2cpp: void UI_WheelPopup___c__DisplayClass8_0___Setup_b__0 (UI_WheelPopup___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x43eeb70

void UI_WheelPopup___c__DisplayClass8_0___Setup_b__0
               (UI_WheelPopup___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  UI_WheelPopup_o *pUVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  code *vtableDispatch;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_WheelPopup_o *)0x0) {
    (pUVar1->fields).SelectedItem = (__this->fields).index;
    pUVar2 = (pUVar1->fields)._callback;
    if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
      vtableDispatch = (code *)(pUVar2->fields).invoke_impl;
      (*vtableDispatch)
                ((pUVar2->fields).method_code,(pUVar2->fields).method,in_RDX,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.WheelPopup$$get_AnimationTime
// il2cpp: float UI_WheelPopup__get_AnimationTime (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x43edfb0

float UI_WheelPopup__get_AnimationTime(UI_WheelPopup_o *__this,MethodInfo *method)

{
  return 0.2;
}


// UI.WheelPopup$$get_PopupAnimationType
// il2cpp: int32_t UI_WheelPopup__get_PopupAnimationType (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x43edfc0

int32_t UI_WheelPopup__get_PopupAnimationType(UI_WheelPopup_o *__this,MethodInfo *method)

{
  return 1;
}


// UI.WheelPopup$$Setup
// il2cpp: void UI_WheelPopup__Setup (UI_WheelPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43edfd0

void UI_WheelPopup__Setup(UI_WheelPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GameObject__o *pSVar3;
  UnityEngine_GameObject_array *pUVar4;
  Il2CppClass *__this_00;
  long lVar5;
  UI_WheelPopup_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UI_WheelPopup_o *__this_01;
  UI_WheelPopup_o *__this_02;
  UnityEngine_GameObject_o *pUVar9;
  Il2CppObject *pIVar10;
  int32_t index;
  
  if (g_data_057ae506 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Panel/Center/Label");
    il2cpp_runtime_helper_023445d0(&"Panel/Buttons");
    il2cpp_runtime_helper_023445d0(&"Prefabs/InGame/WheelButton");
    g_data_057ae506 = '\x01';
  }
  __this_01 = __this;
  pUVar6 = (UI_WheelPopup_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 != (UI_WheelPopup_o *)0x0) {
    index = 0;
    pUVar7 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar6,"Panel/Center/Label",(MethodInfo *)0x0);
    __this_01 = pUVar6;
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      pUVar8 = (UnityEngine_UI_Text_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._centerText = pUVar8;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._centerText);
      do {
        pUVar6 = (UI_WheelPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass8_0);
        __this_01 = pUVar6;
        System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
        if (pUVar6 == (UI_WheelPopup_o *)0x0) goto label_043ee43d;
        (pUVar6->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)__this;
        il2cpp_runtime_helper_022b4080(&(pUVar6->fields).m_CancellationTokenSource);
        pSVar3 = (__this->fields)._buttons;
        __this_01 = __this;
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_043ee43d;
        __this_01 = (UI_WheelPopup_o *)UnityEngine_Transform__Find(pUVar7,"Panel/Buttons",(MethodInfo *)0x0);
        __this_02 = (UI_WheelPopup_o *)
                    UI_ElementFactory__InstantiateAndBind
                              ((UnityEngine_Transform_o *)__this_01,"Prefabs/InGame/WheelButton",(MethodInfo *)0x0);
        if ((__this_02 == (UI_WheelPopup_o *)0x0) ||
           (pUVar9 = UnityEngine_GameObject__get_gameObject
                               ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0), lVar5 = MethodInfo_Void_Add
           , __this_01 = __this_02, pSVar3 == (System_Collections_Generic_List_GameObject__o *)0x0))
        goto label_043ee43d;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar3->fields)._items;
        if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto label_043ee43d;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2] = pUVar9;
          il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar2);
          *(int32_t *)&(pUVar6->fields).m_CachedPtr = index;
          __this_01 = (UI_WheelPopup_o *)(__this->fields)._buttons;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar9,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          *(int32_t *)&(pUVar6->fields).m_CachedPtr = index;
          __this_01 = (UI_WheelPopup_o *)(__this->fields)._buttons;
        }
        if (((__this_01 == (UI_WheelPopup_o *)0x0) ||
            (pUVar6 = (UI_WheelPopup_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_GameObject_get_Item),
            pUVar6 == (UI_WheelPopup_o *)0x0)) ||
           (pIVar10 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)pUVar6,MethodInfo_Button_GetComponent_Button), __this_01 = pUVar6,
           pIVar10 == (Il2CppObject *)0x0)) goto label_043ee43d;
        __this_00 = pIVar10[0x10].klass;
        pUVar6 = (UI_WheelPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        __this_01 = pUVar6;
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 == (Il2CppClass *)0x0) goto label_043ee43d;
        UnityEngine_Events_UnityEvent__AddListener
                  ((UnityEngine_Events_UnityEvent_o *)__this_00,(UnityEngine_Events_UnityAction_o *)pUVar6,
                   (MethodInfo *)0x0);
        index = index + 1;
      } while (index != 8);
      pSVar3 = (__this->fields)._buttons;
      __this_01 = (UI_WheelPopup_o *)0x0;
      if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        pUVar9 = (UnityEngine_GameObject_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_GameObject_get_Item);
        UI_ElementFactory__SetAnchor(pUVar9,4,7,(UnityEngine_Vector2_o)0x4334000000000000,(MethodInfo *)0x0);
        pSVar3 = (__this->fields)._buttons;
        __this_01 = (UI_WheelPopup_o *)0x0;
        if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
          pUVar9 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,1,MethodInfo_GameObject_get_Item);
          UI_ElementFactory__SetAnchor(pUVar9,4,6,(UnityEngine_Vector2_o)0x42b4000043070000,(MethodInfo *)0x0)
          ;
          pSVar3 = (__this->fields)._buttons;
          __this_01 = (UI_WheelPopup_o *)0x0;
          if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
            pUVar9 = (UnityEngine_GameObject_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,2,MethodInfo_GameObject_get_Item);
            UI_ElementFactory__SetAnchor(pUVar9,4,3,(UnityEngine_Vector2_o)0x43340000,(MethodInfo *)0x0);
            pSVar3 = (__this->fields)._buttons;
            __this_01 = (UI_WheelPopup_o *)0x0;
            if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
              pUVar9 = (UnityEngine_GameObject_o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,3,MethodInfo_GameObject_get_Item);
              UI_ElementFactory__SetAnchor
                        (pUVar9,4,0,(UnityEngine_Vector2_o)0xc2b4000043070000,(MethodInfo *)0x0);
              pSVar3 = (__this->fields)._buttons;
              __this_01 = (UI_WheelPopup_o *)0x0;
              if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                pUVar9 = (UnityEngine_GameObject_o *)
                         System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)pSVar3,4,MethodInfo_GameObject_get_Item);
                UI_ElementFactory__SetAnchor
                          (pUVar9,4,1,(UnityEngine_Vector2_o)0xc334000000000000,(MethodInfo *)0x0);
                pSVar3 = (__this->fields)._buttons;
                __this_01 = (UI_WheelPopup_o *)0x0;
                if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                  pUVar9 = (UnityEngine_GameObject_o *)
                           System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar3,5,MethodInfo_GameObject_get_Item);
                  UI_ElementFactory__SetAnchor
                            (pUVar9,4,2,(UnityEngine_Vector2_o)0xc2b40000c3070000,(MethodInfo *)0x0);
                  pSVar3 = (__this->fields)._buttons;
                  __this_01 = (UI_WheelPopup_o *)0x0;
                  if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                    pUVar9 = (UnityEngine_GameObject_o *)
                             System_Collections_Generic_List_object___get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar3,6,MethodInfo_GameObject_get_Item);
                    UI_ElementFactory__SetAnchor
                              (pUVar9,4,5,(UnityEngine_Vector2_o)0xc3340000,(MethodInfo *)0x0);
                    pSVar3 = (__this->fields)._buttons;
                    __this_01 = (UI_WheelPopup_o *)0x0;
                    if (pSVar3 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                      pUVar9 = (UnityEngine_GameObject_o *)
                               System_Collections_Generic_List_object___get_Item
                                         ((System_Collections_Generic_List_object__o *)pSVar3,7,MethodInfo_GameObject_get_Item);
                      UI_ElementFactory__SetAnchor
                                (pUVar9,4,8,(UnityEngine_Vector2_o)0x42b40000c3070000,(MethodInfo *)0x0);
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
  }
label_043ee43d:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.WheelPopup$$Show
// il2cpp: void UI_WheelPopup__Show (UI_WheelPopup_o* __this, System_String_o* openKey, System_Collections_Generic_List_string__o* options, UnityEngine_Events_UnityAction_o* callback, const MethodInfo* method);
// 0x43ee460

void UI_WheelPopup__Show(UI_WheelPopup_o *__this,System_String_o *openKey,
                        System_Collections_Generic_List_string__o *options,
                        UnityEngine_Events_UnityAction_o *callback,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  long lVar3;
  System_Collections_Specialized_OrderedDictionary_o *pSVar4;
  long *plVar5;
  uint in_EAX;
  bool_conflict bVar6;
  UnityEngine_GameObject_o *pUVar7;
  System_String_o *pSVar8;
  System_String_o **ppSVar9;
  UnityEngine_Transform_o *pUVar10;
  Il2CppObject *pIVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  UI_TooltipPopup_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  int iVar14;
  ulong uVar15;
  int iVar16;
  undefined4 uVar17;
  Il2CppClass *str1;
  Il2CppClass *pIVar18;
  System_String_o *pSVar19;
  System_String_o **ppSVar20;
  MethodInfo_362BED0 **str0;
  float alpha;
  undefined1 auVar21 [16];
  undefined8 uStack_a0;
  ulong uStack_98;
  System_String_o *pSStack_90;
  System_String_o *pSStack_88;
  Il2CppClass *pIStack_80;
  System_String_o *pSStack_78;
  System_Collections_Specialized_OrderedDictionary_o *pSStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  MethodInfo_362BED0 **ppMStack_58;
  System_String_o *pSStack_50;
  System_Collections_Generic_List_string__o *pSStack_48;
  UI_WheelPopup_o *pUStack_40;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (g_data_057ae507 == '\0') {
    pUStack_40 = (UI_WheelPopup_o *)0x43ee48c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    pUStack_40 = (UI_WheelPopup_o *)0x43ee498;
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    pUStack_40 = (UI_WheelPopup_o *)0x43ee4a4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pUStack_40 = (UI_WheelPopup_o *)0x43ee4b0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pUStack_40 = (UI_WheelPopup_o *)0x43ee4bc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    pUStack_40 = (UI_WheelPopup_o *)0x43ee4c8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    pUStack_40 = (UI_WheelPopup_o *)0x43ee4d4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pUStack_40 = (UI_WheelPopup_o *)0x43ee4e0;
    il2cpp_runtime_helper_023445d0(&"Text");
    pUStack_40 = (UI_WheelPopup_o *)0x43ee4ec;
    il2cpp_runtime_helper_023445d0(&" - ");
    pUStack_40 = (UI_WheelPopup_o *)0x43ee4f8;
    il2cpp_runtime_helper_023445d0(&"QuickSelect");
    g_data_057ae507 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  pUStack_40 = (UI_WheelPopup_o *)0x43ee511;
  pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    pUStack_40 = (UI_WheelPopup_o *)0x43ee524;
    bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar7,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if ((char)bVar6 != '\0') {
      pUStack_40 = (UI_WheelPopup_o *)0x43ee532;
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
      pUStack_40 = (UI_WheelPopup_o *)0x43ee545;
      alpha = (float)(*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)(__this);
      pUStack_40 = (UI_WheelPopup_o *)0x43ee54f;
      UI_BasePopup__SetTransformAlpha((UI_BasePopup_o *)__this,alpha,(MethodInfo *)0x0);
      method_00 = extraout_RDX_00;
    }
    pUStack_40 = (UI_WheelPopup_o *)0x43ee55a;
    UI_WheelPopup__SetCenterText(__this,openKey,method_00);
    (__this->fields)._callback = callback;
    pUStack_40 = (UI_WheelPopup_o *)0x43ee570;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._callback);
    if (options != (System_Collections_Generic_List_string__o *)0x0) {
      iVar16 = (options->fields)._size;
      if (0 < iVar16) {
        iVar14 = 0;
        str0 = &MethodInfo_GameObject_get_Item;
        do {
          pSVar2 = (__this->fields)._buttons;
          if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043ee78f;
          pUStack_40 = (UI_WheelPopup_o *)0x43ee5ab;
          pUVar7 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,iVar14,MethodInfo_GameObject_get_Item);
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_043ee78f;
          pUStack_40 = (UI_WheelPopup_o *)0x43ee5c3;
          UnityEngine_GameObject__SetActive(pUVar7,1,(MethodInfo *)0x0);
          lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
          if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x48), lVar3 == 0)) goto label_043ee78f;
          pSVar4 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar3 + 0x10);
          uVar15 = (ulong)(iVar14 + 1U);
          uStack_38 = CONCAT44(iVar14 + 1U,(uint)uStack_38);
          pUStack_40 = (UI_WheelPopup_o *)0x43ee605;
          pSVar8 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
          pUStack_40 = (UI_WheelPopup_o *)0x43ee619;
          pSVar8 = System_String__Concat_3ae5ba0("QuickSelect",pSVar8,(MethodInfo *)0x0);
          if (pSVar4 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) goto label_043ee78f;
          pUStack_40 = (UI_WheelPopup_o *)0x43ee62f;
          ppSVar9 = (System_String_o **)
                    System_Collections_Specialized_OrderedDictionary__get_Item
                              (pSVar4,(Il2CppObject *)pSVar8,(MethodInfo *)0x0);
          if ((System_String_o *)ppSVar9 != (System_String_o *)0x0) {
            bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
            if (((((Il2CppClass *)((System_String_o *)ppSVar9)->klass)->_2).naturalAligment < bVar1) ||
               ((((Il2CppClass *)((System_String_o *)ppSVar9)->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                TypeInfo_KeybindSetting)) {
              pUStack_40 = (UI_WheelPopup_o *)0x43ee7b5;
              str1 = TypeInfo_KeybindSetting;
              pSVar8 = (System_String_o *)ppSVar9;
              il2cpp_runtime_helper_022b2fd0();
              ppMStack_58 = &MethodInfo_GameObject_get_Item;
              pIVar18 = str1;
              ppSVar20 = (System_String_o **)pSVar8;
              uStack_60 = uVar15;
              pSStack_50 = (System_String_o *)ppSVar9;
              pSStack_48 = options;
              pUStack_40 = __this;
              if (g_data_057ae508 == '\0') {
                uStack_68 = 0x43ee7e4;
                il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                uStack_68 = 0x43ee7f0;
                il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                uStack_68 = 0x43ee7fc;
                il2cpp_runtime_helper_023445d0(&"\n");
                uStack_68 = 0x43ee808;
                il2cpp_runtime_helper_023445d0(&"Next");
                uStack_68 = 0x43ee814;
                il2cpp_runtime_helper_023445d0(&"Cancel");
                ppSVar20 = &" - ";
                uStack_68 = 0x43ee820;
                il2cpp_runtime_helper_023445d0();
                g_data_057ae508 = '\x01';
              }
              uVar17 = SUB84(pIVar18,0);
              lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
              if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) {
                plVar5 = *(long **)(lVar3 + 0x48);
                ppSVar20 = (System_String_o **)(System_String_o *)0x0;
                if (plVar5 != (long *)0x0) {
                  pSVar12 = (System_String_o *)pSVar8[7].klass;
                  uStack_68 = 0x43ee876;
                  str0 = (MethodInfo_362BED0 **)(**(code **)(*plVar5 + 0x168))();
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    uStack_68 = 0x43ee891;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  uStack_68 = 0x43ee8a2;
                  pSVar13 = UI_UIManager__GetLocaleCommon("Next",(MethodInfo *)0x0);
                  ppSVar9 = &" - ";
                  uStack_68 = 0x43ee8c5;
                  pSVar19 = " - ";
                  ppSVar20 = (System_String_o **)str0;
                  pSVar13 = System_String__Concat_3af7470
                                      ((System_String_o *)str0," - ",pSVar13,"\n",
                                       (MethodInfo *)0x0);
                  uVar17 = SUB84(pSVar19,0);
                  uVar15 = 0;
                  if (pSVar12 != (System_String_o *)0x0) {
                    uStack_68 = 0x43ee8e4;
                    (*((Il2CppClass *)pSVar12->klass)->vtable[0x4b].methodPtr)
                              (pSVar12,pSVar13,((Il2CppClass *)pSVar12->klass)->vtable[0x4b].method);
                    uVar17 = SUB84(pSVar13,0);
                    plVar5 = (long *)pSVar8[7].klass;
                    uVar15 = 0;
                    ppSVar20 = (System_String_o **)pSVar12;
                    if (plVar5 != (long *)0x0) {
                      uStack_68 = 0x43ee903;
                      pSVar8 = (System_String_o *)(**(code **)(*plVar5 + 0x5d8))(plVar5);
                      uStack_68 = 0x43ee917;
                      pSVar12 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
                      uStack_68 = 0x43ee92c;
                      pSVar8 = System_String__Concat_3af7470
                                         (pSVar8,(System_String_o *)str1," - ",pSVar12,
                                          (MethodInfo *)0x0);
                      lVar3 = *plVar5;
                      (**(code **)(lVar3 + 0x5e8))
                                (plVar5,pSVar8,*(undefined8 *)(lVar3 + 0x5f0),lVar3,*(code **)(lVar3 + 0x5e8))
                      ;
                      return;
                    }
                  }
                }
              }
              uStack_68 = 0x43ee954;
              auVar21 = il2cpp_runtime_helper_022b2c90();
              uStack_68 = auVar21._0_8_;
              (((System_String_o *)((long)ppSVar20 + 0xa8))->fields)._stringLength = uVar17;
              lVar3 = (long)((System_String_o *)((long)ppSVar20 + 0xc0))->klass;
              if (lVar3 != 0) {
                (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28),auVar21._8_8_,
                           *(code **)(lVar3 + 0x18));
                return;
              }
              pSStack_70 = (System_Collections_Specialized_OrderedDictionary_o *)0x43ee987;
              uStack_a0 = il2cpp_runtime_helper_022b2c90();
              uStack_98 = uVar15;
              pSStack_90 = (System_String_o *)str0;
              pSStack_88 = (System_String_o *)ppSVar9;
              pIStack_80 = str1;
              pSStack_78 = pSVar8;
              pSStack_70 = pSVar4;
              if (g_data_057ae509 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
                il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                il2cpp_runtime_helper_023445d0(&"QuickSelect");
                g_data_057ae509 = '\x01';
              }
              uStack_a0 = uStack_a0 & 0xffffffff;
              iVar16 = 0;
              goto label_043ee9fd;
            }
          }
          pSVar2 = (__this->fields)._buttons;
          if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043ee78f;
          pUStack_40 = (UI_WheelPopup_o *)0x43ee688;
          pUVar7 = (UnityEngine_GameObject_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,iVar14,MethodInfo_GameObject_get_Item);
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_043ee78f;
          pUStack_40 = (UI_WheelPopup_o *)0x43ee69b;
          pUVar10 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_043ee78f;
          pUStack_40 = (UI_WheelPopup_o *)0x43ee6b8;
          pUVar10 = UnityEngine_Transform__Find(pUVar10,"Text",(MethodInfo *)0x0);
          if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_043ee78f;
          pUStack_40 = (UI_WheelPopup_o *)0x43ee6d3;
          pIVar11 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
          if ((System_String_o *)ppSVar9 == (System_String_o *)0x0) goto label_043ee78f;
          pUStack_40 = (UI_WheelPopup_o *)0x43ee6f3;
          pSVar8 = (System_String_o *)
                   (*((Il2CppClass *)((System_String_o *)ppSVar9)->klass)->vtable[3].methodPtr)
                             (ppSVar9,((Il2CppClass *)((System_String_o *)ppSVar9)->klass)->vtable[3].method);
          pUStack_40 = (UI_WheelPopup_o *)0x43ee70a;
          pSVar12 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)options,iVar14,MethodInfo_String_get_Item);
          pUStack_40 = (UI_WheelPopup_o *)0x43ee721;
          pSVar8 = System_String__Concat_3af7150(pSVar8," - ",pSVar12,(MethodInfo *)0x0);
          if (pIVar11 == (Il2CppObject *)0x0) goto label_043ee78f;
          pUStack_40 = (UI_WheelPopup_o *)0x43ee73d;
          (*pIVar11->klass->vtable[0x4b].methodPtr)(pIVar11,pSVar8,pIVar11->klass->vtable[0x4b].method);
          iVar16 = (options->fields)._size;
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar16);
      }
      pSVar2 = (__this->fields)._buttons;
      while (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
        if ((pSVar2->fields)._size <= iVar16) goto label_043ee794;
        pUStack_40 = (UI_WheelPopup_o *)0x43ee76f;
        pUVar7 = (UnityEngine_GameObject_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,iVar16,MethodInfo_GameObject_get_Item);
        if (pUVar7 == (UnityEngine_GameObject_o *)0x0) break;
        pUStack_40 = (UI_WheelPopup_o *)0x43ee780;
        UnityEngine_GameObject__SetActive(pUVar7,0,(MethodInfo *)0x0);
        iVar16 = iVar16 + 1;
        pSVar2 = (__this->fields)._buttons;
      }
    }
  }
label_043ee78f:
  pUStack_40 = (UI_WheelPopup_o *)0x43ee794;
  il2cpp_runtime_helper_022b2c90();
label_043ee794:
  pUStack_40 = (UI_WheelPopup_o *)0x43ee79e;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
label_043ee9fd:
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x48), lVar3 == 0)) {
label_043eead5:
    __this_00 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_022b2c90();
label_043eeada:
    il2cpp_runtime_helper_022b2fd0();
    if (g_data_057ae50a == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
      g_data_057ae50a = '\x01';
    }
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_UnityEngine_GameObject);
    (__this_00->fields)._panel = (UnityEngine_RectTransform_o *)__this_01;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._panel);
    UI_BasePopup___ctor(__this_00,(MethodInfo *)0x0);
    return;
  }
  pSVar4 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar3 + 0x10);
  iVar14 = iVar16 + 1;
  uStack_a0 = CONCAT44(iVar14,(undefined4)uStack_a0);
  pSVar8 = System_Int32__ToString((int)&uStack_a0 + 4,(MethodInfo *)0x0);
  pSVar8 = System_String__Concat_3ae5ba0("QuickSelect",pSVar8,(MethodInfo *)0x0);
  if ((pSVar4 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) ||
     (__this_00 = (UI_TooltipPopup_o *)
                  System_Collections_Specialized_OrderedDictionary__get_Item
                            (pSVar4,(Il2CppObject *)pSVar8,(MethodInfo *)0x0),
     __this_00 == (UI_TooltipPopup_o *)0x0)) goto label_043eead5;
  bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
  if (((__this_00->klass->_2).naturalAligment < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) goto label_043eeada;
  bVar6 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)__this_00,0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    (((System_String_o *)((long)ppSVar20 + 0xa8))->fields)._stringLength = iVar16;
    lVar3 = (long)((System_String_o *)((long)ppSVar20 + 0xc0))->klass;
    if (lVar3 == 0) goto label_043eead5;
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
  }
  iVar16 = iVar14;
  if (iVar14 == 8) {
    return;
  }
  goto label_043ee9fd;
}


// UI.WheelPopup$$SetCenterText
// il2cpp: void UI_WheelPopup__SetCenterText (UI_WheelPopup_o* __this, System_String_o* openKey, const MethodInfo* method);
// 0x43ee7c0

void UI_WheelPopup__SetCenterText(UI_WheelPopup_o *__this,System_String_o *openKey,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  UnityEngine_UI_Text_o *pUVar4;
  UnityEngine_UI_Text_c *pUVar5;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  UnityEngine_Events_UnityAction_o *pUVar6;
  code *vtableDispatch;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  bool_conflict bVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  UI_TooltipPopup_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  MethodInfo *extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 unaff_RBX;
  int32_t iVar10;
  System_String_o **ppSVar11;
  UnityEngine_UI_Text_o *pUVar12;
  int iVar13;
  UnityEngine_UI_Text_o *unaff_R12;
  int iVar14;
  System_String_o **unaff_R13;
  undefined8 uStack_68;
  undefined8 uStack_60;
  UnityEngine_UI_Text_o *pUStack_58;
  System_String_o **ppSStack_50;
  System_String_o *pSStack_48;
  UI_WheelPopup_o *pUStack_40;
  
  pSVar9 = openKey;
  ppSVar11 = (System_String_o **)__this;
  if (g_data_057ae508 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"Next");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    ppSVar11 = &" - ";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae508 = '\x01';
    method = extraout_RDX;
  }
  iVar10 = (int32_t)pSVar9;
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
  if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0)) &&
     (plVar3 = *(long **)(lVar2 + 0x48), ppSVar11 = (System_String_o **)(UnityEngine_UI_Text_o *)0x0,
     plVar3 != (long *)0x0)) {
    pUVar12 = (__this->fields)._centerText;
    unaff_R12 = (UnityEngine_UI_Text_o *)
                (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170),method);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = UI_UIManager__GetLocaleCommon("Next",(MethodInfo *)0x0);
    unaff_R13 = &" - ";
    pSVar9 = " - ";
    ppSVar11 = (System_String_o **)unaff_R12;
    pSVar8 = System_String__Concat_3af7470
                       ((System_String_o *)unaff_R12," - ",pSVar8,"\n",(MethodInfo *)0x0);
    iVar10 = (int32_t)pSVar9;
    unaff_RBX = 0;
    if (pUVar12 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar12->klass->vtable)._75_set_text.methodPtr)
                (pUVar12,pSVar8,(pUVar12->klass->vtable)._75_set_text.method);
      iVar10 = (int32_t)pSVar8;
      pUVar4 = (__this->fields)._centerText;
      unaff_RBX = 0;
      ppSVar11 = (System_String_o **)pUVar12;
      if (pUVar4 != (UnityEngine_UI_Text_o *)0x0) {
        pSVar9 = (System_String_o *)(*(pUVar4->klass->vtable)._74_get_text.methodPtr)(pUVar4);
        pSVar8 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
        pSVar9 = System_String__Concat_3af7470(pSVar9,openKey," - ",pSVar8,(MethodInfo *)0x0);
        pUVar5 = pUVar4->klass;
        UNRECOVERED_JUMPTABLE_00 = (pUVar5->vtable)._75_set_text.methodPtr;
        (*UNRECOVERED_JUMPTABLE_00)
                  (pUVar4,pSVar9,(pUVar5->vtable)._75_set_text.method,pUVar5,UNRECOVERED_JUMPTABLE_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(int32_t *)&(((UnityEngine_UI_Text_o *)ppSVar11)->fields).m_ParentMask = iVar10;
  pUVar6 = *(UnityEngine_Events_UnityAction_o **)&(((UnityEngine_UI_Text_o *)ppSVar11)->fields).m_Maskable;
  if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
    vtableDispatch = (code *)(pUVar6->fields).invoke_impl;
    (*vtableDispatch)
              ((pUVar6->fields).method_code,(pUVar6->fields).method,extraout_RDX_00,vtableDispatch);
    return;
  }
  uStack_68 = il2cpp_runtime_helper_022b2c90();
  uStack_60 = unaff_RBX;
  pUStack_58 = unaff_R12;
  ppSStack_50 = unaff_R13;
  pSStack_48 = openKey;
  pUStack_40 = __this;
  if (g_data_057ae509 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"QuickSelect");
    g_data_057ae509 = '\x01';
  }
  uStack_68 = uStack_68 & 0xffffffff;
  iVar13 = 0;
  while ((lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38), lVar2 != 0 &&
         (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0))) {
    __this_00 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar2 + 0x10);
    iVar14 = iVar13 + 1;
    uStack_68 = CONCAT44(iVar14,(undefined4)uStack_68);
    pSVar9 = System_Int32__ToString((int)&uStack_68 + 4,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_3ae5ba0("QuickSelect",pSVar9,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) break;
    __this_01 = (UI_TooltipPopup_o *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          (__this_00,(Il2CppObject *)pSVar9,(MethodInfo *)0x0);
    if (__this_01 == (UI_TooltipPopup_o *)0x0) break;
    bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) goto label_043eeada;
    bVar7 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)__this_01,0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      *(int *)&(((UnityEngine_UI_Text_o *)ppSVar11)->fields).m_ParentMask = iVar13;
      pUVar6 = *(UnityEngine_Events_UnityAction_o **)&(((UnityEngine_UI_Text_o *)ppSVar11)->fields).m_Maskable
      ;
      if (pUVar6 == (UnityEngine_Events_UnityAction_o *)0x0) break;
      (*(code *)(pUVar6->fields).invoke_impl)((pUVar6->fields).method_code);
    }
    iVar13 = iVar14;
    if (iVar14 == 8) {
      return;
    }
  }
  __this_01 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_022b2c90();
label_043eeada:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae50a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae50a = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_01->fields)._panel = (UnityEngine_RectTransform_o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._panel);
  UI_BasePopup___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.WheelPopup$$OnButtonClick
// il2cpp: void UI_WheelPopup__OnButtonClick (UI_WheelPopup_o* __this, int32_t index, const MethodInfo* method);
// 0x43ee960

void UI_WheelPopup__OnButtonClick(UI_WheelPopup_o *__this,int32_t index,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Events_UnityAction_o *pUVar2;
  code *vtableDispatch;
  long lVar3;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UI_TooltipPopup_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  int iVar6;
  int iVar7;
  undefined8 uStack_40;
  
  (__this->fields).SelectedItem = index;
  pUVar2 = (__this->fields)._callback;
  if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
    vtableDispatch = (code *)(pUVar2->fields).invoke_impl;
    (*vtableDispatch)
              ((pUVar2->fields).method_code,(pUVar2->fields).method,method,vtableDispatch);
    return;
  }
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae509 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"QuickSelect");
    g_data_057ae509 = '\x01';
  }
  uStack_40 = uStack_40 & 0xffffffff;
  iVar6 = 0;
  while ((lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38), lVar3 != 0 &&
         (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0))) {
    __this_00 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar3 + 0x10);
    iVar7 = iVar6 + 1;
    uStack_40 = CONCAT44(iVar7,(undefined4)uStack_40);
    pSVar5 = System_Int32__ToString((int)&uStack_40 + 4,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_3ae5ba0("QuickSelect",pSVar5,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) break;
    __this_01 = (UI_TooltipPopup_o *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          (__this_00,(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    if (__this_01 == (UI_TooltipPopup_o *)0x0) break;
    bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) goto label_043eeada;
    bVar4 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)__this_01,0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      (__this->fields).SelectedItem = iVar6;
      pUVar2 = (__this->fields)._callback;
      if (pUVar2 == (UnityEngine_Events_UnityAction_o *)0x0) break;
      (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code);
    }
    iVar6 = iVar7;
    if (iVar7 == 8) {
      return;
    }
  }
  __this_01 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_022b2c90();
label_043eeada:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae50a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae50a = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_01->fields)._panel = (UnityEngine_RectTransform_o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._panel);
  UI_BasePopup___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.WheelPopup$$Update
// il2cpp: void UI_WheelPopup__Update (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x43ee990

void UI_WheelPopup__Update(UI_WheelPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  System_Collections_Specialized_OrderedDictionary_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  uint in_EAX;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UI_TooltipPopup_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  int iVar6;
  int iVar7;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (g_data_057ae509 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"QuickSelect");
    g_data_057ae509 = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  iVar6 = 0;
  while ((lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38), lVar2 != 0 &&
         (lVar2 = *(long *)(lVar2 + 0x48), lVar2 != 0))) {
    __this_00 = *(System_Collections_Specialized_OrderedDictionary_o **)(lVar2 + 0x10);
    iVar7 = iVar6 + 1;
    uStack_38 = CONCAT44(iVar7,(uint)uStack_38);
    pSVar5 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_3ae5ba0("QuickSelect",pSVar5,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) break;
    __this_01 = (UI_TooltipPopup_o *)
                System_Collections_Specialized_OrderedDictionary__get_Item
                          (__this_00,(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    if (__this_01 == (UI_TooltipPopup_o *)0x0) break;
    bVar1 = (TypeInfo_KeybindSetting->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_KeybindSetting)) goto label_043eeada;
    bVar4 = Settings_KeybindSetting__GetKeyDown((Settings_KeybindSetting_o *)__this_01,0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      (__this->fields).SelectedItem = iVar6;
      pUVar3 = (__this->fields)._callback;
      if (pUVar3 == (UnityEngine_Events_UnityAction_o *)0x0) break;
      (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code);
    }
    iVar6 = iVar7;
    if (iVar7 == 8) {
      return;
    }
  }
  __this_01 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_022b2c90();
label_043eeada:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae50a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae50a = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_UnityEngine_GameObject);
  (__this_01->fields)._panel = (UnityEngine_RectTransform_o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._panel);
  UI_BasePopup___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.WheelPopup$$.ctor
// il2cpp: void UI_WheelPopup___ctor (UI_WheelPopup_o* __this, const MethodInfo* method);
// 0x43eeaf0

void UI_WheelPopup___ctor(UI_WheelPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  
  if (g_data_057ae50a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    g_data_057ae50a = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._buttons = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._buttons);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}



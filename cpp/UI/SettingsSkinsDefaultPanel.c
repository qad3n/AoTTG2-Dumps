// Type: UI.SettingsSkinsDefaultPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsSkinsDefaultPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsSkinsDefaultPanel.cs
// --------------------------------

// UI.SettingsSkinsDefaultPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsSkinsDefaultPanel__get_ScrollBar (UI_SettingsSkinsDefaultPanel_o* __this, const MethodInfo* method);
// 0x4448c70

bool_conflict
UI_SettingsSkinsDefaultPanel__get_ScrollBar(UI_SettingsSkinsDefaultPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsSkinsDefaultPanel$$get_VerticalSpacing
// il2cpp: float UI_SettingsSkinsDefaultPanel__get_VerticalSpacing (UI_SettingsSkinsDefaultPanel_o* __this, const MethodInfo* method);
// 0x4448c80

float UI_SettingsSkinsDefaultPanel__get_VerticalSpacing
                (UI_SettingsSkinsDefaultPanel_o *__this,MethodInfo *method)

{
  return 20.0;
}


// UI.SettingsSkinsDefaultPanel$$Setup
// il2cpp: void UI_SettingsSkinsDefaultPanel__Setup (UI_SettingsSkinsDefaultPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4448c90

void UI_SettingsSkinsDefaultPanel__Setup
               (UI_SettingsSkinsDefaultPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Il2CppObject **ppIVar1;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__o *pSVar2;
  int32_t *piVar3;
  int *piVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *pIVar13;
  System_Int32_array *pSVar14;
  System_Collections_Generic_List_int__o *pSVar15;
  Il2CppMethodPointer pIVar16;
  Settings_StringSetting_o *pSVar17;
  UI_BasePanel_c *pUVar18;
  undefined8 uVar19;
  code *pcVar20;
  UI_BasePanel_o *pUVar21;
  void *pvVar22;
  System_RuntimeTypeHandle_o SVar23;
  char cVar24;
  int32_t iVar25;
  bool_conflict bVar26;
  uint uVar27;
  bool_conflict bVar28;
  bool_conflict bVar29;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar30;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_01;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar31;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar32;
  UnityEngine_Events_UnityAction_o *pUVar33;
  UnityEngine_GameObject_o *pUVar34;
  UI_SettingsSkinsPanel_o *__this_03;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar35;
  System_String_o *pSVar36;
  Settings_BaseSetting_o *pSVar37;
  System_String_o *pSVar38;
  System_String_o *pSVar39;
  UI_ElementStyle_o *pUVar40;
  Il2CppObject *pIVar41;
  undefined8 *puVar42;
  System_Collections_Generic_List_object__o *__this_04;
  VirtualInvokeData *pVVar43;
  Il2CppClass *pIVar44;
  long *plVar45;
  System_Type_o *pSVar46;
  System_Type_o *pSVar47;
  Il2CppObject *pIVar48;
  long *plVar49;
  undefined4 uVar50;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *in_RCX;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *parent_00;
  UnityEngine_Transform_o *extraout_RDX;
  UnityEngine_Transform_o *pUVar51;
  Il2CppRuntimeInterfaceOffsetPair *pIVar52;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **unaff_RBX;
  System_Collections_Generic_Dictionary_string__BaseSetting__Fields *pSVar53;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *unaff_RBP;
  int32_t value;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *item;
  MethodInfo *pMVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *in_R9;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *unaff_R12;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar59;
  UI_SettingsSkinsPanel_o *unaff_R13;
  UI_SettingsSkinsPanel_o *pUVar60;
  UI_SettingsSkinsPanel_o *pUVar61;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *unaff_R14;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **ppSVar62;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **unaff_R15;
  undefined4 uVar63;
  undefined4 in_XMM1_Da;
  undefined1 auVar64 [12];
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_a0;
  
  if (g_data_057ae6f7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsSkinsPanel);
    g_data_057ae6f7 = '\x01';
  }
  pSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)parent;
  __this_03 = (UI_SettingsSkinsPanel_o *)__this;
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (parent == (UI_BasePanel_o *)0x0) {
label_04448d4d:
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffff40;
    if (g_data_057ae6fa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
      il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSkinSettings);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ICustomSkinSettings);
      il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
      il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_IndexOf);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsPopup);
      il2cpp_runtime_helper_023445d0(&TypeInfo_string);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__1);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__4);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_0);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__2);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_1);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__3);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_2);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCommonSettings_b__5);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass7_3);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&"SetSpecificSkinsEnabled");
      il2cpp_runtime_helper_023445d0(&"Custom Set:");
      il2cpp_runtime_helper_023445d0(&"SkinsLocal");
      il2cpp_runtime_helper_023445d0(&" ");
      il2cpp_runtime_helper_023445d0(&"Human");
      il2cpp_runtime_helper_023445d0(&"Create");
      il2cpp_runtime_helper_023445d0(&"GlobalSkinOverridesEnabled");
      il2cpp_runtime_helper_023445d0(&"Character");
      il2cpp_runtime_helper_023445d0(&"SkinsLocalTooltip");
      il2cpp_runtime_helper_023445d0(&"SkinsEnabled");
      il2cpp_runtime_helper_023445d0(&"Copy");
      il2cpp_runtime_helper_023445d0(&"Set");
      il2cpp_runtime_helper_023445d0(&"Skins.Human");
      il2cpp_runtime_helper_023445d0(&"Delete");
      il2cpp_runtime_helper_023445d0(&"Category");
      il2cpp_runtime_helper_023445d0(&"SkinMode");
      il2cpp_runtime_helper_023445d0(&"Rename");
      il2cpp_runtime_helper_023445d0(&"Shifter");
      il2cpp_runtime_helper_023445d0(&"GlobalSkinOverridesEnabledTooltip");
      il2cpp_runtime_helper_023445d0(&"Skins.Common");
      il2cpp_runtime_helper_023445d0(&"Skybox");
      il2cpp_runtime_helper_023445d0(&"");
      il2cpp_runtime_helper_023445d0(&"SetSpecificSkinsEnabledTooltip");
      il2cpp_runtime_helper_023445d0(&"Global");
      g_data_057ae6fa = '\x01';
    }
    pSVar30 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_0);
    item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    System_Object___ctor((Il2CppObject *)pSVar30,(MethodInfo *)0x0);
    pSVar59 = pSVar30;
    pUVar60 = __this_03;
    if (pSVar30 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
label_0444a677:
      do {
        do {
          il2cpp_runtime_helper_022b2c90();
          unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)__this;
          unaff_R12 = pSVar59;
          __this_03 = pUVar60;
label_0444a682:
          pUVar61 = __this_03;
          pSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX;
          il2cpp_runtime_helper_022b2fd0(item);
label_0444a687:
          il2cpp_runtime_helper_022b2fd0(unaff_RBP);
          __this_03 = pUVar61;
label_0444a68f:
          unaff_R14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_3);
          item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
          System_Object___ctor((Il2CppObject *)unaff_R14,(MethodInfo *)0x0);
          __this = (UI_SettingsSkinsDefaultPanel_o *)pSVar35;
          pSVar59 = unaff_R12;
          pUVar60 = __this_03;
        } while (unaff_R14 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0);
        unaff_R14->max_length = (il2cpp_array_size_t)pSStack_a0;
        il2cpp_runtime_helper_022b4080(&unaff_R14->max_length);
        uVar50 = SUB84(in_RCX,0);
        unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)pSVar35;
        if (*(int *)&unaff_R12->max_length == 0) goto label_0444a721;
        ((System_Collections_Generic_Dictionary_string__BaseSetting__Fields *)&unaff_R14->bounds)->_buckets =
             (System_Int32_array *)(unaff_RBP->obj).klass;
        il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_string__BaseSetting__Fields *)
                           &unaff_R14->bounds);
        il2cpp_runtime_helper_022b2c90();
label_0444a6e3:
        unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                    il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_2);
        item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        System_Object___ctor((Il2CppObject *)unaff_RBX,(MethodInfo *)0x0);
        uVar50 = SUB84(in_RCX,0);
        __this = (UI_SettingsSkinsDefaultPanel_o *)unaff_RBX;
        pSVar59 = unaff_R12;
        pUVar60 = __this_03;
      } while ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX ==
               (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0);
      ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->max_length =
           (il2cpp_array_size_t)pSStack_a0;
      il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->
                          max_length);
      if (*(int *)&(__this_03->fields).m_CancellationTokenSource == 0) goto label_0444a721;
    }
    else {
      pSVar30->bounds = (Il2CppArrayBounds *)__this_03;
      il2cpp_runtime_helper_022b4080(&pSVar30->bounds,__this_03);
      pSVar39 = (System_String_o *)
                (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
      __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_01,0x18,140.0,20.0,pSVar39,(MethodInfo *)0x0);
      pSVar39 = (System_String_o *)
                (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                          (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
      __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_02,0x18,200.0,20.0,pSVar39,(MethodInfo *)0x0);
      __this = (UI_SettingsSkinsDefaultPanel_o *)
               (*(__this_03->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this_03,(__this_03->klass->vtable)._4_get_ThemePanel.method);
      pUVar40 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
      item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&g_data_00000018;
      in_XMM1_Da = 0x41a00000;
      in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      UI_ElementStyle___ctor(pUVar40,0x18,0.0,20.0,(System_String_o *)__this,(MethodInfo *)0x0);
      if (g_data_057ae6ff == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ae6ff = '\x01';
      }
      pSVar17 = (__this_03->fields)._currentCategoryPanelName;
      unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&TypeInfo_ElementStyle;
      unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)__this_02;
      if ((pSVar17 == (Settings_StringSetting_o *)0x0) ||
         (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_03->fields)._settings
         , __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_0444a677;
      item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_00,(Il2CppObject *)(pSVar17->fields)._value,MethodInfo_ICustomSkinSettings_get_Item);
      pUVar61 = (UI_SettingsSkinsPanel_o *)&pSVar30->max_length;
      pSVar30->max_length = (il2cpp_array_size_t)item;
      il2cpp_runtime_helper_022b4080(pUVar61,item);
      pSVar17 = (__this_03->fields)._currentCategoryPanelName;
      if (pSVar17 == (Settings_StringSetting_o *)0x0) goto label_0444a677;
      pSVar39 = (pSVar17->fields)._value;
      item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x3;
      unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                  il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
      uVar50 = SUB84(in_RCX,0);
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX ==
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0444a677;
      unaff_R12 = pSVar30;
      unaff_R14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)parent;
      if ((int)((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->max_length != 0
         ) {
        *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
         &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->m_Items[0].fields =
             "Human";
        il2cpp_runtime_helper_022b4080(((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->
                           m_Items);
        if (1 < (uint)((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->
                      max_length) {
          ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->m_Items[0].fields.
          key = "Shifter";
          il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->
                              m_Items[0].fields.key);
          if (2 < (uint)((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->
                        max_length) {
            ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->m_Items[0].fields.
            value = "Skybox";
            il2cpp_runtime_helper_022b4080(&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)
                                ->m_Items[0].fields.value);
            pSVar17 = (__this_03->fields)._currentCategoryPanelName;
            pSVar38 = "Category";
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pSVar38 = "Category";
            }
            "Category" = pSVar38;
            if (g_data_057ae727 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
              il2cpp_runtime_helper_023445d0(&"Common");
              il2cpp_runtime_helper_023445d0(&"");
              g_data_057ae727 = '\x01';
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                        UI_UIManager__GetLocale
                                  ("Common",pSVar38,(System_String_o *)"",
                                   (System_String_o *)"",(System_String_o *)"",
                                   (MethodInfo *)in_R9);
            unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            in_XMM1_Da = 0x42200000;
            in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_R15;
            item = __this_01;
            in_R9 = "";
            UI_ElementFactory__CreateDropdownSetting
                      ((UnityEngine_Transform_o *)pSVar35,(UI_ElementStyle_o *)__this_01,
                       (Settings_BaseSetting_o *)pSVar17,(System_String_o *)unaff_R15,
                       (System_String_array *)unaff_RBX,(System_String_o *)"",260.0,40.0,300.0,
                       (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)unaff_RBP,
                       (MethodInfo *)0x0);
            pSVar31 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      (__this_03->fields).Parent;
            __this = (UI_SettingsSkinsDefaultPanel_o *)unaff_RBX;
            pSVar59 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&"";
            pSStack_a0 = pSVar30;
            if (pSVar31 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
              pIVar44 = (pSVar31->obj).klass;
              bVar5 = (TypeInfo_SettingsPopup->_2).naturalAligment;
              in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)bVar5;
              item = pSVar31;
              unaff_R12 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&"";
              if ((pIVar44->_2).naturalAligment < bVar5) goto label_0444a682;
              if ((pIVar44->_2).typeHierarchy[(long)((long)&in_RCX[-1].m_Items[0xfffe].fields.value + 7)] !=
                  TypeInfo_SettingsPopup) goto label_0444a682;
              pSVar38 = (System_String_o *)pSVar31->m_Items[5].fields.value;
              item = "Human";
              bVar26 = System_String__op_Equality(pSVar39,(System_String_o *)"Human",(MethodInfo *)0x0);
              if ((char)bVar26 == '\0') {
                __this = *(UI_SettingsSkinsDefaultPanel_o **)pUVar61;
                unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)pUVar61;
                pSVar59 = pSVar30;
                if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)__this !=
                    (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                  plVar45 = &TypeInfo_ISetSettingsContainer;
                  pIVar44 = (((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)__this)->obj)
                            .klass;
                  uVar6._0_1_ = (pIVar44->_2).rank;
                  uVar6._1_1_ = (pIVar44->_2).minimumAlignment;
                  if ((ulong)uVar6 != 0) {
                    pIVar52 = (pIVar44->_1).interfaceOffsets;
                    lVar56 = 0;
                    do {
                      if (*(long *)((long)&pIVar52->interfaceType + lVar56) == TypeInfo_ISetSettingsContainer) {
                        in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                 (pIVar44->vtable + (*(int *)((long)&pIVar52->offset + lVar56) + 1));
                        goto label_04449730;
                      }
                      lVar56 = lVar56 + 0x10;
                    } while ((ulong)uVar6 << 4 != lVar56);
                  }
                  in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                           il2cpp_runtime_helper_02300d20(__this,TypeInfo_ISetSettingsContainer,1);
label_04449730:
                  item = (in_RCX->obj).monitor;
                  unaff_R14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              (*(code *)(in_RCX->obj).klass)(__this,item);
                  plVar49 = *(long **)pUVar61;
                  unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                  unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)plVar45;
                  if (plVar49 != (long *)0x0) {
                    lVar56 = *plVar49;
                    if ((ulong)*(ushort *)(lVar56 + 0x12e) != 0) {
                      lVar55 = 0;
                      do {
                        if (*(long *)(*(long *)(lVar56 + 0xb0) + lVar55) == TypeInfo_ISetSettingsContainer) {
                          puVar42 = (undefined8 *)
                                    ((long)(*(int *)(*(long *)(lVar56 + 0xb0) + 8 + lVar55) + 3) * 0x10 +
                                     lVar56 + 0x138);
                          goto label_044497a9;
                        }
                        lVar55 = lVar55 + 0x10;
                      } while ((ulong)*(ushort *)(lVar56 + 0x12e) << 4 != lVar55);
                    }
                    puVar42 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar49,TypeInfo_ISetSettingsContainer,3);
label_044497a9:
                    unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                (*(code *)*puVar42)(plVar49,puVar42[1]);
                    pUVar33 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    in_XMM1_Da = 0x42200000;
                    in_RCX = "Set";
                    in_R9 = "";
                    UI_ElementFactory__CreateDropdownSetting
                              ((UnityEngine_Transform_o *)pSVar35,(UI_ElementStyle_o *)__this_01,
                               (Settings_BaseSetting_o *)unaff_R14,(System_String_o *)"Set",
                               (System_String_array *)unaff_RBP,(System_String_o *)"",260.0,40.0,
                               300.0,(System_Nullable_float__o)0x0,pUVar33,(MethodInfo *)0x0);
                    pUVar34 = UI_ElementFactory__CreateHorizontalGroup
                                        ((UnityEngine_Transform_o *)pSVar35,10.0,2,(MethodInfo *)0x0);
                    item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&g_data_00000004;
                    unaff_R12 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
                    uVar50 = SUB84(in_RCX,0);
                    __this = (UI_SettingsSkinsDefaultPanel_o *)pSVar35;
                    if (unaff_R12 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                      unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)pSVar35;
                      if (*(int *)&unaff_R12->max_length != 0) {
                        unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    unaff_R12->m_Items;
                        *(UnityEngine_Transform_o **)&unaff_R12->m_Items[0].fields = "Create";
                        il2cpp_runtime_helper_022b4080(unaff_RBP);
                        uVar50 = SUB84(in_RCX,0);
                        if (1 < *(uint *)&unaff_R12->max_length) {
                          unaff_R12->m_Items[0].fields.key = (Il2CppObject *)"Delete";
                          il2cpp_runtime_helper_022b4080(&unaff_R12->m_Items[0].fields.key);
                          uVar50 = SUB84(in_RCX,0);
                          if (2 < *(uint *)&unaff_R12->max_length) {
                            unaff_R12->m_Items[0].fields.value = (Il2CppObject *)"Rename";
                            il2cpp_runtime_helper_022b4080(&unaff_R12->m_Items[0].fields.value);
                            uVar50 = SUB84(in_RCX,0);
                            if (3 < *(uint *)&unaff_R12->max_length) {
                              *(System_Collections_Generic_List_BasePopup__o **)&unaff_R12->m_Items[1].fields
                                   = "Copy";
                              il2cpp_runtime_helper_022b4080(unaff_R12->m_Items + 1);
                              if (0 < *(int *)&unaff_R12->max_length) {
                                if (pUVar34 == (UnityEngine_GameObject_o *)0x0) goto label_0444a68f;
                                __this_03 = (UI_SettingsSkinsPanel_o *)0x0;
                                do {
                                  unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_3);
                                  item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                         0x0;
                                  System_Object___ctor((Il2CppObject *)unaff_RBP,(MethodInfo *)0x0);
                                  uVar50 = SUB84(in_RCX,0);
                                  pSVar59 = unaff_R12;
                                  pUVar60 = __this_03;
                                  if (unaff_RBP ==
                                      (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                                  goto label_0444a677;
                                  unaff_RBP->max_length = (il2cpp_array_size_t)pSVar30;
                                  il2cpp_runtime_helper_022b4080(&unaff_RBP->max_length);
                                  unaff_RBX = &"";
                                  if ((UI_SettingsSkinsPanel_o *)(ulong)*(uint *)&unaff_R12->max_length <=
                                      __this_03) goto label_0444a721;
                                  ((System_Collections_Generic_Dictionary_string__BaseSetting__Fields *)
                                  &unaff_RBP->bounds)->_buckets =
                                       *(System_Int32_array **)
                                        (&unaff_R12->m_Items[0].fields.hashCode + (long)__this_03 * 2);
                                  il2cpp_runtime_helper_022b4080((System_Collections_Generic_Dictionary_string__BaseSetting__Fields
                                                      *)&unaff_RBP->bounds);
                                  unaff_R14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               *)UnityEngine_GameObject__get_transform
                                                           (pUVar34,(MethodInfo *)0x0);
                                  pSVar14 = ((System_Collections_Generic_Dictionary_string__BaseSetting__Fields
                                              *)&unaff_RBP->bounds)->_buckets;
                                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  if (g_data_057ae727 == '\0') {
                                    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                                    il2cpp_runtime_helper_023445d0(&"Common");
                                    il2cpp_runtime_helper_023445d0(&"");
                                    g_data_057ae727 = '\x01';
                                  }
                                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  plVar45 = (long *)UI_UIManager__GetLocale
                                                              ("Common",(System_String_o *)pSVar14,
                                                               (System_String_o *)"",
                                                               (System_String_o *)"",
                                                               (System_String_o *)"",
                                                               (MethodInfo *)in_R9);
                                  pSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *
                                            )il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                  UnityEngine_Events_UnityAction___ctor();
                                  in_XMM1_Da = 0;
                                  in_RCX = pSVar35;
                                  UI_ElementFactory__CreateDefaultButton
                                            ((UnityEngine_Transform_o *)unaff_R14,
                                             (UI_ElementStyle_o *)__this_01,(System_String_o *)plVar45,0.0,0.0
                                             ,(UnityEngine_Events_UnityAction_o *)pSVar35,(MethodInfo *)0x0);
                                  __this_03 = (UI_SettingsSkinsPanel_o *)((long)&__this_03->klass + 1);
                                  __this = (UI_SettingsSkinsDefaultPanel_o *)pSVar35;
                                  unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               **)plVar45;
                                } while ((long)__this_03 < (long)*(int *)&unaff_R12->max_length);
                              }
label_0444a0d2:
                              item = "Human";
                              bVar26 = System_String__op_Equality
                                                 (pSVar39,(System_String_o *)"Human",(MethodInfo *)0x0);
                              unaff_RBP = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **
                                           )pUVar61;
                              __this = (UI_SettingsSkinsDefaultPanel_o *)pSVar35;
                              pUVar60 = pUVar61;
                              if ((char)bVar26 == '\0') {
                                pSVar59 = parent_00;
                                unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                             **)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                 *)plVar45;
                                if (unaff_RBP !=
                                    (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                                  pIVar44 = (unaff_RBP->obj).klass;
                                  uVar8._0_1_ = (pIVar44->_2).rank;
                                  uVar8._1_1_ = (pIVar44->_2).minimumAlignment;
                                  if ((ulong)uVar8 != 0) {
                                    pIVar52 = (pIVar44->_1).interfaceOffsets;
                                    lVar56 = 0;
                                    do {
                                      if (*(long *)((long)&pIVar52->interfaceType + lVar56) == TypeInfo_ICustomSkinSettings) {
                                        pVVar43 = &((System_Collections_Generic_Dictionary_string__BaseSetting__VTable
                                                     *)pIVar44->vtable)->_0_Equals +
                                                  (*(int *)((long)&pIVar52->offset + lVar56) + 1);
                                        goto label_0444a209;
                                      }
                                      lVar56 = lVar56 + 0x10;
                                    } while ((ulong)uVar8 << 4 != lVar56);
                                  }
                                  pVVar43 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_ICustomSkinSettings,1);
label_0444a209:
                                  pSVar37 = (Settings_BaseSetting_o *)
                                            (*pVVar43->methodPtr)(unaff_RBP,pVVar43->method);
                                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  pSVar36 = UI_UIManager__GetLocale
                                                      (pSVar38,(System_String_o *)"Skins.Common","SkinsEnabled",
                                                       (System_String_o *)"",
                                                       (System_String_o *)"",(MethodInfo *)in_R9);
                                  in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                           System_String__Concat_3af7150
                                                     (pSVar39," ",pSVar36,(MethodInfo *)0x0);
                                  in_XMM1_Da = 0x41f00000;
                                  in_R9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                          0x0;
                                  item = __this_02;
                                  UI_ElementFactory__CreateToggleSetting
                                            ((UnityEngine_Transform_o *)parent_00,
                                             (UI_ElementStyle_o *)__this_02,pSVar37,(System_String_o *)in_RCX,
                                             (System_String_o *)"",30.0,30.0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                  plVar45 = *(long **)pUVar61;
                                  __this = (UI_SettingsSkinsDefaultPanel_o *)
                                           (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                           0x0;
                                  unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               *)&"";
                                  pSVar59 = parent_00;
                                  unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               **)__this_02;
                                  if (plVar45 != (long *)0x0) {
                                    lVar56 = *plVar45;
                                    if ((ulong)*(ushort *)(lVar56 + 0x12e) != 0) {
                                      lVar55 = 0;
                                      do {
                                        if (*(long *)(*(long *)(lVar56 + 0xb0) + lVar55) == TypeInfo_ICustomSkinSettings) {
                                          puVar42 = (undefined8 *)
                                                    ((long)*(int *)(*(long *)(lVar56 + 0xb0) + 8 + lVar55) *
                                                     0x10 + lVar56 + 0x138);
                                          goto label_0444a317;
                                        }
                                        lVar55 = lVar55 + 0x10;
                                      } while ((ulong)*(ushort *)(lVar56 + 0x12e) << 4 != lVar55);
                                    }
                                    puVar42 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar45,TypeInfo_ICustomSkinSettings,0);
label_0444a317:
                                    pIVar41 = (Il2CppObject *)(*(code *)*puVar42)(plVar45,puVar42[1]);
                                    pSVar36 = UI_UIManager__GetLocale
                                                        (pSVar38,(System_String_o *)"Skins.Common","SkinsLocal",
                                                         (System_String_o *)"",
                                                         (System_String_o *)"",(MethodInfo *)in_R9);
                                    pSVar39 = System_String__Concat_3af7150
                                                        (pSVar39," ",pSVar36,(MethodInfo *)0x0);
                                    pSVar38 = UI_UIManager__GetLocale
                                                        (pSVar38,(System_String_o *)"Skins.Common","SkinsLocalTooltip",
                                                         (System_String_o *)"",
                                                         (System_String_o *)"",(MethodInfo *)in_R9);
                                    goto label_0444a654;
                                  }
                                }
                              }
                              else {
                                pSVar59 = unaff_R12;
                                unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                             **)(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                 *)plVar45;
                                if (unaff_RBP !=
                                    (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                                  pIVar44 = (unaff_RBP->obj).klass;
                                  bVar5 = (TypeInfo_HumanCustomSkinSettings->_2).naturalAligment;
                                  in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                           (ulong)bVar5;
                                  unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               **)plVar45;
                                  if ((pIVar44->_2).naturalAligment < bVar5) goto label_0444a687;
                                  if ((pIVar44->_2).typeHierarchy
                                      [(long)((long)&in_RCX[-1].m_Items[0xfffe].fields.value + 7)] !=
                                      TypeInfo_HumanCustomSkinSettings) goto label_0444a687;
                                  pIVar44 = (unaff_RBP->obj).klass;
                                  uVar7._0_1_ = (pIVar44->_2).rank;
                                  uVar7._1_1_ = (pIVar44->_2).minimumAlignment;
                                  if ((ulong)uVar7 != 0) {
                                    pIVar52 = (pIVar44->_1).interfaceOffsets;
                                    lVar56 = 0;
                                    do {
                                      if (*(long *)((long)&pIVar52->interfaceType + lVar56) == TypeInfo_ICustomSkinSettings) {
                                        pVVar43 = &((System_Collections_Generic_Dictionary_string__BaseSetting__VTable
                                                     *)pIVar44->vtable)->_0_Equals +
                                                  (*(int *)((long)&pIVar52->offset + lVar56) + 1);
                                        goto label_0444a3c3;
                                      }
                                      lVar56 = lVar56 + 0x10;
                                    } while ((ulong)uVar7 << 4 != lVar56);
                                  }
                                  pVVar43 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_RBP,TypeInfo_ICustomSkinSettings,1);
label_0444a3c3:
                                  unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               **)(*pVVar43->methodPtr)(unaff_RBP,pVVar43->method);
                                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                    il2cpp_runtime_helper_02337ed0();
                                  }
                                  pSVar36 = UI_UIManager__GetLocale
                                                      (pSVar38,(System_String_o *)"Skins.Common","SkinsEnabled",
                                                       (System_String_o *)"",
                                                       (System_String_o *)"",(MethodInfo *)in_R9);
                                  in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                           System_String__Concat_3af7150
                                                     (pSVar39," ",pSVar36,(MethodInfo *)0x0);
                                  in_XMM1_Da = 0x41f00000;
                                  in_R9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                          0x0;
                                  item = __this_02;
                                  UI_ElementFactory__CreateToggleSetting
                                            ((UnityEngine_Transform_o *)parent_00,
                                             (UI_ElementStyle_o *)__this_02,
                                             (Settings_BaseSetting_o *)unaff_R15,(System_String_o *)in_RCX,
                                             (System_String_o *)"",30.0,30.0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                  plVar45 = *(long **)pUVar61;
                                  __this = (UI_SettingsSkinsDefaultPanel_o *)
                                           (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                           0x0;
                                  pSVar59 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *
                                            )&"Skins.Common";
                                  if (plVar45 != (long *)0x0) {
                                    lVar56 = *plVar45;
                                    if ((ulong)*(ushort *)(lVar56 + 0x12e) != 0) {
                                      lVar55 = 0;
                                      do {
                                        if (*(long *)(*(long *)(lVar56 + 0xb0) + lVar55) == TypeInfo_ICustomSkinSettings) {
                                          puVar42 = (undefined8 *)
                                                    ((long)*(int *)(*(long *)(lVar56 + 0xb0) + 8 + lVar55) *
                                                     0x10 + lVar56 + 0x138);
                                          goto label_0444a4c1;
                                        }
                                        lVar55 = lVar55 + 0x10;
                                      } while ((ulong)*(ushort *)(lVar56 + 0x12e) << 4 != lVar55);
                                    }
                                    puVar42 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar45,TypeInfo_ICustomSkinSettings,0);
label_0444a4c1:
                                    pSVar37 = (Settings_BaseSetting_o *)
                                              (*(code *)*puVar42)(plVar45,puVar42[1]);
                                    pSVar36 = UI_UIManager__GetLocale
                                                        (pSVar38,(System_String_o *)"Skins.Common","SkinsLocal",
                                                         (System_String_o *)"",
                                                         (System_String_o *)"",(MethodInfo *)in_R9);
                                    pSVar39 = System_String__Concat_3af7150
                                                        (pSVar39," ",pSVar36,(MethodInfo *)0x0);
                                    pSVar36 = UI_UIManager__GetLocale
                                                        (pSVar38,(System_String_o *)"Skins.Common","SkinsLocalTooltip",
                                                         (System_String_o *)"",
                                                         (System_String_o *)"",(MethodInfo *)in_R9);
                                    pMVar54 = (MethodInfo *)0x0;
                                    UI_ElementFactory__CreateToggleSetting
                                              ((UnityEngine_Transform_o *)parent_00,
                                               (UI_ElementStyle_o *)__this_02,pSVar37,pSVar39,pSVar36,30.0,
                                               30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0)
                                    ;
                                    pIVar41 = unaff_RBP->m_Items[2].fields.value;
                                    pSVar39 = UI_UIManager__GetLocale
                                                        (pSVar38,"Skins.Human","GlobalSkinOverridesEnabled",
                                                         (System_String_o *)"",
                                                         (System_String_o *)"",pMVar54);
                                    pSVar36 = UI_UIManager__GetLocale
                                                        (pSVar38,"Skins.Human","GlobalSkinOverridesEnabledTooltip",
                                                         (System_String_o *)"",
                                                         (System_String_o *)"",pMVar54);
                                    pMVar54 = (MethodInfo *)0x0;
                                    UI_ElementFactory__CreateToggleSetting
                                              ((UnityEngine_Transform_o *)parent_00,
                                               (UI_ElementStyle_o *)__this_02,
                                               (Settings_BaseSetting_o *)pIVar41,pSVar39,pSVar36,30.0,30.0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                    pIVar41 = unaff_RBP->m_Items[2].fields.key;
                                    pSVar39 = UI_UIManager__GetLocale
                                                        (pSVar38,"Skins.Human","SetSpecificSkinsEnabled",
                                                         (System_String_o *)"",
                                                         (System_String_o *)"",pMVar54);
                                    pSVar38 = UI_UIManager__GetLocale
                                                        (pSVar38,"Skins.Human","SetSpecificSkinsEnabledTooltip",
                                                         (System_String_o *)"",
                                                         (System_String_o *)"",pMVar54);
label_0444a654:
                                    UI_ElementFactory__CreateToggleSetting
                                              ((UnityEngine_Transform_o *)parent_00,
                                               (UI_ElementStyle_o *)__this_02,
                                               (Settings_BaseSetting_o *)pIVar41,pSVar39,pSVar38,30.0,30.0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                              goto label_0444a677;
                            }
                          }
                        }
                      }
                      goto label_0444a721;
                    }
                  }
                }
              }
              else {
                pSVar31 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_1);
                item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
                System_Object___ctor((Il2CppObject *)pSVar31,(MethodInfo *)0x0);
                __this = (UI_SettingsSkinsDefaultPanel_o *)&"";
                pSVar59 = pSVar30;
                if (pSVar31 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                  unaff_R15 = &"";
                  ppIVar1 = &pSVar31->m_Items[0].fields.key;
                  pSVar31->m_Items[0].fields.key = (Il2CppObject *)pSVar30;
                  item = pSVar30;
                  il2cpp_runtime_helper_022b4080(ppIVar1,pSVar30);
                  pIVar44 = TypeInfo_HumanCustomSkinSettings;
                  pIVar41 = pSVar31->m_Items[0].fields.key;
                  __this = (UI_SettingsSkinsDefaultPanel_o *)&"";
                  unaff_RBP = pSVar31;
                  pSStack_a0 = pSVar31;
                  if (pIVar41 != (Il2CppObject *)0x0) {
                    item = pIVar41[1].monitor;
                    if (item == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                      ((System_Collections_Generic_Dictionary_string__BaseSetting__Fields *)&pSVar31->bounds)
                      ->_buckets = (System_Int32_array *)0x0;
                    }
                    else {
                      pIVar13 = (item->obj).klass;
                      bVar5 = (TypeInfo_HumanCustomSkinSettings->_2).naturalAligment;
                      in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)bVar5
                      ;
                      unaff_RBX = &"";
                      unaff_R12 = pSVar30;
                      if ((pIVar13->_2).naturalAligment < bVar5) goto label_0444a682;
                      if ((pIVar13->_2).typeHierarchy
                          [(long)((long)&in_RCX[-1].m_Items[0xfffe].fields.value + 7)] != TypeInfo_HumanCustomSkinSettings)
                      goto label_0444a682;
                      ((System_Collections_Generic_Dictionary_string__BaseSetting__Fields *)&pSVar31->bounds)
                      ->_buckets = (System_Int32_array *)item;
                      pIVar13 = (item->obj).klass;
                      if ((pIVar13->_2).naturalAligment < bVar5) goto label_0444a682;
                      if ((pIVar13->_2).typeHierarchy
                          [(long)((long)&in_RCX[-1].m_Items[0xfffe].fields.value + 7)] != pIVar44)
                      goto label_0444a682;
                    }
                    pSVar53 = (System_Collections_Generic_Dictionary_string__BaseSetting__Fields *)
                              &pSVar31->bounds;
                    il2cpp_runtime_helper_022b4080(pSVar53);
                    item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x2;
                    pSVar32 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                              il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                    uVar50 = SUB84(in_RCX,0);
                    __this = (UI_SettingsSkinsDefaultPanel_o *)pSVar53;
                    if (pSVar32 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
                      unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)pSVar53;
                      unaff_RBP = pSVar32;
                      unaff_R12 = pSVar30;
                      unaff_R14 = pSVar31;
                      if ((int)pSVar32->max_length != 0) {
                        uVar50 = "Global"._4_4_;
                        pSVar32->m_Items[0].fields.hashCode = (undefined4)"Global";
                        pSVar32->m_Items[0].fields.next = uVar50;
                        il2cpp_runtime_helper_022b4080(pSVar32->m_Items);
                        item = "Character";
                        uVar50 = SUB84(in_RCX,0);
                        if (1 < (uint)pSVar32->max_length) {
                          pSVar32->m_Items[0].fields.key = &"Character"->obj;
                          il2cpp_runtime_helper_022b4080(&pSVar32->m_Items[0].fields.key);
                          pSVar59 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                    &"";
                          if (pSVar53->_buckets != (System_Int32_array *)0x0) {
                            plVar45 = *(long **)(pSVar53->_buckets->m_Items + 0x12);
                            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                            }
                            unaff_R12 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                        UI_UIManager__GetLocale
                                                  (pSVar38,"Skins.Human","SkinMode",
                                                   (System_String_o *)"",
                                                   (System_String_o *)"",(MethodInfo *)in_R9);
                            __this = (UI_SettingsSkinsDefaultPanel_o *)*ppIVar1;
                            pUVar33 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                            UnityEngine_Events_UnityAction___ctor();
                            in_XMM1_Da = 0x42200000;
                            item = __this_01;
                            in_R9 = "";
                            UI_ElementFactory__CreateDropdownSetting
                                      ((UnityEngine_Transform_o *)pSVar35,(UI_ElementStyle_o *)__this_01,
                                       (Settings_BaseSetting_o *)plVar45,(System_String_o *)unaff_R12,
                                       (System_String_array *)pSVar32,(System_String_o *)"",260.0,
                                       40.0,300.0,(System_Nullable_float__o)0x0,pUVar33,(MethodInfo *)0x0);
                            in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                     pSVar53->_buckets;
                            pSVar59 = unaff_R12;
                            unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                        plVar45;
                            if ((in_RCX != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                           0x0) &&
                               (lVar56 = *(long *)&in_RCX->m_Items[3].fields,
                               unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **
                                           )(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *
                                            )plVar45, lVar56 != 0)) {
                              if (*(int *)(lVar56 + 0x14) != 0) {
                                UI_SettingsSkinsPanel__CreateCharacterSelectorDropdown
                                          (__this_03,(UnityEngine_Transform_o *)pSVar35,
                                           (UI_ElementStyle_o *)__this_01,
                                           (Settings_HumanCustomSkinSettings_o *)in_RCX,(MethodInfo *)pSVar32)
                                ;
                                pSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                          __this;
                                goto label_0444a0d2;
                              }
                              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                          plVar45;
                              if (*ppIVar1 != (Il2CppObject *)0x0) {
                                plVar45 = (*ppIVar1)[1].monitor;
                                __this = (UI_SettingsSkinsDefaultPanel_o *)
                                         (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                         0x0;
                                if (plVar45 != (long *)0x0) {
                                  lVar56 = *plVar45;
                                  if ((ulong)*(ushort *)(lVar56 + 0x12e) != 0) {
                                    lVar55 = 0;
                                    do {
                                      if (*(long *)(*(long *)(lVar56 + 0xb0) + lVar55) == TypeInfo_ISetSettingsContainer) {
                                        pSVar30 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                   *)((long)(*(int *)(*(long *)(lVar56 + 0xb0) + 8 + lVar55) +
                                                            3) * 0x10 + lVar56 + 0x138);
                                        goto label_04449ac6;
                                      }
                                      lVar55 = lVar55 + 0x10;
                                    } while ((ulong)*(ushort *)(lVar56 + 0x12e) << 4 != lVar55);
                                  }
                                  pSVar30 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *
                                            )il2cpp_runtime_helper_02300d20(plVar45,TypeInfo_ISetSettingsContainer,3);
label_04449ac6:
                                  unaff_RBX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               **)(*(code *)(pSVar30->obj).klass)
                                                            (plVar45,(pSVar30->obj).monitor);
                                  unaff_R12 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
                                  System_Collections_Generic_List_object____ctor
                                            ((System_Collections_Generic_List_object__o *)unaff_R12,
                                             MethodInfo_List_1_System_String);
                                  unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
                                  System_Collections_Generic_List_int____ctor
                                            ((System_Collections_Generic_List_int__o *)unaff_RBP,MethodInfo_List_1_System_Int32)
                                  ;
                                  pSVar2 = pSVar31->m_Items;
                                  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                                   &pSVar31->m_Items[0].fields = unaff_RBP;
                                  item = unaff_RBP;
                                  il2cpp_runtime_helper_022b4080();
                                  uVar50 = SUB84(pSVar30,0);
                                  in_RCX = pSVar30;
                                  __this = (UI_SettingsSkinsDefaultPanel_o *)unaff_RBX;
                                  pSVar59 = unaff_R12;
                                  if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                      unaff_RBX !=
                                      (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
                                  {
                                    uVar27 = (uint)((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                     *)unaff_RBX)->max_length;
                                    if (unaff_R12 ==
                                        (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0
                                       ) {
                                      if (0 < (int)uVar27) {
                                        unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                     *)0x0;
                                        do {
                                          uVar50 = SUB84(in_RCX,0);
                                          unaff_R14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)&"Custom Set:";
                                          if (uVar27 <= (uint)unaff_RBP) goto label_0444a721;
                                          pSVar36 = *(System_String_o **)
                                                     (&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->m_Items[0].fields.hashCode +
                                                     (long)unaff_RBP * 2);
                                          if (pSVar36 == (System_String_o *)0x0) goto label_0444a677;
                                          item = "Custom Set:";
                                          bVar26 = System_String__StartsWith
                                                             (pSVar36,(System_String_o *)"Custom Set:",
                                                              (MethodInfo *)0x0);
                                          uVar50 = SUB84(in_RCX,0);
                                          if ((char)bVar26 == '\0') {
                                            if ((uint)((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->max_length <= (uint)unaff_RBP)
                                            goto label_0444a721;
                                            goto label_0444a677;
                                          }
                                          uVar27 = (uint)((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->max_length;
                                          unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)((long)&(unaff_RBP->obj).klass + 1);
                                        } while ((int)unaff_RBP < (int)uVar27);
                                      }
                                    }
                                    else if (0 < (int)uVar27) {
                                      unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                   *)0x0;
                                      unaff_R14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                   *)&"Custom Set:";
                                      if (uVar27 != 0) {
                                        do {
                                          uVar27 = (uint)unaff_RBP;
                                          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       **)(long)(int)uVar27;
                                          pSVar36 = *(System_String_o **)
                                                     (&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->m_Items[0].fields.hashCode +
                                                     (long)unaff_R15 * 2);
                                          in_RCX = pSVar30;
                                          if (pSVar36 == (System_String_o *)0x0) goto label_0444a677;
                                          item = "Custom Set:";
                                          bVar26 = System_String__StartsWith
                                                             (pSVar36,(System_String_o *)"Custom Set:",
                                                              (MethodInfo *)0x0);
                                          in_RCX = MethodInfo_Void_Add;
                                          uVar50 = SUB84(pSVar30,0);
                                          if ((char)bVar26 == '\0') {
                                            if ((uint)((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->max_length <= uVar27) break;
                                            item = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                     **)(&((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->m_Items[0].fields.hashCode +
                                                       (long)unaff_R15 * 2);
                                            piVar4 = (int *)((long)&unaff_R12->max_length + 4);
                                            *piVar4 = *piVar4 + 1;
                                            pSVar14 = ((
                                                       System_Collections_Generic_Dictionary_string__BaseSetting__Fields
                                                       *)&unaff_R12->bounds)->_buckets;
                                            if (pSVar14 == (System_Int32_array *)0x0) goto label_0444a677;
                                            uVar12 = *(uint *)&unaff_R12->max_length;
                                            if (uVar12 < (uint)pSVar14->max_length) {
                                              in_RCX = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)(ulong)(uVar12 + 1);
                                              *(uint *)&unaff_R12->max_length = uVar12 + 1;
                                              *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                **)(pSVar14->m_Items + (long)(int)uVar12 * 2) = item;
                                              il2cpp_runtime_helper_022b4080(pSVar14->m_Items + (long)(int)uVar12 * 2);
                                              pSVar15 = *(System_Collections_Generic_List_int__o **)
                                                         &pSVar2->fields;
                                              pSVar30 = MethodInfo_Void_Add;
                                            }
                                            else {
                                              System_Collections_Generic_List_object___AddWithResize
                                                        ((System_Collections_Generic_List_object__o *)
                                                         unaff_R12,&item->obj,
                                                         *(MethodInfo_362C220 **)
                                                          (*(long *)(*(long *)&in_RCX->m_Items[0].fields +
                                                                    0xc0) + 0x70));
                                              pSVar15 = *(System_Collections_Generic_List_int__o **)
                                                         &pSVar2->fields;
                                              pSVar30 = MethodInfo_Void_Add;
                                            }
                                            MethodInfo_Void_Add = pSVar30;
                                            if (pSVar15 == (System_Collections_Generic_List_int__o *)0x0)
                                            goto label_0444a677;
                                            piVar3 = &(pSVar15->fields)._version;
                                            *piVar3 = *piVar3 + 1;
                                            pSVar14 = (pSVar15->fields)._items;
                                            in_RCX = pSVar30;
                                            if (pSVar14 == (System_Int32_array *)0x0) goto label_0444a677;
                                            uVar12 = (pSVar15->fields)._size;
                                            if (uVar12 < (uint)pSVar14->max_length) {
                                              pSVar30 = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)(ulong)(uVar12 + 1);
                                              (pSVar15->fields)._size = uVar12 + 1;
                                              pSVar14->m_Items[(int)uVar12] = uVar27;
                                            }
                                            else {
                                              System_Collections_Generic_List_int___AddWithResize
                                                        (pSVar15,uVar27,
                                                         *(MethodInfo_35FDFF0 **)
                                                          (*(long *)(*(long *)&pSVar30->m_Items[0].fields +
                                                                    0xc0) + 0x70));
                                              item = unaff_RBP;
                                            }
                                          }
                                          uVar50 = SUB84(pSVar30,0);
                                          uVar27 = uVar27 + 1;
                                          unaff_RBP = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)(ulong)uVar27;
                                          uVar12 = (uint)((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)unaff_RBX)->max_length;
                                          if ((int)uVar12 <= (int)uVar27) goto label_04449cc3;
                                        } while (uVar27 < uVar12);
                                      }
                                      goto label_0444a721;
                                    }
label_04449cc3:
                                    __this = (UI_SettingsSkinsDefaultPanel_o *)
                                             il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
                                    in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                              *)0x7fffffff;
                                    Settings_IntSetting___ctor_40f39a0
                                              ((Settings_IntSetting_o *)__this,0,-0x80000000,0x7fffffff,
                                               (MethodInfo *)0x0);
                                    ppSVar62 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                **)&pSVar31->max_length;
                                    pSVar31->max_length = (il2cpp_array_size_t)__this;
                                    item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                           __this;
                                    il2cpp_runtime_helper_022b4080(ppSVar62,__this);
                                    pSVar15 = *(System_Collections_Generic_List_int__o **)
                                               &pSVar31->m_Items[0].fields;
                                    unaff_RBP = pSVar31;
                                    if (pSVar15 != (System_Collections_Generic_List_int__o *)0x0) {
                                      if ((pSVar15->fields)._size < 1) {
label_04449d75:
                                        (__this_03->fields)._lastFilteredSetIndex =
                                             (Settings_IntSetting_o *)*ppSVar62;
                                        il2cpp_runtime_helper_022b4080(&(__this_03->fields)._lastFilteredSetIndex);
                                        (__this_03->fields)._lastFilteredOriginalIndices =
                                             *(System_Collections_Generic_List_int__o **)&pSVar2->fields;
                                        pUVar60 = (UI_SettingsSkinsPanel_o *)
                                                  &(__this_03->fields)._lastFilteredOriginalIndices;
                                        il2cpp_runtime_helper_022b4080(pUVar60);
                                        unaff_R14 = *ppSVar62;
                                        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                          il2cpp_runtime_helper_02337ed0();
                                        }
                                        in_RCX = "";
                                        item = "Skins.Common";
                                        plVar45 = (long *)UI_UIManager__GetLocale
                                                                    (pSVar38,(System_String_o *)"Skins.Common",
                                                                     (System_String_o *)"Set",
                                                                     (System_String_o *)"",
                                                                     (System_String_o *)"",
                                                                     (MethodInfo *)in_R9);
                                        __this = (UI_SettingsSkinsDefaultPanel_o *)&"";
                                        if (unaff_R12 !=
                                            (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *
                                            )0x0) {
                                          __this = (UI_SettingsSkinsDefaultPanel_o *)
                                                   System_Collections_Generic_List_object___ToArray
                                                             ((System_Collections_Generic_List_object__o *)
                                                              unaff_R12,MethodInfo_String_ToArray);
                                          pUVar33 = (UnityEngine_Events_UnityAction_o *)
                                                    il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                          UnityEngine_Events_UnityAction___ctor();
                                          in_XMM1_Da = 0x42200000;
                                          in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                    *)plVar45;
                                          in_R9 = "";
                                          UI_ElementFactory__CreateDropdownSetting
                                                    ((UnityEngine_Transform_o *)pSVar35,
                                                     (UI_ElementStyle_o *)__this_01,
                                                     (Settings_BaseSetting_o *)unaff_R14,
                                                     (System_String_o *)plVar45,(System_String_array *)__this,
                                                     (System_String_o *)"",260.0,40.0,300.0,
                                                     (System_Nullable_float__o)0x0,pUVar33,(MethodInfo *)0x0);
                                          pUVar34 = UI_ElementFactory__CreateHorizontalGroup
                                                              ((UnityEngine_Transform_o *)pSVar35,10.0,2,
                                                               (MethodInfo *)0x0);
                                          item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                  *)&g_data_00000004;
                                          __this_03 = (UI_SettingsSkinsPanel_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,4);
                                          uVar50 = SUB84(in_RCX,0);
                                          unaff_RBP = pSVar35;
                                          pUVar60 = (UI_SettingsSkinsPanel_o *)&"";
                                          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       **)plVar45;
                                          if (__this_03 != (UI_SettingsSkinsPanel_o *)0x0) {
                                            unaff_RBX = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       **)__this;
                                            if (*(int *)&(__this_03->fields).m_CancellationTokenSource != 0) {
                                              unaff_RBP = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)&(__this_03->fields).SinglePanel;
                                              (__this_03->fields).SinglePanel = "Create";
                                              il2cpp_runtime_helper_022b4080(unaff_RBP);
                                              uVar50 = SUB84(in_RCX,0);
                                              if (1 < *(uint *)&(__this_03->fields).m_CancellationTokenSource)
                                              {
                                                (__this_03->fields).DoublePanelLeft = "Delete";
                                                il2cpp_runtime_helper_022b4080(&(__this_03->fields).DoublePanelLeft);
                                                uVar50 = SUB84(in_RCX,0);
                                                if (2 < *(uint *)&(__this_03->fields).
                                                                  m_CancellationTokenSource) {
                                                  (__this_03->fields).DoublePanelRight = "Rename";
                                                  il2cpp_runtime_helper_022b4080(&(__this_03->fields).DoublePanelRight);
                                                  uVar50 = SUB84(in_RCX,0);
                                                  if (3 < *(uint *)&(__this_03->fields).
                                                                    m_CancellationTokenSource) {
                                                    (__this_03->fields)._popups = "Copy";
                                                    il2cpp_runtime_helper_022b4080(&(__this_03->fields)._popups);
                                                    pSVar35 = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)__this;
                                                    if (0 < *(int *)&(__this_03->fields).
                                                                     m_CancellationTokenSource) {
                                                      if (pUVar34 == (UnityEngine_GameObject_o *)0x0)
                                                      goto label_0444a6e3;
                                                      unaff_R12 = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)0x0;
                                                      do {
                                                        unaff_RBP = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass7_2);
                                                       item = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)0x0;
                                                       System_Object___ctor
                                                                 ((Il2CppObject *)unaff_RBP,(MethodInfo *)0x0)
                                                       ;
                                                       uVar50 = SUB84(in_RCX,0);
                                                       __this = (UI_SettingsSkinsDefaultPanel_o *)pSVar35;
                                                       pSVar59 = unaff_R12;
                                                       pUVar60 = __this_03;
                                                       unaff_R15 = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       **)plVar45;
                                                       if (unaff_RBP ==
                                                           (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)0x0) goto label_0444a677;
                                                       unaff_RBP->max_length = (il2cpp_array_size_t)pSVar31;
                                                       il2cpp_runtime_helper_022b4080(&unaff_RBP->max_length);
                                                       unaff_RBX = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       **)pSVar35;
                                                       if ((
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)(ulong)*(uint *)&(__this_03->fields).
                                                                          m_CancellationTokenSource <=
                                                       unaff_R12) goto label_0444a721;
                                                       ((
                                                       System_Collections_Generic_Dictionary_string__BaseSetting__Fields
                                                       *)&unaff_RBP->bounds)->_buckets =
                                                            (System_Int32_array *)
                                                            (&(__this_03->fields).SinglePanel)
                                                            [(long)unaff_R12];
                                                       il2cpp_runtime_helper_022b4080((
                                                       System_Collections_Generic_Dictionary_string__BaseSetting__Fields
                                                       *)&unaff_RBP->bounds);
                                                       unaff_R14 = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)UnityEngine_GameObject__get_transform
                                                                   (pUVar34,(MethodInfo *)0x0);
                                                       pSVar14 = ((
                                                       System_Collections_Generic_Dictionary_string__BaseSetting__Fields
                                                       *)&unaff_RBP->bounds)->_buckets;
                                                       if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       if (g_data_057ae727 == '\0') {
                                                         il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                                                         il2cpp_runtime_helper_023445d0(&"Common");
                                                         il2cpp_runtime_helper_023445d0(&"");
                                                         g_data_057ae727 = '\x01';
                                                       }
                                                       if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                                         il2cpp_runtime_helper_02337ed0();
                                                       }
                                                       plVar45 = (long *)UI_UIManager__GetLocale
                                                                                   ("Common",
                                                                                    (System_String_o *)pSVar14
                                                                                    ,(System_String_o *)
                                                                                     "",
                                                                                    (System_String_o *)
                                                                                    "",
                                                                                    (System_String_o *)
                                                                                    "",
                                                                                    (MethodInfo *)in_R9);
                                                       pSVar35 = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                                                       UnityEngine_Events_UnityAction___ctor();
                                                       in_XMM1_Da = 0;
                                                       in_RCX = pSVar35;
                                                       UI_ElementFactory__CreateDefaultButton
                                                                 ((UnityEngine_Transform_o *)unaff_R14,
                                                                  (UI_ElementStyle_o *)__this_01,
                                                                  (System_String_o *)plVar45,0.0,0.0,
                                                                  (UnityEngine_Events_UnityAction_o *)pSVar35,
                                                                  (MethodInfo *)0x0);
                                                       unaff_R12 = (
                                                       System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                       *)((long)&(unaff_R12->obj).klass + 1);
                                                      } while ((long)unaff_R12 <
                                                               (long)*(int *)&(__this_03->fields).
                                                                              m_CancellationTokenSource);
                                                    }
                                                    goto label_0444a0d2;
                                                  }
                                                }
                                              }
                                            }
                                            goto label_0444a721;
                                          }
                                        }
                                      }
                                      else {
                                        __this = (UI_SettingsSkinsDefaultPanel_o *)&"";
                                        if ((pSVar53->_buckets != (System_Int32_array *)0x0) &&
                                           (lVar56 = *(long *)(pSVar53->_buckets->m_Items + 0x16),
                                           __this = (UI_SettingsSkinsDefaultPanel_o *)&"",
                                           lVar56 != 0)) {
                                          uVar27 = *(uint *)(lVar56 + 0x14);
                                          item = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                  *)(ulong)uVar27;
                                          iVar25 = System_Collections_Generic_List_int___IndexOf
                                                             (pSVar15,uVar27,MethodInfo_Int32_IndexOf);
                                          __this = (UI_SettingsSkinsDefaultPanel_o *)&"";
                                          if (*ppSVar62 !=
                                              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                               *)0x0) {
                                            value = 0;
                                            if (-1 < iVar25) {
                                              value = iVar25;
                                            }
                                            Settings_TypedSetting_int___set_Value
                                                      ((Settings_TypedSetting_int__o *)*ppSVar62,value,
                                                       MethodInfo_Void_set_Value);
                                            goto label_04449d75;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          goto label_0444a677;
                        }
                      }
                      goto label_0444a721;
                    }
                  }
                }
              }
            }
            goto label_0444a677;
          }
        }
      }
label_0444a721:
      il2cpp_runtime_helper_022b2ca0();
    }
    pIVar44 = (unaff_RBP->obj).klass;
    parent = (UI_BasePanel_o *)
             &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->bounds;
    ((Settings_HumanCustomSkinSettings_Fields *)
    &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_RBX)->bounds)->Settings =
         (System_Collections_Specialized_OrderedDictionary_o *)pIVar44;
    il2cpp_runtime_helper_022b4080();
    uVar63 = il2cpp_runtime_helper_022b2c90();
    pUVar51 = extraout_RDX;
  }
  else {
    bVar5 = *(byte *)&TypeInfo_SettingsSkinsPanel->m_Items[0xb].fields.key;
    in_RCX = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)bVar5;
    if (((parent->klass->_2).naturalAligment < bVar5) ||
       ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
        (parent->klass->_2).typeHierarchy[(long)((long)&in_RCX[-1].m_Items[0xfffe].fields.value + 7)] !=
        TypeInfo_SettingsSkinsPanel)) {
      pSVar35 = TypeInfo_SettingsSkinsPanel;
      __this_03 = (UI_SettingsSkinsPanel_o *)parent;
      il2cpp_runtime_helper_022b2fd0();
      goto label_04448d4d;
    }
    UI_SettingsSkinsPanel__CreateCommonSettings
              ((UI_SettingsSkinsPanel_o *)parent,(__this->fields).DoublePanelLeft,
               (__this->fields).DoublePanelRight,(MethodInfo *)in_RCX);
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).DoublePanelRight,1.0,(MethodInfo *)0x0);
    pIVar44 = (Il2CppClass *)(__this->fields).DoublePanelLeft;
    pUVar51 = (__this->fields).DoublePanelRight;
    uVar63 = 0x430c0000;
    in_XMM1_Da = 0x43820000;
    uVar50 = 0;
    __this_03 = unaff_R13;
  }
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)register0x00000020 + -8) =
       unaff_RBP;
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array ***)((long)register0x00000020 + -0x10) =
       unaff_R15;
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)register0x00000020 + -0x18) =
       unaff_R14;
  *(UI_SettingsSkinsPanel_o **)((long)register0x00000020 + -0x20) = __this_03;
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)register0x00000020 + -0x28) =
       unaff_R12;
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array ***)((long)register0x00000020 + -0x30) =
       unaff_RBX;
  *(undefined4 *)((long)register0x00000020 + -100) = uVar50;
  *(undefined4 *)((long)register0x00000020 + -0x68) = in_XMM1_Da;
  *(undefined4 *)((long)register0x00000020 + -0x80) = uVar63;
  *(UnityEngine_Transform_o **)((long)register0x00000020 + -0x38) = pUVar51;
  *(Il2CppClass **)((long)register0x00000020 + -0x40) = pIVar44;
  if (g_data_057ae6fe == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a784;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSetting);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a790;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseSettingsContainer);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a79c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DictionaryEntry);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a7a8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a7b4;
    il2cpp_runtime_helper_023445d0(&TypeRef_FloatSetting);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a7c0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSkinSettings);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a7cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a7d8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a7e4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a7f0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a7fc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a808;
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a814;
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a820;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a82c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsPopup);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a838;
    il2cpp_runtime_helper_023445d0(&TypeRef_StringSetting);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a844;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a850;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a85c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a868;
    il2cpp_runtime_helper_023445d0(&"Human");
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a874;
    il2cpp_runtime_helper_023445d0(&"UniqueId");
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a880;
    il2cpp_runtime_helper_023445d0(&"Name");
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a88c;
    il2cpp_runtime_helper_023445d0(&"Ground");
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a898;
    il2cpp_runtime_helper_023445d0(&"Skins.");
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a8a4;
    il2cpp_runtime_helper_023445d0(&"Skins.Common");
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a8b0;
    il2cpp_runtime_helper_023445d0(&"");
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a8bc;
    il2cpp_runtime_helper_023445d0(&"Skin");
    g_data_057ae6fe = '\x01';
  }
  pMVar54 = (parent->klass->vtable)._4_get_ThemePanel.method;
  pIVar16 = (parent->klass->vtable)._4_get_ThemePanel.methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a8d6;
  pSVar39 = (System_String_o *)(*pIVar16)(parent,pMVar54);
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a8e8;
  pUVar40 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  *(UI_ElementStyle_o **)((long)register0x00000020 + -0x58) = pUVar40;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a90d;
  UI_ElementStyle___ctor
            (pUVar40,0x18,*(float *)((long)register0x00000020 + -0x80),20.0,pSVar39,(MethodInfo *)0x0);
  pSVar17 = (parent->fields)._currentCategoryPanelName;
  if (pSVar17 != (Settings_StringSetting_o *)0x0) {
    pSVar39 = (pSVar17->fields)._value;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a92f;
    bVar26 = System_String__op_Equality(pSVar39,(System_String_o *)"Human",(MethodInfo *)0x0);
    if (g_data_057ae6ff == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a946;
      il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a952;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      g_data_057ae6ff = '\x01';
    }
    pSVar17 = (parent->fields)._currentCategoryPanelName;
    if ((pSVar17 != (Settings_StringSetting_o *)0x0) &&
       (pUVar18 = parent[1].klass, pUVar18 != (UI_BasePanel_c *)0x0)) {
      pSVar39 = (pSVar17->fields)._value;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444a986;
      pIVar41 = System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pUVar18,
                           (Il2CppObject *)pSVar39,MethodInfo_ICustomSkinSettings_get_Item);
      *(UI_BasePanel_o **)((long)register0x00000020 + -0x70) = parent;
      if ((char)bVar26 == '\0') {
        if (pIVar41 != (Il2CppObject *)0x0) {
          pIVar44 = pIVar41->klass;
          uVar9._0_1_ = (pIVar44->_2).rank;
          uVar9._1_1_ = (pIVar44->_2).minimumAlignment;
          if ((ulong)uVar9 != 0) {
            pIVar52 = (pIVar44->_1).interfaceOffsets;
            lVar56 = 0;
            do {
              if (*(long *)((long)&pIVar52->interfaceType + lVar56) == TypeInfo_ISetSettingsContainer) {
                pVVar43 = pIVar44->vtable + *(int *)((long)&pIVar52->offset + lVar56);
                goto label_0444ab8b;
              }
              lVar56 = lVar56 + 0x10;
            } while ((ulong)uVar9 << 4 != lVar56);
          }
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444aacd;
          pVVar43 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pIVar41,TypeInfo_ISetSettingsContainer,0);
label_0444ab8b:
          pMVar54 = pVVar43->method;
          goto label_0444acf8;
        }
      }
      else if (pIVar41 != (Il2CppObject *)0x0) {
        bVar5 = (TypeInfo_HumanCustomSkinSettings->_2).naturalAligment;
        if (((pIVar41->klass->_2).naturalAligment < bVar5) ||
           ((pIVar41->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_HumanCustomSkinSettings)) {
label_0444ac2c:
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444ac34;
          il2cpp_runtime_helper_022b2fd0(pIVar41);
          goto label_0444ac34;
        }
        if (pIVar41[6].monitor != (void *)0x0) {
          if (*(int *)((long)pIVar41[6].monitor + 0x14) == 1) {
            lVar56 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
            if (((lVar56 != 0) && (lVar56 = *(long *)(lVar56 + 0x20), lVar56 != 0)) &&
               (plVar45 = *(long **)(lVar56 + 0x28), plVar45 != (long *)0x0)) {
              lVar56 = *plVar45;
              if ((ulong)*(ushort *)(lVar56 + 0x12e) != 0) {
                lVar55 = 0;
                do {
                  if (*(long *)(*(long *)(lVar56 + 0xb0) + lVar55) == TypeInfo_IListSetting) {
                    puVar42 = (undefined8 *)
                              ((long)(*(int *)(*(long *)(lVar56 + 0xb0) + 8 + lVar55) + 2) * 0x10 + lVar56 +
                              0x138);
                    goto label_0444abaf;
                  }
                  lVar55 = lVar55 + 0x10;
                } while ((ulong)*(ushort *)(lVar56 + 0x12e) << 4 != lVar55);
              }
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444aa70;
              puVar42 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar45,TypeInfo_IListSetting,2);
label_0444abaf:
              uVar19 = puVar42[1];
              pcVar20 = (code *)*puVar42;
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444abb8;
              __this_04 = (System_Collections_Generic_List_object__o *)(*pcVar20)(plVar45,uVar19);
              if (pIVar41[7].klass != (Il2CppClass *)0x0) {
                iVar25 = *(int32_t *)((long)&((pIVar41[7].klass)->_1).name + 4);
                parent = *(UI_BasePanel_o **)((long)register0x00000020 + -0x70);
                if (iVar25 < 0) {
label_0444ac34:
                  if (g_data_057ae6ff == '\0') {
                    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444ac49;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
                    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444ac55;
                    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
                    g_data_057ae6ff = '\x01';
                  }
                  pSVar17 = (parent->fields)._currentCategoryPanelName;
                  if ((pSVar17 != (Settings_StringSetting_o *)0x0) &&
                     (pUVar18 = parent[1].klass, pUVar18 != (UI_BasePanel_c *)0x0)) {
                    pSVar39 = (pSVar17->fields)._value;
                    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444ac89;
                    pIVar41 = System_Collections_Generic_Dictionary_object__object___get_Item
                                        ((System_Collections_Generic_Dictionary_object__object__o *)pUVar18,
                                         (Il2CppObject *)pSVar39,MethodInfo_ICustomSkinSettings_get_Item);
                    if (pIVar41 != (Il2CppObject *)0x0) {
                      pIVar44 = pIVar41->klass;
                      uVar11._0_1_ = (pIVar44->_2).rank;
                      uVar11._1_1_ = (pIVar44->_2).minimumAlignment;
                      if ((ulong)uVar11 != 0) {
                        pIVar52 = (pIVar44->_1).interfaceOffsets;
                        lVar56 = 0;
                        do {
                          if (*(long *)((long)&pIVar52->interfaceType + lVar56) == TypeInfo_ISetSettingsContainer)
                          goto label_0444acde;
                          lVar56 = lVar56 + 0x10;
                        } while ((ulong)uVar11 << 4 != lVar56);
                      }
                      goto label_0444accf;
                    }
                  }
                }
                else if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
                  if ((__this_04->fields)._size <= iVar25) goto label_0444ac34;
                  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444abf1;
                  pIVar41 = System_Collections_Generic_List_object___get_Item(__this_04,iVar25,MethodInfo_BaseSetting_get_Item);
                  if (pIVar41 != (Il2CppObject *)0x0) {
                    bVar5 = (TypeInfo_BaseSettingsContainer->_2).naturalAligment;
                    if (((pIVar41->klass->_2).naturalAligment < bVar5) ||
                       ((pIVar41->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_BaseSettingsContainer))
                    goto label_0444ac2c;
                  }
                  goto label_0444acfd;
                }
              }
            }
          }
          else {
            if (g_data_057ae6ff == '\0') {
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444aaea;
              il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444aaf6;
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
              g_data_057ae6ff = '\x01';
            }
            pSVar17 = (parent->fields)._currentCategoryPanelName;
            if ((pSVar17 != (Settings_StringSetting_o *)0x0) &&
               (pUVar18 = parent[1].klass, pUVar18 != (UI_BasePanel_c *)0x0)) {
              pSVar39 = (pSVar17->fields)._value;
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444ab2a;
              pIVar41 = System_Collections_Generic_Dictionary_object__object___get_Item
                                  ((System_Collections_Generic_Dictionary_object__object__o *)pUVar18,
                                   (Il2CppObject *)pSVar39,MethodInfo_ICustomSkinSettings_get_Item);
              if (pIVar41 != (Il2CppObject *)0x0) {
                pIVar44 = pIVar41->klass;
                uVar10._0_1_ = (pIVar44->_2).rank;
                uVar10._1_1_ = (pIVar44->_2).minimumAlignment;
                if ((ulong)uVar10 != 0) {
                  pIVar52 = (pIVar44->_1).interfaceOffsets;
                  lVar56 = 0;
                  do {
                    if (*(long *)((long)&pIVar52->interfaceType + lVar56) == TypeInfo_ISetSettingsContainer) goto label_0444acde;
                    lVar56 = lVar56 + 0x10;
                  } while ((ulong)uVar10 << 4 != lVar56);
                }
label_0444accf:
                *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444acd9;
                pVVar43 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pIVar41,TypeInfo_ISetSettingsContainer,0);
                goto label_0444acf1;
              }
            }
          }
        }
      }
    }
  }
label_0444b38d:
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b392;
  il2cpp_runtime_helper_022b2c90();
label_0444b392:
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b397;
  il2cpp_runtime_helper_022b2fd0();
label_0444b397:
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b39c;
  auVar64 = il2cpp_runtime_helper_022b2c90();
  lVar56 = auVar64._0_8_;
  plVar45 = *(long **)((long)register0x00000020 + -0x80);
  if (auVar64._8_4_ != 1) {
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
    goto label_0444b5c5;
  }
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b516;
  puVar42 = (undefined8 *)__cxa_begin_catch(lVar56);
  *(undefined8 *)((long)register0x00000020 + -0x60) = *puVar42;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b523;
  __cxa_end_catch();
label_0444b523:
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b536;
  plVar49 = (long *)il2cpp_runtime_helper_023051f0(plVar45,TypeInfo_IDisposable);
  lVar56 = *(long *)((long)register0x00000020 + -0x60);
  if (plVar49 != (long *)0x0) {
    lVar55 = *plVar49;
    if ((ulong)*(ushort *)(lVar55 + 0x12e) != 0) {
      lVar57 = 0;
      do {
        if (*(long *)(*(long *)(lVar55 + 0xb0) + lVar57) == TypeInfo_IDisposable) {
          puVar42 = (undefined8 *)
                    (lVar55 + (long)*(int *)(*(long *)(lVar55 + 0xb0) + 8 + lVar57) * 0x10 + 0x138);
          goto label_0444b59d;
        }
        lVar57 = lVar57 + 0x10;
      } while ((ulong)*(ushort *)(lVar55 + 0x12e) << 4 != lVar57);
    }
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b589;
    puVar42 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar49,TypeInfo_IDisposable,0);
label_0444b59d:
    uVar19 = puVar42[1];
    pcVar20 = (code *)*puVar42;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b5a6;
    (*pcVar20)(plVar49,uVar19);
  }
  if (lVar56 == 0) {
    return;
  }
  do {
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b663;
    lVar56 = il2cpp_runtime_helper_022fefe0(lVar56);
label_0444b5c5:
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b5d7;
    plVar49 = (long *)il2cpp_runtime_helper_023051f0(plVar45,TypeInfo_IDisposable);
    lVar55 = *(long *)((long)register0x00000020 + -0x60);
    if (plVar49 != (long *)0x0) {
      lVar57 = *plVar49;
      if ((ulong)*(ushort *)(lVar57 + 0x12e) != 0) {
        lVar58 = 0;
        do {
          if (*(long *)(*(long *)(lVar57 + 0xb0) + lVar58) == TypeInfo_IDisposable) {
            puVar42 = (undefined8 *)
                      (lVar57 + (long)*(int *)(*(long *)(lVar57 + 0xb0) + 8 + lVar58) * 0x10 + 0x138);
            goto label_0444b63d;
          }
          lVar58 = lVar58 + 0x10;
        } while ((ulong)*(ushort *)(lVar57 + 0x12e) << 4 != lVar58);
      }
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b629;
      puVar42 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar49,TypeInfo_IDisposable,0);
label_0444b63d:
      uVar19 = puVar42[1];
      pcVar20 = (code *)*puVar42;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b646;
      (*pcVar20)(plVar49,uVar19);
    }
    if (lVar55 == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b653;
      _Unwind_Resume(lVar56);
    }
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b65b;
    il2cpp_runtime_helper_022fefe0(lVar55);
  } while( true );
label_0444acde:
  pVVar43 = pIVar44->vtable + *(int *)((long)&pIVar52->offset + lVar56);
label_0444acf1:
  pMVar54 = pVVar43->method;
label_0444acf8:
  pIVar16 = pVVar43->methodPtr;
  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444acfa;
  pIVar41 = (Il2CppObject *)(*pIVar16)(pIVar41,pMVar54);
label_0444acfd:
  pUVar21 = (parent->fields).Parent;
  if (pUVar21 == (UI_BasePanel_o *)0x0) goto label_0444b38d;
  bVar5 = (TypeInfo_SettingsPopup->_2).naturalAligment;
  if ((bVar5 <= (pUVar21->klass->_2).naturalAligment) &&
     ((pUVar21->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_SettingsPopup)) {
    pSVar17 = (parent->fields)._currentCategoryPanelName;
    if (pSVar17 != (Settings_StringSetting_o *)0x0) {
      *(UnityEngine_GameObject_o **)((long)register0x00000020 + -0x50) =
           pUVar21[1].fields._currentCategoryPanel;
      pSVar39 = (pSVar17->fields)._value;
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444ad6a;
      pSVar39 = System_String__Concat_3ae5ba0("Skins.",pSVar39,(MethodInfo *)0x0);
      *(System_String_o **)((long)register0x00000020 + -0x48) = pSVar39;
      if ((pIVar41 != (Il2CppObject *)0x0) && (pIVar44 = pIVar41[1].klass, pIVar44 != (Il2CppClass *)0x0)) {
        pvVar22 = (pIVar44->_1).image;
        uVar19 = *(undefined8 *)((long)pvVar22 + 0x2b0);
        pcVar20 = *(code **)((long)pvVar22 + 0x2a8);
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444ad95;
        plVar45 = (long *)(*pcVar20)(pIVar44,uVar19);
        *(long **)((long)register0x00000020 + -0x80) = plVar45;
        if (plVar45 == (long *)0x0) goto label_0444b397;
        *(undefined4 *)((long)register0x00000020 + -0x74) = 1;
        *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
label_0444add3:
        lVar56 = *plVar45;
        if ((ulong)*(ushort *)(lVar56 + 0x12e) != 0) {
          lVar55 = 0;
          do {
            if (*(long *)(*(long *)(lVar56 + 0xb0) + lVar55) == TypeInfo_IEnumerator) {
              puVar42 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar56 + 0xb0) + 8 + lVar55) * 0x10 + lVar56 + 0x138);
              goto label_0444ae33;
            }
            lVar55 = lVar55 + 0x10;
          } while ((ulong)*(ushort *)(lVar56 + 0x12e) << 4 != lVar55);
        }
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444ae19;
        puVar42 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar45,TypeInfo_IEnumerator,0);
label_0444ae33:
        uVar19 = puVar42[1];
        pcVar20 = (code *)*puVar42;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444ae3c;
        cVar24 = (*pcVar20)(plVar45,uVar19);
        if (cVar24 == '\0') goto label_0444b523;
        lVar56 = *plVar45;
        if ((ulong)*(ushort *)(lVar56 + 0x12e) != 0) {
          lVar55 = 0;
          do {
            if (*(long *)(*(long *)(lVar56 + 0xb0) + lVar55) == TypeInfo_IEnumerator) {
              puVar42 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar56 + 0xb0) + 8 + lVar55) + 1) * 0x10 + lVar56 + 0x138);
              goto label_0444aeb8;
            }
            lVar55 = lVar55 + 0x10;
          } while ((ulong)*(ushort *)(lVar56 + 0x12e) << 4 != lVar55);
        }
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444ae8c;
        puVar42 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar45,TypeInfo_IEnumerator,1);
label_0444aeb8:
        uVar19 = puVar42[1];
        pcVar20 = (code *)*puVar42;
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444aec1;
        plVar45 = (long *)(*pcVar20)(plVar45,uVar19);
        if (plVar45 != (long *)0x0) {
          if (*(long *)(*plVar45 + 0x40) != *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
label_0444b348:
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b350;
            il2cpp_runtime_helper_022b2fd0(plVar45);
label_0444b350:
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b358;
            il2cpp_runtime_helper_022b2fd0(unaff_R15);
            goto label_0444b358;
          }
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444aeed;
          puVar42 = (undefined8 *)il2cpp_runtime_helper_02305440(plVar45);
          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)*puVar42;
          pIVar41 = (Il2CppObject *)puVar42[1];
          if (pIVar41 != (Il2CppObject *)0x0) {
            bVar5 = (TypeInfo_BaseSetting->_2).naturalAligment;
            if (((pIVar41->klass->_2).naturalAligment < bVar5) ||
               ((pIVar41->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_BaseSetting)) {
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b348;
              plVar45 = (long *)il2cpp_runtime_helper_022b2fd0(pIVar41);
              goto label_0444b348;
            }
          }
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_R15 ==
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0444b35d;
          if ((((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)unaff_R15)->obj).klass !=
              g_data_057b9c00) goto label_0444b350;
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444af60;
          bVar26 = System_String__StartsWith((System_String_o *)unaff_R15,"Skin",(MethodInfo *)0x0);
          uVar27 = 0;
          if ((char)bVar26 != '\0') {
            if (pIVar41 != (Il2CppObject *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444af7d;
              pSVar46 = System_Object__GetType(pIVar41,(MethodInfo *)0x0);
              SVar23 = TypeRef_StringSetting;
              if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444afa6;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444afb0;
              pSVar47 = System_Type__GetTypeFromHandle(SVar23,(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444afbd;
              bVar26 = System_Type__op_Equality(pSVar46,pSVar47,(MethodInfo *)0x0);
              uVar27 = 1;
              if ((char)bVar26 == '\0') {
                *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444afd0;
                pSVar46 = System_Object__GetType(pIVar41,(MethodInfo *)0x0);
                SVar23 = TypeRef_FloatSetting;
                if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444aff9;
                  il2cpp_runtime_helper_02337ed0();
                }
                *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b003;
                pSVar47 = System_Type__GetTypeFromHandle(SVar23,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b010;
                uVar27 = System_Type__op_Equality(pSVar46,pSVar47,(MethodInfo *)0x0);
                uVar27 = uVar27 & 0xff;
              }
              goto label_0444b013;
            }
            goto label_0444b374;
          }
label_0444b013:
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b027;
          bVar26 = System_String__op_Equality((System_String_o *)unaff_R15,"Name",(MethodInfo *)0x0);
          pSVar17 = (parent->fields)._currentCategoryPanelName;
          if (pSVar17 == (Settings_StringSetting_o *)0x0) goto label_0444b362;
          pSVar39 = (pSVar17->fields)._value;
          *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b04c;
          bVar28 = System_String__op_Equality(pSVar39,(System_String_o *)"Human",(MethodInfo *)0x0);
          if ((char)bVar28 == '\0') {
label_0444b1b0:
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b1c4;
            bVar28 = System_String__op_Equality((System_String_o *)unaff_R15,"UniqueId",(MethodInfo *)0x0);
            if (pIVar41 == (Il2CppObject *)0x0) goto label_0444b36f;
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b1da;
            pSVar46 = System_Object__GetType(pIVar41,(MethodInfo *)0x0);
            SVar23 = TypeRef_StringSetting;
            if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b203;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b20d;
            pSVar47 = System_Type__GetTypeFromHandle(SVar23,(MethodInfo *)0x0);
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b21a;
            bVar29 = System_Type__op_Equality(pSVar46,pSVar47,(MethodInfo *)0x0);
            if ((char)bVar29 != '\0') goto label_0444adc0;
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b22c;
            pSVar46 = System_Object__GetType(pIVar41,(MethodInfo *)0x0);
            SVar23 = TypeRef_FloatSetting;
            if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b255;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b25f;
            pSVar47 = System_Type__GetTypeFromHandle(SVar23,(MethodInfo *)0x0);
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b26c;
            bVar29 = System_Type__op_Equality(pSVar46,pSVar47,(MethodInfo *)0x0);
            parent = *(UI_BasePanel_o **)((long)register0x00000020 + -0x70);
            plVar45 = *(long **)((long)register0x00000020 + -0x80);
            if ((char)bVar28 == '\0' && ((char)bVar26 == '\0' && (char)bVar29 == '\x01')) goto label_0444b284;
          }
          else {
            if (g_data_057ae6ff == '\0') {
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b069;
              il2cpp_runtime_helper_023445d0(&MethodInfo_ICustomSkinSettings_get_Item);
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b075;
              il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
              g_data_057ae6ff = '\x01';
            }
            pSVar17 = (parent->fields)._currentCategoryPanelName;
            if (pSVar17 == (Settings_StringSetting_o *)0x0) goto label_0444b379;
            pUVar18 = parent[1].klass;
            if (pUVar18 == (UI_BasePanel_c *)0x0) goto label_0444b37e;
            pSVar39 = (pSVar17->fields)._value;
            *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b0a9;
            pIVar48 = System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)pUVar18,
                                 (Il2CppObject *)pSVar39,MethodInfo_ICustomSkinSettings_get_Item);
            if (pIVar48 == (Il2CppObject *)0x0) goto label_0444b383;
            bVar5 = (TypeInfo_HumanCustomSkinSettings->_2).naturalAligment;
            if (((pIVar48->klass->_2).naturalAligment < bVar5) ||
               ((pIVar48->klass->_2).typeHierarchy[(ulong)bVar5 - 1] != TypeInfo_HumanCustomSkinSettings)) goto label_0444b367;
            if (pIVar48[6].monitor == (void *)0x0) goto label_0444b388;
            if (*(int *)((long)pIVar48[6].monitor + 0x14) != 1) goto label_0444b1b0;
            plVar45 = *(long **)((long)register0x00000020 + -0x80);
            if (uVar27 != 0) {
              pUVar51 = *(UnityEngine_Transform_o **)((long)register0x00000020 + -0x40);
              if (*(int *)((long)register0x00000020 + -100) < *(int *)((long)register0x00000020 + -0x74)) {
                pUVar51 = *(UnityEngine_Transform_o **)((long)register0x00000020 + -0x38);
              }
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b12a;
              pSVar39 = System_String__Substring((System_String_o *)unaff_R15,4,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b145;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b165;
              pSVar39 = UI_UIManager__GetLocale
                                  (*(System_String_o **)((long)register0x00000020 + -0x50),
                                   *(System_String_o **)((long)register0x00000020 + -0x48),pSVar39,
                                   (System_String_o *)"",(System_String_o *)"",
                                   (MethodInfo *)in_R9);
              *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
              *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
              *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
              *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
              in_R9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
              *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b1a2;
              UI_ElementFactory__CreateInputSetting
                        (pUVar51,*(UI_ElementStyle_o **)((long)register0x00000020 + -0x58),
                         (Settings_BaseSetting_o *)pIVar41,pSVar39,(System_String_o *)"",
                         *(float *)((long)register0x00000020 + -0x68),40.0,0,
                         *(UnityEngine_Events_UnityAction_o **)((long)register0x00000020 + -0xa8),
                         *(UnityEngine_Events_UnityAction_o **)((long)register0x00000020 + -0xa0),
                         *(System_Func_string__bool__o **)((long)register0x00000020 + -0x98),
                         *(System_Func_string__string__o **)((long)register0x00000020 + -0x90),
                         *(MethodInfo **)((long)register0x00000020 + -0x88));
              parent = *(UI_BasePanel_o **)((long)register0x00000020 + -0x70);
              goto label_0444b336;
            }
          }
          goto label_0444add3;
        }
label_0444b358:
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b35d;
        il2cpp_runtime_helper_022b2c90();
label_0444b35d:
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b362;
        il2cpp_runtime_helper_022b2c90();
label_0444b362:
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b367;
        pIVar48 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_0444b367:
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b36f;
        il2cpp_runtime_helper_022b2fd0(pIVar48);
label_0444b36f:
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b374;
        il2cpp_runtime_helper_022b2c90();
label_0444b374:
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b379;
        il2cpp_runtime_helper_022b2c90();
label_0444b379:
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b37e;
        il2cpp_runtime_helper_022b2c90();
label_0444b37e:
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b383;
        il2cpp_runtime_helper_022b2c90();
label_0444b383:
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b388;
        il2cpp_runtime_helper_022b2c90();
label_0444b388:
        *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b38d;
        il2cpp_runtime_helper_022b2c90();
      }
    }
    goto label_0444b38d;
  }
  goto label_0444b392;
label_0444adc0:
  parent = *(UI_BasePanel_o **)((long)register0x00000020 + -0x70);
  plVar45 = *(long **)((long)register0x00000020 + -0x80);
  if ((char)bVar26 == '\0' && (char)bVar28 == '\0') {
label_0444b284:
    pUVar51 = *(UnityEngine_Transform_o **)((long)register0x00000020 + -0x40);
    if (*(int *)((long)register0x00000020 + -100) < *(int *)((long)register0x00000020 + -0x74)) {
      pUVar51 = *(UnityEngine_Transform_o **)((long)register0x00000020 + -0x38);
    }
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b2ab;
    bVar26 = System_String__op_Equality((System_String_o *)unaff_R15,"Ground",(MethodInfo *)0x0);
    pSVar35 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
               ((long)register0x00000020 + -0x48);
    if ((char)bVar26 != '\0') {
      pSVar35 = "Skins.Common";
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b2d6;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b2f4;
    pSVar39 = UI_UIManager__GetLocale
                        (*(System_String_o **)((long)register0x00000020 + -0x50),(System_String_o *)pSVar35,
                         (System_String_o *)unaff_R15,(System_String_o *)"",
                         (System_String_o *)"",(MethodInfo *)in_R9);
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
    in_R9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0x444b331;
    UI_ElementFactory__CreateInputSetting
              (pUVar51,*(UI_ElementStyle_o **)((long)register0x00000020 + -0x58),
               (Settings_BaseSetting_o *)pIVar41,pSVar39,(System_String_o *)"",
               *(float *)((long)register0x00000020 + -0x68),40.0,0,
               *(UnityEngine_Events_UnityAction_o **)((long)register0x00000020 + -0xa8),
               *(UnityEngine_Events_UnityAction_o **)((long)register0x00000020 + -0xa0),
               *(System_Func_string__bool__o **)((long)register0x00000020 + -0x98),
               *(System_Func_string__string__o **)((long)register0x00000020 + -0x90),
               *(MethodInfo **)((long)register0x00000020 + -0x88));
    parent = *(UI_BasePanel_o **)((long)register0x00000020 + -0x70);
label_0444b336:
    *(int *)((long)register0x00000020 + -0x74) = *(int *)((long)register0x00000020 + -0x74) + 1;
  }
  goto label_0444add3;
}


// UI.SettingsSkinsDefaultPanel$$.ctor
// il2cpp: void UI_SettingsSkinsDefaultPanel___ctor (UI_SettingsSkinsDefaultPanel_o* __this, const MethodInfo* method);
// 0x444b680

void UI_SettingsSkinsDefaultPanel___ctor(UI_SettingsSkinsDefaultPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}



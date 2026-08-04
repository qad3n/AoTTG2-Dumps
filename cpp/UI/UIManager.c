// Type: UI.UIManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/UIManager.cs
// Prior real C# source (older reference): Assets/Scripts/UI/UIManager.cs
// --------------------------------

// UI.UIManager$$Init
// il2cpp: void UI_UIManager__Init (const MethodInfo* method);
// 0x4453180

void UI_UIManager__Init(MethodInfo *method)

{
  byte bVar1;
  UI_TipPanel_o *__this;
  UI_LoadingBackgroundPanel_o *pUVar2;
  UI_LoadingProgressPanel_o *pUVar3;
  UI_InGameMenu_c *pUVar4;
  UI_ItemHandler_o *pUVar5;
  UI_EmoteHandler_o *pUVar6;
  UI_EmoteHandler_c *pUVar7;
  code *vtableDispatch;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  Settings_TypedSetting_T__o *pSVar12;
  System_Collections_Generic_Dictionary_object__object__c *pSVar13;
  UnityEngine_Component_o *__this_00;
  UI_BaseMenu_o *__this_01;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_09;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_10;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_11;
  int32_t *piVar14;
  undefined4 uVar15;
  uint uVar16;
  bool_conflict bVar17;
  UnityEngine_GameObject_o *pUVar18;
  System_String_o *pSVar19;
  UI_BasePopup_o *__this_12;
  System_Enum_c *__this_13;
  Il2CppClass *pIVar20;
  UnityEngine_Object_o *pUVar21;
  Events_OnLoadScene_o *value;
  System_String_array *pSVar22;
  long *plVar23;
  long *plVar24;
  Il2CppObject *pIVar25;
  Il2CppClass *pIVar26;
  Il2CppClass *pIVar27;
  undefined8 *puVar28;
  System_String_o *pSVar29;
  Il2CppObject *pIVar30;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_14;
  System_Object_array *pSVar31;
  Il2CppClass *pIVar32;
  UnityEngine_AudioSource_o *__this_15;
  MethodInfo_3105020 **ppMVar33;
  long *method_00;
  MethodInfo_255AB00 **ppMVar34;
  MethodInfo_3104D80 **args;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  System_String_o *item;
  int iVar35;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **ppSVar36;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar37;
  Il2CppRGCTXData *pIVar38;
  void *pvVar39;
  System_String_array *pSVar40;
  System_Object_array **ppSVar41;
  MethodInfo *pMVar42;
  UI_BasePopup_o *__this_16;
  System_Enum_c *__this_17;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar43;
  MethodInfo *in_R9;
  long *unaff_R12;
  uint uVar44;
  long *unaff_R13;
  System_String_array *unaff_R14;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **unaff_R15;
  float fVar45;
  float fVar46;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  void *pvVar47;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar48;
  undefined1 auStackY_1e0 [48];
  UnityEngine_Object_o *pUStackY_1b0;
  Il2CppClass *pIStackY_1a8;
  undefined8 uStackY_1a0;
  Il2CppClass *pIStackY_198;
  Il2CppClass *pIStackY_190;
  Il2CppRGCTXData *pIStackY_188;
  void *pvStackY_180;
  UnityEngine_Object_o *pUStackY_178;
  Il2CppClass *pIStackY_170;
  System_String_array *pSStackY_168;
  Il2CppRGCTXData *pIStackY_160;
  Il2CppObject *pIStackY_158;
  Il2CppClass *pIStackY_150;
  Il2CppRGCTXData *pIStackY_148;
  Il2CppClass *pIVar49;
  uint32_t uVar50;
  int32_t iVar51;
  uint32_t uVar52;
  uint32_t uVar53;
  Il2CppRGCTXData *pIVar54;
  Il2CppClass *pIVar55;
  _union_13 _Var56;
  _union_14 _Var57;
  Il2CppClass *pIStack_f0;
  Il2CppClass *pIStack_e8;
  uint32_t uStack_e0;
  int32_t iStack_dc;
  uint32_t uStack_d8;
  uint32_t uStack_d4;
  Il2CppRGCTXData *pIStack_d0;
  Il2CppClass *pIStack_c8;
  System_String_o *pSStack_c0;
  _union_13 _Stack_b8;
  _union_14 _Stack_b0;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_a8;
  Il2CppClass *pIStack_a0;
  Il2CppClass *pIStack_98;
  System_String_array *pSStack_90;
  Il2CppClass *pIStack_88;
  Il2CppRGCTXData *pIStack_80;
  System_String_o *pSStack_78;
  MethodInfo *pMStack_70;
  Il2CppClass *pIStack_68;
  Il2CppClass *pIStack_60;
  System_String_array *pSStack_58;
  Il2CppClass *pIStack_50;
  System_String_array *pSStack_48;
  MethodInfo *pMStack_40;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **ppSStack_38;
  
  if (g_data_057ae71a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_LoadingMenu_CreateMenu_LoadingMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UIManager_CreateSingleton_UIManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Prefabs/Panels/BackgroundMenu");
    g_data_057ae71a = '\x01';
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar20 = (Il2CppClass *)
            Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)TypeInfo_UIManager->m_Items[6].fields.key[2].klass,MethodInfo_UIManager_CreateSingleton_UIManager);
  ppMVar33 = (MethodInfo_3105020 **)TypeInfo_UIManager;
  pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar25[2].klass = pIVar20;
  pMVar42 = (MethodInfo *)(pIVar25 + 2);
  il2cpp_runtime_helper_022b4080();
  UI_UIManager__LoadLanguages(pMVar42);
  UI_UIManager__LoadUIThemes(pMVar42);
  UI_UIManager__LoadProfileIcons(pMVar42);
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) {
    pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar25[1].monitor = *(void **)(lVar9 + 0x18);
    il2cpp_runtime_helper_022b4080(&pIVar25[1].monitor);
    pIVar20 = (Il2CppClass *)UI_ElementFactory__CreateMenu_object_("Prefabs/Panels/BackgroundMenu",MethodInfo_LoadingMenu_CreateMenu_LoadingMenu);
    ppMVar33 = (MethodInfo_3105020 **)TypeInfo_UIManager;
    pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar25[3].klass = pIVar20;
    il2cpp_runtime_helper_022b4080(pIVar25 + 3);
    pIVar20 = TypeInfo_UIManager->m_Items[6].fields.key[3].klass;
    if (pIVar20 != (Il2CppClass *)0x0) {
      (**(code **)((long)(pIVar20->_1).image + 0x178))();
      pIVar20 = TypeInfo_UIManager->m_Items[6].fields.key[3].klass;
      if (pIVar20 != (Il2CppClass *)0x0) {
        pUVar21 = (UnityEngine_Object_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar20,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__DontDestroyOnLoad(pUVar21,(MethodInfo *)0x0);
        value = (Events_OnLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadScene);
        Events_OnLoadScene___ctor();
        Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  pMStack_40 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
  ppSStack_38 = &TypeInfo_UIManager;
  if (g_data_057ae72d == '\0') {
    pSStack_48 = (System_String_array *)0x44533a4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    pSStack_48 = (System_String_array *)0x44533b0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_48 = (System_String_array *)0x44533bc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_48 = (System_String_array *)0x44533c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    pSStack_48 = (System_String_array *)0x44533d4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_48 = (System_String_array *)0x44533e0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    pSStack_48 = (System_String_array *)0x44533ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSStack_48 = (System_String_array *)0x44533f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_48 = (System_String_array *)0x4453404;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pSStack_48 = (System_String_array *)0x4453410;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_48 = (System_String_array *)0x445341c;
    il2cpp_runtime_helper_023445d0(&"No language folder found, creating it.");
    pSStack_48 = (System_String_array *)0x4453428;
    il2cpp_runtime_helper_023445d0(&"Name");
    pSStack_48 = (System_String_array *)0x4453434;
    il2cpp_runtime_helper_023445d0(&"Arabic");
    pSStack_48 = (System_String_array *)0x4453440;
    il2cpp_runtime_helper_023445d0(&"*.json");
    pSStack_48 = (System_String_array *)0x445344c;
    il2cpp_runtime_helper_023445d0(&"English");
    g_data_057ae72d = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    pSStack_48 = (System_String_array *)0x445346c;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_48 = (System_String_array *)0x4453482;
  uVar16 = System_IO_Directory__Exists
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x10),(MethodInfo *)0x0);
  ppSVar36 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(ulong)uVar16;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    pSStack_48 = (System_String_array *)0x4453753;
    il2cpp_runtime_helper_02337ed0();
    pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x10);
  }
  else {
    pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x10);
  }
  if ((char)uVar16 == '\0') {
    pSStack_48 = (System_String_array *)0x4453771;
    System_IO_Directory__CreateDirectory(pSVar19,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      pSStack_48 = (System_String_array *)0x4453789;
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log("No language folder found, creating it.",(MethodInfo *)0x0);
    return;
  }
  pSStack_48 = (System_String_array *)0x44534b9;
  pSVar22 = System_IO_Directory__GetFiles(pSVar19,"*.json",(MethodInfo *)0x0);
  pSVar40 = (System_String_array *)&TypeInfo_FolderPaths;
  if (pSVar22 == (System_String_array *)0x0) {
label_04453811:
    pSStack_48 = (System_String_array *)0x4453816;
    il2cpp_runtime_helper_022b2c90();
label_04453816:
    pSStack_48 = (System_String_array *)0x445381e;
    il2cpp_runtime_helper_022b2fd0(unaff_R13);
    pSVar22 = pSVar40;
  }
  else {
    pSVar40 = pSVar22;
    if ((int)pSVar22->max_length < 1) {
label_044536cf:
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        pSStack_48 = (System_String_array *)0x44536e7;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      ppSVar36 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&TypeInfo_SettingsManager;
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) {
        ppMVar33 = (MethodInfo_3105020 **)TypeInfo_UIManager->m_Items[6].fields.key;
        pSVar11 = ((Il2CppClass_1 *)
                  &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppMVar33)->obj)->image;
        if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSStack_48 = (System_String_array *)0x445373b;
          bVar17 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar11,*(Il2CppObject **)(lVar9 + 0x18),MethodInfo_Boolean_ContainsKey);
          if ((char)bVar17 != '\0') {
            return;
          }
          lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
          if ((lVar9 != 0) &&
             (pSVar12 = *(Settings_TypedSetting_T__o **)(lVar9 + 0x20),
             pSVar12 != (Settings_TypedSetting_T__o *)0x0)) {
            pSStack_48 = (System_String_array *)0x44537dd;
            Settings_TypedSetting_object___set_Value(pSVar12,"English",MethodInfo_Void_set_Value);
            plVar24 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
            if (plVar24 != (long *)0x0) {
              (**(code **)(*plVar24 + 0x238))(plVar24,*(undefined8 *)(*plVar24 + 0x240));
              return;
            }
          }
        }
      }
      goto label_04453811;
    }
    unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)0x0;
    ppSVar36 = &TypeInfo_UIManager;
    if ((pSVar22->max_length & 0xffffffff) != 0) {
      do {
        pMStack_40 = (MethodInfo *)pSVar22->m_Items[(long)unaff_R15];
        pSStack_48 = (System_String_array *)0x445351e;
        pSVar19 = System_IO_File__ReadAllText((System_String_o *)pMStack_40,(MethodInfo *)0x0);
        pSStack_48 = (System_String_array *)0x4453528;
        unaff_R13 = (long *)SimpleJSONFixed_JSON__Parse(pSVar19,(MethodInfo *)0x0);
        if ((Il2CppClass *)unaff_R13 != (Il2CppClass *)0x0) {
          pIVar20 = (((Il2CppClass *)unaff_R13)->_1).image;
          bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
          ppMVar33 = (MethodInfo_3105020 **)(ulong)bVar1;
          if (((pIVar20->_2).naturalAligment < bVar1) ||
             ((pIVar20->_2).typeHierarchy
              [(long)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             ((long)ppMVar33 + -0x180008))->m_Items[0xfffe].fields.value + 7)] != TypeInfo_JSONObject
             )) goto label_04453816;
        }
        if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
          pSStack_48 = (System_String_array *)0x4453574;
          il2cpp_runtime_helper_02337ed0();
        }
        if ((Il2CppClass *)unaff_R13 == (Il2CppClass *)0x0) goto label_04453811;
        unaff_R12 = (long *)(TypeInfo_UIManager->m_Items[6].fields.key)->klass;
        pIVar20 = (((Il2CppClass *)unaff_R13)->_1).image;
        pSStack_48 = (System_String_array *)0x44535a8;
        unaff_R14 = (System_String_array *)
                    (*pIVar20->vtable[7].methodPtr)(unaff_R13,"Name",pIVar20->vtable[7].method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_48 = (System_String_array *)0x44535c3;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_48 = (System_String_array *)0x44535cd;
        pSVar19 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                            ((SimpleJSONFixed_JSONNode_o *)unaff_R14,(MethodInfo *)0x0);
        if ((Il2CppClass *)unaff_R12 == (Il2CppClass *)0x0) goto label_04453811;
        ppMVar33 = &MethodInfo_Boolean_ContainsKey;
        pSStack_48 = (System_String_array *)0x44535eb;
        bVar17 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R12,
                            (Il2CppObject *)pSVar19,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar17 == '\0') {
          pIVar20 = (((Il2CppClass *)unaff_R13)->_1).image;
          pSStack_48 = (System_String_array *)0x4453611;
          puVar28 = (undefined8 *)
                    (*pIVar20->vtable[7].methodPtr)(unaff_R13,"Name",pIVar20->vtable[7].method);
          if (puVar28 == (undefined8 *)0x0) goto label_04453811;
          ppMVar33 = (MethodInfo_3105020 **)*puVar28;
          pSStack_48 = (System_String_array *)0x445362d;
          unaff_R12 = (long *)(*(code *)((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                        ppMVar33)->m_Items[0x11].fields.value)(puVar28);
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            pSStack_48 = (System_String_array *)0x4453641;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar20 = (TypeInfo_UIManager->m_Items[6].fields.key)->klass;
          if (pIVar20 == (Il2CppClass *)0x0) goto label_04453811;
          pSStack_48 = (System_String_array *)0x445366c;
          ppMVar33 = (MethodInfo_3105020 **)MethodInfo_Void_Add;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)pIVar20,
                     (Il2CppObject *)unaff_R12,(Il2CppObject *)unaff_R13,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
          if (pMStack_40 == (MethodInfo *)0x0) goto label_04453811;
          pSStack_48 = (System_String_array *)0x445368a;
          bVar17 = System_String__Contains((System_String_o *)pMStack_40,"Arabic",(MethodInfo *)0x0);
          if ((char)bVar17 != '\0') {
            if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
              pSStack_48 = (System_String_array *)0x44536a3;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar20 = TypeInfo_UIManager->m_Items[6].fields.key[2].klass;
            if (pIVar20 == (Il2CppClass *)0x0) goto label_04453811;
            (pIVar20->_1).byval_arg.data = unaff_R12;
            pSStack_48 = (System_String_array *)0x44536ca;
            il2cpp_runtime_helper_022b4080(&(pIVar20->_1).byval_arg);
          }
        }
        unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                    ((long)&(((Il2CppClass *)unaff_R15)->_1).image + 1);
        uVar16 = (uint)pSVar22->max_length;
        ppMVar33 = (MethodInfo_3105020 **)(long)(int)uVar16;
        if ((long)ppMVar33 <= (long)unaff_R15) goto label_044536cf;
      } while (unaff_R15 < (Il2CppClass *)(ulong)uVar16);
    }
  }
  pSStack_48 = (System_String_array *)0x4453823;
  pSStack_78 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
  pMStack_70 = (MethodInfo *)ppSVar36;
  pIStack_68 = (Il2CppClass *)unaff_R12;
  pIStack_60 = (Il2CppClass *)unaff_R13;
  pSStack_58 = unaff_R14;
  pIStack_50 = (Il2CppClass *)unaff_R15;
  pSStack_48 = pSVar22;
  if (g_data_057ae732 == '\0') {
    pIStack_80 = (Il2CppRGCTXData *)0x4453854;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    pIStack_80 = (Il2CppRGCTXData *)0x4453860;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_80 = (Il2CppRGCTXData *)0x445386c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pIStack_80 = (Il2CppRGCTXData *)0x4453878;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    pIStack_80 = (Il2CppRGCTXData *)0x4453884;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pIStack_80 = (Il2CppRGCTXData *)0x4453890;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    pIStack_80 = (Il2CppRGCTXData *)0x445389c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIStack_80 = (Il2CppRGCTXData *)0x44538a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pIStack_80 = (Il2CppRGCTXData *)0x44538b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pIStack_80 = (Il2CppRGCTXData *)0x44538c0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStack_80 = (Il2CppRGCTXData *)0x44538cc;
    il2cpp_runtime_helper_023445d0(&"No UI theme folder found, creating it.");
    pIStack_80 = (Il2CppRGCTXData *)0x44538d8;
    il2cpp_runtime_helper_023445d0(&"Dark");
    pIStack_80 = (Il2CppRGCTXData *)0x44538e4;
    il2cpp_runtime_helper_023445d0(&"Name");
    pIStack_80 = (Il2CppRGCTXData *)0x44538f0;
    il2cpp_runtime_helper_023445d0(&"*.json");
    g_data_057ae732 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    pIStack_80 = (Il2CppRGCTXData *)0x4453910;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_80 = (Il2CppRGCTXData *)0x4453926;
  uVar16 = System_IO_Directory__Exists
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28),(MethodInfo *)0x0);
  plVar24 = (long *)(ulong)uVar16;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    pIStack_80 = (Il2CppRGCTXData *)0x4453b96;
    il2cpp_runtime_helper_02337ed0();
    pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28);
  }
  else {
    pSVar19 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28);
  }
  if ((char)uVar16 == '\0') {
    pIStack_80 = (Il2CppRGCTXData *)0x4453bb4;
    System_IO_Directory__CreateDirectory(pSVar19,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      pIStack_80 = (Il2CppRGCTXData *)0x4453bcc;
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log("No UI theme folder found, creating it.",(MethodInfo *)0x0);
    return;
  }
  pIStack_80 = (Il2CppRGCTXData *)0x445395d;
  plVar23 = (long *)System_IO_Directory__GetFiles(pSVar19,"*.json",(MethodInfo *)0x0);
  ppSVar36 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&TypeInfo_FolderPaths;
  if ((System_String_array *)plVar23 == (System_String_array *)0x0) {
label_04453c54:
    plVar23 = (long *)unaff_R14;
    pIStack_80 = (Il2CppRGCTXData *)0x4453c59;
    il2cpp_runtime_helper_022b2c90();
label_04453c59:
    pIStack_80 = (Il2CppRGCTXData *)0x4453c61;
    il2cpp_runtime_helper_022b2fd0(unaff_R15);
    ppSVar41 = (System_Object_array **)ppSVar36;
  }
  else {
    unaff_R14 = (System_String_array *)plVar23;
    if ((int)((System_String_array *)plVar23)->max_length < 1) {
label_04453b11:
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        pIStack_80 = (Il2CppRGCTXData *)0x4453b29;
        il2cpp_runtime_helper_02337ed0();
      }
      plVar24 = &TypeInfo_SettingsManager;
      lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar9 != 0) && (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0)) {
        ppMVar33 = (MethodInfo_3105020 **)TypeInfo_UIManager->m_Items[6].fields.key;
        pSVar11 = ((Il2CppClass_1 *)
                  &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppMVar33)->obj)->
                  gc_desc;
        if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pIStack_80 = (Il2CppRGCTXData *)0x4453b7e;
          bVar17 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar11,*(Il2CppObject **)(lVar9 + 0x18),MethodInfo_Boolean_ContainsKey);
          if ((char)bVar17 != '\0') {
            return;
          }
          lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar9 != 0) &&
             (pSVar12 = *(Settings_TypedSetting_T__o **)(lVar9 + 0x20),
             pSVar12 != (Settings_TypedSetting_T__o *)0x0)) {
            pIStack_80 = (Il2CppRGCTXData *)0x4453c20;
            Settings_TypedSetting_object___set_Value(pSVar12,"Dark",MethodInfo_Void_set_Value);
            plVar23 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            if (plVar23 != (long *)0x0) {
              (**(code **)(*plVar23 + 0x238))(plVar23,*(undefined8 *)(*plVar23 + 0x240));
              return;
            }
          }
        }
      }
      goto label_04453c54;
    }
    unaff_R13 = (long *)0x0;
    ppSVar36 = &TypeInfo_UIManager;
    ppSVar41 = (System_Object_array **)ppSVar36;
    if ((((System_String_array *)plVar23)->max_length & 0xffffffff) != 0) {
      do {
        pIStack_80 = (Il2CppRGCTXData *)0x44539bb;
        pSVar19 = System_IO_File__ReadAllText
                            (((System_String_array *)plVar23)->m_Items[(long)unaff_R13],(MethodInfo *)0x0);
        pIStack_80 = (Il2CppRGCTXData *)0x44539c5;
        unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                    SimpleJSONFixed_JSON__Parse(pSVar19,(MethodInfo *)0x0);
        if ((Il2CppClass *)unaff_R15 != (Il2CppClass *)0x0) {
          pSVar13 = (((Il2CppClass *)unaff_R15)->_1).image;
          bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
          ppMVar33 = (MethodInfo_3105020 **)(ulong)bVar1;
          if (((pSVar13->_2).naturalAligment < bVar1) ||
             ((pSVar13->_2).typeHierarchy
              [(long)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                             ((long)ppMVar33 + -0x180008))->m_Items[0xfffe].fields.value + 7)] != TypeInfo_JSONObject
             )) goto label_04453c59;
        }
        if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
          pIStack_80 = (Il2CppRGCTXData *)0x4453a11;
          il2cpp_runtime_helper_02337ed0();
        }
        if ((Il2CppClass *)unaff_R15 == (Il2CppClass *)0x0) goto label_04453c54;
        unaff_R12 = (TypeInfo_UIManager->m_Items[6].fields.key)->monitor;
        pSVar13 = (((Il2CppClass *)unaff_R15)->_1).image;
        pIStack_80 = (Il2CppRGCTXData *)0x4453a46;
        plVar24 = (long *)(*(pSVar13->vtable).
                            _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.methodPtr)
                                    (unaff_R15,"Name",
                                     (pSVar13->vtable).
                                     _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.method)
        ;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pIStack_80 = (Il2CppRGCTXData *)0x4453a61;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_80 = (Il2CppRGCTXData *)0x4453a6b;
        pSVar19 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                            ((SimpleJSONFixed_JSONNode_o *)plVar24,(MethodInfo *)0x0);
        if ((Il2CppClass *)unaff_R12 == (Il2CppClass *)0x0) goto label_04453c54;
        ppMVar33 = &MethodInfo_Boolean_ContainsKey;
        pIStack_80 = (Il2CppRGCTXData *)0x4453a89;
        bVar17 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R12,
                            (Il2CppObject *)pSVar19,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar17 == '\0') {
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            pIStack_80 = (Il2CppRGCTXData *)0x4453aa3;
            il2cpp_runtime_helper_02337ed0();
          }
          plVar24 = (TypeInfo_UIManager->m_Items[6].fields.key)->monitor;
          pSVar13 = (((Il2CppClass *)unaff_R15)->_1).image;
          pIStack_80 = (Il2CppRGCTXData *)0x4453acf;
          puVar28 = (undefined8 *)
                    (*(pSVar13->vtable)._7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.
                      methodPtr)(unaff_R15,"Name",
                                 (pSVar13->vtable).
                                 _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.method);
          if (puVar28 == (undefined8 *)0x0) goto label_04453c54;
          ppMVar33 = (MethodInfo_3105020 **)*puVar28;
          uVar10._0_4_ = ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppMVar33)->
                         m_Items[0x12].fields.hashCode;
          uVar10._4_4_ = ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppMVar33)->
                         m_Items[0x12].fields.next;
          pIStack_80 = (Il2CppRGCTXData *)0x4453aeb;
          pIVar25 = (Il2CppObject *)
                    (*(code *)((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)ppMVar33)->
                              m_Items[0x11].fields.value)(puVar28,uVar10);
          if ((System_Collections_Generic_Dictionary_object__object__o *)plVar24 ==
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04453c54;
          pIStack_80 = (Il2CppRGCTXData *)0x4453b0c;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)plVar24,pIVar25,
                     (Il2CppObject *)unaff_R15,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
        }
        unaff_R13 = (long *)((long)&(((Il2CppClass *)unaff_R13)->_1).image + 1);
        uVar16 = (uint)((System_String_array *)plVar23)->max_length;
        ppMVar33 = (MethodInfo_3105020 **)(long)(int)uVar16;
        if ((long)ppMVar33 <= (long)unaff_R13) goto label_04453b11;
      } while (unaff_R13 < (Il2CppClass *)(ulong)uVar16);
    }
  }
  pIStack_80 = (Il2CppRGCTXData *)0x4453c66;
  il2cpp_runtime_helper_022b2ca0();
  method_00 = (long *)ppMVar33;
  pSStack_a8 = (System_Collections_Generic_Dictionary_object__object__o *)plVar24;
  pIStack_a0 = (Il2CppClass *)unaff_R12;
  pIStack_98 = (Il2CppClass *)unaff_R13;
  pSStack_90 = (System_String_array *)plVar23;
  pIStack_88 = (Il2CppClass *)unaff_R15;
  pIStack_80 = (Il2CppRGCTXData *)ppSVar41;
  if (g_data_057ae71f == '\0') {
    pIStackY_148 = (void *)0x4453c9a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pIStackY_148 = (void *)0x4453ca6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pIStackY_148 = (void *)0x4453cb2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    pIStackY_148 = (void *)0x4453cbe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStackY_148 = (void *)0x4453cca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pIStackY_148 = (void *)0x4453cd6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pIStackY_148 = (void *)0x4453ce2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStackY_148 = (void *)0x4453cee;
    il2cpp_runtime_helper_023445d0(&"ProfileIconInfo");
    pIStackY_148 = (void *)0x4453cfa;
    il2cpp_runtime_helper_023445d0(&"Icons");
    pIStackY_148 = (void *)0x4453d06;
    il2cpp_runtime_helper_023445d0(&"AnimatedEmojis");
    pIStackY_148 = (void *)0x4453d12;
    il2cpp_runtime_helper_023445d0(&"AllEmojis");
    pIStackY_148 = (void *)0x4453d1e;
    il2cpp_runtime_helper_023445d0(&"EmoteInfo");
    g_data_057ae71f = '\x01';
    method_00 = (long *)ppMVar33;
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    pIStackY_148 = (void *)0x4453d5c;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar20 = *(Il2CppClass **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    pIStackY_148 = (void *)0x4453d82;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStackY_148 = (void *)0x4453d96;
  pIVar26 = (Il2CppClass *)
            ApplicationManagers_ResourceManager__LoadText
                      ((System_String_o *)pIVar20,"ProfileIconInfo",(MethodInfo *)0x0);
  pMVar42 = (MethodInfo *)0x0;
  pIStackY_148 = (void *)0x4453da0;
  pIVar27 = (Il2CppClass *)SimpleJSONFixed_JSON__Parse((System_String_o *)pIVar26,(MethodInfo *)0x0);
  if (pIVar27 != (Il2CppClass *)0x0) {
    method_00 = (pIVar27->_1).image;
    pIStackY_148 = (void *)0x4453dc6;
    pMVar42 = "Icons";
    puVar28 = (undefined8 *)
              (*(code *)((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->
                        m_Items[0x10].fields.key)
                        (pIVar27,"Icons",
                         ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->
                         m_Items[0x10].fields.value);
    pIVar26 = pIVar27;
    if (puVar28 != (undefined8 *)0x0) {
      method_00 = (long *)*puVar28;
      pIStackY_148 = (void *)0x4453de7;
      (**(code **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->m_Items
                   [0x21].fields)
                (&stack0xffffffffffffff10,puVar28,
                 ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->m_Items[0x21]
                 .fields.key);
      pIStackY_148 = (void *)0x4453e28;
      __this_03.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_e8;
      __this_03.fields._0_8_ = pIStack_f0;
      __this_03.fields.m_Object.fields._version = uStack_e0;
      __this_03.fields.m_Object.fields._index = iStack_dc;
      __this_03.fields.m_Object.fields._current.fields.key._0_4_ = uStack_d8;
      __this_03.fields.m_Object.fields._current.fields.key._4_4_ = uStack_d4;
      __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_d0;
      __this_03.fields.m_Object.fields._32_8_ = pIStack_c8;
      __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSStack_c0;
      __this_03.fields.m_Array.fields._8_8_ = _Stack_b8.rgctx_data;
      __this_03.fields.m_Array.fields._current = _Stack_b0.genericMethod;
      pIVar27 = pIStack_f0;
      pIVar32 = pIStack_e8;
      uVar50 = uStack_e0;
      iVar51 = iStack_dc;
      uVar52 = uStack_d8;
      uVar53 = uStack_d4;
      pIVar54 = pIStack_d0;
      pIVar49 = pIStack_c8;
      pSVar19 = pSStack_c0;
      _Var56 = _Stack_b8;
      _Var57 = _Stack_b0;
      bVar17 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)&stack0xfffffffffffffec0)
      ;
      if ((char)bVar17 != '\0') {
        unaff_R13 = &TypeInfo_JSONNode;
        unaff_R12 = &MethodInfo_Void_Add;
        do {
          pIStackY_148 = (void *)0x4453e86;
          __this_05.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar32;
          __this_05.fields._0_8_ = pIVar27;
          __this_05.fields.m_Object.fields._version = uVar50;
          __this_05.fields.m_Object.fields._index = iVar51;
          __this_05.fields.m_Object.fields._current.fields.key._0_4_ = uVar52;
          __this_05.fields.m_Object.fields._current.fields.key._4_4_ = uVar53;
          __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar54;
          __this_05.fields.m_Object.fields._32_8_ = pIVar49;
          __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
          __this_05.fields.m_Array.fields._8_8_ = _Var56.rgctx_data;
          __this_05.fields.m_Array.fields._current = _Var57.genericMethod;
          SVar48 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_05,(MethodInfo *)&stack0xfffffffffffffec0);
          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)SVar48.fields.value;
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            pIStackY_148 = (void *)0x4453e9b;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar20 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pIStackY_148 = (void *)0x4453ebc;
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar42 = (MethodInfo *)0x0;
          pIStackY_148 = (void *)0x4453ec6;
          pIVar26 = (Il2CppClass *)unaff_R15;
          pSVar29 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                              ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(MethodInfo *)0x0);
          lVar9 = MethodInfo_Void_Add;
          ppSVar41 = (System_Object_array **)&TypeInfo_UIManager;
          plVar23 = (long *)&stack0xfffffffffffffec0;
          if (pIVar20 == (Il2CppClass *)0x0) goto label_0445420e;
          piVar14 = (int32_t *)((long)&(pIVar20->_1).namespaze + 4);
          *piVar14 = *piVar14 + 1;
          method_00 = (long *)((System_Collections_Generic_List_object__Fields *)&(pIVar20->_1).name)->_items;
          plVar23 = (long *)&stack0xfffffffffffffec0;
          if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00 ==
              (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0445420e;
          uVar16 = *(uint *)&(pIVar20->_1).namespaze;
          if (uVar16 < *(uint *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00
                                 )->max_length) {
            *(uint *)&(pIVar20->_1).namespaze = uVar16 + 1;
            *(System_String_o **)
             ((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->m_Items
                     [0].fields.hashCode + (long)(int)uVar16 * 8) = pSVar29;
            pIStackY_148 = (void *)0x4453f0c;
            il2cpp_runtime_helper_022b4080((void **)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                  *)method_00)->m_Items[0].fields.hashCode +
                                        (long)(int)uVar16 * 8));
          }
          else {
            method_00 = *(long **)(*(long *)(lVar9 + 0x20) + 0xc0);
            pIStackY_148 = (void *)0x4453e6a;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pIVar20,(Il2CppObject *)pSVar29,
                       (MethodInfo_362C220 *)
                       ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->m_Items
                       [3].fields.key);
          }
          pIStackY_148 = (void *)0x4453e74;
          __this_04.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar32;
          __this_04.fields._0_8_ = pIVar27;
          __this_04.fields.m_Object.fields._version = uVar50;
          __this_04.fields.m_Object.fields._index = iVar51;
          __this_04.fields.m_Object.fields._current.fields.key._0_4_ = uVar52;
          __this_04.fields.m_Object.fields._current.fields.key._4_4_ = uVar53;
          __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar54;
          __this_04.fields.m_Object.fields._32_8_ = pIVar49;
          __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
          __this_04.fields.m_Array.fields._8_8_ = _Var56.rgctx_data;
          __this_04.fields.m_Array.fields._current = _Var57.genericMethod;
          bVar17 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_04,(MethodInfo *)&stack0xfffffffffffffec0);
          plVar23 = (long *)&stack0xfffffffffffffec0;
        } while ((char)bVar17 != '\0');
      }
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        pIStackY_148 = (void *)0x4453f29;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = &TypeInfo_ResourceManager;
      pIVar20 = *(Il2CppClass **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        pIStackY_148 = (void *)0x4453f4f;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStackY_148 = (void *)0x4453f63;
      pIVar26 = (Il2CppClass *)
                ApplicationManagers_ResourceManager__LoadText
                          ((System_String_o *)pIVar20,"EmoteInfo",(MethodInfo *)0x0);
      pMVar42 = (MethodInfo *)0x0;
      pIStackY_148 = (void *)0x4453f6d;
      pIVar27 = (Il2CppClass *)SimpleJSONFixed_JSON__Parse((System_String_o *)pIVar26,(MethodInfo *)0x0);
      if (pIVar27 != (Il2CppClass *)0x0) {
        method_00 = (pIVar27->_1).image;
        pIStackY_148 = (void *)0x4453f98;
        pMVar42 = "AllEmojis";
        pIVar26 = pIVar27;
        puVar28 = (undefined8 *)
                  (*(code *)((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->
                            m_Items[0x10].fields.key)
                            (pIVar27,"AllEmojis",
                             ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->
                             m_Items[0x10].fields.value);
        if (puVar28 != (undefined8 *)0x0) {
          method_00 = (long *)*puVar28;
          pIStackY_148 = (void *)0x4453fb9;
          (**(code **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->m_Items
                       [0x21].fields)
                    (&stack0xffffffffffffff10,puVar28,
                     ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->m_Items
                     [0x21].fields.key);
          pIStackY_148 = (void *)0x4453ffa;
          __this_06.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_e8;
          __this_06.fields._0_8_ = pIStack_f0;
          __this_06.fields.m_Object.fields._version = uStack_e0;
          __this_06.fields.m_Object.fields._index = iStack_dc;
          __this_06.fields.m_Object.fields._current.fields.key._0_4_ = uStack_d8;
          __this_06.fields.m_Object.fields._current.fields.key._4_4_ = uStack_d4;
          __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_d0;
          __this_06.fields.m_Object.fields._32_8_ = pIStack_c8;
          __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSStack_c0;
          __this_06.fields.m_Array.fields._8_8_ = _Stack_b8.rgctx_data;
          __this_06.fields.m_Array.fields._current = _Stack_b0.genericMethod;
          pIVar32 = pIStack_f0;
          pIVar49 = pIStack_e8;
          uVar50 = uStack_e0;
          iVar51 = iStack_dc;
          uVar52 = uStack_d8;
          uVar53 = uStack_d4;
          pIVar54 = pIStack_d0;
          pIVar55 = pIStack_c8;
          pSVar19 = pSStack_c0;
          _Var56 = _Stack_b8;
          _Var57 = _Stack_b0;
          bVar17 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_06,(MethodInfo *)&stack0xfffffffffffffec0);
          if ((char)bVar17 != '\0') {
            unaff_R13 = &TypeInfo_JSONNode;
            plVar23 = &MethodInfo_Void_Add;
            do {
              pIStackY_148 = (void *)0x4454056;
              __this_08.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar49;
              __this_08.fields._0_8_ = pIVar32;
              __this_08.fields.m_Object.fields._version = uVar50;
              __this_08.fields.m_Object.fields._index = iVar51;
              __this_08.fields.m_Object.fields._current.fields.key._0_4_ = uVar52;
              __this_08.fields.m_Object.fields._current.fields.key._4_4_ = uVar53;
              __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar54;
              __this_08.fields.m_Object.fields._32_8_ = pIVar55;
              __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
              __this_08.fields.m_Array.fields._8_8_ = _Var56.rgctx_data;
              __this_08.fields.m_Array.fields._current = _Var57.genericMethod;
              SVar48 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_08,(MethodInfo *)&stack0xfffffffffffffec0);
              unaff_R12 = (long *)SVar48.fields.value;
              if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
                pIStackY_148 = (void *)0x445406b;
                il2cpp_runtime_helper_02337ed0();
              }
              pIVar20 = TypeInfo_UIManager->m_Items[6].fields.key[4].monitor;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pIStackY_148 = (void *)0x445408c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar42 = (MethodInfo *)0x0;
              pIStackY_148 = (void *)0x4454096;
              pIVar26 = (Il2CppClass *)unaff_R12;
              pSVar29 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                                  ((SimpleJSONFixed_JSONNode_o *)unaff_R12,(MethodInfo *)0x0);
              lVar9 = MethodInfo_Void_Add;
              ppSVar41 = (System_Object_array **)&TypeInfo_UIManager;
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xfffffffffffffec0;
              if (pIVar20 == (Il2CppClass *)0x0) goto label_0445420e;
              piVar14 = (int32_t *)((long)&(pIVar20->_1).namespaze + 4);
              *piVar14 = *piVar14 + 1;
              method_00 = (long *)((System_Collections_Generic_List_object__Fields *)&(pIVar20->_1).name)->
                                  _items;
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xfffffffffffffec0;
              if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00 ==
                  (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_0445420e;
              uVar16 = *(uint *)&(pIVar20->_1).namespaze;
              if (uVar16 < *(uint *)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                                     method_00)->max_length) {
                *(uint *)&(pIVar20->_1).namespaze = uVar16 + 1;
                *(System_String_o **)
                 ((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->
                         m_Items[0].fields.hashCode + (long)(int)uVar16 * 8) = pSVar29;
                pIStackY_148 = (void *)0x44540db;
                il2cpp_runtime_helper_022b4080((void **)((long)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array
                                                      *)method_00)->m_Items[0].fields.hashCode +
                                            (long)(int)uVar16 * 8));
              }
              else {
                method_00 = *(long **)(*(long *)(lVar9 + 0x20) + 0xc0);
                pIStackY_148 = (void *)0x445403a;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pIVar20,(Il2CppObject *)pSVar29,
                           (MethodInfo_362C220 *)
                           ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->
                           m_Items[3].fields.key);
              }
              pIStackY_148 = (void *)0x4454044;
              __this_07.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar49;
              __this_07.fields._0_8_ = pIVar32;
              __this_07.fields.m_Object.fields._version = uVar50;
              __this_07.fields.m_Object.fields._index = iVar51;
              __this_07.fields.m_Object.fields._current.fields.key._0_4_ = uVar52;
              __this_07.fields.m_Object.fields._current.fields.key._4_4_ = uVar53;
              __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar54;
              __this_07.fields.m_Object.fields._32_8_ = pIVar55;
              __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
              __this_07.fields.m_Array.fields._8_8_ = _Var56.rgctx_data;
              __this_07.fields.m_Array.fields._current = _Var57.genericMethod;
              bVar17 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                 (__this_07,(MethodInfo *)&stack0xfffffffffffffec0);
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xfffffffffffffec0;
            } while ((char)bVar17 != '\0');
          }
          pSVar13 = (pIVar27->_1).image;
          pIStackY_148 = (void *)0x44540ff;
          pMVar42 = "AnimatedEmojis";
          puVar28 = (undefined8 *)
                    (*(pSVar13->vtable)._7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.
                      methodPtr)(pIVar27,"AnimatedEmojis",
                                 (pSVar13->vtable).
                                 _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.method);
          pIVar26 = pIVar27;
          if (puVar28 != (undefined8 *)0x0) {
            method_00 = (long *)*puVar28;
            pIStackY_148 = (void *)0x4454120;
            (**(code **)&((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->
                         m_Items[0x21].fields)
                      (&stack0xffffffffffffff10,puVar28,
                       ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)method_00)->m_Items
                       [0x21].fields.key);
            pIStackY_148 = (void *)0x4454161;
            __this_09.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_e8;
            __this_09.fields._0_8_ = pIStack_f0;
            __this_09.fields.m_Object.fields._version = uStack_e0;
            __this_09.fields.m_Object.fields._index = iStack_dc;
            __this_09.fields.m_Object.fields._current.fields.key._0_4_ = uStack_d8;
            __this_09.fields.m_Object.fields._current.fields.key._4_4_ = uStack_d4;
            __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_d0;
            __this_09.fields.m_Object.fields._32_8_ = pIStack_c8;
            __this_09.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSStack_c0;
            __this_09.fields.m_Array.fields._8_8_ = _Stack_b8.rgctx_data;
            __this_09.fields.m_Array.fields._current = _Stack_b0.genericMethod;
            bVar17 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                               (__this_09,(MethodInfo *)&stack0xfffffffffffffec0);
            if ((char)bVar17 != '\0') {
              unaff_R12 = &TypeInfo_JSONNode;
              pIVar27 = pIStack_f0;
              pIVar32 = pIStack_e8;
              uVar50 = uStack_e0;
              iVar51 = iStack_dc;
              uVar52 = uStack_d8;
              uVar53 = uStack_d4;
              pIVar54 = pIStack_d0;
              pIVar49 = pIStack_c8;
              pSVar19 = pSStack_c0;
              _Var56 = _Stack_b8;
              _Var57 = _Stack_b0;
              do {
                pIStackY_148 = (void *)0x445419a;
                __this_10.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar32;
                __this_10.fields._0_8_ = pIVar27;
                __this_10.fields.m_Object.fields._version = uVar50;
                __this_10.fields.m_Object.fields._index = iVar51;
                __this_10.fields.m_Object.fields._current.fields.key._0_4_ = uVar52;
                __this_10.fields.m_Object.fields._current.fields.key._4_4_ = uVar53;
                __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar54;
                __this_10.fields.m_Object.fields._32_8_ = pIVar49;
                __this_10.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
                __this_10.fields.m_Array.fields._8_8_ = _Var56.rgctx_data;
                __this_10.fields.m_Array.fields._current = _Var57.genericMethod;
                SVar48 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   (__this_10,(MethodInfo *)&stack0xfffffffffffffec0);
                unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                            SVar48.fields.value;
                if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
                  pIStackY_148 = (void *)0x44541af;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar55 = TypeInfo_UIManager->m_Items[6].fields.key[5].klass;
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  pIStackY_148 = (void *)0x44541d0;
                  il2cpp_runtime_helper_02337ed0();
                }
                pMVar42 = (MethodInfo *)0x0;
                pIStackY_148 = (void *)0x44541da;
                pIVar26 = (Il2CppClass *)unaff_R15;
                pSVar29 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                                    ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(MethodInfo *)0x0);
                pIVar20 = (Il2CppClass *)0x0;
                ppSVar41 = (System_Object_array **)&TypeInfo_UIManager;
                unaff_R13 = (long *)&MethodInfo_Boolean_Add;
                plVar23 = (long *)&stack0xfffffffffffffec0;
                if (pIVar55 == (Il2CppClass *)0x0) goto label_0445420e;
                pIStackY_148 = (void *)0x44541ee;
                System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)pIVar55,(Il2CppObject *)pSVar29,
                           MethodInfo_Boolean_Add);
                pIStackY_148 = (void *)0x44541f8;
                __this_11.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar32;
                __this_11.fields._0_8_ = pIVar27;
                __this_11.fields.m_Object.fields._version = uVar50;
                __this_11.fields.m_Object.fields._index = iVar51;
                __this_11.fields.m_Object.fields._current.fields.key._0_4_ = uVar52;
                __this_11.fields.m_Object.fields._current.fields.key._4_4_ = uVar53;
                __this_11.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar54;
                __this_11.fields.m_Object.fields._32_8_ = pIVar49;
                __this_11.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
                __this_11.fields.m_Array.fields._8_8_ = _Var56.rgctx_data;
                __this_11.fields.m_Array.fields._current = _Var57.genericMethod;
                bVar17 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                   (__this_11,(MethodInfo *)&stack0xfffffffffffffec0);
              } while ((char)bVar17 != '\0');
            }
            return;
          }
        }
      }
    }
  }
label_0445420e:
  pIStackY_148 = (void *)0x4454213;
  pIStackY_158 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pUVar21 = (UnityEngine_Object_o *)((ulong)pIVar26 & 0xffffffff);
  iVar35 = (int)pIVar26;
  pIStackY_150 = pIVar20;
  pIStackY_148 = (Il2CppRGCTXData *)plVar23;
  if (g_data_057ae71b == '\0') {
    pIStackY_160 = (void *)0x44542b2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71b = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_044542d0;
label_04454246:
    pIStackY_160 = (void *)0x445424d;
    UI_UIManager__SetMenu(iVar35,pMVar42);
    pSVar37 = TypeInfo_UIManager;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454246;
label_044542d0:
    pIStackY_160 = (void *)0x44542d5;
    il2cpp_runtime_helper_02337ed0();
    pIStackY_160 = (void *)0x44542dc;
    UI_UIManager__SetMenu(iVar35,pMVar42);
    pSVar37 = TypeInfo_UIManager;
  }
  if (iVar35 == 0) {
    TypeInfo_UIManager = pSVar37;
    return;
  }
  TypeInfo_UIManager = pSVar37;
  if (pSVar37->m_Items[8].fields.next == 0) {
    pIStackY_160 = (void *)0x44542ff;
    il2cpp_runtime_helper_02337ed0();
    pIStackY_160 = (void *)0x4454304;
    UI_UIManager__LoadSounds((MethodInfo *)pSVar37);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454314;
label_0445427a:
    pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar20 = pIVar25[3].klass;
    pIVar54 = pIStackY_148;
  }
  else {
    pIStackY_160 = (void *)0x445426a;
    UI_UIManager__LoadSounds((MethodInfo *)pSVar37);
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_0445427a;
label_04454314:
    pIStackY_160 = (void *)0x4454319;
    il2cpp_runtime_helper_02337ed0();
    pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar20 = pIVar25[3].klass;
    pIVar54 = pIStackY_148;
  }
  pIStackY_148 = pIVar54;
  if (pIVar20 != (Il2CppClass *)0x0) {
    if (iVar35 != 2) {
      UI_LoadingMenu__Hide((UI_LoadingMenu_o *)pIVar20,(MethodInfo *)0x0);
      return;
    }
    pMVar42 = (MethodInfo *)0x1;
    pIVar26 = (Il2CppClass *)(pIVar20->_1).implementedInterfaces;
    pIStackY_158 = pIVar25;
    pIStackY_148 = (Il2CppRGCTXData *)ppSVar41;
    if (pIVar26 != (Il2CppClass *)0x0) {
      pIVar38 = (Il2CppRGCTXData *)0x1;
      pMVar42 = (MethodInfo *)0x0;
      pIStackY_160 = (void *)0x43ef55f;
      pUVar18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar26,(MethodInfo *)0x0);
      ppSVar41 = (System_Object_array **)(Il2CppRGCTXData *)0x1;
      if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
        pMVar42 = (MethodInfo *)0x0;
        pIStackY_160 = (void *)0x43ef572;
        bVar17 = UnityEngine_GameObject__get_activeSelf(pUVar18,(MethodInfo *)0x0);
        if ((char)bVar17 != '\0') {
          return;
        }
        __this = (UI_TipPanel_o *)(pIVar20->_1).implementedInterfaces;
        pIVar26 = (Il2CppClass *)0x0;
        ppSVar41 = (System_Object_array **)pIVar38;
        if (__this != (UI_TipPanel_o *)0x0) {
          pMVar42 = (MethodInfo *)0x0;
          pIStackY_160 = (void *)0x43ef594;
          UI_TipPanel__SetRandomTip(__this,(MethodInfo *)0x0);
          pIVar26 = (Il2CppClass *)(pIVar20->_1).implementedInterfaces;
          if (pIVar26 != (Il2CppClass *)0x0) {
            pMVar42 = (MethodInfo *)0x0;
            pIStackY_160 = (void *)0x43ef5ab;
            pUVar18 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pIVar26,(MethodInfo *)0x0);
            if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
              pMVar42 = (MethodInfo *)0x1;
              pIStackY_160 = (void *)0x43ef5c3;
              UnityEngine_GameObject__SetActive(pUVar18,1,(MethodInfo *)0x0);
              pUVar2 = (pIVar20->_1).methods;
              pIVar26 = (Il2CppClass *)0x0;
              if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
                pMVar42 = (MethodInfo *)0x1;
                pIStackY_160 = (void *)0x43ef5df;
                UI_LoadingBackgroundPanel__SetRandomBackground(pUVar2,1,0,(MethodInfo *)method_00);
                pUVar2 = (pIVar20->_1).methods;
                pIVar26 = (Il2CppClass *)0x0;
                if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
                  pMVar42 = (MethodInfo *)0x0;
                  pIStackY_160 = (void *)0x43ef5f7;
                  UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar2,(MethodInfo *)0x0);
                  if (g_data_057ae510 == '\0') {
                    pIStackY_160 = (void *)0x43ef627;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
                    pIStackY_160 = (void *)0x43ef633;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                    g_data_057ae510 = '\x01';
                  }
                  pUVar3 = (UI_LoadingProgressPanel_o *)(pIVar20->_1).nestedTypes;
                  pIVar26 = (Il2CppClass *)0x0;
                  if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
                    UI_LoadingProgressPanel__ShowImmediate(pUVar3,0.0,pMVar42);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    pIStackY_160 = (void *)0x43ef665;
    pvVar47 = (void *)il2cpp_runtime_helper_022b2c90();
    ppSVar36 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(extraout_RDX & 0xffffffff)
    ;
    pvVar39 = (void *)((ulong)pMVar42 & 0xffffffff);
    fVar45 = SUB84(pvVar47,0);
    pIStackY_170 = pIVar20;
    pSStackY_168 = (System_String_array *)pIVar54;
    pIStackY_160 = (Il2CppRGCTXData *)ppSVar41;
    if (g_data_057ae510 == '\0') {
      pIStackY_188 = (Il2CppRGCTXData *)0x43ef698;
      pvStackY_180 = pvVar47;
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
      pIStackY_188 = (Il2CppRGCTXData *)0x43ef6a4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae510 = '\x01';
      fVar45 = pvStackY_180._0_4_;
    }
    pUVar3 = (UI_LoadingProgressPanel_o *)(pIVar26->_1).nestedTypes;
    pIVar20 = (Il2CppClass *)0x0;
    if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
      fVar46 = 1.0;
      if (fVar45 <= 1.0) {
        fVar46 = fVar45;
      }
      fVar46 = (float)(-(uint)(0.0 <= fVar45) & (uint)fVar46);
      if ((char)ppSVar36 == '\0') {
        pIStackY_188 = (Il2CppRGCTXData *)0x43ef6f2;
        UI_LoadingProgressPanel__Show(pUVar3,fVar46,pMVar42);
      }
      else {
        pIStackY_188 = (Il2CppRGCTXData *)0x43ef6df;
        UI_LoadingProgressPanel__ShowImmediate(pUVar3,fVar46,pMVar42);
      }
      if ((char)pvVar39 == '\0') {
        return;
      }
      ppSVar36 = &TypeInfo_UIManager;
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        pIStackY_188 = (Il2CppRGCTXData *)0x43ef70f;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar20 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
      if (pIVar20 != (Il2CppClass *)0x0) {
        pUVar4 = (pIVar20->_1).image;
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if (((pUVar4->_2).naturalAligment < bVar1) ||
           ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_043ef7cc;
        pIStackY_188 = (Il2CppRGCTXData *)0x43ef75b;
        UI_InGameMenu__OnFinishLoading((UI_InGameMenu_o *)pIVar20,(MethodInfo *)0x0);
        if (g_data_057ae511 == '\0') {
          pIStackY_188 = (Il2CppRGCTXData *)0x43ef770;
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
          g_data_057ae511 = '\x01';
        }
        pIStackY_188 = (Il2CppRGCTXData *)0x43ef786;
        pIVar27 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
        pIStackY_188 = (Il2CppRGCTXData *)0x43ef793;
        pIVar20 = pIVar27;
        System_Object___ctor((Il2CppObject *)pIVar27,(MethodInfo *)0x0);
        *(undefined4 *)&((UI_InGameMenu_Fields *)&(pIVar27->_1).name)->m_CachedPtr = 0;
        ppSVar36 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)0x0;
        if (pIVar27 != (Il2CppClass *)0x0) {
          (pIVar27->_1).byval_arg.data = pIVar26;
          pIStackY_188 = (Il2CppRGCTXData *)0x43ef7b2;
          il2cpp_runtime_helper_022b4080(&(pIVar27->_1).byval_arg,pIVar26);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)pIVar26,(System_Collections_IEnumerator_o *)pIVar27,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    pIStackY_188 = (Il2CppRGCTXData *)0x43ef7cc;
    il2cpp_runtime_helper_022b2c90();
label_043ef7cc:
    pIStackY_188 = (Il2CppRGCTXData *)0x43ef7d1;
    il2cpp_runtime_helper_022b2fd0();
    __this_16 = (UI_BasePopup_o *)(pIVar20->_1).implementedInterfaces;
    pIStackY_188 = (Il2CppRGCTXData *)ppSVar36;
    if (__this_16 != (UI_BasePopup_o *)0x0) {
      pIStackY_190 = (Il2CppClass *)0x43ef7f7;
      pUVar18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_16,(MethodInfo *)0x0);
      if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
        pIStackY_190 = (Il2CppClass *)0x43ef808;
        UnityEngine_GameObject__SetActive(pUVar18,0,(MethodInfo *)0x0);
        pUVar5 = (UI_ItemHandler_o *)(pIVar20->_1).nestedTypes;
        __this_16 = (UI_BasePopup_o *)0x0;
        if (pUVar5 != (UI_ItemHandler_o *)0x0) {
          pIStackY_190 = (Il2CppClass *)0x43ef824;
          (**(code **)&pUVar5->klass[1]._2.field_count)();
          pUVar6 = (pIVar20->_1).methods;
          __this_16 = (UI_BasePopup_o *)0x0;
          if (pUVar6 != (UI_EmoteHandler_o *)0x0) {
            pUVar7 = pUVar6->klass;
            vtableDispatch = *(code **)&pUVar7[1]._2.field_count;
            uVar8._0_2_ = pUVar7[1]._2.interfaces_count;
            uVar8._2_2_ = pUVar7[1]._2.interface_offsets_count;
            uVar8._4_1_ = pUVar7[1]._2.typeHierarchyDepth;
            uVar8._5_1_ = pUVar7[1]._2.genericRecursionDepth;
            uVar8._6_1_ = pUVar7[1]._2.rank;
            uVar8._7_1_ = pUVar7[1]._2.minimumAlignment;
            (*vtableDispatch)(pUVar6,uVar8,extraout_RDX_00,vtableDispatch);
            return;
          }
        }
      }
    }
    pIStackY_190 = (Il2CppClass *)0x43ef849;
    uVar15 = il2cpp_runtime_helper_022b2c90();
    uStackY_1a0 = (Il2CppClass *)CONCAT44(extraout_XMM0_Da,uVar15);
    pIStackY_198 = pIVar20;
    pIStackY_190 = pIVar26;
    if (g_data_057ae516 == '\0') {
      pIStackY_1a8 = (Il2CppClass *)0x43ef872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      pIStackY_1a8 = (Il2CppClass *)0x43ef87e;
      il2cpp_runtime_helper_023445d0(&"%");
      g_data_057ae516 = '\x01';
    }
    plVar24 = __this_16[1].monitor;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      pIStackY_1a8 = (Il2CppClass *)0x43ef8a4;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_12 = (UI_BasePopup_o *)0x0;
    pIStackY_1a8 = (Il2CppClass *)0x43ef8bb;
    pSVar19 = Utility_Util__FormatFloat(uStackY_1a0._4_4_ * 100.0,0,(MethodInfo *)0x0);
    if (pSVar19 != (System_String_o *)0x0) {
      pIStackY_1a8 = (Il2CppClass *)0x43ef8d3;
      __this_12 = (UI_BasePopup_o *)
                  (*(pSVar19->klass->vtable)._3_ToString.methodPtr)
                            (pSVar19,(pSVar19->klass->vtable)._3_ToString.method);
      pIStackY_1a8 = (Il2CppClass *)0x43ef8e7;
      pSVar19 = System_String__Concat_3ae5ba0((System_String_o *)__this_12,"%",(MethodInfo *)0x0);
      if (plVar24 != (long *)0x0) {
        pIStackY_1a8 = (Il2CppClass *)0x43ef902;
        (**(code **)(*plVar24 + 0x5e8))(plVar24,pSVar19,*(undefined8 *)(*plVar24 + 0x5f0));
        plVar23 = (long *)__this_16[1].fields.m_CachedPtr;
        __this_12 = (UI_BasePopup_o *)0x0;
        if (plVar23 != (long *)0x0) {
          pIStackY_1a8 = (Il2CppClass *)0x43ef924;
          (**(code **)(*plVar23 + 0x428))(uStackY_1a0._4_4_);
          UI_BasePopup__ShowImmediate(__this_16,(MethodInfo *)0x0);
          return;
        }
      }
    }
    pIStackY_1a8 = (Il2CppClass *)0x43ef93a;
    auStackY_1e0._40_4_ = il2cpp_runtime_helper_022b2c90();
    auStackY_1e0._44_4_ = extraout_XMM0_Da_00;
    pUStackY_1b0 = (UnityEngine_Object_o *)plVar24;
    pIStackY_1a8 = (Il2CppClass *)__this_16;
    if (g_data_057ae517 == '\0') {
      auStackY_1e0._32_8_ = (void *)0x43ef962;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      auStackY_1e0._32_8_ = (void *)0x43ef96e;
      il2cpp_runtime_helper_023445d0(&"%");
      g_data_057ae517 = '\x01';
    }
    plVar24 = __this_12[1].monitor;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      auStackY_1e0._32_8_ = (void *)0x43ef994;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar19 = (System_String_o *)0x0;
    auStackY_1e0._32_8_ = (void *)0x43ef9ab;
    pSVar29 = Utility_Util__FormatFloat((float)auStackY_1e0._44_4_ * 100.0,0,(MethodInfo *)0x0);
    if (pSVar29 != (System_String_o *)0x0) {
      auStackY_1e0._32_8_ = (void *)0x43ef9c3;
      pSVar19 = (System_String_o *)
                (*(pSVar29->klass->vtable)._3_ToString.methodPtr)
                          (pSVar29,(pSVar29->klass->vtable)._3_ToString.method);
      auStackY_1e0._32_8_ = (void *)0x43ef9d7;
      pSVar29 = System_String__Concat_3ae5ba0(pSVar19,"%",(MethodInfo *)0x0);
      if (plVar24 != (long *)0x0) {
        auStackY_1e0._32_8_ = (void *)0x43ef9f2;
        (**(code **)(*plVar24 + 0x5e8))(plVar24,pSVar29,*(undefined8 *)(*plVar24 + 0x5f0));
        plVar23 = (long *)__this_12[1].fields.m_CachedPtr;
        pSVar19 = (System_String_o *)0x0;
        if (plVar23 != (long *)0x0) {
          auStackY_1e0._32_8_ = (void *)0x43efa14;
          (**(code **)(*plVar23 + 0x428))(auStackY_1e0._44_4_);
          UI_BasePopup__Show(__this_12,(MethodInfo *)0x0);
          return;
        }
      }
    }
    auStackY_1e0._32_8_ = (void *)0x43efa2a;
    auStackY_1e0._16_8_ = il2cpp_runtime_helper_022b2c90();
    auStackY_1e0._24_8_ = plVar24;
    auStackY_1e0._32_8_ = __this_12;
    if (g_data_057ae511 == '\0') {
      auStackY_1e0._8_8_ = (void *)0x43efa4c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
      g_data_057ae511 = '\x01';
    }
    auStackY_1e0._8_8_ = (void *)0x43efa62;
    __this_13 = (System_Enum_c *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
    uVar15 = 0;
    auStackY_1e0._8_8_ = (void *)0x43efa6f;
    __this_17 = __this_13;
    System_Object___ctor((Il2CppObject *)__this_13,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_13->_1).name = 0;
    if (__this_13 != (System_Enum_c *)0x0) {
      (__this_13->_1).byval_arg.data = pSVar19;
      auStackY_1e0._8_8_ = (void *)0x43efa8e;
      il2cpp_runtime_helper_022b4080(&(__this_13->_1).byval_arg,pSVar19);
      return;
    }
    auStackY_1e0._8_8_ = (void *)0x43efa9e;
    il2cpp_runtime_helper_022b2c90();
    auStackY_1e0._0_8_ = __this_13;
    auStackY_1e0._8_8_ = pvVar39;
    System_Object___ctor((Il2CppObject *)__this_17,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_17->_1).name = uVar15;
    return;
  }
  pIStackY_160 = (void *)0x4454335;
  pvStackY_180 = (void *)il2cpp_runtime_helper_022b2c90();
  pSStackY_168 = (System_String_array *)&TypeInfo_UIManager;
  pUStackY_178 = pUVar21;
  pIStackY_170 = (Il2CppClass *)unaff_R12;
  pIStackY_160 = (Il2CppRGCTXData *)unaff_R15;
  if (g_data_057ae721 == '\0') {
    pIStackY_188 = (Il2CppRGCTXData *)0x4454364;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    pIStackY_188 = (Il2CppRGCTXData *)0x4454370;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pIStackY_188 = (Il2CppRGCTXData *)0x445437c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pIStackY_188 = (Il2CppRGCTXData *)0x4454388;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit);
    pIStackY_188 = (Il2CppRGCTXData *)0x4454394;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit);
    pIStackY_188 = (Il2CppRGCTXData *)0x44543a0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu);
    pIStackY_188 = (Il2CppRGCTXData *)0x44543ac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu);
    pIStackY_188 = (Il2CppRGCTXData *)0x44543b8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu);
    pIStackY_188 = (Il2CppRGCTXData *)0x44543c4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    pIStackY_188 = (Il2CppRGCTXData *)0x44543d0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu);
    pIStackY_188 = (Il2CppRGCTXData *)0x44543dc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu);
    pIStackY_188 = (Il2CppRGCTXData *)0x44543e8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStackY_188 = (Il2CppRGCTXData *)0x44543f4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIStackY_188 = (Il2CppRGCTXData *)0x4454400;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pIStackY_188 = (Il2CppRGCTXData *)0x445440c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae721 = '\x01';
  }
  lVar9 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0)) goto label_0445470d;
  pvVar39 = *(void **)(lVar9 + 0x18);
  unaff_R15 = &TypeInfo_UIManager;
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_188 = (Il2CppRGCTXData *)0x445445a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar25[1].monitor = pvVar39;
  pIStackY_188 = (Il2CppRGCTXData *)0x4454474;
  il2cpp_runtime_helper_022b4080(&pIVar25[1].monitor);
  pUVar21 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  unaff_R12 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStackY_188 = (Il2CppRGCTXData *)0x445449b;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStackY_188 = (Il2CppRGCTXData *)0x44544a7;
  bVar17 = UnityEngine_Object__op_Inequality(pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 != '\0') {
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_188 = (Il2CppRGCTXData *)0x44544bc;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_0445470d;
    pIStackY_188 = (Il2CppRGCTXData *)0x44544da;
    pUVar21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStackY_188 = (Il2CppRGCTXData *)0x44544ef;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStackY_188 = (Il2CppRGCTXData *)0x44544f9;
    UnityEngine_Object__Destroy_4e01c60(pUVar21,(MethodInfo *)0x0);
  }
  switch((int32_t)pIVar20) {
  case 1:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_188 = (Il2CppRGCTXData *)0x4454527;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar26 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar26 == (Il2CppClass *)0x0) goto label_0445470d;
    pIStackY_188 = (Il2CppRGCTXData *)0x445454d;
    System_Collections_Generic_Dictionary_object__object___Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)pIVar26,MethodInfo_Void_Clear);
    pIStackY_188 = (Il2CppRGCTXData *)0x445455c;
    pIVar30 = UI_ElementFactory__CreateDefaultMenu_object_(MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar25[2].monitor = pIVar30;
    pIStackY_188 = (Il2CppRGCTXData *)0x4454576;
    il2cpp_runtime_helper_022b4080(&pIVar25[2].monitor);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      pIStackY_188 = (Il2CppRGCTXData *)0x445458e;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStackY_188 = (Il2CppRGCTXData *)0x4454595;
    GameManagers_ChatManager__Reset((MethodInfo *)0x0);
  default:
    iVar35 = TypeInfo_UIManager->m_Items[8].fields.next;
    goto joined_r0x044546fa;
  case 2:
    puVar28 = &MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu;
    break;
  case 3:
    puVar28 = &MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu;
    break;
  case 4:
    if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
      pIStackY_188 = (Il2CppRGCTXData *)0x4454689;
      il2cpp_runtime_helper_02337ed0();
    }
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') {
      puVar28 = &MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit;
    }
    else {
      puVar28 = &MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit;
    }
    break;
  case 5:
    puVar28 = &MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu;
    break;
  case 6:
    puVar28 = &MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu;
    break;
  case 7:
    puVar28 = &MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu;
  }
  pIStackY_188 = (Il2CppRGCTXData *)0x44546c2;
  pIVar25 = UI_ElementFactory__CreateDefaultMenu_object_((MethodInfo_24FB0E0 *)*puVar28);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_188 = (Il2CppRGCTXData *)0x44546d6;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar30 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar30[2].monitor = pIVar25;
  pIStackY_188 = (Il2CppRGCTXData *)0x44546f0;
  il2cpp_runtime_helper_022b4080(&pIVar30[2].monitor);
  iVar35 = TypeInfo_UIManager->m_Items[8].fields.next;
joined_r0x044546fa:
  if (iVar35 == 0) {
    pIStackY_188 = (Il2CppRGCTXData *)0x4454705;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar21 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStackY_188 = (Il2CppRGCTXData *)0x44545c2;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStackY_188 = (Il2CppRGCTXData *)0x44545ce;
  bVar17 = UnityEngine_Object__op_Inequality(pUVar21,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar17 == '\0') {
label_0445462b:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_188 = (Il2CppRGCTXData *)0x445463c;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined1 *)&TypeInfo_UIManager->m_Items[6].fields.key[5].monitor = 1;
    return;
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_188 = (Il2CppRGCTXData *)0x44545e3;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar24 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (plVar24 != (long *)0x0) {
    pIStackY_188 = (Il2CppRGCTXData *)0x445460a;
    (**(code **)(*plVar24 + 0x178))(plVar24,*(undefined8 *)(*plVar24 + 0x180));
    __this_01 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this_01 != (UI_BaseMenu_o *)0x0) {
      pIStackY_188 = (Il2CppRGCTXData *)0x445462b;
      UI_BaseMenu__ApplyScale(__this_01,(int32_t)pIVar20,(MethodInfo *)0x0);
      goto label_0445462b;
    }
  }
label_0445470d:
  pIStackY_188 = (Il2CppRGCTXData *)0x4454712;
  auStackY_1e0._40_8_ = il2cpp_runtime_helper_022b2c90();
  pUStackY_1b0 = pUVar21;
  pIStackY_1a8 = (Il2CppClass *)unaff_R12;
  uStackY_1a0 = (Il2CppClass *)unaff_R13;
  pIStackY_198 = (Il2CppClass *)((ulong)pIVar20 & 0xffffffff);
  pIStackY_190 = (Il2CppClass *)unaff_R15;
  pIStackY_188 = (Il2CppRGCTXData *)ppSVar41;
  if (g_data_057ae720 == '\0') {
    auStackY_1e0._32_8_ = (void *)0x4454740;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStackY_1e0._32_8_ = (void *)0x445474c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
    auStackY_1e0._32_8_ = (void *)0x4454758;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AudioSource);
    auStackY_1e0._32_8_ = (void *)0x4454764;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    auStackY_1e0._32_8_ = (void *)0x4454770;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    auStackY_1e0._32_8_ = (void *)0x445477c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    auStackY_1e0._32_8_ = (void *)0x4454788;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    auStackY_1e0._32_8_ = (void *)0x4454794;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    auStackY_1e0._32_8_ = (void *)0x44547a0;
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MainMenuSounds");
    g_data_057ae720 = '\x01';
  }
  auStackY_1e0._32_8_ = (void *)0x44547b6;
  pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AudioSource);
  auStackY_1e0._32_8_ = (void *)0x44547cb;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar20,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    auStackY_1e0._32_8_ = (void *)0x44547e4;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar25[6].klass = pIVar20;
  auStackY_1e0._32_8_ = (void *)0x44547ff;
  il2cpp_runtime_helper_022b4080(pIVar25 + 6,pIVar20);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    auStackY_1e0._32_8_ = (void *)0x4454817;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar37 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            **(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    auStackY_1e0._32_8_ = (void *)0x445483c;
    il2cpp_runtime_helper_02337ed0();
  }
  auStackY_1e0._32_8_ = (void *)0x445485a;
  ppMVar34 = (MethodInfo_255AB00 **)MethodInfo_GameObject_InstantiateAsset_GameObject;
  pSVar43 = pSVar37;
  __this_14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)pSVar37,"Prefabs/MainMenu/MainMenuSounds",0,(MethodInfo_25BC8B0 *)MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    ppMVar34 = &MethodInfo_AudioSource_GetComponentsInChildren_AudioSource;
    auStackY_1e0._32_8_ = (void *)0x4454875;
    pSVar31 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)__this_14,MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    pSVar43 = __this_14;
    if (pSVar31 != (System_Object_array *)0x0) {
      uVar16 = (uint)pSVar31->max_length;
      if (0 < (int)uVar16) {
        uVar44 = 0;
        ppSVar41 = &MethodInfo_Void_Add;
        do {
          uVar15 = SUB84(__this_14,0);
          if (uVar16 <= uVar44) goto label_04454915;
          __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      pSVar31->m_Items[(int)uVar44];
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            auStackY_1e0._32_8_ = (void *)0x44548bf;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar43 = TypeInfo_UIManager;
          if (__this_02 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          pSVar37 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
          auStackY_1e0._32_8_ = (void *)0x44548dd;
          pSVar43 = __this_02;
          pSVar19 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
          if (pSVar37 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          auStackY_1e0._32_8_ = (void *)0x44548f4;
          ppMVar34 = (MethodInfo_255AB00 **)MethodInfo_Void_Add;
          __this_14 = pSVar37;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar37,
                     (Il2CppObject *)pSVar19,(Il2CppObject *)__this_02,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
          uVar44 = uVar44 + 1;
          uVar16 = (uint)pSVar31->max_length;
        } while ((int)uVar44 < (int)uVar16);
      }
      return;
    }
  }
label_04454910:
  uVar15 = SUB84(pSVar43,0);
  auStackY_1e0._32_8_ = (void *)0x4454915;
  il2cpp_runtime_helper_022b2c90();
label_04454915:
  auStackY_1e0._32_8_ = (void *)0x445491a;
  il2cpp_runtime_helper_022b2ca0();
  pIVar20 = (Il2CppClass *)auStackY_1e0;
  args = (MethodInfo_3104D80 **)ppMVar34;
  auStackY_1e0._24_8_ = pSVar37;
  auStackY_1e0._32_8_ = ppSVar41;
  if (g_data_057ae71c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UISound);
    g_data_057ae71c = '\x01';
    args = (MethodInfo_3104D80 **)ppMVar34;
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar26 = TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
  auStackY_1e0._0_8_ = TypeInfo_UISound;
  auStackY_1e0._8_8_ = (void *)0xffffffffffffffff;
  auStackY_1e0._16_4_ = uVar15;
  pIVar27 = (Il2CppClass *)0x0;
  pIVar32 = (Il2CppClass *)System_Enum__ToString((System_Enum_o *)auStackY_1e0,(MethodInfo *)0x0);
  if (pIVar26 != (Il2CppClass *)0x0) {
    args = &MethodInfo_AudioSource_get_Item;
    __this_15 = (UnityEngine_AudioSource_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pIVar26,
                           (Il2CppObject *)pIVar32,MethodInfo_AudioSource_get_Item);
    pIVar27 = pIVar32;
    pIVar20 = pIVar26;
    if (__this_15 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play_4daa2c0(__this_15,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar26 = pIVar27;
  if (g_data_057ae71d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71d = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454a6b;
label_04454a0b:
    pIVar32 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454a0b;
label_04454a6b:
    il2cpp_runtime_helper_02337ed0();
    pIVar32 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar32 != (Il2CppClass *)0x0) {
    pIVar26 = pIVar20;
    bVar17 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar32,
                        (Il2CppObject *)pIVar20,MethodInfo_Boolean_ContainsKey);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar32 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar32 != (Il2CppClass *)0x0) {
      if ((char)bVar17 != '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar32,(Il2CppObject *)pIVar20,
                   (Il2CppObject *)pIVar27,MethodInfo_Void_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar32,(Il2CppObject *)pIVar20,
                 (Il2CppObject *)pIVar27,MethodInfo_Void_Add);
      return;
    }
  }
  pIVar20 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae71e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71e = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454b86;
label_04454b33:
    pIVar27 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454b33;
label_04454b86:
    il2cpp_runtime_helper_02337ed0();
    pIVar27 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar27 != (Il2CppClass *)0x0) {
    pIVar26 = pIVar20;
    bVar17 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar27,
                        (Il2CppObject *)pIVar20,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar17 == '\0') {
      return;
    }
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar27 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar27 != (Il2CppClass *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar27,(Il2CppObject *)pIVar20,
                 MethodInfo_String_get_Item);
      return;
    }
  }
  pIVar20 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae722 = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454ca2;
label_04454c43:
    pIVar27 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454c43;
label_04454ca2:
    il2cpp_runtime_helper_02337ed0();
    pIVar27 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  if (pIVar27 != (Il2CppClass *)0x0) {
    pIVar26 = pIVar20;
    bVar17 = System_Collections_Generic_List_object___Contains
                       ((System_Collections_Generic_List_object__o *)pIVar27,(Il2CppObject *)pIVar20,
                        MethodInfo_Boolean_Contains);
    if ((char)bVar17 == '\0') {
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar20 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
      if (pIVar20 == (Il2CppClass *)0x0) goto label_04454d23;
      pIVar20 = (Il2CppClass *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pIVar20,0,MethodInfo_String_get_Item);
    }
    System_String__Concat_3ae5ba0((System_String_o *)pIVar20,"Icon",(MethodInfo *)0x0);
    return;
  }
label_04454d23:
  pSVar19 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar19 = UI_UIManager__GetLocale(pSVar19,(System_String_o *)pIVar26,item,"","",in_R9);
  System_String__Format_3af7980(pSVar19,(System_Object_array *)args,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$OnLoadScene
// il2cpp: void UI_UIManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x4454220

void UI_UIManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_TipPanel_o *__this;
  UI_LoadingBackgroundPanel_o *pUVar3;
  UI_LoadingProgressPanel_o *pUVar4;
  UI_ItemHandler_o *pUVar5;
  UI_EmoteHandler_o *pUVar6;
  UI_EmoteHandler_c *pUVar7;
  code *vtableDispatch;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  UnityEngine_Component_o *__this_00;
  UI_BaseMenu_o *__this_01;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  bool_conflict bVar12;
  uint uVar13;
  UnityEngine_GameObject_o *pUVar14;
  UI_InGameMenu_o *__this_03;
  System_String_o *pSVar15;
  UI_BasePopup_o *__this_04;
  System_String_o *pSVar16;
  System_Enum_c *__this_05;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar17;
  undefined8 *puVar18;
  Il2CppObject *pIVar19;
  Il2CppClass *pIVar20;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_06;
  System_Object_array *pSVar21;
  Il2CppClass *pIVar22;
  UnityEngine_AudioSource_o *__this_07;
  MethodInfo *in_RCX;
  MethodInfo_255AB00 **ppMVar23;
  MethodInfo_3104D80 **args;
  char extraout_DL;
  undefined8 extraout_RDX;
  System_String_o *item;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar24;
  void *pvVar25;
  System_Object_array **unaff_RBP;
  undefined4 uVar26;
  MethodInfo *method_00;
  Il2CppClass *pIVar27;
  Il2CppClass *pIVar28;
  int32_t sceneName_00;
  UI_TipPanel_o *__this_08;
  UI_InGameMenu_o *__this_09;
  UI_BasePopup_o *__this_10;
  System_Enum_c *__this_11;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar29;
  MethodInfo *in_R9;
  long *unaff_R12;
  uint uVar30;
  float fVar31;
  float fVar32;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_a0 [48];
  UnityEngine_Object_o *pUStack_70;
  UI_BasePopup_o *pUStack_68;
  
  x = (UnityEngine_Object_o *)(ulong)(uint)sceneName;
  if (g_data_057ae71b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71b = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_044542d0;
label_04454246:
    UI_UIManager__SetMenu(sceneName,method);
    pSVar24 = TypeInfo_UIManager;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454246;
label_044542d0:
    il2cpp_runtime_helper_02337ed0();
    UI_UIManager__SetMenu(sceneName,method);
    pSVar24 = TypeInfo_UIManager;
  }
  if (sceneName == 0) {
    TypeInfo_UIManager = pSVar24;
    return;
  }
  TypeInfo_UIManager = pSVar24;
  if (pSVar24->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
    UI_UIManager__LoadSounds((MethodInfo *)pSVar24);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454314;
label_0445427a:
    pIVar20 = TypeInfo_UIManager->m_Items[6].fields.key[3].klass;
  }
  else {
    UI_UIManager__LoadSounds((MethodInfo *)pSVar24);
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_0445427a;
label_04454314:
    il2cpp_runtime_helper_02337ed0();
    pIVar20 = TypeInfo_UIManager->m_Items[6].fields.key[3].klass;
  }
  if (pIVar20 != (Il2CppClass *)0x0) {
    if (sceneName != 2) {
      UI_LoadingMenu__Hide((UI_LoadingMenu_o *)pIVar20,(MethodInfo *)0x0);
      return;
    }
    method_00 = (MethodInfo *)0x1;
    __this_08 = (UI_TipPanel_o *)(pIVar20->_1).implementedInterfaces;
    if (__this_08 != (UI_TipPanel_o *)0x0) {
      method_00 = (MethodInfo *)0x0;
      pUVar14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        bVar12 = UnityEngine_GameObject__get_activeSelf(pUVar14,(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          return;
        }
        __this = (UI_TipPanel_o *)(pIVar20->_1).implementedInterfaces;
        __this_08 = (UI_TipPanel_o *)0x0;
        if (__this != (UI_TipPanel_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          UI_TipPanel__SetRandomTip(__this,(MethodInfo *)0x0);
          __this_08 = (UI_TipPanel_o *)(pIVar20->_1).implementedInterfaces;
          if (__this_08 != (UI_TipPanel_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            pUVar14 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
            if (pUVar14 != (UnityEngine_GameObject_o *)0x0) {
              method_00 = (MethodInfo *)0x1;
              UnityEngine_GameObject__SetActive(pUVar14,1,(MethodInfo *)0x0);
              pUVar3 = (pIVar20->_1).methods;
              __this_08 = (UI_TipPanel_o *)0x0;
              if (pUVar3 != (UI_LoadingBackgroundPanel_o *)0x0) {
                method_00 = (MethodInfo *)0x1;
                UI_LoadingBackgroundPanel__SetRandomBackground(pUVar3,1,0,in_RCX);
                pUVar3 = (pIVar20->_1).methods;
                __this_08 = (UI_TipPanel_o *)0x0;
                if (pUVar3 != (UI_LoadingBackgroundPanel_o *)0x0) {
                  method_00 = (MethodInfo *)0x0;
                  UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar3,(MethodInfo *)0x0);
                  if (g_data_057ae510 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                    g_data_057ae510 = '\x01';
                  }
                  pUVar4 = (UI_LoadingProgressPanel_o *)(pIVar20->_1).nestedTypes;
                  __this_08 = (UI_TipPanel_o *)0x0;
                  if (pUVar4 != (UI_LoadingProgressPanel_o *)0x0) {
                    UI_LoadingProgressPanel__ShowImmediate(pUVar4,0.0,method_00);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    fVar31 = (float)il2cpp_runtime_helper_022b2c90();
    pvVar25 = (void *)((ulong)method_00 & 0xffffffff);
    if (g_data_057ae510 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae510 = '\x01';
    }
    pUVar4 = (UI_LoadingProgressPanel_o *)__this_08[3].fields.m_CachedPtr;
    __this_09 = (UI_InGameMenu_o *)0x0;
    if (pUVar4 != (UI_LoadingProgressPanel_o *)0x0) {
      fVar32 = 1.0;
      if (fVar31 <= 1.0) {
        fVar32 = fVar31;
      }
      fVar32 = (float)(-(uint)(0.0 <= fVar31) & (uint)fVar32);
      if (extraout_DL == '\0') {
        UI_LoadingProgressPanel__Show(pUVar4,fVar32,method_00);
      }
      else {
        UI_LoadingProgressPanel__ShowImmediate(pUVar4,fVar32,method_00);
      }
      if ((char)pvVar25 == '\0') {
        return;
      }
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_09 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
      if (__this_09 != (UI_InGameMenu_o *)0x0) {
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if (((__this_09->klass->_2).naturalAligment < bVar1) ||
           ((__this_09->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_043ef7cc;
        UI_InGameMenu__OnFinishLoading(__this_09,(MethodInfo *)0x0);
        if (g_data_057ae511 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
          g_data_057ae511 = '\x01';
        }
        __this_03 = (UI_InGameMenu_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
        __this_09 = __this_03;
        System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
        *(undefined4 *)&(__this_03->fields).m_CachedPtr = 0;
        if (__this_03 != (UI_InGameMenu_o *)0x0) {
          (__this_03->fields)._popups = (System_Collections_Generic_List_BasePopup__o *)__this_08;
          il2cpp_runtime_helper_022b4080(&(__this_03->fields)._popups,__this_08);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)__this_08,(System_Collections_IEnumerator_o *)__this_03,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_043ef7cc:
    il2cpp_runtime_helper_022b2fd0();
    __this_10 = (UI_BasePopup_o *)(__this_09->fields).CharacterInfoHandler;
    if ((__this_10 != (UI_BasePopup_o *)0x0) &&
       (pUVar14 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_10,(MethodInfo *)0x0),
       pUVar14 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar14,0,(MethodInfo *)0x0);
      pUVar5 = (__this_09->fields).ItemHandler;
      __this_10 = (UI_BasePopup_o *)0x0;
      if (pUVar5 != (UI_ItemHandler_o *)0x0) {
        (**(code **)&pUVar5->klass[1]._2.field_count)();
        pUVar6 = (__this_09->fields).EmoteHandler;
        __this_10 = (UI_BasePopup_o *)0x0;
        if (pUVar6 != (UI_EmoteHandler_o *)0x0) {
          pUVar7 = pUVar6->klass;
          vtableDispatch = *(code **)&pUVar7[1]._2.field_count;
          uVar8._0_2_ = pUVar7[1]._2.interfaces_count;
          uVar8._2_2_ = pUVar7[1]._2.interface_offsets_count;
          uVar8._4_1_ = pUVar7[1]._2.typeHierarchyDepth;
          uVar8._5_1_ = pUVar7[1]._2.genericRecursionDepth;
          uVar8._6_1_ = pUVar7[1]._2.rank;
          uVar8._7_1_ = pUVar7[1]._2.minimumAlignment;
          (*vtableDispatch)(pUVar6,uVar8,extraout_RDX,vtableDispatch);
          return;
        }
      }
    }
    fVar31 = (float)il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae516 == '\0') {
      pUStack_68 = (UI_BasePopup_o *)0x43ef872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      pUStack_68 = (UI_BasePopup_o *)0x43ef87e;
      il2cpp_runtime_helper_023445d0(&"%");
      g_data_057ae516 = '\x01';
    }
    plVar9 = __this_10[1].monitor;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      pUStack_68 = (UI_BasePopup_o *)0x43ef8a4;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04 = (UI_BasePopup_o *)0x0;
    pUStack_68 = (UI_BasePopup_o *)0x43ef8bb;
    pSVar15 = Utility_Util__FormatFloat(fVar31 * 100.0,0,(MethodInfo *)0x0);
    if (pSVar15 != (System_String_o *)0x0) {
      pUStack_68 = (UI_BasePopup_o *)0x43ef8d3;
      __this_04 = (UI_BasePopup_o *)
                  (*(pSVar15->klass->vtable)._3_ToString.methodPtr)
                            (pSVar15,(pSVar15->klass->vtable)._3_ToString.method);
      pUStack_68 = (UI_BasePopup_o *)0x43ef8e7;
      pSVar15 = System_String__Concat_3ae5ba0((System_String_o *)__this_04,"%",(MethodInfo *)0x0);
      if (plVar9 != (long *)0x0) {
        pUStack_68 = (UI_BasePopup_o *)0x43ef902;
        (**(code **)(*plVar9 + 0x5e8))(plVar9,pSVar15,*(undefined8 *)(*plVar9 + 0x5f0));
        plVar10 = (long *)__this_10[1].fields.m_CachedPtr;
        __this_04 = (UI_BasePopup_o *)0x0;
        if (plVar10 != (long *)0x0) {
          pUStack_68 = (UI_BasePopup_o *)0x43ef924;
          (**(code **)(*plVar10 + 0x428))(fVar31);
          UI_BasePopup__ShowImmediate(__this_10,(MethodInfo *)0x0);
          return;
        }
      }
    }
    pUStack_68 = (UI_BasePopup_o *)0x43ef93a;
    auStack_a0._40_4_ = il2cpp_runtime_helper_022b2c90();
    auStack_a0._44_4_ = extraout_XMM0_Da;
    pUStack_70 = (UnityEngine_Object_o *)plVar9;
    pUStack_68 = __this_10;
    if (g_data_057ae517 == '\0') {
      auStack_a0._32_8_ = (void *)0x43ef962;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      auStack_a0._32_8_ = (void *)0x43ef96e;
      il2cpp_runtime_helper_023445d0(&"%");
      g_data_057ae517 = '\x01';
    }
    plVar9 = __this_04[1].monitor;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      auStack_a0._32_8_ = (void *)0x43ef994;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar15 = (System_String_o *)0x0;
    auStack_a0._32_8_ = (void *)0x43ef9ab;
    pSVar16 = Utility_Util__FormatFloat((float)auStack_a0._44_4_ * 100.0,0,(MethodInfo *)0x0);
    if (pSVar16 != (System_String_o *)0x0) {
      auStack_a0._32_8_ = (void *)0x43ef9c3;
      pSVar15 = (System_String_o *)
                (*(pSVar16->klass->vtable)._3_ToString.methodPtr)
                          (pSVar16,(pSVar16->klass->vtable)._3_ToString.method);
      auStack_a0._32_8_ = (void *)0x43ef9d7;
      pSVar16 = System_String__Concat_3ae5ba0(pSVar15,"%",(MethodInfo *)0x0);
      if (plVar9 != (long *)0x0) {
        auStack_a0._32_8_ = (void *)0x43ef9f2;
        (**(code **)(*plVar9 + 0x5e8))(plVar9,pSVar16,*(undefined8 *)(*plVar9 + 0x5f0));
        plVar10 = (long *)__this_04[1].fields.m_CachedPtr;
        pSVar15 = (System_String_o *)0x0;
        if (plVar10 != (long *)0x0) {
          auStack_a0._32_8_ = (void *)0x43efa14;
          (**(code **)(*plVar10 + 0x428))(auStack_a0._44_4_);
          UI_BasePopup__Show(__this_04,(MethodInfo *)0x0);
          return;
        }
      }
    }
    auStack_a0._32_8_ = (void *)0x43efa2a;
    auStack_a0._16_8_ = il2cpp_runtime_helper_022b2c90();
    auStack_a0._24_8_ = plVar9;
    auStack_a0._32_8_ = __this_04;
    if (g_data_057ae511 == '\0') {
      auStack_a0._8_8_ = (void *)0x43efa4c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
      g_data_057ae511 = '\x01';
    }
    auStack_a0._8_8_ = (void *)0x43efa62;
    __this_05 = (System_Enum_c *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
    uVar26 = 0;
    auStack_a0._8_8_ = (void *)0x43efa6f;
    __this_11 = __this_05;
    System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_05->_1).name = 0;
    if (__this_05 != (System_Enum_c *)0x0) {
      (__this_05->_1).byval_arg.data = pSVar15;
      auStack_a0._8_8_ = (void *)0x43efa8e;
      il2cpp_runtime_helper_022b4080(&(__this_05->_1).byval_arg,pSVar15);
      return;
    }
    auStack_a0._8_8_ = (void *)0x43efa9e;
    il2cpp_runtime_helper_022b2c90();
    auStack_a0._0_8_ = __this_05;
    auStack_a0._8_8_ = pvVar25;
    System_Object___ctor((Il2CppObject *)__this_11,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_11->_1).name = uVar26;
    return;
  }
  sceneName_00 = 0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae721 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae721 = '\x01';
  }
  lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x20), lVar11 == 0)) goto label_0445470d;
  pvVar25 = *(void **)(lVar11 + 0x18);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar19 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar19[1].monitor = pvVar25;
  il2cpp_runtime_helper_022b4080(&pIVar19[1].monitor);
  x = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  unaff_R12 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_0445470d;
    x = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
  }
  switch(sceneName_00) {
  case 1:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar20 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar20 == (Il2CppClass *)0x0) goto label_0445470d;
    System_Collections_Generic_Dictionary_object__object___Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)pIVar20,MethodInfo_Void_Clear);
    pIVar17 = UI_ElementFactory__CreateDefaultMenu_object_(MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    pIVar19 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar19[2].monitor = pIVar17;
    il2cpp_runtime_helper_022b4080(&pIVar19[2].monitor);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__Reset((MethodInfo *)0x0);
  default:
    iVar2 = TypeInfo_UIManager->m_Items[8].fields.next;
    goto joined_r0x044546fa;
  case 2:
    puVar18 = &MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu;
    break;
  case 3:
    puVar18 = &MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu;
    break;
  case 4:
    if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') {
      puVar18 = &MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit;
    }
    else {
      puVar18 = &MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit;
    }
    break;
  case 5:
    puVar18 = &MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu;
    break;
  case 6:
    puVar18 = &MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu;
    break;
  case 7:
    puVar18 = &MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu;
  }
  pIVar19 = UI_ElementFactory__CreateDefaultMenu_object_((MethodInfo_24FB0E0 *)*puVar18);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar17 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar17[2].monitor = pIVar19;
  il2cpp_runtime_helper_022b4080(&pIVar17[2].monitor);
  iVar2 = TypeInfo_UIManager->m_Items[8].fields.next;
joined_r0x044546fa:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
label_0445462b:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined1 *)&TypeInfo_UIManager->m_Items[6].fields.key[5].monitor = 1;
    return;
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar9 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
    __this_01 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this_01 != (UI_BaseMenu_o *)0x0) {
      UI_BaseMenu__ApplyScale(__this_01,sceneName_00,(MethodInfo *)0x0);
      goto label_0445462b;
    }
  }
label_0445470d:
  auStack_a0._40_8_ = il2cpp_runtime_helper_022b2c90();
  pUStack_70 = x;
  pUStack_68 = (UI_BasePopup_o *)unaff_R12;
  if (g_data_057ae720 == '\0') {
    auStack_a0._32_8_ = (void *)0x4454740;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStack_a0._32_8_ = (void *)0x445474c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
    auStack_a0._32_8_ = (void *)0x4454758;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AudioSource);
    auStack_a0._32_8_ = (void *)0x4454764;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    auStack_a0._32_8_ = (void *)0x4454770;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    auStack_a0._32_8_ = (void *)0x445477c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    auStack_a0._32_8_ = (void *)0x4454788;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    auStack_a0._32_8_ = (void *)0x4454794;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    auStack_a0._32_8_ = (void *)0x44547a0;
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MainMenuSounds");
    g_data_057ae720 = '\x01';
  }
  auStack_a0._32_8_ = (void *)0x44547b6;
  pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AudioSource);
  auStack_a0._32_8_ = (void *)0x44547cb;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar20,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    auStack_a0._32_8_ = (void *)0x44547e4;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar19 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar19[6].klass = pIVar20;
  auStack_a0._32_8_ = (void *)0x44547ff;
  il2cpp_runtime_helper_022b4080(pIVar19 + 6,pIVar20);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    auStack_a0._32_8_ = (void *)0x4454817;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar24 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            **(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    auStack_a0._32_8_ = (void *)0x445483c;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_a0._32_8_ = (void *)0x445485a;
  ppMVar23 = (MethodInfo_255AB00 **)MethodInfo_GameObject_InstantiateAsset_GameObject;
  pSVar29 = pSVar24;
  __this_06 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)pSVar24,"Prefabs/MainMenu/MainMenuSounds",0,(MethodInfo_25BC8B0 *)MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_06 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    ppMVar23 = &MethodInfo_AudioSource_GetComponentsInChildren_AudioSource;
    auStack_a0._32_8_ = (void *)0x4454875;
    pSVar21 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)__this_06,MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    pSVar29 = __this_06;
    if (pSVar21 != (System_Object_array *)0x0) {
      uVar13 = (uint)pSVar21->max_length;
      if (0 < (int)uVar13) {
        uVar30 = 0;
        unaff_RBP = &MethodInfo_Void_Add;
        do {
          uVar26 = SUB84(__this_06,0);
          if (uVar13 <= uVar30) goto label_04454915;
          __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      pSVar21->m_Items[(int)uVar30];
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            auStack_a0._32_8_ = (void *)0x44548bf;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar29 = TypeInfo_UIManager;
          if (__this_02 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          pSVar24 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
          auStack_a0._32_8_ = (void *)0x44548dd;
          pSVar29 = __this_02;
          pSVar15 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
          if (pSVar24 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          auStack_a0._32_8_ = (void *)0x44548f4;
          ppMVar23 = (MethodInfo_255AB00 **)MethodInfo_Void_Add;
          __this_06 = pSVar24;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar24,
                     (Il2CppObject *)pSVar15,(Il2CppObject *)__this_02,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
          uVar30 = uVar30 + 1;
          uVar13 = (uint)pSVar21->max_length;
        } while ((int)uVar30 < (int)uVar13);
      }
      return;
    }
  }
label_04454910:
  uVar26 = SUB84(pSVar29,0);
  auStack_a0._32_8_ = (void *)0x4454915;
  il2cpp_runtime_helper_022b2c90();
label_04454915:
  auStack_a0._32_8_ = (void *)0x445491a;
  il2cpp_runtime_helper_022b2ca0();
  pIVar20 = (Il2CppClass *)auStack_a0;
  args = (MethodInfo_3104D80 **)ppMVar23;
  auStack_a0._24_8_ = pSVar24;
  auStack_a0._32_8_ = unaff_RBP;
  if (g_data_057ae71c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UISound);
    g_data_057ae71c = '\x01';
    args = (MethodInfo_3104D80 **)ppMVar23;
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar28 = TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
  auStack_a0._0_8_ = TypeInfo_UISound;
  auStack_a0._8_8_ = (void *)0xffffffffffffffff;
  auStack_a0._16_4_ = uVar26;
  pIVar27 = (Il2CppClass *)0x0;
  pIVar22 = (Il2CppClass *)System_Enum__ToString((System_Enum_o *)auStack_a0,(MethodInfo *)0x0);
  if (pIVar28 != (Il2CppClass *)0x0) {
    args = &MethodInfo_AudioSource_get_Item;
    __this_07 = (UnityEngine_AudioSource_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pIVar28,
                           (Il2CppObject *)pIVar22,MethodInfo_AudioSource_get_Item);
    pIVar27 = pIVar22;
    pIVar20 = pIVar28;
    if (__this_07 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play_4daa2c0(__this_07,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar28 = pIVar27;
  if (g_data_057ae71d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71d = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454a6b;
label_04454a0b:
    pIVar22 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454a0b;
label_04454a6b:
    il2cpp_runtime_helper_02337ed0();
    pIVar22 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar22 != (Il2CppClass *)0x0) {
    pIVar28 = pIVar20;
    bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar22,
                        (Il2CppObject *)pIVar20,MethodInfo_Boolean_ContainsKey);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar22 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar22 != (Il2CppClass *)0x0) {
      if ((char)bVar12 != '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar22,(Il2CppObject *)pIVar20,
                   (Il2CppObject *)pIVar27,MethodInfo_Void_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar22,(Il2CppObject *)pIVar20,
                 (Il2CppObject *)pIVar27,MethodInfo_Void_Add);
      return;
    }
  }
  pIVar20 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae71e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71e = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454b86;
label_04454b33:
    pIVar27 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454b33;
label_04454b86:
    il2cpp_runtime_helper_02337ed0();
    pIVar27 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar27 != (Il2CppClass *)0x0) {
    pIVar28 = pIVar20;
    bVar12 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar27,
                        (Il2CppObject *)pIVar20,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar12 == '\0') {
      return;
    }
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar27 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar27 != (Il2CppClass *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar27,(Il2CppObject *)pIVar20,
                 MethodInfo_String_get_Item);
      return;
    }
  }
  pIVar20 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae722 = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454ca2;
label_04454c43:
    pIVar27 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454c43;
label_04454ca2:
    il2cpp_runtime_helper_02337ed0();
    pIVar27 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  if (pIVar27 != (Il2CppClass *)0x0) {
    pIVar28 = pIVar20;
    bVar12 = System_Collections_Generic_List_object___Contains
                       ((System_Collections_Generic_List_object__o *)pIVar27,(Il2CppObject *)pIVar20,
                        MethodInfo_Boolean_Contains);
    if ((char)bVar12 == '\0') {
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar20 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
      if (pIVar20 == (Il2CppClass *)0x0) goto label_04454d23;
      pIVar20 = (Il2CppClass *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pIVar20,0,MethodInfo_String_get_Item);
    }
    System_String__Concat_3ae5ba0((System_String_o *)pIVar20,"Icon",(MethodInfo *)0x0);
    return;
  }
label_04454d23:
  pSVar15 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = UI_UIManager__GetLocale(pSVar15,(System_String_o *)pIVar28,item,"","",in_R9);
  System_String__Format_3af7980(pSVar15,(System_Object_array *)args,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$PlaySound
// il2cpp: void UI_UIManager__PlaySound (int32_t sound, const MethodInfo* method);
// 0x4454920

void UI_UIManager__PlaySound(int32_t sound,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_AudioSource_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_String_o *pSVar5;
  System_Object_array *in_RCX;
  System_String_o *item;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  MethodInfo *in_R9;
  System_Collections_Generic_Dictionary_object__object__c *local_28;
  void *local_20;
  int32_t local_18;
  
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)&stack0xffffffffffffffd8;
  if (g_data_057ae71c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UISound);
    g_data_057ae71c = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_UIManager + 0xb8) + 0x60);
  local_28 = TypeInfo_UISound;
  local_20 = (void *)0xffffffffffffffff;
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_18 = sound;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffffd8,(MethodInfo *)0x0);
  if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    in_RCX = (System_Object_array *)&MethodInfo_AudioSource_get_Item;
    __this = (UnityEngine_AudioSource_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar7,(Il2CppObject *)pSVar3,MethodInfo_AudioSource_get_Item);
    pSVar6 = pSVar3;
    pSVar4 = pSVar7;
    if (__this != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play_4daa2c0(__this,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar7 = pSVar6;
  if (g_data_057ae71d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71d = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04454a6b;
label_04454a0b:
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04454a0b;
label_04454a6b:
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar7 = pSVar4;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)pSVar4,MethodInfo_Boolean_ContainsKey);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if ((char)bVar2 != '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar3,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar6,MethodInfo_Void_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar3,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar6,MethodInfo_Void_Add);
      return;
    }
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae71e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71e = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04454b86;
label_04454b33:
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04454b33;
label_04454b86:
    il2cpp_runtime_helper_02337ed0();
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar7 = pSVar4;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar6,(Il2CppObject *)pSVar4,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
    if (pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                (pSVar6,(Il2CppObject *)pSVar4,MethodInfo_String_get_Item);
      return;
    }
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae722 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04454ca2;
label_04454c43:
    pSVar1 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04454c43;
label_04454ca2:
    il2cpp_runtime_helper_02337ed0();
    pSVar1 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
  }
  if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar7 = pSVar4;
    bVar2 = System_Collections_Generic_List_object___Contains(pSVar1,(Il2CppObject *)pSVar4,MethodInfo_Boolean_Contains);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
      if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) goto label_04454d23;
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               System_Collections_Generic_List_object___get_Item(pSVar1,0,MethodInfo_String_get_Item);
    }
    System_String__Concat_3ae5ba0((System_String_o *)pSVar4,"Icon",(MethodInfo *)0x0);
    return;
  }
label_04454d23:
  pSVar5 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = UI_UIManager__GetLocale(pSVar5,(System_String_o *)pSVar7,item,"","",in_R9);
  System_String__Format_3af7980(pSVar5,in_RCX,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$SetLastCategory
// il2cpp: void UI_UIManager__SetLastCategory (System_Type_o* t, System_String_o* category, const MethodInfo* method);
// 0x44549e0

void UI_UIManager__SetLastCategory(System_Type_o *t,System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  bool_conflict bVar3;
  System_Type_o *pSVar4;
  System_String_o *pSVar5;
  System_Object_array *in_RCX;
  System_String_o *item;
  System_Type_o *pSVar6;
  MethodInfo *in_R9;
  
  pSVar6 = (System_Type_o *)category;
  if (g_data_057ae71d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71d = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04454a6b;
label_04454a0b:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04454a0b;
label_04454a6b:
    il2cpp_runtime_helper_02337ed0();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar6 = t;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)t,MethodInfo_Boolean_ContainsKey);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if ((char)bVar3 != '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)t,(Il2CppObject *)category,MethodInfo_Void_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)t,(Il2CppObject *)category,MethodInfo_Void_Add);
      return;
    }
  }
  pSVar4 = (System_Type_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae71e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71e = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04454b86;
label_04454b33:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04454b33;
label_04454b86:
    il2cpp_runtime_helper_02337ed0();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar6 = pSVar4;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)pSVar4,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                (pSVar1,(Il2CppObject *)pSVar4,MethodInfo_String_get_Item);
      return;
    }
  }
  pSVar4 = (System_Type_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae722 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04454ca2;
label_04454c43:
    pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04454c43;
label_04454ca2:
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
  }
  if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar6 = pSVar4;
    bVar3 = System_Collections_Generic_List_object___Contains(pSVar2,(Il2CppObject *)pSVar4,MethodInfo_Boolean_Contains);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
      if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_04454d23;
      pSVar4 = (System_Type_o *)System_Collections_Generic_List_object___get_Item(pSVar2,0,MethodInfo_String_get_Item);
    }
    System_String__Concat_3ae5ba0((System_String_o *)pSVar4,"Icon",(MethodInfo *)0x0);
    return;
  }
label_04454d23:
  pSVar5 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = UI_UIManager__GetLocale(pSVar5,(System_String_o *)pSVar6,item,"","",in_R9);
  System_String__Format_3af7980(pSVar5,in_RCX,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$GetLastcategory
// il2cpp: System_String_o* UI_UIManager__GetLastcategory (System_Type_o* t, const MethodInfo* method);
// 0x4454b10

System_String_o * UI_UIManager__GetLastcategory(System_Type_o *t,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  bool_conflict bVar3;
  MethodInfo *str0;
  System_String_o *pSVar4;
  System_Object_array *in_RCX;
  System_String_o *item;
  MethodInfo *in_R9;
  
  if (g_data_057ae71e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71e = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04454b86;
label_04454b33:
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04454b33;
label_04454b86:
    il2cpp_runtime_helper_02337ed0();
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
  }
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method = (MethodInfo *)t;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)t,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_UIManager + 0xb8) + 0x10);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar4 = (System_String_o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar1,(Il2CppObject *)t,MethodInfo_String_get_Item);
      return pSVar4;
    }
  }
  str0 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae722 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04454ca2;
label_04454c43:
    pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04454c43;
label_04454ca2:
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
  }
  if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
    method = str0;
    bVar3 = System_Collections_Generic_List_object___Contains(pSVar2,(Il2CppObject *)str0,MethodInfo_Boolean_Contains);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
      if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_04454d23;
      str0 = (MethodInfo *)System_Collections_Generic_List_object___get_Item(pSVar2,0,MethodInfo_String_get_Item);
    }
    pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)str0,"Icon",(MethodInfo *)0x0);
    return pSVar4;
  }
label_04454d23:
  pSVar4 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = UI_UIManager__GetLocale(pSVar4,(System_String_o *)method,item,"","",in_R9);
  pSVar4 = System_String__Format_3af7980(pSVar4,in_RCX,(MethodInfo *)0x0);
  return pSVar4;
}


// UI.UIManager$$LoadProfileIcons
// il2cpp: void UI_UIManager__LoadProfileIcons (const MethodInfo* method);
// 0x4453c70

void UI_UIManager__LoadProfileIcons(MethodInfo *method)

{
  byte bVar1;
  UI_TipPanel_o *__this;
  UI_LoadingBackgroundPanel_o *pUVar2;
  UI_LoadingProgressPanel_o *pUVar3;
  UI_InGameMenu_c *pUVar4;
  UI_ItemHandler_o *pUVar5;
  UI_EmoteHandler_o *pUVar6;
  UI_EmoteHandler_c *pUVar7;
  code *vtableDispatch;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  UnityEngine_Component_o *__this_00;
  UI_BaseMenu_o *__this_01;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_09;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_10;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_11;
  int32_t *piVar11;
  undefined4 uVar12;
  bool_conflict bVar13;
  uint uVar14;
  UnityEngine_GameObject_o *pUVar15;
  UI_BasePopup_o *__this_12;
  System_String_o *pSVar16;
  System_Enum_c *__this_13;
  Il2CppClass *pIVar17;
  Il2CppClass *pIVar18;
  long *plVar19;
  System_String_o *pSVar20;
  undefined8 *puVar21;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar22;
  Il2CppObject *pIVar23;
  Il2CppClass *pIVar24;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_14;
  System_Object_array *pSVar25;
  UnityEngine_AudioSource_o *__this_15;
  long *in_RCX;
  MethodInfo_255AB00 **ppMVar26;
  MethodInfo_3104D80 **args;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  System_String_o *item;
  int iVar27;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **ppSVar28;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar29;
  Il2CppClass *pIVar30;
  void *pvVar31;
  System_Object_array **unaff_RBP;
  MethodInfo *pMVar32;
  UI_BasePopup_o *__this_16;
  System_Enum_c *__this_17;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar33;
  MethodInfo *in_R9;
  long *unaff_R12;
  uint uVar34;
  long *unaff_R13;
  long *unaff_R14;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **unaff_R15;
  float fVar35;
  float fVar36;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  void *pvVar37;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar38;
  undefined1 auStackY_168 [48];
  UnityEngine_Object_o *pUStackY_138;
  Il2CppClass *pIStackY_130;
  undefined8 uStackY_128;
  Il2CppClass *pIStackY_120;
  Il2CppClass *pIStackY_118;
  Il2CppClass *pIStackY_110;
  void *pvStackY_108;
  UnityEngine_Object_o *pUStackY_100;
  Il2CppClass *pIStackY_f8;
  Il2CppClass *pIStackY_f0;
  Il2CppClass *pIStackY_e8;
  Il2CppObject *pIStackY_e0;
  Il2CppClass *pIStackY_d8;
  Il2CppClass *pIStackY_d0;
  System_String_c *pSVar39;
  Il2CppClass **ppIVar40;
  uint32_t uVar41;
  int32_t iVar42;
  uint32_t uVar43;
  uint32_t uVar44;
  Il2CppRGCTXData *pIVar45;
  Il2CppType *pIVar46;
  Il2CppType **ppIVar47;
  _union_13 _Var48;
  _union_14 _Var49;
  System_String_c *local_78;
  Il2CppClass **ppIStack_70;
  uint32_t local_68;
  int32_t iStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  Il2CppRGCTXData *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ae71f == '\0') {
    pIStackY_d0 = (void *)0x4453c9a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pIStackY_d0 = (void *)0x4453ca6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pIStackY_d0 = (void *)0x4453cb2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    pIStackY_d0 = (void *)0x4453cbe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStackY_d0 = (void *)0x4453cca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pIStackY_d0 = (void *)0x4453cd6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pIStackY_d0 = (void *)0x4453ce2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStackY_d0 = (void *)0x4453cee;
    il2cpp_runtime_helper_023445d0(&"ProfileIconInfo");
    pIStackY_d0 = (void *)0x4453cfa;
    il2cpp_runtime_helper_023445d0(&"Icons");
    pIStackY_d0 = (void *)0x4453d06;
    il2cpp_runtime_helper_023445d0(&"AnimatedEmojis");
    pIStackY_d0 = (void *)0x4453d12;
    il2cpp_runtime_helper_023445d0(&"AllEmojis");
    pIStackY_d0 = (void *)0x4453d1e;
    il2cpp_runtime_helper_023445d0(&"EmoteInfo");
    g_data_057ae71f = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    pIStackY_d0 = (void *)0x4453d5c;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar24 = *(Il2CppClass **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    pIStackY_d0 = (void *)0x4453d82;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStackY_d0 = (void *)0x4453d96;
  pIVar17 = (Il2CppClass *)
            ApplicationManagers_ResourceManager__LoadText
                      ((System_String_o *)pIVar24,"ProfileIconInfo",(MethodInfo *)0x0);
  pMVar32 = (MethodInfo *)0x0;
  pIStackY_d0 = (void *)0x4453da0;
  pIVar18 = (Il2CppClass *)SimpleJSONFixed_JSON__Parse((System_String_o *)pIVar17,(MethodInfo *)0x0);
  if (pIVar18 != (Il2CppClass *)0x0) {
    in_RCX = (pIVar18->_1).image;
    pIStackY_d0 = (void *)0x4453dc6;
    pMVar32 = "Icons";
    plVar19 = (long *)(*(code *)((System_Object_array *)in_RCX)->m_Items[0x31])
                                (pIVar18,"Icons",((System_Object_array *)in_RCX)->m_Items[0x32]);
    pIVar17 = pIVar18;
    if (plVar19 != (long *)0x0) {
      in_RCX = (long *)*plVar19;
      pIStackY_d0 = (void *)0x4453de7;
      (*(code *)((System_Object_array *)in_RCX)->m_Items[99])
                (&stack0xffffffffffffff88,plVar19,((System_Object_array *)in_RCX)->m_Items[100]);
      pIStackY_d0 = (void *)0x4453e28;
      __this_03.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIStack_70;
      __this_03.fields._0_8_ = local_78;
      __this_03.fields.m_Object.fields._version = local_68;
      __this_03.fields.m_Object.fields._index = iStack_64;
      __this_03.fields.m_Object.fields._current.fields.key._0_4_ = uStack_60;
      __this_03.fields.m_Object.fields._current.fields.key._4_4_ = uStack_5c;
      __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
      __this_03.fields.m_Object.fields._32_8_ = pIStack_50;
      __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
      __this_03.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
      __this_03.fields.m_Array.fields._current = local_38.genericMethod;
      pSVar39 = local_78;
      ppIVar40 = ppIStack_70;
      uVar41 = local_68;
      iVar42 = iStack_64;
      uVar43 = uStack_60;
      uVar44 = uStack_5c;
      pIVar45 = local_58;
      pIVar46 = pIStack_50;
      ppIVar47 = local_48;
      _Var48 = _Stack_40;
      _Var49 = local_38;
      bVar13 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)&stack0xffffffffffffff38)
      ;
      if ((char)bVar13 != '\0') {
        unaff_R13 = &TypeInfo_JSONNode;
        unaff_R12 = &MethodInfo_Void_Add;
        do {
          pIStackY_d0 = (void *)0x4453e86;
          __this_05.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar40;
          __this_05.fields._0_8_ = pSVar39;
          __this_05.fields.m_Object.fields._version = uVar41;
          __this_05.fields.m_Object.fields._index = iVar42;
          __this_05.fields.m_Object.fields._current.fields.key._0_4_ = uVar43;
          __this_05.fields.m_Object.fields._current.fields.key._4_4_ = uVar44;
          __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar45;
          __this_05.fields.m_Object.fields._32_8_ = pIVar46;
          __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar47;
          __this_05.fields.m_Array.fields._8_8_ = _Var48.rgctx_data;
          __this_05.fields.m_Array.fields._current = _Var49.genericMethod;
          SVar38 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_05,(MethodInfo *)&stack0xffffffffffffff38);
          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)SVar38.fields.value;
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            pIStackY_d0 = (void *)0x4453e9b;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar24 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pIStackY_d0 = (void *)0x4453ebc;
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar32 = (MethodInfo *)0x0;
          pIStackY_d0 = (void *)0x4453ec6;
          pIVar17 = (Il2CppClass *)unaff_R15;
          pSVar20 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                              ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(MethodInfo *)0x0);
          lVar10 = MethodInfo_Void_Add;
          unaff_RBP = (System_Object_array **)&TypeInfo_UIManager;
          unaff_R14 = (long *)&stack0xffffffffffffff38;
          if (pIVar24 == (Il2CppClass *)0x0) goto label_0445420e;
          piVar11 = (int32_t *)((long)&(pIVar24->_1).namespaze + 4);
          *piVar11 = *piVar11 + 1;
          in_RCX = (long *)((System_Collections_Generic_List_object__Fields *)&(pIVar24->_1).name)->_items;
          unaff_R14 = (long *)&stack0xffffffffffffff38;
          if ((System_Object_array *)in_RCX == (System_Object_array *)0x0) goto label_0445420e;
          uVar14 = *(uint *)&(pIVar24->_1).namespaze;
          if (uVar14 < (uint)((System_Object_array *)in_RCX)->max_length) {
            *(uint *)&(pIVar24->_1).namespaze = uVar14 + 1;
            ((System_Object_array *)in_RCX)->m_Items[(int)uVar14] = (Il2CppObject *)pSVar20;
            pIStackY_d0 = (void *)0x4453f0c;
            il2cpp_runtime_helper_022b4080(((System_Object_array *)in_RCX)->m_Items + (int)uVar14);
          }
          else {
            in_RCX = *(long **)(*(long *)(lVar10 + 0x20) + 0xc0);
            pIStackY_d0 = (void *)0x4453e6a;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pIVar24,(Il2CppObject *)pSVar20,
                       (MethodInfo_362C220 *)((System_Object_array *)in_RCX)->m_Items[10]);
          }
          pIStackY_d0 = (void *)0x4453e74;
          __this_04.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar40;
          __this_04.fields._0_8_ = pSVar39;
          __this_04.fields.m_Object.fields._version = uVar41;
          __this_04.fields.m_Object.fields._index = iVar42;
          __this_04.fields.m_Object.fields._current.fields.key._0_4_ = uVar43;
          __this_04.fields.m_Object.fields._current.fields.key._4_4_ = uVar44;
          __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar45;
          __this_04.fields.m_Object.fields._32_8_ = pIVar46;
          __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar47;
          __this_04.fields.m_Array.fields._8_8_ = _Var48.rgctx_data;
          __this_04.fields.m_Array.fields._current = _Var49.genericMethod;
          bVar13 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_04,(MethodInfo *)&stack0xffffffffffffff38);
          unaff_R14 = (long *)&stack0xffffffffffffff38;
        } while ((char)bVar13 != '\0');
      }
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        pIStackY_d0 = (void *)0x4453f29;
        il2cpp_runtime_helper_02337ed0();
      }
      in_RCX = &TypeInfo_ResourceManager;
      pIVar24 = *(Il2CppClass **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        pIStackY_d0 = (void *)0x4453f4f;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStackY_d0 = (void *)0x4453f63;
      pIVar17 = (Il2CppClass *)
                ApplicationManagers_ResourceManager__LoadText
                          ((System_String_o *)pIVar24,"EmoteInfo",(MethodInfo *)0x0);
      pMVar32 = (MethodInfo *)0x0;
      pIStackY_d0 = (void *)0x4453f6d;
      pIVar18 = (Il2CppClass *)SimpleJSONFixed_JSON__Parse((System_String_o *)pIVar17,(MethodInfo *)0x0);
      if (pIVar18 != (Il2CppClass *)0x0) {
        in_RCX = (pIVar18->_1).image;
        pIStackY_d0 = (void *)0x4453f98;
        pMVar32 = "AllEmojis";
        pIVar17 = pIVar18;
        puVar21 = (undefined8 *)
                  (*(code *)((System_Object_array *)in_RCX)->m_Items[0x31])
                            (pIVar18,"AllEmojis",((System_Object_array *)in_RCX)->m_Items[0x32]);
        if (puVar21 != (undefined8 *)0x0) {
          in_RCX = (long *)*puVar21;
          pIStackY_d0 = (void *)0x4453fb9;
          (*(code *)((System_Object_array *)in_RCX)->m_Items[99])
                    (&stack0xffffffffffffff88,puVar21,((System_Object_array *)in_RCX)->m_Items[100]);
          pIStackY_d0 = (void *)0x4453ffa;
          __this_06.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIStack_70;
          __this_06.fields._0_8_ = local_78;
          __this_06.fields.m_Object.fields._version = local_68;
          __this_06.fields.m_Object.fields._index = iStack_64;
          __this_06.fields.m_Object.fields._current.fields.key._0_4_ = uStack_60;
          __this_06.fields.m_Object.fields._current.fields.key._4_4_ = uStack_5c;
          __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
          __this_06.fields.m_Object.fields._32_8_ = pIStack_50;
          __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
          __this_06.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
          __this_06.fields.m_Array.fields._current = local_38.genericMethod;
          pSVar39 = local_78;
          ppIVar40 = ppIStack_70;
          uVar41 = local_68;
          iVar42 = iStack_64;
          uVar43 = uStack_60;
          uVar44 = uStack_5c;
          pIVar45 = local_58;
          pIVar46 = pIStack_50;
          ppIVar47 = local_48;
          _Var48 = _Stack_40;
          _Var49 = local_38;
          bVar13 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_06,(MethodInfo *)&stack0xffffffffffffff38);
          if ((char)bVar13 != '\0') {
            unaff_R13 = &TypeInfo_JSONNode;
            unaff_R14 = &MethodInfo_Void_Add;
            do {
              pIStackY_d0 = (void *)0x4454056;
              __this_08.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar40;
              __this_08.fields._0_8_ = pSVar39;
              __this_08.fields.m_Object.fields._version = uVar41;
              __this_08.fields.m_Object.fields._index = iVar42;
              __this_08.fields.m_Object.fields._current.fields.key._0_4_ = uVar43;
              __this_08.fields.m_Object.fields._current.fields.key._4_4_ = uVar44;
              __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar45;
              __this_08.fields.m_Object.fields._32_8_ = pIVar46;
              __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar47;
              __this_08.fields.m_Array.fields._8_8_ = _Var48.rgctx_data;
              __this_08.fields.m_Array.fields._current = _Var49.genericMethod;
              SVar38 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_08,(MethodInfo *)&stack0xffffffffffffff38);
              unaff_R12 = (long *)SVar38.fields.value;
              if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
                pIStackY_d0 = (void *)0x445406b;
                il2cpp_runtime_helper_02337ed0();
              }
              pIVar24 = TypeInfo_UIManager->m_Items[6].fields.key[4].monitor;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pIStackY_d0 = (void *)0x445408c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar32 = (MethodInfo *)0x0;
              pIStackY_d0 = (void *)0x4454096;
              pIVar17 = (Il2CppClass *)unaff_R12;
              pSVar20 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                                  ((SimpleJSONFixed_JSONNode_o *)unaff_R12,(MethodInfo *)0x0);
              lVar10 = MethodInfo_Void_Add;
              unaff_RBP = (System_Object_array **)&TypeInfo_UIManager;
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xffffffffffffff38;
              if (pIVar24 == (Il2CppClass *)0x0) goto label_0445420e;
              piVar11 = (int32_t *)((long)&(pIVar24->_1).namespaze + 4);
              *piVar11 = *piVar11 + 1;
              in_RCX = (long *)((System_Collections_Generic_List_object__Fields *)&(pIVar24->_1).name)->_items
              ;
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xffffffffffffff38;
              if ((System_Object_array *)in_RCX == (System_Object_array *)0x0) goto label_0445420e;
              uVar14 = *(uint *)&(pIVar24->_1).namespaze;
              if (uVar14 < (uint)((System_Object_array *)in_RCX)->max_length) {
                *(uint *)&(pIVar24->_1).namespaze = uVar14 + 1;
                ((System_Object_array *)in_RCX)->m_Items[(int)uVar14] = (Il2CppObject *)pSVar20;
                pIStackY_d0 = (void *)0x44540db;
                il2cpp_runtime_helper_022b4080(((System_Object_array *)in_RCX)->m_Items + (int)uVar14);
              }
              else {
                in_RCX = *(long **)(*(long *)(lVar10 + 0x20) + 0xc0);
                pIStackY_d0 = (void *)0x445403a;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pIVar24,(Il2CppObject *)pSVar20,
                           (MethodInfo_362C220 *)((System_Object_array *)in_RCX)->m_Items[10]);
              }
              pIStackY_d0 = (void *)0x4454044;
              __this_07.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar40;
              __this_07.fields._0_8_ = pSVar39;
              __this_07.fields.m_Object.fields._version = uVar41;
              __this_07.fields.m_Object.fields._index = iVar42;
              __this_07.fields.m_Object.fields._current.fields.key._0_4_ = uVar43;
              __this_07.fields.m_Object.fields._current.fields.key._4_4_ = uVar44;
              __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar45;
              __this_07.fields.m_Object.fields._32_8_ = pIVar46;
              __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar47;
              __this_07.fields.m_Array.fields._8_8_ = _Var48.rgctx_data;
              __this_07.fields.m_Array.fields._current = _Var49.genericMethod;
              bVar13 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                 (__this_07,(MethodInfo *)&stack0xffffffffffffff38);
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xffffffffffffff38;
            } while ((char)bVar13 != '\0');
          }
          pSVar39 = (pIVar18->_1).image;
          pIStackY_d0 = (void *)0x44540ff;
          pMVar32 = "AnimatedEmojis";
          puVar21 = (undefined8 *)
                    (*(pSVar39->vtable)._7_CompareTo.methodPtr)
                              (pIVar18,"AnimatedEmojis",(pSVar39->vtable)._7_CompareTo.method);
          pIVar17 = pIVar18;
          if (puVar21 != (undefined8 *)0x0) {
            in_RCX = (long *)*puVar21;
            pIStackY_d0 = (void *)0x4454120;
            (*(code *)((System_Object_array *)in_RCX)->m_Items[99])
                      (&stack0xffffffffffffff88,puVar21,((System_Object_array *)in_RCX)->m_Items[100]);
            pIStackY_d0 = (void *)0x4454161;
            __this_09.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIStack_70;
            __this_09.fields._0_8_ = local_78;
            __this_09.fields.m_Object.fields._version = local_68;
            __this_09.fields.m_Object.fields._index = iStack_64;
            __this_09.fields.m_Object.fields._current.fields.key._0_4_ = uStack_60;
            __this_09.fields.m_Object.fields._current.fields.key._4_4_ = uStack_5c;
            __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_58;
            __this_09.fields.m_Object.fields._32_8_ = pIStack_50;
            __this_09.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_48;
            __this_09.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
            __this_09.fields.m_Array.fields._current = local_38.genericMethod;
            bVar13 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                               (__this_09,(MethodInfo *)&stack0xffffffffffffff38);
            if ((char)bVar13 != '\0') {
              unaff_R12 = &TypeInfo_JSONNode;
              pSVar39 = local_78;
              ppIVar40 = ppIStack_70;
              uVar41 = local_68;
              iVar42 = iStack_64;
              uVar43 = uStack_60;
              uVar44 = uStack_5c;
              pIVar45 = local_58;
              pIVar46 = pIStack_50;
              ppIVar47 = local_48;
              _Var48 = _Stack_40;
              _Var49 = local_38;
              do {
                pIStackY_d0 = (void *)0x445419a;
                __this_10.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar40;
                __this_10.fields._0_8_ = pSVar39;
                __this_10.fields.m_Object.fields._version = uVar41;
                __this_10.fields.m_Object.fields._index = iVar42;
                __this_10.fields.m_Object.fields._current.fields.key._0_4_ = uVar43;
                __this_10.fields.m_Object.fields._current.fields.key._4_4_ = uVar44;
                __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar45;
                __this_10.fields.m_Object.fields._32_8_ = pIVar46;
                __this_10.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar47;
                __this_10.fields.m_Array.fields._8_8_ = _Var48.rgctx_data;
                __this_10.fields.m_Array.fields._current = _Var49.genericMethod;
                SVar38 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   (__this_10,(MethodInfo *)&stack0xffffffffffffff38);
                unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                            SVar38.fields.value;
                if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
                  pIStackY_d0 = (void *)0x44541af;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar18 = TypeInfo_UIManager->m_Items[6].fields.key[5].klass;
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  pIStackY_d0 = (void *)0x44541d0;
                  il2cpp_runtime_helper_02337ed0();
                }
                pMVar32 = (MethodInfo *)0x0;
                pIStackY_d0 = (void *)0x44541da;
                pIVar17 = (Il2CppClass *)unaff_R15;
                pSVar20 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                                    ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(MethodInfo *)0x0);
                pIVar24 = (Il2CppClass *)0x0;
                unaff_RBP = (System_Object_array **)&TypeInfo_UIManager;
                unaff_R13 = (long *)&MethodInfo_Boolean_Add;
                unaff_R14 = (long *)&stack0xffffffffffffff38;
                if (pIVar18 == (Il2CppClass *)0x0) goto label_0445420e;
                pIStackY_d0 = (void *)0x44541ee;
                System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)pIVar18,(Il2CppObject *)pSVar20,
                           MethodInfo_Boolean_Add);
                pIStackY_d0 = (void *)0x44541f8;
                __this_11.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)ppIVar40;
                __this_11.fields._0_8_ = pSVar39;
                __this_11.fields.m_Object.fields._version = uVar41;
                __this_11.fields.m_Object.fields._index = iVar42;
                __this_11.fields.m_Object.fields._current.fields.key._0_4_ = uVar43;
                __this_11.fields.m_Object.fields._current.fields.key._4_4_ = uVar44;
                __this_11.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar45;
                __this_11.fields.m_Object.fields._32_8_ = pIVar46;
                __this_11.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)ppIVar47;
                __this_11.fields.m_Array.fields._8_8_ = _Var48.rgctx_data;
                __this_11.fields.m_Array.fields._current = _Var49.genericMethod;
                bVar13 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                   (__this_11,(MethodInfo *)&stack0xffffffffffffff38);
              } while ((char)bVar13 != '\0');
            }
            return;
          }
        }
      }
    }
  }
label_0445420e:
  pIStackY_d0 = (void *)0x4454213;
  pIStackY_e0 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  x = (UnityEngine_Object_o *)((ulong)pIVar17 & 0xffffffff);
  iVar27 = (int)pIVar17;
  pIStackY_d8 = pIVar24;
  pIStackY_d0 = (Il2CppClass *)unaff_R14;
  if (g_data_057ae71b == '\0') {
    pIStackY_e8 = (void *)0x44542b2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71b = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_044542d0;
label_04454246:
    pIStackY_e8 = (void *)0x445424d;
    UI_UIManager__SetMenu(iVar27,pMVar32);
    pSVar29 = TypeInfo_UIManager;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454246;
label_044542d0:
    pIStackY_e8 = (void *)0x44542d5;
    il2cpp_runtime_helper_02337ed0();
    pIStackY_e8 = (void *)0x44542dc;
    UI_UIManager__SetMenu(iVar27,pMVar32);
    pSVar29 = TypeInfo_UIManager;
  }
  if (iVar27 == 0) {
    TypeInfo_UIManager = pSVar29;
    return;
  }
  TypeInfo_UIManager = pSVar29;
  if (pSVar29->m_Items[8].fields.next == 0) {
    pIStackY_e8 = (void *)0x44542ff;
    il2cpp_runtime_helper_02337ed0();
    pIStackY_e8 = (void *)0x4454304;
    UI_UIManager__LoadSounds((MethodInfo *)pSVar29);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454314;
label_0445427a:
    pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar24 = pIVar23[3].klass;
    pIVar17 = pIStackY_d0;
  }
  else {
    pIStackY_e8 = (void *)0x445426a;
    UI_UIManager__LoadSounds((MethodInfo *)pSVar29);
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_0445427a;
label_04454314:
    pIStackY_e8 = (void *)0x4454319;
    il2cpp_runtime_helper_02337ed0();
    pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar24 = pIVar23[3].klass;
    pIVar17 = pIStackY_d0;
  }
  pIStackY_d0 = pIVar17;
  if (pIVar24 != (Il2CppClass *)0x0) {
    if (iVar27 != 2) {
      UI_LoadingMenu__Hide((UI_LoadingMenu_o *)pIVar24,(MethodInfo *)0x0);
      return;
    }
    pMVar32 = (MethodInfo *)0x1;
    pIVar18 = (Il2CppClass *)(pIVar24->_1).implementedInterfaces;
    pIStackY_e0 = pIVar23;
    pIStackY_d0 = (Il2CppClass *)unaff_RBP;
    if (pIVar18 != (Il2CppClass *)0x0) {
      pIVar30 = (Il2CppClass *)0x1;
      pMVar32 = (MethodInfo *)0x0;
      pIStackY_e8 = (void *)0x43ef55f;
      pUVar15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar18,(MethodInfo *)0x0);
      unaff_RBP = (System_Object_array **)(Il2CppClass *)0x1;
      if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
        pMVar32 = (MethodInfo *)0x0;
        pIStackY_e8 = (void *)0x43ef572;
        bVar13 = UnityEngine_GameObject__get_activeSelf(pUVar15,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          return;
        }
        __this = (UI_TipPanel_o *)(pIVar24->_1).implementedInterfaces;
        pIVar18 = (Il2CppClass *)0x0;
        unaff_RBP = (System_Object_array **)pIVar30;
        if (__this != (UI_TipPanel_o *)0x0) {
          pMVar32 = (MethodInfo *)0x0;
          pIStackY_e8 = (void *)0x43ef594;
          UI_TipPanel__SetRandomTip(__this,(MethodInfo *)0x0);
          pIVar18 = (Il2CppClass *)(pIVar24->_1).implementedInterfaces;
          if (pIVar18 != (Il2CppClass *)0x0) {
            pMVar32 = (MethodInfo *)0x0;
            pIStackY_e8 = (void *)0x43ef5ab;
            pUVar15 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pIVar18,(MethodInfo *)0x0);
            if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
              pMVar32 = (MethodInfo *)0x1;
              pIStackY_e8 = (void *)0x43ef5c3;
              UnityEngine_GameObject__SetActive(pUVar15,1,(MethodInfo *)0x0);
              pUVar2 = (pIVar24->_1).methods;
              pIVar18 = (Il2CppClass *)0x0;
              if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
                pMVar32 = (MethodInfo *)0x1;
                pIStackY_e8 = (void *)0x43ef5df;
                UI_LoadingBackgroundPanel__SetRandomBackground(pUVar2,1,0,(MethodInfo *)in_RCX);
                pUVar2 = (pIVar24->_1).methods;
                pIVar18 = (Il2CppClass *)0x0;
                if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
                  pMVar32 = (MethodInfo *)0x0;
                  pIStackY_e8 = (void *)0x43ef5f7;
                  UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar2,(MethodInfo *)0x0);
                  if (g_data_057ae510 == '\0') {
                    pIStackY_e8 = (void *)0x43ef627;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
                    pIStackY_e8 = (void *)0x43ef633;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                    g_data_057ae510 = '\x01';
                  }
                  pUVar3 = (UI_LoadingProgressPanel_o *)(pIVar24->_1).nestedTypes;
                  pIVar18 = (Il2CppClass *)0x0;
                  if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
                    UI_LoadingProgressPanel__ShowImmediate(pUVar3,0.0,pMVar32);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    pIStackY_e8 = (void *)0x43ef665;
    pvVar37 = (void *)il2cpp_runtime_helper_022b2c90();
    ppSVar28 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(extraout_RDX & 0xffffffff)
    ;
    pvVar31 = (void *)((ulong)pMVar32 & 0xffffffff);
    fVar35 = SUB84(pvVar37,0);
    pIStackY_f8 = pIVar24;
    pIStackY_f0 = pIVar17;
    pIStackY_e8 = (Il2CppClass *)unaff_RBP;
    if (g_data_057ae510 == '\0') {
      pIStackY_110 = (Il2CppClass *)0x43ef698;
      pvStackY_108 = pvVar37;
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
      pIStackY_110 = (Il2CppClass *)0x43ef6a4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae510 = '\x01';
      fVar35 = pvStackY_108._0_4_;
    }
    pUVar3 = (UI_LoadingProgressPanel_o *)(pIVar18->_1).nestedTypes;
    pIVar24 = (Il2CppClass *)0x0;
    if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
      fVar36 = 1.0;
      if (fVar35 <= 1.0) {
        fVar36 = fVar35;
      }
      fVar36 = (float)(-(uint)(0.0 <= fVar35) & (uint)fVar36);
      if ((char)ppSVar28 == '\0') {
        pIStackY_110 = (Il2CppClass *)0x43ef6f2;
        UI_LoadingProgressPanel__Show(pUVar3,fVar36,pMVar32);
      }
      else {
        pIStackY_110 = (Il2CppClass *)0x43ef6df;
        UI_LoadingProgressPanel__ShowImmediate(pUVar3,fVar36,pMVar32);
      }
      if ((char)pvVar31 == '\0') {
        return;
      }
      ppSVar28 = &TypeInfo_UIManager;
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        pIStackY_110 = (Il2CppClass *)0x43ef70f;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar24 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
      if (pIVar24 != (Il2CppClass *)0x0) {
        pUVar4 = (pIVar24->_1).image;
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if (((pUVar4->_2).naturalAligment < bVar1) ||
           ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_043ef7cc;
        pIStackY_110 = (Il2CppClass *)0x43ef75b;
        UI_InGameMenu__OnFinishLoading((UI_InGameMenu_o *)pIVar24,(MethodInfo *)0x0);
        if (g_data_057ae511 == '\0') {
          pIStackY_110 = (Il2CppClass *)0x43ef770;
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
          g_data_057ae511 = '\x01';
        }
        pIStackY_110 = (Il2CppClass *)0x43ef786;
        pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
        pIStackY_110 = (Il2CppClass *)0x43ef793;
        pIVar24 = pIVar17;
        System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
        *(undefined4 *)&((UI_InGameMenu_Fields *)&(pIVar17->_1).name)->m_CachedPtr = 0;
        ppSVar28 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)0x0;
        if (pIVar17 != (Il2CppClass *)0x0) {
          (pIVar17->_1).byval_arg.data = pIVar18;
          pIStackY_110 = (Il2CppClass *)0x43ef7b2;
          il2cpp_runtime_helper_022b4080(&(pIVar17->_1).byval_arg,pIVar18);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)pIVar18,(System_Collections_IEnumerator_o *)pIVar17,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    pIStackY_110 = (Il2CppClass *)0x43ef7cc;
    il2cpp_runtime_helper_022b2c90();
label_043ef7cc:
    pIStackY_110 = (Il2CppClass *)0x43ef7d1;
    il2cpp_runtime_helper_022b2fd0();
    __this_16 = (UI_BasePopup_o *)(pIVar24->_1).implementedInterfaces;
    pIStackY_110 = (Il2CppClass *)ppSVar28;
    if (__this_16 != (UI_BasePopup_o *)0x0) {
      pIStackY_118 = (Il2CppClass *)0x43ef7f7;
      pUVar15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_16,(MethodInfo *)0x0);
      if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
        pIStackY_118 = (Il2CppClass *)0x43ef808;
        UnityEngine_GameObject__SetActive(pUVar15,0,(MethodInfo *)0x0);
        pUVar5 = (UI_ItemHandler_o *)(pIVar24->_1).nestedTypes;
        __this_16 = (UI_BasePopup_o *)0x0;
        if (pUVar5 != (UI_ItemHandler_o *)0x0) {
          pIStackY_118 = (Il2CppClass *)0x43ef824;
          (**(code **)&pUVar5->klass[1]._2.field_count)();
          pUVar6 = (pIVar24->_1).methods;
          __this_16 = (UI_BasePopup_o *)0x0;
          if (pUVar6 != (UI_EmoteHandler_o *)0x0) {
            pUVar7 = pUVar6->klass;
            vtableDispatch = *(code **)&pUVar7[1]._2.field_count;
            uVar8._0_2_ = pUVar7[1]._2.interfaces_count;
            uVar8._2_2_ = pUVar7[1]._2.interface_offsets_count;
            uVar8._4_1_ = pUVar7[1]._2.typeHierarchyDepth;
            uVar8._5_1_ = pUVar7[1]._2.genericRecursionDepth;
            uVar8._6_1_ = pUVar7[1]._2.rank;
            uVar8._7_1_ = pUVar7[1]._2.minimumAlignment;
            (*vtableDispatch)(pUVar6,uVar8,extraout_RDX_00,vtableDispatch);
            return;
          }
        }
      }
    }
    pIStackY_118 = (Il2CppClass *)0x43ef849;
    uVar12 = il2cpp_runtime_helper_022b2c90();
    uStackY_128 = (Il2CppClass *)CONCAT44(extraout_XMM0_Da,uVar12);
    pIStackY_120 = pIVar24;
    pIStackY_118 = pIVar18;
    if (g_data_057ae516 == '\0') {
      pIStackY_130 = (Il2CppClass *)0x43ef872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      pIStackY_130 = (Il2CppClass *)0x43ef87e;
      il2cpp_runtime_helper_023445d0(&"%");
      g_data_057ae516 = '\x01';
    }
    plVar19 = __this_16[1].monitor;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      pIStackY_130 = (Il2CppClass *)0x43ef8a4;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_12 = (UI_BasePopup_o *)0x0;
    pIStackY_130 = (Il2CppClass *)0x43ef8bb;
    pSVar20 = Utility_Util__FormatFloat(uStackY_128._4_4_ * 100.0,0,(MethodInfo *)0x0);
    if (pSVar20 != (System_String_o *)0x0) {
      pIStackY_130 = (Il2CppClass *)0x43ef8d3;
      __this_12 = (UI_BasePopup_o *)
                  (*(pSVar20->klass->vtable)._3_ToString.methodPtr)
                            (pSVar20,(pSVar20->klass->vtable)._3_ToString.method);
      pIStackY_130 = (Il2CppClass *)0x43ef8e7;
      pSVar20 = System_String__Concat_3ae5ba0((System_String_o *)__this_12,"%",(MethodInfo *)0x0);
      if (plVar19 != (long *)0x0) {
        pIStackY_130 = (Il2CppClass *)0x43ef902;
        (**(code **)(*plVar19 + 0x5e8))(plVar19,pSVar20,*(undefined8 *)(*plVar19 + 0x5f0));
        plVar9 = (long *)__this_16[1].fields.m_CachedPtr;
        __this_12 = (UI_BasePopup_o *)0x0;
        if (plVar9 != (long *)0x0) {
          pIStackY_130 = (Il2CppClass *)0x43ef924;
          (**(code **)(*plVar9 + 0x428))(uStackY_128._4_4_);
          UI_BasePopup__ShowImmediate(__this_16,(MethodInfo *)0x0);
          return;
        }
      }
    }
    pIStackY_130 = (Il2CppClass *)0x43ef93a;
    auStackY_168._40_4_ = il2cpp_runtime_helper_022b2c90();
    auStackY_168._44_4_ = extraout_XMM0_Da_00;
    pUStackY_138 = (UnityEngine_Object_o *)plVar19;
    pIStackY_130 = (Il2CppClass *)__this_16;
    if (g_data_057ae517 == '\0') {
      auStackY_168._32_8_ = (void *)0x43ef962;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      auStackY_168._32_8_ = (void *)0x43ef96e;
      il2cpp_runtime_helper_023445d0(&"%");
      g_data_057ae517 = '\x01';
    }
    plVar19 = __this_12[1].monitor;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      auStackY_168._32_8_ = (void *)0x43ef994;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar20 = (System_String_o *)0x0;
    auStackY_168._32_8_ = (void *)0x43ef9ab;
    pSVar16 = Utility_Util__FormatFloat((float)auStackY_168._44_4_ * 100.0,0,(MethodInfo *)0x0);
    if (pSVar16 != (System_String_o *)0x0) {
      auStackY_168._32_8_ = (void *)0x43ef9c3;
      pSVar20 = (System_String_o *)
                (*(pSVar16->klass->vtable)._3_ToString.methodPtr)
                          (pSVar16,(pSVar16->klass->vtable)._3_ToString.method);
      auStackY_168._32_8_ = (void *)0x43ef9d7;
      pSVar16 = System_String__Concat_3ae5ba0(pSVar20,"%",(MethodInfo *)0x0);
      if (plVar19 != (long *)0x0) {
        auStackY_168._32_8_ = (void *)0x43ef9f2;
        (**(code **)(*plVar19 + 0x5e8))(plVar19,pSVar16,*(undefined8 *)(*plVar19 + 0x5f0));
        plVar9 = (long *)__this_12[1].fields.m_CachedPtr;
        pSVar20 = (System_String_o *)0x0;
        if (plVar9 != (long *)0x0) {
          auStackY_168._32_8_ = (void *)0x43efa14;
          (**(code **)(*plVar9 + 0x428))(auStackY_168._44_4_);
          UI_BasePopup__Show(__this_12,(MethodInfo *)0x0);
          return;
        }
      }
    }
    auStackY_168._32_8_ = (void *)0x43efa2a;
    auStackY_168._16_8_ = il2cpp_runtime_helper_022b2c90();
    auStackY_168._24_8_ = plVar19;
    auStackY_168._32_8_ = __this_12;
    if (g_data_057ae511 == '\0') {
      auStackY_168._8_8_ = (void *)0x43efa4c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
      g_data_057ae511 = '\x01';
    }
    auStackY_168._8_8_ = (void *)0x43efa62;
    __this_13 = (System_Enum_c *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
    uVar12 = 0;
    auStackY_168._8_8_ = (void *)0x43efa6f;
    __this_17 = __this_13;
    System_Object___ctor((Il2CppObject *)__this_13,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_13->_1).name = 0;
    if (__this_13 != (System_Enum_c *)0x0) {
      (__this_13->_1).byval_arg.data = pSVar20;
      auStackY_168._8_8_ = (void *)0x43efa8e;
      il2cpp_runtime_helper_022b4080(&(__this_13->_1).byval_arg,pSVar20);
      return;
    }
    auStackY_168._8_8_ = (void *)0x43efa9e;
    il2cpp_runtime_helper_022b2c90();
    auStackY_168._0_8_ = __this_13;
    auStackY_168._8_8_ = pvVar31;
    System_Object___ctor((Il2CppObject *)__this_17,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_17->_1).name = uVar12;
    return;
  }
  pIStackY_e8 = (void *)0x4454335;
  pvStackY_108 = (void *)il2cpp_runtime_helper_022b2c90();
  pIStackY_f0 = (Il2CppClass *)&TypeInfo_UIManager;
  pUStackY_100 = x;
  pIStackY_f8 = (Il2CppClass *)unaff_R12;
  pIStackY_e8 = (Il2CppClass *)unaff_R15;
  if (g_data_057ae721 == '\0') {
    pIStackY_110 = (Il2CppClass *)0x4454364;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    pIStackY_110 = (Il2CppClass *)0x4454370;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pIStackY_110 = (Il2CppClass *)0x445437c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pIStackY_110 = (Il2CppClass *)0x4454388;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit);
    pIStackY_110 = (Il2CppClass *)0x4454394;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit);
    pIStackY_110 = (Il2CppClass *)0x44543a0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu);
    pIStackY_110 = (Il2CppClass *)0x44543ac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu);
    pIStackY_110 = (Il2CppClass *)0x44543b8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu);
    pIStackY_110 = (Il2CppClass *)0x44543c4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    pIStackY_110 = (Il2CppClass *)0x44543d0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu);
    pIStackY_110 = (Il2CppClass *)0x44543dc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu);
    pIStackY_110 = (Il2CppClass *)0x44543e8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStackY_110 = (Il2CppClass *)0x44543f4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIStackY_110 = (Il2CppClass *)0x4454400;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pIStackY_110 = (Il2CppClass *)0x445440c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae721 = '\x01';
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)) goto label_0445470d;
  pvVar31 = *(void **)(lVar10 + 0x18);
  unaff_R15 = &TypeInfo_UIManager;
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_110 = (Il2CppClass *)0x445445a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar23[1].monitor = pvVar31;
  pIStackY_110 = (Il2CppClass *)0x4454474;
  il2cpp_runtime_helper_022b4080(&pIVar23[1].monitor);
  x = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  unaff_R12 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStackY_110 = (Il2CppClass *)0x445449b;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStackY_110 = (Il2CppClass *)0x44544a7;
  bVar13 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_110 = (Il2CppClass *)0x44544bc;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_0445470d;
    pIStackY_110 = (Il2CppClass *)0x44544da;
    x = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStackY_110 = (Il2CppClass *)0x44544ef;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStackY_110 = (Il2CppClass *)0x44544f9;
    UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
  }
  switch((int32_t)pIVar24) {
  case 1:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_110 = (Il2CppClass *)0x4454527;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar17 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar17 == (Il2CppClass *)0x0) goto label_0445470d;
    pIStackY_110 = (Il2CppClass *)0x445454d;
    System_Collections_Generic_Dictionary_object__object___Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)pIVar17,MethodInfo_Void_Clear);
    pIStackY_110 = (Il2CppClass *)0x445455c;
    pIVar22 = UI_ElementFactory__CreateDefaultMenu_object_(MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar23[2].monitor = pIVar22;
    pIStackY_110 = (Il2CppClass *)0x4454576;
    il2cpp_runtime_helper_022b4080(&pIVar23[2].monitor);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      pIStackY_110 = (Il2CppClass *)0x445458e;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStackY_110 = (Il2CppClass *)0x4454595;
    GameManagers_ChatManager__Reset((MethodInfo *)0x0);
  default:
    iVar27 = TypeInfo_UIManager->m_Items[8].fields.next;
    goto joined_r0x044546fa;
  case 2:
    puVar21 = &MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu;
    break;
  case 3:
    puVar21 = &MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu;
    break;
  case 4:
    if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
      pIStackY_110 = (Il2CppClass *)0x4454689;
      il2cpp_runtime_helper_02337ed0();
    }
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') {
      puVar21 = &MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit;
    }
    else {
      puVar21 = &MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit;
    }
    break;
  case 5:
    puVar21 = &MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu;
    break;
  case 6:
    puVar21 = &MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu;
    break;
  case 7:
    puVar21 = &MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu;
  }
  pIStackY_110 = (Il2CppClass *)0x44546c2;
  pIVar23 = UI_ElementFactory__CreateDefaultMenu_object_((MethodInfo_24FB0E0 *)*puVar21);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_110 = (Il2CppClass *)0x44546d6;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar22 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar22[2].monitor = pIVar23;
  pIStackY_110 = (Il2CppClass *)0x44546f0;
  il2cpp_runtime_helper_022b4080(&pIVar22[2].monitor);
  iVar27 = TypeInfo_UIManager->m_Items[8].fields.next;
joined_r0x044546fa:
  if (iVar27 == 0) {
    pIStackY_110 = (Il2CppClass *)0x4454705;
    il2cpp_runtime_helper_02337ed0();
  }
  x = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStackY_110 = (Il2CppClass *)0x44545c2;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStackY_110 = (Il2CppClass *)0x44545ce;
  bVar13 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
label_0445462b:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_110 = (Il2CppClass *)0x445463c;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined1 *)&TypeInfo_UIManager->m_Items[6].fields.key[5].monitor = 1;
    return;
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_110 = (Il2CppClass *)0x44545e3;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar19 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (plVar19 != (long *)0x0) {
    pIStackY_110 = (Il2CppClass *)0x445460a;
    (**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
    __this_01 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this_01 != (UI_BaseMenu_o *)0x0) {
      pIStackY_110 = (Il2CppClass *)0x445462b;
      UI_BaseMenu__ApplyScale(__this_01,(int32_t)pIVar24,(MethodInfo *)0x0);
      goto label_0445462b;
    }
  }
label_0445470d:
  pIStackY_110 = (Il2CppClass *)0x4454712;
  auStackY_168._40_8_ = il2cpp_runtime_helper_022b2c90();
  pUStackY_138 = x;
  pIStackY_130 = (Il2CppClass *)unaff_R12;
  uStackY_128 = (Il2CppClass *)unaff_R13;
  pIStackY_120 = (Il2CppClass *)((ulong)pIVar24 & 0xffffffff);
  pIStackY_118 = (Il2CppClass *)unaff_R15;
  pIStackY_110 = (Il2CppClass *)unaff_RBP;
  if (g_data_057ae720 == '\0') {
    auStackY_168._32_8_ = (void *)0x4454740;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStackY_168._32_8_ = (void *)0x445474c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
    auStackY_168._32_8_ = (void *)0x4454758;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AudioSource);
    auStackY_168._32_8_ = (void *)0x4454764;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    auStackY_168._32_8_ = (void *)0x4454770;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    auStackY_168._32_8_ = (void *)0x445477c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    auStackY_168._32_8_ = (void *)0x4454788;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    auStackY_168._32_8_ = (void *)0x4454794;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    auStackY_168._32_8_ = (void *)0x44547a0;
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MainMenuSounds");
    g_data_057ae720 = '\x01';
  }
  auStackY_168._32_8_ = (void *)0x44547b6;
  pIVar24 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AudioSource);
  auStackY_168._32_8_ = (void *)0x44547cb;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar24,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    auStackY_168._32_8_ = (void *)0x44547e4;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar23[6].klass = pIVar24;
  auStackY_168._32_8_ = (void *)0x44547ff;
  il2cpp_runtime_helper_022b4080(pIVar23 + 6,pIVar24);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    auStackY_168._32_8_ = (void *)0x4454817;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar29 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            **(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    auStackY_168._32_8_ = (void *)0x445483c;
    il2cpp_runtime_helper_02337ed0();
  }
  auStackY_168._32_8_ = (void *)0x445485a;
  ppMVar26 = (MethodInfo_255AB00 **)MethodInfo_GameObject_InstantiateAsset_GameObject;
  pSVar33 = pSVar29;
  __this_14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)pSVar29,"Prefabs/MainMenu/MainMenuSounds",0,(MethodInfo_25BC8B0 *)MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    ppMVar26 = &MethodInfo_AudioSource_GetComponentsInChildren_AudioSource;
    auStackY_168._32_8_ = (void *)0x4454875;
    pSVar25 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)__this_14,MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    pSVar33 = __this_14;
    if (pSVar25 != (System_Object_array *)0x0) {
      uVar14 = (uint)pSVar25->max_length;
      if (0 < (int)uVar14) {
        uVar34 = 0;
        unaff_RBP = &MethodInfo_Void_Add;
        do {
          uVar12 = SUB84(__this_14,0);
          if (uVar14 <= uVar34) goto label_04454915;
          __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      pSVar25->m_Items[(int)uVar34];
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            auStackY_168._32_8_ = (void *)0x44548bf;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar33 = TypeInfo_UIManager;
          if (__this_02 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          pSVar29 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
          auStackY_168._32_8_ = (void *)0x44548dd;
          pSVar33 = __this_02;
          pSVar20 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
          if (pSVar29 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          auStackY_168._32_8_ = (void *)0x44548f4;
          ppMVar26 = (MethodInfo_255AB00 **)MethodInfo_Void_Add;
          __this_14 = pSVar29;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar29,
                     (Il2CppObject *)pSVar20,(Il2CppObject *)__this_02,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
          uVar34 = uVar34 + 1;
          uVar14 = (uint)pSVar25->max_length;
        } while ((int)uVar34 < (int)uVar14);
      }
      return;
    }
  }
label_04454910:
  uVar12 = SUB84(pSVar33,0);
  auStackY_168._32_8_ = (void *)0x4454915;
  il2cpp_runtime_helper_022b2c90();
label_04454915:
  auStackY_168._32_8_ = (void *)0x445491a;
  il2cpp_runtime_helper_022b2ca0();
  pIVar24 = (Il2CppClass *)auStackY_168;
  args = (MethodInfo_3104D80 **)ppMVar26;
  auStackY_168._24_8_ = pSVar29;
  auStackY_168._32_8_ = unaff_RBP;
  if (g_data_057ae71c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UISound);
    g_data_057ae71c = '\x01';
    args = (MethodInfo_3104D80 **)ppMVar26;
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar17 = TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
  auStackY_168._0_8_ = TypeInfo_UISound;
  auStackY_168._8_8_ = (void *)0xffffffffffffffff;
  auStackY_168._16_4_ = uVar12;
  pIVar18 = (Il2CppClass *)0x0;
  pIVar30 = (Il2CppClass *)System_Enum__ToString((System_Enum_o *)auStackY_168,(MethodInfo *)0x0);
  if (pIVar17 != (Il2CppClass *)0x0) {
    args = &MethodInfo_AudioSource_get_Item;
    __this_15 = (UnityEngine_AudioSource_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pIVar17,
                           (Il2CppObject *)pIVar30,MethodInfo_AudioSource_get_Item);
    pIVar18 = pIVar30;
    pIVar24 = pIVar17;
    if (__this_15 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play_4daa2c0(__this_15,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar17 = pIVar18;
  if (g_data_057ae71d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71d = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454a6b;
label_04454a0b:
    pIVar30 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454a0b;
label_04454a6b:
    il2cpp_runtime_helper_02337ed0();
    pIVar30 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar30 != (Il2CppClass *)0x0) {
    pIVar17 = pIVar24;
    bVar13 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar30,
                        (Il2CppObject *)pIVar24,MethodInfo_Boolean_ContainsKey);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar30 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar30 != (Il2CppClass *)0x0) {
      if ((char)bVar13 != '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar30,(Il2CppObject *)pIVar24,
                   (Il2CppObject *)pIVar18,MethodInfo_Void_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar30,(Il2CppObject *)pIVar24,
                 (Il2CppObject *)pIVar18,MethodInfo_Void_Add);
      return;
    }
  }
  pIVar24 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae71e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71e = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454b86;
label_04454b33:
    pIVar18 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454b33;
label_04454b86:
    il2cpp_runtime_helper_02337ed0();
    pIVar18 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar18 != (Il2CppClass *)0x0) {
    pIVar17 = pIVar24;
    bVar13 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar18,
                        (Il2CppObject *)pIVar24,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar13 == '\0') {
      return;
    }
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar18 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar18 != (Il2CppClass *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar18,(Il2CppObject *)pIVar24,
                 MethodInfo_String_get_Item);
      return;
    }
  }
  pIVar24 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae722 = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454ca2;
label_04454c43:
    pIVar18 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454c43;
label_04454ca2:
    il2cpp_runtime_helper_02337ed0();
    pIVar18 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  if (pIVar18 != (Il2CppClass *)0x0) {
    pIVar17 = pIVar24;
    bVar13 = System_Collections_Generic_List_object___Contains
                       ((System_Collections_Generic_List_object__o *)pIVar18,(Il2CppObject *)pIVar24,
                        MethodInfo_Boolean_Contains);
    if ((char)bVar13 == '\0') {
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar24 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
      if (pIVar24 == (Il2CppClass *)0x0) goto label_04454d23;
      pIVar24 = (Il2CppClass *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pIVar24,0,MethodInfo_String_get_Item);
    }
    System_String__Concat_3ae5ba0((System_String_o *)pIVar24,"Icon",(MethodInfo *)0x0);
    return;
  }
label_04454d23:
  pSVar20 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar20 = UI_UIManager__GetLocale(pSVar20,(System_String_o *)pIVar17,item,"","",in_R9);
  System_String__Format_3af7980(pSVar20,(System_Object_array *)args,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$LoadSounds
// il2cpp: void UI_UIManager__LoadSounds (const MethodInfo* method);
// 0x4454720

void UI_UIManager__LoadSounds(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this;
  uint uVar2;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  System_Object_array *pSVar5;
  System_String_o *pSVar6;
  Il2CppClass *pIVar7;
  UnityEngine_AudioSource_o *__this_01;
  System_Object_array *args;
  System_String_o *item;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  undefined8 *unaff_RBP;
  Il2CppClass *pIVar8;
  Il2CppClass *pIVar9;
  undefined4 uVar10;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar11;
  MethodInfo *in_R9;
  uint uVar12;
  System_Collections_Generic_Dictionary_object__object__c *pSStack_60;
  void *pvStack_58;
  undefined4 uStack_50;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_48;
  int32_t iStack_40;
  int32_t iStack_3c;
  
  if (g_data_057ae720 == '\0') {
    iStack_40 = 0x4454740;
    iStack_3c = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    iStack_40 = 0x445474c;
    iStack_3c = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
    iStack_40 = 0x4454758;
    iStack_3c = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AudioSource);
    iStack_40 = 0x4454764;
    iStack_3c = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    iStack_40 = 0x4454770;
    iStack_3c = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    iStack_40 = 0x445477c;
    iStack_3c = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    iStack_40 = 0x4454788;
    iStack_3c = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    iStack_40 = 0x4454794;
    iStack_3c = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    iStack_40 = 0x44547a0;
    iStack_3c = 0;
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MainMenuSounds");
    g_data_057ae720 = '\x01';
  }
  iStack_40 = 0x44547b6;
  iStack_3c = 0;
  pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AudioSource);
  iStack_40 = 0x44547cb;
  iStack_3c = 0;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar4,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    iStack_40 = 0x44547e4;
    iStack_3c = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar1 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar1[6].klass = pIVar4;
  iStack_40 = 0x44547ff;
  iStack_3c = 0;
  il2cpp_runtime_helper_022b4080(pIVar1 + 6,pIVar4);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    iStack_40 = 0x4454817;
    iStack_3c = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              **(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    iStack_40 = 0x445483c;
    iStack_3c = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  iStack_40 = 0x445485a;
  iStack_3c = 0;
  args = MethodInfo_GameObject_InstantiateAsset_GameObject;
  pSVar11 = __this_02;
  __this_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)__this_02,"Prefabs/MainMenu/MainMenuSounds",0,(MethodInfo_25BC8B0 *)MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_00 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    args = (System_Object_array *)&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource;
    iStack_40 = 0x4454875;
    iStack_3c = 0;
    pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                       ((UnityEngine_GameObject_o *)__this_00,MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    pSVar11 = __this_00;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar5->max_length;
      if (0 < (int)uVar2) {
        uVar12 = 0;
        unaff_RBP = &MethodInfo_Void_Add;
        do {
          uVar10 = SUB84(__this_00,0);
          if (uVar2 <= uVar12) goto label_04454915;
          __this = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                   pSVar5->m_Items[(int)uVar12];
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            iStack_40 = 0x44548bf;
            iStack_3c = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = TypeInfo_UIManager;
          if (__this == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
          iStack_40 = 0x44548dd;
          iStack_3c = 0;
          pSVar11 = __this;
          pSVar6 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
          if (__this_02 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          iStack_40 = 0x44548f4;
          iStack_3c = 0;
          args = MethodInfo_Void_Add;
          __this_00 = __this_02;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                     (Il2CppObject *)pSVar6,(Il2CppObject *)__this,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
          uVar12 = uVar12 + 1;
          uVar2 = (uint)pSVar5->max_length;
        } while ((int)uVar12 < (int)uVar2);
      }
      return;
    }
  }
label_04454910:
  uVar10 = SUB84(pSVar11,0);
  iStack_40 = 0x4454915;
  iStack_3c = 0;
  il2cpp_runtime_helper_022b2c90();
label_04454915:
  iStack_40 = 0x445491a;
  iStack_3c = 0;
  il2cpp_runtime_helper_022b2ca0();
  pIVar4 = (Il2CppClass *)&stack0xffffffffffffffa0;
  pSStack_48 = __this_02;
  _iStack_40 = unaff_RBP;
  if (g_data_057ae71c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UISound);
    g_data_057ae71c = '\x01';
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
  pSStack_60 = TypeInfo_UISound;
  pvStack_58 = (void *)0xffffffffffffffff;
  pIVar8 = (Il2CppClass *)0x0;
  uStack_50 = uVar10;
  pIVar7 = (Il2CppClass *)System_Enum__ToString((System_Enum_o *)&stack0xffffffffffffffa0,(MethodInfo *)0x0);
  if (pIVar9 != (Il2CppClass *)0x0) {
    args = (System_Object_array *)&MethodInfo_AudioSource_get_Item;
    __this_01 = (UnityEngine_AudioSource_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pIVar9,
                           (Il2CppObject *)pIVar7,MethodInfo_AudioSource_get_Item);
    pIVar8 = pIVar7;
    pIVar4 = pIVar9;
    if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play_4daa2c0(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar9 = pIVar8;
  if (g_data_057ae71d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71d = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454a6b;
label_04454a0b:
    pIVar7 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454a0b;
label_04454a6b:
    il2cpp_runtime_helper_02337ed0();
    pIVar7 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar7 != (Il2CppClass *)0x0) {
    pIVar9 = pIVar4;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar7,
                       (Il2CppObject *)pIVar4,MethodInfo_Boolean_ContainsKey);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar7 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar7 != (Il2CppClass *)0x0) {
      if ((char)bVar3 != '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar7,(Il2CppObject *)pIVar4,
                   (Il2CppObject *)pIVar8,MethodInfo_Void_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar7,(Il2CppObject *)pIVar4,
                 (Il2CppObject *)pIVar8,MethodInfo_Void_Add);
      return;
    }
  }
  pIVar4 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae71e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71e = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454b86;
label_04454b33:
    pIVar8 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454b33;
label_04454b86:
    il2cpp_runtime_helper_02337ed0();
    pIVar8 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar8 != (Il2CppClass *)0x0) {
    pIVar9 = pIVar4;
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar8,
                       (Il2CppObject *)pIVar4,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return;
    }
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar8 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar8 != (Il2CppClass *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar8,(Il2CppObject *)pIVar4,
                 MethodInfo_String_get_Item);
      return;
    }
  }
  pIVar4 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae722 = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454ca2;
label_04454c43:
    pIVar8 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454c43;
label_04454ca2:
    il2cpp_runtime_helper_02337ed0();
    pIVar8 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  if (pIVar8 != (Il2CppClass *)0x0) {
    pIVar9 = pIVar4;
    bVar3 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pIVar8,(Il2CppObject *)pIVar4,MethodInfo_Boolean_Contains
                      );
    if ((char)bVar3 == '\0') {
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar4 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
      if (pIVar4 == (Il2CppClass *)0x0) goto label_04454d23;
      pIVar4 = (Il2CppClass *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pIVar4,0,MethodInfo_String_get_Item);
    }
    System_String__Concat_3ae5ba0((System_String_o *)pIVar4,"Icon",(MethodInfo *)0x0);
    return;
  }
label_04454d23:
  pSVar6 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = UI_UIManager__GetLocale(pSVar6,(System_String_o *)pIVar9,item,"","",in_R9);
  System_String__Format_3af7980(pSVar6,args,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$SetMenu
// il2cpp: void UI_UIManager__SetMenu (int32_t sceneName, const MethodInfo* method);
// 0x4454340

void UI_UIManager__SetMenu(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  UnityEngine_Component_o *__this;
  long *plVar4;
  UI_BaseMenu_o *__this_00;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_01;
  bool_conflict bVar5;
  uint uVar6;
  Il2CppObject *pIVar7;
  undefined8 *puVar8;
  Il2CppObject *pIVar9;
  Il2CppClass *pIVar10;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  System_Object_array *pSVar11;
  System_String_o *pSVar12;
  Il2CppClass *pIVar13;
  UnityEngine_AudioSource_o *__this_03;
  System_Object_array *args;
  System_String_o *item;
  UnityEngine_Object_o *unaff_RBX;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_04;
  undefined8 *unaff_RBP;
  Il2CppClass *pIVar14;
  Il2CppClass *pIVar15;
  undefined4 uVar16;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar17;
  MethodInfo *in_R9;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *unaff_R12;
  uint uVar18;
  undefined1 auStack_88 [64];
  
  if (g_data_057ae721 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae721 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto label_0445470d;
  pvVar3 = *(void **)(lVar2 + 0x18);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar9[1].monitor = pvVar3;
  il2cpp_runtime_helper_022b4080(&pIVar9[1].monitor);
  unaff_RBX = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  unaff_R12 = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this == (UnityEngine_Component_o *)0x0) goto label_0445470d;
    unaff_RBX = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(unaff_RBX,(MethodInfo *)0x0);
  }
  switch(sceneName) {
  case 1:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar10 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar10 == (Il2CppClass *)0x0) goto label_0445470d;
    System_Collections_Generic_Dictionary_object__object___Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)pIVar10,MethodInfo_Void_Clear);
    pIVar7 = UI_ElementFactory__CreateDefaultMenu_object_(MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    pIVar9 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar9[2].monitor = pIVar7;
    il2cpp_runtime_helper_022b4080(&pIVar9[2].monitor);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GameManagers_ChatManager__Reset((MethodInfo *)0x0);
  default:
    iVar1 = TypeInfo_UIManager->m_Items[8].fields.next;
    goto joined_r0x044546fa;
  case 2:
    puVar8 = &MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu;
    break;
  case 3:
    puVar8 = &MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu;
    break;
  case 4:
    if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') {
      puVar8 = &MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit;
    }
    else {
      puVar8 = &MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit;
    }
    break;
  case 5:
    puVar8 = &MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu;
    break;
  case 6:
    puVar8 = &MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu;
    break;
  case 7:
    puVar8 = &MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu;
  }
  pIVar9 = UI_ElementFactory__CreateDefaultMenu_object_((MethodInfo_24FB0E0 *)*puVar8);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar7 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar7[2].monitor = pIVar9;
  il2cpp_runtime_helper_022b4080(&pIVar7[2].monitor);
  iVar1 = TypeInfo_UIManager->m_Items[8].fields.next;
joined_r0x044546fa:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  unaff_RBX = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Inequality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_0445462b:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined1 *)&TypeInfo_UIManager->m_Items[6].fields.key[5].monitor = 1;
    return;
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  plVar4 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x178))(plVar4,*(undefined8 *)(*plVar4 + 0x180));
    __this_00 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this_00 != (UI_BaseMenu_o *)0x0) {
      UI_BaseMenu__ApplyScale(__this_00,sceneName,(MethodInfo *)0x0);
      goto label_0445462b;
    }
  }
label_0445470d:
  auStack_88._40_8_ = il2cpp_runtime_helper_022b2c90();
  auStack_88._48_8_ = unaff_RBX;
  auStack_88._56_8_ = unaff_R12;
  if (g_data_057ae720 == '\0') {
    auStack_88._32_4_ = 0x4454740;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStack_88._32_4_ = 0x445474c;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
    auStack_88._32_4_ = 0x4454758;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AudioSource);
    auStack_88._32_4_ = 0x4454764;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    auStack_88._32_4_ = 0x4454770;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    auStack_88._32_4_ = 0x445477c;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    auStack_88._32_4_ = 0x4454788;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    auStack_88._32_4_ = 0x4454794;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    auStack_88._32_4_ = 0x44547a0;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MainMenuSounds");
    g_data_057ae720 = '\x01';
  }
  auStack_88._32_4_ = 0x44547b6;
  auStack_88._36_4_ = 0;
  pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AudioSource);
  auStack_88._32_4_ = 0x44547cb;
  auStack_88._36_4_ = 0;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar10,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    auStack_88._32_4_ = 0x44547e4;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar9 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar9[6].klass = pIVar10;
  auStack_88._32_4_ = 0x44547ff;
  auStack_88._36_4_ = 0;
  il2cpp_runtime_helper_022b4080(pIVar9 + 6,pIVar10);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    auStack_88._32_4_ = 0x4454817;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              **(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    auStack_88._32_4_ = 0x445483c;
    auStack_88._36_4_ = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  auStack_88._32_4_ = 0x445485a;
  auStack_88._36_4_ = 0;
  args = MethodInfo_GameObject_InstantiateAsset_GameObject;
  pSVar17 = __this_04;
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)__this_04,"Prefabs/MainMenu/MainMenuSounds",0,(MethodInfo_25BC8B0 *)MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_02 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    args = (System_Object_array *)&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource;
    auStack_88._32_4_ = 0x4454875;
    auStack_88._36_4_ = 0;
    pSVar11 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)__this_02,MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    pSVar17 = __this_02;
    if (pSVar11 != (System_Object_array *)0x0) {
      uVar6 = (uint)pSVar11->max_length;
      if (0 < (int)uVar6) {
        uVar18 = 0;
        unaff_RBP = &MethodInfo_Void_Add;
        do {
          uVar16 = SUB84(__this_02,0);
          if (uVar6 <= uVar18) goto label_04454915;
          __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      pSVar11->m_Items[(int)uVar18];
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            auStack_88._32_4_ = 0x44548bf;
            auStack_88._36_4_ = 0;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = TypeInfo_UIManager;
          if (__this_01 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
          auStack_88._32_4_ = 0x44548dd;
          auStack_88._36_4_ = 0;
          pSVar17 = __this_01;
          pSVar12 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
          if (__this_04 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          auStack_88._32_4_ = 0x44548f4;
          auStack_88._36_4_ = 0;
          args = MethodInfo_Void_Add;
          __this_02 = __this_04;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,
                     (Il2CppObject *)pSVar12,(Il2CppObject *)__this_01,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
          uVar18 = uVar18 + 1;
          uVar6 = (uint)pSVar11->max_length;
        } while ((int)uVar18 < (int)uVar6);
      }
      return;
    }
  }
label_04454910:
  uVar16 = SUB84(pSVar17,0);
  auStack_88._32_4_ = 0x4454915;
  auStack_88._36_4_ = 0;
  il2cpp_runtime_helper_022b2c90();
label_04454915:
  auStack_88._32_4_ = 0x445491a;
  auStack_88._36_4_ = 0;
  il2cpp_runtime_helper_022b2ca0();
  pIVar10 = (Il2CppClass *)auStack_88;
  auStack_88._24_8_ = __this_04;
  auStack_88._32_8_ = unaff_RBP;
  if (g_data_057ae71c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UISound);
    g_data_057ae71c = '\x01';
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar15 = TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
  auStack_88._0_8_ = TypeInfo_UISound;
  auStack_88._8_8_ = (void *)0xffffffffffffffff;
  pIVar14 = (Il2CppClass *)0x0;
  auStack_88._16_4_ = uVar16;
  pIVar13 = (Il2CppClass *)System_Enum__ToString((System_Enum_o *)auStack_88,(MethodInfo *)0x0);
  if (pIVar15 != (Il2CppClass *)0x0) {
    args = (System_Object_array *)&MethodInfo_AudioSource_get_Item;
    __this_03 = (UnityEngine_AudioSource_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pIVar15,
                           (Il2CppObject *)pIVar13,MethodInfo_AudioSource_get_Item);
    pIVar14 = pIVar13;
    pIVar10 = pIVar15;
    if (__this_03 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play_4daa2c0(__this_03,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar15 = pIVar14;
  if (g_data_057ae71d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71d = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454a0b;
label_04454a6b:
    il2cpp_runtime_helper_02337ed0();
    pIVar13 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454a6b;
label_04454a0b:
    pIVar13 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar13 != (Il2CppClass *)0x0) {
    pIVar15 = pIVar10;
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,
                       (Il2CppObject *)pIVar10,MethodInfo_Boolean_ContainsKey);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar13 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar13 != (Il2CppClass *)0x0) {
      if ((char)bVar5 == '\0') {
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,(Il2CppObject *)pIVar10,
                   (Il2CppObject *)pIVar14,MethodInfo_Void_Add);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar13,(Il2CppObject *)pIVar10,
                 (Il2CppObject *)pIVar14,MethodInfo_Void_set_Item);
      return;
    }
  }
  pIVar10 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae71e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71e = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454b33;
label_04454b86:
    il2cpp_runtime_helper_02337ed0();
    pIVar14 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454b86;
label_04454b33:
    pIVar14 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar14 != (Il2CppClass *)0x0) {
    pIVar15 = pIVar10;
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pIVar14,
                       (Il2CppObject *)pIVar10,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
      return;
    }
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar14 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar14 != (Il2CppClass *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar14,(Il2CppObject *)pIVar10,
                 MethodInfo_String_get_Item);
      return;
    }
  }
  pIVar10 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae722 = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454c43;
label_04454ca2:
    il2cpp_runtime_helper_02337ed0();
    pIVar14 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454ca2;
label_04454c43:
    pIVar14 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  if (pIVar14 != (Il2CppClass *)0x0) {
    pIVar15 = pIVar10;
    bVar5 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pIVar14,(Il2CppObject *)pIVar10,
                       MethodInfo_Boolean_Contains);
    if ((char)bVar5 == '\0') {
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar10 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
      if (pIVar10 == (Il2CppClass *)0x0) goto label_04454d23;
      pIVar10 = (Il2CppClass *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pIVar10,0,MethodInfo_String_get_Item);
    }
    System_String__Concat_3ae5ba0((System_String_o *)pIVar10,"Icon",(MethodInfo *)0x0);
    return;
  }
label_04454d23:
  pSVar12 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = UI_UIManager__GetLocale(pSVar12,(System_String_o *)pIVar15,item,"","",in_R9);
  System_String__Format_3af7980(pSVar12,args,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$GetProfileIcon
// il2cpp: System_String_o* UI_UIManager__GetProfileIcon (System_String_o* icon, const MethodInfo* method);
// 0x4454c20

System_String_o * UI_UIManager__GetProfileIcon(System_String_o *icon,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_Object_array *in_RCX;
  System_String_o *item;
  MethodInfo *in_R9;
  
  if (g_data_057ae722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae722 = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04454ca2;
label_04454c43:
    pSVar1 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04454c43;
label_04454ca2:
    il2cpp_runtime_helper_02337ed0();
    pSVar1 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
  }
  if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
    method = (MethodInfo *)icon;
    bVar2 = System_Collections_Generic_List_object___Contains(pSVar1,(Il2CppObject *)icon,MethodInfo_Boolean_Contains);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar1 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x40);
      if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) goto label_04454d23;
      icon = (System_String_o *)System_Collections_Generic_List_object___get_Item(pSVar1,0,MethodInfo_String_get_Item);
    }
    pSVar3 = System_String__Concat_3ae5ba0(icon,"Icon",(MethodInfo *)0x0);
    return pSVar3;
  }
label_04454d23:
  pSVar3 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = UI_UIManager__GetLocale(pSVar3,(System_String_o *)method,item,"","",in_R9);
  pSVar3 = System_String__Format_3af7980(pSVar3,in_RCX,(MethodInfo *)0x0);
  return pSVar3;
}


// UI.UIManager$$GetLocaleFormatted
// il2cpp: System_String_o* UI_UIManager__GetLocaleFormatted (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_Object_array* args, const MethodInfo* method);
// 0x4454d30

System_String_o *
UI_UIManager__GetLocaleFormatted
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale(category,subCategory,item,"","",in_R9);
  pSVar1 = System_String__Format_3af7980(pSVar1,args,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.UIManager$$GetLocale
// il2cpp: System_String_o* UI_UIManager__GetLocale (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* forcedLanguage, System_String_o* defaultValue, const MethodInfo* method);
// 0x4441b80

System_String_o *
UI_UIManager__GetLocale
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_String_o *forcedLanguage,System_String_o *defaultValue,MethodInfo *method)

{
  int32_t val2;
  long lVar1;
  bool_conflict bVar2;
  uint uVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  long *plVar7;
  System_String_o *pSVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  System_String_array *values;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *extraout_RAX;
  System_String_o *subCategory_00;
  int iVar13;
  long *plVar14;
  MethodInfo *method_00;
  MethodInfo *pMVar15;
  System_String_array *__this;
  Il2CppObject *unaff_R12;
  System_String_o *pSVar16;
  float cooldown;
  float __this_00;
  float in_XMM1_Da;
  float in_XMM2_Da;
  float in_XMM3_Da;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  System_String_o *pSStack_78;
  Il2CppObject *pIStack_70;
  System_String_o *pSStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_String_o *local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  local_48 = category;
  local_40 = subCategory;
  pSVar8 = forcedLanguage;
  local_38 = defaultValue;
  while( true ) {
    if (g_data_057ae724 == '\0') {
      pSStack_50 = (System_String_o *)0x4441bf0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      pSStack_50 = (System_String_o *)0x4441bfc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_get_Item);
      pSStack_50 = (System_String_o *)0x4441c08;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      pSStack_50 = (System_String_o *)0x4441c14;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      pSStack_50 = (System_String_o *)0x4441c20;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      pSStack_50 = (System_String_o *)0x4441c2c;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
      pSStack_50 = (System_String_o *)0x4441c34;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      pSStack_50 = (System_String_o *)0x4441c40;
      il2cpp_runtime_helper_023445d0(&"{0} locale error.");
      pSStack_50 = (System_String_o *)0x4441c48;
      il2cpp_runtime_helper_023445d0(&"English");
      pSStack_50 = (System_String_o *)0x4441c54;
      il2cpp_runtime_helper_023445d0(&".");
      g_data_057ae724 = '\x01';
    }
    plVar14 = &TypeInfo_UIManager;
    pSVar5 = (System_String_o *)&g_data_057b9b70;
    pSVar11 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pSStack_50 = (System_String_o *)0x4441c76;
    bVar2 = System_String__op_Inequality(pSVar8,pSVar11,(MethodInfo *)0x0);
    iVar13 = (int)defaultValue;
    pSVar12 = (System_String_o *)&"English";
    pSVar16 = item;
    if ((char)bVar2 == '\0') break;
label_04441ca9:
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      pSStack_50 = (System_String_o *)0x4441cbb;
      il2cpp_runtime_helper_02337ed0();
    }
    iVar13 = (int)defaultValue;
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04441fc1;
    pSStack_50 = (System_String_o *)0x4441ce4;
    pSVar11 = pSVar8;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_UIManager + 0xb8),(Il2CppObject *)pSVar8,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      unaff_R12 = (Il2CppObject *)0x0;
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        pSStack_50 = (System_String_o *)0x4441cfa;
        il2cpp_runtime_helper_02337ed0();
      }
      iVar13 = (int)defaultValue;
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04441fc1;
      pSStack_50 = (System_String_o *)0x4441d26;
      unaff_R12 = System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_UIManager + 0xb8),(Il2CppObject *)pSVar8,MethodInfo_JSONObject_get_Item);
    }
    pSStack_50 = (System_String_o *)0x4441d54;
    bVar2 = System_String__op_Inequality
                      (item,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    pSVar5 = local_40;
    if ((char)bVar2 != '\0') {
      forcedLanguage = (System_String_o *)0x0;
      pSStack_50 = (System_String_o *)0x4441d76;
      pSVar5 = System_String__Concat_3af7150(local_40,".",item,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_50 = (System_String_o *)0x4441d91;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = (System_String_o *)0x0;
    pSStack_50 = (System_String_o *)0x4441d9d;
    bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)unaff_R12,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    iVar13 = (int)defaultValue;
    if ((char)bVar2 == '\0') {
      plVar14 = (long *)item;
      pSVar16 = (System_String_o *)&"English";
      if (unaff_R12 != (Il2CppObject *)0x0) {
        pSStack_50 = (System_String_o *)0x4441dc9;
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                 (*unaff_R12->klass->vtable[7].methodPtr)
                           (unaff_R12,local_48,unaff_R12->klass->vtable[7].method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_50 = (System_String_o *)0x4441de4;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_50 = (System_String_o *)0x4441df0;
        bVar2 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') goto label_04441e60;
        pSStack_50 = (System_String_o *)0x4441e0f;
        pSVar11 = local_48;
        plVar7 = (long *)(*unaff_R12->klass->vtable[7].methodPtr)
                                   (unaff_R12,local_48,unaff_R12->klass->vtable[7].method);
        iVar13 = (int)defaultValue;
        pSVar12 = item;
        if (plVar7 != (long *)0x0) {
          forcedLanguage = (System_String_o *)*plVar7;
          pSStack_50 = (System_String_o *)0x4441e2e;
          pSVar6 = (SimpleJSONFixed_JSONNode_o *)
                   (*(code *)forcedLanguage[0x11].fields)(plVar7,pSVar5,forcedLanguage[0x12].klass);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pSStack_50 = (System_String_o *)0x4441e49;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar11 = (System_String_o *)0x0;
          pSStack_50 = (System_String_o *)0x4441e55;
          bVar2 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          iVar13 = (int)defaultValue;
          if ((char)bVar2 != '\0') goto label_04441e60;
          plVar14 = &TypeInfo_UIManager;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            pSStack_50 = (System_String_o *)0x4441f03;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
          pSVar16 = (System_String_o *)&"English";
          if (lVar1 != 0) {
            pSStack_50 = (System_String_o *)0x4441f29;
            uVar3 = System_String__op_Equality(pSVar8,*(System_String_o **)(lVar1 + 0x20),(MethodInfo *)0x0);
            pSVar16 = (System_String_o *)(ulong)uVar3;
            pSStack_50 = (System_String_o *)0x4441f44;
            pSVar11 = local_48;
            plVar7 = (long *)(*unaff_R12->klass->vtable[7].methodPtr)
                                       (unaff_R12,local_48,unaff_R12->klass->vtable[7].method);
            if (plVar7 != (long *)0x0) {
              forcedLanguage = (System_String_o *)*plVar7;
              pSStack_50 = (System_String_o *)0x4441f5f;
              pSVar11 = pSVar5;
              plVar7 = (long *)(*(code *)forcedLanguage[0x11].fields)
                                         (plVar7,pSVar5,forcedLanguage[0x12].klass);
              if (plVar7 != (long *)0x0) {
                pSStack_50 = (System_String_o *)0x4441f77;
                pSVar8 = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7);
                if ((char)uVar3 == '\0') {
                  return pSVar8;
                }
                if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                  pSStack_50 = (System_String_o *)0x4441f97;
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar8 = MiscExtensions__ReverseString(pSVar8,(MethodInfo *)0x0);
                return pSVar8;
              }
            }
          }
        }
      }
      goto label_04441fc1;
    }
label_04441e60:
    pSStack_50 = (System_String_o *)0x4441e70;
    bVar2 = System_String__op_Equality(pSVar8,"English",(MethodInfo *)0x0);
    pSVar8 = local_38;
    if ((char)bVar2 != '\0') {
      pSStack_50 = (System_String_o *)0x4441ec0;
      bVar2 = System_String__op_Inequality
                        (local_38,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0)
      ;
      if ((char)bVar2 != '\0') {
        return pSVar8;
      }
      pSVar8 = System_String__Format("{0} locale error.",(Il2CppObject *)pSVar5,(MethodInfo *)0x0);
      return pSVar8;
    }
    pSVar8 = "English";
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      pSStack_50 = (System_String_o *)0x4441e94;
      il2cpp_runtime_helper_02337ed0();
      pSVar8 = "English";
    }
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    pSVar8 = *(System_String_o **)(lVar1 + 0x18);
    goto label_04441ca9;
  }
label_04441fc1:
  pSStack_50 = (System_String_o *)0x4441fc6;
  fStack_84 = (float)il2cpp_runtime_helper_022b2c90();
  pMVar15 = method;
  fStack_88 = in_XMM3_Da;
  fStack_80 = in_XMM1_Da;
  pSStack_78 = pSVar5;
  pIStack_70 = unaff_R12;
  pSStack_68 = pSVar12;
  pSStack_60 = pSVar16;
  pSStack_58 = pSVar8;
  pSStack_50 = (System_String_o *)plVar14;
  if (g_data_057ae6e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"\n");
    il2cpp_runtime_helper_023445d0(&"BombCooldown");
    il2cpp_runtime_helper_023445d0(&"BombRadius");
    il2cpp_runtime_helper_023445d0(&"0.##");
    il2cpp_runtime_helper_023445d0(&"BombSpeed");
    il2cpp_runtime_helper_023445d0(&") (");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"BombRange");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6e0 = '\x01';
  }
  fStack_8c = 0.0;
  fStack_7c = 0.0;
  bVar2 = System_String__op_Equality(forcedLanguage,"BombRadius",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(forcedLanguage,"BombRange",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(forcedLanguage,"BombSpeed",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__op_Equality(forcedLanguage,"BombCooldown",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          fStack_8c = 0.0;
          cooldown = 0.0;
        }
        else {
          cooldown = BombUtil__GetBombCooldown((float)iVar13,fStack_84,fStack_80,in_XMM2_Da,(MethodInfo *)0x0)
          ;
          fStack_8c = BombUtil__GetOldCooldownCost(cooldown,(MethodInfo *)0x0);
        }
      }
      else {
        cooldown = BombUtil__GetBombSpeed((float)iVar13,fStack_84,fStack_80,in_XMM2_Da,(MethodInfo *)0x0);
        fStack_8c = BombUtil__GetOldSpeedCost(cooldown,(MethodInfo *)0x0);
      }
    }
    else {
      cooldown = BombUtil__GetBombRange((float)iVar13,fStack_84,fStack_80,in_XMM2_Da,(MethodInfo *)0x0);
      fStack_8c = BombUtil__GetOldRangeCost(cooldown,(MethodInfo *)0x0);
    }
  }
  else {
    cooldown = BombUtil__GetBombRadius((float)iVar13,fStack_84,fStack_80,in_XMM2_Da,(MethodInfo *)0x0);
    fStack_8c = BombUtil__GetOldRadiusCost(cooldown,(MethodInfo *)0x0);
  }
  fStack_7c = cooldown / fStack_88;
  pMVar9 = (MethodInfo *)System_Single__ToString_3cccfe0(fStack_88,(System_String_o *)&fStack_7c,"0.##")
  ;
  pMVar10 = (MethodInfo *)
            System_Single__ToString_3cccfe0(__this_00,(System_String_o *)&fStack_8c,"0.##");
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = UI_UIManager__GetLocale(pSVar11,subCategory_00,forcedLanguage,"","",pMVar15);
  method_00 = (MethodInfo *)0x6;
  __this = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pMVar15 = "(";
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      __this = (System_String_array *)values->m_Items;
      values->m_Items[0] = (System_String_o *)"(";
      il2cpp_runtime_helper_022b4080();
      method_00 = pMVar15;
      if (1 < (uint)values->max_length) {
        __this = (System_String_array *)(values->m_Items + 1);
        values->m_Items[1] = (System_String_o *)pMVar10;
        il2cpp_runtime_helper_022b4080();
        pMVar15 = ") (";
        method_00 = pMVar10;
        if (2 < (uint)values->max_length) {
          __this = (System_String_array *)(values->m_Items + 2);
          values->m_Items[2] = (System_String_o *)") (";
          il2cpp_runtime_helper_022b4080();
          method_00 = pMVar15;
          if (3 < (uint)values->max_length) {
            __this = (System_String_array *)(values->m_Items + 3);
            values->m_Items[3] = (System_String_o *)pMVar9;
            il2cpp_runtime_helper_022b4080();
            method_00 = pMVar9;
            if (4 < (uint)values->max_length) {
              __this = (System_String_array *)(values->m_Items + 4);
              values->m_Items[4] = (System_String_o *)method;
              il2cpp_runtime_helper_022b4080();
              method_00 = method;
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = ")";
                il2cpp_runtime_helper_022b4080(values->m_Items + 5);
                method_00 = (MethodInfo *)0x0;
                pSVar11 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                __this = values;
                if ((pSVar8 != (System_String_o *)0x0) && (pSVar11 != (System_String_o *)0x0)) {
                  iVar4 = (pSVar8->fields)._stringLength;
                  val2 = (pSVar11->fields)._stringLength;
                  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  iVar4 = System_Math__Max_3cb7c30(iVar4,val2,(MethodInfo *)0x0);
                  iVar13 = iVar4 - (pSVar11->fields)._stringLength;
                  if (iVar13 != 0 && (pSVar11->fields)._stringLength <= iVar4) {
                    pSVar5 = System_String__CreateString_3afdbf0
                                       ((System_String_o *)0x0,0x20,iVar13 / 2,(MethodInfo *)0x0);
                    pSVar12 = System_String__CreateString_3afdbf0
                                        ((System_String_o *)0x0,0x20,iVar13 - iVar13 / 2,(MethodInfo *)0x0);
                    pSVar11 = System_String__Concat_3af7150(pSVar5,pSVar11,pSVar12,(MethodInfo *)0x0);
                  }
                  pSVar8 = System_String__Concat_3af7150(pSVar8,"\n",pSVar11,(MethodInfo *)0x0);
                  return pSVar8;
                }
                goto label_044423fe;
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_044423fe:
  il2cpp_runtime_helper_022b2c90();
  UI_SettingsAbilityPanel__RefreshBombStatLabels((UI_SettingsAbilityPanel_o *)__this,method_00);
  return extraout_RAX;
}


// UI.UIManager$$HasLocale
// il2cpp: bool UI_UIManager__HasLocale (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* forcedLanguage, const MethodInfo* method);
// 0x4454dc0

bool_conflict
UI_UIManager__HasLocale
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_String_o *forcedLanguage,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  long *plVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (g_data_057ae725 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057ae725 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)forcedLanguage;
  bVar2 = System_String__op_Inequality
                    (forcedLanguage,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto label_0445502e;
    forcedLanguage = *(System_String_o **)(lVar1 + 0x18);
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0445502e;
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_UIManager + 0xb8),(Il2CppObject *)forcedLanguage,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar2 == '\0') {
    return 0;
  }
  bVar2 = System_String__op_Inequality
                    (item,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04454f41;
label_04454f06:
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8)
    ;
  }
  else {
    subCategory = System_String__Concat_3af7150(subCategory,".",item,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04454f06;
label_04454f41:
    il2cpp_runtime_helper_02337ed0();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8)
    ;
  }
  if ((__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         (__this,(Il2CppObject *)forcedLanguage,MethodInfo_JSONObject_get_Item),
     pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar3->klass->vtable)._7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.
               methodPtr)(pSVar3,category,
                          (pSVar3->klass->vtable).
                          _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return 0;
    }
    plVar5 = (long *)(*(pSVar3->klass->vtable).
                       _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.methodPtr)
                               (pSVar3,category,
                                (pSVar3->klass->vtable).
                                _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.method);
    __this = pSVar3;
    if (plVar5 != (long *)0x0) {
      pSVar4 = (SimpleJSONFixed_JSONNode_o *)
               (**(code **)(*plVar5 + 0x1a8))(plVar5,subCategory,*(undefined8 *)(*plVar5 + 0x1b0));
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      return bVar2;
    }
  }
label_0445502e:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae728 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Common");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae728 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = UI_UIManager__GetLocaleArray
                     ("Common",(System_String_o *)__this,"","",method);
  return (bool_conflict)pSVar6;
}


// UI.UIManager$$GetLocaleArray
// il2cpp: System_String_array* UI_UIManager__GetLocaleArray (System_String_o* category, System_String_o* subCategory, System_String_o* item, System_String_o* forcedLanguage, const MethodInfo* method);
// 0x44453d0

System_String_array *
UI_UIManager__GetLocaleArray
          (System_String_o *category,System_String_o *subCategory,System_String_o *item,
          System_String_o *forcedLanguage,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  System_String_c *pSVar5;
  System_Object_array *pSVar6;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  bool_conflict bVar7;
  Il2CppObject *a;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  System_String_array *pSVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_List_object__o *__this_02;
  System_String_o *pSVar12;
  System_String_array *extraout_RAX;
  MethodInfo_362C220 *method_00;
  long *unaff_RBP;
  Settings_GraphicsSettings_o *__this_03;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined8 in_stack_ffffffffffffff28;
  Il2CppMethodPointer pIVar13;
  Il2CppMethodPointer pIVar14;
  InvokerMethod pIVar15;
  char *pcVar16;
  Il2CppClass *pIVar17;
  Il2CppType *pIVar18;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *local_48;
  
  if (g_data_057ae726 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"{0} locale error.");
    il2cpp_runtime_helper_023445d0(&"English");
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057ae726 = '\x01';
  }
  bVar7 = System_String__op_Inequality
                    (forcedLanguage,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
      forcedLanguage = *(System_String_o **)(lVar4 + 0x18);
      goto label_04445544;
    }
label_04445ac9:
    il2cpp_runtime_helper_022b2c90();
label_04445ace:
    pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b2fd0(unaff_RBP);
  }
  else {
label_04445544:
    unaff_RBP = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04445ac9;
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)
                       **(undefined8 **)(TypeInfo_UIManager + 0xb8),(Il2CppObject *)forcedLanguage,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar7 == '\0') {
      a = (Il2CppObject *)0x0;
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04445ac9;
      a = System_Collections_Generic_Dictionary_object__object___get_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_UIManager + 0xb8),(Il2CppObject *)forcedLanguage,MethodInfo_JSONObject_get_Item);
    }
    bVar7 = System_String__op_Inequality
                      (item,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    unaff_RBP = (long *)subCategory;
    if ((char)bVar7 != '\0') {
      unaff_RBP = (long *)System_String__Concat_3af7150(subCategory,".",item,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
label_044456e7:
      bVar7 = System_String__op_Equality(forcedLanguage,"English",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = UI_UIManager__GetLocaleArray(category,subCategory,item,"English",method);
        return pSVar10;
      }
      pSVar10 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,1);
      pSVar12 = "{0} locale error.";
      pSVar11 = System_String__Format("{0} locale error.",(Il2CppObject *)unaff_RBP,(MethodInfo *)0x0);
      if (pSVar10 != (System_String_array *)0x0) {
        if ((int)pSVar10->max_length != 0) {
          pSVar10->m_Items[0] = pSVar11;
          il2cpp_runtime_helper_022b4080(pSVar10->m_Items,pSVar11);
          return pSVar10;
        }
        goto label_04445ade;
      }
      goto label_04445ac9;
    }
    if (a == (Il2CppObject *)0x0) goto label_04445ac9;
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*a->klass->vtable[7].methodPtr)(a,category,a->klass->vtable[7].method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') goto label_044456e7;
    plVar9 = (long *)(*a->klass->vtable[7].methodPtr)(a,category,a->klass->vtable[7].method);
    if (plVar9 == (long *)0x0) goto label_04445ac9;
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (**(code **)(*plVar9 + 0x1a8))(plVar9,unaff_RBP,*(undefined8 *)(*plVar9 + 0x1b0));
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') goto label_044456e7;
    __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_System_String);
    plVar9 = (long *)(*a->klass->vtable[7].methodPtr)(a,category,a->klass->vtable[7].method);
    if ((plVar9 == (long *)0x0) ||
       (pSVar12 = (System_String_o *)
                  (**(code **)(*plVar9 + 0x1a8))(plVar9,unaff_RBP,*(undefined8 *)(*plVar9 + 0x1b0)),
       pSVar12 == (System_String_o *)0x0)) goto label_04445ac9;
    bVar2 = (TypeInfo_JSONArray->_2).naturalAligment;
    if ((bVar2 <= (pSVar12->klass->_2).naturalAligment) &&
       ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_JSONArray)) {
      pSVar5 = pSVar12->klass;
      bVar2 = (TypeInfo_JSONArray->_2).naturalAligment;
      if ((bVar2 <= (pSVar5->_2).naturalAligment) &&
         ((pSVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_JSONArray)) {
        (*(code *)pSVar5[1]._1.declaringType)(&local_78,pSVar12,pSVar5[1]._1.parent);
        __this.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
        __this.fields._0_8_ = in_stack_ffffffffffffff28;
        __this.fields.m_Object.fields._8_8_ = local_78;
        __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
        __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_68;
        __this.fields.m_Object.fields._32_8_ = pcStack_60;
        __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)local_58;
        __this.fields.m_Array.fields._8_8_ = pIStack_50;
        __this.fields.m_Array.fields._current = local_48;
        bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this,(MethodInfo *)&stack0xffffffffffffff38);
        if ((char)bVar7 != '\0') {
          pIVar13 = local_78;
          pIVar14 = pIStack_70;
          pIVar15 = local_68;
          pcVar16 = pcStack_60;
          pIVar17 = local_58;
          pIVar18 = pIStack_50;
          pSVar8 = local_48;
          do {
            __this_01.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
            __this_01.fields._0_8_ = in_stack_ffffffffffffff28;
            __this_01.fields.m_Object.fields._8_8_ = pIVar13;
            __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14;
            __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
            __this_01.fields.m_Object.fields._32_8_ = pcVar16;
            __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar17;
            __this_01.fields.m_Array.fields._8_8_ = pIVar18;
            __this_01.fields.m_Array.fields._current = pSVar8;
            aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                  (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            unaff_RBP = (long *)SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(aKeyValue,(MethodInfo *)0x0);
            if ((System_String_o *)unaff_RBP != (System_String_o *)0x0) {
              bVar2 = (TypeInfo_JSONString->_2).naturalAligment;
              if (((((System_String_o *)unaff_RBP)->klass->_2).naturalAligment < bVar2) ||
                 ((((System_String_o *)unaff_RBP)->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONString)
                 ) goto label_04445ace;
            }
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
            if ((lVar4 == 0) ||
               (bVar7 = System_String__op_Equality
                                  (forcedLanguage,*(System_String_o **)(lVar4 + 0x20),(MethodInfo *)0x0),
               (System_String_o *)unaff_RBP == (System_String_o *)0x0)) goto label_04445ac9;
            unaff_RBP = (long *)(*(((System_String_o *)unaff_RBP)->klass->vtable)._9_GetTypeCode.methodPtr)
                                          (unaff_RBP);
            lVar4 = MethodInfo_Void_Add;
            if ((char)bVar7 == '\0') {
              if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_04445ac9;
              piVar1 = &(__this_02->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (__this_02->fields)._items;
              if (pSVar6 == (System_Object_array *)0x0) goto label_04445ac9;
              uVar3 = (__this_02->fields)._size;
              if ((uint)pSVar6->max_length <= uVar3) {
                method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
                goto label_044458d5;
              }
              (__this_02->fields)._size = uVar3 + 1;
              pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)unaff_RBP;
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar3,unaff_RBP);
            }
            else {
              if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar12 = MiscExtensions__ReverseString((System_String_o *)unaff_RBP,(MethodInfo *)0x0);
              lVar4 = MethodInfo_Void_Add;
              if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_04445ac9;
              piVar1 = &(__this_02->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (__this_02->fields)._items;
              if (pSVar6 == (System_Object_array *)0x0) goto label_04445ac9;
              uVar3 = (__this_02->fields)._size;
              if (uVar3 < (uint)pSVar6->max_length) {
                (__this_02->fields)._size = uVar3 + 1;
                pSVar6->m_Items[(int)uVar3] = (Il2CppObject *)pSVar12;
                il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar3,pSVar12);
              }
              else {
                method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
                unaff_RBP = (long *)pSVar12;
label_044458d5:
                System_Collections_Generic_List_object___AddWithResize
                          (__this_02,(Il2CppObject *)unaff_RBP,method_00);
              }
            }
            __this_00.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)category;
            __this_00.fields._0_8_ = in_stack_ffffffffffffff28;
            __this_00.fields.m_Object.fields._8_8_ = pIVar13;
            __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar14;
            __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
            __this_00.fields.m_Object.fields._32_8_ = pcVar16;
            __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar17;
            __this_00.fields.m_Array.fields._8_8_ = pIVar18;
            __this_00.fields.m_Array.fields._current = pSVar8;
            bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
          } while ((char)bVar7 != '\0');
label_04445a9f:
          pSVar10 = (System_String_array *)
                    System_Collections_Generic_List_object___ToArray(__this_02,MethodInfo_String_ToArray);
          return pSVar10;
        }
        if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) goto label_04445a9f;
        goto label_04445ac9;
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
label_04445ade:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae6e7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    g_data_057ae6e7 = '\x01';
  }
  __this_03 = *(Settings_GraphicsSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (__this_03 != (Settings_GraphicsSettings_o *)0x0) {
    Settings_GraphicsSettings__OnSelectPreset(__this_03,(MethodInfo *)0x0);
    pSVar10 = (System_String_array *)
              (*(pSVar12->klass->vtable)._23_System_IConvertible_ToDateTime.methodPtr)
                        (pSVar12,(pSVar12->klass->vtable)._23_System_IConvertible_ToDateTime.method);
    return pSVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this_03,(MethodInfo *)0x0);
  return extraout_RAX;
}


// UI.UIManager$$GetLocaleCommon
// il2cpp: System_String_o* UI_UIManager__GetLocaleCommon (System_String_o* item, const MethodInfo* method);
// 0x443efc0

System_String_o * UI_UIManager__GetLocaleCommon(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_R9;
  
  if (g_data_057ae727 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Common");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae727 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale("Common",item,"","","",in_R9);
  return pSVar1;
}


// UI.UIManager$$GetLocaleCommonArray
// il2cpp: System_String_array* UI_UIManager__GetLocaleCommonArray (System_String_o* item, const MethodInfo* method);
// 0x4455040

System_String_array * UI_UIManager__GetLocaleCommonArray(System_String_o *item,MethodInfo *method)

{
  System_String_array *pSVar1;
  MethodInfo *in_R8;
  
  if (g_data_057ae728 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Common");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae728 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleArray("Common",item,"","",in_R8);
  return pSVar1;
}


// UI.UIManager$$GetLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetLocaleCategoryStrings (System_String_o* pattern, const MethodInfo* method);
// 0x44550b0

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetLocaleCategoryStrings(System_String_o *pattern,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  System_String_o **ppSVar4;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  MethodInfo *pMVar13;
  System_String_array *pSVar14;
  System_String_o *pSVar15;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  System_String_o *pSVar16;
  System_String_o *s;
  undefined8 uVar17;
  System_Exception_o *__this_05;
  undefined8 *puVar18;
  ulong uVar19;
  System_String_o *unaff_RBX;
  undefined8 unaff_RBP;
  System_String_o **s_00;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  System_String_o **unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined8 in_stack_fffffffffffffec8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar22;
  Il2CppMethodPointer in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffef8;
  InvokerMethod in_stack_ffffffffffffff00;
  Il2CppObject *in_stack_ffffffffffffff08;
  Il2CppClass *local_f0;
  Il2CppType *pIStack_e8;
  System_Collections_Generic_List_T__o *local_e0;
  _union_13 _Stack_d8;
  _union_14 local_d0;
  undefined1 local_c8 [80];
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  s_00 = (System_String_o **)pattern;
  if (g_data_057ae729 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    s_00 = &"internal://";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae729 = '\x01';
  }
  ppSVar4 = unaff_R14;
  if (pattern == (System_String_o *)0x0) {
label_0445515f:
    unaff_R14 = ppSVar4;
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = pattern;
    register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffe8;
UI_UIManager__GetInternalLocaleCategoryStrings:
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(System_String_o ***)((long)register0x00000020 + -0x18) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_R12;
    *(System_String_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    if (g_data_057ae72a == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445519d;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Simple);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44551a9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44551b5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44551c1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44551cd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44551d9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44551e5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_string);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44551f1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44551fd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455209;
      il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONObject);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455215;
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455221;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_get_Value);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445522d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455239;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae72a = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x128) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x120) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x138) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x130) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x118) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x98) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x90) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xa8) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xb0) = 0;
    *(undefined8 *)((long)register0x00000020 + -200) = 0;
    *(undefined8 *)((long)register0x00000020 + -0xc0) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x88) = 0;
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44552bd;
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_string);
    *(System_Collections_Generic_Dictionary_object__object__o **)((long)register0x00000020 + -0x148) = pSVar7;
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44552d3;
    System_Collections_Generic_Dictionary_object__object____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44552ec;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8)
    ;
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_044557c3:
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44557c8;
      auVar21 = il2cpp_runtime_helper_022b2c90();
      if (auVar21._8_4_ == 1) {
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455ae0;
        plVar11 = (long *)__cxa_begin_catch(auVar21._0_8_);
        lVar12 = *plVar11;
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455ae8;
        __cxa_end_catch();
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455afc;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                   *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                    ((long)register0x00000020 + -0x148),
                   (MethodInfo_3251280 *)((long)register0x00000020 + -0x138));
        if (lVar12 == 0) {
          return *(System_Collections_Generic_Dictionary_string__Dictionary_string__string___o **)
                  ((long)register0x00000020 + -0x148);
        }
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455b11;
        il2cpp_runtime_helper_022fefe0(lVar12);
      }
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455b2c;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                 *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                  ((long)register0x00000020 + -0x148),
                 (MethodInfo_3251280 *)((long)register0x00000020 + -0x138));
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455b39;
      _Unwind_Resume(auVar21._0_8_);
    }
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455317;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
               ((long)register0x00000020 + -0x110),pSVar7,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Simple);
    *(undefined8 *)((long)register0x00000020 + -0x118) = *(undefined8 *)((long)register0x00000020 + -0xf0);
    *(undefined8 *)((long)register0x00000020 + -0x128) = *(undefined8 *)((long)register0x00000020 + -0x100);
    *(undefined8 *)((long)register0x00000020 + -0x120) = *(undefined8 *)((long)register0x00000020 + -0xf8);
    *(undefined8 *)((long)register0x00000020 + -0x138) = *(undefined8 *)((long)register0x00000020 + -0x110);
    *(undefined8 *)((long)register0x00000020 + -0x130) = *(undefined8 *)((long)register0x00000020 + -0x108);
    pMVar13 = (MethodInfo *)((long)register0x00000020 + -0x78);
label_04455350:
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445535c;
    bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                       *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                        ((long)register0x00000020 + -0x148),
                       (MethodInfo_3251160 *)((long)register0x00000020 + -0x138));
    if ((char)bVar6 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44556cc;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o)
                 *(System_Collections_Generic_Dictionary_Enumerator_object__object__Fields *)
                  ((long)register0x00000020 + -0x148),
                 (MethodInfo_3251280 *)((long)register0x00000020 + -0x138));
      return *(System_Collections_Generic_Dictionary_string__Dictionary_string__string___o **)
              ((long)register0x00000020 + -0x148);
    }
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455376;
    auVar20 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)((long)register0x00000020 + -0x138),MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONObject);
    plVar11 = auVar20._8_8_;
    *(long *)((long)register0x00000020 + -0x140) = auVar20._0_8_;
    if (plVar11 != (long *)0x0) goto code_r0x04455387;
    goto label_04455779;
  }
  s_00 = (System_String_o **)pattern;
  bVar6 = System_String__StartsWith(pattern,"internal://",(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    ppSVar4 = &"internal://";
    if ("internal://" != (System_String_o *)0x0) {
      s_00 = (System_String_o **)
             System_String__Substring(pattern,("internal://"->fields)._stringLength,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      goto UI_UIManager__GetInternalLocaleCategoryStrings;
    }
    goto label_0445515f;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae72b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"*.json");
    g_data_057ae72b = '\x01';
  }
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (void *)0x0;
  local_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  local_c8._32_8_ = (Il2CppClass *)0x0;
  local_c8._40_8_ = (Il2CppType *)0x0;
  local_c8._16_8_ = (InvokerMethod)0x0;
  local_c8._24_8_ = (Il2CppObject *)0x0;
  local_c8._0_8_ = (Il2CppMethodPointer)0x0;
  local_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8._64_8_ = (void *)0x0;
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)
            System_String__Concat_3af7150
                      (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x88),"/",pattern,
                       (MethodInfo *)0x0);
  bVar6 = System_IO_Directory__Exists((System_String_o *)pMVar13,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') goto label_0445646a;
  pSVar14 = System_IO_Directory__GetFiles((System_String_o *)pMVar13,"*.json",(MethodInfo *)0x0);
  if (pSVar14 != (System_String_array *)0x0) {
    if (pSVar14->max_length == 0) goto label_0445646a;
    if ((int)pSVar14->max_length < 1) {
      return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)pSVar7;
    }
    uVar19 = 0;
    pMVar13 = (MethodInfo *)&local_78;
    pSVar22 = pSVar7;
    if ((pSVar14->max_length & 0xffffffff) != 0) {
      do {
        pSVar9 = pSVar14->m_Items[uVar19];
        pSVar15 = System_IO_File__ReadAllText(pSVar9,(MethodInfo *)0x0);
        pSVar8 = SimpleJSONFixed_JSON__Parse(pSVar15,(MethodInfo *)0x0);
        if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04456465;
        }
        bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
        if (((pSVar8->klass->_2).naturalAligment < bVar1) ||
           ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_JSONObject)) {
          il2cpp_runtime_helper_022b2fd0(pSVar8);
          break;
        }
        cVar5 = (*(pSVar8->klass->vtable)._28_HasKey.methodPtr)
                          (pSVar8,"Name",(pSVar8->klass->vtable)._28_HasKey.method);
        if (cVar5 != '\0') {
          plVar11 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar8,"Name",(pSVar8->klass->vtable)._7_get_Item.method);
          if (plVar11 == (long *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04456465;
          }
          pSVar15 = (System_String_o *)
                    (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
          __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
          System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_System_String);
          SimpleJSONFixed_JSONNode__get_Keys
                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,pSVar8,
                     (MethodInfo *)0x0);
          local_c8._64_8_ = local_d0;
          local_c8._48_8_ = local_e0;
          local_c8._56_8_ = _Stack_d8;
          local_c8._32_8_ = local_f0;
          local_c8._40_8_ = pIStack_e8;
          __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar22;
          __this.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
          __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar14;
          __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar9;
          __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)uVar19;
          __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef0;
          __this.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
          __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff00;
          __this.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08;
          local_c8._0_8_ = in_stack_fffffffffffffef0;
          local_c8._8_8_ = in_stack_fffffffffffffef8;
          local_c8._16_8_ = in_stack_ffffffffffffff00;
          local_c8._24_8_ = in_stack_ffffffffffffff08;
          SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this,
                     (MethodInfo *)local_c8);
          local_38 = local_d0;
          local_48 = local_e0;
          _Stack_40 = _Stack_d8;
          local_58 = local_f0;
          pIStack_50 = pIStack_e8;
          local_78 = in_stack_fffffffffffffef0;
          pSStack_70 = in_stack_fffffffffffffef8;
          local_68 = in_stack_ffffffffffffff00;
          pIStack_60 = in_stack_ffffffffffffff08;
          if (__this_04 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            while (__this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                        (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar22,
                  __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8,
                  __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar14,
                  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                       (Il2CppObject *)pSVar9,
                  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                       (Il2CppObject *)uVar19,
                  __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef0,
                  __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8,
                  __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff00,
                  __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
                       (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08,
                  bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_00,pMVar13),
                  (char)bVar6 != '\0') {
              __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar22;
              __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
              __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar14;
              __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                   (Il2CppObject *)pSVar9;
              __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                   (Il2CppObject *)uVar19;
              __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef0;
              __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
              __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff00;
              __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
                   (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08;
              pSVar16 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_01,pMVar13);
              bVar6 = System_String__op_Equality(pSVar16,"Name",(MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                plVar11 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                            (pSVar8,pSVar16,(pSVar8->klass->vtable)._7_get_Item.method);
                if (plVar11 == (long *)0x0) goto label_04456197;
                cVar5 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
                if (cVar5 != '\0') {
                  plVar11 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                              (pSVar8,pSVar16,(pSVar8->klass->vtable)._7_get_Item.method);
                  if (plVar11 == (long *)0x0) goto label_044561a1;
                  pSVar9 = (System_String_o *)
                           (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar12 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
                  if (lVar12 == 0) goto label_044561ab;
                  bVar6 = System_String__op_Equality
                                    (pSVar15,*(System_String_o **)(lVar12 + 0x20),(MethodInfo *)0x0);
                  if ((char)bVar6 != '\0') {
                    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    MiscExtensions__ReverseString(pSVar9,(MethodInfo *)0x0);
                  }
                  il2cpp_runtime_helper_022b2c90();
                  goto label_04456465;
                }
              }
            }
          }
          else {
            while (__this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                        (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar22,
                  __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8,
                  __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar14,
                  __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                       (Il2CppObject *)pSVar9,
                  __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                       (Il2CppObject *)uVar19,
                  __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef0,
                  __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8,
                  __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff00,
                  __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
                       (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08,
                  bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_02,pMVar13),
                  (char)bVar6 != '\0') {
              __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar22;
              __this_03.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
              __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar14;
              __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                   (Il2CppObject *)pSVar9;
              __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                   (Il2CppObject *)uVar19;
              __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef0;
              __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
              __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff00;
              __this_03.fields.m_Enumerator.fields.m_Array.fields._current =
                   (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08;
              pSVar16 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_03,pMVar13);
              bVar6 = System_String__op_Equality(pSVar16,"Name",(MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                plVar11 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                            (pSVar8,pSVar16,(pSVar8->klass->vtable)._7_get_Item.method);
                if (plVar11 == (long *)0x0) goto label_04456197;
                cVar5 = (**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210));
                if (cVar5 != '\0') {
                  plVar11 = (long *)(*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                                              (pSVar8,pSVar16,(pSVar8->klass->vtable)._7_get_Item.method);
                  if (plVar11 == (long *)0x0) goto label_044561a1;
                  s = (System_String_o *)
                      (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
                  pSVar7 = pSVar22;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pSVar7 = pSVar22;
                  }
                  lVar12 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
                  if (lVar12 == 0) goto label_044561ab;
                  bVar6 = System_String__op_Equality
                                    (pSVar15,*(System_String_o **)(lVar12 + 0x20),(MethodInfo *)0x0);
                  if ((char)bVar6 != '\0') {
                    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    s = MiscExtensions__ReverseString(s,(MethodInfo *)0x0);
                  }
                  pSVar22 = pSVar7;
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (__this_04,(Il2CppObject *)pSVar16,(Il2CppObject *)s,MethodInfo_Void_set_Item);
                }
              }
            }
          }
          if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04456465;
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar7,(Il2CppObject *)pSVar15,(Il2CppObject *)__this_04,MethodInfo_Void_set_Item);
        }
        uVar19 = uVar19 + 1;
        uVar2 = (uint)pSVar14->max_length;
        if ((long)(int)uVar2 <= (long)uVar19) {
          return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)pSVar7;
        }
      } while (uVar19 < uVar2);
    }
    goto label_04456460;
  }
  goto label_04456465;
code_r0x04455387:
  uVar17 = *(undefined8 *)(*plVar11 + 0x300);
  pcVar3 = *(code **)(*plVar11 + 0x2f8);
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445539d;
  cVar5 = (*pcVar3)(plVar11,s_00,uVar17);
  if (cVar5 == '\0') goto label_04455350;
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44553b0;
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44553c5;
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_System_String);
  uVar17 = *(undefined8 *)(*plVar11 + 0x1b0);
  pcVar3 = *(code **)(*plVar11 + 0x1a8);
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44553db;
  pSVar8 = (SimpleJSONFixed_JSONNode_o *)(*pcVar3)(plVar11,s_00,uVar17);
  pSVar9 = (System_String_o *)((long)register0x00000020 + -0x110);
  if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44553f6;
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)pSVar9,pSVar8,(MethodInfo *)0x0);
    *(undefined8 *)((long)register0x00000020 + -0x88) = *(undefined8 *)((long)register0x00000020 + -0xd0);
    *(undefined8 *)((long)register0x00000020 + -0x98) = *(undefined8 *)((long)register0x00000020 + -0xe0);
    *(undefined8 *)((long)register0x00000020 + -0x90) = *(undefined8 *)((long)register0x00000020 + -0xd8);
    *(undefined8 *)((long)register0x00000020 + -0xa8) = *(undefined8 *)((long)register0x00000020 + -0xf0);
    *(undefined8 *)((long)register0x00000020 + -0xa0) = *(undefined8 *)((long)register0x00000020 + -0xe8);
    *(undefined8 *)((long)register0x00000020 + -0xb8) = *(undefined8 *)((long)register0x00000020 + -0x100);
    *(undefined8 *)((long)register0x00000020 + -0xb0) = *(undefined8 *)((long)register0x00000020 + -0xf8);
    *(undefined8 *)((long)register0x00000020 + -200) = *(undefined8 *)((long)register0x00000020 + -0x110);
    *(undefined8 *)((long)register0x00000020 + -0xc0) = *(undefined8 *)((long)register0x00000020 + -0x108);
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455449;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)pSVar9,
               (SimpleJSONFixed_JSONNode_KeyEnumerator_Fields)
               *(SimpleJSONFixed_JSONNode_KeyEnumerator_Fields *)
                &((SimpleJSONFixed_JSONNode_KeyEnumerator_Fields *)((long)register0x00000020 + -0x148))->
                 m_Enumerator,(MethodInfo *)((long)register0x00000020 + -200));
    *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)((long)register0x00000020 + -0xd0);
    *(undefined8 *)((long)register0x00000020 + -0x48) = *(undefined8 *)((long)register0x00000020 + -0xe0);
    *(undefined8 *)((long)register0x00000020 + -0x40) = *(undefined8 *)((long)register0x00000020 + -0xd8);
    *(undefined8 *)((long)register0x00000020 + -0x58) = *(undefined8 *)((long)register0x00000020 + -0xf0);
    *(undefined8 *)((long)register0x00000020 + -0x50) = *(undefined8 *)((long)register0x00000020 + -0xe8);
    *(undefined8 *)((long)register0x00000020 + -0x68) = *(undefined8 *)((long)register0x00000020 + -0x100);
    *(undefined8 *)((long)register0x00000020 + -0x60) = *(undefined8 *)((long)register0x00000020 + -0xf8);
    *(undefined8 *)((long)register0x00000020 + -0x78) = *(undefined8 *)((long)register0x00000020 + -0x110);
    *(undefined8 *)((long)register0x00000020 + -0x70) = *(undefined8 *)((long)register0x00000020 + -0x108);
    if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      while( true ) {
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44554aa;
        bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_Fields)
                           *(SimpleJSONFixed_JSONNode_KeyEnumerator_Fields *)
                            &((SimpleJSONFixed_JSONNode_KeyEnumerator_Fields *)
                             ((long)register0x00000020 + -0x148))->m_Enumerator,pMVar13);
        if ((char)bVar6 == '\0') break;
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44554bc;
        pSVar9 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_KeyEnumerator_Fields)
                            *(SimpleJSONFixed_JSONNode_KeyEnumerator_Fields *)
                             &((SimpleJSONFixed_JSONNode_KeyEnumerator_Fields *)
                              ((long)register0x00000020 + -0x148))->m_Enumerator,pMVar13);
        uVar17 = *(undefined8 *)(*plVar11 + 0x1b0);
        pcVar3 = *(code **)(*plVar11 + 0x1a8);
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44554d5;
        plVar10 = (long *)(*pcVar3)(plVar11,s_00,uVar17);
        if (plVar10 == (long *)0x0) goto label_044556e7;
        uVar17 = *(undefined8 *)(*plVar10 + 0x1b0);
        pcVar3 = *(code **)(*plVar10 + 0x1a8);
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44554f4;
        plVar10 = (long *)(*pcVar3)(plVar10,pSVar9,uVar17);
        if (plVar10 == (long *)0x0) goto label_044556e2;
        uVar17 = *(undefined8 *)(*plVar10 + 0x210);
        pcVar3 = *(code **)(*plVar10 + 0x208);
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455510;
        cVar5 = (*pcVar3)(plVar10,uVar17);
        if (cVar5 != '\0') goto label_044556ec;
      }
    }
    else {
      while( true ) {
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445554f;
        bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_Fields)
                           *(SimpleJSONFixed_JSONNode_KeyEnumerator_Fields *)
                            &((SimpleJSONFixed_JSONNode_KeyEnumerator_Fields *)
                             ((long)register0x00000020 + -0x148))->m_Enumerator,pMVar13);
        if ((char)bVar6 == '\0') break;
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455561;
        pSVar15 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_Fields)
                             *(SimpleJSONFixed_JSONNode_KeyEnumerator_Fields *)
                              &((SimpleJSONFixed_JSONNode_KeyEnumerator_Fields *)
                               ((long)register0x00000020 + -0x148))->m_Enumerator,pMVar13);
        uVar17 = *(undefined8 *)(*plVar11 + 0x1b0);
        pcVar3 = *(code **)(*plVar11 + 0x1a8);
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445557a;
        plVar10 = (long *)(*pcVar3)(plVar11,s_00,uVar17);
        if (plVar10 == (long *)0x0) goto label_044556e7;
        uVar17 = *(undefined8 *)(*plVar10 + 0x1b0);
        pcVar3 = *(code **)(*plVar10 + 0x1a8);
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455599;
        plVar10 = (long *)(*pcVar3)(plVar10,pSVar15,uVar17);
        if (plVar10 == (long *)0x0) goto label_044556e2;
        uVar17 = *(undefined8 *)(*plVar10 + 0x210);
        pcVar3 = *(code **)(*plVar10 + 0x208);
        *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44555b5;
        cVar5 = (*pcVar3)(plVar10,uVar17);
        if (cVar5 != '\0') {
          uVar17 = *(undefined8 *)(*plVar11 + 0x1b0);
          pcVar3 = *(code **)(*plVar11 + 0x1a8);
          *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44555cf;
          plVar10 = (long *)(*pcVar3)(plVar11,s_00,uVar17);
          if (plVar10 == (long *)0x0) goto label_04455707;
          uVar17 = *(undefined8 *)(*plVar10 + 0x1b0);
          pcVar3 = *(code **)(*plVar10 + 0x1a8);
          *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44555ee;
          plVar10 = (long *)(*pcVar3)(plVar10,pSVar15,uVar17);
          if (plVar10 == (long *)0x0) goto label_04455727;
          uVar17 = *(undefined8 *)(*plVar10 + 0x1d0);
          pcVar3 = *(code **)(*plVar10 + 0x1c8);
          *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445560a;
          pSVar9 = (System_String_o *)(*pcVar3)(plVar10,uVar17);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455625;
            il2cpp_runtime_helper_02337ed0();
          }
          lVar12 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
          if (lVar12 == 0) goto label_04455774;
          pSVar16 = *(System_String_o **)(lVar12 + 0x20);
          *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455653;
          bVar6 = System_String__op_Equality
                            (*(System_String_o **)((long)register0x00000020 + -0x140),pSVar16,
                             (MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455677;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445552a;
            pSVar9 = MiscExtensions__ReverseString(pSVar9,(MethodInfo *)0x0);
          }
          *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455545;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar7,(Il2CppObject *)pSVar15,(Il2CppObject *)pSVar9,MethodInfo_Void_set_Item);
        }
      }
    }
    if (*(System_Collections_Generic_Dictionary_object__object__o **)((long)register0x00000020 + -0x148) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44556a4;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (*(System_Collections_Generic_Dictionary_object__object__o **)
                  ((long)register0x00000020 + -0x148),*(Il2CppObject **)((long)register0x00000020 + -0x140),
                 (Il2CppObject *)pSVar7,MethodInfo_Void_set_Item);
      goto label_04455350;
    }
    goto label_044557be;
  }
label_044557b9:
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44557be;
  il2cpp_runtime_helper_022b2c90();
label_044557be:
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44557c3;
  il2cpp_runtime_helper_022b2c90();
  goto label_044557c3;
label_044556e2:
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44556e7;
  il2cpp_runtime_helper_022b2c90();
label_044556e7:
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44556ec;
  il2cpp_runtime_helper_022b2c90();
label_044556ec:
  uVar17 = *(undefined8 *)(*plVar11 + 0x1b0);
  pcVar3 = *(code **)(*plVar11 + 0x1a8);
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455702;
  plVar11 = (long *)(*pcVar3)(plVar11,s_00,uVar17);
  if (plVar11 == (long *)0x0) {
label_04455707:
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445570c;
    plVar11 = (long *)il2cpp_runtime_helper_022b2c90();
  }
  uVar17 = *(undefined8 *)(*plVar11 + 0x1b0);
  pcVar3 = *(code **)(*plVar11 + 0x1a8);
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455722;
  plVar11 = (long *)(*pcVar3)(plVar11,pSVar9,uVar17);
  if (plVar11 == (long *)0x0) {
label_04455727:
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445572c;
    plVar11 = (long *)il2cpp_runtime_helper_022b2c90();
  }
  uVar17 = *(undefined8 *)(*plVar11 + 0x1d0);
  pcVar3 = *(code **)(*plVar11 + 0x1c8);
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445573f;
  s_00 = (System_String_o **)(*pcVar3)(plVar11,uVar17);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445575a;
    il2cpp_runtime_helper_02337ed0();
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
  if (lVar12 == 0) {
label_04455774:
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x4455779;
    il2cpp_runtime_helper_022b2c90();
label_04455779:
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445577e;
    lVar12 = il2cpp_runtime_helper_022b2c90();
  }
  pSVar9 = *(System_String_o **)(lVar12 + 0x20);
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x445578e;
  bVar6 = System_String__op_Equality
                    (*(System_String_o **)((long)register0x00000020 + -0x140),pSVar9,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44557aa;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44557b4;
    MiscExtensions__ReverseString((System_String_o *)s_00,(MethodInfo *)0x0);
  }
  *(undefined8 *)((long)register0x00000020 + -0x150) = 0x44557b9;
  il2cpp_runtime_helper_022b2c90();
  goto label_044557b9;
label_04456197:
  il2cpp_runtime_helper_022b2c90();
  goto label_04456460;
label_044561a1:
  il2cpp_runtime_helper_022b2c90();
  goto label_04456460;
label_044561ab:
  il2cpp_runtime_helper_022b2c90();
label_04456460:
  il2cpp_runtime_helper_022b2ca0();
label_04456465:
  il2cpp_runtime_helper_022b2c90();
label_0445646a:
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to find localization files: ");
  pSVar9 = System_String__Concat_3ae5ba0(pSVar9,(System_String_o *)pMVar13,(MethodInfo *)0x0);
  uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_05 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
  System_Exception___ctor_3cf6120(__this_05,pSVar9,(MethodInfo *)0x0);
  uVar17 = il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
  il2cpp_runtime_helper_022b2b10(__this_05,uVar17);
  puVar18 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar18 = __this_05->klass;
  __cxa_throw(puVar18,&PTR_PTR_05215060,0);
}


// UI.UIManager$$GetInternalLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetInternalLocaleCategoryStrings (System_String_o* category, const MethodInfo* method);
// 0x4455170

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetInternalLocaleCategoryStrings(System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_04;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_05;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_06;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_07;
  char cVar1;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_08;
  System_Collections_Generic_Dictionary_object__object__o *__this_09;
  SimpleJSONFixed_JSONNode_o *__this_10;
  System_String_o *s;
  long *plVar3;
  System_String_o *key;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  System_String_o *in_stack_fffffffffffffec0;
  System_String_c *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_Fields SVar10;
  _union_231609 _Var11;
  Il2CppClass *pIVar12;
  System_String_c *in_stack_fffffffffffffef0;
  System_String_c *pSVar13;
  SimpleJSONFixed_JSONNode_o *in_stack_fffffffffffffef8;
  SimpleJSONFixed_JSONNode_o *pSVar14;
  System_String_Fields SStack_100;
  _union_231609 _Stack_f8;
  Il2CppClass *pIStack_f0;
  Il2CppType *pIStack_e8;
  Il2CppType **ppIStack_e0;
  _union_13 _Stack_d8;
  _union_14 _Stack_d0;
  undefined1 auStack_c8 [80];
  System_String_c *pSStack_78;
  SimpleJSONFixed_JSONNode_o *pSStack_70;
  System_String_Fields SStack_68;
  _union_231609 _Stack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  Il2CppType **ppIStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  if (g_data_057ae72a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Simple);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae72a = '\x01';
  }
  SVar10._stringLength = 0;
  SVar10._firstChar = 0;
  SVar10._6_2_ = 0;
  pSVar8 = (System_String_c *)0x0;
  pSVar9 = (SimpleJSONFixed_JSONNode_o *)0x0;
  ppIStack_48 = (Il2CppType **)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIStack_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  SStack_68._stringLength = 0;
  SStack_68._firstChar = 0;
  SStack_68._6_2_ = 0;
  _Stack_60.genericMethod = (Il2CppObject *)0x0;
  pSStack_78 = (System_String_c *)0x0;
  pSStack_70 = (SimpleJSONFixed_JSONNode_o *)0x0;
  _Stack_38.genericMethod = (void *)0x0;
  auStack_c8._48_8_ = (Il2CppType **)0x0;
  auStack_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_c8._32_8_ = (Il2CppClass *)0x0;
  auStack_c8._40_8_ = (Il2CppType *)0x0;
  auStack_c8._16_4_ = 0;
  auStack_c8._20_2_ = 0;
  auStack_c8._22_2_ = 0;
  auStack_c8._24_8_ = (Il2CppObject *)0x0;
  auStack_c8._0_8_ = (System_String_c *)0x0;
  auStack_c8._8_8_ = (SimpleJSONFixed_JSONNode_o *)0x0;
  auStack_c8._64_8_ = (void *)0x0;
  __this_08 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_08,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_044557c3:
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ == 1) {
      plVar4 = (long *)__cxa_begin_catch(auVar7._0_8_);
      lVar5 = *plVar4;
      __cxa_end_catch();
      __this_01.fields._8_8_ = in_stack_fffffffffffffec0;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08;
      __this_01.fields._current.fields.key = (Il2CppObject *)pSVar8;
      __this_01.fields._current.fields.value = (Il2CppObject *)pSVar9;
      __this_01.fields._getEnumeratorRetType = SVar10._stringLength;
      __this_01.fields._36_2_ = SVar10._firstChar;
      __this_01.fields._38_2_ = SVar10._6_2_;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_01,(MethodInfo_3251280 *)&stack0xfffffffffffffec8);
      if (lVar5 == 0) {
        return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)__this_08;
      }
      il2cpp_runtime_helper_022fefe0(lVar5);
    }
    __this_02.fields._8_8_ = in_stack_fffffffffffffec0;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08;
    __this_02.fields._current.fields.key = (Il2CppObject *)pSVar8;
    __this_02.fields._current.fields.value = (Il2CppObject *)pSVar9;
    __this_02.fields._getEnumeratorRetType = SVar10._stringLength;
    __this_02.fields._36_2_ = SVar10._firstChar;
    __this_02.fields._38_2_ = SVar10._6_2_;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251280 *)&stack0xfffffffffffffec8);
    _Unwind_Resume(auVar7._0_8_);
  }
  pSVar8 = in_stack_fffffffffffffef0;
  pSVar9 = in_stack_fffffffffffffef8;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&stack0xfffffffffffffef0,
             (System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8)
             ,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Simple);
  SVar10 = SStack_100;
  _Var11 = _Stack_f8;
  pIVar12 = pIStack_f0;
  pSVar13 = pSVar8;
  pSVar14 = pSVar9;
label_04455350:
  __this.fields._8_8_ = in_stack_fffffffffffffec0;
  __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08;
  __this.fields._current.fields.key = (Il2CppObject *)pSVar8;
  __this.fields._current.fields.value = (Il2CppObject *)pSVar9;
  __this.fields._getEnumeratorRetType = SVar10._stringLength;
  __this.fields._36_2_ = SVar10._firstChar;
  __this.fields._38_2_ = SVar10._6_2_;
  bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                    (__this,(MethodInfo_3251160 *)&stack0xfffffffffffffec8);
  if ((char)bVar2 == '\0') {
    __this_00.fields._8_8_ = in_stack_fffffffffffffec0;
    __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_08;
    __this_00.fields._current.fields.key = (Il2CppObject *)pSVar8;
    __this_00.fields._current.fields.value = (Il2CppObject *)pSVar9;
    __this_00.fields._getEnumeratorRetType = SVar10._stringLength;
    __this_00.fields._36_2_ = SVar10._firstChar;
    __this_00.fields._38_2_ = SVar10._6_2_;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_00,(MethodInfo_3251280 *)&stack0xfffffffffffffec8);
    return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)__this_08;
  }
  auVar6 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xfffffffffffffec8,MethodInfo_KeyValuePair_2_System_String_SimpleJSONFixed_JSONObject);
  plVar4 = auVar6._8_8_;
  in_stack_fffffffffffffec0 = auVar6._0_8_;
  if (plVar4 != (long *)0x0) goto code_r0x04455387;
  goto label_04455779;
code_r0x04455387:
  cVar1 = (**(code **)(*plVar4 + 0x2f8))(plVar4,category,*(undefined8 *)(*plVar4 + 0x300));
  if (cVar1 == '\0') goto label_04455350;
  __this_09 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_09,MethodInfo_Dictionary_2_System_String_System_String);
  __this_10 = (SimpleJSONFixed_JSONNode_o *)
              (**(code **)(*plVar4 + 0x1a8))(plVar4,category,*(undefined8 *)(*plVar4 + 0x1b0));
  s = (System_String_o *)&stack0xfffffffffffffef0;
  if (__this_10 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)s,__this_10,(MethodInfo *)0x0);
    auStack_c8._64_8_ = _Stack_d0;
    auStack_c8._48_8_ = ppIStack_e0;
    auStack_c8._56_8_ = _Stack_d8;
    auStack_c8._32_8_ = pIStack_f0;
    auStack_c8._40_8_ = pIStack_e8;
    auStack_c8._16_8_ = SStack_100;
    auStack_c8._24_8_ = _Stack_f8;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0;
    __this_03.fields.m_Enumerator.fields._0_8_ = __this_08;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar8;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar9;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)SVar10;
    __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = _Var11.genericMethod;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)pIVar12;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar13;
    __this_03.fields.m_Enumerator.fields.m_Array.fields._current = pSVar14;
    auStack_c8._0_8_ = pSVar13;
    auStack_c8._8_8_ = pSVar14;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)s,__this_03,(MethodInfo *)auStack_c8);
    _Stack_38 = _Stack_d0;
    ppIStack_48 = ppIStack_e0;
    _Stack_40 = _Stack_d8;
    pIStack_58 = pIStack_f0;
    pIStack_50 = pIStack_e8;
    SStack_68 = SStack_100;
    _Stack_60 = _Stack_f8;
    pSStack_78 = pSVar13;
    pSStack_70 = pSVar14;
    if (__this_09 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      while (__this_04.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0,
            __this_04.fields.m_Enumerator.fields._0_8_ = __this_08,
            __this_04.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar8,
            __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar9,
            __this_04.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                 (Il2CppObject *)SVar10,
            __this_04.fields.m_Enumerator.fields.m_Object.fields._32_8_ = _Var11.genericMethod,
            __this_04.fields.m_Enumerator.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)pIVar12,
            __this_04.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar13,
            __this_04.fields.m_Enumerator.fields.m_Array.fields._current = pSVar14,
            bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_04,(MethodInfo *)&pSStack_78),
            (char)bVar2 != '\0') {
        __this_05.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0;
        __this_05.fields.m_Enumerator.fields._0_8_ = __this_08;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar8;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar9;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)SVar10;
        __this_05.fields.m_Enumerator.fields.m_Object.fields._32_8_ = _Var11.genericMethod;
        __this_05.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)pIVar12;
        __this_05.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar13;
        __this_05.fields.m_Enumerator.fields.m_Array.fields._current = pSVar14;
        s = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_05,(MethodInfo *)&pSStack_78);
        plVar3 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,category,*(undefined8 *)(*plVar4 + 0x1b0));
        if (plVar3 == (long *)0x0) goto label_044556e7;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))(plVar3,s,*(undefined8 *)(*plVar3 + 0x1b0));
        if (plVar3 == (long *)0x0) goto label_044556e2;
        cVar1 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
        if (cVar1 != '\0') goto label_044556ec;
      }
    }
    else {
      while (__this_06.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0,
            __this_06.fields.m_Enumerator.fields._0_8_ = __this_08,
            __this_06.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar8,
            __this_06.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar9,
            __this_06.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                 (Il2CppObject *)SVar10,
            __this_06.fields.m_Enumerator.fields.m_Object.fields._32_8_ = _Var11.genericMethod,
            __this_06.fields.m_Enumerator.fields.m_Array.fields._list =
                 (System_Collections_Generic_List_T__o *)pIVar12,
            __this_06.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar13,
            __this_06.fields.m_Enumerator.fields.m_Array.fields._current = pSVar14,
            bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_06,(MethodInfo *)&pSStack_78),
            (char)bVar2 != '\0') {
        __this_07.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffec0;
        __this_07.fields.m_Enumerator.fields._0_8_ = __this_08;
        __this_07.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar8;
        __this_07.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar9;
        __this_07.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)SVar10;
        __this_07.fields.m_Enumerator.fields.m_Object.fields._32_8_ = _Var11.genericMethod;
        __this_07.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)pIVar12;
        __this_07.fields.m_Enumerator.fields.m_Array.fields._8_8_ = pSVar13;
        __this_07.fields.m_Enumerator.fields.m_Array.fields._current = pSVar14;
        key = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_07,(MethodInfo *)&pSStack_78);
        plVar3 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,category,*(undefined8 *)(*plVar4 + 0x1b0));
        if (plVar3 == (long *)0x0) goto label_044556e7;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))(plVar3,key,*(undefined8 *)(*plVar3 + 0x1b0));
        if (plVar3 == (long *)0x0) goto label_044556e2;
        cVar1 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
        if (cVar1 != '\0') {
          plVar3 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,category,*(undefined8 *)(*plVar4 + 0x1b0));
          if (plVar3 == (long *)0x0) goto label_04455707;
          plVar3 = (long *)(**(code **)(*plVar3 + 0x1a8))(plVar3,key,*(undefined8 *)(*plVar3 + 0x1b0));
          if (plVar3 == (long *)0x0) goto label_04455727;
          s = (System_String_o *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          lVar5 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
          if (lVar5 == 0) goto label_04455774;
          bVar2 = System_String__op_Equality
                            (in_stack_fffffffffffffec0,*(System_String_o **)(lVar5 + 0x20),(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            s = MiscExtensions__ReverseString(s,(MethodInfo *)0x0);
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_09,(Il2CppObject *)key,(Il2CppObject *)s,MethodInfo_Void_set_Item);
        }
      }
    }
    if (__this_08 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_08,(Il2CppObject *)in_stack_fffffffffffffec0,(Il2CppObject *)__this_09,MethodInfo_Void_set_Item);
      goto label_04455350;
    }
    goto label_044557be;
  }
label_044557b9:
  il2cpp_runtime_helper_022b2c90();
label_044557be:
  il2cpp_runtime_helper_022b2c90();
  goto label_044557c3;
label_044556e2:
  il2cpp_runtime_helper_022b2c90();
label_044556e7:
  il2cpp_runtime_helper_022b2c90();
label_044556ec:
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,category,*(undefined8 *)(*plVar4 + 0x1b0));
  if (plVar4 == (long *)0x0) {
label_04455707:
    plVar4 = (long *)il2cpp_runtime_helper_022b2c90();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,s,*(undefined8 *)(*plVar4 + 0x1b0));
  if (plVar4 == (long *)0x0) {
label_04455727:
    plVar4 = (long *)il2cpp_runtime_helper_022b2c90();
  }
  category = (System_String_o *)(**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
  if (lVar5 == 0) {
label_04455774:
    il2cpp_runtime_helper_022b2c90();
label_04455779:
    lVar5 = il2cpp_runtime_helper_022b2c90();
  }
  bVar2 = System_String__op_Equality
                    (in_stack_fffffffffffffec0,*(System_String_o **)(lVar5 + 0x20),(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    MiscExtensions__ReverseString(category,(MethodInfo *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  goto label_044557b9;
}


// UI.UIManager$$GetExternalLocaleCategoryStrings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__string___o* UI_UIManager__GetExternalLocaleCategoryStrings (System_String_o* uniqueName, const MethodInfo* method);
// 0x4455b50

System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *
UI_UIManager__GetExternalLocaleCategoryStrings(System_String_o *uniqueName,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  char cVar4;
  bool_conflict bVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  MethodInfo *method_00;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *__this_05;
  long *plVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  System_String_o *pSVar9;
  System_String_o *s;
  System_String_o *pSVar10;
  undefined8 uVar11;
  System_Exception_o *__this_07;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 in_stack_fffffffffffffec8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar14;
  Il2CppMethodPointer in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *in_stack_fffffffffffffef8;
  InvokerMethod in_stack_ffffffffffffff00;
  Il2CppObject *in_stack_ffffffffffffff08;
  Il2CppClass *pIStack_f0;
  Il2CppType *pIStack_e8;
  System_Collections_Generic_List_T__o *pSStack_e0;
  _union_13 _Stack_d8;
  _union_14 _Stack_d0;
  undefined1 auStack_c8 [80];
  Il2CppMethodPointer pIStack_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod pIStack_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *pSStack_48;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  
  if (g_data_057ae72b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MiscExtensions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&"*.json");
    g_data_057ae72b = '\x01';
  }
  pSStack_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIStack_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  pIStack_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  pIStack_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  _Stack_38.genericMethod = (void *)0x0;
  auStack_c8._48_8_ = (System_Collections_Generic_List_T__o *)0x0;
  auStack_c8._56_8_ = (Il2CppRGCTXData *)0x0;
  auStack_c8._32_8_ = (Il2CppClass *)0x0;
  auStack_c8._40_8_ = (Il2CppType *)0x0;
  auStack_c8._16_8_ = (InvokerMethod)0x0;
  auStack_c8._24_8_ = (Il2CppObject *)0x0;
  auStack_c8._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_c8._8_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  auStack_c8._64_8_ = (void *)0x0;
  __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)
              System_String__Concat_3af7150
                        (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x88),"/",uniqueName,
                         (MethodInfo *)0x0);
  bVar5 = System_IO_Directory__Exists((System_String_o *)method_00,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') goto label_0445646a;
  pSVar6 = System_IO_Directory__GetFiles((System_String_o *)method_00,"*.json",(MethodInfo *)0x0);
  if (pSVar6 != (System_String_array *)0x0) {
    if (pSVar6->max_length == 0) goto label_0445646a;
    if ((int)pSVar6->max_length < 1) {
      return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)__this_04;
    }
    uVar13 = 0;
    method_00 = (MethodInfo *)&pIStack_78;
    pSVar14 = __this_04;
    if ((pSVar6->max_length & 0xffffffff) != 0) {
      do {
        pSVar10 = pSVar6->m_Items[uVar13];
        pSVar7 = System_IO_File__ReadAllText(pSVar10,(MethodInfo *)0x0);
        __this_05 = SimpleJSONFixed_JSON__Parse(pSVar7,(MethodInfo *)0x0);
        if (__this_05 == (SimpleJSONFixed_JSONNode_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04456465;
        }
        bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
        if (((__this_05->klass->_2).naturalAligment < bVar1) ||
           ((__this_05->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_JSONObject)) {
          il2cpp_runtime_helper_022b2fd0(__this_05);
          break;
        }
        cVar4 = (*(__this_05->klass->vtable)._28_HasKey.methodPtr)
                          (__this_05,"Name",(__this_05->klass->vtable)._28_HasKey.method);
        if (cVar4 != '\0') {
          plVar8 = (long *)(*(__this_05->klass->vtable)._7_get_Item.methodPtr)
                                     (__this_05,"Name",(__this_05->klass->vtable)._7_get_Item.method);
          if (plVar8 == (long *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04456465;
          }
          pSVar7 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
          __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
          System_Collections_Generic_Dictionary_object__object____ctor(__this_06,MethodInfo_Dictionary_2_System_String_System_String);
          SimpleJSONFixed_JSONNode__get_Keys
                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this_05,
                     (MethodInfo *)0x0);
          auStack_c8._64_8_ = _Stack_d0;
          auStack_c8._48_8_ = pSStack_e0;
          auStack_c8._56_8_ = _Stack_d8;
          auStack_c8._32_8_ = pIStack_f0;
          auStack_c8._40_8_ = pIStack_e8;
          __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14;
          __this.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
          __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar6;
          __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pSVar10;
          __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)uVar13;
          __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef0;
          __this.fields.m_Enumerator.fields.m_Array.fields._list =
               (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
          __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff00;
          __this.fields.m_Enumerator.fields.m_Array.fields._current =
               (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08;
          auStack_c8._0_8_ = in_stack_fffffffffffffef0;
          auStack_c8._8_8_ = in_stack_fffffffffffffef8;
          auStack_c8._16_8_ = in_stack_ffffffffffffff00;
          auStack_c8._24_8_ = in_stack_ffffffffffffff08;
          SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                    ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&stack0xfffffffffffffef0,__this,
                     (MethodInfo *)auStack_c8);
          _Stack_38 = _Stack_d0;
          pSStack_48 = pSStack_e0;
          _Stack_40 = _Stack_d8;
          pIStack_58 = pIStack_f0;
          pIStack_50 = pIStack_e8;
          pIStack_78 = in_stack_fffffffffffffef0;
          pSStack_70 = in_stack_fffffffffffffef8;
          pIStack_68 = in_stack_ffffffffffffff00;
          pIStack_60 = in_stack_ffffffffffffff08;
          if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            while (__this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                        (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,
                  __this_00.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8,
                  __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar6,
                  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                       (Il2CppObject *)pSVar10,
                  __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                       (Il2CppObject *)uVar13,
                  __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef0,
                  __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8,
                  __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff00,
                  __this_00.fields.m_Enumerator.fields.m_Array.fields._current =
                       (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08,
                  bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_00,method_00),
                  (char)bVar5 != '\0') {
              __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14;
              __this_01.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
              __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar6;
              __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                   (Il2CppObject *)pSVar10;
              __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                   (Il2CppObject *)uVar13;
              __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef0;
              __this_01.fields.m_Enumerator.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
              __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff00;
              __this_01.fields.m_Enumerator.fields.m_Array.fields._current =
                   (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08;
              pSVar9 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_01,method_00);
              bVar5 = System_String__op_Equality(pSVar9,"Name",(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                plVar8 = (long *)(*(__this_05->klass->vtable)._7_get_Item.methodPtr)
                                           (__this_05,pSVar9,(__this_05->klass->vtable)._7_get_Item.method);
                if (plVar8 == (long *)0x0) goto label_04456197;
                cVar4 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
                if (cVar4 != '\0') {
                  plVar8 = (long *)(*(__this_05->klass->vtable)._7_get_Item.methodPtr)
                                             (__this_05,pSVar9,(__this_05->klass->vtable)._7_get_Item.method);
                  if (plVar8 == (long *)0x0) goto label_044561a1;
                  pSVar10 = (System_String_o *)
                            (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
                  if (lVar3 == 0) goto label_044561ab;
                  bVar5 = System_String__op_Equality
                                    (pSVar7,*(System_String_o **)(lVar3 + 0x20),(MethodInfo *)0x0);
                  if ((char)bVar5 != '\0') {
                    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    MiscExtensions__ReverseString(pSVar10,(MethodInfo *)0x0);
                  }
                  il2cpp_runtime_helper_022b2c90();
                  goto label_04456465;
                }
              }
            }
          }
          else {
            while (__this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                        (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14,
                  __this_02.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8,
                  __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar6,
                  __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                       (Il2CppObject *)pSVar10,
                  __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                       (Il2CppObject *)uVar13,
                  __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef0,
                  __this_02.fields.m_Enumerator.fields.m_Array.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8,
                  __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff00,
                  __this_02.fields.m_Enumerator.fields.m_Array.fields._current =
                       (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08,
                  bVar5 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_02,method_00),
                  (char)bVar5 != '\0') {
              __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar14;
              __this_03.fields.m_Enumerator.fields._0_8_ = in_stack_fffffffffffffec8;
              __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pSVar6;
              __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
                   (Il2CppObject *)pSVar10;
              __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
                   (Il2CppObject *)uVar13;
              __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = in_stack_fffffffffffffef0;
              __this_03.fields.m_Enumerator.fields.m_Array.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_fffffffffffffef8;
              __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = in_stack_ffffffffffffff00;
              __this_03.fields.m_Enumerator.fields.m_Array.fields._current =
                   (SimpleJSONFixed_JSONNode_o *)in_stack_ffffffffffffff08;
              pSVar9 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current(__this_03,method_00);
              bVar5 = System_String__op_Equality(pSVar9,"Name",(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                plVar8 = (long *)(*(__this_05->klass->vtable)._7_get_Item.methodPtr)
                                           (__this_05,pSVar9,(__this_05->klass->vtable)._7_get_Item.method);
                if (plVar8 == (long *)0x0) goto label_04456197;
                cVar4 = (**(code **)(*plVar8 + 0x208))(plVar8,*(undefined8 *)(*plVar8 + 0x210));
                if (cVar4 != '\0') {
                  plVar8 = (long *)(*(__this_05->klass->vtable)._7_get_Item.methodPtr)
                                             (__this_05,pSVar9,(__this_05->klass->vtable)._7_get_Item.method);
                  if (plVar8 == (long *)0x0) goto label_044561a1;
                  s = (System_String_o *)
                      (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
                  __this_04 = pSVar14;
                  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    __this_04 = pSVar14;
                  }
                  lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x20);
                  if (lVar3 == 0) goto label_044561ab;
                  bVar5 = System_String__op_Equality
                                    (pSVar7,*(System_String_o **)(lVar3 + 0x20),(MethodInfo *)0x0);
                  if ((char)bVar5 != '\0') {
                    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    s = MiscExtensions__ReverseString(s,(MethodInfo *)0x0);
                  }
                  pSVar14 = __this_04;
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (__this_06,(Il2CppObject *)pSVar9,(Il2CppObject *)s,MethodInfo_Void_set_Item);
                }
              }
            }
          }
          if (__this_04 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04456465;
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_04,(Il2CppObject *)pSVar7,(Il2CppObject *)__this_06,MethodInfo_Void_set_Item);
        }
        uVar13 = uVar13 + 1;
        uVar2 = (uint)pSVar6->max_length;
        if ((long)(int)uVar2 <= (long)uVar13) {
          return (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)__this_04;
        }
      } while (uVar13 < uVar2);
    }
    goto label_04456460;
  }
  goto label_04456465;
label_04456197:
  il2cpp_runtime_helper_022b2c90();
  goto label_04456460;
label_044561a1:
  il2cpp_runtime_helper_022b2c90();
  goto label_04456460;
label_044561ab:
  il2cpp_runtime_helper_022b2c90();
label_04456460:
  il2cpp_runtime_helper_022b2ca0();
label_04456465:
  il2cpp_runtime_helper_022b2c90();
label_0445646a:
  pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Failed to find localization files: ");
  pSVar10 = System_String__Concat_3ae5ba0(pSVar10,(System_String_o *)method_00,(MethodInfo *)0x0);
  uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_07 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar11);
  System_Exception___ctor_3cf6120(__this_07,pSVar10,(MethodInfo *)0x0);
  uVar11 = il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Sy);
  il2cpp_runtime_helper_022b2b10(__this_07,uVar11);
  puVar12 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar12 = __this_07->klass;
  __cxa_throw(puVar12,&PTR_PTR_05215060,0);
}


// UI.UIManager$$GetLanguages
// il2cpp: System_String_array* UI_UIManager__GetLanguages (const MethodInfo* method);
// 0x44439b0

System_String_array * UI_UIManager__GetLanguages(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_04;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  System_String_array *pSVar6;
  long *plVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar9;
  Il2CppType *pIVar10;
  System_String_o *a;
  System_String_o *a_00;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (g_data_057ae72c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"English");
    g_data_057ae72c = '\x01';
  }
  pSVar9 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  a = (System_String_o *)0x0;
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_UIManager + 0xb8) !=
       (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_UIManager + 0xb8),MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim),
     __this_05 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
               __this_05,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    pSVar9 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)local_48._0_8_;
    pIVar10 = (Il2CppType *)local_48._8_8_;
    a_00 = local_38;
    if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_00.fields._index = local_48._8_4_;
      __this_00.fields._version = local_48._12_4_;
      __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_48._0_8_;
      __this_00.fields._currentKey = (Il2CppObject *)local_38;
      bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff98);
      pSVar9 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
               local_48._0_8_;
      pIVar10 = (Il2CppType *)local_48._8_8_;
      a = local_38;
      if ((char)bVar5 != '\0') goto label_04443c37;
    }
    else {
      while (__this.fields._8_8_ = pIVar10,
            __this.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9,
            __this.fields._currentKey = (Il2CppObject *)a_00,
            bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                              (__this,(MethodInfo_3251B20 *)&stack0xffffffffffffff98), a = a_00,
            (char)bVar5 != '\0') {
        bVar5 = System_String__op_Equality(a_00,"English",(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        if ((char)bVar5 == '\0') {
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_04->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04443c32;
          }
          uVar2 = (__this_04->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_04->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)a_00;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,a_00);
            a_00 = a;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this_04,(Il2CppObject *)a_00,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            a_00 = a;
          }
        }
        else {
          System_Collections_Generic_List_object___Insert(__this_04,0,(Il2CppObject *)a_00,MethodInfo_Void_Insert);
          a_00 = a;
        }
      }
    }
    __this_01.fields._8_8_ = pIVar10;
    __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
    __this_01.fields._currentKey = (Il2CppObject *)a;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
    goto label_04443c07;
  }
label_04443c32:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04443c37:
    bVar5 = System_String__op_Equality(a,"English",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      il2cpp_runtime_helper_022b2c90();
    }
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
label_04443cdc:
      __this_03.fields._8_8_ = pIVar10;
      __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
      __this_03.fields._currentKey = (Il2CppObject *)a;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar8._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar10;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar9;
    __this_02.fields._currentKey = (Il2CppObject *)a;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_04443cdc;
    }
label_04443c07:
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar6 = (System_String_array *)System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_String_ToArray)
      ;
      return pSVar6;
    }
  } while( true );
}


// UI.UIManager$$LoadLanguages
// il2cpp: void UI_UIManager__LoadLanguages (const MethodInfo* method);
// 0x4453380

void UI_UIManager__LoadLanguages(MethodInfo *method)

{
  byte bVar1;
  UI_TipPanel_o *__this;
  UI_LoadingBackgroundPanel_o *pUVar2;
  UI_LoadingProgressPanel_o *pUVar3;
  UI_InGameMenu_c *pUVar4;
  UI_ItemHandler_o *pUVar5;
  UI_EmoteHandler_o *pUVar6;
  UI_EmoteHandler_c *pUVar7;
  code *vtableDispatch;
  undefined8 uVar8;
  System_Collections_Generic_Dictionary_object__object__o *pSVar9;
  Settings_TypedSetting_T__o *pSVar10;
  System_Collections_Generic_Dictionary_object__object__c *pSVar11;
  long lVar12;
  UnityEngine_Component_o *__this_00;
  UI_BaseMenu_o *__this_01;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_09;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_10;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_11;
  int32_t *piVar13;
  undefined4 uVar14;
  uint uVar15;
  bool_conflict bVar16;
  UnityEngine_GameObject_o *pUVar17;
  System_String_o *pSVar18;
  UI_BasePopup_o *__this_12;
  System_Enum_c *__this_13;
  MethodInfo *in_RAX;
  System_String_array *pSVar19;
  Il2CppMethodPointer pIVar20;
  long *plVar21;
  long *plVar22;
  Il2CppObject *pIVar23;
  Il2CppClass *pIVar24;
  Il2CppClass *pIVar25;
  undefined8 *puVar26;
  System_String_o *pSVar27;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar28;
  Il2CppClass *pIVar29;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_14;
  System_Object_array *pSVar30;
  Il2CppClass *pIVar31;
  UnityEngine_AudioSource_o *__this_15;
  MethodInfo_3105020 **in_RCX;
  long *method_00;
  MethodInfo_255AB00 **ppMVar32;
  MethodInfo_3104D80 **args;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  System_String_o *item;
  int iVar33;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **ppSVar34;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar35;
  Il2CppRGCTXData *pIVar36;
  void *pvVar37;
  System_String_array *pSVar38;
  System_Object_array **ppSVar39;
  MethodInfo *pMVar40;
  UI_BasePopup_o *__this_16;
  System_Enum_c *__this_17;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar41;
  void *in_R8;
  MethodInfo *in_R9;
  long *unaff_R12;
  uint uVar42;
  long *unaff_R13;
  System_String_array *unaff_R14;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **unaff_R15;
  float fVar43;
  float fVar44;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  void *pvVar45;
  undefined1 auVar46 [16];
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar47;
  undefined1 auStackY_1d8 [48];
  UnityEngine_Object_o *pUStackY_1a8;
  Il2CppClass *pIStackY_1a0;
  undefined8 uStackY_198;
  Il2CppClass *pIStackY_190;
  Il2CppClass *pIStackY_188;
  Il2CppRGCTXData *pIStackY_180;
  void *pvStackY_178;
  UnityEngine_Object_o *pUStackY_170;
  Il2CppClass *pIStackY_168;
  System_String_array *pSStackY_160;
  Il2CppRGCTXData *pIStackY_158;
  Il2CppObject *pIStackY_150;
  Il2CppClass *pIStackY_148;
  Il2CppRGCTXData *pIStackY_140;
  Il2CppClass *pIVar48;
  uint32_t uVar49;
  int32_t iVar50;
  uint32_t uVar51;
  uint32_t uVar52;
  Il2CppRGCTXData *pIVar53;
  Il2CppClass *pIVar54;
  _union_13 _Var55;
  _union_14 _Var56;
  Il2CppClass *pIStack_e8;
  Il2CppClass *pIStack_e0;
  uint32_t uStack_d8;
  int32_t iStack_d4;
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  Il2CppRGCTXData *pIStack_c8;
  Il2CppClass *pIStack_c0;
  System_String_o *pSStack_b8;
  _union_13 _Stack_b0;
  _union_14 _Stack_a8;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_a0;
  Il2CppClass *pIStack_98;
  Il2CppClass *pIStack_90;
  System_String_array *pSStack_88;
  Il2CppClass *pIStack_80;
  Il2CppRGCTXData *pIStack_78;
  System_String_o *pSStack_70;
  MethodInfo *pMStack_68;
  Il2CppClass *pIStack_60;
  Il2CppClass *pIStack_58;
  System_String_array *pSStack_50;
  Il2CppClass *pIStack_48;
  System_String_array *pSStack_40;
  MethodInfo *local_38;
  
  local_38 = in_RAX;
  if (g_data_057ae72d == '\0') {
    pSStack_40 = (System_String_array *)0x44533a4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    pSStack_40 = (System_String_array *)0x44533b0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_40 = (System_String_array *)0x44533bc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSStack_40 = (System_String_array *)0x44533c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    pSStack_40 = (System_String_array *)0x44533d4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStack_40 = (System_String_array *)0x44533e0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    pSStack_40 = (System_String_array *)0x44533ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pSStack_40 = (System_String_array *)0x44533f8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pSStack_40 = (System_String_array *)0x4453404;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pSStack_40 = (System_String_array *)0x4453410;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStack_40 = (System_String_array *)0x445341c;
    il2cpp_runtime_helper_023445d0(&"No language folder found, creating it.");
    pSStack_40 = (System_String_array *)0x4453428;
    il2cpp_runtime_helper_023445d0(&"Name");
    pSStack_40 = (System_String_array *)0x4453434;
    il2cpp_runtime_helper_023445d0(&"Arabic");
    pSStack_40 = (System_String_array *)0x4453440;
    il2cpp_runtime_helper_023445d0(&"*.json");
    pSStack_40 = (System_String_array *)0x445344c;
    il2cpp_runtime_helper_023445d0(&"English");
    g_data_057ae72d = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    pSStack_40 = (System_String_array *)0x445346c;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_40 = (System_String_array *)0x4453482;
  uVar15 = System_IO_Directory__Exists
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x10),(MethodInfo *)0x0);
  ppSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(ulong)uVar15;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    pSStack_40 = (System_String_array *)0x4453753;
    il2cpp_runtime_helper_02337ed0();
    pSVar18 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x10);
  }
  else {
    pSVar18 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x10);
  }
  if ((char)uVar15 == '\0') {
    pSStack_40 = (System_String_array *)0x4453771;
    System_IO_Directory__CreateDirectory(pSVar18,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      pSStack_40 = (System_String_array *)0x4453789;
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log("No language folder found, creating it.",(MethodInfo *)0x0);
    return;
  }
  pSStack_40 = (System_String_array *)0x44534b9;
  pSVar19 = System_IO_Directory__GetFiles(pSVar18,"*.json",(MethodInfo *)0x0);
  pSVar38 = (System_String_array *)&TypeInfo_FolderPaths;
  if (pSVar19 == (System_String_array *)0x0) {
label_04453811:
    pSStack_40 = (System_String_array *)0x4453816;
    il2cpp_runtime_helper_022b2c90();
label_04453816:
    pSStack_40 = (System_String_array *)0x445381e;
    il2cpp_runtime_helper_022b2fd0(unaff_R13);
    pSVar19 = pSVar38;
  }
  else {
    pSVar38 = pSVar19;
    if ((int)pSVar19->max_length < 1) {
label_044536cf:
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        pSStack_40 = (System_String_array *)0x44536e7;
        il2cpp_runtime_helper_02337ed0();
      }
      lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      ppSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&TypeInfo_SettingsManager;
      if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x20), lVar12 != 0)) {
        in_RCX = (MethodInfo_3105020 **)TypeInfo_UIManager->m_Items[6].fields.key;
        pSVar9 = ((Il2CppClass_1 *)&((System_Object_array *)in_RCX)->obj)->image;
        if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pSStack_40 = (System_String_array *)0x445373b;
          bVar16 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar9,*(Il2CppObject **)(lVar12 + 0x18),MethodInfo_Boolean_ContainsKey);
          if ((char)bVar16 != '\0') {
            return;
          }
          lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
          if ((lVar12 != 0) &&
             (pSVar10 = *(Settings_TypedSetting_T__o **)(lVar12 + 0x20),
             pSVar10 != (Settings_TypedSetting_T__o *)0x0)) {
            pSStack_40 = (System_String_array *)0x44537dd;
            Settings_TypedSetting_object___set_Value(pSVar10,"English",MethodInfo_Void_set_Value);
            plVar22 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
            if (plVar22 != (long *)0x0) {
              (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
              return;
            }
          }
        }
      }
      goto label_04453811;
    }
    unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)0x0;
    ppSVar34 = &TypeInfo_UIManager;
    if ((pSVar19->max_length & 0xffffffff) != 0) {
      do {
        local_38 = (MethodInfo *)pSVar19->m_Items[(long)unaff_R15];
        pSStack_40 = (System_String_array *)0x445351e;
        pSVar18 = System_IO_File__ReadAllText((System_String_o *)local_38,(MethodInfo *)0x0);
        pSStack_40 = (System_String_array *)0x4453528;
        unaff_R13 = (long *)SimpleJSONFixed_JSON__Parse(pSVar18,(MethodInfo *)0x0);
        if ((Il2CppClass *)unaff_R13 != (Il2CppClass *)0x0) {
          pIVar29 = (((Il2CppClass *)unaff_R13)->_1).image;
          bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
          in_RCX = (MethodInfo_3105020 **)(ulong)bVar1;
          if (((pIVar29->_2).naturalAligment < bVar1) ||
             ((pIVar29->_2).typeHierarchy
              [(long)((long)((System_Object_array *)((long)in_RCX + -0x80018))->m_Items + 0x7fff7)] !=
              TypeInfo_JSONObject)) goto label_04453816;
        }
        if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
          pSStack_40 = (System_String_array *)0x4453574;
          il2cpp_runtime_helper_02337ed0();
        }
        if ((Il2CppClass *)unaff_R13 == (Il2CppClass *)0x0) goto label_04453811;
        unaff_R12 = (long *)(TypeInfo_UIManager->m_Items[6].fields.key)->klass;
        pIVar29 = (((Il2CppClass *)unaff_R13)->_1).image;
        pSStack_40 = (System_String_array *)0x44535a8;
        unaff_R14 = (System_String_array *)
                    (*pIVar29->vtable[7].methodPtr)(unaff_R13,"Name",pIVar29->vtable[7].method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pSStack_40 = (System_String_array *)0x44535c3;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_40 = (System_String_array *)0x44535cd;
        pSVar18 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                            ((SimpleJSONFixed_JSONNode_o *)unaff_R14,(MethodInfo *)0x0);
        if ((Il2CppClass *)unaff_R12 == (Il2CppClass *)0x0) goto label_04453811;
        in_RCX = &MethodInfo_Boolean_ContainsKey;
        pSStack_40 = (System_String_array *)0x44535eb;
        bVar16 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R12,
                            (Il2CppObject *)pSVar18,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar16 == '\0') {
          pIVar29 = (((Il2CppClass *)unaff_R13)->_1).image;
          pSStack_40 = (System_String_array *)0x4453611;
          auVar46 = (*pIVar29->vtable[7].methodPtr)(unaff_R13,"Name",pIVar29->vtable[7].method);
          pIVar20 = auVar46._0_8_;
          if (pIVar20 == (Il2CppMethodPointer)0x0) goto label_04453811;
          in_RCX = *(MethodInfo_3105020 ***)pIVar20;
          pSStack_40 = (System_String_array *)0x445362d;
          unaff_R12 = (long *)(**(code **)((long)((Il2CppType *)((System_Object_array *)in_RCX)->m_Items +
                                                 0x1a) + 8))
                                        (pIVar20,((Il2CppType *)((System_Object_array *)in_RCX)->m_Items)
                                                 [0x1b].data,auVar46._8_8_,in_RCX,in_R8);
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            pSStack_40 = (System_String_array *)0x4453641;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar29 = (TypeInfo_UIManager->m_Items[6].fields.key)->klass;
          if (pIVar29 == (Il2CppClass *)0x0) goto label_04453811;
          pSStack_40 = (System_String_array *)0x445366c;
          in_RCX = (MethodInfo_3105020 **)MethodInfo_Void_Add;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)pIVar29,
                     (Il2CppObject *)unaff_R12,(Il2CppObject *)unaff_R13,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
          if (local_38 == (MethodInfo *)0x0) goto label_04453811;
          pSStack_40 = (System_String_array *)0x445368a;
          bVar16 = System_String__Contains((System_String_o *)local_38,"Arabic",(MethodInfo *)0x0);
          if ((char)bVar16 != '\0') {
            if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
              pSStack_40 = (System_String_array *)0x44536a3;
              il2cpp_runtime_helper_02337ed0();
            }
            pIVar29 = TypeInfo_UIManager->m_Items[6].fields.key[2].klass;
            if (pIVar29 == (Il2CppClass *)0x0) goto label_04453811;
            (pIVar29->_1).byval_arg.data = unaff_R12;
            pSStack_40 = (System_String_array *)0x44536ca;
            il2cpp_runtime_helper_022b4080(&(pIVar29->_1).byval_arg);
          }
        }
        unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                    ((long)&(((Il2CppClass *)unaff_R15)->_1).image + 1);
        uVar15 = (uint)pSVar19->max_length;
        in_RCX = (MethodInfo_3105020 **)(long)(int)uVar15;
        if ((long)in_RCX <= (long)unaff_R15) goto label_044536cf;
      } while (unaff_R15 < (Il2CppClass *)(ulong)uVar15);
    }
  }
  pSStack_40 = (System_String_array *)0x4453823;
  pSStack_70 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
  pMStack_68 = (MethodInfo *)ppSVar34;
  pIStack_60 = (Il2CppClass *)unaff_R12;
  pIStack_58 = (Il2CppClass *)unaff_R13;
  pSStack_50 = unaff_R14;
  pIStack_48 = (Il2CppClass *)unaff_R15;
  pSStack_40 = pSVar19;
  if (g_data_057ae732 == '\0') {
    pIStack_78 = (Il2CppRGCTXData *)0x4453854;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    pIStack_78 = (Il2CppRGCTXData *)0x4453860;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_78 = (Il2CppRGCTXData *)0x445386c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pIStack_78 = (Il2CppRGCTXData *)0x4453878;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    pIStack_78 = (Il2CppRGCTXData *)0x4453884;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pIStack_78 = (Il2CppRGCTXData *)0x4453890;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    pIStack_78 = (Il2CppRGCTXData *)0x445389c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIStack_78 = (Il2CppRGCTXData *)0x44538a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pIStack_78 = (Il2CppRGCTXData *)0x44538b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pIStack_78 = (Il2CppRGCTXData *)0x44538c0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStack_78 = (Il2CppRGCTXData *)0x44538cc;
    il2cpp_runtime_helper_023445d0(&"No UI theme folder found, creating it.");
    pIStack_78 = (Il2CppRGCTXData *)0x44538d8;
    il2cpp_runtime_helper_023445d0(&"Dark");
    pIStack_78 = (Il2CppRGCTXData *)0x44538e4;
    il2cpp_runtime_helper_023445d0(&"Name");
    pIStack_78 = (Il2CppRGCTXData *)0x44538f0;
    il2cpp_runtime_helper_023445d0(&"*.json");
    g_data_057ae732 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    pIStack_78 = (Il2CppRGCTXData *)0x4453910;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_78 = (Il2CppRGCTXData *)0x4453926;
  uVar15 = System_IO_Directory__Exists
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28),(MethodInfo *)0x0);
  plVar22 = (long *)(ulong)uVar15;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    pIStack_78 = (Il2CppRGCTXData *)0x4453b96;
    il2cpp_runtime_helper_02337ed0();
    pSVar18 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28);
  }
  else {
    pSVar18 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28);
  }
  if ((char)uVar15 == '\0') {
    pIStack_78 = (Il2CppRGCTXData *)0x4453bb4;
    System_IO_Directory__CreateDirectory(pSVar18,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      pIStack_78 = (Il2CppRGCTXData *)0x4453bcc;
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log("No UI theme folder found, creating it.",(MethodInfo *)0x0);
    return;
  }
  pIStack_78 = (Il2CppRGCTXData *)0x445395d;
  plVar21 = (long *)System_IO_Directory__GetFiles(pSVar18,"*.json",(MethodInfo *)0x0);
  ppSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&TypeInfo_FolderPaths;
  if ((System_String_array *)plVar21 == (System_String_array *)0x0) {
label_04453c54:
    plVar21 = (long *)unaff_R14;
    pIStack_78 = (Il2CppRGCTXData *)0x4453c59;
    il2cpp_runtime_helper_022b2c90();
label_04453c59:
    pIStack_78 = (Il2CppRGCTXData *)0x4453c61;
    il2cpp_runtime_helper_022b2fd0(unaff_R15);
    ppSVar39 = (System_Object_array **)ppSVar34;
  }
  else {
    unaff_R14 = (System_String_array *)plVar21;
    if ((int)((System_String_array *)plVar21)->max_length < 1) {
label_04453b11:
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        pIStack_78 = (Il2CppRGCTXData *)0x4453b29;
        il2cpp_runtime_helper_02337ed0();
      }
      plVar22 = &TypeInfo_SettingsManager;
      lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x20), lVar12 != 0)) {
        in_RCX = (MethodInfo_3105020 **)TypeInfo_UIManager->m_Items[6].fields.key;
        pSVar9 = ((Il2CppClass_1 *)&((System_Object_array *)in_RCX)->obj)->gc_desc;
        if (pSVar9 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pIStack_78 = (Il2CppRGCTXData *)0x4453b7e;
          bVar16 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (pSVar9,*(Il2CppObject **)(lVar12 + 0x18),MethodInfo_Boolean_ContainsKey);
          if ((char)bVar16 != '\0') {
            return;
          }
          lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar12 != 0) &&
             (pSVar10 = *(Settings_TypedSetting_T__o **)(lVar12 + 0x20),
             pSVar10 != (Settings_TypedSetting_T__o *)0x0)) {
            pIStack_78 = (Il2CppRGCTXData *)0x4453c20;
            Settings_TypedSetting_object___set_Value(pSVar10,"Dark",MethodInfo_Void_set_Value);
            plVar21 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x238))(plVar21,*(undefined8 *)(*plVar21 + 0x240));
              return;
            }
          }
        }
      }
      goto label_04453c54;
    }
    unaff_R13 = (long *)0x0;
    ppSVar34 = &TypeInfo_UIManager;
    ppSVar39 = (System_Object_array **)ppSVar34;
    if ((((System_String_array *)plVar21)->max_length & 0xffffffff) != 0) {
      do {
        pIStack_78 = (Il2CppRGCTXData *)0x44539bb;
        pSVar18 = System_IO_File__ReadAllText
                            (((System_String_array *)plVar21)->m_Items[(long)unaff_R13],(MethodInfo *)0x0);
        pIStack_78 = (Il2CppRGCTXData *)0x44539c5;
        unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                    SimpleJSONFixed_JSON__Parse(pSVar18,(MethodInfo *)0x0);
        if ((Il2CppClass *)unaff_R15 != (Il2CppClass *)0x0) {
          pSVar11 = (((Il2CppClass *)unaff_R15)->_1).image;
          bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
          in_RCX = (MethodInfo_3105020 **)(ulong)bVar1;
          if (((pSVar11->_2).naturalAligment < bVar1) ||
             ((pSVar11->_2).typeHierarchy
              [(long)((long)((System_Object_array *)((long)in_RCX + -0x80018))->m_Items + 0x7fff7)] !=
              TypeInfo_JSONObject)) goto label_04453c59;
        }
        if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
          pIStack_78 = (Il2CppRGCTXData *)0x4453a11;
          il2cpp_runtime_helper_02337ed0();
        }
        if ((Il2CppClass *)unaff_R15 == (Il2CppClass *)0x0) goto label_04453c54;
        unaff_R12 = (TypeInfo_UIManager->m_Items[6].fields.key)->monitor;
        pSVar11 = (((Il2CppClass *)unaff_R15)->_1).image;
        pIStack_78 = (Il2CppRGCTXData *)0x4453a46;
        plVar22 = (long *)(*(pSVar11->vtable).
                            _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.methodPtr)
                                    (unaff_R15,"Name",
                                     (pSVar11->vtable).
                                     _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.method)
        ;
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pIStack_78 = (Il2CppRGCTXData *)0x4453a61;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_78 = (Il2CppRGCTXData *)0x4453a6b;
        pSVar18 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                            ((SimpleJSONFixed_JSONNode_o *)plVar22,(MethodInfo *)0x0);
        if ((Il2CppClass *)unaff_R12 == (Il2CppClass *)0x0) goto label_04453c54;
        in_RCX = &MethodInfo_Boolean_ContainsKey;
        pIStack_78 = (Il2CppRGCTXData *)0x4453a89;
        bVar16 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R12,
                            (Il2CppObject *)pSVar18,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar16 == '\0') {
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            pIStack_78 = (Il2CppRGCTXData *)0x4453aa3;
            il2cpp_runtime_helper_02337ed0();
          }
          plVar22 = (TypeInfo_UIManager->m_Items[6].fields.key)->monitor;
          pSVar11 = (((Il2CppClass *)unaff_R15)->_1).image;
          pIStack_78 = (Il2CppRGCTXData *)0x4453acf;
          auVar46 = (*(pSVar11->vtable)._7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.
                      methodPtr)(unaff_R15,"Name",
                                 (pSVar11->vtable).
                                 _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.method);
          pIVar20 = auVar46._0_8_;
          if (pIVar20 == (Il2CppMethodPointer)0x0) goto label_04453c54;
          in_RCX = *(MethodInfo_3105020 ***)pIVar20;
          pIStack_78 = (Il2CppRGCTXData *)0x4453aeb;
          pIVar23 = (Il2CppObject *)
                    (**(code **)((long)((Il2CppType *)((System_Object_array *)in_RCX)->m_Items + 0x1a) + 8))
                              (pIVar20,((Il2CppType *)((System_Object_array *)in_RCX)->m_Items)[0x1b].data,
                               auVar46._8_8_,in_RCX,in_R8);
          if ((System_Collections_Generic_Dictionary_object__object__o *)plVar22 ==
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04453c54;
          pIStack_78 = (Il2CppRGCTXData *)0x4453b0c;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)plVar22,pIVar23,
                     (Il2CppObject *)unaff_R15,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
        }
        unaff_R13 = (long *)((long)&(((Il2CppClass *)unaff_R13)->_1).image + 1);
        uVar15 = (uint)((System_String_array *)plVar21)->max_length;
        in_RCX = (MethodInfo_3105020 **)(long)(int)uVar15;
        if ((long)in_RCX <= (long)unaff_R13) goto label_04453b11;
      } while (unaff_R13 < (Il2CppClass *)(ulong)uVar15);
    }
  }
  pIStack_78 = (Il2CppRGCTXData *)0x4453c66;
  il2cpp_runtime_helper_022b2ca0();
  method_00 = (long *)in_RCX;
  pSStack_a0 = (System_Collections_Generic_Dictionary_object__object__o *)plVar22;
  pIStack_98 = (Il2CppClass *)unaff_R12;
  pIStack_90 = (Il2CppClass *)unaff_R13;
  pSStack_88 = (System_String_array *)plVar21;
  pIStack_80 = (Il2CppClass *)unaff_R15;
  pIStack_78 = (Il2CppRGCTXData *)ppSVar39;
  if (g_data_057ae71f == '\0') {
    pIStackY_140 = (void *)0x4453c9a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pIStackY_140 = (void *)0x4453ca6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pIStackY_140 = (void *)0x4453cb2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    pIStackY_140 = (void *)0x4453cbe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStackY_140 = (void *)0x4453cca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pIStackY_140 = (void *)0x4453cd6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pIStackY_140 = (void *)0x4453ce2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStackY_140 = (void *)0x4453cee;
    il2cpp_runtime_helper_023445d0(&"ProfileIconInfo");
    pIStackY_140 = (void *)0x4453cfa;
    il2cpp_runtime_helper_023445d0(&"Icons");
    pIStackY_140 = (void *)0x4453d06;
    il2cpp_runtime_helper_023445d0(&"AnimatedEmojis");
    pIStackY_140 = (void *)0x4453d12;
    il2cpp_runtime_helper_023445d0(&"AllEmojis");
    pIStackY_140 = (void *)0x4453d1e;
    il2cpp_runtime_helper_023445d0(&"EmoteInfo");
    g_data_057ae71f = '\x01';
    method_00 = (long *)in_RCX;
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    pIStackY_140 = (void *)0x4453d5c;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar29 = *(Il2CppClass **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    pIStackY_140 = (void *)0x4453d82;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStackY_140 = (void *)0x4453d96;
  pIVar24 = (Il2CppClass *)
            ApplicationManagers_ResourceManager__LoadText
                      ((System_String_o *)pIVar29,"ProfileIconInfo",(MethodInfo *)0x0);
  pMVar40 = (MethodInfo *)0x0;
  pIStackY_140 = (void *)0x4453da0;
  pIVar25 = (Il2CppClass *)SimpleJSONFixed_JSON__Parse((System_String_o *)pIVar24,(MethodInfo *)0x0);
  if (pIVar25 != (Il2CppClass *)0x0) {
    method_00 = (pIVar25->_1).image;
    pIStackY_140 = (void *)0x4453dc6;
    pMVar40 = "Icons";
    puVar26 = (undefined8 *)
              (**(code **)((long)((Il2CppType *)((System_Object_array *)method_00)->m_Items + 0x18) + 8))
                        (pIVar25,"Icons",
                         ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[0x19].data);
    pIVar24 = pIVar25;
    if (puVar26 != (undefined8 *)0x0) {
      method_00 = (long *)*puVar26;
      pIStackY_140 = (void *)0x4453de7;
      (**(code **)((long)((Il2CppType *)((System_Object_array *)method_00)->m_Items + 0x31) + 8))
                (&stack0xffffffffffffff18,puVar26,
                 ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[0x32].data);
      pIStackY_140 = (void *)0x4453e28;
      __this_03.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_e0;
      __this_03.fields._0_8_ = pIStack_e8;
      __this_03.fields.m_Object.fields._version = uStack_d8;
      __this_03.fields.m_Object.fields._index = iStack_d4;
      __this_03.fields.m_Object.fields._current.fields.key._0_4_ = uStack_d0;
      __this_03.fields.m_Object.fields._current.fields.key._4_4_ = uStack_cc;
      __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_c8;
      __this_03.fields.m_Object.fields._32_8_ = pIStack_c0;
      __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSStack_b8;
      __this_03.fields.m_Array.fields._8_8_ = _Stack_b0.rgctx_data;
      __this_03.fields.m_Array.fields._current = _Stack_a8.genericMethod;
      pIVar25 = pIStack_e8;
      pIVar31 = pIStack_e0;
      uVar49 = uStack_d8;
      iVar50 = iStack_d4;
      uVar51 = uStack_d0;
      uVar52 = uStack_cc;
      pIVar53 = pIStack_c8;
      pIVar48 = pIStack_c0;
      pSVar18 = pSStack_b8;
      _Var55 = _Stack_b0;
      _Var56 = _Stack_a8;
      bVar16 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_03,(MethodInfo *)&stack0xfffffffffffffec8)
      ;
      if ((char)bVar16 != '\0') {
        unaff_R13 = &TypeInfo_JSONNode;
        unaff_R12 = &MethodInfo_Void_Add;
        do {
          pIStackY_140 = (void *)0x4453e86;
          __this_05.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar31;
          __this_05.fields._0_8_ = pIVar25;
          __this_05.fields.m_Object.fields._version = uVar49;
          __this_05.fields.m_Object.fields._index = iVar50;
          __this_05.fields.m_Object.fields._current.fields.key._0_4_ = uVar51;
          __this_05.fields.m_Object.fields._current.fields.key._4_4_ = uVar52;
          __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar53;
          __this_05.fields.m_Object.fields._32_8_ = pIVar48;
          __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
          __this_05.fields.m_Array.fields._8_8_ = _Var55.rgctx_data;
          __this_05.fields.m_Array.fields._current = _Var56.genericMethod;
          SVar47 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_05,(MethodInfo *)&stack0xfffffffffffffec8);
          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)SVar47.fields.value;
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            pIStackY_140 = (void *)0x4453e9b;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar29 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pIStackY_140 = (void *)0x4453ebc;
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar40 = (MethodInfo *)0x0;
          pIStackY_140 = (void *)0x4453ec6;
          pIVar24 = (Il2CppClass *)unaff_R15;
          pSVar27 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                              ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(MethodInfo *)0x0);
          lVar12 = MethodInfo_Void_Add;
          ppSVar39 = (System_Object_array **)&TypeInfo_UIManager;
          plVar21 = (long *)&stack0xfffffffffffffec8;
          if (pIVar29 == (Il2CppClass *)0x0) goto label_0445420e;
          piVar13 = (int32_t *)((long)&(pIVar29->_1).namespaze + 4);
          *piVar13 = *piVar13 + 1;
          method_00 = (long *)((System_Collections_Generic_List_object__Fields *)&(pIVar29->_1).name)->_items;
          plVar21 = (long *)&stack0xfffffffffffffec8;
          if ((System_Object_array *)method_00 == (System_Object_array *)0x0) goto label_0445420e;
          uVar15 = *(uint *)&(pIVar29->_1).namespaze;
          if (uVar15 < *(uint *)&((System_Object_array *)method_00)->max_length) {
            *(uint *)&(pIVar29->_1).namespaze = uVar15 + 1;
            (&((Il2CppType *)((System_Object_array *)method_00)->m_Items)->data)[(int)uVar15] = pSVar27;
            pIStackY_140 = (void *)0x4453f0c;
            il2cpp_runtime_helper_022b4080(&((Il2CppType *)((System_Object_array *)method_00)->m_Items)->data +
                               (int)uVar15);
          }
          else {
            method_00 = *(long **)(*(long *)(lVar12 + 0x20) + 0xc0);
            pIStackY_140 = (void *)0x4453e6a;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pIVar29,(Il2CppObject *)pSVar27,
                       ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[5].data);
          }
          pIStackY_140 = (void *)0x4453e74;
          __this_04.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar31;
          __this_04.fields._0_8_ = pIVar25;
          __this_04.fields.m_Object.fields._version = uVar49;
          __this_04.fields.m_Object.fields._index = iVar50;
          __this_04.fields.m_Object.fields._current.fields.key._0_4_ = uVar51;
          __this_04.fields.m_Object.fields._current.fields.key._4_4_ = uVar52;
          __this_04.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar53;
          __this_04.fields.m_Object.fields._32_8_ = pIVar48;
          __this_04.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
          __this_04.fields.m_Array.fields._8_8_ = _Var55.rgctx_data;
          __this_04.fields.m_Array.fields._current = _Var56.genericMethod;
          bVar16 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_04,(MethodInfo *)&stack0xfffffffffffffec8);
          plVar21 = (long *)&stack0xfffffffffffffec8;
        } while ((char)bVar16 != '\0');
      }
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        pIStackY_140 = (void *)0x4453f29;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = &TypeInfo_ResourceManager;
      pIVar29 = *(Il2CppClass **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        pIStackY_140 = (void *)0x4453f4f;
        il2cpp_runtime_helper_02337ed0();
      }
      pIStackY_140 = (void *)0x4453f63;
      pIVar24 = (Il2CppClass *)
                ApplicationManagers_ResourceManager__LoadText
                          ((System_String_o *)pIVar29,"EmoteInfo",(MethodInfo *)0x0);
      pMVar40 = (MethodInfo *)0x0;
      pIStackY_140 = (void *)0x4453f6d;
      pIVar25 = (Il2CppClass *)SimpleJSONFixed_JSON__Parse((System_String_o *)pIVar24,(MethodInfo *)0x0);
      if (pIVar25 != (Il2CppClass *)0x0) {
        method_00 = (pIVar25->_1).image;
        pIStackY_140 = (void *)0x4453f98;
        pMVar40 = "AllEmojis";
        pIVar24 = pIVar25;
        puVar26 = (undefined8 *)
                  (**(code **)((long)((Il2CppType *)((System_Object_array *)method_00)->m_Items + 0x18) + 8))
                            (pIVar25,"AllEmojis",
                             ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[0x19].data);
        if (puVar26 != (undefined8 *)0x0) {
          method_00 = (long *)*puVar26;
          pIStackY_140 = (void *)0x4453fb9;
          (**(code **)((long)((Il2CppType *)((System_Object_array *)method_00)->m_Items + 0x31) + 8))
                    (&stack0xffffffffffffff18,puVar26,
                     ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[0x32].data);
          pIStackY_140 = (void *)0x4453ffa;
          __this_06.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_e0;
          __this_06.fields._0_8_ = pIStack_e8;
          __this_06.fields.m_Object.fields._version = uStack_d8;
          __this_06.fields.m_Object.fields._index = iStack_d4;
          __this_06.fields.m_Object.fields._current.fields.key._0_4_ = uStack_d0;
          __this_06.fields.m_Object.fields._current.fields.key._4_4_ = uStack_cc;
          __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_c8;
          __this_06.fields.m_Object.fields._32_8_ = pIStack_c0;
          __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSStack_b8;
          __this_06.fields.m_Array.fields._8_8_ = _Stack_b0.rgctx_data;
          __this_06.fields.m_Array.fields._current = _Stack_a8.genericMethod;
          pIVar31 = pIStack_e8;
          pIVar48 = pIStack_e0;
          uVar49 = uStack_d8;
          iVar50 = iStack_d4;
          uVar51 = uStack_d0;
          uVar52 = uStack_cc;
          pIVar53 = pIStack_c8;
          pIVar54 = pIStack_c0;
          pSVar18 = pSStack_b8;
          _Var55 = _Stack_b0;
          _Var56 = _Stack_a8;
          bVar16 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_06,(MethodInfo *)&stack0xfffffffffffffec8);
          if ((char)bVar16 != '\0') {
            unaff_R13 = &TypeInfo_JSONNode;
            plVar21 = &MethodInfo_Void_Add;
            do {
              pIStackY_140 = (void *)0x4454056;
              __this_08.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar48;
              __this_08.fields._0_8_ = pIVar31;
              __this_08.fields.m_Object.fields._version = uVar49;
              __this_08.fields.m_Object.fields._index = iVar50;
              __this_08.fields.m_Object.fields._current.fields.key._0_4_ = uVar51;
              __this_08.fields.m_Object.fields._current.fields.key._4_4_ = uVar52;
              __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar53;
              __this_08.fields.m_Object.fields._32_8_ = pIVar54;
              __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
              __this_08.fields.m_Array.fields._8_8_ = _Var55.rgctx_data;
              __this_08.fields.m_Array.fields._current = _Var56.genericMethod;
              SVar47 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_08,(MethodInfo *)&stack0xfffffffffffffec8);
              unaff_R12 = (long *)SVar47.fields.value;
              if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
                pIStackY_140 = (void *)0x445406b;
                il2cpp_runtime_helper_02337ed0();
              }
              pIVar29 = TypeInfo_UIManager->m_Items[6].fields.key[4].monitor;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pIStackY_140 = (void *)0x445408c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar40 = (MethodInfo *)0x0;
              pIStackY_140 = (void *)0x4454096;
              pIVar24 = (Il2CppClass *)unaff_R12;
              pSVar27 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                                  ((SimpleJSONFixed_JSONNode_o *)unaff_R12,(MethodInfo *)0x0);
              lVar12 = MethodInfo_Void_Add;
              ppSVar39 = (System_Object_array **)&TypeInfo_UIManager;
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xfffffffffffffec8;
              if (pIVar29 == (Il2CppClass *)0x0) goto label_0445420e;
              piVar13 = (int32_t *)((long)&(pIVar29->_1).namespaze + 4);
              *piVar13 = *piVar13 + 1;
              method_00 = (long *)((System_Collections_Generic_List_object__Fields *)&(pIVar29->_1).name)->
                                  _items;
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xfffffffffffffec8;
              if ((System_Object_array *)method_00 == (System_Object_array *)0x0) goto label_0445420e;
              uVar15 = *(uint *)&(pIVar29->_1).namespaze;
              if (uVar15 < *(uint *)&((System_Object_array *)method_00)->max_length) {
                *(uint *)&(pIVar29->_1).namespaze = uVar15 + 1;
                (&((Il2CppType *)((System_Object_array *)method_00)->m_Items)->data)[(int)uVar15] = pSVar27;
                pIStackY_140 = (void *)0x44540db;
                il2cpp_runtime_helper_022b4080(&((Il2CppType *)((System_Object_array *)method_00)->m_Items)->data +
                                   (int)uVar15);
              }
              else {
                method_00 = *(long **)(*(long *)(lVar12 + 0x20) + 0xc0);
                pIStackY_140 = (void *)0x445403a;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pIVar29,(Il2CppObject *)pSVar27,
                           ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[5].data);
              }
              pIStackY_140 = (void *)0x4454044;
              __this_07.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar48;
              __this_07.fields._0_8_ = pIVar31;
              __this_07.fields.m_Object.fields._version = uVar49;
              __this_07.fields.m_Object.fields._index = iVar50;
              __this_07.fields.m_Object.fields._current.fields.key._0_4_ = uVar51;
              __this_07.fields.m_Object.fields._current.fields.key._4_4_ = uVar52;
              __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar53;
              __this_07.fields.m_Object.fields._32_8_ = pIVar54;
              __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
              __this_07.fields.m_Array.fields._8_8_ = _Var55.rgctx_data;
              __this_07.fields.m_Array.fields._current = _Var56.genericMethod;
              bVar16 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                 (__this_07,(MethodInfo *)&stack0xfffffffffffffec8);
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xfffffffffffffec8;
            } while ((char)bVar16 != '\0');
          }
          pSVar11 = (pIVar25->_1).image;
          pIStackY_140 = (void *)0x44540ff;
          pMVar40 = "AnimatedEmojis";
          puVar26 = (undefined8 *)
                    (*(pSVar11->vtable)._7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.
                      methodPtr)(pIVar25,"AnimatedEmojis",
                                 (pSVar11->vtable).
                                 _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.method);
          pIVar24 = pIVar25;
          if (puVar26 != (undefined8 *)0x0) {
            method_00 = (long *)*puVar26;
            pIStackY_140 = (void *)0x4454120;
            (**(code **)((long)((Il2CppType *)((System_Object_array *)method_00)->m_Items + 0x31) + 8))
                      (&stack0xffffffffffffff18,puVar26,
                       ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[0x32].data);
            pIStackY_140 = (void *)0x4454161;
            __this_09.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_e0;
            __this_09.fields._0_8_ = pIStack_e8;
            __this_09.fields.m_Object.fields._version = uStack_d8;
            __this_09.fields.m_Object.fields._index = iStack_d4;
            __this_09.fields.m_Object.fields._current.fields.key._0_4_ = uStack_d0;
            __this_09.fields.m_Object.fields._current.fields.key._4_4_ = uStack_cc;
            __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_c8;
            __this_09.fields.m_Object.fields._32_8_ = pIStack_c0;
            __this_09.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSStack_b8;
            __this_09.fields.m_Array.fields._8_8_ = _Stack_b0.rgctx_data;
            __this_09.fields.m_Array.fields._current = _Stack_a8.genericMethod;
            bVar16 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                               (__this_09,(MethodInfo *)&stack0xfffffffffffffec8);
            if ((char)bVar16 != '\0') {
              unaff_R12 = &TypeInfo_JSONNode;
              pIVar25 = pIStack_e8;
              pIVar31 = pIStack_e0;
              uVar49 = uStack_d8;
              iVar50 = iStack_d4;
              uVar51 = uStack_d0;
              uVar52 = uStack_cc;
              pIVar53 = pIStack_c8;
              pIVar48 = pIStack_c0;
              pSVar18 = pSStack_b8;
              _Var55 = _Stack_b0;
              _Var56 = _Stack_a8;
              do {
                pIStackY_140 = (void *)0x445419a;
                __this_10.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar31;
                __this_10.fields._0_8_ = pIVar25;
                __this_10.fields.m_Object.fields._version = uVar49;
                __this_10.fields.m_Object.fields._index = iVar50;
                __this_10.fields.m_Object.fields._current.fields.key._0_4_ = uVar51;
                __this_10.fields.m_Object.fields._current.fields.key._4_4_ = uVar52;
                __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar53;
                __this_10.fields.m_Object.fields._32_8_ = pIVar48;
                __this_10.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
                __this_10.fields.m_Array.fields._8_8_ = _Var55.rgctx_data;
                __this_10.fields.m_Array.fields._current = _Var56.genericMethod;
                SVar47 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   (__this_10,(MethodInfo *)&stack0xfffffffffffffec8);
                unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                            SVar47.fields.value;
                if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
                  pIStackY_140 = (void *)0x44541af;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar54 = TypeInfo_UIManager->m_Items[6].fields.key[5].klass;
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  pIStackY_140 = (void *)0x44541d0;
                  il2cpp_runtime_helper_02337ed0();
                }
                pMVar40 = (MethodInfo *)0x0;
                pIStackY_140 = (void *)0x44541da;
                pIVar24 = (Il2CppClass *)unaff_R15;
                pSVar27 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                                    ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(MethodInfo *)0x0);
                pIVar29 = (Il2CppClass *)0x0;
                ppSVar39 = (System_Object_array **)&TypeInfo_UIManager;
                unaff_R13 = (long *)&MethodInfo_Boolean_Add;
                plVar21 = (long *)&stack0xfffffffffffffec8;
                if (pIVar54 == (Il2CppClass *)0x0) goto label_0445420e;
                pIStackY_140 = (void *)0x44541ee;
                System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)pIVar54,(Il2CppObject *)pSVar27,
                           MethodInfo_Boolean_Add);
                pIStackY_140 = (void *)0x44541f8;
                __this_11.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar31;
                __this_11.fields._0_8_ = pIVar25;
                __this_11.fields.m_Object.fields._version = uVar49;
                __this_11.fields.m_Object.fields._index = iVar50;
                __this_11.fields.m_Object.fields._current.fields.key._0_4_ = uVar51;
                __this_11.fields.m_Object.fields._current.fields.key._4_4_ = uVar52;
                __this_11.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar53;
                __this_11.fields.m_Object.fields._32_8_ = pIVar48;
                __this_11.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar18;
                __this_11.fields.m_Array.fields._8_8_ = _Var55.rgctx_data;
                __this_11.fields.m_Array.fields._current = _Var56.genericMethod;
                bVar16 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                   (__this_11,(MethodInfo *)&stack0xfffffffffffffec8);
              } while ((char)bVar16 != '\0');
            }
            return;
          }
        }
      }
    }
  }
label_0445420e:
  pIStackY_140 = (void *)0x4454213;
  pIStackY_150 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  x = (UnityEngine_Object_o *)((ulong)pIVar24 & 0xffffffff);
  iVar33 = (int)pIVar24;
  pIStackY_148 = pIVar29;
  pIStackY_140 = (Il2CppRGCTXData *)plVar21;
  if (g_data_057ae71b == '\0') {
    pIStackY_158 = (void *)0x44542b2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71b = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_044542d0;
label_04454246:
    pIStackY_158 = (void *)0x445424d;
    UI_UIManager__SetMenu(iVar33,pMVar40);
    pSVar35 = TypeInfo_UIManager;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454246;
label_044542d0:
    pIStackY_158 = (void *)0x44542d5;
    il2cpp_runtime_helper_02337ed0();
    pIStackY_158 = (void *)0x44542dc;
    UI_UIManager__SetMenu(iVar33,pMVar40);
    pSVar35 = TypeInfo_UIManager;
  }
  if (iVar33 == 0) {
    TypeInfo_UIManager = pSVar35;
    return;
  }
  TypeInfo_UIManager = pSVar35;
  if (pSVar35->m_Items[8].fields.next == 0) {
    pIStackY_158 = (void *)0x44542ff;
    il2cpp_runtime_helper_02337ed0();
    pIStackY_158 = (void *)0x4454304;
    UI_UIManager__LoadSounds((MethodInfo *)pSVar35);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454314;
label_0445427a:
    pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar29 = pIVar23[3].klass;
    pIVar53 = pIStackY_140;
  }
  else {
    pIStackY_158 = (void *)0x445426a;
    UI_UIManager__LoadSounds((MethodInfo *)pSVar35);
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_0445427a;
label_04454314:
    pIStackY_158 = (void *)0x4454319;
    il2cpp_runtime_helper_02337ed0();
    pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar29 = pIVar23[3].klass;
    pIVar53 = pIStackY_140;
  }
  pIStackY_140 = pIVar53;
  if (pIVar29 != (Il2CppClass *)0x0) {
    if (iVar33 != 2) {
      UI_LoadingMenu__Hide((UI_LoadingMenu_o *)pIVar29,(MethodInfo *)0x0);
      return;
    }
    pMVar40 = (MethodInfo *)0x1;
    pIVar24 = (Il2CppClass *)(pIVar29->_1).implementedInterfaces;
    pIStackY_150 = pIVar23;
    pIStackY_140 = (Il2CppRGCTXData *)ppSVar39;
    if (pIVar24 != (Il2CppClass *)0x0) {
      pIVar36 = (Il2CppRGCTXData *)0x1;
      pMVar40 = (MethodInfo *)0x0;
      pIStackY_158 = (void *)0x43ef55f;
      pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar24,(MethodInfo *)0x0);
      ppSVar39 = (System_Object_array **)(Il2CppRGCTXData *)0x1;
      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
        pMVar40 = (MethodInfo *)0x0;
        pIStackY_158 = (void *)0x43ef572;
        bVar16 = UnityEngine_GameObject__get_activeSelf(pUVar17,(MethodInfo *)0x0);
        if ((char)bVar16 != '\0') {
          return;
        }
        __this = (UI_TipPanel_o *)(pIVar29->_1).implementedInterfaces;
        pIVar24 = (Il2CppClass *)0x0;
        ppSVar39 = (System_Object_array **)pIVar36;
        if (__this != (UI_TipPanel_o *)0x0) {
          pMVar40 = (MethodInfo *)0x0;
          pIStackY_158 = (void *)0x43ef594;
          UI_TipPanel__SetRandomTip(__this,(MethodInfo *)0x0);
          pIVar24 = (Il2CppClass *)(pIVar29->_1).implementedInterfaces;
          if (pIVar24 != (Il2CppClass *)0x0) {
            pMVar40 = (MethodInfo *)0x0;
            pIStackY_158 = (void *)0x43ef5ab;
            pUVar17 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pIVar24,(MethodInfo *)0x0);
            if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
              pMVar40 = (MethodInfo *)0x1;
              pIStackY_158 = (void *)0x43ef5c3;
              UnityEngine_GameObject__SetActive(pUVar17,1,(MethodInfo *)0x0);
              pUVar2 = (pIVar29->_1).methods;
              pIVar24 = (Il2CppClass *)0x0;
              if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
                pMVar40 = (MethodInfo *)0x1;
                pIStackY_158 = (void *)0x43ef5df;
                UI_LoadingBackgroundPanel__SetRandomBackground(pUVar2,1,0,(MethodInfo *)method_00);
                pUVar2 = (pIVar29->_1).methods;
                pIVar24 = (Il2CppClass *)0x0;
                if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
                  pMVar40 = (MethodInfo *)0x0;
                  pIStackY_158 = (void *)0x43ef5f7;
                  UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar2,(MethodInfo *)0x0);
                  if (g_data_057ae510 == '\0') {
                    pIStackY_158 = (void *)0x43ef627;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
                    pIStackY_158 = (void *)0x43ef633;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                    g_data_057ae510 = '\x01';
                  }
                  pUVar3 = (UI_LoadingProgressPanel_o *)(pIVar29->_1).nestedTypes;
                  pIVar24 = (Il2CppClass *)0x0;
                  if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
                    UI_LoadingProgressPanel__ShowImmediate(pUVar3,0.0,pMVar40);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    pIStackY_158 = (void *)0x43ef665;
    pvVar45 = (void *)il2cpp_runtime_helper_022b2c90();
    ppSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(extraout_RDX & 0xffffffff)
    ;
    pvVar37 = (void *)((ulong)pMVar40 & 0xffffffff);
    fVar43 = SUB84(pvVar45,0);
    pIStackY_168 = pIVar29;
    pSStackY_160 = (System_String_array *)pIVar53;
    pIStackY_158 = (Il2CppRGCTXData *)ppSVar39;
    if (g_data_057ae510 == '\0') {
      pIStackY_180 = (Il2CppRGCTXData *)0x43ef698;
      pvStackY_178 = pvVar45;
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
      pIStackY_180 = (Il2CppRGCTXData *)0x43ef6a4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae510 = '\x01';
      fVar43 = pvStackY_178._0_4_;
    }
    pUVar3 = (UI_LoadingProgressPanel_o *)(pIVar24->_1).nestedTypes;
    pIVar29 = (Il2CppClass *)0x0;
    if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
      fVar44 = 1.0;
      if (fVar43 <= 1.0) {
        fVar44 = fVar43;
      }
      fVar44 = (float)(-(uint)(0.0 <= fVar43) & (uint)fVar44);
      if ((char)ppSVar34 == '\0') {
        pIStackY_180 = (Il2CppRGCTXData *)0x43ef6f2;
        UI_LoadingProgressPanel__Show(pUVar3,fVar44,pMVar40);
      }
      else {
        pIStackY_180 = (Il2CppRGCTXData *)0x43ef6df;
        UI_LoadingProgressPanel__ShowImmediate(pUVar3,fVar44,pMVar40);
      }
      if ((char)pvVar37 == '\0') {
        return;
      }
      ppSVar34 = &TypeInfo_UIManager;
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        pIStackY_180 = (Il2CppRGCTXData *)0x43ef70f;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar29 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
      if (pIVar29 != (Il2CppClass *)0x0) {
        pUVar4 = (pIVar29->_1).image;
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if (((pUVar4->_2).naturalAligment < bVar1) ||
           ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_043ef7cc;
        pIStackY_180 = (Il2CppRGCTXData *)0x43ef75b;
        UI_InGameMenu__OnFinishLoading((UI_InGameMenu_o *)pIVar29,(MethodInfo *)0x0);
        if (g_data_057ae511 == '\0') {
          pIStackY_180 = (Il2CppRGCTXData *)0x43ef770;
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
          g_data_057ae511 = '\x01';
        }
        pIStackY_180 = (Il2CppRGCTXData *)0x43ef786;
        pIVar25 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
        pIStackY_180 = (Il2CppRGCTXData *)0x43ef793;
        pIVar29 = pIVar25;
        System_Object___ctor((Il2CppObject *)pIVar25,(MethodInfo *)0x0);
        *(undefined4 *)&((UI_InGameMenu_Fields *)&(pIVar25->_1).name)->m_CachedPtr = 0;
        ppSVar34 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)0x0;
        if (pIVar25 != (Il2CppClass *)0x0) {
          (pIVar25->_1).byval_arg.data = pIVar24;
          pIStackY_180 = (Il2CppRGCTXData *)0x43ef7b2;
          il2cpp_runtime_helper_022b4080(&(pIVar25->_1).byval_arg,pIVar24);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)pIVar24,(System_Collections_IEnumerator_o *)pIVar25,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    pIStackY_180 = (Il2CppRGCTXData *)0x43ef7cc;
    il2cpp_runtime_helper_022b2c90();
label_043ef7cc:
    pIStackY_180 = (Il2CppRGCTXData *)0x43ef7d1;
    il2cpp_runtime_helper_022b2fd0();
    __this_16 = (UI_BasePopup_o *)(pIVar29->_1).implementedInterfaces;
    pIStackY_180 = (Il2CppRGCTXData *)ppSVar34;
    if (__this_16 != (UI_BasePopup_o *)0x0) {
      pIStackY_188 = (Il2CppClass *)0x43ef7f7;
      pUVar17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_16,(MethodInfo *)0x0);
      if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
        pIStackY_188 = (Il2CppClass *)0x43ef808;
        UnityEngine_GameObject__SetActive(pUVar17,0,(MethodInfo *)0x0);
        pUVar5 = (UI_ItemHandler_o *)(pIVar29->_1).nestedTypes;
        __this_16 = (UI_BasePopup_o *)0x0;
        if (pUVar5 != (UI_ItemHandler_o *)0x0) {
          pIStackY_188 = (Il2CppClass *)0x43ef824;
          (**(code **)&pUVar5->klass[1]._2.field_count)();
          pUVar6 = (pIVar29->_1).methods;
          __this_16 = (UI_BasePopup_o *)0x0;
          if (pUVar6 != (UI_EmoteHandler_o *)0x0) {
            pUVar7 = pUVar6->klass;
            vtableDispatch = *(code **)&pUVar7[1]._2.field_count;
            uVar8._0_2_ = pUVar7[1]._2.interfaces_count;
            uVar8._2_2_ = pUVar7[1]._2.interface_offsets_count;
            uVar8._4_1_ = pUVar7[1]._2.typeHierarchyDepth;
            uVar8._5_1_ = pUVar7[1]._2.genericRecursionDepth;
            uVar8._6_1_ = pUVar7[1]._2.rank;
            uVar8._7_1_ = pUVar7[1]._2.minimumAlignment;
            (*vtableDispatch)(pUVar6,uVar8,extraout_RDX_00,vtableDispatch);
            return;
          }
        }
      }
    }
    pIStackY_188 = (Il2CppClass *)0x43ef849;
    uVar14 = il2cpp_runtime_helper_022b2c90();
    uStackY_198 = (Il2CppClass *)CONCAT44(extraout_XMM0_Da,uVar14);
    pIStackY_190 = pIVar29;
    pIStackY_188 = pIVar24;
    if (g_data_057ae516 == '\0') {
      pIStackY_1a0 = (Il2CppClass *)0x43ef872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      pIStackY_1a0 = (Il2CppClass *)0x43ef87e;
      il2cpp_runtime_helper_023445d0(&"%");
      g_data_057ae516 = '\x01';
    }
    plVar22 = __this_16[1].monitor;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      pIStackY_1a0 = (Il2CppClass *)0x43ef8a4;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_12 = (UI_BasePopup_o *)0x0;
    pIStackY_1a0 = (Il2CppClass *)0x43ef8bb;
    pSVar18 = Utility_Util__FormatFloat(uStackY_198._4_4_ * 100.0,0,(MethodInfo *)0x0);
    if (pSVar18 != (System_String_o *)0x0) {
      pIStackY_1a0 = (Il2CppClass *)0x43ef8d3;
      __this_12 = (UI_BasePopup_o *)
                  (*(pSVar18->klass->vtable)._3_ToString.methodPtr)
                            (pSVar18,(pSVar18->klass->vtable)._3_ToString.method);
      pIStackY_1a0 = (Il2CppClass *)0x43ef8e7;
      pSVar18 = System_String__Concat_3ae5ba0((System_String_o *)__this_12,"%",(MethodInfo *)0x0);
      if (plVar22 != (long *)0x0) {
        pIStackY_1a0 = (Il2CppClass *)0x43ef902;
        (**(code **)(*plVar22 + 0x5e8))(plVar22,pSVar18,*(undefined8 *)(*plVar22 + 0x5f0));
        plVar21 = (long *)__this_16[1].fields.m_CachedPtr;
        __this_12 = (UI_BasePopup_o *)0x0;
        if (plVar21 != (long *)0x0) {
          pIStackY_1a0 = (Il2CppClass *)0x43ef924;
          (**(code **)(*plVar21 + 0x428))(uStackY_198._4_4_);
          UI_BasePopup__ShowImmediate(__this_16,(MethodInfo *)0x0);
          return;
        }
      }
    }
    pIStackY_1a0 = (Il2CppClass *)0x43ef93a;
    auStackY_1d8._40_4_ = il2cpp_runtime_helper_022b2c90();
    auStackY_1d8._44_4_ = extraout_XMM0_Da_00;
    pUStackY_1a8 = (UnityEngine_Object_o *)plVar22;
    pIStackY_1a0 = (Il2CppClass *)__this_16;
    if (g_data_057ae517 == '\0') {
      auStackY_1d8._32_8_ = (void *)0x43ef962;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      auStackY_1d8._32_8_ = (void *)0x43ef96e;
      il2cpp_runtime_helper_023445d0(&"%");
      g_data_057ae517 = '\x01';
    }
    plVar22 = __this_12[1].monitor;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      auStackY_1d8._32_8_ = (void *)0x43ef994;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar18 = (System_String_o *)0x0;
    auStackY_1d8._32_8_ = (void *)0x43ef9ab;
    pSVar27 = Utility_Util__FormatFloat((float)auStackY_1d8._44_4_ * 100.0,0,(MethodInfo *)0x0);
    if (pSVar27 != (System_String_o *)0x0) {
      auStackY_1d8._32_8_ = (void *)0x43ef9c3;
      pSVar18 = (System_String_o *)
                (*(pSVar27->klass->vtable)._3_ToString.methodPtr)
                          (pSVar27,(pSVar27->klass->vtable)._3_ToString.method);
      auStackY_1d8._32_8_ = (void *)0x43ef9d7;
      pSVar27 = System_String__Concat_3ae5ba0(pSVar18,"%",(MethodInfo *)0x0);
      if (plVar22 != (long *)0x0) {
        auStackY_1d8._32_8_ = (void *)0x43ef9f2;
        (**(code **)(*plVar22 + 0x5e8))(plVar22,pSVar27,*(undefined8 *)(*plVar22 + 0x5f0));
        plVar21 = (long *)__this_12[1].fields.m_CachedPtr;
        pSVar18 = (System_String_o *)0x0;
        if (plVar21 != (long *)0x0) {
          auStackY_1d8._32_8_ = (void *)0x43efa14;
          (**(code **)(*plVar21 + 0x428))(auStackY_1d8._44_4_);
          UI_BasePopup__Show(__this_12,(MethodInfo *)0x0);
          return;
        }
      }
    }
    auStackY_1d8._32_8_ = (void *)0x43efa2a;
    auStackY_1d8._16_8_ = il2cpp_runtime_helper_022b2c90();
    auStackY_1d8._24_8_ = plVar22;
    auStackY_1d8._32_8_ = __this_12;
    if (g_data_057ae511 == '\0') {
      auStackY_1d8._8_8_ = (void *)0x43efa4c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
      g_data_057ae511 = '\x01';
    }
    auStackY_1d8._8_8_ = (void *)0x43efa62;
    __this_13 = (System_Enum_c *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
    uVar14 = 0;
    auStackY_1d8._8_8_ = (void *)0x43efa6f;
    __this_17 = __this_13;
    System_Object___ctor((Il2CppObject *)__this_13,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_13->_1).name = 0;
    if (__this_13 != (System_Enum_c *)0x0) {
      (__this_13->_1).byval_arg.data = pSVar18;
      auStackY_1d8._8_8_ = (void *)0x43efa8e;
      il2cpp_runtime_helper_022b4080(&(__this_13->_1).byval_arg,pSVar18);
      return;
    }
    auStackY_1d8._8_8_ = (void *)0x43efa9e;
    il2cpp_runtime_helper_022b2c90();
    auStackY_1d8._0_8_ = __this_13;
    auStackY_1d8._8_8_ = pvVar37;
    System_Object___ctor((Il2CppObject *)__this_17,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_17->_1).name = uVar14;
    return;
  }
  pIStackY_158 = (void *)0x4454335;
  pvStackY_178 = (void *)il2cpp_runtime_helper_022b2c90();
  pSStackY_160 = (System_String_array *)&TypeInfo_UIManager;
  pUStackY_170 = x;
  pIStackY_168 = (Il2CppClass *)unaff_R12;
  pIStackY_158 = (Il2CppRGCTXData *)unaff_R15;
  if (g_data_057ae721 == '\0') {
    pIStackY_180 = (Il2CppRGCTXData *)0x4454364;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    pIStackY_180 = (Il2CppRGCTXData *)0x4454370;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pIStackY_180 = (Il2CppRGCTXData *)0x445437c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pIStackY_180 = (Il2CppRGCTXData *)0x4454388;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit);
    pIStackY_180 = (Il2CppRGCTXData *)0x4454394;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit);
    pIStackY_180 = (Il2CppRGCTXData *)0x44543a0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu);
    pIStackY_180 = (Il2CppRGCTXData *)0x44543ac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu);
    pIStackY_180 = (Il2CppRGCTXData *)0x44543b8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu);
    pIStackY_180 = (Il2CppRGCTXData *)0x44543c4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    pIStackY_180 = (Il2CppRGCTXData *)0x44543d0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu);
    pIStackY_180 = (Il2CppRGCTXData *)0x44543dc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu);
    pIStackY_180 = (Il2CppRGCTXData *)0x44543e8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStackY_180 = (Il2CppRGCTXData *)0x44543f4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIStackY_180 = (Il2CppRGCTXData *)0x4454400;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pIStackY_180 = (Il2CppRGCTXData *)0x445440c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae721 = '\x01';
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x20), lVar12 == 0)) goto label_0445470d;
  pvVar37 = *(void **)(lVar12 + 0x18);
  unaff_R15 = &TypeInfo_UIManager;
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_180 = (Il2CppRGCTXData *)0x445445a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar23[1].monitor = pvVar37;
  pIStackY_180 = (Il2CppRGCTXData *)0x4454474;
  il2cpp_runtime_helper_022b4080(&pIVar23[1].monitor);
  x = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  unaff_R12 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStackY_180 = (Il2CppRGCTXData *)0x445449b;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStackY_180 = (Il2CppRGCTXData *)0x44544a7;
  bVar16 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar16 != '\0') {
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_180 = (Il2CppRGCTXData *)0x44544bc;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this_00 == (UnityEngine_Component_o *)0x0) goto label_0445470d;
    pIStackY_180 = (Il2CppRGCTXData *)0x44544da;
    x = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStackY_180 = (Il2CppRGCTXData *)0x44544ef;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStackY_180 = (Il2CppRGCTXData *)0x44544f9;
    UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
  }
  switch((int32_t)pIVar29) {
  case 1:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_180 = (Il2CppRGCTXData *)0x4454527;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar24 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar24 == (Il2CppClass *)0x0) goto label_0445470d;
    pIStackY_180 = (Il2CppRGCTXData *)0x445454d;
    System_Collections_Generic_Dictionary_object__object___Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)pIVar24,MethodInfo_Void_Clear);
    pIStackY_180 = (Il2CppRGCTXData *)0x445455c;
    pIVar28 = UI_ElementFactory__CreateDefaultMenu_object_(MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar23[2].monitor = pIVar28;
    pIStackY_180 = (Il2CppRGCTXData *)0x4454576;
    il2cpp_runtime_helper_022b4080(&pIVar23[2].monitor);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      pIStackY_180 = (Il2CppRGCTXData *)0x445458e;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStackY_180 = (Il2CppRGCTXData *)0x4454595;
    GameManagers_ChatManager__Reset((MethodInfo *)0x0);
  default:
    iVar33 = TypeInfo_UIManager->m_Items[8].fields.next;
    goto joined_r0x044546fa;
  case 2:
    puVar26 = &MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu;
    break;
  case 3:
    puVar26 = &MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu;
    break;
  case 4:
    if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
      pIStackY_180 = (Il2CppRGCTXData *)0x4454689;
      il2cpp_runtime_helper_02337ed0();
    }
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') {
      puVar26 = &MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit;
    }
    else {
      puVar26 = &MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit;
    }
    break;
  case 5:
    puVar26 = &MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu;
    break;
  case 6:
    puVar26 = &MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu;
    break;
  case 7:
    puVar26 = &MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu;
  }
  pIStackY_180 = (Il2CppRGCTXData *)0x44546c2;
  pIVar23 = UI_ElementFactory__CreateDefaultMenu_object_((MethodInfo_24FB0E0 *)*puVar26);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_180 = (Il2CppRGCTXData *)0x44546d6;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar28 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar28[2].monitor = pIVar23;
  pIStackY_180 = (Il2CppRGCTXData *)0x44546f0;
  il2cpp_runtime_helper_022b4080(&pIVar28[2].monitor);
  iVar33 = TypeInfo_UIManager->m_Items[8].fields.next;
joined_r0x044546fa:
  if (iVar33 == 0) {
    pIStackY_180 = (Il2CppRGCTXData *)0x4454705;
    il2cpp_runtime_helper_02337ed0();
  }
  x = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStackY_180 = (Il2CppRGCTXData *)0x44545c2;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStackY_180 = (Il2CppRGCTXData *)0x44545ce;
  bVar16 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar16 == '\0') {
label_0445462b:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_180 = (Il2CppRGCTXData *)0x445463c;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined1 *)&TypeInfo_UIManager->m_Items[6].fields.key[5].monitor = 1;
    return;
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_180 = (Il2CppRGCTXData *)0x44545e3;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar22 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (plVar22 != (long *)0x0) {
    pIStackY_180 = (Il2CppRGCTXData *)0x445460a;
    (**(code **)(*plVar22 + 0x178))(plVar22,*(undefined8 *)(*plVar22 + 0x180));
    __this_01 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this_01 != (UI_BaseMenu_o *)0x0) {
      pIStackY_180 = (Il2CppRGCTXData *)0x445462b;
      UI_BaseMenu__ApplyScale(__this_01,(int32_t)pIVar29,(MethodInfo *)0x0);
      goto label_0445462b;
    }
  }
label_0445470d:
  pIStackY_180 = (Il2CppRGCTXData *)0x4454712;
  auStackY_1d8._40_8_ = il2cpp_runtime_helper_022b2c90();
  pUStackY_1a8 = x;
  pIStackY_1a0 = (Il2CppClass *)unaff_R12;
  uStackY_198 = (Il2CppClass *)unaff_R13;
  pIStackY_190 = (Il2CppClass *)((ulong)pIVar29 & 0xffffffff);
  pIStackY_188 = (Il2CppClass *)unaff_R15;
  pIStackY_180 = (Il2CppRGCTXData *)ppSVar39;
  if (g_data_057ae720 == '\0') {
    auStackY_1d8._32_8_ = (void *)0x4454740;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStackY_1d8._32_8_ = (void *)0x445474c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
    auStackY_1d8._32_8_ = (void *)0x4454758;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AudioSource);
    auStackY_1d8._32_8_ = (void *)0x4454764;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    auStackY_1d8._32_8_ = (void *)0x4454770;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    auStackY_1d8._32_8_ = (void *)0x445477c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    auStackY_1d8._32_8_ = (void *)0x4454788;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    auStackY_1d8._32_8_ = (void *)0x4454794;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    auStackY_1d8._32_8_ = (void *)0x44547a0;
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MainMenuSounds");
    g_data_057ae720 = '\x01';
  }
  auStackY_1d8._32_8_ = (void *)0x44547b6;
  pIVar29 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AudioSource);
  auStackY_1d8._32_8_ = (void *)0x44547cb;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar29,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    auStackY_1d8._32_8_ = (void *)0x44547e4;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar23[6].klass = pIVar29;
  auStackY_1d8._32_8_ = (void *)0x44547ff;
  il2cpp_runtime_helper_022b4080(pIVar23 + 6,pIVar29);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    auStackY_1d8._32_8_ = (void *)0x4454817;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            **(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    auStackY_1d8._32_8_ = (void *)0x445483c;
    il2cpp_runtime_helper_02337ed0();
  }
  auStackY_1d8._32_8_ = (void *)0x445485a;
  ppMVar32 = (MethodInfo_255AB00 **)MethodInfo_GameObject_InstantiateAsset_GameObject;
  pSVar41 = pSVar35;
  __this_14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)pSVar35,"Prefabs/MainMenu/MainMenuSounds",0,(MethodInfo_25BC8B0 *)MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    ppMVar32 = &MethodInfo_AudioSource_GetComponentsInChildren_AudioSource;
    auStackY_1d8._32_8_ = (void *)0x4454875;
    pSVar30 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)__this_14,MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    pSVar41 = __this_14;
    if (pSVar30 != (System_Object_array *)0x0) {
      uVar15 = (uint)pSVar30->max_length;
      if (0 < (int)uVar15) {
        uVar42 = 0;
        ppSVar39 = &MethodInfo_Void_Add;
        do {
          uVar14 = SUB84(__this_14,0);
          if (uVar15 <= uVar42) goto label_04454915;
          __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      pSVar30->m_Items[(int)uVar42];
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            auStackY_1d8._32_8_ = (void *)0x44548bf;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar41 = TypeInfo_UIManager;
          if (__this_02 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          pSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
          auStackY_1d8._32_8_ = (void *)0x44548dd;
          pSVar41 = __this_02;
          pSVar18 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
          if (pSVar35 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          auStackY_1d8._32_8_ = (void *)0x44548f4;
          ppMVar32 = (MethodInfo_255AB00 **)MethodInfo_Void_Add;
          __this_14 = pSVar35;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar35,
                     (Il2CppObject *)pSVar18,(Il2CppObject *)__this_02,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
          uVar42 = uVar42 + 1;
          uVar15 = (uint)pSVar30->max_length;
        } while ((int)uVar42 < (int)uVar15);
      }
      return;
    }
  }
label_04454910:
  uVar14 = SUB84(pSVar41,0);
  auStackY_1d8._32_8_ = (void *)0x4454915;
  il2cpp_runtime_helper_022b2c90();
label_04454915:
  auStackY_1d8._32_8_ = (void *)0x445491a;
  il2cpp_runtime_helper_022b2ca0();
  pIVar29 = (Il2CppClass *)auStackY_1d8;
  args = (MethodInfo_3104D80 **)ppMVar32;
  auStackY_1d8._24_8_ = pSVar35;
  auStackY_1d8._32_8_ = ppSVar39;
  if (g_data_057ae71c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UISound);
    g_data_057ae71c = '\x01';
    args = (MethodInfo_3104D80 **)ppMVar32;
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar24 = TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
  auStackY_1d8._0_8_ = TypeInfo_UISound;
  auStackY_1d8._8_8_ = (void *)0xffffffffffffffff;
  auStackY_1d8._16_4_ = uVar14;
  pIVar25 = (Il2CppClass *)0x0;
  pIVar31 = (Il2CppClass *)System_Enum__ToString((System_Enum_o *)auStackY_1d8,(MethodInfo *)0x0);
  if (pIVar24 != (Il2CppClass *)0x0) {
    args = &MethodInfo_AudioSource_get_Item;
    __this_15 = (UnityEngine_AudioSource_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pIVar24,
                           (Il2CppObject *)pIVar31,MethodInfo_AudioSource_get_Item);
    pIVar25 = pIVar31;
    pIVar29 = pIVar24;
    if (__this_15 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play_4daa2c0(__this_15,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar24 = pIVar25;
  if (g_data_057ae71d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71d = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454a6b;
label_04454a0b:
    pIVar31 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454a0b;
label_04454a6b:
    il2cpp_runtime_helper_02337ed0();
    pIVar31 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar31 != (Il2CppClass *)0x0) {
    pIVar24 = pIVar29;
    bVar16 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar31,
                        (Il2CppObject *)pIVar29,MethodInfo_Boolean_ContainsKey);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar31 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar31 != (Il2CppClass *)0x0) {
      if ((char)bVar16 != '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar31,(Il2CppObject *)pIVar29,
                   (Il2CppObject *)pIVar25,MethodInfo_Void_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar31,(Il2CppObject *)pIVar29,
                 (Il2CppObject *)pIVar25,MethodInfo_Void_Add);
      return;
    }
  }
  pIVar29 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae71e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71e = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454b86;
label_04454b33:
    pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454b33;
label_04454b86:
    il2cpp_runtime_helper_02337ed0();
    pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar25 != (Il2CppClass *)0x0) {
    pIVar24 = pIVar29;
    bVar16 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar25,
                        (Il2CppObject *)pIVar29,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar16 == '\0') {
      return;
    }
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar25 != (Il2CppClass *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar25,(Il2CppObject *)pIVar29,
                 MethodInfo_String_get_Item);
      return;
    }
  }
  pIVar29 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae722 = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454ca2;
label_04454c43:
    pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454c43;
label_04454ca2:
    il2cpp_runtime_helper_02337ed0();
    pIVar25 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  if (pIVar25 != (Il2CppClass *)0x0) {
    pIVar24 = pIVar29;
    bVar16 = System_Collections_Generic_List_object___Contains
                       ((System_Collections_Generic_List_object__o *)pIVar25,(Il2CppObject *)pIVar29,
                        MethodInfo_Boolean_Contains);
    if ((char)bVar16 == '\0') {
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar29 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
      if (pIVar29 == (Il2CppClass *)0x0) goto label_04454d23;
      pIVar29 = (Il2CppClass *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pIVar29,0,MethodInfo_String_get_Item);
    }
    System_String__Concat_3ae5ba0((System_String_o *)pIVar29,"Icon",(MethodInfo *)0x0);
    return;
  }
label_04454d23:
  pSVar18 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar18 = UI_UIManager__GetLocale(pSVar18,(System_String_o *)pIVar24,item,"","",in_R9);
  System_String__Format_3af7980(pSVar18,(System_Object_array *)args,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$GetThemeColor
// il2cpp: UnityEngine_Color_o UI_UIManager__GetThemeColor (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x4456500

UnityEngine_Color_o
UI_UIManager__GetThemeColor
          (System_String_o *panel,System_String_o *category,System_String_o *item,
          System_String_o *fallbackPanel,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  SimpleJSONFixed_JSONNode_c *pSVar6;
  System_Single_array *pSVar7;
  SimpleJSONFixed_JSONNode_Enumerator_o __this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar8;
  bool_conflict bVar9;
  Il2CppObject *a;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  long *plVar11;
  System_String_o *pSVar12;
  System_Collections_Generic_List_float__o *__this_03;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Color_o UVar20;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar21;
  undefined1 auVar22 [12];
  undefined8 in_stack_fffffffffffffee8;
  System_String_o *in_stack_fffffffffffffef0;
  System_String_o *in_stack_fffffffffffffef8;
  System_String_o *in_stack_ffffffffffffff00;
  Il2CppMethodPointer pIVar23;
  Il2CppMethodPointer pIVar24;
  InvokerMethod pIVar25;
  char *pcVar26;
  Il2CppClass *pIVar27;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  
  if (g_data_057ae72e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Single);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_float);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"{0} {1} {2} theme error.");
    g_data_057ae72e = '\x01';
  }
  pIVar27 = (Il2CppClass *)0x0;
  pIVar25 = (InvokerMethod)0x0;
  pcVar26 = (char *)0x0;
  pIVar23 = (Il2CppMethodPointer)0x0;
  pIVar24 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 8);
  if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04456b51:
    il2cpp_runtime_helper_022b2c90();
label_04456b56:
    plVar11 = (long *)il2cpp_runtime_helper_022b2c90();
label_04456b5b:
    plVar11 = (long *)il2cpp_runtime_helper_022b2fd0(plVar11);
label_04456b63:
    il2cpp_runtime_helper_022b2fd0(plVar11);
label_04456b6b:
    il2cpp_runtime_helper_022b2c90();
label_04456b70:
    il2cpp_runtime_helper_022b2c90();
label_04456b75:
    il2cpp_runtime_helper_022b2c90();
label_04456b7a:
    __this_01.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef0;
    __this_01.fields._0_8_ = in_stack_fffffffffffffee8;
    __this_01.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
    __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_ffffffffffffff00;
    __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
    __this_01.fields.m_Object.fields._32_8_ = pIVar24;
    __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar25;
    __this_01.fields.m_Array.fields._8_8_ = pcVar26;
    __this_01.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)pIVar27;
    bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_01,(MethodInfo *)&stack0xffffffffffffff08);
    if ((char)bVar9 == '\0') {
label_04456bcb:
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
    }
    else {
      __this_02.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef0;
      __this_02.fields._0_8_ = in_stack_fffffffffffffee8;
      __this_02.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
      __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_ffffffffffffff00;
      __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
      __this_02.fields.m_Object.fields._32_8_ = pIVar24;
      __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar25;
      __this_02.fields.m_Array.fields._8_8_ = pcVar26;
      __this_02.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)pIVar27;
      SVar21 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                         (__this_02,(MethodInfo *)&stack0xffffffffffffff08);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar21,(MethodInfo *)0x0);
      if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_04456bc6:
        il2cpp_runtime_helper_022b2c90();
        goto label_04456bcb;
      }
    }
    pSVar6 = pSVar10->klass;
    bVar2 = (TypeInfo_JSONNumber->_2).naturalAligment;
    if ((bVar2 <= (pSVar6->_2).naturalAligment) &&
       ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_JSONNumber)) {
      pSVar12 = (System_String_o *)(*(pSVar6->vtable)._9_get_Value.methodPtr)(pSVar10);
      System_Single__Parse(pSVar12,(MethodInfo *)0x0);
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_022b2c90();
    }
label_04456c19:
    auVar22 = il2cpp_runtime_helper_022b2fd0(pSVar10);
    if (auVar22._8_4_ != 1) {
      _Unwind_Resume(auVar22._0_8_);
    }
    puVar13 = (undefined8 *)__cxa_begin_catch(auVar22._0_8_);
    cVar8 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar13);
    if (cVar8 == '\0') {
      puVar15 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar15 = *puVar13;
      __cxa_throw(puVar15,&PTR_PTR_05215060,0);
    }
    __cxa_end_catch();
    pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"{0} {1} {2} theme error.");
    pSVar12 = System_String__Format_3af7930
                        (pSVar12,(Il2CppObject *)in_stack_fffffffffffffef0,
                         (Il2CppObject *)in_stack_fffffffffffffef8,(Il2CppObject *)in_stack_ffffffffffffff00,
                         (MethodInfo *)0x0);
    lVar14 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    iVar3 = *(int *)(lVar14 + 0xe4);
  }
  else {
    bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar5,*(Il2CppObject **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x18),MethodInfo_Boolean_ContainsKey);
    in_stack_fffffffffffffef0 = panel;
    if ((char)bVar9 == '\0') {
      a = (Il2CppObject *)0x0;
      iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        in_stack_fffffffffffffef0 = panel;
      }
      pSVar5 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_UIManager + 0xb8) + 8);
      if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04456b51;
      a = System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar5,*(Il2CppObject **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x18),MethodInfo_JSONObject_get_Item);
      iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar9 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      if (a == (Il2CppObject *)0x0) goto label_04456b51;
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).methodPtr)
                          (a,in_stack_fffffffffffffef0,
                           (((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') goto label_044567ec;
      plVar11 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).methodPtr)
                                  (a,in_stack_fffffffffffffef0,
                                   (((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).method
                                  );
      if (plVar11 == (long *)0x0) goto label_04456b51;
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (**(code **)(*plVar11 + 0x1a8))(plVar11,category,*(undefined8 *)(*plVar11 + 0x1b0));
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') goto label_044567ec;
      plVar11 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).methodPtr)
                                  (a,in_stack_fffffffffffffef0,
                                   (((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).method
                                  );
      if ((plVar11 == (long *)0x0) ||
         (plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))
                                      (plVar11,category,*(undefined8 *)(*plVar11 + 0x1b0)),
         plVar11 == (long *)0x0)) goto label_04456b51;
      pSVar10 = (SimpleJSONFixed_JSONNode_o *)
                (**(code **)(*plVar11 + 0x1a8))(plVar11,item,*(undefined8 *)(*plVar11 + 0x1b0));
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') goto label_044567ec;
      in_stack_fffffffffffffef8 = category;
      in_stack_ffffffffffffff00 = item;
      __this_03 = (System_Collections_Generic_List_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_float);
      System_Collections_Generic_List_float____ctor(__this_03,MethodInfo_List_1_System_Single);
      plVar11 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).methodPtr)
                                  (a,in_stack_fffffffffffffef0,
                                   (((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).method
                                  );
      if (plVar11 == (long *)0x0) goto label_04456b6b;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))(plVar11,category,*(undefined8 *)(*plVar11 + 0x1b0));
      if (plVar11 == (long *)0x0) goto label_04456b70;
      plVar11 = (long *)(**(code **)(*plVar11 + 0x1a8))(plVar11,item,*(undefined8 *)(*plVar11 + 0x1b0));
      if (plVar11 == (long *)0x0) goto label_04456b75;
      if ((*(byte *)(*plVar11 + 0x130) < *(byte *)(TypeInfo_JSONArray + 0x130)) ||
         (*(long *)(*(long *)(*plVar11 + 200) + -8 + (ulong)*(byte *)(TypeInfo_JSONArray + 0x130) * 8) !=
          TypeInfo_JSONArray)) goto label_04456b5b;
      lVar14 = *plVar11;
      if ((*(byte *)(lVar14 + 0x130) < *(byte *)(TypeInfo_JSONArray + 0x130)) ||
         (*(long *)(*(long *)(lVar14 + 200) + -8 + (ulong)*(byte *)(TypeInfo_JSONArray + 0x130) * 8) != TypeInfo_JSONArray
         )) goto label_04456b63;
      (**(code **)(lVar14 + 0x338))(&local_78,plVar11,*(undefined8 *)(lVar14 + 0x340));
      pIVar23 = local_78;
      pIVar24 = pIStack_70;
      pIVar25 = local_68;
      pcVar26 = pcStack_60;
      pIVar27 = local_58;
      if (__this_03 != (System_Collections_Generic_List_float__o *)0x0) {
        while (__this.fields.m_Object.fields._dictionary =
                    (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef0,
              __this.fields._0_8_ = in_stack_fffffffffffffee8,
              __this.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8,
              __this.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_ffffffffffffff00,
              __this.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23,
              __this.fields.m_Object.fields._32_8_ = pIVar24,
              __this.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar25,
              __this.fields.m_Array.fields._8_8_ = pcVar26,
              __this.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)pIVar27,
              bVar9 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                (__this,(MethodInfo *)&stack0xffffffffffffff08), (char)bVar9 != '\0') {
          __this_00.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffef0;
          __this_00.fields._0_8_ = in_stack_fffffffffffffee8;
          __this_00.fields.m_Object.fields._8_8_ = in_stack_fffffffffffffef8;
          __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)in_stack_ffffffffffffff00;
          __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar23;
          __this_00.fields.m_Object.fields._32_8_ = pIVar24;
          __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar25;
          __this_00.fields.m_Array.fields._8_8_ = pcVar26;
          __this_00.fields.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)pIVar27;
          SVar21 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_00,(MethodInfo *)&stack0xffffffffffffff08);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar21,(MethodInfo *)0x0);
          if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04456bc6;
          pSVar6 = pSVar10->klass;
          bVar2 = (TypeInfo_JSONNumber->_2).naturalAligment;
          if (((pSVar6->_2).naturalAligment < bVar2) ||
             ((pSVar6->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONNumber)) goto label_04456c19;
          pSVar12 = (System_String_o *)(*(pSVar6->vtable)._9_get_Value.methodPtr)(pSVar10);
          fVar16 = System_Single__Parse(pSVar12,(MethodInfo *)0x0);
          lVar14 = MethodInfo_Void_Add;
          piVar1 = &(__this_03->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar7 = (__this_03->fields)._items;
          if (pSVar7 == (System_Single_array *)0x0) goto label_04456b56;
          uVar4 = (__this_03->fields)._size;
          if (uVar4 < (uint)pSVar7->max_length) {
            (__this_03->fields)._size = uVar4 + 1;
            pSVar7->m_Items[(int)uVar4] = fVar16 / 255.0;
          }
          else {
            System_Collections_Generic_List_float___AddWithResize
                      (__this_03,fVar16 / 255.0,
                       *(MethodInfo_36649C0 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        fVar17 = System_Collections_Generic_List_float___get_Item(__this_03,0,MethodInfo_Single_get_Item);
        fVar18 = System_Collections_Generic_List_float___get_Item(__this_03,1,MethodInfo_Single_get_Item);
        fVar16 = System_Collections_Generic_List_float___get_Item(__this_03,2,MethodInfo_Single_get_Item);
        fVar19 = System_Collections_Generic_List_float___get_Item(__this_03,3,MethodInfo_Single_get_Item);
        goto label_04456873;
      }
      goto label_04456b7a;
    }
label_044567ec:
    bVar9 = System_String__op_Inequality(in_stack_fffffffffffffef0,fallbackPanel,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar20 = UI_UIManager__GetThemeColor(fallbackPanel,category,item,fallbackPanel,method);
      fVar16 = UVar20.fields.b;
      fVar19 = UVar20.fields.a;
      fVar17 = UVar20.fields.r;
      fVar18 = UVar20.fields.g;
      goto label_04456873;
    }
    pSVar12 = System_String__Format_3af7930
                        ("{0} {1} {2} theme error.",(Il2CppObject *)in_stack_fffffffffffffef0,(Il2CppObject *)category,
                         (Il2CppObject *)item,(MethodInfo *)0x0);
    iVar3 = *(int *)(TypeInfo_Debug + 0xe4);
    lVar14 = TypeInfo_Debug;
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0(lVar14);
  }
  UnityEngine_Debug__Log((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
  fVar16 = 1.0;
  fVar19 = 1.0;
  fVar17 = fVar16;
  fVar18 = fVar19;
label_04456873:
  UVar20.fields.g = fVar18;
  UVar20.fields.r = fVar17;
  UVar20.fields.a = fVar19;
  UVar20.fields.b = fVar16;
  return (UnityEngine_Color_o)UVar20.fields;
}


// UI.UIManager$$GetThemeTexture
// il2cpp: UnityEngine_Texture2D_o* UI_UIManager__GetThemeTexture (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x4456ed0

UnityEngine_Texture2D_o *
UI_UIManager__GetThemeTexture
          (System_String_o *panel,System_String_o *category,System_String_o *item,
          System_String_o *fallbackPanel,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  char cVar3;
  bool_conflict bVar4;
  Il2CppObject *a;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  System_String_o *pSVar7;
  UnityEngine_Texture2D_o *pUVar8;
  undefined8 *puVar9;
  System_String_o *pSVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [12];
  
label_04456f00:
  if (g_data_057ae72f == '\0') goto label_04456f40;
label_04456f09:
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) goto label_04456fc7;
label_04456f19:
  lVar11 = *(long *)(TypeInfo_UIManager + 0xb8);
  pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar11 + 8);
  do {
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_04457363:
      il2cpp_runtime_helper_022b2c90();
label_04457368:
      il2cpp_runtime_helper_022b2c90();
label_0445736d:
      il2cpp_runtime_helper_022b2c90();
label_04457372:
      auVar13 = il2cpp_runtime_helper_022b2c90();
      if (auVar13._8_4_ != 1) {
        _Unwind_Resume(auVar13._0_8_);
      }
      puVar9 = (undefined8 *)__cxa_begin_catch(auVar13._0_8_);
      cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar9);
      if (cVar3 == '\0') {
        puVar12 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar12 = *puVar9;
        __cxa_throw(puVar12,&PTR_PTR_05215060,0);
      }
      __cxa_end_catch();
      pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"{0} {1} {2} theme error.");
      pSVar10 = System_String__Format_3af7930
                          (pSVar10,(Il2CppObject *)panel,(Il2CppObject *)category,(Il2CppObject *)item,
                           (MethodInfo *)0x0);
      lVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      iVar1 = *(int *)(lVar11 + 0xe4);
joined_r0x0445744f:
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0(lVar11);
      }
      UnityEngine_Debug__Log((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
      return (UnityEngine_Texture2D_o *)0x0;
    }
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,*(Il2CppObject **)(lVar11 + 0x18),MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 == '\0') {
      a = (Il2CppObject *)0x0;
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_UIManager + 0xb8) + 8);
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04457363;
      a = System_Collections_Generic_Dictionary_object__object___get_Item
                    (pSVar2,*(Il2CppObject **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x18),MethodInfo_JSONObject_get_Item);
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (a == (Il2CppObject *)0x0) goto label_04457363;
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)
               (*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).methodPtr)
                         (a,panel,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).method)
      ;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') goto label_044571d0;
      plVar6 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).methodPtr)
                                 (a,panel,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item)
                                          .method);
      if (plVar6 == (long *)0x0) goto label_04457363;
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)
               (**(code **)(*plVar6 + 0x1a8))(plVar6,category,*(undefined8 *)(*plVar6 + 0x1b0));
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') goto label_044571d0;
      plVar6 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).methodPtr)
                                 (a,panel,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item)
                                          .method);
      if ((plVar6 == (long *)0x0) ||
         (plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,category,*(undefined8 *)(*plVar6 + 0x1b0)),
         plVar6 == (long *)0x0)) goto label_04457363;
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)
               (**(code **)(*plVar6 + 0x1a8))(plVar6,item,*(undefined8 *)(*plVar6 + 0x1b0));
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') goto label_044571d0;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      plVar6 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item).methodPtr)
                                 (a,panel,(((SimpleJSONFixed_JSONNode_VTable *)a->klass->vtable)->_7_get_Item)
                                          .method);
      if (plVar6 == (long *)0x0) goto label_04457368;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,category,*(undefined8 *)(*plVar6 + 0x1b0));
      if (plVar6 == (long *)0x0) goto label_0445736d;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,item,*(undefined8 *)(*plVar6 + 0x1b0));
      if (plVar6 != (long *)0x0) {
        pSVar7 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        pSVar7 = System_String__Concat_3ae5ba0("Sprites/Panels/MenuBackground",pSVar7,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar8 = (UnityEngine_Texture2D_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(pSVar10,pSVar7,1,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Texture2D_o *)0x0) {
          return (UnityEngine_Texture2D_o *)0x0;
        }
        if (pUVar8->klass == TypeInfo_Texture2D) {
          return pUVar8;
        }
        il2cpp_runtime_helper_022b2fd0(pUVar8);
        goto label_04457363;
      }
      goto label_04457372;
    }
label_044571d0:
    bVar4 = System_String__op_Inequality(panel,fallbackPanel,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pSVar10 = System_String__Format_3af7930
                          ("{0} {1} {2} theme error.",(Il2CppObject *)panel,(Il2CppObject *)category,(Il2CppObject *)item,
                           (MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_Debug + 0xe4);
      lVar11 = TypeInfo_Debug;
      goto joined_r0x0445744f;
    }
    panel = fallbackPanel;
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04456f00;
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae72f != '\0') goto label_04456f09;
label_04456f40:
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"{0} {1} {2} theme error.");
    il2cpp_runtime_helper_023445d0(&"Sprites/Panels/MenuBackground");
    g_data_057ae72f = '\x01';
    if (*(int *)(TypeInfo_UIManager + 0xe4) != 0) goto label_04456f19;
label_04456fc7:
    il2cpp_runtime_helper_02337ed0();
    lVar11 = *(long *)(TypeInfo_UIManager + 0xb8);
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar11 + 8);
  } while( true );
}


// UI.UIManager$$GetThemeColorBlock
// il2cpp: UnityEngine_UI_ColorBlock_o UI_UIManager__GetThemeColorBlock (System_String_o* panel, System_String_o* category, System_String_o* item, System_String_o* fallbackPanel, const MethodInfo* method);
// 0x44574a0

UnityEngine_UI_ColorBlock_o *
UI_UIManager__GetThemeColorBlock
          (UnityEngine_UI_ColorBlock_o *__return_storage_ptr__,System_String_o *panel,
          System_String_o *category,System_String_o *item,System_String_o *fallbackPanel,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar2;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_o UVar4;
  float local_68;
  float fStack_64;
  float local_48;
  float fStack_44;
  
  method_00 = (MethodInfo *)fallbackPanel;
  if (g_data_057ae730 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"PressedColor");
    il2cpp_runtime_helper_023445d0(&"HighlightedColor");
    il2cpp_runtime_helper_023445d0(&"NormalColor");
    g_data_057ae730 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0(item,"NormalColor",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar2 = UI_UIManager__GetThemeColor(panel,category,pSVar1,fallbackPanel,method_00);
  pSVar1 = System_String__Concat_3ae5ba0(item,"HighlightedColor",(MethodInfo *)0x0);
  UVar3 = UI_UIManager__GetThemeColor(panel,category,pSVar1,fallbackPanel,method_00);
  pSVar1 = System_String__Concat_3ae5ba0(item,"PressedColor",(MethodInfo *)0x0);
  UVar4 = UI_UIManager__GetThemeColor(panel,category,pSVar1,fallbackPanel,method_00);
  if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_48 = UVar2.fields.r;
  fStack_44 = UVar2.fields.g;
  (__return_storage_ptr__->fields).m_NormalColor.fields.r = local_48;
  (__return_storage_ptr__->fields).m_NormalColor.fields.g = fStack_44;
  (__return_storage_ptr__->fields).m_NormalColor.fields.b = UVar2.fields.b;
  (__return_storage_ptr__->fields).m_NormalColor.fields.a = UVar2.fields.a;
  local_68 = UVar3.fields.r;
  fStack_64 = UVar3.fields.g;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.r = local_68;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.g = fStack_64;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.b = UVar3.fields.b;
  (__return_storage_ptr__->fields).m_HighlightedColor.fields.a = UVar3.fields.a;
  (__return_storage_ptr__->fields).m_PressedColor.fields.r = UVar4.fields.r;
  (__return_storage_ptr__->fields).m_PressedColor.fields.g = UVar4.fields.g;
  (__return_storage_ptr__->fields).m_PressedColor.fields.b = UVar4.fields.b;
  (__return_storage_ptr__->fields).m_PressedColor.fields.a = UVar4.fields.a;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.r = local_48;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.g = fStack_44;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.b = UVar2.fields.b;
  (__return_storage_ptr__->fields).m_SelectedColor.fields.a = UVar2.fields.a;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.r = UVar4.fields.r;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.g = UVar4.fields.g;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.b = UVar4.fields.b;
  (__return_storage_ptr__->fields).m_DisabledColor.fields.a = UVar4.fields.a;
  (__return_storage_ptr__->fields).m_ColorMultiplier = 1.0;
  (__return_storage_ptr__->fields).m_FadeDuration = 0.1;
  return __return_storage_ptr__;
}


// UI.UIManager$$GetUIThemes
// il2cpp: System_String_array* UI_UIManager__GetUIThemes (const MethodInfo* method);
// 0x44511e0

System_String_array * UI_UIManager__GetUIThemes(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_05;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  System_String_array *pSVar7;
  long *plVar8;
  char unaff_R13B;
  undefined1 auVar9 [12];
  undefined1 in_stack_ffffffffffffff88 [15];
  char in_stack_ffffffffffffff97;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar10;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_48;
  
  if (g_data_057ae731 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Dark");
    il2cpp_runtime_helper_023445d0(&"Light");
    g_data_057ae731 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 8);
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04451529;
  __this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys(__this,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sim);
  if (__this_06 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_04451529;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            (&local_48,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  unaff_R13B = '\0';
  cVar5 = '\0';
  pSVar10 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
            local_48.fields._dictionary;
  do {
    while (in_stack_ffffffffffffff97 = cVar5, cVar5 = unaff_R13B,
          __this_05 != (System_Collections_Generic_List_object__o *)0x0) {
      while( true ) {
        while( true ) {
          __this_01.fields._version._3_1_ = in_stack_ffffffffffffff97;
          __this_01.fields._0_15_ = in_stack_ffffffffffffff88;
          __this_01.fields._currentKey = (Il2CppObject *)pSVar10;
          bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (__this_01,(MethodInfo_3251B20 *)&stack0xffffffffffffff98);
          if ((char)bVar6 == '\0') goto label_04451496;
          bVar6 = System_String__op_Equality
                            ((System_String_o *)local_48.fields._currentKey,"Light",(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') break;
          unaff_R13B = '\x01';
        }
        bVar6 = System_String__op_Equality
                          ((System_String_o *)local_48.fields._currentKey,"Dark",(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        if ((char)bVar6 != '\0') break;
        piVar1 = &(__this_05->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_05->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04451529;
        }
        uVar2 = (__this_05->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_05->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = local_48.fields._currentKey;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,local_48.fields._currentKey);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_05,local_48.fields._currentKey,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
      cVar5 = '\x01';
    }
    do {
      unaff_R13B = cVar5;
      __this_00.fields._version._3_1_ = in_stack_ffffffffffffff97;
      __this_00.fields._0_15_ = in_stack_ffffffffffffff88;
      __this_00.fields._currentKey = (Il2CppObject *)pSVar10;
      bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff98);
      if ((char)bVar6 == '\0') {
label_04451496:
        __this_02.fields._version._3_1_ = in_stack_ffffffffffffff97;
        __this_02.fields._0_15_ = in_stack_ffffffffffffff88;
        __this_02.fields._currentKey = (Il2CppObject *)pSVar10;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
        goto label_044514aa;
      }
      bVar6 = System_String__op_Equality
                        ((System_String_o *)local_48.fields._currentKey,"Light",(MethodInfo *)0x0);
      cVar5 = '\x01';
    } while ((char)bVar6 != '\0');
    bVar6 = System_String__op_Equality
                      ((System_String_o *)local_48.fields._currentKey,"Dark",(MethodInfo *)0x0);
    cVar5 = '\x01';
  } while ((char)bVar6 != '\0');
  do {
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) {
label_044515b6:
      __this_04.fields._version._3_1_ = in_stack_ffffffffffffff97;
      __this_04.fields._0_15_ = in_stack_ffffffffffffff88;
      __this_04.fields._currentKey = (Il2CppObject *)pSVar10;
      System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar9._0_8_);
    }
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._version._3_1_ = in_stack_ffffffffffffff97;
    __this_03.fields._0_15_ = in_stack_ffffffffffffff88;
    __this_03.fields._currentKey = (Il2CppObject *)pSVar10;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff98);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_044515b6;
    }
label_044514aa:
    if (in_stack_ffffffffffffff97 == '\0') {
label_044514d4:
      if (unaff_R13B == '\0') {
        if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) goto label_04451503;
      }
      else if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___Insert(__this_05,0,(Il2CppObject *)"Light",MethodInfo_Void_Insert)
        ;
label_04451503:
        pSVar7 = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray(__this_05,MethodInfo_String_ToArray);
        return pSVar7;
      }
    }
    else if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Insert(__this_05,0,(Il2CppObject *)"Dark",MethodInfo_Void_Insert);
      goto label_044514d4;
    }
label_04451529:
    il2cpp_runtime_helper_022b2c90();
  } while( true );
}


// UI.UIManager$$LoadUIThemes
// il2cpp: void UI_UIManager__LoadUIThemes (const MethodInfo* method);
// 0x4453830

void UI_UIManager__LoadUIThemes(MethodInfo *method)

{
  byte bVar1;
  UI_TipPanel_o *__this;
  UI_LoadingBackgroundPanel_o *pUVar2;
  UI_LoadingProgressPanel_o *pUVar3;
  UI_InGameMenu_c *pUVar4;
  UI_ItemHandler_o *pUVar5;
  UI_EmoteHandler_o *pUVar6;
  UI_EmoteHandler_c *pUVar7;
  code *vtableDispatch;
  undefined8 uVar8;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Settings_TypedSetting_T__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__c *pSVar9;
  long lVar10;
  UnityEngine_Component_o *__this_02;
  UI_BaseMenu_o *__this_03;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_04;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_05;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_06;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_07;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_08;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_09;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_10;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_11;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_12;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_13;
  System_String_array *pSVar11;
  int32_t *piVar12;
  undefined4 uVar13;
  uint uVar14;
  bool_conflict bVar15;
  UnityEngine_GameObject_o *pUVar16;
  System_String_o *pSVar17;
  UI_BasePopup_o *__this_14;
  System_String_o *pSVar18;
  System_Enum_c *__this_15;
  long *plVar19;
  long *plVar20;
  Il2CppMethodPointer pIVar21;
  Il2CppObject *pIVar22;
  Il2CppClass *pIVar23;
  Il2CppClass *pIVar24;
  undefined8 *puVar25;
  System_String_o *pSVar26;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar27;
  Il2CppClass *pIVar28;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_16;
  System_Object_array *pSVar29;
  Il2CppClass *pIVar30;
  UnityEngine_AudioSource_o *__this_17;
  MethodInfo_3105020 **in_RCX;
  long *method_00;
  MethodInfo_255AB00 **ppMVar31;
  MethodInfo_3104D80 **args;
  ulong extraout_RDX;
  undefined8 extraout_RDX_00;
  System_String_o *item;
  int iVar32;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar33;
  void *pvVar34;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **ppSVar35;
  System_Object_array **ppSVar36;
  MethodInfo *pMVar37;
  UI_BasePopup_o *__this_18;
  System_Enum_c *__this_19;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar38;
  void *in_R8;
  MethodInfo *in_R9;
  long *unaff_R12;
  uint uVar39;
  long *unaff_R13;
  System_String_array *unaff_R14;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **unaff_R15;
  float fVar40;
  float fVar41;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  void *pvVar42;
  undefined1 auVar43 [16];
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar44;
  undefined1 auStackY_1a0 [48];
  UnityEngine_Object_o *pUStackY_170;
  Il2CppClass *pIStackY_168;
  undefined8 uStackY_160;
  Il2CppClass *pIStackY_158;
  Il2CppClass *pIStackY_150;
  Il2CppClass *pIStackY_148;
  void *pvStackY_140;
  UnityEngine_Object_o *pUStackY_138;
  Il2CppClass *pIStackY_130;
  System_String_array *pSStackY_128;
  Il2CppClass *pIStackY_120;
  Il2CppObject *pIStackY_118;
  Il2CppClass *pIStackY_110;
  System_String_array *pSStackY_108;
  uint32_t uVar45;
  int32_t iVar46;
  uint32_t uVar47;
  uint32_t uVar48;
  Il2CppRGCTXData *pIVar49;
  System_String_o *pSVar50;
  _union_13 _Var51;
  _union_14 _Var52;
  Il2CppClass *pIStack_b0;
  System_String_o *pSStack_a8;
  uint32_t uStack_a0;
  int32_t iStack_9c;
  uint32_t uStack_98;
  uint32_t uStack_94;
  Il2CppRGCTXData *pIStack_90;
  System_String_o *pSStack_88;
  System_String_o *pSStack_80;
  _union_13 _Stack_78;
  _union_14 _Stack_70;
  System_Collections_Generic_Dictionary_object__object__o *pSStack_68;
  Il2CppClass *pIStack_60;
  Il2CppClass *pIStack_58;
  System_String_array *pSStack_50;
  Il2CppClass *pIStack_48;
  Il2CppClass *pIStack_40;
  
  if (g_data_057ae732 == '\0') {
    pIStack_40 = (Il2CppClass *)0x4453854;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    pIStack_40 = (Il2CppClass *)0x4453860;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_40 = (Il2CppClass *)0x445386c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pIStack_40 = (Il2CppClass *)0x4453878;
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    pIStack_40 = (Il2CppClass *)0x4453884;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pIStack_40 = (Il2CppClass *)0x4453890;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    pIStack_40 = (Il2CppClass *)0x445389c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIStack_40 = (Il2CppClass *)0x44538a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pIStack_40 = (Il2CppClass *)0x44538b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pIStack_40 = (Il2CppClass *)0x44538c0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pIStack_40 = (Il2CppClass *)0x44538cc;
    il2cpp_runtime_helper_023445d0(&"No UI theme folder found, creating it.");
    pIStack_40 = (Il2CppClass *)0x44538d8;
    il2cpp_runtime_helper_023445d0(&"Dark");
    pIStack_40 = (Il2CppClass *)0x44538e4;
    il2cpp_runtime_helper_023445d0(&"Name");
    pIStack_40 = (Il2CppClass *)0x44538f0;
    il2cpp_runtime_helper_023445d0(&"*.json");
    g_data_057ae732 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    pIStack_40 = (Il2CppClass *)0x4453910;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStack_40 = (Il2CppClass *)0x4453926;
  uVar14 = System_IO_Directory__Exists
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28),(MethodInfo *)0x0);
  plVar20 = (long *)(ulong)uVar14;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    pIStack_40 = (Il2CppClass *)0x4453b96;
    il2cpp_runtime_helper_02337ed0();
    pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28);
  }
  else {
    pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x28);
  }
  if ((char)uVar14 == '\0') {
    pIStack_40 = (Il2CppClass *)0x4453bb4;
    System_IO_Directory__CreateDirectory(pSVar17,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      pIStack_40 = (Il2CppClass *)0x4453bcc;
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__Log("No UI theme folder found, creating it.",(MethodInfo *)0x0);
    return;
  }
  pIStack_40 = (Il2CppClass *)0x445395d;
  plVar19 = (long *)System_IO_Directory__GetFiles(pSVar17,"*.json",(MethodInfo *)0x0);
  ppSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&TypeInfo_FolderPaths;
  if ((System_String_array *)plVar19 == (System_String_array *)0x0) {
label_04453c54:
    plVar19 = (long *)unaff_R14;
    pIStack_40 = (Il2CppClass *)0x4453c59;
    il2cpp_runtime_helper_022b2c90();
label_04453c59:
    pIStack_40 = (Il2CppClass *)0x4453c61;
    il2cpp_runtime_helper_022b2fd0(unaff_R15);
    ppSVar36 = (System_Object_array **)ppSVar35;
  }
  else {
    unaff_R14 = (System_String_array *)plVar19;
    if ((int)((System_String_array *)plVar19)->max_length < 1) {
label_04453b11:
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        pIStack_40 = (Il2CppClass *)0x4453b29;
        il2cpp_runtime_helper_02337ed0();
      }
      plVar20 = &TypeInfo_SettingsManager;
      lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0x20), lVar10 != 0)) {
        in_RCX = (MethodInfo_3105020 **)TypeInfo_UIManager->m_Items[6].fields.key;
        __this_00 = ((Il2CppClass_1 *)&((System_Object_array *)in_RCX)->obj)->gc_desc;
        if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pIStack_40 = (Il2CppClass *)0x4453b7e;
          bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                             (__this_00,*(Il2CppObject **)(lVar10 + 0x18),MethodInfo_Boolean_ContainsKey);
          if ((char)bVar15 != '\0') {
            return;
          }
          lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
          if ((lVar10 != 0) &&
             (__this_01 = *(Settings_TypedSetting_T__o **)(lVar10 + 0x20),
             __this_01 != (Settings_TypedSetting_T__o *)0x0)) {
            pIStack_40 = (Il2CppClass *)0x4453c20;
            Settings_TypedSetting_object___set_Value(__this_01,"Dark",MethodInfo_Void_set_Value);
            plVar19 = *(long **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
            if (plVar19 != (long *)0x0) {
              (**(code **)(*plVar19 + 0x238))(plVar19,*(undefined8 *)(*plVar19 + 0x240));
              return;
            }
          }
        }
      }
      goto label_04453c54;
    }
    unaff_R13 = (long *)0x0;
    ppSVar35 = &TypeInfo_UIManager;
    ppSVar36 = (System_Object_array **)ppSVar35;
    if ((((System_String_array *)plVar19)->max_length & 0xffffffff) != 0) {
      do {
        pIStack_40 = (Il2CppClass *)0x44539bb;
        pSVar17 = System_IO_File__ReadAllText
                            (((System_String_array *)plVar19)->m_Items[(long)unaff_R13],(MethodInfo *)0x0);
        pIStack_40 = (Il2CppClass *)0x44539c5;
        unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                    SimpleJSONFixed_JSON__Parse(pSVar17,(MethodInfo *)0x0);
        if ((Il2CppClass *)unaff_R15 != (Il2CppClass *)0x0) {
          pSVar9 = (((Il2CppClass *)unaff_R15)->_1).image;
          bVar1 = (TypeInfo_JSONObject->_2).naturalAligment;
          in_RCX = (MethodInfo_3105020 **)(ulong)bVar1;
          if (((pSVar9->_2).naturalAligment < bVar1) ||
             ((pSVar9->_2).typeHierarchy
              [(long)((long)((System_Object_array *)((long)in_RCX + -0x80018))->m_Items + 0x7fff7)] !=
              TypeInfo_JSONObject)) goto label_04453c59;
        }
        if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
          pIStack_40 = (Il2CppClass *)0x4453a11;
          il2cpp_runtime_helper_02337ed0();
        }
        if ((Il2CppClass *)unaff_R15 == (Il2CppClass *)0x0) goto label_04453c54;
        unaff_R12 = (TypeInfo_UIManager->m_Items[6].fields.key)->monitor;
        pSVar9 = (((Il2CppClass *)unaff_R15)->_1).image;
        pIStack_40 = (Il2CppClass *)0x4453a46;
        plVar20 = (long *)(*(pSVar9->vtable)._7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values
                            .methodPtr)(unaff_R15,"Name",
                                        (pSVar9->vtable).
                                        _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.
                                        method);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          pIStack_40 = (Il2CppClass *)0x4453a61;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_40 = (Il2CppClass *)0x4453a6b;
        pSVar17 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                            ((SimpleJSONFixed_JSONNode_o *)plVar20,(MethodInfo *)0x0);
        if ((Il2CppClass *)unaff_R12 == (Il2CppClass *)0x0) goto label_04453c54;
        in_RCX = &MethodInfo_Boolean_ContainsKey;
        pIStack_40 = (Il2CppClass *)0x4453a89;
        bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                           ((System_Collections_Generic_Dictionary_object__object__o *)unaff_R12,
                            (Il2CppObject *)pSVar17,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar15 == '\0') {
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            pIStack_40 = (Il2CppClass *)0x4453aa3;
            il2cpp_runtime_helper_02337ed0();
          }
          plVar20 = (TypeInfo_UIManager->m_Items[6].fields.key)->monitor;
          pSVar9 = (((Il2CppClass *)unaff_R15)->_1).image;
          pIStack_40 = (Il2CppClass *)0x4453acf;
          auVar43 = (*(pSVar9->vtable)._7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.
                      methodPtr)(unaff_R15,"Name",
                                 (pSVar9->vtable).
                                 _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.method);
          pIVar21 = auVar43._0_8_;
          if (pIVar21 == (Il2CppMethodPointer)0x0) goto label_04453c54;
          in_RCX = *(MethodInfo_3105020 ***)pIVar21;
          pIStack_40 = (Il2CppClass *)0x4453aeb;
          pIVar22 = (Il2CppObject *)
                    (**(code **)((long)((Il2CppType *)((System_Object_array *)in_RCX)->m_Items + 0x1a) + 8))
                              (pIVar21,((Il2CppType *)((System_Object_array *)in_RCX)->m_Items)[0x1b].data,
                               auVar43._8_8_,in_RCX,in_R8);
          if ((System_Collections_Generic_Dictionary_object__object__o *)plVar20 ==
              (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_04453c54;
          pIStack_40 = (Il2CppClass *)0x4453b0c;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)plVar20,pIVar22,
                     (Il2CppObject *)unaff_R15,MethodInfo_Void_Add);
        }
        unaff_R13 = (long *)((long)&(((Il2CppClass *)unaff_R13)->_1).image + 1);
        uVar14 = (uint)((System_String_array *)plVar19)->max_length;
        in_RCX = (MethodInfo_3105020 **)(long)(int)uVar14;
        if ((long)in_RCX <= (long)unaff_R13) goto label_04453b11;
      } while (unaff_R13 < (Il2CppClass *)(ulong)uVar14);
    }
  }
  pIStack_40 = (Il2CppClass *)0x4453c66;
  il2cpp_runtime_helper_022b2ca0();
  method_00 = (long *)in_RCX;
  pSStack_68 = (System_Collections_Generic_Dictionary_object__object__o *)plVar20;
  pIStack_60 = (Il2CppClass *)unaff_R12;
  pIStack_58 = (Il2CppClass *)unaff_R13;
  pSStack_50 = (System_String_array *)plVar19;
  pIStack_48 = (Il2CppClass *)unaff_R15;
  pIStack_40 = (Il2CppClass *)ppSVar36;
  if (g_data_057ae71f == '\0') {
    pSStackY_108 = (void *)0x4453c9a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    pSStackY_108 = (void *)0x4453ca6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    pSStackY_108 = (void *)0x4453cb2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_get_Value);
    pSStackY_108 = (void *)0x4453cbe;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStackY_108 = (void *)0x4453cca;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    pSStackY_108 = (void *)0x4453cd6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    pSStackY_108 = (void *)0x4453ce2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    pSStackY_108 = (void *)0x4453cee;
    il2cpp_runtime_helper_023445d0(&"ProfileIconInfo");
    pSStackY_108 = (void *)0x4453cfa;
    il2cpp_runtime_helper_023445d0(&"Icons");
    pSStackY_108 = (void *)0x4453d06;
    il2cpp_runtime_helper_023445d0(&"AnimatedEmojis");
    pSStackY_108 = (void *)0x4453d12;
    il2cpp_runtime_helper_023445d0(&"AllEmojis");
    pSStackY_108 = (void *)0x4453d1e;
    il2cpp_runtime_helper_023445d0(&"EmoteInfo");
    g_data_057ae71f = '\x01';
    method_00 = (long *)in_RCX;
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    pSStackY_108 = (void *)0x4453d5c;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar28 = *(Il2CppClass **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    pSStackY_108 = (void *)0x4453d82;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStackY_108 = (void *)0x4453d96;
  pIVar23 = (Il2CppClass *)
            ApplicationManagers_ResourceManager__LoadText
                      ((System_String_o *)pIVar28,"ProfileIconInfo",(MethodInfo *)0x0);
  pMVar37 = (MethodInfo *)0x0;
  pSStackY_108 = (void *)0x4453da0;
  pIVar24 = (Il2CppClass *)SimpleJSONFixed_JSON__Parse((System_String_o *)pIVar23,(MethodInfo *)0x0);
  if (pIVar24 != (Il2CppClass *)0x0) {
    method_00 = (pIVar24->_1).image;
    pSStackY_108 = (void *)0x4453dc6;
    pMVar37 = "Icons";
    puVar25 = (undefined8 *)
              (**(code **)((long)((Il2CppType *)((System_Object_array *)method_00)->m_Items + 0x18) + 8))
                        (pIVar24,"Icons",
                         ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[0x19].data);
    pIVar23 = pIVar24;
    if (puVar25 != (undefined8 *)0x0) {
      method_00 = (long *)*puVar25;
      pSStackY_108 = (void *)0x4453de7;
      (**(code **)((long)((Il2CppType *)((System_Object_array *)method_00)->m_Items + 0x31) + 8))
                (&stack0xffffffffffffff50,puVar25,
                 ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[0x32].data);
      pSStackY_108 = (void *)0x4453e28;
      __this_05.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSStack_a8;
      __this_05.fields._0_8_ = pIStack_b0;
      __this_05.fields.m_Object.fields._version = uStack_a0;
      __this_05.fields.m_Object.fields._index = iStack_9c;
      __this_05.fields.m_Object.fields._current.fields.key._0_4_ = uStack_98;
      __this_05.fields.m_Object.fields._current.fields.key._4_4_ = uStack_94;
      __this_05.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_90;
      __this_05.fields.m_Object.fields._32_8_ = pSStack_88;
      __this_05.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSStack_80;
      __this_05.fields.m_Array.fields._8_8_ = _Stack_78.rgctx_data;
      __this_05.fields.m_Array.fields._current = _Stack_70.genericMethod;
      pIVar24 = pIStack_b0;
      pSVar17 = pSStack_a8;
      uVar45 = uStack_a0;
      iVar46 = iStack_9c;
      uVar47 = uStack_98;
      uVar48 = uStack_94;
      pIVar49 = pIStack_90;
      pSVar18 = pSStack_88;
      pSVar50 = pSStack_80;
      _Var51 = _Stack_78;
      _Var52 = _Stack_70;
      bVar15 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_05,(MethodInfo *)&stack0xffffffffffffff00)
      ;
      if ((char)bVar15 != '\0') {
        unaff_R13 = &TypeInfo_JSONNode;
        unaff_R12 = &MethodInfo_Void_Add;
        do {
          pSStackY_108 = (void *)0x4453e86;
          __this_07.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar17;
          __this_07.fields._0_8_ = pIVar24;
          __this_07.fields.m_Object.fields._version = uVar45;
          __this_07.fields.m_Object.fields._index = iVar46;
          __this_07.fields.m_Object.fields._current.fields.key._0_4_ = uVar47;
          __this_07.fields.m_Object.fields._current.fields.key._4_4_ = uVar48;
          __this_07.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar49;
          __this_07.fields.m_Object.fields._32_8_ = pSVar18;
          __this_07.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar50;
          __this_07.fields.m_Array.fields._8_8_ = _Var51.rgctx_data;
          __this_07.fields.m_Array.fields._current = _Var52.genericMethod;
          SVar44 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_07,(MethodInfo *)&stack0xffffffffffffff00);
          unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)SVar44.fields.value;
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            pSStackY_108 = (void *)0x4453e9b;
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar28 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            pSStackY_108 = (void *)0x4453ebc;
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar37 = (MethodInfo *)0x0;
          pSStackY_108 = (void *)0x4453ec6;
          pIVar23 = (Il2CppClass *)unaff_R15;
          pSVar26 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                              ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(MethodInfo *)0x0);
          lVar10 = MethodInfo_Void_Add;
          ppSVar36 = (System_Object_array **)&TypeInfo_UIManager;
          plVar19 = (long *)&stack0xffffffffffffff00;
          if (pIVar28 == (Il2CppClass *)0x0) goto label_0445420e;
          piVar12 = (int32_t *)((long)&(pIVar28->_1).namespaze + 4);
          *piVar12 = *piVar12 + 1;
          method_00 = (long *)((System_Collections_Generic_List_object__Fields *)&(pIVar28->_1).name)->_items;
          plVar19 = (long *)&stack0xffffffffffffff00;
          if ((System_Object_array *)method_00 == (System_Object_array *)0x0) goto label_0445420e;
          uVar14 = *(uint *)&(pIVar28->_1).namespaze;
          if (uVar14 < *(uint *)&((System_Object_array *)method_00)->max_length) {
            *(uint *)&(pIVar28->_1).namespaze = uVar14 + 1;
            (&((Il2CppType *)((System_Object_array *)method_00)->m_Items)->data)[(int)uVar14] = pSVar26;
            pSStackY_108 = (void *)0x4453f0c;
            il2cpp_runtime_helper_022b4080(&((Il2CppType *)((System_Object_array *)method_00)->m_Items)->data +
                               (int)uVar14);
          }
          else {
            method_00 = *(long **)(*(long *)(lVar10 + 0x20) + 0xc0);
            pSStackY_108 = (void *)0x4453e6a;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)pIVar28,(Il2CppObject *)pSVar26,
                       ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[5].data);
          }
          pSStackY_108 = (void *)0x4453e74;
          __this_06.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar17;
          __this_06.fields._0_8_ = pIVar24;
          __this_06.fields.m_Object.fields._version = uVar45;
          __this_06.fields.m_Object.fields._index = iVar46;
          __this_06.fields.m_Object.fields._current.fields.key._0_4_ = uVar47;
          __this_06.fields.m_Object.fields._current.fields.key._4_4_ = uVar48;
          __this_06.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar49;
          __this_06.fields.m_Object.fields._32_8_ = pSVar18;
          __this_06.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar50;
          __this_06.fields.m_Array.fields._8_8_ = _Var51.rgctx_data;
          __this_06.fields.m_Array.fields._current = _Var52.genericMethod;
          bVar15 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_06,(MethodInfo *)&stack0xffffffffffffff00);
          plVar19 = (long *)&stack0xffffffffffffff00;
        } while ((char)bVar15 != '\0');
      }
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        pSStackY_108 = (void *)0x4453f29;
        il2cpp_runtime_helper_02337ed0();
      }
      method_00 = &TypeInfo_ResourceManager;
      pIVar28 = *(Il2CppClass **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        pSStackY_108 = (void *)0x4453f4f;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStackY_108 = (void *)0x4453f63;
      pIVar23 = (Il2CppClass *)
                ApplicationManagers_ResourceManager__LoadText
                          ((System_String_o *)pIVar28,"EmoteInfo",(MethodInfo *)0x0);
      pMVar37 = (MethodInfo *)0x0;
      pSStackY_108 = (void *)0x4453f6d;
      pIVar24 = (Il2CppClass *)SimpleJSONFixed_JSON__Parse((System_String_o *)pIVar23,(MethodInfo *)0x0);
      if (pIVar24 != (Il2CppClass *)0x0) {
        method_00 = (pIVar24->_1).image;
        pSStackY_108 = (void *)0x4453f98;
        pMVar37 = "AllEmojis";
        pIVar23 = pIVar24;
        puVar25 = (undefined8 *)
                  (**(code **)((long)((Il2CppType *)((System_Object_array *)method_00)->m_Items + 0x18) + 8))
                            (pIVar24,"AllEmojis",
                             ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[0x19].data);
        if (puVar25 != (undefined8 *)0x0) {
          method_00 = (long *)*puVar25;
          pSStackY_108 = (void *)0x4453fb9;
          (**(code **)((long)((Il2CppType *)((System_Object_array *)method_00)->m_Items + 0x31) + 8))
                    (&stack0xffffffffffffff50,puVar25,
                     ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[0x32].data);
          pSStackY_108 = (void *)0x4453ffa;
          __this_08.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSStack_a8;
          __this_08.fields._0_8_ = pIStack_b0;
          __this_08.fields.m_Object.fields._version = uStack_a0;
          __this_08.fields.m_Object.fields._index = iStack_9c;
          __this_08.fields.m_Object.fields._current.fields.key._0_4_ = uStack_98;
          __this_08.fields.m_Object.fields._current.fields.key._4_4_ = uStack_94;
          __this_08.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_90;
          __this_08.fields.m_Object.fields._32_8_ = pSStack_88;
          __this_08.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSStack_80;
          __this_08.fields.m_Array.fields._8_8_ = _Stack_78.rgctx_data;
          __this_08.fields.m_Array.fields._current = _Stack_70.genericMethod;
          pIVar30 = pIStack_b0;
          pSVar17 = pSStack_a8;
          uVar45 = uStack_a0;
          iVar46 = iStack_9c;
          uVar47 = uStack_98;
          uVar48 = uStack_94;
          pIVar49 = pIStack_90;
          pSVar18 = pSStack_88;
          pSVar50 = pSStack_80;
          _Var51 = _Stack_78;
          _Var52 = _Stack_70;
          bVar15 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                             (__this_08,(MethodInfo *)&stack0xffffffffffffff00);
          if ((char)bVar15 != '\0') {
            unaff_R13 = &TypeInfo_JSONNode;
            plVar19 = &MethodInfo_Void_Add;
            do {
              pSStackY_108 = (void *)0x4454056;
              __this_10.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar17;
              __this_10.fields._0_8_ = pIVar30;
              __this_10.fields.m_Object.fields._version = uVar45;
              __this_10.fields.m_Object.fields._index = iVar46;
              __this_10.fields.m_Object.fields._current.fields.key._0_4_ = uVar47;
              __this_10.fields.m_Object.fields._current.fields.key._4_4_ = uVar48;
              __this_10.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar49;
              __this_10.fields.m_Object.fields._32_8_ = pSVar18;
              __this_10.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar50;
              __this_10.fields.m_Array.fields._8_8_ = _Var51.rgctx_data;
              __this_10.fields.m_Array.fields._current = _Var52.genericMethod;
              SVar44 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                 (__this_10,(MethodInfo *)&stack0xffffffffffffff00);
              unaff_R12 = (long *)SVar44.fields.value;
              if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
                pSStackY_108 = (void *)0x445406b;
                il2cpp_runtime_helper_02337ed0();
              }
              pIVar28 = TypeInfo_UIManager->m_Items[6].fields.key[4].monitor;
              if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                pSStackY_108 = (void *)0x445408c;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar37 = (MethodInfo *)0x0;
              pSStackY_108 = (void *)0x4454096;
              pIVar23 = (Il2CppClass *)unaff_R12;
              pSVar26 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                                  ((SimpleJSONFixed_JSONNode_o *)unaff_R12,(MethodInfo *)0x0);
              lVar10 = MethodInfo_Void_Add;
              ppSVar36 = (System_Object_array **)&TypeInfo_UIManager;
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xffffffffffffff00;
              if (pIVar28 == (Il2CppClass *)0x0) goto label_0445420e;
              piVar12 = (int32_t *)((long)&(pIVar28->_1).namespaze + 4);
              *piVar12 = *piVar12 + 1;
              method_00 = (long *)((System_Collections_Generic_List_object__Fields *)&(pIVar28->_1).name)->
                                  _items;
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xffffffffffffff00;
              if ((System_Object_array *)method_00 == (System_Object_array *)0x0) goto label_0445420e;
              uVar14 = *(uint *)&(pIVar28->_1).namespaze;
              if (uVar14 < *(uint *)&((System_Object_array *)method_00)->max_length) {
                *(uint *)&(pIVar28->_1).namespaze = uVar14 + 1;
                (&((Il2CppType *)((System_Object_array *)method_00)->m_Items)->data)[(int)uVar14] = pSVar26;
                pSStackY_108 = (void *)0x44540db;
                il2cpp_runtime_helper_022b4080(&((Il2CppType *)((System_Object_array *)method_00)->m_Items)->data +
                                   (int)uVar14);
              }
              else {
                method_00 = *(long **)(*(long *)(lVar10 + 0x20) + 0xc0);
                pSStackY_108 = (void *)0x445403a;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pIVar28,(Il2CppObject *)pSVar26,
                           ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[5].data);
              }
              pSStackY_108 = (void *)0x4454044;
              __this_09.fields.m_Object.fields._dictionary =
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar17;
              __this_09.fields._0_8_ = pIVar30;
              __this_09.fields.m_Object.fields._version = uVar45;
              __this_09.fields.m_Object.fields._index = iVar46;
              __this_09.fields.m_Object.fields._current.fields.key._0_4_ = uVar47;
              __this_09.fields.m_Object.fields._current.fields.key._4_4_ = uVar48;
              __this_09.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar49;
              __this_09.fields.m_Object.fields._32_8_ = pSVar18;
              __this_09.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar50;
              __this_09.fields.m_Array.fields._8_8_ = _Var51.rgctx_data;
              __this_09.fields.m_Array.fields._current = _Var52.genericMethod;
              bVar15 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                 (__this_09,(MethodInfo *)&stack0xffffffffffffff00);
              unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                          &stack0xffffffffffffff00;
            } while ((char)bVar15 != '\0');
          }
          pSVar9 = (pIVar24->_1).image;
          pSStackY_108 = (void *)0x44540ff;
          pMVar37 = "AnimatedEmojis";
          puVar25 = (undefined8 *)
                    (*(pSVar9->vtable)._7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.
                      methodPtr)(pIVar24,"AnimatedEmojis",
                                 (pSVar9->vtable).
                                 _7_System_Collections_Generic_IDictionary_TKey_TValue__get_Values.method);
          pIVar23 = pIVar24;
          if (puVar25 != (undefined8 *)0x0) {
            method_00 = (long *)*puVar25;
            pSStackY_108 = (void *)0x4454120;
            (**(code **)((long)((Il2CppType *)((System_Object_array *)method_00)->m_Items + 0x31) + 8))
                      (&stack0xffffffffffffff50,puVar25,
                       ((Il2CppType *)((System_Object_array *)method_00)->m_Items)[0x32].data);
            pSStackY_108 = (void *)0x4454161;
            __this_11.fields.m_Object.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSStack_a8;
            __this_11.fields._0_8_ = pIStack_b0;
            __this_11.fields.m_Object.fields._version = uStack_a0;
            __this_11.fields.m_Object.fields._index = iStack_9c;
            __this_11.fields.m_Object.fields._current.fields.key._0_4_ = uStack_98;
            __this_11.fields.m_Object.fields._current.fields.key._4_4_ = uStack_94;
            __this_11.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_90;
            __this_11.fields.m_Object.fields._32_8_ = pSStack_88;
            __this_11.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSStack_80;
            __this_11.fields.m_Array.fields._8_8_ = _Stack_78.rgctx_data;
            __this_11.fields.m_Array.fields._current = _Stack_70.genericMethod;
            bVar15 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                               (__this_11,(MethodInfo *)&stack0xffffffffffffff00);
            if ((char)bVar15 != '\0') {
              unaff_R12 = &TypeInfo_JSONNode;
              pIVar24 = pIStack_b0;
              pSVar17 = pSStack_a8;
              uVar45 = uStack_a0;
              iVar46 = iStack_9c;
              uVar47 = uStack_98;
              uVar48 = uStack_94;
              pIVar49 = pIStack_90;
              pSVar18 = pSStack_88;
              pSVar50 = pSStack_80;
              _Var51 = _Stack_78;
              _Var52 = _Stack_70;
              do {
                pSStackY_108 = (void *)0x445419a;
                __this_12.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar17;
                __this_12.fields._0_8_ = pIVar24;
                __this_12.fields.m_Object.fields._version = uVar45;
                __this_12.fields.m_Object.fields._index = iVar46;
                __this_12.fields.m_Object.fields._current.fields.key._0_4_ = uVar47;
                __this_12.fields.m_Object.fields._current.fields.key._4_4_ = uVar48;
                __this_12.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar49;
                __this_12.fields.m_Object.fields._32_8_ = pSVar18;
                __this_12.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar50;
                __this_12.fields.m_Array.fields._8_8_ = _Var51.rgctx_data;
                __this_12.fields.m_Array.fields._current = _Var52.genericMethod;
                SVar44 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   (__this_12,(MethodInfo *)&stack0xffffffffffffff00);
                unaff_R15 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
                            SVar44.fields.value;
                if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
                  pSStackY_108 = (void *)0x44541af;
                  il2cpp_runtime_helper_02337ed0();
                }
                pIVar30 = TypeInfo_UIManager->m_Items[6].fields.key[5].klass;
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  pSStackY_108 = (void *)0x44541d0;
                  il2cpp_runtime_helper_02337ed0();
                }
                pMVar37 = (MethodInfo *)0x0;
                pSStackY_108 = (void *)0x44541da;
                pIVar23 = (Il2CppClass *)unaff_R15;
                pSVar26 = SimpleJSONFixed_JSONNode__op_Implicit_3f79b00
                                    ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(MethodInfo *)0x0);
                pIVar28 = (Il2CppClass *)0x0;
                ppSVar36 = (System_Object_array **)&TypeInfo_UIManager;
                unaff_R13 = (long *)&MethodInfo_Boolean_Add;
                plVar19 = (long *)&stack0xffffffffffffff00;
                if (pIVar30 == (Il2CppClass *)0x0) goto label_0445420e;
                pSStackY_108 = (void *)0x44541ee;
                System_Collections_Generic_HashSet_object___Add
                          ((System_Collections_Generic_HashSet_object__o *)pIVar30,(Il2CppObject *)pSVar26,
                           MethodInfo_Boolean_Add);
                pSStackY_108 = (void *)0x44541f8;
                __this_13.fields.m_Object.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar17;
                __this_13.fields._0_8_ = pIVar24;
                __this_13.fields.m_Object.fields._version = uVar45;
                __this_13.fields.m_Object.fields._index = iVar46;
                __this_13.fields.m_Object.fields._current.fields.key._0_4_ = uVar47;
                __this_13.fields.m_Object.fields._current.fields.key._4_4_ = uVar48;
                __this_13.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar49;
                __this_13.fields.m_Object.fields._32_8_ = pSVar18;
                __this_13.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pSVar50;
                __this_13.fields.m_Array.fields._8_8_ = _Var51.rgctx_data;
                __this_13.fields.m_Array.fields._current = _Var52.genericMethod;
                bVar15 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                   (__this_13,(MethodInfo *)&stack0xffffffffffffff00);
              } while ((char)bVar15 != '\0');
            }
            return;
          }
        }
      }
    }
  }
label_0445420e:
  pSStackY_108 = (void *)0x4454213;
  pIStackY_118 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  x = (UnityEngine_Object_o *)((ulong)pIVar23 & 0xffffffff);
  iVar32 = (int)pIVar23;
  pIStackY_110 = pIVar28;
  pSStackY_108 = (System_String_array *)plVar19;
  if (g_data_057ae71b == '\0') {
    pIStackY_120 = (void *)0x44542b2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71b = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_044542d0;
label_04454246:
    pIStackY_120 = (void *)0x445424d;
    UI_UIManager__SetMenu(iVar32,pMVar37);
    pSVar33 = TypeInfo_UIManager;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454246;
label_044542d0:
    pIStackY_120 = (void *)0x44542d5;
    il2cpp_runtime_helper_02337ed0();
    pIStackY_120 = (void *)0x44542dc;
    UI_UIManager__SetMenu(iVar32,pMVar37);
    pSVar33 = TypeInfo_UIManager;
  }
  if (iVar32 == 0) {
    TypeInfo_UIManager = pSVar33;
    return;
  }
  TypeInfo_UIManager = pSVar33;
  if (pSVar33->m_Items[8].fields.next == 0) {
    pIStackY_120 = (void *)0x44542ff;
    il2cpp_runtime_helper_02337ed0();
    pIStackY_120 = (void *)0x4454304;
    UI_UIManager__LoadSounds((MethodInfo *)pSVar33);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454314;
label_0445427a:
    pIVar22 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar28 = pIVar22[3].klass;
    pSVar11 = pSStackY_108;
  }
  else {
    pIStackY_120 = (void *)0x445426a;
    UI_UIManager__LoadSounds((MethodInfo *)pSVar33);
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_0445427a;
label_04454314:
    pIStackY_120 = (void *)0x4454319;
    il2cpp_runtime_helper_02337ed0();
    pIVar22 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar28 = pIVar22[3].klass;
    pSVar11 = pSStackY_108;
  }
  pSStackY_108 = pSVar11;
  if (pIVar28 != (Il2CppClass *)0x0) {
    if (iVar32 != 2) {
      UI_LoadingMenu__Hide((UI_LoadingMenu_o *)pIVar28,(MethodInfo *)0x0);
      return;
    }
    pMVar37 = (MethodInfo *)0x1;
    pIVar23 = (Il2CppClass *)(pIVar28->_1).implementedInterfaces;
    pIStackY_118 = pIVar22;
    pSStackY_108 = (System_String_array *)ppSVar36;
    if (pIVar23 != (Il2CppClass *)0x0) {
      pIVar24 = (Il2CppClass *)0x1;
      pMVar37 = (MethodInfo *)0x0;
      pIStackY_120 = (void *)0x43ef55f;
      pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar23,(MethodInfo *)0x0);
      ppSVar36 = (System_Object_array **)(Il2CppClass *)0x1;
      if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
        pMVar37 = (MethodInfo *)0x0;
        pIStackY_120 = (void *)0x43ef572;
        bVar15 = UnityEngine_GameObject__get_activeSelf(pUVar16,(MethodInfo *)0x0);
        if ((char)bVar15 != '\0') {
          return;
        }
        __this = (UI_TipPanel_o *)(pIVar28->_1).implementedInterfaces;
        pIVar23 = (Il2CppClass *)0x0;
        ppSVar36 = (System_Object_array **)pIVar24;
        if (__this != (UI_TipPanel_o *)0x0) {
          pMVar37 = (MethodInfo *)0x0;
          pIStackY_120 = (void *)0x43ef594;
          UI_TipPanel__SetRandomTip(__this,(MethodInfo *)0x0);
          pIVar23 = (Il2CppClass *)(pIVar28->_1).implementedInterfaces;
          if (pIVar23 != (Il2CppClass *)0x0) {
            pMVar37 = (MethodInfo *)0x0;
            pIStackY_120 = (void *)0x43ef5ab;
            pUVar16 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pIVar23,(MethodInfo *)0x0);
            if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
              pMVar37 = (MethodInfo *)0x1;
              pIStackY_120 = (void *)0x43ef5c3;
              UnityEngine_GameObject__SetActive(pUVar16,1,(MethodInfo *)0x0);
              pUVar2 = (pIVar28->_1).methods;
              pIVar23 = (Il2CppClass *)0x0;
              if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
                pMVar37 = (MethodInfo *)0x1;
                pIStackY_120 = (void *)0x43ef5df;
                UI_LoadingBackgroundPanel__SetRandomBackground(pUVar2,1,0,(MethodInfo *)method_00);
                pUVar2 = (pIVar28->_1).methods;
                pIVar23 = (Il2CppClass *)0x0;
                if (pUVar2 != (UI_LoadingBackgroundPanel_o *)0x0) {
                  pMVar37 = (MethodInfo *)0x0;
                  pIStackY_120 = (void *)0x43ef5f7;
                  UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar2,(MethodInfo *)0x0);
                  if (g_data_057ae510 == '\0') {
                    pIStackY_120 = (void *)0x43ef627;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
                    pIStackY_120 = (void *)0x43ef633;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
                    g_data_057ae510 = '\x01';
                  }
                  pUVar3 = (UI_LoadingProgressPanel_o *)(pIVar28->_1).nestedTypes;
                  pIVar23 = (Il2CppClass *)0x0;
                  if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
                    UI_LoadingProgressPanel__ShowImmediate(pUVar3,0.0,pMVar37);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
    pIStackY_120 = (void *)0x43ef665;
    pvVar42 = (void *)il2cpp_runtime_helper_022b2c90();
    ppSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)(extraout_RDX & 0xffffffff)
    ;
    pvVar34 = (void *)((ulong)pMVar37 & 0xffffffff);
    fVar40 = SUB84(pvVar42,0);
    pIStackY_130 = pIVar28;
    pSStackY_128 = pSVar11;
    pIStackY_120 = (Il2CppClass *)ppSVar36;
    if (g_data_057ae510 == '\0') {
      pIStackY_148 = (Il2CppClass *)0x43ef698;
      pvStackY_140 = pvVar42;
      il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
      pIStackY_148 = (Il2CppClass *)0x43ef6a4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      g_data_057ae510 = '\x01';
      fVar40 = pvStackY_140._0_4_;
    }
    pUVar3 = (UI_LoadingProgressPanel_o *)(pIVar23->_1).nestedTypes;
    pIVar28 = (Il2CppClass *)0x0;
    if (pUVar3 != (UI_LoadingProgressPanel_o *)0x0) {
      fVar41 = 1.0;
      if (fVar40 <= 1.0) {
        fVar41 = fVar40;
      }
      fVar41 = (float)(-(uint)(0.0 <= fVar40) & (uint)fVar41);
      if ((char)ppSVar35 == '\0') {
        pIStackY_148 = (Il2CppClass *)0x43ef6f2;
        UI_LoadingProgressPanel__Show(pUVar3,fVar41,pMVar37);
      }
      else {
        pIStackY_148 = (Il2CppClass *)0x43ef6df;
        UI_LoadingProgressPanel__ShowImmediate(pUVar3,fVar41,pMVar37);
      }
      if ((char)pvVar34 == '\0') {
        return;
      }
      ppSVar35 = &TypeInfo_UIManager;
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        pIStackY_148 = (Il2CppClass *)0x43ef70f;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar28 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
      if (pIVar28 != (Il2CppClass *)0x0) {
        pUVar4 = (pIVar28->_1).image;
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if (((pUVar4->_2).naturalAligment < bVar1) ||
           ((pUVar4->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto label_043ef7cc;
        pIStackY_148 = (Il2CppClass *)0x43ef75b;
        UI_InGameMenu__OnFinishLoading((UI_InGameMenu_o *)pIVar28,(MethodInfo *)0x0);
        if (g_data_057ae511 == '\0') {
          pIStackY_148 = (Il2CppClass *)0x43ef770;
          il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
          g_data_057ae511 = '\x01';
        }
        pIStackY_148 = (Il2CppClass *)0x43ef786;
        pIVar24 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
        pIStackY_148 = (Il2CppClass *)0x43ef793;
        pIVar28 = pIVar24;
        System_Object___ctor((Il2CppObject *)pIVar24,(MethodInfo *)0x0);
        *(undefined4 *)&((UI_InGameMenu_Fields *)&(pIVar24->_1).name)->m_CachedPtr = 0;
        ppSVar35 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)0x0;
        if (pIVar24 != (Il2CppClass *)0x0) {
          (pIVar24->_1).byval_arg.data = pIVar23;
          pIStackY_148 = (Il2CppClass *)0x43ef7b2;
          il2cpp_runtime_helper_022b4080(&(pIVar24->_1).byval_arg,pIVar23);
          UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                    ((UnityEngine_MonoBehaviour_o *)pIVar23,(System_Collections_IEnumerator_o *)pIVar24,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    pIStackY_148 = (Il2CppClass *)0x43ef7cc;
    il2cpp_runtime_helper_022b2c90();
label_043ef7cc:
    pIStackY_148 = (Il2CppClass *)0x43ef7d1;
    il2cpp_runtime_helper_022b2fd0();
    __this_18 = (UI_BasePopup_o *)(pIVar28->_1).implementedInterfaces;
    pIStackY_148 = (Il2CppClass *)ppSVar35;
    if (__this_18 != (UI_BasePopup_o *)0x0) {
      pIStackY_150 = (Il2CppClass *)0x43ef7f7;
      pUVar16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_18,(MethodInfo *)0x0);
      if (pUVar16 != (UnityEngine_GameObject_o *)0x0) {
        pIStackY_150 = (Il2CppClass *)0x43ef808;
        UnityEngine_GameObject__SetActive(pUVar16,0,(MethodInfo *)0x0);
        pUVar5 = (UI_ItemHandler_o *)(pIVar28->_1).nestedTypes;
        __this_18 = (UI_BasePopup_o *)0x0;
        if (pUVar5 != (UI_ItemHandler_o *)0x0) {
          pIStackY_150 = (Il2CppClass *)0x43ef824;
          (**(code **)&pUVar5->klass[1]._2.field_count)();
          pUVar6 = (pIVar28->_1).methods;
          __this_18 = (UI_BasePopup_o *)0x0;
          if (pUVar6 != (UI_EmoteHandler_o *)0x0) {
            pUVar7 = pUVar6->klass;
            vtableDispatch = *(code **)&pUVar7[1]._2.field_count;
            uVar8._0_2_ = pUVar7[1]._2.interfaces_count;
            uVar8._2_2_ = pUVar7[1]._2.interface_offsets_count;
            uVar8._4_1_ = pUVar7[1]._2.typeHierarchyDepth;
            uVar8._5_1_ = pUVar7[1]._2.genericRecursionDepth;
            uVar8._6_1_ = pUVar7[1]._2.rank;
            uVar8._7_1_ = pUVar7[1]._2.minimumAlignment;
            (*vtableDispatch)(pUVar6,uVar8,extraout_RDX_00,vtableDispatch);
            return;
          }
        }
      }
    }
    pIStackY_150 = (Il2CppClass *)0x43ef849;
    uVar13 = il2cpp_runtime_helper_022b2c90();
    uStackY_160 = (Il2CppClass *)CONCAT44(extraout_XMM0_Da,uVar13);
    pIStackY_158 = pIVar28;
    pIStackY_150 = pIVar23;
    if (g_data_057ae516 == '\0') {
      pIStackY_168 = (Il2CppClass *)0x43ef872;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      pIStackY_168 = (Il2CppClass *)0x43ef87e;
      il2cpp_runtime_helper_023445d0(&"%");
      g_data_057ae516 = '\x01';
    }
    plVar20 = __this_18[1].monitor;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      pIStackY_168 = (Il2CppClass *)0x43ef8a4;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_14 = (UI_BasePopup_o *)0x0;
    pIStackY_168 = (Il2CppClass *)0x43ef8bb;
    pSVar17 = Utility_Util__FormatFloat(uStackY_160._4_4_ * 100.0,0,(MethodInfo *)0x0);
    if (pSVar17 != (System_String_o *)0x0) {
      pIStackY_168 = (Il2CppClass *)0x43ef8d3;
      __this_14 = (UI_BasePopup_o *)
                  (*(pSVar17->klass->vtable)._3_ToString.methodPtr)
                            (pSVar17,(pSVar17->klass->vtable)._3_ToString.method);
      pIStackY_168 = (Il2CppClass *)0x43ef8e7;
      pSVar17 = System_String__Concat_3ae5ba0((System_String_o *)__this_14,"%",(MethodInfo *)0x0);
      if (plVar20 != (long *)0x0) {
        pIStackY_168 = (Il2CppClass *)0x43ef902;
        (**(code **)(*plVar20 + 0x5e8))(plVar20,pSVar17,*(undefined8 *)(*plVar20 + 0x5f0));
        plVar19 = (long *)__this_18[1].fields.m_CachedPtr;
        __this_14 = (UI_BasePopup_o *)0x0;
        if (plVar19 != (long *)0x0) {
          pIStackY_168 = (Il2CppClass *)0x43ef924;
          (**(code **)(*plVar19 + 0x428))(uStackY_160._4_4_);
          UI_BasePopup__ShowImmediate(__this_18,(MethodInfo *)0x0);
          return;
        }
      }
    }
    pIStackY_168 = (Il2CppClass *)0x43ef93a;
    auStackY_1a0._40_4_ = il2cpp_runtime_helper_022b2c90();
    auStackY_1a0._44_4_ = extraout_XMM0_Da_00;
    pUStackY_170 = (UnityEngine_Object_o *)plVar20;
    pIStackY_168 = (Il2CppClass *)__this_18;
    if (g_data_057ae517 == '\0') {
      auStackY_1a0._32_8_ = (void *)0x43ef962;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
      auStackY_1a0._32_8_ = (void *)0x43ef96e;
      il2cpp_runtime_helper_023445d0(&"%");
      g_data_057ae517 = '\x01';
    }
    plVar20 = __this_14[1].monitor;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      auStackY_1a0._32_8_ = (void *)0x43ef994;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar17 = (System_String_o *)0x0;
    auStackY_1a0._32_8_ = (void *)0x43ef9ab;
    pSVar18 = Utility_Util__FormatFloat((float)auStackY_1a0._44_4_ * 100.0,0,(MethodInfo *)0x0);
    if (pSVar18 != (System_String_o *)0x0) {
      auStackY_1a0._32_8_ = (void *)0x43ef9c3;
      pSVar17 = (System_String_o *)
                (*(pSVar18->klass->vtable)._3_ToString.methodPtr)
                          (pSVar18,(pSVar18->klass->vtable)._3_ToString.method);
      auStackY_1a0._32_8_ = (void *)0x43ef9d7;
      pSVar18 = System_String__Concat_3ae5ba0(pSVar17,"%",(MethodInfo *)0x0);
      if (plVar20 != (long *)0x0) {
        auStackY_1a0._32_8_ = (void *)0x43ef9f2;
        (**(code **)(*plVar20 + 0x5e8))(plVar20,pSVar18,*(undefined8 *)(*plVar20 + 0x5f0));
        plVar19 = (long *)__this_14[1].fields.m_CachedPtr;
        pSVar17 = (System_String_o *)0x0;
        if (plVar19 != (long *)0x0) {
          auStackY_1a0._32_8_ = (void *)0x43efa14;
          (**(code **)(*plVar19 + 0x428))(auStackY_1a0._44_4_);
          UI_BasePopup__Show(__this_14,(MethodInfo *)0x0);
          return;
        }
      }
    }
    auStackY_1a0._32_8_ = (void *)0x43efa2a;
    auStackY_1a0._16_8_ = il2cpp_runtime_helper_022b2c90();
    auStackY_1a0._24_8_ = plVar20;
    auStackY_1a0._32_8_ = __this_14;
    if (g_data_057ae511 == '\0') {
      auStackY_1a0._8_8_ = (void *)0x43efa4c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndHide_d__7);
      g_data_057ae511 = '\x01';
    }
    auStackY_1a0._8_8_ = (void *)0x43efa62;
    __this_15 = (System_Enum_c *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndHide_d__7);
    uVar13 = 0;
    auStackY_1a0._8_8_ = (void *)0x43efa6f;
    __this_19 = __this_15;
    System_Object___ctor((Il2CppObject *)__this_15,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_15->_1).name = 0;
    if (__this_15 != (System_Enum_c *)0x0) {
      (__this_15->_1).byval_arg.data = pSVar17;
      auStackY_1a0._8_8_ = (void *)0x43efa8e;
      il2cpp_runtime_helper_022b4080(&(__this_15->_1).byval_arg,pSVar17);
      return;
    }
    auStackY_1a0._8_8_ = (void *)0x43efa9e;
    il2cpp_runtime_helper_022b2c90();
    auStackY_1a0._0_8_ = __this_15;
    auStackY_1a0._8_8_ = pvVar34;
    System_Object___ctor((Il2CppObject *)__this_19,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_19->_1).name = uVar13;
    return;
  }
  pIStackY_120 = (void *)0x4454335;
  pvStackY_140 = (void *)il2cpp_runtime_helper_022b2c90();
  pSStackY_128 = (System_String_array *)&TypeInfo_UIManager;
  pUStackY_138 = x;
  pIStackY_130 = (Il2CppClass *)unaff_R12;
  pIStackY_120 = (Il2CppClass *)unaff_R15;
  if (g_data_057ae721 == '\0') {
    pIStackY_148 = (Il2CppClass *)0x4454364;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorGameManager);
    pIStackY_148 = (Il2CppClass *)0x4454370;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    pIStackY_148 = (Il2CppClass *)0x445437c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pIStackY_148 = (Il2CppClass *)0x4454388;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit);
    pIStackY_148 = (Il2CppClass *)0x4454394;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit);
    pIStackY_148 = (Il2CppClass *)0x44543a0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu);
    pIStackY_148 = (Il2CppClass *)0x44543ac;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu);
    pIStackY_148 = (Il2CppClass *)0x44543b8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu);
    pIStackY_148 = (Il2CppClass *)0x44543c4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    pIStackY_148 = (Il2CppClass *)0x44543d0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu);
    pIStackY_148 = (Il2CppClass *)0x44543dc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu);
    pIStackY_148 = (Il2CppClass *)0x44543e8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pIStackY_148 = (Il2CppClass *)0x44543f4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    pIStackY_148 = (Il2CppClass *)0x4454400;
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    pIStackY_148 = (Il2CppClass *)0x445440c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae721 = '\x01';
  }
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)) goto label_0445470d;
  pvVar34 = *(void **)(lVar10 + 0x18);
  unaff_R15 = &TypeInfo_UIManager;
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_148 = (Il2CppClass *)0x445445a;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar22 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar22[1].monitor = pvVar34;
  pIStackY_148 = (Il2CppClass *)0x4454474;
  il2cpp_runtime_helper_022b4080(&pIVar22[1].monitor);
  x = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  unaff_R12 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStackY_148 = (Il2CppClass *)0x445449b;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStackY_148 = (Il2CppClass *)0x44544a7;
  bVar15 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 != '\0') {
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_148 = (Il2CppClass *)0x44544bc;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this_02 == (UnityEngine_Component_o *)0x0) goto label_0445470d;
    pIStackY_148 = (Il2CppClass *)0x44544da;
    x = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_02,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStackY_148 = (Il2CppClass *)0x44544ef;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStackY_148 = (Il2CppClass *)0x44544f9;
    UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
  }
  switch((int32_t)pIVar28) {
  case 1:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_148 = (Il2CppClass *)0x4454527;
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar23 == (Il2CppClass *)0x0) goto label_0445470d;
    pIStackY_148 = (Il2CppClass *)0x445454d;
    System_Collections_Generic_Dictionary_object__object___Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)pIVar23,MethodInfo_Void_Clear);
    pIStackY_148 = (Il2CppClass *)0x445455c;
    pIVar27 = UI_ElementFactory__CreateDefaultMenu_object_(MethodInfo_MainMenu_CreateDefaultMenu_MainMenu);
    pIVar22 = TypeInfo_UIManager->m_Items[6].fields.key;
    pIVar22[2].monitor = pIVar27;
    pIStackY_148 = (Il2CppClass *)0x4454576;
    il2cpp_runtime_helper_022b4080(&pIVar22[2].monitor);
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      pIStackY_148 = (Il2CppClass *)0x445458e;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStackY_148 = (Il2CppClass *)0x4454595;
    GameManagers_ChatManager__Reset((MethodInfo *)0x0);
  default:
    iVar32 = TypeInfo_UIManager->m_Items[8].fields.next;
    goto joined_r0x044546fa;
  case 2:
    puVar25 = &MethodInfo_InGameMenu_CreateDefaultMenu_InGameMenu;
    break;
  case 3:
    puVar25 = &MethodInfo_MapEditorMenu_CreateDefaultMenu_MapEditorMenu;
    break;
  case 4:
    if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
      pIStackY_148 = (Il2CppClass *)0x4454689;
      il2cpp_runtime_helper_02337ed0();
    }
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') {
      puVar25 = &MethodInfo_CharacterEditorTitanMenu_CreateDefaultMenu_CharacterEdit;
    }
    else {
      puVar25 = &MethodInfo_CharacterEditorHumanMenu_CreateDefaultMenu_CharacterEdit;
    }
    break;
  case 5:
    puVar25 = &MethodInfo_SnapshotViewerMenu_CreateDefaultMenu_SnapshotViewerMenu;
    break;
  case 6:
    puVar25 = &MethodInfo_GalleryMenu_CreateDefaultMenu_GalleryMenu;
    break;
  case 7:
    puVar25 = &MethodInfo_CreditsMenu_CreateDefaultMenu_CreditsMenu;
  }
  pIStackY_148 = (Il2CppClass *)0x44546c2;
  pIVar22 = UI_ElementFactory__CreateDefaultMenu_object_((MethodInfo_24FB0E0 *)*puVar25);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_148 = (Il2CppClass *)0x44546d6;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar27 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar27[2].monitor = pIVar22;
  pIStackY_148 = (Il2CppClass *)0x44546f0;
  il2cpp_runtime_helper_022b4080(&pIVar27[2].monitor);
  iVar32 = TypeInfo_UIManager->m_Items[8].fields.next;
joined_r0x044546fa:
  if (iVar32 == 0) {
    pIStackY_148 = (Il2CppClass *)0x4454705;
    il2cpp_runtime_helper_02337ed0();
  }
  x = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pIStackY_148 = (Il2CppClass *)0x44545c2;
    il2cpp_runtime_helper_02337ed0();
  }
  pIStackY_148 = (Il2CppClass *)0x44545ce;
  bVar15 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar15 == '\0') {
label_0445462b:
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      pIStackY_148 = (Il2CppClass *)0x445463c;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined1 *)&TypeInfo_UIManager->m_Items[6].fields.key[5].monitor = 1;
    return;
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    pIStackY_148 = (Il2CppClass *)0x44545e3;
    il2cpp_runtime_helper_02337ed0();
  }
  plVar20 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
  if (plVar20 != (long *)0x0) {
    pIStackY_148 = (Il2CppClass *)0x445460a;
    (**(code **)(*plVar20 + 0x178))(plVar20,*(undefined8 *)(*plVar20 + 0x180));
    __this_03 = TypeInfo_UIManager->m_Items[6].fields.key[2].monitor;
    if (__this_03 != (UI_BaseMenu_o *)0x0) {
      pIStackY_148 = (Il2CppClass *)0x445462b;
      UI_BaseMenu__ApplyScale(__this_03,(int32_t)pIVar28,(MethodInfo *)0x0);
      goto label_0445462b;
    }
  }
label_0445470d:
  pIStackY_148 = (Il2CppClass *)0x4454712;
  auStackY_1a0._40_8_ = il2cpp_runtime_helper_022b2c90();
  pUStackY_170 = x;
  pIStackY_168 = (Il2CppClass *)unaff_R12;
  uStackY_160 = (Il2CppClass *)unaff_R13;
  pIStackY_158 = (Il2CppClass *)((ulong)pIVar28 & 0xffffffff);
  pIStackY_150 = (Il2CppClass *)unaff_R15;
  pIStackY_148 = (Il2CppClass *)ppSVar36;
  if (g_data_057ae720 == '\0') {
    auStackY_1a0._32_8_ = (void *)0x4454740;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStackY_1a0._32_8_ = (void *)0x445474c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
    auStackY_1a0._32_8_ = (void *)0x4454758;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AudioSource);
    auStackY_1a0._32_8_ = (void *)0x4454764;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    auStackY_1a0._32_8_ = (void *)0x4454770;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    auStackY_1a0._32_8_ = (void *)0x445477c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    auStackY_1a0._32_8_ = (void *)0x4454788;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    auStackY_1a0._32_8_ = (void *)0x4454794;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    auStackY_1a0._32_8_ = (void *)0x44547a0;
    il2cpp_runtime_helper_023445d0(&"Prefabs/MainMenu/MainMenuSounds");
    g_data_057ae720 = '\x01';
  }
  auStackY_1a0._32_8_ = (void *)0x44547b6;
  pIVar28 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AudioSource);
  auStackY_1a0._32_8_ = (void *)0x44547cb;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)pIVar28,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    auStackY_1a0._32_8_ = (void *)0x44547e4;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar22 = TypeInfo_UIManager->m_Items[6].fields.key;
  pIVar22[6].klass = pIVar28;
  auStackY_1a0._32_8_ = (void *)0x44547ff;
  il2cpp_runtime_helper_022b4080(pIVar22 + 6,pIVar28);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    auStackY_1a0._32_8_ = (void *)0x4454817;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar33 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
            **(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    auStackY_1a0._32_8_ = (void *)0x445483c;
    il2cpp_runtime_helper_02337ed0();
  }
  auStackY_1a0._32_8_ = (void *)0x445485a;
  ppMVar31 = (MethodInfo_255AB00 **)MethodInfo_GameObject_InstantiateAsset_GameObject;
  pSVar38 = pSVar33;
  __this_16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)pSVar33,"Prefabs/MainMenu/MainMenuSounds",0,(MethodInfo_25BC8B0 *)MethodInfo_GameObject_InstantiateAsset_GameObject);
  if (__this_16 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
    ppMVar31 = &MethodInfo_AudioSource_GetComponentsInChildren_AudioSource;
    auStackY_1a0._32_8_ = (void *)0x4454875;
    pSVar29 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)__this_16,MethodInfo_AudioSource_GetComponentsInChildren_AudioSource);
    pSVar38 = __this_16;
    if (pSVar29 != (System_Object_array *)0x0) {
      uVar14 = (uint)pSVar29->max_length;
      if (0 < (int)uVar14) {
        uVar39 = 0;
        ppSVar36 = &MethodInfo_Void_Add;
        do {
          uVar13 = SUB84(__this_16,0);
          if (uVar14 <= uVar39) goto label_04454915;
          __this_04 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      pSVar29->m_Items[(int)uVar39];
          if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
            auStackY_1a0._32_8_ = (void *)0x44548bf;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar38 = TypeInfo_UIManager;
          if (__this_04 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          pSVar33 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                    TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
          auStackY_1a0._32_8_ = (void *)0x44548dd;
          pSVar38 = __this_04;
          pSVar17 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_04,(MethodInfo *)0x0);
          if (pSVar33 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)
          goto label_04454910;
          auStackY_1a0._32_8_ = (void *)0x44548f4;
          ppMVar31 = (MethodInfo_255AB00 **)MethodInfo_Void_Add;
          __this_16 = pSVar33;
          System_Collections_Generic_Dictionary_object__object___Add
                    ((System_Collections_Generic_Dictionary_object__object__o *)pSVar33,
                     (Il2CppObject *)pSVar17,(Il2CppObject *)__this_04,(MethodInfo_3104E10 *)MethodInfo_Void_Add);
          uVar39 = uVar39 + 1;
          uVar14 = (uint)pSVar29->max_length;
        } while ((int)uVar39 < (int)uVar14);
      }
      return;
    }
  }
label_04454910:
  uVar13 = SUB84(pSVar38,0);
  auStackY_1a0._32_8_ = (void *)0x4454915;
  il2cpp_runtime_helper_022b2c90();
label_04454915:
  auStackY_1a0._32_8_ = (void *)0x445491a;
  il2cpp_runtime_helper_022b2ca0();
  pIVar28 = (Il2CppClass *)auStackY_1a0;
  args = (MethodInfo_3104D80 **)ppMVar31;
  auStackY_1a0._24_8_ = pSVar33;
  auStackY_1a0._32_8_ = ppSVar36;
  if (g_data_057ae71c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AudioSource_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UISound);
    g_data_057ae71c = '\x01';
    args = (MethodInfo_3104D80 **)ppMVar31;
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar23 = TypeInfo_UIManager->m_Items[6].fields.key[6].klass;
  auStackY_1a0._0_8_ = TypeInfo_UISound;
  auStackY_1a0._8_8_ = (void *)0xffffffffffffffff;
  auStackY_1a0._16_4_ = uVar13;
  pIVar24 = (Il2CppClass *)0x0;
  pIVar30 = (Il2CppClass *)System_Enum__ToString((System_Enum_o *)auStackY_1a0,(MethodInfo *)0x0);
  if (pIVar23 != (Il2CppClass *)0x0) {
    args = &MethodInfo_AudioSource_get_Item;
    __this_17 = (UnityEngine_AudioSource_o *)
                System_Collections_Generic_Dictionary_object__object___get_Item
                          ((System_Collections_Generic_Dictionary_object__object__o *)pIVar23,
                           (Il2CppObject *)pIVar30,MethodInfo_AudioSource_get_Item);
    pIVar24 = pIVar30;
    pIVar28 = pIVar23;
    if (__this_17 != (UnityEngine_AudioSource_o *)0x0) {
      UnityEngine_AudioSource__Play_4daa2c0(__this_17,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar23 = pIVar24;
  if (g_data_057ae71d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71d = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454a6b;
label_04454a0b:
    pIVar30 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454a0b;
label_04454a6b:
    il2cpp_runtime_helper_02337ed0();
    pIVar30 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar30 != (Il2CppClass *)0x0) {
    pIVar23 = pIVar28;
    bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar30,
                        (Il2CppObject *)pIVar28,MethodInfo_Boolean_ContainsKey);
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar30 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar30 != (Il2CppClass *)0x0) {
      if ((char)bVar15 != '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pIVar30,(Il2CppObject *)pIVar28,
                   (Il2CppObject *)pIVar24,MethodInfo_Void_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar30,(Il2CppObject *)pIVar28,
                 (Il2CppObject *)pIVar24,MethodInfo_Void_Add);
      return;
    }
  }
  pIVar28 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae71e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae71e = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454b86;
label_04454b33:
    pIVar24 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454b33;
label_04454b86:
    il2cpp_runtime_helper_02337ed0();
    pIVar24 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
  }
  if (pIVar24 != (Il2CppClass *)0x0) {
    pIVar23 = pIVar28;
    bVar15 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       ((System_Collections_Generic_Dictionary_object__object__o *)pIVar24,
                        (Il2CppObject *)pIVar28,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar15 == '\0') {
      return;
    }
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar24 = TypeInfo_UIManager->m_Items[6].fields.key[1].klass;
    if (pIVar24 != (Il2CppClass *)0x0) {
      System_Collections_Generic_Dictionary_object__object___get_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pIVar24,(Il2CppObject *)pIVar28,
                 MethodInfo_String_get_Item);
      return;
    }
  }
  pIVar28 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae722 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icon");
    g_data_057ae722 = '\x01';
    if (TypeInfo_UIManager->m_Items[8].fields.next == 0) goto label_04454ca2;
label_04454c43:
    pIVar24 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  else {
    if (TypeInfo_UIManager->m_Items[8].fields.next != 0) goto label_04454c43;
label_04454ca2:
    il2cpp_runtime_helper_02337ed0();
    pIVar24 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
  }
  if (pIVar24 != (Il2CppClass *)0x0) {
    pIVar23 = pIVar28;
    bVar15 = System_Collections_Generic_List_object___Contains
                       ((System_Collections_Generic_List_object__o *)pIVar24,(Il2CppObject *)pIVar28,
                        MethodInfo_Boolean_Contains);
    if ((char)bVar15 == '\0') {
      if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar28 = TypeInfo_UIManager->m_Items[6].fields.key[4].klass;
      if (pIVar28 == (Il2CppClass *)0x0) goto label_04454d23;
      pIVar28 = (Il2CppClass *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pIVar28,0,MethodInfo_String_get_Item);
    }
    System_String__Concat_3ae5ba0((System_String_o *)pIVar28,"Icon",(MethodInfo *)0x0);
    return;
  }
label_04454d23:
  pSVar17 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae723 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae723 = '\x01';
  }
  if (TypeInfo_UIManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar17 = UI_UIManager__GetLocale(pSVar17,(System_String_o *)pIVar23,item,"","",in_R9);
  System_String__Format_3af7980(pSVar17,(System_Object_array *)args,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$Update
// il2cpp: void UI_UIManager__Update (UI_UIManager_o* __this, const MethodInfo* method);
// 0x4457620

void UI_UIManager__Update(UI_UIManager_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_Component_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  bool_conflict bVar4;
  int32_t iVar5;
  UnityEngine_Object_o *pUVar6;
  System_Object_array *pSVar7;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_TextGenerator_o *__this_03;
  long lVar8;
  uint uVar9;
  MethodInfo *method_00;
  long lVar10;
  float fVar11;
  double x;
  double dVar12;
  float fVar13;
  Il2CppMethodPointer pIStack_38;
  
  if (g_data_057ae733 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponentsInChildren_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae733 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar13 = *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x6c);
  fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  lVar10 = TypeInfo_UIManager;
  fVar11 = fVar11 + fVar13;
  lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(float *)(lVar8 + 0x6c) = fVar11;
  fVar13 = *(float *)(lVar8 + 0x70) + 1.0;
  *(float *)(lVar8 + 0x70) = fVar13;
  if (*(float *)(lVar8 + 0x74) <= fVar11) {
    if (*(int *)(lVar10 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      fVar11 = *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x6c);
      fVar13 = *(float *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x70);
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_Math + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    x = (double)(fVar13 / fVar11);
    method_00 = (MethodInfo *)&stack0xffffffffffffffc8;
    dVar12 = modf(x,(double *)method_00,method);
    if (0.0 <= fVar13 / fVar11) {
      if ((dVar12 != 0.5) || (NAN(dVar12))) {
        pIStack_38 = (Il2CppMethodPointer)floor(x + 0.5,method_00);
      }
      else if (((long)(double)pIStack_38 & 1U) != 0) {
        pIStack_38 = (Il2CppMethodPointer)((double)pIStack_38 + 1.0);
      }
    }
    else if ((dVar12 != -0.5) || (NAN(dVar12))) {
      pIStack_38 = (Il2CppMethodPointer)ceil(x + -0.5,method_00);
    }
    else if (((long)(double)pIStack_38 & 1U) != 0) {
      pIStack_38 = (Il2CppMethodPointer)((double)pIStack_38 + -1.0);
    }
    lVar10 = TypeInfo_UIManager;
    lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
    *(int *)(lVar8 + 0x68) = (int)(double)pIStack_38;
    *(undefined8 *)(lVar8 + 0x6c) = 0;
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar10 = TypeInfo_UIManager;
  }
  pUVar6 = *(UnityEngine_Object_o **)(*(long *)(lVar10 + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
      cVar1 = *(char *)(lVar8 + 0x58);
    }
    else {
      lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
      cVar1 = *(char *)(lVar8 + 0x58);
    }
    if (cVar1 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
      }
      if (*(UnityEngine_Component_o **)(lVar8 + 0x28) != (UnityEngine_Component_o *)0x0) {
        pUVar6 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject
                           (*(UnityEngine_Component_o **)(lVar8 + 0x28),(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') goto label_04457a83;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar8 = *(long *)(TypeInfo_UIManager + 0xb8);
        *(undefined1 *)(lVar8 + 0x58) = 0;
        __this_00 = *(UnityEngine_Component_o **)(lVar8 + 0x28);
        if ((__this_00 != (UnityEngine_Component_o *)0x0) &&
           (pSVar7 = UnityEngine_Component__GetComponentsInChildren_object__24e8500(__this_00,MethodInfo_Text_GetComponentsInChildren_Text),
           pSVar7 != (System_Object_array *)0x0)) {
          iVar2 = (int)pSVar7->max_length;
          if (0 < iVar2) {
            uVar9 = 0;
            if (iVar2 != 0) {
              do {
                __this_01 = (UnityEngine_UI_Text_o *)pSVar7->m_Items[(int)uVar9];
                if ((__this_01 == (UnityEngine_UI_Text_o *)0x0) ||
                   (__this_02 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
                   __this_02 == (UnityEngine_GameObject_o *)0x0)) goto label_04457add;
                bVar4 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
                if (((char)bVar4 != '\0') &&
                   (iVar5 = UnityEngine_UI_Text__get_fontSize(__this_01,(MethodInfo *)0x0), 2 < iVar5)) {
                  __this_03 = UnityEngine_UI_Text__get_cachedTextGenerator(__this_01,(MethodInfo *)0x0);
                  if (__this_03 == (UnityEngine_TextGenerator_o *)0x0) goto label_04457add;
                  iVar5 = UnityEngine_TextGenerator__get_characterCountVisible(__this_03,(MethodInfo *)0x0);
                  lVar8 = (*(__this_01->klass->vtable)._74_get_text.methodPtr)(__this_01);
                  if (lVar8 == 0) goto label_04457add;
                  if (iVar5 < *(int *)(lVar8 + 0x10)) {
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    if (*(char *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x59) != '\0') {
                      iVar5 = UnityEngine_UI_Text__get_fontSize(__this_01,(MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      iVar5 = System_Math__Max_3cb7c30(iVar5 + -1,1,(MethodInfo *)0x0);
                      UnityEngine_UI_Text__set_fontSize(__this_01,iVar5,(MethodInfo *)0x0);
                    }
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 1;
                  }
                }
                uVar9 = uVar9 + 1;
                uVar3 = (uint)pSVar7->max_length;
                if ((int)uVar3 <= (int)uVar9) goto label_04457acf;
              } while (uVar9 < uVar3);
            }
            goto label_04457ae2;
          }
label_04457acf:
          iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
          lVar8 = TypeInfo_UIManager;
          goto joined_r0x04457aa9;
        }
      }
label_04457add:
      il2cpp_runtime_helper_022b2c90();
label_04457ae2:
      il2cpp_runtime_helper_022b2ca0();
      if (g_data_057ae734 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
        g_data_057ae734 = '\x01';
        iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      else {
        iVar2 = *(int *)(TypeInfo_UIManager + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
        return;
      }
      return;
    }
  }
label_04457a83:
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar8 = TypeInfo_UIManager;
  *(undefined1 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 0;
  iVar2 = *(int *)(lVar8 + 0xe4);
joined_r0x04457aa9:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar8 = TypeInfo_UIManager;
  }
  *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x59) = *(undefined1 *)(*(long *)(lVar8 + 0xb8) + 0x58);
  return;
}


// UI.UIManager$$GetFPS
// il2cpp: int32_t UI_UIManager__GetFPS (const MethodInfo* method);
// 0x4457af0

int32_t UI_UIManager__GetFPS(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae734 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae734 = '\x01';
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int32_t *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x68);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(int32_t *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x68);
}


// UI.UIManager$$.ctor
// il2cpp: void UI_UIManager___ctor (UI_UIManager_o* __this, const MethodInfo* method);
// 0x4457b60

void UI_UIManager___ctor(UI_UIManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.UIManager$$.cctor
// il2cpp: void UI_UIManager___cctor (const MethodInfo* method);
// 0x4457b70

void UI_UIManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ae735 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_Type_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Type_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_AudioSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae735 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_JSONObject);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONObject);
  **(undefined8 **)(TypeInfo_UIManager + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_UIManager + 0xb8),pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_JSONObject);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONObject);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Type_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_Type_System_String);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x10) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar2);
  *(undefined4 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x38) = 0x3f800000;
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar3,MethodInfo_List_1_System_String);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x40) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar3);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(pSVar3,MethodInfo_List_1_System_String);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar1 + 0x48) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar3);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x50) = __this;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50,__this);
  *(undefined2 *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x58) = 0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_AudioSource);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_UnityEngine_AudioSource);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x60) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x60,pSVar2);
  lVar1 = *(long *)(TypeInfo_UIManager + 0xb8);
  *(undefined4 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x6c) = 0;
  *(undefined4 *)(lVar1 + 0x74) = 0x3f000000;
  return;
}



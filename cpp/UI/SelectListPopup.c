// Type: UI.SelectListPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/SelectListPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/SelectListPopup.cs
// --------------------------------

// UI.SelectListPopup.ItemCategory$$.ctor
// il2cpp: void UI_SelectListPopup_ItemCategory___ctor (UI_SelectListPopup_ItemCategory_o* __this, System_String_o* name, System_Collections_Generic_List_string__o* items, const MethodInfo* method);
// 0x4355260

void UI_SelectListPopup_ItemCategory___ctor
               (UI_SelectListPopup_ItemCategory_o *__this,System_String_o *name,
               System_Collections_Generic_List_string__o *items,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  il2cpp_runtime_helper_022b4080(&__this->fields,name);
  (__this->fields).Items = items;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Items,items);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass46_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass46_0___ctor (UI_SelectListPopup___c__DisplayClass46_0_o* __this, const MethodInfo* method);
// 0x4352480

void UI_SelectListPopup___c__DisplayClass46_0___ctor
               (UI_SelectListPopup___c__DisplayClass46_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass46_0$$<OnSearchEndEdit>b__0
// il2cpp: bool UI_SelectListPopup___c__DisplayClass46_0___OnSearchEndEdit_b__0 (UI_SelectListPopup___c__DisplayClass46_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x43552a0

bool_conflict
UI_SelectListPopup___c__DisplayClass46_0___OnSearchEndEdit_b__0
          (UI_SelectListPopup___c__DisplayClass46_0_o *__this,System_String_o *item,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  code *UNRECOVERED_JUMPTABLE_01;
  UI_ConfirmPopup_o *pUVar3;
  size_t sVar4;
  void *pvVar5;
  UnityEngine_UI_InputField_o *__this_00;
  long lVar6;
  UI_SelectListPopup_o *__this_01;
  Il2CppObject *value;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  undefined8 uVar7;
  int32_t iVar8;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  bool_conflict extraout_EAX_04;
  bool_conflict extraout_EAX_05;
  bool_conflict extraout_EAX_06;
  bool_conflict bVar9;
  bool_conflict extraout_EAX_07;
  Il2CppRGCTXData *pIVar10;
  Il2CppClass *x;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_UI_LayoutGroup_o *__this_09;
  long *plVar12;
  Il2CppRGCTXData *pIVar13;
  System_String_o *pSVar14;
  void *in_RCX;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 extraout_RDX_00;
  undefined8 *puVar15;
  Il2CppRGCTXData **unaff_RBX;
  undefined1 *puVar16;
  Il2CppRGCTXData *pIVar17;
  MethodInfo *pMVar18;
  Il2CppRGCTXData value_00;
  Il2CppRGCTXData *pIVar19;
  MethodInfo *pMVar20;
  Il2CppClass *pIVar21;
  System_String_c *__this_10;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  ulong uVar22;
  Il2CppRGCTXData unaff_R14;
  MethodInfo_2A24090 **unaff_R15;
  undefined1 auVar23 [12];
  undefined1 auVar24 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar25;
  Il2CppType *pIVar26;
  UnityEngine_GameObject_o *__this_11;
  undefined1 auStack_d8 [16];
  UnityEngine_GameObject_o *pUStack_c8;
  Il2CppRGCTXData *pIStack_c0;
  ulong uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  Il2CppRGCTXData *pIStack_98;
  MethodInfo *pMStack_90;
  Il2CppRGCTXData *pIStack_80;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_70;
  Il2CppRGCTXData *pIStack_68;
  
  pIVar19 = (Il2CppRGCTXData *)item;
  pIVar13 = (Il2CppRGCTXData *)__this;
  if (item != (System_String_o *)0x0) {
    pIVar19 = (Il2CppRGCTXData *)0x0;
    pSVar14 = System_String__ToLowerInvariant(item,(MethodInfo *)0x0);
    unaff_RBX = (Il2CppRGCTXData **)__this;
    pIVar13 = (Il2CppRGCTXData *)item;
    if (pSVar14 != (System_String_o *)0x0) {
      iVar8 = System_String__IndexOf_3afc470
                        (pSVar14,(__this->fields).query,0,(pSVar14->fields)._stringLength,4,in_R9);
      return CONCAT31((int3)((uint)iVar8 >> 8),-1 < iVar8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar17 = pIVar19;
  pIVar10 = pIVar13;
  if (pIVar19 != (Il2CppRGCTXData *)0x0) {
    pIVar17 = (Il2CppRGCTXData *)0x0;
    pSVar14 = System_String__ToLowerInvariant((System_String_o *)pIVar19,(MethodInfo *)0x0);
    unaff_RBX = (Il2CppRGCTXData **)pIVar13;
    pIVar10 = pIVar19;
    if (pSVar14 != (System_String_o *)0x0) {
      bVar9 = System_String__Contains(pSVar14,(System_String_o *)pIVar13[2].method,(MethodInfo *)0x0);
      return bVar9;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar19 = pIVar10;
  if ((pIVar17 != (Il2CppRGCTXData *)0x0) &&
     (pSVar14 = System_String__ToLowerInvariant((System_String_o *)pIVar17,(MethodInfo *)0x0),
     unaff_RBX = (Il2CppRGCTXData **)pIVar10, pIVar19 = pIVar17, pSVar14 != (System_String_o *)0x0)) {
    bVar9 = System_String__Contains(pSVar14,(System_String_o *)pIVar10[2].method,(MethodInfo *)0x0);
    return bVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar16 = &stack0xffffffffffffffe0;
  pIVar21 = pIVar19[2].klass;
  if (pIVar21 == (Il2CppClass *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    __this_10 = (System_String_c *)(pIVar21->_1).name;
    if (__this_10 == (System_String_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_01 = (UI_SelectListPopup_o *)(__this_10->_1).namespaze;
      if (__this_01 != (UI_SelectListPopup_o *)0x0) {
        pMVar20 = (MethodInfo *)((Settings_TypedSetting_T__Fields *)&(__this_10->_1).name)->DefaultValue;
        (__this_01->fields)._activeCategoryName = (System_String_o *)pMVar20;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields)._activeCategoryName);
        UI_SelectListPopup__SyncCategoryTabs(__this_01,pMVar20);
        UI_SelectListPopup__RefreshList(__this_01,pMVar20);
        return extraout_EAX_07;
      }
      il2cpp_runtime_helper_022b2c90();
      pSVar14 = ((Settings_StringSetting_Fields *)&(__this_10->_1).name)->DefaultValue;
      if (pSVar14 != (System_String_o *)0x0) {
        value = (Il2CppObject *)(__this_10->_1).namespaze;
        if (g_data_057ae14f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
          g_data_057ae14f = '\x01';
        }
        __this_10 = pSVar14[0xd].klass;
        if (__this_10 != (System_String_c *)0x0) {
          Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this_10,value,MethodInfo_Void_set_Value)
          ;
          pIVar21 = (Il2CppClass *)pSVar14[10].klass;
          if (pIVar21 != (Il2CppClass *)0x0) {
            (*(code *)(pIVar21->_1).namespaze)
                      ((pIVar21->_1).element_class,*(undefined8 *)&(pIVar21->_1).byval_arg.bits);
            vtableDispatch = ((Il2CppClass *)pSVar14->klass)->vtable[0x16].methodPtr;
            bVar9 = (*vtableDispatch)
                              (pSVar14,((Il2CppClass *)pSVar14->klass)->vtable[0x16].method,extraout_RDX_00,
                               vtableDispatch);
            return bVar9;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      unaff_RBX = (Il2CppRGCTXData **)((Settings_StringSetting_Fields *)&(__this_10->_1).name)->DefaultValue;
      if ((Il2CppRGCTXData *)unaff_RBX == (Il2CppRGCTXData *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        return (bool_conflict)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      unaff_R14 = (Il2CppRGCTXData)(__this_10->_1).namespaze;
      puVar16 = &stack0xffffffffffffffa0;
      value_00 = unaff_R14;
      if (g_data_057ae150 == '\0') {
        pIStack_68 = (Il2CppRGCTXData *)0x4354a10;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        pIStack_68 = (Il2CppRGCTXData *)0x4354a1c;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
        g_data_057ae150 = '\x01';
      }
      __this_10 = (System_String_c *)((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method;
      if (__this_10 != (System_String_c *)0x0) {
        unaff_R15 = &MethodInfo_Void_set_Value;
        pIStack_68 = (Il2CppRGCTXData *)0x4354a45;
        value_00 = unaff_R14;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_10,(Il2CppObject *)unaff_R14.method,MethodInfo_Void_set_Value);
        pIVar21 = ((Il2CppRGCTXData *)(unaff_RBX + 0x1f))->klass;
        if (pIVar21 != (Il2CppClass *)0x0) {
          value_00 = *(Il2CppRGCTXData *)&(pIVar21->_1).byval_arg.bits;
          pIStack_68 = (Il2CppRGCTXData *)0x4354a5c;
          (*(code *)(pIVar21->_1).namespaze)((pIVar21->_1).element_class);
          __this_10 = (System_String_c *)0x0;
          if (((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method != (MethodInfo *)0x0) {
            value_00 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(g_data_057b9c00 + 0xb8))->method;
            pIStack_68 = (Il2CppRGCTXData *)0x4354a88;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method,
                       (Il2CppObject *)value_00.method,MethodInfo_Void_set_Value);
            __this_10 = (System_String_c *)0x0;
            if (((Il2CppRGCTXData *)(unaff_RBX + 0x1c))->method != (MethodInfo *)0x0) {
              pIStack_68 = (Il2CppRGCTXData *)0x4354aa6;
              System_Collections_Generic_List_object___Remove
                        ((System_Collections_Generic_List_object__o *)
                         ((Il2CppRGCTXData *)(unaff_RBX + 0x1c))->method,(Il2CppObject *)unaff_R14.method,
                         MethodInfo_Boolean_Remove);
              UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)unaff_RBX,unaff_R14.method);
              return extraout_EAX_04;
            }
          }
        }
      }
      pIStack_68 = (Il2CppRGCTXData *)0x4354ab8;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      value_00 = (Il2CppRGCTXData)(pIVar21->_1).namespaze;
    }
    *(MethodInfo_2A24090 ***)(puVar16 + -8) = unaff_R15;
    *(Il2CppRGCTXData *)(puVar16 + -0x10) = unaff_R14;
    *(Il2CppRGCTXData ***)(puVar16 + -0x18) = unaff_RBX;
    if (g_data_057ae151 == '\0') {
      *(undefined8 *)(puVar16 + -0x20) = 0x4354ae0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleteClick_b__0);
      *(undefined8 *)(puVar16 + -0x20) = 0x4354aec;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass63_0);
      *(undefined8 *)(puVar16 + -0x20) = 0x4354af8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)(puVar16 + -0x20) = 0x4354b04;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      *(undefined8 *)(puVar16 + -0x20) = 0x4354b10;
      il2cpp_runtime_helper_023445d0(&"Delete this item?");
      g_data_057ae151 = '\x01';
    }
    *(undefined8 *)(puVar16 + -0x20) = 0x4354b26;
    pIVar13 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass63_0);
    *(undefined8 *)(puVar16 + -0x20) = 0x4354b33;
    pIVar19 = pIVar13;
    System_Object___ctor((Il2CppObject *)pIVar13,(MethodInfo *)0x0);
    if (pIVar13 != (Il2CppRGCTXData *)0x0) {
      pIVar13[2].method = (MethodInfo *)__this_10;
      *(undefined8 *)(puVar16 + -0x20) = 0x4354b4c;
      il2cpp_runtime_helper_022b4080(pIVar13 + 2,__this_10);
      pIVar13[3] = value_00;
      *(undefined8 *)(puVar16 + -0x20) = 0x4354b5f;
      il2cpp_runtime_helper_022b4080(pIVar13 + 3);
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)(puVar16 + -0x20) = 0x4354b77;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar19 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        pUVar3 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        *(undefined8 *)(puVar16 + -0x20) = 0x4354b9d;
        pIVar13 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        *(undefined8 *)(puVar16 + -0x20) = 0x4354bb7;
        pIVar19 = pIVar13;
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (pUVar3,"Delete this item?",(UnityEngine_Events_UnityAction_o *)pIVar13,(System_String_o *)0x0,
                     in_R8);
          return extraout_EAX_05;
        }
      }
    }
    *(undefined8 *)(puVar16 + -0x20) = 0x4354bdd;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pIVar19,(MethodInfo *)0x0);
    return extraout_EAX_06;
  }
  pIVar19 = (Il2CppRGCTXData *)pIVar19[3].method;
  if (g_data_057ae14e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnItemClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass60_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Overwrite this item?");
    il2cpp_runtime_helper_023445d0(&"Cannot overwrite this item.");
    g_data_057ae14e = '\x01';
  }
  pIVar10 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass60_0);
  pIVar17 = (Il2CppRGCTXData *)0x0;
  pIVar13 = pIVar10;
  System_Object___ctor((Il2CppObject *)pIVar10,(MethodInfo *)0x0);
  if (pIVar10 != (Il2CppRGCTXData *)0x0) {
    pIVar10[2].klass = pIVar21;
    il2cpp_runtime_helper_022b4080(pIVar10 + 2,pIVar21);
    unaff_RBX = (Il2CppRGCTXData **)(pIVar10 + 3);
    pIVar10[3].method = (MethodInfo *)pIVar19;
    il2cpp_runtime_helper_022b4080(unaff_RBX);
    if ((char)(pIVar21->_2).element_size == '\0') {
      pIVar13 = (Il2CppRGCTXData *)pIVar21->vtable[0].methodPtr;
      pIVar17 = pIVar19;
      if (pIVar13 != (Il2CppRGCTXData *)0x0) {
        pIVar17 = *unaff_RBX;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pIVar13,(Il2CppObject *)pIVar17,MethodInfo_Void_set_Value);
        sVar4 = (pIVar21->_2).cctor_thread;
        if (sVar4 != 0) {
          (**(code **)(sVar4 + 0x18))(*(undefined8 *)(sVar4 + 0x40),*(undefined8 *)(sVar4 + 0x28));
          pvVar5 = (pIVar21->_1).image;
          UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar5 + 0x298);
          bVar9 = (*UNRECOVERED_JUMPTABLE_01)
                            (pIVar21,*(undefined8 *)((long)pvVar5 + 0x2a0),extraout_RDX,
                             UNRECOVERED_JUMPTABLE_01);
          return bVar9;
        }
      }
    }
    else {
      pSVar2 = *(System_Collections_Generic_List_object__o **)&(pIVar21->_2).thread_static_fields_offset;
      if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
        pIVar19 = *unaff_RBX;
        bVar9 = System_Collections_Generic_List_object___Contains(pSVar2,(Il2CppObject *)pIVar19,MethodInfo_Boolean_Contains)
        ;
        if ((char)bVar9 != '\0') {
          unaff_RBX = &TypeInfo_UIManager;
          if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar7 = "Cannot overwrite this item.";
          pIVar17 = pIVar19;
          pIVar13 = TypeInfo_UIManager;
          if (((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) &&
             (unaff_RBX = (TypeInfo_UIManager[0x17].method)->return_type[3].data,
             (Il2CppRGCTXData *)unaff_RBX != (Il2CppRGCTXData *)0x0)) {
            UI_BasePopup__Show((UI_BasePopup_o *)unaff_RBX,(MethodInfo *)pIVar19);
            pIVar17 = pIVar19;
            pIVar13 = (Il2CppRGCTXData *)0x0;
            if (((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method != (MethodInfo *)0x0) {
              pIVar17 = (Il2CppRGCTXData *)0x1;
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method,1,
                         (MethodInfo *)0x0);
              pMVar20 = ((Il2CppRGCTXData *)(unaff_RBX + 0x15))->method;
              pIVar13 = (Il2CppRGCTXData *)0x0;
              if (pMVar20 != (MethodInfo *)0x0) {
                UNRECOVERED_JUMPTABLE_01 = *(code **)(pMVar20->methodPointer + 0x5e8);
                bVar9 = (*UNRECOVERED_JUMPTABLE_01)
                                  (pMVar20,uVar7,*(undefined8 *)(pMVar20->methodPointer + 0x5f0),
                                   UNRECOVERED_JUMPTABLE_01);
                return bVar9;
              }
            }
          }
          goto label_04352828;
        }
      }
      unaff_RBX = &TypeInfo_UIManager;
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar17 = pIVar19;
      pIVar13 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        pUVar3 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        unaff_RBX = (Il2CppRGCTXData **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        in_RCX = (void *)0x0;
        pIVar17 = pIVar10;
        pIVar13 = (Il2CppRGCTXData *)unaff_RBX;
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (pUVar3,"Overwrite this item?",(UnityEngine_Events_UnityAction_o *)unaff_RBX,(System_String_o *)0x0,
                     in_R8);
          return extraout_EAX;
        }
      }
    }
  }
label_04352828:
  auVar24 = il2cpp_runtime_helper_022b2c90();
  pMVar20 = auVar24._8_8_;
  uStack_78 = auVar24._0_8_;
  pIVar19 = pIVar17;
  pIStack_70 = (Il2CppRGCTXData *)unaff_RBX;
  pIStack_68 = pIVar10;
  if (g_data_057ae142 == '\0') {
    pIStack_80 = (Il2CppRGCTXData *)0x4352862;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pIStack_80 = (Il2CppRGCTXData *)0x435286e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae142 = '\x01';
  }
  pIStack_80 = (Il2CppRGCTXData *)0x435287d;
  UI_BasePopup__Show((UI_BasePopup_o *)pIVar13,(MethodInfo *)pIVar19);
  pIVar13[0x1c].method = (MethodInfo *)pIVar17;
  pIStack_80 = (Il2CppRGCTXData *)0x4352893;
  il2cpp_runtime_helper_022b4080(pIVar13 + 0x1c,pIVar17);
  pIVar13[0x23].rgctxDataDummy = (void *)0x0;
  pIStack_80 = (Il2CppRGCTXData *)0x43528ac;
  il2cpp_runtime_helper_022b4080(pIVar13 + 0x23,0);
  *(undefined1 *)(pIVar13 + 0x25) = 0;
  *(undefined1 *)(pIVar13 + 0x20) = 0;
  pIVar13[0x1d].rgctxDataDummy = in_RCX;
  pIStack_80 = (Il2CppRGCTXData *)0x43528d0;
  il2cpp_runtime_helper_022b4080(pIVar13 + 0x1d,in_RCX);
  *(bool *)((long)pIVar13 + 0x101) = in_R8 != (MethodInfo *)0x0;
  pIVar13[0x21].rgctxDataDummy = in_R9;
  pIStack_80 = (Il2CppRGCTXData *)0x43528f0;
  il2cpp_runtime_helper_022b4080(pIVar13 + 0x21,in_R9);
  pIVar13[0x1f].rgctxDataDummy = in_R8;
  pIStack_80 = (Il2CppRGCTXData *)0x4352906;
  il2cpp_runtime_helper_022b4080(pIVar13 + 0x1f);
  pIVar19 = (Il2CppRGCTXData *)0x0;
  if (pIVar13[0x27].method != (MethodInfo *)0x0) {
    pIStack_80 = (Il2CppRGCTXData *)0x435292f;
    in_R8 = "";
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pIVar13[0x27].method,(Il2CppObject *)"",MethodInfo_Void_set_Value);
    pIVar19 = (Il2CppRGCTXData *)0x0;
    if (pIVar13[0x1b].method != (MethodInfo *)0x0) {
      pIStack_80 = (Il2CppRGCTXData *)0x435294f;
      (**(code **)((pIVar13[0x1b].method)->methodPointer + 0x198))();
      pMVar18 = (MethodInfo *)0x0;
      pIStack_80 = (Il2CppRGCTXData *)0x4352959;
      UI_SelectListPopup__SetCategoryTabsEnabled((UI_SelectListPopup_o *)pIVar13,0,method_00);
      pIStack_80 = (Il2CppRGCTXData *)0x4352961;
      UI_SelectListPopup__ToggleSaveElements((UI_SelectListPopup_o *)pIVar13,pMVar18);
      in_R8 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pIStack_80 = (Il2CppRGCTXData *)0x4352983;
      bVar9 = System_String__op_Inequality
                        ((System_String_o *)pMVar20,(System_String_o *)in_R8,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        pIStack_80 = (Il2CppRGCTXData *)0x4352992;
        in_R8 = pMVar20;
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pIVar13,(System_String_o *)pMVar20,method_01);
      }
      pIStack_80 = (Il2CppRGCTXData *)0x435299a;
      pIVar19 = pIVar13;
      UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)pIVar13,in_R8);
      if ((pIVar13[0x1b].klass != (Il2CppClass *)0x0) &&
         (pIVar19 = *(Il2CppRGCTXData **)&((pIVar13[0x1b].klass)->_1).this_arg.bits,
         pIVar19 != (Il2CppRGCTXData *)0x0)) {
        in_R8 = pIVar19->klass->vtable[0x26].method;
        pIStack_80 = (Il2CppRGCTXData *)0x43529bf;
        (*pIVar19->klass->vtable[0x26].methodPtr)();
        if (pIVar13[0x1b].klass != (Il2CppClass *)0x0) {
          __this_00 = *(UnityEngine_UI_InputField_o **)&((pIVar13[0x1b].klass)->_1).this_arg.bits;
          pIVar19 = (Il2CppRGCTXData *)0x0;
          if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ActivateInputField(__this_00,(MethodInfo *)0x0);
            return extraout_EAX_00;
          }
        }
      }
    }
  }
  pIStack_80 = (Il2CppRGCTXData *)0x43529ee;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  uVar22 = (ulong)in_R8 & 0xffffffff;
  pIStack_98 = pIVar13;
  pMStack_90 = pMVar20;
  pIStack_80 = pIVar17;
  if (g_data_057ae14b == '\0') {
    plStack_a8 = (long *)0x4352a12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    plStack_a8 = (long *)0x4352a1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plStack_a8 = (long *)0x4352a2a;
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae14b = '\x01';
  }
  pMVar20 = pIVar19[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    plStack_a8 = (long *)0x4352a4d;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_a8 = (long *)0x4352a59;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') goto label_04352b16;
  pIVar21 = (Il2CppClass *)0x0;
  if (pIVar19[0xe].method != (MethodInfo *)0x0) {
    plStack_a8 = (long *)0x4352a7f;
    x = (Il2CppClass *)
        UnityEngine_Transform__Find
                  ((UnityEngine_Transform_o *)pIVar19[0xe].method,"Label",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_a8 = (long *)0x4352a93;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_a8 = (long *)0x4352a9f;
    pIVar21 = x;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
label_04352ad2:
      if (*(char *)(pIVar19 + 0x19) == '\0') {
label_04352b16:
        pMVar20 = pIVar19[0x18].method;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          plStack_a8 = (long *)0x4352b2e;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar18 = (MethodInfo *)0x0;
        plStack_a8 = (long *)0x4352b3a;
        bVar9 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pMVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 == '\0') {
label_04352b55:
          if ((char)uVar22 == '\0') {
            UI_SelectListPopup__ClearCategoryTabs((UI_SelectListPopup_o *)pIVar19,pMVar18);
            return extraout_EAX_02;
          }
          return bVar9;
        }
        pIVar21 = (Il2CppClass *)0x0;
        if (pIVar19[0x18].method != (MethodInfo *)0x0) {
          pMVar18 = (MethodInfo *)((ulong)in_R8 & 0xff);
          plStack_a8 = (long *)0x4352b55;
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pIVar19[0x18].method,(bool_conflict)pMVar18,(MethodInfo *)0x0
                    );
          bVar9 = extraout_EAX_01;
          goto label_04352b55;
        }
      }
      else {
        pIVar21 = pIVar19[0xe].klass;
        if (pIVar21 != (Il2CppClass *)0x0) {
          plStack_a8 = (long *)0x4352af7;
          __this_09 = (UnityEngine_UI_LayoutGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pIVar21,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
          iVar8 = 4;
          if ((char)uVar22 == '\0') {
            iVar8 = *(int32_t *)((long)pIVar19 + 0xcc);
          }
          if (__this_09 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
            plStack_a8 = (long *)0x4352b16;
            UnityEngine_UI_LayoutGroup__set_childAlignment(__this_09,iVar8,(MethodInfo *)0x0);
            goto label_04352b16;
          }
        }
      }
    }
    else if (x != (Il2CppClass *)0x0) {
      plStack_a8 = (long *)0x4352ab6;
      pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pIVar21 = x;
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        plStack_a8 = (long *)0x4352ad2;
        UnityEngine_GameObject__SetActive(pUVar11,((uint)in_R8 ^ 1) & 0xff,(MethodInfo *)0x0);
        goto label_04352ad2;
      }
    }
  }
  plStack_a8 = (long *)0x4352b7c;
  il2cpp_runtime_helper_022b2c90();
  plStack_a8 = &TypeInfo_Object;
  pIStack_c0 = pIVar19;
  uStack_b0 = uVar22;
  if (g_data_057ae145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae145 = '\x01';
  }
  pSVar25 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar26 = (Il2CppType *)0x0;
  pUVar11 = (UnityEngine_GameObject_o *)0x0;
  pSVar2 = (pIVar21->_2).unity_user_data;
  if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
label_04352d73:
    auVar23 = il2cpp_runtime_helper_022b2c90();
    if (auVar23._8_4_ != 1) {
      __this_07.fields._8_8_ = pIVar26;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar25;
      __this_07.fields._current = (Il2CppObject *)pUVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
label_04352e59:
      _Unwind_Resume(auVar23._0_8_);
    }
    plVar12 = (long *)__cxa_begin_catch(auVar23._0_8_);
    lVar6 = *plVar12;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar26;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar25;
    __this_06.fields._current = (Il2CppObject *)pUVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
    if (lVar6 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar6);
      __this_08.fields._8_8_ = pIVar26;
      __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar25;
      __this_08.fields._current = (Il2CppObject *)pUVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
      goto label_04352e59;
    }
  }
  else {
    if ((char)(pIVar21->_2).element_size != '\0') {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d8,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      pSVar25 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d8._0_8_;
      pIVar26 = (Il2CppType *)auStack_d8._8_8_;
      pUVar11 = pUStack_c8;
label_04352c60:
      __this_02.fields._8_8_ = pIVar26;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar25;
      __this_02.fields._current = (Il2CppObject *)pUVar11;
      bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff08);
      if ((char)bVar9 != '\0') {
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) goto code_r0x04352c7d;
        il2cpp_runtime_helper_022b2c90();
label_04352d6e:
        il2cpp_runtime_helper_022b2c90();
        goto label_04352d73;
      }
      __this_03.fields._8_8_ = pIVar26;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar25;
      __this_03.fields._current = (Il2CppObject *)pUVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
      puVar15 = &"Save";
      iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
      goto joined_r0x04352cb5;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d8,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar25 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d8._0_8_;
    pIVar26 = (Il2CppType *)auStack_d8._8_8_;
    __this_11 = pUStack_c8;
    while (__this_04.fields._8_8_ = pIVar26,
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar25,
          __this_04.fields._current = (Il2CppObject *)__this_11,
          bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff08), (char)bVar9 != '\0') {
      pUVar11 = (UnityEngine_GameObject_o *)0x0;
      if (__this_11 == (UnityEngine_GameObject_o *)0x0) goto label_04352d6e;
      UnityEngine_GameObject__SetActive(__this_11,0,(MethodInfo *)0x0);
    }
    __this_05.fields._8_8_ = pIVar26;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar25;
    __this_05.fields._current = (Il2CppObject *)__this_11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
  }
  puVar15 = &"Load";
  iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
joined_r0x04352cb5:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar15,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pIVar21,pSVar14,method_02);
  return extraout_EAX_03;
code_r0x04352c7d:
  UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
  goto label_04352c60;
}


// UI.SelectListPopup.<>c__DisplayClass51_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass51_0___ctor (UI_SelectListPopup___c__DisplayClass51_0_o* __this, const MethodInfo* method);
// 0x4353ad0

void UI_SelectListPopup___c__DisplayClass51_0___ctor
               (UI_SelectListPopup___c__DisplayClass51_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass51_0$$<RefreshList>b__0
// il2cpp: bool UI_SelectListPopup___c__DisplayClass51_0___RefreshList_b__0 (UI_SelectListPopup___c__DisplayClass51_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x43552d0

bool_conflict
UI_SelectListPopup___c__DisplayClass51_0___RefreshList_b__0
          (UI_SelectListPopup___c__DisplayClass51_0_o *__this,System_String_o *item,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  code *UNRECOVERED_JUMPTABLE_01;
  UI_ConfirmPopup_o *pUVar3;
  size_t sVar4;
  void *pvVar5;
  UnityEngine_UI_InputField_o *__this_00;
  long lVar6;
  UI_SelectListPopup_o *__this_01;
  Il2CppObject *value;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  undefined8 uVar7;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  bool_conflict extraout_EAX_04;
  bool_conflict extraout_EAX_05;
  bool_conflict extraout_EAX_06;
  bool_conflict bVar8;
  bool_conflict extraout_EAX_07;
  Il2CppRGCTXData *__this_09;
  Il2CppClass *x;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_UI_LayoutGroup_o *__this_10;
  long *plVar10;
  Il2CppRGCTXData *pIVar11;
  System_String_o *pSVar12;
  void *in_RCX;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 extraout_RDX_00;
  undefined8 *puVar13;
  Il2CppRGCTXData **unaff_RBX;
  undefined1 *puVar14;
  int32_t value_00;
  Il2CppRGCTXData *pIVar15;
  MethodInfo *pMVar16;
  Il2CppRGCTXData value_01;
  Il2CppRGCTXData *pIVar17;
  MethodInfo *pMVar18;
  Il2CppClass *pIVar19;
  System_String_c *__this_11;
  MethodInfo *in_R8;
  void *in_R9;
  ulong uVar20;
  Il2CppRGCTXData unaff_R14;
  MethodInfo_2A24090 **unaff_R15;
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar23;
  Il2CppType *pIVar24;
  UnityEngine_GameObject_o *__this_12;
  undefined1 auStack_d0 [16];
  UnityEngine_GameObject_o *pUStack_c0;
  Il2CppRGCTXData *pIStack_b8;
  ulong uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  Il2CppRGCTXData *pIStack_90;
  MethodInfo *pMStack_88;
  Il2CppRGCTXData *pIStack_78;
  undefined8 uStack_70;
  Il2CppRGCTXData *pIStack_68;
  Il2CppRGCTXData *pIStack_60;
  
  pIVar17 = (Il2CppRGCTXData *)item;
  pIVar11 = (Il2CppRGCTXData *)__this;
  if (item != (System_String_o *)0x0) {
    pIVar17 = (Il2CppRGCTXData *)0x0;
    pSVar12 = System_String__ToLowerInvariant(item,(MethodInfo *)0x0);
    unaff_RBX = (Il2CppRGCTXData **)__this;
    pIVar11 = (Il2CppRGCTXData *)item;
    if (pSVar12 != (System_String_o *)0x0) {
      bVar8 = System_String__Contains(pSVar12,(__this->fields).query,(MethodInfo *)0x0);
      return bVar8;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar15 = pIVar11;
  if ((pIVar17 != (Il2CppRGCTXData *)0x0) &&
     (pSVar12 = System_String__ToLowerInvariant((System_String_o *)pIVar17,(MethodInfo *)0x0),
     unaff_RBX = (Il2CppRGCTXData **)pIVar11, pIVar15 = pIVar17, pSVar12 != (System_String_o *)0x0)) {
    bVar8 = System_String__Contains(pSVar12,(System_String_o *)pIVar11[2].method,(MethodInfo *)0x0);
    return bVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar14 = &stack0xffffffffffffffe8;
  pIVar19 = pIVar15[2].klass;
  if (pIVar19 == (Il2CppClass *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    __this_11 = (System_String_c *)(pIVar19->_1).name;
    if (__this_11 == (System_String_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_01 = (UI_SelectListPopup_o *)(__this_11->_1).namespaze;
      if (__this_01 != (UI_SelectListPopup_o *)0x0) {
        pMVar18 = (MethodInfo *)((Settings_TypedSetting_T__Fields *)&(__this_11->_1).name)->DefaultValue;
        (__this_01->fields)._activeCategoryName = (System_String_o *)pMVar18;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields)._activeCategoryName);
        UI_SelectListPopup__SyncCategoryTabs(__this_01,pMVar18);
        UI_SelectListPopup__RefreshList(__this_01,pMVar18);
        return extraout_EAX_07;
      }
      il2cpp_runtime_helper_022b2c90();
      pSVar12 = ((Settings_StringSetting_Fields *)&(__this_11->_1).name)->DefaultValue;
      if (pSVar12 != (System_String_o *)0x0) {
        value = (Il2CppObject *)(__this_11->_1).namespaze;
        if (g_data_057ae14f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
          g_data_057ae14f = '\x01';
        }
        __this_11 = pSVar12[0xd].klass;
        if (__this_11 != (System_String_c *)0x0) {
          Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this_11,value,MethodInfo_Void_set_Value)
          ;
          pIVar19 = (Il2CppClass *)pSVar12[10].klass;
          if (pIVar19 != (Il2CppClass *)0x0) {
            (*(code *)(pIVar19->_1).namespaze)
                      ((pIVar19->_1).element_class,*(undefined8 *)&(pIVar19->_1).byval_arg.bits);
            vtableDispatch = ((Il2CppClass *)pSVar12->klass)->vtable[0x16].methodPtr;
            bVar8 = (*vtableDispatch)
                              (pSVar12,((Il2CppClass *)pSVar12->klass)->vtable[0x16].method,extraout_RDX_00,
                               vtableDispatch);
            return bVar8;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      unaff_RBX = (Il2CppRGCTXData **)((Settings_StringSetting_Fields *)&(__this_11->_1).name)->DefaultValue;
      if ((Il2CppRGCTXData *)unaff_RBX == (Il2CppRGCTXData *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        return (bool_conflict)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      unaff_R14 = (Il2CppRGCTXData)(__this_11->_1).namespaze;
      puVar14 = &stack0xffffffffffffffa8;
      value_01 = unaff_R14;
      if (g_data_057ae150 == '\0') {
        pIStack_60 = (Il2CppRGCTXData *)0x4354a10;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        pIStack_60 = (Il2CppRGCTXData *)0x4354a1c;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
        g_data_057ae150 = '\x01';
      }
      __this_11 = (System_String_c *)((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method;
      if (__this_11 != (System_String_c *)0x0) {
        unaff_R15 = &MethodInfo_Void_set_Value;
        pIStack_60 = (Il2CppRGCTXData *)0x4354a45;
        value_01 = unaff_R14;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_11,(Il2CppObject *)unaff_R14.method,MethodInfo_Void_set_Value);
        pIVar19 = ((Il2CppRGCTXData *)(unaff_RBX + 0x1f))->klass;
        if (pIVar19 != (Il2CppClass *)0x0) {
          value_01 = *(Il2CppRGCTXData *)&(pIVar19->_1).byval_arg.bits;
          pIStack_60 = (Il2CppRGCTXData *)0x4354a5c;
          (*(code *)(pIVar19->_1).namespaze)((pIVar19->_1).element_class);
          __this_11 = (System_String_c *)0x0;
          if (((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method != (MethodInfo *)0x0) {
            value_01 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(g_data_057b9c00 + 0xb8))->method;
            pIStack_60 = (Il2CppRGCTXData *)0x4354a88;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method,
                       (Il2CppObject *)value_01.method,MethodInfo_Void_set_Value);
            __this_11 = (System_String_c *)0x0;
            if (((Il2CppRGCTXData *)(unaff_RBX + 0x1c))->method != (MethodInfo *)0x0) {
              pIStack_60 = (Il2CppRGCTXData *)0x4354aa6;
              System_Collections_Generic_List_object___Remove
                        ((System_Collections_Generic_List_object__o *)
                         ((Il2CppRGCTXData *)(unaff_RBX + 0x1c))->method,(Il2CppObject *)unaff_R14.method,
                         MethodInfo_Boolean_Remove);
              UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)unaff_RBX,unaff_R14.method);
              return extraout_EAX_04;
            }
          }
        }
      }
      pIStack_60 = (Il2CppRGCTXData *)0x4354ab8;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      value_01 = (Il2CppRGCTXData)(pIVar19->_1).namespaze;
    }
    *(MethodInfo_2A24090 ***)(puVar14 + -8) = unaff_R15;
    *(Il2CppRGCTXData *)(puVar14 + -0x10) = unaff_R14;
    *(Il2CppRGCTXData ***)(puVar14 + -0x18) = unaff_RBX;
    if (g_data_057ae151 == '\0') {
      *(undefined8 *)(puVar14 + -0x20) = 0x4354ae0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleteClick_b__0);
      *(undefined8 *)(puVar14 + -0x20) = 0x4354aec;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass63_0);
      *(undefined8 *)(puVar14 + -0x20) = 0x4354af8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)(puVar14 + -0x20) = 0x4354b04;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      *(undefined8 *)(puVar14 + -0x20) = 0x4354b10;
      il2cpp_runtime_helper_023445d0(&"Delete this item?");
      g_data_057ae151 = '\x01';
    }
    *(undefined8 *)(puVar14 + -0x20) = 0x4354b26;
    pIVar11 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass63_0);
    *(undefined8 *)(puVar14 + -0x20) = 0x4354b33;
    pIVar17 = pIVar11;
    System_Object___ctor((Il2CppObject *)pIVar11,(MethodInfo *)0x0);
    if (pIVar11 != (Il2CppRGCTXData *)0x0) {
      pIVar11[2].method = (MethodInfo *)__this_11;
      *(undefined8 *)(puVar14 + -0x20) = 0x4354b4c;
      il2cpp_runtime_helper_022b4080(pIVar11 + 2,__this_11);
      pIVar11[3] = value_01;
      *(undefined8 *)(puVar14 + -0x20) = 0x4354b5f;
      il2cpp_runtime_helper_022b4080(pIVar11 + 3);
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)(puVar14 + -0x20) = 0x4354b77;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar17 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        pUVar3 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        *(undefined8 *)(puVar14 + -0x20) = 0x4354b9d;
        pIVar11 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        *(undefined8 *)(puVar14 + -0x20) = 0x4354bb7;
        pIVar17 = pIVar11;
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (pUVar3,"Delete this item?",(UnityEngine_Events_UnityAction_o *)pIVar11,(System_String_o *)0x0,
                     in_R8);
          return extraout_EAX_05;
        }
      }
    }
    *(undefined8 *)(puVar14 + -0x20) = 0x4354bdd;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
    return extraout_EAX_06;
  }
  pIVar17 = (Il2CppRGCTXData *)pIVar15[3].method;
  if (g_data_057ae14e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnItemClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass60_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Overwrite this item?");
    il2cpp_runtime_helper_023445d0(&"Cannot overwrite this item.");
    g_data_057ae14e = '\x01';
  }
  __this_09 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass60_0);
  pIVar15 = (Il2CppRGCTXData *)0x0;
  pIVar11 = __this_09;
  System_Object___ctor((Il2CppObject *)__this_09,(MethodInfo *)0x0);
  if (__this_09 != (Il2CppRGCTXData *)0x0) {
    __this_09[2].klass = pIVar19;
    il2cpp_runtime_helper_022b4080(__this_09 + 2,pIVar19);
    unaff_RBX = (Il2CppRGCTXData **)(__this_09 + 3);
    __this_09[3].method = (MethodInfo *)pIVar17;
    il2cpp_runtime_helper_022b4080(unaff_RBX);
    if ((char)(pIVar19->_2).element_size == '\0') {
      pIVar11 = (Il2CppRGCTXData *)pIVar19->vtable[0].methodPtr;
      pIVar15 = pIVar17;
      if (pIVar11 != (Il2CppRGCTXData *)0x0) {
        pIVar15 = *unaff_RBX;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pIVar11,(Il2CppObject *)pIVar15,MethodInfo_Void_set_Value);
        sVar4 = (pIVar19->_2).cctor_thread;
        if (sVar4 != 0) {
          (**(code **)(sVar4 + 0x18))(*(undefined8 *)(sVar4 + 0x40),*(undefined8 *)(sVar4 + 0x28));
          pvVar5 = (pIVar19->_1).image;
          UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar5 + 0x298);
          bVar8 = (*UNRECOVERED_JUMPTABLE_01)
                            (pIVar19,*(undefined8 *)((long)pvVar5 + 0x2a0),extraout_RDX,
                             UNRECOVERED_JUMPTABLE_01);
          return bVar8;
        }
      }
    }
    else {
      pSVar2 = *(System_Collections_Generic_List_object__o **)&(pIVar19->_2).thread_static_fields_offset;
      if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
        pIVar17 = *unaff_RBX;
        bVar8 = System_Collections_Generic_List_object___Contains(pSVar2,(Il2CppObject *)pIVar17,MethodInfo_Boolean_Contains)
        ;
        if ((char)bVar8 != '\0') {
          unaff_RBX = &TypeInfo_UIManager;
          if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar7 = "Cannot overwrite this item.";
          pIVar15 = pIVar17;
          pIVar11 = TypeInfo_UIManager;
          if (((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) &&
             (unaff_RBX = (TypeInfo_UIManager[0x17].method)->return_type[3].data,
             (Il2CppRGCTXData *)unaff_RBX != (Il2CppRGCTXData *)0x0)) {
            UI_BasePopup__Show((UI_BasePopup_o *)unaff_RBX,(MethodInfo *)pIVar17);
            pIVar15 = pIVar17;
            pIVar11 = (Il2CppRGCTXData *)0x0;
            if (((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method != (MethodInfo *)0x0) {
              pIVar15 = (Il2CppRGCTXData *)0x1;
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method,1,
                         (MethodInfo *)0x0);
              pMVar18 = ((Il2CppRGCTXData *)(unaff_RBX + 0x15))->method;
              pIVar11 = (Il2CppRGCTXData *)0x0;
              if (pMVar18 != (MethodInfo *)0x0) {
                UNRECOVERED_JUMPTABLE_01 = *(code **)(pMVar18->methodPointer + 0x5e8);
                bVar8 = (*UNRECOVERED_JUMPTABLE_01)
                                  (pMVar18,uVar7,*(undefined8 *)(pMVar18->methodPointer + 0x5f0),
                                   UNRECOVERED_JUMPTABLE_01);
                return bVar8;
              }
            }
          }
          goto label_04352828;
        }
      }
      unaff_RBX = &TypeInfo_UIManager;
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar15 = pIVar17;
      pIVar11 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        pUVar3 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        unaff_RBX = (Il2CppRGCTXData **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        in_RCX = (void *)0x0;
        pIVar15 = __this_09;
        pIVar11 = (Il2CppRGCTXData *)unaff_RBX;
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (pUVar3,"Overwrite this item?",(UnityEngine_Events_UnityAction_o *)unaff_RBX,(System_String_o *)0x0,
                     in_R8);
          return extraout_EAX;
        }
      }
    }
  }
label_04352828:
  auVar22 = il2cpp_runtime_helper_022b2c90();
  pMVar18 = auVar22._8_8_;
  uStack_70 = auVar22._0_8_;
  pIVar17 = pIVar15;
  pIStack_68 = (Il2CppRGCTXData *)unaff_RBX;
  pIStack_60 = __this_09;
  if (g_data_057ae142 == '\0') {
    pIStack_78 = (Il2CppRGCTXData *)0x4352862;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pIStack_78 = (Il2CppRGCTXData *)0x435286e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae142 = '\x01';
  }
  pIStack_78 = (Il2CppRGCTXData *)0x435287d;
  UI_BasePopup__Show((UI_BasePopup_o *)pIVar11,(MethodInfo *)pIVar17);
  pIVar11[0x1c].method = (MethodInfo *)pIVar15;
  pIStack_78 = (Il2CppRGCTXData *)0x4352893;
  il2cpp_runtime_helper_022b4080(pIVar11 + 0x1c,pIVar15);
  pIVar11[0x23].rgctxDataDummy = (void *)0x0;
  pIStack_78 = (Il2CppRGCTXData *)0x43528ac;
  il2cpp_runtime_helper_022b4080(pIVar11 + 0x23,0);
  *(undefined1 *)(pIVar11 + 0x25) = 0;
  *(undefined1 *)(pIVar11 + 0x20) = 0;
  pIVar11[0x1d].rgctxDataDummy = in_RCX;
  pIStack_78 = (Il2CppRGCTXData *)0x43528d0;
  il2cpp_runtime_helper_022b4080(pIVar11 + 0x1d,in_RCX);
  *(bool *)((long)pIVar11 + 0x101) = in_R8 != (MethodInfo *)0x0;
  pIVar11[0x21].rgctxDataDummy = in_R9;
  pIStack_78 = (Il2CppRGCTXData *)0x43528f0;
  il2cpp_runtime_helper_022b4080(pIVar11 + 0x21,in_R9);
  pIVar11[0x1f].rgctxDataDummy = in_R8;
  pIStack_78 = (Il2CppRGCTXData *)0x4352906;
  il2cpp_runtime_helper_022b4080(pIVar11 + 0x1f);
  pIVar17 = (Il2CppRGCTXData *)0x0;
  if (pIVar11[0x27].method != (MethodInfo *)0x0) {
    pIStack_78 = (Il2CppRGCTXData *)0x435292f;
    in_R8 = "";
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pIVar11[0x27].method,(Il2CppObject *)"",MethodInfo_Void_set_Value);
    pIVar17 = (Il2CppRGCTXData *)0x0;
    if (pIVar11[0x1b].method != (MethodInfo *)0x0) {
      pIStack_78 = (Il2CppRGCTXData *)0x435294f;
      (**(code **)((pIVar11[0x1b].method)->methodPointer + 0x198))();
      pMVar16 = (MethodInfo *)0x0;
      pIStack_78 = (Il2CppRGCTXData *)0x4352959;
      UI_SelectListPopup__SetCategoryTabsEnabled((UI_SelectListPopup_o *)pIVar11,0,method_00);
      pIStack_78 = (Il2CppRGCTXData *)0x4352961;
      UI_SelectListPopup__ToggleSaveElements((UI_SelectListPopup_o *)pIVar11,pMVar16);
      in_R8 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pIStack_78 = (Il2CppRGCTXData *)0x4352983;
      bVar8 = System_String__op_Inequality
                        ((System_String_o *)pMVar18,(System_String_o *)in_R8,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pIStack_78 = (Il2CppRGCTXData *)0x4352992;
        in_R8 = pMVar18;
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pIVar11,(System_String_o *)pMVar18,method_01);
      }
      pIStack_78 = (Il2CppRGCTXData *)0x435299a;
      pIVar17 = pIVar11;
      UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)pIVar11,in_R8);
      if ((pIVar11[0x1b].klass != (Il2CppClass *)0x0) &&
         (pIVar17 = *(Il2CppRGCTXData **)&((pIVar11[0x1b].klass)->_1).this_arg.bits,
         pIVar17 != (Il2CppRGCTXData *)0x0)) {
        in_R8 = pIVar17->klass->vtable[0x26].method;
        pIStack_78 = (Il2CppRGCTXData *)0x43529bf;
        (*pIVar17->klass->vtable[0x26].methodPtr)();
        if (pIVar11[0x1b].klass != (Il2CppClass *)0x0) {
          __this_00 = *(UnityEngine_UI_InputField_o **)&((pIVar11[0x1b].klass)->_1).this_arg.bits;
          pIVar17 = (Il2CppRGCTXData *)0x0;
          if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ActivateInputField(__this_00,(MethodInfo *)0x0);
            return extraout_EAX_00;
          }
        }
      }
    }
  }
  pIStack_78 = (Il2CppRGCTXData *)0x43529ee;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  uVar20 = (ulong)in_R8 & 0xffffffff;
  pIStack_90 = pIVar11;
  pMStack_88 = pMVar18;
  pIStack_78 = pIVar15;
  if (g_data_057ae14b == '\0') {
    plStack_a0 = (long *)0x4352a12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    plStack_a0 = (long *)0x4352a1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plStack_a0 = (long *)0x4352a2a;
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae14b = '\x01';
  }
  pMVar18 = pIVar17[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    plStack_a0 = (long *)0x4352a4d;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_a0 = (long *)0x4352a59;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') goto label_04352b16;
  pIVar19 = (Il2CppClass *)0x0;
  if (pIVar17[0xe].method != (MethodInfo *)0x0) {
    plStack_a0 = (long *)0x4352a7f;
    x = (Il2CppClass *)
        UnityEngine_Transform__Find
                  ((UnityEngine_Transform_o *)pIVar17[0xe].method,"Label",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_a0 = (long *)0x4352a93;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_a0 = (long *)0x4352a9f;
    pIVar19 = x;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_04352ad2:
      if (*(char *)(pIVar17 + 0x19) == '\0') {
label_04352b16:
        pMVar18 = pIVar17[0x18].method;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          plStack_a0 = (long *)0x4352b2e;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar16 = (MethodInfo *)0x0;
        plStack_a0 = (long *)0x4352b3a;
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pMVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
label_04352b55:
          if ((char)uVar20 == '\0') {
            UI_SelectListPopup__ClearCategoryTabs((UI_SelectListPopup_o *)pIVar17,pMVar16);
            return extraout_EAX_02;
          }
          return bVar8;
        }
        pIVar19 = (Il2CppClass *)0x0;
        if (pIVar17[0x18].method != (MethodInfo *)0x0) {
          pMVar16 = (MethodInfo *)((ulong)in_R8 & 0xff);
          plStack_a0 = (long *)0x4352b55;
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pIVar17[0x18].method,(bool_conflict)pMVar16,(MethodInfo *)0x0
                    );
          bVar8 = extraout_EAX_01;
          goto label_04352b55;
        }
      }
      else {
        pIVar19 = pIVar17[0xe].klass;
        if (pIVar19 != (Il2CppClass *)0x0) {
          plStack_a0 = (long *)0x4352af7;
          __this_10 = (UnityEngine_UI_LayoutGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pIVar19,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
          value_00 = 4;
          if ((char)uVar20 == '\0') {
            value_00 = *(int32_t *)((long)pIVar17 + 0xcc);
          }
          if (__this_10 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
            plStack_a0 = (long *)0x4352b16;
            UnityEngine_UI_LayoutGroup__set_childAlignment(__this_10,value_00,(MethodInfo *)0x0);
            goto label_04352b16;
          }
        }
      }
    }
    else if (x != (Il2CppClass *)0x0) {
      plStack_a0 = (long *)0x4352ab6;
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pIVar19 = x;
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        plStack_a0 = (long *)0x4352ad2;
        UnityEngine_GameObject__SetActive(pUVar9,((uint)in_R8 ^ 1) & 0xff,(MethodInfo *)0x0);
        goto label_04352ad2;
      }
    }
  }
  plStack_a0 = (long *)0x4352b7c;
  il2cpp_runtime_helper_022b2c90();
  plStack_a0 = &TypeInfo_Object;
  pIStack_b8 = pIVar17;
  uStack_a8 = uVar20;
  if (g_data_057ae145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae145 = '\x01';
  }
  pSVar23 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar24 = (Il2CppType *)0x0;
  pUVar9 = (UnityEngine_GameObject_o *)0x0;
  pSVar2 = (pIVar19->_2).unity_user_data;
  if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
label_04352d73:
    auVar21 = il2cpp_runtime_helper_022b2c90();
    if (auVar21._8_4_ != 1) {
      __this_07.fields._8_8_ = pIVar24;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar23;
      __this_07.fields._current = (Il2CppObject *)pUVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
label_04352e59:
      _Unwind_Resume(auVar21._0_8_);
    }
    plVar10 = (long *)__cxa_begin_catch(auVar21._0_8_);
    lVar6 = *plVar10;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar24;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar23;
    __this_06.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
    if (lVar6 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar6);
      __this_08.fields._8_8_ = pIVar24;
      __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar23;
      __this_08.fields._current = (Il2CppObject *)pUVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
      goto label_04352e59;
    }
  }
  else {
    if ((char)(pIVar19->_2).element_size != '\0') {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d0,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      pSVar23 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d0._0_8_;
      pIVar24 = (Il2CppType *)auStack_d0._8_8_;
      pUVar9 = pUStack_c0;
label_04352c60:
      __this_02.fields._8_8_ = pIVar24;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar23;
      __this_02.fields._current = (Il2CppObject *)pUVar9;
      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10);
      if ((char)bVar8 != '\0') {
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) goto code_r0x04352c7d;
        il2cpp_runtime_helper_022b2c90();
label_04352d6e:
        il2cpp_runtime_helper_022b2c90();
        goto label_04352d73;
      }
      __this_03.fields._8_8_ = pIVar24;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar23;
      __this_03.fields._current = (Il2CppObject *)pUVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
      puVar13 = &"Save";
      iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
      goto joined_r0x04352cb5;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d0,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar23 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d0._0_8_;
    pIVar24 = (Il2CppType *)auStack_d0._8_8_;
    __this_12 = pUStack_c0;
    while (__this_04.fields._8_8_ = pIVar24,
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar23,
          __this_04.fields._current = (Il2CppObject *)__this_12,
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff10), (char)bVar8 != '\0') {
      pUVar9 = (UnityEngine_GameObject_o *)0x0;
      if (__this_12 == (UnityEngine_GameObject_o *)0x0) goto label_04352d6e;
      UnityEngine_GameObject__SetActive(__this_12,0,(MethodInfo *)0x0);
    }
    __this_05.fields._8_8_ = pIVar24;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar23;
    __this_05.fields._current = (Il2CppObject *)__this_12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff10);
  }
  puVar13 = &"Load";
  iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
joined_r0x04352cb5:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar12 = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar13,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pIVar19,pSVar12,method_02);
  return extraout_EAX_03;
code_r0x04352c7d:
  UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
  goto label_04352c60;
}


// UI.SelectListPopup.<>c__DisplayClass51_0$$<RefreshList>b__1
// il2cpp: bool UI_SelectListPopup___c__DisplayClass51_0___RefreshList_b__1 (UI_SelectListPopup___c__DisplayClass51_0_o* __this, System_String_o* item, const MethodInfo* method);
// 0x4355300

bool_conflict
UI_SelectListPopup___c__DisplayClass51_0___RefreshList_b__1
          (UI_SelectListPopup___c__DisplayClass51_0_o *__this,System_String_o *item,MethodInfo *method)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_01;
  UI_ConfirmPopup_o *pUVar2;
  size_t sVar3;
  UnityEngine_UI_InputField_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  long lVar4;
  UI_SelectListPopup_o *__this_02;
  Il2CppObject *value;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  undefined8 uVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  bool_conflict extraout_EAX_04;
  bool_conflict extraout_EAX_05;
  bool_conflict extraout_EAX_06;
  bool_conflict bVar6;
  bool_conflict extraout_EAX_07;
  Il2CppRGCTXData *__this_10;
  Il2CppClass *x;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_UI_LayoutGroup_o *__this_11;
  System_String_o *pSVar8;
  long *plVar9;
  Il2CppRGCTXData *pIVar10;
  System_String_o *__this_12;
  void *in_RCX;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 extraout_RDX_00;
  undefined8 *puVar11;
  Il2CppRGCTXData **unaff_RBX;
  undefined1 *puVar12;
  int32_t value_00;
  Il2CppRGCTXData *pIVar13;
  Il2CppRGCTXData *value_01;
  MethodInfo *pMVar14;
  Il2CppRGCTXData value_02;
  MethodInfo *pMVar15;
  Il2CppClass *pIVar16;
  System_String_Fields SVar17;
  System_String_c *__this_13;
  MethodInfo *in_R8;
  void *in_R9;
  ulong uVar18;
  Il2CppRGCTXData unaff_R14;
  MethodInfo_2A24090 **unaff_R15;
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar21;
  Il2CppType *pIVar22;
  UnityEngine_GameObject_o *__this_14;
  undefined1 auStack_c8 [16];
  UnityEngine_GameObject_o *pUStack_b8;
  Il2CppRGCTXData *pIStack_b0;
  ulong uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  Il2CppRGCTXData *pIStack_88;
  MethodInfo *pMStack_80;
  Il2CppRGCTXData *pIStack_70;
  undefined8 uStack_68;
  Il2CppRGCTXData *pIStack_60;
  Il2CppRGCTXData *pIStack_58;
  
  pSVar8 = (System_String_o *)__this;
  if ((item != (System_String_o *)0x0) &&
     (__this_12 = System_String__ToLowerInvariant(item,(MethodInfo *)0x0),
     unaff_RBX = (Il2CppRGCTXData **)__this, pSVar8 = item, __this_12 != (System_String_o *)0x0)) {
    bVar6 = System_String__Contains(__this_12,(__this->fields).query,(MethodInfo *)0x0);
    return bVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar12 = &stack0xfffffffffffffff0;
  SVar17 = pSVar8->fields;
  if (SVar17 == (System_String_Fields)0x0) {
    il2cpp_runtime_helper_022b2c90();
    __this_13 = *(System_String_c **)((long)SVar17 + 0x10);
    if (__this_13 == (System_String_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_02 = (UI_SelectListPopup_o *)(__this_13->_1).namespaze;
      if (__this_02 != (UI_SelectListPopup_o *)0x0) {
        pMVar15 = (MethodInfo *)((Settings_TypedSetting_T__Fields *)&(__this_13->_1).name)->DefaultValue;
        (__this_02->fields)._activeCategoryName = (System_String_o *)pMVar15;
        il2cpp_runtime_helper_022b4080(&(__this_02->fields)._activeCategoryName);
        UI_SelectListPopup__SyncCategoryTabs(__this_02,pMVar15);
        UI_SelectListPopup__RefreshList(__this_02,pMVar15);
        return extraout_EAX_07;
      }
      il2cpp_runtime_helper_022b2c90();
      pSVar8 = ((Settings_StringSetting_Fields *)&(__this_13->_1).name)->DefaultValue;
      if (pSVar8 != (System_String_o *)0x0) {
        value = (Il2CppObject *)(__this_13->_1).namespaze;
        if (g_data_057ae14f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
          g_data_057ae14f = '\x01';
        }
        __this_13 = pSVar8[0xd].klass;
        if (__this_13 != (System_String_c *)0x0) {
          Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this_13,value,MethodInfo_Void_set_Value)
          ;
          pIVar16 = (Il2CppClass *)pSVar8[10].klass;
          if (pIVar16 != (Il2CppClass *)0x0) {
            (*(code *)(pIVar16->_1).namespaze)
                      ((pIVar16->_1).element_class,*(undefined8 *)&(pIVar16->_1).byval_arg.bits);
            vtableDispatch = ((Il2CppClass *)pSVar8->klass)->vtable[0x16].methodPtr;
            bVar6 = (*vtableDispatch)
                              (pSVar8,((Il2CppClass *)pSVar8->klass)->vtable[0x16].method,extraout_RDX_00,
                               vtableDispatch);
            return bVar6;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      unaff_RBX = (Il2CppRGCTXData **)((Settings_StringSetting_Fields *)&(__this_13->_1).name)->DefaultValue;
      if ((Il2CppRGCTXData *)unaff_RBX == (Il2CppRGCTXData *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        return (bool_conflict)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      unaff_R14 = (Il2CppRGCTXData)(__this_13->_1).namespaze;
      puVar12 = &stack0xffffffffffffffb0;
      value_02 = unaff_R14;
      if (g_data_057ae150 == '\0') {
        pIStack_58 = (Il2CppRGCTXData *)0x4354a10;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        pIStack_58 = (Il2CppRGCTXData *)0x4354a1c;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
        g_data_057ae150 = '\x01';
      }
      __this_13 = (System_String_c *)((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method;
      if (__this_13 != (System_String_c *)0x0) {
        unaff_R15 = &MethodInfo_Void_set_Value;
        pIStack_58 = (Il2CppRGCTXData *)0x4354a45;
        value_02 = unaff_R14;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_13,(Il2CppObject *)unaff_R14.method,MethodInfo_Void_set_Value);
        pIVar16 = ((Il2CppRGCTXData *)(unaff_RBX + 0x1f))->klass;
        if (pIVar16 != (Il2CppClass *)0x0) {
          value_02 = *(Il2CppRGCTXData *)&(pIVar16->_1).byval_arg.bits;
          pIStack_58 = (Il2CppRGCTXData *)0x4354a5c;
          (*(code *)(pIVar16->_1).namespaze)((pIVar16->_1).element_class);
          __this_13 = (System_String_c *)0x0;
          if (((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method != (MethodInfo *)0x0) {
            value_02 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(g_data_057b9c00 + 0xb8))->method;
            pIStack_58 = (Il2CppRGCTXData *)0x4354a88;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method,
                       (Il2CppObject *)value_02.method,MethodInfo_Void_set_Value);
            __this_13 = (System_String_c *)0x0;
            if (((Il2CppRGCTXData *)(unaff_RBX + 0x1c))->method != (MethodInfo *)0x0) {
              pIStack_58 = (Il2CppRGCTXData *)0x4354aa6;
              System_Collections_Generic_List_object___Remove
                        ((System_Collections_Generic_List_object__o *)
                         ((Il2CppRGCTXData *)(unaff_RBX + 0x1c))->method,(Il2CppObject *)unaff_R14.method,
                         MethodInfo_Boolean_Remove);
              UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)unaff_RBX,unaff_R14.method);
              return extraout_EAX_04;
            }
          }
        }
      }
      pIStack_58 = (Il2CppRGCTXData *)0x4354ab8;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      value_02 = *(Il2CppRGCTXData *)((long)SVar17 + 0x18);
    }
    *(MethodInfo_2A24090 ***)(puVar12 + -8) = unaff_R15;
    *(Il2CppRGCTXData *)(puVar12 + -0x10) = unaff_R14;
    *(Il2CppRGCTXData ***)(puVar12 + -0x18) = unaff_RBX;
    if (g_data_057ae151 == '\0') {
      *(undefined8 *)(puVar12 + -0x20) = 0x4354ae0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleteClick_b__0);
      *(undefined8 *)(puVar12 + -0x20) = 0x4354aec;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass63_0);
      *(undefined8 *)(puVar12 + -0x20) = 0x4354af8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)(puVar12 + -0x20) = 0x4354b04;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      *(undefined8 *)(puVar12 + -0x20) = 0x4354b10;
      il2cpp_runtime_helper_023445d0(&"Delete this item?");
      g_data_057ae151 = '\x01';
    }
    *(undefined8 *)(puVar12 + -0x20) = 0x4354b26;
    pIVar10 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass63_0);
    *(undefined8 *)(puVar12 + -0x20) = 0x4354b33;
    pIVar13 = pIVar10;
    System_Object___ctor((Il2CppObject *)pIVar10,(MethodInfo *)0x0);
    if (pIVar10 != (Il2CppRGCTXData *)0x0) {
      pIVar10[2].method = (MethodInfo *)__this_13;
      *(undefined8 *)(puVar12 + -0x20) = 0x4354b4c;
      il2cpp_runtime_helper_022b4080(pIVar10 + 2,__this_13);
      pIVar10[3] = value_02;
      *(undefined8 *)(puVar12 + -0x20) = 0x4354b5f;
      il2cpp_runtime_helper_022b4080(pIVar10 + 3);
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)(puVar12 + -0x20) = 0x4354b77;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar13 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        pUVar2 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        *(undefined8 *)(puVar12 + -0x20) = 0x4354b9d;
        pIVar10 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        *(undefined8 *)(puVar12 + -0x20) = 0x4354bb7;
        pIVar13 = pIVar10;
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar2 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (pUVar2,"Delete this item?",(UnityEngine_Events_UnityAction_o *)pIVar10,(System_String_o *)0x0,
                     in_R8);
          return extraout_EAX_05;
        }
      }
    }
    *(undefined8 *)(puVar12 + -0x20) = 0x4354bdd;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pIVar13,(MethodInfo *)0x0);
    return extraout_EAX_06;
  }
  pIVar13 = (Il2CppRGCTXData *)pSVar8[1].klass;
  if (g_data_057ae14e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnItemClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass60_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Overwrite this item?");
    il2cpp_runtime_helper_023445d0(&"Cannot overwrite this item.");
    g_data_057ae14e = '\x01';
  }
  __this_10 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass60_0);
  value_01 = (Il2CppRGCTXData *)0x0;
  pIVar10 = __this_10;
  System_Object___ctor((Il2CppObject *)__this_10,(MethodInfo *)0x0);
  if (__this_10 != (Il2CppRGCTXData *)0x0) {
    __this_10[2].klass = (Il2CppClass *)SVar17;
    il2cpp_runtime_helper_022b4080(__this_10 + 2,SVar17);
    unaff_RBX = (Il2CppRGCTXData **)(__this_10 + 3);
    __this_10[3].method = (MethodInfo *)pIVar13;
    il2cpp_runtime_helper_022b4080(unaff_RBX);
    if (*(char *)((long)SVar17 + 0x100) == '\0') {
      pIVar10 = (Il2CppRGCTXData *)((VirtualInvokeData *)((long)SVar17 + 0x138))->methodPtr;
      value_01 = pIVar13;
      if (pIVar10 != (Il2CppRGCTXData *)0x0) {
        value_01 = *unaff_RBX;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pIVar10,(Il2CppObject *)value_01,MethodInfo_Void_set_Value);
        sVar3 = *(size_t *)((long)SVar17 + 0xe8);
        if (sVar3 != 0) {
          (**(code **)(sVar3 + 0x18))(*(undefined8 *)(sVar3 + 0x40),*(undefined8 *)(sVar3 + 0x28));
          UNRECOVERED_JUMPTABLE_01 = *(code **)(*(long *)SVar17 + 0x298);
          bVar6 = (*UNRECOVERED_JUMPTABLE_01)
                            (SVar17,*(undefined8 *)(*(long *)SVar17 + 0x2a0),extraout_RDX,
                             UNRECOVERED_JUMPTABLE_01);
          return bVar6;
        }
      }
    }
    else {
      if (*(System_Collections_Generic_List_object__o **)((long)SVar17 + 0x110) !=
          (System_Collections_Generic_List_object__o *)0x0) {
        pIVar13 = *unaff_RBX;
        bVar6 = System_Collections_Generic_List_object___Contains
                          (*(System_Collections_Generic_List_object__o **)((long)SVar17 + 0x110),
                           (Il2CppObject *)pIVar13,MethodInfo_Boolean_Contains);
        if ((char)bVar6 != '\0') {
          unaff_RBX = &TypeInfo_UIManager;
          if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar5 = "Cannot overwrite this item.";
          value_01 = pIVar13;
          pIVar10 = TypeInfo_UIManager;
          if (((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) &&
             (unaff_RBX = (TypeInfo_UIManager[0x17].method)->return_type[3].data,
             (Il2CppRGCTXData *)unaff_RBX != (Il2CppRGCTXData *)0x0)) {
            UI_BasePopup__Show((UI_BasePopup_o *)unaff_RBX,(MethodInfo *)pIVar13);
            value_01 = pIVar13;
            pIVar10 = (Il2CppRGCTXData *)0x0;
            if (((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method != (MethodInfo *)0x0) {
              value_01 = (Il2CppRGCTXData *)0x1;
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method,1,
                         (MethodInfo *)0x0);
              pMVar15 = ((Il2CppRGCTXData *)(unaff_RBX + 0x15))->method;
              pIVar10 = (Il2CppRGCTXData *)0x0;
              if (pMVar15 != (MethodInfo *)0x0) {
                UNRECOVERED_JUMPTABLE_01 = *(code **)(pMVar15->methodPointer + 0x5e8);
                bVar6 = (*UNRECOVERED_JUMPTABLE_01)
                                  (pMVar15,uVar5,*(undefined8 *)(pMVar15->methodPointer + 0x5f0),
                                   UNRECOVERED_JUMPTABLE_01);
                return bVar6;
              }
            }
          }
          goto label_04352828;
        }
      }
      unaff_RBX = &TypeInfo_UIManager;
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value_01 = pIVar13;
      pIVar10 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        pUVar2 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        unaff_RBX = (Il2CppRGCTXData **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        in_RCX = (void *)0x0;
        value_01 = __this_10;
        pIVar10 = (Il2CppRGCTXData *)unaff_RBX;
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar2 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (pUVar2,"Overwrite this item?",(UnityEngine_Events_UnityAction_o *)unaff_RBX,(System_String_o *)0x0,
                     in_R8);
          return extraout_EAX;
        }
      }
    }
  }
label_04352828:
  auVar20 = il2cpp_runtime_helper_022b2c90();
  pMVar15 = auVar20._8_8_;
  uStack_68 = auVar20._0_8_;
  pIVar13 = value_01;
  pIStack_60 = (Il2CppRGCTXData *)unaff_RBX;
  pIStack_58 = __this_10;
  if (g_data_057ae142 == '\0') {
    pIStack_70 = (Il2CppRGCTXData *)0x4352862;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pIStack_70 = (Il2CppRGCTXData *)0x435286e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae142 = '\x01';
  }
  pIStack_70 = (Il2CppRGCTXData *)0x435287d;
  UI_BasePopup__Show((UI_BasePopup_o *)pIVar10,(MethodInfo *)pIVar13);
  pIVar10[0x1c].method = (MethodInfo *)value_01;
  pIStack_70 = (Il2CppRGCTXData *)0x4352893;
  il2cpp_runtime_helper_022b4080(pIVar10 + 0x1c,value_01);
  pIVar10[0x23].rgctxDataDummy = (void *)0x0;
  pIStack_70 = (Il2CppRGCTXData *)0x43528ac;
  il2cpp_runtime_helper_022b4080(pIVar10 + 0x23,0);
  *(undefined1 *)(pIVar10 + 0x25) = 0;
  *(undefined1 *)(pIVar10 + 0x20) = 0;
  pIVar10[0x1d].rgctxDataDummy = in_RCX;
  pIStack_70 = (Il2CppRGCTXData *)0x43528d0;
  il2cpp_runtime_helper_022b4080(pIVar10 + 0x1d,in_RCX);
  *(bool *)((long)pIVar10 + 0x101) = in_R8 != (MethodInfo *)0x0;
  pIVar10[0x21].rgctxDataDummy = in_R9;
  pIStack_70 = (Il2CppRGCTXData *)0x43528f0;
  il2cpp_runtime_helper_022b4080(pIVar10 + 0x21,in_R9);
  pIVar10[0x1f].rgctxDataDummy = in_R8;
  pIStack_70 = (Il2CppRGCTXData *)0x4352906;
  il2cpp_runtime_helper_022b4080(pIVar10 + 0x1f);
  pIVar13 = (Il2CppRGCTXData *)0x0;
  if (pIVar10[0x27].method != (MethodInfo *)0x0) {
    pIStack_70 = (Il2CppRGCTXData *)0x435292f;
    in_R8 = "";
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pIVar10[0x27].method,(Il2CppObject *)"",MethodInfo_Void_set_Value);
    pIVar13 = (Il2CppRGCTXData *)0x0;
    if (pIVar10[0x1b].method != (MethodInfo *)0x0) {
      pIStack_70 = (Il2CppRGCTXData *)0x435294f;
      (**(code **)((pIVar10[0x1b].method)->methodPointer + 0x198))();
      pMVar14 = (MethodInfo *)0x0;
      pIStack_70 = (Il2CppRGCTXData *)0x4352959;
      UI_SelectListPopup__SetCategoryTabsEnabled((UI_SelectListPopup_o *)pIVar10,0,method_00);
      pIStack_70 = (Il2CppRGCTXData *)0x4352961;
      UI_SelectListPopup__ToggleSaveElements((UI_SelectListPopup_o *)pIVar10,pMVar14);
      in_R8 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pIStack_70 = (Il2CppRGCTXData *)0x4352983;
      bVar6 = System_String__op_Inequality
                        ((System_String_o *)pMVar15,(System_String_o *)in_R8,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pIStack_70 = (Il2CppRGCTXData *)0x4352992;
        in_R8 = pMVar15;
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pIVar10,(System_String_o *)pMVar15,method_01);
      }
      pIStack_70 = (Il2CppRGCTXData *)0x435299a;
      pIVar13 = pIVar10;
      UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)pIVar10,in_R8);
      if ((pIVar10[0x1b].klass != (Il2CppClass *)0x0) &&
         (pIVar13 = *(Il2CppRGCTXData **)&((pIVar10[0x1b].klass)->_1).this_arg.bits,
         pIVar13 != (Il2CppRGCTXData *)0x0)) {
        in_R8 = pIVar13->klass->vtable[0x26].method;
        pIStack_70 = (Il2CppRGCTXData *)0x43529bf;
        (*pIVar13->klass->vtable[0x26].methodPtr)();
        if (pIVar10[0x1b].klass != (Il2CppClass *)0x0) {
          __this_00 = *(UnityEngine_UI_InputField_o **)&((pIVar10[0x1b].klass)->_1).this_arg.bits;
          pIVar13 = (Il2CppRGCTXData *)0x0;
          if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ActivateInputField(__this_00,(MethodInfo *)0x0);
            return extraout_EAX_00;
          }
        }
      }
    }
  }
  pIStack_70 = (Il2CppRGCTXData *)0x43529ee;
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  uVar18 = (ulong)in_R8 & 0xffffffff;
  pIStack_88 = pIVar10;
  pMStack_80 = pMVar15;
  pIStack_70 = value_01;
  if (g_data_057ae14b == '\0') {
    plStack_98 = (long *)0x4352a12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    plStack_98 = (long *)0x4352a1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plStack_98 = (long *)0x4352a2a;
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae14b = '\x01';
  }
  pMVar15 = pIVar13[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    plStack_98 = (long *)0x4352a4d;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_98 = (long *)0x4352a59;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') goto label_04352b16;
  pIVar16 = (Il2CppClass *)0x0;
  if (pIVar13[0xe].method != (MethodInfo *)0x0) {
    plStack_98 = (long *)0x4352a7f;
    x = (Il2CppClass *)
        UnityEngine_Transform__Find
                  ((UnityEngine_Transform_o *)pIVar13[0xe].method,"Label",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_98 = (long *)0x4352a93;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_98 = (long *)0x4352a9f;
    pIVar16 = x;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_04352ad2:
      if (*(char *)(pIVar13 + 0x19) == '\0') {
label_04352b16:
        pMVar15 = pIVar13[0x18].method;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          plStack_98 = (long *)0x4352b2e;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar14 = (MethodInfo *)0x0;
        plStack_98 = (long *)0x4352b3a;
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pMVar15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
label_04352b55:
          if ((char)uVar18 == '\0') {
            UI_SelectListPopup__ClearCategoryTabs((UI_SelectListPopup_o *)pIVar13,pMVar14);
            return extraout_EAX_02;
          }
          return bVar6;
        }
        pIVar16 = (Il2CppClass *)0x0;
        if (pIVar13[0x18].method != (MethodInfo *)0x0) {
          pMVar14 = (MethodInfo *)((ulong)in_R8 & 0xff);
          plStack_98 = (long *)0x4352b55;
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pIVar13[0x18].method,(bool_conflict)pMVar14,(MethodInfo *)0x0
                    );
          bVar6 = extraout_EAX_01;
          goto label_04352b55;
        }
      }
      else {
        pIVar16 = pIVar13[0xe].klass;
        if (pIVar16 != (Il2CppClass *)0x0) {
          plStack_98 = (long *)0x4352af7;
          __this_11 = (UnityEngine_UI_LayoutGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pIVar16,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
          value_00 = 4;
          if ((char)uVar18 == '\0') {
            value_00 = *(int32_t *)((long)pIVar13 + 0xcc);
          }
          if (__this_11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
            plStack_98 = (long *)0x4352b16;
            UnityEngine_UI_LayoutGroup__set_childAlignment(__this_11,value_00,(MethodInfo *)0x0);
            goto label_04352b16;
          }
        }
      }
    }
    else if (x != (Il2CppClass *)0x0) {
      plStack_98 = (long *)0x4352ab6;
      pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pIVar16 = x;
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        plStack_98 = (long *)0x4352ad2;
        UnityEngine_GameObject__SetActive(pUVar7,((uint)in_R8 ^ 1) & 0xff,(MethodInfo *)0x0);
        goto label_04352ad2;
      }
    }
  }
  plStack_98 = (long *)0x4352b7c;
  il2cpp_runtime_helper_022b2c90();
  plStack_98 = &TypeInfo_Object;
  pIStack_b0 = pIVar13;
  uStack_a0 = uVar18;
  if (g_data_057ae145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae145 = '\x01';
  }
  pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar22 = (Il2CppType *)0x0;
  pUVar7 = (UnityEngine_GameObject_o *)0x0;
  __this_01 = (pIVar16->_2).unity_user_data;
  if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
label_04352d73:
    auVar19 = il2cpp_runtime_helper_022b2c90();
    if (auVar19._8_4_ != 1) {
      __this_08.fields._8_8_ = pIVar22;
      __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_08.fields._current = (Il2CppObject *)pUVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
label_04352e59:
      _Unwind_Resume(auVar19._0_8_);
    }
    plVar9 = (long *)__cxa_begin_catch(auVar19._0_8_);
    lVar4 = *plVar9;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pIVar22;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
    __this_07.fields._current = (Il2CppObject *)pUVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      __this_09.fields._8_8_ = pIVar22;
      __this_09.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_09.fields._current = (Il2CppObject *)pUVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
      goto label_04352e59;
    }
  }
  else {
    if ((char)(pIVar16->_2).element_size != '\0') {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c8,__this_01,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c8._0_8_;
      pIVar22 = (Il2CppType *)auStack_c8._8_8_;
      pUVar7 = pUStack_b8;
label_04352c60:
      __this_03.fields._8_8_ = pIVar22;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_03.fields._current = (Il2CppObject *)pUVar7;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
      if ((char)bVar6 != '\0') {
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) goto code_r0x04352c7d;
        il2cpp_runtime_helper_022b2c90();
label_04352d6e:
        il2cpp_runtime_helper_022b2c90();
        goto label_04352d73;
      }
      __this_04.fields._8_8_ = pIVar22;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_04.fields._current = (Il2CppObject *)pUVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
      puVar11 = &"Save";
      iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
      goto joined_r0x04352cb5;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c8,__this_01,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c8._0_8_;
    pIVar22 = (Il2CppType *)auStack_c8._8_8_;
    __this_14 = pUStack_b8;
    while (__this_05.fields._8_8_ = pIVar22,
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar21,
          __this_05.fields._current = (Il2CppObject *)__this_14,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18), (char)bVar6 != '\0') {
      pUVar7 = (UnityEngine_GameObject_o *)0x0;
      if (__this_14 == (UnityEngine_GameObject_o *)0x0) goto label_04352d6e;
      UnityEngine_GameObject__SetActive(__this_14,0,(MethodInfo *)0x0);
    }
    __this_06.fields._8_8_ = pIVar22;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
    __this_06.fields._current = (Il2CppObject *)__this_14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
  }
  puVar11 = &"Load";
  iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
joined_r0x04352cb5:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar11,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pIVar16,pSVar8,method_02);
  return extraout_EAX_03;
code_r0x04352c7d:
  UnityEngine_GameObject__SetActive(pUVar7,1,(MethodInfo *)0x0);
  goto label_04352c60;
}


// UI.SelectListPopup.<>c__DisplayClass52_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass52_0___ctor (UI_SelectListPopup___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x43544a0

void UI_SelectListPopup___c__DisplayClass52_0___ctor
               (UI_SelectListPopup___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass52_0$$<CreateItemButton>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass52_0___CreateItemButton_b__0 (UI_SelectListPopup___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x4355330

void UI_SelectListPopup___c__DisplayClass52_0___CreateItemButton_b__0
               (UI_SelectListPopup___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  code *UNRECOVERED_JUMPTABLE_01;
  UI_ConfirmPopup_o *pUVar3;
  size_t sVar4;
  void *pvVar5;
  UnityEngine_UI_InputField_o *__this_00;
  long lVar6;
  UI_SelectListPopup_o *__this_01;
  Il2CppObject *value;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  undefined8 uVar7;
  bool_conflict bVar8;
  Il2CppRGCTXData *__this_09;
  Il2CppClass *x;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_UI_LayoutGroup_o *__this_10;
  System_String_o *pSVar10;
  long *plVar11;
  Il2CppRGCTXData *pIVar12;
  void *in_RCX;
  undefined8 extraout_RDX;
  UnityEngine_Events_UnityAction_o *a;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 extraout_RDX_00;
  undefined8 *puVar13;
  Il2CppRGCTXData **unaff_RBX;
  undefined1 *puVar14;
  int32_t value_00;
  Il2CppRGCTXData *pIVar15;
  Il2CppRGCTXData *value_01;
  MethodInfo *pMVar16;
  MethodInfo *method_03;
  Il2CppRGCTXData value_02;
  Il2CppClass *pIVar17;
  System_String_c *__this_11;
  UnityEngine_Events_UnityAction_o *in_R8;
  void *in_R9;
  ulong uVar18;
  Il2CppRGCTXData unaff_R14;
  MethodInfo_2A24090 **unaff_R15;
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar21;
  Il2CppType *pIVar22;
  UnityEngine_GameObject_o *__this_12;
  undefined1 auStack_c0 [16];
  UnityEngine_GameObject_o *pUStack_b0;
  Il2CppRGCTXData *pIStack_a8;
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  Il2CppRGCTXData *pIStack_80;
  UnityEngine_Events_UnityAction_o *pUStack_78;
  Il2CppRGCTXData *pIStack_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  Il2CppRGCTXData *pIStack_50;
  
  puVar14 = &stack0xfffffffffffffff8;
  pIVar17 = (Il2CppClass *)(__this->fields).__4__this;
  if (pIVar17 == (Il2CppClass *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    __this_11 = (System_String_c *)(pIVar17->_1).name;
    if (__this_11 == (System_String_c *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_01 = (UI_SelectListPopup_o *)(__this_11->_1).namespaze;
      if (__this_01 != (UI_SelectListPopup_o *)0x0) {
        pMVar16 = (MethodInfo *)((Settings_TypedSetting_T__Fields *)&(__this_11->_1).name)->DefaultValue;
        (__this_01->fields)._activeCategoryName = (System_String_o *)pMVar16;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields)._activeCategoryName);
        UI_SelectListPopup__SyncCategoryTabs(__this_01,pMVar16);
        UI_SelectListPopup__RefreshList(__this_01,pMVar16);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      pSVar10 = ((Settings_StringSetting_Fields *)&(__this_11->_1).name)->DefaultValue;
      if (pSVar10 != (System_String_o *)0x0) {
        value = (Il2CppObject *)(__this_11->_1).namespaze;
        if (g_data_057ae14f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
          g_data_057ae14f = '\x01';
        }
        __this_11 = pSVar10[0xd].klass;
        if (__this_11 != (System_String_c *)0x0) {
          Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this_11,value,MethodInfo_Void_set_Value)
          ;
          pIVar17 = (Il2CppClass *)pSVar10[10].klass;
          if (pIVar17 != (Il2CppClass *)0x0) {
            (*(code *)(pIVar17->_1).namespaze)
                      ((pIVar17->_1).element_class,*(undefined8 *)&(pIVar17->_1).byval_arg.bits);
            vtableDispatch = ((Il2CppClass *)pSVar10->klass)->vtable[0x16].methodPtr;
            (*vtableDispatch)
                      (pSVar10,((Il2CppClass *)pSVar10->klass)->vtable[0x16].method,extraout_RDX_00,
                       vtableDispatch);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      unaff_RBX = (Il2CppRGCTXData **)((Settings_StringSetting_Fields *)&(__this_11->_1).name)->DefaultValue;
      if ((Il2CppRGCTXData *)unaff_RBX == (Il2CppRGCTXData *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        return;
      }
      unaff_R14 = (Il2CppRGCTXData)(__this_11->_1).namespaze;
      puVar14 = &stack0xffffffffffffffb8;
      value_02 = unaff_R14;
      if (g_data_057ae150 == '\0') {
        pIStack_50 = (Il2CppRGCTXData *)0x4354a10;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
        pIStack_50 = (Il2CppRGCTXData *)0x4354a1c;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
        g_data_057ae150 = '\x01';
      }
      __this_11 = (System_String_c *)((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method;
      if (__this_11 != (System_String_c *)0x0) {
        unaff_R15 = &MethodInfo_Void_set_Value;
        pIStack_50 = (Il2CppRGCTXData *)0x4354a45;
        value_02 = unaff_R14;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_11,(Il2CppObject *)unaff_R14.method,MethodInfo_Void_set_Value);
        pIVar17 = ((Il2CppRGCTXData *)(unaff_RBX + 0x1f))->klass;
        if (pIVar17 != (Il2CppClass *)0x0) {
          value_02 = *(Il2CppRGCTXData *)&(pIVar17->_1).byval_arg.bits;
          pIStack_50 = (Il2CppRGCTXData *)0x4354a5c;
          (*(code *)(pIVar17->_1).namespaze)((pIVar17->_1).element_class);
          __this_11 = (System_String_c *)0x0;
          if (((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method != (MethodInfo *)0x0) {
            value_02 = (Il2CppRGCTXData)(*(Il2CppRGCTXData **)(g_data_057b9c00 + 0xb8))->method;
            pIStack_50 = (Il2CppRGCTXData *)0x4354a88;
            Settings_TypedSetting_object___set_Value
                      ((Settings_TypedSetting_T__o *)((Il2CppRGCTXData *)(unaff_RBX + 0x27))->method,
                       (Il2CppObject *)value_02.method,MethodInfo_Void_set_Value);
            __this_11 = (System_String_c *)0x0;
            if (((Il2CppRGCTXData *)(unaff_RBX + 0x1c))->method != (MethodInfo *)0x0) {
              pIStack_50 = (Il2CppRGCTXData *)0x4354aa6;
              System_Collections_Generic_List_object___Remove
                        ((System_Collections_Generic_List_object__o *)
                         ((Il2CppRGCTXData *)(unaff_RBX + 0x1c))->method,(Il2CppObject *)unaff_R14.method,
                         MethodInfo_Boolean_Remove);
              UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)unaff_RBX,unaff_R14.method);
              return;
            }
          }
        }
      }
      pIStack_50 = (Il2CppRGCTXData *)0x4354ab8;
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      value_02 = (Il2CppRGCTXData)(pIVar17->_1).namespaze;
    }
    *(MethodInfo_2A24090 ***)(puVar14 + -8) = unaff_R15;
    *(Il2CppRGCTXData *)(puVar14 + -0x10) = unaff_R14;
    *(Il2CppRGCTXData ***)(puVar14 + -0x18) = unaff_RBX;
    if (g_data_057ae151 == '\0') {
      *(undefined8 *)(puVar14 + -0x20) = 0x4354ae0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleteClick_b__0);
      *(undefined8 *)(puVar14 + -0x20) = 0x4354aec;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass63_0);
      *(undefined8 *)(puVar14 + -0x20) = 0x4354af8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      *(undefined8 *)(puVar14 + -0x20) = 0x4354b04;
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      *(undefined8 *)(puVar14 + -0x20) = 0x4354b10;
      il2cpp_runtime_helper_023445d0(&"Delete this item?");
      g_data_057ae151 = '\x01';
    }
    *(undefined8 *)(puVar14 + -0x20) = 0x4354b26;
    pIVar12 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass63_0);
    *(undefined8 *)(puVar14 + -0x20) = 0x4354b33;
    pIVar15 = pIVar12;
    System_Object___ctor((Il2CppObject *)pIVar12,(MethodInfo *)0x0);
    if (pIVar12 != (Il2CppRGCTXData *)0x0) {
      pIVar12[2].method = (MethodInfo *)__this_11;
      *(undefined8 *)(puVar14 + -0x20) = 0x4354b4c;
      il2cpp_runtime_helper_022b4080(pIVar12 + 2,__this_11);
      pIVar12[3] = value_02;
      *(undefined8 *)(puVar14 + -0x20) = 0x4354b5f;
      il2cpp_runtime_helper_022b4080(pIVar12 + 3);
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        *(undefined8 *)(puVar14 + -0x20) = 0x4354b77;
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar15 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        pUVar3 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        *(undefined8 *)(puVar14 + -0x20) = 0x4354b9d;
        pIVar12 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        *(undefined8 *)(puVar14 + -0x20) = 0x4354bb7;
        pIVar15 = pIVar12;
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (pUVar3,"Delete this item?",(UnityEngine_Events_UnityAction_o *)pIVar12,(System_String_o *)0x0,
                     (MethodInfo *)in_R8);
          return;
        }
      }
    }
    *(undefined8 *)(puVar14 + -0x20) = 0x4354bdd;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pIVar15,(MethodInfo *)0x0);
    return;
  }
  pIVar15 = (Il2CppRGCTXData *)(__this->fields).item;
  if (g_data_057ae14e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnItemClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass60_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Overwrite this item?");
    il2cpp_runtime_helper_023445d0(&"Cannot overwrite this item.");
    g_data_057ae14e = '\x01';
  }
  __this_09 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass60_0);
  value_01 = (Il2CppRGCTXData *)0x0;
  pIVar12 = __this_09;
  System_Object___ctor((Il2CppObject *)__this_09,(MethodInfo *)0x0);
  if (__this_09 != (Il2CppRGCTXData *)0x0) {
    __this_09[2].klass = pIVar17;
    il2cpp_runtime_helper_022b4080(__this_09 + 2,pIVar17);
    unaff_RBX = (Il2CppRGCTXData **)(__this_09 + 3);
    __this_09[3].method = (MethodInfo *)pIVar15;
    il2cpp_runtime_helper_022b4080(unaff_RBX);
    if ((char)(pIVar17->_2).element_size == '\0') {
      pIVar12 = (Il2CppRGCTXData *)pIVar17->vtable[0].methodPtr;
      value_01 = pIVar15;
      if (pIVar12 != (Il2CppRGCTXData *)0x0) {
        value_01 = *unaff_RBX;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pIVar12,(Il2CppObject *)value_01,MethodInfo_Void_set_Value);
        sVar4 = (pIVar17->_2).cctor_thread;
        if (sVar4 != 0) {
          (**(code **)(sVar4 + 0x18))(*(undefined8 *)(sVar4 + 0x40),*(undefined8 *)(sVar4 + 0x28));
          pvVar5 = (pIVar17->_1).image;
          UNRECOVERED_JUMPTABLE_01 = *(code **)((long)pvVar5 + 0x298);
          (*UNRECOVERED_JUMPTABLE_01)
                    (pIVar17,*(undefined8 *)((long)pvVar5 + 0x2a0),extraout_RDX,UNRECOVERED_JUMPTABLE_01);
          return;
        }
      }
    }
    else {
      pSVar2 = *(System_Collections_Generic_List_object__o **)&(pIVar17->_2).thread_static_fields_offset;
      if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
        pIVar15 = *unaff_RBX;
        bVar8 = System_Collections_Generic_List_object___Contains(pSVar2,(Il2CppObject *)pIVar15,MethodInfo_Boolean_Contains)
        ;
        if ((char)bVar8 != '\0') {
          unaff_RBX = &TypeInfo_UIManager;
          if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar7 = "Cannot overwrite this item.";
          value_01 = pIVar15;
          pIVar12 = TypeInfo_UIManager;
          if (((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) &&
             (unaff_RBX = (TypeInfo_UIManager[0x17].method)->return_type[3].data,
             (Il2CppRGCTXData *)unaff_RBX != (Il2CppRGCTXData *)0x0)) {
            UI_BasePopup__Show((UI_BasePopup_o *)unaff_RBX,(MethodInfo *)pIVar15);
            value_01 = pIVar15;
            pIVar12 = (Il2CppRGCTXData *)0x0;
            if (((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method != (MethodInfo *)0x0) {
              value_01 = (Il2CppRGCTXData *)0x1;
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method,1,
                         (MethodInfo *)0x0);
              pMVar16 = ((Il2CppRGCTXData *)(unaff_RBX + 0x15))->method;
              pIVar12 = (Il2CppRGCTXData *)0x0;
              if (pMVar16 != (MethodInfo *)0x0) {
                UNRECOVERED_JUMPTABLE_01 = *(code **)(pMVar16->methodPointer + 0x5e8);
                (*UNRECOVERED_JUMPTABLE_01)
                          (pMVar16,uVar7,*(undefined8 *)(pMVar16->methodPointer + 0x5f0),
                           UNRECOVERED_JUMPTABLE_01);
                return;
              }
            }
          }
          goto label_04352828;
        }
      }
      unaff_RBX = &TypeInfo_UIManager;
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value_01 = pIVar15;
      pIVar12 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        pUVar3 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        unaff_RBX = (Il2CppRGCTXData **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        in_RCX = (void *)0x0;
        value_01 = __this_09;
        pIVar12 = (Il2CppRGCTXData *)unaff_RBX;
        UnityEngine_Events_UnityAction___ctor();
        if (pUVar3 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (pUVar3,"Overwrite this item?",(UnityEngine_Events_UnityAction_o *)unaff_RBX,(System_String_o *)0x0,
                     (MethodInfo *)in_R8);
          return;
        }
      }
    }
  }
label_04352828:
  auVar20 = il2cpp_runtime_helper_022b2c90();
  a = auVar20._8_8_;
  uStack_60 = auVar20._0_8_;
  pIVar15 = value_01;
  pIStack_58 = (Il2CppRGCTXData *)unaff_RBX;
  pIStack_50 = __this_09;
  if (g_data_057ae142 == '\0') {
    pIStack_68 = (Il2CppRGCTXData *)0x4352862;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pIStack_68 = (Il2CppRGCTXData *)0x435286e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae142 = '\x01';
  }
  pIStack_68 = (Il2CppRGCTXData *)0x435287d;
  UI_BasePopup__Show((UI_BasePopup_o *)pIVar12,(MethodInfo *)pIVar15);
  pIVar12[0x1c].method = (MethodInfo *)value_01;
  pIStack_68 = (Il2CppRGCTXData *)0x4352893;
  il2cpp_runtime_helper_022b4080(pIVar12 + 0x1c,value_01);
  pIVar12[0x23].rgctxDataDummy = (void *)0x0;
  pIStack_68 = (Il2CppRGCTXData *)0x43528ac;
  il2cpp_runtime_helper_022b4080(pIVar12 + 0x23,0);
  *(undefined1 *)(pIVar12 + 0x25) = 0;
  *(undefined1 *)(pIVar12 + 0x20) = 0;
  pIVar12[0x1d].rgctxDataDummy = in_RCX;
  pIStack_68 = (Il2CppRGCTXData *)0x43528d0;
  il2cpp_runtime_helper_022b4080(pIVar12 + 0x1d,in_RCX);
  *(bool *)((long)pIVar12 + 0x101) = in_R8 != (UnityEngine_Events_UnityAction_o *)0x0;
  pIVar12[0x21].rgctxDataDummy = in_R9;
  pIStack_68 = (Il2CppRGCTXData *)0x43528f0;
  il2cpp_runtime_helper_022b4080(pIVar12 + 0x21,in_R9);
  pIVar12[0x1f].rgctxDataDummy = in_R8;
  pIStack_68 = (Il2CppRGCTXData *)0x4352906;
  il2cpp_runtime_helper_022b4080(pIVar12 + 0x1f);
  pIVar15 = (Il2CppRGCTXData *)0x0;
  if (pIVar12[0x27].method != (MethodInfo *)0x0) {
    pIStack_68 = (Il2CppRGCTXData *)0x435292f;
    in_R8 = "";
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)pIVar12[0x27].method,(Il2CppObject *)"",MethodInfo_Void_set_Value);
    pIVar15 = (Il2CppRGCTXData *)0x0;
    if (pIVar12[0x1b].method != (MethodInfo *)0x0) {
      pIStack_68 = (Il2CppRGCTXData *)0x435294f;
      (**(code **)((pIVar12[0x1b].method)->methodPointer + 0x198))();
      pMVar16 = (MethodInfo *)0x0;
      pIStack_68 = (Il2CppRGCTXData *)0x4352959;
      UI_SelectListPopup__SetCategoryTabsEnabled((UI_SelectListPopup_o *)pIVar12,0,method_00);
      pIStack_68 = (Il2CppRGCTXData *)0x4352961;
      UI_SelectListPopup__ToggleSaveElements((UI_SelectListPopup_o *)pIVar12,pMVar16);
      in_R8 = (UnityEngine_Events_UnityAction_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pIStack_68 = (Il2CppRGCTXData *)0x4352983;
      bVar8 = System_String__op_Inequality((System_String_o *)a,(System_String_o *)in_R8,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pIStack_68 = (Il2CppRGCTXData *)0x4352992;
        in_R8 = a;
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pIVar12,(System_String_o *)a,method_01);
      }
      pIStack_68 = (Il2CppRGCTXData *)0x435299a;
      pIVar15 = pIVar12;
      UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)pIVar12,(MethodInfo *)in_R8);
      if ((pIVar12[0x1b].klass != (Il2CppClass *)0x0) &&
         (pIVar15 = *(Il2CppRGCTXData **)&((pIVar12[0x1b].klass)->_1).this_arg.bits,
         pIVar15 != (Il2CppRGCTXData *)0x0)) {
        in_R8 = (UnityEngine_Events_UnityAction_o *)pIVar15->klass->vtable[0x26].method;
        pIStack_68 = (Il2CppRGCTXData *)0x43529bf;
        (*pIVar15->klass->vtable[0x26].methodPtr)();
        if (pIVar12[0x1b].klass != (Il2CppClass *)0x0) {
          __this_00 = *(UnityEngine_UI_InputField_o **)&((pIVar12[0x1b].klass)->_1).this_arg.bits;
          pIVar15 = (Il2CppRGCTXData *)0x0;
          if (__this_00 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ActivateInputField(__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  pIStack_68 = (Il2CppRGCTXData *)0x43529ee;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  uVar18 = (ulong)in_R8 & 0xffffffff;
  pIStack_80 = pIVar12;
  pUStack_78 = a;
  pIStack_68 = value_01;
  if (g_data_057ae14b == '\0') {
    plStack_90 = (long *)0x4352a12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    plStack_90 = (long *)0x4352a1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plStack_90 = (long *)0x4352a2a;
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae14b = '\x01';
  }
  pMVar16 = pIVar15[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    plStack_90 = (long *)0x4352a4d;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_90 = (long *)0x4352a59;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') goto label_04352b16;
  pIVar17 = (Il2CppClass *)0x0;
  if (pIVar15[0xe].method != (MethodInfo *)0x0) {
    plStack_90 = (long *)0x4352a7f;
    x = (Il2CppClass *)
        UnityEngine_Transform__Find
                  ((UnityEngine_Transform_o *)pIVar15[0xe].method,"Label",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_90 = (long *)0x4352a93;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_90 = (long *)0x4352a9f;
    pIVar17 = x;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
label_04352ad2:
      if (*(char *)(pIVar15 + 0x19) == '\0') {
label_04352b16:
        pMVar16 = pIVar15[0x18].method;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          plStack_90 = (long *)0x4352b2e;
          il2cpp_runtime_helper_02337ed0();
        }
        method_03 = (MethodInfo *)0x0;
        plStack_90 = (long *)0x4352b3a;
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pMVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
label_04352b55:
          if ((char)uVar18 == '\0') {
            UI_SelectListPopup__ClearCategoryTabs((UI_SelectListPopup_o *)pIVar15,method_03);
            return;
          }
          return;
        }
        pIVar17 = (Il2CppClass *)0x0;
        if (pIVar15[0x18].method != (MethodInfo *)0x0) {
          method_03 = (MethodInfo *)((ulong)in_R8 & 0xff);
          plStack_90 = (long *)0x4352b55;
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pIVar15[0x18].method,(bool_conflict)method_03,
                     (MethodInfo *)0x0);
          goto label_04352b55;
        }
      }
      else {
        pIVar17 = pIVar15[0xe].klass;
        if (pIVar17 != (Il2CppClass *)0x0) {
          plStack_90 = (long *)0x4352af7;
          __this_10 = (UnityEngine_UI_LayoutGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pIVar17,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
          value_00 = 4;
          if ((char)uVar18 == '\0') {
            value_00 = *(int32_t *)((long)pIVar15 + 0xcc);
          }
          if (__this_10 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
            plStack_90 = (long *)0x4352b16;
            UnityEngine_UI_LayoutGroup__set_childAlignment(__this_10,value_00,(MethodInfo *)0x0);
            goto label_04352b16;
          }
        }
      }
    }
    else if (x != (Il2CppClass *)0x0) {
      plStack_90 = (long *)0x4352ab6;
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pIVar17 = x;
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        plStack_90 = (long *)0x4352ad2;
        UnityEngine_GameObject__SetActive(pUVar9,((uint)in_R8 ^ 1) & 0xff,(MethodInfo *)0x0);
        goto label_04352ad2;
      }
    }
  }
  plStack_90 = (long *)0x4352b7c;
  il2cpp_runtime_helper_022b2c90();
  plStack_90 = &TypeInfo_Object;
  pIStack_a8 = pIVar15;
  uStack_98 = uVar18;
  if (g_data_057ae145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae145 = '\x01';
  }
  pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar22 = (Il2CppType *)0x0;
  pUVar9 = (UnityEngine_GameObject_o *)0x0;
  pSVar2 = (pIVar17->_2).unity_user_data;
  if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
label_04352d73:
    auVar19 = il2cpp_runtime_helper_022b2c90();
    if (auVar19._8_4_ != 1) {
      __this_07.fields._8_8_ = pIVar22;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_07.fields._current = (Il2CppObject *)pUVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
label_04352e59:
      _Unwind_Resume(auVar19._0_8_);
    }
    plVar11 = (long *)__cxa_begin_catch(auVar19._0_8_);
    lVar6 = *plVar11;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar22;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
    __this_06.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
    if (lVar6 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar6);
      __this_08.fields._8_8_ = pIVar22;
      __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_08.fields._current = (Il2CppObject *)pUVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
      goto label_04352e59;
    }
  }
  else {
    if ((char)(pIVar17->_2).element_size != '\0') {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
      pIVar22 = (Il2CppType *)auStack_c0._8_8_;
      pUVar9 = pUStack_b0;
label_04352c60:
      __this_02.fields._8_8_ = pIVar22;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_02.fields._current = (Il2CppObject *)pUVar9;
      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20);
      if ((char)bVar8 != '\0') {
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) goto code_r0x04352c7d;
        il2cpp_runtime_helper_022b2c90();
label_04352d6e:
        il2cpp_runtime_helper_022b2c90();
        goto label_04352d73;
      }
      __this_03.fields._8_8_ = pIVar22;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_03.fields._current = (Il2CppObject *)pUVar9;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
      puVar13 = &"Save";
      iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
      goto joined_r0x04352cb5;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
    pIVar22 = (Il2CppType *)auStack_c0._8_8_;
    __this_12 = pUStack_b0;
    while (__this_04.fields._8_8_ = pIVar22,
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar21,
          __this_04.fields._current = (Il2CppObject *)__this_12,
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20), (char)bVar8 != '\0') {
      pUVar9 = (UnityEngine_GameObject_o *)0x0;
      if (__this_12 == (UnityEngine_GameObject_o *)0x0) goto label_04352d6e;
      UnityEngine_GameObject__SetActive(__this_12,0,(MethodInfo *)0x0);
    }
    __this_05.fields._8_8_ = pIVar22;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
    __this_05.fields._current = (Il2CppObject *)__this_12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
  }
  puVar13 = &"Load";
  iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
joined_r0x04352cb5:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar10 = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar13,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pIVar17,pSVar10,method_02);
  return;
code_r0x04352c7d:
  UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
  goto label_04352c60;
}


// UI.SelectListPopup.<>c__DisplayClass52_0$$<CreateItemButton>b__1
// il2cpp: void UI_SelectListPopup___c__DisplayClass52_0___CreateItemButton_b__1 (UI_SelectListPopup___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x4355350

void UI_SelectListPopup___c__DisplayClass52_0___CreateItemButton_b__1
               (UI_SelectListPopup___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  long lVar1;
  UI_ConfirmPopup_o *__this_02;
  UI_SelectListPopup_o *__this_03;
  System_String_o *pSVar2;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Events_UnityAction_o *pUVar4;
  undefined8 extraout_RDX;
  UI_SelectListPopup_o *unaff_RBX;
  MethodInfo *value;
  MethodInfo *pMVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  System_String_c *__this_04;
  MethodInfo *in_R8;
  MethodInfo *unaff_R14;
  MethodInfo_2A24090 **unaff_R15;
  System_String_o *pSStack_40;
  MethodInfo *pMStack_38;
  
  __this_04 = (System_String_c *)(__this->fields).__4__this;
  if (__this_04 == (System_String_c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    __this_03 = (UI_SelectListPopup_o *)(__this_04->_1).namespaze;
    if (__this_03 != (UI_SelectListPopup_o *)0x0) {
      pMVar5 = (MethodInfo *)((Settings_TypedSetting_T__Fields *)&(__this_04->_1).name)->DefaultValue;
      (__this_03->fields)._activeCategoryName = (System_String_o *)pMVar5;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields)._activeCategoryName);
      UI_SelectListPopup__SyncCategoryTabs(__this_03,pMVar5);
      UI_SelectListPopup__RefreshList(__this_03,pMVar5);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pSVar2 = ((Settings_StringSetting_Fields *)&(__this_04->_1).name)->DefaultValue;
    pMVar5 = unaff_R14;
    if (pSVar2 != (System_String_o *)0x0) {
      pMVar5 = (MethodInfo *)(__this_04->_1).namespaze;
      if (g_data_057ae14f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
        g_data_057ae14f = '\x01';
      }
      __this_04 = pSVar2[0xd].klass;
      if (__this_04 != (System_String_c *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_04,(Il2CppObject *)pMVar5,MethodInfo_Void_set_Value);
        pIVar3 = (Il2CppClass *)pSVar2[10].klass;
        if (pIVar3 != (Il2CppClass *)0x0) {
          (*(code *)(pIVar3->_1).namespaze)
                    ((pIVar3->_1).element_class,*(undefined8 *)&(pIVar3->_1).byval_arg.bits);
          vtableDispatch = ((Il2CppClass *)pSVar2->klass)->vtable[0x16].methodPtr;
          (*vtableDispatch)
                    (pSVar2,((Il2CppClass *)pSVar2->klass)->vtable[0x16].method,extraout_RDX,
                     vtableDispatch);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    unaff_RBX = (UI_SelectListPopup_o *)((Settings_StringSetting_Fields *)&(__this_04->_1).name)->DefaultValue
    ;
    if (unaff_RBX == (UI_SelectListPopup_o *)0x0) {
      pMStack_38 = (MethodInfo *)0x435545c;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    unaff_R14 = (MethodInfo *)(__this_04->_1).namespaze;
    register0x00000020 = (BADSPACEBASE *)&pSStack_40;
    value = unaff_R14;
    pSStack_40 = pSVar2;
    pMStack_38 = pMVar5;
    if (g_data_057ae150 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ae150 = '\x01';
    }
    __this_04 = (System_String_c *)(unaff_RBX->fields).FinishSetting;
    if (__this_04 != (System_String_c *)0x0) {
      unaff_R15 = &MethodInfo_Void_set_Value;
      value = unaff_R14;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_04,(Il2CppObject *)unaff_R14,MethodInfo_Void_set_Value);
      pUVar6 = (unaff_RBX->fields)._onDelete;
      if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
        value = (MethodInfo *)(pUVar6->fields).method;
        (*(code *)(pUVar6->fields).invoke_impl)((pUVar6->fields).method_code);
        __this_00 = (unaff_RBX->fields).FinishSetting;
        __this_04 = (System_String_c *)0x0;
        if (__this_00 != (Settings_StringSetting_o *)0x0) {
          value = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
          __this_01 = (unaff_RBX->fields)._items;
          __this_04 = (System_String_c *)0x0;
          if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
            System_Collections_Generic_List_object___Remove
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)unaff_R14,
                       MethodInfo_Boolean_Remove);
            UI_SelectListPopup__RefreshList(unaff_RBX,unaff_R14);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    value = (MethodInfo *)(__this->fields).item;
  }
  *(MethodInfo_2A24090 ***)((long)register0x00000020 + -8) = unaff_R15;
  *(MethodInfo **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(UI_SelectListPopup_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  if (g_data_057ae151 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354ae0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleteClick_b__0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354aec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass63_0);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354af8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354b04;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354b10;
    il2cpp_runtime_helper_023445d0(&"Delete this item?");
    g_data_057ae151 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354b26;
  pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass63_0);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354b33;
  pUVar6 = pUVar4;
  System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (pUVar4->fields).method_ptr = (intptr_t)__this_04;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354b4c;
    il2cpp_runtime_helper_022b4080(&pUVar4->fields,__this_04);
    (pUVar4->fields).invoke_impl = (intptr_t)value;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354b5f;
    il2cpp_runtime_helper_022b4080(&(pUVar4->fields).invoke_impl);
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354b77;
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(TypeInfo_UIManager[1].fields.extra_arg + 0x28);
    pUVar6 = TypeInfo_UIManager;
    if (lVar1 != 0) {
      __this_02 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354b9d;
      pUVar4 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354bb7;
      pUVar6 = pUVar4;
      UnityEngine_Events_UnityAction___ctor();
      if (__this_02 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_02,"Delete this item?",pUVar4,(System_String_o *)0x0,in_R8);
        return;
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4354bdd;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass55_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass55_0___ctor (UI_SelectListPopup___c__DisplayClass55_0_o* __this, const MethodInfo* method);
// 0x4354660

void UI_SelectListPopup___c__DisplayClass55_0___ctor
               (UI_SelectListPopup___c__DisplayClass55_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass55_0$$<SetupCategoryTabs>b__1
// il2cpp: void UI_SelectListPopup___c__DisplayClass55_0___SetupCategoryTabs_b__1 (UI_SelectListPopup___c__DisplayClass55_0_o* __this, const MethodInfo* method);
// 0x4355370

void UI_SelectListPopup___c__DisplayClass55_0___SetupCategoryTabs_b__1
               (UI_SelectListPopup___c__DisplayClass55_0_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  long lVar1;
  UI_ConfirmPopup_o *__this_02;
  UI_SelectListPopup_o *pUVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *value;
  Il2CppClass *pIVar4;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Events_UnityAction_o *pUVar5;
  undefined8 extraout_RDX;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  Settings_StringSetting_o *__this_03;
  UnityEngine_Events_UnityAction_o *pUVar7;
  MethodInfo *in_R8;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 != (UI_SelectListPopup_o *)0x0) {
    pMVar6 = (MethodInfo *)(__this->fields).categoryName;
    (pUVar2->fields)._activeCategoryName = (System_String_o *)pMVar6;
    il2cpp_runtime_helper_022b4080(&(pUVar2->fields)._activeCategoryName);
    UI_SelectListPopup__SyncCategoryTabs(pUVar2,pMVar6);
    UI_SelectListPopup__RefreshList(pUVar2,pMVar6);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar3 = (((Settings_TypedSetting_T__o *)__this)->fields).DefaultValue;
  if (pIVar3 != (Il2CppObject *)0x0) {
    value = (((Settings_TypedSetting_T__o *)__this)->fields)._value;
    if (g_data_057ae14f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ae14f = '\x01';
    }
    __this = pIVar3[0x13].monitor;
    if ((Settings_TypedSetting_T__o *)__this != (Settings_TypedSetting_T__o *)0x0) {
      Settings_TypedSetting_object___set_Value((Settings_TypedSetting_T__o *)__this,value,MethodInfo_Void_set_Value);
      pIVar4 = pIVar3[0xf].klass;
      if (pIVar4 != (Il2CppClass *)0x0) {
        (*(code *)(pIVar4->_1).namespaze)
                  ((pIVar4->_1).element_class,*(undefined8 *)&(pIVar4->_1).byval_arg.bits);
        vtableDispatch = pIVar3->klass->vtable[0x16].methodPtr;
        (*vtableDispatch)(pIVar3,pIVar3->klass->vtable[0x16].method,extraout_RDX,vtableDispatch)
        ;
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_SelectListPopup_o *)(((Settings_TypedSetting_T__o *)__this)->fields).DefaultValue;
  if (pUVar2 != (UI_SelectListPopup_o *)0x0) {
    method_00 = (MethodInfo *)(((Settings_TypedSetting_T__o *)__this)->fields)._value;
    pMVar6 = method_00;
    if (g_data_057ae150 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ae150 = '\x01';
    }
    __this_03 = (pUVar2->fields).FinishSetting;
    if (__this_03 != (Settings_StringSetting_o *)0x0) {
      pMVar6 = method_00;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)method_00,MethodInfo_Void_set_Value);
      pUVar7 = (pUVar2->fields)._onDelete;
      if (pUVar7 != (UnityEngine_Events_UnityAction_o *)0x0) {
        pMVar6 = (MethodInfo *)(pUVar7->fields).method;
        (*(code *)(pUVar7->fields).invoke_impl)((pUVar7->fields).method_code);
        __this_00 = (pUVar2->fields).FinishSetting;
        __this_03 = (Settings_StringSetting_o *)0x0;
        if (__this_00 != (Settings_StringSetting_o *)0x0) {
          pMVar6 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)pMVar6,MethodInfo_Void_set_Value);
          __this_01 = (pUVar2->fields)._items;
          __this_03 = (Settings_StringSetting_o *)0x0;
          if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
            System_Collections_Generic_List_object___Remove
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)method_00,
                       MethodInfo_Boolean_Remove);
            UI_SelectListPopup__RefreshList(pUVar2,method_00);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae151 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleteClick_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass63_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&"Delete this item?");
      g_data_057ae151 = '\x01';
    }
    pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass63_0);
    pUVar7 = pUVar5;
    System_Object___ctor((Il2CppObject *)pUVar5,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (pUVar5->fields).method_ptr = (intptr_t)__this_03;
      il2cpp_runtime_helper_022b4080(&pUVar5->fields,__this_03);
      (pUVar5->fields).invoke_impl = (intptr_t)pMVar6;
      il2cpp_runtime_helper_022b4080(&(pUVar5->fields).invoke_impl);
      if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar1 = *(long *)(TypeInfo_UIManager[1].fields.extra_arg + 0x28);
      pUVar7 = TypeInfo_UIManager;
      if (lVar1 != 0) {
        __this_02 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
        pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pUVar7 = pUVar5;
        UnityEngine_Events_UnityAction___ctor();
        if (__this_02 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_02,"Delete this item?",pUVar5,(System_String_o *)0x0,in_R8);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SelectListPopup.<>c__DisplayClass60_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass60_0___ctor (UI_SelectListPopup___c__DisplayClass60_0_o* __this, const MethodInfo* method);
// 0x4354960

void UI_SelectListPopup___c__DisplayClass60_0___ctor
               (UI_SelectListPopup___c__DisplayClass60_0_o *__this,MethodInfo *method)

{
  return;
}


// UI.SelectListPopup.<>c__DisplayClass60_0$$<OnItemClick>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass60_0___OnItemClick_b__0 (UI_SelectListPopup___c__DisplayClass60_0_o* __this, const MethodInfo* method);
// 0x43553b0

void UI_SelectListPopup___c__DisplayClass60_0___OnItemClick_b__0
               (UI_SelectListPopup___c__DisplayClass60_0_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  long lVar1;
  UI_ConfirmPopup_o *__this_02;
  UI_SelectListPopup_o *pUVar2;
  System_String_o *value;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_Events_UnityAction_o *pUVar3;
  undefined8 extraout_RDX;
  MethodInfo *value_00;
  MethodInfo *method_00;
  Settings_StringSetting_o *__this_03;
  UnityEngine_Events_UnityAction_o *pUVar4;
  MethodInfo *in_R8;
  
  pUVar2 = (__this->fields).__4__this;
  if (pUVar2 != (UI_SelectListPopup_o *)0x0) {
    value = (__this->fields).name;
    if (g_data_057ae14f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ae14f = '\x01';
    }
    __this = (UI_SelectListPopup___c__DisplayClass60_0_o *)(pUVar2->fields).FinishSetting;
    if ((Settings_StringSetting_o *)__this != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this,(Il2CppObject *)value,MethodInfo_Void_set_Value);
      pUVar4 = (pUVar2->fields)._onSave;
      if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
        vtableDispatch = (pUVar2->klass->vtable)._22_Hide.methodPtr;
        (*vtableDispatch)
                  (pUVar2,(pUVar2->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar2 = (UI_SelectListPopup_o *)(((Settings_StringSetting_o *)__this)->fields).DefaultValue;
  if (pUVar2 != (UI_SelectListPopup_o *)0x0) {
    method_00 = (MethodInfo *)(((Settings_StringSetting_o *)__this)->fields)._value;
    value_00 = method_00;
    if (g_data_057ae150 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ae150 = '\x01';
    }
    __this_03 = (pUVar2->fields).FinishSetting;
    if (__this_03 != (Settings_StringSetting_o *)0x0) {
      value_00 = method_00;
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)method_00,MethodInfo_Void_set_Value);
      pUVar4 = (pUVar2->fields)._onDelete;
      if (pUVar4 != (UnityEngine_Events_UnityAction_o *)0x0) {
        value_00 = (MethodInfo *)(pUVar4->fields).method;
        (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code);
        __this_00 = (pUVar2->fields).FinishSetting;
        __this_03 = (Settings_StringSetting_o *)0x0;
        if (__this_00 != (Settings_StringSetting_o *)0x0) {
          value_00 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value_00,MethodInfo_Void_set_Value);
          __this_01 = (pUVar2->fields)._items;
          __this_03 = (Settings_StringSetting_o *)0x0;
          if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
            System_Collections_Generic_List_object___Remove
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)method_00,
                       MethodInfo_Boolean_Remove);
            UI_SelectListPopup__RefreshList(pUVar2,method_00);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae151 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleteClick_b__0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass63_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
      il2cpp_runtime_helper_023445d0(&"Delete this item?");
      g_data_057ae151 = '\x01';
    }
    pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass63_0);
    pUVar4 = pUVar3;
    System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (pUVar3->fields).method_ptr = (intptr_t)__this_03;
      il2cpp_runtime_helper_022b4080(&pUVar3->fields,__this_03);
      (pUVar3->fields).invoke_impl = (intptr_t)value_00;
      il2cpp_runtime_helper_022b4080(&(pUVar3->fields).invoke_impl);
      if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar1 = *(long *)(TypeInfo_UIManager[1].fields.extra_arg + 0x28);
      pUVar4 = TypeInfo_UIManager;
      if (lVar1 != 0) {
        __this_02 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
        pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pUVar4 = pUVar3;
        UnityEngine_Events_UnityAction___ctor();
        if (__this_02 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_02,"Delete this item?",pUVar3,(System_String_o *)0x0,in_R8);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.SelectListPopup.<>c__DisplayClass63_0$$.ctor
// il2cpp: void UI_SelectListPopup___c__DisplayClass63_0___ctor (UI_SelectListPopup___c__DisplayClass63_0_o* __this, const MethodInfo* method);
// 0x4354be0

void UI_SelectListPopup___c__DisplayClass63_0___ctor
               (UI_SelectListPopup___c__DisplayClass63_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup.<>c__DisplayClass63_0$$<OnDeleteClick>b__0
// il2cpp: void UI_SelectListPopup___c__DisplayClass63_0___OnDeleteClick_b__0 (UI_SelectListPopup___c__DisplayClass63_0_o* __this, const MethodInfo* method);
// 0x4355440

void UI_SelectListPopup___c__DisplayClass63_0___OnDeleteClick_b__0
               (UI_SelectListPopup___c__DisplayClass63_0_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  long lVar1;
  UI_ConfirmPopup_o *__this_02;
  UI_SelectListPopup_o *__this_03;
  UnityEngine_Events_UnityAction_o *pUVar2;
  MethodInfo *value;
  MethodInfo *method_00;
  Settings_StringSetting_o *__this_04;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *in_R8;
  
  __this_03 = (__this->fields).__4__this;
  if (__this_03 == (UI_SelectListPopup_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  method_00 = (MethodInfo *)(__this->fields).name;
  value = method_00;
  if (g_data_057ae150 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae150 = '\x01';
  }
  __this_04 = (__this_03->fields).FinishSetting;
  if (__this_04 != (Settings_StringSetting_o *)0x0) {
    value = method_00;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_04,(Il2CppObject *)method_00,MethodInfo_Void_set_Value);
    pUVar3 = (__this_03->fields)._onDelete;
    if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
      value = (MethodInfo *)(pUVar3->fields).method;
      (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code);
      __this_00 = (__this_03->fields).FinishSetting;
      __this_04 = (Settings_StringSetting_o *)0x0;
      if (__this_00 != (Settings_StringSetting_o *)0x0) {
        value = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
        __this_01 = (__this_03->fields)._items;
        __this_04 = (Settings_StringSetting_o *)0x0;
        if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)method_00,
                     MethodInfo_Boolean_Remove);
          UI_SelectListPopup__RefreshList(__this_03,method_00);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae151 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleteClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass63_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Delete this item?");
    g_data_057ae151 = '\x01';
  }
  pUVar2 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass63_0);
  pUVar3 = pUVar2;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (pUVar2->fields).method_ptr = (intptr_t)__this_04;
    il2cpp_runtime_helper_022b4080(&pUVar2->fields,__this_04);
    (pUVar2->fields).invoke_impl = (intptr_t)value;
    il2cpp_runtime_helper_022b4080(&(pUVar2->fields).invoke_impl);
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(TypeInfo_UIManager[1].fields.extra_arg + 0x28);
    pUVar3 = TypeInfo_UIManager;
    if (lVar1 != 0) {
      __this_02 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
      pUVar2 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      pUVar3 = pUVar2;
      UnityEngine_Events_UnityAction___ctor();
      if (__this_02 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_02,"Delete this item?",pUVar2,(System_String_o *)0x0,in_R8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$get_ThemePanel
// il2cpp: System_String_o* UI_SelectListPopup__get_ThemePanel (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4351940

System_String_o * UI_SelectListPopup__get_ThemePanel(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae13f == '\0') {
    il2cpp_runtime_helper_023445d0(&"SelectListPopup");
    g_data_057ae13f = '\x01';
  }
  return "SelectListPopup";
}


// UI.SelectListPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_SelectListPopup__get_HorizontalPadding (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4351970

int32_t UI_SelectListPopup__get_HorizontalPadding(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SelectListPopup$$get_VerticalPadding
// il2cpp: int32_t UI_SelectListPopup__get_VerticalPadding (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4351980

int32_t UI_SelectListPopup__get_VerticalPadding(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 5;
}


// UI.SelectListPopup$$get_VerticalSpacing
// il2cpp: float UI_SelectListPopup__get_VerticalSpacing (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4351990

float UI_SelectListPopup__get_VerticalSpacing(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.SelectListPopup$$get_DoublePanel
// il2cpp: bool UI_SelectListPopup__get_DoublePanel (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x43519a0

bool_conflict UI_SelectListPopup__get_DoublePanel(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.SelectListPopup$$get_ScrollBar
// il2cpp: bool UI_SelectListPopup__get_ScrollBar (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x43519b0

bool_conflict UI_SelectListPopup__get_ScrollBar(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SelectListPopup$$get_Width
// il2cpp: float UI_SelectListPopup__get_Width (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x43519c0

float UI_SelectListPopup__get_Width(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 450.0;
}


// UI.SelectListPopup$$get_Height
// il2cpp: float UI_SelectListPopup__get_Height (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x43519d0

float UI_SelectListPopup__get_Height(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 500.0;
}


// UI.SelectListPopup$$get_ItemButtonWidth
// il2cpp: float UI_SelectListPopup__get_ItemButtonWidth (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x43519e0

float UI_SelectListPopup__get_ItemButtonWidth(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 380.0;
}


// UI.SelectListPopup$$get_ItemFontSize
// il2cpp: int32_t UI_SelectListPopup__get_ItemFontSize (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x43519f0

int32_t UI_SelectListPopup__get_ItemFontSize(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 0x1c;
}


// UI.SelectListPopup$$get_DeleteButtonSize
// il2cpp: float UI_SelectListPopup__get_DeleteButtonSize (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4351a00

float UI_SelectListPopup__get_DeleteButtonSize(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  return 32.0;
}


// UI.SelectListPopup$$Setup
// il2cpp: void UI_SelectListPopup__Setup (UI_SelectListPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4351a10

void UI_SelectListPopup__Setup(UI_SelectListPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_GameObject_o **ppUVar2;
  uint uVar3;
  Settings_StringSetting_o *setting;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  long lVar6;
  int32_t fontSize;
  System_String_o *pSVar7;
  MethodInfo *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar8;
  UnityEngine_Events_UnityAction_o *onEndEdit;
  UnityEngine_GameObject_o *pUVar9;
  UI_InputSettingElement_o *pUVar10;
  UI_ElementStyle_o *__this_02;
  MethodInfo *method_00;
  Il2CppObject *pIVar11;
  MethodInfo *extraout_RDX;
  UI_SelectListPopup_o *__this_03;
  
  if (g_data_057ae140 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__44_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__44_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__44_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__44_3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Name");
    il2cpp_runtime_helper_023445d0(&"No items found.");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae140 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar7 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)__this_01,fontSize,60.0,20.0,pSVar7,(MethodInfo *)0x0);
  __this_03 = (UI_SelectListPopup_o *)(__this->fields).BottomBar;
  setting = (__this->fields).FinishSetting;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = UI_UIManager__GetLocaleCommon("Name",(MethodInfo *)0x0);
  pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  onEndEdit = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  method_00 = __this_01;
  pUVar9 = UI_ElementFactory__CreateInputSetting
                     ((UnityEngine_Transform_o *)__this_03,(UI_ElementStyle_o *)__this_01,
                      (Settings_BaseSetting_o *)setting,pSVar7,"",185.0,40.0,0,pUVar8,onEndEdit,
                      (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                      (MethodInfo *)0x0);
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    pUVar10 = (UI_InputSettingElement_o *)UnityEngine_GameObject__GetComponent_object_(pUVar9,MethodInfo_InputSettingElement_GetComponent_InputSettingElement);
    (__this->fields)._inputElement = pUVar10;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._inputElement);
    __this_03 = (UI_SelectListPopup_o *)(__this->fields).BottomBar;
    __this_00 = (__this->fields)._saveElements;
    pSVar7 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
    pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    UnityEngine_Events_UnityAction___ctor();
    method_00 = __this_01;
    pUVar9 = UI_ElementFactory__CreateTextButton
                       ((UnityEngine_Transform_o *)__this_03,(UI_ElementStyle_o *)__this_01,pSVar7,0.0,pUVar8,
                        (MethodInfo *)0x0);
    lVar6 = MethodInfo_Void_Add;
    if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar4 = (__this_00->fields)._items;
      if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pUVar4->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          pUVar4->m_Items[(int)uVar3] = pUVar9;
          il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar9,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        pUVar5 = (__this->fields).BottomBar;
        pSVar7 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
        pUVar8 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton
                  (pUVar5,(UI_ElementStyle_o *)__this_01,pSVar7,0.0,pUVar8,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).SinglePanel;
        pSVar7 = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
        __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
        UI_ElementStyle___ctor(__this_02,0x18,120.0,20.0,pSVar7,(MethodInfo *)0x0);
        pUVar9 = UI_ElementFactory__CreateDefaultLabel(pUVar5,__this_02,"No items found.",0,4,(MethodInfo *)0x0);
        (__this->fields)._noItemsLabel = pUVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._noItemsLabel,pUVar9);
        method_00 = (MethodInfo *)
                    UI_ElementFactory__CreateHorizontalGroup((__this->fields).TopBar,12.0,4,(MethodInfo *)0x0)
        ;
        ppUVar2 = &(__this->fields)._categoryButtonContainer;
        (__this->fields)._categoryButtonContainer = (UnityEngine_GameObject_o *)method_00;
        il2cpp_runtime_helper_022b4080(ppUVar2);
        __this_03 = (UI_SelectListPopup_o *)(__this->fields)._categoryButtonContainer;
        if (__this_03 != (UI_SelectListPopup_o *)0x0) {
          method_00 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
          pIVar11 = UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)__this_03,(MethodInfo_255A0F0 *)MethodInfo_LayoutElement_GetComponent_LayoutElement);
          if (pIVar11 != (Il2CppObject *)0x0) {
            method_00 = pIVar11->klass->vtable[0x28].method;
            (*pIVar11->klass->vtable[0x28].methodPtr)(0,pIVar11);
            pUVar9 = *ppUVar2;
            __this_03 = (UI_SelectListPopup_o *)0x0;
            if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
              method_00 = (MethodInfo *)0x0;
              UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
              __this_03 = (UI_SelectListPopup_o *)(__this->fields).TopBar;
              if (__this_03 != (UI_SelectListPopup_o *)0x0) {
                method_00 = MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup;
                pIVar11 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)__this_03,(MethodInfo_24E7B40 *)MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
                if (pIVar11 != (Il2CppObject *)0x0) {
                  (__this->fields)._defaultTopBarAlignment = *(int32_t *)&pIVar11[2].monitor;
                  *(undefined1 *)&(__this->fields)._cachedTopBarAlignment = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UI_SelectListPopup__RefreshList(__this_03,method_00);
  return;
}


// UI.SelectListPopup$$OnSearchChanged
// il2cpp: void UI_SelectListPopup__OnSearchChanged (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4351ed0

void UI_SelectListPopup__OnSearchChanged(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  UI_SelectListPopup__RefreshList(__this,method);
  return;
}


// UI.SelectListPopup$$OnSearchEndEdit
// il2cpp: void UI_SelectListPopup__OnSearchEndEdit (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4352300

void UI_SelectListPopup__OnSearchEndEdit(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *pSVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  UI_ConfirmPopup_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UI_InputField_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  undefined8 uVar4;
  bool_conflict bVar5;
  Il2CppObject *__this_10;
  Il2CppClass *pIVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Func_TSource__bool__o *predicate;
  Il2CppRGCTXData *pIVar8;
  Il2CppRGCTXData *__this_11;
  Il2CppClass *x;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_UI_LayoutGroup_o *__this_12;
  long *plVar10;
  void *pvVar11;
  undefined8 extraout_RDX;
  UnityEngine_Events_UnityAction_o *pUVar12;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Il2CppRGCTXData **unaff_RBX;
  undefined8 *puVar13;
  int32_t value;
  MethodInfo *pMVar14;
  Il2CppRGCTXData *value_00;
  MethodInfo *method_03;
  System_String_o *pSVar15;
  Il2CppRGCTXData *__this_13;
  UnityEngine_Events_UnityAction_o *in_R8;
  void *in_R9;
  ulong uVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar19;
  Il2CppType *pIVar20;
  UnityEngine_GameObject_o *__this_14;
  undefined1 auStack_c0 [16];
  UnityEngine_GameObject_o *pUStack_b0;
  Il2CppRGCTXData *pIStack_a8;
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  Il2CppRGCTXData *pIStack_80;
  UnityEngine_Events_UnityAction_o *pUStack_78;
  Il2CppRGCTXData *pIStack_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  Il2CppRGCTXData *pIStack_50;
  
  if (g_data_057ae141 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_FirstOrDefault_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_OnSearchEndEdit_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass46_0);
    g_data_057ae141 = '\x01';
  }
  __this_10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass46_0);
  System_Object___ctor(__this_10,(MethodInfo *)0x0);
  pSVar15 = (System_String_o *)&g_data_0000000d;
  bVar5 = UnityEngine_Input__GetKeyDown(0xd,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pSVar15 = (System_String_o *)&g_data_0000010f;
    bVar5 = UnityEngine_Input__GetKeyDown(0x10f,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pSVar15 = (System_String_o *)&g_data_0000000d;
      bVar5 = UnityEngine_Input__GetKey(0xd,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pSVar15 = (System_String_o *)&g_data_0000010f;
        bVar5 = UnityEngine_Input__GetKey(0x10f,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
      }
    }
  }
  pSVar2 = (__this->fields).FinishSetting;
  if (((pSVar2 == (Settings_StringSetting_o *)0x0) ||
      (pSVar15 = (pSVar2->fields)._value, pSVar15 == (System_String_o *)0x0)) ||
     (pIVar6 = (Il2CppClass *)System_String__ToLowerInvariant(pSVar15,(MethodInfo *)0x0),
     __this_10 == (Il2CppObject *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
    return;
  }
  __this_10[1].klass = pIVar6;
  il2cpp_runtime_helper_022b4080(__this_10 + 1);
  pMVar14 = (MethodInfo *)0x0;
  bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this_10[1].klass,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pSVar7 = UI_SelectListPopup__GetActiveCategoryItems(__this,pMVar14);
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
  pvVar11 = (void *)0x0;
  System_Func_object__bool____ctor();
  pIVar8 = (Il2CppRGCTXData *)
           System_Linq_Enumerable__FirstOrDefault_object__2512400
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,predicate,MethodInfo_String_FirstOrDefault_String);
  if (pIVar8 == (Il2CppRGCTXData *)0x0) {
    return;
  }
  if (g_data_057ae14e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnItemClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass60_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Overwrite this item?");
    il2cpp_runtime_helper_023445d0(&"Cannot overwrite this item.");
    g_data_057ae14e = '\x01';
  }
  __this_11 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass60_0);
  value_00 = (Il2CppRGCTXData *)0x0;
  __this_13 = __this_11;
  System_Object___ctor((Il2CppObject *)__this_11,(MethodInfo *)0x0);
  if (__this_11 != (Il2CppRGCTXData *)0x0) {
    __this_11[2].method = (MethodInfo *)__this;
    il2cpp_runtime_helper_022b4080(__this_11 + 2,__this);
    unaff_RBX = (Il2CppRGCTXData **)(__this_11 + 3);
    __this_11[3].method = (MethodInfo *)pIVar8;
    il2cpp_runtime_helper_022b4080(unaff_RBX);
    if ((char)(__this->fields)._isSave == '\0') {
      __this_13 = (Il2CppRGCTXData *)(__this->fields).FinishSetting;
      value_00 = pIVar8;
      if (__this_13 != (Il2CppRGCTXData *)0x0) {
        value_00 = *unaff_RBX;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_13,(Il2CppObject *)value_00,MethodInfo_Void_set_Value);
        pUVar12 = (__this->fields)._onLoad;
        if (pUVar12 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar12->fields).invoke_impl)((pUVar12->fields).method_code,(pUVar12->fields).method);
          vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
          (*vtableDispatch)
                    (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
          return;
        }
      }
    }
    else {
      pSVar7 = (__this->fields)._disallowedSave;
      if (pSVar7 != (System_Collections_Generic_List_string__o *)0x0) {
        pIVar8 = *unaff_RBX;
        bVar5 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pIVar8,
                           MethodInfo_Boolean_Contains);
        if ((char)bVar5 != '\0') {
          unaff_RBX = &TypeInfo_UIManager;
          if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar4 = "Cannot overwrite this item.";
          value_00 = pIVar8;
          __this_13 = TypeInfo_UIManager;
          if (((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) &&
             (unaff_RBX = (TypeInfo_UIManager[0x17].method)->return_type[3].data,
             (Il2CppRGCTXData *)unaff_RBX != (Il2CppRGCTXData *)0x0)) {
            UI_BasePopup__Show((UI_BasePopup_o *)unaff_RBX,(MethodInfo *)pIVar8);
            value_00 = pIVar8;
            __this_13 = (Il2CppRGCTXData *)0x0;
            if (((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method != (MethodInfo *)0x0) {
              value_00 = (Il2CppRGCTXData *)0x1;
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method,1,
                         (MethodInfo *)0x0);
              pMVar14 = ((Il2CppRGCTXData *)(unaff_RBX + 0x15))->method;
              __this_13 = (Il2CppRGCTXData *)0x0;
              if (pMVar14 != (MethodInfo *)0x0) {
                UNRECOVERED_JUMPTABLE_00 = *(code **)(pMVar14->methodPointer + 0x5e8);
                (*UNRECOVERED_JUMPTABLE_00)
                          (pMVar14,uVar4,*(undefined8 *)(pMVar14->methodPointer + 0x5f0),
                           UNRECOVERED_JUMPTABLE_00);
                return;
              }
            }
          }
          goto label_04352828;
        }
      }
      unaff_RBX = &TypeInfo_UIManager;
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value_00 = pIVar8;
      __this_13 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        __this_00 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        unaff_RBX = (Il2CppRGCTXData **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pvVar11 = (void *)0x0;
        value_00 = __this_11;
        __this_13 = (Il2CppRGCTXData *)unaff_RBX;
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (__this_00,"Overwrite this item?",(UnityEngine_Events_UnityAction_o *)unaff_RBX,
                     (System_String_o *)0x0,(MethodInfo *)in_R8);
          return;
        }
      }
    }
  }
label_04352828:
  auVar18 = il2cpp_runtime_helper_022b2c90();
  pUVar12 = auVar18._8_8_;
  uStack_60 = auVar18._0_8_;
  pIVar8 = value_00;
  pIStack_58 = (Il2CppRGCTXData *)unaff_RBX;
  pIStack_50 = __this_11;
  if (g_data_057ae142 == '\0') {
    pIStack_68 = (Il2CppRGCTXData *)0x4352862;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pIStack_68 = (Il2CppRGCTXData *)0x435286e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae142 = '\x01';
  }
  pIStack_68 = (Il2CppRGCTXData *)0x435287d;
  UI_BasePopup__Show((UI_BasePopup_o *)__this_13,(MethodInfo *)pIVar8);
  __this_13[0x1c].method = (MethodInfo *)value_00;
  pIStack_68 = (Il2CppRGCTXData *)0x4352893;
  il2cpp_runtime_helper_022b4080(__this_13 + 0x1c,value_00);
  __this_13[0x23].rgctxDataDummy = (void *)0x0;
  pIStack_68 = (Il2CppRGCTXData *)0x43528ac;
  il2cpp_runtime_helper_022b4080(__this_13 + 0x23,0);
  *(undefined1 *)(__this_13 + 0x25) = 0;
  *(undefined1 *)(__this_13 + 0x20) = 0;
  __this_13[0x1d].rgctxDataDummy = pvVar11;
  pIStack_68 = (Il2CppRGCTXData *)0x43528d0;
  il2cpp_runtime_helper_022b4080(__this_13 + 0x1d,pvVar11);
  *(bool *)((long)__this_13 + 0x101) = in_R8 != (UnityEngine_Events_UnityAction_o *)0x0;
  __this_13[0x21].rgctxDataDummy = in_R9;
  pIStack_68 = (Il2CppRGCTXData *)0x43528f0;
  il2cpp_runtime_helper_022b4080(__this_13 + 0x21,in_R9);
  __this_13[0x1f].rgctxDataDummy = in_R8;
  pIStack_68 = (Il2CppRGCTXData *)0x4352906;
  il2cpp_runtime_helper_022b4080(__this_13 + 0x1f);
  pIVar8 = (Il2CppRGCTXData *)0x0;
  if (__this_13[0x27].method != (MethodInfo *)0x0) {
    pIStack_68 = (Il2CppRGCTXData *)0x435292f;
    in_R8 = "";
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_13[0x27].method,(Il2CppObject *)"",MethodInfo_Void_set_Value)
    ;
    pIVar8 = (Il2CppRGCTXData *)0x0;
    if (__this_13[0x1b].method != (MethodInfo *)0x0) {
      pIStack_68 = (Il2CppRGCTXData *)0x435294f;
      (**(code **)((__this_13[0x1b].method)->methodPointer + 0x198))();
      pMVar14 = (MethodInfo *)0x0;
      pIStack_68 = (Il2CppRGCTXData *)0x4352959;
      UI_SelectListPopup__SetCategoryTabsEnabled((UI_SelectListPopup_o *)__this_13,0,method_00);
      pIStack_68 = (Il2CppRGCTXData *)0x4352961;
      UI_SelectListPopup__ToggleSaveElements((UI_SelectListPopup_o *)__this_13,pMVar14);
      in_R8 = (UnityEngine_Events_UnityAction_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pIStack_68 = (Il2CppRGCTXData *)0x4352983;
      bVar5 = System_String__op_Inequality
                        ((System_String_o *)pUVar12,(System_String_o *)in_R8,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pIStack_68 = (Il2CppRGCTXData *)0x4352992;
        in_R8 = pUVar12;
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this_13,(System_String_o *)pUVar12,method_01);
      }
      pIStack_68 = (Il2CppRGCTXData *)0x435299a;
      pIVar8 = __this_13;
      UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)__this_13,(MethodInfo *)in_R8);
      if ((__this_13[0x1b].klass != (Il2CppClass *)0x0) &&
         (pIVar8 = *(Il2CppRGCTXData **)&((__this_13[0x1b].klass)->_1).this_arg.bits,
         pIVar8 != (Il2CppRGCTXData *)0x0)) {
        in_R8 = (UnityEngine_Events_UnityAction_o *)pIVar8->klass->vtable[0x26].method;
        pIStack_68 = (Il2CppRGCTXData *)0x43529bf;
        (*pIVar8->klass->vtable[0x26].methodPtr)();
        if (__this_13[0x1b].klass != (Il2CppClass *)0x0) {
          __this_01 = *(UnityEngine_UI_InputField_o **)&((__this_13[0x1b].klass)->_1).this_arg.bits;
          pIVar8 = (Il2CppRGCTXData *)0x0;
          if (__this_01 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ActivateInputField(__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  pIStack_68 = (Il2CppRGCTXData *)0x43529ee;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  uVar16 = (ulong)in_R8 & 0xffffffff;
  pIStack_80 = __this_13;
  pUStack_78 = pUVar12;
  pIStack_68 = value_00;
  if (g_data_057ae14b == '\0') {
    plStack_90 = (long *)0x4352a12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    plStack_90 = (long *)0x4352a1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plStack_90 = (long *)0x4352a2a;
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae14b = '\x01';
  }
  pMVar14 = pIVar8[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    plStack_90 = (long *)0x4352a4d;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_90 = (long *)0x4352a59;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') goto label_04352b16;
  pIVar6 = (Il2CppClass *)0x0;
  if (pIVar8[0xe].method != (MethodInfo *)0x0) {
    plStack_90 = (long *)0x4352a7f;
    x = (Il2CppClass *)
        UnityEngine_Transform__Find
                  ((UnityEngine_Transform_o *)pIVar8[0xe].method,"Label",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_90 = (long *)0x4352a93;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_90 = (long *)0x4352a9f;
    pIVar6 = x;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
label_04352ad2:
      if (*(char *)(pIVar8 + 0x19) == '\0') {
label_04352b16:
        pMVar14 = pIVar8[0x18].method;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          plStack_90 = (long *)0x4352b2e;
          il2cpp_runtime_helper_02337ed0();
        }
        method_03 = (MethodInfo *)0x0;
        plStack_90 = (long *)0x4352b3a;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pMVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
label_04352b55:
          if ((char)uVar16 != '\0') {
            return;
          }
          UI_SelectListPopup__ClearCategoryTabs((UI_SelectListPopup_o *)pIVar8,method_03);
          return;
        }
        pIVar6 = (Il2CppClass *)0x0;
        if (pIVar8[0x18].method != (MethodInfo *)0x0) {
          method_03 = (MethodInfo *)((ulong)in_R8 & 0xff);
          plStack_90 = (long *)0x4352b55;
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pIVar8[0x18].method,(bool_conflict)method_03,
                     (MethodInfo *)0x0);
          goto label_04352b55;
        }
      }
      else {
        pIVar6 = pIVar8[0xe].klass;
        if (pIVar6 != (Il2CppClass *)0x0) {
          plStack_90 = (long *)0x4352af7;
          __this_12 = (UnityEngine_UI_LayoutGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pIVar6,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
          value = 4;
          if ((char)uVar16 == '\0') {
            value = *(int32_t *)((long)pIVar8 + 0xcc);
          }
          if (__this_12 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
            plStack_90 = (long *)0x4352b16;
            UnityEngine_UI_LayoutGroup__set_childAlignment(__this_12,value,(MethodInfo *)0x0);
            goto label_04352b16;
          }
        }
      }
    }
    else if (x != (Il2CppClass *)0x0) {
      plStack_90 = (long *)0x4352ab6;
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pIVar6 = x;
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        plStack_90 = (long *)0x4352ad2;
        UnityEngine_GameObject__SetActive(pUVar9,((uint)in_R8 ^ 1) & 0xff,(MethodInfo *)0x0);
        goto label_04352ad2;
      }
    }
  }
  plStack_90 = (long *)0x4352b7c;
  il2cpp_runtime_helper_022b2c90();
  plStack_90 = &TypeInfo_Object;
  pIStack_a8 = pIVar8;
  uStack_98 = uVar16;
  if (g_data_057ae145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae145 = '\x01';
  }
  pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar20 = (Il2CppType *)0x0;
  pUVar9 = (UnityEngine_GameObject_o *)0x0;
  __this_02 = (pIVar6->_2).unity_user_data;
  if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_04352d73;
  if ((char)(pIVar6->_2).element_size != '\0') {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,__this_02,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
    pIVar20 = (Il2CppType *)auStack_c0._8_8_;
    pUVar9 = pUStack_b0;
    while (__this_03.fields._8_8_ = pIVar20,
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar19,
          __this_03.fields._current = (Il2CppObject *)pUVar9,
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20), (char)bVar5 != '\0') {
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04352d6e;
      }
      UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
    }
    __this_04.fields._8_8_ = pIVar20;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
    __this_04.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
    puVar13 = &"Save";
    iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
    goto joined_r0x04352cb5;
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,__this_02,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
  pIVar20 = (Il2CppType *)auStack_c0._8_8_;
  __this_14 = pUStack_b0;
  while (__this_05.fields._8_8_ = pIVar20,
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar19,
        __this_05.fields._current = (Il2CppObject *)__this_14,
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20), (char)bVar5 != '\0') {
    pUVar9 = (UnityEngine_GameObject_o *)0x0;
    if (__this_14 == (UnityEngine_GameObject_o *)0x0) goto label_04352d6e;
    UnityEngine_GameObject__SetActive(__this_14,0,(MethodInfo *)0x0);
  }
  __this_06.fields._8_8_ = pIVar20;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
  __this_06.fields._current = (Il2CppObject *)__this_14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
label_04352d46:
  puVar13 = &"Load";
  iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
joined_r0x04352cb5:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar13,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pIVar6,pSVar15,method_02);
  return;
label_04352d6e:
  il2cpp_runtime_helper_022b2c90();
label_04352d73:
  auVar17 = il2cpp_runtime_helper_022b2c90();
  if (auVar17._8_4_ != 1) {
    __this_08.fields._8_8_ = pIVar20;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
    __this_08.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
label_04352e59:
    _Unwind_Resume(auVar17._0_8_);
  }
  plVar10 = (long *)__cxa_begin_catch(auVar17._0_8_);
  lVar3 = *plVar10;
  __cxa_end_catch();
  __this_07.fields._8_8_ = pIVar20;
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
  __this_07.fields._current = (Il2CppObject *)pUVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
  if (lVar3 != 0) {
    il2cpp_runtime_helper_022fefe0(lVar3);
    __this_09.fields._8_8_ = pIVar20;
    __this_09.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
    __this_09.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
    goto label_04352e59;
  }
  goto label_04352d46;
}


// UI.SelectListPopup$$ShowLoad
// il2cpp: void UI_SelectListPopup__ShowLoad (UI_SelectListPopup_o* __this, System_Collections_Generic_List_string__o* items, System_String_o* title, UnityEngine_Events_UnityAction_o* onLoad, UnityEngine_Events_UnityAction_o* onDelete, System_Collections_Generic_List_string__o* disallowedDelete, const MethodInfo* method);
// 0x4352830

void UI_SelectListPopup__ShowLoad
               (UI_SelectListPopup_o *__this,System_Collections_Generic_List_string__o *items,
               System_String_o *title,UnityEngine_Events_UnityAction_o *onLoad,
               UnityEngine_Events_UnityAction_o *onDelete,
               System_Collections_Generic_List_string__o *disallowedDelete,MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar2;
  UnityEngine_UI_InputField_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  bool_conflict bVar4;
  Il2CppClass *x;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_LayoutGroup_o *__this_10;
  System_String_o *title_00;
  long *plVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 *puVar7;
  int32_t value;
  UnityEngine_Events_UnityAction_o *method_03;
  MethodInfo *pMVar8;
  MethodInfo *method_04;
  Il2CppRGCTXData *__this_11;
  Il2CppClass *__this_12;
  ulong uVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  UnityEngine_GameObject_o *__this_13;
  undefined1 auStack_98 [16];
  UnityEngine_GameObject_o *pUStack_88;
  Il2CppRGCTXData *pIStack_80;
  _union_249689 _Stack_78;
  ulong uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  UI_SelectListPopup_o *pUStack_58;
  System_String_o *pSStack_50;
  UnityEngine_Events_UnityAction_o *pUStack_48;
  System_Collections_Generic_List_string__o *pSStack_40;
  
  pMVar8 = (MethodInfo *)items;
  if (g_data_057ae142 == '\0') {
    pSStack_40 = (System_Collections_Generic_List_string__o *)0x4352862;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pSStack_40 = (System_Collections_Generic_List_string__o *)0x435286e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae142 = '\x01';
  }
  pSStack_40 = (System_Collections_Generic_List_string__o *)0x435287d;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar8);
  (__this->fields)._items = items;
  pSStack_40 = (System_Collections_Generic_List_string__o *)0x4352893;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items,items);
  (__this->fields)._categorizedItems = (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0;
  pSStack_40 = (System_Collections_Generic_List_string__o *)0x43528ac;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categorizedItems,0);
  *(undefined1 *)&(__this->fields)._useCategories = 0;
  *(undefined1 *)&(__this->fields)._isSave = 0;
  (__this->fields)._onLoad = onLoad;
  pSStack_40 = (System_Collections_Generic_List_string__o *)0x43528d0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onLoad,onLoad);
  *(bool *)((long)&(__this->fields)._isSave + 1) = onDelete != (UnityEngine_Events_UnityAction_o *)0x0;
  (__this->fields)._disallowedDelete = disallowedDelete;
  pSStack_40 = (System_Collections_Generic_List_string__o *)0x43528f0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._disallowedDelete,disallowedDelete);
  (__this->fields)._onDelete = onDelete;
  pSStack_40 = (System_Collections_Generic_List_string__o *)0x4352906;
  method_03 = onDelete;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onDelete);
  __this_00 = (__this->fields).FinishSetting;
  __this_11 = (Il2CppRGCTXData *)0x0;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    pSStack_40 = (System_Collections_Generic_List_string__o *)0x435292f;
    method_03 = "";
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)"",MethodInfo_Void_set_Value);
    pUVar2 = (__this->fields)._inputElement;
    __this_11 = (Il2CppRGCTXData *)0x0;
    if (pUVar2 != (UI_InputSettingElement_o *)0x0) {
      pSStack_40 = (System_Collections_Generic_List_string__o *)0x435294f;
      (*(pUVar2->klass->vtable)._6_SyncElement.methodPtr)();
      pMVar8 = (MethodInfo *)0x0;
      pSStack_40 = (System_Collections_Generic_List_string__o *)0x4352959;
      UI_SelectListPopup__SetCategoryTabsEnabled(__this,0,method_00);
      pSStack_40 = (System_Collections_Generic_List_string__o *)0x4352961;
      UI_SelectListPopup__ToggleSaveElements(__this,pMVar8);
      method_03 = (UnityEngine_Events_UnityAction_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSStack_40 = (System_Collections_Generic_List_string__o *)0x4352983;
      bVar4 = System_String__op_Inequality(title,(System_String_o *)method_03,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pSStack_40 = (System_Collections_Generic_List_string__o *)0x4352992;
        method_03 = (UnityEngine_Events_UnityAction_o *)title;
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_01);
      }
      pSStack_40 = (System_Collections_Generic_List_string__o *)0x435299a;
      __this_11 = (Il2CppRGCTXData *)__this;
      UI_SelectListPopup__RefreshList(__this,(MethodInfo *)method_03);
      pUVar2 = (__this->fields)._inputElement;
      if ((pUVar2 != (UI_InputSettingElement_o *)0x0) &&
         (__this_11 = (Il2CppRGCTXData *)(pUVar2->fields)._inputField, __this_11 != (Il2CppRGCTXData *)0x0)) {
        method_03 = (UnityEngine_Events_UnityAction_o *)__this_11->klass->vtable[0x26].method;
        pSStack_40 = (System_Collections_Generic_List_string__o *)0x43529bf;
        (*__this_11->klass->vtable[0x26].methodPtr)();
        pUVar2 = (__this->fields)._inputElement;
        if (pUVar2 != (UI_InputSettingElement_o *)0x0) {
          __this_01 = (pUVar2->fields)._inputField;
          __this_11 = (Il2CppRGCTXData *)0x0;
          if (__this_01 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ActivateInputField(__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  pSStack_40 = (System_Collections_Generic_List_string__o *)0x43529ee;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  uVar9 = (ulong)method_03 & 0xffffffff;
  pUStack_58 = __this;
  pSStack_50 = title;
  pUStack_48 = onDelete;
  pSStack_40 = items;
  if (g_data_057ae14b == '\0') {
    plStack_68 = (long *)0x4352a12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    plStack_68 = (long *)0x4352a1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plStack_68 = (long *)0x4352a2a;
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae14b = '\x01';
  }
  pMVar8 = __this_11[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    plStack_68 = (long *)0x4352a4d;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_68 = (long *)0x4352a59;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') goto label_04352b16;
  __this_12 = (Il2CppClass *)0x0;
  if (__this_11[0xe].method != (MethodInfo *)0x0) {
    plStack_68 = (long *)0x4352a7f;
    x = (Il2CppClass *)
        UnityEngine_Transform__Find
                  ((UnityEngine_Transform_o *)__this_11[0xe].method,"Label",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_68 = (long *)0x4352a93;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_68 = (long *)0x4352a9f;
    __this_12 = x;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
label_04352ad2:
      if (*(char *)(__this_11 + 0x19) == '\0') {
label_04352b16:
        pMVar8 = __this_11[0x18].method;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          plStack_68 = (long *)0x4352b2e;
          il2cpp_runtime_helper_02337ed0();
        }
        method_04 = (MethodInfo *)0x0;
        plStack_68 = (long *)0x4352b3a;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_04352b55:
          if ((char)uVar9 == '\0') {
            UI_SelectListPopup__ClearCategoryTabs((UI_SelectListPopup_o *)__this_11,method_04);
            return;
          }
          return;
        }
        __this_12 = (Il2CppClass *)0x0;
        if (__this_11[0x18].method != (MethodInfo *)0x0) {
          method_04 = (MethodInfo *)((ulong)method_03 & 0xff);
          plStack_68 = (long *)0x4352b55;
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)__this_11[0x18].method,(bool_conflict)method_04,
                     (MethodInfo *)0x0);
          goto label_04352b55;
        }
      }
      else {
        __this_12 = __this_11[0xe].klass;
        if (__this_12 != (Il2CppClass *)0x0) {
          plStack_68 = (long *)0x4352af7;
          __this_10 = (UnityEngine_UI_LayoutGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_12,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
          value = 4;
          if ((char)uVar9 == '\0') {
            value = *(int32_t *)((long)__this_11 + 0xcc);
          }
          if (__this_10 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
            plStack_68 = (long *)0x4352b16;
            UnityEngine_UI_LayoutGroup__set_childAlignment(__this_10,value,(MethodInfo *)0x0);
            goto label_04352b16;
          }
        }
      }
    }
    else if (x != (Il2CppClass *)0x0) {
      plStack_68 = (long *)0x4352ab6;
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      __this_12 = x;
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        plStack_68 = (long *)0x4352ad2;
        UnityEngine_GameObject__SetActive(pUVar5,((uint)method_03 ^ 1) & 0xff,(MethodInfo *)0x0);
        goto label_04352ad2;
      }
    }
  }
  plStack_68 = (long *)0x4352b7c;
  il2cpp_runtime_helper_022b2c90();
  plStack_68 = &TypeInfo_Object;
  pIStack_80 = __this_11;
  _Stack_78 = (_union_249689)disallowedDelete;
  uStack_70 = uVar9;
  if (g_data_057ae145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae145 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pUVar5 = (UnityEngine_GameObject_o *)0x0;
  __this_02 = (__this_12->_2).unity_user_data;
  if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
label_04352d73:
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) {
      __this_08.fields._8_8_ = pIVar12;
      __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
      __this_08.fields._current = (Il2CppObject *)pUVar5;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
label_04352e59:
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_07.fields._8_8_ = pIVar12;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_07.fields._current = (Il2CppObject *)pUVar5;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      __this_09.fields._8_8_ = pIVar12;
      __this_09.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
      __this_09.fields._current = (Il2CppObject *)pUVar5;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
      goto label_04352e59;
    }
  }
  else {
    if ((char)(__this_12->_2).element_size != '\0') {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_98,__this_02,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_98._0_8_;
      pIVar12 = (Il2CppType *)auStack_98._8_8_;
      pUVar5 = pUStack_88;
label_04352c60:
      __this_03.fields._8_8_ = pIVar12;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
      __this_03.fields._current = (Il2CppObject *)pUVar5;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff48);
      if ((char)bVar4 != '\0') {
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) goto code_r0x04352c7d;
        il2cpp_runtime_helper_022b2c90();
label_04352d6e:
        il2cpp_runtime_helper_022b2c90();
        goto label_04352d73;
      }
      __this_04.fields._8_8_ = pIVar12;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
      __this_04.fields._current = (Il2CppObject *)pUVar5;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
      puVar7 = &"Save";
      iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
      goto joined_r0x04352cb5;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_98,__this_02,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_98._0_8_;
    pIVar12 = (Il2CppType *)auStack_98._8_8_;
    __this_13 = pUStack_88;
    while (__this_05.fields._8_8_ = pIVar12,
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
          __this_05.fields._current = (Il2CppObject *)__this_13,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff48), (char)bVar4 != '\0') {
      pUVar5 = (UnityEngine_GameObject_o *)0x0;
      if (__this_13 == (UnityEngine_GameObject_o *)0x0) goto label_04352d6e;
      UnityEngine_GameObject__SetActive(__this_13,0,(MethodInfo *)0x0);
    }
    __this_06.fields._8_8_ = pIVar12;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_06.fields._current = (Il2CppObject *)__this_13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff48);
  }
  puVar7 = &"Load";
  iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
joined_r0x04352cb5:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  title_00 = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar7,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this_12,title_00,method_02);
  return;
code_r0x04352c7d:
  UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
  goto label_04352c60;
}


// UI.SelectListPopup$$ShowLoadCategorized
// il2cpp: void UI_SelectListPopup__ShowLoadCategorized (UI_SelectListPopup_o* __this, System_Collections_Generic_List_SelectListPopup_ItemCategory__o* categories, System_String_o* title, UnityEngine_Events_UnityAction_o* onLoad, const MethodInfo* method);
// 0x4352e80

void UI_SelectListPopup__ShowLoadCategorized
               (UI_SelectListPopup_o *__this,
               System_Collections_Generic_List_SelectListPopup_ItemCategory__o *categories,
               System_String_o *title,UnityEngine_Events_UnityAction_o *onLoad,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_string__o **ppSVar2;
  uint uVar3;
  System_String_c *__this_00;
  System_String_array *pSVar4;
  Settings_StringSetting_o *__this_01;
  UI_InputSettingElement_o *pUVar5;
  UI_InputSettingElement_c *pUVar6;
  UnityEngine_UI_InputField_o *pUVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  bool_conflict bVar8;
  System_Collections_Generic_List_string__o *pSVar9;
  long *plVar10;
  MethodInfo *method_00;
  MethodInfo *pMVar11;
  MethodInfo *title_00;
  long lVar12;
  UI_SelectListPopup_o *pUVar13;
  undefined1 auVar14 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  Il2CppRGCTXData *pIVar16;
  _union_249689 _Var17;
  System_Collections_Generic_List_Enumerator_T__c *local_78;
  Il2CppRGCTXData *pIStack_70;
  _union_249689 local_68;
  _union_249689 local_58;
  MethodInfo *local_50;
  undefined1 local_48 [16];
  _union_249689 local_38;
  
  pMVar11 = (MethodInfo *)categories;
  local_58 = (_union_249689)onLoad;
  local_50 = (MethodInfo *)title;
  if (g_data_057ae143 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SelectListPopup_ItemCategory_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_SelectListPopup_ItemCategory_GetE);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae143 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar16 = (Il2CppRGCTXData *)0x0;
  _Var17.genericMethod = (System_String_o *)0x0;
  local_78 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_70 = (Il2CppRGCTXData *)0x0;
  local_68.genericMethod = (System_String_o *)0x0;
  UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar11);
  (__this->fields)._categorizedItems = categories;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categorizedItems,categories);
  *(undefined1 *)&(__this->fields)._useCategories = 1;
  pSVar9 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_System_String);
  ppSVar2 = &(__this->fields)._items;
  (__this->fields)._items = pSVar9;
  il2cpp_runtime_helper_022b4080(ppSVar2,pSVar9);
  if (categories != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)categories,MethodInfo_List_1_T_Enumerator_UI_SelectListPopup_ItemCategory_GetE);
    pUVar13 = __this;
    pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar16 = (Il2CppRGCTXData *)local_48._8_8_;
    _Var17 = local_38;
    while( true ) {
      __this_02.fields._8_8_ = pIVar16;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
      __this_02.fields._current = _Var17.genericMethod;
      bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff68);
      if ((char)bVar8 == '\0') {
        __this_05.fields._8_8_ = pIVar16;
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
        __this_05.fields._current = _Var17.genericMethod;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
        goto label_0435316d;
      }
      if (_Var17.genericMethod == (System_String_o *)0x0) break;
      __this_00 = ((System_String_o *)((long)_Var17.genericMethod + 0x18))->klass;
      if (__this_00 == (System_String_c *)0x0) goto label_043532ec;
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
      local_68.genericMethod = local_38.genericMethod;
      local_78 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIStack_70 = (Il2CppRGCTXData *)local_48._8_8_;
      while (__this_03.fields._8_8_ = pIVar16,
            __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar15,
            __this_03.fields._current = _Var17.genericMethod,
            bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_03,(MethodInfo_321A1D0 *)&local_78), lVar12 = MethodInfo_Void_Add,
            (char)bVar8 != '\0') {
        pSVar9 = *ppSVar2;
        if (pSVar9 == (System_Collections_Generic_List_string__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_043532e7;
        }
        piVar1 = &(pSVar9->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar9->fields)._items;
        if (pSVar4 == (System_String_array *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_043532e7;
        }
        uVar3 = (pSVar9->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (pSVar9->fields)._size = uVar3 + 1;
          ((_union_249689 *)(pSVar4->m_Items + (int)uVar3))->genericMethod = (void *)local_68;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,local_68.genericMethod,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      pUVar13 = (UI_SelectListPopup_o *)0x0;
      __this_04.fields._8_8_ = pIVar16;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
      __this_04.fields._current = _Var17.genericMethod;
      System_Collections_Generic_List_Enumerator_object___Dispose(__this_04,(MethodInfo_321A1C0 *)&local_78);
    }
label_043532e7:
    il2cpp_runtime_helper_022b2c90();
label_043532ec:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(pUVar13);
  }
  do {
    auVar14 = il2cpp_runtime_helper_022b2c90();
    lVar12 = auVar14._0_8_;
    if (auVar14._8_4_ != 1) {
label_0435334d:
      __this_07.fields._8_8_ = pIVar16;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
      __this_07.fields._current = _Var17.genericMethod;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
      _Unwind_Resume(lVar12);
    }
    plVar10 = (long *)__cxa_begin_catch();
    lVar12 = *plVar10;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar16;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar15;
    __this_06.fields._current = _Var17.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff68);
    if (lVar12 != 0) {
      il2cpp_runtime_helper_022fefe0();
      goto label_0435334d;
    }
label_0435316d:
    *(undefined1 *)&(__this->fields)._isSave = 0;
    (__this->fields)._onLoad = (UnityEngine_Events_UnityAction_o *)local_58;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._onLoad);
    *(undefined1 *)((long)&(__this->fields)._isSave + 1) = 0;
    (__this->fields)._disallowedDelete = (System_Collections_Generic_List_string__o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._disallowedDelete,0);
    (__this->fields)._onDelete = (UnityEngine_Events_UnityAction_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._onDelete,0);
    __this_01 = (__this->fields).FinishSetting;
    if (__this_01 != (Settings_StringSetting_o *)0x0) {
      Settings_TypedSetting_object___set_Value
                ((Settings_TypedSetting_T__o *)__this_01,
                 (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8),MethodInfo_Void_set_Value);
      pUVar5 = (__this->fields)._inputElement;
      if (pUVar5 != (UI_InputSettingElement_o *)0x0) {
        pUVar6 = pUVar5->klass;
        pMVar11 = (pUVar6->vtable)._6_SyncElement.method;
        (*(pUVar6->vtable)._6_SyncElement.methodPtr)();
        UI_SelectListPopup__SetupCategoryTabs(__this,pMVar11);
        UI_SelectListPopup__ToggleSaveElements(__this,pMVar11);
        title_00 = local_50;
        pMVar11 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        bVar8 = System_String__op_Inequality
                          ((System_String_o *)local_50,(System_String_o *)pMVar11,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,(System_String_o *)title_00,method_00);
          pMVar11 = title_00;
        }
        UI_SelectListPopup__RefreshList(__this,pMVar11);
        pUVar5 = (__this->fields)._inputElement;
        if ((pUVar5 != (UI_InputSettingElement_o *)0x0) &&
           (pUVar7 = (pUVar5->fields)._inputField, pUVar7 != (UnityEngine_UI_InputField_o *)0x0)) {
          (*(pUVar7->klass->vtable)._38_Select.methodPtr)();
          pUVar5 = (__this->fields)._inputElement;
          if ((pUVar5 != (UI_InputSettingElement_o *)0x0) &&
             (pUVar7 = (pUVar5->fields)._inputField, pUVar7 != (UnityEngine_UI_InputField_o *)0x0)) {
            UnityEngine_UI_InputField__ActivateInputField(pUVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  } while( true );
}


// UI.SelectListPopup$$ShowSave
// il2cpp: void UI_SelectListPopup__ShowSave (UI_SelectListPopup_o* __this, System_Collections_Generic_List_string__o* items, System_String_o* title, System_String_o* initial, UnityEngine_Events_UnityAction_o* onSave, System_Collections_Generic_List_string__o* disallowedSave, UnityEngine_Events_UnityAction_o* onDelete, System_Collections_Generic_List_string__o* disallowedDelete, const MethodInfo* method);
// 0x43538f0

void UI_SelectListPopup__ShowSave
               (UI_SelectListPopup_o *__this,System_Collections_Generic_List_string__o *items,
               System_String_o *title,System_String_o *initial,UnityEngine_Events_UnityAction_o *onSave,
               System_Collections_Generic_List_string__o *disallowedSave,
               UnityEngine_Events_UnityAction_o *onDelete,
               System_Collections_Generic_List_string__o *disallowedDelete,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  UI_InputSettingElement_o *pUVar1;
  UnityEngine_UI_InputField_o *__this_01;
  bool_conflict bVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *pMVar3;
  UnityEngine_UI_InputField_o *__this_02;
  
  pMVar3 = (MethodInfo *)items;
  if (g_data_057ae144 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae144 = '\x01';
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,pMVar3);
  (__this->fields)._items = items;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items,items);
  (__this->fields)._categorizedItems = (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categorizedItems,0);
  *(undefined1 *)&(__this->fields)._useCategories = 0;
  *(undefined1 *)&(__this->fields)._isSave = 1;
  (__this->fields)._onSave = onSave;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onSave,onSave);
  (__this->fields)._disallowedSave = disallowedSave;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._disallowedSave,disallowedSave);
  *(bool *)((long)&(__this->fields)._isSave + 1) = onDelete != (UnityEngine_Events_UnityAction_o *)0x0;
  (__this->fields)._disallowedDelete = disallowedDelete;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._disallowedDelete,disallowedDelete);
  (__this->fields)._onDelete = onDelete;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._onDelete);
  __this_00 = (__this->fields).FinishSetting;
  __this_02 = (UnityEngine_UI_InputField_o *)0x0;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)initial,MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._inputElement;
    __this_02 = (UnityEngine_UI_InputField_o *)0x0;
    if (pUVar1 != (UI_InputSettingElement_o *)0x0) {
      (*(pUVar1->klass->vtable)._6_SyncElement.methodPtr)();
      pMVar3 = (MethodInfo *)0x0;
      UI_SelectListPopup__SetCategoryTabsEnabled(__this,0,method_00);
      UI_SelectListPopup__ToggleSaveElements(__this,pMVar3);
      pMVar3 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      bVar2 = System_String__op_Inequality(title,(System_String_o *)pMVar3,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_01);
        pMVar3 = (MethodInfo *)title;
      }
      __this_02 = (UnityEngine_UI_InputField_o *)__this;
      UI_SelectListPopup__RefreshList(__this,pMVar3);
      pUVar1 = (__this->fields)._inputElement;
      if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
         (__this_02 = (pUVar1->fields)._inputField, __this_02 != (UnityEngine_UI_InputField_o *)0x0)) {
        (*(__this_02->klass->vtable)._38_Select.methodPtr)();
        pUVar1 = (__this->fields)._inputElement;
        if ((pUVar1 != (UI_InputSettingElement_o *)0x0) &&
           (__this_01 = (pUVar1->fields)._inputField, __this_02 = (UnityEngine_UI_InputField_o *)0x0,
           __this_01 != (UnityEngine_UI_InputField_o *)0x0)) {
          UnityEngine_UI_InputField__ActivateInputField(__this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$ToggleSaveElements
// il2cpp: void UI_SelectListPopup__ToggleSaveElements (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4352b80

void UI_SelectListPopup__ToggleSaveElements(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GameObject__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  bool_conflict bVar3;
  System_String_o *title;
  long *plVar4;
  MethodInfo *method_00;
  undefined8 *puVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  UnityEngine_GameObject_o *__this_08;
  UnityEngine_GameObject_o *__this_09;
  undefined1 local_38 [16];
  UnityEngine_GameObject_o *local_28;
  
  if (g_data_057ae145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae145 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  __this_08 = (UnityEngine_GameObject_o *)0x0;
  __this_00 = (__this->fields)._saveElements;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
label_04352d73:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) {
      __this_06.fields._8_8_ = pIVar8;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_06.fields._current = (Il2CppObject *)__this_08;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
label_04352e59:
      _Unwind_Resume(auVar6._0_8_);
    }
    plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar8;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_05.fields._current = (Il2CppObject *)__this_08;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      __this_07.fields._8_8_ = pIVar8;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_07.fields._current = (Il2CppObject *)__this_08;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      goto label_04352e59;
    }
  }
  else {
    if ((char)(__this->fields)._isSave != '\0') {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
      pIVar8 = (Il2CppType *)local_38._8_8_;
      __this_08 = local_28;
label_04352c60:
      __this_01.fields._8_8_ = pIVar8;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_01.fields._current = (Il2CppObject *)__this_08;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      if ((char)bVar3 != '\0') {
        if (__this_08 != (UnityEngine_GameObject_o *)0x0) goto code_r0x04352c7d;
        il2cpp_runtime_helper_022b2c90();
label_04352d6e:
        il2cpp_runtime_helper_022b2c90();
        goto label_04352d73;
      }
      __this_02.fields._8_8_ = pIVar8;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_02.fields._current = (Il2CppObject *)__this_08;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      puVar5 = &"Save";
      iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
      goto joined_r0x04352cb5;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
    pIVar8 = (Il2CppType *)local_38._8_8_;
    __this_09 = local_28;
    while (__this_03.fields._8_8_ = pIVar8,
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7,
          __this_03.fields._current = (Il2CppObject *)__this_09,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), (char)bVar3 != '\0') {
      __this_08 = (UnityEngine_GameObject_o *)0x0;
      if (__this_09 == (UnityEngine_GameObject_o *)0x0) goto label_04352d6e;
      UnityEngine_GameObject__SetActive(__this_09,0,(MethodInfo *)0x0);
    }
    __this_04.fields._8_8_ = pIVar8;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_04.fields._current = (Il2CppObject *)__this_09;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  }
  puVar5 = &"Load";
  iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
joined_r0x04352cb5:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  title = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar5,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this,title,method_00);
  return;
code_r0x04352c7d:
  UnityEngine_GameObject__SetActive(__this_08,1,(MethodInfo *)0x0);
  goto label_04352c60;
}


// UI.SelectListPopup$$RefreshList
// il2cpp: void UI_SelectListPopup__RefreshList (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4351ee0

void UI_SelectListPopup__RefreshList(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar2;
  Il2CppObject *__this_06;
  Il2CppClass *method_00;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  System_Func_TSource__bool__o *predicate;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar5;
  MethodInfo *method_03;
  System_Func_TSource__bool__o *unaff_R12;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  System_String_o *item;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (g_data_057ae146 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Where_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RefreshList_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_RefreshList_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass51_0);
    g_data_057ae146 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  item = (System_String_o *)0x0;
  __this_06 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass51_0);
  method_03 = (MethodInfo *)0x0;
  System_Object___ctor(__this_06,(MethodInfo *)0x0);
  UI_SelectListPopup__ClearListButtons(__this,method_03);
  pSVar1 = (__this->fields).FinishSetting;
  if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
     (__this_00 = (pSVar1->fields)._value, __this_00 != (System_String_o *)0x0)) {
    iVar5 = 0;
    method_00 = (Il2CppClass *)System_String__ToLowerInvariant(__this_00,(MethodInfo *)0x0);
    if (__this_06 != (Il2CppObject *)0x0) {
      pIVar6 = __this_06 + 1;
      __this_06[1].klass = method_00;
      il2cpp_runtime_helper_022b4080(pIVar6);
      if (((char)(__this->fields)._useCategories == '\0') ||
         ((__this->fields)._categorizedItems ==
          (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) {
        bVar2 = System_String__IsNullOrEmpty((System_String_o *)pIVar6->klass,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pSVar3 = (__this->fields)._items;
          predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
          System_Func_object__bool____ctor();
          pSVar4 = System_Linq_Enumerable__Where_object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,predicate,
                              MethodInfo_IEnumerable_1_System_String_Where_String);
          pSVar3 = (System_Collections_Generic_List_string__o *)
                   System_Linq_Enumerable__ToList_object_(pSVar4,MethodInfo_List_1_System_String_ToList_String);
        }
        else {
          pSVar3 = (__this->fields)._items;
        }
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_0435224d;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
        pIVar8 = (Il2CppType *)local_48._8_8_;
        item = local_38;
        while (__this_03.fields._8_8_ = pIVar8,
              __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7,
              __this_03.fields._current = (Il2CppObject *)item,
              bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
              (char)bVar2 != '\0') {
          UI_SelectListPopup__CreateItemButton(__this,item,method_02);
          iVar5 = iVar5 + 1;
        }
      }
      else {
        pSVar3 = UI_SelectListPopup__GetActiveCategoryItems(__this,(MethodInfo *)method_00);
        bVar2 = System_String__IsNullOrEmpty((System_String_o *)pIVar6->klass,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          unaff_R12 = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
          System_Func_object__bool____ctor();
          pSVar4 = System_Linq_Enumerable__Where_object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,unaff_R12,
                              MethodInfo_IEnumerable_1_System_String_Where_String);
          pSVar3 = (System_Collections_Generic_List_string__o *)
                   System_Linq_Enumerable__ToList_object_(pSVar4,MethodInfo_List_1_System_String_ToList_String);
        }
        if (pSVar3 == (System_Collections_Generic_List_string__o *)0x0) goto label_0435224d;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        iVar5 = 0;
        unaff_R12 = (System_Func_TSource__bool__o *)&MethodInfo_Boolean_MoveNext;
        pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
        pIVar8 = (Il2CppType *)local_48._8_8_;
        item = local_38;
        while (__this_02.fields._8_8_ = pIVar8,
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7,
              __this_02.fields._current = (Il2CppObject *)item,
              bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
              (char)bVar2 != '\0') {
          UI_SelectListPopup__CreateItemButton(__this,item,method_01);
          iVar5 = iVar5 + 1;
        }
      }
      __this_04.fields._8_8_ = pIVar8;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_04.fields._current = (Il2CppObject *)item;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      __this_01 = (__this->fields)._noItemsLabel;
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__SetActive(__this_01,(uint)(iVar5 == 0),(MethodInfo *)0x0);
        return;
      }
    }
  }
label_0435224d:
  il2cpp_runtime_helper_022b2c90();
  __this_05.fields._8_8_ = pIVar8;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
  __this_05.fields._current = (Il2CppObject *)item;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(unaff_R12);
}


// UI.SelectListPopup$$CreateItemButton
// il2cpp: void UI_SelectListPopup__CreateItemButton (UI_SelectListPopup_o* __this, System_String_o* item, const MethodInfo* method);
// 0x4353c90

void UI_SelectListPopup__CreateItemButton
               (UI_SelectListPopup_o *__this,System_String_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  UnityEngine_Events_UnityEvent_o *pUVar5;
  UnityEngine_UI_ColorBlock_o value;
  UnityEngine_UI_ColorBlock_o value_00;
  long lVar6;
  int32_t value_01;
  bool_conflict bVar7;
  UI_SelectListPopup_o *pUVar8;
  UI_SelectListPopup_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UI_SelectListPopup_o *pUVar11;
  UI_SelectListPopup_o *__this_00;
  Il2CppObject *pIVar12;
  UnityEngine_UI_Text_o *__this_01;
  System_String_o *pSVar13;
  UI_SelectListPopup_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  System_Threading_CancellationTokenSource_o **ppSVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Color_o UVar17;
  UnityEngine_UI_ColorBlock_o local_140;
  UnityEngine_Color_Fields local_e8;
  UnityEngine_Color_Fields local_d8;
  UnityEngine_Color_Fields local_c8;
  UnityEngine_Color_Fields local_b8;
  UnityEngine_Color_Fields local_a8 [2];
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_Fields local_78;
  UnityEngine_Color_Fields local_68;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48;
  float local_38;
  float fStack_34;
  
  if (g_data_057ae147 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateItemButton_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateItemButton_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass52_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"ItemButton");
    il2cpp_runtime_helper_023445d0(&"Prefabs/Misc/SelectListButton");
    il2cpp_runtime_helper_023445d0(&"DeleteButton");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae147 = '\x01';
  }
  pUVar8 = (UI_SelectListPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass52_0);
  __this_02 = pUVar8;
  System_Object___ctor((Il2CppObject *)pUVar8,(MethodInfo *)0x0);
  if (pUVar8 != (UI_SelectListPopup_o *)0x0) {
    (pUVar8->fields).m_CachedPtr = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&pUVar8->fields,__this);
    ppSVar14 = &(pUVar8->fields).m_CancellationTokenSource;
    (pUVar8->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)item;
    il2cpp_runtime_helper_022b4080(ppSVar14,item);
    pUVar8 = (UI_SelectListPopup_o *)
             UI_ElementFactory__InstantiateAndBind
                       ((__this->fields).SinglePanel,"Prefabs/Misc/SelectListButton",(MethodInfo *)0x0);
    lVar6 = MethodInfo_Void_Add;
    __this_02 = (UI_SelectListPopup_o *)(__this->fields)._itemButtons;
    if (__this_02 != (UI_SelectListPopup_o *)0x0) {
      piVar1 = (int32_t *)((long)&(__this_02->fields).m_CancellationTokenSource + 4);
      *piVar1 = *piVar1 + 1;
      pSVar4 = (System_Object_array *)(__this_02->fields).m_CachedPtr;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar3 = *(uint *)&(__this_02->fields).m_CancellationTokenSource;
        if (uVar3 < (uint)pSVar4->max_length) {
          *(uint *)&(__this_02->fields).m_CancellationTokenSource = uVar3 + 1;
          __this_02 = (UI_SelectListPopup_o *)(pSVar4->m_Items + (int)uVar3);
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)pUVar8;
          il2cpp_runtime_helper_022b4080();
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pUVar8,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        if (((pUVar8 != (UI_SelectListPopup_o *)0x0) &&
            (__this_02 = pUVar8,
            pUVar9 = (UI_SelectListPopup_o *)
                     UnityEngine_GameObject__get_transform
                               ((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0),
            pUVar9 != (UI_SelectListPopup_o *)0x0)) &&
           (pUVar10 = UnityEngine_Transform__Find
                                ((UnityEngine_Transform_o *)pUVar9,"ItemButton",(MethodInfo *)0x0),
           __this_02 = pUVar9, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
          pUVar9 = (UI_SelectListPopup_o *)
                   UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar10,MethodInfo_Button_GetComponent_Button);
          pUVar11 = (UI_SelectListPopup_o *)
                    UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pUVar8,(MethodInfo *)0x0);
          __this_02 = pUVar8;
          if (((pUVar11 != (UI_SelectListPopup_o *)0x0) &&
              (pUVar8 = (UI_SelectListPopup_o *)
                        UnityEngine_Transform__Find
                                  ((UnityEngine_Transform_o *)pUVar11,"DeleteButton",(MethodInfo *)0x0),
              __this_02 = pUVar11, pUVar8 != (UI_SelectListPopup_o *)0x0)) &&
             (pUVar11 = (UI_SelectListPopup_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar8,MethodInfo_Button_GetComponent_Button), __this_02 = pUVar8,
             pUVar9 != (UI_SelectListPopup_o *)0x0)) {
            pUVar5 = *(UnityEngine_Events_UnityEvent_o **)&(pUVar9->fields)._isSave;
            pUVar8 = (UI_SelectListPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            __this_02 = pUVar8;
            UnityEngine_Events_UnityAction___ctor();
            if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener
                        (pUVar5,(UnityEngine_Events_UnityAction_o *)pUVar8,(MethodInfo *)0x0);
              __this_02 = pUVar9;
              pUVar8 = (UI_SelectListPopup_o *)
                       UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
              if (((pUVar8 != (UI_SelectListPopup_o *)0x0) &&
                  (__this_00 = (UI_SelectListPopup_o *)
                               UnityEngine_Transform__Find
                                         ((UnityEngine_Transform_o *)pUVar8,"Text",(MethodInfo *)0x0),
                  __this_02 = pUVar8, __this_00 != (UI_SelectListPopup_o *)0x0)) &&
                 (pIVar12 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)__this_00,MethodInfo_Text_GetComponent_Text),
                 __this_02 = __this_00, pIVar12 != (Il2CppObject *)0x0)) {
                (*pIVar12->klass->vtable[0x4b].methodPtr)
                          (pIVar12,*ppSVar14,pIVar12->klass->vtable[0x4b].method);
                __this_02 = pUVar9;
                pUVar8 = (UI_SelectListPopup_o *)
                         UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                if ((pUVar8 != (UI_SelectListPopup_o *)0x0) &&
                   (pUVar10 = UnityEngine_Transform__Find
                                        ((UnityEngine_Transform_o *)pUVar8,"Text",(MethodInfo *)0x0),
                   __this_02 = pUVar8, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                  __this_01 = (UnityEngine_UI_Text_o *)
                              UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
                  __this_02 = __this;
                  value_01 = (*(__this->klass->vtable)._60_get_ItemFontSize.methodPtr)();
                  if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
                    UnityEngine_UI_Text__set_fontSize(__this_01,value_01,(MethodInfo *)0x0);
                    pSVar13 = (System_String_o *)
                              (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    UI_UIManager__GetThemeColorBlock
                              (&local_140,pSVar13,"ItemButton","","DefaultPanel",(MethodInfo *)0x0);
                    local_38 = local_140.fields.m_ColorMultiplier;
                    fStack_34 = local_140.fields.m_FadeDuration;
                    local_48.r = local_140.fields.m_DisabledColor.fields.r;
                    local_48.g = local_140.fields.m_DisabledColor.fields.g;
                    local_48.b = local_140.fields.m_DisabledColor.fields.b;
                    local_48.a = local_140.fields.m_DisabledColor.fields.a;
                    local_58.r = local_140.fields.m_SelectedColor.fields.r;
                    local_58.g = local_140.fields.m_SelectedColor.fields.g;
                    local_58.b = local_140.fields.m_SelectedColor.fields.b;
                    local_58.a = local_140.fields.m_SelectedColor.fields.a;
                    local_68.r = local_140.fields.m_PressedColor.fields.r;
                    local_68.g = local_140.fields.m_PressedColor.fields.g;
                    local_68.b = local_140.fields.m_PressedColor.fields.b;
                    local_68.a = local_140.fields.m_PressedColor.fields.a;
                    local_78.r = local_140.fields.m_HighlightedColor.fields.r;
                    local_78.g = local_140.fields.m_HighlightedColor.fields.g;
                    local_78.b = local_140.fields.m_HighlightedColor.fields.b;
                    local_78.a = local_140.fields.m_HighlightedColor.fields.a;
                    local_88.r = local_140.fields.m_NormalColor.fields.r;
                    local_88.g = local_140.fields.m_NormalColor.fields.g;
                    local_88.b = local_140.fields.m_NormalColor.fields.b;
                    local_88.a = local_140.fields.m_NormalColor.fields.a;
                    value.fields.m_NormalColor.fields.b = local_140.fields.m_NormalColor.fields.b;
                    value.fields.m_NormalColor.fields.a = local_140.fields.m_NormalColor.fields.a;
                    value.fields.m_NormalColor.fields.r = local_140.fields.m_NormalColor.fields.r;
                    value.fields.m_NormalColor.fields.g = local_140.fields.m_NormalColor.fields.g;
                    value.fields.m_HighlightedColor.fields.r = local_140.fields.m_HighlightedColor.fields.r;
                    value.fields.m_HighlightedColor.fields.g = local_140.fields.m_HighlightedColor.fields.g;
                    value.fields.m_HighlightedColor.fields.b = local_140.fields.m_HighlightedColor.fields.b;
                    value.fields.m_HighlightedColor.fields.a = local_140.fields.m_HighlightedColor.fields.a;
                    value.fields.m_PressedColor.fields.r = local_140.fields.m_PressedColor.fields.r;
                    value.fields.m_PressedColor.fields.g = local_140.fields.m_PressedColor.fields.g;
                    value.fields.m_PressedColor.fields.b = local_140.fields.m_PressedColor.fields.b;
                    value.fields.m_PressedColor.fields.a = local_140.fields.m_PressedColor.fields.a;
                    value.fields.m_SelectedColor.fields.r = local_140.fields.m_SelectedColor.fields.r;
                    value.fields.m_SelectedColor.fields.g = local_140.fields.m_SelectedColor.fields.g;
                    value.fields.m_SelectedColor.fields.b = local_140.fields.m_SelectedColor.fields.b;
                    value.fields.m_SelectedColor.fields.a = local_140.fields.m_SelectedColor.fields.a;
                    value.fields.m_DisabledColor.fields.r = local_140.fields.m_DisabledColor.fields.r;
                    value.fields.m_DisabledColor.fields.g = local_140.fields.m_DisabledColor.fields.g;
                    value.fields.m_DisabledColor.fields.b = local_140.fields.m_DisabledColor.fields.b;
                    value.fields.m_DisabledColor.fields.a = local_140.fields.m_DisabledColor.fields.a;
                    value.fields.m_ColorMultiplier = local_140.fields.m_ColorMultiplier;
                    value.fields.m_FadeDuration = local_140.fields.m_FadeDuration;
                    UnityEngine_UI_Selectable__set_colors
                              ((UnityEngine_UI_Selectable_o *)pUVar9,value,(MethodInfo *)0x0);
                    __this_02 = pUVar9;
                    pUVar8 = (UI_SelectListPopup_o *)
                             UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                    if ((pUVar8 != (UI_SelectListPopup_o *)0x0) &&
                       (pUVar10 = UnityEngine_Transform__Find
                                            ((UnityEngine_Transform_o *)pUVar8,"Text",(MethodInfo *)0x0)
                       , __this_02 = pUVar8, pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                      pIVar12 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
                      __this_02 = (UI_SelectListPopup_o *)
                                  (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                            (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                      UVar17 = UI_UIManager__GetThemeColor
                                         ((System_String_o *)__this_02,"ItemButton","TextColor","DefaultPanel",
                                          (MethodInfo *)0x0);
                      if (pIVar12 != (Il2CppObject *)0x0) {
                        (*pIVar12->klass->vtable[0x17].methodPtr)
                                  (UVar17.fields.r,UVar17.fields.b,pIVar12,pIVar12->klass->vtable[0x17].method
                                  );
                        cVar2 = *(char *)((long)&(__this->fields)._isSave + 1);
                        pIVar12 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar9,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                        __this_02 = __this;
                        fVar15 = (float)(*(__this->klass->vtable)._59_get_ItemButtonWidth.methodPtr)();
                        if (cVar2 == '\0') {
                          __this_02 = __this;
                          fVar16 = (float)(*(__this->klass->vtable)._61_get_DeleteButtonSize.methodPtr)();
                          if (pIVar12 == (Il2CppObject *)0x0) goto label_04354497;
                          (*pIVar12->klass->vtable[0x24].methodPtr)(fVar15 + fVar16 + 10.0,pIVar12);
                          cVar2 = *(char *)((long)&(__this->fields)._isSave + 1);
                        }
                        else {
                          if (pIVar12 == (Il2CppObject *)0x0) goto label_04354497;
                          (*pIVar12->klass->vtable[0x24].methodPtr)(pIVar12);
                          cVar2 = *(char *)((long)&(__this->fields)._isSave + 1);
                        }
                        if ((cVar2 == '\0') ||
                           ((__this_02 = (UI_SelectListPopup_o *)(__this->fields)._disallowedDelete,
                            __this_02 != (UI_SelectListPopup_o *)0x0 &&
                            (bVar7 = System_Collections_Generic_List_object___Contains
                                               ((System_Collections_Generic_List_object__o *)__this_02,
                                                (Il2CppObject *)*ppSVar14,MethodInfo_Boolean_Contains), (char)bVar7 != '\0'))
                           )) {
                          __this_02 = pUVar11;
                          if ((pUVar11 != (UI_SelectListPopup_o *)0x0) &&
                             (__this_03 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                             __this_02 = pUVar11, __this_03 != (UnityEngine_GameObject_o *)0x0)) {
                            UnityEngine_GameObject__SetActive(__this_03,0,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        else if (pUVar11 != (UI_SelectListPopup_o *)0x0) {
                          pUVar5 = *(UnityEngine_Events_UnityEvent_o **)&(pUVar11->fields)._isSave;
                          pUVar8 = (UI_SelectListPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                          __this_02 = pUVar8;
                          UnityEngine_Events_UnityAction___ctor();
                          if (pUVar5 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                            UnityEngine_Events_UnityEvent__AddListener
                                      (pUVar5,(UnityEngine_Events_UnityAction_o *)pUVar8,(MethodInfo *)0x0);
                            pIVar12 = UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pUVar11,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                            __this_02 = __this;
                            (*(__this->klass->vtable)._61_get_DeleteButtonSize.methodPtr)();
                            if (pIVar12 != (Il2CppObject *)0x0) {
                              (*pIVar12->klass->vtable[0x24].methodPtr)
                                        (pIVar12,pIVar12->klass->vtable[0x24].method);
                              pIVar12 = UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)pUVar11,MethodInfo_LayoutElement_GetComponent_LayoutElement);
                              __this_02 = __this;
                              (*(__this->klass->vtable)._61_get_DeleteButtonSize.methodPtr)();
                              if (pIVar12 != (Il2CppObject *)0x0) {
                                (*pIVar12->klass->vtable[0x26].methodPtr)
                                          (pIVar12,pIVar12->klass->vtable[0x26].method);
                                pSVar13 = (System_String_o *)
                                          (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                                    (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                UI_UIManager__GetThemeColorBlock
                                          (&local_140,pSVar13,"DeleteButton","","DefaultPanel",
                                           (MethodInfo *)0x0);
                                local_a8[1].r = local_140.fields.m_ColorMultiplier;
                                local_a8[1].g = local_140.fields.m_FadeDuration;
                                local_a8[0].r = local_140.fields.m_DisabledColor.fields.r;
                                local_a8[0].g = local_140.fields.m_DisabledColor.fields.g;
                                local_a8[0].b = local_140.fields.m_DisabledColor.fields.b;
                                local_a8[0].a = local_140.fields.m_DisabledColor.fields.a;
                                local_b8.r = local_140.fields.m_SelectedColor.fields.r;
                                local_b8.g = local_140.fields.m_SelectedColor.fields.g;
                                local_b8.b = local_140.fields.m_SelectedColor.fields.b;
                                local_b8.a = local_140.fields.m_SelectedColor.fields.a;
                                local_c8.r = local_140.fields.m_PressedColor.fields.r;
                                local_c8.g = local_140.fields.m_PressedColor.fields.g;
                                local_c8.b = local_140.fields.m_PressedColor.fields.b;
                                local_c8.a = local_140.fields.m_PressedColor.fields.a;
                                local_d8.r = local_140.fields.m_HighlightedColor.fields.r;
                                local_d8.g = local_140.fields.m_HighlightedColor.fields.g;
                                local_d8.b = local_140.fields.m_HighlightedColor.fields.b;
                                local_d8.a = local_140.fields.m_HighlightedColor.fields.a;
                                local_e8.r = local_140.fields.m_NormalColor.fields.r;
                                local_e8.g = local_140.fields.m_NormalColor.fields.g;
                                local_e8.b = local_140.fields.m_NormalColor.fields.b;
                                local_e8.a = local_140.fields.m_NormalColor.fields.a;
                                value_00.fields.m_NormalColor.fields.b =
                                     local_140.fields.m_NormalColor.fields.b;
                                value_00.fields.m_NormalColor.fields.a =
                                     local_140.fields.m_NormalColor.fields.a;
                                value_00.fields.m_NormalColor.fields.r =
                                     local_140.fields.m_NormalColor.fields.r;
                                value_00.fields.m_NormalColor.fields.g =
                                     local_140.fields.m_NormalColor.fields.g;
                                value_00.fields.m_HighlightedColor.fields.r =
                                     local_140.fields.m_HighlightedColor.fields.r;
                                value_00.fields.m_HighlightedColor.fields.g =
                                     local_140.fields.m_HighlightedColor.fields.g;
                                value_00.fields.m_HighlightedColor.fields.b =
                                     local_140.fields.m_HighlightedColor.fields.b;
                                value_00.fields.m_HighlightedColor.fields.a =
                                     local_140.fields.m_HighlightedColor.fields.a;
                                value_00.fields.m_PressedColor.fields.r =
                                     local_140.fields.m_PressedColor.fields.r;
                                value_00.fields.m_PressedColor.fields.g =
                                     local_140.fields.m_PressedColor.fields.g;
                                value_00.fields.m_PressedColor.fields.b =
                                     local_140.fields.m_PressedColor.fields.b;
                                value_00.fields.m_PressedColor.fields.a =
                                     local_140.fields.m_PressedColor.fields.a;
                                value_00.fields.m_SelectedColor.fields.r =
                                     local_140.fields.m_SelectedColor.fields.r;
                                value_00.fields.m_SelectedColor.fields.g =
                                     local_140.fields.m_SelectedColor.fields.g;
                                value_00.fields.m_SelectedColor.fields.b =
                                     local_140.fields.m_SelectedColor.fields.b;
                                value_00.fields.m_SelectedColor.fields.a =
                                     local_140.fields.m_SelectedColor.fields.a;
                                value_00.fields.m_DisabledColor.fields.r =
                                     local_140.fields.m_DisabledColor.fields.r;
                                value_00.fields.m_DisabledColor.fields.g =
                                     local_140.fields.m_DisabledColor.fields.g;
                                value_00.fields.m_DisabledColor.fields.b =
                                     local_140.fields.m_DisabledColor.fields.b;
                                value_00.fields.m_DisabledColor.fields.a =
                                     local_140.fields.m_DisabledColor.fields.a;
                                value_00.fields.m_ColorMultiplier = local_140.fields.m_ColorMultiplier;
                                value_00.fields.m_FadeDuration = local_140.fields.m_FadeDuration;
                                UnityEngine_UI_Selectable__set_colors
                                          ((UnityEngine_UI_Selectable_o *)pUVar11,value_00,(MethodInfo *)0x0);
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
          }
        }
      }
    }
  }
label_04354497:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$ClearListButtons
// il2cpp: void UI_SelectListPopup__ClearListButtons (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4353ae0

void UI_SelectListPopup__ClearListButtons(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar9;
  
  if (g_data_057ae148 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae148 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._itemButtons;
  if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_04353c0e;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
             (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  while (__this_00.fields._8_8_ = pIVar8, __this_00.fields._list = pSVar7,
        __this_00.fields._current = (Il2CppObject *)obj,
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar4 != '\0') {
    pUVar9 = obj;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    obj = pUVar9;
  }
  __this_01.fields._8_8_ = pIVar8;
  __this_01.fields._list = pSVar7;
  __this_01.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  do {
    pSVar2 = (__this->fields)._itemButtons;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
label_04353c0e:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) goto label_04353c54;
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = pSVar7;
    __this_02.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  } while (lVar3 == 0);
  il2cpp_runtime_helper_022fefe0(lVar3);
label_04353c54:
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._list = pSVar7;
  __this_03.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.SelectListPopup$$GetActiveCategoryItems
// il2cpp: System_Collections_Generic_List_string__o* UI_SelectListPopup__GetActiveCategoryItems (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4352490

System_Collections_Generic_List_string__o *
UI_SelectListPopup__GetActiveCategoryItems(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *source;
  System_Collections_Generic_List_object__o *pSVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  UI_ConfirmPopup_o *__this_00;
  size_t sVar3;
  System_Collections_Generic_List_object__c *pSVar4;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UI_InputField_o *__this_01;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  undefined8 uVar6;
  bool_conflict bVar7;
  Il2CppRGCTXData *pIVar8;
  Il2CppObject *pIVar9;
  Il2CppRGCTXData *__this_09;
  System_Collections_Generic_List_string__o *pSVar10;
  System_Collections_Generic_List_string__o *extraout_RAX;
  System_Collections_Generic_List_string__o *extraout_RAX_00;
  Il2CppClass *x;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_UI_LayoutGroup_o *__this_10;
  undefined4 extraout_var;
  System_Collections_Generic_List_string__o *extraout_RAX_01;
  System_Collections_Generic_List_string__o *extraout_RAX_02;
  System_String_o *title;
  System_Collections_Generic_List_string__o *extraout_RAX_03;
  long *plVar12;
  void *pvVar13;
  undefined8 extraout_RDX;
  UnityEngine_Events_UnityAction_o *a;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Collections_Generic_List_string__o **ppSVar14;
  undefined8 *puVar15;
  int32_t value;
  Il2CppRGCTXData *value_00;
  MethodInfo *pMVar16;
  MethodInfo *method_03;
  Il2CppClass *pIVar17;
  Il2CppRGCTXData *__this_11;
  UnityEngine_Events_UnityAction_o *in_R8;
  void *in_R9;
  ulong uVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar21;
  Il2CppType *pIVar22;
  UnityEngine_GameObject_o *__this_12;
  undefined1 auStack_d8 [16];
  UnityEngine_GameObject_o *pUStack_c8;
  Il2CppRGCTXData *pIStack_c0;
  ulong uStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  Il2CppRGCTXData *pIStack_98;
  UnityEngine_Events_UnityAction_o *pUStack_90;
  Il2CppRGCTXData *pIStack_80;
  undefined8 uStack_78;
  Il2CppRGCTXData *pIStack_70;
  Il2CppRGCTXData *pIStack_68;
  
  if (g_data_057ae149 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_SelectListPopup_ItemCategory_FirstOrDefault_SelectListPo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_ItemCategory_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SelectListPopup_ItemCategory_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetActiveCategoryItems_b__54_0);
    g_data_057ae149 = '\x01';
  }
  if ((((char)(__this->fields)._useCategories == '\0') ||
      (source = (__this->fields)._categorizedItems,
      source == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) ||
     ((source->fields)._size == 0)) {
    ppSVar14 = &(__this->fields)._items;
    goto label_043525a1;
  }
  pIVar8 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_ItemCategory_bool);
  pvVar13 = (void *)0x0;
  System_Func_object__bool____ctor();
  pIVar9 = System_Linq_Enumerable__FirstOrDefault_object__2512400
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)pIVar8,MethodInfo_SelectListPopup_ItemCategory_FirstOrDefault_SelectListPo);
  if (pIVar9 != (Il2CppObject *)0x0) {
label_04352577:
    (__this->fields)._activeCategoryName = (System_String_o *)pIVar9[1].klass;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._activeCategoryName);
    ppSVar14 = &pIVar9[1].monitor;
label_043525a1:
    return *ppSVar14;
  }
  pIVar17 = (Il2CppClass *)(__this->fields)._categorizedItems;
  if (pIVar17 != (Il2CppClass *)0x0) {
    pIVar8 = (Il2CppRGCTXData *)0x0;
    pIVar9 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pIVar17,0,MethodInfo_SelectListPopup_ItemCategory_get_Item);
    if (pIVar9 != (Il2CppObject *)0x0) goto label_04352577;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae14e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnItemClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass60_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Overwrite this item?");
    il2cpp_runtime_helper_023445d0(&"Cannot overwrite this item.");
    g_data_057ae14e = '\x01';
  }
  __this_09 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass60_0);
  value_00 = (Il2CppRGCTXData *)0x0;
  __this_11 = __this_09;
  System_Object___ctor((Il2CppObject *)__this_09,(MethodInfo *)0x0);
  if (__this_09 != (Il2CppRGCTXData *)0x0) {
    __this_09[2].klass = pIVar17;
    il2cpp_runtime_helper_022b4080(__this_09 + 2,pIVar17);
    __this = (UI_SelectListPopup_o *)(__this_09 + 3);
    __this_09[3].method = (MethodInfo *)pIVar8;
    il2cpp_runtime_helper_022b4080(__this);
    if ((char)(pIVar17->_2).element_size == '\0') {
      __this_11 = (Il2CppRGCTXData *)pIVar17->vtable[0].methodPtr;
      value_00 = pIVar8;
      if (__this_11 != (Il2CppRGCTXData *)0x0) {
        value_00 = *(Il2CppRGCTXData **)__this;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_11,(Il2CppObject *)value_00,MethodInfo_Void_set_Value);
        sVar3 = (pIVar17->_2).cctor_thread;
        if (sVar3 != 0) {
          (**(code **)(sVar3 + 0x18))(*(undefined8 *)(sVar3 + 0x40),*(undefined8 *)(sVar3 + 0x28));
          pSVar4 = (pIVar17->_1).image;
          vtableDispatch = (pSVar4->vtable)._22_Clear.methodPtr;
          pSVar10 = (System_Collections_Generic_List_string__o *)
                    (*vtableDispatch)
                              (pIVar17,(pSVar4->vtable)._22_Clear.method,extraout_RDX,vtableDispatch);
          return pSVar10;
        }
      }
    }
    else {
      pSVar2 = *(System_Collections_Generic_List_object__o **)&(pIVar17->_2).thread_static_fields_offset;
      if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
        pIVar8 = *(Il2CppRGCTXData **)__this;
        bVar7 = System_Collections_Generic_List_object___Contains(pSVar2,(Il2CppObject *)pIVar8,MethodInfo_Boolean_Contains);
        if ((char)bVar7 != '\0') {
          if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar6 = "Cannot overwrite this item.";
          __this = (UI_SelectListPopup_o *)&TypeInfo_UIManager;
          value_00 = pIVar8;
          __this_11 = TypeInfo_UIManager;
          if (((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) &&
             (__this = (TypeInfo_UIManager[0x17].method)->return_type[3].data,
             (Il2CppRGCTXData *)__this != (Il2CppRGCTXData *)0x0)) {
            UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)pIVar8);
            value_00 = pIVar8;
            __this_11 = (Il2CppRGCTXData *)0x0;
            if (((Il2CppRGCTXData *)((long)__this + 0xb0))->method != (MethodInfo *)0x0) {
              value_00 = (Il2CppRGCTXData *)0x1;
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)((Il2CppRGCTXData *)((long)__this + 0xb0))->method,1,
                         (MethodInfo *)0x0);
              pMVar16 = ((Il2CppRGCTXData *)((long)__this + 0xa8))->method;
              __this_11 = (Il2CppRGCTXData *)0x0;
              if (pMVar16 != (MethodInfo *)0x0) {
                UNRECOVERED_JUMPTABLE_00 = *(code **)(pMVar16->methodPointer + 0x5e8);
                pSVar10 = (System_Collections_Generic_List_string__o *)
                          (*UNRECOVERED_JUMPTABLE_00)
                                    (pMVar16,uVar6,*(undefined8 *)(pMVar16->methodPointer + 0x5f0),
                                     UNRECOVERED_JUMPTABLE_00);
                return pSVar10;
              }
            }
          }
          goto label_04352828;
        }
      }
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (UI_SelectListPopup_o *)&TypeInfo_UIManager;
      value_00 = pIVar8;
      __this_11 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        __this_00 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        __this = (UI_SelectListPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pvVar13 = (void *)0x0;
        value_00 = __this_09;
        __this_11 = (Il2CppRGCTXData *)__this;
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (__this_00,"Overwrite this item?",(UnityEngine_Events_UnityAction_o *)__this,(System_String_o *)0x0,
                     (MethodInfo *)in_R8);
          return extraout_RAX;
        }
      }
    }
  }
label_04352828:
  auVar20 = il2cpp_runtime_helper_022b2c90();
  a = auVar20._8_8_;
  uStack_78 = auVar20._0_8_;
  pIVar8 = value_00;
  pIStack_70 = (Il2CppRGCTXData *)__this;
  pIStack_68 = __this_09;
  if (g_data_057ae142 == '\0') {
    pIStack_80 = (Il2CppRGCTXData *)0x4352862;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pIStack_80 = (Il2CppRGCTXData *)0x435286e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae142 = '\x01';
  }
  pIStack_80 = (Il2CppRGCTXData *)0x435287d;
  UI_BasePopup__Show((UI_BasePopup_o *)__this_11,(MethodInfo *)pIVar8);
  __this_11[0x1c].method = (MethodInfo *)value_00;
  pIStack_80 = (Il2CppRGCTXData *)0x4352893;
  il2cpp_runtime_helper_022b4080(__this_11 + 0x1c,value_00);
  __this_11[0x23].rgctxDataDummy = (void *)0x0;
  pIStack_80 = (Il2CppRGCTXData *)0x43528ac;
  il2cpp_runtime_helper_022b4080(__this_11 + 0x23,0);
  *(undefined1 *)(__this_11 + 0x25) = 0;
  *(undefined1 *)(__this_11 + 0x20) = 0;
  __this_11[0x1d].rgctxDataDummy = pvVar13;
  pIStack_80 = (Il2CppRGCTXData *)0x43528d0;
  il2cpp_runtime_helper_022b4080(__this_11 + 0x1d,pvVar13);
  *(bool *)((long)__this_11 + 0x101) = in_R8 != (UnityEngine_Events_UnityAction_o *)0x0;
  __this_11[0x21].rgctxDataDummy = in_R9;
  pIStack_80 = (Il2CppRGCTXData *)0x43528f0;
  il2cpp_runtime_helper_022b4080(__this_11 + 0x21,in_R9);
  __this_11[0x1f].rgctxDataDummy = in_R8;
  pIStack_80 = (Il2CppRGCTXData *)0x4352906;
  il2cpp_runtime_helper_022b4080(__this_11 + 0x1f);
  pIVar8 = (Il2CppRGCTXData *)0x0;
  if (__this_11[0x27].method != (MethodInfo *)0x0) {
    pIStack_80 = (Il2CppRGCTXData *)0x435292f;
    in_R8 = "";
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_11[0x27].method,(Il2CppObject *)"",MethodInfo_Void_set_Value)
    ;
    pIVar8 = (Il2CppRGCTXData *)0x0;
    if (__this_11[0x1b].method != (MethodInfo *)0x0) {
      pIStack_80 = (Il2CppRGCTXData *)0x435294f;
      (**(code **)((__this_11[0x1b].method)->methodPointer + 0x198))();
      pMVar16 = (MethodInfo *)0x0;
      pIStack_80 = (Il2CppRGCTXData *)0x4352959;
      UI_SelectListPopup__SetCategoryTabsEnabled((UI_SelectListPopup_o *)__this_11,0,method_00);
      pIStack_80 = (Il2CppRGCTXData *)0x4352961;
      UI_SelectListPopup__ToggleSaveElements((UI_SelectListPopup_o *)__this_11,pMVar16);
      in_R8 = (UnityEngine_Events_UnityAction_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pIStack_80 = (Il2CppRGCTXData *)0x4352983;
      bVar7 = System_String__op_Inequality((System_String_o *)a,(System_String_o *)in_R8,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pIStack_80 = (Il2CppRGCTXData *)0x4352992;
        in_R8 = a;
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this_11,(System_String_o *)a,method_01);
      }
      pIStack_80 = (Il2CppRGCTXData *)0x435299a;
      pIVar8 = __this_11;
      UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)__this_11,(MethodInfo *)in_R8);
      if ((__this_11[0x1b].klass != (Il2CppClass *)0x0) &&
         (pIVar8 = *(Il2CppRGCTXData **)&((__this_11[0x1b].klass)->_1).this_arg.bits,
         pIVar8 != (Il2CppRGCTXData *)0x0)) {
        in_R8 = (UnityEngine_Events_UnityAction_o *)pIVar8->klass->vtable[0x26].method;
        pIStack_80 = (Il2CppRGCTXData *)0x43529bf;
        (*pIVar8->klass->vtable[0x26].methodPtr)();
        if (__this_11[0x1b].klass != (Il2CppClass *)0x0) {
          __this_01 = *(UnityEngine_UI_InputField_o **)&((__this_11[0x1b].klass)->_1).this_arg.bits;
          pIVar8 = (Il2CppRGCTXData *)0x0;
          if (__this_01 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ActivateInputField(__this_01,(MethodInfo *)0x0);
            return extraout_RAX_00;
          }
        }
      }
    }
  }
  pIStack_80 = (Il2CppRGCTXData *)0x43529ee;
  uStack_a0 = il2cpp_runtime_helper_022b2c90();
  uVar18 = (ulong)in_R8 & 0xffffffff;
  pIStack_98 = __this_11;
  pUStack_90 = a;
  pIStack_80 = value_00;
  if (g_data_057ae14b == '\0') {
    plStack_a8 = (long *)0x4352a12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    plStack_a8 = (long *)0x4352a1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plStack_a8 = (long *)0x4352a2a;
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae14b = '\x01';
  }
  pMVar16 = pIVar8[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    plStack_a8 = (long *)0x4352a4d;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_a8 = (long *)0x4352a59;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') goto label_04352b16;
  pIVar17 = (Il2CppClass *)0x0;
  if (pIVar8[0xe].method != (MethodInfo *)0x0) {
    plStack_a8 = (long *)0x4352a7f;
    x = (Il2CppClass *)
        UnityEngine_Transform__Find
                  ((UnityEngine_Transform_o *)pIVar8[0xe].method,"Label",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_a8 = (long *)0x4352a93;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_a8 = (long *)0x4352a9f;
    pIVar17 = x;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
label_04352ad2:
      if (*(char *)(pIVar8 + 0x19) == '\0') {
label_04352b16:
        pMVar16 = pIVar8[0x18].method;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          plStack_a8 = (long *)0x4352b2e;
          il2cpp_runtime_helper_02337ed0();
        }
        method_03 = (MethodInfo *)0x0;
        plStack_a8 = (long *)0x4352b3a;
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pMVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pSVar10 = (System_Collections_Generic_List_string__o *)CONCAT44(extraout_var,bVar7);
        if ((char)bVar7 == '\0') {
label_04352b55:
          if ((char)uVar18 == '\0') {
            UI_SelectListPopup__ClearCategoryTabs((UI_SelectListPopup_o *)pIVar8,method_03);
            return extraout_RAX_02;
          }
          return pSVar10;
        }
        pIVar17 = (Il2CppClass *)0x0;
        if (pIVar8[0x18].method != (MethodInfo *)0x0) {
          method_03 = (MethodInfo *)((ulong)in_R8 & 0xff);
          plStack_a8 = (long *)0x4352b55;
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pIVar8[0x18].method,(bool_conflict)method_03,
                     (MethodInfo *)0x0);
          pSVar10 = extraout_RAX_01;
          goto label_04352b55;
        }
      }
      else {
        pIVar17 = pIVar8[0xe].klass;
        if (pIVar17 != (Il2CppClass *)0x0) {
          plStack_a8 = (long *)0x4352af7;
          __this_10 = (UnityEngine_UI_LayoutGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pIVar17,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
          value = 4;
          if ((char)uVar18 == '\0') {
            value = *(int32_t *)((long)pIVar8 + 0xcc);
          }
          if (__this_10 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
            plStack_a8 = (long *)0x4352b16;
            UnityEngine_UI_LayoutGroup__set_childAlignment(__this_10,value,(MethodInfo *)0x0);
            goto label_04352b16;
          }
        }
      }
    }
    else if (x != (Il2CppClass *)0x0) {
      plStack_a8 = (long *)0x4352ab6;
      pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pIVar17 = x;
      if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
        plStack_a8 = (long *)0x4352ad2;
        UnityEngine_GameObject__SetActive(pUVar11,((uint)in_R8 ^ 1) & 0xff,(MethodInfo *)0x0);
        goto label_04352ad2;
      }
    }
  }
  plStack_a8 = (long *)0x4352b7c;
  il2cpp_runtime_helper_022b2c90();
  plStack_a8 = &TypeInfo_Object;
  pIStack_c0 = pIVar8;
  uStack_b0 = uVar18;
  if (g_data_057ae145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae145 = '\x01';
  }
  pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar22 = (Il2CppType *)0x0;
  pUVar11 = (UnityEngine_GameObject_o *)0x0;
  pSVar2 = (pIVar17->_2).unity_user_data;
  if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
label_04352d73:
    auVar19 = il2cpp_runtime_helper_022b2c90();
    if (auVar19._8_4_ != 1) {
      __this_07.fields._8_8_ = pIVar22;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_07.fields._current = (Il2CppObject *)pUVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
label_04352e59:
      _Unwind_Resume(auVar19._0_8_);
    }
    plVar12 = (long *)__cxa_begin_catch(auVar19._0_8_);
    lVar5 = *plVar12;
    __cxa_end_catch();
    __this_06.fields._8_8_ = pIVar22;
    __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
    __this_06.fields._current = (Il2CppObject *)pUVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      __this_08.fields._8_8_ = pIVar22;
      __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_08.fields._current = (Il2CppObject *)pUVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
      goto label_04352e59;
    }
  }
  else {
    if ((char)(pIVar17->_2).element_size != '\0') {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d8,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d8._0_8_;
      pIVar22 = (Il2CppType *)auStack_d8._8_8_;
      pUVar11 = pUStack_c8;
label_04352c60:
      __this_02.fields._8_8_ = pIVar22;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_02.fields._current = (Il2CppObject *)pUVar11;
      bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff08);
      if ((char)bVar7 != '\0') {
        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) goto code_r0x04352c7d;
        il2cpp_runtime_helper_022b2c90();
label_04352d6e:
        il2cpp_runtime_helper_022b2c90();
        goto label_04352d73;
      }
      __this_03.fields._8_8_ = pIVar22;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
      __this_03.fields._current = (Il2CppObject *)pUVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
      puVar15 = &"Save";
      iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
      goto joined_r0x04352cb5;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_d8,pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar21 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_d8._0_8_;
    pIVar22 = (Il2CppType *)auStack_d8._8_8_;
    __this_12 = pUStack_c8;
    while (__this_04.fields._8_8_ = pIVar22,
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar21,
          __this_04.fields._current = (Il2CppObject *)__this_12,
          bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff08), (char)bVar7 != '\0') {
      pUVar11 = (UnityEngine_GameObject_o *)0x0;
      if (__this_12 == (UnityEngine_GameObject_o *)0x0) goto label_04352d6e;
      UnityEngine_GameObject__SetActive(__this_12,0,(MethodInfo *)0x0);
    }
    __this_05.fields._8_8_ = pIVar22;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar21;
    __this_05.fields._current = (Il2CppObject *)__this_12;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff08);
  }
  puVar15 = &"Load";
  iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
joined_r0x04352cb5:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  title = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar15,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pIVar17,title,method_02);
  return extraout_RAX_03;
code_r0x04352c7d:
  UnityEngine_GameObject__SetActive(pUVar11,1,(MethodInfo *)0x0);
  goto label_04352c60;
}


// UI.SelectListPopup$$SetupCategoryTabs
// il2cpp: void UI_SelectListPopup__SetupCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4353390

void UI_SelectListPopup__SetupCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_SelectListPopup_ItemCategory__o *pSVar3;
  Il2CppClass *title;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *pIVar7;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_05;
  Il2CppObject *__this_06;
  UnityEngine_Transform_o *parent;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *pUVar8;
  long *plVar9;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  Il2CppObject *pIVar14;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (g_data_057ae14a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_SelectListPopup_ItemCategory);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SelectListPopup_ItemCategory_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_ItemCategory_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_SelectListPopup_ItemCategory_GetE);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_SelectListPopup_ItemCategory_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_SetupCategoryTabs_b__55_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetupCategoryTabs_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass55_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae14a = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  pIVar14 = (Il2CppObject *)0x0;
  x = (UnityEngine_Object_o *)(__this->fields)._categoryButtonContainer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar10 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  UI_SelectListPopup__ClearCategoryTabs(__this,pMVar10);
  if ((((char)(__this->fields)._useCategories == '\0') ||
      (pSVar3 = (__this->fields)._categorizedItems,
      pSVar3 == (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0)) ||
     ((pSVar3->fields)._size == 0)) {
    (__this->fields)._activeCategoryName = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    il2cpp_runtime_helper_022b4080(&(__this->fields)._activeCategoryName);
    UI_SelectListPopup__SetCategoryTabsEnabled(__this,0,method_00);
    return;
  }
  bVar6 = System_String__op_Equality
                    ((__this->fields)._activeCategoryName,
                     (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pSVar3 = (__this->fields)._categorizedItems;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_ItemCategory_bool);
    System_Func_object__bool____ctor();
    bVar6 = System_Linq_Enumerable__Any_object__2504f10
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,predicate,MethodInfo_Boolean_Any_SelectListPopup_ItemCategory);
    if ((char)bVar6 == '\0') goto label_04353554;
label_04353593:
    themePanel = (System_String_o *)
                 (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                           (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_05 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_05,0x14,120.0,20.0,themePanel,(MethodInfo *)0x0);
    pSVar3 = (__this->fields)._categorizedItems;
    if (pSVar3 != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_List_object__o *)pSVar3,MethodInfo_List_1_T_Enumerator_UI_SelectListPopup_ItemCategory_GetE);
      pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
      pIVar13 = (Il2CppType *)local_48._8_8_;
      pIVar7 = local_38;
      while (__this_01.fields._8_8_ = pIVar13,
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
            __this_01.fields._current = pIVar7,
            bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar6 != '\0')
      {
        pIVar14 = pIVar7;
        __this_06 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass55_0);
        System_Object___ctor(__this_06,(MethodInfo *)0x0);
        if (__this_06 == (Il2CppObject *)0x0) {
          il2cpp_runtime_helper_022b2c90();
label_043537e4:
          il2cpp_runtime_helper_022b2c90();
label_043537e9:
          il2cpp_runtime_helper_022b2c90();
label_043537ee:
          il2cpp_runtime_helper_022b2c90();
label_043537f3:
          il2cpp_runtime_helper_022b2c90();
          goto label_043537f8;
        }
        __this_06[1].monitor = __this;
        il2cpp_runtime_helper_022b4080(&__this_06[1].monitor,__this);
        if (pIVar7 == (Il2CppObject *)0x0) goto label_043537e4;
        __this_06[1].klass = pIVar7[1].klass;
        il2cpp_runtime_helper_022b4080(__this_06 + 1);
        pUVar8 = (__this->fields)._categoryButtonContainer;
        if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_043537e9;
        parent = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
        title = __this_06[1].klass;
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        pUVar8 = UI_ElementFactory__CreateDefaultButton
                           (parent,__this_05,(System_String_o *)title,140.0,36.0,onClick,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        __this_00 = (__this->fields)._categoryButtons;
        if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043537ee;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (__this_00->fields)._items;
        if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto label_043537f3;
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2] = pUVar8;
          il2cpp_runtime_helper_022b4080(pUVar4->m_Items + (int)uVar2,pUVar8);
          pIVar7 = pIVar14;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar8,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          pIVar7 = pIVar14;
        }
      }
      __this_02.fields._8_8_ = pIVar13;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
      __this_02.fields._current = pIVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      pMVar10 = extraout_RDX;
      goto label_043537bb;
    }
  }
  else {
label_04353554:
    pSVar3 = (__this->fields)._categorizedItems;
    if ((pSVar3 != (System_Collections_Generic_List_SelectListPopup_ItemCategory__o *)0x0) &&
       (pIVar7 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,0,MethodInfo_SelectListPopup_ItemCategory_get_Item),
       pIVar7 != (Il2CppObject *)0x0)) {
      (__this->fields)._activeCategoryName = (System_String_o *)pIVar7[1].klass;
      il2cpp_runtime_helper_022b4080();
      goto label_04353593;
    }
  }
label_043537f8:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar5 = *plVar9;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar13;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_03.fields._current = pIVar14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    pMVar10 = extraout_RDX_00;
    if (lVar5 == 0) {
label_043537bb:
      method_01 = (MethodInfo *)0x1;
      UI_SelectListPopup__SetCategoryTabsEnabled(__this,1,pMVar10);
      UI_SelectListPopup__SyncCategoryTabs(__this,method_01);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_04.fields._8_8_ = pIVar13;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
  __this_04.fields._current = pIVar14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar11._0_8_);
}


// UI.SelectListPopup$$SetCategoryTabsEnabled
// il2cpp: void UI_SelectListPopup__SetCategoryTabsEnabled (UI_SelectListPopup_o* __this, bool enabled, const MethodInfo* method);
// 0x43529f0

void UI_SelectListPopup__SetCategoryTabsEnabled
               (UI_SelectListPopup_o *__this,bool_conflict enabled,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_string__Type__o *__this_00;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  bool_conflict bVar4;
  UI_HeadedPanel_o *x_00;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_UI_LayoutGroup_o *__this_08;
  System_String_o *title;
  long *plVar6;
  MethodInfo *method_00;
  undefined8 *puVar7;
  int32_t value;
  MethodInfo *method_01;
  UI_HeadedPanel_o *__this_09;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  UnityEngine_GameObject_o *__this_10;
  undefined1 auStack_60 [16];
  UnityEngine_GameObject_o *pUStack_50;
  Il2CppRGCTXData *pIStack_48;
  
  if (g_data_057ae14b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae14b = '\x01';
  }
  pUVar2 = (__this->fields).TopBar;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_04352b16:
    x = (UnityEngine_Object_o *)(__this->fields)._categoryButtonContainer;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_01 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
label_04352b55:
      if ((char)enabled == '\0') {
        UI_SelectListPopup__ClearCategoryTabs(__this,method_01);
        return;
      }
      return;
    }
    pUVar5 = (__this->fields)._categoryButtonContainer;
    __this_09 = (UI_HeadedPanel_o *)0x0;
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      method_01 = (MethodInfo *)((ulong)(uint)enabled & 0xff);
      UnityEngine_GameObject__SetActive(pUVar5,(bool_conflict)method_01,(MethodInfo *)0x0);
      goto label_04352b55;
    }
  }
  else {
    pUVar2 = (__this->fields).TopBar;
    __this_09 = (UI_HeadedPanel_o *)0x0;
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      x_00 = (UI_HeadedPanel_o *)UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_09 = x_00;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if ((x_00 == (UI_HeadedPanel_o *)0x0) ||
           (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0),
           __this_09 = x_00, pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto label_04352b77;
        UnityEngine_GameObject__SetActive(pUVar5,(enabled ^ 1U) & 0xff,(MethodInfo *)0x0);
      }
      if ((char)(__this->fields)._cachedTopBarAlignment == '\0') goto label_04352b16;
      __this_09 = (UI_HeadedPanel_o *)(__this->fields).TopBar;
      if (__this_09 != (UI_HeadedPanel_o *)0x0) {
        __this_08 = (UnityEngine_UI_LayoutGroup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_09,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
        value = 4;
        if ((char)enabled == '\0') {
          value = (__this->fields)._defaultTopBarAlignment;
        }
        if (__this_08 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
          UnityEngine_UI_LayoutGroup__set_childAlignment(__this_08,value,(MethodInfo *)0x0);
          goto label_04352b16;
        }
      }
    }
  }
label_04352b77:
  il2cpp_runtime_helper_022b2c90();
  pIStack_48 = (Il2CppRGCTXData *)__this;
  if (g_data_057ae145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae145 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pUVar5 = (UnityEngine_GameObject_o *)0x0;
  __this_00 = __this_09[1].fields._categoryPanelTypes;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
label_04352d73:
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
      __this_06.fields._8_8_ = pIVar10;
      __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
      __this_06.fields._current = (Il2CppObject *)pUVar5;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
label_04352e59:
      _Unwind_Resume(auVar8._0_8_);
    }
    plVar6 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar3 = *plVar6;
    __cxa_end_catch();
    __this_05.fields._8_8_ = pIVar10;
    __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_05.fields._current = (Il2CppObject *)pUVar5;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      __this_07.fields._8_8_ = pIVar10;
      __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
      __this_07.fields._current = (Il2CppObject *)pUVar5;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      goto label_04352e59;
    }
  }
  else {
    if (*(char *)&__this_09[2].klass != '\0') {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_60._0_8_;
      pIVar10 = (Il2CppType *)auStack_60._8_8_;
      pUVar5 = pUStack_50;
label_04352c60:
      __this_01.fields._8_8_ = pIVar10;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
      __this_01.fields._current = (Il2CppObject *)pUVar5;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80);
      if ((char)bVar4 != '\0') {
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) goto code_r0x04352c7d;
        il2cpp_runtime_helper_022b2c90();
label_04352d6e:
        il2cpp_runtime_helper_022b2c90();
        goto label_04352d73;
      }
      __this_02.fields._8_8_ = pIVar10;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
      __this_02.fields._current = (Il2CppObject *)pUVar5;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      puVar7 = &"Save";
      iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
      goto joined_r0x04352cb5;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_60._0_8_;
    pIVar10 = (Il2CppType *)auStack_60._8_8_;
    __this_10 = pUStack_50;
    while (__this_03.fields._8_8_ = pIVar10,
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar9,
          __this_03.fields._current = (Il2CppObject *)__this_10,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80), (char)bVar4 != '\0') {
      pUVar5 = (UnityEngine_GameObject_o *)0x0;
      if (__this_10 == (UnityEngine_GameObject_o *)0x0) goto label_04352d6e;
      UnityEngine_GameObject__SetActive(__this_10,0,(MethodInfo *)0x0);
    }
    __this_04.fields._8_8_ = pIVar10;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_04.fields._current = (Il2CppObject *)__this_10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  }
  puVar7 = &"Load";
  iVar1 = *(int *)(TypeInfo_UIManager + 0xe4);
joined_r0x04352cb5:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  title = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar7,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle(__this_09,title,method_00);
  return;
code_r0x04352c7d:
  UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
  goto label_04352c60;
}


// UI.SelectListPopup$$ClearCategoryTabs
// il2cpp: void UI_SelectListPopup__ClearCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x43544b0

void UI_SelectListPopup__ClearCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_GameObject__o *pSVar2;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  UnityEngine_Object_o *obj;
  UnityEngine_Object_o *pUVar9;
  
  if (g_data_057ae14c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae14c = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  obj = (UnityEngine_Object_o *)0x0;
  pSVar2 = (__this->fields)._categoryButtons;
  if (pSVar2 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_043545de;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
             (System_Collections_Generic_List_object__o *)pSVar2,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  while (__this_00.fields._8_8_ = pIVar8, __this_00.fields._list = pSVar7,
        __this_00.fields._current = (Il2CppObject *)obj,
        bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar4 != '\0') {
    pUVar9 = obj;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
    obj = pUVar9;
  }
  __this_01.fields._8_8_ = pIVar8;
  __this_01.fields._list = pSVar7;
  __this_01.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  do {
    pSVar2 = (__this->fields)._categoryButtons;
    if (pSVar2 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
label_043545de:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) goto label_04354624;
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar3 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = pSVar7;
    __this_02.fields._current = (Il2CppObject *)obj;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  } while (lVar3 == 0);
  il2cpp_runtime_helper_022fefe0(lVar3);
label_04354624:
  __this_03.fields._8_8_ = pIVar8;
  __this_03.fields._list = pSVar7;
  __this_03.fields._current = (Il2CppObject *)obj;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.SelectListPopup$$OnCategoryTabClick
// il2cpp: void UI_SelectListPopup__OnCategoryTabClick (UI_SelectListPopup_o* __this, System_String_o* categoryName, const MethodInfo* method);
// 0x4354930

void UI_SelectListPopup__OnCategoryTabClick
               (UI_SelectListPopup_o *__this,System_String_o *categoryName,MethodInfo *method)

{
  (__this->fields)._activeCategoryName = categoryName;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._activeCategoryName);
  UI_SelectListPopup__SyncCategoryTabs(__this,(MethodInfo *)categoryName);
  UI_SelectListPopup__RefreshList(__this,(MethodInfo *)categoryName);
  return;
}


// UI.SelectListPopup$$SyncCategoryTabs
// il2cpp: void UI_SelectListPopup__SyncCategoryTabs (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4354670

void UI_SelectListPopup__SyncCategoryTabs(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  UnityEngine_UI_Selectable_o *__this_05;
  UnityEngine_Transform_o *pUVar3;
  Il2CppObject *pIVar4;
  System_String_o *a;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_GameObject_o *__this_06;
  undefined1 local_48 [16];
  UnityEngine_GameObject_o *local_38;
  
  if (g_data_057ae14d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&"Text");
    g_data_057ae14d = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pUVar9 = (UnityEngine_GameObject_o *)0x0;
  __this_00 = (__this->fields)._categoryButtons;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar8 = (Il2CppType *)local_48._8_8_;
    __this_06 = local_38;
    while( true ) {
      __this_01.fields._8_8_ = pIVar8;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
      __this_01.fields._current = (Il2CppObject *)__this_06;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
        __this_02.fields._current = (Il2CppObject *)__this_06;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      pUVar9 = __this_06;
      if (__this_06 == (UnityEngine_GameObject_o *)0x0) break;
      __this_05 = (UnityEngine_UI_Selectable_o *)
                  UnityEngine_GameObject__GetComponent_object_(__this_06,MethodInfo_Button_GetComponent_Button);
      pUVar3 = UnityEngine_GameObject__get_transform(__this_06,(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_04354821;
      pUVar3 = UnityEngine_Transform__Find(pUVar3,"Text",(MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
label_04354817:
        il2cpp_runtime_helper_022b2c90();
        break;
      }
      pIVar4 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar3,MethodInfo_Text_GetComponent_Text);
      if (pIVar4 == (Il2CppObject *)0x0) goto label_04354826;
      a = (System_String_o *)
          (*pIVar4->klass->vtable[0x4a].methodPtr)(pIVar4,pIVar4->klass->vtable[0x4a].method);
      bVar2 = System_String__op_Equality(a,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
      if (__this_05 == (UnityEngine_UI_Selectable_o *)0x0) goto label_04354817;
      UnityEngine_UI_Selectable__set_interactable(__this_05,(uint)(byte)((byte)bVar2 ^ 1),(MethodInfo *)0x0);
      __this_06 = pUVar9;
    }
    il2cpp_runtime_helper_022b2c90();
label_04354821:
    il2cpp_runtime_helper_022b2c90();
label_04354826:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_03.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar8;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
  __this_04.fields._current = (Il2CppObject *)pUVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar6._0_8_);
}


// UI.SelectListPopup$$OnItemClick
// il2cpp: void UI_SelectListPopup__OnItemClick (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43525b0

void UI_SelectListPopup__OnItemClick(UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_string__o *__this_00;
  code *UNRECOVERED_JUMPTABLE_00;
  UI_ConfirmPopup_o *__this_01;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UI_InputField_o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  System_Collections_Generic_List_Enumerator_object__o __this_10;
  undefined8 uVar3;
  bool_conflict bVar4;
  Il2CppRGCTXData *pIVar5;
  Il2CppClass *x;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_UI_LayoutGroup_o *__this_11;
  System_String_o *title;
  long *plVar7;
  void *in_RCX;
  undefined8 extraout_RDX;
  UnityEngine_Events_UnityAction_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Il2CppRGCTXData **unaff_RBX;
  undefined8 *puVar9;
  int32_t value;
  Il2CppRGCTXData *value_00;
  Il2CppRGCTXData *method_03;
  MethodInfo *pMVar10;
  MethodInfo *method_04;
  Il2CppRGCTXData *__this_12;
  Il2CppClass *__this_13;
  UnityEngine_Events_UnityAction_o *in_R8;
  void *in_R9;
  ulong uVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  Il2CppType *pIVar15;
  UnityEngine_GameObject_o *__this_14;
  undefined1 auStack_c0 [16];
  UnityEngine_GameObject_o *pUStack_b0;
  Il2CppRGCTXData *pIStack_a8;
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  Il2CppRGCTXData *pIStack_80;
  UnityEngine_Events_UnityAction_o *pUStack_78;
  Il2CppRGCTXData *pIStack_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  Il2CppRGCTXData *pIStack_50;
  
  if (g_data_057ae14e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnItemClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass60_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Overwrite this item?");
    il2cpp_runtime_helper_023445d0(&"Cannot overwrite this item.");
    g_data_057ae14e = '\x01';
  }
  pIVar5 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass60_0);
  value_00 = (Il2CppRGCTXData *)0x0;
  __this_12 = pIVar5;
  System_Object___ctor((Il2CppObject *)pIVar5,(MethodInfo *)0x0);
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pIVar5[2].method = (MethodInfo *)__this;
    il2cpp_runtime_helper_022b4080(pIVar5 + 2,__this);
    unaff_RBX = (Il2CppRGCTXData **)(pIVar5 + 3);
    pIVar5[3].method = (MethodInfo *)name;
    il2cpp_runtime_helper_022b4080(unaff_RBX);
    if ((char)(__this->fields)._isSave == '\0') {
      __this_12 = (Il2CppRGCTXData *)(__this->fields).FinishSetting;
      value_00 = (Il2CppRGCTXData *)name;
      if (__this_12 != (Il2CppRGCTXData *)0x0) {
        value_00 = *unaff_RBX;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_12,(Il2CppObject *)value_00,MethodInfo_Void_set_Value);
        pUVar8 = (__this->fields)._onLoad;
        if (pUVar8 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar8->fields).invoke_impl)((pUVar8->fields).method_code,(pUVar8->fields).method);
          vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
          (*vtableDispatch)
                    (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
          return;
        }
      }
    }
    else {
      __this_00 = (__this->fields)._disallowedSave;
      if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
        name = (System_String_o *)*unaff_RBX;
        bVar4 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)name,
                           MethodInfo_Boolean_Contains);
        if ((char)bVar4 != '\0') {
          unaff_RBX = &TypeInfo_UIManager;
          if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar3 = "Cannot overwrite this item.";
          value_00 = (Il2CppRGCTXData *)name;
          __this_12 = TypeInfo_UIManager;
          if (((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) &&
             (unaff_RBX = (TypeInfo_UIManager[0x17].method)->return_type[3].data,
             (Il2CppRGCTXData *)unaff_RBX != (Il2CppRGCTXData *)0x0)) {
            UI_BasePopup__Show((UI_BasePopup_o *)unaff_RBX,(MethodInfo *)name);
            value_00 = (Il2CppRGCTXData *)name;
            __this_12 = (Il2CppRGCTXData *)0x0;
            if (((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method != (MethodInfo *)0x0) {
              value_00 = (Il2CppRGCTXData *)0x1;
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method,1,
                         (MethodInfo *)0x0);
              pMVar10 = ((Il2CppRGCTXData *)(unaff_RBX + 0x15))->method;
              __this_12 = (Il2CppRGCTXData *)0x0;
              if (pMVar10 != (MethodInfo *)0x0) {
                UNRECOVERED_JUMPTABLE_00 = *(code **)(pMVar10->methodPointer + 0x5e8);
                (*UNRECOVERED_JUMPTABLE_00)
                          (pMVar10,uVar3,*(undefined8 *)(pMVar10->methodPointer + 0x5f0),
                           UNRECOVERED_JUMPTABLE_00);
                return;
              }
            }
          }
          goto label_04352828;
        }
      }
      unaff_RBX = &TypeInfo_UIManager;
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value_00 = (Il2CppRGCTXData *)name;
      __this_12 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        __this_01 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        unaff_RBX = (Il2CppRGCTXData **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        in_RCX = (void *)0x0;
        value_00 = pIVar5;
        __this_12 = (Il2CppRGCTXData *)unaff_RBX;
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (__this_01,"Overwrite this item?",(UnityEngine_Events_UnityAction_o *)unaff_RBX,
                     (System_String_o *)0x0,(MethodInfo *)in_R8);
          return;
        }
      }
    }
  }
label_04352828:
  auVar13 = il2cpp_runtime_helper_022b2c90();
  pUVar8 = auVar13._8_8_;
  uStack_60 = auVar13._0_8_;
  method_03 = value_00;
  pIStack_58 = (Il2CppRGCTXData *)unaff_RBX;
  pIStack_50 = pIVar5;
  if (g_data_057ae142 == '\0') {
    pIStack_68 = (Il2CppRGCTXData *)0x4352862;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pIStack_68 = (Il2CppRGCTXData *)0x435286e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae142 = '\x01';
  }
  pIStack_68 = (Il2CppRGCTXData *)0x435287d;
  UI_BasePopup__Show((UI_BasePopup_o *)__this_12,(MethodInfo *)method_03);
  __this_12[0x1c].method = (MethodInfo *)value_00;
  pIStack_68 = (Il2CppRGCTXData *)0x4352893;
  il2cpp_runtime_helper_022b4080(__this_12 + 0x1c,value_00);
  __this_12[0x23].rgctxDataDummy = (void *)0x0;
  pIStack_68 = (Il2CppRGCTXData *)0x43528ac;
  il2cpp_runtime_helper_022b4080(__this_12 + 0x23,0);
  *(undefined1 *)(__this_12 + 0x25) = 0;
  *(undefined1 *)(__this_12 + 0x20) = 0;
  __this_12[0x1d].rgctxDataDummy = in_RCX;
  pIStack_68 = (Il2CppRGCTXData *)0x43528d0;
  il2cpp_runtime_helper_022b4080(__this_12 + 0x1d,in_RCX);
  *(bool *)((long)__this_12 + 0x101) = in_R8 != (UnityEngine_Events_UnityAction_o *)0x0;
  __this_12[0x21].rgctxDataDummy = in_R9;
  pIStack_68 = (Il2CppRGCTXData *)0x43528f0;
  il2cpp_runtime_helper_022b4080(__this_12 + 0x21,in_R9);
  __this_12[0x1f].rgctxDataDummy = in_R8;
  pIStack_68 = (Il2CppRGCTXData *)0x4352906;
  il2cpp_runtime_helper_022b4080(__this_12 + 0x1f);
  pIVar5 = (Il2CppRGCTXData *)0x0;
  if (__this_12[0x27].method != (MethodInfo *)0x0) {
    pIStack_68 = (Il2CppRGCTXData *)0x435292f;
    in_R8 = "";
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_12[0x27].method,(Il2CppObject *)"",MethodInfo_Void_set_Value)
    ;
    pIVar5 = (Il2CppRGCTXData *)0x0;
    if (__this_12[0x1b].method != (MethodInfo *)0x0) {
      pIStack_68 = (Il2CppRGCTXData *)0x435294f;
      (**(code **)((__this_12[0x1b].method)->methodPointer + 0x198))();
      pMVar10 = (MethodInfo *)0x0;
      pIStack_68 = (Il2CppRGCTXData *)0x4352959;
      UI_SelectListPopup__SetCategoryTabsEnabled((UI_SelectListPopup_o *)__this_12,0,method_00);
      pIStack_68 = (Il2CppRGCTXData *)0x4352961;
      UI_SelectListPopup__ToggleSaveElements((UI_SelectListPopup_o *)__this_12,pMVar10);
      in_R8 = (UnityEngine_Events_UnityAction_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pIStack_68 = (Il2CppRGCTXData *)0x4352983;
      bVar4 = System_String__op_Inequality
                        ((System_String_o *)pUVar8,(System_String_o *)in_R8,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pIStack_68 = (Il2CppRGCTXData *)0x4352992;
        in_R8 = pUVar8;
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this_12,(System_String_o *)pUVar8,method_01);
      }
      pIStack_68 = (Il2CppRGCTXData *)0x435299a;
      pIVar5 = __this_12;
      UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)__this_12,(MethodInfo *)in_R8);
      if ((__this_12[0x1b].klass != (Il2CppClass *)0x0) &&
         (pIVar5 = *(Il2CppRGCTXData **)&((__this_12[0x1b].klass)->_1).this_arg.bits,
         pIVar5 != (Il2CppRGCTXData *)0x0)) {
        in_R8 = (UnityEngine_Events_UnityAction_o *)pIVar5->klass->vtable[0x26].method;
        pIStack_68 = (Il2CppRGCTXData *)0x43529bf;
        (*pIVar5->klass->vtable[0x26].methodPtr)();
        if (__this_12[0x1b].klass != (Il2CppClass *)0x0) {
          __this_02 = *(UnityEngine_UI_InputField_o **)&((__this_12[0x1b].klass)->_1).this_arg.bits;
          pIVar5 = (Il2CppRGCTXData *)0x0;
          if (__this_02 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ActivateInputField(__this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  pIStack_68 = (Il2CppRGCTXData *)0x43529ee;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  uVar11 = (ulong)in_R8 & 0xffffffff;
  pIStack_80 = __this_12;
  pUStack_78 = pUVar8;
  pIStack_68 = value_00;
  if (g_data_057ae14b == '\0') {
    plStack_90 = (long *)0x4352a12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    plStack_90 = (long *)0x4352a1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plStack_90 = (long *)0x4352a2a;
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae14b = '\x01';
  }
  pMVar10 = pIVar5[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    plStack_90 = (long *)0x4352a4d;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_90 = (long *)0x4352a59;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') goto label_04352b16;
  __this_13 = (Il2CppClass *)0x0;
  if (pIVar5[0xe].method != (MethodInfo *)0x0) {
    plStack_90 = (long *)0x4352a7f;
    x = (Il2CppClass *)
        UnityEngine_Transform__Find
                  ((UnityEngine_Transform_o *)pIVar5[0xe].method,"Label",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_90 = (long *)0x4352a93;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_90 = (long *)0x4352a9f;
    __this_13 = x;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
label_04352ad2:
      if (*(char *)(pIVar5 + 0x19) == '\0') {
label_04352b16:
        pMVar10 = pIVar5[0x18].method;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          plStack_90 = (long *)0x4352b2e;
          il2cpp_runtime_helper_02337ed0();
        }
        method_04 = (MethodInfo *)0x0;
        plStack_90 = (long *)0x4352b3a;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
label_04352b55:
          if ((char)uVar11 == '\0') {
            UI_SelectListPopup__ClearCategoryTabs((UI_SelectListPopup_o *)pIVar5,method_04);
            return;
          }
          return;
        }
        __this_13 = (Il2CppClass *)0x0;
        if (pIVar5[0x18].method != (MethodInfo *)0x0) {
          method_04 = (MethodInfo *)((ulong)in_R8 & 0xff);
          plStack_90 = (long *)0x4352b55;
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pIVar5[0x18].method,(bool_conflict)method_04,
                     (MethodInfo *)0x0);
          goto label_04352b55;
        }
      }
      else {
        __this_13 = pIVar5[0xe].klass;
        if (__this_13 != (Il2CppClass *)0x0) {
          plStack_90 = (long *)0x4352af7;
          __this_11 = (UnityEngine_UI_LayoutGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_13,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
          value = 4;
          if ((char)uVar11 == '\0') {
            value = *(int32_t *)((long)pIVar5 + 0xcc);
          }
          if (__this_11 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
            plStack_90 = (long *)0x4352b16;
            UnityEngine_UI_LayoutGroup__set_childAlignment(__this_11,value,(MethodInfo *)0x0);
            goto label_04352b16;
          }
        }
      }
    }
    else if (x != (Il2CppClass *)0x0) {
      plStack_90 = (long *)0x4352ab6;
      pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      __this_13 = x;
      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
        plStack_90 = (long *)0x4352ad2;
        UnityEngine_GameObject__SetActive(pUVar6,((uint)in_R8 ^ 1) & 0xff,(MethodInfo *)0x0);
        goto label_04352ad2;
      }
    }
  }
  plStack_90 = (long *)0x4352b7c;
  il2cpp_runtime_helper_022b2c90();
  plStack_90 = &TypeInfo_Object;
  pIStack_a8 = pIVar5;
  uStack_98 = uVar11;
  if (g_data_057ae145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae145 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  pUVar6 = (UnityEngine_GameObject_o *)0x0;
  __this_03 = (__this_13->_2).unity_user_data;
  if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
label_04352d73:
    auVar12 = il2cpp_runtime_helper_022b2c90();
    if (auVar12._8_4_ != 1) {
      __this_09.fields._8_8_ = pIVar15;
      __this_09.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
      __this_09.fields._current = (Il2CppObject *)pUVar6;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
label_04352e59:
      _Unwind_Resume(auVar12._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar2 = *plVar7;
    __cxa_end_catch();
    __this_08.fields._8_8_ = pIVar15;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
    __this_08.fields._current = (Il2CppObject *)pUVar6;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      __this_10.fields._8_8_ = pIVar15;
      __this_10.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
      __this_10.fields._current = (Il2CppObject *)pUVar6;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_10,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
      goto label_04352e59;
    }
  }
  else {
    if ((char)(__this_13->_2).element_size != '\0') {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,__this_03,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
      pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
      pIVar15 = (Il2CppType *)auStack_c0._8_8_;
      pUVar6 = pUStack_b0;
label_04352c60:
      __this_04.fields._8_8_ = pIVar15;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
      __this_04.fields._current = (Il2CppObject *)pUVar6;
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20);
      if ((char)bVar4 != '\0') {
        if (pUVar6 != (UnityEngine_GameObject_o *)0x0) goto code_r0x04352c7d;
        il2cpp_runtime_helper_022b2c90();
label_04352d6e:
        il2cpp_runtime_helper_022b2c90();
        goto label_04352d73;
      }
      __this_05.fields._8_8_ = pIVar15;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
      __this_05.fields._current = (Il2CppObject *)pUVar6;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
      puVar9 = &"Save";
      iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
      goto joined_r0x04352cb5;
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,__this_03,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
    pIVar15 = (Il2CppType *)auStack_c0._8_8_;
    __this_14 = pUStack_b0;
    while (__this_06.fields._8_8_ = pIVar15,
          __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar14,
          __this_06.fields._current = (Il2CppObject *)__this_14,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_06,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20), (char)bVar4 != '\0') {
      pUVar6 = (UnityEngine_GameObject_o *)0x0;
      if (__this_14 == (UnityEngine_GameObject_o *)0x0) goto label_04352d6e;
      UnityEngine_GameObject__SetActive(__this_14,0,(MethodInfo *)0x0);
    }
    __this_07.fields._8_8_ = pIVar15;
    __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
    __this_07.fields._current = (Il2CppObject *)__this_14;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
  }
  puVar9 = &"Load";
  iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
joined_r0x04352cb5:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  title = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar9,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this_13,title,method_02);
  return;
code_r0x04352c7d:
  UnityEngine_GameObject__SetActive(pUVar6,1,(MethodInfo *)0x0);
  goto label_04352c60;
}


// UI.SelectListPopup$$OnConfirmOverwrite
// il2cpp: void UI_SelectListPopup__OnConfirmOverwrite (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4354970

void UI_SelectListPopup__OnConfirmOverwrite
               (UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  long lVar1;
  UI_ConfirmPopup_o *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar2;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *value;
  UI_SelectListPopup_o *__this_03;
  Settings_StringSetting_o *__this_04;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *in_R8;
  
  method_00 = (MethodInfo *)name;
  if (g_data_057ae14f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae14f = '\x01';
  }
  __this_03 = (UI_SelectListPopup_o *)(__this->fields).FinishSetting;
  if (__this_03 != (UI_SelectListPopup_o *)0x0) {
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)name,MethodInfo_Void_set_Value);
    pUVar3 = (__this->fields)._onSave;
    method_00 = (MethodInfo *)name;
    if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code,(pUVar3->fields).method);
      vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
      (*vtableDispatch)
                (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  value = method_00;
  if (g_data_057ae150 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae150 = '\x01';
  }
  __this_04 = (__this_03->fields).FinishSetting;
  if (__this_04 != (Settings_StringSetting_o *)0x0) {
    value = method_00;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_04,(Il2CppObject *)method_00,MethodInfo_Void_set_Value);
    pUVar3 = (__this_03->fields)._onDelete;
    if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
      value = (MethodInfo *)(pUVar3->fields).method;
      (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code);
      __this_00 = (__this_03->fields).FinishSetting;
      __this_04 = (Settings_StringSetting_o *)0x0;
      if (__this_00 != (Settings_StringSetting_o *)0x0) {
        value = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
        __this_01 = (__this_03->fields)._items;
        __this_04 = (Settings_StringSetting_o *)0x0;
        if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)method_00,
                     MethodInfo_Boolean_Remove);
          UI_SelectListPopup__RefreshList(__this_03,method_00);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae151 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleteClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass63_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Delete this item?");
    g_data_057ae151 = '\x01';
  }
  pUVar2 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass63_0);
  pUVar3 = pUVar2;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (pUVar2->fields).method_ptr = (intptr_t)__this_04;
    il2cpp_runtime_helper_022b4080(&pUVar2->fields,__this_04);
    (pUVar2->fields).invoke_impl = (intptr_t)value;
    il2cpp_runtime_helper_022b4080(&(pUVar2->fields).invoke_impl);
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(TypeInfo_UIManager[1].fields.extra_arg + 0x28);
    pUVar3 = TypeInfo_UIManager;
    if (lVar1 != 0) {
      __this_02 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
      pUVar2 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      pUVar3 = pUVar2;
      UnityEngine_Events_UnityAction___ctor();
      if (__this_02 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_02,"Delete this item?",pUVar2,(System_String_o *)0x0,in_R8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$OnConfirmDelete
// il2cpp: void UI_SelectListPopup__OnConfirmDelete (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x43549f0

void UI_SelectListPopup__OnConfirmDelete
               (UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *__this_00;
  System_Collections_Generic_List_string__o *__this_01;
  long lVar1;
  UI_ConfirmPopup_o *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar2;
  System_String_o *value;
  Settings_StringSetting_o *__this_03;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *in_R8;
  
  value = name;
  if (g_data_057ae150 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae150 = '\x01';
  }
  __this_03 = (__this->fields).FinishSetting;
  if (__this_03 != (Settings_StringSetting_o *)0x0) {
    value = name;
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)name,MethodInfo_Void_set_Value);
    pUVar3 = (__this->fields)._onDelete;
    if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
      value = (System_String_o *)(pUVar3->fields).method;
      (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code);
      __this_00 = (__this->fields).FinishSetting;
      __this_03 = (Settings_StringSetting_o *)0x0;
      if (__this_00 != (Settings_StringSetting_o *)0x0) {
        value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
        __this_01 = (__this->fields)._items;
        __this_03 = (Settings_StringSetting_o *)0x0;
        if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
          System_Collections_Generic_List_object___Remove
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)name,MethodInfo_Boolean_Remove)
          ;
          UI_SelectListPopup__RefreshList(__this,(MethodInfo *)name);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae151 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleteClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass63_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Delete this item?");
    g_data_057ae151 = '\x01';
  }
  pUVar2 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass63_0);
  pUVar3 = pUVar2;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (pUVar2->fields).method_ptr = (intptr_t)__this_03;
    il2cpp_runtime_helper_022b4080(&pUVar2->fields,__this_03);
    (pUVar2->fields).invoke_impl = (intptr_t)value;
    il2cpp_runtime_helper_022b4080(&(pUVar2->fields).invoke_impl);
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(TypeInfo_UIManager[1].fields.extra_arg + 0x28);
    pUVar3 = TypeInfo_UIManager;
    if (lVar1 != 0) {
      __this_02 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
      pUVar2 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      pUVar3 = pUVar2;
      UnityEngine_Events_UnityAction___ctor();
      if (__this_02 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_02,"Delete this item?",pUVar2,(System_String_o *)0x0,in_R8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$OnDeleteClick
// il2cpp: void UI_SelectListPopup__OnDeleteClick (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4354ac0

void UI_SelectListPopup__OnDeleteClick(UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  long lVar1;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_Events_UnityAction_o *__this_01;
  MethodInfo *in_R8;
  
  if (g_data_057ae151 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleteClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass63_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Delete this item?");
    g_data_057ae151 = '\x01';
  }
  pUVar2 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass63_0);
  __this_01 = pUVar2;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
    (pUVar2->fields).method_ptr = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&pUVar2->fields,__this);
    (pUVar2->fields).invoke_impl = (intptr_t)name;
    il2cpp_runtime_helper_022b4080(&(pUVar2->fields).invoke_impl);
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.original_method_info + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(TypeInfo_UIManager[1].fields.extra_arg + 0x28);
    __this_01 = TypeInfo_UIManager;
    if (lVar1 != 0) {
      __this_00 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
      pUVar2 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      __this_01 = pUVar2;
      UnityEngine_Events_UnityAction___ctor();
      if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
        UI_ConfirmPopup__Show(__this_00,"Delete this item?",pUVar2,(System_String_o *)0x0,in_R8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// UI.SelectListPopup$$OnButtonClick
// il2cpp: void UI_SelectListPopup__OnButtonClick (UI_SelectListPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4354bf0

void UI_SelectListPopup__OnButtonClick(UI_SelectListPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  long lVar2;
  undefined8 uVar3;
  UI_BasePopup_c *pUVar4;
  void *pvVar5;
  code *vtableDispatch;
  UI_ConfirmPopup_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar6;
  System_String_o *defaultValue;
  bool_conflict bVar7;
  undefined8 *puVar8;
  UI_TooltipPopup_o *onConfirm;
  System_Collections_Generic_List_object__o *pSVar9;
  System_Threading_CancellationTokenSource_o *__this_01;
  MethodInfo *pMVar10;
  UI_BasePopup_o *__this_02;
  MethodInfo *in_R8;
  
  if (g_data_057ae152 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnButtonClick_b__64_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Overwrite this item?");
    il2cpp_runtime_helper_023445d0(&"Cannot overwrite this item.");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Field cannot be empty.");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae152 = '\x01';
  }
  bVar7 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') goto label_04354c9b;
  bVar7 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  pSVar1 = (__this->fields).FinishSetting;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_04354eef;
  pMVar10 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  bVar7 = System_String__op_Equality((pSVar1->fields)._value,(System_String_o *)pMVar10,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    name = (System_String_o *)(__this->fields)._disallowedSave;
    if ((UI_TooltipPopup_o *)name != (UI_TooltipPopup_o *)0x0) {
      pSVar1 = (__this->fields).FinishSetting;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_04354eef;
      pMVar10 = (MethodInfo *)(pSVar1->fields)._value;
      bVar7 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)name,(Il2CppObject *)pMVar10,
                         MethodInfo_Boolean_Contains);
      if ((char)bVar7 != '\0') {
        if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar2 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
        name = (System_String_o *)TypeInfo_UIManager;
        if ((lVar2 == 0) ||
           (__this_02 = *(UI_BasePopup_o **)(lVar2 + 0x30), __this_02 == (UI_BasePopup_o *)0x0))
        goto label_04354eef;
        puVar8 = &"Cannot overwrite this item.";
        goto label_04354dd1;
      }
    }
    pSVar1 = (__this->fields).FinishSetting;
    if ((pSVar1 != (Settings_StringSetting_o *)0x0) &&
       (name = (System_String_o *)(__this->fields)._items,
       (UI_TooltipPopup_o *)name != (UI_TooltipPopup_o *)0x0)) {
      bVar7 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)name,
                         (Il2CppObject *)(pSVar1->fields)._value,MethodInfo_Boolean_Contains);
      if ((char)bVar7 == '\0') {
        pUVar6 = (__this->fields)._onSave;
        if (pUVar6 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar6->fields).invoke_impl)((pUVar6->fields).method_code,(pUVar6->fields).method);
label_04354c9b:
          (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
          return;
        }
      }
      else {
        if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar2 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
        name = (System_String_o *)TypeInfo_UIManager;
        if (lVar2 != 0) {
          __this_00 = *(UI_ConfirmPopup_o **)(lVar2 + 0x38);
          onConfirm = (UI_TooltipPopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          name = (System_String_o *)onConfirm;
          UnityEngine_Events_UnityAction___ctor();
          if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
            UI_ConfirmPopup__Show
                      (__this_00,"Overwrite this item?",(UnityEngine_Events_UnityAction_o *)onConfirm,
                       (System_String_o *)0x0,in_R8);
            return;
          }
        }
      }
    }
  }
  else {
    if (*(int *)((long)&TypeInfo_UIManager[1].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = (TypeInfo_UIManager->fields).Caller[1].fields.m_CachedPtr;
    name = (System_String_o *)TypeInfo_UIManager;
    if ((lVar2 == 0) || (__this_02 = *(UI_BasePopup_o **)(lVar2 + 0x30), __this_02 == (UI_BasePopup_o *)0x0))
    goto label_04354eef;
    puVar8 = &"Field cannot be empty.";
label_04354dd1:
    uVar3 = *puVar8;
    UI_BasePopup__Show(__this_02,pMVar10);
    name = (System_String_o *)0x0;
    if (__this_02[1].monitor != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_02[1].monitor,1,(MethodInfo *)0x0);
      pUVar4 = __this_02[1].klass;
      name = (System_String_o *)0x0;
      if (pUVar4 != (UI_BasePopup_c *)0x0) {
        pvVar5 = (pUVar4->_1).image;
        vtableDispatch = *(code **)((long)pvVar5 + 0x5e8);
        (*vtableDispatch)(pUVar4,uVar3,*(undefined8 *)((long)pvVar5 + 0x5f0),vtableDispatch);
        return;
      }
    }
  }
label_04354eef:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae153 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae153 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(pSVar9,MethodInfo_List_1_UnityEngine_GameObject);
  (((UI_TooltipPopup_o *)name)->fields)._panel = (UnityEngine_RectTransform_o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields)._panel,pSVar9);
  pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(pSVar9,MethodInfo_List_1_UnityEngine_GameObject);
  (((UI_TooltipPopup_o *)name)->fields).Caller = (UnityEngine_Component_o *)pSVar9;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)name)->fields).Caller,pSVar9);
  pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor(pSVar9,MethodInfo_List_1_UnityEngine_GameObject);
  ((UI_TooltipPopup_o *)((long)name + 200))->monitor = pSVar9;
  il2cpp_runtime_helper_022b4080(&((UI_TooltipPopup_o *)((long)name + 200))->monitor,pSVar9);
  __this_01 = (System_Threading_CancellationTokenSource_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_System_String);
  (((UI_TooltipPopup_o *)((long)name + 200))->fields).m_CancellationTokenSource = __this_01;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)((long)name + 200))->fields).m_CancellationTokenSource,__this_01)
  ;
  (((UI_TooltipPopup_o *)((long)name + 200))->fields).MaskBackground =
       (UnityEngine_UI_RawImage_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)((long)name + 200))->fields).MaskBackground);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pMVar10 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)pMVar10,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (((UI_TooltipPopup_o *)((long)name + 200))->fields).TopBar = (UnityEngine_Transform_o *)pMVar10;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)((long)name + 200))->fields).TopBar);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)name,pMVar10);
  return;
}


// UI.SelectListPopup$$.ctor
// il2cpp: void UI_SelectListPopup___ctor (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4354f00

void UI_SelectListPopup___ctor(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  System_Collections_Generic_List_GameObject__o *pSVar1;
  System_Collections_Generic_List_string__o *__this_00;
  MethodInfo *method_00;
  
  if (g_data_057ae153 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae153 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._itemButtons = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._itemButtons,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._categoryButtons = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryButtons,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._saveElements = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._saveElements,pSVar1);
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items,__this_00);
  (__this->fields)._activeCategoryName = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._activeCategoryName);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).FinishSetting = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FinishSetting);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,method_00);
  return;
}


// UI.SelectListPopup$$<Setup>b__44_0
// il2cpp: void UI_SelectListPopup___Setup_b__44_0 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x43550b0

void UI_SelectListPopup___Setup_b__44_0(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  UI_SelectListPopup__RefreshList(__this,method);
  return;
}


// UI.SelectListPopup$$<Setup>b__44_1
// il2cpp: void UI_SelectListPopup___Setup_b__44_1 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x43550c0

void UI_SelectListPopup___Setup_b__44_1(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *pSVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  UI_ConfirmPopup_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UI_InputField_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  long lVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  System_Collections_Generic_List_Enumerator_object__o __this_08;
  System_Collections_Generic_List_Enumerator_object__o __this_09;
  undefined8 uVar4;
  bool_conflict bVar5;
  Il2CppObject *__this_10;
  Il2CppClass *pIVar6;
  System_Collections_Generic_List_string__o *pSVar7;
  System_Func_TSource__bool__o *predicate;
  Il2CppRGCTXData *pIVar8;
  Il2CppRGCTXData *__this_11;
  Il2CppClass *x;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_UI_LayoutGroup_o *__this_12;
  long *plVar10;
  void *pvVar11;
  undefined8 extraout_RDX;
  UnityEngine_Events_UnityAction_o *pUVar12;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined8 *puVar13;
  Il2CppRGCTXData **unaff_RBX;
  int32_t value;
  MethodInfo *pMVar14;
  Il2CppRGCTXData *value_00;
  MethodInfo *method_03;
  System_String_o *pSVar15;
  Il2CppRGCTXData *__this_13;
  UnityEngine_Events_UnityAction_o *in_R8;
  void *in_R9;
  ulong uVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar19;
  Il2CppType *pIVar20;
  UnityEngine_GameObject_o *__this_14;
  undefined1 auStack_c0 [16];
  UnityEngine_GameObject_o *pUStack_b0;
  Il2CppRGCTXData *pIStack_a8;
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  Il2CppRGCTXData *pIStack_80;
  UnityEngine_Events_UnityAction_o *pUStack_78;
  Il2CppRGCTXData *pIStack_68;
  undefined8 uStack_60;
  Il2CppRGCTXData *pIStack_58;
  Il2CppRGCTXData *pIStack_50;
  
  if (g_data_057ae141 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_FirstOrDefault_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_OnSearchEndEdit_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass46_0);
    g_data_057ae141 = '\x01';
  }
  __this_10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass46_0);
  System_Object___ctor(__this_10,(MethodInfo *)0x0);
  pSVar15 = (System_String_o *)&g_data_0000000d;
  bVar5 = UnityEngine_Input__GetKeyDown(0xd,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pSVar15 = (System_String_o *)&g_data_0000010f;
    bVar5 = UnityEngine_Input__GetKeyDown(0x10f,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      pSVar15 = (System_String_o *)&g_data_0000000d;
      bVar5 = UnityEngine_Input__GetKey(0xd,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pSVar15 = (System_String_o *)&g_data_0000010f;
        bVar5 = UnityEngine_Input__GetKey(0x10f,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
      }
    }
  }
  pSVar2 = (__this->fields).FinishSetting;
  if (((pSVar2 == (Settings_StringSetting_o *)0x0) ||
      (pSVar15 = (pSVar2->fields)._value, pSVar15 == (System_String_o *)0x0)) ||
     (pIVar6 = (Il2CppClass *)System_String__ToLowerInvariant(pSVar15,(MethodInfo *)0x0),
     __this_10 == (Il2CppObject *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
    return;
  }
  __this_10[1].klass = pIVar6;
  il2cpp_runtime_helper_022b4080(__this_10 + 1);
  pMVar14 = (MethodInfo *)0x0;
  bVar5 = System_String__IsNullOrEmpty((System_String_o *)__this_10[1].klass,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pSVar7 = UI_SelectListPopup__GetActiveCategoryItems(__this,pMVar14);
  predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
  pvVar11 = (void *)0x0;
  System_Func_object__bool____ctor();
  pIVar8 = (Il2CppRGCTXData *)
           System_Linq_Enumerable__FirstOrDefault_object__2512400
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,predicate,MethodInfo_String_FirstOrDefault_String);
  if (pIVar8 == (Il2CppRGCTXData *)0x0) {
    return;
  }
  if (g_data_057ae14e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnItemClick_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass60_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Overwrite this item?");
    il2cpp_runtime_helper_023445d0(&"Cannot overwrite this item.");
    g_data_057ae14e = '\x01';
  }
  __this_11 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass60_0);
  value_00 = (Il2CppRGCTXData *)0x0;
  __this_13 = __this_11;
  System_Object___ctor((Il2CppObject *)__this_11,(MethodInfo *)0x0);
  if (__this_11 != (Il2CppRGCTXData *)0x0) {
    __this_11[2].method = (MethodInfo *)__this;
    il2cpp_runtime_helper_022b4080(__this_11 + 2,__this);
    unaff_RBX = (Il2CppRGCTXData **)(__this_11 + 3);
    __this_11[3].method = (MethodInfo *)pIVar8;
    il2cpp_runtime_helper_022b4080(unaff_RBX);
    if ((char)(__this->fields)._isSave == '\0') {
      __this_13 = (Il2CppRGCTXData *)(__this->fields).FinishSetting;
      value_00 = pIVar8;
      if (__this_13 != (Il2CppRGCTXData *)0x0) {
        value_00 = *unaff_RBX;
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_13,(Il2CppObject *)value_00,MethodInfo_Void_set_Value);
        pUVar12 = (__this->fields)._onLoad;
        if (pUVar12 != (UnityEngine_Events_UnityAction_o *)0x0) {
          (*(code *)(pUVar12->fields).invoke_impl)((pUVar12->fields).method_code,(pUVar12->fields).method);
          vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
          (*vtableDispatch)
                    (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
          return;
        }
      }
    }
    else {
      pSVar7 = (__this->fields)._disallowedSave;
      if (pSVar7 != (System_Collections_Generic_List_string__o *)0x0) {
        pIVar8 = *unaff_RBX;
        bVar5 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)pSVar7,(Il2CppObject *)pIVar8,
                           MethodInfo_Boolean_Contains);
        if ((char)bVar5 != '\0') {
          unaff_RBX = &TypeInfo_UIManager;
          if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          uVar4 = "Cannot overwrite this item.";
          value_00 = pIVar8;
          __this_13 = TypeInfo_UIManager;
          if (((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) &&
             (unaff_RBX = (TypeInfo_UIManager[0x17].method)->return_type[3].data,
             (Il2CppRGCTXData *)unaff_RBX != (Il2CppRGCTXData *)0x0)) {
            UI_BasePopup__Show((UI_BasePopup_o *)unaff_RBX,(MethodInfo *)pIVar8);
            value_00 = pIVar8;
            __this_13 = (Il2CppRGCTXData *)0x0;
            if (((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method != (MethodInfo *)0x0) {
              value_00 = (Il2CppRGCTXData *)0x1;
              UnityEngine_GameObject__SetActive
                        ((UnityEngine_GameObject_o *)((Il2CppRGCTXData *)(unaff_RBX + 0x16))->method,1,
                         (MethodInfo *)0x0);
              pMVar14 = ((Il2CppRGCTXData *)(unaff_RBX + 0x15))->method;
              __this_13 = (Il2CppRGCTXData *)0x0;
              if (pMVar14 != (MethodInfo *)0x0) {
                UNRECOVERED_JUMPTABLE_00 = *(code **)(pMVar14->methodPointer + 0x5e8);
                (*UNRECOVERED_JUMPTABLE_00)
                          (pMVar14,uVar4,*(undefined8 *)(pMVar14->methodPointer + 0x5f0),
                           UNRECOVERED_JUMPTABLE_00);
                return;
              }
            }
          }
          goto label_04352828;
        }
      }
      unaff_RBX = &TypeInfo_UIManager;
      if (*(int *)((long)TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value_00 = pIVar8;
      __this_13 = TypeInfo_UIManager;
      if ((TypeInfo_UIManager[0x17].method)->return_type != (Il2CppType *)0x0) {
        __this_00 = *(UI_ConfirmPopup_o **)&(TypeInfo_UIManager[0x17].method)->return_type[3].bits;
        unaff_RBX = (Il2CppRGCTXData **)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        pvVar11 = (void *)0x0;
        value_00 = __this_11;
        __this_13 = (Il2CppRGCTXData *)unaff_RBX;
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (__this_00,"Overwrite this item?",(UnityEngine_Events_UnityAction_o *)unaff_RBX,
                     (System_String_o *)0x0,(MethodInfo *)in_R8);
          return;
        }
      }
    }
  }
label_04352828:
  auVar18 = il2cpp_runtime_helper_022b2c90();
  pUVar12 = auVar18._8_8_;
  uStack_60 = auVar18._0_8_;
  pIVar8 = value_00;
  pIStack_58 = (Il2CppRGCTXData *)unaff_RBX;
  pIStack_50 = __this_11;
  if (g_data_057ae142 == '\0') {
    pIStack_68 = (Il2CppRGCTXData *)0x4352862;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    pIStack_68 = (Il2CppRGCTXData *)0x435286e;
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae142 = '\x01';
  }
  pIStack_68 = (Il2CppRGCTXData *)0x435287d;
  UI_BasePopup__Show((UI_BasePopup_o *)__this_13,(MethodInfo *)pIVar8);
  __this_13[0x1c].method = (MethodInfo *)value_00;
  pIStack_68 = (Il2CppRGCTXData *)0x4352893;
  il2cpp_runtime_helper_022b4080(__this_13 + 0x1c,value_00);
  __this_13[0x23].rgctxDataDummy = (void *)0x0;
  pIStack_68 = (Il2CppRGCTXData *)0x43528ac;
  il2cpp_runtime_helper_022b4080(__this_13 + 0x23,0);
  *(undefined1 *)(__this_13 + 0x25) = 0;
  *(undefined1 *)(__this_13 + 0x20) = 0;
  __this_13[0x1d].rgctxDataDummy = pvVar11;
  pIStack_68 = (Il2CppRGCTXData *)0x43528d0;
  il2cpp_runtime_helper_022b4080(__this_13 + 0x1d,pvVar11);
  *(bool *)((long)__this_13 + 0x101) = in_R8 != (UnityEngine_Events_UnityAction_o *)0x0;
  __this_13[0x21].rgctxDataDummy = in_R9;
  pIStack_68 = (Il2CppRGCTXData *)0x43528f0;
  il2cpp_runtime_helper_022b4080(__this_13 + 0x21,in_R9);
  __this_13[0x1f].rgctxDataDummy = in_R8;
  pIStack_68 = (Il2CppRGCTXData *)0x4352906;
  il2cpp_runtime_helper_022b4080(__this_13 + 0x1f);
  pIVar8 = (Il2CppRGCTXData *)0x0;
  if (__this_13[0x27].method != (MethodInfo *)0x0) {
    pIStack_68 = (Il2CppRGCTXData *)0x435292f;
    in_R8 = "";
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_13[0x27].method,(Il2CppObject *)"",MethodInfo_Void_set_Value)
    ;
    pIVar8 = (Il2CppRGCTXData *)0x0;
    if (__this_13[0x1b].method != (MethodInfo *)0x0) {
      pIStack_68 = (Il2CppRGCTXData *)0x435294f;
      (**(code **)((__this_13[0x1b].method)->methodPointer + 0x198))();
      pMVar14 = (MethodInfo *)0x0;
      pIStack_68 = (Il2CppRGCTXData *)0x4352959;
      UI_SelectListPopup__SetCategoryTabsEnabled((UI_SelectListPopup_o *)__this_13,0,method_00);
      pIStack_68 = (Il2CppRGCTXData *)0x4352961;
      UI_SelectListPopup__ToggleSaveElements((UI_SelectListPopup_o *)__this_13,pMVar14);
      in_R8 = (UnityEngine_Events_UnityAction_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pIStack_68 = (Il2CppRGCTXData *)0x4352983;
      bVar5 = System_String__op_Inequality
                        ((System_String_o *)pUVar12,(System_String_o *)in_R8,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pIStack_68 = (Il2CppRGCTXData *)0x4352992;
        in_R8 = pUVar12;
        UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)__this_13,(System_String_o *)pUVar12,method_01);
      }
      pIStack_68 = (Il2CppRGCTXData *)0x435299a;
      pIVar8 = __this_13;
      UI_SelectListPopup__RefreshList((UI_SelectListPopup_o *)__this_13,(MethodInfo *)in_R8);
      if ((__this_13[0x1b].klass != (Il2CppClass *)0x0) &&
         (pIVar8 = *(Il2CppRGCTXData **)&((__this_13[0x1b].klass)->_1).this_arg.bits,
         pIVar8 != (Il2CppRGCTXData *)0x0)) {
        in_R8 = (UnityEngine_Events_UnityAction_o *)pIVar8->klass->vtable[0x26].method;
        pIStack_68 = (Il2CppRGCTXData *)0x43529bf;
        (*pIVar8->klass->vtable[0x26].methodPtr)();
        if (__this_13[0x1b].klass != (Il2CppClass *)0x0) {
          __this_01 = *(UnityEngine_UI_InputField_o **)&((__this_13[0x1b].klass)->_1).this_arg.bits;
          pIVar8 = (Il2CppRGCTXData *)0x0;
          if (__this_01 != (UnityEngine_UI_InputField_o *)0x0) {
            UnityEngine_UI_InputField__ActivateInputField(__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  pIStack_68 = (Il2CppRGCTXData *)0x43529ee;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  uVar16 = (ulong)in_R8 & 0xffffffff;
  pIStack_80 = __this_13;
  pUStack_78 = pUVar12;
  pIStack_68 = value_00;
  if (g_data_057ae14b == '\0') {
    plStack_90 = (long *)0x4352a12;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
    plStack_90 = (long *)0x4352a1e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    plStack_90 = (long *)0x4352a2a;
    il2cpp_runtime_helper_023445d0(&"Label");
    g_data_057ae14b = '\x01';
  }
  pMVar14 = pIVar8[0xe].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    plStack_90 = (long *)0x4352a4d;
    il2cpp_runtime_helper_02337ed0();
  }
  plStack_90 = (long *)0x4352a59;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') goto label_04352b16;
  pIVar6 = (Il2CppClass *)0x0;
  if (pIVar8[0xe].method != (MethodInfo *)0x0) {
    plStack_90 = (long *)0x4352a7f;
    x = (Il2CppClass *)
        UnityEngine_Transform__Find
                  ((UnityEngine_Transform_o *)pIVar8[0xe].method,"Label",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      plStack_90 = (long *)0x4352a93;
      il2cpp_runtime_helper_02337ed0();
    }
    plStack_90 = (long *)0x4352a9f;
    pIVar6 = x;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
label_04352ad2:
      if (*(char *)(pIVar8 + 0x19) == '\0') {
label_04352b16:
        pMVar14 = pIVar8[0x18].method;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          plStack_90 = (long *)0x4352b2e;
          il2cpp_runtime_helper_02337ed0();
        }
        method_03 = (MethodInfo *)0x0;
        plStack_90 = (long *)0x4352b3a;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pMVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
label_04352b55:
          if ((char)uVar16 != '\0') {
            return;
          }
          UI_SelectListPopup__ClearCategoryTabs((UI_SelectListPopup_o *)pIVar8,method_03);
          return;
        }
        pIVar6 = (Il2CppClass *)0x0;
        if (pIVar8[0x18].method != (MethodInfo *)0x0) {
          method_03 = (MethodInfo *)((ulong)in_R8 & 0xff);
          plStack_90 = (long *)0x4352b55;
          UnityEngine_GameObject__SetActive
                    ((UnityEngine_GameObject_o *)pIVar8[0x18].method,(bool_conflict)method_03,
                     (MethodInfo *)0x0);
          goto label_04352b55;
        }
      }
      else {
        pIVar6 = pIVar8[0xe].klass;
        if (pIVar6 != (Il2CppClass *)0x0) {
          plStack_90 = (long *)0x4352af7;
          __this_12 = (UnityEngine_UI_LayoutGroup_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pIVar6,MethodInfo_HorizontalLayoutGroup_GetComponent_HorizontalLayoutGroup);
          value = 4;
          if ((char)uVar16 == '\0') {
            value = *(int32_t *)((long)pIVar8 + 0xcc);
          }
          if (__this_12 != (UnityEngine_UI_LayoutGroup_o *)0x0) {
            plStack_90 = (long *)0x4352b16;
            UnityEngine_UI_LayoutGroup__set_childAlignment(__this_12,value,(MethodInfo *)0x0);
            goto label_04352b16;
          }
        }
      }
    }
    else if (x != (Il2CppClass *)0x0) {
      plStack_90 = (long *)0x4352ab6;
      pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pIVar6 = x;
      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
        plStack_90 = (long *)0x4352ad2;
        UnityEngine_GameObject__SetActive(pUVar9,((uint)in_R8 ^ 1) & 0xff,(MethodInfo *)0x0);
        goto label_04352ad2;
      }
    }
  }
  plStack_90 = (long *)0x4352b7c;
  il2cpp_runtime_helper_022b2c90();
  plStack_90 = &TypeInfo_Object;
  pIStack_a8 = pIVar8;
  uStack_98 = uVar16;
  if (g_data_057ae145 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Load");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae145 = '\x01';
  }
  pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar20 = (Il2CppType *)0x0;
  pUVar9 = (UnityEngine_GameObject_o *)0x0;
  __this_02 = (pIVar6->_2).unity_user_data;
  if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_04352d73;
  if ((char)(pIVar6->_2).element_size != '\0') {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,__this_02,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
    pIVar20 = (Il2CppType *)auStack_c0._8_8_;
    pUVar9 = pUStack_b0;
    while (__this_03.fields._8_8_ = pIVar20,
          __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar19,
          __this_03.fields._current = (Il2CppObject *)pUVar9,
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20), (char)bVar5 != '\0') {
      if (pUVar9 == (UnityEngine_GameObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04352d6e;
      }
      UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
    }
    __this_04.fields._8_8_ = pIVar20;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
    __this_04.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
    puVar13 = &"Save";
    iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
    goto joined_r0x04352cb5;
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_c0,__this_02,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
  pSVar19 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_c0._0_8_;
  pIVar20 = (Il2CppType *)auStack_c0._8_8_;
  __this_14 = pUStack_b0;
  while (__this_05.fields._8_8_ = pIVar20,
        __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar19,
        __this_05.fields._current = (Il2CppObject *)__this_14,
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_05,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20), (char)bVar5 != '\0') {
    pUVar9 = (UnityEngine_GameObject_o *)0x0;
    if (__this_14 == (UnityEngine_GameObject_o *)0x0) goto label_04352d6e;
    UnityEngine_GameObject__SetActive(__this_14,0,(MethodInfo *)0x0);
  }
  __this_06.fields._8_8_ = pIVar20;
  __this_06.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
  __this_06.fields._current = (Il2CppObject *)__this_14;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_06,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
label_04352d46:
  puVar13 = &"Load";
  iVar1 = *(int *)((long)TypeInfo_UIManager + 0xe4);
joined_r0x04352cb5:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar15 = UI_UIManager__GetLocaleCommon((System_String_o *)*puVar13,(MethodInfo *)0x0);
  UI_HeadedPanel__SetTitle((UI_HeadedPanel_o *)pIVar6,pSVar15,method_02);
  return;
label_04352d6e:
  il2cpp_runtime_helper_022b2c90();
label_04352d73:
  auVar17 = il2cpp_runtime_helper_022b2c90();
  if (auVar17._8_4_ != 1) {
    __this_08.fields._8_8_ = pIVar20;
    __this_08.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
    __this_08.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_08,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
label_04352e59:
    _Unwind_Resume(auVar17._0_8_);
  }
  plVar10 = (long *)__cxa_begin_catch(auVar17._0_8_);
  lVar3 = *plVar10;
  __cxa_end_catch();
  __this_07.fields._8_8_ = pIVar20;
  __this_07.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
  __this_07.fields._current = (Il2CppObject *)pUVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_07,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
  if (lVar3 != 0) {
    il2cpp_runtime_helper_022fefe0(lVar3);
    __this_09.fields._8_8_ = pIVar20;
    __this_09.fields._list = (System_Collections_Generic_List_T__o *)pSVar19;
    __this_09.fields._current = (Il2CppObject *)pUVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_09,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
    goto label_04352e59;
  }
  goto label_04352d46;
}


// UI.SelectListPopup$$<Setup>b__44_2
// il2cpp: void UI_SelectListPopup___Setup_b__44_2 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x43550d0

void UI_SelectListPopup___Setup_b__44_2(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae154 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae154 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SelectListPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.SelectListPopup$$<Setup>b__44_3
// il2cpp: void UI_SelectListPopup___Setup_b__44_3 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x4355110

void UI_SelectListPopup___Setup_b__44_3(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae155 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae155 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_SelectListPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


// UI.SelectListPopup$$<GetActiveCategoryItems>b__54_0
// il2cpp: bool UI_SelectListPopup___GetActiveCategoryItems_b__54_0 (UI_SelectListPopup_o* __this, UI_SelectListPopup_ItemCategory_o* x, const MethodInfo* method);
// 0x4355150

bool_conflict
UI_SelectListPopup___GetActiveCategoryItems_b__54_0
          (UI_SelectListPopup_o *__this,UI_SelectListPopup_ItemCategory_o *x,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  System_String_o *extraout_RDX_00;
  UI_SelectListPopup_ItemCategory_o *value;
  Settings_StringSetting_o *__this_00;
  
  if (x != (UI_SelectListPopup_ItemCategory_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((x->fields).Name,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
    return bVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (x != (UI_SelectListPopup_ItemCategory_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((x->fields).Name,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
    return bVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae156 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae156 = '\x01';
  }
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    value = (UI_SelectListPopup_ItemCategory_o *)(__this_00->fields)._value;
    if (g_data_057ae14f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ae14f = '\x01';
      __this_00 = (__this->fields).FinishSetting;
      if (__this_00 == (Settings_StringSetting_o *)0x0) goto label_04355251;
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._onSave;
    x = value;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
      bVar2 = (*vtableDispatch)
                        (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
      return bVar2;
    }
  }
label_04355251:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).DefaultValue = (System_String_o *)x;
  il2cpp_runtime_helper_022b4080(&__this_00->fields,x);
  (__this_00->fields)._value = extraout_RDX_00;
  bVar2 = il2cpp_runtime_helper_022b4080(&(__this_00->fields)._value,extraout_RDX_00);
  return bVar2;
}


// UI.SelectListPopup$$<SetupCategoryTabs>b__55_0
// il2cpp: bool UI_SelectListPopup___SetupCategoryTabs_b__55_0 (UI_SelectListPopup_o* __this, UI_SelectListPopup_ItemCategory_o* x, const MethodInfo* method);
// 0x4355180

bool_conflict
UI_SelectListPopup___SetupCategoryTabs_b__55_0
          (UI_SelectListPopup_o *__this,UI_SelectListPopup_ItemCategory_o *x,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  System_String_o *extraout_RDX_00;
  UI_SelectListPopup_ItemCategory_o *value;
  Settings_StringSetting_o *__this_00;
  
  if (x != (UI_SelectListPopup_ItemCategory_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((x->fields).Name,(__this->fields)._activeCategoryName,(MethodInfo *)0x0);
    return bVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae156 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae156 = '\x01';
  }
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    value = (UI_SelectListPopup_ItemCategory_o *)(__this_00->fields)._value;
    if (g_data_057ae14f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ae14f = '\x01';
      __this_00 = (__this->fields).FinishSetting;
      if (__this_00 == (Settings_StringSetting_o *)0x0) goto label_04355251;
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._onSave;
    x = value;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
      bVar2 = (*vtableDispatch)
                        (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
      return bVar2;
    }
  }
label_04355251:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).DefaultValue = (System_String_o *)x;
  il2cpp_runtime_helper_022b4080(&__this_00->fields,x);
  (__this_00->fields)._value = extraout_RDX_00;
  bVar2 = il2cpp_runtime_helper_022b4080(&(__this_00->fields)._value,extraout_RDX_00);
  return bVar2;
}


// UI.SelectListPopup$$<OnButtonClick>b__64_0
// il2cpp: void UI_SelectListPopup___OnButtonClick_b__64_0 (UI_SelectListPopup_o* __this, const MethodInfo* method);
// 0x43551b0

void UI_SelectListPopup___OnButtonClick_b__64_0(UI_SelectListPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  Il2CppMethodPointer vtableDispatch;
  undefined8 extraout_RDX;
  System_String_o *extraout_RDX_00;
  MethodInfo *value;
  Settings_StringSetting_o *__this_00;
  
  if (g_data_057ae156 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    g_data_057ae156 = '\x01';
  }
  __this_00 = (__this->fields).FinishSetting;
  if (__this_00 != (Settings_StringSetting_o *)0x0) {
    value = (MethodInfo *)(__this_00->fields)._value;
    if (g_data_057ae14f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
      g_data_057ae14f = '\x01';
      __this_00 = (__this->fields).FinishSetting;
      if (__this_00 == (Settings_StringSetting_o *)0x0) goto label_04355251;
    }
    Settings_TypedSetting_object___set_Value
              ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,MethodInfo_Void_set_Value);
    pUVar1 = (__this->fields)._onSave;
    method = value;
    if (pUVar1 != (UnityEngine_Events_UnityAction_o *)0x0) {
      (*(code *)(pUVar1->fields).invoke_impl)((pUVar1->fields).method_code,(pUVar1->fields).method);
      vtableDispatch = (__this->klass->vtable)._22_Hide.methodPtr;
      (*vtableDispatch)
                (__this,(__this->klass->vtable)._22_Hide.method,extraout_RDX,vtableDispatch);
      return;
    }
  }
label_04355251:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).DefaultValue = (System_String_o *)method;
  il2cpp_runtime_helper_022b4080(&__this_00->fields,method);
  (__this_00->fields)._value = extraout_RDX_00;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._value,extraout_RDX_00);
  return;
}



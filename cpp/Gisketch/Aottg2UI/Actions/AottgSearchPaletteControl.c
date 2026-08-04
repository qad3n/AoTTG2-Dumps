// Type: Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSearchPaletteControl.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass21_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x3b8f720

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass21_0$$<WireResults>b__1
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0___WireResults_b__1 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x3b90350

bool_conflict
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0___WireResults_b__1
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_0_o *__this,
          MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_02;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar3;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  int extraout_EAX_02;
  bool_conflict bVar4;
  int iVar5;
  bool_conflict extraout_EAX_03;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_04;
  UnityEngine_Component_o *__this_05;
  UnityEngine_GameObject_o *focused;
  undefined8 uVar9;
  undefined8 extraout_RAX;
  ulong uVar10;
  undefined8 extraout_RAX_00;
  undefined8 extraout_RAX_01;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar11;
  undefined8 extraout_RAX_02;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *extraout_RAX_03;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar12;
  undefined8 extraout_RAX_04;
  Gisketch_Aottg2UI_GisketchUIRoot_o *extraout_RAX_05;
  undefined8 extraout_RAX_06;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  MethodInfo *pMVar17;
  MethodInfo *method_00;
  System_String_o *activeScreenId;
  UnityEngine_MonoBehaviour_c *pUVar18;
  long *plVar19;
  Gisketch_Aottg2UI_GisketchUIRoot_o **ppGVar20;
  ulong unaff_RBP;
  int32_t index;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar21;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_06;
  UnityEngine_MonoBehaviour_c *pUVar22;
  UnityEngine_MonoBehaviour_c *pUVar23;
  UnityEngine_MonoBehaviour_o *__this_07;
  UnityEngine_Object_o *unaff_R14;
  undefined8 *unaff_R15;
  float fVar24;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  float fVar25;
  long lVar26;
  undefined8 in_XMM1_Qa;
  uint uVar28;
  UnityEngine_Vector3_o UVar29;
  undefined8 uStack_48;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_40;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGStack_28;
  UnityEngine_MonoBehaviour_c *pUStack_20;
  undefined4 uVar27;
  
  uVar27 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
  pUVar22 = (UnityEngine_MonoBehaviour_c *)(__this->fields).__4__this;
  __this_07 = (UnityEngine_MonoBehaviour_o *)0x0;
  UVar29 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  lVar26 = CONCAT44(uVar27,UVar29.fields.z);
  if (pUVar22 != (UnityEngine_MonoBehaviour_c *)0x0) {
    if (*(undefined1 *)((long)&(pUVar22->_1).castClass + 1) != '\0') {
      uVar9 = *(undefined8 *)((long)&(pUVar22->_1).castClass + 4);
      fVar24 = UVar29.fields.x - (float)uVar9;
      fVar25 = UVar29.fields.y - (float)((ulong)uVar9 >> 0x20);
      if (fVar25 * fVar25 + fVar24 * fVar24 < 4.0) {
        return 0;
      }
      *(undefined1 *)((long)&(pUVar22->_1).castClass + 1) = 0;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX_01 >> 8),1);
  }
  bVar4 = il2cpp_runtime_helper_022b2c90(UVar29.fields._0_8_,lVar26);
  pMVar17 = (MethodInfo *)(__this_07->fields).m_CancellationTokenSource;
  pUStack_20 = pUVar22;
  if ((pMVar17 != (MethodInfo *)0x0) &&
     (pGVar11 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pMVar17->invoker_method,
     pGVar11 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0)) {
    pGVar12 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)pMVar17->name;
    pGVar6 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(__this_07->fields).m_CachedPtr;
    if (g_data_057a9eb8 == '\0') {
      pGStack_28 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f383;
      bVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9eb8 = '\x01';
    }
    if (pGVar6 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pGStack_28 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f3a7;
        il2cpp_runtime_helper_02337ed0();
      }
      index = 0;
      pGStack_28 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f3b3;
      pGVar21 = pGVar12;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (pGVar12 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          if ((pGVar12->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            return bVar4;
          }
          pGStack_28 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f3d3;
          pGVar21 = pGVar12;
          Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(pGVar11,pGVar12,0,pMVar17);
          index = (int32_t)pGVar21;
          __this_00 = (pGVar12->fields)._Theme_k__BackingField;
          pGVar21 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
          if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            pGStack_28 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f3e8;
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(pGVar6,pGVar12,method_00);
            return extraout_EAX;
          }
        }
        pGStack_28 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f403;
        uStack_48._0_4_ = il2cpp_runtime_helper_022b2c90();
        pGStack_40 = pGVar12;
        pGStack_28 = pGVar11;
        uStack_48._4_4_ = index;
        if (g_data_057a9eb2 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
          il2cpp_runtime_helper_023445d0(&"slideDown");
          il2cpp_runtime_helper_023445d0(&"percent");
          il2cpp_runtime_helper_023445d0(&"search-results");
          il2cpp_runtime_helper_023445d0(&"searchResultItem");
          il2cpp_runtime_helper_023445d0(&"Button");
          il2cpp_runtime_helper_023445d0(&"search-result-");
          g_data_057a9eb2 = '\x01';
        }
        __this_01 = *(System_Collections_Generic_List_object__o **)&(pGVar21->fields)._buildOnStart;
        __this_06 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
          pGVar6 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                   System_Collections_Generic_List_object___get_Item(__this_01,index,MethodInfo_GisketchSearchEntry_get_Item);
          __this_03 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
          __this_06 = __this_03;
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
          if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (__this_03->fields).type = "Button";
            il2cpp_runtime_helper_022b4080(&__this_03->fields);
            pSVar7 = System_Int32__ToString((int)&uStack_48 + 4,(MethodInfo *)0x0);
            pSVar7 = System_String__Concat_3ae5ba0("search-result-",pSVar7,(MethodInfo *)0x0);
            __this_06 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_03->fields).id;
            (__this_03->fields).id = pSVar7;
            il2cpp_runtime_helper_022b4080();
            if (pGVar6 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
              pSVar7 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                                 (pGVar6,activeScreenId,(MethodInfo *)0x0);
              (__this_03->fields).text = pSVar7;
              il2cpp_runtime_helper_022b4080(&(__this_03->fields).text,pSVar7);
              (__this_03->fields).icon = (pGVar6->fields)._Icon_k__BackingField;
              il2cpp_runtime_helper_022b4080(&(__this_03->fields).icon);
              *(undefined1 *)&(__this_03->fields).hasIcon = 1;
              (__this_03->fields).style = "searchResultItem";
              il2cpp_runtime_helper_022b4080(&(__this_03->fields).style);
              pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
              __this_06 = pGVar8;
              Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar8,(MethodInfo *)0x0);
              if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar8->fields).type = "slideDown";
                il2cpp_runtime_helper_022b4080(&pGVar8->fields);
                (pGVar8->fields).id = "search-results";
                il2cpp_runtime_helper_022b4080(&(pGVar8->fields).id);
                *(undefined4 *)&(pGVar8->fields).text = 0x3df5c28f;
                *(undefined4 *)&(pGVar8->fields).textKey = 0x3ccccccd;
                *(int32_t *)((long)&(pGVar8->fields).textKey + 4) = uStack_48._4_4_;
                (__this_03->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar8;
                il2cpp_runtime_helper_022b4080(&(__this_03->fields).motion);
                __this_04 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                            il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
                Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_04,(MethodInfo *)0x0);
                pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                __this_06 = pGVar8;
                Gisketch_Aottg2UI_Data_GisketchLength___ctor
                          ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8,(MethodInfo *)0x0);
                if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  *(undefined4 *)&(pGVar8->fields).type = 0x42c80000;
                  __this_06 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar8->fields).id;
                  (pGVar8->fields).id = "percent";
                  il2cpp_runtime_helper_022b4080();
                  if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                    (__this_04->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar8;
                    il2cpp_runtime_helper_022b4080(&(__this_04->fields).width,pGVar8);
                    (__this_03->fields).search =
                         (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_04;
                    il2cpp_runtime_helper_022b4080(&(__this_03->fields).search);
                    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition);
                    __this_06 = pGVar8;
                    Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8,(MethodInfo *)0x0);
                    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                      *(undefined1 *)((long)&(pGVar8->fields).style + 1) = 1;
                      (__this_03->fields).popover = (System_String_o *)pGVar8;
                      il2cpp_runtime_helper_022b4080(&(__this_03->fields).popover,pGVar8);
                      return (bool_conflict)__this_03;
                    }
                  }
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
        return extraout_EAX_00;
      }
    }
    return bVar4;
  }
  pGVar11 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)il2cpp_runtime_helper_022b2c90();
  uVar28 = (uint)((ulong)lVar26 >> 0x20);
  pUVar22 = __this_07[1].klass;
  if (pUVar22 != (UnityEngine_MonoBehaviour_c *)0x0) {
    uVar14 = *(uint *)&__this_07[1].monitor;
    uVar10 = (ulong)uVar14;
    pGStack_28 = pGVar11;
    if (method == (MethodInfo *)0x0) {
      __this_07 = (UnityEngine_MonoBehaviour_o *)0x0;
      UVar29 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      lVar26 = (ulong)uVar28 << 0x20;
      uVar9 = UVar29.fields._0_8_;
      cVar2 = *(undefined1 *)((long)&(pUVar22->_1).castClass + 1);
      pGVar11 = extraout_RAX_03;
    }
    else {
      uVar9 = *(undefined8 *)&method[2].field_0x54;
      cVar2 = *(undefined1 *)((long)&(pUVar22->_1).castClass + 1);
    }
    if (cVar2 != '\0') {
      uVar1 = *(undefined8 *)((long)&(pUVar22->_1).castClass + 4);
      fVar24 = (float)uVar9 - (float)uVar1;
      fVar25 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
      fVar25 = fVar25 * fVar25;
      fVar24 = fVar25 + fVar24 * fVar24;
      lVar26 = CONCAT44(fVar25,fVar24);
      if (fVar24 < 4.0) goto label_03b9049b;
      *(undefined1 *)((long)&(pUVar22->_1).castClass + 1) = 0;
    }
    if (g_data_057a9eb5 == '\0') {
      __this_07 = (UnityEngine_MonoBehaviour_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pSVar3 = (pUVar22->_1).this_arg.data;
    if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      pGVar12 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)il2cpp_runtime_helper_022b2c90();
      uVar28 = (uint)((ulong)lVar26 >> 0x20);
      ppGVar20 = &pGStack_40;
      pUVar23 = __this_07[1].klass;
      if (pUVar23 != (UnityEngine_MonoBehaviour_c *)0x0) {
        uVar14 = *(uint *)&__this_07[1].monitor;
        pGStack_40 = pGVar12;
        if (method == (MethodInfo *)0x0) {
          __this_07 = (UnityEngine_MonoBehaviour_o *)0x0;
          uStack_48 = 0x3b9053c;
          UVar29 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          lVar26 = (ulong)uVar28 << 0x20;
          uVar9 = UVar29.fields._0_8_;
          cVar2 = *(undefined1 *)((long)&(pUVar23->_1).castClass + 1);
          pGVar12 = extraout_RAX_05;
        }
        else {
          uVar9 = *(undefined8 *)&method[2].field_0x54;
          cVar2 = *(undefined1 *)((long)&(pUVar23->_1).castClass + 1);
        }
        if (cVar2 != '\0') {
          uVar1 = *(undefined8 *)((long)&(pUVar23->_1).castClass + 4);
          fVar24 = (float)uVar9 - (float)uVar1;
          fVar25 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
          fVar25 = fVar25 * fVar25;
          fVar24 = fVar25 + fVar24 * fVar24;
          lVar26 = CONCAT44(fVar25,fVar24);
          if (fVar24 < 4.0) goto label_03b9057b;
          *(undefined1 *)((long)&(pUVar23->_1).castClass + 1) = 0;
        }
        if (g_data_057a9eb5 == '\0') {
          __this_07 = (UnityEngine_MonoBehaviour_o *)&MethodInfo_Int32_get_Count;
          uStack_48 = 0x3b904eb;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pSVar3 = (pUVar23->_1).this_arg.data;
        if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
          uStack_48 = 0x3b90587;
          iVar5 = il2cpp_runtime_helper_022b2c90();
          pUVar22 = __this_07[1].klass;
          if (pUVar22 != (UnityEngine_MonoBehaviour_c *)0x0) {
            iVar13 = *(int *)&__this_07[1].monitor;
            uStack_48 = (ulong)uVar14;
            if (g_data_057a9eb5 == '\0') {
              __this_07 = (UnityEngine_MonoBehaviour_o *)&MethodInfo_Int32_get_Count;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9eb5 = '\x01';
            }
            pSVar3 = (pUVar22->_1).this_arg.data;
            if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              UnityEngine_MonoBehaviour___ctor(__this_07,(MethodInfo *)0x0);
              return extraout_EAX_03;
            }
            iVar5 = (pSVar3->fields)._size;
            iVar16 = 8;
            if (iVar5 < 9) {
              iVar16 = iVar5;
            }
            if (iVar16 != 0) {
              (((UnityEngine_Vector2_o *)&(pUVar22->_1).declaringType)->fields).y =
                   (float)((iVar13 % iVar16 + iVar16) % iVar16);
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                        ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pUVar22,method);
              uVar9 = extraout_RAX_06;
              pUVar18 = pUVar23;
              uVar10 = uStack_48;
              goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
            }
          }
          return iVar5;
        }
        uVar28 = (pSVar3->fields)._size;
        pGVar12 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(ulong)uVar28;
        uVar15 = 8;
        if ((int)uVar28 < 9) {
          uVar15 = uVar28;
        }
        if (uVar15 != 0) {
          (((UnityEngine_Vector2_o *)&(pUVar23->_1).declaringType)->fields).y =
               (float)((int)((int)uVar14 % (int)uVar15 + uVar15) % (int)uVar15);
          uStack_48 = 0x3b90527;
          Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                    ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pUVar23,method);
          ppGVar20 = (Gisketch_Aottg2UI_GisketchUIRoot_o **)&pGStack_28;
          uVar9 = extraout_RAX_04;
          pUVar18 = pUVar22;
          pUVar22 = pUVar23;
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult:
          while( true ) {
            while( true ) {
              uVar27 = (undefined4)((ulong)lVar26 >> 0x20);
              bVar4 = (bool_conflict)uVar9;
              *(undefined8 **)((long)ppGVar20 + -8) = unaff_R15;
              *(UnityEngine_Object_o **)((long)ppGVar20 + -0x10) = unaff_R14;
              *(UnityEngine_MonoBehaviour_c **)((long)ppGVar20 + -0x18) = pUVar18;
              if (g_data_057a9eb7 == '\0') {
                *(undefined8 *)((long)ppGVar20 + -0x20) = 0x3b8fded;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                *(undefined8 *)((long)ppGVar20 + -0x20) = 0x3b8fdf9;
                il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
                *(undefined8 *)((long)ppGVar20 + -0x20) = 0x3b8fe05;
                bVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057a9eb7 = '\x01';
              }
              fVar24 = (((UnityEngine_Vector2_o *)&(pUVar22->_1).declaringType)->fields).y;
              pMVar17 = (MethodInfo *)(ulong)(uint)fVar24;
              if ((int)fVar24 < 0) {
                return bVar4;
              }
              __this_02 = *(System_Collections_Generic_List_GisketchDropdownItemFeedback__o **)
                           &(pUVar22->_1).this_arg.bits;
              pUVar23 = (UnityEngine_MonoBehaviour_c *)0x0;
              if (__this_02 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
                if ((__this_02->fields)._size <= (int)fVar24) {
                  return bVar4;
                }
                unaff_R15 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
                *(undefined8 *)((long)ppGVar20 + -0x20) = 0x3b8fe30;
                unaff_R14 = (UnityEngine_Object_o *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_02,(int32_t)fVar24,
                                       MethodInfo_GisketchDropdownItemFeedback_get_Item);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)((long)ppGVar20 + -0x20) = 0x3b8fe4b;
                  il2cpp_runtime_helper_02337ed0();
                }
                pMVar17 = (MethodInfo *)0x0;
                *(undefined8 *)((long)ppGVar20 + -0x20) = 0x3b8fe57;
                bVar4 = UnityEngine_Object__op_Equality
                                  (unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar4 != '\0') {
                  return bVar4;
                }
                pUVar23 = *(UnityEngine_MonoBehaviour_c **)&(pUVar22->_1).this_arg.bits;
                if (pUVar23 != (UnityEngine_MonoBehaviour_c *)0x0) {
                  fVar24 = (((UnityEngine_Vector2_o *)&(pUVar22->_1).declaringType)->fields).y;
                  pMVar17 = (MethodInfo *)(ulong)(uint)fVar24;
                  *(undefined8 *)((long)ppGVar20 + -0x20) = 0x3b8fe75;
                  __this_05 = (UnityEngine_Component_o *)
                              System_Collections_Generic_List_object___get_Item
                                        ((System_Collections_Generic_List_object__o *)pUVar23,(int32_t)fVar24,
                                         MethodInfo_GisketchDropdownItemFeedback_get_Item);
                  if (__this_05 != (UnityEngine_Component_o *)0x0) {
                    pMVar17 = (MethodInfo *)0x0;
                    *(undefined8 *)((long)ppGVar20 + -0x20) = 0x3b8fe84;
                    focused = UnityEngine_Component__get_gameObject(__this_05,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,pMVar17);
                    return extraout_EAX_01;
                  }
                }
              }
              *(undefined8 *)((long)ppGVar20 + -0x20) = 0x3b8fe9e;
              uVar9 = il2cpp_runtime_helper_022b2c90();
              *(ulong *)((long)ppGVar20 + -0x20) = uVar10;
              *(UnityEngine_MonoBehaviour_c **)((long)ppGVar20 + -0x28) = pUVar22;
              *(undefined8 *)((long)ppGVar20 + -0x30) = uVar9;
              pUVar22 = (UnityEngine_MonoBehaviour_c *)0x0;
              *(undefined8 *)((long)ppGVar20 + -0x38) = 0x3b8feaf;
              method_01 = pMVar17;
              UVar29 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
              lVar26 = CONCAT44(uVar27,UVar29.fields.z);
              uVar9 = UVar29.fields._0_8_;
              if (*(undefined1 *)((long)&(pUVar23->_1).castClass + 1) != '\0') {
                uVar9 = *(undefined8 *)((long)&(pUVar23->_1).castClass + 4);
                fVar24 = UVar29.fields.x - (float)uVar9;
                fVar25 = UVar29.fields.y - (float)((ulong)uVar9 >> 0x20);
                fVar25 = fVar25 * fVar25;
                fVar24 = fVar25 + fVar24 * fVar24;
                lVar26 = CONCAT44(fVar25,fVar24);
                uVar9 = 0x40800000;
                if (fVar24 < 4.0) {
                  return extraout_EAX_02;
                }
                *(undefined1 *)((long)&(pUVar23->_1).castClass + 1) = 0;
              }
              if (g_data_057a9eb5 == '\0') {
                pUVar22 = (UnityEngine_MonoBehaviour_c *)&MethodInfo_Int32_get_Count;
                *(undefined8 *)((long)ppGVar20 + -0x38) = 0x3b8fef1;
                il2cpp_runtime_helper_023445d0(uVar9,lVar26);
                g_data_057a9eb5 = '\x01';
              }
              pSVar3 = (pUVar23->_1).this_arg.data;
              if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
              iVar5 = (pSVar3->fields)._size;
              iVar13 = 8;
              if (iVar5 < 9) {
                iVar13 = iVar5;
              }
              if (iVar13 == 0) {
                return iVar5;
              }
              (((UnityEngine_Vector2_o *)&(pUVar23->_1).declaringType)->fields).y =
                   (float)(((int)((long)((ulong)(uint)((int)pMVar17 >> 0x1f) << 0x20 |
                                        (ulong)pMVar17 & 0xffffffff) % (long)iVar13) + iVar13) % iVar13);
              *(undefined8 *)((long)ppGVar20 + -0x38) = 0x3b8ff29;
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                        ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pUVar23,method_01);
              uVar10 = *(ulong *)((long)ppGVar20 + -0x20);
              uVar9 = extraout_RAX;
              pUVar18 = *(UnityEngine_MonoBehaviour_c **)((long)ppGVar20 + -0x28);
              ppGVar20 = (Gisketch_Aottg2UI_GisketchUIRoot_o **)((long)ppGVar20 + -0x18);
              pUVar22 = pUVar23;
            }
            *(undefined8 *)((long)ppGVar20 + -0x38) = 0x3b8ff43;
            uVar10 = il2cpp_runtime_helper_022b2c90();
            *(ulong *)((long)ppGVar20 + -0x38) = (ulong)pMVar17 & 0xffffffff;
            *(UnityEngine_MonoBehaviour_c **)((long)ppGVar20 + -0x40) = pUVar23;
            *(ulong *)((long)ppGVar20 + -0x48) = uVar10;
            if (*(undefined1 *)((long)&(pUVar22->_1).castClass + 1) != '\0') {
              uVar9 = *(undefined8 *)((long)&(pUVar22->_1).castClass + 4);
              fVar24 = (float)extraout_XMM0_Qa - (float)uVar9;
              fVar25 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)((ulong)uVar9 >> 0x20);
              fVar25 = fVar25 * fVar25;
              fVar24 = fVar25 + fVar24 * fVar24;
              lVar26 = CONCAT44(fVar25,fVar24);
              if (fVar24 < 4.0) break;
              *(undefined1 *)((long)&(pUVar22->_1).castClass + 1) = 0;
            }
            pMVar17 = method_01;
            pUVar23 = pUVar22;
            if (g_data_057a9eb5 == '\0') {
              pUVar23 = (UnityEngine_MonoBehaviour_c *)&MethodInfo_Int32_get_Count;
              *(undefined8 *)((long)ppGVar20 + -0x50) = 0x3b8ff9a;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9eb5 = '\x01';
            }
            pSVar3 = (pUVar22->_1).this_arg.data;
            if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
              *(undefined8 *)((long)ppGVar20 + -0x50) = 0x3b8ffec;
              uVar9 = il2cpp_runtime_helper_022b2c90();
              if (*(undefined1 *)((long)&(pUVar23->_1).castClass + 1) != '\0') {
                uVar1 = *(undefined8 *)((long)&(pUVar23->_1).castClass + 4);
                fVar24 = (float)extraout_XMM0_Qa_00 - (float)uVar1;
                fVar25 = (float)((ulong)extraout_XMM0_Qa_00 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
                if (fVar25 * fVar25 + fVar24 * fVar24 < 4.0) {
                  return 0;
                }
                *(undefined1 *)((long)&(pUVar23->_1).castClass + 1) = 0;
              }
              return (bool_conflict)CONCAT71((int7)((ulong)uVar9 >> 8),1);
            }
            uVar28 = (pSVar3->fields)._size;
            uVar10 = (ulong)uVar28;
            uVar14 = 8;
            if ((int)uVar28 < 9) {
              uVar14 = uVar28;
            }
            if (uVar14 == 0) break;
            (((UnityEngine_Vector2_o *)&(pUVar22->_1).declaringType)->fields).y =
                 (float)((int)((int)((long)((ulong)(uint)((int)method_01 >> 0x1f) << 0x20 |
                                           (ulong)method_01 & 0xffffffff) % (long)(int)uVar14) + uVar14) %
                        (int)uVar14);
            *(undefined8 *)((long)ppGVar20 + -0x50) = 0x3b8ffd2;
            Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                      ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pUVar22,pMVar17);
            plVar19 = (long *)((long)ppGVar20 + -0x40);
            uVar10 = *(ulong *)((long)ppGVar20 + -0x38);
            ppGVar20 = (Gisketch_Aottg2UI_GisketchUIRoot_o **)((long)ppGVar20 + -0x30);
            uVar9 = extraout_RAX_00;
            pUVar18 = (UnityEngine_MonoBehaviour_c *)*plVar19;
          }
          return (bool_conflict)uVar10;
        }
      }
label_03b9057b:
      return (bool_conflict)pGVar12;
    }
    uVar28 = (pSVar3->fields)._size;
    pGVar11 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(ulong)uVar28;
    uVar15 = 8;
    if ((int)uVar28 < 9) {
      uVar15 = uVar28;
    }
    if (uVar15 != 0) {
      (((UnityEngine_Vector2_o *)&(pUVar22->_1).declaringType)->fields).y =
           (float)((int)((int)uVar14 % (int)uVar15 + uVar15) % (int)uVar15);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pUVar22,method);
      uVar9 = extraout_RAX_02;
      pUVar18 = pUStack_20;
      ppGVar20 = (Gisketch_Aottg2UI_GisketchUIRoot_o **)&stack0xfffffffffffffff0;
      uVar10 = unaff_RBP;
      goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
    }
  }
label_03b9049b:
  return (bool_conflict)pGVar11;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass21_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x3b8f800

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl.<>c__DisplayClass21_1$$<WireResults>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1___WireResults_b__0 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o* __this, const MethodInfo* method);
// 0x3b903a0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1___WireResults_b__0
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_02;
  void *pvVar5;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_03;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar6;
  bool_conflict bVar7;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_04;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_05;
  UnityEngine_Component_o *__this_06;
  UnityEngine_GameObject_o *focused;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  MethodInfo *pMVar14;
  MethodInfo *method_00;
  System_String_o *activeScreenId;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *unaff_RBX;
  undefined8 *puVar15;
  Gisketch_Aottg2UI_GisketchUIRoot_o **ppGVar16;
  ulong unaff_RBP;
  ulong uVar17;
  int32_t index;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar18;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_07;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *__this_08;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *pGVar19;
  UnityEngine_Object_o *unaff_R14;
  undefined8 *unaff_R15;
  float fVar20;
  float fVar21;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar22;
  long in_XMM1_Qa;
  uint uVar23;
  UnityEngine_Vector3_o UVar24;
  undefined8 uStack_40;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_38;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGStack_20;
  
  pMVar14 = (MethodInfo *)(__this->fields).CS___8__locals1;
  if ((pMVar14 != (MethodInfo *)0x0) &&
     (__this_03 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pMVar14->invoker_method,
     __this_03 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0)) {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)pMVar14->name;
    pGVar8 = (__this->fields).result;
    if (g_data_057a9eb8 == '\0') {
      pGStack_20 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f383;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9eb8 = '\x01';
    }
    if (pGVar8 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pGStack_20 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f3a7;
        il2cpp_runtime_helper_02337ed0();
      }
      index = 0;
      pGStack_20 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f3b3;
      pGVar18 = root;
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          if ((root->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            return;
          }
          pGStack_20 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f3d3;
          pGVar18 = root;
          Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this_03,root,0,pMVar14);
          index = (int32_t)pGVar18;
          __this_00 = (root->fields)._Theme_k__BackingField;
          pGVar18 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
          if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            pGStack_20 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f3e8;
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(pGVar8,root,method_00);
            return;
          }
        }
        pGStack_20 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8f403;
        uStack_40._0_4_ = il2cpp_runtime_helper_022b2c90();
        pGStack_38 = root;
        pGStack_20 = __this_03;
        uStack_40._4_4_ = index;
        if (g_data_057a9eb2 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
          il2cpp_runtime_helper_023445d0(&"slideDown");
          il2cpp_runtime_helper_023445d0(&"percent");
          il2cpp_runtime_helper_023445d0(&"search-results");
          il2cpp_runtime_helper_023445d0(&"searchResultItem");
          il2cpp_runtime_helper_023445d0(&"Button");
          il2cpp_runtime_helper_023445d0(&"search-result-");
          g_data_057a9eb2 = '\x01';
        }
        __this_01 = *(System_Collections_Generic_List_object__o **)&(pGVar18->fields)._buildOnStart;
        __this_07 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
          pGVar8 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                   System_Collections_Generic_List_object___get_Item(__this_01,index,MethodInfo_GisketchSearchEntry_get_Item);
          __this_04 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
          __this_07 = __this_04;
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_04,(MethodInfo *)0x0);
          if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (__this_04->fields).type = "Button";
            il2cpp_runtime_helper_022b4080(&__this_04->fields);
            pSVar9 = System_Int32__ToString((int)&uStack_40 + 4,(MethodInfo *)0x0);
            pSVar9 = System_String__Concat_3ae5ba0("search-result-",pSVar9,(MethodInfo *)0x0);
            __this_07 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_04->fields).id;
            (__this_04->fields).id = pSVar9;
            il2cpp_runtime_helper_022b4080();
            if (pGVar8 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
              pSVar9 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                                 (pGVar8,activeScreenId,(MethodInfo *)0x0);
              (__this_04->fields).text = pSVar9;
              il2cpp_runtime_helper_022b4080(&(__this_04->fields).text,pSVar9);
              (__this_04->fields).icon = (pGVar8->fields)._Icon_k__BackingField;
              il2cpp_runtime_helper_022b4080(&(__this_04->fields).icon);
              *(undefined1 *)&(__this_04->fields).hasIcon = 1;
              (__this_04->fields).style = "searchResultItem";
              il2cpp_runtime_helper_022b4080(&(__this_04->fields).style);
              pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
              __this_07 = pGVar10;
              Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar10,(MethodInfo *)0x0);
              if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar10->fields).type = "slideDown";
                il2cpp_runtime_helper_022b4080(&pGVar10->fields);
                (pGVar10->fields).id = "search-results";
                il2cpp_runtime_helper_022b4080(&(pGVar10->fields).id);
                *(undefined4 *)&(pGVar10->fields).text = 0x3df5c28f;
                *(undefined4 *)&(pGVar10->fields).textKey = 0x3ccccccd;
                *(int32_t *)((long)&(pGVar10->fields).textKey + 4) = uStack_40._4_4_;
                (__this_04->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar10;
                il2cpp_runtime_helper_022b4080(&(__this_04->fields).motion);
                __this_05 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                            il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
                Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_05,(MethodInfo *)0x0);
                pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                __this_07 = pGVar10;
                Gisketch_Aottg2UI_Data_GisketchLength___ctor
                          ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10,(MethodInfo *)0x0);
                if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  *(undefined4 *)&(pGVar10->fields).type = 0x42c80000;
                  __this_07 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar10->fields).id;
                  (pGVar10->fields).id = "percent";
                  il2cpp_runtime_helper_022b4080();
                  if (__this_05 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                    (__this_05->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar10;
                    il2cpp_runtime_helper_022b4080(&(__this_05->fields).width,pGVar10);
                    (__this_04->fields).search =
                         (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_05;
                    il2cpp_runtime_helper_022b4080(&(__this_04->fields).search);
                    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                              il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition);
                    __this_07 = pGVar10;
                    Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10,(MethodInfo *)0x0)
                    ;
                    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                      *(undefined1 *)((long)&(pGVar10->fields).style + 1) = 1;
                      (__this_04->fields).popover = (System_String_o *)pGVar10;
                      il2cpp_runtime_helper_022b4080(&(__this_04->fields).popover,pGVar10);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
  pGStack_20 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)il2cpp_runtime_helper_022b2c90();
  uVar23 = (uint)((ulong)in_XMM1_Qa >> 0x20);
  __this_08 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)
              ((UnityEngine_MonoBehaviour_o *)(__this + 1))->klass;
  if (__this_08 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)0x0) {
    uVar3 = *(uint *)&((UnityEngine_MonoBehaviour_o *)(__this + 1))->monitor;
    uVar17 = (ulong)uVar3;
    if (method == (MethodInfo *)0x0) {
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o *)0x0;
      UVar24 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      in_XMM1_Qa = (ulong)uVar23 << 0x20;
      uVar11 = UVar24.fields._0_8_;
      cVar2 = *(undefined1 *)((long)&(__this_08->_1).castClass + 1);
    }
    else {
      uVar11 = *(undefined8 *)&method[2].field_0x54;
      cVar2 = *(undefined1 *)((long)&(__this_08->_1).castClass + 1);
    }
    if (cVar2 != '\0') {
      uVar1 = *(undefined8 *)((long)&(__this_08->_1).castClass + 4);
      fVar20 = (float)uVar11 - (float)uVar1;
      fVar21 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
      fVar21 = fVar21 * fVar21;
      fVar20 = fVar21 + fVar20 * fVar20;
      in_XMM1_Qa = CONCAT44(fVar21,fVar20);
      if (fVar20 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(__this_08->_1).castClass + 1) = 0;
    }
    if (g_data_057a9eb5 == '\0') {
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o *)&MethodInfo_Int32_get_Count;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pSVar6 = (__this_08->_1).this_arg.data;
    if (pSVar6 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      pGStack_38 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)il2cpp_runtime_helper_022b2c90();
      uVar23 = (uint)((ulong)in_XMM1_Qa >> 0x20);
      ppGVar16 = &pGStack_38;
      pGVar19 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)
                ((UnityEngine_MonoBehaviour_o *)(__this + 1))->klass;
      if (pGVar19 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)0x0) {
        uVar3 = *(uint *)&((UnityEngine_MonoBehaviour_o *)(__this + 1))->monitor;
        if (method == (MethodInfo *)0x0) {
          __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o *)0x0;
          uStack_40 = 0x3b9053c;
          UVar24 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
          in_XMM1_Qa = (ulong)uVar23 << 0x20;
          uVar11 = UVar24.fields._0_8_;
          cVar2 = *(undefined1 *)((long)&(pGVar19->_1).castClass + 1);
        }
        else {
          uVar11 = *(undefined8 *)&method[2].field_0x54;
          cVar2 = *(undefined1 *)((long)&(pGVar19->_1).castClass + 1);
        }
        if (cVar2 != '\0') {
          uVar1 = *(undefined8 *)((long)&(pGVar19->_1).castClass + 4);
          fVar20 = (float)uVar11 - (float)uVar1;
          fVar21 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
          fVar21 = fVar21 * fVar21;
          fVar20 = fVar21 + fVar20 * fVar20;
          in_XMM1_Qa = CONCAT44(fVar21,fVar20);
          if (fVar20 < 4.0) {
            return;
          }
          *(undefined1 *)((long)&(pGVar19->_1).castClass + 1) = 0;
        }
        if (g_data_057a9eb5 == '\0') {
          __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o *)
                   &MethodInfo_Int32_get_Count;
          uStack_40 = 0x3b904eb;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pSVar6 = (pGVar19->_1).this_arg.data;
        if (pSVar6 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
          uStack_40 = 0x3b90587;
          il2cpp_runtime_helper_022b2c90();
          __this_08 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)
                      ((UnityEngine_MonoBehaviour_o *)(__this + 1))->klass;
          if (__this_08 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)0x0)
          {
            iVar4 = *(int *)&((UnityEngine_MonoBehaviour_o *)(__this + 1))->monitor;
            uStack_40 = (ulong)uVar3;
            if (g_data_057a9eb5 == '\0') {
              __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_o *)
                       &MethodInfo_Int32_get_Count;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9eb5 = '\x01';
            }
            pSVar6 = (__this_08->_1).this_arg.data;
            if (pSVar6 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
              il2cpp_runtime_helper_022b2c90();
              UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
              return;
            }
            iVar12 = (pSVar6->fields)._size;
            iVar13 = 8;
            if (iVar12 < 9) {
              iVar13 = iVar12;
            }
            if (iVar13 != 0) {
              (((UnityEngine_Vector2_o *)&(__this_08->_1).declaringType)->fields).y =
                   (float)((iVar4 % iVar13 + iVar13) % iVar13);
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                        ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)__this_08,method);
              unaff_RBX = pGVar19;
              uVar17 = uStack_40;
              goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
            }
          }
          return;
        }
        iVar4 = (pSVar6->fields)._size;
        iVar12 = 8;
        if (iVar4 < 9) {
          iVar12 = iVar4;
        }
        if (iVar12 != 0) {
          (((UnityEngine_Vector2_o *)&(pGVar19->_1).declaringType)->fields).y =
               (float)(((int)uVar3 % iVar12 + iVar12) % iVar12);
          uStack_40 = 0x3b90527;
          Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                    ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pGVar19,method);
          ppGVar16 = (Gisketch_Aottg2UI_GisketchUIRoot_o **)&pGStack_20;
          unaff_RBX = __this_08;
          __this_08 = pGVar19;
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult:
          while( true ) {
            while( true ) {
              uVar22 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
              *(undefined8 **)((long)ppGVar16 + -8) = unaff_R15;
              *(UnityEngine_Object_o **)((long)ppGVar16 + -0x10) = unaff_R14;
              *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c **)
               ((long)ppGVar16 + -0x18) = unaff_RBX;
              if (g_data_057a9eb7 == '\0') {
                *(undefined8 *)((long)ppGVar16 + -0x20) = 0x3b8fded;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                *(undefined8 *)((long)ppGVar16 + -0x20) = 0x3b8fdf9;
                il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
                *(undefined8 *)((long)ppGVar16 + -0x20) = 0x3b8fe05;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057a9eb7 = '\x01';
              }
              fVar20 = (((UnityEngine_Vector2_o *)&(__this_08->_1).declaringType)->fields).y;
              pMVar14 = (MethodInfo *)(ulong)(uint)fVar20;
              if ((int)fVar20 < 0) {
                return;
              }
              __this_02 = *(System_Collections_Generic_List_GisketchDropdownItemFeedback__o **)
                           &(__this_08->_1).this_arg.bits;
              pGVar19 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)0x0;
              if (__this_02 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
                if ((__this_02->fields)._size <= (int)fVar20) {
                  return;
                }
                unaff_R15 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
                *(undefined8 *)((long)ppGVar16 + -0x20) = 0x3b8fe30;
                unaff_R14 = (UnityEngine_Object_o *)
                            System_Collections_Generic_List_object___get_Item
                                      ((System_Collections_Generic_List_object__o *)__this_02,(int32_t)fVar20,
                                       MethodInfo_GisketchDropdownItemFeedback_get_Item);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  *(undefined8 *)((long)ppGVar16 + -0x20) = 0x3b8fe4b;
                  il2cpp_runtime_helper_02337ed0();
                }
                pMVar14 = (MethodInfo *)0x0;
                *(undefined8 *)((long)ppGVar16 + -0x20) = 0x3b8fe57;
                bVar7 = UnityEngine_Object__op_Equality
                                  (unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  return;
                }
                pGVar19 = *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c **)
                           &(__this_08->_1).this_arg.bits;
                if (pGVar19 !=
                    (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)0x0) {
                  fVar20 = (((UnityEngine_Vector2_o *)&(__this_08->_1).declaringType)->fields).y;
                  pMVar14 = (MethodInfo *)(ulong)(uint)fVar20;
                  *(undefined8 *)((long)ppGVar16 + -0x20) = 0x3b8fe75;
                  __this_06 = (UnityEngine_Component_o *)
                              System_Collections_Generic_List_object___get_Item
                                        ((System_Collections_Generic_List_object__o *)pGVar19,(int32_t)fVar20,
                                         MethodInfo_GisketchDropdownItemFeedback_get_Item);
                  if (__this_06 != (UnityEngine_Component_o *)0x0) {
                    pMVar14 = (MethodInfo *)0x0;
                    *(undefined8 *)((long)ppGVar16 + -0x20) = 0x3b8fe84;
                    focused = UnityEngine_Component__get_gameObject(__this_06,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,pMVar14);
                    return;
                  }
                }
              }
              *(undefined8 *)((long)ppGVar16 + -0x20) = 0x3b8fe9e;
              uVar11 = il2cpp_runtime_helper_022b2c90();
              *(ulong *)((long)ppGVar16 + -0x20) = uVar17;
              *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c **)
               ((long)ppGVar16 + -0x28) = __this_08;
              *(undefined8 *)((long)ppGVar16 + -0x30) = uVar11;
              __this_08 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)0x0;
              *(undefined8 *)((long)ppGVar16 + -0x38) = 0x3b8feaf;
              method_01 = pMVar14;
              UVar24 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
              in_XMM1_Qa = CONCAT44(uVar22,UVar24.fields.z);
              uVar11 = UVar24.fields._0_8_;
              if (*(undefined1 *)((long)&(pGVar19->_1).castClass + 1) != '\0') {
                uVar11 = *(undefined8 *)((long)&(pGVar19->_1).castClass + 4);
                fVar20 = UVar24.fields.x - (float)uVar11;
                fVar21 = UVar24.fields.y - (float)((ulong)uVar11 >> 0x20);
                fVar21 = fVar21 * fVar21;
                fVar20 = fVar21 + fVar20 * fVar20;
                in_XMM1_Qa = CONCAT44(fVar21,fVar20);
                uVar11 = 0x40800000;
                if (fVar20 < 4.0) {
                  return;
                }
                *(undefined1 *)((long)&(pGVar19->_1).castClass + 1) = 0;
              }
              if (g_data_057a9eb5 == '\0') {
                __this_08 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)
                            &MethodInfo_Int32_get_Count;
                *(undefined8 *)((long)ppGVar16 + -0x38) = 0x3b8fef1;
                il2cpp_runtime_helper_023445d0(uVar11,in_XMM1_Qa);
                g_data_057a9eb5 = '\x01';
              }
              pvVar5 = (pGVar19->_1).this_arg.data;
              if (pvVar5 == (void *)0x0) break;
              iVar4 = *(int *)((long)pvVar5 + 0x18);
              iVar12 = 8;
              if (iVar4 < 9) {
                iVar12 = iVar4;
              }
              if (iVar12 == 0) {
                return;
              }
              *(int *)((long)&(pGVar19->_1).declaringType + 4) =
                   ((int)((long)((ulong)(uint)((int)pMVar14 >> 0x1f) << 0x20 | (ulong)pMVar14 & 0xffffffff) %
                         (long)iVar12) + iVar12) % iVar12;
              *(undefined8 *)((long)ppGVar16 + -0x38) = 0x3b8ff29;
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                        ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pGVar19,method_01);
              uVar17 = *(ulong *)((long)ppGVar16 + -0x20);
              unaff_RBX = *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c **)
                           ((long)ppGVar16 + -0x28);
              ppGVar16 = (Gisketch_Aottg2UI_GisketchUIRoot_o **)((long)ppGVar16 + -0x18);
              __this_08 = pGVar19;
            }
            *(undefined8 *)((long)ppGVar16 + -0x38) = 0x3b8ff43;
            uVar11 = il2cpp_runtime_helper_022b2c90();
            *(ulong *)((long)ppGVar16 + -0x38) = (ulong)pMVar14 & 0xffffffff;
            *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c **)
             ((long)ppGVar16 + -0x40) = pGVar19;
            *(undefined8 *)((long)ppGVar16 + -0x48) = uVar11;
            if (*(undefined1 *)((long)&(__this_08->_1).castClass + 1) != '\0') {
              uVar11 = *(undefined8 *)((long)&(__this_08->_1).castClass + 4);
              fVar20 = (float)extraout_XMM0_Qa - (float)uVar11;
              fVar21 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)((ulong)uVar11 >> 0x20);
              fVar21 = fVar21 * fVar21;
              fVar20 = fVar21 + fVar20 * fVar20;
              in_XMM1_Qa = CONCAT44(fVar21,fVar20);
              if (fVar20 < 4.0) {
                return;
              }
              *(undefined1 *)((long)&(__this_08->_1).castClass + 1) = 0;
            }
            pMVar14 = method_01;
            pGVar19 = __this_08;
            if (g_data_057a9eb5 == '\0') {
              pGVar19 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)
                        &MethodInfo_Int32_get_Count;
              *(undefined8 *)((long)ppGVar16 + -0x50) = 0x3b8ff9a;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9eb5 = '\x01';
            }
            pvVar5 = (__this_08->_1).this_arg.data;
            if (pvVar5 == (void *)0x0) break;
            iVar4 = *(int *)((long)pvVar5 + 0x18);
            iVar12 = 8;
            if (iVar4 < 9) {
              iVar12 = iVar4;
            }
            if (iVar12 == 0) {
              return;
            }
            *(int *)((long)&(__this_08->_1).declaringType + 4) =
                 ((int)((long)((ulong)(uint)((int)method_01 >> 0x1f) << 0x20 | (ulong)method_01 & 0xffffffff)
                       % (long)iVar12) + iVar12) % iVar12;
            *(undefined8 *)((long)ppGVar16 + -0x50) = 0x3b8ffd2;
            Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                      ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)__this_08,pMVar14);
            puVar15 = (undefined8 *)((long)ppGVar16 + -0x40);
            uVar17 = *(ulong *)((long)ppGVar16 + -0x38);
            ppGVar16 = (Gisketch_Aottg2UI_GisketchUIRoot_o **)((long)ppGVar16 + -0x30);
            unaff_RBX = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___c__DisplayClass21_1_c *)
                        *puVar15;
          }
          *(undefined8 *)((long)ppGVar16 + -0x50) = 0x3b8ffec;
          uVar11 = il2cpp_runtime_helper_022b2c90();
          if (*(undefined1 *)((long)&(pGVar19->_1).castClass + 1) != '\0') {
            uVar1 = *(undefined8 *)((long)&(pGVar19->_1).castClass + 4);
            fVar20 = (float)uVar11 - (float)uVar1;
            fVar21 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
            if (fVar21 * fVar21 + fVar20 * fVar20 < 4.0) {
              return;
            }
            *(undefined1 *)((long)&(pGVar19->_1).castClass + 1) = 0;
          }
          return;
        }
      }
      return;
    }
    iVar4 = (pSVar6->fields)._size;
    iVar12 = 8;
    if (iVar4 < 9) {
      iVar12 = iVar4;
    }
    if (iVar12 != 0) {
      (((UnityEngine_Vector2_o *)&(__this_08->_1).declaringType)->fields).y =
           (float)(((int)uVar3 % iVar12 + iVar12) % iVar12);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)__this_08,method);
      ppGVar16 = (Gisketch_Aottg2UI_GisketchUIRoot_o **)&stack0xfffffffffffffff8;
      uVar17 = unaff_RBP;
      goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Setup (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, TMPro_TMP_InputField_o* input, UnityEngine_UI_Button_o* submit, const MethodInfo* method);
// 0x3b8dbd0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Setup
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,TMPro_TMP_InputField_o *input,
               UnityEngine_UI_Button_o *submit,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_Object_o *pUVar2;
  Il2CppObject *pIVar3;
  UnityEngine_UI_Selectable_o *pUVar4;
  bool_conflict bVar5;
  TMPro_TMP_InputField_o *pTVar6;
  UnityEngine_EventSystems_EventSystem_o *pUVar7;
  long lVar8;
  UnityEngine_EventSystems_EventSystem_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Component_o *pUVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  long *plVar16;
  MethodInfo *pMVar17;
  MethodInfo *pMVar18;
  TMPro_TMP_InputField_o *pTVar19;
  TMPro_TMP_InputField_o *pTVar20;
  UnityEngine_UI_Button_o **ppUVar21;
  TMPro_TMP_InputField_SubmitEvent_o *__this_01;
  MethodInfo_362BED0 **x;
  float fVar22;
  float fVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined4 uVar24;
  UnityEngine_Vector3_o UVar25;
  undefined8 uStack_88;
  UnityEngine_EventSystems_EventSystem_o *pUStack_80;
  TMPro_TMP_InputField_o *pTStack_78;
  UnityEngine_Object_o *pUStack_70;
  MethodInfo_2A650C0 **ppMStack_68;
  undefined8 uStack_60;
  TMPro_TMP_InputField_o *pTStack_58;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGStack_50;
  UnityEngine_UI_Button_o **ppUStack_48;
  TMPro_TMP_InputField_SubmitEvent_o *pTStack_40;
  
  if (g_data_057a9eac == '\0') {
    pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dbf9;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ActivateSelected);
    pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dc05;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__12_0);
    pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dc11;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__12_1);
    pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dc1d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dc29;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_string);
    pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dc35;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dc41;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057a9eac = '\x01';
  }
  __this_01 = (TMPro_TMP_InputField_SubmitEvent_o *)&(__this->fields)._input;
  (__this->fields)._input = input;
  pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dc5d;
  il2cpp_runtime_helper_022b4080(__this_01,input);
  ppUVar21 = &(__this->fields)._submit;
  (__this->fields)._submit = submit;
  pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dc72;
  il2cpp_runtime_helper_022b4080(ppUVar21);
  pTVar6 = (__this->fields)._input;
  plVar16 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dc90;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dc9c;
  pTVar19 = pTVar6;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b8dd5a:
    plVar16 = &TypeInfo_Object;
    pTVar6 = (TMPro_TMP_InputField_o *)*ppUVar21;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dd6f;
      il2cpp_runtime_helper_02337ed0();
    }
    pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dd7b;
    pTVar19 = pTVar6;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    if (*ppUVar21 != (UnityEngine_UI_Button_o *)0x0) {
      __this_00 = (UnityEngine_Events_UnityEvent_o *)((*ppUVar21)->fields).m_CanvasGroupCache;
      pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dd9d;
      pTVar6 = (TMPro_TMP_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8ddb7;
      pTVar19 = pTVar6;
      UnityEngine_Events_UnityAction___ctor();
      ppUVar21 = (UnityEngine_UI_Button_o **)0x0;
      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener
                  (__this_00,(UnityEngine_Events_UnityAction_o *)pTVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (*(TMPro_TMP_InputField_o **)__this_01 != (TMPro_TMP_InputField_o *)0x0) {
    pTVar20 = (TMPro_TMP_InputField_o *)((*(TMPro_TMP_InputField_o **)__this_01)->fields).m_OnEndTextSelection
    ;
    pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dcc6;
    pTVar6 = (TMPro_TMP_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
    pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dce0;
    pTVar19 = pTVar6;
    UnityEngine_Events_UnityAction_object____ctor();
    if (pTVar20 != (TMPro_TMP_InputField_o *)0x0) {
      pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dcff;
      UnityEngine_Events_UnityEvent_object___AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)pTVar20,(UnityEngine_Events_UnityAction_T0__o *)pTVar6
                 ,MethodInfo_Void_AddListener);
      plVar16 = (long *)&MethodInfo_Void_AddListener;
      pTVar19 = pTVar20;
      if (*(TMPro_TMP_InputField_o **)__this_01 != (TMPro_TMP_InputField_o *)0x0) {
        __this_01 = ((*(TMPro_TMP_InputField_o **)__this_01)->fields).m_OnEndEdit;
        pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dd21;
        pTVar6 = (TMPro_TMP_InputField_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_string);
        pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dd3b;
        pTVar19 = pTVar6;
        UnityEngine_Events_UnityAction_object____ctor();
        if (__this_01 != (TMPro_TMP_InputField_SubmitEvent_o *)0x0) {
          pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8dd53;
          UnityEngine_Events_UnityEvent_object___AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,
                     (UnityEngine_Events_UnityAction_T0__o *)pTVar6,MethodInfo_Void_AddListener);
          goto label_03b8dd5a;
        }
      }
    }
  }
  pTStack_40 = (TMPro_TMP_InputField_SubmitEvent_o *)0x3b8ddeb;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pTStack_58 = pTVar6;
  pGStack_50 = __this;
  ppUStack_48 = ppUVar21;
  pTStack_40 = __this_01;
  if (g_data_057a9ead == '\0') {
    ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8de20;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8de2c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ead = '\x01';
  }
  pUVar2 = *(UnityEngine_Object_o **)&(pTVar19->fields).m_EnableCalled;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8de50;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8de5c;
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8de78;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8de7f;
  pUVar7 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8de94;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8dea0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (g_data_057a9eed == '\0') {
    ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8dec5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
  }
  if (g_data_057a9c87 == '\0') {
    ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8dee1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
  }
  lVar8 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar8 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8df10;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar8 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    }
    *(undefined4 *)(lVar8 + 0x18) = 0;
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 != 0) {
      ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8df3c;
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40));
    }
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8df4d;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8df54;
  pUVar9 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  pTVar6 = *(TMPro_TMP_InputField_o **)&(pTVar19->fields).m_EnableCalled;
  pUVar7 = (UnityEngine_EventSystems_EventSystem_o *)&TypeInfo_GisketchFocusInputMode;
  if (pTVar6 != (TMPro_TMP_InputField_o *)0x0) {
    ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8df67;
    pUVar10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar6,(MethodInfo *)0x0);
    pUVar7 = pUVar9;
    if (pUVar9 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8df79;
      UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0(pUVar9,pUVar10,(MethodInfo *)0x0);
      pIVar3 = *(Il2CppObject **)&(pTVar19->fields).m_EnableCalled;
      pTVar6 = (TMPro_TMP_InputField_o *)0x0;
      if (pIVar3 != (Il2CppObject *)0x0) {
        ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8df92;
        (*pIVar3->klass->vtable[0x26].methodPtr)();
        pTVar20 = *(TMPro_TMP_InputField_o **)&(pTVar19->fields).m_EnableCalled;
        pTVar6 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar20 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__ActivateInputField(pTVar20,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ppMStack_68 = (MethodInfo_2A650C0 **)0x3b8dfb2;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  pUStack_70 = (UnityEngine_Object_o *)&TypeInfo_EventSystem;
  pUStack_80 = pUVar7;
  pTStack_78 = pTVar19;
  ppMStack_68 = (MethodInfo_2A650C0 **)plVar16;
  if (g_data_057a9eae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eae = '\x01';
  }
  pUVar2 = *(UnityEngine_Object_o **)&(pTVar6->fields).m_EnableCalled;
  plVar16 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar17 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar19 = (TMPro_TMP_InputField_o *)0x0;
  pUVar9 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  x = (MethodInfo_362BED0 **)&TypeInfo_EventSystem;
  if (pUVar9 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    pUVar11 = *(UnityEngine_Component_o **)&(pTVar6->fields).m_EnableCalled;
    pTVar19 = (TMPro_TMP_InputField_o *)0x0;
    if (pUVar11 != (UnityEngine_Component_o *)0x0) {
      x = (MethodInfo_362BED0 **)(pUVar9->fields).m_CurrentSelected;
      pUVar7 = (UnityEngine_EventSystems_EventSystem_o *)
               UnityEngine_Component__get_gameObject(pUVar11,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      pTVar19 = (TMPro_TMP_InputField_o *)&g_data_00000112;
      pMVar17 = (MethodInfo *)0x0;
      bVar5 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pTVar19 = (TMPro_TMP_InputField_o *)0x111;
        pMVar17 = (MethodInfo *)0x0;
        bVar5 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        fVar22 = (pTVar6->fields).m_Colors.fields.m_NormalColor.fields.r;
        plVar16 = (long *)(ulong)(uint)fVar22;
        if (g_data_057a9eb5 == '\0') {
          pTVar19 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pUVar4 = (pTVar6->fields).m_Navigation.fields.m_SelectOnUp;
        if (pUVar4 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b8e1a0;
        iVar15 = *(int *)&(pUVar4->fields).m_CancellationTokenSource;
        iVar13 = 8;
        if (iVar15 < 9) {
          iVar13 = iVar15;
        }
        if (iVar13 == 0) {
          return;
        }
        iVar15 = (int)fVar22 - 1;
      }
      else {
        fVar22 = (pTVar6->fields).m_Colors.fields.m_NormalColor.fields.r;
        plVar16 = (long *)(ulong)(uint)fVar22;
        if (g_data_057a9eb5 == '\0') {
          pTVar19 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pUVar4 = (pTVar6->fields).m_Navigation.fields.m_SelectOnUp;
        if (pUVar4 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b8e1a0;
        iVar15 = *(int *)&(pUVar4->fields).m_CancellationTokenSource;
        iVar13 = 8;
        if (iVar15 < 9) {
          iVar13 = iVar15;
        }
        if (iVar13 == 0) {
          return;
        }
        iVar15 = (int)fVar22 + 1;
      }
      (pTVar6->fields).m_Colors.fields.m_NormalColor.fields.r = (float)((iVar15 % iVar13 + iVar13) % iVar13);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar6,pMVar17);
      pUVar7 = pUStack_80;
      puVar14 = &uStack_60;
      plVar16 = (long *)ppMStack_68;
      pTVar19 = pTVar6;
      pTVar6 = pTStack_78;
      x = (MethodInfo_362BED0 **)pUStack_70;
      goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
    }
  }
label_03b8e1a0:
  il2cpp_runtime_helper_022b2c90();
  pMVar18 = pMVar17;
  pTVar20 = pTVar19;
  if (g_data_057a9eb5 == '\0') {
    pTVar20 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eb5 = '\x01';
  }
  pUVar4 = (pTVar19->fields).m_Navigation.fields.m_SelectOnUp;
  if (pUVar4 == (UnityEngine_UI_Selectable_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    (pTVar20->fields).m_Colors.fields.m_NormalColor.fields.r = 0.0;
    UVar25 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    *(undefined1 *)((long)&(pTVar20->fields).m_Navigation.fields.m_SelectOnRight + 1) = 1;
    *(long *)((long)&(pTVar20->fields).m_Navigation.fields.m_SelectOnRight + 4) = UVar25.fields._0_8_;
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh
              ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar20,pMVar18);
    return;
  }
  iVar15 = *(int *)&(pUVar4->fields).m_CancellationTokenSource;
  iVar13 = 8;
  if (iVar15 < 9) {
    iVar13 = iVar15;
  }
  if (iVar13 == 0) {
    return;
  }
  (pTVar19->fields).m_Colors.fields.m_NormalColor.fields.r =
       (float)(((int)((long)((ulong)(uint)((int)pMVar17 >> 0x1f) << 0x20 | (ulong)pMVar17 & 0xffffffff) %
                     (long)iVar13) + iVar13) % iVar13);
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
            ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar19,pMVar18);
  puVar14 = &uStack_88;
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult:
  while( true ) {
    while( true ) {
      uVar24 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
      *(MethodInfo_362BED0 ***)((long)puVar14 + -8) = x;
      *(TMPro_TMP_InputField_o **)((long)puVar14 + -0x10) = pTVar6;
      *(UnityEngine_EventSystems_EventSystem_o **)((long)puVar14 + -0x18) = pUVar7;
      if (g_data_057a9eb7 == '\0') {
        *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8fded;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8fdf9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
        *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8fe05;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eb7 = '\x01';
      }
      fVar22 = (pTVar19->fields).m_Colors.fields.m_NormalColor.fields.r;
      pMVar17 = (MethodInfo *)(ulong)(uint)fVar22;
      if ((int)fVar22 < 0) {
        return;
      }
      pUVar4 = (pTVar19->fields).m_Navigation.fields.m_SelectOnDown;
      pTVar20 = (TMPro_TMP_InputField_o *)0x0;
      if (pUVar4 != (UnityEngine_UI_Selectable_o *)0x0) {
        if (*(int *)&(pUVar4->fields).m_CancellationTokenSource <= (int)fVar22) {
          return;
        }
        x = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
        *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8fe30;
        pTVar6 = (TMPro_TMP_InputField_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pUVar4,(int32_t)fVar22,MethodInfo_GisketchDropdownItemFeedback_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8fe4b;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar17 = (MethodInfo *)0x0;
        *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8fe57;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return;
        }
        pTVar20 = (TMPro_TMP_InputField_o *)(pTVar19->fields).m_Navigation.fields.m_SelectOnDown;
        if (pTVar20 != (TMPro_TMP_InputField_o *)0x0) {
          fVar22 = (pTVar19->fields).m_Colors.fields.m_NormalColor.fields.r;
          pMVar17 = (MethodInfo *)(ulong)(uint)fVar22;
          *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8fe75;
          pUVar11 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pTVar20,(int32_t)fVar22,
                               MethodInfo_GisketchDropdownItemFeedback_get_Item);
          if (pUVar11 != (UnityEngine_Component_o *)0x0) {
            pMVar17 = (MethodInfo *)0x0;
            *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8fe84;
            pUVar10 = UnityEngine_Component__get_gameObject(pUVar11,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar10,12.0,pMVar17);
            return;
          }
        }
      }
      *(undefined8 *)((long)puVar14 + -0x20) = 0x3b8fe9e;
      uVar12 = il2cpp_runtime_helper_022b2c90();
      *(long **)((long)puVar14 + -0x20) = plVar16;
      *(TMPro_TMP_InputField_o **)((long)puVar14 + -0x28) = pTVar19;
      *(undefined8 *)((long)puVar14 + -0x30) = uVar12;
      pTVar19 = (TMPro_TMP_InputField_o *)0x0;
      *(undefined8 *)((long)puVar14 + -0x38) = 0x3b8feaf;
      pMVar18 = pMVar17;
      UVar25 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      in_XMM1_Qa = CONCAT44(uVar24,UVar25.fields.z);
      uVar12 = UVar25.fields._0_8_;
      if (*(char *)((long)&(pTVar20->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
        uVar12 = *(undefined8 *)((long)&(pTVar20->fields).m_Navigation.fields.m_SelectOnRight + 4);
        fVar22 = UVar25.fields.x - (float)uVar12;
        fVar23 = UVar25.fields.y - (float)((ulong)uVar12 >> 0x20);
        fVar23 = fVar23 * fVar23;
        fVar22 = fVar23 + fVar22 * fVar22;
        in_XMM1_Qa = CONCAT44(fVar23,fVar22);
        uVar12 = 0x40800000;
        if (fVar22 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(pTVar20->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
      }
      if (g_data_057a9eb5 == '\0') {
        pTVar19 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
        *(undefined8 *)((long)puVar14 + -0x38) = 0x3b8fef1;
        il2cpp_runtime_helper_023445d0(uVar12,in_XMM1_Qa);
        g_data_057a9eb5 = '\x01';
      }
      pUVar4 = (pTVar20->fields).m_Navigation.fields.m_SelectOnUp;
      if (pUVar4 == (UnityEngine_UI_Selectable_o *)0x0) break;
      iVar15 = *(int *)&(pUVar4->fields).m_CancellationTokenSource;
      iVar13 = 8;
      if (iVar15 < 9) {
        iVar13 = iVar15;
      }
      if (iVar13 == 0) {
        return;
      }
      (pTVar20->fields).m_Colors.fields.m_NormalColor.fields.r =
           (float)(((int)((long)((ulong)(uint)((int)pMVar17 >> 0x1f) << 0x20 | (ulong)pMVar17 & 0xffffffff) %
                         (long)iVar13) + iVar13) % iVar13);
      *(undefined8 *)((long)puVar14 + -0x38) = 0x3b8ff29;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar20,pMVar18);
      pUVar7 = *(UnityEngine_EventSystems_EventSystem_o **)((long)puVar14 + -0x28);
      plVar16 = *(long **)((long)puVar14 + -0x20);
      puVar14 = (undefined8 *)((long)puVar14 + -0x18);
      pTVar19 = pTVar20;
    }
    *(undefined8 *)((long)puVar14 + -0x38) = 0x3b8ff43;
    uVar12 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)puVar14 + -0x38) = (ulong)pMVar17 & 0xffffffff;
    *(TMPro_TMP_InputField_o **)((long)puVar14 + -0x40) = pTVar20;
    *(undefined8 *)((long)puVar14 + -0x48) = uVar12;
    if (*(char *)((long)&(pTVar19->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
      uVar12 = *(undefined8 *)((long)&(pTVar19->fields).m_Navigation.fields.m_SelectOnRight + 4);
      fVar22 = (float)extraout_XMM0_Qa - (float)uVar12;
      fVar23 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)((ulong)uVar12 >> 0x20);
      fVar23 = fVar23 * fVar23;
      fVar22 = fVar23 + fVar22 * fVar22;
      in_XMM1_Qa = CONCAT44(fVar23,fVar22);
      if (fVar22 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(pTVar19->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
    }
    pMVar17 = pMVar18;
    pTVar20 = pTVar19;
    if (g_data_057a9eb5 == '\0') {
      pTVar20 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
      *(undefined8 *)((long)puVar14 + -0x50) = 0x3b8ff9a;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pUVar4 = (pTVar19->fields).m_Navigation.fields.m_SelectOnUp;
    if (pUVar4 == (UnityEngine_UI_Selectable_o *)0x0) break;
    iVar15 = *(int *)&(pUVar4->fields).m_CancellationTokenSource;
    iVar13 = 8;
    if (iVar15 < 9) {
      iVar13 = iVar15;
    }
    if (iVar13 == 0) {
      return;
    }
    (pTVar19->fields).m_Colors.fields.m_NormalColor.fields.r =
         (float)(((int)((long)((ulong)(uint)((int)pMVar18 >> 0x1f) << 0x20 | (ulong)pMVar18 & 0xffffffff) %
                       (long)iVar13) + iVar13) % iVar13);
    *(undefined8 *)((long)puVar14 + -0x50) = 0x3b8ffd2;
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
              ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar19,pMVar17);
    pUVar7 = *(UnityEngine_EventSystems_EventSystem_o **)((long)puVar14 + -0x40);
    plVar16 = *(long **)((long)puVar14 + -0x38);
    puVar14 = (undefined8 *)((long)puVar14 + -0x30);
  }
  *(undefined8 *)((long)puVar14 + -0x50) = 0x3b8ffec;
  uVar12 = il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&(pTVar20->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
    uVar1 = *(undefined8 *)((long)&(pTVar20->fields).m_Navigation.fields.m_SelectOnRight + 4);
    fVar22 = (float)uVar12 - (float)uVar1;
    fVar23 = (float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
    if (fVar23 * fVar23 + fVar22 * fVar22 < 4.0) {
      return;
    }
    *(undefined1 *)((long)&(pTVar20->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Start
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Start (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b8ddf0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Start
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Object_o *x;
  UnityEngine_UI_Selectable_o *pUVar2;
  long *plVar3;
  bool_conflict bVar4;
  UnityEngine_EventSystems_EventSystem_o *pUVar5;
  long lVar6;
  UnityEngine_EventSystems_EventSystem_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  TMPro_TMP_InputField_o *pTVar9;
  UnityEngine_Component_o *pUVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  long *unaff_RBP;
  MethodInfo *pMVar15;
  MethodInfo *pMVar16;
  TMPro_TMP_InputField_o *pTVar17;
  TMPro_TMP_InputField_o *pTVar18;
  MethodInfo_362BED0 **x_00;
  float fVar19;
  float fVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined4 uVar21;
  UnityEngine_Vector3_o UVar22;
  undefined8 uStack_50;
  UnityEngine_EventSystems_EventSystem_o *pUStack_48;
  TMPro_TMP_InputField_o *pTStack_40;
  UnityEngine_Object_o *pUStack_38;
  undefined1 auStack_28 [8];
  
  if (g_data_057a9ead == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ead = '\x01';
  }
  pTVar9 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
  }
  lVar6 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar6 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar6 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    }
    *(undefined4 *)(lVar6 + 0x18) = 0;
    lVar6 = *(long *)(lVar6 + 0x10);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
    }
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  pTVar9 = (__this->fields)._input;
  pUVar5 = (UnityEngine_EventSystems_EventSystem_o *)&TypeInfo_GisketchFocusInputMode;
  if ((pTVar9 != (TMPro_TMP_InputField_o *)0x0) &&
     (pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar9,(MethodInfo *)0x0),
     pUVar5 = pUVar7, pUVar7 != (UnityEngine_EventSystems_EventSystem_o *)0x0)) {
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0(pUVar7,pUVar8,(MethodInfo *)0x0);
    pTVar17 = (__this->fields)._input;
    pTVar9 = (TMPro_TMP_InputField_o *)0x0;
    if (pTVar17 != (TMPro_TMP_InputField_o *)0x0) {
      (*(pTVar17->klass->vtable)._38_Select.methodPtr)();
      pTVar17 = (__this->fields)._input;
      pTVar9 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar17 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__ActivateInputField(pTVar17,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  pUStack_38 = (UnityEngine_Object_o *)&TypeInfo_EventSystem;
  pUStack_48 = pUVar5;
  pTStack_40 = (TMPro_TMP_InputField_o *)__this;
  if (g_data_057a9eae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eae = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(pTVar9->fields).m_EnableCalled;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar15 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar17 = (TMPro_TMP_InputField_o *)0x0;
  pUVar7 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  plVar3 = &TypeInfo_Object;
  x_00 = (MethodInfo_362BED0 **)&TypeInfo_EventSystem;
  if (pUVar7 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    pUVar10 = *(UnityEngine_Component_o **)&(pTVar9->fields).m_EnableCalled;
    pTVar17 = (TMPro_TMP_InputField_o *)0x0;
    if (pUVar10 != (UnityEngine_Component_o *)0x0) {
      x_00 = (MethodInfo_362BED0 **)(pUVar7->fields).m_CurrentSelected;
      pUVar5 = (UnityEngine_EventSystems_EventSystem_o *)
               UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      pTVar17 = (TMPro_TMP_InputField_o *)&g_data_00000112;
      pMVar15 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        pTVar17 = (TMPro_TMP_InputField_o *)0x111;
        pMVar15 = (MethodInfo *)0x0;
        bVar4 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          return;
        }
        fVar19 = (pTVar9->fields).m_Colors.fields.m_NormalColor.fields.r;
        if (g_data_057a9eb5 == '\0') {
          pTVar17 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pUVar2 = (pTVar9->fields).m_Navigation.fields.m_SelectOnUp;
        plVar3 = (long *)(ulong)(uint)fVar19;
        if (pUVar2 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b8e1a0;
        iVar14 = *(int *)&(pUVar2->fields).m_CancellationTokenSource;
        iVar12 = 8;
        if (iVar14 < 9) {
          iVar12 = iVar14;
        }
        if (iVar12 == 0) {
          return;
        }
        iVar14 = (int)fVar19 - 1;
      }
      else {
        fVar19 = (pTVar9->fields).m_Colors.fields.m_NormalColor.fields.r;
        if (g_data_057a9eb5 == '\0') {
          pTVar17 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pUVar2 = (pTVar9->fields).m_Navigation.fields.m_SelectOnUp;
        plVar3 = (long *)(ulong)(uint)fVar19;
        if (pUVar2 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b8e1a0;
        iVar14 = *(int *)&(pUVar2->fields).m_CancellationTokenSource;
        iVar12 = 8;
        if (iVar14 < 9) {
          iVar12 = iVar14;
        }
        if (iVar12 == 0) {
          return;
        }
        iVar14 = (int)fVar19 + 1;
      }
      (pTVar9->fields).m_Colors.fields.m_NormalColor.fields.r = (float)((iVar14 % iVar12 + iVar12) % iVar12);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar9,pMVar15);
      pUVar5 = pUStack_48;
      puVar13 = (undefined8 *)auStack_28;
      pTVar17 = pTVar9;
      pTVar9 = pTStack_40;
      x_00 = (MethodInfo_362BED0 **)pUStack_38;
      goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
    }
  }
label_03b8e1a0:
  unaff_RBP = plVar3;
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = pMVar15;
  pTVar18 = pTVar17;
  if (g_data_057a9eb5 == '\0') {
    pTVar18 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eb5 = '\x01';
  }
  pUVar2 = (pTVar17->fields).m_Navigation.fields.m_SelectOnUp;
  if (pUVar2 == (UnityEngine_UI_Selectable_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    (pTVar18->fields).m_Colors.fields.m_NormalColor.fields.r = 0.0;
    UVar22 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    *(undefined1 *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 1) = 1;
    *(long *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 4) = UVar22.fields._0_8_;
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh
              ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar18,pMVar16);
    return;
  }
  iVar14 = *(int *)&(pUVar2->fields).m_CancellationTokenSource;
  iVar12 = 8;
  if (iVar14 < 9) {
    iVar12 = iVar14;
  }
  if (iVar12 == 0) {
    return;
  }
  (pTVar17->fields).m_Colors.fields.m_NormalColor.fields.r =
       (float)(((int)((long)((ulong)(uint)((int)pMVar15 >> 0x1f) << 0x20 | (ulong)pMVar15 & 0xffffffff) %
                     (long)iVar12) + iVar12) % iVar12);
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
            ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar17,pMVar16);
  puVar13 = &uStack_50;
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult:
  while( true ) {
    while( true ) {
      uVar21 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
      *(MethodInfo_362BED0 ***)((long)puVar13 + -8) = x_00;
      *(TMPro_TMP_InputField_o **)((long)puVar13 + -0x10) = pTVar9;
      *(UnityEngine_EventSystems_EventSystem_o **)((long)puVar13 + -0x18) = pUVar5;
      if (g_data_057a9eb7 == '\0') {
        *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fded;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fdf9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
        *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe05;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eb7 = '\x01';
      }
      fVar19 = (pTVar17->fields).m_Colors.fields.m_NormalColor.fields.r;
      pMVar15 = (MethodInfo *)(ulong)(uint)fVar19;
      if ((int)fVar19 < 0) {
        return;
      }
      pUVar2 = (pTVar17->fields).m_Navigation.fields.m_SelectOnDown;
      pTVar18 = (TMPro_TMP_InputField_o *)0x0;
      if (pUVar2 != (UnityEngine_UI_Selectable_o *)0x0) {
        if (*(int *)&(pUVar2->fields).m_CancellationTokenSource <= (int)fVar19) {
          return;
        }
        x_00 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
        *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe30;
        pTVar9 = (TMPro_TMP_InputField_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pUVar2,(int32_t)fVar19,MethodInfo_GisketchDropdownItemFeedback_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe4b;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar15 = (MethodInfo *)0x0;
        *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe57;
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return;
        }
        pTVar18 = (TMPro_TMP_InputField_o *)(pTVar17->fields).m_Navigation.fields.m_SelectOnDown;
        if (pTVar18 != (TMPro_TMP_InputField_o *)0x0) {
          fVar19 = (pTVar17->fields).m_Colors.fields.m_NormalColor.fields.r;
          pMVar15 = (MethodInfo *)(ulong)(uint)fVar19;
          *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe75;
          pUVar10 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pTVar18,(int32_t)fVar19,
                               MethodInfo_GisketchDropdownItemFeedback_get_Item);
          if (pUVar10 != (UnityEngine_Component_o *)0x0) {
            pMVar15 = (MethodInfo *)0x0;
            *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe84;
            pUVar8 = UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar8,12.0,pMVar15);
            return;
          }
        }
      }
      *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe9e;
      uVar11 = il2cpp_runtime_helper_022b2c90();
      *(long **)((long)puVar13 + -0x20) = unaff_RBP;
      *(TMPro_TMP_InputField_o **)((long)puVar13 + -0x28) = pTVar17;
      *(undefined8 *)((long)puVar13 + -0x30) = uVar11;
      pTVar17 = (TMPro_TMP_InputField_o *)0x0;
      *(undefined8 *)((long)puVar13 + -0x38) = 0x3b8feaf;
      pMVar16 = pMVar15;
      UVar22 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      in_XMM1_Qa = CONCAT44(uVar21,UVar22.fields.z);
      uVar11 = UVar22.fields._0_8_;
      if (*(char *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
        uVar11 = *(undefined8 *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 4);
        fVar19 = UVar22.fields.x - (float)uVar11;
        fVar20 = UVar22.fields.y - (float)((ulong)uVar11 >> 0x20);
        fVar20 = fVar20 * fVar20;
        fVar19 = fVar20 + fVar19 * fVar19;
        in_XMM1_Qa = CONCAT44(fVar20,fVar19);
        uVar11 = 0x40800000;
        if (fVar19 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
      }
      if (g_data_057a9eb5 == '\0') {
        pTVar17 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
        *(undefined8 *)((long)puVar13 + -0x38) = 0x3b8fef1;
        il2cpp_runtime_helper_023445d0(uVar11,in_XMM1_Qa);
        g_data_057a9eb5 = '\x01';
      }
      pUVar2 = (pTVar18->fields).m_Navigation.fields.m_SelectOnUp;
      if (pUVar2 == (UnityEngine_UI_Selectable_o *)0x0) break;
      iVar14 = *(int *)&(pUVar2->fields).m_CancellationTokenSource;
      iVar12 = 8;
      if (iVar14 < 9) {
        iVar12 = iVar14;
      }
      if (iVar12 == 0) {
        return;
      }
      (pTVar18->fields).m_Colors.fields.m_NormalColor.fields.r =
           (float)(((int)((long)((ulong)(uint)((int)pMVar15 >> 0x1f) << 0x20 | (ulong)pMVar15 & 0xffffffff) %
                         (long)iVar12) + iVar12) % iVar12);
      *(undefined8 *)((long)puVar13 + -0x38) = 0x3b8ff29;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar18,pMVar16);
      pUVar5 = *(UnityEngine_EventSystems_EventSystem_o **)((long)puVar13 + -0x28);
      unaff_RBP = *(long **)((long)puVar13 + -0x20);
      puVar13 = (undefined8 *)((long)puVar13 + -0x18);
      pTVar17 = pTVar18;
    }
    *(undefined8 *)((long)puVar13 + -0x38) = 0x3b8ff43;
    uVar11 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)puVar13 + -0x38) = (ulong)pMVar15 & 0xffffffff;
    *(TMPro_TMP_InputField_o **)((long)puVar13 + -0x40) = pTVar18;
    *(undefined8 *)((long)puVar13 + -0x48) = uVar11;
    if (*(char *)((long)&(pTVar17->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
      uVar11 = *(undefined8 *)((long)&(pTVar17->fields).m_Navigation.fields.m_SelectOnRight + 4);
      fVar19 = (float)extraout_XMM0_Qa - (float)uVar11;
      fVar20 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)((ulong)uVar11 >> 0x20);
      fVar20 = fVar20 * fVar20;
      fVar19 = fVar20 + fVar19 * fVar19;
      in_XMM1_Qa = CONCAT44(fVar20,fVar19);
      if (fVar19 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(pTVar17->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
    }
    pMVar15 = pMVar16;
    pTVar18 = pTVar17;
    if (g_data_057a9eb5 == '\0') {
      pTVar18 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
      *(undefined8 *)((long)puVar13 + -0x50) = 0x3b8ff9a;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pUVar2 = (pTVar17->fields).m_Navigation.fields.m_SelectOnUp;
    if (pUVar2 == (UnityEngine_UI_Selectable_o *)0x0) break;
    iVar14 = *(int *)&(pUVar2->fields).m_CancellationTokenSource;
    iVar12 = 8;
    if (iVar14 < 9) {
      iVar12 = iVar14;
    }
    if (iVar12 == 0) {
      return;
    }
    (pTVar17->fields).m_Colors.fields.m_NormalColor.fields.r =
         (float)(((int)((long)((ulong)(uint)((int)pMVar16 >> 0x1f) << 0x20 | (ulong)pMVar16 & 0xffffffff) %
                       (long)iVar12) + iVar12) % iVar12);
    *(undefined8 *)((long)puVar13 + -0x50) = 0x3b8ffd2;
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
              ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar17,pMVar15);
    pUVar5 = *(UnityEngine_EventSystems_EventSystem_o **)((long)puVar13 + -0x40);
    unaff_RBP = *(long **)((long)puVar13 + -0x38);
    puVar13 = (undefined8 *)((long)puVar13 + -0x30);
  }
  *(undefined8 *)((long)puVar13 + -0x50) = 0x3b8ffec;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
    uVar1 = *(undefined8 *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 4);
    fVar19 = (float)uVar11 - (float)uVar1;
    fVar20 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
    if (fVar20 * fVar20 + fVar19 * fVar19 < 4.0) {
      return;
    }
    *(undefined1 *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$FocusInput
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b8de00

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Object_o *x;
  UnityEngine_UI_Selectable_o *pUVar2;
  long *plVar3;
  bool_conflict bVar4;
  UnityEngine_EventSystems_EventSystem_o *pUVar5;
  long lVar6;
  UnityEngine_EventSystems_EventSystem_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  TMPro_TMP_InputField_o *pTVar9;
  UnityEngine_Component_o *pUVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  long *unaff_RBP;
  MethodInfo *pMVar15;
  MethodInfo *pMVar16;
  TMPro_TMP_InputField_o *pTVar17;
  TMPro_TMP_InputField_o *pTVar18;
  MethodInfo_362BED0 **x_00;
  float fVar19;
  float fVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined4 uVar21;
  UnityEngine_Vector3_o UVar22;
  undefined8 uStack_50;
  UnityEngine_EventSystems_EventSystem_o *pUStack_48;
  TMPro_TMP_InputField_o *pTStack_40;
  UnityEngine_Object_o *pUStack_38;
  undefined1 auStack_28 [8];
  
  if (g_data_057a9ead == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ead = '\x01';
  }
  pTVar9 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
  }
  lVar6 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar6 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar6 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    }
    *(undefined4 *)(lVar6 + 0x18) = 0;
    lVar6 = *(long *)(lVar6 + 0x10);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40));
    }
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar7 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  pTVar9 = (__this->fields)._input;
  pUVar5 = (UnityEngine_EventSystems_EventSystem_o *)&TypeInfo_GisketchFocusInputMode;
  if ((pTVar9 != (TMPro_TMP_InputField_o *)0x0) &&
     (pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar9,(MethodInfo *)0x0),
     pUVar5 = pUVar7, pUVar7 != (UnityEngine_EventSystems_EventSystem_o *)0x0)) {
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0(pUVar7,pUVar8,(MethodInfo *)0x0);
    pTVar17 = (__this->fields)._input;
    pTVar9 = (TMPro_TMP_InputField_o *)0x0;
    if (pTVar17 != (TMPro_TMP_InputField_o *)0x0) {
      (*(pTVar17->klass->vtable)._38_Select.methodPtr)();
      pTVar17 = (__this->fields)._input;
      pTVar9 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar17 != (TMPro_TMP_InputField_o *)0x0) {
        TMPro_TMP_InputField__ActivateInputField(pTVar17,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  pUStack_38 = (UnityEngine_Object_o *)&TypeInfo_EventSystem;
  pUStack_48 = pUVar5;
  pTStack_40 = (TMPro_TMP_InputField_o *)__this;
  if (g_data_057a9eae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eae = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(pTVar9->fields).m_EnableCalled;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar15 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar17 = (TMPro_TMP_InputField_o *)0x0;
  pUVar7 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  plVar3 = &TypeInfo_Object;
  x_00 = (MethodInfo_362BED0 **)&TypeInfo_EventSystem;
  if (pUVar7 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    pUVar10 = *(UnityEngine_Component_o **)&(pTVar9->fields).m_EnableCalled;
    pTVar17 = (TMPro_TMP_InputField_o *)0x0;
    if (pUVar10 != (UnityEngine_Component_o *)0x0) {
      x_00 = (MethodInfo_362BED0 **)(pUVar7->fields).m_CurrentSelected;
      pUVar5 = (UnityEngine_EventSystems_EventSystem_o *)
               UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      pTVar17 = (TMPro_TMP_InputField_o *)&g_data_00000112;
      pMVar15 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        pTVar17 = (TMPro_TMP_InputField_o *)0x111;
        pMVar15 = (MethodInfo *)0x0;
        bVar4 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          return;
        }
        fVar19 = (pTVar9->fields).m_Colors.fields.m_NormalColor.fields.r;
        if (g_data_057a9eb5 == '\0') {
          pTVar17 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pUVar2 = (pTVar9->fields).m_Navigation.fields.m_SelectOnUp;
        plVar3 = (long *)(ulong)(uint)fVar19;
        if (pUVar2 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b8e1a0;
        iVar14 = *(int *)&(pUVar2->fields).m_CancellationTokenSource;
        iVar12 = 8;
        if (iVar14 < 9) {
          iVar12 = iVar14;
        }
        if (iVar12 == 0) {
          return;
        }
        iVar14 = (int)fVar19 - 1;
      }
      else {
        fVar19 = (pTVar9->fields).m_Colors.fields.m_NormalColor.fields.r;
        if (g_data_057a9eb5 == '\0') {
          pTVar17 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pUVar2 = (pTVar9->fields).m_Navigation.fields.m_SelectOnUp;
        plVar3 = (long *)(ulong)(uint)fVar19;
        if (pUVar2 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b8e1a0;
        iVar14 = *(int *)&(pUVar2->fields).m_CancellationTokenSource;
        iVar12 = 8;
        if (iVar14 < 9) {
          iVar12 = iVar14;
        }
        if (iVar12 == 0) {
          return;
        }
        iVar14 = (int)fVar19 + 1;
      }
      (pTVar9->fields).m_Colors.fields.m_NormalColor.fields.r = (float)((iVar14 % iVar12 + iVar12) % iVar12);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar9,pMVar15);
      pUVar5 = pUStack_48;
      puVar13 = (undefined8 *)auStack_28;
      pTVar17 = pTVar9;
      pTVar9 = pTStack_40;
      x_00 = (MethodInfo_362BED0 **)pUStack_38;
      goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
    }
  }
label_03b8e1a0:
  unaff_RBP = plVar3;
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = pMVar15;
  pTVar18 = pTVar17;
  if (g_data_057a9eb5 == '\0') {
    pTVar18 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eb5 = '\x01';
  }
  pUVar2 = (pTVar17->fields).m_Navigation.fields.m_SelectOnUp;
  if (pUVar2 == (UnityEngine_UI_Selectable_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    (pTVar18->fields).m_Colors.fields.m_NormalColor.fields.r = 0.0;
    UVar22 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    *(undefined1 *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 1) = 1;
    *(long *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 4) = UVar22.fields._0_8_;
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh
              ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar18,pMVar16);
    return;
  }
  iVar14 = *(int *)&(pUVar2->fields).m_CancellationTokenSource;
  iVar12 = 8;
  if (iVar14 < 9) {
    iVar12 = iVar14;
  }
  if (iVar12 == 0) {
    return;
  }
  (pTVar17->fields).m_Colors.fields.m_NormalColor.fields.r =
       (float)(((int)((long)((ulong)(uint)((int)pMVar15 >> 0x1f) << 0x20 | (ulong)pMVar15 & 0xffffffff) %
                     (long)iVar12) + iVar12) % iVar12);
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
            ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar17,pMVar16);
  puVar13 = &uStack_50;
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult:
  while( true ) {
    while( true ) {
      uVar21 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
      *(MethodInfo_362BED0 ***)((long)puVar13 + -8) = x_00;
      *(TMPro_TMP_InputField_o **)((long)puVar13 + -0x10) = pTVar9;
      *(UnityEngine_EventSystems_EventSystem_o **)((long)puVar13 + -0x18) = pUVar5;
      if (g_data_057a9eb7 == '\0') {
        *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fded;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fdf9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
        *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe05;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eb7 = '\x01';
      }
      fVar19 = (pTVar17->fields).m_Colors.fields.m_NormalColor.fields.r;
      pMVar15 = (MethodInfo *)(ulong)(uint)fVar19;
      if ((int)fVar19 < 0) {
        return;
      }
      pUVar2 = (pTVar17->fields).m_Navigation.fields.m_SelectOnDown;
      pTVar18 = (TMPro_TMP_InputField_o *)0x0;
      if (pUVar2 != (UnityEngine_UI_Selectable_o *)0x0) {
        if (*(int *)&(pUVar2->fields).m_CancellationTokenSource <= (int)fVar19) {
          return;
        }
        x_00 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
        *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe30;
        pTVar9 = (TMPro_TMP_InputField_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pUVar2,(int32_t)fVar19,MethodInfo_GisketchDropdownItemFeedback_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe4b;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar15 = (MethodInfo *)0x0;
        *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe57;
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return;
        }
        pTVar18 = (TMPro_TMP_InputField_o *)(pTVar17->fields).m_Navigation.fields.m_SelectOnDown;
        if (pTVar18 != (TMPro_TMP_InputField_o *)0x0) {
          fVar19 = (pTVar17->fields).m_Colors.fields.m_NormalColor.fields.r;
          pMVar15 = (MethodInfo *)(ulong)(uint)fVar19;
          *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe75;
          pUVar10 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pTVar18,(int32_t)fVar19,
                               MethodInfo_GisketchDropdownItemFeedback_get_Item);
          if (pUVar10 != (UnityEngine_Component_o *)0x0) {
            pMVar15 = (MethodInfo *)0x0;
            *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe84;
            pUVar8 = UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar8,12.0,pMVar15);
            return;
          }
        }
      }
      *(undefined8 *)((long)puVar13 + -0x20) = 0x3b8fe9e;
      uVar11 = il2cpp_runtime_helper_022b2c90();
      *(long **)((long)puVar13 + -0x20) = unaff_RBP;
      *(TMPro_TMP_InputField_o **)((long)puVar13 + -0x28) = pTVar17;
      *(undefined8 *)((long)puVar13 + -0x30) = uVar11;
      pTVar17 = (TMPro_TMP_InputField_o *)0x0;
      *(undefined8 *)((long)puVar13 + -0x38) = 0x3b8feaf;
      pMVar16 = pMVar15;
      UVar22 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      in_XMM1_Qa = CONCAT44(uVar21,UVar22.fields.z);
      uVar11 = UVar22.fields._0_8_;
      if (*(char *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
        uVar11 = *(undefined8 *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 4);
        fVar19 = UVar22.fields.x - (float)uVar11;
        fVar20 = UVar22.fields.y - (float)((ulong)uVar11 >> 0x20);
        fVar20 = fVar20 * fVar20;
        fVar19 = fVar20 + fVar19 * fVar19;
        in_XMM1_Qa = CONCAT44(fVar20,fVar19);
        uVar11 = 0x40800000;
        if (fVar19 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
      }
      if (g_data_057a9eb5 == '\0') {
        pTVar17 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
        *(undefined8 *)((long)puVar13 + -0x38) = 0x3b8fef1;
        il2cpp_runtime_helper_023445d0(uVar11,in_XMM1_Qa);
        g_data_057a9eb5 = '\x01';
      }
      pUVar2 = (pTVar18->fields).m_Navigation.fields.m_SelectOnUp;
      if (pUVar2 == (UnityEngine_UI_Selectable_o *)0x0) break;
      iVar14 = *(int *)&(pUVar2->fields).m_CancellationTokenSource;
      iVar12 = 8;
      if (iVar14 < 9) {
        iVar12 = iVar14;
      }
      if (iVar12 == 0) {
        return;
      }
      (pTVar18->fields).m_Colors.fields.m_NormalColor.fields.r =
           (float)(((int)((long)((ulong)(uint)((int)pMVar15 >> 0x1f) << 0x20 | (ulong)pMVar15 & 0xffffffff) %
                         (long)iVar12) + iVar12) % iVar12);
      *(undefined8 *)((long)puVar13 + -0x38) = 0x3b8ff29;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar18,pMVar16);
      pUVar5 = *(UnityEngine_EventSystems_EventSystem_o **)((long)puVar13 + -0x28);
      unaff_RBP = *(long **)((long)puVar13 + -0x20);
      puVar13 = (undefined8 *)((long)puVar13 + -0x18);
      pTVar17 = pTVar18;
    }
    *(undefined8 *)((long)puVar13 + -0x38) = 0x3b8ff43;
    uVar11 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)puVar13 + -0x38) = (ulong)pMVar15 & 0xffffffff;
    *(TMPro_TMP_InputField_o **)((long)puVar13 + -0x40) = pTVar18;
    *(undefined8 *)((long)puVar13 + -0x48) = uVar11;
    if (*(char *)((long)&(pTVar17->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
      uVar11 = *(undefined8 *)((long)&(pTVar17->fields).m_Navigation.fields.m_SelectOnRight + 4);
      fVar19 = (float)extraout_XMM0_Qa - (float)uVar11;
      fVar20 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)((ulong)uVar11 >> 0x20);
      fVar20 = fVar20 * fVar20;
      fVar19 = fVar20 + fVar19 * fVar19;
      in_XMM1_Qa = CONCAT44(fVar20,fVar19);
      if (fVar19 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(pTVar17->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
    }
    pMVar15 = pMVar16;
    pTVar18 = pTVar17;
    if (g_data_057a9eb5 == '\0') {
      pTVar18 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
      *(undefined8 *)((long)puVar13 + -0x50) = 0x3b8ff9a;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pUVar2 = (pTVar17->fields).m_Navigation.fields.m_SelectOnUp;
    if (pUVar2 == (UnityEngine_UI_Selectable_o *)0x0) break;
    iVar14 = *(int *)&(pUVar2->fields).m_CancellationTokenSource;
    iVar12 = 8;
    if (iVar14 < 9) {
      iVar12 = iVar14;
    }
    if (iVar12 == 0) {
      return;
    }
    (pTVar17->fields).m_Colors.fields.m_NormalColor.fields.r =
         (float)(((int)((long)((ulong)(uint)((int)pMVar16 >> 0x1f) << 0x20 | (ulong)pMVar16 & 0xffffffff) %
                       (long)iVar12) + iVar12) % iVar12);
    *(undefined8 *)((long)puVar13 + -0x50) = 0x3b8ffd2;
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
              ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar17,pMVar15);
    pUVar5 = *(UnityEngine_EventSystems_EventSystem_o **)((long)puVar13 + -0x40);
    unaff_RBP = *(long **)((long)puVar13 + -0x38);
    puVar13 = (undefined8 *)((long)puVar13 + -0x30);
  }
  *(undefined8 *)((long)puVar13 + -0x50) = 0x3b8ffec;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
    uVar1 = *(undefined8 *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 4);
    fVar19 = (float)uVar11 - (float)uVar1;
    fVar20 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar1 >> 0x20);
    if (fVar20 * fVar20 + fVar19 * fVar19 < 4.0) {
      return;
    }
    *(undefined1 *)((long)&(pTVar18->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Update
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Update (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b8dfc0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Update
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  TMPro_TMP_InputField_o *pTVar7;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar8;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_00;
  undefined8 *puVar9;
  bool_conflict bVar10;
  UnityEngine_EventSystems_EventSystem_o *x_00;
  UnityEngine_EventSystems_EventSystem_o *pUVar11;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *focused;
  undefined8 uVar12;
  int iVar13;
  UnityEngine_EventSystems_EventSystem_o *unaff_RBX;
  undefined1 *puVar14;
  int iVar15;
  undefined8 *unaff_RBP;
  MethodInfo *pMVar16;
  MethodInfo *pMVar17;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_02;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar18;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *unaff_R14;
  UnityEngine_Object_o *unaff_R15;
  float fVar19;
  float fVar20;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined4 uVar21;
  UnityEngine_Vector3_o UVar22;
  undefined1 auStack_28 [8];
  
  if (g_data_057a9eae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eae = '\x01';
  }
  pTVar7 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x_00 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar16 = (MethodInfo *)0x0;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
  pUVar11 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  puVar9 = &TypeInfo_Object;
  x = (UnityEngine_Object_o *)&TypeInfo_EventSystem;
  if (pUVar11 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    pTVar7 = (__this->fields)._input;
    __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
    if (pTVar7 != (TMPro_TMP_InputField_o *)0x0) {
      x = (UnityEngine_Object_o *)(pUVar11->fields).m_CurrentSelected;
      x_00 = (UnityEngine_EventSystems_EventSystem_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar7,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)x_00,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return;
      }
      __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&g_data_00000112;
      pMVar16 = (MethodInfo *)0x0;
      bVar10 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x111;
        pMVar16 = (MethodInfo *)0x0;
        bVar10 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return;
        }
        fVar19 = (__this->fields)._pointerLockPosition.fields.y;
        if (g_data_057a9eb5 == '\0') {
          __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pSVar8 = (__this->fields)._results;
        puVar9 = (undefined8 *)(ulong)(uint)fVar19;
        if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b8e1a0;
        iVar15 = (pSVar8->fields)._size;
        iVar13 = 8;
        if (iVar15 < 9) {
          iVar13 = iVar15;
        }
        if (iVar13 == 0) {
          return;
        }
        iVar15 = (int)fVar19 - 1;
      }
      else {
        fVar19 = (__this->fields)._pointerLockPosition.fields.y;
        if (g_data_057a9eb5 == '\0') {
          __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9eb5 = '\x01';
        }
        pSVar8 = (__this->fields)._results;
        puVar9 = (undefined8 *)(ulong)(uint)fVar19;
        if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b8e1a0;
        iVar15 = (pSVar8->fields)._size;
        iVar13 = 8;
        if (iVar15 < 9) {
          iVar13 = iVar15;
        }
        if (iVar13 == 0) {
          return;
        }
        iVar15 = (int)fVar19 + 1;
      }
      (__this->fields)._pointerLockPosition.fields.y = (float)((iVar15 % iVar13 + iVar13) % iVar13);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this,pMVar16);
      puVar14 = (undefined1 *)register0x00000020;
      __this_02 = __this;
      __this = unaff_R14;
      goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
    }
  }
label_03b8e1a0:
  unaff_R15 = x;
  unaff_RBP = puVar9;
  unaff_RBX = x_00;
  il2cpp_runtime_helper_022b2c90();
  pMVar17 = pMVar16;
  pGVar18 = __this_02;
  if (g_data_057a9eb5 == '\0') {
    pGVar18 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eb5 = '\x01';
  }
  pSVar8 = (__this_02->fields)._results;
  if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    (pGVar18->fields)._pointerLockPosition.fields.y = 0.0;
    UVar22 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    *(undefined1 *)((long)&(pGVar18->fields)._hasAnimatedResults + 1) = 1;
    (pGVar18->fields)._pointerSelectionLocked = (int)UVar22.fields._0_8_;
    (pGVar18->fields)._pointerLockPosition.fields.x = (float)(int)((ulong)UVar22.fields._0_8_ >> 0x20);
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(pGVar18,pMVar17);
    return;
  }
  iVar15 = (pSVar8->fields)._size;
  iVar13 = 8;
  if (iVar15 < 9) {
    iVar13 = iVar15;
  }
  if (iVar13 == 0) {
    return;
  }
  (__this_02->fields)._pointerLockPosition.fields.y =
       (float)(((int)((long)((ulong)(uint)((int)pMVar16 >> 0x1f) << 0x20 | (ulong)pMVar16 & 0xffffffff) %
                     (long)iVar13) + iVar13) % iVar13);
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this_02,pMVar17);
  puVar14 = auStack_28;
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult:
  while( true ) {
    while( true ) {
      uVar21 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
      *(UnityEngine_Object_o **)(puVar14 + -8) = unaff_R15;
      *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar14 + -0x10) = __this;
      *(UnityEngine_EventSystems_EventSystem_o **)(puVar14 + -0x18) = unaff_RBX;
      if (g_data_057a9eb7 == '\0') {
        *(undefined8 *)(puVar14 + -0x20) = 0x3b8fded;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)(puVar14 + -0x20) = 0x3b8fdf9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
        *(undefined8 *)(puVar14 + -0x20) = 0x3b8fe05;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eb7 = '\x01';
      }
      fVar19 = (__this_02->fields)._pointerLockPosition.fields.y;
      pMVar16 = (MethodInfo *)(ulong)(uint)fVar19;
      if ((int)fVar19 < 0) {
        return;
      }
      __this_00 = (__this_02->fields)._feedback;
      pGVar18 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
        if ((__this_00->fields)._size <= (int)fVar19) {
          return;
        }
        unaff_R15 = (UnityEngine_Object_o *)&MethodInfo_GisketchDropdownItemFeedback_get_Item;
        *(undefined8 *)(puVar14 + -0x20) = 0x3b8fe30;
        __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,(int32_t)fVar19,
                            MethodInfo_GisketchDropdownItemFeedback_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar14 + -0x20) = 0x3b8fe4b;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar16 = (MethodInfo *)0x0;
        *(undefined8 *)(puVar14 + -0x20) = 0x3b8fe57;
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          return;
        }
        pGVar18 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(__this_02->fields)._feedback;
        if (pGVar18 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
          fVar19 = (__this_02->fields)._pointerLockPosition.fields.y;
          pMVar16 = (MethodInfo *)(ulong)(uint)fVar19;
          *(undefined8 *)(puVar14 + -0x20) = 0x3b8fe75;
          __this_01 = (UnityEngine_Component_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pGVar18,(int32_t)fVar19,
                                 MethodInfo_GisketchDropdownItemFeedback_get_Item);
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            pMVar16 = (MethodInfo *)0x0;
            *(undefined8 *)(puVar14 + -0x20) = 0x3b8fe84;
            focused = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,pMVar16);
            return;
          }
        }
      }
      *(undefined8 *)(puVar14 + -0x20) = 0x3b8fe9e;
      uVar12 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 **)(puVar14 + -0x20) = unaff_RBP;
      *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar14 + -0x28) = __this_02;
      *(undefined8 *)(puVar14 + -0x30) = uVar12;
      __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
      *(undefined8 *)(puVar14 + -0x38) = 0x3b8feaf;
      pMVar17 = pMVar16;
      UVar22 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      in_XMM1_Qa = CONCAT44(uVar21,UVar22.fields.z);
      uVar12 = UVar22.fields._0_8_;
      if (*(char *)((long)&(pGVar18->fields)._hasAnimatedResults + 1) != '\0') {
        uVar1 = (pGVar18->fields)._pointerSelectionLocked;
        uVar4 = (pGVar18->fields)._pointerLockPosition.fields.x;
        fVar19 = UVar22.fields.x - (float)uVar1;
        fVar20 = UVar22.fields.y - (float)uVar4;
        fVar20 = fVar20 * fVar20;
        fVar19 = fVar20 + fVar19 * fVar19;
        in_XMM1_Qa = CONCAT44(fVar20,fVar19);
        uVar12 = 0x40800000;
        if (fVar19 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(pGVar18->fields)._hasAnimatedResults + 1) = 0;
      }
      if (g_data_057a9eb5 == '\0') {
        __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
        *(undefined8 *)(puVar14 + -0x38) = 0x3b8fef1;
        il2cpp_runtime_helper_023445d0(uVar12,in_XMM1_Qa);
        g_data_057a9eb5 = '\x01';
      }
      pSVar8 = (pGVar18->fields)._results;
      if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
      iVar15 = (pSVar8->fields)._size;
      iVar13 = 8;
      if (iVar15 < 9) {
        iVar13 = iVar15;
      }
      if (iVar13 == 0) {
        return;
      }
      (pGVar18->fields)._pointerLockPosition.fields.y =
           (float)(((int)((long)((ulong)(uint)((int)pMVar16 >> 0x1f) << 0x20 | (ulong)pMVar16 & 0xffffffff) %
                         (long)iVar13) + iVar13) % iVar13);
      *(undefined8 *)(puVar14 + -0x38) = 0x3b8ff29;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(pGVar18,pMVar17);
      unaff_RBX = *(UnityEngine_EventSystems_EventSystem_o **)(puVar14 + -0x28);
      unaff_RBP = *(undefined8 **)(puVar14 + -0x20);
      puVar14 = puVar14 + -0x18;
      __this_02 = pGVar18;
    }
    *(undefined8 *)(puVar14 + -0x38) = 0x3b8ff43;
    uVar12 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)(puVar14 + -0x38) = (ulong)pMVar16 & 0xffffffff;
    *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar14 + -0x40) = pGVar18;
    *(undefined8 *)(puVar14 + -0x48) = uVar12;
    if (*(char *)((long)&(__this_02->fields)._hasAnimatedResults + 1) != '\0') {
      uVar2 = (__this_02->fields)._pointerSelectionLocked;
      uVar5 = (__this_02->fields)._pointerLockPosition.fields.x;
      fVar19 = (float)extraout_XMM0_Qa - (float)uVar2;
      fVar20 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)uVar5;
      fVar20 = fVar20 * fVar20;
      fVar19 = fVar20 + fVar19 * fVar19;
      in_XMM1_Qa = CONCAT44(fVar20,fVar19);
      if (fVar19 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(__this_02->fields)._hasAnimatedResults + 1) = 0;
    }
    pMVar16 = pMVar17;
    pGVar18 = __this_02;
    if (g_data_057a9eb5 == '\0') {
      pGVar18 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
      *(undefined8 *)(puVar14 + -0x50) = 0x3b8ff9a;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pSVar8 = (__this_02->fields)._results;
    if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
    iVar15 = (pSVar8->fields)._size;
    iVar13 = 8;
    if (iVar15 < 9) {
      iVar13 = iVar15;
    }
    if (iVar13 == 0) {
      return;
    }
    (__this_02->fields)._pointerLockPosition.fields.y =
         (float)(((int)((long)((ulong)(uint)((int)pMVar17 >> 0x1f) << 0x20 | (ulong)pMVar17 & 0xffffffff) %
                       (long)iVar13) + iVar13) % iVar13);
    *(undefined8 *)(puVar14 + -0x50) = 0x3b8ffd2;
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this_02,pMVar16);
    unaff_RBX = *(UnityEngine_EventSystems_EventSystem_o **)(puVar14 + -0x40);
    unaff_RBP = *(undefined8 **)(puVar14 + -0x38);
    puVar14 = puVar14 + -0x30;
  }
  *(undefined8 *)(puVar14 + -0x50) = 0x3b8ffec;
  uVar12 = il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&(pGVar18->fields)._hasAnimatedResults + 1) != '\0') {
    uVar3 = (pGVar18->fields)._pointerSelectionLocked;
    uVar6 = (pGVar18->fields)._pointerLockPosition.fields.x;
    fVar19 = (float)uVar12 - (float)uVar3;
    fVar20 = (float)((ulong)uVar12 >> 0x20) - (float)uVar6;
    if (fVar20 * fVar20 + fVar19 * fVar19 < 4.0) {
      return;
    }
    *(undefined1 *)((long)&(pGVar18->fields)._hasAnimatedResults + 1) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$OnInputChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__OnInputChanged (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b8e220

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__OnInputChanged
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  (__this->fields)._pointerLockPosition.fields.y = 0.0;
  UVar1 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 1;
  (__this->fields)._pointerSelectionLocked = (int)UVar1.fields._0_8_;
  (__this->fields)._pointerLockPosition.fields.x = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b8e250

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_GisketchSearchEntry__o **ppSVar2;
  int *piVar3;
  System_String_o **ppSVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_c *pGVar13;
  Il2CppRuntimeInterfaceOffsetPair *pIVar14;
  System_Collections_Generic_IEqualityComparer_T__c *pSVar15;
  UnityEngine_UI_Selectable_o *pUVar16;
  UnityEngine_Object_Fields x;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar17;
  UnityEngine_Object_c *pUVar18;
  UnityEngine_Events_UnityEvent_o *__this_00;
  void *pvVar19;
  System_String_o *query;
  System_Object_array *pSVar20;
  MethodInfo_362C220 *method_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  long lVar21;
  char cVar22;
  float fVar23;
  int32_t iVar24;
  bool_conflict bVar25;
  System_Collections_Generic_List_object__o *pSVar26;
  System_Collections_Generic_HashSet_object__o *__this_05;
  System_Collections_Generic_List_object__o *__this_06;
  System_Collections_Generic_HashSet_object__o *__this_07;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *__this_08;
  Il2CppMethodPointer *ppIVar27;
  long *plVar28;
  undefined8 *puVar29;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar30;
  UnityEngine_EventSystems_EventSystem_o *pUVar31;
  UnityEngine_EventSystems_EventSystem_o *pUVar32;
  UnityEngine_EventSystems_EventSystem_o *pUVar33;
  Il2CppRGCTXData *root;
  float *pfVar34;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar35;
  Il2CppRGCTXData *x_00;
  Il2CppRGCTXData *root_00;
  UnityEngine_GameObject_o *pUVar36;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar37;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_09;
  Il2CppObject *pIVar38;
  MethodInfo **ppMVar39;
  System_String_o *pSVar40;
  Il2CppObject *pIVar41;
  Il2CppClass *pIVar42;
  UnityEngine_Transform_o *pUVar43;
  UnityEngine_Events_UnityAction_o *call;
  System_Func_bool__o *pSVar44;
  System_String_o *pSVar45;
  MethodInfo *pMVar46;
  TMPro_TMP_InputField_o *pTVar47;
  UnityEngine_Component_o *pUVar48;
  undefined8 uVar49;
  int iVar50;
  Il2CppRGCTXData *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  ulong extraout_RDX_01;
  Il2CppRGCTXData *extraout_RDX_02;
  MethodInfo *method_01;
  Il2CppRGCTXData *unaff_RBX;
  long *plVar51;
  void **ppvVar52;
  undefined8 *puVar53;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **ppGVar54;
  int iVar55;
  Il2CppRGCTXData *unaff_RBP;
  UnityEngine_Object_o *pUVar56;
  MethodInfo *pMVar57;
  UnityEngine_Object_o *pUVar58;
  long lVar59;
  long lVar60;
  TMPro_TMP_InputField_o *pTVar61;
  Il2CppRGCTXData *pIVar62;
  TMPro_TMP_InputField_o *pTVar63;
  Il2CppRGCTXData *unaff_R12;
  Il2CppRGCTXData *unaff_R13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *unaff_R14;
  Il2CppRGCTXData *unaff_R15;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_10;
  MethodInfo_362BED0 **x_01;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 uVar64;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar65;
  float fVar67;
  undefined4 uVar69;
  undefined4 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  UnityEngine_Color_o UVar75;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  undefined1 auVar76 [16];
  undefined1 auVar77 [12];
  UnityEngine_Vector3_o UVar78;
  long in_stack_ffffffffffffff08;
  _union_249689 _Var79;
  System_Collections_Generic_HashSet_object__o *pSStack_b8;
  Il2CppRGCTXData *pIStack_b0;
  _union_249689 _Stack_a8;
  Il2CppRGCTXData *pIStack_a0;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_98;
  Il2CppRGCTXData *pIStack_90;
  Il2CppRGCTXData *pIStack_88;
  Il2CppRGCTXData *pIStack_80;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_78;
  Il2CppRGCTXData *pIStack_70;
  Il2CppRGCTXData *pIStack_68;
  UnityEngine_EventSystems_EventSystem_o *pUStack_60;
  Il2CppRGCTXData *pIStack_58;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGStack_50;
  float fVar66;
  float fVar68;
  
  if (g_data_057a9eaf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"search-palette-results");
    g_data_057a9eaf = '\x01';
  }
  root = (Il2CppRGCTXData *)
         UnityEngine_Component__GetComponentInParent_object_((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
  plVar51 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x_00 = (Il2CppRGCTXData *)0x0;
  pIVar62 = root;
  bVar25 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  root_00 = unaff_R12;
  if (root == (Il2CppRGCTXData *)0x0) goto label_03b8e4bf;
  if (root[0x10].rgctxDataDummy == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    return;
  }
  if (root[0x11].rgctxDataDummy == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    return;
  }
  pIVar62 = (Il2CppRGCTXData *)(__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x_00 = (Il2CppRGCTXData *)0x0;
  bVar25 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pIVar62,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 == '\0') {
    pfVar34 = *(float **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pTVar47 = (__this->fields)._input;
    if (pTVar47 == (TMPro_TMP_InputField_o *)0x0) goto label_03b8e4bf;
    pfVar34 = &(pTVar47->fields).m_SelectionColor.fields.a;
  }
  pSVar40 = *(System_String_o **)pfVar34;
  pMVar46 = (MethodInfo *)0x0;
  bVar25 = System_String__IsNullOrEmpty(pSVar40,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput:
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults
              (__this,(Gisketch_Aottg2UI_GisketchUIRoot_o *)root,0,(MethodInfo *)in_RCX);
    if (g_data_057a9ead == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9ead = '\x01';
    }
    pTVar47 = (__this->fields)._input;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar25 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar47,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar25 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar31 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar25 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar31,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar25 != '\0') {
      return;
    }
    if (g_data_057a9eed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9eed = '\x01';
    }
    if (g_data_057a9c87 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9c87 = '\x01';
    }
    lVar59 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    if (*(int *)(lVar59 + 0x18) != 0) {
      if (g_data_057a9f2a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9f2a = '\x01';
        lVar59 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      }
      *(undefined4 *)(lVar59 + 0x18) = 0;
      lVar59 = *(long *)(lVar59 + 0x10);
      if (lVar59 != 0) {
        (**(code **)(lVar59 + 0x18))(*(undefined8 *)(lVar59 + 0x40));
      }
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar32 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    pTVar47 = (__this->fields)._input;
    pUVar31 = (UnityEngine_EventSystems_EventSystem_o *)&TypeInfo_GisketchFocusInputMode;
    if ((pTVar47 != (TMPro_TMP_InputField_o *)0x0) &&
       (pUVar36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar47,(MethodInfo *)0x0),
       pUVar31 = pUVar32, pUVar32 != (UnityEngine_EventSystems_EventSystem_o *)0x0)) {
      UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0(pUVar32,pUVar36,(MethodInfo *)0x0);
      pTVar61 = (__this->fields)._input;
      pTVar47 = (TMPro_TMP_InputField_o *)0x0;
      if (pTVar61 != (TMPro_TMP_InputField_o *)0x0) {
        (*(pTVar61->klass->vtable)._38_Select.methodPtr)();
        pTVar61 = (__this->fields)._input;
        pTVar47 = (TMPro_TMP_InputField_o *)0x0;
        if (pTVar61 != (TMPro_TMP_InputField_o *)0x0) {
          TMPro_TMP_InputField__ActivateInputField(pTVar61,(MethodInfo *)0x0);
          return;
        }
      }
    }
    pGStack_50 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9eae == '\0') {
      pIStack_58 = (Il2CppRGCTXData *)0x3b8dfdf;
      il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
      pIStack_58 = (Il2CppRGCTXData *)0x3b8dfeb;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9eae = '\x01';
    }
    pUVar58 = *(UnityEngine_Object_o **)&(pTVar47->fields).m_EnableCalled;
    plVar51 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_58 = (Il2CppRGCTXData *)0x3b8e00f;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_58 = (Il2CppRGCTXData *)0x3b8e01b;
    bVar25 = UnityEngine_Object__op_Equality(pUVar58,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar25 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      pIStack_58 = (Il2CppRGCTXData *)0x3b8e03b;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_58 = (Il2CppRGCTXData *)0x3b8e042;
    pUVar32 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_58 = (Il2CppRGCTXData *)0x3b8e057;
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar46 = (MethodInfo *)0x0;
    pIStack_58 = (Il2CppRGCTXData *)0x3b8e063;
    bVar25 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar32,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar25 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      pIStack_58 = (Il2CppRGCTXData *)0x3b8e078;
      il2cpp_runtime_helper_02337ed0();
    }
    pTVar61 = (TMPro_TMP_InputField_o *)0x0;
    pIStack_58 = (Il2CppRGCTXData *)0x3b8e07f;
    pUVar33 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    x_01 = (MethodInfo_362BED0 **)&TypeInfo_EventSystem;
    if (pUVar33 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      pUVar48 = *(UnityEngine_Component_o **)&(pTVar47->fields).m_EnableCalled;
      pTVar61 = (TMPro_TMP_InputField_o *)0x0;
      if (pUVar48 != (UnityEngine_Component_o *)0x0) {
        x_01 = (MethodInfo_362BED0 **)(pUVar33->fields).m_CurrentSelected;
        pIStack_58 = (Il2CppRGCTXData *)0x3b8e0a0;
        pUVar32 = (UnityEngine_EventSystems_EventSystem_o *)
                  UnityEngine_Component__get_gameObject(pUVar48,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pIStack_58 = (Il2CppRGCTXData *)0x3b8e0b5;
          il2cpp_runtime_helper_02337ed0();
        }
        pIStack_58 = (Il2CppRGCTXData *)0x3b8e0c2;
        bVar25 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)pUVar32,(MethodInfo *)0x0);
        if ((char)bVar25 != '\0') {
          return;
        }
        pTVar61 = (TMPro_TMP_InputField_o *)&g_data_00000112;
        pMVar46 = (MethodInfo *)0x0;
        pIStack_58 = (Il2CppRGCTXData *)0x3b8e0dd;
        bVar25 = UnityEngine_Input__GetKeyDown(0x112,(MethodInfo *)0x0);
        if ((char)bVar25 == '\0') {
          pTVar61 = (TMPro_TMP_InputField_o *)0x111;
          pMVar46 = (MethodInfo *)0x0;
          pIStack_58 = (Il2CppRGCTXData *)0x3b8e131;
          bVar25 = UnityEngine_Input__GetKeyDown(0x111,(MethodInfo *)0x0);
          if ((char)bVar25 == '\0') {
            return;
          }
          fVar23 = (pTVar47->fields).m_Colors.fields.m_NormalColor.fields.r;
          plVar51 = (long *)(ulong)(uint)fVar23;
          if (g_data_057a9eb5 == '\0') {
            pTVar61 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
            pIStack_58 = (Il2CppRGCTXData *)0x3b8e14e;
            il2cpp_runtime_helper_023445d0();
            g_data_057a9eb5 = '\x01';
          }
          pUVar16 = (pTVar47->fields).m_Navigation.fields.m_SelectOnUp;
          if (pUVar16 != (UnityEngine_UI_Selectable_o *)0x0) {
            iVar55 = *(int *)&(pUVar16->fields).m_CancellationTokenSource;
            iVar50 = 8;
            if (iVar55 < 9) {
              iVar50 = iVar55;
            }
            if (iVar50 == 0) {
              return;
            }
            iVar55 = (int)fVar23 - 1;
            goto label_03b8e177;
          }
        }
        else {
          fVar23 = (pTVar47->fields).m_Colors.fields.m_NormalColor.fields.r;
          plVar51 = (long *)(ulong)(uint)fVar23;
          if (g_data_057a9eb5 == '\0') {
            pTVar61 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
            pIStack_58 = (Il2CppRGCTXData *)0x3b8e0fa;
            il2cpp_runtime_helper_023445d0();
            g_data_057a9eb5 = '\x01';
          }
          pUVar16 = (pTVar47->fields).m_Navigation.fields.m_SelectOnUp;
          if (pUVar16 != (UnityEngine_UI_Selectable_o *)0x0) {
            iVar55 = *(int *)&(pUVar16->fields).m_CancellationTokenSource;
            iVar50 = 8;
            if (iVar55 < 9) {
              iVar50 = iVar55;
            }
            if (iVar50 == 0) {
              return;
            }
            iVar55 = (int)fVar23 + 1;
label_03b8e177:
            (pTVar47->fields).m_Colors.fields.m_NormalColor.fields.r =
                 (float)((iVar55 % iVar50 + iVar50) % iVar50);
            pIStack_58 = (Il2CppRGCTXData *)0x3b8e18e;
            Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                      ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar47,pMVar46);
            ppGVar54 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)&stack0xffffffffffffffd8;
            pTVar61 = pTVar47;
            pTVar47 = (TMPro_TMP_InputField_o *)__this;
            x_01 = (MethodInfo_362BED0 **)&TypeInfo_EventSystem;
            goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult;
          }
        }
      }
    }
    pIStack_58 = (Il2CppRGCTXData *)0x3b8e1a5;
    pIStack_68 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2c90();
    pMVar57 = pMVar46;
    pTVar63 = pTVar61;
    pUStack_60 = pUVar32;
    pIStack_58 = (Il2CppRGCTXData *)plVar51;
    if (g_data_057a9eb5 == '\0') {
      pTVar63 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
      pIStack_70 = (Il2CppRGCTXData *)0x3b8e1cd;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pUVar16 = (pTVar61->fields).m_Navigation.fields.m_SelectOnUp;
    if (pUVar16 == (UnityEngine_UI_Selectable_o *)0x0) {
      pIStack_70 = (Il2CppRGCTXData *)0x3b8e21f;
      il2cpp_runtime_helper_022b2c90();
      (pTVar63->fields).m_Colors.fields.m_NormalColor.fields.r = 0.0;
      pGStack_78 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8e232;
      pIStack_70 = (Il2CppRGCTXData *)pTVar61;
      UVar78 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      *(undefined1 *)((long)&(pTVar63->fields).m_Navigation.fields.m_SelectOnRight + 1) = 1;
      *(long *)((long)&(pTVar63->fields).m_Navigation.fields.m_SelectOnRight + 4) = UVar78.fields._0_8_;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh
                ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar63,pMVar57);
      return;
    }
    iVar55 = *(int *)&(pUVar16->fields).m_CancellationTokenSource;
    iVar50 = 8;
    if (iVar55 < 9) {
      iVar50 = iVar55;
    }
    if (iVar50 == 0) {
      return;
    }
    (pTVar61->fields).m_Colors.fields.m_NormalColor.fields.r =
         (float)(((int)((long)((ulong)(uint)((int)pMVar46 >> 0x1f) << 0x20 | (ulong)pMVar46 & 0xffffffff) %
                       (long)iVar50) + iVar50) % iVar50);
    pIStack_70 = (Il2CppRGCTXData *)0x3b8e205;
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
              ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar61,pMVar57);
    ppGVar54 = &pGStack_50;
    pUVar31 = pUStack_60;
    unaff_RBP = pIStack_58;
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult:
    while( true ) {
      while( true ) {
        *(MethodInfo_362BED0 ***)((long)ppGVar54 + -8) = x_01;
        *(TMPro_TMP_InputField_o **)((long)ppGVar54 + -0x10) = pTVar47;
        *(UnityEngine_EventSystems_EventSystem_o **)((long)ppGVar54 + -0x18) = pUVar31;
        if (g_data_057a9eb7 == '\0') {
          *(undefined8 *)((long)ppGVar54 + -0x20) = 0x3b8fded;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          *(undefined8 *)((long)ppGVar54 + -0x20) = 0x3b8fdf9;
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
          *(undefined8 *)((long)ppGVar54 + -0x20) = 0x3b8fe05;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9eb7 = '\x01';
        }
        fVar23 = (pTVar61->fields).m_Colors.fields.m_NormalColor.fields.r;
        pMVar46 = (MethodInfo *)(ulong)(uint)fVar23;
        if ((int)fVar23 < 0) {
          return;
        }
        pUVar16 = (pTVar61->fields).m_Navigation.fields.m_SelectOnDown;
        pTVar63 = (TMPro_TMP_InputField_o *)0x0;
        if (pUVar16 != (UnityEngine_UI_Selectable_o *)0x0) {
          if (*(int *)&(pUVar16->fields).m_CancellationTokenSource <= (int)fVar23) {
            return;
          }
          x_01 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
          *(undefined8 *)((long)ppGVar54 + -0x20) = 0x3b8fe30;
          pTVar47 = (TMPro_TMP_InputField_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)pUVar16,(int32_t)fVar23,
                               MethodInfo_GisketchDropdownItemFeedback_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)((long)ppGVar54 + -0x20) = 0x3b8fe4b;
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar46 = (MethodInfo *)0x0;
          *(undefined8 *)((long)ppGVar54 + -0x20) = 0x3b8fe57;
          bVar25 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)pTVar47,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar25 != '\0') {
            return;
          }
          pTVar63 = (TMPro_TMP_InputField_o *)(pTVar61->fields).m_Navigation.fields.m_SelectOnDown;
          if (pTVar63 != (TMPro_TMP_InputField_o *)0x0) {
            fVar23 = (pTVar61->fields).m_Colors.fields.m_NormalColor.fields.r;
            pMVar46 = (MethodInfo *)(ulong)(uint)fVar23;
            *(undefined8 *)((long)ppGVar54 + -0x20) = 0x3b8fe75;
            pUVar48 = (UnityEngine_Component_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pTVar63,(int32_t)fVar23,
                                 MethodInfo_GisketchDropdownItemFeedback_get_Item);
            if (pUVar48 != (UnityEngine_Component_o *)0x0) {
              pMVar46 = (MethodInfo *)0x0;
              *(undefined8 *)((long)ppGVar54 + -0x20) = 0x3b8fe84;
              pUVar36 = UnityEngine_Component__get_gameObject(pUVar48,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar36,12.0,pMVar46);
              return;
            }
          }
        }
        *(undefined8 *)((long)ppGVar54 + -0x20) = 0x3b8fe9e;
        uVar49 = il2cpp_runtime_helper_022b2c90();
        *(Il2CppRGCTXData **)((long)ppGVar54 + -0x20) = unaff_RBP;
        *(TMPro_TMP_InputField_o **)((long)ppGVar54 + -0x28) = pTVar61;
        *(undefined8 *)((long)ppGVar54 + -0x30) = uVar49;
        pTVar61 = (TMPro_TMP_InputField_o *)0x0;
        *(undefined8 *)((long)ppGVar54 + -0x38) = 0x3b8feaf;
        pMVar57 = pMVar46;
        UVar78 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        fVar67 = UVar78.fields.z;
        fVar23 = UVar78.fields.x;
        if (*(char *)((long)&(pTVar63->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
          uVar49 = *(undefined8 *)((long)&(pTVar63->fields).m_Navigation.fields.m_SelectOnRight + 4);
          fVar23 = fVar23 - (float)uVar49;
          fVar67 = UVar78.fields.y - (float)((ulong)uVar49 >> 0x20);
          fVar67 = fVar67 * fVar67 + fVar23 * fVar23;
          fVar23 = 4.0;
          if (fVar67 < 4.0) {
            return;
          }
          *(undefined1 *)((long)&(pTVar63->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
        }
        if (g_data_057a9eb5 == '\0') {
          pTVar61 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
          *(undefined8 *)((long)ppGVar54 + -0x38) = 0x3b8fef1;
          il2cpp_runtime_helper_023445d0(fVar23,fVar67);
          g_data_057a9eb5 = '\x01';
        }
        pUVar16 = (pTVar63->fields).m_Navigation.fields.m_SelectOnUp;
        if (pUVar16 == (UnityEngine_UI_Selectable_o *)0x0) break;
        iVar55 = *(int *)&(pUVar16->fields).m_CancellationTokenSource;
        iVar50 = 8;
        if (iVar55 < 9) {
          iVar50 = iVar55;
        }
        if (iVar50 == 0) {
          return;
        }
        (pTVar63->fields).m_Colors.fields.m_NormalColor.fields.r =
             (float)(((int)((long)((ulong)(uint)((int)pMVar46 >> 0x1f) << 0x20 | (ulong)pMVar46 & 0xffffffff)
                           % (long)iVar50) + iVar50) % iVar50);
        *(undefined8 *)((long)ppGVar54 + -0x38) = 0x3b8ff29;
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                  ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar63,pMVar57);
        unaff_RBP = *(Il2CppRGCTXData **)((long)ppGVar54 + -0x20);
        pUVar31 = *(UnityEngine_EventSystems_EventSystem_o **)((long)ppGVar54 + -0x28);
        ppGVar54 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)ppGVar54 + -0x18);
        pTVar61 = pTVar63;
      }
      *(undefined8 *)((long)ppGVar54 + -0x38) = 0x3b8ff43;
      uVar49 = il2cpp_runtime_helper_022b2c90();
      *(ulong *)((long)ppGVar54 + -0x38) = (ulong)pMVar46 & 0xffffffff;
      *(TMPro_TMP_InputField_o **)((long)ppGVar54 + -0x40) = pTVar63;
      *(undefined8 *)((long)ppGVar54 + -0x48) = uVar49;
      if (*(char *)((long)&(pTVar61->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
        uVar49 = *(undefined8 *)((long)&(pTVar61->fields).m_Navigation.fields.m_SelectOnRight + 4);
        fVar23 = extraout_XMM0_Da - (float)uVar49;
        fVar67 = extraout_XMM0_Db - (float)((ulong)uVar49 >> 0x20);
        if (fVar67 * fVar67 + fVar23 * fVar23 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(pTVar61->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
      }
      pMVar46 = pMVar57;
      pTVar63 = pTVar61;
      if (g_data_057a9eb5 == '\0') {
        pTVar63 = (TMPro_TMP_InputField_o *)&MethodInfo_Int32_get_Count;
        *(undefined8 *)((long)ppGVar54 + -0x50) = 0x3b8ff9a;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9eb5 = '\x01';
      }
      pUVar16 = (pTVar61->fields).m_Navigation.fields.m_SelectOnUp;
      if (pUVar16 == (UnityEngine_UI_Selectable_o *)0x0) break;
      iVar55 = *(int *)&(pUVar16->fields).m_CancellationTokenSource;
      iVar50 = 8;
      if (iVar55 < 9) {
        iVar50 = iVar55;
      }
      if (iVar50 == 0) {
        return;
      }
      (pTVar61->fields).m_Colors.fields.m_NormalColor.fields.r =
           (float)(((int)((long)((ulong)(uint)((int)pMVar57 >> 0x1f) << 0x20 | (ulong)pMVar57 & 0xffffffff) %
                         (long)iVar50) + iVar50) % iVar50);
      *(undefined8 *)((long)ppGVar54 + -0x50) = 0x3b8ffd2;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pTVar61,pMVar46);
      puVar53 = (undefined8 *)((long)ppGVar54 + -0x40);
      unaff_RBP = *(Il2CppRGCTXData **)((long)ppGVar54 + -0x38);
      ppGVar54 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)ppGVar54 + -0x30);
      pUVar31 = (UnityEngine_EventSystems_EventSystem_o *)*puVar53;
    }
    *(undefined8 *)((long)ppGVar54 + -0x50) = 0x3b8ffec;
    uVar49 = il2cpp_runtime_helper_022b2c90();
    if (*(char *)((long)&(pTVar63->fields).m_Navigation.fields.m_SelectOnRight + 1) != '\0') {
      uVar5 = *(undefined8 *)((long)&(pTVar63->fields).m_Navigation.fields.m_SelectOnRight + 4);
      fVar23 = (float)uVar49 - (float)uVar5;
      fVar67 = (float)((ulong)uVar49 >> 0x20) - (float)((ulong)uVar5 >> 0x20);
      if (fVar67 * fVar67 + fVar23 * fVar23 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(pTVar63->fields).m_Navigation.fields.m_SelectOnRight + 1) = 0;
    }
    return;
  }
  pSVar35 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Entries
                      ((Gisketch_Aottg2UI_GisketchUIRoot_o *)root,pMVar46);
  x_00 = (Il2CppRGCTXData *)
         Gisketch_Aottg2UI_Search_GisketchSearchService__Query
                   ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)pSVar35,pSVar40,
                    (MethodInfo *)0x0);
  ppSVar2 = &(__this->fields)._results;
  (__this->fields)._results = (System_Collections_Generic_List_GisketchSearchEntry__o *)x_00;
  pIVar62 = (Il2CppRGCTXData *)ppSVar2;
  il2cpp_runtime_helper_022b4080();
  pSVar35 = (__this->fields)._results;
  if (pSVar35 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b8e4bf;
  if ((pSVar35->fields)._size == 0) goto Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__FocusInput;
  fVar23 = (__this->fields)._pointerLockPosition.fields.y;
  plVar51 = (long *)(ulong)(uint)fVar23;
  pMVar46 = extraout_RDX;
  if (g_data_057a9eb5 == '\0') {
    pIVar62 = (Il2CppRGCTXData *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eb5 = '\x01';
    pSVar35 = *ppSVar2;
    pMVar46 = extraout_RDX_00;
    if (pSVar35 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b8e4bf;
  }
  iVar55 = (pSVar35->fields)._size;
  iVar50 = 8;
  if (iVar55 < 9) {
    iVar50 = iVar55;
  }
  fVar67 = (float)(iVar50 - 1U);
  if ((int)fVar23 <= (int)(iVar50 - 1U)) {
    fVar67 = fVar23;
  }
  in_RCX = (Il2CppRGCTXData *)(ulong)(uint)fVar67;
  fVar66 = 0.0;
  if (-1 < (int)fVar23) {
    fVar66 = fVar67;
  }
  (__this->fields)._pointerLockPosition.fields.y = fVar66;
  bVar25 = (__this->fields)._hasAnimatedResults;
  *(undefined1 *)&(__this->fields)._hasAnimatedResults = 1;
  if (root[0x10].method == (MethodInfo *)0x0) {
label_03b8e4bf:
    unaff_RBP = pIVar62;
    il2cpp_runtime_helper_022b2c90();
    pGVar37 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(extraout_RDX_01 & 0xffffffff);
    pUStack_60 = (UnityEngine_EventSystems_EventSystem_o *)plVar51;
    pIStack_58 = root_00;
    pGStack_50 = __this;
    if (g_data_057a9eb9 == '\0') {
      pIStack_68 = (Il2CppRGCTXData *)0x3b8e4f6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9eb9 = '\x01';
    }
    x.m_CachedPtr = (intptr_t)unaff_RBP[8].method;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_68 = (Il2CppRGCTXData *)0x3b8e51a;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_68 = (Il2CppRGCTXData *)0x3b8e526;
    bVar25 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x.m_CachedPtr,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar25 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_68 = (Il2CppRGCTXData *)0x3b8e53c;
      il2cpp_runtime_helper_02337ed0();
    }
    pIStack_68 = (Il2CppRGCTXData *)0x3b8e548;
    pIVar62 = x_00;
    bVar25 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar25 != '\0') {
      return;
    }
    if (x_00 != (Il2CppRGCTXData *)0x0) {
      if (x_00[0x11].rgctxDataDummy == (Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_array *)0x0) {
        return;
      }
      unaff_RBP = unaff_RBP + 8;
      unaff_RBP->rgctxDataDummy = (void *)0x0;
      pIStack_68 = (Il2CppRGCTXData *)0x3b8e571;
      il2cpp_runtime_helper_022b4080(unaff_RBP);
      pIVar62 = (Il2CppRGCTXData *)0x0;
      if ((Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_array *)x_00[0x11].method !=
          (Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_array *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)x_00[0x11].method,
                   (uint)extraout_RDX_01 & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
    pIStack_68 = (Il2CppRGCTXData *)0x3b8e59e;
    pGStack_78 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_022b2c90();
    pIStack_70 = (Il2CppRGCTXData *)x.m_CachedPtr;
    pIStack_68 = (Il2CppRGCTXData *)pGVar37;
    if (g_data_057a9eba == '\0') {
      pIStack_80 = (Il2CppRGCTXData *)0x3b8e5bc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
      pIStack_80 = (Il2CppRGCTXData *)0x3b8e5c8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
      pIStack_80 = (Il2CppRGCTXData *)0x3b8e5d4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9eba = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pIStack_80 = (Il2CppRGCTXData *)0x3b8e5f3;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
    pIStack_80 = (Il2CppRGCTXData *)0x3b8e5ff;
    unaff_RBX = pIVar62;
    bVar25 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pIVar62,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar25 != '\0') {
label_03b8e641:
      pIStack_80 = (Il2CppRGCTXData *)0x3b8e650;
      pSVar26 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
      pIStack_80 = (Il2CppRGCTXData *)0x3b8e665;
      System_Collections_Generic_List_object____ctor(pSVar26,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
      return;
    }
    if (pIVar62 != (Il2CppRGCTXData *)0x0) {
      if ((Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)pIVar62[0x10].method ==
          (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) goto label_03b8e641;
      pGVar37 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                ((Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)pIVar62[0x10].method)->m_Items[2];
      unaff_RBX = (Il2CppRGCTXData *)pIVar62[0xe].method;
      pIStack_80 = (Il2CppRGCTXData *)0x3b8e626;
      unaff_R14 = pGVar37;
      pSVar35 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor
                          ((Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)unaff_RBX,
                           (System_String_o *)pGVar37,(MethodInfo *)0x0);
      in_RCX = (Il2CppRGCTXData *)0x0;
      if ((Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)pIVar62[0x10].method !=
          (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
        pGVar17 = ((Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)pIVar62[0x10].method)->m_Items[1]
        ;
        if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
          __this_08 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
        }
        else {
          __this_08 = (pGVar17->fields).enter;
        }
        pGStack_78 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pIStack_68;
        pIStack_88 = (Il2CppRGCTXData *)&TypeInfo_Object;
        pIStack_90 = pIStack_70;
        pIStack_80 = root;
        pIStack_70 = x_00;
        pIStack_68 = unaff_RBP;
        if (g_data_057a9cbb == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose,__this_08,pGVar37,0);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
          il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
          il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
          il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
          il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
          il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
          il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
          g_data_057a9cbb = '\x01';
        }
        pSVar26 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
        System_Collections_Generic_List_object____ctor(pSVar26,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
        if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057a9c88 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
          g_data_057a9c88 = '\x01';
          iVar55 = *(int *)(TypeInfo_StringComparer + 0xe4);
        }
        else {
          iVar55 = *(int *)(TypeInfo_StringComparer + 0xe4);
        }
        if (iVar55 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar46 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
        __this_05 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
        System_Collections_Generic_HashSet_object____ctor_33e0600
                  (__this_05,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar46,MethodInfo_HashSet_1_System_String);
        pIStack_b0 = (Il2CppRGCTXData *)
                     Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                               ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)pSVar35,
                                pMVar46);
        __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
        System_Collections_Generic_List_object____ctor(__this_06,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
        if (g_data_057a9c88 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
          g_data_057a9c88 = '\x01';
          iVar55 = *(int *)(TypeInfo_StringComparer + 0xe4);
        }
        else {
          iVar55 = *(int *)(TypeInfo_StringComparer + 0xe4);
        }
        if (iVar55 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        plVar51 = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
        __this_07 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
        System_Collections_Generic_HashSet_object____ctor_33e0600
                  (__this_07,(System_Collections_Generic_IEqualityComparer_T__o *)plVar51,MethodInfo_HashSet_1_System_String);
        if (__this_08 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
          if (g_data_057a9cc0 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
            g_data_057a9cc0 = '\x01';
          }
          __this_08 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
          System_Object___ctor((Il2CppObject *)__this_08,(MethodInfo *)0x0);
          *(undefined4 *)&(__this_08->fields).preset = 0xfffffffe;
          fVar23 = (float)System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
          (__this_08->fields).duration = fVar23;
          if (__this_08 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto label_03b49dcf;
        }
        pGVar13 = __this_08->klass;
        uVar6._0_1_ = (pGVar13->_2).rank;
        uVar6._1_1_ = (pGVar13->_2).minimumAlignment;
        if ((ulong)uVar6 != 0) {
          pIVar14 = (pGVar13->_1).interfaceOffsets;
          lVar59 = 0;
          do {
            if (*(long *)((long)&pIVar14->interfaceType + lVar59) == TypeInfo_IEnumerable_GisketchSearchEntry) {
              ppIVar27 = &(&(pGVar13->vtable)._0_Equals)[*(int *)((long)&pIVar14->offset + lVar59)].methodPtr;
              goto label_03b4956f;
            }
            lVar59 = lVar59 + 0x10;
          } while ((ulong)uVar6 << 4 != lVar59);
        }
        ppIVar27 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_08,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
        pSStack_b8 = __this_07;
        plVar28 = (long *)(**ppIVar27)(__this_08,(MethodInfo *)ppIVar27[1]);
        if (plVar28 == (long *)0x0) goto label_03b49dd4;
        plVar51 = &TypeInfo_IEnumerator;
        in_stack_ffffffffffffff08 = 0;
        do {
          lVar59 = *plVar28;
          if ((ulong)*(ushort *)(lVar59 + 0x12e) != 0) {
            lVar60 = 0;
            do {
              if (*(long *)(*(long *)(lVar59 + 0xb0) + lVar60) == TypeInfo_IEnumerator) {
                puVar29 = (undefined8 *)
                          ((long)*(int *)(*(long *)(lVar59 + 0xb0) + 8 + lVar60) * 0x10 + lVar59 + 0x138);
                goto label_03b495f3;
              }
              lVar60 = lVar60 + 0x10;
            } while ((ulong)*(ushort *)(lVar59 + 0x12e) << 4 != lVar60);
          }
          puVar29 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IEnumerator,0);
label_03b495f3:
          cVar22 = (*(code *)*puVar29)();
          if (cVar22 == '\0') {
            plVar51 = (long *)&g_data_00000005;
            if (plVar28 == (long *)0x0) goto label_03b497a6;
            lVar59 = *plVar28;
            if ((ulong)*(ushort *)(lVar59 + 0x12e) == 0) goto label_03b4977f;
            lVar60 = 0;
            goto label_03b49770;
          }
          lVar59 = *plVar28;
          if ((ulong)*(ushort *)(lVar59 + 0x12e) != 0) {
            lVar60 = 0;
            do {
              if (*(long *)(*(long *)(lVar59 + 0xb0) + lVar60) == TypeInfo_IEnumerator_GisketchSearchEntry) {
                pMVar46 = (MethodInfo *)
                          ((long)*(int *)(*(long *)(lVar59 + 0xb0) + 8 + lVar60) * 0x10 + lVar59 + 0x138);
                goto label_03b49663;
              }
              lVar60 = lVar60 + 0x10;
            } while ((ulong)*(ushort *)(lVar59 + 0x12e) << 4 != lVar60);
          }
          pMVar46 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
          pMVar57 = (MethodInfo *)pMVar46->virtualMethodPointer;
          pGVar30 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar46->methodPointer)();
          if (((pGVar30 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
              (bVar25 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar30,pMVar57),
              (char)bVar25 != '\0')) &&
             (bVar25 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                                 (pGVar30,(System_String_o *)pGVar37,
                                  (System_Collections_Generic_HashSet_string__o *)pIStack_b0,pMVar46),
             lVar59 = MethodInfo_Void_Add, (char)bVar25 == '\0')) {
            if (__this_06 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
            piVar1 = &(__this_06->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar20 = (__this_06->fields)._items;
            if (pSVar20 == (System_Object_array *)0x0) goto label_03b49dc0;
            uVar12 = (__this_06->fields)._size;
            if (uVar12 < (uint)pSVar20->max_length) {
              (__this_06->fields)._size = uVar12 + 1;
              pSVar20->m_Items[(int)uVar12] = (Il2CppObject *)pGVar30;
              il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar12);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_06,(Il2CppObject *)pGVar30,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar59 + 0x20) + 0xc0) + 0x70));
            }
            bVar25 = System_String__IsNullOrEmpty
                               ((pGVar30->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
            if ((char)bVar25 == '\0') {
              if (pSStack_b8 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                do {
                  il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                  il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                  do {
                    il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                    il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                    il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                    il2cpp_runtime_helper_022b2c90();
                    do {
                      auVar77 = il2cpp_runtime_helper_022fefe0();
                      iVar55 = 0;
                      if (auVar77._8_4_ != 1) {
                        lVar60 = auVar77._0_8_;
                        lVar59 = 0;
                        goto joined_r0x03b4a097;
                      }
                      plVar28 = (long *)__cxa_begin_catch();
                      lVar59 = *plVar28;
                      __cxa_end_catch();
label_03b49ac8:
                      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51 !=
                          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                        pSVar15 = (System_Collections_Generic_IEqualityComparer_T__c *)
                                  ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51)->klass;
                        uVar10._0_1_ = (pSVar15->_2).rank;
                        uVar10._1_1_ = (pSVar15->_2).minimumAlignment;
                        if ((ulong)uVar10 != 0) {
                          pIVar14 = (pSVar15->_1).interfaceOffsets;
                          lVar60 = 0;
                          do {
                            if (*(long *)((long)&pIVar14->interfaceType + lVar60) == TypeInfo_IDisposable) {
                              ppIVar27 = &pSVar15->vtable[*(int *)((long)&pIVar14->offset + lVar60)].methodPtr
                              ;
                              goto label_03b49b2d;
                            }
                            lVar60 = lVar60 + 0x10;
                          } while ((ulong)uVar10 << 4 != lVar60);
                        }
                        ppIVar27 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar51,TypeInfo_IDisposable,0);
label_03b49b2d:
                        (**ppIVar27)(plVar51,(MethodInfo *)ppIVar27[1]);
                      }
                    } while (lVar59 != 0);
                    if ((iVar55 != 10) && (iVar55 != 0)) {
                      return;
                    }
                  } while (__this_06 == (System_Collections_Generic_List_object__o *)0x0);
                  System_Collections_Generic_List_object___GetEnumerator
                            ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_a8,__this_06,
                             MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                  plVar51 = (long *)pGStack_98;
                  _Var79 = _Stack_a8;
                  if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    while( true ) {
                      __this_02.fields._8_8_ = __this_05;
                      __this_02.fields._list =
                           (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
                      __this_02.fields._current = _Var79.genericMethod;
                      bVar25 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                         (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
                      if ((char)bVar25 == '\0') goto label_03b49d72;
                      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51 ==
                          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b49da2;
                      bVar25 = System_String__IsNullOrEmpty
                                         ((((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51)->
                                          fields).action,(MethodInfo *)0x0);
                      lVar59 = MethodInfo_Void_Add;
                      if ((char)bVar25 == '\0') goto label_03b49db6;
                      if (pSVar26 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49d6d;
                      piVar1 = &(pSVar26->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar20 = (pSVar26->fields)._items;
                      if (pSVar20 == (System_Object_array *)0x0) break;
                      uVar12 = (pSVar26->fields)._size;
                      if (uVar12 < (uint)pSVar20->max_length) {
                        (pSVar26->fields)._size = uVar12 + 1;
                        pSVar20->m_Items[(int)uVar12] = (Il2CppObject *)plVar51;
                        il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar12,plVar51);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  (pSVar26,(Il2CppObject *)plVar51,
                                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar59 + 0x20) + 0xc0) + 0x70)
                                  );
                      }
                    }
                  }
                  else {
                    if (pSVar26 == (System_Collections_Generic_List_object__o *)0x0) {
                      while( true ) {
                        __this_03.fields._8_8_ = __this_05;
                        __this_03.fields._list =
                             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
                        __this_03.fields._current = _Var79.genericMethod;
                        bVar25 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                           (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
                        if ((char)bVar25 == '\0') goto label_03b49d72;
                        if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51 ==
                            (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
                        bVar25 = System_String__IsNullOrEmpty
                                           ((((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51)->
                                            fields).action,(MethodInfo *)0x0);
                        if (((char)bVar25 != '\0') ||
                           (bVar25 = System_Collections_Generic_HashSet_object___Contains
                                               (__this_05,
                                                (Il2CppObject *)
                                                (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51)
                                                ->fields).action,MethodInfo_Boolean_Contains), (char)bVar25 == '\0'))
                        goto label_03b49d6d;
                      }
                    }
                    else {
                      while( true ) {
                        __this_01.fields._8_8_ = __this_05;
                        __this_01.fields._list =
                             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
                        __this_01.fields._current = _Var79.genericMethod;
                        bVar25 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                           (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
                        if ((char)bVar25 == '\0') goto label_03b49d72;
                        if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51 ==
                            (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
                        bVar25 = System_String__IsNullOrEmpty
                                           ((((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51)->
                                            fields).action,(MethodInfo *)0x0);
                        if (((char)bVar25 != '\0') ||
                           (bVar25 = System_Collections_Generic_HashSet_object___Contains
                                               (__this_05,
                                                (Il2CppObject *)
                                                (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51)
                                                ->fields).action,MethodInfo_Boolean_Contains), (char)bVar25 == '\0')) {
                          lVar59 = MethodInfo_Void_Add;
                          piVar1 = &(pSVar26->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar20 = (pSVar26->fields)._items;
                          if (pSVar20 == (System_Object_array *)0x0) goto label_03b49dac;
                          uVar12 = (pSVar26->fields)._size;
                          if (uVar12 < (uint)pSVar20->max_length) {
                            (pSVar26->fields)._size = uVar12 + 1;
                            pSVar20->m_Items[(int)uVar12] = (Il2CppObject *)plVar51;
                            il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar12,plVar51);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      (pSVar26,(Il2CppObject *)plVar51,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar59 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                    }
label_03b49da2:
                    il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                    il2cpp_runtime_helper_022b2c90();
                  }
label_03b49dac:
                  il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                  il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                  il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                  il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                  il2cpp_runtime_helper_022b2c90();
                } while( true );
              }
              System_Collections_Generic_HashSet_object___Add
                        (pSStack_b8,(Il2CppObject *)(pGVar30->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
            }
          }
        } while( true );
      }
    }
    pIStack_80 = (Il2CppRGCTXData *)0x3b8e68b;
    il2cpp_runtime_helper_022b2c90();
    unaff_R12 = unaff_RBX;
    pIStack_80 = pIVar62;
    if (g_data_057a9eb5 == '\0') {
      unaff_R12 = (Il2CppRGCTXData *)&MethodInfo_Int32_get_Count;
      pIStack_88 = (Il2CppRGCTXData *)0x3b8e6a9;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    if ((Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)unaff_RBX[6].method !=
        (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
      return;
    }
    pIStack_88 = (Il2CppRGCTXData *)0x3b8e6ce;
    pSStack_b8 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_022b2c90();
    _Stack_a8.genericMethod = &TypeInfo_Object;
    register0x00000020 = (BADSPACEBASE *)&pSStack_b8;
    pIStack_b0 = unaff_RBX;
    pIStack_a0 = root;
    pGStack_98 = pGVar37;
    pIStack_90 = x_00;
    pIStack_88 = unaff_RBP;
    if (g_data_057a9eb1 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
      il2cpp_runtime_helper_023445d0(&"search-palette-results");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"Stretch");
      il2cpp_runtime_helper_023445d0(&"Panel");
      il2cpp_runtime_helper_023445d0(&"popover");
      g_data_057a9eb1 = '\x01';
      if (g_data_057a9eb5 == '\0') goto label_03b8e77e;
label_03b8e6f7:
      pGVar37 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R12[6].method;
      if (pGVar37 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b8e91f;
label_03b8e79f:
      uVar12 = *(uint *)&(pGVar37->fields).id;
      unaff_RBP = (Il2CppRGCTXData *)(ulong)uVar12;
      unaff_RBX = (Il2CppRGCTXData *)&g_data_00000008;
      if ((int)uVar12 < 9) {
        unaff_RBX = (Il2CppRGCTXData *)(ulong)uVar12;
      }
      x_00 = (Il2CppRGCTXData *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
      if ((int)uVar12 < 1) {
label_03b8e816:
        unaff_R14 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(unaff_R14,(MethodInfo *)0x0);
        if (unaff_R14 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (unaff_R14->fields).type = "Panel";
          il2cpp_runtime_helper_022b4080(&unaff_R14->fields);
          (unaff_R14->fields).id = "search-palette-results";
          il2cpp_runtime_helper_022b4080(&(unaff_R14->fields).id);
          (unaff_R14->fields).style = "popover";
          il2cpp_runtime_helper_022b4080(&(unaff_R14->fields).style);
          __this_09 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_09,(MethodInfo *)0x0);
          unaff_RBX = (Il2CppRGCTXData *)0x0;
          if (__this_09 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (__this_09->fields).direction = "Column";
            il2cpp_runtime_helper_022b4080(&__this_09->fields);
            (__this_09->fields).alignItems = "Stretch";
            il2cpp_runtime_helper_022b4080(&(__this_09->fields).alignItems);
            (__this_09->fields).gap = 0.0;
            (unaff_R14->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_09;
            il2cpp_runtime_helper_022b4080(&(unaff_R14->fields).search,__this_09);
            (unaff_R14->fields).deferredChildren = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)x_00
            ;
            il2cpp_runtime_helper_022b4080(&(unaff_R14->fields).deferredChildren,x_00);
            return;
          }
        }
        goto label_03b8e91f;
      }
      unaff_R13 = root;
      if (x_00 != (Il2CppRGCTXData *)0x0) {
        unaff_RBP = (Il2CppRGCTXData *)(long)(int)unaff_RBX;
        root = x_00 + 4;
        unaff_RBX = (Il2CppRGCTXData *)0x0;
        do {
          pGVar37 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
                              ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)unaff_R12,
                               (int32_t)unaff_RBX,(System_String_o *)unaff_R14,(MethodInfo *)in_RCX);
          in_RCX = (Il2CppRGCTXData *)(ulong)*(uint *)(x_00 + 3);
          if (in_RCX <= unaff_RBX) {
            il2cpp_runtime_helper_022b2ca0();
            goto label_03b8e91f;
          }
          root->method = (MethodInfo *)pGVar37;
          il2cpp_runtime_helper_022b4080(root);
          unaff_RBX = (Il2CppRGCTXData *)((long)unaff_RBX + 1);
          root = root + 1;
        } while ((long)unaff_RBX < (long)unaff_RBP);
        goto label_03b8e816;
      }
    }
    else {
      if (g_data_057a9eb5 != '\0') goto label_03b8e6f7;
label_03b8e77e:
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057a9eb5 = '\x01';
      pGVar37 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R12[6].method;
      if (pGVar37 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b8e79f;
label_03b8e91f:
      il2cpp_runtime_helper_022b2c90();
      unaff_R13 = root;
    }
    pUVar58 = (UnityEngine_Object_o *)0x0;
    __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)unaff_R12;
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
              ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)unaff_R12,0,
               (System_String_o *)unaff_R14,(MethodInfo *)in_RCX);
    il2cpp_runtime_helper_022b2c90();
    root = extraout_RDX_02;
  }
  else {
    pMVar57 = root[0x11].method;
    root_00 = (Il2CppRGCTXData *)
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode
                        (__this,(System_String_o *)(root[0x10].method)->parameters,pMVar46);
    x_00 = (Il2CppRGCTXData *)0x0;
    pIVar62 = (Il2CppRGCTXData *)__this;
    pUVar36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pMVar57 == (MethodInfo *)0x0) goto label_03b8e4bf;
    pGStack_50 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x3b8e46b;
    pUVar36 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pMVar57,"search-palette-results",
                         (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)root_00,pUVar36,0,1,0.0,
                         (uint)((char)bVar25 == '\0'),(MethodInfo *)0x0);
    (__this->fields)._popoverContent = pUVar36;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._popoverContent,pUVar36);
    pUVar58 = (UnityEngine_Object_o *)(__this->fields)._popoverContent;
    x_00 = unaff_R15;
  }
  *(Il2CppRGCTXData **)((long)register0x00000020 + -8) = unaff_RBP;
  *(Il2CppRGCTXData **)((long)register0x00000020 + -0x10) = x_00;
  *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)register0x00000020 + -0x18) = unaff_R14;
  *(Il2CppRGCTXData **)((long)register0x00000020 + -0x20) = unaff_R13;
  *(Il2CppRGCTXData **)((long)register0x00000020 + -0x28) = unaff_R12;
  *(Il2CppRGCTXData **)((long)register0x00000020 + -0x30) = unaff_RBX;
  if (g_data_057a9eb3 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e973;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e97f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e98b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_bool);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e997;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e9a3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e9af;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e9bb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e9c7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e9d3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_WireResults_b__1);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e9df;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e9eb;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_WireResults_b__0);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8e9f7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_1);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ea03;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ea0f;
    il2cpp_runtime_helper_023445d0(&"search-result-");
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ea1b;
    il2cpp_runtime_helper_023445d0(&"text");
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ea27;
    il2cpp_runtime_helper_023445d0(&"negativeText");
    g_data_057a9eb3 = '\x01';
  }
  *(undefined4 *)((long)register0x00000020 + -0xbc) = 0;
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ea45;
  pIVar38 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ea52;
  System_Object___ctor(pIVar38,(MethodInfo *)0x0);
  if (pIVar38 == (Il2CppObject *)0x0) goto label_03b8f282;
  pIVar38[1].klass = (Il2CppClass *)__this;
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ea6b;
  il2cpp_runtime_helper_022b4080(pIVar38 + 1,__this);
  ppvVar52 = &pIVar38[1].monitor;
  pIVar38[1].monitor = root;
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ea81;
  il2cpp_runtime_helper_022b4080(ppvVar52);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ea99;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8eaa5;
  bVar25 = UnityEngine_Object__op_Equality(pUVar58,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar25 != '\0') {
    return;
  }
  pGVar37 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
            ((Il2CppRGCTXData *)((long)__this + 0x38))->method;
  if (pGVar37 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b8f282;
  piVar3 = (int *)((long)&(pGVar37->fields).id + 4);
  *piVar3 = *piVar3 + 1;
  iVar55 = *(int *)&(pGVar37->fields).id;
  *(undefined4 *)&(pGVar37->fields).id = 0;
  if (0 < iVar55) {
    pSVar40 = (pGVar37->fields).type;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8eada;
    System_Array__Clear((System_Array_o *)pSVar40,0,iVar55,(MethodInfo *)0x0);
  }
  pGVar37 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
            ((Il2CppRGCTXData *)((long)__this + 0x20))->method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8eaf0;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8eafc;
  bVar25 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pGVar37,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar40 = "text";
  if ((char)bVar25 == '\0') {
    ppMVar39 = *(MethodInfo ***)(g_data_057b9c00 + 0xb8);
  }
  else {
    if (((Il2CppRGCTXData *)((long)__this + 0x20))->klass == (Il2CppClass *)0x0) goto label_03b8f282;
    ppMVar39 = &((Il2CppRGCTXData *)((long)__this + 0x20))->klass->vtable[0xe].method;
  }
  *(MethodInfo **)((long)register0x00000020 + -0x40) = *ppMVar39;
  pUVar56 = *ppvVar52;
  if (g_data_057a9eb4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8eb58;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8eb77;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8eb83;
  bVar25 = UnityEngine_Object__op_Inequality(pUVar56,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar23 = 1.0;
  fVar67 = 1.0;
  uVar64 = 0;
  uVar65 = 0;
  if ((char)bVar25 == '\0') {
label_03b8ebd1:
    pUVar56 = *ppvVar52;
    fVar66 = fVar23;
    fVar68 = fVar67;
    uVar69 = uVar64;
    uVar70 = uVar65;
    pSVar40 = "negativeText";
  }
  else {
    if (pUVar56 == (UnityEngine_Object_o *)0x0) goto label_03b8f282;
    pUVar18 = pUVar56[5].klass;
    if (pUVar18 == (UnityEngine_Object_c *)0x0) goto label_03b8ebd1;
    uVar69 = g_data_00d19fc0._8_4_;
    uVar70 = g_data_00d19fc0._12_4_;
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ebb7;
    uVar49 = g_data_00d19fc0;
    UVar75.fields.b = (float)(int)uVar49;
    UVar75.fields.a = (float)(int)((ulong)uVar49 >> 0x20);
    UVar75.fields.r = (float)(int)uVar49;
    UVar75.fields.g = (float)(int)((ulong)uVar49 >> 0x20);
    UVar75 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar18,pSVar40,UVar75,(MethodInfo *)0x0)
    ;
    fVar66 = UVar75.fields.b;
    fVar68 = UVar75.fields.a;
    fVar23 = UVar75.fields.r;
    fVar67 = UVar75.fields.g;
    pUVar56 = *ppvVar52;
    uVar64 = extraout_XMM0_Dc;
    uVar65 = extraout_XMM0_Dd;
    pSVar40 = "negativeText";
  }
  "negativeText" = pSVar40;
  if (pUVar56 == (UnityEngine_Object_o *)0x0) goto label_03b8f282;
  pUVar18 = pUVar56[5].klass;
  *(float *)((long)register0x00000020 + -0xb8) = fVar23;
  *(float *)((long)register0x00000020 + -0xb4) = fVar67;
  *(undefined4 *)((long)register0x00000020 + -0xb0) = uVar64;
  *(undefined4 *)((long)register0x00000020 + -0xac) = uVar65;
  *(float *)((long)register0x00000020 + -0x98) = fVar66;
  *(float *)((long)register0x00000020 + -0x94) = fVar68;
  *(undefined4 *)((long)register0x00000020 + -0x90) = uVar69;
  *(undefined4 *)((long)register0x00000020 + -0x8c) = uVar70;
  if ((pUVar18 == (UnityEngine_Object_c *)0x0) ||
     (fVar71 = fVar23, fVar72 = fVar67, fVar73 = fVar66, fVar74 = fVar68,
     (pUVar18->_1).byval_arg.field_0xc == '\0')) {
    if (g_data_057a9eb4 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ec26;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9eb4 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ec3e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ec4a;
    bVar25 = UnityEngine_Object__op_Inequality(pUVar56,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    fVar23 = 1.0;
    fVar67 = 1.0;
    uVar64 = 0;
    uVar65 = 0;
    fVar73 = fVar23;
    fVar74 = fVar67;
    uVar69 = uVar64;
    uVar70 = uVar65;
    if ((char)bVar25 == '\0') {
      fVar71 = *(float *)((long)register0x00000020 + -0xb8);
      fVar72 = *(float *)((long)register0x00000020 + -0xb4);
    }
    else {
      pUVar18 = pUVar56[5].klass;
      fVar71 = *(float *)((long)register0x00000020 + -0xb8);
      fVar72 = *(float *)((long)register0x00000020 + -0xb4);
      fVar66 = *(float *)((long)register0x00000020 + -0x98);
      fVar68 = *(float *)((long)register0x00000020 + -0x94);
      if (pUVar18 == (UnityEngine_Object_c *)0x0) goto label_03b8ec96;
      uVar69 = g_data_00d19fc0._8_4_;
      uVar70 = g_data_00d19fc0._12_4_;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ec7f;
      uVar49 = g_data_00d19fc0;
      fallback.fields.b = (float)(int)uVar49;
      fallback.fields.a = (float)(int)((ulong)uVar49 >> 0x20);
      fallback.fields.r = (float)(int)uVar49;
      fallback.fields.g = (float)(int)((ulong)uVar49 >> 0x20);
      UVar75 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar18,pSVar40,fallback,
                          (MethodInfo *)0x0);
      fVar23 = UVar75.fields.r;
      fVar67 = UVar75.fields.g;
      fVar71 = *(float *)((long)register0x00000020 + -0xb8);
      fVar72 = *(float *)((long)register0x00000020 + -0xb4);
      uVar64 = extraout_XMM0_Dc_00;
      uVar65 = extraout_XMM0_Dd_00;
      fVar73 = UVar75.fields.b;
      fVar74 = UVar75.fields.a;
    }
    fVar66 = *(float *)((long)register0x00000020 + -0x98);
    fVar68 = *(float *)((long)register0x00000020 + -0x94);
  }
label_03b8ec96:
  *(float *)((long)register0x00000020 + -0xa8) = fVar73;
  *(float *)((long)register0x00000020 + -0xa4) = fVar74;
  *(undefined4 *)((long)register0x00000020 + -0xa0) = uVar69;
  *(undefined4 *)((long)register0x00000020 + -0x9c) = uVar70;
  *(float *)((long)register0x00000020 + -0x88) = fVar23;
  *(float *)((long)register0x00000020 + -0x84) = fVar67;
  *(undefined4 *)((long)register0x00000020 + -0x80) = uVar64;
  *(undefined4 *)((long)register0x00000020 + -0x7c) = uVar65;
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ecaa;
  color.fields.g = fVar72;
  color.fields.r = fVar71;
  color.fields.a = fVar68;
  color.fields.b = fVar66;
  pSVar40 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
  *(System_String_o **)((long)register0x00000020 + -0x48) = pSVar40;
  fVar67 = *(float *)((long)register0x00000020 + -0x94) * 0.75;
  fVar23 = 1.0;
  if (fVar67 <= 1.0) {
    fVar23 = fVar67;
  }
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ecf1;
  color_00.fields.a = (float)(-(uint)(0.0 <= fVar67) & (uint)fVar23);
  color_00.fields.b = (float)*(undefined4 *)((long)register0x00000020 + -0x98);
  color_00.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0xb8);
  pSVar40 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
  *(System_String_o **)((long)register0x00000020 + -0x50) = pSVar40;
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ed07;
  color_01.fields._8_8_ = *(undefined8 *)((long)register0x00000020 + -0xa8);
  color_01.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0x88);
  pSVar40 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
  *(System_String_o **)((long)register0x00000020 + -0x58) = pSVar40;
  fVar67 = *(float *)((long)register0x00000020 + -0xa4) * 0.75;
  fVar23 = 1.0;
  if (fVar67 <= 1.0) {
    fVar23 = fVar67;
  }
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ed4c;
  color_02.fields.a = (float)(-(uint)(0.0 <= fVar67) & (uint)fVar23);
  color_02.fields.b = (float)*(undefined4 *)((long)register0x00000020 + -0xa8);
  color_02.fields._0_8_ = *(undefined8 *)((long)register0x00000020 + -0x88);
  pSVar40 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
  *(System_String_o **)((long)register0x00000020 + -0x60) = pSVar40;
  if (g_data_057a9eb5 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ed66;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9eb5 = '\x01';
  }
  if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)((Il2CppRGCTXData *)((long)__this + 0x30))->method !=
      (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    iVar55 = *(int *)&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                       ((Il2CppRGCTXData *)((long)__this + 0x30))->method)->fields).id;
    iVar50 = 8;
    if (iVar55 < 9) {
      iVar50 = iVar55;
    }
    *(int *)((long)register0x00000020 + -0x98) = iVar50;
    *(undefined4 *)((long)register0x00000020 + -0xbc) = 0;
    if (iVar55 < 1) {
      return;
    }
    *(undefined4 *)((long)register0x00000020 + -0x88) = *(undefined4 *)((long)register0x00000020 + -0x88);
    *(undefined4 *)((long)register0x00000020 + -0x84) = *(undefined4 *)((long)register0x00000020 + -0x84);
    *(undefined4 *)((long)register0x00000020 + -0x80) = *(undefined4 *)((long)register0x00000020 + -0xa8);
    *(undefined4 *)((long)register0x00000020 + -0x7c) = *(undefined4 *)((long)register0x00000020 + -0xa4);
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x68) = pUVar58;
    *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)register0x00000020 + -0x70) = __this;
    *(Il2CppObject **)((long)register0x00000020 + -0x38) = pIVar38;
    while( true ) {
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ee11;
      pIVar41 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_1);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ee1e;
      System_Object___ctor(pIVar41,(MethodInfo *)0x0);
      if (pIVar41 == (Il2CppObject *)0x0) break;
      ppvVar52 = &pIVar41[1].monitor;
      pIVar41[1].monitor = pIVar38;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ee3a;
      il2cpp_runtime_helper_022b4080(ppvVar52,pIVar38);
      pGVar37 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                ((Il2CppRGCTXData *)((long)__this + 0x30))->method;
      if (pGVar37 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      *(int32_t *)((long)register0x00000020 + -0xb8) = *(int32_t *)((long)register0x00000020 + -0xbc);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ee5f;
      pIVar42 = (Il2CppClass *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pGVar37,
                           *(int32_t *)((long)register0x00000020 + -0xbc),MethodInfo_GisketchSearchEntry_get_Item);
      pIVar38 = pIVar41 + 1;
      pIVar41[1].klass = pIVar42;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ee75;
      il2cpp_runtime_helper_022b4080(pIVar38);
      if (pUVar58 == (UnityEngine_Object_o *)0x0) break;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ee88;
      pUVar43 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar58,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ee97;
      pSVar40 = System_Int32__ToString
                          ((int32_t)(undefined1 *)((long)register0x00000020 + -0xbc),(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8eeab;
      pSVar40 = System_String__Concat_3ae5ba0("search-result-",pSVar40,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8eeb6;
      pUVar43 = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(pUVar43,pSVar40,method_01);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8eeca;
        il2cpp_runtime_helper_02337ed0();
      }
      *(UnityEngine_Transform_o **)((long)register0x00000020 + -0xa8) = pUVar43;
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8eedb;
      bVar25 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pUVar43,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pUVar56 = (UnityEngine_Object_o *)0x0;
      if ((char)bVar25 != '\0') {
        if (*(UnityEngine_Component_o **)((long)register0x00000020 + -0xa8) == (UnityEngine_Component_o *)0x0)
        break;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ef01;
        pUVar56 = (UnityEngine_Object_o *)
                  UnityEngine_Component__GetComponent_object_
                            (*(UnityEngine_Component_o **)((long)register0x00000020 + -0xa8),MethodInfo_Button_GetComponent_Button);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ef15;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ef21;
      bVar25 = UnityEngine_Object__op_Inequality(pUVar56,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar25 != '\0') {
        if (pUVar56 == (UnityEngine_Object_o *)0x0) break;
        __this_00 = (UnityEngine_Events_UnityEvent_o *)pUVar56[10].fields.m_CachedPtr;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ef44;
        call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ef5e;
        UnityEngine_Events_UnityAction___ctor();
        if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) break;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ef74;
        UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ef8c;
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar56 = *(UnityEngine_Object_o **)((long)register0x00000020 + -0xa8);
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ef9d;
      bVar25 = UnityEngine_Object__op_Inequality(pUVar56,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      __this_10 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
      if ((char)bVar25 != '\0') {
        if (pUVar56 == (UnityEngine_Object_o *)0x0) break;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8efc2;
        __this_10 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar56,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8efdd;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8efe9;
      bVar25 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar25 != '\0') {
        if ((((*ppvVar52 == (void *)0x0) || (lVar59 = *(long *)((long)*ppvVar52 + 0x18), lVar59 == 0)) ||
            (lVar59 = *(long *)(lVar59 + 0x80), lVar59 == 0)) ||
           (pIVar42 = pIVar38->klass, pIVar42 == (Il2CppClass *)0x0)) break;
        pMVar46 = *(MethodInfo **)(lVar59 + 0x30);
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f032;
        pSVar40 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                            ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar42,
                             (System_String_o *)pMVar46,(MethodInfo *)0x0);
        if (__this_10 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
        uVar49 = *(undefined8 *)((long)register0x00000020 + -0x80);
        *(undefined8 *)&(__this_10->fields)._hoverBg.fields.a =
             *(undefined8 *)((long)register0x00000020 + -0x88);
        (__this_10->fields)._hoverText.fields.g = (float)(int)uVar49;
        (__this_10->fields)._hoverText.fields.b = (float)(int)((ulong)uVar49 >> 0x20);
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f053;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_10,pMVar46);
        pvVar19 = *ppvVar52;
        if (pvVar19 == (void *)0x0) break;
        pSVar44 = *(System_Func_bool__o **)((long)pvVar19 + 0x20);
        if (pSVar44 == (System_Func_bool__o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f077;
          pSVar44 = (System_Func_bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_bool);
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f091;
          System_Func_bool____ctor();
          *(System_Func_bool__o **)((long)pvVar19 + 0x20) = pSVar44;
          *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f0a1;
          il2cpp_runtime_helper_022b4080((long)pvVar19 + 0x20,pSVar44);
        }
        (__this_10->fields)._pointerHoverAllowed = pSVar44;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f0b7;
        il2cpp_runtime_helper_022b4080(&(__this_10->fields)._pointerHoverAllowed,pSVar44);
        pIVar42 = pIVar38->klass;
        *(undefined8 *)((long)register0x00000020 + -200) = 0;
        query = *(System_String_o **)((long)register0x00000020 + -0x40);
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f0e5;
        pSVar45 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                            ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar42,query,0,
                             *(System_String_o **)((long)register0x00000020 + -0x48),pSVar40,
                             *(System_String_o **)((long)register0x00000020 + -0x50),
                             *(MethodInfo **)((long)register0x00000020 + -200));
        pIVar42 = pIVar38->klass;
        *(undefined8 *)((long)register0x00000020 + -200) = 0;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f10e;
        pMVar46 = (MethodInfo *)
                  Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                            ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar42,query,1,
                             *(System_String_o **)((long)register0x00000020 + -0x58),pSVar40,
                             *(System_String_o **)((long)register0x00000020 + -0x60),
                             *(MethodInfo **)((long)register0x00000020 + -200));
        if (pSVar45 == (System_String_o *)0x0) {
          pSVar45 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        ppSVar4 = &(__this_10->fields)._normalLabelText;
        (__this_10->fields)._normalLabelText = pSVar45;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f147;
        il2cpp_runtime_helper_022b4080(ppSVar4,pSVar45);
        pUVar58 = *(UnityEngine_Object_o **)((long)register0x00000020 + -0x68);
        lVar59 = *(long *)((long)register0x00000020 + -0x70);
        if (pMVar46 == (MethodInfo *)0x0) {
          pMVar46 = (MethodInfo *)*ppSVar4;
        }
        (__this_10->fields)._activeLabelText = (System_String_o *)pMVar46;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f16f;
        il2cpp_runtime_helper_022b4080(&(__this_10->fields)._activeLabelText);
        *(undefined1 *)&(__this_10->fields)._normalLabelOwnsColor = 1;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f17f;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_10,pMVar46);
        *(bool *)((long)&(__this_10->fields)._hovered + 2) =
             *(int *)((long)register0x00000020 + -0xb8) == *(int *)(lVar59 + 0x54);
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f196;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_10,pMVar46);
        pUVar56 = *(UnityEngine_Object_o **)((long)register0x00000020 + -0xa8);
      }
      lVar59 = MethodInfo_Void_Add;
      __this = *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)register0x00000020 + -0x70);
      pGVar37 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                ((Il2CppRGCTXData *)((long)__this + 0x38))->method;
      if (pGVar37 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) break;
      piVar1 = (int32_t *)((long)&(pGVar37->fields).id + 4);
      *piVar1 = *piVar1 + 1;
      pSVar20 = (System_Object_array *)(pGVar37->fields).type;
      pIVar38 = *(Il2CppObject **)((long)register0x00000020 + -0x38);
      if (pSVar20 == (System_Object_array *)0x0) break;
      uVar12 = *(uint *)&(pGVar37->fields).id;
      if (uVar12 < (uint)pSVar20->max_length) {
        *(uint *)&(pGVar37->fields).id = uVar12 + 1;
        pSVar20->m_Items[(int)uVar12] = (Il2CppObject *)__this_10;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f1f5;
        il2cpp_runtime_helper_022b4080(pSVar20->m_Items + (int)uVar12);
        iVar55 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar59 + 0x20) + 0xc0) + 0x70);
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f227;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pGVar37,(Il2CppObject *)__this_10,method_00);
        iVar55 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar55 == 0) {
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f23f;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f24b;
      bVar25 = UnityEngine_Object__op_Inequality(pUVar56,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar25 != '\0') {
        if (pUVar56 == (UnityEngine_Object_o *)0x0) break;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f262;
        pUVar36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar56,(MethodInfo *)0x0);
        if (pUVar36 == (UnityEngine_GameObject_o *)0x0) break;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f279;
        pIVar41 = UnityEngine_GameObject__AddComponent_object_(pUVar36,MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul);
        if (pIVar41 == (Il2CppObject *)0x0) break;
        pIVar41[2].klass = (Il2CppClass *)__this;
        *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8ede6;
        il2cpp_runtime_helper_022b4080(pIVar41 + 2);
        *(undefined4 *)&pIVar41[2].monitor = *(undefined4 *)((long)register0x00000020 + -0xb8);
      }
      iVar55 = *(int *)((long)register0x00000020 + -0xbc);
      *(int *)((long)register0x00000020 + -0xbc) = iVar55 + 1;
      if (*(int *)((long)register0x00000020 + -0x98) <= iVar55 + 1) {
        return;
      }
    }
  }
label_03b8f282:
  *(undefined8 *)((long)register0x00000020 + -0xd0) = 0x3b8f287;
  il2cpp_runtime_helper_022b2c90();
  return;
  while (lVar60 = lVar60 + 0x10, (ulong)*(ushort *)(lVar59 + 0x12e) << 4 != lVar60) {
label_03b49770:
    if (*(long *)(*(long *)(lVar59 + 0xb0) + lVar60) == TypeInfo_IDisposable) {
      puVar29 = (undefined8 *)(lVar59 + (long)*(int *)(*(long *)(lVar59 + 0xb0) + 8 + lVar60) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  puVar29 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar28,TypeInfo_IDisposable,0);
label_03b4979d:
  (*(code *)*puVar29)(plVar28);
label_03b497a6:
  if (in_stack_ffffffffffffff08 != 0) goto label_03b49dd9;
  if (pSVar35 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    pSVar35 = (System_Collections_Generic_List_GisketchSearchEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    System_Object___ctor((Il2CppObject *)pSVar35,(MethodInfo *)0x0);
    *(undefined4 *)&(pSVar35->fields)._items = 0xfffffffe;
    iVar24 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&(pSVar35->fields)._syncRoot = iVar24;
    plVar51 = (long *)0x0;
    if (pSVar35 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b49dcf;
  }
  pIVar42 = (Il2CppClass *)pSVar35->klass;
  uVar7._0_1_ = (pIVar42->_2).rank;
  uVar7._1_1_ = (pIVar42->_2).minimumAlignment;
  if ((ulong)uVar7 != 0) {
    pIVar14 = (pIVar42->_1).interfaceOffsets;
    lVar59 = 0;
    do {
      if (*(long *)((long)&pIVar14->interfaceType + lVar59) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        ppIVar27 = &pIVar42->vtable[*(int *)((long)&pIVar14->offset + lVar59)].methodPtr;
        goto label_03b49881;
      }
      lVar59 = lVar59 + 0x10;
    } while ((ulong)uVar7 << 4 != lVar59);
  }
  ppIVar27 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar35,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  plVar51 = (long *)(**ppIVar27)(pSVar35,(MethodInfo *)ppIVar27[1]);
  if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51 ==
      (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b49dde;
  do {
    do {
      pSVar15 = (System_Collections_Generic_IEqualityComparer_T__c *)
                ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51)->klass;
      uVar8._0_1_ = (pSVar15->_2).rank;
      uVar8._1_1_ = (pSVar15->_2).minimumAlignment;
      if ((ulong)uVar8 != 0) {
        pIVar14 = (pSVar15->_1).interfaceOffsets;
        lVar59 = 0;
        do {
          if (*(long *)((long)&pIVar14->interfaceType + lVar59) == TypeInfo_IEnumerator) {
            ppIVar27 = &pSVar15->vtable[*(int *)((long)&pIVar14->offset + lVar59)].methodPtr;
            goto label_03b49903;
          }
          lVar59 = lVar59 + 0x10;
        } while ((ulong)uVar8 << 4 != lVar59);
      }
      ppIVar27 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar51,TypeInfo_IEnumerator,0);
label_03b49903:
      cVar22 = (**ppIVar27)(plVar51,(MethodInfo *)ppIVar27[1]);
      if (cVar22 == '\0') {
        iVar55 = 10;
        lVar59 = 0;
        goto label_03b49ac8;
      }
      pSVar15 = (System_Collections_Generic_IEqualityComparer_T__c *)
                ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51)->klass;
      uVar9._0_1_ = (pSVar15->_2).rank;
      uVar9._1_1_ = (pSVar15->_2).minimumAlignment;
      if ((ulong)uVar9 != 0) {
        pIVar14 = (pSVar15->_1).interfaceOffsets;
        lVar59 = 0;
        do {
          if (*(long *)((long)&pIVar14->interfaceType + lVar59) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            ppIVar27 = &pSVar15->vtable[*(int *)((long)&pIVar14->offset + lVar59)].methodPtr;
            goto label_03b49973;
          }
          lVar59 = lVar59 + 0x10;
        } while ((ulong)uVar9 << 4 != lVar59);
      }
      ppIVar27 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar51,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      auVar76 = (**ppIVar27)(plVar51,(MethodInfo *)ppIVar27[1]);
      pGVar30 = auVar76._0_8_;
      bVar25 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar30,(System_String_o *)pGVar37,auVar76._8_8_);
      if ((char)bVar25 == '\0') break;
      if (pGVar30 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      bVar25 = System_String__IsNullOrEmpty((pGVar30->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar25 != '\0') break;
      if (pSStack_b8 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      bVar25 = System_Collections_Generic_HashSet_object___Contains
                         (pSStack_b8,(Il2CppObject *)(pGVar30->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains)
      ;
    } while ((char)bVar25 == '\0');
    lVar59 = MethodInfo_Void_Add;
    if (pSVar26 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(pSVar26->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar20 = (pSVar26->fields)._items;
    if (pSVar20 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar12 = (pSVar26->fields)._size;
    if (uVar12 < (uint)pSVar20->max_length) {
      (pSVar26->fields)._size = uVar12 + 1;
      pSVar20->m_Items[(int)uVar12] = (Il2CppObject *)pGVar30;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (pSVar26,(Il2CppObject *)pGVar30,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar59 + 0x20) + 0xc0) + 0x70));
    }
    if ((((pGVar30 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) &&
         (bVar25 = System_String__IsNullOrEmpty((pGVar30->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
         , (char)bVar25 == '\0')) &&
        (bVar25 = System_String__IsNullOrEmpty((System_String_o *)pGVar37,(MethodInfo *)0x0),
        (char)bVar25 == '\0')) &&
       ((bVar25 = System_String__Equals_3af50f0
                            ((pGVar30->fields)._ScreenId_k__BackingField,(System_String_o *)pGVar37,5,
                             (MethodInfo *)0x0), (char)bVar25 != '\0' &&
        (bVar25 = System_String__IsNullOrEmpty((pGVar30->fields)._TargetId_k__BackingField,(MethodInfo *)0x0),
        (char)bVar25 == '\0')))) {
      if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
      System_Collections_Generic_HashSet_object___Add
                (__this_05,(Il2CppObject *)(pGVar30->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
    }
  } while( true );
joined_r0x03b4a097:
  lVar21 = lVar60;
  if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51 !=
      (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar15 = (System_Collections_Generic_IEqualityComparer_T__c *)
              ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)plVar51)->klass;
    uVar11._0_1_ = (pSVar15->_2).rank;
    uVar11._1_1_ = (pSVar15->_2).minimumAlignment;
    if ((ulong)uVar11 != 0) {
      pIVar14 = (pSVar15->_1).interfaceOffsets;
      lVar60 = 0;
      do {
        if (*(long *)((long)&pIVar14->interfaceType + lVar60) == TypeInfo_IDisposable) {
          ppIVar27 = &pSVar15->vtable[*(int *)((long)&pIVar14->offset + lVar60)].methodPtr;
          goto label_03b4a0ed;
        }
        lVar60 = lVar60 + 0x10;
      } while ((ulong)uVar11 << 4 != lVar60);
    }
    ppIVar27 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar51,TypeInfo_IDisposable,0);
label_03b4a0ed:
    (**ppIVar27)(plVar51,(MethodInfo *)ppIVar27[1]);
  }
  if (lVar59 == 0) {
    _Unwind_Resume(lVar21);
  }
  lVar60 = il2cpp_runtime_helper_022fefe0();
  lVar59 = lVar21;
  goto joined_r0x03b4a097;
label_03b49d6d:
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  __this_04.fields._8_8_ = __this_05;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
  __this_04.fields._current = _Var79.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ActivateSelected
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ActivateSelected (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b8f2a0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ActivateSelected
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *__,
               MethodInfo *method)

{
  int iVar1;
  float fVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  float fVar3;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_04;
  MethodInfo *in_RCX;
  Gisketch_Aottg2UI_GisketchUIRoot_o *extraout_RDX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *unaff_RBX;
  undefined1 *puVar7;
  float index;
  int32_t index_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar8;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_05;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_06;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_07;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar9 [16];
  undefined1 auStack_18 [8];
  
  puVar7 = auStack_18;
  if (g_data_057a9eb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
    g_data_057a9eb0 = '\x01';
  }
  __this_05 = (__this->fields)._results;
  if (__this_05 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
label_03b8f352:
    __this_06 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    root = extraout_RDX;
    unaff_RBX = __this;
  }
  else {
    if ((__this_05->fields)._size == 0) {
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)__);
      __this_05 = (__this->fields)._results;
      if (__this_05 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b8f352;
    }
    iVar1 = (__this_05->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    fVar2 = (__this->fields)._pointerLockPosition.fields.y;
    in_RCX = (MethodInfo *)(ulong)(uint)fVar2;
    fVar3 = (float)(iVar1 - 1);
    if ((int)fVar2 <= (int)fVar3) {
      fVar3 = fVar2;
    }
    index = 0.0;
    if (-1 < (int)fVar2) {
      index = fVar3;
    }
    __ = (System_String_o *)
         System_Collections_Generic_List_object___get_Item
                   ((System_Collections_Generic_List_object__o *)__this_05,(int32_t)index,MethodInfo_GisketchSearchEntry_get_Item);
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
           UnityEngine_Component__GetComponentInParent_object_((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot)
    ;
    puVar7 = (undefined1 *)register0x00000020;
    __this_06 = __this;
  }
  *(undefined8 *)(puVar7 + -8) = unaff_R15;
  *(undefined8 *)(puVar7 + -0x10) = unaff_R14;
  *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar7 + -0x18) = unaff_RBX;
  if (g_data_057a9eb8 == '\0') {
    *(undefined8 *)(puVar7 + -0x20) = 0x3b8f383;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb8 = '\x01';
  }
  if ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)__ !=
      (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar7 + -0x20) = 0x3b8f3a7;
      il2cpp_runtime_helper_02337ed0();
    }
    index_00 = 0;
    *(undefined8 *)(puVar7 + -0x20) = 0x3b8f3b3;
    pGVar8 = root;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((root->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          return;
        }
        *(undefined8 *)(puVar7 + -0x20) = 0x3b8f3d3;
        pGVar8 = root;
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this_06,root,0,in_RCX);
        index_00 = (int32_t)pGVar8;
        __this_00 = (root->fields)._Theme_k__BackingField;
        pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          *(undefined8 *)(puVar7 + -0x20) = 0x3b8f3e8;
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                    ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate
                    ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)__,root,method_00);
          return;
        }
      }
      *(undefined8 *)(puVar7 + -0x20) = 0x3b8f403;
      auVar9 = il2cpp_runtime_helper_022b2c90();
      *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar7 + -0x20) = __this_06;
      *(System_String_o **)(puVar7 + -0x28) = __;
      *(undefined8 *)(puVar7 + -0x30) = unaff_R12;
      *(Gisketch_Aottg2UI_GisketchUIRoot_o **)(puVar7 + -0x38) = root;
      *(long *)(puVar7 + -0x40) = auVar9._0_8_;
      *(int32_t *)(puVar7 + -0x3c) = index_00;
      if (g_data_057a9eb2 == '\0') {
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f43d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f449;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f455;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f461;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f46d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f479;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f485;
        il2cpp_runtime_helper_023445d0(&"slideDown");
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f491;
        il2cpp_runtime_helper_023445d0(&"percent");
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f49d;
        il2cpp_runtime_helper_023445d0(&"search-results");
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f4a9;
        il2cpp_runtime_helper_023445d0(&"searchResultItem");
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f4b5;
        il2cpp_runtime_helper_023445d0(&"Button");
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f4c1;
        il2cpp_runtime_helper_023445d0(&"search-result-");
        g_data_057a9eb2 = '\x01';
      }
      __this_01 = *(System_Collections_Generic_List_object__o **)&(pGVar8->fields)._buildOnStart;
      __this_07 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f4e6;
        __this_02 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                    System_Collections_Generic_List_object___get_Item(__this_01,index_00,MethodInfo_GisketchSearchEntry_get_Item);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f4f8;
        __this_03 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f505;
        __this_07 = __this_03;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
        if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_03->fields).type = "Button";
          *(undefined8 *)(puVar7 + -0x48) = 0x3b8f527;
          il2cpp_runtime_helper_022b4080(&__this_03->fields);
          *(undefined8 *)(puVar7 + -0x48) = 0x3b8f533;
          pSVar5 = System_Int32__ToString((int32_t)(puVar7 + -0x3c),(MethodInfo *)0x0);
          *(undefined8 *)(puVar7 + -0x48) = 0x3b8f547;
          pSVar5 = System_String__Concat_3ae5ba0("search-result-",pSVar5,(MethodInfo *)0x0);
          __this_07 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_03->fields).id;
          (__this_03->fields).id = pSVar5;
          *(undefined8 *)(puVar7 + -0x48) = 0x3b8f559;
          il2cpp_runtime_helper_022b4080();
          if (__this_02 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f56f;
            pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                               (__this_02,auVar9._8_8_,(MethodInfo *)0x0);
            (__this_03->fields).text = pSVar5;
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f581;
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).text,pSVar5);
            (__this_03->fields).icon = (__this_02->fields)._Icon_k__BackingField;
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f594;
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).icon);
            *(undefined1 *)&(__this_03->fields).hasIcon = 1;
            (__this_03->fields).style = "searchResultItem";
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f5b3;
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).style);
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f5c2;
            pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f5cf;
            __this_07 = pGVar6;
            Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar6,(MethodInfo *)0x0);
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar6->fields).type = "slideDown";
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f5ef;
              il2cpp_runtime_helper_022b4080(&pGVar6->fields);
              (pGVar6->fields).id = "search-results";
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f609;
              il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id);
              *(undefined4 *)&(pGVar6->fields).text = 0x3df5c28f;
              *(undefined4 *)&(pGVar6->fields).textKey = 0x3ccccccd;
              *(undefined4 *)((long)&(pGVar6->fields).textKey + 4) = *(undefined4 *)(puVar7 + -0x3c);
              (__this_03->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar6;
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f636;
              il2cpp_runtime_helper_022b4080(&(__this_03->fields).motion);
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f645;
              __this_04 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f652;
              Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_04,(MethodInfo *)0x0);
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f661;
              pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f66e;
              __this_07 = pGVar6;
              Gisketch_Aottg2UI_Data_GisketchLength___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6,(MethodInfo *)0x0);
              if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined4 *)&(pGVar6->fields).type = 0x42c80000;
                __this_07 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar6->fields).id;
                (pGVar6->fields).id = "percent";
                *(undefined8 *)(puVar7 + -0x48) = 0x3b8f698;
                il2cpp_runtime_helper_022b4080();
                if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                  (__this_04->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6;
                  *(undefined8 *)(puVar7 + -0x48) = 0x3b8f6b0;
                  il2cpp_runtime_helper_022b4080(&(__this_04->fields).width,pGVar6);
                  (__this_03->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_04;
                  *(undefined8 *)(puVar7 + -0x48) = 0x3b8f6c8;
                  il2cpp_runtime_helper_022b4080(&(__this_03->fields).search);
                  *(undefined8 *)(puVar7 + -0x48) = 0x3b8f6d7;
                  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition)
                  ;
                  *(undefined8 *)(puVar7 + -0x48) = 0x3b8f6e4;
                  __this_07 = pGVar6;
                  Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor
                            ((Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6,(MethodInfo *)0x0);
                  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    *(undefined1 *)((long)&(pGVar6->fields).style + 1) = 1;
                    (__this_03->fields).popover = (System_String_o *)pGVar6;
                    *(undefined8 *)(puVar7 + -0x48) = 0x3b8f707;
                    il2cpp_runtime_helper_022b4080(&(__this_03->fields).popover,pGVar6);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      *(undefined8 *)(puVar7 + -0x48) = 0x3b8f71b;
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ResultsNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3b8e6d0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultsNode
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *activeScreenId,
          MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  void *pvVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_Object_array *pSVar8;
  undefined8 uVar9;
  System_String_o *query;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool_conflict bVar20;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar21;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_01;
  Il2CppObject *pIVar22;
  undefined4 extraout_var;
  undefined8 *puVar23;
  Il2CppObject *pIVar24;
  Il2CppClass *pIVar25;
  UnityEngine_Transform_o *pUVar26;
  System_String_o *pSVar27;
  UnityEngine_Events_UnityAction_o *call;
  System_Func_bool__o *pSVar28;
  System_String_o *pSVar29;
  MethodInfo *pMVar30;
  UnityEngine_GameObject_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar31;
  MethodInfo *in_RCX;
  void *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *unaff_RBX;
  void **ppvVar32;
  ulong unaff_RBP;
  UnityEngine_Object_o *pUVar33;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **unaff_R13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *unaff_R15;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_03;
  float fVar34;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  UnityEngine_Color_o UVar40;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  float local_f4;
  float local_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  Il2CppClass *local_a8;
  UnityEngine_Object_o *local_a0;
  System_String_o *local_98;
  System_String_o *local_90;
  System_String_o *local_88;
  System_String_o *local_80;
  System_String_o *local_78;
  Il2CppObject *local_70;
  MethodInfo *pMStack_68;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGStack_60;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **ppGStack_58;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_50;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_48;
  ulong uStack_40;
  
  if (g_data_057a9eb1 == '\0') {
    uStack_40 = 0x3b8e716;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    uStack_40 = 0x3b8e722;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    uStack_40 = 0x3b8e72e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    uStack_40 = 0x3b8e73a;
    il2cpp_runtime_helper_023445d0(&"search-palette-results");
    uStack_40 = 0x3b8e746;
    il2cpp_runtime_helper_023445d0(&"Column");
    uStack_40 = 0x3b8e752;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    uStack_40 = 0x3b8e75e;
    il2cpp_runtime_helper_023445d0(&"Panel");
    uStack_40 = 0x3b8e76a;
    il2cpp_runtime_helper_023445d0(&"popover");
    g_data_057a9eb1 = '\x01';
    if (g_data_057a9eb5 == '\0') goto label_03b8e77e;
label_03b8e6f7:
    pSVar21 = (__this->fields)._results;
    if (pSVar21 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b8e91f;
label_03b8e79f:
    uVar4 = (pSVar21->fields)._size;
    unaff_RBP = (ulong)uVar4;
    unaff_RBX = (MethodInfo *)&g_data_00000008;
    if ((int)uVar4 < 9) {
      unaff_RBX = (MethodInfo *)(ulong)uVar4;
    }
    uStack_40 = 0x3b8e7be;
    unaff_R15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    if ((int)uVar4 < 1) {
label_03b8e816:
      uStack_40 = 0x3b8e825;
      activeScreenId = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      uStack_40 = 0x3b8e832;
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId,(MethodInfo *)0x0);
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId !=
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId)->fields).type = "Panel";
        uStack_40 = 0x3b8e852;
        il2cpp_runtime_helper_022b4080(&((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId)->fields);
        (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId)->fields).id = "search-palette-results";
        uStack_40 = 0x3b8e869;
        il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId)->fields).id);
        (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId)->fields).style = "popover";
        uStack_40 = 0x3b8e880;
        il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId)->fields).
                            style);
        uStack_40 = 0x3b8e88f;
        __this_01 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
        uStack_40 = 0x3b8e89c;
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_01,(MethodInfo *)0x0);
        unaff_RBX = (MethodInfo *)0x0;
        if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (__this_01->fields).direction = "Column";
          uStack_40 = 0x3b8e8b8;
          il2cpp_runtime_helper_022b4080(&__this_01->fields);
          (__this_01->fields).alignItems = "Stretch";
          uStack_40 = 0x3b8e8d2;
          il2cpp_runtime_helper_022b4080(&(__this_01->fields).alignItems);
          (__this_01->fields).gap = 0.0;
          (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId)->fields).search =
               (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_01;
          uStack_40 = 0x3b8e8ef;
          il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId)->fields).
                              search,__this_01);
          (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId)->fields).deferredChildren =
               unaff_R15;
          uStack_40 = 0x3b8e908;
          il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId)->fields).
                              deferredChildren,unaff_R15);
          return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId;
        }
      }
      goto label_03b8e91f;
    }
    if (unaff_R15 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      unaff_RBP = (ulong)(int)unaff_RBX;
      unaff_R13 = unaff_R15->m_Items;
      unaff_RBX = (MethodInfo *)0x0;
      do {
        uStack_40 = 0x3b8e7ed;
        pGVar31 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
                            (__this,(int32_t)unaff_RBX,activeScreenId,in_RCX);
        in_RCX = (MethodInfo *)(ulong)(uint)unaff_R15->max_length;
        if (in_RCX <= unaff_RBX) {
          uStack_40 = 0x3b8e91f;
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b8e91f;
        }
        *unaff_R13 = pGVar31;
        uStack_40 = 0x3b8e809;
        il2cpp_runtime_helper_022b4080(unaff_R13);
        unaff_RBX = (MethodInfo *)((long)&unaff_RBX->methodPointer + 1);
        unaff_R13 = unaff_R13 + 1;
      } while ((long)unaff_RBX < (long)unaff_RBP);
      goto label_03b8e816;
    }
  }
  else {
    if (g_data_057a9eb5 != '\0') goto label_03b8e6f7;
label_03b8e77e:
    uStack_40 = 0x3b8e78a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9eb5 = '\x01';
    pSVar21 = (__this->fields)._results;
    if (pSVar21 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b8e79f;
label_03b8e91f:
    uStack_40 = 0x3b8e924;
    il2cpp_runtime_helper_022b2c90();
  }
  x = (UnityEngine_Object_o *)0x0;
  uStack_40 = 0x3b8e931;
  pIVar25 = (Il2CppClass *)__this;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode(__this,0,activeScreenId,in_RCX);
  uStack_40 = 0x3b8e936;
  il2cpp_runtime_helper_022b2c90();
  pMStack_68 = unaff_RBX;
  pGStack_60 = __this;
  ppGStack_58 = unaff_R13;
  pGStack_50 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)activeScreenId;
  pGStack_48 = unaff_R15;
  uStack_40 = unaff_RBP;
  if (g_data_057a9eb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_WireResults_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_WireResults_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"search-result-");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"negativeText");
    g_data_057a9eb3 = '\x01';
  }
  local_f4 = 0.0;
  pIVar22 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(pIVar22,(MethodInfo *)0x0);
  fVar34 = local_d0;
  fVar35 = fStack_cc;
  uVar37 = uStack_c8;
  uVar39 = uStack_c4;
  fVar10 = local_c0;
  fVar11 = fStack_bc;
  uVar12 = uStack_b8;
  uVar13 = uStack_b4;
  if (pIVar22 == (Il2CppObject *)0x0) goto label_03b8f282;
  pIVar22[1].klass = pIVar25;
  il2cpp_runtime_helper_022b4080(pIVar22 + 1,pIVar25);
  ppvVar32 = &pIVar22[1].monitor;
  pIVar22[1].monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(ppvVar32);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar20 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar20 != '\0') {
    return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar20);
  }
  lVar5 = *(long *)&(pIVar25->_1).this_arg.bits;
  fVar34 = local_d0;
  fVar35 = fStack_cc;
  uVar37 = uStack_c8;
  uVar39 = uStack_c4;
  fVar10 = local_c0;
  fVar11 = fStack_bc;
  uVar12 = uStack_b8;
  uVar13 = uStack_b4;
  if (lVar5 == 0) goto label_03b8f282;
  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
  iVar3 = *(int *)(lVar5 + 0x18);
  *(undefined4 *)(lVar5 + 0x18) = 0;
  if (0 < iVar3) {
    System_Array__Clear(*(System_Array_o **)(lVar5 + 0x10),0,iVar3,(MethodInfo *)0x0);
  }
  pUVar33 = (pIVar25->_1).byval_arg.data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar20 = UnityEngine_Object__op_Inequality(pUVar33,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar27 = "text";
  if ((char)bVar20 == '\0') {
    puVar23 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pvVar6 = (pIVar25->_1).byval_arg.data;
    fVar34 = local_d0;
    fVar35 = fStack_cc;
    uVar37 = uStack_c8;
    uVar39 = uStack_c4;
    fVar10 = local_c0;
    fVar11 = fStack_bc;
    uVar12 = uStack_b8;
    uVar13 = uStack_b4;
    if (pvVar6 == (void *)0x0) goto label_03b8f282;
    puVar23 = (undefined8 *)((long)pvVar6 + 0x220);
  }
  local_78 = (System_String_o *)*puVar23;
  pUVar33 = *ppvVar32;
  if (g_data_057a9eb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar20 = UnityEngine_Object__op_Inequality(pUVar33,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar34 = local_d0;
  fVar35 = fStack_cc;
  uVar37 = uStack_c8;
  uVar39 = uStack_c4;
  fVar10 = local_c0;
  fVar11 = fStack_bc;
  uVar12 = uStack_b8;
  uVar13 = uStack_b4;
  if ((char)bVar20 == '\0') {
label_03b8ebd1:
    pUVar33 = *ppvVar32;
    fVar14 = 1.0;
    fVar15 = 1.0;
    fVar16 = 1.0;
    fVar17 = 1.0;
    uVar18 = 0;
    uVar36 = 0;
    uVar19 = 0;
    uVar38 = 0;
    pSVar27 = "negativeText";
  }
  else {
    if (pUVar33 == (UnityEngine_Object_o *)0x0) goto label_03b8f282;
    if (pUVar33[5].klass == (UnityEngine_Object_c *)0x0) goto label_03b8ebd1;
    uVar36 = g_data_00d19fc0._8_4_;
    uVar38 = g_data_00d19fc0._12_4_;
    uVar9 = g_data_00d19fc0;
    UVar40.fields.b = (float)(int)uVar9;
    UVar40.fields.a = (float)(int)((ulong)uVar9 >> 0x20);
    UVar40.fields.r = (float)(int)uVar9;
    UVar40.fields.g = (float)(int)((ulong)uVar9 >> 0x20);
    UVar40 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar33[5].klass,pSVar27,UVar40,
                        (MethodInfo *)0x0);
    pUVar33 = *ppvVar32;
    fVar14 = UVar40.fields.r;
    fVar15 = UVar40.fields.b;
    fVar16 = UVar40.fields.g;
    fVar17 = UVar40.fields.a;
    uVar18 = extraout_XMM0_Dc;
    uVar19 = extraout_XMM0_Dd;
    pSVar27 = "negativeText";
    fVar34 = local_d0;
    fVar35 = fStack_cc;
    uVar37 = uStack_c8;
    uVar39 = uStack_c4;
    fVar10 = local_c0;
    fVar11 = fStack_bc;
    uVar12 = uStack_b8;
    uVar13 = uStack_b4;
  }
  uStack_c4 = uVar38;
  uStack_b4 = uVar19;
  uStack_c8 = uVar36;
  uStack_b8 = uVar18;
  fStack_cc = fVar17;
  fStack_bc = fVar16;
  local_d0 = fVar15;
  local_c0 = fVar14;
  "negativeText" = pSVar27;
  if (pUVar33 != (UnityEngine_Object_o *)0x0) {
    local_f0 = local_c0;
    fStack_ec = fStack_bc;
    uStack_e8 = uStack_b8;
    uStack_e4 = uStack_b4;
    if ((pUVar33[5].klass == (UnityEngine_Object_c *)0x0) ||
       (fVar34 = local_d0, fVar35 = fStack_cc, uStack_d8 = uStack_c8, uStack_d4 = uStack_c4,
       ((pUVar33[5].klass)->_1).byval_arg.field_0xc == '\0')) {
      if (g_data_057a9eb4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eb4 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar20 = UnityEngine_Object__op_Inequality(pUVar33,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      local_c0 = 1.0;
      fStack_bc = 1.0;
      uStack_b8 = 0;
      uStack_b4 = 0;
      fVar34 = local_c0;
      fVar35 = fStack_bc;
      uStack_d8 = uStack_b8;
      uStack_d4 = uStack_b4;
      if (((char)bVar20 != '\0') && (pUVar33[5].klass != (UnityEngine_Object_c *)0x0)) {
        uVar37 = g_data_00d19fc0._8_4_;
        uVar39 = g_data_00d19fc0._12_4_;
        uVar9 = g_data_00d19fc0;
        fallback.fields.b = (float)(int)uVar9;
        fallback.fields.a = (float)(int)((ulong)uVar9 >> 0x20);
        fallback.fields.r = (float)(int)uVar9;
        fallback.fields.g = (float)(int)((ulong)uVar9 >> 0x20);
        UVar40 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar33[5].klass,pSVar27,fallback,
                            (MethodInfo *)0x0);
        local_c0 = UVar40.fields.r;
        fStack_bc = UVar40.fields.g;
        uStack_b8 = extraout_XMM0_Dc_00;
        uStack_b4 = extraout_XMM0_Dd_00;
        fVar34 = UVar40.fields.b;
        fVar35 = UVar40.fields.a;
        uStack_d8 = uVar37;
        uStack_d4 = uVar39;
      }
    }
    local_e0 = (UnityEngine_Transform_o *)CONCAT44(fVar35,fVar34);
    color.fields.g = fStack_ec;
    color.fields.r = local_f0;
    color.fields.a = fStack_cc;
    color.fields.b = local_d0;
    local_80 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    fVar35 = fStack_cc * 0.75;
    fVar34 = 1.0;
    if (fVar35 <= 1.0) {
      fVar34 = fVar35;
    }
    color_00.fields.g = fStack_ec;
    color_00.fields.r = local_f0;
    color_00.fields.a = (float)(-(uint)(0.0 <= fVar35) & (uint)fVar34);
    color_00.fields.b = local_d0;
    local_88 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    color_01.fields.g = fStack_bc;
    color_01.fields.r = local_c0;
    color_01.fields._8_8_ = local_e0;
    local_90 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
    fVar35 = local_e0._4_4_ * 0.75;
    fVar34 = 1.0;
    if (fVar35 <= 1.0) {
      fVar34 = fVar35;
    }
    color_02.fields.g = fStack_bc;
    color_02.fields.r = local_c0;
    color_02.fields.a = (float)(-(uint)(0.0 <= fVar35) & (uint)fVar34);
    color_02.fields.b = (float)(undefined4)local_e0;
    local_98 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
    if (g_data_057a9eb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057a9eb5 = '\x01';
    }
    pvVar6 = (pIVar25->_1).this_arg.data;
    fVar34 = local_d0;
    fVar35 = fStack_cc;
    uVar37 = uStack_c8;
    uVar39 = uStack_c4;
    fVar10 = local_c0;
    fVar11 = fStack_bc;
    uVar12 = uStack_b8;
    uVar13 = uStack_b4;
    if (pvVar6 != (void *)0x0) {
      fVar34 = *(float *)((long)pvVar6 + 0x18);
      local_d0 = 1.12104e-44;
      if ((int)fVar34 < 9) {
        local_d0 = fVar34;
      }
      local_f4 = 0.0;
      if ((int)fVar34 < 1) {
        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(ulong)(uint)fVar34;
      }
      uStack_b8 = (undefined4)local_e0;
      uStack_b4 = local_e0._4_4_;
      local_a8 = pIVar25;
      local_a0 = x;
      local_70 = pIVar22;
      while( true ) {
        pIVar24 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_1);
        System_Object___ctor(pIVar24,(MethodInfo *)0x0);
        fVar34 = local_d0;
        fVar35 = fStack_cc;
        uVar37 = uStack_c8;
        uVar39 = uStack_c4;
        fVar10 = local_c0;
        fVar11 = fStack_bc;
        uVar12 = uStack_b8;
        uVar13 = uStack_b4;
        if (pIVar24 == (Il2CppObject *)0x0) break;
        ppvVar32 = &pIVar24[1].monitor;
        pIVar24[1].monitor = pIVar22;
        il2cpp_runtime_helper_022b4080(ppvVar32,pIVar22);
        pSVar7 = (pIVar25->_1).this_arg.data;
        fVar34 = local_d0;
        fVar35 = fStack_cc;
        uVar37 = uStack_c8;
        uVar39 = uStack_c4;
        fVar10 = local_c0;
        fVar11 = fStack_bc;
        uVar12 = uStack_b8;
        uVar13 = uStack_b4;
        if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) break;
        local_f0 = local_f4;
        pIVar25 = (Il2CppClass *)
                  System_Collections_Generic_List_object___get_Item(pSVar7,(int32_t)local_f4,MethodInfo_GisketchSearchEntry_get_Item);
        pIVar22 = pIVar24 + 1;
        pIVar24[1].klass = pIVar25;
        il2cpp_runtime_helper_022b4080(pIVar22);
        fVar34 = local_d0;
        fVar35 = fStack_cc;
        uVar37 = uStack_c8;
        uVar39 = uStack_c4;
        fVar10 = local_c0;
        fVar11 = fStack_bc;
        uVar12 = uStack_b8;
        uVar13 = uStack_b4;
        if (x == (UnityEngine_Object_o *)0x0) break;
        pUVar26 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        pSVar27 = System_Int32__ToString((int32_t)&local_f4,(MethodInfo *)0x0);
        pSVar27 = System_String__Concat_3ae5ba0("search-result-",pSVar27,(MethodInfo *)0x0);
        pUVar26 = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(pUVar26,pSVar27,method_00);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        local_e0 = pUVar26;
        bVar20 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pUVar33 = (UnityEngine_Object_o *)0x0;
        if ((char)bVar20 != '\0') {
          fVar34 = local_d0;
          fVar35 = fStack_cc;
          uVar37 = uStack_c8;
          uVar39 = uStack_c4;
          fVar10 = local_c0;
          fVar11 = fStack_bc;
          uVar12 = uStack_b8;
          uVar13 = uStack_b4;
          if (local_e0 == (UnityEngine_Transform_o *)0x0) break;
          pUVar33 = (UnityEngine_Object_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)local_e0,MethodInfo_Button_GetComponent_Button);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar20 = UnityEngine_Object__op_Inequality(pUVar33,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar20 != '\0') {
          fVar34 = local_d0;
          fVar35 = fStack_cc;
          uVar37 = uStack_c8;
          uVar39 = uStack_c4;
          fVar10 = local_c0;
          fVar11 = fStack_bc;
          uVar12 = uStack_b8;
          uVar13 = uStack_b4;
          if (pUVar33 == (UnityEngine_Object_o *)0x0) break;
          __this_00 = (UnityEngine_Events_UnityEvent_o *)pUVar33[10].fields.m_CachedPtr;
          call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          fVar34 = local_d0;
          fVar35 = fStack_cc;
          uVar37 = uStack_c8;
          uVar39 = uStack_c4;
          fVar10 = local_c0;
          fVar11 = fStack_bc;
          uVar12 = uStack_b8;
          uVar13 = uStack_b4;
          if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) break;
          UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar26 = local_e0;
        bVar20 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)local_e0,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_03 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
        if ((char)bVar20 != '\0') {
          fVar34 = local_d0;
          fVar35 = fStack_cc;
          uVar37 = uStack_c8;
          uVar39 = uStack_c4;
          fVar10 = local_c0;
          fVar11 = fStack_bc;
          uVar12 = uStack_b8;
          uVar13 = uStack_b4;
          if (pUVar26 == (UnityEngine_Transform_o *)0x0) break;
          __this_03 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar26,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar20 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar20 != '\0') {
          fVar34 = local_d0;
          fVar35 = fStack_cc;
          uVar37 = uStack_c8;
          uVar39 = uStack_c4;
          fVar10 = local_c0;
          fVar11 = fStack_bc;
          uVar12 = uStack_b8;
          uVar13 = uStack_b4;
          if ((((*ppvVar32 == (void *)0x0) || (lVar5 = *(long *)((long)*ppvVar32 + 0x18), lVar5 == 0)) ||
              (lVar5 = *(long *)(lVar5 + 0x80), lVar5 == 0)) || (pIVar22->klass == (Il2CppClass *)0x0)) break;
          pMVar30 = *(MethodInfo **)(lVar5 + 0x30);
          pSVar27 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar22->klass,
                               (System_String_o *)pMVar30,(MethodInfo *)0x0);
          fVar34 = local_d0;
          fVar35 = fStack_cc;
          uVar37 = uStack_c8;
          uVar39 = uStack_c4;
          fVar10 = local_c0;
          fVar11 = fStack_bc;
          uVar12 = uStack_b8;
          uVar13 = uStack_b4;
          if (__this_03 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
          *(ulong *)&(__this_03->fields)._hoverBg.fields.a = CONCAT44(fStack_bc,local_c0);
          (__this_03->fields)._hoverText.fields.g = (float)uStack_b8;
          (__this_03->fields)._hoverText.fields.b = (float)uStack_b4;
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_03,pMVar30);
          pvVar6 = *ppvVar32;
          fVar34 = local_d0;
          fVar35 = fStack_cc;
          uVar37 = uStack_c8;
          uVar39 = uStack_c4;
          fVar10 = local_c0;
          fVar11 = fStack_bc;
          uVar12 = uStack_b8;
          uVar13 = uStack_b4;
          if (pvVar6 == (void *)0x0) break;
          pSVar28 = *(System_Func_bool__o **)((long)pvVar6 + 0x20);
          if (pSVar28 == (System_Func_bool__o *)0x0) {
            pSVar28 = (System_Func_bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_bool);
            System_Func_bool____ctor();
            *(System_Func_bool__o **)((long)pvVar6 + 0x20) = pSVar28;
            il2cpp_runtime_helper_022b4080((long)pvVar6 + 0x20,pSVar28);
          }
          (__this_03->fields)._pointerHoverAllowed = pSVar28;
          il2cpp_runtime_helper_022b4080(&(__this_03->fields)._pointerHoverAllowed,pSVar28);
          query = local_78;
          pSVar29 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar22->klass,local_78,0,
                               local_80,pSVar27,local_88,(MethodInfo *)0x0);
          pMVar30 = (MethodInfo *)
                    Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar22->klass,query,1,
                               local_90,pSVar27,local_98,(MethodInfo *)0x0);
          if (pSVar29 == (System_String_o *)0x0) {
            pSVar29 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          ppSVar2 = &(__this_03->fields)._normalLabelText;
          (__this_03->fields)._normalLabelText = pSVar29;
          il2cpp_runtime_helper_022b4080(ppSVar2,pSVar29);
          x = local_a0;
          pIVar25 = local_a8;
          if (pMVar30 == (MethodInfo *)0x0) {
            pMVar30 = (MethodInfo *)*ppSVar2;
          }
          (__this_03->fields)._activeLabelText = (System_String_o *)pMVar30;
          il2cpp_runtime_helper_022b4080(&(__this_03->fields)._activeLabelText);
          *(undefined1 *)&(__this_03->fields)._normalLabelOwnsColor = 1;
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_03,pMVar30);
          *(bool *)((long)&(__this_03->fields)._hovered + 2) =
               local_f0 == *(float *)((long)&(pIVar25->_1).declaringType + 4);
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_03,pMVar30);
          pUVar26 = local_e0;
        }
        pIVar22 = local_70;
        pIVar25 = local_a8;
        lVar5 = MethodInfo_Void_Add;
        pSVar7 = *(System_Collections_Generic_List_object__o **)&(local_a8->_1).this_arg.bits;
        fVar34 = local_d0;
        fVar35 = fStack_cc;
        uVar37 = uStack_c8;
        uVar39 = uStack_c4;
        fVar10 = local_c0;
        fVar11 = fStack_bc;
        uVar12 = uStack_b8;
        uVar13 = uStack_b4;
        if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) break;
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar8 = (pSVar7->fields)._items;
        if (pSVar8 == (System_Object_array *)0x0) break;
        uVar4 = (pSVar7->fields)._size;
        if (uVar4 < (uint)pSVar8->max_length) {
          (pSVar7->fields)._size = uVar4 + 1;
          pSVar8->m_Items[(int)uVar4] = (Il2CppObject *)__this_03;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
          iVar3 = *(int *)(TypeInfo_Object + 0xe4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar7,(Il2CppObject *)__this_03,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          iVar3 = *(int *)(TypeInfo_Object + 0xe4);
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar20 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar26,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar20 != '\0') {
          fVar34 = local_d0;
          fVar35 = fStack_cc;
          uVar37 = uStack_c8;
          uVar39 = uStack_c4;
          fVar10 = local_c0;
          fVar11 = fStack_bc;
          uVar12 = uStack_b8;
          uVar13 = uStack_b4;
          if (((pUVar26 == (UnityEngine_Transform_o *)0x0) ||
              (__this_02 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar26,(MethodInfo *)0x0), fVar34 = local_d0
              , fVar35 = fStack_cc, uVar37 = uStack_c8, uVar39 = uStack_c4, fVar10 = local_c0,
              fVar11 = fStack_bc, uVar12 = uStack_b8, uVar13 = uStack_b4,
              __this_02 == (UnityEngine_GameObject_o *)0x0)) ||
             (pIVar24 = UnityEngine_GameObject__AddComponent_object_(__this_02,MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul),
             fVar34 = local_d0, fVar35 = fStack_cc, uVar37 = uStack_c8, uVar39 = uStack_c4, fVar10 = local_c0,
             fVar11 = fStack_bc, uVar12 = uStack_b8, uVar13 = uStack_b4, pIVar24 == (Il2CppObject *)0x0))
          break;
          pIVar24[2].klass = pIVar25;
          il2cpp_runtime_helper_022b4080(pIVar24 + 2);
          *(float *)&pIVar24[2].monitor = local_f0;
        }
        local_f4 = (float)((int)local_f4 + 1);
        if ((int)local_d0 <= (int)local_f4) {
          return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(ulong)(uint)local_f4;
        }
      }
    }
  }
label_03b8f282:
  uStack_b4 = uVar13;
  uStack_b8 = uVar12;
  fStack_bc = fVar11;
  local_c0 = fVar10;
  uStack_c4 = uVar39;
  uStack_c8 = uVar37;
  fStack_cc = fVar35;
  local_d0 = fVar34;
  pGVar31 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_022b2c90();
  return pGVar31;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ResultNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3b8f410

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,
          System_String_o *activeScreenId,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_00;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_04;
  int32_t local_24;
  
  local_24 = index;
  if (g_data_057a9eb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
    il2cpp_runtime_helper_023445d0(&"slideDown");
    il2cpp_runtime_helper_023445d0(&"percent");
    il2cpp_runtime_helper_023445d0(&"search-results");
    il2cpp_runtime_helper_023445d0(&"searchResultItem");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"search-result-");
    g_data_057a9eb2 = '\x01';
  }
  __this_00 = (__this->fields)._results;
  __this_04 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  if (__this_00 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    __this_01 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_GisketchSearchEntry_get_Item);
    __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    __this_04 = __this_02;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_02->fields).type = "Button";
      il2cpp_runtime_helper_022b4080(&__this_02->fields);
      pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_3ae5ba0("search-result-",pSVar1,(MethodInfo *)0x0);
      __this_04 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_02->fields).id;
      (__this_02->fields).id = pSVar1;
      il2cpp_runtime_helper_022b4080();
      if (__this_01 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
        pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                           (__this_01,activeScreenId,(MethodInfo *)0x0);
        (__this_02->fields).text = pSVar1;
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).text,pSVar1);
        (__this_02->fields).icon = (__this_01->fields)._Icon_k__BackingField;
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).icon);
        *(undefined1 *)&(__this_02->fields).hasIcon = 1;
        (__this_02->fields).style = "searchResultItem";
        il2cpp_runtime_helper_022b4080(&(__this_02->fields).style);
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
        __this_04 = pGVar2;
        Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar2,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).type = "slideDown";
          il2cpp_runtime_helper_022b4080(&pGVar2->fields);
          (pGVar2->fields).id = "search-results";
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).id);
          *(undefined4 *)&(pGVar2->fields).text = 0x3df5c28f;
          *(undefined4 *)&(pGVar2->fields).textKey = 0x3ccccccd;
          *(int32_t *)((long)&(pGVar2->fields).textKey + 4) = local_24;
          (__this_02->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar2;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields).motion);
          __this_03 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_03,(MethodInfo *)0x0);
          pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
          __this_04 = pGVar2;
          Gisketch_Aottg2UI_Data_GisketchLength___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar2,(MethodInfo *)0x0);
          if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            *(undefined4 *)&(pGVar2->fields).type = 0x42c80000;
            __this_04 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar2->fields).id;
            (pGVar2->fields).id = "percent";
            il2cpp_runtime_helper_022b4080();
            if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (__this_03->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar2;
              il2cpp_runtime_helper_022b4080(&(__this_03->fields).width,pGVar2);
              (__this_02->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_03;
              il2cpp_runtime_helper_022b4080(&(__this_02->fields).search);
              pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition);
              __this_04 = pGVar2;
              Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2,(MethodInfo *)0x0);
              if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined1 *)((long)&(pGVar2->fields).style + 1) = 1;
                (__this_02->fields).popover = (System_String_o *)pGVar2;
                il2cpp_runtime_helper_022b4080(&(__this_02->fields).popover,pGVar2);
                return __this_02;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$WireResults
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WireResults (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, UnityEngine_GameObject_o* content, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b8e940

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WireResults
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               UnityEngine_GameObject_o *content,Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar5;
  TMPro_TMP_InputField_o *pTVar6;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar7;
  System_Collections_Generic_List_object__o *pSVar8;
  UnityEngine_Events_UnityEvent_o *__this_00;
  long lVar9;
  void *pvVar10;
  System_Object_array *pSVar11;
  undefined8 uVar12;
  System_String_o *query;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  bool_conflict bVar23;
  Il2CppObject *pIVar24;
  float *pfVar25;
  Il2CppObject *pIVar26;
  Il2CppClass *pIVar27;
  UnityEngine_Transform_o *pUVar28;
  System_String_o *pSVar29;
  UnityEngine_Events_UnityAction_o *call;
  System_Func_bool__o *pSVar30;
  System_String_o *pSVar31;
  MethodInfo *pMVar32;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  void **ppvVar33;
  UnityEngine_Object_o *pUVar34;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_02;
  float fVar35;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  UnityEngine_Color_o UVar41;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  Il2CppClass *pIStack_70;
  UnityEngine_GameObject_o *pUStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  Il2CppObject *pIStack_38;
  
  if (g_data_057a9eb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_WireResults_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_WireResults_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"search-result-");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"negativeText");
    g_data_057a9eb3 = '\x01';
  }
  fStack_bc = 0.0;
  pIVar24 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(pIVar24,(MethodInfo *)0x0);
  fVar35 = fStack_98;
  fVar36 = fStack_94;
  uVar38 = uStack_90;
  uVar40 = uStack_8c;
  fVar13 = fStack_88;
  fVar14 = fStack_84;
  uVar15 = uStack_80;
  uVar16 = uStack_7c;
  if (pIVar24 == (Il2CppObject *)0x0) goto label_03b8f282;
  pIVar24[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_helper_022b4080(pIVar24 + 1,__this);
  ppvVar33 = &pIVar24[1].monitor;
  pIVar24[1].monitor = root;
  il2cpp_runtime_helper_022b4080(ppvVar33);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar23 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar23 != '\0') {
    return;
  }
  pSVar5 = (__this->fields)._feedback;
  fVar35 = fStack_98;
  fVar36 = fStack_94;
  uVar38 = uStack_90;
  uVar40 = uStack_8c;
  fVar13 = fStack_88;
  fVar14 = fStack_84;
  uVar15 = uStack_80;
  uVar16 = uStack_7c;
  if (pSVar5 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) goto label_03b8f282;
  piVar1 = &(pSVar5->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar3 = (pSVar5->fields)._size;
  (pSVar5->fields)._size = 0;
  if (0 < iVar3) {
    System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar3,(MethodInfo *)0x0);
  }
  pTVar6 = (__this->fields)._input;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar23 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pTVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar29 = "text";
  if ((char)bVar23 == '\0') {
    pfVar25 = *(float **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pTVar6 = (__this->fields)._input;
    fVar35 = fStack_98;
    fVar36 = fStack_94;
    uVar38 = uStack_90;
    uVar40 = uStack_8c;
    fVar13 = fStack_88;
    fVar14 = fStack_84;
    uVar15 = uStack_80;
    uVar16 = uStack_7c;
    if (pTVar6 == (TMPro_TMP_InputField_o *)0x0) goto label_03b8f282;
    pfVar25 = &(pTVar6->fields).m_SelectionColor.fields.a;
  }
  pSStack_40 = *(System_String_o **)pfVar25;
  pUVar34 = *ppvVar33;
  if (g_data_057a9eb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar23 = UnityEngine_Object__op_Inequality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar35 = fStack_98;
  fVar36 = fStack_94;
  uVar38 = uStack_90;
  uVar40 = uStack_8c;
  fVar13 = fStack_88;
  fVar14 = fStack_84;
  uVar15 = uStack_80;
  uVar16 = uStack_7c;
  if ((char)bVar23 == '\0') {
label_03b8ebd1:
    pUVar34 = *ppvVar33;
    fVar17 = 1.0;
    fVar18 = 1.0;
    fVar19 = 1.0;
    fVar20 = 1.0;
    uVar21 = 0;
    uVar37 = 0;
    uVar22 = 0;
    uVar39 = 0;
    pSVar29 = "negativeText";
  }
  else {
    if (pUVar34 == (UnityEngine_Object_o *)0x0) goto label_03b8f282;
    if (pUVar34[5].klass == (UnityEngine_Object_c *)0x0) goto label_03b8ebd1;
    uVar37 = g_data_00d19fc0._8_4_;
    uVar39 = g_data_00d19fc0._12_4_;
    uVar12 = g_data_00d19fc0;
    UVar41.fields.b = (float)(int)uVar12;
    UVar41.fields.a = (float)(int)((ulong)uVar12 >> 0x20);
    UVar41.fields.r = (float)(int)uVar12;
    UVar41.fields.g = (float)(int)((ulong)uVar12 >> 0x20);
    UVar41 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar34[5].klass,pSVar29,UVar41,
                        (MethodInfo *)0x0);
    pUVar34 = *ppvVar33;
    fVar17 = UVar41.fields.r;
    fVar18 = UVar41.fields.b;
    fVar19 = UVar41.fields.g;
    fVar20 = UVar41.fields.a;
    uVar21 = extraout_XMM0_Dc;
    uVar22 = extraout_XMM0_Dd;
    pSVar29 = "negativeText";
    fVar35 = fStack_98;
    fVar36 = fStack_94;
    uVar38 = uStack_90;
    uVar40 = uStack_8c;
    fVar13 = fStack_88;
    fVar14 = fStack_84;
    uVar15 = uStack_80;
    uVar16 = uStack_7c;
  }
  uStack_8c = uVar39;
  uStack_7c = uVar22;
  uStack_90 = uVar37;
  uStack_80 = uVar21;
  fStack_94 = fVar20;
  fStack_84 = fVar19;
  fStack_98 = fVar18;
  fStack_88 = fVar17;
  "negativeText" = pSVar29;
  if (pUVar34 != (UnityEngine_Object_o *)0x0) {
    fStack_b8 = fStack_88;
    fStack_b4 = fStack_84;
    uStack_b0 = uStack_80;
    uStack_ac = uStack_7c;
    if ((pUVar34[5].klass == (UnityEngine_Object_c *)0x0) ||
       (fVar35 = fStack_98, fVar36 = fStack_94, uStack_a0 = uStack_90, uStack_9c = uStack_8c,
       ((pUVar34[5].klass)->_1).byval_arg.field_0xc == '\0')) {
      if (g_data_057a9eb4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eb4 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar23 = UnityEngine_Object__op_Inequality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fStack_88 = 1.0;
      fStack_84 = 1.0;
      uStack_80 = 0;
      uStack_7c = 0;
      fVar35 = fStack_88;
      fVar36 = fStack_84;
      uStack_a0 = uStack_80;
      uStack_9c = uStack_7c;
      if (((char)bVar23 != '\0') && (pUVar34[5].klass != (UnityEngine_Object_c *)0x0)) {
        uVar38 = g_data_00d19fc0._8_4_;
        uVar40 = g_data_00d19fc0._12_4_;
        uVar12 = g_data_00d19fc0;
        fallback.fields.b = (float)(int)uVar12;
        fallback.fields.a = (float)(int)((ulong)uVar12 >> 0x20);
        fallback.fields.r = (float)(int)uVar12;
        fallback.fields.g = (float)(int)((ulong)uVar12 >> 0x20);
        UVar41 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar34[5].klass,pSVar29,fallback,
                            (MethodInfo *)0x0);
        fStack_88 = UVar41.fields.r;
        fStack_84 = UVar41.fields.g;
        uStack_80 = extraout_XMM0_Dc_00;
        uStack_7c = extraout_XMM0_Dd_00;
        fVar35 = UVar41.fields.b;
        fVar36 = UVar41.fields.a;
        uStack_a0 = uVar38;
        uStack_9c = uVar40;
      }
    }
    uStack_a8 = (UnityEngine_Transform_o *)CONCAT44(fVar36,fVar35);
    color.fields.g = fStack_b4;
    color.fields.r = fStack_b8;
    color.fields.a = fStack_94;
    color.fields.b = fStack_98;
    pSStack_48 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    fVar36 = fStack_94 * 0.75;
    fVar35 = 1.0;
    if (fVar36 <= 1.0) {
      fVar35 = fVar36;
    }
    color_00.fields.g = fStack_b4;
    color_00.fields.r = fStack_b8;
    color_00.fields.a = (float)(-(uint)(0.0 <= fVar36) & (uint)fVar35);
    color_00.fields.b = fStack_98;
    pSStack_50 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    color_01.fields.g = fStack_84;
    color_01.fields.r = fStack_88;
    color_01.fields._8_8_ = uStack_a8;
    pSStack_58 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
    fVar36 = uStack_a8._4_4_ * 0.75;
    fVar35 = 1.0;
    if (fVar36 <= 1.0) {
      fVar35 = fVar36;
    }
    color_02.fields.g = fStack_84;
    color_02.fields.r = fStack_88;
    color_02.fields.a = (float)(-(uint)(0.0 <= fVar36) & (uint)fVar35);
    color_02.fields.b = (float)(undefined4)uStack_a8;
    pSStack_60 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
    if (g_data_057a9eb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057a9eb5 = '\x01';
    }
    pSVar7 = (__this->fields)._results;
    fVar35 = fStack_98;
    fVar36 = fStack_94;
    uVar38 = uStack_90;
    uVar40 = uStack_8c;
    fVar13 = fStack_88;
    fVar14 = fStack_84;
    uVar15 = uStack_80;
    uVar16 = uStack_7c;
    if (pSVar7 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      fVar35 = (float)(pSVar7->fields)._size;
      fStack_98 = 1.12104e-44;
      if ((int)fVar35 < 9) {
        fStack_98 = fVar35;
      }
      fStack_bc = 0.0;
      if ((int)fVar35 < 1) {
        return;
      }
      uStack_80 = (undefined4)uStack_a8;
      uStack_7c = uStack_a8._4_4_;
      pIStack_70 = (Il2CppClass *)__this;
      pUStack_68 = content;
      pIStack_38 = pIVar24;
      while( true ) {
        pIVar26 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_1);
        System_Object___ctor(pIVar26,(MethodInfo *)0x0);
        fVar35 = fStack_98;
        fVar36 = fStack_94;
        uVar38 = uStack_90;
        uVar40 = uStack_8c;
        fVar13 = fStack_88;
        fVar14 = fStack_84;
        uVar15 = uStack_80;
        uVar16 = uStack_7c;
        if (pIVar26 == (Il2CppObject *)0x0) break;
        ppvVar33 = &pIVar26[1].monitor;
        pIVar26[1].monitor = pIVar24;
        il2cpp_runtime_helper_022b4080(ppvVar33,pIVar24);
        pSVar8 = (((Il2CppClass *)__this)->_1).this_arg.data;
        fVar35 = fStack_98;
        fVar36 = fStack_94;
        uVar38 = uStack_90;
        uVar40 = uStack_8c;
        fVar13 = fStack_88;
        fVar14 = fStack_84;
        uVar15 = uStack_80;
        uVar16 = uStack_7c;
        if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) break;
        fStack_b8 = fStack_bc;
        pIVar27 = (Il2CppClass *)
                  System_Collections_Generic_List_object___get_Item(pSVar8,(int32_t)fStack_bc,MethodInfo_GisketchSearchEntry_get_Item);
        pIVar24 = pIVar26 + 1;
        pIVar26[1].klass = pIVar27;
        il2cpp_runtime_helper_022b4080(pIVar24);
        fVar35 = fStack_98;
        fVar36 = fStack_94;
        uVar38 = uStack_90;
        uVar40 = uStack_8c;
        fVar13 = fStack_88;
        fVar14 = fStack_84;
        uVar15 = uStack_80;
        uVar16 = uStack_7c;
        if (content == (UnityEngine_GameObject_o *)0x0) break;
        pUVar28 = UnityEngine_GameObject__get_transform(content,(MethodInfo *)0x0);
        pSVar29 = System_Int32__ToString((int32_t)&fStack_bc,(MethodInfo *)0x0);
        pSVar29 = System_String__Concat_3ae5ba0("search-result-",pSVar29,(MethodInfo *)0x0);
        pUVar28 = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(pUVar28,pSVar29,method_00);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_a8 = pUVar28;
        bVar23 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pUVar34 = (UnityEngine_Object_o *)0x0;
        if ((char)bVar23 != '\0') {
          fVar35 = fStack_98;
          fVar36 = fStack_94;
          uVar38 = uStack_90;
          uVar40 = uStack_8c;
          fVar13 = fStack_88;
          fVar14 = fStack_84;
          uVar15 = uStack_80;
          uVar16 = uStack_7c;
          if (uStack_a8 == (UnityEngine_Transform_o *)0x0) break;
          pUVar34 = (UnityEngine_Object_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)uStack_a8,MethodInfo_Button_GetComponent_Button);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar23 = UnityEngine_Object__op_Inequality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar23 != '\0') {
          fVar35 = fStack_98;
          fVar36 = fStack_94;
          uVar38 = uStack_90;
          uVar40 = uStack_8c;
          fVar13 = fStack_88;
          fVar14 = fStack_84;
          uVar15 = uStack_80;
          uVar16 = uStack_7c;
          if (pUVar34 == (UnityEngine_Object_o *)0x0) break;
          __this_00 = (UnityEngine_Events_UnityEvent_o *)pUVar34[10].fields.m_CachedPtr;
          call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          fVar35 = fStack_98;
          fVar36 = fStack_94;
          uVar38 = uStack_90;
          uVar40 = uStack_8c;
          fVar13 = fStack_88;
          fVar14 = fStack_84;
          uVar15 = uStack_80;
          uVar16 = uStack_7c;
          if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) break;
          UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar28 = uStack_a8;
        bVar23 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)uStack_a8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_02 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
        if ((char)bVar23 != '\0') {
          fVar35 = fStack_98;
          fVar36 = fStack_94;
          uVar38 = uStack_90;
          uVar40 = uStack_8c;
          fVar13 = fStack_88;
          fVar14 = fStack_84;
          uVar15 = uStack_80;
          uVar16 = uStack_7c;
          if (pUVar28 == (UnityEngine_Transform_o *)0x0) break;
          __this_02 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar28,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar23 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar23 != '\0') {
          fVar35 = fStack_98;
          fVar36 = fStack_94;
          uVar38 = uStack_90;
          uVar40 = uStack_8c;
          fVar13 = fStack_88;
          fVar14 = fStack_84;
          uVar15 = uStack_80;
          uVar16 = uStack_7c;
          if ((((*ppvVar33 == (void *)0x0) || (lVar9 = *(long *)((long)*ppvVar33 + 0x18), lVar9 == 0)) ||
              (lVar9 = *(long *)(lVar9 + 0x80), lVar9 == 0)) || (pIVar24->klass == (Il2CppClass *)0x0)) break;
          pMVar32 = *(MethodInfo **)(lVar9 + 0x30);
          pSVar29 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar24->klass,
                               (System_String_o *)pMVar32,(MethodInfo *)0x0);
          fVar35 = fStack_98;
          fVar36 = fStack_94;
          uVar38 = uStack_90;
          uVar40 = uStack_8c;
          fVar13 = fStack_88;
          fVar14 = fStack_84;
          uVar15 = uStack_80;
          uVar16 = uStack_7c;
          if (__this_02 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
          *(ulong *)&(__this_02->fields)._hoverBg.fields.a = CONCAT44(fStack_84,fStack_88);
          (__this_02->fields)._hoverText.fields.g = (float)uStack_80;
          (__this_02->fields)._hoverText.fields.b = (float)uStack_7c;
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_02,pMVar32);
          pvVar10 = *ppvVar33;
          fVar35 = fStack_98;
          fVar36 = fStack_94;
          uVar38 = uStack_90;
          uVar40 = uStack_8c;
          fVar13 = fStack_88;
          fVar14 = fStack_84;
          uVar15 = uStack_80;
          uVar16 = uStack_7c;
          if (pvVar10 == (void *)0x0) break;
          pSVar30 = *(System_Func_bool__o **)((long)pvVar10 + 0x20);
          if (pSVar30 == (System_Func_bool__o *)0x0) {
            pSVar30 = (System_Func_bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_bool);
            System_Func_bool____ctor();
            *(System_Func_bool__o **)((long)pvVar10 + 0x20) = pSVar30;
            il2cpp_runtime_helper_022b4080((long)pvVar10 + 0x20,pSVar30);
          }
          (__this_02->fields)._pointerHoverAllowed = pSVar30;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields)._pointerHoverAllowed,pSVar30);
          query = pSStack_40;
          pSVar31 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar24->klass,pSStack_40,0,
                               pSStack_48,pSVar29,pSStack_50,(MethodInfo *)0x0);
          pMVar32 = (MethodInfo *)
                    Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar24->klass,query,1,
                               pSStack_58,pSVar29,pSStack_60,(MethodInfo *)0x0);
          if (pSVar31 == (System_String_o *)0x0) {
            pSVar31 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          ppSVar2 = &(__this_02->fields)._normalLabelText;
          (__this_02->fields)._normalLabelText = pSVar31;
          il2cpp_runtime_helper_022b4080(ppSVar2,pSVar31);
          content = pUStack_68;
          pIVar27 = pIStack_70;
          if (pMVar32 == (MethodInfo *)0x0) {
            pMVar32 = (MethodInfo *)*ppSVar2;
          }
          (__this_02->fields)._activeLabelText = (System_String_o *)pMVar32;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields)._activeLabelText);
          *(undefined1 *)&(__this_02->fields)._normalLabelOwnsColor = 1;
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_02,pMVar32);
          *(bool *)((long)&(__this_02->fields)._hovered + 2) =
               fStack_b8 == *(float *)((long)&(pIVar27->_1).declaringType + 4);
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_02,pMVar32);
          pUVar28 = uStack_a8;
        }
        pIVar24 = pIStack_38;
        __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pIStack_70;
        lVar9 = MethodInfo_Void_Add;
        pSVar8 = *(System_Collections_Generic_List_object__o **)&(pIStack_70->_1).this_arg.bits;
        fVar35 = fStack_98;
        fVar36 = fStack_94;
        uVar38 = uStack_90;
        uVar40 = uStack_8c;
        fVar13 = fStack_88;
        fVar14 = fStack_84;
        uVar15 = uStack_80;
        uVar16 = uStack_7c;
        if (pSVar8 == (System_Collections_Generic_List_object__o *)0x0) break;
        piVar1 = &(pSVar8->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar11 = (pSVar8->fields)._items;
        if (pSVar11 == (System_Object_array *)0x0) break;
        uVar4 = (pSVar8->fields)._size;
        if (uVar4 < (uint)pSVar11->max_length) {
          (pSVar8->fields)._size = uVar4 + 1;
          pSVar11->m_Items[(int)uVar4] = (Il2CppObject *)__this_02;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar4);
          iVar3 = *(int *)(TypeInfo_Object + 0xe4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar8,(Il2CppObject *)__this_02,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          iVar3 = *(int *)(TypeInfo_Object + 0xe4);
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar23 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar23 != '\0') {
          fVar35 = fStack_98;
          fVar36 = fStack_94;
          uVar38 = uStack_90;
          uVar40 = uStack_8c;
          fVar13 = fStack_88;
          fVar14 = fStack_84;
          uVar15 = uStack_80;
          uVar16 = uStack_7c;
          if (((pUVar28 == (UnityEngine_Transform_o *)0x0) ||
              (__this_01 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar28,(MethodInfo *)0x0),
              fVar35 = fStack_98, fVar36 = fStack_94, uVar38 = uStack_90, uVar40 = uStack_8c,
              fVar13 = fStack_88, fVar14 = fStack_84, uVar15 = uStack_80, uVar16 = uStack_7c,
              __this_01 == (UnityEngine_GameObject_o *)0x0)) ||
             (pIVar26 = UnityEngine_GameObject__AddComponent_object_(__this_01,MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul),
             fVar35 = fStack_98, fVar36 = fStack_94, uVar38 = uStack_90, uVar40 = uStack_8c,
             fVar13 = fStack_88, fVar14 = fStack_84, uVar15 = uStack_80, uVar16 = uStack_7c,
             pIVar26 == (Il2CppObject *)0x0)) break;
          pIVar26[2].klass = (Il2CppClass *)__this;
          il2cpp_runtime_helper_022b4080(pIVar26 + 2);
          *(float *)&pIVar26[2].monitor = fStack_b8;
        }
        fStack_bc = (float)((int)fStack_bc + 1);
        if ((int)fStack_98 <= (int)fStack_bc) {
          return;
        }
      }
    }
  }
label_03b8f282:
  uStack_7c = uVar16;
  uStack_80 = uVar15;
  fStack_84 = fVar14;
  fStack_88 = fVar13;
  uStack_8c = uVar40;
  uStack_90 = uVar38;
  fStack_94 = fVar36;
  fStack_98 = fVar35;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromNavigation
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, const MethodInfo* method);
// 0x3b8e1b0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,MethodInfo *method
               )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar8;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_00;
  bool_conflict bVar9;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *focused;
  undefined8 uVar10;
  int iVar11;
  undefined8 unaff_RBX;
  undefined1 *puVar12;
  undefined8 unaff_RBP;
  undefined4 in_register_00000034;
  MethodInfo *pMVar13;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar14;
  UnityEngine_Object_o *unaff_R14;
  undefined8 *unaff_R15;
  float fVar15;
  float fVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined4 uVar17;
  UnityEngine_Vector3_o UVar18;
  
  pMVar13 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  pGVar14 = __this;
  if (g_data_057a9eb5 == '\0') {
    pGVar14 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eb5 = '\x01';
  }
  pSVar8 = (__this->fields)._results;
  if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    (pGVar14->fields)._pointerLockPosition.fields.y = 0.0;
    UVar18 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    *(undefined1 *)((long)&(pGVar14->fields)._hasAnimatedResults + 1) = 1;
    (pGVar14->fields)._pointerSelectionLocked = (int)UVar18.fields._0_8_;
    (pGVar14->fields)._pointerLockPosition.fields.x = (float)(int)((ulong)UVar18.fields._0_8_ >> 0x20);
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(pGVar14,pMVar13);
    return;
  }
  iVar7 = (pSVar8->fields)._size;
  iVar11 = 8;
  if (iVar7 < 9) {
    iVar11 = iVar7;
  }
  if (iVar11 != 0) {
    (__this->fields)._pointerLockPosition.fields.y = (float)((index % iVar11 + iVar11) % iVar11);
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this,pMVar13);
    puVar12 = (undefined1 *)register0x00000020;
    while( true ) {
      while( true ) {
        uVar17 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
        *(undefined8 **)(puVar12 + -8) = unaff_R15;
        *(UnityEngine_Object_o **)(puVar12 + -0x10) = unaff_R14;
        *(undefined8 *)(puVar12 + -0x18) = unaff_RBX;
        if (g_data_057a9eb7 == '\0') {
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fded;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fdf9;
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe05;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9eb7 = '\x01';
        }
        fVar15 = (__this->fields)._pointerLockPosition.fields.y;
        pMVar13 = (MethodInfo *)(ulong)(uint)fVar15;
        if ((int)fVar15 < 0) {
          return;
        }
        __this_00 = (__this->fields)._feedback;
        pGVar14 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
        if (__this_00 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
          if ((__this_00->fields)._size <= (int)fVar15) {
            return;
          }
          unaff_R15 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe30;
          unaff_R14 = (UnityEngine_Object_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,(int32_t)fVar15,
                                 MethodInfo_GisketchDropdownItemFeedback_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe4b;
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar13 = (MethodInfo *)0x0;
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe57;
          bVar9 = UnityEngine_Object__op_Equality(unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            return;
          }
          pGVar14 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(__this->fields)._feedback;
          if (pGVar14 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
            fVar15 = (__this->fields)._pointerLockPosition.fields.y;
            pMVar13 = (MethodInfo *)(ulong)(uint)fVar15;
            *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe75;
            __this_01 = (UnityEngine_Component_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pGVar14,(int32_t)fVar15,
                                   MethodInfo_GisketchDropdownItemFeedback_get_Item);
            if (__this_01 != (UnityEngine_Component_o *)0x0) {
              pMVar13 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe84;
              focused = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,pMVar13);
              return;
            }
          }
        }
        *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe9e;
        uVar10 = il2cpp_runtime_helper_022b2c90();
        *(undefined8 *)(puVar12 + -0x20) = unaff_RBP;
        *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar12 + -0x28) = __this;
        *(undefined8 *)(puVar12 + -0x30) = uVar10;
        __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
        *(undefined8 *)(puVar12 + -0x38) = 0x3b8feaf;
        method_00 = pMVar13;
        UVar18 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        in_XMM1_Qa = CONCAT44(uVar17,UVar18.fields.z);
        uVar10 = UVar18.fields._0_8_;
        if (*(char *)((long)&(pGVar14->fields)._hasAnimatedResults + 1) != '\0') {
          uVar1 = (pGVar14->fields)._pointerSelectionLocked;
          uVar4 = (pGVar14->fields)._pointerLockPosition.fields.x;
          fVar15 = UVar18.fields.x - (float)uVar1;
          fVar16 = UVar18.fields.y - (float)uVar4;
          fVar16 = fVar16 * fVar16;
          fVar15 = fVar16 + fVar15 * fVar15;
          in_XMM1_Qa = CONCAT44(fVar16,fVar15);
          uVar10 = 0x40800000;
          if (fVar15 < 4.0) {
            return;
          }
          *(undefined1 *)((long)&(pGVar14->fields)._hasAnimatedResults + 1) = 0;
        }
        if (g_data_057a9eb5 == '\0') {
          __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
          *(undefined8 *)(puVar12 + -0x38) = 0x3b8fef1;
          il2cpp_runtime_helper_023445d0(uVar10,in_XMM1_Qa);
          g_data_057a9eb5 = '\x01';
        }
        pSVar8 = (pGVar14->fields)._results;
        if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
        iVar7 = (pSVar8->fields)._size;
        iVar11 = 8;
        if (iVar7 < 9) {
          iVar11 = iVar7;
        }
        if (iVar11 == 0) {
          return;
        }
        (pGVar14->fields)._pointerLockPosition.fields.y =
             (float)(((int)((long)((ulong)(uint)((int)pMVar13 >> 0x1f) << 0x20 | (ulong)pMVar13 & 0xffffffff)
                           % (long)iVar11) + iVar11) % iVar11);
        *(undefined8 *)(puVar12 + -0x38) = 0x3b8ff29;
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(pGVar14,method_00);
        unaff_RBX = *(undefined8 *)(puVar12 + -0x28);
        unaff_RBP = *(undefined8 *)(puVar12 + -0x20);
        puVar12 = puVar12 + -0x18;
        __this = pGVar14;
      }
      *(undefined8 *)(puVar12 + -0x38) = 0x3b8ff43;
      uVar10 = il2cpp_runtime_helper_022b2c90();
      *(ulong *)(puVar12 + -0x38) = (ulong)pMVar13 & 0xffffffff;
      *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar12 + -0x40) = pGVar14;
      *(undefined8 *)(puVar12 + -0x48) = uVar10;
      if (*(char *)((long)&(__this->fields)._hasAnimatedResults + 1) != '\0') {
        uVar2 = (__this->fields)._pointerSelectionLocked;
        uVar5 = (__this->fields)._pointerLockPosition.fields.x;
        fVar15 = (float)extraout_XMM0_Qa - (float)uVar2;
        fVar16 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)uVar5;
        fVar16 = fVar16 * fVar16;
        fVar15 = fVar16 + fVar15 * fVar15;
        in_XMM1_Qa = CONCAT44(fVar16,fVar15);
        if (fVar15 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 0;
      }
      pMVar13 = method_00;
      pGVar14 = __this;
      if (g_data_057a9eb5 == '\0') {
        pGVar14 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
        *(undefined8 *)(puVar12 + -0x50) = 0x3b8ff9a;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9eb5 = '\x01';
      }
      pSVar8 = (__this->fields)._results;
      if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
      iVar7 = (pSVar8->fields)._size;
      iVar11 = 8;
      if (iVar7 < 9) {
        iVar11 = iVar7;
      }
      if (iVar11 == 0) {
        return;
      }
      (__this->fields)._pointerLockPosition.fields.y =
           (float)(((int)((long)((ulong)(uint)((int)method_00 >> 0x1f) << 0x20 | (ulong)method_00 & 0xffffffff
                                ) % (long)iVar11) + iVar11) % iVar11);
      *(undefined8 *)(puVar12 + -0x50) = 0x3b8ffd2;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this,pMVar13);
      unaff_RBX = *(undefined8 *)(puVar12 + -0x40);
      unaff_RBP = *(undefined8 *)(puVar12 + -0x38);
      puVar12 = puVar12 + -0x30;
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b8ffec;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    if (*(char *)((long)&(pGVar14->fields)._hasAnimatedResults + 1) != '\0') {
      uVar3 = (pGVar14->fields)._pointerSelectionLocked;
      uVar6 = (pGVar14->fields)._pointerLockPosition.fields.x;
      fVar15 = (float)uVar10 - (float)uVar3;
      fVar16 = (float)((ulong)uVar10 >> 0x20) - (float)uVar6;
      if (fVar16 * fVar16 + fVar15 * fVar15 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(pGVar14->fields)._hasAnimatedResults + 1) = 0;
    }
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, const MethodInfo* method);
// 0x3b8fea0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,MethodInfo *method
               )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar8;
  bool_conflict bVar9;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *focused;
  undefined8 in_RAX;
  undefined8 uVar10;
  int iVar11;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *unaff_RBX;
  undefined8 unaff_RBP;
  undefined4 in_register_00000034;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar13;
  UnityEngine_Object_o *unaff_R14;
  undefined8 *unaff_R15;
  float fVar14;
  float fVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined4 uVar16;
  UnityEngine_Vector3_o UVar17;
  
  pMVar12 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  do {
    uVar16 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
    *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    unaff_RBX = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8feaf;
    method_00 = pMVar12;
    UVar17 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    in_XMM1_Qa = CONCAT44(uVar16,UVar17.fields.z);
    uVar10 = UVar17.fields._0_8_;
    if (*(char *)((long)&(__this->fields)._hasAnimatedResults + 1) != '\0') {
      uVar1 = (__this->fields)._pointerSelectionLocked;
      uVar4 = (__this->fields)._pointerLockPosition.fields.x;
      fVar14 = UVar17.fields.x - (float)uVar1;
      fVar15 = UVar17.fields.y - (float)uVar4;
      fVar15 = fVar15 * fVar15;
      fVar14 = fVar15 + fVar14 * fVar14;
      in_XMM1_Qa = CONCAT44(fVar15,fVar14);
      uVar10 = 0x40800000;
      if (fVar14 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 0;
    }
    if (g_data_057a9eb5 == '\0') {
      unaff_RBX = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fef1;
      il2cpp_runtime_helper_023445d0(uVar10,in_XMM1_Qa);
      g_data_057a9eb5 = '\x01';
    }
    pSVar8 = (__this->fields)._results;
    if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8ff43;
      uVar10 = il2cpp_runtime_helper_022b2c90();
      *(ulong *)((long)register0x00000020 + -0x20) = (ulong)pMVar12 & 0xffffffff;
      *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)register0x00000020 + -0x28) = __this;
      *(undefined8 *)((long)register0x00000020 + -0x30) = uVar10;
      if (*(char *)((long)&(unaff_RBX->fields)._hasAnimatedResults + 1) != '\0') {
        uVar2 = (unaff_RBX->fields)._pointerSelectionLocked;
        uVar5 = (unaff_RBX->fields)._pointerLockPosition.fields.x;
        fVar14 = (float)extraout_XMM0_Qa - (float)uVar2;
        fVar15 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)uVar5;
        fVar15 = fVar15 * fVar15;
        fVar14 = fVar15 + fVar14 * fVar14;
        in_XMM1_Qa = CONCAT44(fVar15,fVar14);
        if (fVar14 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(unaff_RBX->fields)._hasAnimatedResults + 1) = 0;
      }
      pMVar12 = method_00;
      pGVar13 = unaff_RBX;
      if (g_data_057a9eb5 == '\0') {
        pGVar13 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x3b8ff9a;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9eb5 = '\x01';
      }
      pSVar8 = (unaff_RBX->fields)._results;
      if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x3b8ffec;
        uVar10 = il2cpp_runtime_helper_022b2c90();
        if (*(char *)((long)&(pGVar13->fields)._hasAnimatedResults + 1) != '\0') {
          uVar3 = (pGVar13->fields)._pointerSelectionLocked;
          uVar6 = (pGVar13->fields)._pointerLockPosition.fields.x;
          fVar14 = (float)uVar10 - (float)uVar3;
          fVar15 = (float)((ulong)uVar10 >> 0x20) - (float)uVar6;
          if (fVar15 * fVar15 + fVar14 * fVar14 < 4.0) {
            return;
          }
          *(undefined1 *)((long)&(pGVar13->fields)._hasAnimatedResults + 1) = 0;
        }
        return;
      }
      iVar7 = (pSVar8->fields)._size;
      iVar11 = 8;
      if (iVar7 < 9) {
        iVar11 = iVar7;
      }
      if (iVar11 == 0) {
        return;
      }
      (unaff_RBX->fields)._pointerLockPosition.fields.y =
           (float)(((int)((long)((ulong)(uint)((int)method_00 >> 0x1f) << 0x20 | (ulong)method_00 & 0xffffffff
                                ) % (long)iVar11) + iVar11) % iVar11);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x3b8ffd2;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(unaff_RBX,pMVar12);
      uVar10 = *(undefined8 *)((long)register0x00000020 + -0x28);
      unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x20);
      register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    }
    else {
      iVar7 = (pSVar8->fields)._size;
      iVar11 = 8;
      if (iVar7 < 9) {
        iVar11 = iVar7;
      }
      if (iVar11 == 0) {
        return;
      }
      (__this->fields)._pointerLockPosition.fields.y =
           (float)(((int)((long)((ulong)(uint)((int)pMVar12 >> 0x1f) << 0x20 | (ulong)pMVar12 & 0xffffffff) %
                         (long)iVar11) + iVar11) % iVar11);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8ff29;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this,method_00);
      uVar10 = *(undefined8 *)((long)register0x00000020 + -0x10);
      unaff_RBP = *(undefined8 *)((long)register0x00000020 + -8);
      unaff_RBX = __this;
    }
    *(undefined8 **)((long)register0x00000020 + -8) = unaff_R15;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = uVar10;
    if (g_data_057a9eb7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fded;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fdf9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe05;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9eb7 = '\x01';
    }
    fVar14 = (unaff_RBX->fields)._pointerLockPosition.fields.y;
    pMVar12 = (MethodInfo *)(ulong)(uint)fVar14;
    if ((int)fVar14 < 0) {
      return;
    }
    __this_00 = (unaff_RBX->fields)._feedback;
    __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
      if ((__this_00->fields)._size <= (int)fVar14) {
        return;
      }
      unaff_R15 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe30;
      unaff_R14 = (UnityEngine_Object_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,(int32_t)fVar14,
                             MethodInfo_GisketchDropdownItemFeedback_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe4b;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar12 = (MethodInfo *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe57;
      bVar9 = UnityEngine_Object__op_Equality(unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(unaff_RBX->fields)._feedback;
      if (__this != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
        fVar14 = (unaff_RBX->fields)._pointerLockPosition.fields.y;
        pMVar12 = (MethodInfo *)(ulong)(uint)fVar14;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe75;
        __this_01 = (UnityEngine_Component_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this,(int32_t)fVar14,
                               MethodInfo_GisketchDropdownItemFeedback_get_Item);
        if (__this_01 != (UnityEngine_Component_o *)0x0) {
          pMVar12 = (MethodInfo *)0x0;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe84;
          focused = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,pMVar12);
          return;
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe9e;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
  } while( true );
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$SelectFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, int32_t index, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x3b8ff50

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromPointer_3a8ff50
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,int32_t index,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar8;
  bool_conflict bVar9;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *focused;
  undefined8 uVar10;
  undefined8 in_RAX;
  int iVar11;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *unaff_RBX;
  undefined1 *puVar12;
  undefined8 uVar13;
  ulong unaff_RBP;
  MethodInfo *pMVar14;
  undefined4 in_register_00000034;
  MethodInfo *pMVar15;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar16;
  UnityEngine_Object_o *unaff_R14;
  undefined8 *unaff_R15;
  float fVar17;
  UnityEngine_Vector2_Fields extraout_XMM0_Qa;
  float fVar18;
  undefined4 uVar19;
  undefined8 in_XMM1_Qa;
  UnityEngine_Vector3_o UVar20;
  
  pMVar15 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  do {
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (*(char *)((long)&(__this->fields)._hasAnimatedResults + 1) != '\0') {
      uVar2 = (__this->fields)._pointerSelectionLocked;
      uVar5 = (__this->fields)._pointerLockPosition.fields.x;
      fVar17 = pointerPosition.fields.x - (float)uVar2;
      fVar18 = pointerPosition.fields.y - (float)uVar5;
      fVar18 = fVar18 * fVar18;
      fVar17 = fVar18 + fVar17 * fVar17;
      in_XMM1_Qa = CONCAT44(fVar18,fVar17);
      if (fVar17 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 0;
    }
    pMVar14 = pMVar15;
    pGVar16 = __this;
    if (g_data_057a9eb5 == '\0') {
      pGVar16 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8ff9a;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pSVar8 = (__this->fields)._results;
    if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8ffec;
      uVar10 = il2cpp_runtime_helper_022b2c90();
      if (*(char *)((long)&(pGVar16->fields)._hasAnimatedResults + 1) != '\0') {
        uVar3 = (pGVar16->fields)._pointerSelectionLocked;
        uVar6 = (pGVar16->fields)._pointerLockPosition.fields.x;
        fVar17 = (float)uVar10 - (float)uVar3;
        fVar18 = (float)((ulong)uVar10 >> 0x20) - (float)uVar6;
        if (fVar18 * fVar18 + fVar17 * fVar17 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(pGVar16->fields)._hasAnimatedResults + 1) = 0;
      }
      return;
    }
    iVar7 = (pSVar8->fields)._size;
    iVar11 = 8;
    if (iVar7 < 9) {
      iVar11 = iVar7;
    }
    if (iVar11 == 0) {
      return;
    }
    (__this->fields)._pointerLockPosition.fields.y =
         (float)(((int)((long)((ulong)(uint)((int)pMVar15 >> 0x1f) << 0x20 | (ulong)pMVar15 & 0xffffffff) %
                       (long)iVar11) + iVar11) % iVar11);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8ffd2;
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this,pMVar14);
    uVar10 = *(undefined8 *)((long)register0x00000020 + -0x10);
    uVar13 = *(undefined8 *)((long)register0x00000020 + -8);
    puVar12 = (undefined1 *)register0x00000020;
    while( true ) {
      uVar19 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
      *(undefined8 **)(puVar12 + -8) = unaff_R15;
      *(UnityEngine_Object_o **)(puVar12 + -0x10) = unaff_R14;
      *(undefined8 *)(puVar12 + -0x18) = uVar10;
      if (g_data_057a9eb7 == '\0') {
        *(undefined8 *)(puVar12 + -0x20) = 0x3b8fded;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)(puVar12 + -0x20) = 0x3b8fdf9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
        *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe05;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eb7 = '\x01';
      }
      fVar17 = (__this->fields)._pointerLockPosition.fields.y;
      pMVar14 = (MethodInfo *)(ulong)(uint)fVar17;
      if ((int)fVar17 < 0) {
        return;
      }
      __this_00 = (__this->fields)._feedback;
      unaff_RBX = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
        if ((__this_00->fields)._size <= (int)fVar17) {
          return;
        }
        unaff_R15 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
        *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe30;
        unaff_R14 = (UnityEngine_Object_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,(int32_t)fVar17,
                               MethodInfo_GisketchDropdownItemFeedback_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe4b;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar14 = (MethodInfo *)0x0;
        *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe57;
        bVar9 = UnityEngine_Object__op_Equality(unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          return;
        }
        unaff_RBX = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(__this->fields)._feedback;
        if (unaff_RBX != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
          fVar17 = (__this->fields)._pointerLockPosition.fields.y;
          pMVar14 = (MethodInfo *)(ulong)(uint)fVar17;
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe75;
          __this_01 = (UnityEngine_Component_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)unaff_RBX,(int32_t)fVar17,
                                 MethodInfo_GisketchDropdownItemFeedback_get_Item);
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            pMVar15 = (MethodInfo *)0x0;
            *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe84;
            focused = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,pMVar15);
            return;
          }
        }
      }
      *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe9e;
      uVar10 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)(puVar12 + -0x20) = uVar13;
      *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar12 + -0x28) = __this;
      register0x00000020 = (BADSPACEBASE *)(puVar12 + -0x30);
      *(undefined8 *)(puVar12 + -0x30) = uVar10;
      unaff_RBP = (ulong)pMVar14 & 0xffffffff;
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
      *(undefined8 *)(puVar12 + -0x38) = 0x3b8feaf;
      pMVar15 = pMVar14;
      UVar20 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      in_XMM1_Qa = CONCAT44(uVar19,UVar20.fields.z);
      uVar10 = UVar20.fields._0_8_;
      if (*(char *)((long)&(unaff_RBX->fields)._hasAnimatedResults + 1) != '\0') {
        uVar1 = (unaff_RBX->fields)._pointerSelectionLocked;
        uVar4 = (unaff_RBX->fields)._pointerLockPosition.fields.x;
        fVar17 = UVar20.fields.x - (float)uVar1;
        fVar18 = UVar20.fields.y - (float)uVar4;
        fVar18 = fVar18 * fVar18;
        fVar17 = fVar18 + fVar17 * fVar17;
        in_XMM1_Qa = CONCAT44(fVar18,fVar17);
        uVar10 = 0x40800000;
        if (fVar17 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(unaff_RBX->fields)._hasAnimatedResults + 1) = 0;
      }
      if (g_data_057a9eb5 == '\0') {
        __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
        *(undefined8 *)(puVar12 + -0x38) = 0x3b8fef1;
        il2cpp_runtime_helper_023445d0(uVar10,in_XMM1_Qa);
        g_data_057a9eb5 = '\x01';
      }
      pSVar8 = (unaff_RBX->fields)._results;
      if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
      iVar7 = (pSVar8->fields)._size;
      iVar11 = 8;
      if (iVar7 < 9) {
        iVar11 = iVar7;
      }
      if (iVar11 == 0) {
        return;
      }
      (unaff_RBX->fields)._pointerLockPosition.fields.y =
           (float)(((int)((long)((ulong)(uint)((int)pMVar14 >> 0x1f) << 0x20 | unaff_RBP) % (long)iVar11) +
                   iVar11) % iVar11);
      *(undefined8 *)(puVar12 + -0x38) = 0x3b8ff29;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(unaff_RBX,pMVar15);
      uVar10 = *(undefined8 *)(puVar12 + -0x28);
      uVar13 = *(undefined8 *)(puVar12 + -0x20);
      puVar12 = puVar12 + -0x18;
      __this = unaff_RBX;
    }
    *(undefined8 *)(puVar12 + -0x38) = 0x3b8ff43;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    pointerPosition.fields = extraout_XMM0_Qa;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$CanUsePointerSelection
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CanUsePointerSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x3b8fff0

bool_conflict
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CanUsePointerSelection
          (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,UnityEngine_Vector2_o pointerPosition
          ,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  float fVar3;
  float fVar4;
  
  if (*(char *)((long)&(__this->fields)._hasAnimatedResults + 1) != '\0') {
    uVar1 = (__this->fields)._pointerSelectionLocked;
    uVar2 = (__this->fields)._pointerLockPosition.fields.x;
    fVar3 = pointerPosition.fields.x - (float)uVar1;
    fVar4 = pointerPosition.fields.y - (float)uVar2;
    if (fVar4 * fVar4 + fVar3 * fVar3 < 4.0) {
      return 0;
    }
    *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 0;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$LockPointerSelection
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__LockPointerSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x3b8e240

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__LockPointerSelection
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 1;
  (__this->fields)._pointerSelectionLocked = (bool_conflict)pointerPosition.fields.x;
  (__this->fields)._pointerLockPosition.fields.x = pointerPosition.fields.y;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$ThemeColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ThemeColor (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* token, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x3b8f730

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ThemeColor
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *token,UnityEngine_Color_o fallback,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  undefined8 uVar1;
  bool_conflict bVar2;
  float fVar3;
  float in_XMM2_Da;
  UnityEngine_Color_o UVar7;
  UnityEngine_Color_o UVar8;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (g_data_057a9eb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    fVar5 = fallback.fields.b;
    fVar6 = fallback.fields.a;
    fVar3 = fallback.fields.r;
    fVar4 = fallback.fields.g;
    if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)(root->fields)._State_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        UVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(__this,token,fallback,(MethodInfo *)0x0);
        fVar5 = UVar7.fields.b;
        fVar6 = UVar7.fields.a;
        fVar3 = UVar7.fields.r;
        fVar4 = UVar7.fields.g;
      }
      UVar8.fields.g = fVar4;
      UVar8.fields.r = fVar3;
      UVar8.fields.a = fVar6;
      UVar8.fields.b = fVar5;
      return (UnityEngine_Color_o)UVar8.fields;
    }
    uVar1 = il2cpp_runtime_helper_022b2c90();
    fVar3 = 1.0;
    if (in_XMM2_Da <= 1.0) {
      fVar3 = in_XMM2_Da;
    }
    UVar7.fields.a = (float)((uint)fVar3 & -(uint)(0.0 <= in_XMM2_Da));
    UVar7.fields.b = fVar5;
    UVar7.fields.r = (float)(int)uVar1;
    UVar7.fields.g = (float)(int)((ulong)uVar1 >> 0x20);
    return (UnityEngine_Color_o)UVar7.fields;
  }
  return (UnityEngine_Color_o)fallback.fields;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$WithAlpha
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WithAlpha (UnityEngine_Color_o color, float alpha, const MethodInfo* method);
// 0x3b8f7d0

UnityEngine_Color_o
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__WithAlpha
          (UnityEngine_Color_o color,float alpha,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Color_o UVar2;
  
  UVar2.fields._0_8_ = color.fields._0_8_;
  fVar1 = 1.0;
  if (alpha <= 1.0) {
    fVar1 = alpha;
  }
  UVar2.fields.b = color.fields.b;
  UVar2.fields.a = (float)((uint)fVar1 & -(uint)(0.0 <= alpha));
  return (UnityEngine_Color_o)UVar2.fields;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$VisibleResultCount
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__VisibleResultCount (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b8e690

int32_t Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__VisibleResultCount
                  (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  int iVar3;
  uint uVar4;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar5;
  long lVar6;
  System_Collections_Generic_List_object__o *pSVar7;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_Object_array *pSVar8;
  undefined8 uVar9;
  System_String_o *query;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  bool_conflict bVar21;
  int32_t iVar22;
  void *pvVar23;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar24;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_01;
  Il2CppObject *pIVar25;
  undefined8 *puVar26;
  Il2CppObject *pIVar27;
  UnityEngine_Transform_o *pUVar28;
  System_String_o *pSVar29;
  UnityEngine_Events_UnityAction_o *call;
  System_Func_bool__o *pSVar30;
  System_String_o *pSVar31;
  MethodInfo *pMVar32;
  UnityEngine_GameObject_o *__this_02;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *in_RCX;
  void *extraout_RDX;
  MethodInfo *method_00;
  void **ppvVar33;
  ulong unaff_RBP;
  UnityEngine_Object_o *pUVar34;
  UnityEngine_Object_o *x;
  Il2CppClass *pIVar35;
  Il2CppClass *pIVar36;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **unaff_R13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *unaff_R15;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_03;
  float fVar37;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  UnityEngine_Color_o UVar43;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  Il2CppClass *pIStack_b0;
  UnityEngine_Object_o *pUStack_a8;
  System_String_o *pSStack_a0;
  System_String_o *pSStack_98;
  System_String_o *pSStack_90;
  System_String_o *pSStack_88;
  System_String_o *pSStack_80;
  Il2CppObject *pIStack_78;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGStack_70;
  Il2CppClass *pIStack_68;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **ppGStack_60;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_58;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGStack_38;
  
  pIVar35 = (Il2CppClass *)__this;
  if (g_data_057a9eb5 == '\0') {
    pIVar35 = (Il2CppClass *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eb5 = '\x01';
  }
  pSVar5 = (__this->fields)._results;
  if (pSVar5 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    iVar3 = (pSVar5->fields)._size;
    iVar20 = 8;
    if (iVar3 < 9) {
      iVar20 = iVar3;
    }
    return iVar20;
  }
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pGStack_38 = __this;
  if (g_data_057a9eb1 == '\0') {
    uStack_48 = 0x3b8e716;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    uStack_48 = 0x3b8e722;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    uStack_48 = 0x3b8e72e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    uStack_48 = 0x3b8e73a;
    il2cpp_runtime_helper_023445d0(&"search-palette-results");
    uStack_48 = 0x3b8e746;
    il2cpp_runtime_helper_023445d0(&"Column");
    uStack_48 = 0x3b8e752;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    uStack_48 = 0x3b8e75e;
    il2cpp_runtime_helper_023445d0(&"Panel");
    uStack_48 = 0x3b8e76a;
    il2cpp_runtime_helper_023445d0(&"popover");
    g_data_057a9eb1 = '\x01';
    if (g_data_057a9eb5 == '\0') goto label_03b8e77e;
label_03b8e6f7:
    pvVar23 = (pIVar35->_1).this_arg.data;
    if (pvVar23 == (void *)0x0) goto label_03b8e91f;
label_03b8e79f:
    uVar4 = *(uint *)((long)pvVar23 + 0x18);
    unaff_RBP = (ulong)uVar4;
    __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&g_data_00000008;
    if ((int)uVar4 < 9) {
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(ulong)uVar4;
    }
    uStack_48 = 0x3b8e7be;
    unaff_R15 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    if ((int)uVar4 < 1) {
label_03b8e816:
      uStack_48 = 0x3b8e825;
      method = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      uStack_48 = 0x3b8e832;
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method,(MethodInfo *)0x0);
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method !=
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method)->fields).type = "Panel";
        uStack_48 = 0x3b8e852;
        il2cpp_runtime_helper_022b4080(&((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method)->fields);
        (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method)->fields).id = "search-palette-results";
        uStack_48 = 0x3b8e869;
        il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method)->fields).id);
        (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method)->fields).style = "popover";
        uStack_48 = 0x3b8e880;
        il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method)->fields).style);
        uStack_48 = 0x3b8e88f;
        __this_01 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
        uStack_48 = 0x3b8e89c;
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_01,(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
        if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (__this_01->fields).direction = "Column";
          uStack_48 = 0x3b8e8b8;
          il2cpp_runtime_helper_022b4080(&__this_01->fields);
          (__this_01->fields).alignItems = "Stretch";
          uStack_48 = 0x3b8e8d2;
          il2cpp_runtime_helper_022b4080(&(__this_01->fields).alignItems);
          (__this_01->fields).gap = 0.0;
          (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method)->fields).search =
               (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_01;
          uStack_48 = 0x3b8e8ef;
          il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method)->fields).search,
                             __this_01);
          (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method)->fields).deferredChildren = unaff_R15;
          uStack_48 = 0x3b8e908;
          il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method)->fields).
                              deferredChildren,unaff_R15);
          return (int32_t)method;
        }
      }
      goto label_03b8e91f;
    }
    if (unaff_R15 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      unaff_RBP = (ulong)(int)__this;
      unaff_R13 = unaff_R15->m_Items;
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
      do {
        uStack_48 = 0x3b8e7ed;
        pGVar24 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
                            ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pIVar35,(int32_t)__this,
                             (System_String_o *)method,(MethodInfo *)in_RCX);
        in_RCX = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(ulong)(uint)unaff_R15->max_length;
        if (in_RCX <= __this) {
          uStack_48 = 0x3b8e91f;
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b8e91f;
        }
        *unaff_R13 = pGVar24;
        uStack_48 = 0x3b8e809;
        il2cpp_runtime_helper_022b4080(unaff_R13);
        __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)((long)&__this->klass + 1);
        unaff_R13 = unaff_R13 + 1;
      } while ((long)__this < (long)unaff_RBP);
      goto label_03b8e816;
    }
  }
  else {
    if (g_data_057a9eb5 != '\0') goto label_03b8e6f7;
label_03b8e77e:
    uStack_48 = 0x3b8e78a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9eb5 = '\x01';
    pvVar23 = (pIVar35->_1).this_arg.data;
    if (pvVar23 != (void *)0x0) goto label_03b8e79f;
label_03b8e91f:
    uStack_48 = 0x3b8e924;
    il2cpp_runtime_helper_022b2c90();
  }
  x = (UnityEngine_Object_o *)0x0;
  uStack_48 = 0x3b8e931;
  pIVar36 = pIVar35;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
            ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pIVar35,0,(System_String_o *)method,
             (MethodInfo *)in_RCX);
  uStack_48 = 0x3b8e936;
  il2cpp_runtime_helper_022b2c90();
  pGStack_70 = __this;
  pIStack_68 = pIVar35;
  ppGStack_60 = unaff_R13;
  pGStack_58 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)method;
  pGStack_50 = unaff_R15;
  uStack_48 = unaff_RBP;
  if (g_data_057a9eb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_WireResults_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_WireResults_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"search-result-");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"negativeText");
    g_data_057a9eb3 = '\x01';
  }
  fStack_fc = 0.0;
  pIVar25 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(pIVar25,(MethodInfo *)0x0);
  fVar37 = fStack_d8;
  fVar38 = fStack_d4;
  uVar40 = uStack_d0;
  uVar42 = uStack_cc;
  fVar10 = fStack_c8;
  fVar11 = fStack_c4;
  uVar12 = uStack_c0;
  uVar13 = uStack_bc;
  if (pIVar25 == (Il2CppObject *)0x0) goto label_03b8f282;
  pIVar25[1].klass = pIVar36;
  il2cpp_runtime_helper_022b4080(pIVar25 + 1,pIVar36);
  ppvVar33 = &pIVar25[1].monitor;
  pIVar25[1].monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(ppvVar33);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar21 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar21 != '\0') {
    return bVar21;
  }
  lVar6 = *(long *)&(pIVar36->_1).this_arg.bits;
  fVar37 = fStack_d8;
  fVar38 = fStack_d4;
  uVar40 = uStack_d0;
  uVar42 = uStack_cc;
  fVar10 = fStack_c8;
  fVar11 = fStack_c4;
  uVar12 = uStack_c0;
  uVar13 = uStack_bc;
  if (lVar6 == 0) goto label_03b8f282;
  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
  iVar3 = *(int *)(lVar6 + 0x18);
  *(undefined4 *)(lVar6 + 0x18) = 0;
  if (0 < iVar3) {
    System_Array__Clear(*(System_Array_o **)(lVar6 + 0x10),0,iVar3,(MethodInfo *)0x0);
  }
  pUVar34 = (pIVar36->_1).byval_arg.data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar21 = UnityEngine_Object__op_Inequality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar29 = "text";
  if ((char)bVar21 == '\0') {
    puVar26 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pvVar23 = (pIVar36->_1).byval_arg.data;
    fVar37 = fStack_d8;
    fVar38 = fStack_d4;
    uVar40 = uStack_d0;
    uVar42 = uStack_cc;
    fVar10 = fStack_c8;
    fVar11 = fStack_c4;
    uVar12 = uStack_c0;
    uVar13 = uStack_bc;
    if (pvVar23 == (void *)0x0) goto label_03b8f282;
    puVar26 = (undefined8 *)((long)pvVar23 + 0x220);
  }
  pSStack_80 = (System_String_o *)*puVar26;
  pUVar34 = *ppvVar33;
  if (g_data_057a9eb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar21 = UnityEngine_Object__op_Inequality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar37 = fStack_d8;
  fVar38 = fStack_d4;
  uVar40 = uStack_d0;
  uVar42 = uStack_cc;
  fVar10 = fStack_c8;
  fVar11 = fStack_c4;
  uVar12 = uStack_c0;
  uVar13 = uStack_bc;
  if ((char)bVar21 == '\0') {
label_03b8ebd1:
    pUVar34 = *ppvVar33;
    fVar14 = 1.0;
    fVar15 = 1.0;
    fVar16 = 1.0;
    fVar17 = 1.0;
    uVar18 = 0;
    uVar39 = 0;
    uVar19 = 0;
    uVar41 = 0;
    pSVar29 = "negativeText";
  }
  else {
    if (pUVar34 == (UnityEngine_Object_o *)0x0) goto label_03b8f282;
    if (pUVar34[5].klass == (UnityEngine_Object_c *)0x0) goto label_03b8ebd1;
    uVar39 = g_data_00d19fc0._8_4_;
    uVar41 = g_data_00d19fc0._12_4_;
    uVar9 = g_data_00d19fc0;
    UVar43.fields.b = (float)(int)uVar9;
    UVar43.fields.a = (float)(int)((ulong)uVar9 >> 0x20);
    UVar43.fields.r = (float)(int)uVar9;
    UVar43.fields.g = (float)(int)((ulong)uVar9 >> 0x20);
    UVar43 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar34[5].klass,pSVar29,UVar43,
                        (MethodInfo *)0x0);
    pUVar34 = *ppvVar33;
    fVar14 = UVar43.fields.r;
    fVar15 = UVar43.fields.b;
    fVar16 = UVar43.fields.g;
    fVar17 = UVar43.fields.a;
    uVar18 = extraout_XMM0_Dc;
    uVar19 = extraout_XMM0_Dd;
    pSVar29 = "negativeText";
    fVar37 = fStack_d8;
    fVar38 = fStack_d4;
    uVar40 = uStack_d0;
    uVar42 = uStack_cc;
    fVar10 = fStack_c8;
    fVar11 = fStack_c4;
    uVar12 = uStack_c0;
    uVar13 = uStack_bc;
  }
  uStack_cc = uVar41;
  uStack_bc = uVar19;
  uStack_d0 = uVar39;
  uStack_c0 = uVar18;
  fStack_d4 = fVar17;
  fStack_c4 = fVar16;
  fStack_d8 = fVar15;
  fStack_c8 = fVar14;
  "negativeText" = pSVar29;
  if (pUVar34 != (UnityEngine_Object_o *)0x0) {
    fStack_f8 = fStack_c8;
    fStack_f4 = fStack_c4;
    uStack_f0 = uStack_c0;
    uStack_ec = uStack_bc;
    if ((pUVar34[5].klass == (UnityEngine_Object_c *)0x0) ||
       (fVar37 = fStack_d8, fVar38 = fStack_d4, uStack_e0 = uStack_d0, uStack_dc = uStack_cc,
       ((pUVar34[5].klass)->_1).byval_arg.field_0xc == '\0')) {
      if (g_data_057a9eb4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eb4 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar21 = UnityEngine_Object__op_Inequality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fStack_c8 = 1.0;
      fStack_c4 = 1.0;
      uStack_c0 = 0;
      uStack_bc = 0;
      fVar37 = fStack_c8;
      fVar38 = fStack_c4;
      uStack_e0 = uStack_c0;
      uStack_dc = uStack_bc;
      if (((char)bVar21 != '\0') && (pUVar34[5].klass != (UnityEngine_Object_c *)0x0)) {
        uVar40 = g_data_00d19fc0._8_4_;
        uVar42 = g_data_00d19fc0._12_4_;
        uVar9 = g_data_00d19fc0;
        fallback.fields.b = (float)(int)uVar9;
        fallback.fields.a = (float)(int)((ulong)uVar9 >> 0x20);
        fallback.fields.r = (float)(int)uVar9;
        fallback.fields.g = (float)(int)((ulong)uVar9 >> 0x20);
        UVar43 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar34[5].klass,pSVar29,fallback,
                            (MethodInfo *)0x0);
        fStack_c8 = UVar43.fields.r;
        fStack_c4 = UVar43.fields.g;
        uStack_c0 = extraout_XMM0_Dc_00;
        uStack_bc = extraout_XMM0_Dd_00;
        fVar37 = UVar43.fields.b;
        fVar38 = UVar43.fields.a;
        uStack_e0 = uVar40;
        uStack_dc = uVar42;
      }
    }
    uStack_e8 = (UnityEngine_Transform_o *)CONCAT44(fVar38,fVar37);
    color.fields.g = fStack_f4;
    color.fields.r = fStack_f8;
    color.fields.a = fStack_d4;
    color.fields.b = fStack_d8;
    pSStack_88 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    fVar38 = fStack_d4 * 0.75;
    fVar37 = 1.0;
    if (fVar38 <= 1.0) {
      fVar37 = fVar38;
    }
    color_00.fields.g = fStack_f4;
    color_00.fields.r = fStack_f8;
    color_00.fields.a = (float)(-(uint)(0.0 <= fVar38) & (uint)fVar37);
    color_00.fields.b = fStack_d8;
    pSStack_90 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    color_01.fields.g = fStack_c4;
    color_01.fields.r = fStack_c8;
    color_01.fields._8_8_ = uStack_e8;
    pSStack_98 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
    fVar38 = uStack_e8._4_4_ * 0.75;
    fVar37 = 1.0;
    if (fVar38 <= 1.0) {
      fVar37 = fVar38;
    }
    color_02.fields.g = fStack_c4;
    color_02.fields.r = fStack_c8;
    color_02.fields.a = (float)(-(uint)(0.0 <= fVar38) & (uint)fVar37);
    color_02.fields.b = (float)(undefined4)uStack_e8;
    pSStack_a0 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
    if (g_data_057a9eb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057a9eb5 = '\x01';
    }
    pvVar23 = (pIVar36->_1).this_arg.data;
    fVar37 = fStack_d8;
    fVar38 = fStack_d4;
    uVar40 = uStack_d0;
    uVar42 = uStack_cc;
    fVar10 = fStack_c8;
    fVar11 = fStack_c4;
    uVar12 = uStack_c0;
    uVar13 = uStack_bc;
    if (pvVar23 != (void *)0x0) {
      fVar37 = *(float *)((long)pvVar23 + 0x18);
      fStack_d8 = 1.12104e-44;
      if ((int)fVar37 < 9) {
        fStack_d8 = fVar37;
      }
      fStack_fc = 0.0;
      if ((int)fVar37 < 1) {
        return (int32_t)fVar37;
      }
      uStack_c0 = (undefined4)uStack_e8;
      uStack_bc = uStack_e8._4_4_;
      pIStack_b0 = pIVar36;
      pUStack_a8 = x;
      pIStack_78 = pIVar25;
      while( true ) {
        pIVar27 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_1);
        System_Object___ctor(pIVar27,(MethodInfo *)0x0);
        fVar37 = fStack_d8;
        fVar38 = fStack_d4;
        uVar40 = uStack_d0;
        uVar42 = uStack_cc;
        fVar10 = fStack_c8;
        fVar11 = fStack_c4;
        uVar12 = uStack_c0;
        uVar13 = uStack_bc;
        if (pIVar27 == (Il2CppObject *)0x0) break;
        ppvVar33 = &pIVar27[1].monitor;
        pIVar27[1].monitor = pIVar25;
        il2cpp_runtime_helper_022b4080(ppvVar33,pIVar25);
        pSVar7 = (pIVar36->_1).this_arg.data;
        fVar37 = fStack_d8;
        fVar38 = fStack_d4;
        uVar40 = uStack_d0;
        uVar42 = uStack_cc;
        fVar10 = fStack_c8;
        fVar11 = fStack_c4;
        uVar12 = uStack_c0;
        uVar13 = uStack_bc;
        if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) break;
        fStack_f8 = fStack_fc;
        pIVar35 = (Il2CppClass *)
                  System_Collections_Generic_List_object___get_Item(pSVar7,(int32_t)fStack_fc,MethodInfo_GisketchSearchEntry_get_Item);
        pIVar25 = pIVar27 + 1;
        pIVar27[1].klass = pIVar35;
        il2cpp_runtime_helper_022b4080(pIVar25);
        fVar37 = fStack_d8;
        fVar38 = fStack_d4;
        uVar40 = uStack_d0;
        uVar42 = uStack_cc;
        fVar10 = fStack_c8;
        fVar11 = fStack_c4;
        uVar12 = uStack_c0;
        uVar13 = uStack_bc;
        if (x == (UnityEngine_Object_o *)0x0) break;
        pUVar28 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        pSVar29 = System_Int32__ToString((int32_t)&fStack_fc,(MethodInfo *)0x0);
        pSVar29 = System_String__Concat_3ae5ba0("search-result-",pSVar29,(MethodInfo *)0x0);
        pUVar28 = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(pUVar28,pSVar29,method_00);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_e8 = pUVar28;
        bVar21 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pUVar34 = (UnityEngine_Object_o *)0x0;
        if ((char)bVar21 != '\0') {
          fVar37 = fStack_d8;
          fVar38 = fStack_d4;
          uVar40 = uStack_d0;
          uVar42 = uStack_cc;
          fVar10 = fStack_c8;
          fVar11 = fStack_c4;
          uVar12 = uStack_c0;
          uVar13 = uStack_bc;
          if (uStack_e8 == (UnityEngine_Transform_o *)0x0) break;
          pUVar34 = (UnityEngine_Object_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)uStack_e8,MethodInfo_Button_GetComponent_Button);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar21 = UnityEngine_Object__op_Inequality(pUVar34,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar21 != '\0') {
          fVar37 = fStack_d8;
          fVar38 = fStack_d4;
          uVar40 = uStack_d0;
          uVar42 = uStack_cc;
          fVar10 = fStack_c8;
          fVar11 = fStack_c4;
          uVar12 = uStack_c0;
          uVar13 = uStack_bc;
          if (pUVar34 == (UnityEngine_Object_o *)0x0) break;
          __this_00 = (UnityEngine_Events_UnityEvent_o *)pUVar34[10].fields.m_CachedPtr;
          call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          fVar37 = fStack_d8;
          fVar38 = fStack_d4;
          uVar40 = uStack_d0;
          uVar42 = uStack_cc;
          fVar10 = fStack_c8;
          fVar11 = fStack_c4;
          uVar12 = uStack_c0;
          uVar13 = uStack_bc;
          if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) break;
          UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar28 = uStack_e8;
        bVar21 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)uStack_e8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_03 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
        if ((char)bVar21 != '\0') {
          fVar37 = fStack_d8;
          fVar38 = fStack_d4;
          uVar40 = uStack_d0;
          uVar42 = uStack_cc;
          fVar10 = fStack_c8;
          fVar11 = fStack_c4;
          uVar12 = uStack_c0;
          uVar13 = uStack_bc;
          if (pUVar28 == (UnityEngine_Transform_o *)0x0) break;
          __this_03 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar28,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar21 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar21 != '\0') {
          fVar37 = fStack_d8;
          fVar38 = fStack_d4;
          uVar40 = uStack_d0;
          uVar42 = uStack_cc;
          fVar10 = fStack_c8;
          fVar11 = fStack_c4;
          uVar12 = uStack_c0;
          uVar13 = uStack_bc;
          if ((((*ppvVar33 == (void *)0x0) || (lVar6 = *(long *)((long)*ppvVar33 + 0x18), lVar6 == 0)) ||
              (lVar6 = *(long *)(lVar6 + 0x80), lVar6 == 0)) || (pIVar25->klass == (Il2CppClass *)0x0)) break;
          pMVar32 = *(MethodInfo **)(lVar6 + 0x30);
          pSVar29 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar25->klass,
                               (System_String_o *)pMVar32,(MethodInfo *)0x0);
          fVar37 = fStack_d8;
          fVar38 = fStack_d4;
          uVar40 = uStack_d0;
          uVar42 = uStack_cc;
          fVar10 = fStack_c8;
          fVar11 = fStack_c4;
          uVar12 = uStack_c0;
          uVar13 = uStack_bc;
          if (__this_03 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
          *(ulong *)&(__this_03->fields)._hoverBg.fields.a = CONCAT44(fStack_c4,fStack_c8);
          (__this_03->fields)._hoverText.fields.g = (float)uStack_c0;
          (__this_03->fields)._hoverText.fields.b = (float)uStack_bc;
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_03,pMVar32);
          pvVar23 = *ppvVar33;
          fVar37 = fStack_d8;
          fVar38 = fStack_d4;
          uVar40 = uStack_d0;
          uVar42 = uStack_cc;
          fVar10 = fStack_c8;
          fVar11 = fStack_c4;
          uVar12 = uStack_c0;
          uVar13 = uStack_bc;
          if (pvVar23 == (void *)0x0) break;
          pSVar30 = *(System_Func_bool__o **)((long)pvVar23 + 0x20);
          if (pSVar30 == (System_Func_bool__o *)0x0) {
            pSVar30 = (System_Func_bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_bool);
            System_Func_bool____ctor();
            *(System_Func_bool__o **)((long)pvVar23 + 0x20) = pSVar30;
            il2cpp_runtime_helper_022b4080((long)pvVar23 + 0x20,pSVar30);
          }
          (__this_03->fields)._pointerHoverAllowed = pSVar30;
          il2cpp_runtime_helper_022b4080(&(__this_03->fields)._pointerHoverAllowed,pSVar30);
          query = pSStack_80;
          pSVar31 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar25->klass,pSStack_80,0,
                               pSStack_88,pSVar29,pSStack_90,(MethodInfo *)0x0);
          pMVar32 = (MethodInfo *)
                    Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar25->klass,query,1,
                               pSStack_98,pSVar29,pSStack_a0,(MethodInfo *)0x0);
          if (pSVar31 == (System_String_o *)0x0) {
            pSVar31 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          ppSVar2 = &(__this_03->fields)._normalLabelText;
          (__this_03->fields)._normalLabelText = pSVar31;
          il2cpp_runtime_helper_022b4080(ppSVar2,pSVar31);
          x = pUStack_a8;
          pIVar35 = pIStack_b0;
          if (pMVar32 == (MethodInfo *)0x0) {
            pMVar32 = (MethodInfo *)*ppSVar2;
          }
          (__this_03->fields)._activeLabelText = (System_String_o *)pMVar32;
          il2cpp_runtime_helper_022b4080(&(__this_03->fields)._activeLabelText);
          *(undefined1 *)&(__this_03->fields)._normalLabelOwnsColor = 1;
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_03,pMVar32);
          *(bool *)((long)&(__this_03->fields)._hovered + 2) =
               fStack_f8 == *(float *)((long)&(pIVar35->_1).declaringType + 4);
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_03,pMVar32);
          pUVar28 = uStack_e8;
        }
        pIVar25 = pIStack_78;
        pIVar36 = pIStack_b0;
        lVar6 = MethodInfo_Void_Add;
        pSVar7 = *(System_Collections_Generic_List_object__o **)&(pIStack_b0->_1).this_arg.bits;
        fVar37 = fStack_d8;
        fVar38 = fStack_d4;
        uVar40 = uStack_d0;
        uVar42 = uStack_cc;
        fVar10 = fStack_c8;
        fVar11 = fStack_c4;
        uVar12 = uStack_c0;
        uVar13 = uStack_bc;
        if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) break;
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar8 = (pSVar7->fields)._items;
        if (pSVar8 == (System_Object_array *)0x0) break;
        uVar4 = (pSVar7->fields)._size;
        if (uVar4 < (uint)pSVar8->max_length) {
          (pSVar7->fields)._size = uVar4 + 1;
          pSVar8->m_Items[(int)uVar4] = (Il2CppObject *)__this_03;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar4);
          iVar3 = *(int *)(TypeInfo_Object + 0xe4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar7,(Il2CppObject *)__this_03,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          iVar3 = *(int *)(TypeInfo_Object + 0xe4);
        }
        if (iVar3 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar21 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar21 != '\0') {
          fVar37 = fStack_d8;
          fVar38 = fStack_d4;
          uVar40 = uStack_d0;
          uVar42 = uStack_cc;
          fVar10 = fStack_c8;
          fVar11 = fStack_c4;
          uVar12 = uStack_c0;
          uVar13 = uStack_bc;
          if (((pUVar28 == (UnityEngine_Transform_o *)0x0) ||
              (__this_02 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar28,(MethodInfo *)0x0),
              fVar37 = fStack_d8, fVar38 = fStack_d4, uVar40 = uStack_d0, uVar42 = uStack_cc,
              fVar10 = fStack_c8, fVar11 = fStack_c4, uVar12 = uStack_c0, uVar13 = uStack_bc,
              __this_02 == (UnityEngine_GameObject_o *)0x0)) ||
             (pIVar27 = UnityEngine_GameObject__AddComponent_object_(__this_02,MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul),
             fVar37 = fStack_d8, fVar38 = fStack_d4, uVar40 = uStack_d0, uVar42 = uStack_cc,
             fVar10 = fStack_c8, fVar11 = fStack_c4, uVar12 = uStack_c0, uVar13 = uStack_bc,
             pIVar27 == (Il2CppObject *)0x0)) break;
          pIVar27[2].klass = pIVar36;
          il2cpp_runtime_helper_022b4080(pIVar27 + 2);
          *(float *)&pIVar27[2].monitor = fStack_f8;
        }
        fStack_fc = (float)((int)fStack_fc + 1);
        if ((int)fStack_d8 <= (int)fStack_fc) {
          return (int32_t)fStack_fc;
        }
      }
    }
  }
label_03b8f282:
  uStack_bc = uVar13;
  uStack_c0 = uVar12;
  fStack_c4 = fVar11;
  fStack_c8 = fVar10;
  uStack_cc = uVar42;
  uStack_d0 = uVar40;
  fStack_d4 = fVar38;
  fStack_d8 = fVar37;
  iVar22 = il2cpp_runtime_helper_022b2c90();
  return iVar22;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$RefreshSelection
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b8fce0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar8;
  bool_conflict bVar9;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *focused;
  undefined8 uVar10;
  int iVar11;
  MethodInfo *unaff_RBX;
  undefined1 *puVar12;
  undefined8 unaff_RBP;
  MethodInfo *pMVar13;
  MethodInfo *method_00;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar14;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_02;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar15;
  UnityEngine_Object_o *unaff_R15;
  float fVar16;
  float fVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined4 uVar18;
  UnityEngine_Vector3_o UVar19;
  
  if (g_data_057a9eb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb6 = '\x01';
  }
  pSVar14 = (__this->fields)._feedback;
  __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
  if (pSVar14 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
label_03b8fdc9:
    il2cpp_runtime_helper_022b2c90();
    puVar12 = &stack0xffffffffffffffd8;
    while( true ) {
      while( true ) {
        uVar18 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
        *(UnityEngine_Object_o **)(puVar12 + -8) = unaff_R15;
        *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar12 + -0x10) = __this;
        *(MethodInfo **)(puVar12 + -0x18) = unaff_RBX;
        if (g_data_057a9eb7 == '\0') {
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fded;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fdf9;
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe05;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9eb7 = '\x01';
        }
        fVar16 = (__this_02->fields)._pointerLockPosition.fields.y;
        pMVar13 = (MethodInfo *)(ulong)(uint)fVar16;
        if ((int)fVar16 < 0) {
          return;
        }
        pSVar14 = (__this_02->fields)._feedback;
        pGVar15 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
        if (pSVar14 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
          if ((pSVar14->fields)._size <= (int)fVar16) {
            return;
          }
          unaff_R15 = (UnityEngine_Object_o *)&MethodInfo_GisketchDropdownItemFeedback_get_Item;
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe30;
          __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)
                   System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar14,(int32_t)fVar16,
                              MethodInfo_GisketchDropdownItemFeedback_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe4b;
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar13 = (MethodInfo *)0x0;
          *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe57;
          bVar9 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            return;
          }
          pGVar15 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(__this_02->fields)._feedback;
          if (pGVar15 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
            fVar16 = (__this_02->fields)._pointerLockPosition.fields.y;
            pMVar13 = (MethodInfo *)(ulong)(uint)fVar16;
            *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe75;
            __this_01 = (UnityEngine_Component_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pGVar15,(int32_t)fVar16,
                                   MethodInfo_GisketchDropdownItemFeedback_get_Item);
            if (__this_01 != (UnityEngine_Component_o *)0x0) {
              pMVar13 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe84;
              focused = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,pMVar13);
              return;
            }
          }
        }
        *(undefined8 *)(puVar12 + -0x20) = 0x3b8fe9e;
        uVar10 = il2cpp_runtime_helper_022b2c90();
        *(undefined8 *)(puVar12 + -0x20) = unaff_RBP;
        *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar12 + -0x28) = __this_02;
        *(undefined8 *)(puVar12 + -0x30) = uVar10;
        __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
        *(undefined8 *)(puVar12 + -0x38) = 0x3b8feaf;
        method_00 = pMVar13;
        UVar19 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        in_XMM1_Qa = CONCAT44(uVar18,UVar19.fields.z);
        uVar10 = UVar19.fields._0_8_;
        if (*(char *)((long)&(pGVar15->fields)._hasAnimatedResults + 1) != '\0') {
          uVar1 = (pGVar15->fields)._pointerSelectionLocked;
          uVar4 = (pGVar15->fields)._pointerLockPosition.fields.x;
          fVar16 = UVar19.fields.x - (float)uVar1;
          fVar17 = UVar19.fields.y - (float)uVar4;
          fVar17 = fVar17 * fVar17;
          fVar16 = fVar17 + fVar16 * fVar16;
          in_XMM1_Qa = CONCAT44(fVar17,fVar16);
          uVar10 = 0x40800000;
          if (fVar16 < 4.0) {
            return;
          }
          *(undefined1 *)((long)&(pGVar15->fields)._hasAnimatedResults + 1) = 0;
        }
        if (g_data_057a9eb5 == '\0') {
          __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
          *(undefined8 *)(puVar12 + -0x38) = 0x3b8fef1;
          il2cpp_runtime_helper_023445d0(uVar10,in_XMM1_Qa);
          g_data_057a9eb5 = '\x01';
        }
        pSVar8 = (pGVar15->fields)._results;
        if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
        iVar7 = (pSVar8->fields)._size;
        iVar11 = 8;
        if (iVar7 < 9) {
          iVar11 = iVar7;
        }
        if (iVar11 == 0) {
          return;
        }
        (pGVar15->fields)._pointerLockPosition.fields.y =
             (float)(((int)((long)((ulong)(uint)((int)pMVar13 >> 0x1f) << 0x20 | (ulong)pMVar13 & 0xffffffff)
                           % (long)iVar11) + iVar11) % iVar11);
        *(undefined8 *)(puVar12 + -0x38) = 0x3b8ff29;
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(pGVar15,method_00);
        unaff_RBX = *(MethodInfo **)(puVar12 + -0x28);
        unaff_RBP = *(undefined8 *)(puVar12 + -0x20);
        puVar12 = puVar12 + -0x18;
        __this_02 = pGVar15;
      }
      *(undefined8 *)(puVar12 + -0x38) = 0x3b8ff43;
      uVar10 = il2cpp_runtime_helper_022b2c90();
      *(ulong *)(puVar12 + -0x38) = (ulong)pMVar13 & 0xffffffff;
      *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar12 + -0x40) = pGVar15;
      *(undefined8 *)(puVar12 + -0x48) = uVar10;
      if (*(char *)((long)&(__this_02->fields)._hasAnimatedResults + 1) != '\0') {
        uVar2 = (__this_02->fields)._pointerSelectionLocked;
        uVar5 = (__this_02->fields)._pointerLockPosition.fields.x;
        fVar16 = (float)extraout_XMM0_Qa - (float)uVar2;
        fVar17 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)uVar5;
        fVar17 = fVar17 * fVar17;
        fVar16 = fVar17 + fVar16 * fVar16;
        in_XMM1_Qa = CONCAT44(fVar17,fVar16);
        if (fVar16 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(__this_02->fields)._hasAnimatedResults + 1) = 0;
      }
      pMVar13 = method_00;
      pGVar15 = __this_02;
      if (g_data_057a9eb5 == '\0') {
        pGVar15 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
        *(undefined8 *)(puVar12 + -0x50) = 0x3b8ff9a;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9eb5 = '\x01';
      }
      pSVar8 = (__this_02->fields)._results;
      if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
      iVar7 = (pSVar8->fields)._size;
      iVar11 = 8;
      if (iVar7 < 9) {
        iVar11 = iVar7;
      }
      if (iVar11 == 0) {
        return;
      }
      (__this_02->fields)._pointerLockPosition.fields.y =
           (float)(((int)((long)((ulong)(uint)((int)method_00 >> 0x1f) << 0x20 | (ulong)method_00 & 0xffffffff
                                ) % (long)iVar11) + iVar11) % iVar11);
      *(undefined8 *)(puVar12 + -0x50) = 0x3b8ffd2;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this_02,pMVar13);
      unaff_RBX = *(MethodInfo **)(puVar12 + -0x40);
      unaff_RBP = *(undefined8 *)(puVar12 + -0x38);
      puVar12 = puVar12 + -0x30;
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b8ffec;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    if (*(char *)((long)&(pGVar15->fields)._hasAnimatedResults + 1) != '\0') {
      uVar3 = (pGVar15->fields)._pointerSelectionLocked;
      uVar6 = (pGVar15->fields)._pointerLockPosition.fields.x;
      fVar16 = (float)uVar10 - (float)uVar3;
      fVar17 = (float)((ulong)uVar10 >> 0x20) - (float)uVar6;
      if (fVar17 * fVar17 + fVar16 * fVar16 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(pGVar15->fields)._hasAnimatedResults + 1) = 0;
    }
    return;
  }
  unaff_RBX = (MethodInfo *)0x0;
  if (0 < (pSVar14->fields)._size) {
    do {
      fVar16 = SUB84(unaff_RBX,0);
      unaff_R15 = (UnityEngine_Object_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar14,(int32_t)fVar16,MethodInfo_GisketchDropdownItemFeedback_get_Item
                            );
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar9 = UnityEngine_Object__op_Inequality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(__this->fields)._feedback;
        if ((__this_02 == (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) ||
           (pMVar13 = unaff_RBX,
           __this_00 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                       System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_02,(int32_t)fVar16,
                                  MethodInfo_GisketchDropdownItemFeedback_get_Item),
           __this_00 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0)) goto label_03b8fdc9;
        *(bool *)((long)&(__this_00->fields)._hovered + 2) =
             fVar16 == (__this->fields)._pointerLockPosition.fields.y;
        Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_00,pMVar13);
      }
      unaff_RBX = (MethodInfo *)(ulong)((int)fVar16 + 1U);
      pSVar14 = (__this->fields)._feedback;
      __this_02 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
      if (pSVar14 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0)
      goto label_03b8fdc9;
    } while ((int)((int)fVar16 + 1U) < (pSVar14->fields)._size);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$RevealSelectedResult
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b8fdd0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar8;
  bool_conflict bVar9;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *focused;
  undefined8 uVar10;
  int iVar11;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  MethodInfo *pMVar12;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *pGVar13;
  UnityEngine_Object_o *unaff_R14;
  undefined8 *unaff_R15;
  float fVar14;
  float fVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined4 uVar16;
  UnityEngine_Vector3_o UVar17;
  
  while( true ) {
    while( true ) {
      uVar16 = (undefined4)((ulong)in_XMM1_Qa >> 0x20);
      *(undefined8 **)((long)register0x00000020 + -8) = unaff_R15;
      *(UnityEngine_Object_o **)((long)register0x00000020 + -0x10) = unaff_R14;
      *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
      if (g_data_057a9eb7 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fded;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fdf9;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe05;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eb7 = '\x01';
      }
      fVar14 = (__this->fields)._pointerLockPosition.fields.y;
      pMVar12 = (MethodInfo *)(ulong)(uint)fVar14;
      if ((int)fVar14 < 0) {
        return;
      }
      __this_00 = (__this->fields)._feedback;
      pGVar13 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
        if ((__this_00->fields)._size <= (int)fVar14) {
          return;
        }
        unaff_R15 = &MethodInfo_GisketchDropdownItemFeedback_get_Item;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe30;
        unaff_R14 = (UnityEngine_Object_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,(int32_t)fVar14,
                               MethodInfo_GisketchDropdownItemFeedback_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe4b;
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar12 = (MethodInfo *)0x0;
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe57;
        bVar9 = UnityEngine_Object__op_Equality(unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          return;
        }
        pGVar13 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)(__this->fields)._feedback;
        if (pGVar13 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
          fVar14 = (__this->fields)._pointerLockPosition.fields.y;
          pMVar12 = (MethodInfo *)(ulong)(uint)fVar14;
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe75;
          __this_01 = (UnityEngine_Component_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pGVar13,(int32_t)fVar14,
                                 MethodInfo_GisketchDropdownItemFeedback_get_Item);
          if (__this_01 != (UnityEngine_Component_o *)0x0) {
            pMVar12 = (MethodInfo *)0x0;
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe84;
            focused = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,pMVar12);
            return;
          }
        }
      }
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x3b8fe9e;
      uVar10 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_RBP;
      *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)register0x00000020 + -0x28) = __this;
      *(undefined8 *)((long)register0x00000020 + -0x30) = uVar10;
      __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x3b8feaf;
      method_00 = pMVar12;
      UVar17 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      in_XMM1_Qa = CONCAT44(uVar16,UVar17.fields.z);
      uVar10 = UVar17.fields._0_8_;
      if (*(char *)((long)&(pGVar13->fields)._hasAnimatedResults + 1) != '\0') {
        uVar1 = (pGVar13->fields)._pointerSelectionLocked;
        uVar4 = (pGVar13->fields)._pointerLockPosition.fields.x;
        fVar14 = UVar17.fields.x - (float)uVar1;
        fVar15 = UVar17.fields.y - (float)uVar4;
        fVar15 = fVar15 * fVar15;
        fVar14 = fVar15 + fVar14 * fVar14;
        in_XMM1_Qa = CONCAT44(fVar15,fVar14);
        uVar10 = 0x40800000;
        if (fVar14 < 4.0) {
          return;
        }
        *(undefined1 *)((long)&(pGVar13->fields)._hasAnimatedResults + 1) = 0;
      }
      if (g_data_057a9eb5 == '\0') {
        __this = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
        *(undefined8 *)((long)register0x00000020 + -0x38) = 0x3b8fef1;
        il2cpp_runtime_helper_023445d0(uVar10,in_XMM1_Qa);
        g_data_057a9eb5 = '\x01';
      }
      pSVar8 = (pGVar13->fields)._results;
      if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
      iVar7 = (pSVar8->fields)._size;
      iVar11 = 8;
      if (iVar7 < 9) {
        iVar11 = iVar7;
      }
      if (iVar11 == 0) {
        return;
      }
      (pGVar13->fields)._pointerLockPosition.fields.y =
           (float)(((int)((long)((ulong)(uint)((int)pMVar12 >> 0x1f) << 0x20 | (ulong)pMVar12 & 0xffffffff) %
                         (long)iVar11) + iVar11) % iVar11);
      *(undefined8 *)((long)register0x00000020 + -0x38) = 0x3b8ff29;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(pGVar13,method_00);
      unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x28);
      unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x20);
      register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
      __this = pGVar13;
    }
    *(undefined8 *)((long)register0x00000020 + -0x38) = 0x3b8ff43;
    uVar10 = il2cpp_runtime_helper_022b2c90();
    *(ulong *)((long)register0x00000020 + -0x38) = (ulong)pMVar12 & 0xffffffff;
    *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)((long)register0x00000020 + -0x40) = pGVar13;
    *(undefined8 *)((long)register0x00000020 + -0x48) = uVar10;
    if (*(char *)((long)&(__this->fields)._hasAnimatedResults + 1) != '\0') {
      uVar2 = (__this->fields)._pointerSelectionLocked;
      uVar5 = (__this->fields)._pointerLockPosition.fields.x;
      fVar14 = (float)extraout_XMM0_Qa - (float)uVar2;
      fVar15 = (float)((ulong)extraout_XMM0_Qa >> 0x20) - (float)uVar5;
      fVar15 = fVar15 * fVar15;
      fVar14 = fVar15 + fVar14 * fVar14;
      in_XMM1_Qa = CONCAT44(fVar15,fVar14);
      if (fVar14 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 0;
    }
    pMVar12 = method_00;
    pGVar13 = __this;
    if (g_data_057a9eb5 == '\0') {
      pGVar13 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)&MethodInfo_Int32_get_Count;
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8ff9a;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9eb5 = '\x01';
    }
    pSVar8 = (__this->fields)._results;
    if (pSVar8 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) break;
    iVar7 = (pSVar8->fields)._size;
    iVar11 = 8;
    if (iVar7 < 9) {
      iVar11 = iVar7;
    }
    if (iVar11 == 0) {
      return;
    }
    (__this->fields)._pointerLockPosition.fields.y =
         (float)(((int)((long)((ulong)(uint)((int)method_00 >> 0x1f) << 0x20 | (ulong)method_00 & 0xffffffff)
                       % (long)iVar11) + iVar11) % iVar11);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8ffd2;
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this,pMVar12);
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x40);
    unaff_RBP = *(undefined8 *)((long)register0x00000020 + -0x38);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x30);
  }
  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b8ffec;
  uVar10 = il2cpp_runtime_helper_022b2c90();
  if (*(char *)((long)&(pGVar13->fields)._hasAnimatedResults + 1) != '\0') {
    uVar3 = (pGVar13->fields)._pointerSelectionLocked;
    uVar6 = (pGVar13->fields)._pointerLockPosition.fields.x;
    fVar14 = (float)uVar10 - (float)uVar3;
    fVar15 = (float)((ulong)uVar10 >> 0x20) - (float)uVar6;
    if (fVar15 * fVar15 + fVar14 * fVar14 < 4.0) {
      return;
    }
    *(undefined1 *)((long)&(pGVar13->fields)._hasAnimatedResults + 1) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Activate
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Activate (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* result, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b8f360

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Activate
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *result,Gisketch_Aottg2UI_GisketchUIRoot_o *root
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_04;
  MethodInfo *method_00;
  System_String_o *activeScreenId;
  int32_t index;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_05;
  int32_t iStack_3c;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_38;
  
  if (g_data_057a9eb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb8 = '\x01';
  }
  if (result != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    index = 0;
    pGVar4 = root;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((root->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          return;
        }
        pGVar4 = root;
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this,root,0,method);
        index = (int32_t)pGVar4;
        __this_00 = (root->fields)._Theme_k__BackingField;
        pGVar4 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                    ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate(result,root,method_00);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pGStack_38 = root;
      iStack_3c = index;
      if (g_data_057a9eb2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
        il2cpp_runtime_helper_023445d0(&"slideDown");
        il2cpp_runtime_helper_023445d0(&"percent");
        il2cpp_runtime_helper_023445d0(&"search-results");
        il2cpp_runtime_helper_023445d0(&"searchResultItem");
        il2cpp_runtime_helper_023445d0(&"Button");
        il2cpp_runtime_helper_023445d0(&"search-result-");
        g_data_057a9eb2 = '\x01';
      }
      __this_01 = *(System_Collections_Generic_List_object__o **)&(pGVar4->fields)._buildOnStart;
      __this_05 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        __this_02 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                    System_Collections_Generic_List_object___get_Item(__this_01,index,MethodInfo_GisketchSearchEntry_get_Item);
        __this_03 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        __this_05 = __this_03;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
        if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_03->fields).type = "Button";
          il2cpp_runtime_helper_022b4080(&__this_03->fields);
          pSVar2 = System_Int32__ToString((int32_t)&iStack_3c,(MethodInfo *)0x0);
          pSVar2 = System_String__Concat_3ae5ba0("search-result-",pSVar2,(MethodInfo *)0x0);
          __this_05 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_03->fields).id;
          (__this_03->fields).id = pSVar2;
          il2cpp_runtime_helper_022b4080();
          if (__this_02 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
            pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                               (__this_02,activeScreenId,(MethodInfo *)0x0);
            (__this_03->fields).text = pSVar2;
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).text,pSVar2);
            (__this_03->fields).icon = (__this_02->fields)._Icon_k__BackingField;
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).icon);
            *(undefined1 *)&(__this_03->fields).hasIcon = 1;
            (__this_03->fields).style = "searchResultItem";
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).style);
            pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
            __this_05 = pGVar3;
            Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar3,(MethodInfo *)0x0);
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar3->fields).type = "slideDown";
              il2cpp_runtime_helper_022b4080(&pGVar3->fields);
              (pGVar3->fields).id = "search-results";
              il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id);
              *(undefined4 *)&(pGVar3->fields).text = 0x3df5c28f;
              *(undefined4 *)&(pGVar3->fields).textKey = 0x3ccccccd;
              *(int32_t *)((long)&(pGVar3->fields).textKey + 4) = iStack_3c;
              (__this_03->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar3;
              il2cpp_runtime_helper_022b4080(&(__this_03->fields).motion);
              __this_04 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
              Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_04,(MethodInfo *)0x0);
              pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
              __this_05 = pGVar3;
              Gisketch_Aottg2UI_Data_GisketchLength___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar3,(MethodInfo *)0x0);
              if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined4 *)&(pGVar3->fields).type = 0x42c80000;
                __this_05 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar3->fields).id;
                (pGVar3->fields).id = "percent";
                il2cpp_runtime_helper_022b4080();
                if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                  (__this_04->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar3;
                  il2cpp_runtime_helper_022b4080(&(__this_04->fields).width,pGVar3);
                  (__this_03->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_04;
                  il2cpp_runtime_helper_022b4080(&(__this_03->fields).search);
                  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition)
                  ;
                  __this_05 = pGVar3;
                  Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor
                            ((Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3,(MethodInfo *)0x0);
                  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    *(undefined1 *)((long)&(pGVar3->fields).style + 1) = 1;
                    (__this_03->fields).popover = (System_String_o *)pGVar3;
                    il2cpp_runtime_helper_022b4080(&(__this_03->fields).popover,pGVar3);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$CloseResults
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, bool restoreFocus, const MethodInfo* method);
// 0x3b8e4d0

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,bool_conflict restoreFocus,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  System_Object_array *pSVar11;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  undefined8 uVar12;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  char cVar24;
  int32_t iVar25;
  bool_conflict bVar26;
  System_Collections_Generic_List_object__o *pSVar27;
  System_Collections_Generic_HashSet_object__o *__this_06;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *__this_07;
  System_Collections_Generic_HashSet_object__o *__this_08;
  Il2CppObject *pIVar28;
  Il2CppMethodPointer *ppIVar29;
  long *plVar30;
  undefined8 *puVar31;
  MethodInfo *pMVar32;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar33;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_09;
  void *pvVar34;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar35;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar36;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_10;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_11;
  Il2CppObject *pIVar37;
  UnityEngine_Transform_o *pUVar38;
  System_String_o *pSVar39;
  UnityEngine_Events_UnityAction_o *call;
  System_Func_bool__o *pSVar40;
  System_String_o *pSVar41;
  UnityEngine_GameObject_o *__this_12;
  void *extraout_RDX;
  MethodInfo *method_00;
  int iVar42;
  void **ppvVar43;
  long *plVar44;
  UnityEngine_GameObject_o **ppUVar45;
  UnityEngine_Object_o *pUVar46;
  MethodInfo *method_01;
  UnityEngine_Object_o *pUVar47;
  long lVar48;
  long lVar49;
  Il2CppClass *manifest;
  Il2CppClass *pIVar50;
  Il2CppObject *pIVar51;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **ppGVar52;
  int iVar53;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_13;
  float fVar54;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  UnityEngine_Color_o UVar60;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  undefined1 auVar61 [16];
  undefined1 auVar62 [12];
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  float fStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float fStack_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  Il2CppClass *pIStack_f0;
  UnityEngine_Object_o *pUStack_e8;
  System_String_o *pSStack_e0;
  System_String_o *pSStack_d8;
  System_String_o *pSStack_d0;
  System_String_o *pSStack_c8;
  long in_stack_ffffffffffffff40;
  System_String_o *pSVar63;
  System_String_o *query;
  Il2CppObject *pIVar64;
  _union_249689 _Var65;
  _union_249689 _Stack_70;
  Il2CppObject *pIStack_60;
  
  if (g_data_057a9eb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb9 = '\x01';
  }
  pUVar47 = (UnityEngine_Object_o *)(__this->fields)._popoverContent;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar26 = UnityEngine_Object__op_Equality(pUVar47,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar26 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar50 = (Il2CppClass *)root;
  bVar26 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar26 != '\0') {
    return;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    if ((root->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      return;
    }
    ppUVar45 = &(__this->fields)._popoverContent;
    *ppUVar45 = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar45);
    __this_00 = (root->fields)._Theme_k__BackingField;
    pIVar50 = (Il2CppClass *)0x0;
    if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,restoreFocus & 0xff,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9eba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eba = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  manifest = pIVar50;
  bVar26 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pIVar50,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar26 != '\0') {
label_03b8e641:
    pSVar27 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
    System_Collections_Generic_List_object____ctor(pSVar27,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    return;
  }
  if (pIVar50 != (Il2CppClass *)0x0) {
    pvVar34 = (pIVar50->_1).fields;
    if (pvVar34 == (void *)0x0) goto label_03b8e641;
    pGVar36 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)pvVar34 + 0x30);
    manifest = (pIVar50->_1).interopData;
    __this_10 = pGVar36;
    __this_09 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor
                          ((Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)manifest,
                           (System_String_o *)pGVar36,(MethodInfo *)0x0);
    pvVar34 = (pIVar50->_1).fields;
    method = (MethodInfo *)0x0;
    if (pvVar34 != (void *)0x0) {
      lVar48 = *(long *)((long)pvVar34 + 0x28);
      if (lVar48 == 0) {
        pIVar28 = (Il2CppObject *)0x0;
      }
      else {
        pIVar28 = *(Il2CppObject **)(lVar48 + 0x28);
      }
      if (g_data_057a9cbb == '\0') {
        pSStack_c8 = (System_String_o *)0x3b49262;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose,pIVar28,pGVar36,0);
        pSStack_c8 = (System_String_o *)0x3b4926e;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        pSStack_c8 = (System_String_o *)0x3b4927a;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
        pSStack_c8 = (System_String_o *)0x3b49286;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
        pSStack_c8 = (System_String_o *)0x3b49292;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        pSStack_c8 = (System_String_o *)0x3b4929e;
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
        pSStack_c8 = (System_String_o *)0x3b492aa;
        il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
        pSStack_c8 = (System_String_o *)0x3b492b6;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        pSStack_c8 = (System_String_o *)0x3b492c2;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
        pSStack_c8 = (System_String_o *)0x3b492ce;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
        pSStack_c8 = (System_String_o *)0x3b492da;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        pSStack_c8 = (System_String_o *)0x3b492e6;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        pSStack_c8 = (System_String_o *)0x3b492f2;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
        pSStack_c8 = (System_String_o *)0x3b492fe;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
        pSStack_c8 = (System_String_o *)0x3b4930a;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
        pSStack_c8 = (System_String_o *)0x3b49316;
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9cbb = '\x01';
      }
      pSStack_c8 = (System_String_o *)0x3b4933e;
      pSVar27 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
      pSStack_c8 = (System_String_o *)0x3b49353;
      System_Collections_Generic_List_object____ctor(pSVar27,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
      if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
        pSStack_c8 = (System_String_o *)0x3b494ea;
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9c88 == '\0') {
        pSStack_c8 = (System_String_o *)0x3b49503;
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar53 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar53 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar53 == 0) {
        pSStack_c8 = (System_String_o *)0x3b4951f;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar32 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      pSStack_c8 = (System_String_o *)0x3b493a1;
      __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
      pSStack_c8 = (System_String_o *)0x3b493bb;
      System_Collections_Generic_HashSet_object____ctor_33e0600
                (__this_06,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar32,MethodInfo_HashSet_1_System_String);
      pSStack_c8 = (System_String_o *)0x3b493c5;
      screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                               ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)__this_09,
                                pMVar32);
      pSStack_c8 = (System_String_o *)0x3b493d3;
      __this_07 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
      pSStack_c8 = (System_String_o *)0x3b493e8;
      System_Collections_Generic_List_object____ctor(__this_07,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
      if (g_data_057a9c88 == '\0') {
        pSStack_c8 = (System_String_o *)0x3b49533;
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar53 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar53 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar53 == 0) {
        pSStack_c8 = (System_String_o *)0x3b49554;
        il2cpp_runtime_helper_02337ed0();
      }
      plVar44 = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      pSStack_c8 = (System_String_o *)0x3b4942b;
      __this_08 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
      pSStack_c8 = (System_String_o *)0x3b4943d;
      System_Collections_Generic_HashSet_object____ctor_33e0600
                (__this_08,(System_Collections_Generic_IEqualityComparer_T__o *)plVar44,MethodInfo_HashSet_1_System_String);
      if (pIVar28 == (Il2CppObject *)0x0) {
        if (g_data_057a9cc0 == '\0') {
          pSStack_c8 = (System_String_o *)0x3b49457;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
          g_data_057a9cc0 = '\x01';
        }
        pSStack_c8 = (System_String_o *)0x3b4946d;
        pIVar28 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
        pSStack_c8 = (System_String_o *)0x3b4947a;
        System_Object___ctor(pIVar28,(MethodInfo *)0x0);
        *(undefined4 *)&pIVar28[1].klass = 0xfffffffe;
        pSStack_c8 = (System_String_o *)0x3b49489;
        iVar25 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&pIVar28[2].klass = iVar25;
        if (pIVar28 == (Il2CppObject *)0x0) goto label_03b49dcf;
      }
      pIVar50 = pIVar28->klass;
      uVar3._0_1_ = (pIVar50->_2).rank;
      uVar3._1_1_ = (pIVar50->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar10 = (pIVar50->_1).interfaceOffsets;
        lVar48 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar48) == TypeInfo_IEnumerable_GisketchSearchEntry) {
            ppIVar29 = &pIVar50->vtable[*(int *)((long)&pIVar10->offset + lVar48)].methodPtr;
            goto label_03b4956f;
          }
          lVar48 = lVar48 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar48);
      }
      pSStack_c8 = (System_String_o *)0x3b494dd;
      ppIVar29 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pIVar28,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
      pSStack_c8 = (System_String_o *)0x3b4957d;
      plVar30 = (long *)(**ppIVar29)(pIVar28,(MethodInfo *)ppIVar29[1]);
      if (plVar30 == (long *)0x0) goto label_03b49dd4;
      plVar44 = &TypeInfo_IEnumerator;
      in_stack_ffffffffffffff40 = 0;
      do {
        lVar48 = *plVar30;
        if ((ulong)*(ushort *)(lVar48 + 0x12e) != 0) {
          lVar49 = 0;
          do {
            if (*(long *)(*(long *)(lVar48 + 0xb0) + lVar49) == TypeInfo_IEnumerator) {
              puVar31 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar48 + 0xb0) + 8 + lVar49) * 0x10 + lVar48 + 0x138);
              goto label_03b495f3;
            }
            lVar49 = lVar49 + 0x10;
          } while ((ulong)*(ushort *)(lVar48 + 0x12e) << 4 != lVar49);
        }
        pSStack_c8 = (System_String_o *)0x3b495d9;
        puVar31 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar30,TypeInfo_IEnumerator,0);
label_03b495f3:
        pSStack_c8 = (System_String_o *)0x3b495fc;
        cVar24 = (*(code *)*puVar31)();
        if (cVar24 == '\0') {
          plVar44 = (long *)&g_data_00000005;
          if (plVar30 == (long *)0x0) goto label_03b497a6;
          lVar48 = *plVar30;
          if ((ulong)*(ushort *)(lVar48 + 0x12e) == 0) goto label_03b4977f;
          lVar49 = 0;
          goto label_03b49770;
        }
        lVar48 = *plVar30;
        if ((ulong)*(ushort *)(lVar48 + 0x12e) != 0) {
          lVar49 = 0;
          do {
            if (*(long *)(*(long *)(lVar48 + 0xb0) + lVar49) == TypeInfo_IEnumerator_GisketchSearchEntry) {
              pMVar32 = (MethodInfo *)
                        ((long)*(int *)(*(long *)(lVar48 + 0xb0) + 8 + lVar49) * 0x10 + lVar48 + 0x138);
              goto label_03b49663;
            }
            lVar49 = lVar49 + 0x10;
          } while ((ulong)*(ushort *)(lVar48 + 0x12e) << 4 != lVar49);
        }
        pSStack_c8 = (System_String_o *)0x3b49649;
        pMVar32 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar30,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
        method_01 = (MethodInfo *)pMVar32->virtualMethodPointer;
        pSStack_c8 = (System_String_o *)0x3b4966c;
        pGVar33 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar32->methodPointer)();
        if (pGVar33 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
          pSStack_c8 = (System_String_o *)0x3b49680;
          bVar26 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar33,method_01);
          if ((char)bVar26 != '\0') {
            pSStack_c8 = (System_String_o *)0x3b49698;
            bVar26 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                               (pGVar33,(System_String_o *)pGVar36,screenTitles,pMVar32);
            lVar48 = MethodInfo_Void_Add;
            if ((char)bVar26 == '\0') {
              if (__this_07 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
              piVar1 = &(__this_07->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar11 = (__this_07->fields)._items;
              if (pSVar11 == (System_Object_array *)0x0) goto label_03b49dc0;
              uVar9 = (__this_07->fields)._size;
              if (uVar9 < (uint)pSVar11->max_length) {
                (__this_07->fields)._size = uVar9 + 1;
                pSVar11->m_Items[(int)uVar9] = (Il2CppObject *)pGVar33;
                pSStack_c8 = (System_String_o *)0x3b496ed;
                il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar9);
              }
              else {
                pSStack_c8 = (System_String_o *)0x3b49706;
                System_Collections_Generic_List_object___AddWithResize
                          (__this_07,(Il2CppObject *)pGVar33,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar48 + 0x20) + 0xc0) + 0x70));
              }
              pSStack_c8 = (System_String_o *)0x3b49711;
              bVar26 = System_String__IsNullOrEmpty
                                 ((pGVar33->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
              if ((char)bVar26 == '\0') {
                if (__this_08 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  do {
                    pSStack_c8 = (System_String_o *)0x3b49dca;
                    il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                    pSStack_c8 = (System_String_o *)0x3b49dcf;
                    il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                    do {
                      pSStack_c8 = (System_String_o *)0x3b49dd4;
                      il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                      pSStack_c8 = (System_String_o *)0x3b49dd9;
                      il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                      pSStack_c8 = (System_String_o *)0x3b49dde;
                      il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                      pSStack_c8 = (System_String_o *)0x3b49de3;
                      il2cpp_runtime_helper_022b2c90();
                      do {
                        pSStack_c8 = (System_String_o *)0x3b49deb;
                        auVar62 = il2cpp_runtime_helper_022fefe0();
                        iVar53 = 0;
                        if (auVar62._8_4_ != 1) {
                          lVar49 = auVar62._0_8_;
                          lVar48 = 0;
                          goto joined_r0x03b4a097;
                        }
                        pSStack_c8 = (System_String_o *)0x3b4a085;
                        plVar30 = (long *)__cxa_begin_catch();
                        lVar48 = *plVar30;
                        pSStack_c8 = (System_String_o *)0x3b4a08d;
                        __cxa_end_catch();
label_03b49ac8:
                        if ((Il2CppObject *)plVar44 != (Il2CppObject *)0x0) {
                          pIVar50 = ((Il2CppObject *)plVar44)->klass;
                          uVar7._0_1_ = (pIVar50->_2).rank;
                          uVar7._1_1_ = (pIVar50->_2).minimumAlignment;
                          if ((ulong)uVar7 != 0) {
                            pIVar10 = (pIVar50->_1).interfaceOffsets;
                            lVar49 = 0;
                            do {
                              if (*(long *)((long)&pIVar10->interfaceType + lVar49) == TypeInfo_IDisposable) {
                                ppIVar29 = &pIVar50->vtable[*(int *)((long)&pIVar10->offset + lVar49)].
                                            methodPtr;
                                goto label_03b49b2d;
                              }
                              lVar49 = lVar49 + 0x10;
                            } while ((ulong)uVar7 << 4 != lVar49);
                          }
                          pSStack_c8 = (System_String_o *)0x3b49b19;
                          ppIVar29 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar44,TypeInfo_IDisposable,0);
label_03b49b2d:
                          pSStack_c8 = (System_String_o *)0x3b49b36;
                          (**ppIVar29)(plVar44,(MethodInfo *)ppIVar29[1]);
                        }
                      } while (lVar48 != 0);
                      if ((iVar53 != 10) && (iVar53 != 0)) {
                        return;
                      }
                    } while (__this_07 == (System_Collections_Generic_List_object__o *)0x0);
                    pSStack_c8 = (System_String_o *)0x3b49b70;
                    System_Collections_Generic_List_object___GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)&_Stack_70,__this_07,
                               MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                    plVar44 = (long *)pIStack_60;
                    _Var65 = _Stack_70;
                    if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                      while( true ) {
                        pSStack_c8 = (System_String_o *)0x3b49ca5;
                        __this_03.fields._8_8_ = __this_06;
                        __this_03.fields._list =
                             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff40;
                        __this_03.fields._current = _Var65.genericMethod;
                        bVar26 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                           (__this_03,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50);
                        if ((char)bVar26 == '\0') goto label_03b49d72;
                        if (pIStack_60 == (Il2CppObject *)0x0) goto label_03b49da2;
                        pSStack_c8 = (System_String_o *)0x3b49cc6;
                        bVar26 = System_String__IsNullOrEmpty(pIStack_60[4].monitor,(MethodInfo *)0x0);
                        lVar48 = MethodInfo_Void_Add;
                        if ((char)bVar26 == '\0') goto label_03b49db6;
                        if (pSVar27 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49d6d;
                        piVar1 = &(pSVar27->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar11 = (pSVar27->fields)._items;
                        if (pSVar11 == (System_Object_array *)0x0) break;
                        uVar9 = (pSVar27->fields)._size;
                        if (uVar9 < (uint)pSVar11->max_length) {
                          (pSVar27->fields)._size = uVar9 + 1;
                          pSVar11->m_Items[(int)uVar9] = pIStack_60;
                          pSStack_c8 = (System_String_o *)0x3b49d10;
                          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar9,pIStack_60);
                        }
                        else {
                          pSStack_c8 = (System_String_o *)0x3b49c9a;
                          System_Collections_Generic_List_object___AddWithResize
                                    (pSVar27,pIStack_60,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar48 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                    }
                    else {
                      if (pSVar27 == (System_Collections_Generic_List_object__o *)0x0) {
                        while( true ) {
                          pSStack_c8 = (System_String_o *)0x3b49d3b;
                          __this_04.fields._8_8_ = __this_06;
                          __this_04.fields._list =
                               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff40;
                          __this_04.fields._current = _Var65.genericMethod;
                          bVar26 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (__this_04,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50);
                          if ((char)bVar26 == '\0') goto label_03b49d72;
                          if (pIStack_60 == (Il2CppObject *)0x0) break;
                          pSStack_c8 = (System_String_o *)0x3b49d54;
                          bVar26 = System_String__IsNullOrEmpty(pIStack_60[4].monitor,(MethodInfo *)0x0);
                          if ((char)bVar26 != '\0') goto label_03b49d6d;
                          pSStack_c8 = (System_String_o *)0x3b49d69;
                          bVar26 = System_Collections_Generic_HashSet_object___Contains
                                             (__this_06,pIStack_60[4].monitor,MethodInfo_Boolean_Contains);
                          if ((char)bVar26 == '\0') goto label_03b49d6d;
                        }
                      }
                      else {
label_03b49bda:
                        pSStack_c8 = (System_String_o *)0x3b49be5;
                        __this_02.fields._8_8_ = __this_06;
                        __this_02.fields._list =
                             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff40;
                        __this_02.fields._current = _Var65.genericMethod;
                        bVar26 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                           (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff50);
                        if ((char)bVar26 == '\0') goto label_03b49d72;
                        if (pIStack_60 != (Il2CppObject *)0x0) {
                          pSStack_c8 = (System_String_o *)0x3b49c06;
                          bVar26 = System_String__IsNullOrEmpty(pIStack_60[4].monitor,(MethodInfo *)0x0);
                          if ((char)bVar26 == '\0') goto code_r0x03b49c0a;
                          goto label_03b49c20;
                        }
                      }
label_03b49da2:
                      pSStack_c8 = (System_String_o *)0x3b49da7;
                      il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                      pSStack_c8 = (System_String_o *)0x3b49dac;
                      il2cpp_runtime_helper_022b2c90();
                    }
label_03b49dac:
                    pSStack_c8 = (System_String_o *)0x3b49db1;
                    il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                    pSStack_c8 = (System_String_o *)0x3b49db6;
                    il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                    pSStack_c8 = (System_String_o *)0x3b49dbb;
                    il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                    pSStack_c8 = (System_String_o *)0x3b49dc0;
                    il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                    pSStack_c8 = (System_String_o *)0x3b49dc5;
                    il2cpp_runtime_helper_022b2c90();
                  } while( true );
                }
                pSStack_c8 = (System_String_o *)0x3b4973a;
                System_Collections_Generic_HashSet_object___Add
                          (__this_08,(Il2CppObject *)(pGVar33->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add)
                ;
              }
            }
          }
        }
      } while( true );
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar50 = manifest;
  if (g_data_057a9eb5 == '\0') {
    pIVar50 = (Il2CppClass *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eb5 = '\x01';
  }
  if ((manifest->_1).this_arg.data != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  _Stack_70.genericMethod = &TypeInfo_Object;
  if (g_data_057a9eb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"search-palette-results");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"popover");
    g_data_057a9eb1 = '\x01';
    if (g_data_057a9eb5 == '\0') goto label_03b8e77e;
label_03b8e6f7:
    pvVar34 = (pIVar50->_1).this_arg.data;
    if (pvVar34 == (void *)0x0) goto label_03b8e91f;
label_03b8e79f:
    iVar53 = *(int *)((long)pvVar34 + 0x18);
    iVar42 = 8;
    if (iVar53 < 9) {
      iVar42 = iVar53;
    }
    pGVar35 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    if (iVar53 < 1) {
label_03b8e816:
      __this_10 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_10,(MethodInfo *)0x0);
      if (__this_10 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_10->fields).type = "Panel";
        il2cpp_runtime_helper_022b4080(&__this_10->fields);
        (__this_10->fields).id = "search-palette-results";
        il2cpp_runtime_helper_022b4080(&(__this_10->fields).id);
        (__this_10->fields).style = "popover";
        il2cpp_runtime_helper_022b4080(&(__this_10->fields).style);
        __this_11 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_11,(MethodInfo *)0x0);
        if (__this_11 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (__this_11->fields).direction = "Column";
          il2cpp_runtime_helper_022b4080(&__this_11->fields);
          (__this_11->fields).alignItems = "Stretch";
          il2cpp_runtime_helper_022b4080(&(__this_11->fields).alignItems);
          (__this_11->fields).gap = 0.0;
          (__this_10->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_11;
          il2cpp_runtime_helper_022b4080(&(__this_10->fields).search,__this_11);
          (__this_10->fields).deferredChildren = pGVar35;
          il2cpp_runtime_helper_022b4080(&(__this_10->fields).deferredChildren,pGVar35);
          return;
        }
      }
      goto label_03b8e91f;
    }
    if (pGVar35 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      ppGVar52 = pGVar35->m_Items;
      pMVar32 = (MethodInfo *)0x0;
      do {
        pGVar36 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
                            ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pIVar50,(int32_t)pMVar32
                             ,(System_String_o *)__this_10,method);
        method = (MethodInfo *)(ulong)(uint)pGVar35->max_length;
        if (method <= pMVar32) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b8e91f;
        }
        *ppGVar52 = pGVar36;
        il2cpp_runtime_helper_022b4080(ppGVar52);
        pMVar32 = (MethodInfo *)((long)&pMVar32->methodPointer + 1);
        ppGVar52 = ppGVar52 + 1;
      } while ((long)pMVar32 < (long)iVar42);
      goto label_03b8e816;
    }
  }
  else {
    if (g_data_057a9eb5 != '\0') goto label_03b8e6f7;
label_03b8e77e:
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9eb5 = '\x01';
    pvVar34 = (pIVar50->_1).this_arg.data;
    if (pvVar34 != (void *)0x0) goto label_03b8e79f;
label_03b8e91f:
    il2cpp_runtime_helper_022b2c90();
  }
  pUVar47 = (UnityEngine_Object_o *)0x0;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
            ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)pIVar50,0,(System_String_o *)__this_10,
             method);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9eb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_WireResults_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_WireResults_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"search-result-");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"negativeText");
    g_data_057a9eb3 = '\x01';
  }
  fStack_13c = 0.0;
  pIVar28 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(pIVar28,(MethodInfo *)0x0);
  fVar54 = fStack_118;
  fVar55 = fStack_114;
  uVar57 = uStack_110;
  uVar59 = uStack_10c;
  fVar14 = fStack_108;
  fVar15 = fStack_104;
  uVar16 = uStack_100;
  uVar17 = uStack_fc;
  if (pIVar28 == (Il2CppObject *)0x0) goto label_03b8f282;
  pIVar28[1].klass = pIVar50;
  il2cpp_runtime_helper_022b4080(pIVar28 + 1,pIVar50);
  ppvVar43 = &pIVar28[1].monitor;
  pIVar28[1].monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(ppvVar43);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar26 = UnityEngine_Object__op_Equality(pUVar47,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar26 != '\0') {
    return;
  }
  lVar48 = *(long *)&(pIVar50->_1).this_arg.bits;
  fVar54 = fStack_118;
  fVar55 = fStack_114;
  uVar57 = uStack_110;
  uVar59 = uStack_10c;
  fVar14 = fStack_108;
  fVar15 = fStack_104;
  uVar16 = uStack_100;
  uVar17 = uStack_fc;
  if (lVar48 == 0) goto label_03b8f282;
  *(int *)(lVar48 + 0x1c) = *(int *)(lVar48 + 0x1c) + 1;
  iVar53 = *(int *)(lVar48 + 0x18);
  *(undefined4 *)(lVar48 + 0x18) = 0;
  if (0 < iVar53) {
    System_Array__Clear(*(System_Array_o **)(lVar48 + 0x10),0,iVar53,(MethodInfo *)0x0);
  }
  pUVar46 = (pIVar50->_1).byval_arg.data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar26 = UnityEngine_Object__op_Inequality(pUVar46,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar39 = "text";
  if ((char)bVar26 == '\0') {
    puVar31 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pvVar34 = (pIVar50->_1).byval_arg.data;
    fVar54 = fStack_118;
    fVar55 = fStack_114;
    uVar57 = uStack_110;
    uVar59 = uStack_10c;
    fVar14 = fStack_108;
    fVar15 = fStack_104;
    uVar16 = uStack_100;
    uVar17 = uStack_fc;
    if (pvVar34 == (void *)0x0) goto label_03b8f282;
    puVar31 = (undefined8 *)((long)pvVar34 + 0x220);
  }
  pSVar63 = (System_String_o *)*puVar31;
  pUVar46 = *ppvVar43;
  if (g_data_057a9eb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar26 = UnityEngine_Object__op_Inequality(pUVar46,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar54 = fStack_118;
  fVar55 = fStack_114;
  uVar57 = uStack_110;
  uVar59 = uStack_10c;
  fVar14 = fStack_108;
  fVar15 = fStack_104;
  uVar16 = uStack_100;
  uVar17 = uStack_fc;
  if ((char)bVar26 == '\0') {
label_03b8ebd1:
    pUVar46 = *ppvVar43;
    fVar18 = 1.0;
    fVar19 = 1.0;
    fVar20 = 1.0;
    fVar21 = 1.0;
    uVar22 = 0;
    uVar56 = 0;
    uVar23 = 0;
    uVar58 = 0;
    pSVar39 = "negativeText";
  }
  else {
    if (pUVar46 == (UnityEngine_Object_o *)0x0) goto label_03b8f282;
    if (pUVar46[5].klass == (UnityEngine_Object_c *)0x0) goto label_03b8ebd1;
    uVar56 = g_data_00d19fc0._8_4_;
    uVar58 = g_data_00d19fc0._12_4_;
    uVar12 = g_data_00d19fc0;
    UVar60.fields.b = (float)(int)uVar12;
    UVar60.fields.a = (float)(int)((ulong)uVar12 >> 0x20);
    UVar60.fields.r = (float)(int)uVar12;
    UVar60.fields.g = (float)(int)((ulong)uVar12 >> 0x20);
    UVar60 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar46[5].klass,pSVar39,UVar60,
                        (MethodInfo *)0x0);
    pUVar46 = *ppvVar43;
    fVar18 = UVar60.fields.r;
    fVar19 = UVar60.fields.b;
    fVar20 = UVar60.fields.g;
    fVar21 = UVar60.fields.a;
    uVar22 = extraout_XMM0_Dc;
    uVar23 = extraout_XMM0_Dd;
    pSVar39 = "negativeText";
    fVar54 = fStack_118;
    fVar55 = fStack_114;
    uVar57 = uStack_110;
    uVar59 = uStack_10c;
    fVar14 = fStack_108;
    fVar15 = fStack_104;
    uVar16 = uStack_100;
    uVar17 = uStack_fc;
  }
  uStack_10c = uVar58;
  uStack_fc = uVar23;
  uStack_110 = uVar56;
  uStack_100 = uVar22;
  fStack_114 = fVar21;
  fStack_104 = fVar20;
  fStack_118 = fVar19;
  fStack_108 = fVar18;
  "negativeText" = pSVar39;
  if (pUVar46 != (UnityEngine_Object_o *)0x0) {
    fStack_138 = fStack_108;
    fStack_134 = fStack_104;
    uStack_130 = uStack_100;
    uStack_12c = uStack_fc;
    if ((pUVar46[5].klass == (UnityEngine_Object_c *)0x0) ||
       (fVar54 = fStack_118, fVar55 = fStack_114, uStack_120 = uStack_110, uStack_11c = uStack_10c,
       ((pUVar46[5].klass)->_1).byval_arg.field_0xc == '\0')) {
      if (g_data_057a9eb4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eb4 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar26 = UnityEngine_Object__op_Inequality(pUVar46,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fStack_108 = 1.0;
      fStack_104 = 1.0;
      uStack_100 = 0;
      uStack_fc = 0;
      fVar54 = fStack_108;
      fVar55 = fStack_104;
      uStack_120 = uStack_100;
      uStack_11c = uStack_fc;
      if (((char)bVar26 != '\0') && (pUVar46[5].klass != (UnityEngine_Object_c *)0x0)) {
        uVar57 = g_data_00d19fc0._8_4_;
        uVar59 = g_data_00d19fc0._12_4_;
        uVar12 = g_data_00d19fc0;
        fallback.fields.b = (float)(int)uVar12;
        fallback.fields.a = (float)(int)((ulong)uVar12 >> 0x20);
        fallback.fields.r = (float)(int)uVar12;
        fallback.fields.g = (float)(int)((ulong)uVar12 >> 0x20);
        UVar60 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar46[5].klass,pSVar39,fallback,
                            (MethodInfo *)0x0);
        fStack_108 = UVar60.fields.r;
        fStack_104 = UVar60.fields.g;
        uStack_100 = extraout_XMM0_Dc_00;
        uStack_fc = extraout_XMM0_Dd_00;
        fVar54 = UVar60.fields.b;
        fVar55 = UVar60.fields.a;
        uStack_120 = uVar57;
        uStack_11c = uVar59;
      }
    }
    uStack_128 = (UnityEngine_Transform_o *)CONCAT44(fVar55,fVar54);
    color.fields.g = fStack_134;
    color.fields.r = fStack_138;
    color.fields.a = fStack_114;
    color.fields.b = fStack_118;
    pSStack_c8 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    fVar55 = fStack_114 * 0.75;
    fVar54 = 1.0;
    if (fVar55 <= 1.0) {
      fVar54 = fVar55;
    }
    color_00.fields.g = fStack_134;
    color_00.fields.r = fStack_138;
    color_00.fields.a = (float)(-(uint)(0.0 <= fVar55) & (uint)fVar54);
    color_00.fields.b = fStack_118;
    pSStack_d0 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    color_01.fields.g = fStack_104;
    color_01.fields.r = fStack_108;
    color_01.fields._8_8_ = uStack_128;
    pSStack_d8 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
    fVar55 = uStack_128._4_4_ * 0.75;
    fVar54 = 1.0;
    if (fVar55 <= 1.0) {
      fVar54 = fVar55;
    }
    color_02.fields.g = fStack_104;
    color_02.fields.r = fStack_108;
    color_02.fields.a = (float)(-(uint)(0.0 <= fVar55) & (uint)fVar54);
    color_02.fields.b = (float)(undefined4)uStack_128;
    pSStack_e0 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
    if (g_data_057a9eb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057a9eb5 = '\x01';
    }
    pvVar34 = (pIVar50->_1).this_arg.data;
    fVar54 = fStack_118;
    fVar55 = fStack_114;
    uVar57 = uStack_110;
    uVar59 = uStack_10c;
    fVar14 = fStack_108;
    fVar15 = fStack_104;
    uVar16 = uStack_100;
    uVar17 = uStack_fc;
    if (pvVar34 != (void *)0x0) {
      fVar54 = *(float *)((long)pvVar34 + 0x18);
      fStack_118 = 1.12104e-44;
      if ((int)fVar54 < 9) {
        fStack_118 = fVar54;
      }
      fStack_13c = 0.0;
      if ((int)fVar54 < 1) {
        return;
      }
      uStack_100 = (undefined4)uStack_128;
      uStack_fc = uStack_128._4_4_;
      pIStack_f0 = pIVar50;
      pUStack_e8 = pUVar47;
      pIVar64 = pIVar28;
      while( true ) {
        pIVar37 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_1);
        System_Object___ctor(pIVar37,(MethodInfo *)0x0);
        fVar54 = fStack_118;
        fVar55 = fStack_114;
        uVar57 = uStack_110;
        uVar59 = uStack_10c;
        fVar14 = fStack_108;
        fVar15 = fStack_104;
        uVar16 = uStack_100;
        uVar17 = uStack_fc;
        if (pIVar37 == (Il2CppObject *)0x0) break;
        ppvVar43 = &pIVar37[1].monitor;
        pIVar37[1].monitor = pIVar28;
        il2cpp_runtime_helper_022b4080(ppvVar43,pIVar28);
        pSVar27 = (pIVar50->_1).this_arg.data;
        fVar54 = fStack_118;
        fVar55 = fStack_114;
        uVar57 = uStack_110;
        uVar59 = uStack_10c;
        fVar14 = fStack_108;
        fVar15 = fStack_104;
        uVar16 = uStack_100;
        uVar17 = uStack_fc;
        if (pSVar27 == (System_Collections_Generic_List_object__o *)0x0) break;
        fStack_138 = fStack_13c;
        pIVar50 = (Il2CppClass *)
                  System_Collections_Generic_List_object___get_Item(pSVar27,(int32_t)fStack_13c,MethodInfo_GisketchSearchEntry_get_Item);
        pIVar51 = pIVar37 + 1;
        pIVar37[1].klass = pIVar50;
        il2cpp_runtime_helper_022b4080(pIVar51);
        fVar54 = fStack_118;
        fVar55 = fStack_114;
        uVar57 = uStack_110;
        uVar59 = uStack_10c;
        fVar14 = fStack_108;
        fVar15 = fStack_104;
        uVar16 = uStack_100;
        uVar17 = uStack_fc;
        if (pUVar47 == (UnityEngine_Object_o *)0x0) break;
        pUVar38 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar47,(MethodInfo *)0x0)
        ;
        pSVar39 = System_Int32__ToString((int32_t)&fStack_13c,(MethodInfo *)0x0);
        pSVar39 = System_String__Concat_3ae5ba0("search-result-",pSVar39,(MethodInfo *)0x0);
        pUVar38 = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(pUVar38,pSVar39,method_00);
        pIVar28 = pIVar64;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pIVar28 = pIVar64;
        }
        uStack_128 = pUVar38;
        bVar26 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pUVar46 = (UnityEngine_Object_o *)0x0;
        if ((char)bVar26 != '\0') {
          fVar54 = fStack_118;
          fVar55 = fStack_114;
          uVar57 = uStack_110;
          uVar59 = uStack_10c;
          fVar14 = fStack_108;
          fVar15 = fStack_104;
          uVar16 = uStack_100;
          uVar17 = uStack_fc;
          if (uStack_128 == (UnityEngine_Transform_o *)0x0) break;
          pUVar46 = (UnityEngine_Object_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)uStack_128,MethodInfo_Button_GetComponent_Button);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar26 = UnityEngine_Object__op_Inequality(pUVar46,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar26 != '\0') {
          fVar54 = fStack_118;
          fVar55 = fStack_114;
          uVar57 = uStack_110;
          uVar59 = uStack_10c;
          fVar14 = fStack_108;
          fVar15 = fStack_104;
          uVar16 = uStack_100;
          uVar17 = uStack_fc;
          if (pUVar46 == (UnityEngine_Object_o *)0x0) break;
          __this_01 = (UnityEngine_Events_UnityEvent_o *)pUVar46[10].fields.m_CachedPtr;
          call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          fVar54 = fStack_118;
          fVar55 = fStack_114;
          uVar57 = uStack_110;
          uVar59 = uStack_10c;
          fVar14 = fStack_108;
          fVar15 = fStack_104;
          uVar16 = uStack_100;
          uVar17 = uStack_fc;
          if (__this_01 == (UnityEngine_Events_UnityEvent_o *)0x0) break;
          UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar38 = uStack_128;
        bVar26 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)uStack_128,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_13 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
        if ((char)bVar26 != '\0') {
          fVar54 = fStack_118;
          fVar55 = fStack_114;
          uVar57 = uStack_110;
          uVar59 = uStack_10c;
          fVar14 = fStack_108;
          fVar15 = fStack_104;
          uVar16 = uStack_100;
          uVar17 = uStack_fc;
          if (pUVar38 == (UnityEngine_Transform_o *)0x0) break;
          __this_13 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar38,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar26 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this_13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar26 != '\0') {
          fVar54 = fStack_118;
          fVar55 = fStack_114;
          uVar57 = uStack_110;
          uVar59 = uStack_10c;
          fVar14 = fStack_108;
          fVar15 = fStack_104;
          uVar16 = uStack_100;
          uVar17 = uStack_fc;
          if ((((*ppvVar43 == (void *)0x0) || (lVar48 = *(long *)((long)*ppvVar43 + 0x18), lVar48 == 0)) ||
              (lVar48 = *(long *)(lVar48 + 0x80), lVar48 == 0)) || (pIVar51->klass == (Il2CppClass *)0x0))
          break;
          pMVar32 = *(MethodInfo **)(lVar48 + 0x30);
          pSVar39 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar51->klass,
                               (System_String_o *)pMVar32,(MethodInfo *)0x0);
          fVar54 = fStack_118;
          fVar55 = fStack_114;
          uVar57 = uStack_110;
          uVar59 = uStack_10c;
          fVar14 = fStack_108;
          fVar15 = fStack_104;
          uVar16 = uStack_100;
          uVar17 = uStack_fc;
          if (__this_13 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
          *(ulong *)&(__this_13->fields)._hoverBg.fields.a = CONCAT44(fStack_104,fStack_108);
          (__this_13->fields)._hoverText.fields.g = (float)uStack_100;
          (__this_13->fields)._hoverText.fields.b = (float)uStack_fc;
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_13,pMVar32);
          pvVar34 = *ppvVar43;
          fVar54 = fStack_118;
          fVar55 = fStack_114;
          uVar57 = uStack_110;
          uVar59 = uStack_10c;
          fVar14 = fStack_108;
          fVar15 = fStack_104;
          uVar16 = uStack_100;
          uVar17 = uStack_fc;
          if (pvVar34 == (void *)0x0) break;
          pSVar40 = *(System_Func_bool__o **)((long)pvVar34 + 0x20);
          query = pSVar63;
          if (pSVar40 == (System_Func_bool__o *)0x0) {
            pSVar40 = (System_Func_bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_bool);
            System_Func_bool____ctor();
            *(System_Func_bool__o **)((long)pvVar34 + 0x20) = pSVar40;
            il2cpp_runtime_helper_022b4080((long)pvVar34 + 0x20,pSVar40);
            query = pSVar63;
          }
          (__this_13->fields)._pointerHoverAllowed = pSVar40;
          il2cpp_runtime_helper_022b4080(&(__this_13->fields)._pointerHoverAllowed,pSVar40);
          pSVar63 = query;
          pSVar41 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar51->klass,query,0,
                               pSStack_c8,pSVar39,pSStack_d0,(MethodInfo *)0x0);
          pMVar32 = (MethodInfo *)
                    Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar51->klass,query,1,
                               pSStack_d8,pSVar39,pSStack_e0,(MethodInfo *)0x0);
          if (pSVar41 == (System_String_o *)0x0) {
            pSVar41 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          ppSVar2 = &(__this_13->fields)._normalLabelText;
          (__this_13->fields)._normalLabelText = pSVar41;
          il2cpp_runtime_helper_022b4080(ppSVar2,pSVar41);
          pUVar47 = pUStack_e8;
          pIVar50 = pIStack_f0;
          if (pMVar32 == (MethodInfo *)0x0) {
            pMVar32 = (MethodInfo *)*ppSVar2;
          }
          (__this_13->fields)._activeLabelText = (System_String_o *)pMVar32;
          il2cpp_runtime_helper_022b4080(&(__this_13->fields)._activeLabelText);
          *(undefined1 *)&(__this_13->fields)._normalLabelOwnsColor = 1;
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_13,pMVar32);
          *(bool *)((long)&(__this_13->fields)._hovered + 2) =
               fStack_138 == *(float *)((long)&(pIVar50->_1).declaringType + 4);
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_13,pMVar32);
          pUVar38 = uStack_128;
        }
        pIVar50 = pIStack_f0;
        lVar48 = MethodInfo_Void_Add;
        pSVar27 = *(System_Collections_Generic_List_object__o **)&(pIStack_f0->_1).this_arg.bits;
        fVar54 = fStack_118;
        fVar55 = fStack_114;
        uVar57 = uStack_110;
        uVar59 = uStack_10c;
        fVar14 = fStack_108;
        fVar15 = fStack_104;
        uVar16 = uStack_100;
        uVar17 = uStack_fc;
        if (pSVar27 == (System_Collections_Generic_List_object__o *)0x0) break;
        piVar1 = &(pSVar27->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar11 = (pSVar27->fields)._items;
        if (pSVar11 == (System_Object_array *)0x0) break;
        uVar9 = (pSVar27->fields)._size;
        pIVar64 = pIVar28;
        if (uVar9 < (uint)pSVar11->max_length) {
          (pSVar27->fields)._size = uVar9 + 1;
          pSVar11->m_Items[(int)uVar9] = (Il2CppObject *)__this_13;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar9);
          iVar53 = *(int *)(TypeInfo_Object + 0xe4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar27,(Il2CppObject *)__this_13,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar48 + 0x20) + 0xc0) + 0x70));
          iVar53 = *(int *)(TypeInfo_Object + 0xe4);
        }
        if (iVar53 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar26 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar38,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar26 != '\0') {
          fVar54 = fStack_118;
          fVar55 = fStack_114;
          uVar57 = uStack_110;
          uVar59 = uStack_10c;
          fVar14 = fStack_108;
          fVar15 = fStack_104;
          uVar16 = uStack_100;
          uVar17 = uStack_fc;
          if (((pUVar38 == (UnityEngine_Transform_o *)0x0) ||
              (__this_12 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar38,(MethodInfo *)0x0),
              fVar54 = fStack_118, fVar55 = fStack_114, uVar57 = uStack_110, uVar59 = uStack_10c,
              fVar14 = fStack_108, fVar15 = fStack_104, uVar16 = uStack_100, uVar17 = uStack_fc,
              __this_12 == (UnityEngine_GameObject_o *)0x0)) ||
             (pIVar37 = UnityEngine_GameObject__AddComponent_object_(__this_12,MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul),
             fVar54 = fStack_118, fVar55 = fStack_114, uVar57 = uStack_110, uVar59 = uStack_10c,
             fVar14 = fStack_108, fVar15 = fStack_104, uVar16 = uStack_100, uVar17 = uStack_fc,
             pIVar37 == (Il2CppObject *)0x0)) break;
          pIVar37[2].klass = pIVar50;
          il2cpp_runtime_helper_022b4080(pIVar37 + 2);
          *(float *)&pIVar37[2].monitor = fStack_138;
        }
        fStack_13c = (float)((int)fStack_13c + 1);
        if ((int)fStack_118 <= (int)fStack_13c) {
          return;
        }
      }
    }
  }
label_03b8f282:
  uStack_fc = uVar17;
  uStack_100 = uVar16;
  fStack_104 = fVar15;
  fStack_108 = fVar14;
  uStack_10c = uVar59;
  uStack_110 = uVar57;
  fStack_114 = fVar55;
  fStack_118 = fVar54;
  il2cpp_runtime_helper_022b2c90();
  return;
  while (lVar49 = lVar49 + 0x10, (ulong)*(ushort *)(lVar48 + 0x12e) << 4 != lVar49) {
label_03b49770:
    if (*(long *)(*(long *)(lVar48 + 0xb0) + lVar49) == TypeInfo_IDisposable) {
      puVar31 = (undefined8 *)(lVar48 + (long)*(int *)(*(long *)(lVar48 + 0xb0) + 8 + lVar49) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  pSStack_c8 = (System_String_o *)0x3b49789;
  puVar31 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar30,TypeInfo_IDisposable,0);
label_03b4979d:
  pSStack_c8 = (System_String_o *)0x3b497a6;
  (*(code *)*puVar31)(plVar30);
label_03b497a6:
  if (in_stack_ffffffffffffff40 != 0) goto label_03b49dd9;
  if (__this_09 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      pSStack_c8 = (System_String_o *)0x3b497df;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    pSStack_c8 = (System_String_o *)0x3b497f5;
    __this_09 = (System_Collections_Generic_List_GisketchSearchEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    pSStack_c8 = (System_String_o *)0x3b49802;
    System_Object___ctor((Il2CppObject *)__this_09,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_09->fields)._items = 0xfffffffe;
    pSStack_c8 = (System_String_o *)0x3b49810;
    iVar25 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&(__this_09->fields)._syncRoot = iVar25;
    plVar44 = (long *)0x0;
    if (__this_09 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b49dcf;
  }
  pIVar50 = (Il2CppClass *)__this_09->klass;
  uVar4._0_1_ = (pIVar50->_2).rank;
  uVar4._1_1_ = (pIVar50->_2).minimumAlignment;
  if ((ulong)uVar4 != 0) {
    pIVar10 = (pIVar50->_1).interfaceOffsets;
    lVar48 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar48) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        ppIVar29 = &pIVar50->vtable[*(int *)((long)&pIVar10->offset + lVar48)].methodPtr;
        goto label_03b49881;
      }
      lVar48 = lVar48 + 0x10;
    } while ((ulong)uVar4 << 4 != lVar48);
  }
  pSStack_c8 = (System_String_o *)0x3b49869;
  ppIVar29 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_09,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  pSStack_c8 = (System_String_o *)0x3b4988a;
  plVar44 = (long *)(**ppIVar29)(__this_09,(MethodInfo *)ppIVar29[1]);
  if ((Il2CppObject *)plVar44 == (Il2CppObject *)0x0) goto label_03b49dde;
  do {
    do {
      pIVar50 = ((Il2CppObject *)plVar44)->klass;
      uVar5._0_1_ = (pIVar50->_2).rank;
      uVar5._1_1_ = (pIVar50->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar10 = (pIVar50->_1).interfaceOffsets;
        lVar48 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar48) == TypeInfo_IEnumerator) {
            ppIVar29 = &pIVar50->vtable[*(int *)((long)&pIVar10->offset + lVar48)].methodPtr;
            goto label_03b49903;
          }
          lVar48 = lVar48 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar48);
      }
      pSStack_c8 = (System_String_o *)0x3b498e9;
      ppIVar29 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar44,TypeInfo_IEnumerator,0);
label_03b49903:
      pSStack_c8 = (System_String_o *)0x3b4990c;
      cVar24 = (**ppIVar29)(plVar44,(MethodInfo *)ppIVar29[1]);
      if (cVar24 == '\0') {
        iVar53 = 10;
        lVar48 = 0;
        goto label_03b49ac8;
      }
      pIVar50 = ((Il2CppObject *)plVar44)->klass;
      uVar6._0_1_ = (pIVar50->_2).rank;
      uVar6._1_1_ = (pIVar50->_2).minimumAlignment;
      if ((ulong)uVar6 != 0) {
        pIVar10 = (pIVar50->_1).interfaceOffsets;
        lVar48 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar48) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            ppIVar29 = &pIVar50->vtable[*(int *)((long)&pIVar10->offset + lVar48)].methodPtr;
            goto label_03b49973;
          }
          lVar48 = lVar48 + 0x10;
        } while ((ulong)uVar6 << 4 != lVar48);
      }
      pSStack_c8 = (System_String_o *)0x3b49959;
      ppIVar29 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar44,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      pSStack_c8 = (System_String_o *)0x3b4997c;
      auVar61 = (**ppIVar29)(plVar44,(MethodInfo *)ppIVar29[1]);
      pGVar33 = auVar61._0_8_;
      pSStack_c8 = (System_String_o *)0x3b4998a;
      bVar26 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar33,(System_String_o *)pGVar36,auVar61._8_8_);
      if ((char)bVar26 == '\0') break;
      if (pGVar33 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      pSStack_c8 = (System_String_o *)0x3b499a2;
      bVar26 = System_String__IsNullOrEmpty((pGVar33->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar26 != '\0') break;
      if (__this_08 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      pSStack_c8 = (System_String_o *)0x3b499c7;
      bVar26 = System_Collections_Generic_HashSet_object___Contains
                         (__this_08,(Il2CppObject *)(pGVar33->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar26 == '\0');
    lVar48 = MethodInfo_Void_Add;
    if (pSVar27 == (System_Collections_Generic_List_object__o *)0x0) {
      pSStack_c8 = (System_String_o *)0x3b49d9d;
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      pSStack_c8 = (System_String_o *)0x3b49da2;
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(pSVar27->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar11 = (pSVar27->fields)._items;
    if (pSVar11 == (System_Object_array *)0x0) goto label_03b49d9d;
    uVar9 = (pSVar27->fields)._size;
    if (uVar9 < (uint)pSVar11->max_length) {
      (pSVar27->fields)._size = uVar9 + 1;
      pSVar11->m_Items[(int)uVar9] = (Il2CppObject *)pGVar33;
      pSStack_c8 = (System_String_o *)0x3b49a1c;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      pSStack_c8 = (System_String_o *)0x3b49aba;
      System_Collections_Generic_List_object___AddWithResize
                (pSVar27,(Il2CppObject *)pGVar33,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar48 + 0x20) + 0xc0) + 0x70));
    }
    if (pGVar33 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      pSStack_c8 = (System_String_o *)0x3b49a30;
      bVar26 = System_String__IsNullOrEmpty((pGVar33->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar26 == '\0') {
        pSStack_c8 = (System_String_o *)0x3b49a42;
        bVar26 = System_String__IsNullOrEmpty((System_String_o *)pGVar36,(MethodInfo *)0x0);
        if ((char)bVar26 == '\0') {
          pSStack_c8 = (System_String_o *)0x3b49a5d;
          bVar26 = System_String__Equals_3af50f0
                             ((pGVar33->fields)._ScreenId_k__BackingField,(System_String_o *)pGVar36,5,
                              (MethodInfo *)0x0);
          if ((char)bVar26 != '\0') {
            pSStack_c8 = (System_String_o *)0x3b49a70;
            bVar26 = System_String__IsNullOrEmpty
                               ((pGVar33->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
            if ((char)bVar26 == '\0') {
              if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
              pSStack_c8 = (System_String_o *)0x3b49a99;
              System_Collections_Generic_HashSet_object___Add
                        (__this_06,(Il2CppObject *)(pGVar33->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
            }
          }
        }
      }
    }
  } while( true );
joined_r0x03b4a097:
  lVar13 = lVar49;
  if ((Il2CppObject *)plVar44 != (Il2CppObject *)0x0) {
    pIVar50 = ((Il2CppObject *)plVar44)->klass;
    uVar8._0_1_ = (pIVar50->_2).rank;
    uVar8._1_1_ = (pIVar50->_2).minimumAlignment;
    if ((ulong)uVar8 != 0) {
      pIVar10 = (pIVar50->_1).interfaceOffsets;
      lVar49 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar49) == TypeInfo_IDisposable) {
          ppIVar29 = &pIVar50->vtable[*(int *)((long)&pIVar10->offset + lVar49)].methodPtr;
          goto label_03b4a0ed;
        }
        lVar49 = lVar49 + 0x10;
      } while ((ulong)uVar8 << 4 != lVar49);
    }
    pSStack_c8 = (System_String_o *)0x3b4a0d9;
    ppIVar29 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar44,TypeInfo_IDisposable,0);
label_03b4a0ed:
    pSStack_c8 = (System_String_o *)0x3b4a0f6;
    (**ppIVar29)(plVar44,(MethodInfo *)ppIVar29[1]);
  }
  if (lVar48 == 0) {
    pSStack_c8 = (System_String_o *)&g_data_03b4a1c5;
    _Unwind_Resume(lVar13);
  }
  pSStack_c8 = (System_String_o *)0x3b4a107;
  lVar49 = il2cpp_runtime_helper_022fefe0();
  lVar48 = lVar13;
  goto joined_r0x03b4a097;
code_r0x03b49c0a:
  pSStack_c8 = (System_String_o *)0x3b49c1c;
  bVar26 = System_Collections_Generic_HashSet_object___Contains(__this_06,pIStack_60[4].monitor,MethodInfo_Boolean_Contains);
  if ((char)bVar26 == '\0') {
label_03b49c20:
    lVar48 = MethodInfo_Void_Add;
    piVar1 = &(pSVar27->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar11 = (pSVar27->fields)._items;
    if (pSVar11 == (System_Object_array *)0x0) goto label_03b49dac;
    uVar9 = (pSVar27->fields)._size;
    if (uVar9 < (uint)pSVar11->max_length) {
      (pSVar27->fields)._size = uVar9 + 1;
      pSVar11->m_Items[(int)uVar9] = pIStack_60;
      pSStack_c8 = (System_String_o *)0x3b49c59;
      il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar9,pIStack_60);
    }
    else {
      pSStack_c8 = (System_String_o *)0x3b49bda;
      System_Collections_Generic_List_object___AddWithResize
                (pSVar27,pIStack_60,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar48 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto label_03b49bda;
label_03b49d6d:
  pSStack_c8 = (System_String_o *)0x3b49d72;
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  pSStack_c8 = (System_String_o *)0x3b49d86;
  __this_05.fields._8_8_ = __this_06;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff40;
  __this_05.fields._current = _Var65.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff50);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$Entries
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Entries (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b8e5a0

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Entries
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  Il2CppRuntimeInterfaceOffsetPair *pIVar10;
  System_Object_array *pSVar11;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar12;
  System_Collections_Generic_IEqualityComparer_T__c *pSVar13;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *pGVar15;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *pGVar16;
  UnityEngine_Events_UnityEvent_o *__this;
  undefined8 uVar17;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  char cVar29;
  int32_t iVar30;
  bool_conflict bVar31;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_04;
  System_Collections_Generic_HashSet_object__o *__this_05;
  System_Collections_Generic_HashSet_string__o *screenTitles;
  System_Collections_Generic_List_object__o *pSVar32;
  System_Collections_Generic_HashSet_object__o *__this_06;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *__this_07;
  Il2CppMethodPointer *ppIVar33;
  long *plVar34;
  undefined8 *puVar35;
  MethodInfo *pMVar36;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGVar37;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar38;
  void *pvVar39;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar40;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar41;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *__this_08;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_09;
  Il2CppObject *__this_10;
  undefined4 extraout_var;
  Il2CppObject *pIVar42;
  Il2CppClass *pIVar43;
  UnityEngine_Transform_o *pUVar44;
  System_String_o *pSVar45;
  UnityEngine_Events_UnityAction_o *call;
  System_Func_bool__o *pSVar46;
  System_String_o *pSVar47;
  UnityEngine_GameObject_o *__this_11;
  MethodInfo *in_RCX;
  void *extraout_RDX;
  MethodInfo *method_00;
  int iVar48;
  void **ppvVar49;
  long *plVar50;
  UnityEngine_Object_o *pUVar51;
  MethodInfo *method_01;
  UnityEngine_Object_o *x;
  long lVar52;
  long lVar53;
  Il2CppClass *__this_12;
  Il2CppObject *pIVar54;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **ppGVar55;
  int iVar56;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_13;
  float fVar57;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  UnityEngine_Color_o UVar63;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o color;
  UnityEngine_Color_o color_00;
  UnityEngine_Color_o color_01;
  UnityEngine_Color_o color_02;
  undefined1 auVar64 [16];
  undefined1 auVar65 [12];
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  Il2CppClass *pIStack_c8;
  UnityEngine_Object_o *pUStack_c0;
  System_String_o *pSStack_b8;
  System_String_o *pSStack_b0;
  System_String_o *pSStack_a8;
  System_String_o *pSStack_a0;
  long in_stack_ffffffffffffff68;
  System_String_o *pSVar66;
  System_String_o *query;
  Il2CppObject *pIVar67;
  _union_249689 _Var68;
  _union_249689 in_stack_ffffffffffffffb8;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *pGStack_38;
  
  if (g_data_057a9eba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eba = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_08 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0;
  pIVar43 = (Il2CppClass *)root;
  bVar31 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar31 != '\0') {
label_03b8e641:
    pSVar38 = (System_Collections_Generic_List_GisketchSearchEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar38,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    return pSVar38;
  }
  if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    pGVar14 = (root->fields)._Manifest_k__BackingField;
    if (pGVar14 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) goto label_03b8e641;
    pGVar15 = (pGVar14->fields).dialogs;
    pIVar43 = *(Il2CppClass **)&(root->fields)._suppressNextBuildMotion;
    __this_08 = pGVar15;
    pSVar38 = Gisketch_Aottg2UI_Search_GisketchSearchIndex__EntriesFor
                        ((Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)pIVar43,
                         (System_String_o *)pGVar15,(MethodInfo *)0x0);
    pGVar14 = (root->fields)._Manifest_k__BackingField;
    in_RCX = (MethodInfo *)0x0;
    if (pGVar14 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      pGVar16 = (pGVar14->fields).screens;
      if (pGVar16 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *)0x0) {
        __this_07 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0;
      }
      else {
        __this_07 = pGVar16->m_Items[1];
      }
      if (g_data_057a9cbb == '\0') {
        pSStack_a0 = (System_String_o *)0x3b49262;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose,__this_07,pGVar15,0);
        pSStack_a0 = (System_String_o *)0x3b4926e;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        pSStack_a0 = (System_String_o *)0x3b4927a;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Current);
        pSStack_a0 = (System_String_o *)0x3b49286;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
        pSStack_a0 = (System_String_o *)0x3b49292;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
        pSStack_a0 = (System_String_o *)0x3b4929e;
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
        pSStack_a0 = (System_String_o *)0x3b492aa;
        il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
        pSStack_a0 = (System_String_o *)0x3b492b6;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
        pSStack_a0 = (System_String_o *)0x3b492c2;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_GisketchSearchEntry);
        pSStack_a0 = (System_String_o *)0x3b492ce;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_GisketchSearchEntry);
        pSStack_a0 = (System_String_o *)0x3b492da;
        il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
        pSStack_a0 = (System_String_o *)0x3b492e6;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        pSStack_a0 = (System_String_o *)0x3b492f2;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
        pSStack_a0 = (System_String_o *)0x3b492fe;
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
        pSStack_a0 = (System_String_o *)0x3b4930a;
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
        pSStack_a0 = (System_String_o *)0x3b49316;
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9cbb = '\x01';
      }
      pSStack_a0 = (System_String_o *)0x3b4933e;
      __this_04 = (System_Collections_Generic_List_GisketchSearchEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
      pSStack_a0 = (System_String_o *)0x3b49353;
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
      if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
        pSStack_a0 = (System_String_o *)0x3b494ea;
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057a9c88 == '\0') {
        pSStack_a0 = (System_String_o *)0x3b49503;
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar56 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar56 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar56 == 0) {
        pSStack_a0 = (System_String_o *)0x3b4951f;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar36 = *(MethodInfo **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      pSStack_a0 = (System_String_o *)0x3b493a1;
      __this_05 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
      pSStack_a0 = (System_String_o *)0x3b493bb;
      System_Collections_Generic_HashSet_object____ctor_33e0600
                (__this_05,(System_Collections_Generic_IEqualityComparer_T__o *)pMVar36,MethodInfo_HashSet_1_System_String);
      pSStack_a0 = (System_String_o *)0x3b493c5;
      screenTitles = Gisketch_Aottg2UI_Search_GisketchSearchResults__ScreenTitles
                               ((System_Collections_Generic_IEnumerable_GisketchSearchEntry__o *)pSVar38,
                                pMVar36);
      pSStack_a0 = (System_String_o *)0x3b493d3;
      pSVar32 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
      pSStack_a0 = (System_String_o *)0x3b493e8;
      System_Collections_Generic_List_object____ctor(pSVar32,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
      if (g_data_057a9c88 == '\0') {
        pSStack_a0 = (System_String_o *)0x3b49533;
        il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
        g_data_057a9c88 = '\x01';
        iVar56 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      else {
        iVar56 = *(int *)(TypeInfo_StringComparer + 0xe4);
      }
      if (iVar56 == 0) {
        pSStack_a0 = (System_String_o *)0x3b49554;
        il2cpp_runtime_helper_02337ed0();
      }
      plVar50 = *(long **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
      pSStack_a0 = (System_String_o *)0x3b4942b;
      __this_06 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
      pSStack_a0 = (System_String_o *)0x3b4943d;
      System_Collections_Generic_HashSet_object____ctor_33e0600
                (__this_06,(System_Collections_Generic_IEqualityComparer_T__o *)plVar50,MethodInfo_HashSet_1_System_String);
      if (__this_07 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
        if (g_data_057a9cc0 == '\0') {
          pSStack_a0 = (System_String_o *)0x3b49457;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
          g_data_057a9cc0 = '\x01';
        }
        pSStack_a0 = (System_String_o *)0x3b4946d;
        __this_07 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
        pSStack_a0 = (System_String_o *)0x3b4947a;
        System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
        *(undefined4 *)&(__this_07->fields).id = 0xfffffffe;
        pSStack_a0 = (System_String_o *)0x3b49489;
        iVar30 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
        *(int32_t *)&(__this_07->fields).searchTitle = iVar30;
        if (__this_07 == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) goto label_03b49dcf;
      }
      pIVar43 = (Il2CppClass *)__this_07->klass;
      uVar3._0_1_ = (pIVar43->_2).rank;
      uVar3._1_1_ = (pIVar43->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar10 = (pIVar43->_1).interfaceOffsets;
        lVar52 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar52) == TypeInfo_IEnumerable_GisketchSearchEntry) {
            ppIVar33 = &pIVar43->vtable[*(int *)((long)&pIVar10->offset + lVar52)].methodPtr;
            goto label_03b4956f;
          }
          lVar52 = lVar52 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar52);
      }
      pSStack_a0 = (System_String_o *)0x3b494dd;
      ppIVar33 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(__this_07,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b4956f:
      pSStack_a0 = (System_String_o *)0x3b4957d;
      plVar34 = (long *)(**ppIVar33)(__this_07,(MethodInfo *)ppIVar33[1]);
      if (plVar34 == (long *)0x0) goto label_03b49dd4;
      plVar50 = &TypeInfo_IEnumerator;
      in_stack_ffffffffffffff68 = 0;
      do {
        lVar52 = *plVar34;
        if ((ulong)*(ushort *)(lVar52 + 0x12e) != 0) {
          lVar53 = 0;
          do {
            if (*(long *)(*(long *)(lVar52 + 0xb0) + lVar53) == TypeInfo_IEnumerator) {
              puVar35 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar52 + 0xb0) + 8 + lVar53) * 0x10 + lVar52 + 0x138);
              goto label_03b495f3;
            }
            lVar53 = lVar53 + 0x10;
          } while ((ulong)*(ushort *)(lVar52 + 0x12e) << 4 != lVar53);
        }
        pSStack_a0 = (System_String_o *)0x3b495d9;
        puVar35 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar34,TypeInfo_IEnumerator,0);
label_03b495f3:
        pSStack_a0 = (System_String_o *)0x3b495fc;
        cVar29 = (*(code *)*puVar35)();
        if (cVar29 == '\0') {
          plVar50 = (long *)&g_data_00000005;
          if (plVar34 == (long *)0x0) goto label_03b497a6;
          lVar52 = *plVar34;
          if ((ulong)*(ushort *)(lVar52 + 0x12e) == 0) goto label_03b4977f;
          lVar53 = 0;
          goto label_03b49770;
        }
        lVar52 = *plVar34;
        if ((ulong)*(ushort *)(lVar52 + 0x12e) != 0) {
          lVar53 = 0;
          do {
            if (*(long *)(*(long *)(lVar52 + 0xb0) + lVar53) == TypeInfo_IEnumerator_GisketchSearchEntry) {
              pMVar36 = (MethodInfo *)
                        ((long)*(int *)(*(long *)(lVar52 + 0xb0) + 8 + lVar53) * 0x10 + lVar52 + 0x138);
              goto label_03b49663;
            }
            lVar53 = lVar53 + 0x10;
          } while ((ulong)*(ushort *)(lVar52 + 0x12e) << 4 != lVar53);
        }
        pSStack_a0 = (System_String_o *)0x3b49649;
        pMVar36 = (MethodInfo *)il2cpp_runtime_helper_02300d20(plVar34,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49663:
        method_01 = (MethodInfo *)pMVar36->virtualMethodPointer;
        pSStack_a0 = (System_String_o *)0x3b4966c;
        pGVar37 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)(*pMVar36->methodPointer)();
        if (pGVar37 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
          pSStack_a0 = (System_String_o *)0x3b49680;
          bVar31 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsLiveUsable(pGVar37,method_01);
          if ((char)bVar31 != '\0') {
            pSStack_a0 = (System_String_o *)0x3b49698;
            bVar31 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsDuplicateMainMenuScreenButton
                               (pGVar37,(System_String_o *)pGVar15,screenTitles,pMVar36);
            lVar52 = MethodInfo_Void_Add;
            if ((char)bVar31 == '\0') {
              if (pSVar32 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b49dbb;
              piVar1 = &(pSVar32->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar11 = (pSVar32->fields)._items;
              if (pSVar11 == (System_Object_array *)0x0) goto label_03b49dc0;
              uVar9 = (pSVar32->fields)._size;
              if (uVar9 < (uint)pSVar11->max_length) {
                (pSVar32->fields)._size = uVar9 + 1;
                pSVar11->m_Items[(int)uVar9] = (Il2CppObject *)pGVar37;
                pSStack_a0 = (System_String_o *)0x3b496ed;
                il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar9);
              }
              else {
                pSStack_a0 = (System_String_o *)0x3b49706;
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar32,(Il2CppObject *)pGVar37,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar52 + 0x20) + 0xc0) + 0x70));
              }
              pSStack_a0 = (System_String_o *)0x3b49711;
              bVar31 = System_String__IsNullOrEmpty
                                 ((pGVar37->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
              if ((char)bVar31 == '\0') {
                if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                  do {
                    pSStack_a0 = (System_String_o *)0x3b49dca;
                    il2cpp_runtime_helper_022b2c90();
label_03b49dca:
                    pSStack_a0 = (System_String_o *)0x3b49dcf;
                    il2cpp_runtime_helper_022b2c90();
label_03b49dcf:
                    do {
                      pSStack_a0 = (System_String_o *)0x3b49dd4;
                      il2cpp_runtime_helper_022b2c90();
label_03b49dd4:
                      pSStack_a0 = (System_String_o *)0x3b49dd9;
                      il2cpp_runtime_helper_022b2c90();
label_03b49dd9:
                      pSStack_a0 = (System_String_o *)0x3b49dde;
                      il2cpp_runtime_helper_022fefe0();
label_03b49dde:
                      pSStack_a0 = (System_String_o *)0x3b49de3;
                      il2cpp_runtime_helper_022b2c90();
                      do {
                        pSStack_a0 = (System_String_o *)0x3b49deb;
                        auVar65 = il2cpp_runtime_helper_022fefe0();
                        iVar56 = 0;
                        if (auVar65._8_4_ != 1) {
                          lVar53 = auVar65._0_8_;
                          lVar52 = 0;
                          goto joined_r0x03b4a097;
                        }
                        pSStack_a0 = (System_String_o *)0x3b4a085;
                        plVar34 = (long *)__cxa_begin_catch();
                        lVar52 = *plVar34;
                        pSStack_a0 = (System_String_o *)0x3b4a08d;
                        __cxa_end_catch();
label_03b49ac8:
                        if ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)plVar50 !=
                            (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
                          pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)
                                    ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)plVar50)->klass;
                          uVar7._0_1_ = (pSVar13->_2).rank;
                          uVar7._1_1_ = (pSVar13->_2).minimumAlignment;
                          if ((ulong)uVar7 != 0) {
                            pIVar10 = (pSVar13->_1).interfaceOffsets;
                            lVar53 = 0;
                            do {
                              if (*(long *)((long)&pIVar10->interfaceType + lVar53) == TypeInfo_IDisposable) {
                                ppIVar33 = &pSVar13->vtable[*(int *)((long)&pIVar10->offset + lVar53)].
                                            methodPtr;
                                goto label_03b49b2d;
                              }
                              lVar53 = lVar53 + 0x10;
                            } while ((ulong)uVar7 << 4 != lVar53);
                          }
                          pSStack_a0 = (System_String_o *)0x3b49b19;
                          ppIVar33 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar50,TypeInfo_IDisposable,0);
label_03b49b2d:
                          pSStack_a0 = (System_String_o *)0x3b49b36;
                          (**ppIVar33)(plVar50,(MethodInfo *)ppIVar33[1]);
                        }
                      } while (lVar52 != 0);
                      if ((iVar56 != 10) && (iVar56 != 0)) {
                        return __this_04;
                      }
                    } while (pSVar32 == (System_Collections_Generic_List_object__o *)0x0);
                    pSStack_a0 = (System_String_o *)0x3b49b70;
                    System_Collections_Generic_List_object___GetEnumerator
                              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
                               pSVar32,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Search_GisketchSea);
                    plVar50 = (long *)pGStack_38;
                    _Var68 = in_stack_ffffffffffffffb8;
                    if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                      while( true ) {
                        pSStack_a0 = (System_String_o *)0x3b49ca5;
                        __this_01.fields._8_8_ = __this_05;
                        __this_01.fields._list =
                             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
                        __this_01.fields._current = _Var68.genericMethod;
                        bVar31 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                           (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
                        if ((char)bVar31 == '\0') goto label_03b49d72;
                        if (pGStack_38 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0)
                        goto label_03b49da2;
                        pSStack_a0 = (System_String_o *)0x3b49cc6;
                        bVar31 = System_String__IsNullOrEmpty
                                           ((pGStack_38->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
                        lVar52 = MethodInfo_Void_Add;
                        if ((char)bVar31 == '\0') goto label_03b49db6;
                        if (__this_04 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0)
                        goto label_03b49d6d;
                        piVar1 = &(__this_04->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pGVar12 = (__this_04->fields)._items;
                        if (pGVar12 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) break;
                        uVar9 = (__this_04->fields)._size;
                        if (uVar9 < (uint)pGVar12->max_length) {
                          (__this_04->fields)._size = uVar9 + 1;
                          pGVar12->m_Items[(int)uVar9] = pGStack_38;
                          pSStack_a0 = (System_String_o *)0x3b49d10;
                          il2cpp_runtime_helper_022b4080(pGVar12->m_Items + (int)uVar9,pGStack_38);
                        }
                        else {
                          pSStack_a0 = (System_String_o *)0x3b49c9a;
                          System_Collections_Generic_List_object___AddWithResize
                                    ((System_Collections_Generic_List_object__o *)__this_04,
                                     (Il2CppObject *)pGStack_38,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar52 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                    }
                    else {
                      if (__this_04 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
                        while( true ) {
                          pSStack_a0 = (System_String_o *)0x3b49d3b;
                          __this_02.fields._8_8_ = __this_05;
                          __this_02.fields._list =
                               (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
                          __this_02.fields._current = _Var68.genericMethod;
                          bVar31 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                             (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
                          if ((char)bVar31 == '\0') goto label_03b49d72;
                          if (pGStack_38 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) break;
                          pSStack_a0 = (System_String_o *)0x3b49d54;
                          bVar31 = System_String__IsNullOrEmpty
                                             ((pGStack_38->fields)._TargetId_k__BackingField,(MethodInfo *)0x0
                                             );
                          if ((char)bVar31 != '\0') goto label_03b49d6d;
                          pSStack_a0 = (System_String_o *)0x3b49d69;
                          bVar31 = System_Collections_Generic_HashSet_object___Contains
                                             (__this_05,
                                              (Il2CppObject *)(pGStack_38->fields)._TargetId_k__BackingField,
                                              MethodInfo_Boolean_Contains);
                          if ((char)bVar31 == '\0') goto label_03b49d6d;
                        }
                      }
                      else {
label_03b49bda:
                        pSStack_a0 = (System_String_o *)0x3b49be5;
                        __this_00.fields._8_8_ = __this_05;
                        __this_00.fields._list =
                             (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
                        __this_00.fields._current = _Var68.genericMethod;
                        bVar31 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                           (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
                        if ((char)bVar31 == '\0') goto label_03b49d72;
                        if (pGStack_38 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
                          pSStack_a0 = (System_String_o *)0x3b49c06;
                          bVar31 = System_String__IsNullOrEmpty
                                             ((pGStack_38->fields)._TargetId_k__BackingField,(MethodInfo *)0x0
                                             );
                          if ((char)bVar31 == '\0') goto code_r0x03b49c0a;
                          goto label_03b49c20;
                        }
                      }
label_03b49da2:
                      pSStack_a0 = (System_String_o *)0x3b49da7;
                      il2cpp_runtime_helper_022b2c90();
label_03b49da7:
                      pSStack_a0 = (System_String_o *)0x3b49dac;
                      il2cpp_runtime_helper_022b2c90();
                    }
label_03b49dac:
                    pSStack_a0 = (System_String_o *)0x3b49db1;
                    il2cpp_runtime_helper_022b2c90();
label_03b49db1:
                    pSStack_a0 = (System_String_o *)0x3b49db6;
                    il2cpp_runtime_helper_022b2c90();
label_03b49db6:
                    pSStack_a0 = (System_String_o *)0x3b49dbb;
                    il2cpp_runtime_helper_022b2c90();
label_03b49dbb:
                    pSStack_a0 = (System_String_o *)0x3b49dc0;
                    il2cpp_runtime_helper_022b2c90();
label_03b49dc0:
                    pSStack_a0 = (System_String_o *)0x3b49dc5;
                    il2cpp_runtime_helper_022b2c90();
                  } while( true );
                }
                pSStack_a0 = (System_String_o *)0x3b4973a;
                System_Collections_Generic_HashSet_object___Add
                          (__this_06,(Il2CppObject *)(pGVar37->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add)
                ;
              }
            }
          }
        }
      } while( true );
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_12 = pIVar43;
  if (g_data_057a9eb5 == '\0') {
    __this_12 = (Il2CppClass *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9eb5 = '\x01';
  }
  pGVar15 = (pIVar43->_1).this_arg.data;
  if (pGVar15 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
    uVar9 = (uint)pGVar15->max_length;
    pSVar38 = (System_Collections_Generic_List_GisketchSearchEntry__o *)&g_data_00000008;
    if ((int)uVar9 < 9) {
      pSVar38 = (System_Collections_Generic_List_GisketchSearchEntry__o *)(ulong)uVar9;
    }
    return pSVar38;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9eb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"search-palette-results");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"popover");
    g_data_057a9eb1 = '\x01';
    if (g_data_057a9eb5 == '\0') goto label_03b8e77e;
label_03b8e6f7:
    pvVar39 = (__this_12->_1).this_arg.data;
    if (pvVar39 == (void *)0x0) goto label_03b8e91f;
label_03b8e79f:
    iVar56 = *(int *)((long)pvVar39 + 0x18);
    iVar48 = 8;
    if (iVar56 < 9) {
      iVar48 = iVar56;
    }
    pGVar40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    if (iVar56 < 1) {
label_03b8e816:
      __this_08 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_08,(MethodInfo *)0x0);
      if (__this_08 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *)0x0) {
        ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&__this_08->bounds)->type = "Panel";
        il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&__this_08->bounds);
        __this_08->max_length = (il2cpp_array_size_t)"search-palette-results";
        il2cpp_runtime_helper_022b4080(&__this_08->max_length);
        __this_08->m_Items[4] = "popover";
        il2cpp_runtime_helper_022b4080(__this_08->m_Items + 4);
        __this_09 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_09,(MethodInfo *)0x0);
        if (__this_09 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (__this_09->fields).direction = "Column";
          il2cpp_runtime_helper_022b4080(&__this_09->fields);
          (__this_09->fields).alignItems = "Stretch";
          il2cpp_runtime_helper_022b4080(&(__this_09->fields).alignItems);
          (__this_09->fields).gap = 0.0;
          __this_08->m_Items[0x17] = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)__this_09;
          il2cpp_runtime_helper_022b4080(__this_08->m_Items + 0x17,__this_09);
          __this_08->m_Items[0x1f] = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)pGVar40;
          il2cpp_runtime_helper_022b4080(__this_08->m_Items + 0x1f,pGVar40);
          return (System_Collections_Generic_List_GisketchSearchEntry__o *)__this_08;
        }
      }
      goto label_03b8e91f;
    }
    if (pGVar40 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      ppGVar55 = pGVar40->m_Items;
      pMVar36 = (MethodInfo *)0x0;
      do {
        pGVar41 = Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
                            ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)__this_12,
                             (int32_t)pMVar36,(System_String_o *)__this_08,in_RCX);
        in_RCX = (MethodInfo *)(ulong)(uint)pGVar40->max_length;
        if (in_RCX <= pMVar36) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b8e91f;
        }
        *ppGVar55 = pGVar41;
        il2cpp_runtime_helper_022b4080(ppGVar55);
        pMVar36 = (MethodInfo *)((long)&pMVar36->methodPointer + 1);
        ppGVar55 = ppGVar55 + 1;
      } while ((long)pMVar36 < (long)iVar48);
      goto label_03b8e816;
    }
  }
  else {
    if (g_data_057a9eb5 != '\0') goto label_03b8e6f7;
label_03b8e77e:
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9eb5 = '\x01';
    pvVar39 = (__this_12->_1).this_arg.data;
    if (pvVar39 != (void *)0x0) goto label_03b8e79f;
label_03b8e91f:
    il2cpp_runtime_helper_022b2c90();
  }
  x = (UnityEngine_Object_o *)0x0;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__ResultNode
            ((Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)__this_12,0,(System_String_o *)__this_08
             ,in_RCX);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9eb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_WireResults_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_WireResults_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"search-result-");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"negativeText");
    g_data_057a9eb3 = '\x01';
  }
  fStack_114 = 0.0;
  __this_10 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(__this_10,(MethodInfo *)0x0);
  fVar57 = fStack_f0;
  fVar58 = fStack_ec;
  uVar60 = uStack_e8;
  uVar62 = uStack_e4;
  fVar19 = fStack_e0;
  fVar20 = fStack_dc;
  uVar21 = uStack_d8;
  uVar22 = uStack_d4;
  if (__this_10 == (Il2CppObject *)0x0) goto label_03b8f282;
  __this_10[1].klass = __this_12;
  il2cpp_runtime_helper_022b4080(__this_10 + 1,__this_12);
  ppvVar49 = &__this_10[1].monitor;
  __this_10[1].monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(ppvVar49);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar31 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar31 != '\0') {
    return (System_Collections_Generic_List_GisketchSearchEntry__o *)CONCAT44(extraout_var,bVar31);
  }
  lVar52 = *(long *)&(__this_12->_1).this_arg.bits;
  fVar57 = fStack_f0;
  fVar58 = fStack_ec;
  uVar60 = uStack_e8;
  uVar62 = uStack_e4;
  fVar19 = fStack_e0;
  fVar20 = fStack_dc;
  uVar21 = uStack_d8;
  uVar22 = uStack_d4;
  if (lVar52 == 0) goto label_03b8f282;
  *(int *)(lVar52 + 0x1c) = *(int *)(lVar52 + 0x1c) + 1;
  iVar56 = *(int *)(lVar52 + 0x18);
  *(undefined4 *)(lVar52 + 0x18) = 0;
  if (0 < iVar56) {
    System_Array__Clear(*(System_Array_o **)(lVar52 + 0x10),0,iVar56,(MethodInfo *)0x0);
  }
  pUVar51 = (__this_12->_1).byval_arg.data;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar31 = UnityEngine_Object__op_Inequality(pUVar51,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar45 = "text";
  if ((char)bVar31 == '\0') {
    puVar35 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  else {
    pvVar39 = (__this_12->_1).byval_arg.data;
    fVar57 = fStack_f0;
    fVar58 = fStack_ec;
    uVar60 = uStack_e8;
    uVar62 = uStack_e4;
    fVar19 = fStack_e0;
    fVar20 = fStack_dc;
    uVar21 = uStack_d8;
    uVar22 = uStack_d4;
    if (pvVar39 == (void *)0x0) goto label_03b8f282;
    puVar35 = (undefined8 *)((long)pvVar39 + 0x220);
  }
  pSVar66 = (System_String_o *)*puVar35;
  pUVar51 = *ppvVar49;
  if (g_data_057a9eb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar31 = UnityEngine_Object__op_Inequality(pUVar51,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar57 = fStack_f0;
  fVar58 = fStack_ec;
  uVar60 = uStack_e8;
  uVar62 = uStack_e4;
  fVar19 = fStack_e0;
  fVar20 = fStack_dc;
  uVar21 = uStack_d8;
  uVar22 = uStack_d4;
  if ((char)bVar31 == '\0') {
label_03b8ebd1:
    pUVar51 = *ppvVar49;
    fVar23 = 1.0;
    fVar24 = 1.0;
    fVar25 = 1.0;
    fVar26 = 1.0;
    uVar27 = 0;
    uVar59 = 0;
    uVar28 = 0;
    uVar61 = 0;
    pSVar45 = "negativeText";
  }
  else {
    if (pUVar51 == (UnityEngine_Object_o *)0x0) goto label_03b8f282;
    if (pUVar51[5].klass == (UnityEngine_Object_c *)0x0) goto label_03b8ebd1;
    uVar59 = g_data_00d19fc0._8_4_;
    uVar61 = g_data_00d19fc0._12_4_;
    uVar17 = g_data_00d19fc0;
    UVar63.fields.b = (float)(int)uVar17;
    UVar63.fields.a = (float)(int)((ulong)uVar17 >> 0x20);
    UVar63.fields.r = (float)(int)uVar17;
    UVar63.fields.g = (float)(int)((ulong)uVar17 >> 0x20);
    UVar63 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar51[5].klass,pSVar45,UVar63,
                        (MethodInfo *)0x0);
    pUVar51 = *ppvVar49;
    fVar23 = UVar63.fields.r;
    fVar24 = UVar63.fields.b;
    fVar25 = UVar63.fields.g;
    fVar26 = UVar63.fields.a;
    uVar27 = extraout_XMM0_Dc;
    uVar28 = extraout_XMM0_Dd;
    pSVar45 = "negativeText";
    fVar57 = fStack_f0;
    fVar58 = fStack_ec;
    uVar60 = uStack_e8;
    uVar62 = uStack_e4;
    fVar19 = fStack_e0;
    fVar20 = fStack_dc;
    uVar21 = uStack_d8;
    uVar22 = uStack_d4;
  }
  uStack_e4 = uVar61;
  uStack_d4 = uVar28;
  uStack_e8 = uVar59;
  uStack_d8 = uVar27;
  fStack_ec = fVar26;
  fStack_dc = fVar25;
  fStack_f0 = fVar24;
  fStack_e0 = fVar23;
  "negativeText" = pSVar45;
  if (pUVar51 != (UnityEngine_Object_o *)0x0) {
    fStack_110 = fStack_e0;
    fStack_10c = fStack_dc;
    uStack_108 = uStack_d8;
    uStack_104 = uStack_d4;
    if ((pUVar51[5].klass == (UnityEngine_Object_c *)0x0) ||
       (fVar57 = fStack_f0, fVar58 = fStack_ec, uStack_f8 = uStack_e8, uStack_f4 = uStack_e4,
       ((pUVar51[5].klass)->_1).byval_arg.field_0xc == '\0')) {
      if (g_data_057a9eb4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9eb4 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar31 = UnityEngine_Object__op_Inequality(pUVar51,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fStack_e0 = 1.0;
      fStack_dc = 1.0;
      uStack_d8 = 0;
      uStack_d4 = 0;
      fVar57 = fStack_e0;
      fVar58 = fStack_dc;
      uStack_f8 = uStack_d8;
      uStack_f4 = uStack_d4;
      if (((char)bVar31 != '\0') && (pUVar51[5].klass != (UnityEngine_Object_c *)0x0)) {
        uVar60 = g_data_00d19fc0._8_4_;
        uVar62 = g_data_00d19fc0._12_4_;
        uVar17 = g_data_00d19fc0;
        fallback.fields.b = (float)(int)uVar17;
        fallback.fields.a = (float)(int)((ulong)uVar17 >> 0x20);
        fallback.fields.r = (float)(int)uVar17;
        fallback.fields.g = (float)(int)((ulong)uVar17 >> 0x20);
        UVar63 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)pUVar51[5].klass,pSVar45,fallback,
                            (MethodInfo *)0x0);
        fStack_e0 = UVar63.fields.r;
        fStack_dc = UVar63.fields.g;
        uStack_d8 = extraout_XMM0_Dc_00;
        uStack_d4 = extraout_XMM0_Dd_00;
        fVar57 = UVar63.fields.b;
        fVar58 = UVar63.fields.a;
        uStack_f8 = uVar60;
        uStack_f4 = uVar62;
      }
    }
    uStack_100 = (UnityEngine_Transform_o *)CONCAT44(fVar58,fVar57);
    color.fields.g = fStack_10c;
    color.fields.r = fStack_110;
    color.fields.a = fStack_ec;
    color.fields.b = fStack_f0;
    pSStack_a0 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color,(MethodInfo *)0x0);
    fVar58 = fStack_ec * 0.75;
    fVar57 = 1.0;
    if (fVar58 <= 1.0) {
      fVar57 = fVar58;
    }
    color_00.fields.g = fStack_10c;
    color_00.fields.r = fStack_110;
    color_00.fields.a = (float)(-(uint)(0.0 <= fVar58) & (uint)fVar57);
    color_00.fields.b = fStack_f0;
    pSStack_a8 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_00,(MethodInfo *)0x0);
    color_01.fields.g = fStack_dc;
    color_01.fields.r = fStack_e0;
    color_01.fields._8_8_ = uStack_100;
    pSStack_b0 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_01,(MethodInfo *)0x0);
    fVar58 = uStack_100._4_4_ * 0.75;
    fVar57 = 1.0;
    if (fVar58 <= 1.0) {
      fVar57 = fVar58;
    }
    color_02.fields.g = fStack_dc;
    color_02.fields.r = fStack_e0;
    color_02.fields.a = (float)(-(uint)(0.0 <= fVar58) & (uint)fVar57);
    color_02.fields.b = (float)(undefined4)uStack_100;
    pSStack_b8 = UnityEngine_ColorUtility__ToHtmlStringRGBA(color_02,(MethodInfo *)0x0);
    if (g_data_057a9eb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057a9eb5 = '\x01';
    }
    pvVar39 = (__this_12->_1).this_arg.data;
    fVar57 = fStack_f0;
    fVar58 = fStack_ec;
    uVar60 = uStack_e8;
    uVar62 = uStack_e4;
    fVar19 = fStack_e0;
    fVar20 = fStack_dc;
    uVar21 = uStack_d8;
    uVar22 = uStack_d4;
    if (pvVar39 != (void *)0x0) {
      fVar57 = *(float *)((long)pvVar39 + 0x18);
      fStack_f0 = 1.12104e-44;
      if ((int)fVar57 < 9) {
        fStack_f0 = fVar57;
      }
      fStack_114 = 0.0;
      if ((int)fVar57 < 1) {
        return (System_Collections_Generic_List_GisketchSearchEntry__o *)(ulong)(uint)fVar57;
      }
      uStack_d8 = (undefined4)uStack_100;
      uStack_d4 = uStack_100._4_4_;
      pIStack_c8 = __this_12;
      pUStack_c0 = x;
      pIVar67 = __this_10;
      while( true ) {
        pIVar42 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_1);
        System_Object___ctor(pIVar42,(MethodInfo *)0x0);
        fVar57 = fStack_f0;
        fVar58 = fStack_ec;
        uVar60 = uStack_e8;
        uVar62 = uStack_e4;
        fVar19 = fStack_e0;
        fVar20 = fStack_dc;
        uVar21 = uStack_d8;
        uVar22 = uStack_d4;
        if (pIVar42 == (Il2CppObject *)0x0) break;
        ppvVar49 = &pIVar42[1].monitor;
        pIVar42[1].monitor = __this_10;
        il2cpp_runtime_helper_022b4080(ppvVar49,__this_10);
        pSVar32 = (__this_12->_1).this_arg.data;
        fVar57 = fStack_f0;
        fVar58 = fStack_ec;
        uVar60 = uStack_e8;
        uVar62 = uStack_e4;
        fVar19 = fStack_e0;
        fVar20 = fStack_dc;
        uVar21 = uStack_d8;
        uVar22 = uStack_d4;
        if (pSVar32 == (System_Collections_Generic_List_object__o *)0x0) break;
        fStack_110 = fStack_114;
        pIVar43 = (Il2CppClass *)
                  System_Collections_Generic_List_object___get_Item(pSVar32,(int32_t)fStack_114,MethodInfo_GisketchSearchEntry_get_Item);
        pIVar54 = pIVar42 + 1;
        pIVar42[1].klass = pIVar43;
        il2cpp_runtime_helper_022b4080(pIVar54);
        fVar57 = fStack_f0;
        fVar58 = fStack_ec;
        uVar60 = uStack_e8;
        uVar62 = uStack_e4;
        fVar19 = fStack_e0;
        fVar20 = fStack_dc;
        uVar21 = uStack_d8;
        uVar22 = uStack_d4;
        if (x == (UnityEngine_Object_o *)0x0) break;
        pUVar44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        pSVar45 = System_Int32__ToString((int32_t)&fStack_114,(MethodInfo *)0x0);
        pSVar45 = System_String__Concat_3ae5ba0("search-result-",pSVar45,(MethodInfo *)0x0);
        pUVar44 = Gisketch_Aottg2UI_Actions_GisketchTransformSearch__FindDeep(pUVar44,pSVar45,method_00);
        __this_10 = pIVar67;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          __this_10 = pIVar67;
        }
        uStack_100 = pUVar44;
        bVar31 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar44,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pUVar51 = (UnityEngine_Object_o *)0x0;
        if ((char)bVar31 != '\0') {
          fVar57 = fStack_f0;
          fVar58 = fStack_ec;
          uVar60 = uStack_e8;
          uVar62 = uStack_e4;
          fVar19 = fStack_e0;
          fVar20 = fStack_dc;
          uVar21 = uStack_d8;
          uVar22 = uStack_d4;
          if (uStack_100 == (UnityEngine_Transform_o *)0x0) break;
          pUVar51 = (UnityEngine_Object_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)uStack_100,MethodInfo_Button_GetComponent_Button);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar31 = UnityEngine_Object__op_Inequality(pUVar51,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar31 != '\0') {
          fVar57 = fStack_f0;
          fVar58 = fStack_ec;
          uVar60 = uStack_e8;
          uVar62 = uStack_e4;
          fVar19 = fStack_e0;
          fVar20 = fStack_dc;
          uVar21 = uStack_d8;
          uVar22 = uStack_d4;
          if (pUVar51 == (UnityEngine_Object_o *)0x0) break;
          __this = (UnityEngine_Events_UnityEvent_o *)pUVar51[10].fields.m_CachedPtr;
          call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          fVar57 = fStack_f0;
          fVar58 = fStack_ec;
          uVar60 = uStack_e8;
          uVar62 = uStack_e4;
          fVar19 = fStack_e0;
          fVar20 = fStack_dc;
          uVar21 = uStack_d8;
          uVar22 = uStack_d4;
          if (__this == (UnityEngine_Events_UnityEvent_o *)0x0) break;
          UnityEngine_Events_UnityEvent__AddListener(__this,call,(MethodInfo *)0x0);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar44 = uStack_100;
        bVar31 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)uStack_100,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this_13 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0;
        if ((char)bVar31 != '\0') {
          fVar57 = fStack_f0;
          fVar58 = fStack_ec;
          uVar60 = uStack_e8;
          uVar62 = uStack_e4;
          fVar19 = fStack_e0;
          fVar20 = fStack_dc;
          uVar21 = uStack_d8;
          uVar22 = uStack_d4;
          if (pUVar44 == (UnityEngine_Transform_o *)0x0) break;
          __this_13 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar44,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar31 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this_13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar31 != '\0') {
          fVar57 = fStack_f0;
          fVar58 = fStack_ec;
          uVar60 = uStack_e8;
          uVar62 = uStack_e4;
          fVar19 = fStack_e0;
          fVar20 = fStack_dc;
          uVar21 = uStack_d8;
          uVar22 = uStack_d4;
          if ((((*ppvVar49 == (void *)0x0) || (lVar52 = *(long *)((long)*ppvVar49 + 0x18), lVar52 == 0)) ||
              (lVar52 = *(long *)(lVar52 + 0x80), lVar52 == 0)) || (pIVar54->klass == (Il2CppClass *)0x0))
          break;
          pMVar36 = *(MethodInfo **)(lVar52 + 0x30);
          pSVar45 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar54->klass,
                               (System_String_o *)pMVar36,(MethodInfo *)0x0);
          fVar57 = fStack_f0;
          fVar58 = fStack_ec;
          uVar60 = uStack_e8;
          uVar62 = uStack_e4;
          fVar19 = fStack_e0;
          fVar20 = fStack_dc;
          uVar21 = uStack_d8;
          uVar22 = uStack_d4;
          if (__this_13 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
          *(ulong *)&(__this_13->fields)._hoverBg.fields.a = CONCAT44(fStack_dc,fStack_e0);
          (__this_13->fields)._hoverText.fields.g = (float)uStack_d8;
          (__this_13->fields)._hoverText.fields.b = (float)uStack_d4;
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_13,pMVar36);
          pvVar39 = *ppvVar49;
          fVar57 = fStack_f0;
          fVar58 = fStack_ec;
          uVar60 = uStack_e8;
          uVar62 = uStack_e4;
          fVar19 = fStack_e0;
          fVar20 = fStack_dc;
          uVar21 = uStack_d8;
          uVar22 = uStack_d4;
          if (pvVar39 == (void *)0x0) break;
          pSVar46 = *(System_Func_bool__o **)((long)pvVar39 + 0x20);
          query = pSVar66;
          if (pSVar46 == (System_Func_bool__o *)0x0) {
            pSVar46 = (System_Func_bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_bool);
            System_Func_bool____ctor();
            *(System_Func_bool__o **)((long)pvVar39 + 0x20) = pSVar46;
            il2cpp_runtime_helper_022b4080((long)pvVar39 + 0x20,pSVar46);
            query = pSVar66;
          }
          (__this_13->fields)._pointerHoverAllowed = pSVar46;
          il2cpp_runtime_helper_022b4080(&(__this_13->fields)._pointerHoverAllowed,pSVar46);
          pSVar66 = query;
          pSVar47 = Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar54->klass,query,0,
                               pSStack_a0,pSVar45,pSStack_a8,(MethodInfo *)0x0);
          pMVar36 = (MethodInfo *)
                    Gisketch_Aottg2UI_Search_GisketchSearchService__Markup_3a4c570
                              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)pIVar54->klass,query,1,
                               pSStack_b0,pSVar45,pSStack_b8,(MethodInfo *)0x0);
          if (pSVar47 == (System_String_o *)0x0) {
            pSVar47 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          ppSVar2 = &(__this_13->fields)._normalLabelText;
          (__this_13->fields)._normalLabelText = pSVar47;
          il2cpp_runtime_helper_022b4080(ppSVar2,pSVar47);
          x = pUStack_c0;
          pIVar43 = pIStack_c8;
          if (pMVar36 == (MethodInfo *)0x0) {
            pMVar36 = (MethodInfo *)*ppSVar2;
          }
          (__this_13->fields)._activeLabelText = (System_String_o *)pMVar36;
          il2cpp_runtime_helper_022b4080(&(__this_13->fields)._activeLabelText);
          *(undefined1 *)&(__this_13->fields)._normalLabelOwnsColor = 1;
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_13,pMVar36);
          *(bool *)((long)&(__this_13->fields)._hovered + 2) =
               fStack_110 == *(float *)((long)&(pIVar43->_1).declaringType + 4);
          Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_13,pMVar36);
          pUVar44 = uStack_100;
        }
        __this_12 = pIStack_c8;
        lVar52 = MethodInfo_Void_Add;
        pSVar32 = *(System_Collections_Generic_List_object__o **)&(pIStack_c8->_1).this_arg.bits;
        fVar57 = fStack_f0;
        fVar58 = fStack_ec;
        uVar60 = uStack_e8;
        uVar62 = uStack_e4;
        fVar19 = fStack_e0;
        fVar20 = fStack_dc;
        uVar21 = uStack_d8;
        uVar22 = uStack_d4;
        if (pSVar32 == (System_Collections_Generic_List_object__o *)0x0) break;
        piVar1 = &(pSVar32->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar11 = (pSVar32->fields)._items;
        if (pSVar11 == (System_Object_array *)0x0) break;
        uVar9 = (pSVar32->fields)._size;
        pIVar67 = __this_10;
        if (uVar9 < (uint)pSVar11->max_length) {
          (pSVar32->fields)._size = uVar9 + 1;
          pSVar11->m_Items[(int)uVar9] = (Il2CppObject *)__this_13;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + (int)uVar9);
          iVar56 = *(int *)(TypeInfo_Object + 0xe4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar32,(Il2CppObject *)__this_13,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar52 + 0x20) + 0xc0) + 0x70));
          iVar56 = *(int *)(TypeInfo_Object + 0xe4);
        }
        if (iVar56 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar31 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar44,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar31 != '\0') {
          fVar57 = fStack_f0;
          fVar58 = fStack_ec;
          uVar60 = uStack_e8;
          uVar62 = uStack_e4;
          fVar19 = fStack_e0;
          fVar20 = fStack_dc;
          uVar21 = uStack_d8;
          uVar22 = uStack_d4;
          if (((pUVar44 == (UnityEngine_Transform_o *)0x0) ||
              (__this_11 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar44,(MethodInfo *)0x0),
              fVar57 = fStack_f0, fVar58 = fStack_ec, uVar60 = uStack_e8, uVar62 = uStack_e4,
              fVar19 = fStack_e0, fVar20 = fStack_dc, uVar21 = uStack_d8, uVar22 = uStack_d4,
              __this_11 == (UnityEngine_GameObject_o *)0x0)) ||
             (pIVar42 = UnityEngine_GameObject__AddComponent_object_(__this_11,MethodInfo_AottgSearchResultSelection_AddComponent_AottgSearchResul),
             fVar57 = fStack_f0, fVar58 = fStack_ec, uVar60 = uStack_e8, uVar62 = uStack_e4,
             fVar19 = fStack_e0, fVar20 = fStack_dc, uVar21 = uStack_d8, uVar22 = uStack_d4,
             pIVar42 == (Il2CppObject *)0x0)) break;
          pIVar42[2].klass = __this_12;
          il2cpp_runtime_helper_022b4080(pIVar42 + 2);
          *(float *)&pIVar42[2].monitor = fStack_110;
        }
        fStack_114 = (float)((int)fStack_114 + 1);
        if ((int)fStack_f0 <= (int)fStack_114) {
          return (System_Collections_Generic_List_GisketchSearchEntry__o *)(ulong)(uint)fStack_114;
        }
      }
    }
  }
label_03b8f282:
  uStack_d4 = uVar22;
  uStack_d8 = uVar21;
  fStack_dc = fVar20;
  fStack_e0 = fVar19;
  uStack_e4 = uVar62;
  uStack_e8 = uVar60;
  fStack_ec = fVar58;
  fStack_f0 = fVar57;
  pSVar38 = (System_Collections_Generic_List_GisketchSearchEntry__o *)il2cpp_runtime_helper_022b2c90();
  return pSVar38;
  while (lVar53 = lVar53 + 0x10, (ulong)*(ushort *)(lVar52 + 0x12e) << 4 != lVar53) {
label_03b49770:
    if (*(long *)(*(long *)(lVar52 + 0xb0) + lVar53) == TypeInfo_IDisposable) {
      puVar35 = (undefined8 *)(lVar52 + (long)*(int *)(*(long *)(lVar52 + 0xb0) + 8 + lVar53) * 0x10 + 0x138);
      goto label_03b4979d;
    }
  }
label_03b4977f:
  pSStack_a0 = (System_String_o *)0x3b49789;
  puVar35 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar34,TypeInfo_IDisposable,0);
label_03b4979d:
  pSStack_a0 = (System_String_o *)0x3b497a6;
  (*(code *)*puVar35)(plVar34);
label_03b497a6:
  if (in_stack_ffffffffffffff68 != 0) goto label_03b49dd9;
  if (pSVar38 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
    if (g_data_057a9cc0 == '\0') {
      pSStack_a0 = (System_String_o *)0x3b497df;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Empty_d__6);
      g_data_057a9cc0 = '\x01';
    }
    pSStack_a0 = (System_String_o *)0x3b497f5;
    pSVar38 = (System_Collections_Generic_List_GisketchSearchEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Empty_d__6);
    pSStack_a0 = (System_String_o *)0x3b49802;
    System_Object___ctor((Il2CppObject *)pSVar38,(MethodInfo *)0x0);
    *(undefined4 *)&(pSVar38->fields)._items = 0xfffffffe;
    pSStack_a0 = (System_String_o *)0x3b49810;
    iVar30 = System_Environment__get_CurrentManagedThreadId((MethodInfo *)0x0);
    *(int32_t *)&(pSVar38->fields)._syncRoot = iVar30;
    plVar50 = (long *)0x0;
    if (pSVar38 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b49dcf;
  }
  pIVar43 = (Il2CppClass *)pSVar38->klass;
  uVar4._0_1_ = (pIVar43->_2).rank;
  uVar4._1_1_ = (pIVar43->_2).minimumAlignment;
  if ((ulong)uVar4 != 0) {
    pIVar10 = (pIVar43->_1).interfaceOffsets;
    lVar52 = 0;
    do {
      if (*(long *)((long)&pIVar10->interfaceType + lVar52) == TypeInfo_IEnumerable_GisketchSearchEntry) {
        ppIVar33 = &pIVar43->vtable[*(int *)((long)&pIVar10->offset + lVar52)].methodPtr;
        goto label_03b49881;
      }
      lVar52 = lVar52 + 0x10;
    } while ((ulong)uVar4 << 4 != lVar52);
  }
  pSStack_a0 = (System_String_o *)0x3b49869;
  ppIVar33 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pSVar38,TypeInfo_IEnumerable_GisketchSearchEntry,0);
label_03b49881:
  pSStack_a0 = (System_String_o *)0x3b4988a;
  plVar50 = (long *)(**ppIVar33)(pSVar38,(MethodInfo *)ppIVar33[1]);
  if ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)plVar50 ==
      (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49dde;
  do {
    do {
      pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)
                ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)plVar50)->klass;
      uVar5._0_1_ = (pSVar13->_2).rank;
      uVar5._1_1_ = (pSVar13->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar10 = (pSVar13->_1).interfaceOffsets;
        lVar52 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar52) == TypeInfo_IEnumerator) {
            ppIVar33 = &pSVar13->vtable[*(int *)((long)&pIVar10->offset + lVar52)].methodPtr;
            goto label_03b49903;
          }
          lVar52 = lVar52 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar52);
      }
      pSStack_a0 = (System_String_o *)0x3b498e9;
      ppIVar33 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar50,TypeInfo_IEnumerator,0);
label_03b49903:
      pSStack_a0 = (System_String_o *)0x3b4990c;
      cVar29 = (**ppIVar33)(plVar50,(MethodInfo *)ppIVar33[1]);
      if (cVar29 == '\0') {
        iVar56 = 10;
        lVar52 = 0;
        goto label_03b49ac8;
      }
      pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)
                ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)plVar50)->klass;
      uVar6._0_1_ = (pSVar13->_2).rank;
      uVar6._1_1_ = (pSVar13->_2).minimumAlignment;
      if ((ulong)uVar6 != 0) {
        pIVar10 = (pSVar13->_1).interfaceOffsets;
        lVar52 = 0;
        do {
          if (*(long *)((long)&pIVar10->interfaceType + lVar52) == TypeInfo_IEnumerator_GisketchSearchEntry) {
            ppIVar33 = &pSVar13->vtable[*(int *)((long)&pIVar10->offset + lVar52)].methodPtr;
            goto label_03b49973;
          }
          lVar52 = lVar52 + 0x10;
        } while ((ulong)uVar6 << 4 != lVar52);
      }
      pSStack_a0 = (System_String_o *)0x3b49959;
      ppIVar33 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar50,TypeInfo_IEnumerator_GisketchSearchEntry,0);
label_03b49973:
      pSStack_a0 = (System_String_o *)0x3b4997c;
      auVar64 = (**ppIVar33)(plVar50,(MethodInfo *)ppIVar33[1]);
      pGVar37 = auVar64._0_8_;
      pSStack_a0 = (System_String_o *)0x3b4998a;
      bVar31 = Gisketch_Aottg2UI_Search_GisketchSearchResults__IsActiveControl
                         (pGVar37,(System_String_o *)pGVar15,auVar64._8_8_);
      if ((char)bVar31 == '\0') break;
      if (pGVar37 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) goto label_03b49da7;
      pSStack_a0 = (System_String_o *)0x3b499a2;
      bVar31 = System_String__IsNullOrEmpty((pGVar37->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar31 != '\0') break;
      if (__this_06 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49db1;
      pSStack_a0 = (System_String_o *)0x3b499c7;
      bVar31 = System_Collections_Generic_HashSet_object___Contains
                         (__this_06,(Il2CppObject *)(pGVar37->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
    } while ((char)bVar31 == '\0');
    lVar52 = MethodInfo_Void_Add;
    if (__this_04 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      pSStack_a0 = (System_String_o *)0x3b49d9d;
      il2cpp_runtime_helper_022b2c90();
label_03b49d9d:
      pSStack_a0 = (System_String_o *)0x3b49da2;
      il2cpp_runtime_helper_022b2c90();
      goto label_03b49da2;
    }
    piVar1 = &(__this_04->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar12 = (__this_04->fields)._items;
    if (pGVar12 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto label_03b49d9d;
    uVar9 = (__this_04->fields)._size;
    if (uVar9 < (uint)pGVar12->max_length) {
      (__this_04->fields)._size = uVar9 + 1;
      pGVar12->m_Items[(int)uVar9] = pGVar37;
      pSStack_a0 = (System_String_o *)0x3b49a1c;
      il2cpp_runtime_helper_022b4080();
    }
    else {
      pSStack_a0 = (System_String_o *)0x3b49aba;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pGVar37,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar52 + 0x20) + 0xc0) + 0x70));
    }
    if (pGVar37 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
      pSStack_a0 = (System_String_o *)0x3b49a30;
      bVar31 = System_String__IsNullOrEmpty((pGVar37->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar31 == '\0') {
        pSStack_a0 = (System_String_o *)0x3b49a42;
        bVar31 = System_String__IsNullOrEmpty((System_String_o *)pGVar15,(MethodInfo *)0x0);
        if ((char)bVar31 == '\0') {
          pSStack_a0 = (System_String_o *)0x3b49a5d;
          bVar31 = System_String__Equals_3af50f0
                             ((pGVar37->fields)._ScreenId_k__BackingField,(System_String_o *)pGVar15,5,
                              (MethodInfo *)0x0);
          if ((char)bVar31 != '\0') {
            pSStack_a0 = (System_String_o *)0x3b49a70;
            bVar31 = System_String__IsNullOrEmpty
                               ((pGVar37->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
            if ((char)bVar31 == '\0') {
              if (__this_05 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_03b49dca;
              pSStack_a0 = (System_String_o *)0x3b49a99;
              System_Collections_Generic_HashSet_object___Add
                        (__this_05,(Il2CppObject *)(pGVar37->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Add);
            }
          }
        }
      }
    }
  } while( true );
joined_r0x03b4a097:
  lVar18 = lVar53;
  if ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)plVar50 !=
      (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    pSVar13 = (System_Collections_Generic_IEqualityComparer_T__c *)
              ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)plVar50)->klass;
    uVar8._0_1_ = (pSVar13->_2).rank;
    uVar8._1_1_ = (pSVar13->_2).minimumAlignment;
    if ((ulong)uVar8 != 0) {
      pIVar10 = (pSVar13->_1).interfaceOffsets;
      lVar53 = 0;
      do {
        if (*(long *)((long)&pIVar10->interfaceType + lVar53) == TypeInfo_IDisposable) {
          ppIVar33 = &pSVar13->vtable[*(int *)((long)&pIVar10->offset + lVar53)].methodPtr;
          goto label_03b4a0ed;
        }
        lVar53 = lVar53 + 0x10;
      } while ((ulong)uVar8 << 4 != lVar53);
    }
    pSStack_a0 = (System_String_o *)0x3b4a0d9;
    ppIVar33 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(plVar50,TypeInfo_IDisposable,0);
label_03b4a0ed:
    pSStack_a0 = (System_String_o *)0x3b4a0f6;
    (**ppIVar33)(plVar50,(MethodInfo *)ppIVar33[1]);
  }
  if (lVar52 == 0) {
    pSStack_a0 = (System_String_o *)&g_data_03b4a1c5;
    _Unwind_Resume(lVar18);
  }
  pSStack_a0 = (System_String_o *)0x3b4a107;
  lVar53 = il2cpp_runtime_helper_022fefe0();
  lVar52 = lVar18;
  goto joined_r0x03b4a097;
code_r0x03b49c0a:
  pSStack_a0 = (System_String_o *)0x3b49c1c;
  bVar31 = System_Collections_Generic_HashSet_object___Contains
                     (__this_05,(Il2CppObject *)(pGStack_38->fields)._TargetId_k__BackingField,MethodInfo_Boolean_Contains);
  if ((char)bVar31 == '\0') {
label_03b49c20:
    lVar52 = MethodInfo_Void_Add;
    piVar1 = &(__this_04->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar12 = (__this_04->fields)._items;
    if (pGVar12 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto label_03b49dac;
    uVar9 = (__this_04->fields)._size;
    if (uVar9 < (uint)pGVar12->max_length) {
      (__this_04->fields)._size = uVar9 + 1;
      pGVar12->m_Items[(int)uVar9] = pGStack_38;
      pSStack_a0 = (System_String_o *)0x3b49c59;
      il2cpp_runtime_helper_022b4080(pGVar12->m_Items + (int)uVar9,pGStack_38);
    }
    else {
      pSStack_a0 = (System_String_o *)0x3b49bda;
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)pGStack_38,
                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar52 + 0x20) + 0xc0) + 0x70));
    }
  }
  goto label_03b49bda;
label_03b49d6d:
  pSStack_a0 = (System_String_o *)0x3b49d72;
  il2cpp_runtime_helper_022b2c90();
label_03b49d72:
  pSStack_a0 = (System_String_o *)0x3b49d86;
  __this_03.fields._8_8_ = __this_05;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
  __this_03.fields._current = _Var68.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  return __this_04;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___ctor (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, const MethodInfo* method);
// 0x3b90250

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_00;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_01;
  
  if (g_data_057a9ebb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdownItemFee);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchDropdownItemFeedback);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
    g_data_057a9ebb = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GisketchSearchEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
  (__this->fields)._results = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._results,__this_00);
  __this_01 = (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchDropdownItemFeedback);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdownItemFee);
  (__this->fields)._feedback = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._feedback);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$<Setup>b__12_0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__12_0 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* __, const MethodInfo* method);
// 0x3b90310

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__12_0
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *__,
               MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  (__this->fields)._pointerLockPosition.fields.y = 0.0;
  UVar1 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  *(undefined1 *)((long)&(__this->fields)._hasAnimatedResults + 1) = 1;
  (__this->fields)._pointerSelectionLocked = (int)UVar1.fields._0_8_;
  (__this->fields)._pointerLockPosition.fields.x = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)__);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchPaletteControl$$<Setup>b__12_1
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__12_1 (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* __this, System_String_o* __, const MethodInfo* method);
// 0x3b90340

void Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl___Setup_b__12_1
               (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this,System_String_o *__,
               MethodInfo *method)

{
  int iVar1;
  float fVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  float fVar3;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_04;
  MethodInfo *in_RCX;
  Gisketch_Aottg2UI_GisketchUIRoot_o *extraout_RDX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *unaff_RBX;
  undefined1 *puVar7;
  float index;
  int32_t index_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar8;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_05;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_06;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_07;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar9 [16];
  undefined1 auStack_18 [8];
  
  puVar7 = auStack_18;
  if (g_data_057a9eb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
    g_data_057a9eb0 = '\x01';
  }
  __this_05 = (__this->fields)._results;
  if (__this_05 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
label_03b8f352:
    __this_06 = (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    root = extraout_RDX;
    unaff_RBX = __this;
  }
  else {
    if ((__this_05->fields)._size == 0) {
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Refresh(__this,(MethodInfo *)__);
      __this_05 = (__this->fields)._results;
      if (__this_05 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) goto label_03b8f352;
    }
    iVar1 = (__this_05->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    fVar2 = (__this->fields)._pointerLockPosition.fields.y;
    in_RCX = (MethodInfo *)(ulong)(uint)fVar2;
    fVar3 = (float)(iVar1 - 1);
    if ((int)fVar2 <= (int)fVar3) {
      fVar3 = fVar2;
    }
    index = 0.0;
    if (-1 < (int)fVar2) {
      index = fVar3;
    }
    __ = (System_String_o *)
         System_Collections_Generic_List_object___get_Item
                   ((System_Collections_Generic_List_object__o *)__this_05,(int32_t)index,MethodInfo_GisketchSearchEntry_get_Item);
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
           UnityEngine_Component__GetComponentInParent_object_((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot)
    ;
    puVar7 = (undefined1 *)register0x00000020;
    __this_06 = __this;
  }
  *(undefined8 *)(puVar7 + -8) = unaff_R15;
  *(undefined8 *)(puVar7 + -0x10) = unaff_R14;
  *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar7 + -0x18) = unaff_RBX;
  if (g_data_057a9eb8 == '\0') {
    *(undefined8 *)(puVar7 + -0x20) = 0x3b8f383;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eb8 = '\x01';
  }
  if ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)__ !=
      (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar7 + -0x20) = 0x3b8f3a7;
      il2cpp_runtime_helper_02337ed0();
    }
    index_00 = 0;
    *(undefined8 *)(puVar7 + -0x20) = 0x3b8f3b3;
    pGVar8 = root;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((root->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          return;
        }
        *(undefined8 *)(puVar7 + -0x20) = 0x3b8f3d3;
        pGVar8 = root;
        Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__CloseResults(__this_06,root,0,in_RCX);
        index_00 = (int32_t)pGVar8;
        __this_00 = (root->fields)._Theme_k__BackingField;
        pGVar8 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          *(undefined8 *)(puVar7 + -0x20) = 0x3b8f3e8;
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                    ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Actions_GisketchSearchActivator__Activate
                    ((Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)__,root,method_00);
          return;
        }
      }
      *(undefined8 *)(puVar7 + -0x20) = 0x3b8f403;
      auVar9 = il2cpp_runtime_helper_022b2c90();
      *(Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o **)(puVar7 + -0x20) = __this_06;
      *(System_String_o **)(puVar7 + -0x28) = __;
      *(undefined8 *)(puVar7 + -0x30) = unaff_R12;
      *(Gisketch_Aottg2UI_GisketchUIRoot_o **)(puVar7 + -0x38) = root;
      *(long *)(puVar7 + -0x40) = auVar9._0_8_;
      *(int32_t *)(puVar7 + -0x3c) = index_00;
      if (g_data_057a9eb2 == '\0') {
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f43d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f449;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f455;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f461;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f46d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchDefinition);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f479;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSearchEntry_get_Item);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f485;
        il2cpp_runtime_helper_023445d0(&"slideDown");
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f491;
        il2cpp_runtime_helper_023445d0(&"percent");
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f49d;
        il2cpp_runtime_helper_023445d0(&"search-results");
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f4a9;
        il2cpp_runtime_helper_023445d0(&"searchResultItem");
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f4b5;
        il2cpp_runtime_helper_023445d0(&"Button");
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f4c1;
        il2cpp_runtime_helper_023445d0(&"search-result-");
        g_data_057a9eb2 = '\x01';
      }
      __this_01 = *(System_Collections_Generic_List_object__o **)&(pGVar8->fields)._buildOnStart;
      __this_07 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f4e6;
        __this_02 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)
                    System_Collections_Generic_List_object___get_Item(__this_01,index_00,MethodInfo_GisketchSearchEntry_get_Item);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f4f8;
        __this_03 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
        *(undefined8 *)(puVar7 + -0x48) = 0x3b8f505;
        __this_07 = __this_03;
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
        if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_03->fields).type = "Button";
          *(undefined8 *)(puVar7 + -0x48) = 0x3b8f527;
          il2cpp_runtime_helper_022b4080(&__this_03->fields);
          *(undefined8 *)(puVar7 + -0x48) = 0x3b8f533;
          pSVar5 = System_Int32__ToString((int32_t)(puVar7 + -0x3c),(MethodInfo *)0x0);
          *(undefined8 *)(puVar7 + -0x48) = 0x3b8f547;
          pSVar5 = System_String__Concat_3ae5ba0("search-result-",pSVar5,(MethodInfo *)0x0);
          __this_07 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_03->fields).id;
          (__this_03->fields).id = pSVar5;
          *(undefined8 *)(puVar7 + -0x48) = 0x3b8f559;
          il2cpp_runtime_helper_022b4080();
          if (__this_02 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f56f;
            pSVar5 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
                               (__this_02,auVar9._8_8_,(MethodInfo *)0x0);
            (__this_03->fields).text = pSVar5;
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f581;
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).text,pSVar5);
            (__this_03->fields).icon = (__this_02->fields)._Icon_k__BackingField;
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f594;
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).icon);
            *(undefined1 *)&(__this_03->fields).hasIcon = 1;
            (__this_03->fields).style = "searchResultItem";
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f5b3;
            il2cpp_runtime_helper_022b4080(&(__this_03->fields).style);
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f5c2;
            pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
            *(undefined8 *)(puVar7 + -0x48) = 0x3b8f5cf;
            __this_07 = pGVar6;
            Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                      ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar6,(MethodInfo *)0x0);
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar6->fields).type = "slideDown";
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f5ef;
              il2cpp_runtime_helper_022b4080(&pGVar6->fields);
              (pGVar6->fields).id = "search-results";
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f609;
              il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id);
              *(undefined4 *)&(pGVar6->fields).text = 0x3df5c28f;
              *(undefined4 *)&(pGVar6->fields).textKey = 0x3ccccccd;
              *(undefined4 *)((long)&(pGVar6->fields).textKey + 4) = *(undefined4 *)(puVar7 + -0x3c);
              (__this_03->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pGVar6;
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f636;
              il2cpp_runtime_helper_022b4080(&(__this_03->fields).motion);
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f645;
              __this_04 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f652;
              Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_04,(MethodInfo *)0x0);
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f661;
              pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
              *(undefined8 *)(puVar7 + -0x48) = 0x3b8f66e;
              __this_07 = pGVar6;
              Gisketch_Aottg2UI_Data_GisketchLength___ctor
                        ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6,(MethodInfo *)0x0);
              if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                *(undefined4 *)&(pGVar6->fields).type = 0x42c80000;
                __this_07 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar6->fields).id;
                (pGVar6->fields).id = "percent";
                *(undefined8 *)(puVar7 + -0x48) = 0x3b8f698;
                il2cpp_runtime_helper_022b4080();
                if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                  (__this_04->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)pGVar6;
                  *(undefined8 *)(puVar7 + -0x48) = 0x3b8f6b0;
                  il2cpp_runtime_helper_022b4080(&(__this_04->fields).width,pGVar6);
                  (__this_03->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_04;
                  *(undefined8 *)(puVar7 + -0x48) = 0x3b8f6c8;
                  il2cpp_runtime_helper_022b4080(&(__this_03->fields).search);
                  *(undefined8 *)(puVar7 + -0x48) = 0x3b8f6d7;
                  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchDefinition)
                  ;
                  *(undefined8 *)(puVar7 + -0x48) = 0x3b8f6e4;
                  __this_07 = pGVar6;
                  Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor
                            ((Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6,(MethodInfo *)0x0);
                  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    *(undefined1 *)((long)&(pGVar6->fields).style + 1) = 1;
                    (__this_03->fields).popover = (System_String_o *)pGVar6;
                    *(undefined8 *)(puVar7 + -0x48) = 0x3b8f707;
                    il2cpp_runtime_helper_022b4080(&(__this_03->fields).popover,pGVar6);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      *(undefined8 *)(puVar7 + -0x48) = 0x3b8f71b;
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}



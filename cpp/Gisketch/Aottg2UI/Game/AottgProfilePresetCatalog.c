// Type: Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePresetCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Avatars
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars (const MethodInfo* method);
// 0x451f6d0

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_Fields *pGVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o item;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  char cVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_AottgProfilePreset__o *__this_02;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar15;
  MethodInfo *method_00;
  long lVar16;
  long unaff_R13;
  undefined8 uVar17;
  undefined1 auVar18 [12];
  System_String_o *in_stack_ffffffffffffff28;
  System_String_o *in_stack_ffffffffffffff30;
  System_String_o *in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff40;
  bool_conflict bVar19;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_b8;
  System_Collections_Generic_List_AottgProfilePreset__o *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  System_String_o *pSStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  System_String_o *local_68;
  Il2CppMethodPointer local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod local_48;
  char *pcStack_40;
  
  if (g_data_057aee65 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfilePreset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgProfilePreset_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgProfilePreset);
    il2cpp_runtime_helper_023445d0(&"Data/Info/ProfileIconInfo");
    il2cpp_runtime_helper_023445d0(&"Gisketch1");
    il2cpp_runtime_helper_023445d0(&"count=");
    il2cpp_runtime_helper_023445d0(&"load");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/Gisketch1Icon");
    il2cpp_runtime_helper_023445d0(&"Gisketch");
    il2cpp_runtime_helper_023445d0(&"Icons");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/");
    il2cpp_runtime_helper_023445d0(&"ProfilePresetCatalog.Avatars");
    g_data_057aee65 = '\x01';
  }
  local_48 = (InvokerMethod)0x0;
  pcStack_40 = (char *)0x0;
  local_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  bVar19 = 0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_b8,"ProfilePresetCatalog.Avatars","load",(MethodInfo *)0x0)
  ;
  __this_02 = (System_Collections_Generic_List_AottgProfilePreset__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgProfilePreset);
  method_00 = MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset;
  System_Collections_Generic_List_AottgProfilePreset____ctor(__this_02,(MethodInfo_3575570 *)MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson("Data/Info/ProfileIconInfo",method_00);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x0451f916:
    local_98 = __this_02;
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      plVar11 = (long *)0x0;
      if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0451fc79;
      plVar9 = (long *)(*(pSVar8->klass->vtable)._27_get_Children.methodPtr)
                                 (pSVar8,(pSVar8->klass->vtable)._27_get_Children.method);
      plVar11 = (long *)0x0;
      if (plVar9 == (long *)0x0) goto label_0451fc7e;
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IEnumerable_JSONNode) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + lVar5 + 0x138);
            goto label_0451f9b1;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IEnumerable_JSONNode,0);
label_0451f9b1:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 != (long *)0x0) {
label_0451fa0a:
        unaff_R13 = 0;
        lVar5 = *plVar11;
        if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
              puVar10 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + lVar5 + 0x138);
              goto label_0451fa63;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IEnumerator,0);
label_0451fa63:
        cVar6 = (*(code *)*puVar10)(plVar11,puVar10[1]);
        if (cVar6 == '\0') goto label_0451fe33;
        lVar5 = *plVar11;
        if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IEnumerator_JSONNode) {
              puVar10 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + lVar5 + 0x138);
              goto label_0451fad3;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IEnumerator_JSONNode,0);
label_0451fad3:
        plVar9 = (long *)(*(code *)*puVar10)(plVar11,puVar10[1]);
        if (plVar9 != (long *)0x0) {
          pSVar12 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9);
          bVar7 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            if (g_data_057aee6c == '\0') {
              il2cpp_runtime_helper_023445d0(&"Main Background ");
              il2cpp_runtime_helper_023445d0(&"MainBackground");
              g_data_057aee6c = '\x01';
            }
            bVar7 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              if (pSVar12 == (System_String_o *)0x0) goto label_0451fc6f;
              pSVar13 = System_String__Replace_3af9030(pSVar12,"MainBackground","Main Background ",(MethodInfo *)0x0);
            }
            else {
              pSVar13 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            pSVar14 = System_String__Concat_3af7150("UI/Icons/Profile/",pSVar12,"Icon",(MethodInfo *)0x0);
            local_b8.fields._detail = (System_String_o *)0x0;
            local_b8.fields._startMs = 0;
            local_b8.fields._area = pSVar12;
            il2cpp_runtime_helper_022b4080(&local_b8,pSVar12);
            local_b8.fields._detail = pSVar13;
            il2cpp_runtime_helper_022b4080(&local_b8.fields._detail,pSVar13);
            local_b8.fields._startMs = (int64_t)pSVar14;
            il2cpp_runtime_helper_022b4080(&local_b8.fields._startMs,pSVar14);
            lVar5 = MethodInfo_Void_Add;
            if (local_98 == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) goto label_0451fc6a;
            local_68 = (System_String_o *)local_b8.fields._startMs;
            local_78 = local_b8.fields._area._0_4_;
            uStack_74 = local_b8.fields._area._4_4_;
            uStack_70 = local_b8.fields._detail._0_4_;
            uStack_6c = local_b8.fields._detail._4_4_;
            piVar1 = &(local_98->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar15 = (local_98->fields)._items;
            if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto label_0451fc65;
            uVar4 = (local_98->fields)._size;
            if (uVar4 < (uint)pGVar15->max_length) {
              (local_98->fields)._size = uVar4 + 1;
              pGVar15->m_Items[(int)uVar4].fields.Sprite = (System_String_o *)local_b8.fields._startMs;
              pGVar2 = &pGVar15->m_Items[(int)uVar4].fields;
              *(undefined4 *)&pGVar2->Key = local_b8.fields._area._0_4_;
              *(undefined4 *)((long)&pGVar2->Key + 4) = local_b8.fields._area._4_4_;
              *(undefined4 *)&pGVar2->Label = local_b8.fields._detail._0_4_;
              *(undefined4 *)((long)&pGVar2->Label + 4) = local_b8.fields._detail._4_4_;
              il2cpp_runtime_helper_022b4080(&pGVar15->m_Items[(int)uVar4].fields,0);
            }
            else {
              item.fields.Label = local_b8.fields._detail;
              item.fields.Key = local_b8.fields._area;
              item.fields.Sprite = (System_String_o *)local_b8.fields._startMs;
              in_stack_ffffffffffffff28 = local_b8.fields._area;
              in_stack_ffffffffffffff30 = local_b8.fields._detail;
              in_stack_ffffffffffffff38 = (System_String_o *)local_b8.fields._startMs;
              System_Collections_Generic_List_AottgProfilePreset___AddWithResize
                        (local_98,item,
                         *(MethodInfo_3575F90 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
          }
          goto label_0451fa0a;
        }
        il2cpp_runtime_helper_022b2c90();
label_0451fc65:
        il2cpp_runtime_helper_022b2c90();
label_0451fc6a:
        il2cpp_runtime_helper_022b2c90();
label_0451fc6f:
        il2cpp_runtime_helper_022b2c90();
        goto label_0451fc74;
      }
      goto label_0451fc83;
    }
  }
  else {
    plVar11 = (long *)0x0;
    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar8,"Icons",(pSVar8->klass->vtable)._7_get_Item.method);
      iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
      goto joined_r0x0451f916;
    }
label_0451fc74:
    il2cpp_runtime_helper_022b2c90();
label_0451fc79:
    il2cpp_runtime_helper_022b2c90();
label_0451fc7e:
    il2cpp_runtime_helper_022b2c90();
label_0451fc83:
    auVar18 = il2cpp_runtime_helper_022b2c90();
    uVar17 = auVar18._0_8_;
    if (auVar18._8_4_ != 1) {
      unaff_R13 = 0;
      if (plVar11 != (long *)0x0) {
        lVar5 = *plVar11;
        if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
              puVar10 = (undefined8 *)
                        (lVar5 + (long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
              goto label_04520062;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_04520062:
        (*(code *)*puVar10)(plVar11,puVar10[1]);
      }
      if (auVar18._8_4_ == 1) goto label_04520079;
      goto label_04520101;
    }
    plVar9 = (long *)__cxa_begin_catch();
    unaff_R13 = *plVar9;
    __cxa_end_catch();
label_0451fe33:
    if (plVar11 != (long *)0x0) {
      lVar5 = *plVar11;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
            puVar10 = (undefined8 *)
                      (lVar5 + (long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
            goto label_0451fe9d;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_0451fe9d:
      (*(code *)*puVar10)(plVar11,puVar10[1]);
    }
    if (unaff_R13 != 0) goto label_045200b0;
  }
  if (local_98 == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) goto label_045200ab;
  if (0 < (local_98->fields)._size) {
    pGVar15 = System_Collections_Generic_List_AottgProfilePreset___ToArray(local_98,MethodInfo_AottgProfilePreset_ToArray);
    if (pGVar15 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto label_0451ff9a;
    il2cpp_runtime_helper_022b2c90();
  }
  pGVar15 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgProfilePreset,1);
  pSVar13 = "UI/Icons/Profile/Gisketch1Icon";
  pSVar12 = "Gisketch";
  uStack_88 = (System_String_o *)0x0;
  pSStack_80 = (System_String_o *)0x0;
  local_90 = "Gisketch1";
  il2cpp_runtime_helper_022b4080(&local_90);
  uStack_88 = pSVar12;
  il2cpp_runtime_helper_022b4080(&uStack_88,pSVar12);
  pSStack_80 = pSVar13;
  il2cpp_runtime_helper_022b4080(&pSStack_80);
  if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto label_045200b8;
  local_b8.fields._startMs = (int64_t)pSStack_80;
  local_b8.fields._area = local_90;
  local_b8.fields._detail = uStack_88;
  if ((int)pGVar15->max_length == 0) {
    while( true ) {
      il2cpp_runtime_helper_022b2ca0();
      auVar18 = il2cpp_runtime_helper_022fefe0(unaff_R13);
      uVar17 = auVar18._0_8_;
      if (auVar18._8_4_ != 1) break;
label_04520079:
      plVar11 = (long *)__cxa_begin_catch(uVar17);
      lVar5 = *plVar11;
      __cxa_end_catch();
      __this_00.fields._detail = in_stack_ffffffffffffff30;
      __this_00.fields._area = in_stack_ffffffffffffff28;
      __this_00.fields._startMs = (int64_t)in_stack_ffffffffffffff38;
      __this_00.fields._enabled = in_stack_ffffffffffffff40;
      __this_00.fields._hotLoop = bVar19;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)&local_58);
      if (lVar5 == 0) {
        return (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0;
      }
      il2cpp_runtime_helper_022fefe0(lVar5);
label_045200ab:
      il2cpp_runtime_helper_022b2c90();
label_045200b0:
      il2cpp_runtime_helper_022fefe0(unaff_R13);
label_045200b8:
      il2cpp_runtime_helper_022b2c90();
    }
label_04520101:
    __this_01.fields._detail = in_stack_ffffffffffffff30;
    __this_01.fields._area = in_stack_ffffffffffffff28;
    __this_01.fields._startMs = (int64_t)in_stack_ffffffffffffff38;
    __this_01.fields._enabled = in_stack_ffffffffffffff40;
    __this_01.fields._hotLoop = bVar19;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_58);
    _Unwind_Resume(uVar17);
  }
  pGVar15->m_Items[0].fields.Sprite = pSStack_80;
  *(int *)&pGVar15->m_Items[0].fields.Key = (int)local_90;
  *(undefined4 *)((long)&pGVar15->m_Items[0].fields.Key + 4) = local_90._4_4_;
  *(int *)&pGVar15->m_Items[0].fields.Label = (int)uStack_88;
  *(undefined4 *)((long)&pGVar15->m_Items[0].fields.Label + 4) = uStack_88._4_4_;
  il2cpp_runtime_helper_022b4080(pGVar15->m_Items);
label_0451ff9a:
  bVar19 = (bool_conflict)pGVar15->max_length;
  pSVar12 = System_Int32__ToString((int32_t)&stack0xffffffffffffff44,(MethodInfo *)0x0);
  pSVar12 = System_String__Concat_3ae5ba0("count=",pSVar12,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfilePresetCatalog.Avatars",pSVar12,(MethodInfo *)0x0);
  __this.fields._detail = in_stack_ffffffffffffff30;
  __this.fields._area = in_stack_ffffffffffffff28;
  __this.fields._startMs = (int64_t)in_stack_ffffffffffffff38;
  __this.fields._enabled = in_stack_ffffffffffffff40;
  __this.fields._hotLoop = bVar19;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)&local_58);
  return pGVar15;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Banners
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners (const MethodInfo* method);
// 0x45201a0

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_Fields *pGVar2;
  int iVar3;
  uint uVar4;
  Il2CppClass *pIVar5;
  long lVar6;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o item;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  char cVar7;
  bool_conflict bVar8;
  System_Collections_Generic_List_AottgProfilePreset__o *__this_02;
  SimpleJSONFixed_JSONNode_o *a;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar9;
  long *plVar10;
  undefined8 *puVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  System_String_o *pSVar14;
  MethodInfo *method_00;
  long lVar15;
  long *unaff_R13;
  undefined8 uVar16;
  undefined1 auVar17 [12];
  System_String_o *in_stack_ffffffffffffff28;
  System_String_o *in_stack_ffffffffffffff30;
  System_String_o *in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff40;
  bool_conflict bVar18;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_b8;
  System_Collections_Generic_List_AottgProfilePreset__o *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  System_String_o *pSStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  System_String_o *local_68;
  Il2CppMethodPointer local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod local_48;
  char *pcStack_40;
  
  if (g_data_057aee66 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfilePreset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgProfilePreset_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgProfilePreset);
    il2cpp_runtime_helper_023445d0(&"Data/Info/BannerInfo");
    il2cpp_runtime_helper_023445d0(&"ProfilePresetCatalog.Banners");
    il2cpp_runtime_helper_023445d0(&"count=");
    il2cpp_runtime_helper_023445d0(&"load");
    il2cpp_runtime_helper_023445d0(&"Texture");
    il2cpp_runtime_helper_023445d0(&"Banners");
    il2cpp_runtime_helper_023445d0(&"MainBackground2Texture");
    il2cpp_runtime_helper_023445d0(&"Main Background 2");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"UI/Backgrounds/MainBackground2Texture");
    g_data_057aee66 = '\x01';
  }
  local_48 = (InvokerMethod)0x0;
  pcStack_40 = (char *)0x0;
  local_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  bVar18 = 0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_b8,"ProfilePresetCatalog.Banners","load",(MethodInfo *)0x0)
  ;
  __this_02 = (System_Collections_Generic_List_AottgProfilePreset__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgProfilePreset);
  method_00 = MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset;
  System_Collections_Generic_List_AottgProfilePreset____ctor(__this_02,(MethodInfo_3575570 *)MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
  local_98 = __this_02;
  a = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson("Data/Info/BannerInfo",method_00);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pGVar9 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
joined_r0x045203f0:
    if (iVar3 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pGVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (pGVar9 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto label_04520784;
      pIVar5 = (pGVar9->obj).klass;
      plVar10 = (long *)(*(((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->_27_get_Children).methodPtr)
                                  (pGVar9,(((SimpleJSONFixed_JSONNode_VTable *)pIVar5->vtable)->
                                          _27_get_Children).method);
      if (plVar10 == (long *)0x0) goto label_04520789;
      lVar6 = *plVar10;
      if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IEnumerable_JSONNode) {
            puVar11 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + lVar6 + 0x138);
            goto label_04520491;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IEnumerable_JSONNode,0);
label_04520491:
      unaff_R13 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      if (unaff_R13 != (long *)0x0) {
label_045204e9:
        pGVar9 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0;
        lVar6 = *unaff_R13;
        if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
              puVar11 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + lVar6 + 0x138);
              goto label_04520543;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator,0);
label_04520543:
        cVar7 = (*(code *)*puVar11)(unaff_R13,puVar11[1]);
        if (cVar7 == '\0') goto label_04520962;
        lVar6 = *unaff_R13;
        if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IEnumerator_JSONNode) {
              puVar11 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + lVar6 + 0x138);
              goto label_045205b3;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IEnumerator_JSONNode,0);
label_045205b3:
        plVar10 = (long *)(*(code *)*puVar11)(unaff_R13,puVar11[1]);
        if (plVar10 != (long *)0x0) {
          pSVar12 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10);
          bVar8 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            if (pSVar12 == (System_String_o *)0x0) goto label_04520775;
            pSVar13 = System_String__Replace_3af9030(pSVar12,"Texture","",(MethodInfo *)0x0);
            if (g_data_057aee6c == '\0') {
              il2cpp_runtime_helper_023445d0(&"Main Background ");
              il2cpp_runtime_helper_023445d0(&"MainBackground");
              g_data_057aee6c = '\x01';
            }
            bVar8 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              if (pSVar13 == (System_String_o *)0x0) goto label_0452077a;
              pSVar13 = System_String__Replace_3af9030(pSVar13,"MainBackground","Main Background ",(MethodInfo *)0x0);
            }
            else {
              pSVar13 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            pSVar14 = System_String__Concat_3ae5ba0("UI/Backgrounds/",pSVar12,(MethodInfo *)0x0);
            local_b8.fields._detail = (System_String_o *)0x0;
            local_b8.fields._startMs = 0;
            local_b8.fields._area = pSVar12;
            il2cpp_runtime_helper_022b4080(&local_b8,pSVar12);
            local_b8.fields._detail = pSVar13;
            il2cpp_runtime_helper_022b4080(&local_b8.fields._detail,pSVar13);
            local_b8.fields._startMs = (int64_t)pSVar14;
            il2cpp_runtime_helper_022b4080(&local_b8.fields._startMs,pSVar14);
            lVar6 = MethodInfo_Void_Add;
            if (local_98 == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) goto label_04520770;
            local_68 = (System_String_o *)local_b8.fields._startMs;
            local_78 = local_b8.fields._area._0_4_;
            uStack_74 = local_b8.fields._area._4_4_;
            uStack_70 = local_b8.fields._detail._0_4_;
            uStack_6c = local_b8.fields._detail._4_4_;
            piVar1 = &(local_98->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar9 = (local_98->fields)._items;
            if (pGVar9 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto label_0452076b;
            uVar4 = (local_98->fields)._size;
            if (uVar4 < (uint)pGVar9->max_length) {
              (local_98->fields)._size = uVar4 + 1;
              pGVar9->m_Items[(int)uVar4].fields.Sprite = (System_String_o *)local_b8.fields._startMs;
              pGVar2 = &pGVar9->m_Items[(int)uVar4].fields;
              *(undefined4 *)&pGVar2->Key = local_b8.fields._area._0_4_;
              *(undefined4 *)((long)&pGVar2->Key + 4) = local_b8.fields._area._4_4_;
              *(undefined4 *)&pGVar2->Label = local_b8.fields._detail._0_4_;
              *(undefined4 *)((long)&pGVar2->Label + 4) = local_b8.fields._detail._4_4_;
              il2cpp_runtime_helper_022b4080(&pGVar9->m_Items[(int)uVar4].fields,0);
            }
            else {
              item.fields.Label = local_b8.fields._detail;
              item.fields.Key = local_b8.fields._area;
              item.fields.Sprite = (System_String_o *)local_b8.fields._startMs;
              in_stack_ffffffffffffff28 = local_b8.fields._area;
              in_stack_ffffffffffffff30 = local_b8.fields._detail;
              in_stack_ffffffffffffff38 = (System_String_o *)local_b8.fields._startMs;
              System_Collections_Generic_List_AottgProfilePreset___AddWithResize
                        (local_98,item,
                         *(MethodInfo_3575F90 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
          }
          goto label_045204e9;
        }
        il2cpp_runtime_helper_022b2c90();
label_0452076b:
        il2cpp_runtime_helper_022b2c90();
label_04520770:
        il2cpp_runtime_helper_022b2c90();
label_04520775:
        il2cpp_runtime_helper_022b2c90();
label_0452077a:
        il2cpp_runtime_helper_022b2c90();
        goto label_0452077f;
      }
      goto label_0452078e;
    }
  }
  else {
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pGVar9 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
               (*(a->klass->vtable)._7_get_Item.methodPtr)
                         (a,"Banners",(a->klass->vtable)._7_get_Item.method);
      iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
      goto joined_r0x045203f0;
    }
label_0452077f:
    il2cpp_runtime_helper_022b2c90();
label_04520784:
    il2cpp_runtime_helper_022b2c90();
label_04520789:
    il2cpp_runtime_helper_022b2c90();
label_0452078e:
    auVar17 = il2cpp_runtime_helper_022b2c90();
    uVar16 = auVar17._0_8_;
    if (auVar17._8_4_ != 1) {
      if (unaff_R13 != (long *)0x0) {
        lVar6 = *unaff_R13;
        if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
              puVar11 = (undefined8 *)
                        (lVar6 + (long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
              goto label_04520b92;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_04520b92:
        (*(code *)*puVar11)(unaff_R13,puVar11[1]);
      }
      if (auVar17._8_4_ == 1) goto label_04520ba9;
      goto label_04520c31;
    }
    puVar11 = (undefined8 *)__cxa_begin_catch();
    pGVar9 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)*puVar11;
    __cxa_end_catch();
label_04520962:
    if (unaff_R13 != (long *)0x0) {
      lVar6 = *unaff_R13;
      if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
        lVar15 = 0;
        do {
          if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
            puVar11 = (undefined8 *)
                      (lVar6 + (long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
            goto label_045209cd;
          }
          lVar15 = lVar15 + 0x10;
        } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
      }
      puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(unaff_R13,TypeInfo_IDisposable,0);
label_045209cd:
      (*(code *)*puVar11)(unaff_R13,puVar11[1]);
    }
    if (pGVar9 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto label_04520be0;
  }
  if (local_98 == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) goto label_04520bdb;
  if (0 < (local_98->fields)._size) {
    pGVar9 = System_Collections_Generic_List_AottgProfilePreset___ToArray(local_98,MethodInfo_AottgProfilePreset_ToArray);
    if (pGVar9 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto label_04520aca;
    il2cpp_runtime_helper_022b2c90();
  }
  pGVar9 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgProfilePreset,1);
  pSVar13 = "UI/Backgrounds/MainBackground2Texture";
  pSVar12 = "Main Background 2";
  uStack_88 = (System_String_o *)0x0;
  pSStack_80 = (System_String_o *)0x0;
  local_90 = "MainBackground2Texture";
  il2cpp_runtime_helper_022b4080(&local_90);
  uStack_88 = pSVar12;
  il2cpp_runtime_helper_022b4080(&uStack_88,pSVar12);
  pSStack_80 = pSVar13;
  il2cpp_runtime_helper_022b4080(&pSStack_80);
  if (pGVar9 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto label_04520be8;
  local_b8.fields._startMs = (int64_t)pSStack_80;
  local_b8.fields._area = local_90;
  local_b8.fields._detail = uStack_88;
  if ((int)pGVar9->max_length == 0) {
    while( true ) {
      il2cpp_runtime_helper_022b2ca0();
      auVar17 = il2cpp_runtime_helper_022fefe0(pGVar9);
      uVar16 = auVar17._0_8_;
      if (auVar17._8_4_ != 1) break;
label_04520ba9:
      plVar10 = (long *)__cxa_begin_catch(uVar16);
      lVar6 = *plVar10;
      __cxa_end_catch();
      pGVar9 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0;
      __this_00.fields._detail = in_stack_ffffffffffffff30;
      __this_00.fields._area = in_stack_ffffffffffffff28;
      __this_00.fields._startMs = (int64_t)in_stack_ffffffffffffff38;
      __this_00.fields._enabled = in_stack_ffffffffffffff40;
      __this_00.fields._hotLoop = bVar18;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)&local_58);
      if (lVar6 == 0) {
        return (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0;
      }
      il2cpp_runtime_helper_022fefe0(lVar6);
label_04520bdb:
      il2cpp_runtime_helper_022b2c90();
label_04520be0:
      il2cpp_runtime_helper_022fefe0(pGVar9);
label_04520be8:
      il2cpp_runtime_helper_022b2c90();
    }
label_04520c31:
    __this_01.fields._detail = in_stack_ffffffffffffff30;
    __this_01.fields._area = in_stack_ffffffffffffff28;
    __this_01.fields._startMs = (int64_t)in_stack_ffffffffffffff38;
    __this_01.fields._enabled = in_stack_ffffffffffffff40;
    __this_01.fields._hotLoop = bVar18;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_58);
    _Unwind_Resume(uVar16);
  }
  pGVar9->m_Items[0].fields.Sprite = pSStack_80;
  *(int *)&pGVar9->m_Items[0].fields.Key = (int)local_90;
  *(undefined4 *)((long)&pGVar9->m_Items[0].fields.Key + 4) = local_90._4_4_;
  *(int *)&pGVar9->m_Items[0].fields.Label = (int)uStack_88;
  *(undefined4 *)((long)&pGVar9->m_Items[0].fields.Label + 4) = uStack_88._4_4_;
  il2cpp_runtime_helper_022b4080(pGVar9->m_Items);
label_04520aca:
  bVar18 = (bool_conflict)pGVar9->max_length;
  pSVar12 = System_Int32__ToString((int32_t)&stack0xffffffffffffff44,(MethodInfo *)0x0);
  pSVar12 = System_String__Concat_3ae5ba0("count=",pSVar12,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfilePresetCatalog.Banners",pSVar12,(MethodInfo *)0x0);
  __this.fields._detail = in_stack_ffffffffffffff30;
  __this.fields._area = in_stack_ffffffffffffff28;
  __this.fields._startMs = (int64_t)in_stack_ffffffffffffff38;
  __this.fields._enabled = in_stack_ffffffffffffff40;
  __this.fields._hotLoop = bVar18;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)&local_58);
  return pGVar9;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$AvatarSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite (System_String_o* key, const MethodInfo* method);
// 0x4528d80

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite(System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  System_String_o *pSVar3;
  System_String_c *pSVar4;
  ulong uVar5;
  MethodInfo *in_RCX;
  System_String_o *extraout_RDX;
  ulong unaff_RBX;
  System_String_o **ppSVar6;
  System_String_o *pSVar7;
  MethodInfo *pMVar8;
  MethodInfo *a;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *unaff_R13;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar10;
  System_String_o *str1;
  System_String_o *pSStack_90;
  ulong uStack_88;
  MethodInfo *pMStack_80;
  ulong uStack_78;
  MethodInfo *pMStack_70;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  ulong uStack_50;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGStack_48;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGStack_40;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  
  pMVar8 = (MethodInfo *)key;
  if (g_data_057aee67 == '\0') {
    pSStack_30 = (System_String_o *)0x4528da1;
    il2cpp_runtime_helper_023445d0(&"Gisketch1");
    pSStack_30 = (System_String_o *)0x4528dad;
    il2cpp_runtime_helper_023445d0(&"Icon");
    pMVar8 = (MethodInfo *)&"UI/Icons/Profile/";
    pSStack_30 = (System_String_o *)0x4528db9;
    il2cpp_runtime_helper_023445d0();
    g_data_057aee67 = '\x01';
  }
  pSStack_30 = (System_String_o *)0x4528dc5;
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(pMVar8);
  pSVar3 = "Gisketch1";
  pSVar7 = (System_String_o *)0x0;
  pSStack_30 = (System_String_o *)0x4528ddc;
  pMVar8 = (MethodInfo *)key;
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      unaff_R13 = pGVar2->m_Items;
      unaff_RBX = 0xffffffffffffffff;
      do {
        unaff_RBX = unaff_RBX + 1;
        uVar5 = pGVar2->max_length;
        in_RCX = (MethodInfo *)(long)(int)uVar5;
        if ((long)in_RCX <= (long)unaff_RBX) goto label_04528e33;
        if ((uVar5 & 0xffffffff) <= unaff_RBX) goto label_04528e68;
        pMVar8 = (MethodInfo *)(unaff_R13->fields).Key;
        unaff_R13 = unaff_R13 + 1;
        pSStack_30 = (System_String_o *)0x4528e2a;
        pSVar7 = key;
        bVar1 = System_String__op_Equality((System_String_o *)pMVar8,key,(MethodInfo *)0x0);
        str1 = key;
      } while ((char)bVar1 == '\0');
      goto label_04528e41;
    }
  }
  else {
    str1 = pSVar3;
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
label_04528e41:
      pSVar3 = System_String__Concat_3af7150("UI/Icons/Profile/",str1,"Icon",(MethodInfo *)0x0);
      return pSVar3;
    }
    uVar5 = pGVar2->max_length;
label_04528e33:
    str1 = pSVar3;
    if (uVar5 == 0) goto label_04528e41;
    if ((int)uVar5 != 0) {
      str1 = pGVar2->m_Items[0].fields.Key;
      goto label_04528e41;
    }
label_04528e68:
    pSStack_30 = (System_String_o *)0x4528e6d;
    il2cpp_runtime_helper_022b2ca0();
  }
  pSStack_30 = (System_String_o *)0x4528e72;
  il2cpp_runtime_helper_022b2c90();
  pSStack_38 = pSVar3;
  pSStack_58 = (System_String_o *)0x4528e99;
  a = pMVar8;
  uStack_50 = unaff_RBX;
  pGStack_48 = pGVar2;
  pGStack_40 = unaff_R13;
  pSStack_30 = key;
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)pMVar8,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (pSVar7 != (System_String_o *)0x0) {
      unaff_R13 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_o *)&pSVar7[1].monitor;
      unaff_RBX = 0;
      while( true ) {
        pSVar4 = pSVar7[1].klass;
        in_RCX = (MethodInfo *)(long)(int)pSVar4;
        if ((long)in_RCX <= (long)unaff_RBX) break;
        if (((ulong)pSVar4 & 0xffffffff) <= unaff_RBX) goto label_04528f0c;
        unaff_RBX = unaff_RBX + 1;
        a = (MethodInfo *)(unaff_R13->fields).Key;
        unaff_R13 = unaff_R13 + 1;
        pSStack_58 = (System_String_o *)0x4528ee9;
        bVar1 = System_String__op_Equality((System_String_o *)a,(System_String_o *)pMVar8,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          return (System_String_o *)pMVar8;
        }
      }
      goto label_04528ef2;
    }
  }
  else {
    if (pSVar7 == (System_String_o *)0x0) {
      return extraout_RDX;
    }
    pSVar4 = pSVar7[1].klass;
label_04528ef2:
    if (pSVar4 == (System_String_c *)0x0) {
      return extraout_RDX;
    }
    if ((int)pSVar4 != 0) {
      return pSVar7[1].monitor;
    }
label_04528f0c:
    pSStack_58 = (System_String_o *)0x4528f11;
    il2cpp_runtime_helper_022b2ca0();
  }
  pSStack_58 = (System_String_o *)0x4528f16;
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = a;
  uStack_78 = unaff_RBX;
  pMStack_70 = pMVar8;
  pGStack_68 = unaff_R13;
  pSStack_60 = extraout_RDX;
  pSStack_58 = pSVar7;
  if (g_data_057aee68 == '\0') {
    pMStack_80 = (MethodInfo *)0x4528f41;
    il2cpp_runtime_helper_023445d0(&"MainBackground2Texture");
    pMVar9 = (MethodInfo *)&"UI/Backgrounds/";
    pMStack_80 = (MethodInfo *)0x4528f4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057aee68 = '\x01';
  }
  pMStack_80 = (MethodInfo *)0x4528f59;
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(pMVar9);
  pMVar9 = "MainBackground2Texture";
  pMStack_80 = (MethodInfo *)0x4528f70;
  pMVar8 = a;
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)a,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
label_04529003:
      pMStack_80 = (MethodInfo *)0x4529008;
      il2cpp_runtime_helper_022b2c90();
      pMStack_80 = pMVar9;
      ppSVar6 = &pSStack_90;
      pSStack_90 = (System_String_o *)0x0;
      uStack_88 = unaff_RBX;
      pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(pMVar8);
      bVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite
                        ((System_String_o *)pMVar8,pGVar2,&pSStack_90,in_RCX);
      if ((char)bVar1 == '\0') {
        ppSVar6 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
      }
      return *ppSVar6;
    }
    pGVar10 = pGVar2->m_Items;
    unaff_RBX = 0xffffffffffffffff;
    do {
      unaff_RBX = unaff_RBX + 1;
      uVar5 = pGVar2->max_length;
      in_RCX = (MethodInfo *)(long)(int)uVar5;
      if ((long)in_RCX <= (long)unaff_RBX) goto label_04528fd3;
      if ((uVar5 & 0xffffffff) <= unaff_RBX) goto label_04528ffe;
      pMVar8 = (MethodInfo *)(pGVar10->fields).Key;
      pGVar10 = pGVar10 + 1;
      pMStack_80 = (MethodInfo *)0x4528fca;
      bVar1 = System_String__op_Equality((System_String_o *)pMVar8,(System_String_o *)a,(MethodInfo *)0x0);
    } while ((char)bVar1 == '\0');
  }
  else {
    a = pMVar9;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      uVar5 = pGVar2->max_length;
label_04528fd3:
      a = pMVar9;
      if (uVar5 != 0) {
        if ((int)uVar5 == 0) {
label_04528ffe:
          pMStack_80 = (MethodInfo *)0x4529003;
          il2cpp_runtime_helper_022b2ca0();
          goto label_04529003;
        }
        a = (MethodInfo *)pGVar2->m_Items[0].fields.Key;
      }
    }
  }
  pSVar3 = System_String__Concat_3ae5ba0("UI/Backgrounds/",(System_String_o *)a,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$BannerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite (System_String_o* key, const MethodInfo* method);
// 0x4528f20

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite(System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  ulong uVar3;
  System_String_o *pSVar4;
  MethodInfo *in_RCX;
  ulong unaff_RBX;
  System_String_o **ppSVar5;
  MethodInfo *pMVar6;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar7;
  System_String_o *pSStack_40;
  ulong uStack_38;
  System_String_o *pSStack_30;
  
  pMVar6 = (MethodInfo *)key;
  if (g_data_057aee68 == '\0') {
    pSStack_30 = (System_String_o *)0x4528f41;
    il2cpp_runtime_helper_023445d0(&"MainBackground2Texture");
    pMVar6 = (MethodInfo *)&"UI/Backgrounds/";
    pSStack_30 = (System_String_o *)0x4528f4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057aee68 = '\x01';
  }
  pSStack_30 = (System_String_o *)0x4528f59;
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(pMVar6);
  pSVar4 = "MainBackground2Texture";
  pSStack_30 = (System_String_o *)0x4528f70;
  pMVar6 = (MethodInfo *)key;
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (pGVar2 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
label_04529003:
      pSStack_30 = (System_String_o *)0x4529008;
      il2cpp_runtime_helper_022b2c90();
      pSStack_30 = pSVar4;
      ppSVar5 = &pSStack_40;
      pSStack_40 = (System_String_o *)0x0;
      uStack_38 = unaff_RBX;
      pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(pMVar6);
      bVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite
                        ((System_String_o *)pMVar6,pGVar2,&pSStack_40,in_RCX);
      if ((char)bVar1 == '\0') {
        ppSVar5 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
      }
      return *ppSVar5;
    }
    pGVar7 = pGVar2->m_Items;
    unaff_RBX = 0xffffffffffffffff;
    do {
      unaff_RBX = unaff_RBX + 1;
      uVar3 = pGVar2->max_length;
      in_RCX = (MethodInfo *)(long)(int)uVar3;
      if ((long)in_RCX <= (long)unaff_RBX) goto label_04528fd3;
      if ((uVar3 & 0xffffffff) <= unaff_RBX) goto label_04528ffe;
      pMVar6 = (MethodInfo *)(pGVar7->fields).Key;
      pGVar7 = pGVar7 + 1;
      pSStack_30 = (System_String_o *)0x4528fca;
      bVar1 = System_String__op_Equality((System_String_o *)pMVar6,key,(MethodInfo *)0x0);
    } while ((char)bVar1 == '\0');
  }
  else {
    key = pSVar4;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      uVar3 = pGVar2->max_length;
label_04528fd3:
      key = pSVar4;
      if (uVar3 != 0) {
        if ((int)uVar3 == 0) {
label_04528ffe:
          pSStack_30 = (System_String_o *)0x4529003;
          il2cpp_runtime_helper_022b2ca0();
          goto label_04529003;
        }
        key = pGVar2->m_Items[0].fields.Key;
      }
    }
  }
  pSVar4 = System_String__Concat_3ae5ba0("UI/Backgrounds/",key,(MethodInfo *)0x0);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$PublicAvatarSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicAvatarSprite (System_String_o* key, const MethodInfo* method);
// 0x4529010

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicAvatarSprite(System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets;
  MethodInfo *in_RCX;
  System_String_o **ppSVar2;
  System_String_o *local_18;
  
  ppSVar2 = &local_18;
  local_18 = (System_String_o *)0x0;
  presets = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars((MethodInfo *)key);
  bVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite(key,presets,&local_18,in_RCX);
  if ((char)bVar1 == '\0') {
    ppSVar2 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
  }
  return *ppSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$PublicBannerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicBannerSprite (System_String_o* key, const MethodInfo* method);
// 0x4529120

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__PublicBannerSprite(System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets;
  MethodInfo *in_RCX;
  System_String_o **ppSVar2;
  System_String_o *local_18;
  
  ppSVar2 = &local_18;
  local_18 = (System_String_o *)0x0;
  presets = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners((MethodInfo *)key);
  bVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite(key,presets,&local_18,in_RCX);
  if ((char)bVar1 == '\0') {
    ppSVar2 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
  }
  return *ppSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstAvatarKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey (const MethodInfo* method);
// 0x4529170

System_String_o * Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey(MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *sprite;
  long lVar1;
  System_Collections_Generic_List_GisketchNodeDefinition__o *sprite_00;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Il2CppObject *__this;
  System_String_o *pSVar8;
  Il2CppClass *in_RSI;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  
  if (g_data_057aee69 == '\0') {
    method = (MethodInfo *)&"Gisketch1";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee69 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(method);
  pSVar8 = "Gisketch1";
  if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar2->max_length != 0)) {
    if ((int)pGVar2->max_length == 0) {
      il2cpp_runtime_helper_022b2ca0();
      if ((method != (MethodInfo *)0x0) && (method->name != (char *)0x0)) {
        if ((int)method->name == 0) {
          il2cpp_runtime_helper_022b2ca0();
          if (g_data_057aee6a == '\0') {
            method = (MethodInfo *)&"MainBackground2Texture";
            il2cpp_runtime_helper_023445d0();
            g_data_057aee6a = '\x01';
          }
          pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(method);
          pSVar8 = "MainBackground2Texture";
          if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar2->max_length != 0))
          {
            if ((int)pGVar2->max_length == 0) {
              il2cpp_runtime_helper_022b2ca0();
              if (g_data_057aee6d == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_0);
                il2cpp_runtime_helper_023445d0(&"Column");
                il2cpp_runtime_helper_023445d0(&"profile-preview-card");
                il2cpp_runtime_helper_023445d0(&"profilePreviewCard");
                g_data_057aee6d = '\x01';
              }
              pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
              System_Action_object____ctor();
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
              pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ((System_String_o *)"Column",(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                  pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              if (in_RSI != (Il2CppClass *)0x0) {
                pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                                   ((Gisketch_Aottg2UI_Code_AottgUi_o *)in_RSI,"profilePreviewCard",pSVar3,
                                    "profile-preview-card",pGVar5,
                                    (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                                   );
                return (System_String_o *)pGVar6;
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057aee6e == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_1);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_2);
                il2cpp_runtime_helper_023445d0(&"profilePreviewBannerFrame");
                il2cpp_runtime_helper_023445d0(&"profile-preview-banner-frame");
                il2cpp_runtime_helper_023445d0(&"Column");
                il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
                il2cpp_runtime_helper_023445d0(&"Center");
                il2cpp_runtime_helper_023445d0(&"Row");
                il2cpp_runtime_helper_023445d0(&"profile-preview-body");
                g_data_057aee6e = '\x01';
              }
              pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
              System_Action_object____ctor();
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
              pGVar10 = "Center";
              pGVar11 = "Column";
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ((System_String_o *)"Column",(System_String_o *)"Center",
                                  (System_String_o *)"Center",(System_String_o *)0x0,
                                  (System_String_o *)0x0,0.0,pGVar4,pGVar7,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
                pGVar10 = "profilePreviewBannerFrame";
                pGVar11 = pGVar9;
                pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                                   (pGVar9,(System_String_o *)"profilePreviewBannerFrame",pSVar3,"profile-preview-banner-frame",pGVar5,
                                    (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                                   );
                if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 1) = 1;
                  pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
                  System_Action_object____ctor();
                  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
                  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                     ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar4,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,
                                      0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
                  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                                     (pGVar9,"profilePreviewBody",pSVar3,"profile-preview-body",pGVar5,
                                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                      (MethodInfo *)0x0);
                  return (System_String_o *)pGVar6;
                }
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057aee6f == '\0') {
                il2cpp_runtime_helper_023445d0(&"profile-preview-banner-image");
                il2cpp_runtime_helper_023445d0(&"Column");
                il2cpp_runtime_helper_023445d0();
                g_data_057aee6f = '\x01';
              }
              sprite = (pGVar11->fields)._actions;
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
              pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ((System_String_o *)"Column",(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                  pGVar4,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
                pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Image
                                   (pGVar10,(System_String_o *)sprite,"profilePreviewBanner","profile-preview-banner-image",pGVar5,
                                    (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                                   );
                return (System_String_o *)pGVar6;
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057aee70 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_3);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_4);
                il2cpp_runtime_helper_023445d0(&TypeInfo_c);
                il2cpp_runtime_helper_023445d0(&"profile-preview-names");
                il2cpp_runtime_helper_023445d0(&"Column");
                il2cpp_runtime_helper_023445d0(&"default");
                il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-frame");
                il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
                g_data_057aee70 = '\x01';
              }
              pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
              System_Action_object____ctor();
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
              pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ((System_String_o *)"Column",(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                  pGVar4,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,28.0,0.0,0.0,(MethodInfo *)0x0);
              if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
                Gisketch_Aottg2UI_Code_AottgUi__Panel
                          (pGVar9,"profilePreviewAvatarFrame",pSVar3,"profile-preview-avatar-frame",pGVar5,
                           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar8 = "default";
                pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
                if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
                  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
                  System_Action_object____ctor();
                  lVar1 = *(long *)(TypeInfo_c + 0xb8);
                  *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar3;
                  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
                }
                pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                   ((System_String_o *)"Column",(System_String_o *)0x0,
                                    (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,2.0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                    ,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
                pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                                   (pGVar9,pSVar8,pSVar3,"profile-preview-names",pGVar5,
                                    (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                                   );
                return (System_String_o *)pGVar6;
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057aee71 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_5);
                il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-bg");
                il2cpp_runtime_helper_023445d0(&"Column");
                il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
                g_data_057aee71 = '\x01';
              }
              pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
              System_Action_object____ctor();
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
              pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
              pGVar9 = "Column";
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ((System_String_o *)"Column",(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                  pGVar4,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
              if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
                pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                                   (pGVar10,"profileCardAvatarBg",pSVar3,"profile-preview-avatar-bg",pGVar5,
                                    (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                                   );
                return (System_String_o *)pGVar6;
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057aee72 == '\0') {
                il2cpp_runtime_helper_023445d0(&"Column");
                il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
                il2cpp_runtime_helper_023445d0();
                g_data_057aee72 = '\x01';
              }
              sprite_00 = (pGVar9->fields)._children;
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
              pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ((System_String_o *)"Column",(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                  pGVar4,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
              if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
                pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Image
                                   (pGVar11,(System_String_o *)sprite_00,"profilePreviewAvatar","profile-preview-avatar-image",pGVar5,
                                    (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                                   );
                return (System_String_o *)pGVar6;
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057aee73 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_c);
                g_data_057aee73 = '\x01';
              }
              __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
              System_Object___ctor(__this,(MethodInfo *)0x0);
              **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
              pSVar8 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
              return pSVar8;
            }
            pSVar8 = pGVar2->m_Items[0].fields.Key;
          }
          return pSVar8;
        }
        in_RSI = method->klass;
      }
      return (System_String_o *)in_RSI;
    }
    pSVar8 = pGVar2->m_Items[0].fields.Key;
  }
  return pSVar8;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstBannerKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey (const MethodInfo* method);
// 0x45291f0

System_String_o * Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey(MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *sprite;
  long lVar1;
  System_Collections_Generic_List_GisketchNodeDefinition__o *sprite_00;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Il2CppObject *__this;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Code_AottgUi_o *in_RSI;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  
  if (g_data_057aee6a == '\0') {
    method = (MethodInfo *)&"MainBackground2Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee6a = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(method);
  pSVar8 = "MainBackground2Texture";
  if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar2->max_length != 0)) {
    if ((int)pGVar2->max_length == 0) {
      il2cpp_runtime_helper_022b2ca0();
      if (g_data_057aee6d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_0);
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"profile-preview-card");
        il2cpp_runtime_helper_023445d0(&"profilePreviewCard");
        g_data_057aee6d = '\x01';
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
      pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (in_RSI != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (in_RSI,"profilePreviewCard",pSVar3,"profile-preview-card",pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar6;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee6e == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_1);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_2);
        il2cpp_runtime_helper_023445d0(&"profilePreviewBannerFrame");
        il2cpp_runtime_helper_023445d0(&"profile-preview-banner-frame");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
        il2cpp_runtime_helper_023445d0(&"Center");
        il2cpp_runtime_helper_023445d0(&"Row");
        il2cpp_runtime_helper_023445d0(&"profile-preview-body");
        g_data_057aee6e = '\x01';
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
      pGVar10 = "Center";
      pGVar11 = "Column";
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)"Center",
                          (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          pGVar4,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar10 = "profilePreviewBannerFrame";
        pGVar11 = pGVar9;
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (pGVar9,(System_String_o *)"profilePreviewBannerFrame",pSVar3,"profile-preview-banner-frame",pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 1) = 1;
          pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                              (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                             (pGVar9,"profilePreviewBody",pSVar3,"profile-preview-body",pGVar5,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return (System_String_o *)pGVar6;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee6f == '\0') {
        il2cpp_runtime_helper_023445d0(&"profile-preview-banner-image");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0();
        g_data_057aee6f = '\x01';
      }
      sprite = (pGVar11->fields)._actions;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
      pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Image
                           (pGVar10,(System_String_o *)sprite,"profilePreviewBanner","profile-preview-banner-image",pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar6;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee70 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_3);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_4);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        il2cpp_runtime_helper_023445d0(&"profile-preview-names");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"default");
        il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-frame");
        il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
        g_data_057aee70 = '\x01';
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,28.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (pGVar9,"profilePreviewAvatarFrame",pSVar3,"profile-preview-avatar-frame",pGVar5,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = "default";
        pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar3;
          il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,1.0,1.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (pGVar9,pSVar8,pSVar3,"profile-preview-names",pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar6;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee71 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_5);
        il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-bg");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
        g_data_057aee71 = '\x01';
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
      pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar9 = "Column";
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (pGVar10,"profileCardAvatarBg",pSVar3,"profile-preview-avatar-bg",pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar6;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee72 == '\0') {
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
        il2cpp_runtime_helper_023445d0();
        g_data_057aee72 = '\x01';
      }
      sprite_00 = (pGVar9->fields)._children;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar7,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Image
                           (pGVar11,(System_String_o *)sprite_00,"profilePreviewAvatar","profile-preview-avatar-image",pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return (System_String_o *)pGVar6;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aee73 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057aee73 = '\x01';
      }
      __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
      System_Object___ctor(__this,(MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
      pSVar8 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
      return pSVar8;
    }
    pSVar8 = pGVar2->m_Items[0].fields.Key;
  }
  return pSVar8;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$TryPresetSprite
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite (System_String_o* key, Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, System_String_o** sprite, const MethodInfo* method);
// 0x4529060

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite
          (System_String_o *key,Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,
          System_String_o **sprite,MethodInfo *method)

{
  uint uVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  ulong uVar4;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets_00;
  System_String_o **ppSVar5;
  System_String_o **ppSVar6;
  ulong uVar7;
  MethodInfo *method_00;
  System_String_o *pSStack_50;
  System_String_o **ppSStack_48;
  System_String_o **ppSStack_40;
  
  *sprite = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  ppSStack_40 = (System_String_o **)0x4529097;
  il2cpp_runtime_helper_022b4080(sprite);
  ppSStack_40 = (System_String_o **)0x45290a4;
  method_00 = (MethodInfo *)key;
  bVar3 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (((presets != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && ((char)bVar3 == '\0')) &&
     (0 < (int)presets->max_length)) {
    uVar4 = presets->max_length & 0xffffffff;
    ppSVar5 = &presets->m_Items[0].fields.Sprite;
    uVar7 = 0;
    do {
      if (uVar4 <= uVar7) {
        ppSStack_40 = (System_String_o **)0x452911d;
        il2cpp_runtime_helper_022b2ca0();
        ppSVar6 = &pSStack_50;
        pSStack_50 = (System_String_o *)0x0;
        ppSStack_48 = ppSVar5;
        ppSStack_40 = sprite;
        presets_00 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(method_00);
        bVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite
                          ((System_String_o *)method_00,presets_00,&pSStack_50,method);
        if ((char)bVar3 == '\0') {
          ppSVar6 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
        }
        return (bool_conflict)*ppSVar6;
      }
      method_00 = (MethodInfo *)((Gisketch_Aottg2UI_Game_AottgProfilePreset_Fields *)(ppSVar5 + -2))->Key;
      pSVar2 = *ppSVar5;
      ppSStack_40 = (System_String_o **)0x45290d8;
      bVar3 = System_String__op_Equality((System_String_o *)method_00,key,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        *sprite = pSVar2;
        ppSStack_40 = (System_String_o **)0x4529103;
        il2cpp_runtime_helper_022b4080(sprite,pSVar2);
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar2 >> 8),1);
      }
      uVar7 = uVar7 + 1;
      uVar1 = (uint)presets->max_length;
      uVar4 = (ulong)uVar1;
      method = (MethodInfo *)(long)(int)uVar1;
      ppSVar5 = ppSVar5 + 3;
    } while ((long)uVar7 < (long)method);
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$AllowedKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey (System_String_o* key, Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, System_String_o* fallback, const MethodInfo* method);
// 0x4528e80

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey
          (System_String_o *key,Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,
          System_String_o *fallback,MethodInfo *method)

{
  MethodInfo *pMVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar3;
  ulong uVar4;
  System_String_o *pSVar5;
  ulong unaff_RBX;
  System_String_o **ppSVar6;
  MethodInfo *a;
  MethodInfo *pMVar7;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *unaff_R13;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar8;
  System_String_o *pSStack_68;
  ulong uStack_60;
  MethodInfo *pMStack_58;
  ulong uStack_50;
  System_String_o *pSStack_48;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGStack_40;
  System_String_o *pSStack_38;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGStack_30;
  
  pGStack_30 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x4528e99;
  a = (MethodInfo *)key;
  bVar2 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (presets != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      unaff_R13 = presets->m_Items;
      unaff_RBX = 0;
      while( true ) {
        uVar4 = presets->max_length;
        method = (MethodInfo *)(long)(int)uVar4;
        if ((long)method <= (long)unaff_RBX) break;
        if ((uVar4 & 0xffffffff) <= unaff_RBX) goto label_04528f0c;
        unaff_RBX = unaff_RBX + 1;
        a = (MethodInfo *)(unaff_R13->fields).Key;
        unaff_R13 = unaff_R13 + 1;
        pGStack_30 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x4528ee9;
        bVar2 = System_String__op_Equality((System_String_o *)a,key,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          return key;
        }
      }
      goto label_04528ef2;
    }
  }
  else {
    if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      return fallback;
    }
    uVar4 = presets->max_length;
label_04528ef2:
    if (uVar4 == 0) {
      return fallback;
    }
    if ((int)uVar4 != 0) {
      return presets->m_Items[0].fields.Key;
    }
label_04528f0c:
    pGStack_30 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x4528f11;
    il2cpp_runtime_helper_022b2ca0();
  }
  pGStack_30 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x4528f16;
  il2cpp_runtime_helper_022b2c90();
  pMVar7 = a;
  uStack_50 = unaff_RBX;
  pSStack_48 = key;
  pGStack_40 = unaff_R13;
  pSStack_38 = fallback;
  pGStack_30 = presets;
  if (g_data_057aee68 == '\0') {
    pMStack_58 = (MethodInfo *)0x4528f41;
    il2cpp_runtime_helper_023445d0(&"MainBackground2Texture");
    pMVar7 = (MethodInfo *)&"UI/Backgrounds/";
    pMStack_58 = (MethodInfo *)0x4528f4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057aee68 = '\x01';
  }
  pMStack_58 = (MethodInfo *)0x4528f59;
  pGVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(pMVar7);
  pMVar1 = "MainBackground2Texture";
  pMStack_58 = (MethodInfo *)0x4528f70;
  pMVar7 = a;
  bVar2 = System_String__IsNullOrEmpty((System_String_o *)a,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
label_04529003:
      pMStack_58 = (MethodInfo *)0x4529008;
      il2cpp_runtime_helper_022b2c90();
      pMStack_58 = pMVar1;
      ppSVar6 = &pSStack_68;
      pSStack_68 = (System_String_o *)0x0;
      uStack_60 = unaff_RBX;
      pGVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(pMVar7);
      bVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite
                        ((System_String_o *)pMVar7,pGVar3,&pSStack_68,method);
      if ((char)bVar2 == '\0') {
        ppSVar6 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
      }
      return *ppSVar6;
    }
    pGVar8 = pGVar3->m_Items;
    unaff_RBX = 0xffffffffffffffff;
    do {
      unaff_RBX = unaff_RBX + 1;
      uVar4 = pGVar3->max_length;
      method = (MethodInfo *)(long)(int)uVar4;
      if ((long)method <= (long)unaff_RBX) goto label_04528fd3;
      if ((uVar4 & 0xffffffff) <= unaff_RBX) goto label_04528ffe;
      pMVar7 = (MethodInfo *)(pGVar8->fields).Key;
      pGVar8 = pGVar8 + 1;
      pMStack_58 = (MethodInfo *)0x4528fca;
      bVar2 = System_String__op_Equality((System_String_o *)pMVar7,(System_String_o *)a,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
  }
  else {
    a = pMVar1;
    if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      uVar4 = pGVar3->max_length;
label_04528fd3:
      a = pMVar1;
      if (uVar4 != 0) {
        if ((int)uVar4 == 0) {
label_04528ffe:
          pMStack_58 = (MethodInfo *)0x4529003;
          il2cpp_runtime_helper_022b2ca0();
          goto label_04529003;
        }
        a = (MethodInfo *)pGVar3->m_Items[0].fields.Key;
      }
    }
  }
  pSVar5 = System_String__Concat_3ae5ba0("UI/Backgrounds/",(System_String_o *)a,(MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstKey (Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, System_String_o* fallback, const MethodInfo* method);
// 0x45291c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstKey
          (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,System_String_o *fallback,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *sprite;
  long lVar1;
  System_Collections_Generic_List_GisketchNodeDefinition__o *sprite_00;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Il2CppObject *__this;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  
  if ((presets != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (presets->max_length != 0)) {
    if ((int)presets->max_length == 0) {
      il2cpp_runtime_helper_022b2ca0();
      if (g_data_057aee6a == '\0') {
        presets = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)&"MainBackground2Texture";
        il2cpp_runtime_helper_023445d0();
        g_data_057aee6a = '\x01';
      }
      pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners((MethodInfo *)presets);
      pSVar8 = "MainBackground2Texture";
      if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) && (pGVar2->max_length != 0)) {
        if ((int)pGVar2->max_length == 0) {
          il2cpp_runtime_helper_022b2ca0();
          if (g_data_057aee6d == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_0);
            il2cpp_runtime_helper_023445d0(&"Column");
            il2cpp_runtime_helper_023445d0(&"profile-preview-card");
            il2cpp_runtime_helper_023445d0(&"profilePreviewCard");
            g_data_057aee6d = '\x01';
          }
          pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
          pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          if ((Gisketch_Aottg2UI_Code_AottgUi_o *)fallback != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               ((Gisketch_Aottg2UI_Code_AottgUi_o *)fallback,"profilePreviewCard",pSVar3,"profile-preview-card",
                                pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                (MethodInfo *)0x0);
            return (System_String_o *)pGVar6;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aee6e == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_1);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_2);
            il2cpp_runtime_helper_023445d0(&"profilePreviewBannerFrame");
            il2cpp_runtime_helper_023445d0(&"profile-preview-banner-frame");
            il2cpp_runtime_helper_023445d0(&"Column");
            il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
            il2cpp_runtime_helper_023445d0(&"Center");
            il2cpp_runtime_helper_023445d0(&"Row");
            il2cpp_runtime_helper_023445d0(&"profile-preview-body");
            g_data_057aee6e = '\x01';
          }
          pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
          pGVar10 = "Center";
          pGVar11 = "Column";
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ((System_String_o *)"Column",(System_String_o *)"Center",
                              (System_String_o *)"Center",(System_String_o *)0x0,(System_String_o *)0x0,
                              0.0,pGVar4,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            pGVar10 = "profilePreviewBannerFrame";
            pGVar11 = pGVar9;
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               (pGVar9,(System_String_o *)"profilePreviewBannerFrame",pSVar3,"profile-preview-banner-frame",pGVar5,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              *(undefined1 *)((long)&(pGVar6->fields).hasIcon + 1) = 1;
              pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
              System_Action_object____ctor();
              pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
              pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                                  (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar4,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
              pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                                 (pGVar9,"profilePreviewBody",pSVar3,"profile-preview-body",pGVar5,
                                  (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
              return (System_String_o *)pGVar6;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aee6f == '\0') {
            il2cpp_runtime_helper_023445d0(&"profile-preview-banner-image");
            il2cpp_runtime_helper_023445d0(&"Column");
            il2cpp_runtime_helper_023445d0();
            g_data_057aee6f = '\x01';
          }
          sprite = (pGVar11->fields)._actions;
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
          pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar7,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Image
                               (pGVar10,(System_String_o *)sprite,"profilePreviewBanner","profile-preview-banner-image",pGVar5,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return (System_String_o *)pGVar6;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aee70 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_3);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_4);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            il2cpp_runtime_helper_023445d0(&"profile-preview-names");
            il2cpp_runtime_helper_023445d0(&"Column");
            il2cpp_runtime_helper_023445d0(&"default");
            il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-frame");
            il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
            g_data_057aee70 = '\x01';
          }
          pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
          pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar7,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              28.0,0.0,0.0,(MethodInfo *)0x0);
          if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__Panel
                      (pGVar9,"profilePreviewAvatarFrame",pSVar3,"profile-preview-avatar-frame",pGVar5,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar8 = "default";
            pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
              System_Action_object____ctor();
              lVar1 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar3;
              il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
            }
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,1.0,1.0,(MethodInfo *)0x0);
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               (pGVar9,pSVar8,pSVar3,"profile-preview-names",pGVar5,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return (System_String_o *)pGVar6;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aee71 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_5);
            il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-bg");
            il2cpp_runtime_helper_023445d0(&"Column");
            il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
            g_data_057aee71 = '\x01';
          }
          pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
          pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
          pGVar9 = "Column";
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar7,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               (pGVar10,"profileCardAvatarBg",pSVar3,"profile-preview-avatar-bg",pGVar5,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return (System_String_o *)pGVar6;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aee72 == '\0') {
            il2cpp_runtime_helper_023445d0(&"Column");
            il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
            il2cpp_runtime_helper_023445d0();
            g_data_057aee72 = '\x01';
          }
          sprite_00 = (pGVar9->fields)._children;
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar7,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,1.0,(MethodInfo *)0x0);
          if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Image
                               (pGVar11,(System_String_o *)sprite_00,"profilePreviewAvatar","profile-preview-avatar-image",pGVar5,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return (System_String_o *)pGVar6;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aee73 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057aee73 = '\x01';
          }
          __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
          System_Object___ctor(__this,(MethodInfo *)0x0);
          **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
          pSVar8 = (System_String_o *)il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
          return pSVar8;
        }
        pSVar8 = pGVar2->m_Items[0].fields.Key;
      }
      return pSVar8;
    }
    fallback = presets->m_Items[0].fields.Key;
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$LoadJson
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson (System_String_o* path, const MethodInfo* method);
// 0x4528a20

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson(System_String_o *path,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_String_o *area;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  int32_t iVar7;
  undefined1 auVar8 [12];
  undefined1 in_stack_ffffffffffffff78 [12];
  int32_t iVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (g_data_057aee6b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_runtime_helper_023445d0(&" bytes=");
    il2cpp_runtime_helper_023445d0(&"ProfilePresetCatalog.LoadJson");
    g_data_057aee6b = '\x01';
  }
  iVar9 = 0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_50,"ProfilePresetCatalog.LoadJson",path,(MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)UnityEngine_Resources__Load_object_(path,MethodInfo_TextAsset_Load_TextAsset);
  pSVar10 = local_50.fields._area;
  pSVar11 = local_50.fields._detail;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar10 = local_50.fields._area;
    pSVar11 = local_50.fields._detail;
  }
  iVar7 = 0;
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  area = "ProfilePresetCatalog.LoadJson";
  pSVar4 = " bytes=";
  if ((char)bVar2 == '\0') {
label_04528b53:
    pSVar3 = System_Int32__ToString((int32_t)&stack0xffffffffffffff84,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_3af7150(path,pSVar4,pSVar3,(MethodInfo *)0x0);
    iVar9 = iVar7;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      iVar9 = iVar7;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
label_04528be3:
      __this.fields._detail._4_4_ = iVar9;
      __this.fields._0_12_ = in_stack_ffffffffffffff78;
      __this.fields._startMs = (int64_t)pSVar10;
      __this.fields._24_8_ = pSVar11;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this,(MethodInfo *)&stack0xffffffffffffff88);
      return pSVar5;
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      pSVar4 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
      pSVar5 = SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
      goto label_04528be3;
    }
  }
  else {
    if (x != (UnityEngine_Object_o *)0x0) {
      iVar7 = 0;
      pSVar3 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
      if (pSVar3 != (System_String_o *)0x0) {
        pSVar3 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
        if (pSVar3 == (System_String_o *)0x0) goto label_04528c0b;
        iVar7 = (pSVar3->fields)._stringLength;
      }
      goto label_04528b53;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2c90();
label_04528c0b:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar6 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar1 = *plVar6;
    __cxa_end_catch();
    __this_00.fields._detail._4_4_ = iVar9;
    __this_00.fields._0_12_ = in_stack_ffffffffffffff78;
    __this_00.fields._startMs = (int64_t)pSVar10;
    __this_00.fields._24_8_ = pSVar11;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
    if (lVar1 == 0) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_01.fields._detail._4_4_ = iVar9;
  __this_01.fields._0_12_ = in_stack_ffffffffffffff78;
  __this_01.fields._startMs = (int64_t)pSVar10;
  __this_01.fields._24_8_ = pSVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
  _Unwind_Resume(auVar8._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Label (System_String_o* key, const MethodInfo* method);
// 0x4528d00

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Label(System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar3;
  char *pcVar4;
  ulong uVar5;
  MethodInfo *in_RCX;
  System_String_o *extraout_RDX;
  ulong uVar6;
  System_String_o **ppSVar7;
  MethodInfo *pMVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  MethodInfo *pMVar11;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *unaff_R13;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar12;
  MethodInfo *str1;
  System_String_o *pSStack_98;
  ulong uStack_90;
  MethodInfo *pMStack_88;
  ulong uStack_80;
  MethodInfo *pMStack_78;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGStack_70;
  System_String_o *pSStack_68;
  MethodInfo *pMStack_60;
  ulong uStack_58;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGStack_50;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGStack_48;
  MethodInfo *pMStack_40;
  MethodInfo *pMStack_38;
  System_String_o *pSStack_30;
  
  if (g_data_057aee6c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Main Background ");
    il2cpp_runtime_helper_023445d0(&"MainBackground");
    g_data_057aee6c = '\x01';
  }
  pMVar11 = (MethodInfo *)key;
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (key != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace_3af9030(key,"MainBackground","Main Background ",(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar11;
  pSStack_30 = key;
  if (g_data_057aee67 == '\0') {
    pMStack_38 = (MethodInfo *)0x4528da1;
    il2cpp_runtime_helper_023445d0(&"Gisketch1");
    pMStack_38 = (MethodInfo *)0x4528dad;
    il2cpp_runtime_helper_023445d0(&"Icon");
    pMVar9 = (MethodInfo *)&"UI/Icons/Profile/";
    pMStack_38 = (MethodInfo *)0x4528db9;
    il2cpp_runtime_helper_023445d0();
    g_data_057aee67 = '\x01';
  }
  pMStack_38 = (MethodInfo *)0x4528dc5;
  pGVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(pMVar9);
  pMVar10 = "Gisketch1";
  pMVar8 = (MethodInfo *)0x0;
  pMStack_38 = (MethodInfo *)0x4528ddc;
  pMVar9 = pMVar11;
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)pMVar11,(MethodInfo *)0x0);
  uVar6 = 0;
  if ((char)bVar1 == '\0') {
    if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      unaff_R13 = pGVar3->m_Items;
      uVar6 = 0xffffffffffffffff;
      do {
        uVar6 = uVar6 + 1;
        uVar5 = pGVar3->max_length;
        in_RCX = (MethodInfo *)(long)(int)uVar5;
        if ((long)in_RCX <= (long)uVar6) goto label_04528e33;
        if ((uVar5 & 0xffffffff) <= uVar6) goto label_04528e68;
        pMVar9 = (MethodInfo *)(unaff_R13->fields).Key;
        unaff_R13 = unaff_R13 + 1;
        pMStack_38 = (MethodInfo *)0x4528e2a;
        pMVar8 = pMVar11;
        bVar1 = System_String__op_Equality
                          ((System_String_o *)pMVar9,(System_String_o *)pMVar11,(MethodInfo *)0x0);
        str1 = pMVar11;
      } while ((char)bVar1 == '\0');
      goto label_04528e41;
    }
  }
  else {
    str1 = pMVar10;
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
label_04528e41:
      pSVar2 = System_String__Concat_3af7150
                         ("UI/Icons/Profile/",(System_String_o *)str1,"Icon",(MethodInfo *)0x0);
      return pSVar2;
    }
    uVar5 = pGVar3->max_length;
label_04528e33:
    str1 = pMVar10;
    if (uVar5 == 0) goto label_04528e41;
    if ((int)uVar5 != 0) {
      str1 = (MethodInfo *)pGVar3->m_Items[0].fields.Key;
      goto label_04528e41;
    }
label_04528e68:
    pMStack_38 = (MethodInfo *)0x4528e6d;
    il2cpp_runtime_helper_022b2ca0();
  }
  pMStack_38 = (MethodInfo *)0x4528e72;
  il2cpp_runtime_helper_022b2c90();
  pMStack_40 = pMVar10;
  pMStack_60 = (MethodInfo *)0x4528e99;
  pMVar10 = pMVar9;
  uStack_58 = uVar6;
  pGStack_50 = pGVar3;
  pGStack_48 = unaff_R13;
  pMStack_38 = pMVar11;
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)pMVar9,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (pMVar8 != (MethodInfo *)0x0) {
      unaff_R13 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_o *)&pMVar8->klass;
      uVar6 = 0;
      while( true ) {
        pcVar4 = pMVar8->name;
        in_RCX = (MethodInfo *)(long)(int)pcVar4;
        if ((long)in_RCX <= (long)uVar6) break;
        if (((ulong)pcVar4 & 0xffffffff) <= uVar6) goto label_04528f0c;
        uVar6 = uVar6 + 1;
        pMVar10 = (MethodInfo *)(unaff_R13->fields).Key;
        unaff_R13 = unaff_R13 + 1;
        pMStack_60 = (MethodInfo *)0x4528ee9;
        bVar1 = System_String__op_Equality
                          ((System_String_o *)pMVar10,(System_String_o *)pMVar9,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          return (System_String_o *)pMVar9;
        }
      }
      goto label_04528ef2;
    }
  }
  else {
    if (pMVar8 == (MethodInfo *)0x0) {
      return extraout_RDX;
    }
    pcVar4 = pMVar8->name;
label_04528ef2:
    if (pcVar4 == (char *)0x0) {
      return extraout_RDX;
    }
    if ((int)pcVar4 != 0) {
      return (System_String_o *)pMVar8->klass;
    }
label_04528f0c:
    pMStack_60 = (MethodInfo *)0x4528f11;
    il2cpp_runtime_helper_022b2ca0();
  }
  pMStack_60 = (MethodInfo *)0x4528f16;
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar10;
  uStack_80 = uVar6;
  pMStack_78 = pMVar9;
  pGStack_70 = unaff_R13;
  pSStack_68 = extraout_RDX;
  pMStack_60 = pMVar8;
  if (g_data_057aee68 == '\0') {
    pMStack_88 = (MethodInfo *)0x4528f41;
    il2cpp_runtime_helper_023445d0(&"MainBackground2Texture");
    pMVar11 = (MethodInfo *)&"UI/Backgrounds/";
    pMStack_88 = (MethodInfo *)0x4528f4d;
    il2cpp_runtime_helper_023445d0();
    g_data_057aee68 = '\x01';
  }
  pMStack_88 = (MethodInfo *)0x4528f59;
  pGVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(pMVar11);
  pMVar9 = "MainBackground2Texture";
  pMStack_88 = (MethodInfo *)0x4528f70;
  pMVar11 = pMVar10;
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)pMVar10,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
label_04529003:
      pMStack_88 = (MethodInfo *)0x4529008;
      il2cpp_runtime_helper_022b2c90();
      pMStack_88 = pMVar9;
      ppSVar7 = &pSStack_98;
      pSStack_98 = (System_String_o *)0x0;
      uStack_90 = uVar6;
      pGVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(pMVar11);
      bVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__TryPresetSprite
                        ((System_String_o *)pMVar11,pGVar3,&pSStack_98,in_RCX);
      if ((char)bVar1 == '\0') {
        ppSVar7 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
      }
      return *ppSVar7;
    }
    pGVar12 = pGVar3->m_Items;
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
      uVar5 = pGVar3->max_length;
      in_RCX = (MethodInfo *)(long)(int)uVar5;
      if ((long)in_RCX <= (long)uVar6) goto label_04528fd3;
      if ((uVar5 & 0xffffffff) <= uVar6) goto label_04528ffe;
      pMVar11 = (MethodInfo *)(pGVar12->fields).Key;
      pGVar12 = pGVar12 + 1;
      pMStack_88 = (MethodInfo *)0x4528fca;
      bVar1 = System_String__op_Equality
                        ((System_String_o *)pMVar11,(System_String_o *)pMVar10,(MethodInfo *)0x0);
    } while ((char)bVar1 == '\0');
  }
  else {
    pMVar10 = pMVar9;
    if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      uVar5 = pGVar3->max_length;
label_04528fd3:
      pMVar10 = pMVar9;
      if (uVar5 != 0) {
        if ((int)uVar5 == 0) {
label_04528ffe:
          pMStack_88 = (MethodInfo *)0x4529003;
          il2cpp_runtime_helper_022b2ca0();
          goto label_04529003;
        }
        pMVar10 = (MethodInfo *)pGVar3->m_Items[0].fields.Key;
      }
    }
  }
  pSVar2 = System_String__Concat_3ae5ba0("UI/Backgrounds/",(System_String_o *)pMVar10,(MethodInfo *)0x0);
  return pSVar2;
}



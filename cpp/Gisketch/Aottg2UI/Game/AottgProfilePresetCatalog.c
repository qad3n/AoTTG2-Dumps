// Type: Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePresetCatalog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Avatars
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars (const MethodInfo* method);
// 0x41ee410

/* WARNING: Removing unreachable block (ram,0x041eedf0) */

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o item;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  char cVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_AottgProfilePreset__o *__this_00;
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
  System_String_o *in_stack_ffffffffffffff28;
  System_String_o *in_stack_ffffffffffffff30;
  System_String_o *in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff40;
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
  
  if (DAT_05704f8a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfilePreset);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_AottgProfilePreset___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_AottgProfilePreset);
    il2cpp_init_method_metadata(&"Data/Info/ProfileIconInfo");
    il2cpp_init_method_metadata(&"Gisketch1");
    il2cpp_init_method_metadata(&"count=");
    il2cpp_init_method_metadata(&"load");
    il2cpp_init_method_metadata(&"UI/Icons/Profile/Gisketch1Icon");
    il2cpp_init_method_metadata(&"Gisketch");
    il2cpp_init_method_metadata(&"Icons");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"UI/Icons/Profile/");
    il2cpp_init_method_metadata(&"ProfilePresetCatalog.Avatars");
    DAT_05704f8a = '\x01';
  }
  local_48 = (InvokerMethod)0x0;
  pcStack_40 = (char *)0x0;
  local_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_b8,"ProfilePresetCatalog.Avatars","load",(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_List_AottgProfilePreset__o *)
              il2cpp_runtime_glue(TypeInfo_List_AottgProfilePreset);
  method_00 = MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset;
  System_Collections_Generic_List<AottgProfilePreset>___ctor
            (__this_00,(MethodInfo_34EEE90 *)MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson("Data/Info/ProfileIconInfo",method_00);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar8,"Icons",(pSVar8->klass->vtable)._7_get_Item.method);
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  local_98 = __this_00;
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar9 = (long *)(*(pSVar8->klass->vtable)._27_get_Children.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable)._27_get_Children.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar5 = *plVar9;
    if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IEnumerable_JSONNode) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + lVar5 + 0x138);
          goto LAB_041ee6f1;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerable_JSONNode,0);
LAB_041ee6f1:
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + lVar5 + 0x138);
            goto LAB_041ee7a3;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,0);
LAB_041ee7a3:
      cVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (cVar6 == '\0') {
        if (plVar9 == (long *)0x0) break;
        lVar5 = *plVar9;
        if ((ulong)*(ushort *)(lVar5 + 0x12e) == 0) goto LAB_041eebbf;
        lVar16 = 0;
        goto LAB_041eebb0;
      }
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IEnumerator_JSONNode) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + lVar5 + 0x138);
            goto LAB_041ee813;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator_JSONNode,0);
LAB_041ee813:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar12 = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11);
      bVar7 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (DAT_05704f91 == '\0') {
          il2cpp_init_method_metadata(&"Main Background ");
          il2cpp_init_method_metadata(&"MainBackground");
          DAT_05704f91 = '\x01';
        }
        bVar7 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          if (pSVar12 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar13 = System_String__Replace(pSVar12,"MainBackground","Main Background ",(MethodInfo *)0x0);
        }
        else {
          pSVar13 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        }
        pSVar14 = System_String__Concat("UI/Icons/Profile/",pSVar12,"Icon",(MethodInfo *)0x0);
        local_b8.fields._detail = (System_String_o *)0x0;
        local_b8.fields._startMs = 0;
        local_b8.fields._area = pSVar12;
        il2cpp_runtime_glue(&local_b8,pSVar12);
        local_b8.fields._detail = pSVar13;
        il2cpp_runtime_glue(&local_b8.fields._detail,pSVar13);
        local_b8.fields._startMs = (int64_t)pSVar14;
        il2cpp_runtime_glue(&local_b8.fields._startMs,pSVar14);
        lVar5 = MethodInfo_Void_Add;
        if (local_98 == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        local_68 = (System_String_o *)local_b8.fields._startMs;
        local_78 = local_b8.fields._area._0_4_;
        uStack_74 = local_b8.fields._area._4_4_;
        uStack_70 = local_b8.fields._detail._0_4_;
        uStack_6c = local_b8.fields._detail._4_4_;
        piVar1 = &(local_98->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar15 = (local_98->fields)._items;
        if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar4 = (local_98->fields)._size;
        if (uVar4 < (uint)pGVar15->max_length) {
          (local_98->fields)._size = uVar4 + 1;
          pGVar15->m_Items[(int)uVar4].fields.Sprite = (System_String_o *)local_b8.fields._startMs;
          pGVar2 = pGVar15->m_Items + (int)uVar4;
          *(undefined4 *)&(pGVar2->fields).Key = local_b8.fields._area._0_4_;
          *(undefined4 *)((long)&(pGVar2->fields).Key + 4) = local_b8.fields._area._4_4_;
          *(undefined4 *)&(pGVar2->fields).Label = local_b8.fields._detail._0_4_;
          *(undefined4 *)((long)&(pGVar2->fields).Label + 4) = local_b8.fields._detail._4_4_;
          il2cpp_runtime_glue(pGVar15->m_Items + (int)uVar4,0);
        }
        else {
          item.fields.Label = local_b8.fields._detail;
          item.fields.Key = local_b8.fields._area;
          item.fields.Sprite = (System_String_o *)local_b8.fields._startMs;
          in_stack_ffffffffffffff28 = local_b8.fields._area;
          in_stack_ffffffffffffff30 = local_b8.fields._detail;
          in_stack_ffffffffffffff38 = (System_String_o *)local_b8.fields._startMs;
          System_Collections_Generic_List<AottgProfilePreset>__AddWithResize
                    (local_98,item,
                     *(MethodInfo_34EF8B0 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_041eebef;
  while (lVar16 = lVar16 + 0x10, (ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16) {
LAB_041eebb0:
    if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)
                (lVar5 + (long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
      goto LAB_041eebdd;
    }
  }
LAB_041eebbf:
  puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_041eebdd:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_041eebef:
  if (local_98 == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((local_98->fields)._size < 1) {
    pGVar15 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)il2cpp_glue_02274930(TypeInfo_AottgProfilePreset,1);
    pSVar13 = "UI/Icons/Profile/Gisketch1Icon";
    pSVar12 = "Gisketch";
    uStack_88 = (System_String_o *)0x0;
    pSStack_80 = (System_String_o *)0x0;
    local_90 = "Gisketch1";
    il2cpp_runtime_glue(&local_90);
    uStack_88 = pSVar12;
    il2cpp_runtime_glue(&uStack_88,pSVar12);
    pSStack_80 = pSVar13;
    il2cpp_runtime_glue(&pSStack_80);
    if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    local_b8.fields._startMs = (int64_t)pSStack_80;
    local_b8.fields._area = local_90;
    local_b8.fields._detail = uStack_88;
    if ((int)pGVar15->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar15->m_Items[0].fields.Sprite = pSStack_80;
    *(int *)&pGVar15->m_Items[0].fields.Key = (int)local_90;
    *(undefined4 *)((long)&pGVar15->m_Items[0].fields.Key + 4) = local_90._4_4_;
    *(int *)&pGVar15->m_Items[0].fields.Label = (int)uStack_88;
    *(undefined4 *)((long)&pGVar15->m_Items[0].fields.Label + 4) = uStack_88._4_4_;
    il2cpp_runtime_glue(pGVar15->m_Items);
  }
  else {
    pGVar15 = System_Collections_Generic_List<AottgProfilePreset>__ToArray(local_98,MethodInfo_AottgProfilePreset___ToArray);
    if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  bVar7 = (bool_conflict)pGVar15->max_length;
  pSVar12 = System_Int32__ToString((int32_t)&stack0xffffffffffffff44,(MethodInfo *)0x0);
  pSVar12 = System_String__Concat("count=",pSVar12,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfilePresetCatalog.Avatars",pSVar12,(MethodInfo *)0x0);
  __this.fields._detail = in_stack_ffffffffffffff30;
  __this.fields._area = in_stack_ffffffffffffff28;
  __this.fields._startMs = (int64_t)in_stack_ffffffffffffff38;
  __this.fields._enabled = in_stack_ffffffffffffff40;
  __this.fields._hotLoop = bVar7;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)&local_58);
  return pGVar15;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Banners
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners (const MethodInfo* method);
// 0x41eeee0

/* WARNING: Removing unreachable block (ram,0x041ef920) */

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o item;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  char cVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_AottgProfilePreset__o *__this_00;
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
  System_String_o *in_stack_ffffffffffffff28;
  System_String_o *in_stack_ffffffffffffff30;
  System_String_o *in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff40;
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
  
  if (DAT_05704f8b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfilePreset);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_AottgProfilePreset___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_AottgProfilePreset);
    il2cpp_init_method_metadata(&"Data/Info/BannerInfo");
    il2cpp_init_method_metadata(&"ProfilePresetCatalog.Banners");
    il2cpp_init_method_metadata(&"count=");
    il2cpp_init_method_metadata(&"load");
    il2cpp_init_method_metadata(&"Texture");
    il2cpp_init_method_metadata(&"Banners");
    il2cpp_init_method_metadata(&"MainBackground2Texture");
    il2cpp_init_method_metadata(&"Main Background 2");
    il2cpp_init_method_metadata(&"UI/Backgrounds/");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"UI/Backgrounds/MainBackground2Texture");
    DAT_05704f8b = '\x01';
  }
  local_48 = (InvokerMethod)0x0;
  pcStack_40 = (char *)0x0;
  local_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_b8,"ProfilePresetCatalog.Banners","load",(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_List_AottgProfilePreset__o *)
              il2cpp_runtime_glue(TypeInfo_List_AottgProfilePreset);
  method_00 = MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset;
  System_Collections_Generic_List<AottgProfilePreset>___ctor
            (__this_00,(MethodInfo_34EEE90 *)MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
  local_98 = __this_00;
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson("Data/Info/BannerInfo",method_00);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar8,"Banners",(pSVar8->klass->vtable)._7_get_Item.method);
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar9 = (long *)(*(pSVar8->klass->vtable)._27_get_Children.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable)._27_get_Children.method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar5 = *plVar9;
    if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
      lVar16 = 0;
      do {
        if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IEnumerable_JSONNode) {
          puVar10 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + lVar5 + 0x138);
          goto LAB_041ef1d1;
        }
        lVar16 = lVar16 + 0x10;
      } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerable_JSONNode,0);
LAB_041ef1d1:
    plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IEnumerator) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + lVar5 + 0x138);
            goto LAB_041ef283;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,0);
LAB_041ef283:
      cVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if (cVar6 == '\0') {
        if (plVar9 == (long *)0x0) break;
        lVar5 = *plVar9;
        if ((ulong)*(ushort *)(lVar5 + 0x12e) == 0) goto LAB_041ef6ef;
        lVar16 = 0;
        goto LAB_041ef6e0;
      }
      lVar5 = *plVar9;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
        lVar16 = 0;
        do {
          if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IEnumerator_JSONNode) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + lVar5 + 0x138);
            goto LAB_041ef2f3;
          }
          lVar16 = lVar16 + 0x10;
        } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator_JSONNode,0);
LAB_041ef2f3:
      plVar11 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar12 = (System_String_o *)(**(code **)(*plVar11 + 0x1c8))(plVar11);
      bVar7 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (pSVar12 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar13 = System_String__Replace(pSVar12,"Texture","",(MethodInfo *)0x0);
        if (DAT_05704f91 == '\0') {
          il2cpp_init_method_metadata(&"Main Background ");
          il2cpp_init_method_metadata(&"MainBackground");
          DAT_05704f91 = '\x01';
        }
        bVar7 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          if (pSVar13 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar13 = System_String__Replace(pSVar13,"MainBackground","Main Background ",(MethodInfo *)0x0);
        }
        else {
          pSVar13 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        }
        pSVar14 = System_String__Concat("UI/Backgrounds/",pSVar12,(MethodInfo *)0x0);
        local_b8.fields._detail = (System_String_o *)0x0;
        local_b8.fields._startMs = 0;
        local_b8.fields._area = pSVar12;
        il2cpp_runtime_glue(&local_b8,pSVar12);
        local_b8.fields._detail = pSVar13;
        il2cpp_runtime_glue(&local_b8.fields._detail,pSVar13);
        local_b8.fields._startMs = (int64_t)pSVar14;
        il2cpp_runtime_glue(&local_b8.fields._startMs,pSVar14);
        lVar5 = MethodInfo_Void_Add;
        if (local_98 == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        local_68 = (System_String_o *)local_b8.fields._startMs;
        local_78 = local_b8.fields._area._0_4_;
        uStack_74 = local_b8.fields._area._4_4_;
        uStack_70 = local_b8.fields._detail._0_4_;
        uStack_6c = local_b8.fields._detail._4_4_;
        piVar1 = &(local_98->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar15 = (local_98->fields)._items;
        if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar4 = (local_98->fields)._size;
        if (uVar4 < (uint)pGVar15->max_length) {
          (local_98->fields)._size = uVar4 + 1;
          pGVar15->m_Items[(int)uVar4].fields.Sprite = (System_String_o *)local_b8.fields._startMs;
          pGVar2 = pGVar15->m_Items + (int)uVar4;
          *(undefined4 *)&(pGVar2->fields).Key = local_b8.fields._area._0_4_;
          *(undefined4 *)((long)&(pGVar2->fields).Key + 4) = local_b8.fields._area._4_4_;
          *(undefined4 *)&(pGVar2->fields).Label = local_b8.fields._detail._0_4_;
          *(undefined4 *)((long)&(pGVar2->fields).Label + 4) = local_b8.fields._detail._4_4_;
          il2cpp_runtime_glue(pGVar15->m_Items + (int)uVar4,0);
        }
        else {
          item.fields.Label = local_b8.fields._detail;
          item.fields.Key = local_b8.fields._area;
          item.fields.Sprite = (System_String_o *)local_b8.fields._startMs;
          in_stack_ffffffffffffff28 = local_b8.fields._area;
          in_stack_ffffffffffffff30 = local_b8.fields._detail;
          in_stack_ffffffffffffff38 = (System_String_o *)local_b8.fields._startMs;
          System_Collections_Generic_List<AottgProfilePreset>__AddWithResize
                    (local_98,item,
                     *(MethodInfo_34EF8B0 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    } while( true );
  }
  goto LAB_041ef71f;
  while (lVar16 = lVar16 + 0x10, (ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar16) {
LAB_041ef6e0:
    if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar16) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)
                (lVar5 + (long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar16) * 0x10 + 0x138);
      goto LAB_041ef70d;
    }
  }
LAB_041ef6ef:
  puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_041ef70d:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_041ef71f:
  if (local_98 == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((local_98->fields)._size < 1) {
    pGVar15 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)il2cpp_glue_02274930(TypeInfo_AottgProfilePreset,1);
    pSVar13 = "UI/Backgrounds/MainBackground2Texture";
    pSVar12 = "Main Background 2";
    uStack_88 = (System_String_o *)0x0;
    pSStack_80 = (System_String_o *)0x0;
    local_90 = "MainBackground2Texture";
    il2cpp_runtime_glue(&local_90);
    uStack_88 = pSVar12;
    il2cpp_runtime_glue(&uStack_88,pSVar12);
    pSStack_80 = pSVar13;
    il2cpp_runtime_glue(&pSStack_80);
    if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    local_b8.fields._startMs = (int64_t)pSStack_80;
    local_b8.fields._area = local_90;
    local_b8.fields._detail = uStack_88;
    if ((int)pGVar15->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar15->m_Items[0].fields.Sprite = pSStack_80;
    *(int *)&pGVar15->m_Items[0].fields.Key = (int)local_90;
    *(undefined4 *)((long)&pGVar15->m_Items[0].fields.Key + 4) = local_90._4_4_;
    *(int *)&pGVar15->m_Items[0].fields.Label = (int)uStack_88;
    *(undefined4 *)((long)&pGVar15->m_Items[0].fields.Label + 4) = uStack_88._4_4_;
    il2cpp_runtime_glue(pGVar15->m_Items);
  }
  else {
    pGVar15 = System_Collections_Generic_List<AottgProfilePreset>__ToArray(local_98,MethodInfo_AottgProfilePreset___ToArray);
    if (pGVar15 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  bVar7 = (bool_conflict)pGVar15->max_length;
  pSVar12 = System_Int32__ToString((int32_t)&stack0xffffffffffffff44,(MethodInfo *)0x0);
  pSVar12 = System_String__Concat("count=",pSVar12,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfilePresetCatalog.Banners",pSVar12,(MethodInfo *)0x0);
  __this.fields._detail = in_stack_ffffffffffffff30;
  __this.fields._area = in_stack_ffffffffffffff28;
  __this.fields._startMs = (int64_t)in_stack_ffffffffffffff38;
  __this.fields._enabled = in_stack_ffffffffffffff40;
  __this.fields._hotLoop = bVar7;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)&local_58);
  return pGVar15;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$AvatarSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite (System_String_o* key, const MethodInfo* method);
// 0x41f68d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite
          (System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_Fields *pGVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar3;
  ulong uVar4;
  System_String_o *pSVar5;
  ulong uVar6;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar7;
  
  method_00 = (MethodInfo *)key;
  if (DAT_05704f8c == '\0') {
    il2cpp_init_method_metadata(&"Gisketch1");
    il2cpp_init_method_metadata(&"Icon");
    method_00 = (MethodInfo *)&"UI/Icons/Profile/";
    il2cpp_init_method_metadata();
    DAT_05704f8c = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(method_00);
  pSVar5 = "Gisketch1";
  bVar2 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar7 = pGVar3->m_Items;
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
      uVar4 = pGVar3->max_length;
      if ((long)(int)uVar4 <= (long)uVar6) goto LAB_041f6983;
      if ((uVar4 & 0xffffffff) <= uVar6) goto LAB_041f69b8;
      pGVar1 = &pGVar7->fields;
      pGVar7 = pGVar7 + 1;
      bVar2 = System_String__op_Equality(pGVar1->Key,key,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
  }
  else {
    key = pSVar5;
    if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      uVar4 = pGVar3->max_length;
LAB_041f6983:
      key = pSVar5;
      if (uVar4 != 0) {
        if ((int)uVar4 == 0) {
LAB_041f69b8:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        key = pGVar3->m_Items[0].fields.Key;
      }
    }
  }
  pSVar5 = System_String__Concat("UI/Icons/Profile/",key,"Icon",(MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$BannerSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite (System_String_o* key, const MethodInfo* method);
// 0x41f6a70

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite
          (System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_Fields *pGVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar3;
  ulong uVar4;
  System_String_o *pSVar5;
  ulong uVar6;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar7;
  
  method_00 = (MethodInfo *)key;
  if (DAT_05704f8d == '\0') {
    il2cpp_init_method_metadata(&"MainBackground2Texture");
    method_00 = (MethodInfo *)&"UI/Backgrounds/";
    il2cpp_init_method_metadata();
    DAT_05704f8d = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(method_00);
  pSVar5 = "MainBackground2Texture";
  bVar2 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar7 = pGVar3->m_Items;
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
      uVar4 = pGVar3->max_length;
      if ((long)(int)uVar4 <= (long)uVar6) goto LAB_041f6b23;
      if ((uVar4 & 0xffffffff) <= uVar6) goto LAB_041f6b4e;
      pGVar1 = &pGVar7->fields;
      pGVar7 = pGVar7 + 1;
      bVar2 = System_String__op_Equality(pGVar1->Key,key,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
  }
  else {
    key = pSVar5;
    if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      uVar4 = pGVar3->max_length;
LAB_041f6b23:
      key = pSVar5;
      if (uVar4 != 0) {
        if ((int)uVar4 == 0) {
LAB_041f6b4e:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        key = pGVar3->m_Items[0].fields.Key;
      }
    }
  }
  pSVar5 = System_String__Concat("UI/Backgrounds/",key,(MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstAvatarKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey (const MethodInfo* method);
// 0x41f6b60

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstAvatarKey(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704f8e == '\0') {
    method = (MethodInfo *)&"Gisketch1";
    il2cpp_init_method_metadata();
    DAT_05704f8e = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(method);
  pSVar2 = "Gisketch1";
  if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) &&
     (pGVar1->max_length != 0)) {
    if ((int)pGVar1->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2 = pGVar1->m_Items[0].fields.Key;
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstBannerKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey (const MethodInfo* method);
// 0x41f6be0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstBannerKey(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704f8f == '\0') {
    method = (MethodInfo *)&"MainBackground2Texture";
    il2cpp_init_method_metadata();
    DAT_05704f8f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(method);
  pSVar2 = "MainBackground2Texture";
  if ((pGVar1 != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) &&
     (pGVar1->max_length != 0)) {
    if ((int)pGVar1->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar2 = pGVar1->m_Items[0].fields.Key;
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$AllowedKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey (System_String_o* key, Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, System_String_o* fallback, const MethodInfo* method);
// 0x41f69d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey
          (System_String_o *key,Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,
          System_String_o *fallback,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_Fields *pGVar1;
  bool_conflict bVar2;
  ulong uVar3;
  ulong uVar4;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar5;
  
  bVar2 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar5 = presets->m_Items;
    uVar4 = 0;
    do {
      uVar3 = presets->max_length;
      if ((long)(int)uVar3 <= (long)uVar4) goto LAB_041f6a42;
      if ((uVar3 & 0xffffffff) <= uVar4) goto LAB_041f6a5c;
      uVar4 = uVar4 + 1;
      pGVar1 = &pGVar5->fields;
      pGVar5 = pGVar5 + 1;
      bVar2 = System_String__op_Equality(pGVar1->Key,key,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
  }
  else {
    key = fallback;
    if (presets != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
      uVar3 = presets->max_length;
LAB_041f6a42:
      key = fallback;
      if (uVar3 != 0) {
        if ((int)uVar3 == 0) {
LAB_041f6a5c:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        key = presets->m_Items[0].fields.Key;
      }
    }
  }
  return key;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$FirstKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstKey (Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, System_String_o* fallback, const MethodInfo* method);
// 0x41f6bb0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__FirstKey
          (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,System_String_o *fallback,
          MethodInfo *method)

{
  if ((presets != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) &&
     (presets->max_length != 0)) {
    if ((int)presets->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fallback = presets->m_Items[0].fields.Key;
  }
  return fallback;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$LoadJson
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson (System_String_o* path, const MethodInfo* method);
// 0x41f6570

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__LoadJson(System_String_o *path,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  System_String_o *area;
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  int32_t iVar5;
  undefined1 in_stack_ffffffffffffff78 [12];
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (DAT_05704f90 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_init_method_metadata(&" bytes=");
    il2cpp_init_method_metadata(&"ProfilePresetCatalog.LoadJson");
    DAT_05704f90 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_50,"ProfilePresetCatalog.LoadJson",path,(MethodInfo *)0x0);
  x = (UnityEngine_Object_o *)UnityEngine_Resources__Load<object>(path,MethodInfo_TextAsset_Load_TextAsset);
  pSVar6 = local_50.fields._area;
  pSVar7 = local_50.fields._detail;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar6 = local_50.fields._area;
    pSVar7 = local_50.fields._detail;
  }
  iVar5 = 0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  area = "ProfilePresetCatalog.LoadJson";
  pSVar3 = " bytes=";
  if ((char)bVar1 != '\0') {
    if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar5 = 0;
    pSVar2 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
      if (pSVar2 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar5 = (pSVar2->fields)._stringLength;
    }
  }
  pSVar2 = System_Int32__ToString((int32_t)&stack0xffffffffffffff84,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat(path,pSVar3,pSVar2,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(area,pSVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar3 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    pSVar4 = SimpleJSONFixed_JSON__Parse(pSVar3,(MethodInfo *)0x0);
  }
  __this.fields._detail._4_4_ = iVar5;
  __this.fields._0_12_ = in_stack_ffffffffffffff78;
  __this.fields._startMs = (int64_t)pSVar6;
  __this.fields._24_8_ = pSVar7;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this,(MethodInfo *)&stack0xffffffffffffff88);
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgProfilePresetCatalog$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Label (System_String_o* key, const MethodInfo* method);
// 0x41f6850

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Label(System_String_o *key,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704f91 == '\0') {
    il2cpp_init_method_metadata(&"Main Background ");
    il2cpp_init_method_metadata(&"MainBackground");
    DAT_05704f91 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (key != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace(key,"MainBackground","Main Background ",(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}



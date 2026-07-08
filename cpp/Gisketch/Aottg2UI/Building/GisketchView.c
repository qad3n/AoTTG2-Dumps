// Type: Gisketch.Aottg2UI.Building.GisketchView
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchView.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchView$$get_Root
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchView__get_Root (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x3b1d310

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchView__get_Root
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  return (__this->fields)._Root_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$set_Root
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__set_Root (Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x3b1d320

void Gisketch_Aottg2UI_Building_GisketchView__set_Root
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,UnityEngine_GameObject_o *value,
               MethodInfo *method)

{
  (__this->fields)._Root_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Root_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_MotionTargets
// il2cpp: System_Collections_Generic_List_GisketchMotionTarget__o* Gisketch_Aottg2UI_Building_GisketchView__get_MotionTargets (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x3b1d330

System_Collections_Generic_List_GisketchMotionTarget__o *
Gisketch_Aottg2UI_Building_GisketchView__get_MotionTargets
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  return (__this->fields)._MotionTargets_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_SearchEntries
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Building_GisketchView__get_SearchEntries (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x3b1d340

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Building_GisketchView__get_SearchEntries
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  return (__this->fields)._SearchEntries_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$SetRoot
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__SetRoot (Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b1d350

void Gisketch_Aottg2UI_Building_GisketchView__SetRoot
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,UnityEngine_GameObject_o *root,
               MethodInfo *method)

{
  (__this->fields)._Root_k__BackingField = root;
  il2cpp_runtime_glue(&(__this->fields)._Root_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$Register
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__Register (Gisketch_Aottg2UI_Building_GisketchView_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* styleMotion, const MethodInfo* method);
// 0x3b1d360

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Building_GisketchView__Register
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *styleMotion,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o *pGVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_01;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_02;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *pGVar7;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o __this_03;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o item;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_Fields *pGVar8;
  long lVar9;
  bool_conflict bVar10;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_04;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 in_stack_ffffffffffffff50;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 in_stack_ffffffffffffff60;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  UnityEngine_GameObject_o local_58;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (DAT_05701562 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSearchEntry);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701562 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  bVar10 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((char)bVar10 == '\0') {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._elements;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
    goto LAB_03b1d659;
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_00,(Il2CppObject *)(node->fields).id,(Il2CppObject *)go,MethodInfo_Void_set_Item);
    method_00 = extraout_RDX_00;
  }
  bVar10 = Gisketch_Aottg2UI_Building_GisketchView__IsSearchable(node,go,method_00);
  if ((char)bVar10 == '\0') {
LAB_03b1d4af:
    exit = (node->fields).motion;
    if (exit != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto LAB_03b1d4bb;
LAB_03b1d4ef:
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)(node->fields).bind;
    exit = styleMotion;
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      exit = pGVar6;
    }
    pGVar5 = (node->fields).contentLayout;
  }
  else {
    __this_01 = (__this->fields)._SearchEntries_k__BackingField;
    __this_04 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)il2cpp_runtime_glue(TypeInfo_GisketchSearchEntry);
    Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor(__this_04,node,go,(MethodInfo *)0x0);
    lVar9 = MethodInfo_Void_Add;
    if (__this_01 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0)
    goto LAB_03b1d659;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar4 = (__this_01->fields)._items;
    if (pGVar4 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto LAB_03b1d659;
    uVar3 = (__this_01->fields)._size;
    if (uVar3 < (uint)pGVar4->max_length) {
      (__this_01->fields)._size = uVar3 + 1;
      pGVar4->m_Items[(int)uVar3] = __this_04;
      il2cpp_runtime_glue(pGVar4->m_Items + (int)uVar3);
      goto LAB_03b1d4af;
    }
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_04,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    exit = (node->fields).motion;
    if (exit == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto LAB_03b1d4ef;
LAB_03b1d4bb:
    pGVar5 = (node->fields).contentLayout;
  }
  if (((pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
      (bVar10 = System_String__IsNullOrEmpty((pGVar5->fields).alignItems,(MethodInfo *)0x0),
      (char)bVar10 == '\0')) ||
     (((exit == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0 ||
       (bVar10 = System_String__IsNullOrEmpty((exit->fields).preset,(MethodInfo *)0x0),
       (char)bVar10 != '\0')) &&
      ((pGVar6 = (node->fields).enter,
       pGVar6 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0 ||
       (bVar10 = System_String__IsNullOrEmpty((pGVar6->fields).preset,(MethodInfo *)0x0),
       (char)bVar10 != '\0')))))) {
    return;
  }
  __this_02 = (__this->fields)._MotionTargets_k__BackingField;
  local_58.fields.m_CachedPtr = 0;
  uStack_40 = 0;
  local_58.klass = (UnityEngine_GameObject_c *)0x0;
  local_58.monitor = (void *)0x0;
  local_38 = 0;
  __this_03.fields.Enter =
       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)in_stack_ffffffffffffff50;
  __this_03.fields.GameObject = (UnityEngine_GameObject_o *)in_stack_ffffffffffffff48;
  __this_03.fields.Exit =
       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)in_stack_ffffffffffffff58;
  __this_03.fields.RestScale.fields.x = (float)(int)in_stack_ffffffffffffff60;
  __this_03.fields.RestScale.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff60 >> 0x20);
  __this_03.fields.RestScale.fields.z = (float)(int)in_stack_ffffffffffffff68;
  __this_03.fields.RestAlpha = (float)(int)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor
            (__this_03,&local_58,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)go,exit,
             (MethodInfo *)(node->fields).enter);
  lVar9 = MethodInfo_Void_Add;
  if (__this_02 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
    piVar1 = &(__this_02->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar7 = (__this_02->fields)._items;
    if (pGVar7 != (Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *)0x0) {
      uVar3 = (__this_02->fields)._size;
      if (uVar3 < (uint)pGVar7->max_length) {
        (__this_02->fields)._size = uVar3 + 1;
        *(undefined8 *)&pGVar7->m_Items[(int)uVar3].fields.RestScale.fields.z = local_38;
        local_88 = SUB84(local_58.klass,0);
        uStack_84 = (undefined4)((ulong)local_58.klass >> 0x20);
        uStack_80 = SUB84(local_58.monitor,0);
        uStack_7c = (undefined4)((ulong)local_58.monitor >> 0x20);
        local_78 = (undefined4)local_58.fields.m_CachedPtr;
        uStack_74 = (undefined4)((ulong)local_58.fields.m_CachedPtr >> 0x20);
        fStack_70 = (float)uStack_40;
        fStack_6c = (float)((ulong)uStack_40 >> 0x20);
        pGVar8 = &pGVar7->m_Items[(int)uVar3].fields;
        *(undefined4 *)&pGVar8->Exit = local_78;
        *(undefined4 *)((long)&pGVar8->Exit + 4) = uStack_74;
        (pGVar8->RestScale).fields.x = fStack_70;
        (pGVar8->RestScale).fields.y = fStack_6c;
        pGVar2 = pGVar7->m_Items + (int)uVar3;
        *(undefined4 *)&(pGVar2->fields).GameObject = local_88;
        *(undefined4 *)((long)&(pGVar2->fields).GameObject + 4) = uStack_84;
        *(undefined4 *)&(pGVar2->fields).Enter = uStack_80;
        *(undefined4 *)((long)&(pGVar2->fields).Enter + 4) = uStack_7c;
        il2cpp_runtime_glue(pGVar7->m_Items + (int)uVar3,0);
        return;
      }
      item.fields.Enter = local_58.monitor;
      item.fields.GameObject = (UnityEngine_GameObject_o *)local_58.klass;
      item.fields.Exit =
           (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)local_58.fields.m_CachedPtr;
      item.fields.RestScale.fields.x = (float)(undefined4)uStack_40;
      item.fields.RestScale.fields.y = (float)uStack_40._4_4_;
      item.fields.RestScale.fields.z = (float)(undefined4)local_38;
      item.fields.RestAlpha = (float)local_38._4_4_;
      System_Collections_Generic_List<GisketchMotionTarget>__AddWithResize
                (__this_02,item,
                 *(MethodInfo_3528C60 **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_03b1d659:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Building.GisketchView$$Find
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchView__Find (Gisketch_Aottg2UI_Building_GisketchView_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b1d9a0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchView__Find
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_GameObject_o *local_20;
  
  if (DAT_05701563 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_05701563 = '\x01';
  }
  local_20 = (UnityEngine_GameObject_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_GameObject_o *)0x0;
  if ((char)bVar1 == '\0') {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._elements;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,(Il2CppObject *)id,(Il2CppObject **)&local_20,MethodInfo_Boolean_TryGetValue);
    pUVar2 = local_20;
    if ((char)bVar1 == '\0') {
      pUVar2 = (UnityEngine_GameObject_o *)0x0;
    }
  }
  return pUVar2;
}


// Gisketch.Aottg2UI.Building.GisketchView$$IsSearchable
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__IsSearchable (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3b1d660

bool_conflict
Gisketch_Aottg2UI_Building_GisketchView__IsSearchable
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_GameObject_o *go,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  char cVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *pUVar4;
  
  if (DAT_05701564 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
    il2cpp_init_method_metadata(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701564 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar3 == '\0') &&
       ((pSVar1 = (node->fields).popover, pSVar1 == (System_String_o *)0x0 ||
        (*(char *)((long)&pSVar1[2].fields._stringLength + 1) == '\0')))) {
      if (go == (UnityEngine_GameObject_o *)0x0) {
LAB_03b1d7b8:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar4 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_Selectable_GetComponent_Selectable)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (pUVar4 == (UnityEngine_Object_o *)0x0) goto LAB_03b1d7b8;
        cVar2 = (*(code *)pUVar4->klass[1]._1.declaringType)(pUVar4,pUVar4->klass[1]._1.parent);
        if (cVar2 != '\0') {
          cVar2 = (*(code *)pUVar4->klass[1].vtable._0_Equals.method)
                            (pUVar4,pUVar4->klass[1].vtable._1_Finalize.methodPtr);
          if ((cVar2 != '\0') && ((int)pUVar4[1].fields.m_CachedPtr != 0)) {
            pUVar4 = (UnityEngine_Object_o *)
                     UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              (pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            return bVar3;
          }
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchView$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x3b1d7f0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchView__HasMotion
          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  uint uVar1;
  
  if (motion != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    uVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
    return uVar1 ^ 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchView$$HasVisibleBinding
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__HasVisibleBinding (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b1d7c0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchView__HasVisibleBinding
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  uint uVar2;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pGVar1 = (node->fields).contentLayout;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    uVar2 = System_String__IsNullOrEmpty((pGVar1->fields).alignItems,(MethodInfo *)0x0);
    return uVar2 ^ 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchView$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView___ctor (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x3b1da30

void Gisketch_Aottg2UI_Building_GisketchView___ctor
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_01;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_02;
  
  if (DAT_05701565 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_GameObjec);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__GameObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchMotionTarget);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchSearchEntry);
    DAT_05701565 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__GameObject);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_UnityEngine_GameObjec);
  (__this->fields)._elements =
       (System_Collections_Generic_Dictionary_string__GameObject__o *)__this_00;
  il2cpp_runtime_glue(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_GisketchMotionTarget__o *)
              il2cpp_runtime_glue(TypeInfo_List_GisketchMotionTarget);
  System_Collections_Generic_List<GisketchMotionTarget>___ctor(__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotion);
  (__this->fields)._MotionTargets_k__BackingField = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._MotionTargets_k__BackingField,__this_01);
  __this_02 = (System_Collections_Generic_List_GisketchSearchEntry__o *)
              il2cpp_runtime_glue(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEn);
  (__this->fields)._SearchEntries_k__BackingField = __this_02;
  il2cpp_runtime_glue(&(__this->fields)._SearchEntries_k__BackingField);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}



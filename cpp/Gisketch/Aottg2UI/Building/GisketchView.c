// Type: Gisketch.Aottg2UI.Building.GisketchView
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchView.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchView$$get_Root
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchView__get_Root (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x3b89550

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchView__get_Root
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  return (__this->fields)._Root_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$set_Root
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__set_Root (Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x3b89560

void Gisketch_Aottg2UI_Building_GisketchView__set_Root
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,UnityEngine_GameObject_o *value,
               MethodInfo *method)

{
  (__this->fields)._Root_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Root_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_MotionTargets
// il2cpp: System_Collections_Generic_List_GisketchMotionTarget__o* Gisketch_Aottg2UI_Building_GisketchView__get_MotionTargets (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x3b89570

System_Collections_Generic_List_GisketchMotionTarget__o *
Gisketch_Aottg2UI_Building_GisketchView__get_MotionTargets
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  return (__this->fields)._MotionTargets_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_SearchEntries
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Building_GisketchView__get_SearchEntries (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x3b89580

System_Collections_Generic_List_GisketchSearchEntry__o *
Gisketch_Aottg2UI_Building_GisketchView__get_SearchEntries
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  return (__this->fields)._SearchEntries_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$SetRoot
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__SetRoot (Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b89590

void Gisketch_Aottg2UI_Building_GisketchView__SetRoot
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,UnityEngine_GameObject_o *root,
               MethodInfo *method)

{
  (__this->fields)._Root_k__BackingField = root;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Root_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$Register
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__Register (Gisketch_Aottg2UI_Building_GisketchView_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* styleMotion, const MethodInfo* method);
// 0x3b895a0

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
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o __this_03;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_o item;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_Fields *pGVar9;
  long lVar10;
  char cVar11;
  bool_conflict bVar12;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_04;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *x;
  UnityEngine_Object_o *x_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *x_01;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *gameObject;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
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
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_c *local_58;
  void *pvStack_50;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_48;
  UnityEngine_GameObject_o *pUStack_40;
  System_String_o *local_38;
  
  if (g_data_057a9e91 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e91 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return;
  }
  x_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  bVar12 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((char)bVar12 == '\0') {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._elements;
    gameObject = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)(node->fields).id,(Il2CppObject *)go,MethodInfo_Void_set_Item);
      method_00 = extraout_RDX_00;
      goto label_03b89670;
    }
  }
  else {
label_03b89670:
    bVar12 = Gisketch_Aottg2UI_Building_GisketchView__IsSearchable(node,go,method_00);
    if ((char)bVar12 == '\0') {
label_03b896ef:
      exit = (node->fields).motion;
joined_r0x03b8972d:
      if (exit == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)(node->fields).bind;
        exit = styleMotion;
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
          exit = pGVar6;
        }
        pGVar5 = (node->fields).contentLayout;
      }
      else {
        pGVar5 = (node->fields).contentLayout;
      }
      if (((pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
          (bVar12 = System_String__IsNullOrEmpty((pGVar5->fields).alignItems,(MethodInfo *)0x0),
          (char)bVar12 == '\0')) ||
         (((exit == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0 ||
           (bVar12 = System_String__IsNullOrEmpty((exit->fields).preset,(MethodInfo *)0x0),
           (char)bVar12 != '\0')) &&
          ((pGVar6 = (node->fields).enter, pGVar6 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
           || (bVar12 = System_String__IsNullOrEmpty((pGVar6->fields).preset,(MethodInfo *)0x0),
              (char)bVar12 != '\0')))))) {
        return;
      }
      __this_02 = (__this->fields)._MotionTargets_k__BackingField;
      local_48 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      pUStack_40 = (UnityEngine_GameObject_o *)0x0;
      local_58 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_c *)0x0;
      pvStack_50 = (void *)0x0;
      local_38 = (System_String_o *)0x0;
      gameObject = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)&stack0xffffffffffffffa8;
      __this_03.fields.Enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)in_stack_ffffffffffffff50;
      __this_03.fields.GameObject = (UnityEngine_GameObject_o *)in_stack_ffffffffffffff48;
      __this_03.fields.Exit = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)in_stack_ffffffffffffff58;
      __this_03.fields.RestScale.fields.x = (float)(int)in_stack_ffffffffffffff60;
      __this_03.fields.RestScale.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff60 >> 0x20);
      __this_03.fields.RestScale.fields.z = (float)(int)in_stack_ffffffffffffff68;
      __this_03.fields.RestAlpha = (float)(int)((ulong)in_stack_ffffffffffffff68 >> 0x20);
      Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor
                (__this_03,(UnityEngine_GameObject_o *)gameObject,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)go,exit,
                 (MethodInfo *)(node->fields).enter);
      lVar10 = MethodInfo_Void_Add;
      x_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)go;
      if (__this_02 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar7 = (__this_02->fields)._items;
        if (pGVar7 != (Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *)0x0) {
          uVar3 = (__this_02->fields)._size;
          if (uVar3 < (uint)pGVar7->max_length) {
            (__this_02->fields)._size = uVar3 + 1;
            *(System_String_o **)&pGVar7->m_Items[(int)uVar3].fields.RestScale.fields.z = local_38;
            local_88 = SUB84(local_58,0);
            uStack_84 = (undefined4)((ulong)local_58 >> 0x20);
            uStack_80 = SUB84(pvStack_50,0);
            uStack_7c = (undefined4)((ulong)pvStack_50 >> 0x20);
            local_78 = SUB84(local_48,0);
            uStack_74 = (undefined4)((ulong)local_48 >> 0x20);
            fStack_70 = SUB84(pUStack_40,0);
            fStack_6c = (float)((ulong)pUStack_40 >> 0x20);
            pGVar9 = &pGVar7->m_Items[(int)uVar3].fields;
            *(undefined4 *)&pGVar9->Exit = local_78;
            *(undefined4 *)((long)&pGVar9->Exit + 4) = uStack_74;
            (pGVar9->RestScale).fields.x = fStack_70;
            (pGVar9->RestScale).fields.y = fStack_6c;
            pGVar2 = pGVar7->m_Items + (int)uVar3;
            *(undefined4 *)&(pGVar2->fields).GameObject = local_88;
            *(undefined4 *)((long)&(pGVar2->fields).GameObject + 4) = uStack_84;
            *(undefined4 *)&(pGVar2->fields).Enter = uStack_80;
            *(undefined4 *)((long)&(pGVar2->fields).Enter + 4) = uStack_7c;
            il2cpp_runtime_helper_022b4080(pGVar7->m_Items + (int)uVar3,0);
            return;
          }
          item.fields.Enter = pvStack_50;
          item.fields.GameObject = (UnityEngine_GameObject_o *)local_58;
          item.fields.Exit = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)local_48;
          item.fields.RestScale.fields._0_8_ = pUStack_40;
          item.fields._32_8_ = local_38;
          System_Collections_Generic_List_GisketchMotionTarget___AddWithResize
                    (__this_02,item,
                     *(MethodInfo_35EA9E0 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
    else {
      __this_01 = (__this->fields)._SearchEntries_k__BackingField;
      __this_04 = (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchSearchEntry);
      x_01 = node;
      gameObject = __this_04;
      Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor(__this_04,node,go,(MethodInfo *)0x0);
      lVar10 = MethodInfo_Void_Add;
      if (__this_01 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar4 = (__this_01->fields)._items;
        if (pGVar4 != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) {
          uVar3 = (__this_01->fields)._size;
          if (uVar3 < (uint)pGVar4->max_length) {
            (__this_01->fields)._size = uVar3 + 1;
            pGVar4->m_Items[(int)uVar3] = __this_04;
            il2cpp_runtime_helper_022b4080(pGVar4->m_Items + (int)uVar3);
            goto label_03b896ef;
          }
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_04,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          exit = (node->fields).motion;
          goto joined_r0x03b8972d;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e93 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e93 = '\x01';
  }
  if (gameObject != (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar13 = x_01;
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar12 == '\0') &&
       ((pSVar8 = gameObject[1].fields._Title_k__BackingField, pSVar8 == (System_String_o *)0x0 ||
        (*(char *)((long)&pSVar8[2].fields._stringLength + 1) == '\0')))) {
      if (x_01 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_03b899f8:
        il2cpp_runtime_helper_022b2c90();
        if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            System_String__IsNullOrEmpty((pGVar13->fields).type,(MethodInfo *)0x0);
            return;
          }
          return;
        }
        pGVar5 = (pGVar13->fields).contentLayout;
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          System_String__IsNullOrEmpty((pGVar5->fields).alignItems,(MethodInfo *)0x0);
          return;
        }
        return;
      }
      x = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
          UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x_01,MethodInfo_Selectable_GetComponent_Selectable);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar13 = x;
      bVar12 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        if (x == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b899f8;
        cVar11 = (*(code *)((UnityEngine_Object_c *)x->klass)[1]._1.declaringType)
                           (x,((UnityEngine_Object_c *)x->klass)[1]._1.parent);
        if (((cVar11 != '\0') &&
            (cVar11 = (*(code *)((UnityEngine_Object_c *)x->klass)[1].vtable._0_Equals.method)
                                (x,((UnityEngine_Object_c *)x->klass)[1].vtable._1_Finalize.methodPtr),
            cVar11 != '\0')) && (*(int *)&(x->fields).textKey != 0)) {
          x_00 = (UnityEngine_Object_o *)
                 UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x_01,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$Find
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchView__Find (Gisketch_Aottg2UI_Building_GisketchView_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b89be0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchView__Find
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  System_Int32_array *__this_00;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_GameObject_o *extraout_RAX;
  UnityEngine_GameObject_o *pUVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  UnityEngine_GameObject_o *local_20;
  
  if (g_data_057a9e92 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057a9e92 = '\x01';
  }
  local_20 = (UnityEngine_GameObject_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  pUVar2 = (UnityEngine_GameObject_o *)0x0;
  if ((char)bVar1 == '\0') {
    __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._elements;
    if (__this_03 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9e94 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_GameObject);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
        il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotionTarget);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchMotionTarget);
        il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
        g_data_057a9e94 = '\x01';
      }
      __this_00 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_GameObject);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
      (__this_03->fields)._buckets = __this_00;
      il2cpp_runtime_helper_022b4080(&__this_03->fields,__this_00);
      __this_01 = (System_Collections_Generic_List_GisketchMotionTarget__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchMotionTarget);
      System_Collections_Generic_List_GisketchMotionTarget____ctor(__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotionTarget);
      *(System_Collections_Generic_List_GisketchMotionTarget__o **)&(__this_03->fields)._count = __this_01;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields)._count,__this_01);
      __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
      System_Collections_Generic_List_object____ctor(__this_02,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
      *(System_Collections_Generic_List_object__o **)&(__this_03->fields)._freeCount = __this_02;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields)._freeCount);
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_03,(Il2CppObject *)id,(Il2CppObject **)&local_20,MethodInfo_Boolean_TryGetValue);
    pUVar2 = local_20;
    if ((char)bVar1 == '\0') {
      pUVar2 = (UnityEngine_GameObject_o *)0x0;
    }
  }
  return pUVar2;
}


// Gisketch.Aottg2UI.Building.GisketchView$$IsSearchable
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__IsSearchable (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3b898a0

bool_conflict
Gisketch_Aottg2UI_Building_GisketchView__IsSearchable
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_GameObject_o *go,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  long lVar2;
  char cVar3;
  bool_conflict bVar4;
  uint uVar5;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar6;
  
  if (g_data_057a9e93 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e93 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar6 = (UnityEngine_Object_o *)go;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (((char)bVar4 == '\0') &&
       ((pSVar1 = (node->fields).popover, pSVar1 == (System_String_o *)0x0 ||
        (*(char *)((long)&pSVar1[2].fields._stringLength + 1) == '\0')))) {
      if (go == (UnityEngine_GameObject_o *)0x0) {
label_03b899f8:
        il2cpp_runtime_helper_022b2c90();
        if (pUVar6 == (UnityEngine_Object_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (pUVar6 != (UnityEngine_Object_o *)0x0) {
            uVar5 = System_String__IsNullOrEmpty
                              ((System_String_o *)(pUVar6->fields).m_CachedPtr,(MethodInfo *)0x0);
            return uVar5 ^ 1;
          }
          return 0;
        }
        lVar2 = pUVar6[9].fields.m_CachedPtr;
        if (lVar2 != 0) {
          uVar5 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar2 + 0x20),(MethodInfo *)0x0);
          return uVar5 ^ 1;
        }
        return 0;
      }
      x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_Selectable_GetComponent_Selectable);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar6 = x;
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (x == (UnityEngine_Object_o *)0x0) goto label_03b899f8;
        cVar3 = (*(code *)x->klass[1]._1.declaringType)(x,x->klass[1]._1.parent);
        if (cVar3 != '\0') {
          cVar3 = (*(code *)x->klass[1].vtable._0_Equals.method)(x,x->klass[1].vtable._1_Finalize.methodPtr);
          if ((cVar3 != '\0') && ((int)x[1].fields.m_CachedPtr != 0)) {
            pUVar6 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_GisketchFocusRing_GetComponent_GisketchFocusRing);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar4 = UnityEngine_Object__op_Inequality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            return bVar4;
          }
        }
      }
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchView$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x3b89a30

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
// 0x3b89a00

bool_conflict
Gisketch_Aottg2UI_Building_GisketchView__HasVisibleBinding
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  uint uVar2;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      uVar2 = System_String__IsNullOrEmpty((node->fields).type,(MethodInfo *)0x0);
      return uVar2 ^ 1;
    }
    return 0;
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
// 0x3b89c70

void Gisketch_Aottg2UI_Building_GisketchView___ctor
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_01;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_02;
  
  if (g_data_057a9e94 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotionTarget);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchMotionTarget);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
    g_data_057a9e94 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
  (__this->fields)._elements = (System_Collections_Generic_Dictionary_string__GameObject__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_GisketchMotionTarget__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchMotionTarget);
  System_Collections_Generic_List_GisketchMotionTarget____ctor(__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotionTarget);
  (__this->fields)._MotionTargets_k__BackingField = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._MotionTargets_k__BackingField,__this_01);
  __this_02 = (System_Collections_Generic_List_GisketchSearchEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
  (__this->fields)._SearchEntries_k__BackingField = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._SearchEntries_k__BackingField);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}



// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeParentRuntime.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* item, const MethodInfo* method);
// 0x4173460

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint uVar3;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_array *pGVar5;
  long lVar6;
  undefined1 uVar7;
  bool_conflict bVar8;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *pGVar9;
  
  if (DAT_05704ae5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ae5 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pSVar4 = (__this->fields)._items;
  if (pSVar4 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    bVar8 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                       MethodInfo_Boolean_Contains);
    lVar6 = MethodInfo_Void_Add;
    if ((char)bVar8 != '\0') {
      return;
    }
    pSVar4 = (__this->fields)._items;
    if (pSVar4 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar5 = (pSVar4->fields)._items;
      if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_array *)0x0) {
        uVar3 = (pSVar4->fields)._size;
        pGVar9 = item;
        if (uVar3 < (uint)pGVar5->max_length) {
          (pSVar4->fields)._size = uVar3 + 1;
          pGVar5->m_Items[(int)uVar3] = item;
          il2cpp_runtime_glue(pGVar5->m_Items + (int)uVar3);
          cVar2 = (char)(__this->fields)._hovered;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          cVar2 = (char)(__this->fields)._hovered;
        }
        uVar7 = 1;
        if (cVar2 == '\0') {
          uVar7 = *(undefined1 *)((long)&(__this->fields)._hovered + 1);
        }
        if (item != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
          *(undefined1 *)&(item->fields)._active = uVar7;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee
                    (item,(MethodInfo *)pGVar9);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x4173630

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar3;
  undefined1 uVar4;
  
  *(undefined1 *)&(__this->fields)._hovered = 1;
  if (DAT_05704ae6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ae6 = '\x01';
    cVar1 = (char)(__this->fields)._hovered;
  }
  else {
    cVar1 = (char)(__this->fields)._hovered;
  }
  if (cVar1 == '\0') {
    uVar4 = *(undefined1 *)((long)&(__this->fields)._hovered + 1);
    pSVar3 = (__this->fields)._items;
  }
  else {
    uVar4 = 1;
    pSVar3 = (__this->fields)._items;
  }
  if (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    index = (pSVar3->fields)._size - 1;
    if ((int)index < 0) {
      return;
    }
    do {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) break;
      if ((char)bVar2 == '\0') {
        method_00 = (MethodInfo *)(ulong)index;
        __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) break;
        *(undefined1 *)&(__this_00->fields)._active = uVar4;
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
      }
      else {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_Void_RemoveAt);
      }
      if ((int)(index - 1) < 0) {
        return;
      }
      index = index - 1;
      pSVar3 = (__this->fields)._items;
    } while (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x4173790

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar3;
  undefined1 uVar4;
  
  *(undefined1 *)&(__this->fields)._hovered = 0;
  if (DAT_05704ae6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ae6 = '\x01';
    cVar1 = (char)(__this->fields)._hovered;
  }
  else {
    cVar1 = (char)(__this->fields)._hovered;
  }
  if (cVar1 == '\0') {
    uVar4 = *(undefined1 *)((long)&(__this->fields)._hovered + 1);
    pSVar3 = (__this->fields)._items;
  }
  else {
    uVar4 = 1;
    pSVar3 = (__this->fields)._items;
  }
  if (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    index = (pSVar3->fields)._size - 1;
    if ((int)index < 0) {
      return;
    }
    do {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) break;
      if ((char)bVar2 == '\0') {
        method_00 = (MethodInfo *)(ulong)index;
        __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) break;
        *(undefined1 *)&(__this_00->fields)._active = uVar4;
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
      }
      else {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_Void_RemoveAt);
      }
      if ((int)(index - 1) < 0) {
        return;
      }
      index = index - 1;
      pSVar3 = (__this->fields)._items;
    } while (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnSelect (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x41737a0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnSelect
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar3;
  undefined1 uVar4;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 1;
  if (DAT_05704ae6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ae6 = '\x01';
    cVar1 = (char)(__this->fields)._hovered;
  }
  else {
    cVar1 = (char)(__this->fields)._hovered;
  }
  if (cVar1 == '\0') {
    uVar4 = *(undefined1 *)((long)&(__this->fields)._hovered + 1);
    pSVar3 = (__this->fields)._items;
  }
  else {
    uVar4 = 1;
    pSVar3 = (__this->fields)._items;
  }
  if (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    index = (pSVar3->fields)._size - 1;
    if ((int)index < 0) {
      return;
    }
    do {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) break;
      if ((char)bVar2 == '\0') {
        method_00 = (MethodInfo *)(ulong)index;
        __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) break;
        *(undefined1 *)&(__this_00->fields)._active = uVar4;
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
      }
      else {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_Void_RemoveAt);
      }
      if ((int)(index - 1) < 0) {
        return;
      }
      index = index - 1;
      pSVar3 = (__this->fields)._items;
    } while (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDeselect (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x41737b0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar3;
  undefined1 uVar4;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 0;
  if (DAT_05704ae6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ae6 = '\x01';
    cVar1 = (char)(__this->fields)._hovered;
  }
  else {
    cVar1 = (char)(__this->fields)._hovered;
  }
  if (cVar1 == '\0') {
    uVar4 = *(undefined1 *)((long)&(__this->fields)._hovered + 1);
    pSVar3 = (__this->fields)._items;
  }
  else {
    uVar4 = 1;
    pSVar3 = (__this->fields)._items;
  }
  if (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    index = (pSVar3->fields)._size - 1;
    if ((int)index < 0) {
      return;
    }
    do {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) break;
      if ((char)bVar2 == '\0') {
        method_00 = (MethodInfo *)(ulong)index;
        __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) break;
        *(undefined1 *)&(__this_00->fields)._active = uVar4;
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
      }
      else {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_Void_RemoveAt);
      }
      if ((int)(index - 1) < 0) {
        return;
      }
      index = index - 1;
      pSVar3 = (__this->fields)._items;
    } while (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x41737c0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar3;
  undefined1 uVar4;
  
  *(undefined2 *)&(__this->fields)._hovered = 0;
  if (DAT_05704ae6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ae6 = '\x01';
    cVar1 = (char)(__this->fields)._hovered;
  }
  else {
    cVar1 = (char)(__this->fields)._hovered;
  }
  if (cVar1 == '\0') {
    uVar4 = *(undefined1 *)((long)&(__this->fields)._hovered + 1);
    pSVar3 = (__this->fields)._items;
  }
  else {
    uVar4 = 1;
    pSVar3 = (__this->fields)._items;
  }
  if (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    index = (pSVar3->fields)._size - 1;
    if ((int)index < 0) {
      return;
    }
    do {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) break;
      if ((char)bVar2 == '\0') {
        method_00 = (MethodInfo *)(ulong)index;
        __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) break;
        *(undefined1 *)&(__this_00->fields)._active = uVar4;
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
      }
      else {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_Void_RemoveAt);
      }
      if ((int)(index - 1) < 0) {
        return;
      }
      index = index - 1;
      pSVar3 = (__this->fields)._items;
    } while (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x4173640

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  uint index;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar3;
  undefined1 uVar4;
  
  if (DAT_05704ae6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ae6 = '\x01';
    cVar1 = (char)(__this->fields)._hovered;
  }
  else {
    cVar1 = (char)(__this->fields)._hovered;
  }
  if (cVar1 == '\0') {
    uVar4 = *(undefined1 *)((long)&(__this->fields)._hovered + 1);
    pSVar3 = (__this->fields)._items;
  }
  else {
    uVar4 = 1;
    pSVar3 = (__this->fields)._items;
  }
  if (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    index = (pSVar3->fields)._size - 1;
    if ((int)index < 0) {
      return;
    }
    do {
      x = (UnityEngine_Object_o *)
          System_Collections_Generic_List<object>__get_Item
                    ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) break;
      if ((char)bVar2 == '\0') {
        method_00 = (MethodInfo *)(ulong)index;
        __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) break;
        *(undefined1 *)&(__this_00->fields)._active = uVar4;
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
      }
      else {
        System_Collections_Generic_List<object>__RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar3,index,MethodInfo_Void_RemoveAt);
      }
      if ((int)(index - 1) < 0) {
        return;
      }
      index = index - 1;
      pSVar3 = (__this->fields)._items;
    } while (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x41737d0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_00;
  
  if (DAT_05704ae7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgHoverMarqueeT);
    il2cpp_init_method_metadata(&TypeInfo_List_AottgHoverMarqueeTextRuntime);
    DAT_05704ae7 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)
              il2cpp_runtime_glue(TypeInfo_List_AottgHoverMarqueeTextRuntime);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgHoverMarqueeT);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._items);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



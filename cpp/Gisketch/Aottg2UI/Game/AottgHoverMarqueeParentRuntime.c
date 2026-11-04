// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeParentRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* item, const MethodInfo* method);
// 0x1823b3540

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_array *pGVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  char cVar7;
  
  if (Il2CppMethodInitialized_184347d15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d15 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  pSVar3 = (__this->fields)._items;
  if (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    bVar6 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                       (MethodInfo_93FC70 *)
                       MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Contains);
    pMVar5 = MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Add;
    if (bVar6) {
      return;
    }
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar4 = (pSVar3->fields)._items;
      if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pGVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          if ((uint)pGVar4->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pGVar4->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pGVar4->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        cVar7 = '\x01';
        if ((__this->fields)._hovered == false) {
          cVar7 = (__this->fields)._selected;
        }
        if (item != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
          (item->fields)._active = cVar7 != '\0';
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(item,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823b33e0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._hovered = true;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823b33f0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnSelect (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1823b3400

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnSelect
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = true;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDeselect (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1823b33c0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x1823b33d0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x1823b3410
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b3495: nop word ptr [rax + rax]
// asm:   0x1823b351c: sub ebx, 1
// asm:   0x1823b351f: jns 0x1823b34a0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar1;
  char cVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *pGVar4;
  
  if (Il2CppMethodInitialized_184347d16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d16 = '\x01';
  }
  cVar2 = '\x01';
  if ((__this->fields)._hovered == false) {
    cVar2 = (__this->fields)._selected;
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    index = (pSVar1->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      pSVar1 = (__this->fields)._items;
      if (pSVar1 == (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) break;
      pGVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._items;
      if (pSVar1 == (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) break;
      if (bVar3) {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                   (MethodInfo_947010 *)
                   MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_RemoveAt);
      }
      else {
        pGVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_get_Item);
        if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) break;
        (pGVar4->fields)._active = cVar2 != '\0';
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(pGVar4,(MethodInfo *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x1823b3680

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_00;
  
  if (Il2CppMethodInitialized_184347d17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime);
    Il2CppMethodInitialized_184347d17 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime)
  ;
  System_Collections_Generic_LowLevelList___Il2CppFullySharedGenericType____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_ctor
            );
  (__this->fields)._items = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



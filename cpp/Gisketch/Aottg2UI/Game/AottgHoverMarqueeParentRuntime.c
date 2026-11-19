// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeParentRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* item, const MethodInfo* method);
// 0x5e84d10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e84df1: jmp 0x5e84e13

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint uVar3;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_array *pGVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *pGVar8;
  
  if (Il2CppMethodInitialized_07548846 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Contains);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548846 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return;
  }
  pSVar4 = (__this->fields)._items;
  if (pSVar4 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    bVar7 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                       (MethodInfo_395D6D0 *)
                       MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Contains);
    pMVar6 = MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_Add;
    if (bVar7) {
      return;
    }
    pSVar4 = (__this->fields)._items;
    if (pSVar4 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar5 = (pSVar4->fields)._items;
      if (pGVar5 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_array *)0x0) {
        uVar3 = (pSVar4->fields)._size;
        pGVar8 = item;
        if (uVar3 < (uint)pGVar5->max_length) {
          (pSVar4->fields)._size = uVar3 + 1;
          pGVar5->m_Items[(int)uVar3] = item;
          Il2CppCodeGenWriteBarrier(pGVar5->m_Items + (int)uVar3);
          cVar2 = (__this->fields)._hovered;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          cVar2 = (__this->fields)._hovered;
        }
        bVar7 = true;
        if (cVar2 == '\0') {
          bVar7 = (__this->fields)._selected;
        }
        if (item != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
          (item->fields)._active = bVar7;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(item,(MethodInfo *)pGVar8);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e84ee0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._hovered = true;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e85040

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnSelect (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5e85050

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnSelect
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = true;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDeselect (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x5e85060

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh(__this,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x5e85070

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._hovered = false;
  (__this->fields)._selected = false;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x5e84ef0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e84f1a: jmp 0x5e85035
// asm:   0x5e84f7d: lea r12, [rip + 0x140e464]  ; MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_get_Item
// asm:   0x5e84f84: lea r13, [rip + 0x13f6465]  ; TypeInfo_UnityEngine_Object
// asm:   0x5e84f8b: jmp 0x5e84f98
// asm:   0x5e84f90: dec ebp
// asm:   0x5e84f92: js 0x5e85026

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  char cVar1;
  uint index;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *pGVar4;
  MethodInfo *method_00;
  bool bVar5;
  
  if (Il2CppMethodInitialized_07548847 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548847 = '\x01';
    cVar1 = (__this->fields)._hovered;
  }
  else {
    cVar1 = (__this->fields)._hovered;
  }
  if (cVar1 == '\0') {
    bVar5 = (__this->fields)._selected;
    pSVar2 = (__this->fields)._items;
  }
  else {
    bVar5 = true;
    pSVar2 = (__this->fields)._items;
  }
  if (pSVar2 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    index = (pSVar2->fields)._size;
    while( true ) {
      index = index - 1;
      if ((int)index < 0) {
        return;
      }
      pSVar2 = (__this->fields)._items;
      if (pSVar2 == (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) break;
      pGVar4 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._items;
      if (bVar3) {
        if (pSVar2 == (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) break;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar2,index,
                   (MethodInfo_395F100 *)
                   MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_RemoveAt);
      }
      else {
        if (pSVar2 == (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) break;
        method_00 = (MethodInfo *)(ulong)index;
        pGVar4 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,index,
                            (MethodInfo_395CF20 *)
                            MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_get_Item);
        if (pGVar4 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) break;
        (pGVar4->fields)._active = bVar5;
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(pGVar4,method_00);
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x5e85080

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_00;
  
  if (Il2CppMethodInitialized_07548848 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime);
    Il2CppMethodInitialized_07548848 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_AottgHoverMarqueeTextRuntime_ctor);
  (__this->fields)._items = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



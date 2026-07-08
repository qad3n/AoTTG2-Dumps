// Type: Gisketch.Aottg2UI.Actions.AottgSearchResultSelection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSearchResultSelection.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__Setup (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* owner, int32_t index, const MethodInfo* method);
// 0x3b23b70

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__Setup
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *owner,int32_t index,
               MethodInfo *method)

{
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner);
  (__this->fields)._index = index;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerEnter (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b24280

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar6;
  int iVar7;
  float fVar8;
  UnityEngine_Vector2_Fields UVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    iVar4 = (__this->fields)._index;
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      UVar9 = UVar11.fields._0_8_;
      cVar3 = *(char *)((long)&(__this_00->fields)._hasAnimatedResults + 1);
    }
    else {
      UVar9 = (eventData->fields)._position_k__BackingField.fields;
      cVar3 = *(char *)((long)&(__this_00->fields)._hasAnimatedResults + 1);
    }
    if (cVar3 != '\0') {
      uVar1 = (__this_00->fields)._pointerSelectionLocked;
      uVar2 = (__this_00->fields)._pointerLockPosition.fields.x;
      fVar8 = UVar9.x - (float)uVar1;
      fVar10 = UVar9.y - (float)uVar2;
      if (fVar10 * fVar10 + fVar8 * fVar8 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(__this_00->fields)._hasAnimatedResults + 1) = 0;
    }
    if (DAT_05701586 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
      DAT_05701586 = '\x01';
    }
    pSVar6 = (__this_00->fields)._results;
    if (pSVar6 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar5 = (pSVar6->fields)._size;
    iVar7 = 8;
    if (iVar5 < 9) {
      iVar7 = iVar5;
    }
    if (iVar7 != 0) {
      (__this_00->fields)._pointerLockPosition.fields.y = (float)((iVar4 % iVar7 + iVar7) % iVar7);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                (__this_00,(MethodInfo *)eventData);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
                (__this_00,(MethodInfo *)eventData);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerMove (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b24360

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerMove
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar6;
  int iVar7;
  float fVar8;
  UnityEngine_Vector2_Fields UVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    iVar4 = (__this->fields)._index;
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      UVar9 = UVar11.fields._0_8_;
      cVar3 = *(char *)((long)&(__this_00->fields)._hasAnimatedResults + 1);
    }
    else {
      UVar9 = (eventData->fields)._position_k__BackingField.fields;
      cVar3 = *(char *)((long)&(__this_00->fields)._hasAnimatedResults + 1);
    }
    if (cVar3 != '\0') {
      uVar1 = (__this_00->fields)._pointerSelectionLocked;
      uVar2 = (__this_00->fields)._pointerLockPosition.fields.x;
      fVar8 = UVar9.x - (float)uVar1;
      fVar10 = UVar9.y - (float)uVar2;
      if (fVar10 * fVar10 + fVar8 * fVar8 < 4.0) {
        return;
      }
      *(undefined1 *)((long)&(__this_00->fields)._hasAnimatedResults + 1) = 0;
    }
    if (DAT_05701586 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
      DAT_05701586 = '\x01';
    }
    pSVar6 = (__this_00->fields)._results;
    if (pSVar6 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar5 = (pSVar6->fields)._size;
    iVar7 = 8;
    if (iVar5 < 9) {
      iVar7 = iVar5;
    }
    if (iVar7 != 0) {
      (__this_00->fields)._pointerLockPosition.fields.y = (float)((iVar4 % iVar7 + iVar7) % iVar7);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                (__this_00,(MethodInfo *)eventData);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
                (__this_00,(MethodInfo *)eventData);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnSelect (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b24440

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnSelect
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar3;
  int iVar4;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    iVar1 = (__this->fields)._index;
    if (DAT_05701586 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
      DAT_05701586 = '\x01';
    }
    pSVar3 = (__this_00->fields)._results;
    if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar2 = (pSVar3->fields)._size;
    iVar4 = 8;
    if (iVar2 < 9) {
      iVar4 = iVar2;
    }
    if (iVar4 != 0) {
      (__this_00->fields)._pointerLockPosition.fields.y = (float)((iVar1 % iVar4 + iVar4) % iVar4);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection
                (__this_00,(MethodInfo *)eventData);
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
                (__this_00,(MethodInfo *)eventData);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection___ctor (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, const MethodInfo* method);
// 0x3b244c0

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



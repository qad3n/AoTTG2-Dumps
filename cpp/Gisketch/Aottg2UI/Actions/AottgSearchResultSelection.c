// Type: Gisketch.Aottg2UI.Actions.AottgSearchResultSelection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSearchResultSelection.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__Setup (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* owner, int32_t index, const MethodInfo* method);
// 0x539a590

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__Setup
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *owner,int32_t index,MethodInfo *method)

{
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner);
  (__this->fields)._index = index;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerEnter (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539b4e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539b506: cmp byte ptr [rip + 0x21a765d], 0
// asm:   0x539b5a6: jmp 0x539b522

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar5;
  int iVar6;
  float fVar7;
  UnityEngine_Vector2_Fields UVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    iVar3 = (__this->fields)._index;
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      UVar10 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      UVar8 = UVar10.fields._0_8_;
      cVar2 = (__this_00->fields)._pointerSelectionLocked;
    }
    else {
      UVar8 = (eventData->fields)._position_k__BackingField.fields;
      cVar2 = (__this_00->fields)._pointerSelectionLocked;
    }
    if (cVar2 != '\0') {
      UVar1 = (__this_00->fields)._pointerLockPosition.fields;
      fVar7 = UVar8.x - UVar1.x;
      fVar9 = UVar8.y - UVar1.y;
      if (fVar9 * fVar9 + fVar7 * fVar7 < 4.0) {
        return;
      }
      (__this_00->fields)._pointerSelectionLocked = false;
    }
    if (Il2CppMethodInitialized_07542b6a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
      Il2CppMethodInitialized_07542b6a = '\x01';
    }
    pSVar5 = (__this_00->fields)._results;
    if (pSVar5 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar4 = (pSVar5->fields)._size;
    iVar6 = 8;
    if (iVar4 < 8) {
      iVar6 = iVar4;
    }
    if (iVar6 != 0) {
      (__this_00->fields)._selectedIndex = (iVar3 % iVar6 + iVar6) % iVar6;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this_00,(MethodInfo *)eventData)
      ;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
                (__this_00,(MethodInfo *)eventData);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerMove (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539b5c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x539b5e6: cmp byte ptr [rip + 0x21a757d], 0
// asm:   0x539b686: jmp 0x539b602

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerMove
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *pSVar5;
  int iVar6;
  float fVar7;
  UnityEngine_Vector2_Fields UVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    iVar3 = (__this->fields)._index;
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      UVar10 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      UVar8 = UVar10.fields._0_8_;
      cVar2 = (__this_00->fields)._pointerSelectionLocked;
    }
    else {
      UVar8 = (eventData->fields)._position_k__BackingField.fields;
      cVar2 = (__this_00->fields)._pointerSelectionLocked;
    }
    if (cVar2 != '\0') {
      UVar1 = (__this_00->fields)._pointerLockPosition.fields;
      fVar7 = UVar8.x - UVar1.x;
      fVar9 = UVar8.y - UVar1.y;
      if (fVar9 * fVar9 + fVar7 * fVar7 < 4.0) {
        return;
      }
      (__this_00->fields)._pointerSelectionLocked = false;
    }
    if (Il2CppMethodInitialized_07542b6a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
      Il2CppMethodInitialized_07542b6a = '\x01';
    }
    pSVar5 = (__this_00->fields)._results;
    if (pSVar5 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar4 = (pSVar5->fields)._size;
    iVar6 = 8;
    if (iVar4 < 8) {
      iVar6 = iVar4;
    }
    if (iVar6 != 0) {
      (__this_00->fields)._selectedIndex = (iVar3 % iVar6 + iVar6) % iVar6;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this_00,(MethodInfo *)eventData)
      ;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
                (__this_00,(MethodInfo *)eventData);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnSelect (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x539b6a0

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
    if (Il2CppMethodInitialized_07542b6a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_get_Count);
      Il2CppMethodInitialized_07542b6a = '\x01';
    }
    pSVar3 = (__this_00->fields)._results;
    if (pSVar3 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar2 = (pSVar3->fields)._size;
    iVar4 = 8;
    if (iVar2 < 8) {
      iVar4 = iVar2;
    }
    if (iVar4 != 0) {
      (__this_00->fields)._selectedIndex = (iVar1 % iVar4 + iVar4) % iVar4;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RefreshSelection(__this_00,(MethodInfo *)eventData)
      ;
      Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__RevealSelectedResult
                (__this_00,(MethodInfo *)eventData);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection___ctor (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, const MethodInfo* method);
// 0x539b720

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection___ctor
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



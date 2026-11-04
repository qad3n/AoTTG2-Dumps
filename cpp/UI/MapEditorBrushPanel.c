// Type: UI.MapEditorBrushPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/MapEditorBrushPanel.cs
// Prior real C# source: none
// --------------------------------

// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$.ctor
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___ctor (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___ctor(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__18
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__18 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b90b0

void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__18
               (UI_MapEditorBrushPanel___c__DisplayClass73_0_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_MapEditorBrush_o *__this_01;
  
  __this_00 = (__this->fields).__4__this;
  if (((__this_00 != (UI_MapEditorBrushPanel_o *)0x0) &&
      (pGVar1 = (__this_00->fields)._gameManager, pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0)) &&
     (__this_01 = (pGVar1->fields).Brush, __this_01 != (MapEditor_MapEditorBrush_o *)0x0)) {
    MapEditor_MapEditorBrush__RemoveEntry(__this_01,(__this->fields).index,(MethodInfo *)0x0);
    UI_MapEditorBrushPanel__Rebuild(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__19
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__19 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__19(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__20
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__20 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9130

void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__20
               (UI_MapEditorBrushPanel___c__DisplayClass73_0_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t index;
  UI_MapEditorBrushPanel_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar2;
  MapEditor_MapEditorBrush_o *__this_01;
  System_Collections_Generic_List_BrushEntry__o *pSVar3;
  System_Collections_Generic_List_BoolSetting__o *pSVar4;
  MapEditor_BrushEntry_o *pMVar5;
  Settings_BoolSetting_o *pSVar6;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    index = (__this->fields).index;
    if (Il2CppMethodInitialized_1843474dc == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Count);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
      Il2CppMethodInitialized_1843474dc = '\x01';
    }
    pGVar2 = (__this_00->fields)._gameManager;
    if (((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
        (__this_01 = (pGVar2->fields).Brush, __this_01 != (MapEditor_MapEditorBrush_o *)0x0)) &&
       (pSVar3 = (__this_01->fields).Entries, pSVar3 != (System_Collections_Generic_List_BrushEntry__o *)0x0))
    {
      if ((pSVar3->fields)._size <= index) {
        return;
      }
      pMVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item)
      ;
      if ((pMVar5 != (MapEditor_BrushEntry_o *)0x0) &&
         (pSVar4 = (__this_00->fields)._advanced,
         pSVar4 != (System_Collections_Generic_List_BoolSetting__o *)0x0)) {
        bVar1 = (pMVar5->fields).Advanced;
        pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item);
        if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
          if (bVar1 == (pSVar6->fields)._value) {
            return;
          }
          pSVar3 = (__this_01->fields).Entries;
          if (pSVar3 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
            pMVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
            pSVar4 = (__this_00->fields)._advanced;
            if (((pSVar4 != (System_Collections_Generic_List_BoolSetting__o *)0x0) &&
                (pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar4,index,
                                     (MethodInfo_92B830 *)
                                     MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item),
                pSVar6 != (Settings_BoolSetting_o *)0x0)) && (pMVar5 != (MapEditor_BrushEntry_o *)0x0)) {
              (pMVar5->fields).Advanced = (pSVar6->fields)._value;
              UI_MapEditorBrushPanel__Rebuild(__this_00,(MethodInfo *)0x0);
              MapEditor_MapEditorBrush__RegenerateGhosts(__this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__21
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__21 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__21(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__22
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__22 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__22(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__23
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__23 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__23(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__30
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__30 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__30(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__31
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__31 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__31(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__32
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__32 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__32(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__33
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__33 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__33(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__34
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__34 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__34(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__35
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__35 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__35(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__36
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__36 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__36(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__37
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__37 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__37(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__38
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__38 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__38(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__39
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__39 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__39(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__40
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__40 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__40(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__41
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__41 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__41(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__42
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__42 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__42(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__43
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__43 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__43(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__44
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__44 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__44(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__45
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__45 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__45(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__24
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__24 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__24(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__25
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__25 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__25(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__26
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__26 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__26(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__27
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__27 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__27(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__28
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__28 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9270

void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__28
               (UI_MapEditorBrushPanel___c__DisplayClass73_0_o *__this,MethodInfo *method)

{
  int32_t index;
  UI_MapEditorBrushPanel_o *__this_00;
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_MapEditorBrush_o *__this_01;
  System_Collections_Generic_List_BrushEntry__o *pSVar2;
  System_Collections_Generic_List_StringSetting__o *pSVar3;
  System_String_o *pSVar4;
  bool bVar5;
  MapEditor_BrushEntry_o *pMVar6;
  Settings_StringSetting_o *pSVar7;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    index = (__this->fields).index;
    if (Il2CppMethodInitialized_1843474da == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Count);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
      Il2CppMethodInitialized_1843474da = '\x01';
    }
    pGVar1 = (__this_00->fields)._gameManager;
    if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
        (__this_01 = (pGVar1->fields).Brush, __this_01 != (MapEditor_MapEditorBrush_o *)0x0)) &&
       (pSVar2 = (__this_01->fields).Entries, pSVar2 != (System_Collections_Generic_List_BrushEntry__o *)0x0))
    {
      if ((pSVar2->fields)._size <= index) {
        return;
      }
      pMVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item)
      ;
      if ((pMVar6 != (MapEditor_BrushEntry_o *)0x0) &&
         (pSVar3 = (__this_00->fields)._shader,
         pSVar3 != (System_Collections_Generic_List_StringSetting__o *)0x0)) {
        pSVar4 = (pMVar6->fields).Shader;
        pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            (MethodInfo_92B830 *)
                            MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        if (pSVar7 != (Settings_StringSetting_o *)0x0) {
          bVar5 = System_String__op_Equality(pSVar4,(pSVar7->fields)._value,(MethodInfo *)0x0);
          if (bVar5) {
            return;
          }
          pSVar2 = (__this_01->fields).Entries;
          if (pSVar2 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
            pMVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                (MethodInfo_92B830 *)
                                MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
            pSVar3 = (__this_00->fields)._shader;
            if (((pSVar3 != (System_Collections_Generic_List_StringSetting__o *)0x0) &&
                (pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                     (MethodInfo_92B830 *)
                                     MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
                pSVar7 != (Settings_StringSetting_o *)0x0)) && (pMVar6 != (MapEditor_BrushEntry_o *)0x0)) {
              pSVar4 = (pSVar7->fields)._value;
              (pMVar6->fields).Shader = pSVar4;
              Il2CppCodeGenWriteBarrier(&(pMVar6->fields).Shader,pSVar4);
              UI_MapEditorBrushPanel__Rebuild(__this_00,(MethodInfo *)0x0);
              MapEditor_MapEditorBrush__RegenerateGhosts(__this_01,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__29
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__29 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__29(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__46
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__46 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__46(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__47
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__47 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__47(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__48
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__48 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__48(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__49
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__49 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b93e0

void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__49
               (UI_MapEditorBrushPanel___c__DisplayClass73_0_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UI_MapEditorBrushPanel_o *value;
  UI_MapEditorMenu_o *pUVar2;
  UI_MapEditorTexturePopup_o *pUVar3;
  UI_MapEditorBrushPanel___c__DisplayClass89_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  value = (__this->fields).__4__this;
  if (value != (UI_MapEditorBrushPanel_o *)0x0) {
    iVar1 = (__this->fields).index;
    if (Il2CppMethodInitialized_1843474db == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass89_0_OnPickTexture_b__0);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorBrushPanel_c__DisplayClass89_0);
      Il2CppMethodInitialized_1843474db = '\x01';
    }
    object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorBrushPanel_c__DisplayClass89_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object != (UI_MapEditorBrushPanel___c__DisplayClass89_0_o *)0x0) {
      (object->fields).__4__this = value;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,value);
      (object->fields).index = iVar1;
      pUVar2 = (value->fields)._menu;
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass89_0_OnPickTexture_b__0,
                 (MethodInfo *)0x0);
      if (pUVar2 != (UI_MapEditorMenu_o *)0x0) {
        (pUVar2->fields).TexturePopupTarget = (System_Action_string__o *)__this_00;
        Il2CppCodeGenWriteBarrier(&(pUVar2->fields).TexturePopupTarget,__this_00);
        pUVar2 = (value->fields)._menu;
        if ((pUVar2 != (UI_MapEditorMenu_o *)0x0) &&
           (pUVar3 = (pUVar2->fields).TexturePopup, pUVar3 != (UI_MapEditorTexturePopup_o *)0x0)) {
          (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__50
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__50 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__50(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__51
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__51 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__51(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__52
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__52 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void
UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__52(UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass73_0$$<Rebuild>b__53
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__53 (UI_MapEditorBrushPanel___c__DisplayClass73_0_o* __this, const MethodInfo* method);
// 0x1822b9100

void UI_MapEditorBrushPanel___c__DisplayClass73_0___Rebuild_b__53
               (UI_MapEditorBrushPanel___c__DisplayClass73_0_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorBrushPanel_o *)0x0) {
    UI_MapEditorBrushPanel__OnEntryChanged(__this_00,(__this->fields).index,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel.<>c__DisplayClass89_0$$.ctor
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass89_0___ctor (UI_MapEditorBrushPanel___c__DisplayClass89_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorBrushPanel___c__DisplayClass89_0___ctor(UI_MapEditorBrushPanel___c__DisplayClass89_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorBrushPanel.<>c__DisplayClass89_0$$<OnPickTexture>b__0
// il2cpp: void UI_MapEditorBrushPanel___c__DisplayClass89_0___OnPickTexture_b__0 (UI_MapEditorBrushPanel___c__DisplayClass89_0_o* __this, System_String_o* texture, const MethodInfo* method);
// 0x1822b94e0

void UI_MapEditorBrushPanel___c__DisplayClass89_0___OnPickTexture_b__0
               (UI_MapEditorBrushPanel___c__DisplayClass89_0_o *__this,System_String_o *texture,
               MethodInfo *method)

{
  UI_MapEditorBrushPanel_o *pUVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  System_Collections_Generic_List_BrushEntry__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *value;
  MapEditor_BrushEntry_o *pMVar4;
  Map_MapScriptBasicMaterial_o *pMVar5;
  
  if (Il2CppMethodInitialized_1843474de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinMapTextures);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
    Il2CppMethodInitialized_1843474de = '\x01';
  }
  pUVar1 = (__this->fields).__4__this;
  if ((((pUVar1 != (UI_MapEditorBrushPanel_o *)0x0) &&
       (pGVar2 = (pUVar1->fields)._gameManager, pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0)) &&
      (__this_00 = (pGVar2->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) &&
     (pSVar3 = (__this_00->fields).Entries, pSVar3 != (System_Collections_Generic_List_BrushEntry__o *)0x0)) {
    if ((pSVar3->fields)._size <= (__this->fields).index) {
      return;
    }
    pMVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)(__this_00->fields).Entries,
                        (__this->fields).index,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
    if ((TypeInfo_Map_BuiltinMapTextures->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinMapTextures);
    }
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_Map_BuiltinMapTextures->static_fields->AllTextures;
    if (((__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
        (pMVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_01,(Il2CppObject *)texture,
                             (MethodInfo_147A5B0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_get_Item
                            ), pMVar5 != (Map_MapScriptBasicMaterial_o *)0x0)) &&
       (pMVar4 != (MapEditor_BrushEntry_o *)0x0)) {
      value = (pMVar5->fields).Texture;
      (pMVar4->fields).Texture = value;
      Il2CppCodeGenWriteBarrier(&(pMVar4->fields).Texture,value);
      pUVar1 = (__this->fields).__4__this;
      if (pUVar1 != (UI_MapEditorBrushPanel_o *)0x0) {
        UI_MapEditorBrushPanel__Rebuild(pUVar1,(MethodInfo *)0x0);
        MapEditor_MapEditorBrush__RegenerateGhosts(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$get_Width
// il2cpp: float UI_MapEditorBrushPanel__get_Width (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x181da8b00

float
UI_MapEditorBrushPanel__get_Width(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  return 400.0;
}


// UI.MapEditorBrushPanel$$get_Height
// il2cpp: float UI_MapEditorBrushPanel__get_Height (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x18229a1f0

float
UI_MapEditorBrushPanel__get_Height(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  return 990.0;
}


// UI.MapEditorBrushPanel$$get_Title
// il2cpp: System_String_o* UI_MapEditorBrushPanel__get_Title (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a8670

System_String_o * UI_MapEditorBrushPanel__get_Title(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    Il2CppMethodInitialized_1843474ca = '\x01';
  }
  return "Brush";
}


// UI.MapEditorBrushPanel$$get_TopBarHeight
// il2cpp: float UI_MapEditorBrushPanel__get_TopBarHeight (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_MapEditorBrushPanel__get_TopBarHeight(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.MapEditorBrushPanel$$get_BottomBarHeight
// il2cpp: float UI_MapEditorBrushPanel__get_BottomBarHeight (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_MapEditorBrushPanel__get_BottomBarHeight(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.MapEditorBrushPanel$$get_VerticalSpacing
// il2cpp: float UI_MapEditorBrushPanel__get_VerticalSpacing (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x182182a90

float
UI_MapEditorBrushPanel__get_VerticalSpacing(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  return 8.0;
}


// UI.MapEditorBrushPanel$$get_HorizontalPadding
// il2cpp: int32_t UI_MapEditorBrushPanel__get_HorizontalPadding (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_MapEditorBrushPanel__get_HorizontalPadding(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.MapEditorBrushPanel$$get_VerticalPadding
// il2cpp: int32_t UI_MapEditorBrushPanel__get_VerticalPadding (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x181b9be70

int32_t
UI_MapEditorBrushPanel__get_VerticalPadding(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  return 0xf;
}


// UI.MapEditorBrushPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorBrushPanel__get_ScrollBar (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorBrushPanel__get_ScrollBar(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorBrushPanel$$get_ThemePanel
// il2cpp: System_String_o* UI_MapEditorBrushPanel__get_ThemePanel (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a8640

System_String_o * UI_MapEditorBrushPanel__get_ThemePanel(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843474cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditor");
    Il2CppMethodInitialized_1843474cb = '\x01';
  }
  return "MapEditor";
}


// UI.MapEditorBrushPanel$$Setup
// il2cpp: void UI_MapEditorBrushPanel__Setup (UI_MapEditorBrushPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822a75a0

void UI_MapEditorBrushPanel__Setup(UI_MapEditorBrushPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_MapEditorMenu_o *pUVar2;
  
  if (Il2CppMethodInitialized_1843474cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_MapEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_1843474cc = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar2 = (UI_MapEditorMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar2 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._menu = (UI_MapEditorMenu_o *)0x0;
    pUVar2 = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    (__this->fields)._menu = pUVar2;
    bVar1 = (TypeInfo_UI_MapEditorMenu->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MapEditorMenu)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu,pUVar2);
  pUVar2 = (UI_MapEditorMenu_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pUVar2 == (UI_MapEditorMenu_o *)0x0) {
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)0x0;
    pUVar2 = (UI_MapEditorMenu_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
    (__this->fields)._gameManager = (GameManagers_MapEditorGameManager_o *)pUVar2;
    bVar1 = (TypeInfo_GameManagers_MapEditorGameManager->_2).typeHierarchyDepth;
    if (((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchyDepth < bVar1) ||
       ((((UI_BaseMenu_c *)pUVar2->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_MapEditorGameManager)) {
      il2cpp_codegen_raise_invalid_cast_exception(pUVar2);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,pUVar2);
  return;
}


// UI.MapEditorBrushPanel$$Show
// il2cpp: void UI_MapEditorBrushPanel__Show (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a7780

void UI_MapEditorBrushPanel__Show(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  UI_MapEditorBrushPanel__Rebuild(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorBrushPanel$$SyncValues
// il2cpp: void UI_MapEditorBrushPanel__SyncValues (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a77a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822a798f: mov rdx, qword ptr [rip + 0x1e1a83a]  ; "X"
// asm:   0x1822a7996: jmp 0x1822a79ba
// asm:   0x1822a799e: mov rdx, qword ptr [rip + 0x1e1fb43]  ; "Y"
// asm:   0x1822a79a5: jmp 0x1822a79ba

void UI_MapEditorBrushPanel__SyncValues(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_MapEditorBrush_o *pMVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  Settings_StringSetting_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppObject *pIVar6;
  System_Object_array *pSVar7;
  System_String_o *value;
  uint uVar8;
  
  if (Il2CppMethodInitialized_1843474cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_BaseSettingElement_40ab6d8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    Il2CppMethodInitialized_1843474cd = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pMVar2 = (pGVar1->fields).Brush, pMVar2 != (MapEditor_MapEditorBrush_o *)0x0)) &&
     (pSVar3 = (__this->fields)._radius, pSVar3 != (Settings_FloatSetting_o *)0x0)) {
    Settings_TypedSetting_float___set_Value
              ((Settings_TypedSetting_float__o *)pSVar3,(pMVar2->fields).Radius,
               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
    pSVar4 = (__this->fields)._count;
    if (pSVar4 != (Settings_IntSetting_o *)0x0) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar4,(pMVar2->fields).Count,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar5 = (__this->fields)._randomize;
      if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar5,(pMVar2->fields).RandomizeEachPlacement,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pSVar4 = (__this->fields)._gridX;
        if (pSVar4 != (Settings_IntSetting_o *)0x0) {
          Settings_TypedSetting_int___set_Value
                    ((Settings_TypedSetting_int__o *)pSVar4,(pMVar2->fields).GridX,
                     (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
          pSVar4 = (__this->fields)._gridY;
          if (pSVar4 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar4,(pMVar2->fields).GridY,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            pSVar4 = (__this->fields)._gridZ;
            if (pSVar4 != (Settings_IntSetting_o *)0x0) {
              Settings_TypedSetting_int___set_Value
                        ((Settings_TypedSetting_int__o *)pSVar4,(pMVar2->fields).GridZ,
                         (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
              pSVar3 = (__this->fields)._spacingX;
              if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
                Settings_TypedSetting_float___set_Value
                          ((Settings_TypedSetting_float__o *)pSVar3,(pMVar2->fields).SpacingX,
                           (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                pSVar3 = (__this->fields)._spacingY;
                if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
                  Settings_TypedSetting_float___set_Value
                            ((Settings_TypedSetting_float__o *)pSVar3,(pMVar2->fields).SpacingY,
                             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                  pSVar3 = (__this->fields)._spacingZ;
                  if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
                    Settings_TypedSetting_float___set_Value
                              ((Settings_TypedSetting_float__o *)pSVar3,(pMVar2->fields).SpacingZ,
                               (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                    pSVar5 = (__this->fields)._boundsSnap;
                    if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                      Settings_TypedSetting_bool___set_Value
                                ((Settings_TypedSetting_bool__o *)pSVar5,(pMVar2->fields).BoundsSnap,
                                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                      value = "X";
                      if ((((pMVar2->fields).CurveAxis != 1) &&
                          (value = "Y", (pMVar2->fields).CurveAxis != 2)) &&
                         (value = "None", (pMVar2->fields).CurveAxis == 3)) {
                        value = "Z";
                      }
                      __this_00 = (__this->fields)._curveAxis;
                      if (__this_00 != (Settings_StringSetting_o *)0x0) {
                        Settings_TypedSetting_object___set_Value
                                  ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
                        pSVar3 = (__this->fields)._curveAmount;
                        if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
                          Settings_TypedSetting_float___set_Value
                                    ((Settings_TypedSetting_float__o *)pSVar3,(pMVar2->fields).CurveAmount,
                                     (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
                          pSVar5 = (__this->fields)._flatPlane;
                          if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                            Settings_TypedSetting_bool___set_Value
                                      ((Settings_TypedSetting_bool__o *)pSVar5,(pMVar2->fields).FlatPlane,
                                       (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                            pSVar5 = (__this->fields)._alignToSurface;
                            if (pSVar5 != (Settings_BoolSetting_o *)0x0) {
                              Settings_TypedSetting_bool___set_Value
                                        ((Settings_TypedSetting_bool__o *)pSVar5,
                                         (pMVar2->fields).AlignToSurface,
                                         (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value)
                              ;
                              __this_01 = (__this->fields).SinglePanel;
                              if ((__this_01 != (UnityEngine_Transform_o *)0x0) &&
                                 (pSVar7 = UnityEngine_Component__GetComponentsInChildren_object_
                                                     ((UnityEngine_Component_o *)__this_01,true,
                                                      (MethodInfo_665440 *)
                                                      MethodInfo_UnityEngine_Component_GetComponentsInChildren_BaseSettingElement_40ab6d8
                                                     ), pSVar7 != (System_Object_array *)0x0)) {
                                uVar8 = 0;
                                while( true ) {
                                  if ((int)pSVar7->max_length <= (int)uVar8) {
                                    return;
                                  }
                                  if ((uint)pSVar7->max_length <= uVar8) {
                                    ThrowIndexOutOfRangeException();
                                  }
                                  pIVar6 = pSVar7->m_Items[(int)uVar8];
                                  if (pIVar6 == (Il2CppObject *)0x0) break;
                                  (*pIVar6->klass->vtable[6].methodPtr)
                                            (pIVar6,pIVar6->klass->vtable[6].method);
                                  uVar8 = uVar8 + 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$Rebuild
// il2cpp: void UI_MapEditorBrushPanel__Rebuild (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a2990
// eh: try 0x1822a3184..0x1822a321a -> pad 0x18333fc80 catch Il2CppExceptionWrapper
// eh: try 0x1822a321a..0x1822a3272 -> pad 0x180026a30 cleanup
// eh: try 0x1822a3272..0x1822a757e -> pad 0x18333fc80 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822a31dd: nop dword ptr [rax]
// asm:   0x1822a323a: mov rdx, qword ptr [rip + 0x1de15ff]  ; TypeInfo_UnityEngine_Transform
// asm:   0x1822a3241: mov r9, qword ptr [rax]
// asm:   0x1822a3244: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x1822a324b: cmp byte ptr [r9 + 0x130], al
// asm:   0x1822a3252: jb 0x1822a756b
// asm:   0x1822a32ad: lea rcx, [rsp + 0xa0]
// asm:   0x1822a32b5: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1822a32ba: mov rcx, qword ptr [rsp + 0x98]
// asm:   0x1822a32c2: test rcx, rcx
// asm:   0x1822a32c5: jne 0x1822a757e
// asm:   0x1822a32cb: xor ebx, ebx
// asm:   0x1822a32cd: mov r15, qword ptr [rsp + 0x190]
// asm:   0x1822a3b73: mov rdx, qword ptr [rip + 0x1e1e656]  ; "X"
// asm:   0x1822a3b7a: jmp 0x1822a3ba0
// asm:   0x1822a3b83: mov rdx, qword ptr [rip + 0x1e2395e]  ; "Y"
// asm:   0x1822a3b8a: jmp 0x1822a3ba0
// asm:   0x1822a6de4: movss xmm6, dword ptr [rip + 0x10b1f00]
// asm:   0x1822a757e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333fc80: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333fc85: push rbp
// asm:   0x18333fc86: sub rsp, 0x70
// asm:   0x18333fc8a: mov rbp, rdx
// asm:   0x18333fc8d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x18333fc94: mov rcx, qword ptr [rax]
// asm:   0x18333fc97: mov qword ptr [rbp + 0x98], rcx
// asm:   0x18333fc9e: movabs rax, 0
// asm:   0x18333fca8: add rsp, 0x70
// asm:   0x18333fcac: pop rbp
// asm:   0x18333fcad: ret 

void UI_MapEditorBrushPanel__Rebuild(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  int32_t iVar4;
  uint uVar5;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Collections_Generic_List_FloatSetting__o *pSVar8;
  System_Collections_Generic_List_BoolSetting__o *pSVar9;
  System_Collections_Generic_List_StringSetting__o *pSVar10;
  System_Collections_Generic_List_ColorSetting__o *pSVar11;
  GameManagers_MapEditorGameManager_o *pGVar12;
  MapEditor_MapEditorBrush_o *pMVar13;
  Settings_IntSetting_o *pSVar14;
  System_Collections_Generic_List_BrushEntry__o *pSVar15;
  Settings_FloatSetting_array *pSVar16;
  Settings_BoolSetting_array *pSVar17;
  Settings_StringSetting_array *pSVar18;
  Utility_Color255_o *pUVar19;
  Settings_ColorSetting_array *pSVar20;
  UI_MapEditorMenu_o *pUVar21;
  UI_ColorPickPopup_o *pUVar22;
  MethodInfo *pMVar23;
  Il2CppObject *__this_00;
  bool bVar24;
  void *pvVar25;
  VirtualInvokeData *pVVar26;
  UnityEngine_Component_o *__this_01;
  UnityEngine_Object_o *obj;
  System_String_o *pSVar27;
  UI_ElementStyle_o *pUVar28;
  UI_ElementStyle_o *pUVar29;
  UnityEngine_GameObject_o *pUVar30;
  UnityEngine_Transform_o *pUVar31;
  UnityEngine_Events_UnityAction_o *pUVar32;
  System_String_array *pSVar33;
  UI_ElementStyle_o *__this_02;
  UI_MapEditorBrushPanel___c__DisplayClass73_0_o *object;
  MapEditor_BrushEntry_o *pMVar34;
  Settings_FloatSetting_o *pSVar35;
  Settings_BoolSetting_o *pSVar36;
  Settings_StringSetting_o *pSVar37;
  Settings_ColorSetting_o *pSVar38;
  UnityEngine_UI_LayoutElement_o *pUVar39;
  ushort uVar40;
  int32_t index;
  Il2CppObject *local_res20;
  float fVar41;
  undefined8 local_108;
  Settings_ColorSetting_o *local_100;
  undefined8 local_f0;
  Il2CppObject **local_e8;
  undefined8 *local_e0;
  
  if (Il2CppMethodInitialized_1843474ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FloatSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ColorSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BoolSetting_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ColorSetting_Clear)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BoolSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FloatSetting_Clear)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ColorSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_10);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_11);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_12);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_13);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_14);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_15);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_16);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_17);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_5);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_6);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_7);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectCollideWith);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectPhysicsMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapObjectShader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__18);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__19);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__20);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__21);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__22);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__23);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__24);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__25);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__26);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__27);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__28);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__29);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__30);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__31);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__32);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__33);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__34);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__35);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__36);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__37);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__38);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__39);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__40);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__41);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__42);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__43);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__44);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__45);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__46);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__47);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__48);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__49);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__50);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__51);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__52);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__53);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Yaw Min");
    il2cpp_codegen_initialize_runtime_metadata(&"Advanced");
    il2cpp_codegen_initialize_runtime_metadata(&"Align to Surface");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"X Min");
    il2cpp_codegen_initialize_runtime_metadata(&"Scroll wheel adjusts radius while the brush is active.");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale Min");
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Y Offset");
    il2cpp_codegen_initialize_runtime_metadata(&"Build a flush wall along the main grid axis. Objects share one rotation and neighboring bound faces stay aligned; spacing adds a face-to-face offset.");
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle per-axis scale/rotation ranges and extra inspector fields.");
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Z Min");
    il2cpp_codegen_initialize_runtime_metadata(&"Z Max");
    il2cpp_codegen_initialize_runtime_metadata(&"Offset X");
    il2cpp_codegen_initialize_runtime_metadata(&"Sp Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Shift+scroll in the viewport to adjust.");
    il2cpp_codegen_initialize_runtime_metadata(&"Offset Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Bounds Snap");
    il2cpp_codegen_initialize_runtime_metadata(&"Keep the brush indicator and placed objects on the last hit plane. The plane persists when the cursor moves off a surface.");
    il2cpp_codegen_initialize_runtime_metadata(&"Radius");
    il2cpp_codegen_initialize_runtime_metadata(&"Y Min");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale Max");
    il2cpp_codegen_initialize_runtime_metadata(&"Sp X");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Flat Plane");
    il2cpp_codegen_initialize_runtime_metadata(&"Vertical offset applied after ground projection. Use a negative value to clip slightly into the surface.");
    il2cpp_codegen_initialize_runtime_metadata(&"Visible");
    il2cpp_codegen_initialize_runtime_metadata(&"Physics Material");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"Press 1/2/3 in the viewport to set curve axis (X/Y/Z). 0 clears it.");
    il2cpp_codegen_initialize_runtime_metadata(&"Tiling Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Density (count)");
    il2cpp_codegen_initialize_runtime_metadata(&"X Max");
    il2cpp_codegen_initialize_runtime_metadata(&"Active");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Tiling X");
    il2cpp_codegen_initialize_runtime_metadata(&"Re-Roll");
    il2cpp_codegen_initialize_runtime_metadata(&"Scatter");
    il2cpp_codegen_initialize_runtime_metadata(&"Shader");
    il2cpp_codegen_initialize_runtime_metadata(&"Randomize each placement");
    il2cpp_codegen_initialize_runtime_metadata(&"Static");
    il2cpp_codegen_initialize_runtime_metadata(&"Add Asset");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"Grid");
    il2cpp_codegen_initialize_runtime_metadata(&"Curve Amount");
    il2cpp_codegen_initialize_runtime_metadata(&"How many objects to place per click.");
    il2cpp_codegen_initialize_runtime_metadata(&"Yaw Max");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotate each placed object so its up axis follows the face beneath it.");
    il2cpp_codegen_initialize_runtime_metadata(&"Curve Axis");
    il2cpp_codegen_initialize_runtime_metadata(&"Weight");
    il2cpp_codegen_initialize_runtime_metadata(&"Reflect color");
    il2cpp_codegen_initialize_runtime_metadata(&"Y Max");
    il2cpp_codegen_initialize_runtime_metadata(&"No assets selected.\nClick 'Add Asset' to pick one.");
    il2cpp_codegen_initialize_runtime_metadata(&"Collide Mode");
    il2cpp_codegen_initialize_runtime_metadata(&"Reshuffle positions, scales, rotations, and asset picks every time you click.");
    il2cpp_codegen_initialize_runtime_metadata(&"Sp Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Collide With");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Navigation/CloseIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"Brush");
    il2cpp_codegen_initialize_runtime_metadata(&"Mode");
    Il2CppMethodInitialized_1843474ce = '\x01';
  }
  index = 0;
  local_res20 = (Il2CppObject *)0x0;
  local_108 = 0;
  pUVar31 = (__this->fields).SinglePanel;
  if (pUVar31 == (UnityEngine_Transform_o *)0x0) {
label_1822a755f:
    ThrowNullReferenceException();
  }
  local_res20 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar31,(MethodInfo *)0x0);
  local_f0 = 0;
  local_e8 = &local_res20;
  local_e0 = &local_108;
  while( true ) {
    if (local_res20 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar25 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res20);
    __this_00 = local_res20;
    if ((char)pvVar25 == '\0') break;
    if (local_res20 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar6 = local_res20->klass;
    uVar3 = (pIVar6->_2).interface_offsets_count;
    uVar40 = 0;
    if (uVar3 != 0) {
      pIVar7 = (pIVar6->_1).interfaceOffsets;
      do {
        if (pIVar7[uVar40].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar26 = pIVar6->vtable + (pIVar7[uVar40].offset + 1);
          goto label_1822a3205;
        }
        uVar40 = uVar40 + 1;
      } while (uVar40 < uVar3);
    }
    pVVar26 = GetInterfaceInvokeDataFromVTableSlowPath
                        (local_res20,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1822a3205:
    __this_01 = (UnityEngine_Component_o *)(*pVVar26->methodPtr)(__this_00,pVVar26->method);
    if (__this_01 == (UnityEngine_Component_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar2) ||
       ((__this_01->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_01);
    }
    obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
  }
  il2cpp_runtime_helper_1806aa210(&local_e8);
  pSVar8 = (__this->fields)._weight;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar9 = (__this->fields)._advanced;
  if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar9->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar9->fields)._size;
  (pSVar9->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._scaleMin;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._scaleMax;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._yawMin;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._yawMax;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._scaleXMin;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._scaleXMax;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._scaleYMin;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._scaleYMax;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._scaleZMin;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._scaleZMax;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._rotXMin;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._rotXMax;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._rotYMin;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._rotYMax;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._rotZMin;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._rotZMax;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar9 = (__this->fields)._active;
  if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar9->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar9->fields)._size;
  (pSVar9->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar9 = (__this->fields)._static;
  if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar9->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar9->fields)._size;
  (pSVar9->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar9 = (__this->fields)._visible;
  if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar9->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar9->fields)._size;
  (pSVar9->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar10 = (__this->fields)._collideMode;
  if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar10->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar10->fields)._size;
  (pSVar10->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar10 = (__this->fields)._collideWith;
  if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar10->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar10->fields)._size;
  (pSVar10->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar10 = (__this->fields)._physicsMaterial;
  if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar10->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar10->fields)._size;
  (pSVar10->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar10 = (__this->fields)._shader;
  if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar10->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar10->fields)._size;
  (pSVar10->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar11 = (__this->fields)._color;
  if (pSVar11 == (System_Collections_Generic_List_ColorSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar11->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar11->fields)._size;
  (pSVar11->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar11 = (__this->fields)._reflectColor;
  if (pSVar11 == (System_Collections_Generic_List_ColorSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar11->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar11->fields)._size;
  (pSVar11->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar10 = (__this->fields)._texture;
  if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar10->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar10->fields)._size;
  (pSVar10->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._tilingX;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._tilingY;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._offsetX;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar8 = (__this->fields)._offsetY;
  if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) goto label_1822a755f;
  piVar1 = &(pSVar8->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar4 = (pSVar8->fields)._size;
  (pSVar8->fields)._size = 0;
  if (0 < iVar4) {
    System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar4,(MethodInfo *)0x0);
  }
  pSVar27 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar28 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar28,0x12,140.0,10.0,pSVar27,(MethodInfo *)0x0);
  pGVar12 = (__this->fields)._gameManager;
  if (pGVar12 == (GameManagers_MapEditorGameManager_o *)0x0) goto label_1822a755f;
  pMVar13 = (pGVar12->fields).Brush;
  pSVar27 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                      (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pUVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(pUVar29,0x18,0.0,10.0,pSVar27,(MethodInfo *)0x0);
  pUVar30 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,8.0,4,(MethodInfo *)0x0);
  if (pUVar30 == (UnityEngine_GameObject_o *)0x0) goto label_1822a755f;
  pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel(pUVar31,pUVar29,"Brush",0,4,(MethodInfo *)0x0);
  pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateIconButton
            (pUVar31,pUVar28,"Icons/Navigation/CloseIcon",28.0,28.0,pUVar32,(MethodInfo *)0x0);
  UI_BasePanel__CreateHorizontalDivider
            ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
  if ((pMVar13 == (MapEditor_MapEditorBrush_o *)0x0) ||
     (pSVar35 = (__this->fields)._radius, pSVar35 == (Settings_FloatSetting_o *)0x0)) goto label_1822a755f;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar35,(pMVar13->fields).Radius,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar14 = (__this->fields)._count;
  if (pSVar14 == (Settings_IntSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar14,(pMVar13->fields).Count,
             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar36 = (__this->fields)._randomize;
  if (pSVar36 == (Settings_BoolSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar36,(pMVar13->fields).RandomizeEachPlacement,
             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar37 = (__this->fields)._mode;
  pSVar27 = "Scatter";
  if ((pMVar13->fields).Mode == 1) {
    pSVar27 = "Grid";
  }
  if (pSVar37 == (Settings_StringSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar37,(Il2CppObject *)pSVar27,
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar14 = (__this->fields)._gridX;
  if (pSVar14 == (Settings_IntSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar14,(pMVar13->fields).GridX,
             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar14 = (__this->fields)._gridY;
  if (pSVar14 == (Settings_IntSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar14,(pMVar13->fields).GridY,
             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar14 = (__this->fields)._gridZ;
  if (pSVar14 == (Settings_IntSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_int___set_Value
            ((Settings_TypedSetting_int__o *)pSVar14,(pMVar13->fields).GridZ,
             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  pSVar35 = (__this->fields)._spacingX;
  if (pSVar35 == (Settings_FloatSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar35,(pMVar13->fields).SpacingX,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar35 = (__this->fields)._spacingY;
  if (pSVar35 == (Settings_FloatSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar35,(pMVar13->fields).SpacingY,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar35 = (__this->fields)._spacingZ;
  if (pSVar35 == (Settings_FloatSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar35,(pMVar13->fields).SpacingZ,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar36 = (__this->fields)._boundsSnap;
  if (pSVar36 == (Settings_BoolSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar36,(pMVar13->fields).BoundsSnap,
             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar27 = "X";
  if ((((pMVar13->fields).CurveAxis != 1) &&
      (pSVar27 = "Y", (pMVar13->fields).CurveAxis != 2)) &&
     (pSVar27 = "None", (pMVar13->fields).CurveAxis == 3)) {
    pSVar27 = "Z";
  }
  pSVar37 = (__this->fields)._curveAxis;
  if (pSVar37 == (Settings_StringSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar37,(Il2CppObject *)pSVar27,
             (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
  pSVar35 = (__this->fields)._curveAmount;
  if (pSVar35 == (Settings_FloatSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_float___set_Value
            ((Settings_TypedSetting_float__o *)pSVar35,(pMVar13->fields).CurveAmount,
             (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
  pSVar36 = (__this->fields)._flatPlane;
  if (pSVar36 == (Settings_BoolSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar36,(pMVar13->fields).FlatPlane,
             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pSVar36 = (__this->fields)._alignToSurface;
  if (pSVar36 == (Settings_BoolSetting_o *)0x0) goto label_1822a755f;
  Settings_TypedSetting_bool___set_Value
            ((Settings_TypedSetting_bool__o *)pSVar36,(pMVar13->fields).AlignToSurface,
             (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
  pUVar31 = (__this->fields).SinglePanel;
  pSVar37 = (__this->fields)._mode;
  pSVar33 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar27 = "Scatter";
  if (pSVar33 == (System_String_array *)0x0) goto label_1822a755f;
  if ((int)pSVar33->max_length == 0) {
label_1822a7590:
    ThrowIndexOutOfRangeException();
  }
  pSVar33->m_Items[0] = "Scatter";
  Il2CppCodeGenWriteBarrier(pSVar33->m_Items,pSVar27);
  pSVar27 = "Grid";
  if ((uint)pSVar33->max_length < 2) goto label_1822a7590;
  pSVar33->m_Items[1] = "Grid";
  Il2CppCodeGenWriteBarrier(pSVar33->m_Items + 1,pSVar27);
  pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar37,"Mode",pSVar33,
             "",140.0,35.0,300.0,(System_Nullable_float__o)0x0,pUVar32,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  pUVar31 = (__this->fields).SinglePanel;
  pSVar36 = (__this->fields)._flatPlane;
  pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_2,(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar36,"Flat Plane","Keep the brush indicator and placed objects on the last hit plane. The plane persists when the cursor moves off a surface.",
             25.0,25.0,pUVar32,(MethodInfo *)0x0);
  pUVar31 = (__this->fields).SinglePanel;
  pSVar36 = (__this->fields)._alignToSurface;
  pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_3,(MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar36,"Align to Surface","Rotate each placed object so its up axis follows the face beneath it.",
             25.0,25.0,pUVar32,(MethodInfo *)0x0);
  if ((pMVar13->fields).Mode == 1) {
    pSVar27 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar29 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(pUVar29,0x12,20.0,6.0,pSVar27,(MethodInfo *)0x0);
    pSVar27 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(__this_02,0x12,40.0,6.0,pSVar27,(MethodInfo *)0x0);
    pUVar30 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
    if (pUVar30 == (UnityEngine_GameObject_o *)0x0) goto label_1822a755f;
    pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
    pSVar14 = (__this->fields)._gridX;
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_9,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar31,pUVar29,(Settings_BaseSetting_o *)pSVar14,"X","",
               60.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pSVar14 = (__this->fields)._gridY;
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_10,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar31,pUVar29,(Settings_BaseSetting_o *)pSVar14,"Y","",
               60.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pSVar14 = (__this->fields)._gridZ;
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_11,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar31,pUVar29,(Settings_BaseSetting_o *)pSVar14,"Z","",
               60.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pUVar30 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
    if (pUVar30 == (UnityEngine_GameObject_o *)0x0) goto label_1822a755f;
    pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
    pSVar35 = (__this->fields)._spacingX;
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_12,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar31,__this_02,(Settings_BaseSetting_o *)pSVar35,"Sp X",""
               ,70.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pSVar35 = (__this->fields)._spacingY;
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_13,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar31,__this_02,(Settings_BaseSetting_o *)pSVar35,"Sp Y",""
               ,70.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pSVar35 = (__this->fields)._spacingZ;
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_14,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar31,__this_02,(Settings_BaseSetting_o *)pSVar35,"Sp Z",""
               ,70.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pUVar31 = (__this->fields).SinglePanel;
    pSVar36 = (__this->fields)._boundsSnap;
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_15,(MethodInfo *)0x0);
    UI_ElementFactory__CreateToggleSetting
              (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar36,"Bounds Snap","Build a flush wall along the main grid axis. Objects share one rotation and neighboring bound faces stay aligned; spacing adds a face-to-face offset.",
               25.0,25.0,pUVar32,(MethodInfo *)0x0);
    pUVar31 = (__this->fields).SinglePanel;
    pSVar37 = (__this->fields)._curveAxis;
    pSVar33 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
    pSVar27 = "None";
    if (pSVar33 == (System_String_array *)0x0) goto label_1822a758a;
    if ((int)pSVar33->max_length == 0) {
label_1822a7584:
      ThrowIndexOutOfRangeException();
    }
    pSVar33->m_Items[0] = "None";
    Il2CppCodeGenWriteBarrier(pSVar33->m_Items,pSVar27);
    pSVar27 = "X";
    if ((uint)pSVar33->max_length < 2) goto label_1822a7584;
    pSVar33->m_Items[1] = "X";
    Il2CppCodeGenWriteBarrier(pSVar33->m_Items + 1,pSVar27);
    pSVar27 = "Y";
    if ((uint)pSVar33->max_length < 3) goto label_1822a7584;
    pSVar33->m_Items[2] = "Y";
    Il2CppCodeGenWriteBarrier(pSVar33->m_Items + 2,pSVar27);
    pSVar27 = "Z";
    if ((uint)pSVar33->max_length < 4) goto label_1822a7584;
    pSVar33->m_Items[3] = "Z";
    Il2CppCodeGenWriteBarrier(pSVar33->m_Items + 3,pSVar27);
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_16,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDropdownSetting
              (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar37,"Curve Axis",pSVar33,
               "Press 1/2/3 in the viewport to set curve axis (X/Y/Z). 0 clears it.",140.0,35.0,300.0,(System_Nullable_float__o)0x0,pUVar32,
               (System_Int32_array *)0x0,(MethodInfo *)0x0);
    pUVar31 = (__this->fields).SinglePanel;
    pSVar35 = (__this->fields)._curveAmount;
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_17,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Curve Amount","Shift+scroll in the viewport to adjust.",
               100.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  }
  else {
    pUVar31 = (__this->fields).SinglePanel;
    pSVar35 = (__this->fields)._radius;
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_4,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Radius","Scroll wheel adjusts radius while the brush is active.",
               100.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pUVar31 = (__this->fields).SinglePanel;
    pSVar14 = (__this->fields)._count;
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_5,(MethodInfo *)0x0);
    UI_ElementFactory__CreateInputSetting
              (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar14,"Density (count)","How many objects to place per click.",
               100.0,35.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
               (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
    pUVar31 = (__this->fields).SinglePanel;
    pSVar36 = (__this->fields)._randomize;
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_6,(MethodInfo *)0x0);
    UI_ElementFactory__CreateToggleSetting
              (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar36,"Randomize each placement","Reshuffle positions, scales, rotations, and asset picks every time you click.",
               25.0,25.0,pUVar32,(MethodInfo *)0x0);
  }
  pUVar30 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
  if (pUVar30 != (UnityEngine_GameObject_o *)0x0) {
    pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_7,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton
              (pUVar31,pUVar28,"Add Asset",0.0,35.0,pUVar32,(MethodInfo *)0x0);
    pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_Rebuild_b__73_8,(MethodInfo *)0x0);
    UI_ElementFactory__CreateDefaultButton
              (pUVar31,pUVar28,"Re-Roll",0.0,35.0,pUVar32,(MethodInfo *)0x0);
    UI_BasePanel__CreateHorizontalDivider
              ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
    pSVar27 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                        (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    pUVar28 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
    UI_ElementStyle___ctor(pUVar28,0x10,80.0,4.0,pSVar27,(MethodInfo *)0x0);
    while (pSVar15 = (pMVar13->fields).Entries,
          pSVar15 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
      if ((pSVar15->fields)._size <= index) {
        if (pSVar15 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
          if ((pSVar15->fields)._size == 0) {
            UI_ElementFactory__CreateDefaultLabel
                      ((__this->fields).SinglePanel,pUVar28,"No assets selected.\nClick 'Add Asset' to pick one.",0,3,(MethodInfo *)0x0);
          }
          return;
        }
        break;
      }
      object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_MapEditorBrushPanel___c__DisplayClass73_0_o *)0x0) break;
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      (object->fields).index = index;
      pSVar15 = (pMVar13->fields).Entries;
      if ((pSVar15 == (System_Collections_Generic_List_BrushEntry__o *)0x0) ||
         (pMVar34 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar15,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item),
         pMVar34 == (MapEditor_BrushEntry_o *)0x0)) break;
      pSVar8 = (__this->fields)._weight;
      fVar41 = (pMVar34->fields).Weight;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar9 = (__this->fields)._advanced;
      bVar24 = (pMVar34->fields).Advanced;
      pSVar36 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
      Settings_BoolSetting___ctor_1f11be0(pSVar36,bVar24,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_BoolSetting_Add;
      if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) break;
      piVar1 = &(pSVar9->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar17 = (pSVar9->fields)._items;
      if (pSVar17 == (Settings_BoolSetting_array *)0x0) break;
      uVar5 = (pSVar9->fields)._size;
      if (uVar5 < (uint)pSVar17->max_length) {
        (pSVar9->fields)._size = uVar5 + 1;
        if ((uint)pSVar17->max_length <= uVar5) goto label_1822a7584;
        pSVar17->m_Items[(int)uVar5] = pSVar36;
        Il2CppCodeGenWriteBarrier(pSVar17->m_Items + (int)uVar5,pSVar36);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar36,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._scaleMin;
      fVar41 = (pMVar34->fields).ScaleMin;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._scaleMax;
      fVar41 = (pMVar34->fields).ScaleMax;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._yawMin;
      fVar41 = (pMVar34->fields).YawMin;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._yawMax;
      fVar41 = (pMVar34->fields).YawMax;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._scaleXMin;
      fVar41 = (pMVar34->fields).ScaleXMin;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._scaleXMax;
      fVar41 = (pMVar34->fields).ScaleXMax;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._scaleYMin;
      fVar41 = (pMVar34->fields).ScaleYMin;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._scaleYMax;
      fVar41 = (pMVar34->fields).ScaleYMax;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._scaleZMin;
      fVar41 = (pMVar34->fields).ScaleZMin;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._scaleZMax;
      fVar41 = (pMVar34->fields).ScaleZMax;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._rotXMin;
      fVar41 = (pMVar34->fields).RotXMin;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._rotXMax;
      fVar41 = (pMVar34->fields).RotXMax;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._rotYMin;
      fVar41 = (pMVar34->fields).RotYMin;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      System_Collections_Generic_List_object___Add
                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                 (MethodInfo_5467A0 *)MethodInfo_System_Collections_Generic_List_FloatSetting_Add);
      pSVar8 = (__this->fields)._rotYMax;
      fVar41 = (pMVar34->fields).RotYMax;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      System_Collections_Generic_List_object___Add
                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                 (MethodInfo_5467A0 *)MethodInfo_System_Collections_Generic_List_FloatSetting_Add);
      pSVar8 = (__this->fields)._rotZMin;
      fVar41 = (pMVar34->fields).RotZMin;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      System_Collections_Generic_List_object___Add
                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                 (MethodInfo_5467A0 *)MethodInfo_System_Collections_Generic_List_FloatSetting_Add);
      pSVar8 = (__this->fields)._rotZMax;
      fVar41 = (pMVar34->fields).RotZMax;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      System_Collections_Generic_List_object___Add
                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                 (MethodInfo_5467A0 *)MethodInfo_System_Collections_Generic_List_FloatSetting_Add);
      pSVar9 = (__this->fields)._active;
      bVar24 = (pMVar34->fields).Active;
      pSVar36 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
      Settings_BoolSetting___ctor_1f11be0(pSVar36,bVar24,(MethodInfo *)0x0);
      if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) break;
      System_Collections_Generic_List_object___Add
                ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar36,
                 (MethodInfo_5467A0 *)MethodInfo_System_Collections_Generic_List_BoolSetting_Add);
      pSVar9 = (__this->fields)._static;
      bVar24 = (pMVar34->fields).Static;
      pSVar36 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
      Settings_BoolSetting___ctor_1f11be0(pSVar36,bVar24,(MethodInfo *)0x0);
      if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) break;
      System_Collections_Generic_List_object___Add
                ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar36,
                 (MethodInfo_5467A0 *)MethodInfo_System_Collections_Generic_List_BoolSetting_Add);
      pSVar9 = (__this->fields)._visible;
      bVar24 = (pMVar34->fields).Visible;
      pSVar36 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
      Settings_BoolSetting___ctor_1f11be0(pSVar36,bVar24,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_BoolSetting_Add;
      if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) break;
      piVar1 = &(pSVar9->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar17 = (pSVar9->fields)._items;
      if (pSVar17 == (Settings_BoolSetting_array *)0x0) break;
      uVar5 = (pSVar9->fields)._size;
      if (uVar5 < (uint)pSVar17->max_length) {
        (pSVar9->fields)._size = uVar5 + 1;
        if ((uint)pSVar17->max_length <= uVar5) goto label_1822a7584;
        pSVar17->m_Items[(int)uVar5] = pSVar36;
        Il2CppCodeGenWriteBarrier(pSVar17->m_Items + (int)uVar5,pSVar36);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)pSVar36,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar10 = (__this->fields)._collideMode;
      pSVar27 = (pMVar34->fields).CollideMode;
      pSVar37 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
      Settings_StringSetting___ctor_1f27ee0(pSVar37,pSVar27,0x7fffffff,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
      if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
      piVar1 = &(pSVar10->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar18 = (pSVar10->fields)._items;
      if (pSVar18 == (Settings_StringSetting_array *)0x0) break;
      uVar5 = (pSVar10->fields)._size;
      if (uVar5 < (uint)pSVar18->max_length) {
        (pSVar10->fields)._size = uVar5 + 1;
        if ((uint)pSVar18->max_length <= uVar5) goto label_1822a7584;
        pSVar18->m_Items[(int)uVar5] = pSVar37;
        Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar5,pSVar37);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pSVar37,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar10 = (__this->fields)._collideWith;
      pSVar27 = (pMVar34->fields).CollideWith;
      pSVar37 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
      Settings_StringSetting___ctor_1f27ee0(pSVar37,pSVar27,0x7fffffff,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
      if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
      piVar1 = &(pSVar10->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar18 = (pSVar10->fields)._items;
      if (pSVar18 == (Settings_StringSetting_array *)0x0) break;
      uVar5 = (pSVar10->fields)._size;
      if (uVar5 < (uint)pSVar18->max_length) {
        (pSVar10->fields)._size = uVar5 + 1;
        if ((uint)pSVar18->max_length <= uVar5) goto label_1822a7584;
        pSVar18->m_Items[(int)uVar5] = pSVar37;
        Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar5,pSVar37);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pSVar37,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar10 = (__this->fields)._physicsMaterial;
      pSVar27 = (pMVar34->fields).PhysicsMaterial;
      pSVar37 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
      Settings_StringSetting___ctor_1f27ee0(pSVar37,pSVar27,0x7fffffff,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
      if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
      piVar1 = &(pSVar10->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar18 = (pSVar10->fields)._items;
      if (pSVar18 == (Settings_StringSetting_array *)0x0) break;
      uVar5 = (pSVar10->fields)._size;
      if (uVar5 < (uint)pSVar18->max_length) {
        (pSVar10->fields)._size = uVar5 + 1;
        if ((uint)pSVar18->max_length <= uVar5) goto label_1822a7584;
        pSVar18->m_Items[(int)uVar5] = pSVar37;
        Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar5,pSVar37);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pSVar37,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar10 = (__this->fields)._shader;
      pSVar27 = (pMVar34->fields).Shader;
      pSVar37 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
      Settings_StringSetting___ctor_1f27ee0(pSVar37,pSVar27,0x7fffffff,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_StringSetting_Add;
      if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
      piVar1 = &(pSVar10->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar18 = (pSVar10->fields)._items;
      if (pSVar18 == (Settings_StringSetting_array *)0x0) break;
      uVar5 = (pSVar10->fields)._size;
      if (uVar5 < (uint)pSVar18->max_length) {
        (pSVar10->fields)._size = uVar5 + 1;
        if ((uint)pSVar18->max_length <= uVar5) goto label_1822a7584;
        pSVar18->m_Items[(int)uVar5] = pSVar37;
        Il2CppCodeGenWriteBarrier(pSVar18->m_Items + (int)uVar5,pSVar37);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pSVar37,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar11 = (__this->fields)._color;
      pUVar19 = (pMVar34->fields).Color;
      pSVar38 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
      Settings_ColorSetting___ctor_1f12060(pSVar38,pUVar19,0,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_ColorSetting_Add;
      if (pSVar11 == (System_Collections_Generic_List_ColorSetting__o *)0x0) break;
      piVar1 = &(pSVar11->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar20 = (pSVar11->fields)._items;
      if (pSVar20 == (Settings_ColorSetting_array *)0x0) break;
      uVar5 = (pSVar11->fields)._size;
      if (uVar5 < (uint)pSVar20->max_length) {
        (pSVar11->fields)._size = uVar5 + 1;
        if ((uint)pSVar20->max_length <= uVar5) goto label_1822a7584;
        pSVar20->m_Items[(int)uVar5] = pSVar38;
        Il2CppCodeGenWriteBarrier(pSVar20->m_Items + (int)uVar5,pSVar38);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar38,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar11 = (__this->fields)._reflectColor;
      pUVar19 = (pMVar34->fields).ReflectColor;
      pSVar38 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
      Settings_ColorSetting___ctor_1f12060(pSVar38,pUVar19,0,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_ColorSetting_Add;
      if (pSVar11 == (System_Collections_Generic_List_ColorSetting__o *)0x0) break;
      piVar1 = &(pSVar11->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar20 = (pSVar11->fields)._items;
      if (pSVar20 == (Settings_ColorSetting_array *)0x0) break;
      uVar5 = (pSVar11->fields)._size;
      if (uVar5 < (uint)pSVar20->max_length) {
        (pSVar11->fields)._size = uVar5 + 1;
        if ((uint)pSVar20->max_length <= uVar5) goto label_1822a7584;
        pSVar20->m_Items[(int)uVar5] = pSVar38;
        Il2CppCodeGenWriteBarrier(pSVar20->m_Items + (int)uVar5,pSVar38);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar38,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar10 = (__this->fields)._texture;
      pSVar27 = (pMVar34->fields).Texture;
      pSVar37 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
      Settings_StringSetting___ctor_1f27ee0(pSVar37,pSVar27,0x7fffffff,(MethodInfo *)0x0);
      if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
      System_Collections_Generic_List_object___Add
                ((System_Collections_Generic_List_object__o *)pSVar10,(Il2CppObject *)pSVar37,
                 (MethodInfo_5467A0 *)MethodInfo_System_Collections_Generic_List_StringSetting_Add);
      pSVar8 = (__this->fields)._tilingX;
      fVar41 = (pMVar34->fields).Tiling.fields.x;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      pMVar23 = MethodInfo_System_Collections_Generic_List_FloatSetting_Add;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      piVar1 = &(pSVar8->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar16 = (pSVar8->fields)._items;
      if (pSVar16 == (Settings_FloatSetting_array *)0x0) break;
      uVar5 = (pSVar8->fields)._size;
      if (uVar5 < (uint)pSVar16->max_length) {
        (pSVar8->fields)._size = uVar5 + 1;
        if ((uint)pSVar16->max_length <= uVar5) goto label_1822a7584;
        pSVar16->m_Items[(int)uVar5] = pSVar35;
        Il2CppCodeGenWriteBarrier(pSVar16->m_Items + (int)uVar5,pSVar35);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                   (MethodInfo_93DD50 *)pMVar23->klass->rgctx_data[0xe].method);
      }
      pSVar8 = (__this->fields)._tilingY;
      fVar41 = (pMVar34->fields).Tiling.fields.y;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      System_Collections_Generic_List_object___Add
                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                 (MethodInfo_5467A0 *)MethodInfo_System_Collections_Generic_List_FloatSetting_Add);
      pSVar8 = (__this->fields)._offsetX;
      fVar41 = (pMVar34->fields).Offset.fields.x;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      System_Collections_Generic_List_object___Add
                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                 (MethodInfo_5467A0 *)MethodInfo_System_Collections_Generic_List_FloatSetting_Add);
      pSVar8 = (__this->fields)._offsetY;
      fVar41 = (pMVar34->fields).Offset.fields.y;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      System_Collections_Generic_List_object___Add
                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                 (MethodInfo_5467A0 *)MethodInfo_System_Collections_Generic_List_FloatSetting_Add);
      pSVar8 = (__this->fields)._yOffset;
      fVar41 = (pMVar34->fields).YOffset;
      pSVar35 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
      Settings_FloatSetting___ctor_1f12570(pSVar35,fVar41,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      System_Collections_Generic_List_object___Add
                ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)pSVar35,
                 (MethodInfo_5467A0 *)MethodInfo_System_Collections_Generic_List_FloatSetting_Add);
      pUVar30 = UI_ElementFactory__CreateHorizontalGroup((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0)
      ;
      if (pUVar30 == (UnityEngine_GameObject_o *)0x0) break;
      pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultLabel(pUVar31,pUVar28,(pMVar34->fields).AssetName,0,3,(MethodInfo *)0x0)
      ;
      pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__18,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDefaultButton
                (pUVar31,pUVar28,"Remove",80.0,28.0,pUVar32,(MethodInfo *)0x0);
      pSVar8 = (__this->fields)._weight;
      if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
      pUVar31 = (__this->fields).SinglePanel;
      pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
      pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__19,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Weight",""
                 ,80.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pSVar9 = (__this->fields)._advanced;
      if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) break;
      pUVar31 = (__this->fields).SinglePanel;
      pSVar36 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar9,(object->fields).index,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item);
      pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__20,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar36,"Advanced","Toggle per-axis scale/rotation ranges and extra inspector fields."
                 ,25.0,25.0,pUVar32,(MethodInfo *)0x0);
      pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                          ((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
      if (pUVar30 == (UnityEngine_GameObject_o *)0x0) break;
      pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
      pSVar9 = (__this->fields)._active;
      if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) break;
      pSVar36 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar9,(object->fields).index,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item);
      pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__21,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar36,"Active",""
                 ,25.0,25.0,pUVar32,(MethodInfo *)0x0);
      pSVar9 = (__this->fields)._static;
      if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) break;
      pSVar36 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar9,(object->fields).index,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item);
      pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__22,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar36,"Static",""
                 ,25.0,25.0,pUVar32,(MethodInfo *)0x0);
      pSVar10 = (__this->fields)._collideMode;
      if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
      local_100 = (Settings_ColorSetting_o *)(__this->fields).SinglePanel;
      pSVar37 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar10,(object->fields).index,
                           (MethodInfo_92B830 *)
                           MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
      pSVar33 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
      if ((TypeInfo_Map_MapObjectCollideMode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideMode);
      }
      if (pSVar33 == (System_String_array *)0x0) break;
      if ((int)pSVar33->max_length == 0) goto label_1822a7584;
      pSVar27 = TypeInfo_Map_MapObjectCollideMode->static_fields->Physical;
      pSVar33->m_Items[0] = pSVar27;
      Il2CppCodeGenWriteBarrier(pSVar33->m_Items,pSVar27);
      if ((uint)pSVar33->max_length < 2) goto label_1822a7584;
      pSVar27 = TypeInfo_Map_MapObjectCollideMode->static_fields->Region;
      pSVar33->m_Items[1] = pSVar27;
      Il2CppCodeGenWriteBarrier(pSVar33->m_Items + 1,pSVar27);
      if ((uint)pSVar33->max_length < 3) goto label_1822a7584;
      pSVar27 = TypeInfo_Map_MapObjectCollideMode->static_fields->None;
      pSVar33->m_Items[2] = pSVar27;
      Il2CppCodeGenWriteBarrier(pSVar33->m_Items + 2,pSVar27);
      pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__23,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                ((UnityEngine_Transform_o *)local_100,pUVar28,(Settings_BaseSetting_o *)pSVar37,
                 "Collide Mode",pSVar33,"",140.0,30.0,300.0,
                 (System_Nullable_float__o)0x0,pUVar32,(System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar31 = (__this->fields).SinglePanel;
      if ((pMVar34->fields).Advanced == false) {
        pUVar30 = UI_ElementFactory__CreateHorizontalGroup(pUVar31,6.0,3,(MethodInfo *)0x0);
        if (pUVar30 == (UnityEngine_GameObject_o *)0x0) break;
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._scaleMin;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__30,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Scale Min",
                   "",70.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._scaleMax;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__31,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Scale Max",
                   "",70.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
        if (pUVar30 == (UnityEngine_GameObject_o *)0x0) break;
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._yawMin;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__32,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Yaw Min",
                   "",70.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._yawMax;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__33,
                   (MethodInfo *)0x0);
        fVar41 = 70.0;
        pSVar27 = "Yaw Max";
      }
      else {
        UI_ElementFactory__CreateDefaultLabel(pUVar31,pUVar28,"Scale",0,3,(MethodInfo *)0x0);
        pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
        if (pUVar30 == (UnityEngine_GameObject_o *)0x0) break;
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._scaleXMin;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__34,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"X Min",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._scaleXMax;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__35,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"X Max",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
        if (pUVar30 == (UnityEngine_GameObject_o *)0x0) break;
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._scaleYMin;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__36,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Y Min",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._scaleYMax;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__37,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Y Max",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
        if (pUVar30 == (UnityEngine_GameObject_o *)0x0) break;
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._scaleZMin;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__38,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Z Min",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._scaleZMax;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__39,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Z Max",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        UI_ElementFactory__CreateDefaultLabel
                  ((__this->fields).SinglePanel,pUVar28,"Rotation",0,3,(MethodInfo *)0x0);
        pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
        if (pUVar30 == (UnityEngine_GameObject_o *)0x0) break;
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._rotXMin;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__40,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"X Min",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._rotXMax;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__41,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"X Max",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
        if (pUVar30 == (UnityEngine_GameObject_o *)0x0) break;
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._rotYMin;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__42,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Y Min",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._rotYMax;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__43,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Y Max",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
        if (pUVar30 == (UnityEngine_GameObject_o *)0x0) break;
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._rotZMin;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__44,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Z Min",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._rotZMax;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__45,
                   (MethodInfo *)0x0);
        fVar41 = 60.0;
        pSVar27 = "Z Max";
      }
      UI_ElementFactory__CreateInputSetting
                (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,pSVar27,"",fVar41,30.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,(System_Func_string__bool__o *)0x0,
                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      if ((pMVar34->fields).Advanced != false) {
        pSVar8 = (__this->fields)._yOffset;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pUVar31 = (__this->fields).SinglePanel;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__24,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Y Offset",
                   "Vertical offset applied after ground projection. Use a negative value to clip slightly into the surface.",80.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar10 = (__this->fields)._collideWith;
        if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
        pUVar31 = (__this->fields).SinglePanel;
        local_100 = (Settings_ColorSetting_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar10,(object->fields).index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        pSVar33 = (System_String_array *)SZArrayNew(TypeInfo_string_array,8);
        if ((TypeInfo_Map_MapObjectCollideWith->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectCollideWith);
        }
        if (pSVar33 == (System_String_array *)0x0) break;
        il2cpp_codegen_array_set_ref
                  ((System_Array_o *)pSVar33,0,
                   (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Entities);
        il2cpp_codegen_array_set_ref
                  ((System_Array_o *)pSVar33,1,
                   (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Characters);
        il2cpp_codegen_array_set_ref
                  ((System_Array_o *)pSVar33,2,
                   (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Titans);
        il2cpp_codegen_array_set_ref
                  ((System_Array_o *)pSVar33,3,
                   (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Humans);
        il2cpp_codegen_array_set_ref
                  ((System_Array_o *)pSVar33,4,
                   (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Projectiles);
        il2cpp_codegen_array_set_ref
                  ((System_Array_o *)pSVar33,5,
                   (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->Hitboxes);
        il2cpp_codegen_array_set_ref
                  ((System_Array_o *)pSVar33,6,
                   (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->MapObjects);
        il2cpp_codegen_array_set_ref
                  ((System_Array_o *)pSVar33,7,
                   (Il2CppObject *)TypeInfo_Map_MapObjectCollideWith->static_fields->All);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__25,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateDropdownSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)local_100,"Collide With",pSVar33,
                   "",140.0,30.0,300.0,(System_Nullable_float__o)0x0,pUVar32,
                   (System_Int32_array *)0x0,(MethodInfo *)0x0);
        pSVar10 = (__this->fields)._physicsMaterial;
        if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
        pUVar31 = (__this->fields).SinglePanel;
        local_100 = (Settings_ColorSetting_o *)
                    System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar10,(object->fields).index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
        pSVar33 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        if ((TypeInfo_Map_MapObjectPhysicsMaterial->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectPhysicsMaterial);
        }
        if (pSVar33 == (System_String_array *)0x0) break;
        il2cpp_codegen_array_set_ref
                  ((System_Array_o *)pSVar33,0,
                   (Il2CppObject *)TypeInfo_Map_MapObjectPhysicsMaterial->static_fields->Default);
        il2cpp_codegen_array_set_ref
                  ((System_Array_o *)pSVar33,1,
                   (Il2CppObject *)TypeInfo_Map_MapObjectPhysicsMaterial->static_fields->Ice);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__26,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateDropdownSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)local_100,"Physics Material",pSVar33,
                   "",140.0,30.0,300.0,(System_Nullable_float__o)0x0,pUVar32,
                   (System_Int32_array *)0x0,(MethodInfo *)0x0);
        pSVar9 = (__this->fields)._visible;
        if (pSVar9 == (System_Collections_Generic_List_BoolSetting__o *)0x0) break;
        pUVar31 = (__this->fields).SinglePanel;
        pSVar36 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar9,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__27,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateToggleSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar36,"Visible",
                   "",25.0,25.0,pUVar32,(MethodInfo *)0x0);
      }
      pSVar10 = (__this->fields)._shader;
      if (pSVar10 == (System_Collections_Generic_List_StringSetting__o *)0x0) break;
      pUVar31 = (__this->fields).SinglePanel;
      local_100 = (Settings_ColorSetting_o *)
                  System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar10,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
      pSVar33 = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      if (pSVar33 == (System_String_array *)0x0) break;
      il2cpp_codegen_array_set_ref
                ((System_Array_o *)pSVar33,0,
                 (Il2CppObject *)TypeInfo_Map_MapObjectShader->static_fields->Default);
      il2cpp_codegen_array_set_ref
                ((System_Array_o *)pSVar33,1,
                 (Il2CppObject *)TypeInfo_Map_MapObjectShader->static_fields->Basic);
      il2cpp_codegen_array_set_ref
                ((System_Array_o *)pSVar33,2,
                 (Il2CppObject *)TypeInfo_Map_MapObjectShader->static_fields->Transparent);
      il2cpp_codegen_array_set_ref
                ((System_Array_o *)pSVar33,3,
                 (Il2CppObject *)TypeInfo_Map_MapObjectShader->static_fields->Reflective);
      il2cpp_codegen_array_set_ref
                ((System_Array_o *)pSVar33,4,
                 (Il2CppObject *)TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint);
      il2cpp_codegen_array_set_ref
                ((System_Array_o *)pSVar33,5,
                 (Il2CppObject *)TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled);
      pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__28,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar31,pUVar28,(Settings_BaseSetting_o *)local_100,"Shader",pSVar33,
                 "",140.0,30.0,300.0,(System_Nullable_float__o)0x0,pUVar32,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      bVar24 = System_String__op_Inequality
                         ((pMVar34->fields).Shader,TypeInfo_Map_MapObjectShader->static_fields->DefaultNoTint,
                          (MethodInfo *)0x0);
      if (bVar24) {
        pSVar11 = (__this->fields)._color;
        if (pSVar11 == (System_Collections_Generic_List_ColorSetting__o *)0x0) break;
        pUVar31 = (__this->fields).SinglePanel;
        local_100 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar11,(object->fields).index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_ColorSetting_get_Item);
        pUVar21 = (__this->fields)._menu;
        if (pUVar21 == (UI_MapEditorMenu_o *)0x0) break;
        pUVar22 = (pUVar21->fields).ColorPickPopup;
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__29,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateColorSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)local_100,"Color",pUVar22,
                   "",90.0,25.0,pUVar32,(MethodInfo *)0x0);
      }
      pSVar27 = (pMVar34->fields).Shader;
      if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
      }
      bVar24 = System_String__op_Equality
                         (pSVar27,TypeInfo_Map_MapObjectShader->static_fields->DefaultTiled,(MethodInfo *)0x0)
      ;
      if (bVar24) {
label_1822a7365:
        pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                            ((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
        if (pUVar30 == (UnityEngine_GameObject_o *)0x0) break;
        pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._tilingX;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__46,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Tiling X",
                   "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar8 = (__this->fields)._tilingY;
        if (pSVar8 == (System_Collections_Generic_List_FloatSetting__o *)0x0) break;
        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,(object->fields).index,
                             (MethodInfo_92B830 *)
                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
        pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__47,
                   (MethodInfo *)0x0);
        pSVar27 = "Tiling Y";
label_1822a7472:
        UI_ElementFactory__CreateInputSetting
                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,pSVar27,"",60.0,30.0,
                   false,(UnityEngine_Events_UnityAction_o *)0x0,pUVar32,(System_Func_string__bool__o *)0x0,
                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      }
      else {
        pSVar27 = (pMVar34->fields).Shader;
        if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
        }
        bVar24 = Map_MapObjectShader__IsLegacyShader(pSVar27,(MethodInfo *)0x0);
        if (bVar24) goto label_1822a7365;
        pSVar27 = (pMVar34->fields).Shader;
        if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
        }
        bVar24 = System_String__op_Equality
                           (pSVar27,TypeInfo_Map_MapObjectShader->static_fields->Basic,(MethodInfo *)0x0);
        if (bVar24) {
label_1822a6f2b:
          pSVar27 = (pMVar34->fields).Shader;
          if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
          }
          bVar24 = System_String__op_Equality
                             (pSVar27,TypeInfo_Map_MapObjectShader->static_fields->Reflective,
                              (MethodInfo *)0x0);
          if (bVar24) {
            pSVar11 = (__this->fields)._reflectColor;
            if (pSVar11 == (System_Collections_Generic_List_ColorSetting__o *)0x0) break;
            pUVar31 = (__this->fields).SinglePanel;
            local_100 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar11,(object->fields).index
                                   ,(MethodInfo_92B830 *)
                                    MethodInfo_System_Collections_Generic_List_ColorSetting_get_Item);
            pUVar21 = (__this->fields)._menu;
            if (pUVar21 == (UI_MapEditorMenu_o *)0x0) break;
            pUVar22 = (pUVar21->fields).ColorPickPopup;
            pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                       (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__48,
                       (MethodInfo *)0x0);
            UI_ElementFactory__CreateColorSetting
                      (pUVar31,pUVar28,(Settings_BaseSetting_o *)local_100,"Reflect color",pUVar22,
                       "",90.0,25.0,pUVar32,(MethodInfo *)0x0);
          }
          pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                              ((__this->fields).SinglePanel,10.0,3,(MethodInfo *)0x0);
          if (pUVar30 != (UnityEngine_GameObject_o *)0x0) {
            local_100 = (Settings_ColorSetting_o *)
                        UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
            pUVar30 = UI_ElementFactory__CreateDefaultLabel
                                ((UnityEngine_Transform_o *)local_100,pUVar28,"Texture",0,3,
                                 (MethodInfo *)0x0);
            if ((pUVar30 != (UnityEngine_GameObject_o *)0x0) &&
               (pUVar39 = UnityEngine_GameObject__GetComponent_object_
                                    (pUVar30,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement),
               pUVar39 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
              (*(pUVar39->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar39,80.0,(pUVar39->klass->vtable)._36_set_preferredWidth.method);
              pSVar27 = (pMVar34->fields).Texture;
              pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                         (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__49,
                         (MethodInfo *)0x0);
              UI_ElementFactory__CreateDefaultButton
                        ((UnityEngine_Transform_o *)local_100,pUVar28,pSVar27,0.0,0.0,pUVar32,
                         (MethodInfo *)0x0);
              pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                                  ((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
              if (pUVar30 != (UnityEngine_GameObject_o *)0x0) {
                pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
                pSVar8 = (__this->fields)._tilingX;
                if (pSVar8 != (System_Collections_Generic_List_FloatSetting__o *)0x0) {
                  pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar8,
                                       (object->fields).index,
                                       (MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
                  pUVar32 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object,
                             (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__50,
                             (MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Tiling X",
                             "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                             pUVar32,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             (MethodInfo *)0x0);
                  pSVar8 = (__this->fields)._tilingY;
                  if (pSVar8 != (System_Collections_Generic_List_FloatSetting__o *)0x0) {
                    pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar8,
                                         (object->fields).index,
                                         (MethodInfo_92B830 *)
                                         MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
                    pUVar32 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                    UnityEngine_Events_UnityAction___ctor
                              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,(Il2CppObject *)object
                               ,(intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__51,
                               (MethodInfo *)0x0);
                    UI_ElementFactory__CreateInputSetting
                              (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Tiling Y",
                               "",60.0,30.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                               pUVar32,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0
                               ,(MethodInfo *)0x0);
                    pUVar30 = UI_ElementFactory__CreateHorizontalGroup
                                        ((__this->fields).SinglePanel,6.0,3,(MethodInfo *)0x0);
                    if (pUVar30 != (UnityEngine_GameObject_o *)0x0) {
                      pUVar31 = UnityEngine_GameObject__get_transform(pUVar30,(MethodInfo *)0x0);
                      pSVar8 = (__this->fields)._offsetX;
                      if (pSVar8 != (System_Collections_Generic_List_FloatSetting__o *)0x0) {
                        pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                            ((System_Collections_Generic_List_object__o *)pSVar8,
                                             (object->fields).index,
                                             (MethodInfo_92B830 *)
                                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item)
                        ;
                        pUVar32 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                        UnityEngine_Events_UnityAction___ctor
                                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,
                                   (Il2CppObject *)object,
                                   (intptr_t)
                                   MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__52,
                                   (MethodInfo *)0x0);
                        UI_ElementFactory__CreateInputSetting
                                  (pUVar31,pUVar28,(Settings_BaseSetting_o *)pSVar35,"Offset X",
                                   "",60.0,30.0,false,
                                   (UnityEngine_Events_UnityAction_o *)0x0,pUVar32,
                                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                                   (MethodInfo *)0x0);
                        pSVar8 = (__this->fields)._offsetY;
                        if (pSVar8 != (System_Collections_Generic_List_FloatSetting__o *)0x0) {
                          pSVar35 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                              ((System_Collections_Generic_List_object__o *)pSVar8,
                                               (object->fields).index,
                                               (MethodInfo_92B830 *)
                                               MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                              );
                          pUVar32 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          UnityEngine_Events_UnityAction___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar32,
                                     (Il2CppObject *)object,
                                     (intptr_t)
                                     MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass73_0_Rebuild_b__53,
                                     (MethodInfo *)0x0);
                          pSVar27 = "Offset Y";
                          goto label_1822a7472;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        }
        pSVar27 = (pMVar34->fields).Shader;
        if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
        }
        bVar24 = System_String__op_Equality
                           (pSVar27,TypeInfo_Map_MapObjectShader->static_fields->Transparent,(MethodInfo *)0x0
                           );
        if (bVar24) goto label_1822a6f2b;
        pSVar27 = (pMVar34->fields).Shader;
        if ((TypeInfo_Map_MapObjectShader->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapObjectShader);
        }
        bVar24 = System_String__op_Equality
                           (pSVar27,TypeInfo_Map_MapObjectShader->static_fields->Reflective,(MethodInfo *)0x0)
        ;
        if (bVar24) goto label_1822a6f2b;
      }
      UI_BasePanel__CreateHorizontalDivider
                ((UI_BasePanel_o *)__this,(__this->fields).SinglePanel,1.0,(MethodInfo *)0x0);
      index = index + 1;
    }
  }
label_1822a758a:
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnRadiusChanged
// il2cpp: void UI_MapEditorBrushPanel__OnRadiusChanged (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a26e0

void
UI_MapEditorBrushPanel__OnRadiusChanged(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_FloatSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  
  if (Il2CppMethodInitialized_1843474cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843474cf = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._radius, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) {
    MapEditor_MapEditorBrush__SetRadius(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnCountChanged
// il2cpp: void UI_MapEditorBrushPanel__OnCountChanged (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a1a80

void
UI_MapEditorBrushPanel__OnCountChanged(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_IntSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  
  if (Il2CppMethodInitialized_1843474d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843474d0 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._count, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) {
    MapEditor_MapEditorBrush__SetCount(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnRandomizeChanged
// il2cpp: void UI_MapEditorBrushPanel__OnRandomizeChanged (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a2750

void
UI_MapEditorBrushPanel__OnRandomizeChanged(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_BoolSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *pMVar3;
  
  if (Il2CppMethodInitialized_1843474d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843474d1 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._randomize, pSVar2 != (Settings_BoolSetting_o *)0x0)) &&
     (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
    (pMVar3->fields).RandomizeEachPlacement = (pSVar2->fields)._value;
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnModeChanged
// il2cpp: void UI_MapEditorBrushPanel__OnModeChanged (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a2530

void
UI_MapEditorBrushPanel__OnModeChanged(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843474d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Grid");
    Il2CppMethodInitialized_1843474d2 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (__this->fields)._mode, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    __this_00 = (pGVar1->fields).Brush;
    bVar3 = System_String__op_Equality((pSVar2->fields)._value,"Grid",(MethodInfo *)0x0);
    if (__this_00 != (MapEditor_MapEditorBrush_o *)0x0) {
      if ((__this_00->fields).Mode != (uint)bVar3) {
        (__this_00->fields).Mode = (uint)bVar3;
        MapEditor_MapEditorBrush__RegenerateGhosts(__this_00,(MethodInfo *)0x0);
        UI_MapEditorBrushPanel__Rebuild(__this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnFlatPlaneChanged
// il2cpp: void UI_MapEditorBrushPanel__OnFlatPlaneChanged (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a23c0

void
UI_MapEditorBrushPanel__OnFlatPlaneChanged(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_BoolSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *pMVar3;
  
  if (Il2CppMethodInitialized_1843474d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843474d3 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._flatPlane, pSVar2 != (Settings_BoolSetting_o *)0x0)) &&
     (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
    (pMVar3->fields).FlatPlane = (pSVar2->fields)._value;
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
      MapEditor_MapEditorBrush__RegenerateGhosts(pMVar3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnAlignToSurfaceChanged
// il2cpp: void UI_MapEditorBrushPanel__OnAlignToSurfaceChanged (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a19a0

void
UI_MapEditorBrushPanel__OnAlignToSurfaceChanged(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_BoolSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  
  if (Il2CppMethodInitialized_1843474d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843474d4 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._alignToSurface, pSVar2 != (Settings_BoolSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) {
    MapEditor_MapEditorBrush__SetAlignToSurface(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnGridChanged
// il2cpp: void UI_MapEditorBrushPanel__OnGridChanged (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a2440

void UI_MapEditorBrushPanel__OnGridChanged(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_IntSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  Settings_FloatSetting_o *pSVar3;
  int iVar4;
  
  if (Il2CppMethodInitialized_1843474d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843474d5 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (__this->fields)._gridX, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    iVar4 = (pSVar2->fields)._value;
    __this_00 = (pGVar1->fields).Brush;
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    if (__this_00 != (MapEditor_MapEditorBrush_o *)0x0) {
      (__this_00->fields).GridX = iVar4;
      pSVar2 = (__this->fields)._gridY;
      if (pSVar2 != (Settings_IntSetting_o *)0x0) {
        iVar4 = (pSVar2->fields)._value;
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        (__this_00->fields).GridY = iVar4;
        pSVar2 = (__this->fields)._gridZ;
        if (pSVar2 != (Settings_IntSetting_o *)0x0) {
          iVar4 = (pSVar2->fields)._value;
          if (iVar4 < 1) {
            iVar4 = 1;
          }
          (__this_00->fields).GridZ = iVar4;
          pSVar3 = (__this->fields)._spacingX;
          if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
            (__this_00->fields).SpacingX = (pSVar3->fields)._value;
            pSVar3 = (__this->fields)._spacingY;
            if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
              (__this_00->fields).SpacingY = (pSVar3->fields)._value;
              pSVar3 = (__this->fields)._spacingZ;
              if (pSVar3 != (Settings_FloatSetting_o *)0x0) {
                (__this_00->fields).SpacingZ = (pSVar3->fields)._value;
                MapEditor_MapEditorBrush__RegenerateGhosts(__this_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnBoundsSnapChanged
// il2cpp: void UI_MapEditorBrushPanel__OnBoundsSnapChanged (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a1a00

void
UI_MapEditorBrushPanel__OnBoundsSnapChanged(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_BoolSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *pMVar3;
  
  if (Il2CppMethodInitialized_1843474d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843474d6 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._boundsSnap, pSVar2 != (Settings_BoolSetting_o *)0x0)) &&
     (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
    (pMVar3->fields).BoundsSnap = (pSVar2->fields)._value;
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
      MapEditor_MapEditorBrush__RegenerateGhosts(pMVar3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnCurveAxisChanged
// il2cpp: void UI_MapEditorBrushPanel__OnCurveAxisChanged (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a1b60

void
UI_MapEditorBrushPanel__OnCurveAxisChanged(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  bool bVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_1843474d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    Il2CppMethodInitialized_1843474d7 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (__this->fields)._curveAxis, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    __this_00 = (pGVar1->fields).Brush;
    bVar3 = System_String__op_Equality((pSVar2->fields)._value,"X",(MethodInfo *)0x0);
    if (bVar3) {
      uVar4 = 1;
    }
    else {
      pSVar2 = (__this->fields)._curveAxis;
      if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1822a1c5e;
      bVar3 = System_String__op_Equality((pSVar2->fields)._value,"Y",(MethodInfo *)0x0);
      if (bVar3) {
        uVar4 = 2;
      }
      else {
        pSVar2 = (__this->fields)._curveAxis;
        if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1822a1c5e;
        bVar3 = System_String__op_Equality((pSVar2->fields)._value,"Z",(MethodInfo *)0x0);
        uVar4 = -(uint)bVar3 & 3;
      }
    }
    if (__this_00 != (MapEditor_MapEditorBrush_o *)0x0) {
      (__this_00->fields).CurveAxis = uVar4;
      MapEditor_MapEditorBrush__RegenerateGhosts(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
label_1822a1c5e:
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnCurveAmountChanged
// il2cpp: void UI_MapEditorBrushPanel__OnCurveAmountChanged (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a1ae0

void
UI_MapEditorBrushPanel__OnCurveAmountChanged(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_FloatSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *pMVar3;
  
  if (Il2CppMethodInitialized_1843474d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843474d8 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._curveAmount, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
     (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
    pGVar1 = (__this->fields)._gameManager;
    (pMVar3->fields).CurveAmount = (pSVar2->fields)._value;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
      MapEditor_MapEditorBrush__RegenerateGhosts(pMVar3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnAddAsset
// il2cpp: void UI_MapEditorBrushPanel__OnAddAsset (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a17f0

void
UI_MapEditorBrushPanel__OnAddAsset(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_MapEditorBrush_o *pMVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorAddObjectPopup_o *pUVar4;
  
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pMVar2 = (pGVar1->fields).Brush, pMVar2 != (MapEditor_MapEditorBrush_o *)0x0)) {
    (pMVar2->fields).AssetSelectMode = true;
    pUVar3 = (__this->fields)._menu;
    if ((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar4 = (pUVar3->fields).AddObjectPopup, pUVar4 != (UI_MapEditorAddObjectPopup_o *)0x0)) {
      (*(pUVar4->klass->vtable)._21_Show.methodPtr)(pUVar4,(pUVar4->klass->vtable)._21_Show.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnReroll
// il2cpp: void UI_MapEditorBrushPanel__OnReroll (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a27f0

void
UI_MapEditorBrushPanel__OnReroll(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_MapEditorBrush_o *__this_00;
  
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (pGVar1->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) {
    MapEditor_MapEditorBrush__RegenerateGhosts(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnRemove
// il2cpp: void UI_MapEditorBrushPanel__OnRemove (UI_MapEditorBrushPanel_o* __this, int32_t index, const MethodInfo* method);
// 0x1822a27b0

void UI_MapEditorBrushPanel__OnRemove(UI_MapEditorBrushPanel_o *__this,int32_t index,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_MapEditorBrush_o *__this_00;
  
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (pGVar1->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) {
    MapEditor_MapEditorBrush__RemoveEntry(__this_00,index,(MethodInfo *)0x0);
    UI_MapEditorBrushPanel__Rebuild(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnEntryChanged
// il2cpp: void UI_MapEditorBrushPanel__OnEntryChanged (UI_MapEditorBrushPanel_o* __this, int32_t index, const MethodInfo* method);
// 0x1822a1c70

void UI_MapEditorBrushPanel__OnEntryChanged(UI_MapEditorBrushPanel_o *__this,int32_t index,MethodInfo *method)

{
  float fVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  System_Collections_Generic_List_BrushEntry__o *__this_01;
  System_Collections_Generic_List_FloatSetting__o *pSVar3;
  System_Collections_Generic_List_BoolSetting__o *pSVar4;
  System_Collections_Generic_List_StringSetting__o *pSVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_ColorSetting__o *pSVar7;
  Utility_Color255_o *pUVar8;
  MapEditor_BrushEntry_o *pMVar9;
  Settings_FloatSetting_o *pSVar10;
  Settings_BoolSetting_o *pSVar11;
  Settings_StringSetting_o *pSVar12;
  Settings_ColorSetting_o *pSVar13;
  float fVar14;
  
  if (Il2CppMethodInitialized_1843474d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ColorSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_1843474d9 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (__this_00 = (pGVar2->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) &&
     (__this_01 = (__this_00->fields).Entries,
     __this_01 != (System_Collections_Generic_List_BrushEntry__o *)0x0)) {
    if ((__this_01->fields)._size <= index) {
      return;
    }
    pMVar9 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)__this_01,index,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
    pSVar3 = (__this->fields)._weight;
    if (((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
        (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item),
        pSVar10 != (Settings_FloatSetting_o *)0x0)) && (pMVar9 != (MapEditor_BrushEntry_o *)0x0)) {
      fVar1 = (pSVar10->fields)._value;
      fVar14 = 0.0;
      if (0.0 <= fVar1) {
        fVar14 = fVar1;
      }
      (pMVar9->fields).Weight = fVar14;
      pSVar3 = (__this->fields)._scaleMin;
      if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
         (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                               (MethodInfo_92B830 *)
                               MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item),
         pSVar10 != (Settings_FloatSetting_o *)0x0)) {
        (pMVar9->fields).ScaleMin = (pSVar10->fields)._value;
        pSVar3 = (__this->fields)._scaleMax;
        if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
           (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                 (MethodInfo_92B830 *)
                                 MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item),
           pSVar10 != (Settings_FloatSetting_o *)0x0)) {
          (pMVar9->fields).ScaleMax = (pSVar10->fields)._value;
          pSVar3 = (__this->fields)._yawMin;
          if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
             (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item),
             pSVar10 != (Settings_FloatSetting_o *)0x0)) {
            (pMVar9->fields).YawMin = (pSVar10->fields)._value;
            pSVar3 = (__this->fields)._yawMax;
            if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
               (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                     (MethodInfo_92B830 *)
                                     MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item),
               pSVar10 != (Settings_FloatSetting_o *)0x0)) {
              (pMVar9->fields).YawMax = (pSVar10->fields)._value;
              pSVar3 = (__this->fields)._scaleXMin;
              if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                 (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                      ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                       (MethodInfo_92B830 *)
                                       MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item),
                 pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                (pMVar9->fields).ScaleXMin = (pSVar10->fields)._value;
                pSVar3 = (__this->fields)._scaleXMax;
                if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                   (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                        ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                         (MethodInfo_92B830 *)
                                         MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item),
                   pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                  (pMVar9->fields).ScaleXMax = (pSVar10->fields)._value;
                  pSVar3 = (__this->fields)._scaleYMin;
                  if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                     (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                          ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                           (MethodInfo_92B830 *)
                                           MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item),
                     pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                    (pMVar9->fields).ScaleYMin = (pSVar10->fields)._value;
                    pSVar3 = (__this->fields)._scaleYMax;
                    if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                       (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                            ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                             (MethodInfo_92B830 *)
                                             MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item)
                       , pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                      (pMVar9->fields).ScaleYMax = (pSVar10->fields)._value;
                      pSVar3 = (__this->fields)._scaleZMin;
                      if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                         (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                              ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                               (MethodInfo_92B830 *)
                                               MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                              ), pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                        (pMVar9->fields).ScaleZMin = (pSVar10->fields)._value;
                        pSVar3 = (__this->fields)._scaleZMax;
                        if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                           (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                                 (MethodInfo_92B830 *)
                                                 MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                ), pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                          (pMVar9->fields).ScaleZMax = (pSVar10->fields)._value;
                          pSVar3 = (__this->fields)._rotXMin;
                          if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                             (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                                   (MethodInfo_92B830 *)
                                                   MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                  ), pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                            (pMVar9->fields).RotXMin = (pSVar10->fields)._value;
                            pSVar3 = (__this->fields)._rotXMax;
                            if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                               (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                    ((System_Collections_Generic_List_object__o *)pSVar3,index
                                                     ,(MethodInfo_92B830 *)
                                                      MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                    ), pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                              (pMVar9->fields).RotXMax = (pSVar10->fields)._value;
                              pSVar3 = (__this->fields)._rotYMin;
                              if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                                 (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                      ((System_Collections_Generic_List_object__o *)pSVar3,
                                                       index,(MethodInfo_92B830 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                      ), pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                                (pMVar9->fields).RotYMin = (pSVar10->fields)._value;
                                pSVar3 = (__this->fields)._rotYMax;
                                if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                                   (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                        ((System_Collections_Generic_List_object__o *)pSVar3,
                                                         index,(MethodInfo_92B830 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                       ), pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                                  (pMVar9->fields).RotYMax = (pSVar10->fields)._value;
                                  pSVar3 = (__this->fields)._rotZMin;
                                  if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                                     (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                          ((System_Collections_Generic_List_object__o *)pSVar3
                                                           ,index,(MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                       ), pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                                    (pMVar9->fields).RotZMin = (pSVar10->fields)._value;
                                    pSVar3 = (__this->fields)._rotZMax;
                                    if ((pSVar3 != (System_Collections_Generic_List_FloatSetting__o *)0x0) &&
                                       (pSVar10 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                            ((System_Collections_Generic_List_object__o *)
                                                             pSVar3,index,
                                                             (MethodInfo_92B830 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                       ), pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                                      (pMVar9->fields).RotZMax = (pSVar10->fields)._value;
                                      pSVar4 = (__this->fields)._active;
                                      if ((pSVar4 != (System_Collections_Generic_List_BoolSetting__o *)0x0) &&
                                         (pSVar11 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                              ((System_Collections_Generic_List_object__o *)
                                                               pSVar4,index,
                                                               (MethodInfo_92B830 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item
                                                       ), pSVar11 != (Settings_BoolSetting_o *)0x0)) {
                                        (pMVar9->fields).Active = (pSVar11->fields)._value;
                                        pSVar4 = (__this->fields)._static;
                                        if ((pSVar4 != (System_Collections_Generic_List_BoolSetting__o *)0x0)
                                           && (pSVar11 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item
                                                       ), pSVar11 != (Settings_BoolSetting_o *)0x0)) {
                                          (pMVar9->fields).Static = (pSVar11->fields)._value;
                                          pSVar4 = (__this->fields)._visible;
                                          if ((pSVar4 != (System_Collections_Generic_List_BoolSetting__o *)0x0
                                              ) && (pSVar11 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar4,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item
                                                       ), pSVar11 != (Settings_BoolSetting_o *)0x0)) {
                                            (pMVar9->fields).Visible = (pSVar11->fields)._value;
                                            pSVar5 = (__this->fields)._collideMode;
                                            if ((pSVar5 != (System_Collections_Generic_List_StringSetting__o *
                                                           )0x0) &&
                                               (pSVar12 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_StringSetting_get_Item
                                                       ), pSVar12 != (Settings_StringSetting_o *)0x0)) {
                                              pSVar6 = (pSVar12->fields)._value;
                                              (pMVar9->fields).CollideMode = pSVar6;
                                              Il2CppCodeGenWriteBarrier(&(pMVar9->fields).CollideMode,pSVar6);
                                              pSVar5 = (__this->fields)._collideWith;
                                              if ((pSVar5 != (System_Collections_Generic_List_StringSetting__o
                                                              *)0x0) &&
                                                 (pSVar12 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_StringSetting_get_Item
                                                       ), pSVar12 != (Settings_StringSetting_o *)0x0)) {
                                                pSVar6 = (pSVar12->fields)._value;
                                                (pMVar9->fields).CollideWith = pSVar6;
                                                Il2CppCodeGenWriteBarrier
                                                          (&(pMVar9->fields).CollideWith,pSVar6);
                                                pSVar5 = (__this->fields)._physicsMaterial;
                                                if ((pSVar5 != (
                                                       System_Collections_Generic_List_StringSetting__o *)0x0)
                                                   && (pSVar12 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_StringSetting_get_Item
                                                       ), pSVar12 != (Settings_StringSetting_o *)0x0)) {
                                                  pSVar6 = (pSVar12->fields)._value;
                                                  (pMVar9->fields).PhysicsMaterial = pSVar6;
                                                  Il2CppCodeGenWriteBarrier
                                                            (&(pMVar9->fields).PhysicsMaterial,pSVar6);
                                                  pSVar5 = (__this->fields)._shader;
                                                  if ((pSVar5 != (
                                                       System_Collections_Generic_List_StringSetting__o *)0x0)
                                                     && (pSVar12 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_StringSetting_get_Item
                                                       ), pSVar12 != (Settings_StringSetting_o *)0x0)) {
                                                    pSVar6 = (pSVar12->fields)._value;
                                                    (pMVar9->fields).Shader = pSVar6;
                                                    Il2CppCodeGenWriteBarrier(&(pMVar9->fields).Shader,pSVar6)
                                                    ;
                                                    pSVar7 = (__this->fields)._color;
                                                    if ((pSVar7 != (
                                                       System_Collections_Generic_List_ColorSetting__o *)0x0)
                                                       && (pSVar13 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar7,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_ColorSetting_get_Item
                                                       ), pSVar13 != (Settings_ColorSetting_o *)0x0)) {
                                                      pUVar8 = (pSVar13->fields)._value;
                                                      (pMVar9->fields).Color = pUVar8;
                                                      Il2CppCodeGenWriteBarrier
                                                                (&(pMVar9->fields).Color,pUVar8);
                                                      pSVar7 = (__this->fields)._reflectColor;
                                                      if ((pSVar7 != (
                                                       System_Collections_Generic_List_ColorSetting__o *)0x0)
                                                       && (pSVar13 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar7,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_ColorSetting_get_Item
                                                       ), pSVar13 != (Settings_ColorSetting_o *)0x0)) {
                                                        pUVar8 = (pSVar13->fields)._value;
                                                        (pMVar9->fields).ReflectColor = pUVar8;
                                                        Il2CppCodeGenWriteBarrier
                                                                  (&(pMVar9->fields).ReflectColor,pUVar8);
                                                        pSVar5 = (__this->fields)._texture;
                                                        if ((pSVar5 != (
                                                       System_Collections_Generic_List_StringSetting__o *)0x0)
                                                       && (pSVar12 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar5,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_StringSetting_get_Item
                                                       ), pSVar12 != (Settings_StringSetting_o *)0x0)) {
                                                         pSVar6 = (pSVar12->fields)._value;
                                                         (pMVar9->fields).Texture = pSVar6;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (&(pMVar9->fields).Texture,pSVar6);
                                                         pSVar3 = (__this->fields)._tilingX;
                                                         if (((pSVar3 != (
                                                       System_Collections_Generic_List_FloatSetting__o *)0x0)
                                                       && (pSVar10 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                       ), pSVar10 != (Settings_FloatSetting_o *)0x0)) &&
                                                       (pSVar3 = (__this->fields)._tilingY,
                                                       pSVar3 != (
                                                       System_Collections_Generic_List_FloatSetting__o *)0x0))
                                                       {
                                                         fVar1 = (pSVar10->fields)._value;
                                                         pSVar10 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                       );
                                                       if (pSVar10 != (Settings_FloatSetting_o *)0x0) {
                                                         (pMVar9->fields).Tiling.fields.y =
                                                              (pSVar10->fields)._value;
                                                         (pMVar9->fields).Tiling.fields.x = fVar1;
                                                         pSVar3 = (__this->fields)._offsetX;
                                                         if (((pSVar3 != (
                                                       System_Collections_Generic_List_FloatSetting__o *)0x0)
                                                       && (pSVar10 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                       ), pSVar10 != (Settings_FloatSetting_o *)0x0)) &&
                                                       (pSVar3 = (__this->fields)._offsetY,
                                                       pSVar3 != (
                                                       System_Collections_Generic_List_FloatSetting__o *)0x0))
                                                       {
                                                         fVar1 = (pSVar10->fields)._value;
                                                         pSVar10 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                       );
                                                       if (pSVar10 != (Settings_FloatSetting_o *)0x0) {
                                                         (pMVar9->fields).Offset.fields.y =
                                                              (pSVar10->fields)._value;
                                                         (pMVar9->fields).Offset.fields.x = fVar1;
                                                         pSVar3 = (__this->fields)._yOffset;
                                                         if ((pSVar3 != (
                                                       System_Collections_Generic_List_FloatSetting__o *)0x0)
                                                       && (pSVar10 = 
                                                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,index,
                                                                  (MethodInfo_92B830 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_List_FloatSetting_get_Item
                                                       ), pSVar10 != (Settings_FloatSetting_o *)0x0)) {
                                                         (pMVar9->fields).YOffset = (pSVar10->fields)._value;
                                                         MapEditor_MapEditorBrush__RegenerateGhosts
                                                                   (__this_00,(MethodInfo *)0x0);
                                                         return;
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnShaderChanged
// il2cpp: void UI_MapEditorBrushPanel__OnShaderChanged (UI_MapEditorBrushPanel_o* __this, int32_t index, const MethodInfo* method);
// 0x1822a2820

void UI_MapEditorBrushPanel__OnShaderChanged
               (UI_MapEditorBrushPanel_o *__this,int32_t index,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_MapEditorBrush_o *__this_00;
  System_Collections_Generic_List_BrushEntry__o *pSVar2;
  System_Collections_Generic_List_StringSetting__o *pSVar3;
  System_String_o *pSVar4;
  bool bVar5;
  MapEditor_BrushEntry_o *pMVar6;
  Settings_StringSetting_o *pSVar7;
  
  if (Il2CppMethodInitialized_1843474da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_1843474da = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (__this_00 = (pGVar1->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) &&
     (pSVar2 = (__this_00->fields).Entries, pSVar2 != (System_Collections_Generic_List_BrushEntry__o *)0x0)) {
    if ((pSVar2->fields)._size <= index) {
      return;
    }
    pMVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,index,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
    if ((pMVar6 != (MapEditor_BrushEntry_o *)0x0) &&
       (pSVar3 = (__this->fields)._shader, pSVar3 != (System_Collections_Generic_List_StringSetting__o *)0x0))
    {
      pSVar4 = (pMVar6->fields).Shader;
      pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar3,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_StringSetting_get_Item);
      if (pSVar7 != (Settings_StringSetting_o *)0x0) {
        bVar5 = System_String__op_Equality(pSVar4,(pSVar7->fields)._value,(MethodInfo *)0x0);
        if (bVar5) {
          return;
        }
        pSVar2 = (__this_00->fields).Entries;
        if (pSVar2 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
          pMVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
          pSVar3 = (__this->fields)._shader;
          if (((pSVar3 != (System_Collections_Generic_List_StringSetting__o *)0x0) &&
              (pSVar7 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_StringSetting_get_Item),
              pSVar7 != (Settings_StringSetting_o *)0x0)) && (pMVar6 != (MapEditor_BrushEntry_o *)0x0)) {
            pSVar4 = (pSVar7->fields)._value;
            (pMVar6->fields).Shader = pSVar4;
            Il2CppCodeGenWriteBarrier(&(pMVar6->fields).Shader,pSVar4);
            UI_MapEditorBrushPanel__Rebuild(__this,(MethodInfo *)0x0);
            MapEditor_MapEditorBrush__RegenerateGhosts(__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnPickTexture
// il2cpp: void UI_MapEditorBrushPanel__OnPickTexture (UI_MapEditorBrushPanel_o* __this, int32_t index, const MethodInfo* method);
// 0x1822a25d0

void UI_MapEditorBrushPanel__OnPickTexture(UI_MapEditorBrushPanel_o *__this,int32_t index,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorTexturePopup_o *pUVar2;
  UI_MapEditorBrushPanel___c__DisplayClass89_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_1843474db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass89_0_OnPickTexture_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorBrushPanel_c__DisplayClass89_0);
    Il2CppMethodInitialized_1843474db = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MapEditorBrushPanel_c__DisplayClass89_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_MapEditorBrushPanel___c__DisplayClass89_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).index = index;
    pUVar1 = (__this->fields)._menu;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_MapEditorBrushPanel_c__DisplayClass89_0_OnPickTexture_b__0,
               (MethodInfo *)0x0);
    if (pUVar1 != (UI_MapEditorMenu_o *)0x0) {
      (pUVar1->fields).TexturePopupTarget = (System_Action_string__o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(pUVar1->fields).TexturePopupTarget,__this_00);
      pUVar1 = (__this->fields)._menu;
      if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).TexturePopup, pUVar2 != (UI_MapEditorTexturePopup_o *)0x0)) {
        (*(pUVar2->klass->vtable)._21_Show.methodPtr)(pUVar2,(pUVar2->klass->vtable)._21_Show.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$OnAdvancedChanged
// il2cpp: void UI_MapEditorBrushPanel__OnAdvancedChanged (UI_MapEditorBrushPanel_o* __this, int32_t index, const MethodInfo* method);
// 0x1822a1850

void UI_MapEditorBrushPanel__OnAdvancedChanged
               (UI_MapEditorBrushPanel_o *__this,int32_t index,MethodInfo *method)

{
  bool bVar1;
  GameManagers_MapEditorGameManager_o *pGVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  System_Collections_Generic_List_BrushEntry__o *pSVar3;
  System_Collections_Generic_List_BoolSetting__o *pSVar4;
  MapEditor_BrushEntry_o *pMVar5;
  Settings_BoolSetting_o *pSVar6;
  
  if (Il2CppMethodInitialized_1843474dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843474dc = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (((pGVar2 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (__this_00 = (pGVar2->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) &&
     (pSVar3 = (__this_00->fields).Entries, pSVar3 != (System_Collections_Generic_List_BrushEntry__o *)0x0)) {
    if ((pSVar3->fields)._size <= index) {
      return;
    }
    pMVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar3,index,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
    if ((pMVar5 != (MapEditor_BrushEntry_o *)0x0) &&
       (pSVar4 = (__this->fields)._advanced, pSVar4 != (System_Collections_Generic_List_BoolSetting__o *)0x0))
    {
      bVar1 = (pMVar5->fields).Advanced;
      pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item
                         );
      if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
        if (bVar1 == (pSVar6->fields)._value) {
          return;
        }
        pSVar3 = (__this_00->fields).Entries;
        if (pSVar3 != (System_Collections_Generic_List_BrushEntry__o *)0x0) {
          pMVar5 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,index,
                              (MethodInfo_92B830 *)
                              MethodInfo_System_Collections_Generic_List_BrushEntry_get_Item);
          pSVar4 = (__this->fields)._advanced;
          if (((pSVar4 != (System_Collections_Generic_List_BoolSetting__o *)0x0) &&
              (pSVar6 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar4,index,
                                   (MethodInfo_92B830 *)
                                   MethodInfo_System_Collections_Generic_List_BoolSetting_get_Item),
              pSVar6 != (Settings_BoolSetting_o *)0x0)) && (pMVar5 != (MapEditor_BrushEntry_o *)0x0)) {
            (pMVar5->fields).Advanced = (pSVar6->fields)._value;
            UI_MapEditorBrushPanel__Rebuild(__this,(MethodInfo *)0x0);
            MapEditor_MapEditorBrush__RegenerateGhosts(__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$.ctor
// il2cpp: void UI_MapEditorBrushPanel___ctor (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a7ae0

void UI_MapEditorBrushPanel___ctor(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  System_Collections_Generic_List_FloatSetting__o *pSVar5;
  System_Collections_Generic_List_BoolSetting__o *pSVar6;
  System_Collections_Generic_List_StringSetting__o *pSVar7;
  System_Collections_Generic_List_ColorSetting__o *pSVar8;
  
  if (Il2CppMethodInitialized_1843474dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_ColorSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BoolSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_StringSetting_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Scatter");
    Il2CppMethodInitialized_1843474dd = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar1,10.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._radius = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._radius,pSVar1);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,8,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._count = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._count,pSVar2);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields)._randomize = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._randomize,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar4,"Scatter",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._mode = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mode,pSVar4);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._gridX = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gridX,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,1,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._gridY = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gridY,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_1f1de00(pSVar2,3,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._gridZ = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._gridZ,pSVar2);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar1,5.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._spacingX = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._spacingX,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar1,5.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._spacingY = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._spacingY,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar1,5.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._spacingZ = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._spacingZ,pSVar1);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields)._boundsSnap = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._boundsSnap,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar4,"None",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._curveAxis = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._curveAxis,pSVar4);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar1,0.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields)._curveAmount = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._curveAmount,pSVar1);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields)._flatPlane = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._flatPlane,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_1f11be0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields)._alignToSurface = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._alignToSurface,pSVar3);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._weight = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._weight,pSVar5);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BoolSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar6,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BoolSetting_ctor);
  (__this->fields)._advanced = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._advanced,pSVar6);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._scaleMin = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleMin,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._scaleMax = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleMax,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._yawMin = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._yawMin,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._yawMax = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._yawMax,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._scaleXMin = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleXMin,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._scaleXMax = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleXMax,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._scaleYMin = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleYMin,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._scaleYMax = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleYMax,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._scaleZMin = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleZMin,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._scaleZMax = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._scaleZMax,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._rotXMin = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotXMin,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._rotXMax = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotXMax,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._rotYMin = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotYMin,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._rotYMax = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotYMax,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._rotZMin = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotZMin,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._rotZMax = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rotZMax,pSVar5);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BoolSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar6,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BoolSetting_ctor);
  (__this->fields)._active = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._active,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BoolSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar6,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BoolSetting_ctor);
  (__this->fields)._static = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._static,pSVar6);
  pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BoolSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar6,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BoolSetting_ctor);
  (__this->fields)._visible = pSVar6;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._visible,pSVar6);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
  (__this->fields)._collideMode = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._collideMode,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
  (__this->fields)._collideWith = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._collideWith,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
  (__this->fields)._physicsMaterial = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._physicsMaterial,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
  (__this->fields)._shader = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._shader,pSVar7);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ColorSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar8,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ColorSetting_ctor);
  (__this->fields)._color = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._color,pSVar8);
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ColorSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar8,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_ColorSetting_ctor);
  (__this->fields)._reflectColor = pSVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._reflectColor,pSVar8);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_StringSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar7,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_StringSetting_ctor);
  (__this->fields)._texture = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._texture,pSVar7);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._tilingX = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tilingX,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._tilingY = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tilingY,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._offsetX = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._offsetX,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._offsetY = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._offsetY,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_FloatSetting);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_FloatSetting_ctor);
  (__this->fields)._yOffset = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._yOffset,pSVar5);
  UI_HeadedPanel___ctor((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_0
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_0 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a7aa0

void UI_MapEditorBrushPanel___Rebuild_b__73_0(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *pUVar1;
  UI_MapEditorTopPanel_o *__this_00;
  
  pUVar1 = (__this->fields)._menu;
  if ((pUVar1 != (UI_MapEditorMenu_o *)0x0) &&
     (__this_00 = (pUVar1->fields)._topPanel, __this_00 != (UI_MapEditorTopPanel_o *)0x0)) {
    UI_MapEditorTopPanel__CloseBrushTool(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_1
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_1 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a2530

void UI_MapEditorBrushPanel___Rebuild_b__73_1(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843474d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Grid");
    Il2CppMethodInitialized_1843474d2 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (__this->fields)._mode, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    __this_00 = (pGVar1->fields).Brush;
    bVar3 = System_String__op_Equality((pSVar2->fields)._value,"Grid",(MethodInfo *)0x0);
    if (__this_00 != (MapEditor_MapEditorBrush_o *)0x0) {
      if ((__this_00->fields).Mode != (uint)bVar3) {
        (__this_00->fields).Mode = (uint)bVar3;
        MapEditor_MapEditorBrush__RegenerateGhosts(__this_00,(MethodInfo *)0x0);
        UI_MapEditorBrushPanel__Rebuild(__this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_2
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_2 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a23c0

void UI_MapEditorBrushPanel___Rebuild_b__73_2(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_BoolSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *pMVar3;
  
  if (Il2CppMethodInitialized_1843474d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843474d3 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._flatPlane, pSVar2 != (Settings_BoolSetting_o *)0x0)) &&
     (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
    (pMVar3->fields).FlatPlane = (pSVar2->fields)._value;
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
      MapEditor_MapEditorBrush__RegenerateGhosts(pMVar3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_3
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_3 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a19a0

void UI_MapEditorBrushPanel___Rebuild_b__73_3(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_BoolSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  
  if (Il2CppMethodInitialized_1843474d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843474d4 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._alignToSurface, pSVar2 != (Settings_BoolSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) {
    MapEditor_MapEditorBrush__SetAlignToSurface(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_9
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_9 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a7ad0

void
UI_MapEditorBrushPanel___Rebuild_b__73_9(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel__OnGridChanged(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_10
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_10 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a7ad0

void
UI_MapEditorBrushPanel___Rebuild_b__73_10(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel__OnGridChanged(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_11
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_11 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a7ad0

void
UI_MapEditorBrushPanel___Rebuild_b__73_11(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel__OnGridChanged(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_12
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_12 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a7ad0

void
UI_MapEditorBrushPanel___Rebuild_b__73_12(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel__OnGridChanged(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_13
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_13 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a7ad0

void
UI_MapEditorBrushPanel___Rebuild_b__73_13(UI_MapEditorBrushPanel_o* __this, MethodInfo* method)

{
  UI_MapEditorBrushPanel__OnGridChanged(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_14
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_14 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a7ad0

void UI_MapEditorBrushPanel___Rebuild_b__73_14(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  UI_MapEditorBrushPanel__OnGridChanged(__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_15
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_15 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a1a00

void UI_MapEditorBrushPanel___Rebuild_b__73_15(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_BoolSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *pMVar3;
  
  if (Il2CppMethodInitialized_1843474d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843474d6 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._boundsSnap, pSVar2 != (Settings_BoolSetting_o *)0x0)) &&
     (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
    (pMVar3->fields).BoundsSnap = (pSVar2->fields)._value;
    pGVar1 = (__this->fields)._gameManager;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
      MapEditor_MapEditorBrush__RegenerateGhosts(pMVar3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_16
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_16 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a1b60

void UI_MapEditorBrushPanel___Rebuild_b__73_16(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_StringSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  bool bVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_1843474d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    Il2CppMethodInitialized_1843474d7 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pSVar2 = (__this->fields)._curveAxis, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    __this_00 = (pGVar1->fields).Brush;
    bVar3 = System_String__op_Equality((pSVar2->fields)._value,"X",(MethodInfo *)0x0);
    if (bVar3) {
      uVar4 = 1;
    }
    else {
      pSVar2 = (__this->fields)._curveAxis;
      if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1822a1c5e;
      bVar3 = System_String__op_Equality((pSVar2->fields)._value,"Y",(MethodInfo *)0x0);
      if (bVar3) {
        uVar4 = 2;
      }
      else {
        pSVar2 = (__this->fields)._curveAxis;
        if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1822a1c5e;
        bVar3 = System_String__op_Equality((pSVar2->fields)._value,"Z",(MethodInfo *)0x0);
        uVar4 = -(uint)bVar3 & 3;
      }
    }
    if (__this_00 != (MapEditor_MapEditorBrush_o *)0x0) {
      (__this_00->fields).CurveAxis = uVar4;
      MapEditor_MapEditorBrush__RegenerateGhosts(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
label_1822a1c5e:
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_17
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_17 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a1ae0

void UI_MapEditorBrushPanel___Rebuild_b__73_17(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_FloatSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *pMVar3;
  
  if (Il2CppMethodInitialized_1843474d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843474d8 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._curveAmount, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
     (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
    pGVar1 = (__this->fields)._gameManager;
    (pMVar3->fields).CurveAmount = (pSVar2->fields)._value;
    if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
       (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
      MapEditor_MapEditorBrush__RegenerateGhosts(pMVar3,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_4
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_4 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a26e0

void UI_MapEditorBrushPanel___Rebuild_b__73_4(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_FloatSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  
  if (Il2CppMethodInitialized_1843474cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_1843474cf = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._radius, pSVar2 != (Settings_FloatSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) {
    MapEditor_MapEditorBrush__SetRadius(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_5
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_5 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a1a80

void UI_MapEditorBrushPanel___Rebuild_b__73_5(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_IntSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *__this_00;
  
  if (Il2CppMethodInitialized_1843474d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_1843474d0 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._count, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
     (__this_00 = (pGVar1->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) {
    MapEditor_MapEditorBrush__SetCount(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_6
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_6 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a2750

void UI_MapEditorBrushPanel___Rebuild_b__73_6(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  Settings_BoolSetting_o *pSVar2;
  MapEditor_MapEditorBrush_o *pMVar3;
  
  if (Il2CppMethodInitialized_1843474d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_1843474d1 = '\x01';
  }
  pGVar1 = (__this->fields)._gameManager;
  if (((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
      (pSVar2 = (__this->fields)._randomize, pSVar2 != (Settings_BoolSetting_o *)0x0)) &&
     (pMVar3 = (pGVar1->fields).Brush, pMVar3 != (MapEditor_MapEditorBrush_o *)0x0)) {
    (pMVar3->fields).RandomizeEachPlacement = (pSVar2->fields)._value;
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_7
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_7 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a17f0

void UI_MapEditorBrushPanel___Rebuild_b__73_7(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_MapEditorBrush_o *pMVar2;
  UI_MapEditorMenu_o *pUVar3;
  UI_MapEditorAddObjectPopup_o *pUVar4;
  
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (pMVar2 = (pGVar1->fields).Brush, pMVar2 != (MapEditor_MapEditorBrush_o *)0x0)) {
    (pMVar2->fields).AssetSelectMode = true;
    pUVar3 = (__this->fields)._menu;
    if ((pUVar3 != (UI_MapEditorMenu_o *)0x0) &&
       (pUVar4 = (pUVar3->fields).AddObjectPopup, pUVar4 != (UI_MapEditorAddObjectPopup_o *)0x0)) {
      (*(pUVar4->klass->vtable)._21_Show.methodPtr)(pUVar4,(pUVar4->klass->vtable)._21_Show.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorBrushPanel$$<Rebuild>b__73_8
// il2cpp: void UI_MapEditorBrushPanel___Rebuild_b__73_8 (UI_MapEditorBrushPanel_o* __this, const MethodInfo* method);
// 0x1822a27f0

void UI_MapEditorBrushPanel___Rebuild_b__73_8(UI_MapEditorBrushPanel_o *__this,MethodInfo *method)

{
  GameManagers_MapEditorGameManager_o *pGVar1;
  MapEditor_MapEditorBrush_o *__this_00;
  
  pGVar1 = (__this->fields)._gameManager;
  if ((pGVar1 != (GameManagers_MapEditorGameManager_o *)0x0) &&
     (__this_00 = (pGVar1->fields).Brush, __this_00 != (MapEditor_MapEditorBrush_o *)0x0)) {
    MapEditor_MapEditorBrush__RegenerateGhosts(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}



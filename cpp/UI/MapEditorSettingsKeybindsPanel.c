// Type: UI.MapEditorSettingsKeybindsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorSettingsKeybindsPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsKeybindsPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorSettingsKeybindsPanel$$get_DoublePanel
// il2cpp: bool UI_MapEditorSettingsKeybindsPanel__get_DoublePanel (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4122f50

bool_conflict
UI_MapEditorSettingsKeybindsPanel__get_DoublePanel
          (UI_MapEditorSettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorSettingsKeybindsPanel$$get_ScrollBar
// il2cpp: bool UI_MapEditorSettingsKeybindsPanel__get_ScrollBar (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4122f60

bool_conflict
UI_MapEditorSettingsKeybindsPanel__get_ScrollBar
          (UI_MapEditorSettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorSettingsKeybindsPanel$$Setup
// il2cpp: void UI_MapEditorSettingsKeybindsPanel__Setup (UI_MapEditorSettingsKeybindsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4122f70

void UI_MapEditorSettingsKeybindsPanel__Setup
               (UI_MapEditorSettingsKeybindsPanel_o *__this,UI_BasePanel_o *parent,
               MethodInfo *method)

{
  byte bVar1;
  UI_BasePanel_o *pUVar2;
  System_String_o *cat;
  long lVar3;
  Settings_BaseSettingsContainer_o *container;
  MethodInfo *in_RAX;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_00;
  
  if (DAT_05704901 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_MapEditorSettingsPopup);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Keybinds");
    DAT_05704901 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).Parent;
  if (pUVar2 != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_MapEditorSettingsPopup->_2).naturalAligment;
    if (((pUVar2->klass->_2).naturalAligment < bVar1) ||
       ((pUVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_MapEditorSettingsPopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
    cat = (System_String_o *)pUVar2[1].fields._currentCategoryPanel;
    pSVar4 = (System_String_o *)
             (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                       (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
    __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
    UI_ElementStyle___ctor(__this_00,0x18,140.0,20.0,pSVar4,(MethodInfo *)0x0);
    pSVar4 = "Keybinds";
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
    if (lVar3 != 0) {
      container = *(Settings_BaseSettingsContainer_o **)(lVar3 + 0x50);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar3 != 0) {
        UI_MapEditorSettingsKeybindsPanel__CreateKeybindSettings
                  (__this,container,*(UI_KeybindPopup_o **)(lVar3 + 0x80),cat,pSVar4,__this_00,
                   in_RAX);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorSettingsKeybindsPanel$$CreateKeybindSettings
// il2cpp: void UI_MapEditorSettingsKeybindsPanel__CreateKeybindSettings (UI_MapEditorSettingsKeybindsPanel_o* __this, Settings_BaseSettingsContainer_o* container, UI_KeybindPopup_o* popup, System_String_o* cat, System_String_o* sub, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x4123100

/* WARNING: Removing unreachable block (ram,0x041236ad) */

void UI_MapEditorSettingsKeybindsPanel__CreateKeybindSettings
               (UI_MapEditorSettingsKeybindsPanel_o *__this,
               Settings_BaseSettingsContainer_o *container,UI_KeybindPopup_o *popup,
               System_String_o *cat,System_String_o *sub,UI_ElementStyle_o *style,MethodInfo *method
               )

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  long lVar3;
  Il2CppObject *__this_00;
  UnityEngine_Transform_o *parent;
  System_RuntimeTypeHandle_o handle;
  char cVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  System_Type_o *left;
  System_Type_o *right;
  System_String_o *pSVar10;
  long lVar11;
  int local_6c;
  
  if (DAT_05704902 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseSetting);
    il2cpp_init_method_metadata(&TypeInfo_DictionaryEntry);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeRef_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"");
    DAT_05704902 = '\x01';
  }
  if (container == (Settings_BaseSettingsContainer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar2 = (container->fields).Settings;
  if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  plVar7 = (long *)(*(pSVar2->klass->vtable)._23_GetEnumerator.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable)._23_GetEnumerator.method);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  local_6c = 0;
  do {
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
          puVar8 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar11) * 0x10 + lVar3 + 0x138);
          goto LAB_04123233;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar11);
    }
    puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,0);
LAB_04123233:
    cVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if (cVar4 == '\0') {
      plVar7 = (long *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable);
      if (plVar7 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar7;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) == 0) goto LAB_041235cf;
      lVar11 = 0;
      break;
    }
    lVar3 = *plVar7;
    if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
          puVar8 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar11) + 1) * 0x10 + lVar3 +
                   0x138);
          goto LAB_041232b8;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar11);
    }
    puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,1);
LAB_041232b8:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(long *)(*plVar9 + 0x40) != *(long *)(TypeInfo_DictionaryEntry + 0x40)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar9);
    }
    puVar8 = (undefined8 *)il2cpp_glue_022c7330(plVar9);
    pSVar10 = (System_String_o *)*puVar8;
    __this_00 = (Il2CppObject *)puVar8[1];
    if (__this_00 != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_BaseSetting->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_BaseSetting)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
    }
    if ((pSVar10 != (System_String_o *)0x0) && (pSVar10->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar10);
    }
    if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    left = System_Object__GetType(__this_00,(MethodInfo *)0x0);
    handle = TypeRef_KeybindSetting;
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    right = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    bVar5 = System_Type__op_Equality(left,right,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pSVar2 = (container->fields).Settings;
      if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar6 = System_Collections_Specialized_OrderedDictionary__get_Count(pSVar2,(MethodInfo *)0x0);
      parent = (&(__this->fields).DoublePanelLeft)[iVar6 / 2 <= local_6c];
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = UI_UIManager__GetLocale(cat,sub,pSVar10,"","",(MethodInfo *)0x0)
      ;
      UI_ElementFactory__CreateKeybindSetting
                (parent,style,(Settings_BaseSetting_o *)__this_00,pSVar10,popup,"",120.0,
                 35.0,2,(MethodInfo *)0x0);
      local_6c = local_6c + 1;
    }
  } while( true );
  while (lVar11 = lVar11 + 0x10, (ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar11) {
    if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
      puVar8 = (undefined8 *)
               (lVar3 + (long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
      goto LAB_041235ed;
    }
  }
LAB_041235cf:
  puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable,0);
LAB_041235ed:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
  return;
}


// UI.MapEditorSettingsKeybindsPanel$$.ctor
// il2cpp: void UI_MapEditorSettingsKeybindsPanel___ctor (UI_MapEditorSettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x41236d0

void UI_MapEditorSettingsKeybindsPanel___ctor
               (UI_MapEditorSettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}



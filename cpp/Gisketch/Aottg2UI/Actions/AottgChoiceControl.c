// Type: Gisketch.Aottg2UI.Actions.AottgChoiceControl
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceControl.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x53953d0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass29_0___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass29_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass29_0$$<Open>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass29_0___Open_b__0 (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x5397f40

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass29_0___Open_b__0
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass29_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07542b5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"down");
    Il2CppMethodInitialized_07542b5c = '\x01';
    in_RDX = extraout_RDX;
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this->fields).version == (__this_00->fields)._openVersion) {
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow(__this_00,"down",in_RDX);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass34_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_0___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_0_o* __this, const MethodInfo* method);
// 0x5396c50

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_0___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass34_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o* __this, const MethodInfo* method);
// 0x5396c60

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass34_1$$<WireOptions>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1___WireOptions_b__0 (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o* __this, const MethodInfo* method);
// 0x5397f90

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1___WireOptions_b__0
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_0_o *pGVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *overlays;
  MethodInfo *in_RCX;
  int32_t index;
  
  pGVar1 = (__this->fields).CS___8__locals1;
  if ((pGVar1 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_0_o *)0x0) ||
     (__this_00 = (pGVar1->fields).__4__this,
     __this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0)) {
    ThrowNullReferenceException();
  }
  overlays = (pGVar1->fields).overlays;
  index = (__this->fields).index;
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField == 1) {
    index = (__this_00->fields)._selectedIndex;
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select(__this_00,index,overlays,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass34_2$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_2___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_2_o* __this, const MethodInfo* method);
// 0x5396fe0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_2___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_2_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass34_2$$<WireOptions>b__1
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_2___WireOptions_b__1 (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_2_o* __this, const MethodInfo* method);
// 0x5398000

bool Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_2___WireOptions_b__1
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_2_o *__this,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o *pGVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_0_o *pGVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  
  if ((__this->fields).enabled == false) {
    return false;
  }
  pGVar2 = (__this->fields).CS___8__locals2;
  if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o *)0x0) &&
     (pGVar3 = (pGVar2->fields).CS___8__locals1,
     pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_0_o *)0x0)) {
    pGVar4 = (pGVar3->fields).__4__this;
    UVar7 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      if ((pGVar4->fields)._pointerSelectionLocked != false) {
        UVar1 = (pGVar4->fields)._pointerLockPosition.fields;
        fVar5 = UVar7.fields.x - UVar1.x;
        fVar6 = UVar7.fields.y - UVar1.y;
        if (fVar6 * fVar6 + fVar5 * fVar5 < 4.0) {
          return false;
        }
        (pGVar4->fields)._pointerSelectionLocked = false;
      }
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$get_OverlayManager
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_OverlayManager (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x5394a10

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_OverlayManager
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  return (__this->fields)._OverlayManager_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$set_OverlayManager
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__set_OverlayManager (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* value, const MethodInfo* method);
// 0x5394a20

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__set_OverlayManager
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *value,MethodInfo *method)

{
  (__this->fields)._OverlayManager_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._OverlayManager_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$get_Overlays
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_Overlays (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x5394a30

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_Overlays
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_07542b4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_07542b4b = '\x01';
  }
  pGVar1 = (__this->fields)._OverlayManager_k__BackingField;
  if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    return pGVar1;
  }
  pGVar2 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0D00 *)
                      MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
  if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0;
  }
  return (pGVar2->fields)._Overlays_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* value, System_String_array* options, TMPro_TextMeshProUGUI_o* label, int32_t maxVisibleItems, UnityEngine_GameObject_o* arrow, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, const MethodInfo* method);
// 0x5394a90

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *value,
               System_String_array *options,TMPro_TextMeshProUGUI_o *label,int32_t maxVisibleItems,
               UnityEngine_GameObject_o *arrow,Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,
               Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar4;
  MethodInfo *method_00;
  TMPro_TextMeshProUGUI_o *method_01;
  
  (__this->fields)._node = node;
  method_01 = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._node);
  (__this->fields)._actions = actions;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions);
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar3 = (node->fields).id;
      goto label_05394b24;
    }
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Object_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
label_05394b24:
  (__this->fields)._id = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  pGVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Create
                     (node,value,options,localizer,(MethodInfo *)method_01);
  (__this->fields)._options = pGVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._options);
  iVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf(__this,value,method_00);
  (__this->fields)._index = iVar2;
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  iVar2 = 8;
  if (0 < maxVisibleItems) {
    iVar2 = maxVisibleItems;
  }
  (__this->fields)._maxVisibleItems = iVar2;
  (__this->fields)._arrow = arrow;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._arrow);
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel(__this,(MethodInfo *)arrow);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Previous
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Previous (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t source, const MethodInfo* method);
// 0x538fd90

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Previous
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t source,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  MethodInfo *method_00;
  uint uVar4;
  uint index;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  pGVar2 = (__this->fields)._options;
  if ((pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
     (pGVar3 = (pGVar2->fields)._items,
     pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
label_0538fe27:
    ThrowNullReferenceException();
  }
  uVar1 = (__this->fields)._index;
  method_00 = (MethodInfo *)pGVar3->max_length;
  uVar5 = (uint)method_00;
  uVar8 = uVar5 - 1;
  if (0 < (int)uVar5) {
    iVar7 = uVar1 + uVar5;
    iVar6 = 1;
    do {
      iVar7 = iVar7 + -1;
      index = iVar7 % (int)uVar5;
      if (-1 < (int)index) {
        uVar4 = index;
        if ((int)uVar8 <= (int)index) {
          uVar4 = uVar8;
        }
        if (uVar5 <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        if (pGVar3->m_Items[(int)uVar4] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
        goto label_0538fe27;
        if ((pGVar3->m_Items[(int)uVar4]->fields).enabled != false) {
          Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,index,source,method_00);
          return;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar5);
  }
  if ((int)uVar1 < (int)uVar8) {
    uVar8 = uVar1;
  }
  uVar5 = 0;
  if (-1 < (int)uVar1) {
    uVar5 = uVar8;
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,uVar5,source,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Next
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t source, const MethodInfo* method);
// 0x538fe60

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t source,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  MethodInfo *method_00;
  uint uVar4;
  uint index;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  pGVar2 = (__this->fields)._options;
  if ((pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
     (pGVar3 = (pGVar2->fields)._items,
     pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
label_0538fee4:
    ThrowNullReferenceException();
  }
  uVar1 = (__this->fields)._index;
  method_00 = (MethodInfo *)pGVar3->max_length;
  uVar5 = (uint)method_00;
  uVar7 = uVar5 - 1;
  if (0 < (int)uVar5) {
    iVar6 = 1;
    do {
      index = (int)(uVar1 + uVar5 + iVar6) % (int)uVar5;
      if (-1 < (int)index) {
        uVar4 = index;
        if ((int)uVar7 <= (int)index) {
          uVar4 = uVar7;
        }
        if (uVar5 <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        if (pGVar3->m_Items[(int)uVar4] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
        goto label_0538fee4;
        if ((pGVar3->m_Items[(int)uVar4]->fields).enabled != false) {
          Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,index,source,method_00);
          return;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <= (int)uVar5);
  }
  if ((int)uVar1 < (int)uVar7) {
    uVar7 = uVar1;
  }
  uVar5 = 0;
  if (-1 < (int)uVar1) {
    uVar5 = uVar7;
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,uVar5,source,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$get_Value
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_Value (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x53951c0

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_Value
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar6;
  System_String_o *pSVar7;
  bool bVar8;
  uint uVar9;
  
  pGVar4 = (__this->fields)._options;
  if (pGVar4 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_05395213:
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pGVar5 = (pGVar4->fields)._items;
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar2 = (__this->fields)._index;
    uVar3 = (uint)pGVar5->max_length;
    uVar1 = uVar3 - 1;
    if ((int)uVar2 < (int)uVar1) {
      uVar1 = uVar2;
    }
    uVar9 = 0;
    if (-1 < (int)uVar2) {
      uVar9 = uVar1;
    }
    if (uVar3 <= uVar9) {
      ThrowIndexOutOfRangeException();
    }
    pGVar6 = pGVar5->m_Items[(int)uVar9];
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      bVar8 = System_String__IsNullOrEmpty((pGVar6->fields).value,(MethodInfo *)0x0);
      if (!bVar8) {
        return (pGVar6->fields).value;
      }
      pSVar7 = (pGVar6->fields).text;
      if (pSVar7 != (System_String_o *)0x0) {
        return pSVar7;
      }
      goto label_05395213;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetValueWithoutNotify
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, System_String_o* value, const MethodInfo* method);
// 0x53952c0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,System_String_o *value,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  uint uVar4;
  uint uVar5;
  
  if ((__this->fields)._options != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    uVar5 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf(__this,value,method);
    pGVar2 = (__this->fields)._options;
    if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_0539531a:
      ThrowNullReferenceException();
    }
    if (-1 < (int)uVar5) {
      pGVar3 = (pGVar2->fields)._items;
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_0539531a;
      uVar1 = (uint)pGVar3->max_length;
      if ((int)uVar5 < (int)uVar1) {
        uVar4 = uVar1 - 1;
        if ((int)uVar5 < (int)(uVar1 - 1)) {
          uVar4 = uVar5;
        }
        if (uVar1 <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        if (pGVar3->m_Items[(int)uVar4] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
        goto label_0539531a;
        if ((pGVar3->m_Items[(int)uVar4]->fields).enabled != false) {
          (__this->fields)._index = uVar5;
          Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel(__this,(MethodInfo *)(ulong)uVar4);
          return;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$get_CanStep
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x53949b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53949ce: nop 

bool Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  uint uVar4;
  int iVar5;
  
  pGVar2 = (__this->fields)._options;
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    return false;
  }
  pGVar3 = (pGVar2->fields)._items;
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
label_053949f5:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pGVar3->max_length;
  uVar4 = 0;
  if (0 < (int)uVar1) {
    iVar5 = 0;
    do {
      if (pGVar3->m_Items[(int)uVar4] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
      goto label_053949f5;
      iVar5 = iVar5 + (uint)(pGVar3->m_Items[(int)uVar4]->fields).enabled;
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
    uVar4 = (uint)(1 < iVar5);
  }
  return SUB41(uVar4,0);
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Open
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Open (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x538f570
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538f879: jmp 0x538f90b
// asm:   0x538f8a1: xor eax, eax

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Open
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass29_0_o *__this_00;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root;
  MethodInfo *pMVar4;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o *pGVar5;
  System_Action_o *__this_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Vector3_o UVar8;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *local_38;
  
  if (Il2CppMethodInitialized_07542b4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoicePopoverLifetime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass29_0_Open_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass29_0);
    il2cpp_codegen_initialize_runtime_metadata(&"up");
    il2cpp_codegen_initialize_runtime_metadata(&"choice-");
    Il2CppMethodInitialized_07542b4c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass29_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass29_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    if (Il2CppMethodInitialized_07542b4b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
      Il2CppMethodInitialized_07542b4b = '\x01';
    }
    local_38 = (__this->fields)._OverlayManager_k__BackingField;
    if (local_38 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      pGVar6 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                         ((UnityEngine_Component_o *)__this,
                          (MethodInfo_34B0D00 *)
                          MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
      if (pGVar6 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        return;
      }
      local_38 = (pGVar6->fields)._Overlays_k__BackingField;
      if (local_38 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        return;
      }
    }
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pUVar7 = (UnityEngine_GameObject_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_0538f91a;
      pUVar7 = (pUVar3->fields).m_CurrentSelected;
    }
    (__this->fields)._opener = pUVar7;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._opener);
    iVar2 = (__this->fields)._openVersion + 1;
    (__this->fields)._openVersion = iVar2;
    (__this_00->fields).version = iVar2;
    (__this->fields)._selectedIndex = (__this->fields)._index;
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow(__this,"up",method_00);
    pMVar4 = (MethodInfo *)(__this->fields)._id;
    id = System_String__Concat_52f0320("choice-",(System_String_o *)pMVar4,(MethodInfo *)0x0);
    root = Gisketch_Aottg2UI_Actions_AottgChoiceControl__PopoverNode(__this,pMVar4);
    pMVar4 = (MethodInfo *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07542884 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542884 = '\x01';
    }
    x = (UnityEngine_Object_o *)
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                  (local_38,id,root,(UnityEngine_GameObject_o *)pMVar4,
                   TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->
                   _Mode_k__BackingField == 1,true,0.0,true,0,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
label_0538f821:
      if (Il2CppMethodInitialized_07542884 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode)
        ;
        Il2CppMethodInitialized_07542884 = '\x01';
        iVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->
                _Mode_k__BackingField;
      }
      else {
        iVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->
                _Mode_k__BackingField;
      }
      if (iVar2 == 1) {
        UVar8 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
        (__this->fields)._pointerLockPosition.fields = UVar8.fields._0_8_;
      }
      (__this->fields)._pointerSelectionLocked = iVar2 == 1;
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__WireOptions
                (__this,(UnityEngine_GameObject_o *)x,local_38,pMVar4);
      if (Il2CppMethodInitialized_07542884 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode)
        ;
        Il2CppMethodInitialized_07542884 = '\x01';
        iVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->
                _Mode_k__BackingField;
        pMVar4 = extraout_RDX_00;
      }
      else {
        iVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->
                _Mode_k__BackingField;
        pMVar4 = extraout_RDX;
      }
      if (iVar2 == 1) {
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__FocusSelectedOption
                  (__this,(UnityEngine_GameObject_o *)x,pMVar4);
        return;
      }
      return;
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      pGVar5 = UnityEngine_GameObject__AddComponent_object_
                         ((UnityEngine_GameObject_o *)x,
                          (MethodInfo_353B6A0 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoicePopoverLifetime);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
      pMVar4 = (MethodInfo *)0x0;
      System_Action___ctor
                (__this_01,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass29_0_Open_b__0,
                 (MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoicePopoverLifetime_o *)0x0) {
        (pGVar5->fields)._closed = __this_01;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields)._closed);
        goto label_0538f821;
      }
    }
  }
label_0538f91a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Cancel (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x53961f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5396204: cmp byte ptr [rip + 0x21ac940], 0
// asm:   0x539620b: je 0x5396243
// asm:   0x5396219: jmp 0x5396262

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Cancel
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  if (Il2CppMethodInitialized_07542b4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b4d = '\x01';
  }
  if (Il2CppMethodInitialized_07542b4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_07542b4b = '\x01';
    __this_00 = (__this->fields)._OverlayManager_k__BackingField;
  }
  else {
    __this_00 = (__this->fields)._OverlayManager_k__BackingField;
  }
  if ((__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) ||
     ((pGVar2 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_34B0D00 *)
                           MethodInfo_UnityEngine_Component_GetComponentInParent_GisketchUIRoot),
      pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0 &&
      (__this_00 = (pGVar2->fields)._Overlays_k__BackingField,
      __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)))) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,true,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    x = (UnityEngine_Object_o *)(__this->fields)._opener;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480
                (pUVar3,(__this->fields)._opener,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$PopoverNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__PopoverNode (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x5395570
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53956f0: mov r14, r15

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__PopoverNode
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  int iVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *method_02;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_07542b4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"-popover");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_07542b4e = '\x01';
  }
  pGVar3 = (__this->fields)._options;
  if ((pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
     (pGVar1 = (pGVar3->fields)._items,
     pGVar1 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
    children = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,
                          (uint32_t)pGVar1->max_length);
    pGVar3 = (__this->fields)._options;
    if (pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
      if (children == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        pGVar1 = (pGVar3->fields)._items;
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
          iVar2 = (int)pGVar1->max_length;
          if (0 < iVar2) {
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode(__this,0,method_00);
            ThrowNullReferenceException();
          }
label_053956a9:
          if ((__this->fields)._maxVisibleItems < iVar2) {
            pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                     SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
            pGVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode(__this,children,method_02);
            if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_05395690;
            if ((int)pGVar5->max_length == 0) {
label_0539580a:
              ThrowIndexOutOfRangeException();
            }
            pGVar5->m_Items[0] = pGVar4;
            Il2CppCodeGenWriteBarrier(pGVar5->m_Items);
            children = pGVar5;
          }
          pGVar4 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar4->fields).type = "Panel";
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).type);
            pSVar6 = System_String__Concat_52f0320
                               ((__this->fields)._id,"-popover",(MethodInfo *)0x0);
            (pGVar4->fields).id = pSVar6;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).id);
            (pGVar4->fields).style = "popover";
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).style);
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
            Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_00,(MethodInfo *)0x0);
            if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (__this_00->fields).direction = "Column";
              Il2CppCodeGenWriteBarrier(&(__this_00->fields).direction);
              (__this_00->fields).alignItems = "Stretch";
              Il2CppCodeGenWriteBarrier(&(__this_00->fields).alignItems);
              (__this_00->fields).gap = 0.0;
              (pGVar4->fields).layout = __this_00;
              Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
              (pGVar4->fields).children = children;
              Il2CppCodeGenWriteBarrier(&(pGVar4->fields).children);
              return pGVar4;
            }
          }
        }
      }
      else {
        lVar8 = 0;
        uVar7 = 0;
        method_01 = method_00;
        do {
          pGVar1 = (pGVar3->fields)._items;
          if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) break;
          iVar2 = (int)pGVar1->max_length;
          if ((long)iVar2 <= (long)uVar7) goto label_053956a9;
          pGVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode(__this,(int32_t)uVar7,method_01);
          if ((uint)children->max_length <= uVar7) goto label_0539580a;
          children->m_Items[uVar7] = pGVar4;
          Il2CppCodeGenWriteBarrier((void **)((long)children->m_Items + lVar8));
          uVar7 = uVar7 + 1;
          pGVar3 = (__this->fields)._options;
          lVar8 = lVar8 + 8;
          method_01 = extraout_RDX;
        } while (pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0);
      }
    }
  }
label_05395690:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$OptionNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, const MethodInfo* method);
// 0x5396370

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *str2;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_03;
  uint uVar5;
  uint uVar6;
  MethodInfo *method_00;
  bool value;
  System_Nullable_bool__Fields local_30 [2];
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_07542b4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"slideDown");
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"-options");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"dropdownItem");
    Il2CppMethodInitialized_07542b4f = '\x01';
  }
  pGVar2 = (__this->fields)._options;
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) goto label_053967b6;
  if (index < 0) {
label_0539645e:
    value = false;
  }
  else {
    pGVar3 = (pGVar2->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_053967b6;
    uVar1 = (uint)pGVar3->max_length;
    if ((int)uVar1 <= index) goto label_0539645e;
    uVar6 = uVar1 - 1;
    if (index < (int)(uVar1 - 1)) {
      uVar6 = index;
    }
    if (uVar1 <= uVar6) goto label_053967bb;
    if (pGVar3->m_Items[(int)uVar6] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
    goto label_053967b6;
    value = (pGVar3->m_Items[(int)uVar6]->fields).enabled != false;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Button";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    local_2c = index;
    if (Il2CppMethodInitialized_07542b59 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-option-");
      Il2CppMethodInitialized_07542b59 = '\x01';
    }
    pSVar4 = (__this->fields)._id;
    str2 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_5301f10(pSVar4,"-option-",str2,(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    pGVar2 = (__this->fields)._options;
    if (pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
      pSVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text(pGVar2,index,method_00);
      (__this_00->fields).text = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
      pGVar2 = (__this->fields)._options;
      if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
         (pGVar3 = (pGVar2->fields)._items,
         pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
        uVar6 = (uint)pGVar3->max_length;
        uVar1 = uVar6 - 1;
        if (index < (int)uVar1) {
          uVar1 = index;
        }
        uVar5 = 0;
        if (-1 < index) {
          uVar5 = uVar1;
        }
        if (uVar6 <= uVar5) {
label_053967bb:
          ThrowIndexOutOfRangeException();
        }
        if (pGVar3->m_Items[(int)uVar5] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
          (__this_00->fields).textKey = (pGVar3->m_Items[(int)uVar5]->fields).textKey;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).textKey);
          (__this_00->fields).style = "dropdownItem";
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
          local_30[0].hasValue = false;
          local_30[0].value = false;
          System_Nullable_bool____ctor
                    ((System_Nullable_bool__o *)local_30,value,
                     (MethodInfo_3CCFD20 *)MethodInfo_System_Nullable_bool_ctor);
          (__this_00->fields).enabled.fields = local_30[0];
          pGVar2 = (__this->fields)._options;
          if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
             (pGVar3 = (pGVar2->fields)._items,
             pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
            uVar6 = (uint)pGVar3->max_length;
            uVar1 = uVar6 - 1;
            if (index < (int)uVar1) {
              uVar1 = index;
            }
            uVar5 = 0;
            if (-1 < index) {
              uVar5 = uVar1;
            }
            if (uVar6 <= uVar5) goto label_053967bb;
            if (pGVar3->m_Items[(int)uVar5] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
            {
              (__this_00->fields).tooltip = (pGVar3->m_Items[(int)uVar5]->fields).tooltip;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltip);
              pGVar2 = (__this->fields)._options;
              if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
                 (pGVar3 = (pGVar2->fields)._items,
                 pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
                uVar6 = (uint)pGVar3->max_length;
                uVar1 = uVar6 - 1;
                if (index < (int)uVar1) {
                  uVar1 = index;
                }
                uVar5 = 0;
                if (-1 < index) {
                  uVar5 = uVar1;
                }
                if (uVar6 <= uVar5) goto label_053967bb;
                if (pGVar3->m_Items[(int)uVar5] !=
                    (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
                  (__this_00->fields).tooltipKey = (pGVar3->m_Items[(int)uVar5]->fields).tooltipKey;
                  Il2CppCodeGenWriteBarrier(&(__this_00->fields).tooltipKey);
                  if (value == false) {
                    __this_01 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
                  }
                  else {
                    __this_01 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)
                                           TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
                    Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor(__this_01,(MethodInfo *)0x0);
                    if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)
                    goto label_053967b6;
                    (__this_01->fields).preset = "slideDown";
                    Il2CppCodeGenWriteBarrier(&(__this_01->fields).preset);
                    pSVar4 = System_String__Concat_52f0320
                                       ((__this->fields)._id,"-options",(MethodInfo *)0x0);
                    (__this_01->fields).group = pSVar4;
                    Il2CppCodeGenWriteBarrier(&(__this_01->fields).group);
                    (__this_01->fields).duration = 0.12;
                    (__this_01->fields).stagger = 0.025;
                    (__this_01->fields).order = index;
                  }
                  (__this_00->fields).enter = __this_01;
                  Il2CppCodeGenWriteBarrier(&(__this_00->fields).enter);
                  __this_02 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)
                                         TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
                  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_02,(MethodInfo *)0x0);
                  __this_03 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_03,(MethodInfo *)0x0);
                  if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                    (__this_03->fields).value = 100.0;
                    (__this_03->fields).unit = "percent";
                    Il2CppCodeGenWriteBarrier(&(__this_03->fields).unit);
                    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                      (__this_02->fields).width = __this_03;
                      Il2CppCodeGenWriteBarrier(&(__this_02->fields).width);
                      (__this_00->fields).layout = __this_02;
                      Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
                      return __this_00;
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
label_053967b6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$ScrollNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, const MethodInfo* method);
// 0x53967c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  
  if (Il2CppMethodInitialized_07542b50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    il2cpp_codegen_initialize_runtime_metadata(&"scrollView");
    il2cpp_codegen_initialize_runtime_metadata(&"-options-scroll");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    Il2CppMethodInitialized_07542b50 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "ScrollView";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    pSVar1 = System_String__Concat_52f0320((__this->fields)._id,"-options-scroll",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    (__this_00->fields).style = "scrollView";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    pGVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar2,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = (float)(__this->fields)._maxVisibleItems * 38.0;
      (__this_01->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).unit);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar2->fields).height = __this_01;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).height);
        (__this_00->fields).layout = pGVar2;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
        pGVar2 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar2,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar2->fields).direction = "Column";
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).direction);
          (pGVar2->fields).alignItems = "Stretch";
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).alignItems);
          (pGVar2->fields).gap = 0.0;
          (__this_00->fields).contentLayout = pGVar2;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).contentLayout);
          (__this_00->fields).children = children;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).children);
          return __this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$WireOptions
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__WireOptions (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, UnityEngine_GameObject_o* content, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* overlays, const MethodInfo* method);
// 0x5395870
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5395c7a: jmp 0x5395edd

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__WireOptions
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,UnityEngine_GameObject_o *content,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *overlays,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  uint uVar3;
  uint uVar4;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar6;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_array *pGVar7;
  bool bVar8;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_0_o *__this_01;
  TMPro_TextMeshProUGUI_o *label;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar9;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o *pGVar10;
  UnityEngine_Transform_o *pUVar11;
  System_String_o *str2;
  System_String_o *pSVar12;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_2_o *__this_02;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_GameObject_o *pUVar13;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *pGVar14;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *pGVar15;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_04;
  System_Func_bool__o *__this_05;
  MethodInfo *method_00;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  MethodInfo *pMVar19;
  MethodInfo *in_R9;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o **targetAddress;
  UnityEngine_UI_Button_o *__this_06;
  int local_4c;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_0_o *local_48;
  UnityEngine_GameObject_o *local_40;
  ulong local_38;
  
  if (Il2CppMethodInitialized_07542b51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_GisketchDropdownItemFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceOptionCancel);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceOptionSelection);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_1_WireOptions_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_2_WireOptions_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_07542b51 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    (__this_01->fields).overlays = overlays;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).overlays);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      return;
    }
    pSVar5 = (__this->fields)._feedback;
    if (pSVar5 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar5->fields)._size;
      (pSVar5->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pGVar9 = (__this->fields)._options;
      if (pGVar9 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
        if (content == (UnityEngine_GameObject_o *)0x0) {
          pGVar6 = (pGVar9->fields)._items;
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
            if ((int)pGVar6->max_length < 1) {
              return;
            }
            pGVar10 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_1);
            System_Object___ctor((Il2CppObject *)pGVar10,(MethodInfo *)0x0);
            if (pGVar10 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o *)0x0) {
              (pGVar10->fields).CS___8__locals1 = __this_01;
              Il2CppCodeGenWriteBarrier(&(pGVar10->fields).CS___8__locals1);
              (pGVar10->fields).index = 0;
              ThrowNullReferenceException();
            }
          }
        }
        else {
          uVar17 = 0;
          local_48 = __this_01;
          local_40 = content;
          do {
            pGVar6 = (pGVar9->fields)._items;
            if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) break;
            iVar16 = (int)uVar17;
            if ((int)pGVar6->max_length <= iVar16) {
              return;
            }
            pGVar10 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_1);
            System_Object___ctor((Il2CppObject *)pGVar10,(MethodInfo *)0x0);
            if (pGVar10 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o *)0x0) break;
            (pGVar10->fields).CS___8__locals1 = __this_01;
            Il2CppCodeGenWriteBarrier(&(pGVar10->fields).CS___8__locals1);
            (pGVar10->fields).index = iVar16;
            pUVar11 = UnityEngine_GameObject__get_transform(content,(MethodInfo *)0x0);
            local_4c = iVar16;
            if (Il2CppMethodInitialized_07542b59 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"-option-");
              Il2CppMethodInitialized_07542b59 = '\x01';
            }
            pSVar12 = (__this->fields)._id;
            local_38 = uVar17;
            str2 = System_Int32__ToString(&local_4c,(MethodInfo *)0x0);
            pSVar12 = System_String__Concat_5301f10(pSVar12,"-option-",str2,(MethodInfo *)0x0);
            pUVar11 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep(pUVar11,pSVar12,method_00);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar8 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            __this_06 = (UnityEngine_UI_Button_o *)0x0;
            if (bVar8) {
              if (pUVar11 == (UnityEngine_Transform_o *)0x0) break;
              __this_06 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar11,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_Button);
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar8 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_06,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar8) {
              __this_02 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_2
                                    );
              System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
              if (__this_02 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_2_o *)0x0)
              break;
              targetAddress = &(__this_02->fields).CS___8__locals2;
              (__this_02->fields).CS___8__locals2 = pGVar10;
              Il2CppCodeGenWriteBarrier(targetAddress);
              pGVar10 = (__this_02->fields).CS___8__locals2;
              if ((pGVar10 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o *)0x0) ||
                 (pGVar9 = (__this->fields)._options,
                 pGVar9 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0)) break;
              uVar3 = (pGVar10->fields).index;
              if ((int)uVar3 < 0) {
label_05395c80:
                bVar8 = false;
                (__this_02->fields).enabled = false;
              }
              else {
                pGVar6 = (pGVar9->fields)._items;
                if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) break;
                uVar4 = (uint)pGVar6->max_length;
                if ((int)uVar4 <= (int)uVar3) goto label_05395c80;
                uVar18 = uVar4 - 1;
                if ((int)uVar3 < (int)(uVar4 - 1)) {
                  uVar18 = uVar3;
                }
                if (uVar4 <= uVar18) {
                  ThrowIndexOutOfRangeException();
                }
                if (pGVar6->m_Items[(int)uVar18] ==
                    (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) break;
                bVar8 = (pGVar6->m_Items[(int)uVar18]->fields).enabled != false;
                (__this_02->fields).enabled = bVar8;
              }
              if (__this_06 == (UnityEngine_UI_Button_o *)0x0) break;
              UnityEngine_UI_Selectable__set_interactable
                        ((UnityEngine_UI_Selectable_o *)__this_06,bVar8,(MethodInfo *)0x0);
              if ((__this_02->fields).enabled == false) {
                if (pUVar11 == (UnityEngine_Transform_o *)0x0) break;
              }
              else {
                __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_06->fields).m_OnClick;
                pGVar10 = *targetAddress;
                __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                UnityEngine_Events_UnityAction___ctor
                          (__this_03,(Il2CppObject *)pGVar10,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_1_WireOptions_b__0
                           ,(MethodInfo *)0x0);
                if ((((__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) ||
                     (UnityEngine_Events_UnityEvent__AddListener(__this_00,__this_03,(MethodInfo *)0x0),
                     pUVar11 == (UnityEngine_Transform_o *)0x0)) ||
                    (pUVar13 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0),
                    pUVar13 == (UnityEngine_GameObject_o *)0x0)) ||
                   (pGVar14 = UnityEngine_GameObject__AddComponent_object_
                                        (pUVar13,(MethodInfo_353B6A0 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceOptionCancel
                                        ),
                   pGVar14 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptionCancel_o *)0x0)) break;
                (pGVar14->fields)._control = __this;
                Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._control);
                pUVar13 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                if (pUVar13 == (UnityEngine_GameObject_o *)0x0) break;
                pGVar15 = UnityEngine_GameObject__AddComponent_object_
                                    (pUVar13,(MethodInfo_353B6A0 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceOptionSelection
                                    );
                if ((*targetAddress ==
                     (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o *)0x0) ||
                   (pGVar15 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *)0x0)) break;
                iVar2 = ((*targetAddress)->fields).index;
                (pGVar15->fields)._owner = __this;
                Il2CppCodeGenWriteBarrier(&(pGVar15->fields)._owner);
                (pGVar15->fields)._index = iVar2;
              }
              __this_04 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar11,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_GisketchDropdownItemFeedback
                                    );
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              pMVar19 = (MethodInfo *)0x0;
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar8) {
                if (__this_04 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
                (__this_04->fields)._disabled = (bool)((__this_02->fields).enabled ^ 1);
                Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_04,pMVar19);
                __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_bool);
                bVar8 = false;
                System_Func_bool____ctor
                          (__this_05,(Il2CppObject *)__this_02,
                           (intptr_t)
                           MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_c__DisplayClass34_2_WireOptions_b__1
                           ,(MethodInfo_4F0BCE0 *)0x0);
                (__this_04->fields)._pointerHoverAllowed = __this_05;
                Il2CppCodeGenWriteBarrier(&(__this_04->fields)._pointerHoverAllowed);
                if ((__this_02->fields).enabled != false) {
                  if (*targetAddress ==
                      (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o *)0x0) break;
                  bVar8 = ((*targetAddress)->fields).index == (__this->fields)._selectedIndex;
                }
                (__this_04->fields)._forced = bVar8;
                Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
                          (__this_04,(MethodInfo *)__this_05);
              }
              pMVar19 = MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_Add;
              pSVar5 = (__this->fields)._feedback;
              if (pSVar5 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) break;
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              pGVar7 = (pSVar5->fields)._items;
              if (pGVar7 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_array *)0x0) break;
              uVar3 = (pSVar5->fields)._size;
              if (uVar3 < (uint)pGVar7->max_length) {
                (pSVar5->fields)._size = uVar3 + 1;
                pGVar7->m_Items[(int)uVar3] = __this_04;
                Il2CppCodeGenWriteBarrier(pGVar7->m_Items + (int)uVar3);
                pGVar10 = *targetAddress;
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_04,
                           (MethodInfo_395D230 *)pMVar19->klass->rgctx_data[0xe].method);
                pGVar10 = *targetAddress;
              }
              if (pGVar10 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass34_1_o *)0x0)
              break;
              iVar2 = (pGVar10->fields).index;
              pUVar13 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
              label = UnityEngine_Component__GetComponentInChildren_object__34b09d0
                                ((UnityEngine_Component_o *)pUVar11,
                                 (MethodInfo_34B09D0 *)
                                 MethodInfo_UnityEngine_Component_GetComponentInChildren_TextMeshProUGUI);
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
                        (__this,iVar2,pUVar13,label,false,in_R9);
              content = local_40;
              __this_01 = local_48;
            }
            uVar17 = (ulong)((int)local_38 + 1);
            pGVar9 = (__this->fields)._options;
          } while (pGVar9 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SelectFromNavigation
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromNavigation (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, UnityEngine_GameObject_o* option, const MethodInfo* method);
// 0x5397350
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5397432: jmp 0x53973d4

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromNavigation
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               UnityEngine_GameObject_o *option,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_01;
  UnityEngine_Vector3_o UVar3;
  
  method_00 = (MethodInfo *)option;
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
    method_00 = extraout_RDX;
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
    method_00 = extraout_RDX_00;
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != 1) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = 1;
      pSVar2 = pGVar1->Changed;
      method_00 = extraout_RDX_02;
    }
    else {
      pGVar1->_Mode_k__BackingField = 1;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
      method_00 = extraout_RDX_01;
    }
  }
  method_01 = (MethodInfo *)(ulong)(uint)index;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this,index,method_00);
  UVar3 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  (__this->fields)._pointerSelectionLocked = true;
  (__this->fields)._pointerLockPosition.fields = UVar3.fields._0_8_;
  Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(option,12.0,method_01);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SelectFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromPointer (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x5397980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5397a6d: jmp 0x5397a2f

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromPointer
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar2;
  System_Action_o *pSVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  float fVar4;
  float fVar5;
  
  if ((__this->fields)._pointerSelectionLocked != false) {
    UVar1 = (__this->fields)._pointerLockPosition.fields;
    fVar4 = pointerPosition.fields.x - UVar1.x;
    fVar5 = pointerPosition.fields.y - UVar1.y;
    if (fVar5 * fVar5 + fVar4 * fVar4 < 4.0) {
      return;
    }
    (__this->fields)._pointerSelectionLocked = false;
  }
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
    method = extraout_RDX;
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
    method = extraout_RDX_00;
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar2->_Mode_k__BackingField != 0) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar2->_Mode_k__BackingField = 0;
      pSVar3 = pGVar2->Changed;
      method = extraout_RDX_02;
    }
    else {
      pGVar2->_Mode_k__BackingField = 0;
      pSVar3 = pGVar2->Changed;
    }
    if (pSVar3 != (System_Action_o *)0x0) {
      (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
      method = extraout_RDX_01;
    }
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this,index,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$CanUsePointerSelection
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceControl__CanUsePointerSelection (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x5397a70

bool Gisketch_Aottg2UI_Actions_AottgChoiceControl__CanUsePointerSelection
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,UnityEngine_Vector2_o pointerPosition,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  float fVar3;
  
  if ((__this->fields)._pointerSelectionLocked != false) {
    UVar1 = (__this->fields)._pointerLockPosition.fields;
    fVar2 = pointerPosition.fields.x - UVar1.x;
    fVar3 = pointerPosition.fields.y - UVar1.y;
    if (fVar3 * fVar3 + fVar2 * fVar2 < 4.0) {
      return false;
    }
    (__this->fields)._pointerSelectionLocked = false;
  }
  return true;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$LockPointerSelection
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__LockPointerSelection (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x5395860

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__LockPointerSelection
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,UnityEngine_Vector2_o pointerPosition,
               MethodInfo *method)

{
  (__this->fields)._pointerSelectionLocked = true;
  (__this->fields)._pointerLockPosition.fields = pointerPosition.fields;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetSelectedIndex
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, const MethodInfo* method);
// 0x5397440

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *pGVar4;
  uint uVar5;
  uint uVar6;
  MethodInfo *pMVar7;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar8;
  
  if (Il2CppMethodInitialized_07542b52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b52 = '\x01';
  }
  pGVar1 = (__this->fields)._options;
  if (pGVar1 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    if (index < 0) {
      return;
    }
    pGVar2 = (pGVar1->fields)._items;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
      uVar6 = (uint)pGVar2->max_length;
      if ((int)uVar6 <= index) {
        return;
      }
      uVar5 = uVar6 - 1;
      if (index < (int)(uVar6 - 1)) {
        uVar5 = index;
      }
      if (uVar6 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar2->m_Items[(int)uVar5] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
        if ((pGVar2->m_Items[(int)uVar5]->fields).enabled == false) {
          return;
        }
        (__this->fields)._selectedIndex = uVar5;
        pSVar8 = (__this->fields)._feedback;
        if (pSVar8 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
          uVar6 = 0;
          do {
            if ((pSVar8->fields)._size <= (int)uVar6) {
              return;
            }
            pGVar4 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar8,uVar6,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item
                               );
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar3) {
              pSVar8 = (__this->fields)._feedback;
              if (pSVar8 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) break;
              pMVar7 = (MethodInfo *)(ulong)uVar6;
              pGVar4 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar8,uVar6,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item
                                 );
              if (pGVar4 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
              (pGVar4->fields)._hovered = false;
              Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(pGVar4,pMVar7);
              pSVar8 = (__this->fields)._feedback;
              if (pSVar8 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) break;
              pMVar7 = (MethodInfo *)(ulong)uVar6;
              pGVar4 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar8,uVar6,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_get_Item
                                 );
              if (pGVar4 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
              (pGVar4->fields)._forced = uVar6 == (__this->fields)._selectedIndex;
              Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(pGVar4,pMVar7);
            }
            uVar6 = uVar6 + 1;
            pSVar8 = (__this->fields)._feedback;
          } while (pSVar8 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SelectFromClick
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromClick (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* overlays, const MethodInfo* method);
// 0x5397ac0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromClick
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *overlays,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField == 1) {
    index = (__this->fields)._selectedIndex;
  }
  else if (__this == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select(__this,index,overlays,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$FocusSelectedOption
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__FocusSelectedOption (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, UnityEngine_GameObject_o* content, const MethodInfo* method);
// 0x5395f50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53961ae: jmp 0x53961bf

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__FocusSelectedOption
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,UnityEngine_GameObject_o *content,
               MethodInfo *method)

{
  uint uVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  UnityEngine_Transform_o *pUVar8;
  System_String_o *str2;
  System_String_o *pSVar9;
  UnityEngine_EventSystems_EventSystem_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  uint uVar12;
  MethodInfo *method_00;
  int iVar13;
  MethodInfo *method_01;
  uint uVar14;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_07542b53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b53 = '\x01';
  }
  pGVar3 = (__this->fields)._options;
  if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) goto label_053961e5;
  uVar1 = (__this->fields)._selectedIndex;
  pGVar4 = (pGVar3->fields)._items;
  if ((int)uVar1 < 0) {
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_053961e5;
label_05396165:
    uVar5 = (uint)pGVar4->max_length;
    uVar14 = uVar5 - 1;
    if (0 < (int)uVar5) {
      iVar13 = 1;
      do {
        uVar12 = (int)(uVar1 + uVar5 + iVar13) % (int)uVar5;
        if (-1 < (int)uVar12) {
          uVar7 = uVar12;
          if ((int)uVar14 <= (int)uVar12) {
            uVar7 = uVar14;
          }
          if (uVar5 <= uVar7) goto label_053961ea;
          if (pGVar4->m_Items[(int)uVar7] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
          goto label_053961e5;
          if ((pGVar4->m_Items[(int)uVar7]->fields).enabled != false) goto label_053961bf;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 <= (int)uVar5);
    }
    if ((int)uVar1 < (int)uVar14) {
      uVar14 = uVar1;
    }
    uVar12 = 0;
    if (-1 < (int)uVar1) {
      uVar12 = uVar14;
    }
label_053961bf:
    (__this->fields)._selectedIndex = uVar12;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_053961e5;
    uVar5 = (uint)pGVar4->max_length;
    if ((int)uVar5 <= (int)uVar1) goto label_05396165;
    uVar14 = uVar5 - 1;
    if ((int)uVar1 < (int)(uVar5 - 1)) {
      uVar14 = uVar1;
    }
    if (uVar5 <= uVar14) {
label_053961ea:
      ThrowIndexOutOfRangeException();
    }
    if (pGVar4->m_Items[(int)uVar14] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
    goto label_053961e5;
    if ((pGVar4->m_Items[(int)uVar14]->fields).enabled == false) goto label_05396165;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar8 = (UnityEngine_Transform_o *)0x0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (content == (UnityEngine_GameObject_o *)0x0) goto label_053961e5;
    pUVar8 = UnityEngine_GameObject__get_transform(content,(MethodInfo *)0x0);
  }
  local_2c = (__this->fields)._selectedIndex;
  if (Il2CppMethodInitialized_07542b59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-option-");
    Il2CppMethodInitialized_07542b59 = '\x01';
  }
  pSVar9 = (__this->fields)._id;
  str2 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
  pSVar9 = System_String__Concat_5301f10(pSVar9,"-option-",str2,(MethodInfo *)0x0);
  pUVar8 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep(pUVar8,pSVar9,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar10 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar10 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if ((pUVar8 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0)
         , pUVar10 == (UnityEngine_EventSystems_EventSystem_o *)0x0)) {
label_053961e5:
        ThrowNullReferenceException();
      }
      UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480(pUVar10,pUVar11,(MethodInfo *)0x0);
      method_01 = (MethodInfo *)0x0;
      pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar11,12.0,method_01);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Select
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* overlays, const MethodInfo* method);
// 0x5397b20

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *overlays,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  UnityEngine_Object_o *x;
  bool bVar4;
  UnityEngine_EventSystems_EventSystem_o *pUVar5;
  uint uVar6;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542b54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b54 = '\x01';
  }
  pGVar2 = (__this->fields)._options;
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_05397c8e:
    ThrowNullReferenceException();
  }
  if (-1 < index) {
    pGVar3 = (pGVar2->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_05397c8e;
    uVar1 = (uint)pGVar3->max_length;
    if (index < (int)uVar1) {
      uVar6 = uVar1 - 1;
      if (index < (int)(uVar1 - 1)) {
        uVar6 = index;
      }
      if (uVar1 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar3->m_Items[(int)uVar6] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
      goto label_05397c8e;
      if ((pGVar3->m_Items[(int)uVar6]->fields).enabled != false) {
        bVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex
                          (__this,index,0,(MethodInfo *)(long)(int)uVar6);
        if (!bVar4) {
          Gisketch_Aottg2UI_Actions_AottgChoiceControl__NotifyChanged(__this,0,method_00);
        }
        if (overlays != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(overlays,true,(MethodInfo *)0x0);
        }
        if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
        }
        pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          x = (UnityEngine_Object_o *)(__this->fields)._opener;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
            }
            pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
              UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480
                        (pUVar5,(__this->fields)._opener,(MethodInfo *)0x0);
              return;
            }
            goto label_05397c8e;
          }
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetIndex
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, int32_t source, const MethodInfo* method);
// 0x5395130
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5395189: xor eax, eax

bool Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,int32_t source,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  uint uVar4;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  uint uVar5;
  
  pGVar2 = (__this->fields)._options;
  if ((pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
     (pGVar3 = (pGVar2->fields)._items,
     pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
label_053951ad:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pGVar3->max_length;
  uVar5 = uVar1 - 1;
  uVar4 = uVar5;
  if (index < (int)uVar5) {
    uVar4 = index;
  }
  if (index < 0) {
    uVar4 = 0;
  }
  if ((-1 < (int)uVar4) && ((int)uVar4 < (int)uVar1)) {
    if ((int)uVar4 < (int)uVar5) {
      uVar5 = uVar4;
    }
    if (uVar1 <= uVar5) {
      ThrowIndexOutOfRangeException();
    }
    if (pGVar3->m_Items[(int)uVar5] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
    goto label_053951ad;
    if (((pGVar3->m_Items[(int)uVar5]->fields).enabled != false) && (uVar4 != (__this->fields)._index)) {
      (__this->fields)._index = uVar4;
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                (__this,(MethodInfo *)CONCAT44(in_register_00000034,index));
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__NotifyChanged(__this,source,method_00);
      return true;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5394e70

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf
                  (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,System_String_o *value,
                  MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar5;
  uint uVar6;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields *pGVar7;
  System_String_o *a;
  uint uVar8;
  
  pGVar5 = (__this->fields)._options;
  if (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    uVar8 = 0;
    do {
      pGVar2 = (pGVar5->fields)._items;
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) break;
      uVar1 = (uint)pGVar2->max_length;
      if ((int)uVar1 <= (int)uVar8) {
        return 0;
      }
      uVar6 = uVar1 - 1;
      if ((int)uVar8 < (int)(uVar1 - 1)) {
        uVar6 = uVar8;
      }
      if (uVar1 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pGVar3 = pGVar2->m_Items[(int)uVar6];
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) break;
      bVar4 = System_String__IsNullOrEmpty((pGVar3->fields).value,(MethodInfo *)0x0);
      if (bVar4) {
        a = (pGVar3->fields).text;
        if (a == (System_String_o *)0x0) {
          pGVar7 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields **)(g_data_07556758 + 0xb8);
          goto label_05394f04;
        }
      }
      else {
        pGVar7 = &pGVar3->fields;
label_05394f04:
        a = pGVar7->value;
      }
      bVar4 = System_String__op_Equality(a,value,(MethodInfo *)0x0);
      if (bVar4) {
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      pGVar5 = (__this->fields)._options;
    } while (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$RefreshLabel
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x5394f40

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int32_t index;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar7;
  TMPro_TextMeshProUGUI_o *pTVar8;
  bool bVar9;
  System_String_o *pSVar10;
  UnityEngine_GameObject_o *root;
  uint uVar11;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields *pGVar12;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07542b55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b55 = '\x01';
  }
  pGVar4 = (__this->fields)._node;
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar5 = (__this->fields)._options;
    if ((pGVar5 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
       (pGVar6 = (pGVar5->fields)._items,
       pGVar6 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) goto label_05395093;
    uVar2 = (__this->fields)._index;
    uVar3 = (uint)pGVar6->max_length;
    uVar1 = uVar3 - 1;
    if ((int)uVar2 < (int)uVar1) {
      uVar1 = uVar2;
    }
    uVar11 = 0;
    if (-1 < (int)uVar2) {
      uVar11 = uVar1;
    }
    if (uVar3 <= uVar11) {
      ThrowIndexOutOfRangeException();
    }
    pGVar7 = pGVar6->m_Items[(int)uVar11];
    if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_05395093;
    bVar9 = System_String__IsNullOrEmpty((pGVar7->fields).value,(MethodInfo *)0x0);
    if (bVar9) {
      pSVar10 = (pGVar7->fields).text;
      if (pSVar10 == (System_String_o *)0x0) {
        pGVar12 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields **)(g_data_07556758 + 0xb8);
        goto label_05394fed;
      }
    }
    else {
      pGVar12 = &pGVar7->fields;
label_05394fed:
      pSVar10 = pGVar12->value;
    }
    (pGVar4->fields).value = pSVar10;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).value);
  }
  pTVar8 = (__this->fields)._label;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar9) {
    return;
  }
  pGVar5 = (__this->fields)._options;
  if (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    pTVar8 = (__this->fields)._label;
    pSVar10 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text(pGVar5,(__this->fields)._index,method_00);
    if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
      (*(pTVar8->klass->vtable)._66_set_text.methodPtr)
                (pTVar8,pSVar10,(pTVar8->klass->vtable)._66_set_text.method);
      pTVar8 = (__this->fields)._label;
      if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
        index = (__this->fields)._index;
        root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar8,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
                  (__this,index,root,(__this->fields)._label,true,in_R9);
        return;
      }
    }
  }
label_05395093:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$RenderOption
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, UnityEngine_GameObject_o* root, TMPro_TextMeshProUGUI_o* label, bool closedValue, const MethodInfo* method);
// 0x5397030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5397291: jmp 0x53970c8

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               UnityEngine_GameObject_o *root,TMPro_TextMeshProUGUI_o *label,bool closedValue,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *key;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar5;
  bool bVar6;
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context;
  System_String_o *pSVar7;
  uint uVar8;
  uint uVar9;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields *pGVar10;
  
  if (Il2CppMethodInitialized_07542b56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b56 = '\x01';
  }
  pGVar2 = (__this->fields)._node;
  if (((pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
      (bVar6 = System_String__IsNullOrEmpty((pGVar2->fields).choiceOptionRenderer,(MethodInfo *)0x0), bVar6))
     || ((__this->fields)._options == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0)) {
    return;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  if (!closedValue) {
    pGVar3 = (__this->fields)._options;
    if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) goto label_0539733c;
    if (index < 0) {
      return;
    }
    pGVar4 = (pGVar3->fields)._items;
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_0539733c;
    uVar1 = (uint)pGVar4->max_length;
    if ((int)uVar1 <= index) {
      return;
    }
    uVar9 = uVar1 - 1;
    if (index < (int)(uVar1 - 1)) {
      uVar9 = index;
    }
    if (uVar1 <= uVar9) goto label_05397341;
    if (pGVar4->m_Items[(int)uVar9] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
    goto label_0539733c;
    if ((pGVar4->m_Items[(int)uVar9]->fields).enabled == false) {
      return;
    }
  }
  pGVar2 = (__this->fields)._node;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0539733c;
  key = (pGVar2->fields).choiceOptionRenderer;
  context = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext);
  System_Object___ctor((Il2CppObject *)context,(MethodInfo *)0x0);
  if (context == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0) goto label_0539733c;
  (context->fields).Root = root;
  Il2CppCodeGenWriteBarrier(&(context->fields).Root);
  (context->fields).Label = label;
  Il2CppCodeGenWriteBarrier(&(context->fields).Label);
  pGVar3 = (__this->fields)._options;
  if ((pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
     (pGVar4 = (pGVar3->fields)._items,
     pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) goto label_0539733c;
  uVar9 = (uint)pGVar4->max_length;
  uVar1 = uVar9 - 1;
  if (index < (int)uVar1) {
    uVar1 = index;
  }
  uVar8 = 0;
  if (-1 < index) {
    uVar8 = uVar1;
  }
  if (uVar9 <= uVar8) goto label_05397341;
  (context->fields).Option = pGVar4->m_Items[(int)uVar8];
  Il2CppCodeGenWriteBarrier(&(context->fields).Option);
  pGVar3 = (__this->fields)._options;
  if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) goto label_0539733c;
  pSVar7 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text(pGVar3,index,method_00);
  (context->fields).Text = pSVar7;
  Il2CppCodeGenWriteBarrier(&(context->fields).Text);
  pGVar3 = (__this->fields)._options;
  if ((pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
     (pGVar4 = (pGVar3->fields)._items,
     pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) goto label_0539733c;
  uVar9 = (uint)pGVar4->max_length;
  uVar1 = uVar9 - 1;
  if (index < (int)uVar1) {
    uVar1 = index;
  }
  uVar8 = 0;
  if (-1 < index) {
    uVar8 = uVar1;
  }
  if (uVar9 <= uVar8) goto label_05397341;
  pGVar5 = pGVar4->m_Items[(int)uVar8];
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_0539733c;
  bVar6 = System_String__IsNullOrEmpty((pGVar5->fields).value,(MethodInfo *)0x0);
  if (bVar6) {
    pSVar7 = (pGVar5->fields).text;
    if (pSVar7 == (System_String_o *)0x0) {
      pGVar10 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields **)(g_data_07556758 + 0xb8);
      goto label_0539729a;
    }
  }
  else {
    pGVar10 = &pGVar5->fields;
label_0539729a:
    pSVar7 = pGVar10->value;
  }
  (context->fields).Value = pSVar7;
  Il2CppCodeGenWriteBarrier(&(context->fields).Value);
  (context->fields).Index = index;
  pGVar3 = (__this->fields)._options;
  if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_0539733c:
    ThrowNullReferenceException();
  }
  if (-1 < index) {
    pGVar4 = (pGVar3->fields)._items;
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_0539733c;
    uVar1 = (uint)pGVar4->max_length;
    if (index < (int)uVar1) {
      uVar9 = uVar1 - 1;
      if (index < (int)(uVar1 - 1)) {
        uVar9 = index;
      }
      method_01 = (MethodInfo *)(ulong)uVar9;
      if (uVar1 <= uVar9) {
label_05397341:
        ThrowIndexOutOfRangeException();
      }
      if (pGVar4->m_Items[(int)uVar9] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
      goto label_0539733c;
      bVar6 = (pGVar4->m_Items[(int)uVar9]->fields).enabled;
      goto label_053972f6;
    }
  }
  bVar6 = false;
  method_01 = extraout_RDX;
label_053972f6:
  (context->fields).Enabled = bVar6;
  (context->fields).Selected = (__this->fields)._index == index;
  (context->fields).ClosedValue = closedValue;
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer);
    method_01 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__TryRender(key,context,method_01);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$NotifyChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__NotifyChanged (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t source, const MethodInfo* method);
// 0x5397ca0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__NotifyChanged
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t source,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Il2CppObject *obj;
  System_String_o *elementId;
  System_String_o *actionId;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  bool bVar4;
  UnityEngine_GameObject_o *gameObject;
  VirtualInvokeData *pVVar5;
  ulong uVar6;
  long lVar7;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_68;
  System_String_o *local_48;
  UnityEngine_GameObject_o *pUStack_40;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_38;
  int32_t iStack_30;
  undefined4 uStack_2c;
  
  if (Il2CppMethodInitialized_07542b57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    Il2CppMethodInitialized_07542b57 = '\x01';
  }
  pGVar1 = (__this->fields)._node;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar4 = System_String__IsNullOrEmpty((pGVar1->fields).action,(MethodInfo *)0x0);
    if ((!bVar4) && (obj = (Il2CppObject *)(__this->fields)._actions, obj != (Il2CppObject *)0x0)) {
      pGVar1 = (__this->fields)._node;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        ThrowNullReferenceException();
      }
      elementId = (pGVar1->fields).id;
      actionId = (pGVar1->fields).action;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      local_68.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      local_68.fields.InputSource = 0;
      local_68.fields._28_4_ = 0;
      local_68.fields.ElementId = (System_String_o *)0x0;
      local_68.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_52ab380
                (&local_68,elementId,gameObject,(__this->fields)._node,source,(MethodInfo *)0x0);
      local_38 = local_68.fields.Node;
      iStack_30 = local_68.fields.InputSource;
      uStack_2c = local_68.fields._28_4_;
      local_48 = local_68.fields.ElementId;
      pUStack_40 = local_68.fields.GameObject;
      pIVar2 = obj->klass;
      uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar6 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar7 = 0;
        do {
          if (*(Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c **)((long)&pIVar3->interfaceType + lVar7)
              == TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
            pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar7);
            goto label_05397dad;
          }
          lVar7 = lVar7 + 0x10;
        } while (uVar6 * 0x10 != lVar7);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,0);
label_05397dad:
      context.fields.GameObject = pUStack_40;
      context.fields.ElementId = local_48;
      context.fields.Node = local_38;
      context.fields.InputSource = iStack_30;
      context.fields._28_4_ = uStack_2c;
      (*pVVar5->methodPtr)(obj,actionId,context,pVVar5->method);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetArrow
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, System_String_o* icon, const MethodInfo* method);
// 0x53953e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5395512: mov rbx, rax

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,System_String_o *icon,
               MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *value;
  
  if (Il2CppMethodInitialized_07542b58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Button Icon");
    Il2CppMethodInitialized_07542b58 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._arrow;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._arrow;
    if ((pUVar2 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_05395566;
    pUVar4 = UnityEngine_Transform__Find(pUVar4,"AoTTG Button Icon",(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05395566;
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar4,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  }
  else {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._arrow;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    __this_00 = (UnityEngine_UI_Image_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar2 = (__this->fields)._arrow;
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05395566;
      __this_00 = UnityEngine_GameObject__GetComponentInChildren_object_
                            (pUVar2,(MethodInfo_353B8D0 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Image);
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  value = Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load(icon,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_UI_Image__set_sprite(__this_00,value,(MethodInfo *)0x0);
    return;
  }
label_05395566:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$OptionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionId (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, const MethodInfo* method);
// 0x5396a10

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionId
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,MethodInfo *method)

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = index;
  if (Il2CppMethodInitialized_07542b59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-option-");
    Il2CppMethodInitialized_07542b59 = '\x01';
  }
  pSVar1 = (__this->fields)._id;
  str2 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(pSVar1,"-option-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$FindDeep
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x5396c70
// eh: try 0x5396daf..0x5396ee1 -> pad 0x5396ef4 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5396f10..0x5396f15 -> pad 0x5396fb5 cleanup
// eh: try 0x5396fb8..0x5396fc2 -> pad 0x5396fca catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5396d9d: nop dword ptr [rax]
// asm:   0x5396ecd: jmp 0x5396f17
// asm:   0x5396ee6: jmp 0x5396ef4
// asm:   0x5396ee8: jmp 0x5396ef4
// asm:   0x5396eea: jmp 0x5396ef4
// asm:   0x5396eec: jmp 0x5396ef4
// asm:   0x5396eee: jmp 0x5396ef4
// asm:   0x5396ef0: jmp 0x5396ef4
// asm:   0x5396ef2: jmp 0x5396ef4
// asm:   0x5396ef4: mov rbx, rax
// asm:   0x5396ef7: cmp edx, 1
// asm:   0x5396efa: jne 0x5396fb8
// asm:   0x5396f00: mov rdi, rbx
// asm:   0x5396f03: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5396f08: mov r14, qword ptr [rax]
// asm:   0x5396f0b: mov qword ptr [rsp + 0x10], r14
// asm:   0x5396f10: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5396f96: test r14, r14
// asm:   0x5396f99: jne 0x5396fad
// asm:   0x5396fad: mov rdi, r14
// asm:   0x5396fb0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5396fb5: mov rbx, rax
// asm:   0x5396fb8: lea rdi, [rsp + 0x10]
// asm:   0x5396fbd: call 0x2d4bd10  ; il2cpp_runtime_helper_02d4bd10()
// asm:   0x5396fc2: mov rdi, rbx
// asm:   0x5396fc5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5396fca: mov rdi, rax
// asm:   0x5396fcd: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_String_o *a;
  VirtualInvokeData *pVVar5;
  UnityEngine_Transform_o *pUVar6;
  Il2CppObject *pIVar7;
  ulong uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  long lVar9;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_07542b5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_07542b5a = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Transform_o *)0x0;
  if (!bVar4) {
    if (root == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar4 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
    if (bVar4) {
      pUVar6 = root;
    }
    else {
      local_58 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
      local_40 = (undefined1 *)&local_58;
      local_48 = 0;
      local_38 = &local_50;
      do {
        pIVar7 = local_58;
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_58->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_05396dd3;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05396dd3:
        bVar4 = (*pVVar5->methodPtr)(pIVar7,pVVar5->method);
        pIVar7 = local_58;
        if (!bVar4) {
          pUVar6 = (UnityEngine_Transform_o *)0x0;
          break;
        }
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar2 = local_58->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar5 = pIVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar9) + 1);
              goto label_05396e67;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05396e67:
        pUVar6 = (UnityEngine_Transform_o *)(*pVVar5->methodPtr)(pIVar7,pVVar5->method);
        method_00 = extraout_RDX;
        if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
          bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
          method_00 = (MethodInfo *)(ulong)bVar1;
          if (((pUVar6->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar6->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] !=
              (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar6);
          }
        }
        pUVar6 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep(pUVar6,name,method_00);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar4);
      pIVar7 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar7 != (Il2CppObject *)0x0) {
        pIVar2 = pIVar7->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        local_50 = pIVar7;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_IDisposable_c **)((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_IDisposable) {
              pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_05396f8d;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7,(Il2CppClass *)TypeInfo_System_IDisposable,0)
        ;
label_05396f8d:
        (*pVVar5->methodPtr)(pIVar7,pVVar5->method);
      }
    }
  }
  return pUVar6;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x5397ec0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_00;
  
  if (Il2CppMethodInitialized_07542b5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback);
    Il2CppMethodInitialized_07542b5b = '\x01';
  }
  (__this->fields)._maxVisibleItems = 8;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_GisketchDropdownItemFeedback_ctor);
  (__this->fields)._feedback = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._feedback);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



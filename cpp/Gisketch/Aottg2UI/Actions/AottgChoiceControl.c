// Type: Gisketch.Aottg2UI.Actions.AottgChoiceControl
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceControl.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass21_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x3b1e8a0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl_<>c__DisplayClass21_0___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass21_0$$<Open>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0___Open_b__0 (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x3b215b0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl_<>c__DisplayClass21_0__<Open>b__0
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05701578 == '\0') {
    il2cpp_init_method_metadata(&"down");
    DAT_05701578 = '\x01';
    in_RDX = extraout_RDX;
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    if ((__this->fields).version == (__this_00->fields)._openVersion) {
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow(__this_00,"down",in_RDX);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x3b200e0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl_<>c__DisplayClass26_0___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass26_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o* __this, const MethodInfo* method);
// 0x3b200f0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl_<>c__DisplayClass26_1___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass26_1$$<WireOptions>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1___WireOptions_b__0 (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o* __this, const MethodInfo* method);
// 0x3b21600

void Gisketch_Aottg2UI_Actions_AottgChoiceControl_<>c__DisplayClass26_1__<WireOptions>b__0
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o *pGVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  MethodInfo *in_RCX;
  int32_t index;
  
  pGVar1 = (__this->fields).CS___8__locals1;
  if ((pGVar1 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o *)0x0) &&
     (__this_00 = (pGVar1->fields).__4__this,
     __this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0)) {
    root = (pGVar1->fields).root;
    index = (__this->fields).index;
    if (DAT_0570136d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_0570136d = '\x01';
    }
    if (*(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1) {
      index = (__this_00->fields)._selectedIndex;
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select(__this_00,index,root,in_RCX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass26_2$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2_o* __this, const MethodInfo* method);
// 0x3b20510

void Gisketch_Aottg2UI_Actions_AottgChoiceControl_<>c__DisplayClass26_2___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass26_2$$<WireOptions>b__1
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2___WireOptions_b__1 (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2_o* __this, const MethodInfo* method);
// 0x3b21670

bool_conflict
Gisketch_Aottg2UI_Actions_AottgChoiceControl_<>c__DisplayClass26_2__<WireOptions>b__1
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2_o *__this,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o *pGVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o *pGVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar4;
  undefined8 extraout_RAX;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  
  if ((char)(__this->fields).enabled == '\0') {
    return 0;
  }
  pGVar2 = (__this->fields).CS___8__locals2;
  if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o *)0x0) &&
     (pGVar3 = (pGVar2->fields).CS___8__locals1,
     pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o *)0x0)) {
    pGVar4 = (pGVar3->fields).__4__this;
    UVar7 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      if ((char)(pGVar4->fields)._pointerSelectionLocked != '\0') {
        UVar1 = (pGVar4->fields)._pointerLockPosition.fields;
        fVar5 = UVar7.fields.x - UVar1.x;
        fVar6 = UVar7.fields.y - UVar1.y;
        if (fVar6 * fVar6 + fVar5 * fVar5 < 4.0) {
          return 0;
        }
        *(undefined1 *)&(pGVar4->fields)._pointerSelectionLocked = 0;
      }
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* value, System_String_array* options, TMPro_TextMeshProUGUI_o* label, int32_t maxVisibleItems, UnityEngine_GameObject_o* arrow, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, const MethodInfo* method);
// 0x3b1e060

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *value,
               System_String_array *options,TMPro_TextMeshProUGUI_o *label,int32_t maxVisibleItems,
               UnityEngine_GameObject_o *arrow,
               Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,
               Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar4;
  MethodInfo *method_00;
  TMPro_TextMeshProUGUI_o *method_01;
  
  (__this->fields)._node = node;
  method_01 = label;
  il2cpp_runtime_glue(&(__this->fields)._node);
  (__this->fields)._actions = actions;
  il2cpp_runtime_glue(&(__this->fields)._actions);
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar3 = (node->fields).id;
      goto LAB_03b1e0f4;
    }
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
LAB_03b1e0f4:
  (__this->fields)._id = pSVar3;
  il2cpp_runtime_glue(&(__this->fields)._id);
  pGVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Create
                     (node,value,options,localizer,(MethodInfo *)method_01);
  (__this->fields)._options = pGVar4;
  il2cpp_runtime_glue(&(__this->fields)._options,pGVar4);
  iVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf(__this,value,method_00);
  (__this->fields)._index = iVar2;
  (__this->fields)._label = label;
  il2cpp_runtime_glue(&(__this->fields)._label,label);
  iVar2 = 8;
  if (0 < maxVisibleItems) {
    iVar2 = maxVisibleItems;
  }
  (__this->fields)._maxVisibleItems = iVar2;
  (__this->fields)._arrow = arrow;
  il2cpp_runtime_glue(&(__this->fields)._arrow);
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel(__this,(MethodInfo *)arrow);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Previous
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Previous (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t source, const MethodInfo* method);
// 0x3b19d50

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Previous
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t source,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  uint uVar4;
  MethodInfo *method_00;
  uint index;
  int iVar5;
  int iVar6;
  uint index_00;
  uint uVar7;
  
  pGVar2 = (__this->fields)._options;
  if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
     (pGVar3 = (pGVar2->fields)._items,
     pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
    index_00 = (__this->fields)._index;
    uVar1 = (uint)pGVar3->max_length;
    method_00 = (MethodInfo *)(ulong)uVar1;
    uVar7 = uVar1 - 1;
    if (0 < (int)uVar1) {
      iVar6 = index_00 + uVar1;
      iVar5 = 1;
      do {
        iVar6 = iVar6 + -1;
        index = iVar6 % (int)uVar1;
        if (-1 < (int)index) {
          uVar4 = uVar7;
          if ((int)index < (int)uVar7) {
            uVar4 = index;
          }
          if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pGVar3->m_Items[(int)uVar4] ==
              (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b19df5;
          if ((char)(pGVar3->m_Items[(int)uVar4]->fields).enabled != '\0') {
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,index,source,method_00);
            return;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= (int)uVar1);
    }
    if (-1 < (int)index_00) {
      if ((int)uVar7 <= (int)index_00) {
        index_00 = uVar7;
      }
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,index_00,source,method_00);
      return;
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,0,source,method_00);
    return;
  }
LAB_03b19df5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Next
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t source, const MethodInfo* method);
// 0x3b19e20

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t source,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  uint uVar4;
  MethodInfo *method_00;
  uint index;
  int iVar5;
  uint uVar6;
  uint index_00;
  
  pGVar2 = (__this->fields)._options;
  if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
     (pGVar3 = (pGVar2->fields)._items,
     pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
    index_00 = (__this->fields)._index;
    uVar1 = (uint)pGVar3->max_length;
    method_00 = (MethodInfo *)(ulong)uVar1;
    uVar6 = uVar1 - 1;
    if (0 < (int)uVar1) {
      iVar5 = 1;
      do {
        index = (int)(index_00 + uVar1 + iVar5) % (int)uVar1;
        if (-1 < (int)index) {
          uVar4 = uVar6;
          if ((int)index < (int)uVar6) {
            uVar4 = index;
          }
          if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if (pGVar3->m_Items[(int)uVar4] ==
              (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b19ec2;
          if ((char)(pGVar3->m_Items[(int)uVar4]->fields).enabled != '\0') {
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,index,source,method_00);
            return;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= (int)uVar1);
    }
    if (-1 < (int)index_00) {
      if ((int)uVar6 <= (int)index_00) {
        index_00 = uVar6;
      }
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,index_00,source,method_00);
      return;
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,0,source,method_00);
    return;
  }
LAB_03b19ec2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetValueWithoutNotify
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3b1e790

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
LAB_03b1e7ea:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (-1 < (int)uVar5) {
      pGVar3 = (pGVar2->fields)._items;
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
      goto LAB_03b1e7ea;
      uVar1 = (uint)pGVar3->max_length;
      if ((int)uVar5 < (int)uVar1) {
        uVar4 = uVar1 - 1;
        if ((int)uVar5 < (int)(uVar1 - 1)) {
          uVar4 = uVar5;
        }
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pGVar3->m_Items[(int)uVar4] ==
            (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b1e7ea;
        if ((char)(pGVar3->m_Items[(int)uVar4]->fields).enabled != '\0') {
          (__this->fields)._index = uVar5;
          Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                    (__this,(MethodInfo *)(ulong)uVar4);
          return;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$get_CanStep
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b1df70

bool_conflict
Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  bool_conflict bVar4;
  int iVar5;
  int iVar6;
  
  pGVar2 = (__this->fields)._options;
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    return 0;
  }
  pGVar3 = (pGVar2->fields)._items;
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    iVar1 = (int)pGVar3->max_length;
    iVar5 = 0;
    bVar4 = 0;
    if (0 < iVar1) {
      iVar6 = 0;
      do {
        if (pGVar3->m_Items[iVar5] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0
           ) goto LAB_03b1dfb6;
        iVar6 = iVar6 + (uint)(byte)(pGVar3->m_Items[iVar5]->fields).enabled;
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
      bVar4 = CONCAT31((int3)((uint)iVar5 >> 8),1 < iVar6);
    }
    return bVar4;
  }
LAB_03b1dfb6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Open
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Open (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b198f0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Open
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  UnityEngine_EventSystems_EventSystem_o *pUVar4;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root_00;
  MethodInfo *pMVar5;
  UnityEngine_Object_o *x;
  Il2CppClass *pIVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UnityEngine_GameObject_o *pUVar7;
  bool bVar8;
  UnityEngine_Vector3_o UVar9;
  
  if (DAT_05701568 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&MethodInfo_AottgChoicePopoverLifetime_AddComponent_AottgCho);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Void__Open_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    il2cpp_init_method_metadata(&"up");
    il2cpp_init_method_metadata(&"choice-");
    DAT_05701568 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[1].monitor = __this;
    il2cpp_runtime_glue(&pIVar3[1].monitor,__this);
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
           UnityEngine_Component__GetComponentInParent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return;
    }
    if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      if ((root->fields)._Theme_k__BackingField == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
      {
        return;
      }
      if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar7 = (UnityEngine_GameObject_o *)0x0;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto LAB_03b19c9c;
        pUVar7 = (pUVar4->fields).m_CurrentSelected;
      }
      if (__this != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
        (__this->fields)._opener = pUVar7;
        il2cpp_runtime_glue(&(__this->fields)._opener,pUVar7);
        iVar2 = (__this->fields)._openVersion + 1;
        (__this->fields)._openVersion = iVar2;
        *(int *)&pIVar3[1].klass = iVar2;
        (__this->fields)._selectedIndex = (__this->fields)._index;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow(__this,"up",method_00);
        __this_00 = (root->fields)._Theme_k__BackingField;
        pMVar5 = (MethodInfo *)(__this->fields)._id;
        id = System_String__Concat("choice-",(System_String_o *)pMVar5,(MethodInfo *)0x0);
        root_00 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__PopoverNode(__this,pMVar5);
        pMVar5 = (MethodInfo *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (DAT_0570136d == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
          DAT_0570136d = '\x01';
        }
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          x = (UnityEngine_Object_o *)
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,id,root_00
                         ,(UnityEngine_GameObject_o *)pMVar5,
                         (uint)(*(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1),1,0.0,1,
                         (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar1 == '\0') {
LAB_03b19be0:
            if (DAT_0570136d == '\0') {
              il2cpp_init_method_metadata();
              DAT_0570136d = '\x01';
            }
            bVar8 = *(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1;
            if (bVar8) {
              UVar9 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
              (__this->fields)._pointerLockPosition.fields = UVar9.fields._0_8_;
            }
            *(bool *)&(__this->fields)._pointerSelectionLocked = bVar8;
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__WireOptions
                      (__this,(UnityEngine_GameObject_o *)x,root,pMVar5);
            if (DAT_0570136d == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
              DAT_0570136d = '\x01';
              iVar2 = *(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18);
              pMVar5 = extraout_RDX_00;
            }
            else {
              iVar2 = *(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18);
              pMVar5 = extraout_RDX;
            }
            if (iVar2 != 1) {
              return;
            }
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__FocusSelectedOption
                      (__this,(UnityEngine_GameObject_o *)x,pMVar5);
            return;
          }
          if (x != (UnityEngine_Object_o *)0x0) {
            pIVar3 = UnityEngine_GameObject__AddComponent<object>
                               ((UnityEngine_GameObject_o *)x,MethodInfo_AottgChoicePopoverLifetime_AddComponent_AottgCho);
            pIVar6 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_Action);
            pMVar5 = (MethodInfo *)0x0;
            System_Action___ctor();
            if (pIVar3 != (Il2CppObject *)0x0) {
              pIVar3[2].klass = pIVar6;
              il2cpp_runtime_glue(pIVar3 + 2,pIVar6);
              goto LAB_03b19be0;
            }
          }
        }
      }
    }
  }
LAB_03b19c9c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Cancel (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b1f690

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Cancel
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  
  if (DAT_05701569 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701569 = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)
           UnityEngine_Component__GetComponentInParent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRo);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (pUVar2 == (UnityEngine_Object_o *)0x0) goto LAB_03b1f7d9;
    if (pUVar2[7].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                (pUVar2[7].monitor,1,(MethodInfo *)0x0);
    }
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._opener;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
        UnityEngine_EventSystems_EventSystem__SetSelectedGameObject
                  (pUVar3,(__this->fields)._opener,(MethodInfo *)0x0);
        return;
      }
LAB_03b1f7d9:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$PopoverNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__PopoverNode (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b1ea40

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__PopoverNode
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  int iVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  ulong uVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **ppGVar8;
  undefined1 auVar9 [16];
  
  if (DAT_0570156a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"-popover");
    il2cpp_init_method_metadata(&"Panel");
    il2cpp_init_method_metadata(&"popover");
    DAT_0570156a = '\x01';
  }
  pGVar3 = (__this->fields)._options;
  if ((pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
     ((pGVar3->fields)._items != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
     ) {
    auVar9 = il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition);
    method_00 = auVar9._8_8_;
    children = auVar9._0_8_;
    pGVar3 = (__this->fields)._options;
    if (pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
      if (children == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        pGVar1 = (pGVar3->fields)._items;
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
          iVar2 = (int)pGVar1->max_length;
          if (0 < iVar2) {
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode(__this,0,method_00);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03b1eb75:
          pGVar7 = children;
          if ((__this->fields)._maxVisibleItems < iVar2) {
            auVar9 = il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition,1);
            pGVar7 = auVar9._0_8_;
            pGVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode
                               (__this,children,auVar9._8_8_);
            if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)
            goto LAB_03b1eb5c;
            if ((int)pGVar7->max_length == 0) {
LAB_03b1eccf:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pGVar7->m_Items[0] = pGVar4;
            il2cpp_runtime_glue(pGVar7->m_Items);
          }
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                   il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar4->fields).type = "Panel";
            il2cpp_runtime_glue(&pGVar4->fields);
            pSVar5 = System_String__Concat((__this->fields)._id,"-popover",(MethodInfo *)0x0);
            (pGVar4->fields).id = pSVar5;
            il2cpp_runtime_glue(&(pGVar4->fields).id,pSVar5);
            (pGVar4->fields).style = "popover";
            il2cpp_runtime_glue(&(pGVar4->fields).style);
            __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                        il2cpp_runtime_glue(TypeInfo_GisketchLayoutDefinition);
            Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_00,(MethodInfo *)0x0);
            if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
              (__this_00->fields).direction = "Column";
              il2cpp_runtime_glue(&__this_00->fields);
              (__this_00->fields).alignItems = "Stretch";
              il2cpp_runtime_glue(&(__this_00->fields).alignItems);
              (__this_00->fields).gap = 0.0;
              (pGVar4->fields).search =
                   (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_00;
              il2cpp_runtime_glue(&(pGVar4->fields).search,__this_00);
              (pGVar4->fields).deferredChildren = pGVar7;
              il2cpp_runtime_glue(&(pGVar4->fields).deferredChildren,pGVar7);
              return pGVar4;
            }
          }
        }
      }
      else {
        ppGVar8 = children->m_Items;
        uVar6 = 0;
        do {
          pGVar1 = (pGVar3->fields)._items;
          if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) break;
          iVar2 = (int)pGVar1->max_length;
          if ((long)iVar2 <= (long)uVar6) goto LAB_03b1eb75;
          pGVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode
                             (__this,(int32_t)uVar6,method_00);
          if ((uint)children->max_length <= uVar6) goto LAB_03b1eccf;
          *ppGVar8 = pGVar4;
          il2cpp_runtime_glue(ppGVar8);
          uVar6 = uVar6 + 1;
          pGVar3 = (__this->fields)._options;
          ppGVar8 = ppGVar8 + 1;
          method_00 = extraout_RDX;
        } while (pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0);
      }
    }
  }
LAB_03b1eb5c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$OptionNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, const MethodInfo* method);
// 0x3b1f800

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
  MethodInfo *method_00;
  uint uVar6;
  bool bVar7;
  undefined2 local_2e;
  int32_t local_2c;
  
  if (DAT_0570156b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Boolean);
    il2cpp_init_method_metadata(&"slideDown");
    il2cpp_init_method_metadata(&"percent");
    il2cpp_init_method_metadata(&"-options");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"dropdownItem");
    DAT_0570156b = '\x01';
  }
  pGVar2 = (__this->fields)._options;
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) goto LAB_03b1fc46;
  if (index < 0) {
LAB_03b1f8ee:
    bVar7 = false;
  }
  else {
    pGVar3 = (pGVar2->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
    goto LAB_03b1fc46;
    uVar1 = (uint)pGVar3->max_length;
    if ((int)uVar1 <= index) goto LAB_03b1f8ee;
    uVar6 = uVar1 - 1;
    if (index < (int)(uVar1 - 1)) {
      uVar6 = index;
    }
    if (uVar1 <= uVar6) goto LAB_03b1fc4b;
    if (pGVar3->m_Items[(int)uVar6] ==
        (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b1fc46;
    bVar7 = (char)(pGVar3->m_Items[(int)uVar6]->fields).enabled != '\0';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Button";
    il2cpp_runtime_glue(&__this_00->fields);
    local_2c = index;
    if (DAT_05701575 == '\0') {
      il2cpp_init_method_metadata(&"-option-");
      DAT_05701575 = '\x01';
    }
    pSVar4 = (__this->fields)._id;
    str2 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(pSVar4,"-option-",str2,(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar4;
    il2cpp_runtime_glue(&(__this_00->fields).id,pSVar4);
    pGVar2 = (__this->fields)._options;
    if (pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
      pSVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text(pGVar2,index,method_00);
      (__this_00->fields).text = pSVar4;
      il2cpp_runtime_glue(&(__this_00->fields).text,pSVar4);
      pGVar2 = (__this->fields)._options;
      if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
         (pGVar3 = (pGVar2->fields)._items,
         pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
        uVar1 = (uint)pGVar3->max_length;
        uVar6 = uVar1 - 1;
        if (index < (int)uVar6) {
          uVar6 = index;
        }
        uVar5 = 0;
        if (-1 < index) {
          uVar5 = uVar6;
        }
        if (uVar1 <= uVar5) {
LAB_03b1fc4b:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pGVar3->m_Items[(int)uVar5] !=
            (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
          (__this_00->fields).textKey = (pGVar3->m_Items[(int)uVar5]->fields).textKey;
          il2cpp_runtime_glue(&(__this_00->fields).textKey);
          (__this_00->fields).style = "dropdownItem";
          il2cpp_runtime_glue(&(__this_00->fields).style);
          local_2e = 0;
          System_Nullable<bool>___ctor((System_Nullable_bool__o)&local_2e,(uint)bVar7,MethodInfo_Nullable_1_Boolean);
          *(undefined2 *)((long)&(__this_00->fields).hasIcon + 3) = local_2e;
          pGVar2 = (__this->fields)._options;
          if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
             (pGVar3 = (pGVar2->fields)._items,
             pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
            uVar1 = (uint)pGVar3->max_length;
            uVar6 = uVar1 - 1;
            if (index < (int)uVar6) {
              uVar6 = index;
            }
            uVar5 = 0;
            if (-1 < index) {
              uVar5 = uVar6;
            }
            if (uVar1 <= uVar5) goto LAB_03b1fc4b;
            if (pGVar3->m_Items[(int)uVar5] !=
                (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
              (__this_00->fields).choiceOptionRenderer =
                   (pGVar3->m_Items[(int)uVar5]->fields).tooltip;
              il2cpp_runtime_glue(&(__this_00->fields).choiceOptionRenderer);
              pGVar2 = (__this->fields)._options;
              if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
                 (pGVar3 = (pGVar2->fields)._items,
                 pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
                uVar1 = (uint)pGVar3->max_length;
                uVar6 = uVar1 - 1;
                if (index < (int)uVar6) {
                  uVar6 = index;
                }
                uVar5 = 0;
                if (-1 < index) {
                  uVar5 = uVar6;
                }
                if (uVar1 <= uVar5) goto LAB_03b1fc4b;
                if (pGVar3->m_Items[(int)uVar5] !=
                    (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
                  (__this_00->fields).tooltip = (pGVar3->m_Items[(int)uVar5]->fields).tooltipKey;
                  il2cpp_runtime_glue(&(__this_00->fields).tooltip);
                  if (bVar7 == false) {
                    __this_01 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
                  }
                  else {
                    __this_01 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)
                                il2cpp_runtime_glue(TypeInfo_GisketchMotionDefinition);
                    Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                              (__this_01,(MethodInfo *)0x0);
                    if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)
                    goto LAB_03b1fc46;
                    (__this_01->fields).preset = "slideDown";
                    il2cpp_runtime_glue(&__this_01->fields);
                    pSVar4 = System_String__Concat
                                       ((__this->fields)._id,"-options",(MethodInfo *)0x0);
                    (__this_01->fields).group = pSVar4;
                    il2cpp_runtime_glue(&(__this_01->fields).group,pSVar4);
                    (__this_01->fields).duration = 0.12;
                    (__this_01->fields).stagger = 0.025;
                    (__this_01->fields).order = index;
                  }
                  (__this_00->fields).motion = __this_01;
                  il2cpp_runtime_glue(&(__this_00->fields).motion);
                  __this_02 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                              il2cpp_runtime_glue(TypeInfo_GisketchLayoutDefinition);
                  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor
                            (__this_02,(MethodInfo *)0x0);
                  __this_03 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)
                              il2cpp_runtime_glue(TypeInfo_GisketchLength);
                  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_03,(MethodInfo *)0x0);
                  if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                    (__this_03->fields).value = 100.0;
                    (__this_03->fields).unit = "percent";
                    il2cpp_runtime_glue(&(__this_03->fields).unit);
                    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                      (__this_02->fields).width = __this_03;
                      il2cpp_runtime_glue(&(__this_02->fields).width,__this_03);
                      (__this_00->fields).search =
                           (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_02;
                      il2cpp_runtime_glue(&(__this_00->fields).search,__this_02);
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
LAB_03b1fc46:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$ScrollNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, const MethodInfo* method);
// 0x3b1fc50

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  
  if (DAT_0570156c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"point");
    il2cpp_init_method_metadata(&"scrollView");
    il2cpp_init_method_metadata(&"-options-scroll");
    il2cpp_init_method_metadata(&"ScrollView");
    DAT_0570156c = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "ScrollView";
    il2cpp_runtime_glue(&__this_00->fields);
    pSVar1 = System_String__Concat((__this->fields)._id,"-options-scroll",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar1;
    il2cpp_runtime_glue(&(__this_00->fields).id,pSVar1);
    (__this_00->fields).style = "scrollView";
    il2cpp_runtime_glue(&(__this_00->fields).style);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchLayoutDefinition);
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar2,(MethodInfo *)0x0);
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = (float)(__this->fields)._maxVisibleItems * 38.0;
      (__this_01->fields).unit = "point";
      il2cpp_runtime_glue(&(__this_01->fields).unit);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar2->fields).height = __this_01;
        il2cpp_runtime_glue(&(pGVar2->fields).height,__this_01);
        (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
        il2cpp_runtime_glue(&(__this_00->fields).search);
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                 il2cpp_runtime_glue(TypeInfo_GisketchLayoutDefinition);
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar2,(MethodInfo *)0x0);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar2->fields).direction = "Column";
          il2cpp_runtime_glue(&pGVar2->fields);
          (pGVar2->fields).alignItems = "Stretch";
          il2cpp_runtime_glue(&(pGVar2->fields).alignItems);
          (pGVar2->fields).gap = 0.0;
          (__this_00->fields).layout = pGVar2;
          il2cpp_runtime_glue(&(__this_00->fields).layout,pGVar2);
          (__this_00->fields).deferredChildren = children;
          il2cpp_runtime_glue(&(__this_00->fields).deferredChildren,children);
          return __this_00;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$WireOptions
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__WireOptions (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, UnityEngine_GameObject_o* content, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b1ed40

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__WireOptions
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,
               UnityEngine_GameObject_o *content,Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  uint uVar3;
  undefined4 uVar4;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar5;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar6;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_array *pGVar7;
  void *pvVar8;
  long lVar9;
  bool_conflict bVar10;
  uint uVar11;
  Il2CppObject *pIVar12;
  TMPro_TextMeshProUGUI_o *label;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar13;
  Il2CppObject *pIVar14;
  UnityEngine_Transform_o *pUVar15;
  System_String_o *str2;
  System_String_o *pSVar16;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *pUVar17;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_01;
  System_Func_bool__o *method_00;
  MethodInfo *method_01;
  int iVar18;
  ulong uVar19;
  MethodInfo *method_02;
  MethodInfo *in_R9;
  void **ppvVar20;
  UnityEngine_UI_Selectable_o *__this_02;
  bool bVar21;
  int local_4c;
  Il2CppObject *local_48;
  UnityEngine_GameObject_o *local_40;
  ulong local_38;
  
  if (DAT_0570156d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshP);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_Gisket);
    il2cpp_init_method_metadata(&TypeInfo_Func_bool);
    il2cpp_init_method_metadata(&MethodInfo_AottgChoiceOptionCancel_AddComponent_AottgChoice);
    il2cpp_init_method_metadata(&MethodInfo_AottgChoiceOptionSelection_AddComponent_AottgCho);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass26_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__WireOptions_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass26_1);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__WireOptions_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass26_2);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    DAT_0570156d = '\x01';
  }
  pIVar12 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass26_0);
  System_Object___ctor(pIVar12,(MethodInfo *)0x0);
  if (pIVar12 != (Il2CppObject *)0x0) {
    pIVar12[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(pIVar12 + 1,__this);
    pIVar12[1].monitor = root;
    il2cpp_runtime_glue(&pIVar12[1].monitor);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,
                        (MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
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
      pGVar6 = (__this->fields)._options;
      if (pGVar6 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
        uVar19 = 0;
        pGVar13 = (pGVar6->fields)._items;
        local_48 = pIVar12;
        local_40 = content;
        if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
          do {
            iVar18 = (int)uVar19;
            if ((int)pGVar13->max_length <= iVar18) {
              return;
            }
            pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass26_1);
            System_Object___ctor(pIVar14,(MethodInfo *)0x0);
            if (pIVar14 == (Il2CppObject *)0x0) break;
            pIVar14[1].monitor = pIVar12;
            il2cpp_runtime_glue(&pIVar14[1].monitor);
            *(int *)&pIVar14[1].klass = iVar18;
            if (content == (UnityEngine_GameObject_o *)0x0) break;
            pUVar15 = UnityEngine_GameObject__get_transform(content,(MethodInfo *)0x0);
            local_4c = iVar18;
            if (DAT_05701575 == '\0') {
              il2cpp_init_method_metadata(&"-option-");
              DAT_05701575 = '\x01';
            }
            pSVar16 = (__this->fields)._id;
            local_38 = uVar19;
            str2 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
            pSVar16 = System_String__Concat(pSVar16,"-option-",str2,(MethodInfo *)0x0);
            pUVar15 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep
                                (pUVar15,pSVar16,method_01);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar10 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)pUVar15,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            __this_02 = (UnityEngine_UI_Selectable_o *)0x0;
            if ((char)bVar10 != '\0') {
              if (pUVar15 == (UnityEngine_Transform_o *)0x0) break;
              __this_02 = (UnityEngine_UI_Selectable_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar15,MethodInfo_Button_GetComponent_Button);
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar10 = UnityEngine_Object__op_Inequality
                               ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                                (MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              pIVar12 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass26_2);
              System_Object___ctor(pIVar12,(MethodInfo *)0x0);
              if (pIVar12 == (Il2CppObject *)0x0) break;
              ppvVar20 = &pIVar12[1].monitor;
              pIVar12[1].monitor = pIVar14;
              il2cpp_runtime_glue(ppvVar20,pIVar14);
              if ((pIVar12[1].monitor == (void *)0x0) ||
                 (pGVar6 = (__this->fields)._options,
                 pGVar6 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0)) break;
              uVar11 = *(uint *)((long)pIVar12[1].monitor + 0x10);
              if ((int)uVar11 < 0) {
LAB_03b1f160:
                uVar11 = 0;
                *(undefined1 *)&pIVar12[1].klass = 0;
              }
              else {
                pGVar13 = (pGVar6->fields)._items;
                if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
                break;
                uVar3 = (uint)pGVar13->max_length;
                if ((int)uVar3 <= (int)uVar11) goto LAB_03b1f160;
                if ((int)(uVar3 - 1) <= (int)uVar11) {
                  uVar11 = uVar3 - 1;
                }
                if (uVar3 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if (pGVar13->m_Items[(int)uVar11] ==
                    (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) break;
                bVar21 = (char)(pGVar13->m_Items[(int)uVar11]->fields).enabled != '\0';
                uVar11 = (uint)bVar21;
                *(bool *)&pIVar12[1].klass = bVar21;
              }
              if (__this_02 == (UnityEngine_UI_Selectable_o *)0x0) break;
              UnityEngine_UI_Selectable__set_interactable(__this_02,uVar11,(MethodInfo *)0x0);
              if (*(char *)&pIVar12[1].klass == '\0') {
                if (pUVar15 == (UnityEngine_Transform_o *)0x0) break;
              }
              else {
                __this_00 = (UnityEngine_Events_UnityEvent_o *)
                            (__this_02->fields).m_CanvasGroupCache;
                call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                UnityEngine_Events_UnityAction___ctor();
                if ((((__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) ||
                     (UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0),
                     pUVar15 == (UnityEngine_Transform_o *)0x0)) ||
                    (pUVar17 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0),
                    pUVar17 == (UnityEngine_GameObject_o *)0x0)) ||
                   (pIVar14 = UnityEngine_GameObject__AddComponent<object>(pUVar17,MethodInfo_AottgChoiceOptionCancel_AddComponent_AottgChoice),
                   pIVar14 == (Il2CppObject *)0x0)) break;
                pIVar14[2].klass = (Il2CppClass *)__this;
                il2cpp_runtime_glue(pIVar14 + 2);
                pUVar17 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
                if (pUVar17 == (UnityEngine_GameObject_o *)0x0) break;
                pIVar14 = UnityEngine_GameObject__AddComponent<object>(pUVar17,MethodInfo_AottgChoiceOptionSelection_AddComponent_AottgCho);
                if ((*ppvVar20 == (void *)0x0) || (pIVar14 == (Il2CppObject *)0x0)) break;
                uVar4 = *(undefined4 *)((long)*ppvVar20 + 0x10);
                pIVar14[2].klass = (Il2CppClass *)__this;
                il2cpp_runtime_glue(pIVar14 + 2,__this);
                *(undefined4 *)&pIVar14[2].monitor = uVar4;
              }
              __this_01 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                          UnityEngine_Component__GetComponent<object>
                                    ((UnityEngine_Component_o *)pUVar15,MethodInfo_GisketchDropdownItemFeedback_GetComponent_Gisket);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              method_02 = (MethodInfo *)0x0;
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar10 != '\0') {
                if (__this_01 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0)
                break;
                *(byte *)((long)&(__this_01->fields)._hovered + 3) = *(byte *)&pIVar12[1].klass ^ 1;
                Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_01,method_02)
                ;
                method_00 = (System_Func_bool__o *)il2cpp_runtime_glue(TypeInfo_Func_bool);
                bVar21 = false;
                System_Func<bool>___ctor();
                (__this_01->fields)._pointerHoverAllowed = method_00;
                il2cpp_runtime_glue(&(__this_01->fields)._pointerHoverAllowed);
                if (*(char *)&pIVar12[1].klass != '\0') {
                  if (*ppvVar20 == (void *)0x0) break;
                  bVar21 = *(int *)((long)*ppvVar20 + 0x10) == (__this->fields)._selectedIndex;
                }
                *(bool *)((long)&(__this_01->fields)._hovered + 2) = bVar21;
                Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
                          (__this_01,(MethodInfo *)method_00);
              }
              lVar9 = MethodInfo_Void_Add;
              pSVar5 = (__this->fields)._feedback;
              if (pSVar5 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0)
              break;
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              pGVar7 = (pSVar5->fields)._items;
              if (pGVar7 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_array *)0x0)
              break;
              uVar11 = (pSVar5->fields)._size;
              if (uVar11 < (uint)pGVar7->max_length) {
                (pSVar5->fields)._size = uVar11 + 1;
                pGVar7->m_Items[(int)uVar11] = __this_01;
                il2cpp_runtime_glue(pGVar7->m_Items + (int)uVar11);
                pvVar8 = *ppvVar20;
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar5,
                           (Il2CppObject *)__this_01,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                pvVar8 = *ppvVar20;
              }
              if (pvVar8 == (void *)0x0) break;
              iVar2 = *(int32_t *)((long)pvVar8 + 0x10);
              pUVar17 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
              label = (TMPro_TextMeshProUGUI_o *)
                      UnityEngine_Component__GetComponentInChildren<object>
                                ((UnityEngine_Component_o *)pUVar15,MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshP);
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
                        (__this,iVar2,pUVar17,label,0,in_R9);
              content = local_40;
              pIVar12 = local_48;
            }
            uVar19 = (ulong)((int)local_38 + 1);
            pGVar6 = (__this->fields)._options;
            if ((pGVar6 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
               (pGVar13 = (pGVar6->fields)._items,
               pGVar13 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0))
            break;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SelectFromNavigation
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromNavigation (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, UnityEngine_GameObject_o* option, const MethodInfo* method);
// 0x3b20880

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromNavigation
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               UnityEngine_GameObject_o *option,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_01;
  UnityEngine_Vector3_o UVar2;
  
  method_00 = (MethodInfo *)option;
  if (DAT_057015b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_057015b9 = '\x01';
    method_00 = extraout_RDX;
  }
  if (DAT_0570136d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_0570136d = '\x01';
    method_00 = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 1) {
    if (DAT_057015f6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_057015f6 = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
      method_00 = extraout_RDX_02;
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
      method_00 = extraout_RDX_01;
    }
  }
  method_01 = (MethodInfo *)(ulong)(uint)index;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this,index,method_00);
  UVar2 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  *(undefined1 *)&(__this->fields)._pointerSelectionLocked = 1;
  (__this->fields)._pointerLockPosition.fields = UVar2.fields._0_8_;
  Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(option,12.0,method_01);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SelectFromPointer
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromPointer (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x3b20ef0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromPointer
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  long lVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  float fVar3;
  float fVar4;
  
  if ((char)(__this->fields)._pointerSelectionLocked != '\0') {
    UVar1 = (__this->fields)._pointerLockPosition.fields;
    fVar3 = pointerPosition.fields.x - UVar1.x;
    fVar4 = pointerPosition.fields.y - UVar1.y;
    if (fVar4 * fVar4 + fVar3 * fVar3 < 4.0) {
      return;
    }
    *(undefined1 *)&(__this->fields)._pointerSelectionLocked = 0;
  }
  if (DAT_057015b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_057015b9 = '\x01';
    method = extraout_RDX;
  }
  if (DAT_0570136d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_0570136d = '\x01';
    method = extraout_RDX_00;
  }
  lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar2 + 0x18) != 0) {
    if (DAT_057015f6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_057015f6 = '\x01';
      lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
      method = extraout_RDX_02;
    }
    else {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      method = extraout_RDX_01;
    }
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this,index,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$CanUsePointerSelection
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceControl__CanUsePointerSelection (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x3b20fe0

bool_conflict
Gisketch_Aottg2UI_Actions_AottgChoiceControl__CanUsePointerSelection
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,
          UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 in_RAX;
  float fVar2;
  float fVar3;
  
  if ((char)(__this->fields)._pointerSelectionLocked != '\0') {
    UVar1 = (__this->fields)._pointerLockPosition.fields;
    fVar2 = pointerPosition.fields.x - UVar1.x;
    fVar3 = pointerPosition.fields.y - UVar1.y;
    if (fVar3 * fVar3 + fVar2 * fVar2 < 4.0) {
      return 0;
    }
    *(undefined1 *)&(__this->fields)._pointerSelectionLocked = 0;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),1);
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$LockPointerSelection
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__LockPointerSelection (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, UnityEngine_Vector2_o pointerPosition, const MethodInfo* method);
// 0x3b1ed30

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__LockPointerSelection
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,
               UnityEngine_Vector2_o pointerPosition,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._pointerSelectionLocked = 1;
  (__this->fields)._pointerLockPosition.fields = pointerPosition.fields;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetSelectedIndex
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, const MethodInfo* method);
// 0x3b20970

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *pGVar4;
  uint uVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar7;
  
  if (DAT_0570156e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570156e = '\x01';
  }
  pGVar1 = (__this->fields)._options;
  if (pGVar1 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
LAB_03b20ad9:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (-1 < index) {
    pGVar2 = (pGVar1->fields)._items;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
    goto LAB_03b20ad9;
    uVar5 = (uint)pGVar2->max_length;
    if (index < (int)uVar5) {
      if ((int)(uVar5 - 1) <= index) {
        index = uVar5 - 1;
      }
      if (uVar5 <= (uint)index) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pGVar2->m_Items[index] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
      goto LAB_03b20ad9;
      if ((char)(pGVar2->m_Items[index]->fields).enabled != '\0') {
        (__this->fields)._selectedIndex = index;
        pSVar7 = (__this->fields)._feedback;
        if (pSVar7 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0)
        goto LAB_03b20ad9;
        uVar5 = 0;
        if (0 < (pSVar7->fields)._size) {
          do {
            x = (UnityEngine_Object_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar7,uVar5,MethodInfo_GisketchDropdownItemFeedback_get_Item);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar3 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              pSVar7 = (__this->fields)._feedback;
              if (pSVar7 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0)
              goto LAB_03b20ad9;
              pMVar6 = (MethodInfo *)(ulong)uVar5;
              pGVar4 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar7,uVar5,
                                  MethodInfo_GisketchDropdownItemFeedback_get_Item);
              if (pGVar4 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0)
              goto LAB_03b20ad9;
              *(undefined1 *)&(pGVar4->fields)._hovered = 0;
              Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(pGVar4,pMVar6);
              pSVar7 = (__this->fields)._feedback;
              if (pSVar7 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0)
              goto LAB_03b20ad9;
              pMVar6 = (MethodInfo *)(ulong)uVar5;
              pGVar4 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar7,uVar5,
                                  MethodInfo_GisketchDropdownItemFeedback_get_Item);
              if (pGVar4 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0)
              goto LAB_03b20ad9;
              *(bool *)((long)&(pGVar4->fields)._hovered + 2) =
                   uVar5 == (__this->fields)._selectedIndex;
              Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(pGVar4,pMVar6);
            }
            uVar5 = uVar5 + 1;
            pSVar7 = (__this->fields)._feedback;
            if (pSVar7 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0)
            goto LAB_03b20ad9;
          } while ((int)uVar5 < (pSVar7->fields)._size);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SelectFromClick
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromClick (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b21030

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromClick
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  if (DAT_0570136d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_0570136d = '\x01';
  }
  if (*(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1) {
    index = (__this->fields)._selectedIndex;
  }
  else if (__this == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select(__this,index,root,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$FocusSelectedOption
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__FocusSelectedOption (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, UnityEngine_GameObject_o* content, const MethodInfo* method);
// 0x3b1f3e0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__FocusSelectedOption
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,
               UnityEngine_GameObject_o *content,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  bool_conflict bVar5;
  uint uVar6;
  UnityEngine_Transform_o *pUVar7;
  System_String_o *str2;
  System_String_o *pSVar8;
  UnityEngine_EventSystems_EventSystem_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  uint uVar11;
  MethodInfo *method_00;
  int iVar12;
  MethodInfo *method_01;
  uint uVar13;
  int32_t local_2c;
  
  if (DAT_0570156f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570156f = '\x01';
  }
  pGVar3 = (__this->fields)._options;
  if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) goto LAB_03b1f67a;
  uVar1 = (__this->fields)._selectedIndex;
  pGVar4 = (pGVar3->fields)._items;
  if ((int)uVar1 < 0) {
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
    goto LAB_03b1f67a;
LAB_03b1f5f5:
    uVar2 = (uint)pGVar4->max_length;
    uVar13 = uVar2 - 1;
    if (0 < (int)uVar2) {
      iVar12 = 1;
      do {
        uVar11 = (int)(uVar1 + uVar2 + iVar12) % (int)uVar2;
        if (-1 < (int)uVar11) {
          uVar6 = uVar13;
          if ((int)uVar11 < (int)uVar13) {
            uVar6 = uVar11;
          }
          if (uVar2 <= uVar6) goto LAB_03b1f67f;
          if (pGVar4->m_Items[(int)uVar6] ==
              (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b1f67a;
          if ((char)(pGVar4->m_Items[(int)uVar6]->fields).enabled != '\0') goto LAB_03b1f654;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 <= (int)uVar2);
    }
    if ((int)uVar1 < 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar1;
      if ((int)uVar13 <= (int)uVar1) {
        uVar11 = uVar13;
      }
    }
LAB_03b1f654:
    (__this->fields)._selectedIndex = uVar11;
    iVar12 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
    goto LAB_03b1f67a;
    uVar2 = (uint)pGVar4->max_length;
    if ((int)uVar2 <= (int)uVar1) goto LAB_03b1f5f5;
    uVar13 = uVar2 - 1;
    if ((int)uVar1 < (int)(uVar2 - 1)) {
      uVar13 = uVar1;
    }
    if (uVar2 <= uVar13) {
LAB_03b1f67f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pGVar4->m_Items[(int)uVar13] ==
        (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b1f67a;
    if ((char)(pGVar4->m_Items[(int)uVar13]->fields).enabled == '\0') goto LAB_03b1f5f5;
    iVar12 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar12 == 0) {
    il2cpp_init_class();
  }
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (content == (UnityEngine_GameObject_o *)0x0) goto LAB_03b1f67a;
    pUVar7 = UnityEngine_GameObject__get_transform(content,(MethodInfo *)0x0);
  }
  local_2c = (__this->fields)._selectedIndex;
  if (DAT_05701575 == '\0') {
    il2cpp_init_method_metadata(&"-option-");
    DAT_05701575 = '\x01';
  }
  pSVar8 = (__this->fields)._id;
  str2 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
  pSVar8 = System_String__Concat(pSVar8,"-option-",str2,(MethodInfo *)0x0);
  pUVar7 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep(pUVar7,pSVar8,method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar9 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar9 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar10 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0),
         pUVar9 == (UnityEngine_EventSystems_EventSystem_o *)0x0)) {
LAB_03b1f67a:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(pUVar9,pUVar10,(MethodInfo *)0x0);
      method_01 = (MethodInfo *)0x0;
      pUVar10 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar10,12.0,method_01);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Select
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b21090

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  UnityEngine_Object_o *x;
  bool_conflict bVar4;
  UnityEngine_EventSystems_EventSystem_o *pUVar5;
  uint uVar6;
  
  if (DAT_05701570 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701570 = '\x01';
  }
  pGVar2 = (__this->fields)._options;
  if (pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    if (-1 < index) {
      pGVar3 = (pGVar2->fields)._items;
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
      goto LAB_03b2121f;
      uVar1 = (uint)pGVar3->max_length;
      if (index < (int)uVar1) {
        uVar6 = uVar1 - 1;
        if (index < (int)(uVar1 - 1)) {
          uVar6 = index;
        }
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if (pGVar3->m_Items[(int)uVar6] ==
            (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b2121f;
        if ((char)(pGVar3->m_Items[(int)uVar6]->fields).enabled != '\0') {
          Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex
                    (__this,index,0,(MethodInfo *)(long)(int)uVar6);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto LAB_03b2121f;
            __this_00 = (root->fields)._Theme_k__BackingField;
            if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,
                         (MethodInfo *)0x0);
            }
          }
          if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            x = (UnityEngine_Object_o *)(__this->fields)._opener;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = UnityEngine_Object__op_Inequality
                              (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pUVar5 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
                UnityEngine_EventSystems_EventSystem__SetSelectedGameObject
                          (pUVar5,(__this->fields)._opener,(MethodInfo *)0x0);
                return;
              }
              goto LAB_03b2121f;
            }
          }
        }
      }
    }
    return;
  }
LAB_03b2121f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetIndex
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, int32_t source, const MethodInfo* method);
// 0x3b1e700

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,int32_t source,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  uint uVar4;
  MethodInfo *method_00;
  uint uVar5;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  pGVar2 = (__this->fields)._options;
  if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
     (pGVar3 = (pGVar2->fields)._items,
     pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
    uVar1 = (uint)pGVar3->max_length;
    uVar4 = uVar1 - 1;
    if (index < 0) {
      method_01 = (MethodInfo *)0x0;
      if ((int)uVar1 < 1) {
        return;
      }
    }
    else {
      if (((int)uVar4 < index) && (method_01 = (MethodInfo *)(ulong)uVar4, (int)uVar4 < 0)) {
        return;
      }
      if ((int)uVar1 <= (int)method_01) {
        return;
      }
    }
    uVar5 = (uint)method_01;
    if ((int)uVar5 < (int)uVar4) {
      uVar4 = uVar5;
    }
    if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pGVar3->m_Items[(int)uVar4] !=
        (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      if (((char)(pGVar3->m_Items[(int)uVar4]->fields).enabled != '\0') &&
         (uVar5 != (__this->fields)._index)) {
        (__this->fields)._index = uVar5;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel(__this,method_01);
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__NotifyChanged(__this,source,method_00);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3b1e430

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf
                  (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,System_String_o *value,
                  MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar3;
  uint uVar4;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields *pGVar7;
  System_String_o *a;
  uint uVar8;
  
  pGVar6 = (__this->fields)._options;
  if (pGVar6 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    uVar8 = 0;
    do {
      pGVar2 = (pGVar6->fields)._items;
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) break;
      uVar1 = (uint)pGVar2->max_length;
      if ((int)uVar1 <= (int)uVar8) {
        return 0;
      }
      uVar4 = uVar1 - 1;
      if ((int)uVar8 < (int)(uVar1 - 1)) {
        uVar4 = uVar8;
      }
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pGVar3 = pGVar2->m_Items[(int)uVar4];
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) break;
      bVar5 = System_String__IsNullOrEmpty((pGVar3->fields).value,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pGVar7 = &pGVar3->fields;
LAB_03b1e4c4:
        a = pGVar7->value;
      }
      else {
        a = (pGVar3->fields).text;
        if (a == (System_String_o *)0x0) {
          pGVar7 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields **)
                    (DAT_057110b0 + 0xb8);
          goto LAB_03b1e4c4;
        }
      }
      bVar5 = System_String__op_Equality(a,value,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      pGVar6 = (__this->fields)._options;
    } while (pGVar6 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$RefreshLabel
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b1e500

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int32_t index;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar6;
  TMPro_TextMeshProUGUI_o *pTVar7;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  UnityEngine_GameObject_o *root;
  uint uVar10;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields *pGVar11;
  uint uVar12;
  MethodInfo *in_R9;
  
  if (DAT_05701571 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701571 = '\x01';
  }
  pGVar3 = (__this->fields)._node;
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar4 = (__this->fields)._options;
    if ((pGVar4 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
       (pGVar5 = (pGVar4->fields)._items,
       pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0))
    goto LAB_03b1e653;
    uVar1 = (__this->fields)._index;
    uVar2 = (uint)pGVar5->max_length;
    uVar12 = uVar2 - 1;
    if ((int)uVar1 < (int)uVar12) {
      uVar12 = uVar1;
    }
    uVar10 = 0;
    if (-1 < (int)uVar1) {
      uVar10 = uVar12;
    }
    if (uVar2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar6 = pGVar5->m_Items[(int)uVar10];
    if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b1e653;
    bVar8 = System_String__IsNullOrEmpty((pGVar6->fields).value,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pGVar11 = &pGVar6->fields;
LAB_03b1e5ad:
      pSVar9 = pGVar11->value;
    }
    else {
      pSVar9 = (pGVar6->fields).text;
      if (pSVar9 == (System_String_o *)0x0) {
        pGVar11 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields **)
                   (DAT_057110b0 + 0xb8);
        goto LAB_03b1e5ad;
      }
    }
    (pGVar3->fields).value = pSVar9;
    il2cpp_runtime_glue(&(pGVar3->fields).value);
  }
  pTVar7 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    return;
  }
  pGVar4 = (__this->fields)._options;
  if (pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    pTVar7 = (__this->fields)._label;
    pSVar9 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
                       (pGVar4,(__this->fields)._index,method_00);
    if (pTVar7 != (TMPro_TextMeshProUGUI_o *)0x0) {
      (*(pTVar7->klass->vtable)._66_set_text.methodPtr)
                (pTVar7,pSVar9,(pTVar7->klass->vtable)._66_set_text.method);
      pTVar7 = (__this->fields)._label;
      if (pTVar7 != (TMPro_TextMeshProUGUI_o *)0x0) {
        index = (__this->fields)._index;
        root = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pTVar7,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
                  (__this,index,root,(__this->fields)._label,1,in_R9);
        return;
      }
    }
  }
LAB_03b1e653:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$RenderOption
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, UnityEngine_GameObject_o* root, TMPro_TextMeshProUGUI_o* label, bool closedValue, const MethodInfo* method);
// 0x3b20560

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               UnityEngine_GameObject_o *root,TMPro_TextMeshProUGUI_o *label,
               bool_conflict closedValue,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar6;
  undefined1 uVar7;
  bool_conflict bVar8;
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *context;
  System_String_o *pSVar9;
  uint uVar10;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields *pGVar11;
  uint uVar12;
  
  if (DAT_05701572 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionRenderContext);
    il2cpp_init_method_metadata(&TypeInfo_GisketchChoiceOptionRenderer);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701572 = '\x01';
  }
  pGVar2 = (__this->fields)._node;
  if (((pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
      (bVar8 = System_String__IsNullOrEmpty
                         ((System_String_o *)(pGVar2->fields).choiceOptions,(MethodInfo *)0x0),
      (char)bVar8 != '\0')) ||
     ((__this->fields)._options == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0)) {
    return;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if ((char)closedValue == '\0') {
    pGVar4 = (__this->fields)._options;
    if (pGVar4 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) goto LAB_03b2086b;
    if (index < 0) {
      return;
    }
    pGVar3 = (pGVar4->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
    goto LAB_03b2086b;
    uVar1 = (uint)pGVar3->max_length;
    if ((int)uVar1 <= index) {
      return;
    }
    uVar12 = uVar1 - 1;
    if (index < (int)(uVar1 - 1)) {
      uVar12 = index;
    }
    if (uVar1 <= uVar12) goto LAB_03b20870;
    if (pGVar3->m_Items[(int)uVar12] ==
        (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b2086b;
    if ((char)(pGVar3->m_Items[(int)uVar12]->fields).enabled == '\0') {
      return;
    }
  }
  pGVar2 = (__this->fields)._node;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto LAB_03b2086b;
  pGVar3 = (pGVar2->fields).choiceOptions;
  context = (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)
            il2cpp_runtime_glue(TypeInfo_GisketchChoiceOptionRenderContext);
  System_Object___ctor((Il2CppObject *)context,(MethodInfo *)0x0);
  if (context == (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)0x0)
  goto LAB_03b2086b;
  (context->fields).Root = root;
  il2cpp_runtime_glue(&context->fields,root);
  (context->fields).Label = label;
  il2cpp_runtime_glue(&(context->fields).Label,label);
  pGVar4 = (__this->fields)._options;
  if ((pGVar4 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
     (pGVar5 = (pGVar4->fields)._items,
     pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0))
  goto LAB_03b2086b;
  uVar1 = (uint)pGVar5->max_length;
  uVar12 = uVar1 - 1;
  if (index < (int)uVar12) {
    uVar12 = index;
  }
  uVar10 = 0;
  if (-1 < index) {
    uVar10 = uVar12;
  }
  if (uVar1 <= uVar10) goto LAB_03b20870;
  (context->fields).Option = pGVar5->m_Items[(int)uVar10];
  il2cpp_runtime_glue(&(context->fields).Option);
  pGVar4 = (__this->fields)._options;
  if (pGVar4 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) goto LAB_03b2086b;
  pSVar9 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text(pGVar4,index,method_00);
  (context->fields).Text = pSVar9;
  il2cpp_runtime_glue(&(context->fields).Text,pSVar9);
  pGVar4 = (__this->fields)._options;
  if ((pGVar4 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
     (pGVar5 = (pGVar4->fields)._items,
     pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0))
  goto LAB_03b2086b;
  uVar1 = (uint)pGVar5->max_length;
  uVar12 = uVar1 - 1;
  if (index < (int)uVar12) {
    uVar12 = index;
  }
  uVar10 = 0;
  if (-1 < index) {
    uVar10 = uVar12;
  }
  if (uVar1 <= uVar10) goto LAB_03b20870;
  pGVar6 = pGVar5->m_Items[(int)uVar10];
  if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b2086b;
  bVar8 = System_String__IsNullOrEmpty((pGVar6->fields).value,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pGVar11 = &pGVar6->fields;
LAB_03b207ca:
    pSVar9 = pGVar11->value;
  }
  else {
    pSVar9 = (pGVar6->fields).text;
    if (pSVar9 == (System_String_o *)0x0) {
      pGVar11 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields **)
                 (DAT_057110b0 + 0xb8);
      goto LAB_03b207ca;
    }
  }
  (context->fields).Value = pSVar9;
  il2cpp_runtime_glue(&(context->fields).Value);
  (context->fields).Index = index;
  pGVar4 = (__this->fields)._options;
  if (pGVar4 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
LAB_03b2086b:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (-1 < index) {
    pGVar5 = (pGVar4->fields)._items;
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)
    goto LAB_03b2086b;
    uVar1 = (uint)pGVar5->max_length;
    if (index < (int)uVar1) {
      uVar12 = uVar1 - 1;
      if (index < (int)(uVar1 - 1)) {
        uVar12 = index;
      }
      method_01 = (MethodInfo *)(ulong)uVar12;
      if (uVar1 <= uVar12) {
LAB_03b20870:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (pGVar5->m_Items[(int)uVar12] ==
          (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto LAB_03b2086b;
      uVar7 = (undefined1)(pGVar5->m_Items[(int)uVar12]->fields).enabled;
      goto LAB_03b20825;
    }
  }
  uVar7 = 0;
  method_01 = extraout_RDX;
LAB_03b20825:
  *(undefined1 *)&(context->fields).Enabled = uVar7;
  *(bool *)((long)&(context->fields).Enabled + 1) = (__this->fields)._index == index;
  *(char *)((long)&(context->fields).Enabled + 2) = (char)closedValue;
  if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
    il2cpp_init_class();
    method_01 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__TryRender
            ((System_String_o *)pGVar3,context,method_01);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$NotifyChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__NotifyChanged (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t source, const MethodInfo* method);
// 0x3b21230

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__NotifyChanged
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t source,
               MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c *pGVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  bool_conflict bVar7;
  UnityEngine_GameObject_o *pUVar8;
  VirtualInvokeData *pVVar9;
  long lVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_70;
  undefined8 local_68;
  System_String_o *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_48;
  int32_t iStack_40;
  undefined4 uStack_3c;
  
  if (DAT_05701573 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IGisketchActionHandler);
    DAT_05701573 = '\x01';
  }
  pGVar2 = (__this->fields)._node;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar7 = System_String__IsNullOrEmpty((pGVar2->fields).action,(MethodInfo *)0x0);
    if (((char)bVar7 == '\0') &&
       (pGVar3 = (__this->fields)._actions,
       pGVar3 != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0)) {
      pGVar2 = (__this->fields)._node;
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar4 = (pGVar2->fields).id;
      local_60 = (pGVar2->fields).action;
      pUVar8 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pGVar2 = (__this->fields)._node;
      uStack_78 = (UnityEngine_GameObject_o *)0x0;
      pGStack_70 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      local_68 = 0;
      local_80 = pSVar4;
      il2cpp_runtime_glue(&local_80,pSVar4);
      uStack_78 = pUVar8;
      il2cpp_runtime_glue(&uStack_78,pUVar8);
      pGStack_70 = pGVar2;
      il2cpp_runtime_glue(&pGStack_70,pGVar2);
      local_68 = CONCAT44(local_68._4_4_,source);
      local_48 = pGStack_70;
      uStack_3c = local_68._4_4_;
      local_58 = (undefined4)local_80;
      uStack_54 = local_80._4_4_;
      uStack_50 = (undefined4)uStack_78;
      uStack_4c = uStack_78._4_4_;
      pGVar5 = pGVar3->klass;
      uVar1._0_1_ = (pGVar5->_2).rank;
      uVar1._1_1_ = (pGVar5->_2).minimumAlignment;
      iStack_40 = source;
      if ((ulong)uVar1 != 0) {
        pIVar6 = (pGVar5->_1).interfaceOffsets;
        lVar10 = 0;
        do {
          if (*(long *)((long)&pIVar6->interfaceType + lVar10) == TypeInfo_IGisketchActionHandler) {
            pVVar9 = pGVar5->vtable + *(int *)((long)&pIVar6->offset + lVar10);
            goto LAB_03b2138d;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar10);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pGVar3,TypeInfo_IGisketchActionHandler,0);
LAB_03b2138d:
      (*pVVar9->methodPtr)(pGVar3,local_60,pVVar9->method);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetArrow
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, System_String_o* icon, const MethodInfo* method);
// 0x3b1e8b0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,System_String_o *icon,
               MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *value;
  
  if (DAT_05701574 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponentInChildren_Image);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"AoTTG Button Icon");
    DAT_05701574 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._arrow;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar2 = (__this->fields)._arrow;
    if ((pUVar2 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03b1ea36;
    pUVar4 = UnityEngine_Transform__Find(pUVar4,"AoTTG Button Icon",(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._arrow;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = (UnityEngine_UI_Image_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar2 = (__this->fields)._arrow;
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03b1ea36;
      __this_00 = (UnityEngine_UI_Image_o *)
                  UnityEngine_GameObject__GetComponentInChildren<object>(pUVar2,MethodInfo_Image_GetComponentInChildren_Image);
    }
  }
  else {
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03b1ea36;
    __this_00 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar4,MethodInfo_Image_GetComponent_Image);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar3 == '\0') {
    return;
  }
  value = Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load(icon,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_UI_Image__set_sprite(__this_00,value,(MethodInfo *)0x0);
    return;
  }
LAB_03b1ea36:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$OptionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionId (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, const MethodInfo* method);
// 0x3b1fea0

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionId
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,MethodInfo *method)

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = index;
  if (DAT_05701575 == '\0') {
    il2cpp_init_method_metadata(&"-option-");
    DAT_05701575 = '\x01';
  }
  pSVar1 = (__this->fields)._id;
  str2 = System_Int32__ToString((int32_t)&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,"-option-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$FindDeep
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x3b20100

/* WARNING: Removing unreachable block (ram,0x03b203ee) */

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  System_String_o *a;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_Transform_o *x;
  long *plVar10;
  undefined8 *puVar11;
  MethodInfo *method_00;
  long lVar12;
  long lVar13;
  int iVar14;
  UnityEngine_Transform_o *pUVar15;
  undefined1 auVar16 [16];
  
  if (DAT_05701576 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    DAT_05701576 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar15 = (UnityEngine_Transform_o *)0x0;
  if ((char)bVar7 == '\0') {
    if (root == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar7 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
    pUVar15 = root;
    if ((char)bVar7 == '\0') {
      pSVar8 = UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        pSVar4 = pSVar8->klass;
        uVar2._0_1_ = (pSVar4->_2).rank;
        uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
              goto LAB_03b20243;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar12);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,0);
LAB_03b20243:
        cVar6 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        if (cVar6 == '\0') {
          iVar14 = 7;
          x = (UnityEngine_Transform_o *)0x0;
          goto LAB_03b20345;
        }
        pSVar4 = pSVar8->klass;
        uVar3._0_1_ = (pSVar4->_2).rank;
        uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar9 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar12) + 1);
              goto LAB_03b202c8;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar12);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,1);
LAB_03b202c8:
        auVar16 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        method_00 = auVar16._8_8_;
        pUVar15 = auVar16._0_8_;
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          bVar1 = (TypeInfo_Transform->_2).naturalAligment;
          method_00 = (MethodInfo *)(ulong)bVar1;
          if (((pUVar15->klass->_2).naturalAligment < bVar1) ||
             ((pUVar15->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_Transform))
          {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pUVar15);
          }
        }
        x = Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep(pUVar15,name,method_00);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while ((char)bVar7 == '\0');
      iVar14 = 6;
LAB_03b20345:
      plVar10 = (long *)il2cpp_runtime_glue(pSVar8,TypeInfo_IDisposable);
      if (plVar10 != (long *)0x0) {
        lVar12 = *plVar10;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
              puVar11 = (undefined8 *)
                        (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 +
                        0x138);
              goto LAB_03b203ad;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IDisposable,0);
LAB_03b203ad:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      pUVar15 = (UnityEngine_Transform_o *)0x0;
      if (iVar14 == 6) {
        pUVar15 = x;
      }
    }
  }
  return pUVar15;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b21530

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_00;
  
  if (DAT_05701577 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdow);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchDropdownItemFeedback);
    DAT_05701577 = '\x01';
  }
  (__this->fields)._maxVisibleItems = 8;
  __this_00 = (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)
              il2cpp_runtime_glue(TypeInfo_List_GisketchDropdownItemFeedback);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdow);
  (__this->fields)._feedback = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._feedback);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



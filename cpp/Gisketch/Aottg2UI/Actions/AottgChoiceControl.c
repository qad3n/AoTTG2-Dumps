// Type: Gisketch.Aottg2UI.Actions.AottgChoiceControl
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceControl.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass21_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x3b8aa60

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass21_0$$<Open>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0___Open_b__0 (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x3b8d710

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0___Open_b__0
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass21_0_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Threading_CancellationTokenSource_o *pSVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *pSVar3;
  Il2CppArrayBounds *pIVar4;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  int32_t index;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_01;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  
  if (g_data_057a9ea7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"down");
    g_data_057a9ea7 = '\x01';
    in_RDX = extraout_RDX;
  }
  __this_01 = (__this->fields).__4__this;
  if (__this_01 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSVar2 = (__this_01->fields).m_CancellationTokenSource;
    if ((pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0) &&
       (__this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)(pSVar2->fields)._kernelEvent,
       __this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0)) {
      pSVar3 = (pSVar2->fields)._registeredCallbacksLists;
      index = (int32_t)(__this_01->fields).m_CachedPtr;
      if (g_data_057a9c87 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9c87 = '\x01';
      }
      if (*(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1) {
        index = (__this_00->fields)._selectedIndex;
      }
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select
                (__this_00,index,(Gisketch_Aottg2UI_GisketchUIRoot_o *)pSVar3,in_RCX);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if ((char)(__this_01->fields).m_CachedPtr == '\0') {
      return;
    }
    pSVar2 = (__this_01->fields).m_CancellationTokenSource;
    if ((pSVar2 != (System_Threading_CancellationTokenSource_o *)0x0) &&
       (pSVar3 = (pSVar2->fields)._registeredCallbacksLists,
       pSVar3 != (System_Threading_SparselyPopulatedArray_CancellationCallbackInfo__array *)0x0)) {
      pIVar4 = pSVar3->bounds;
      __this_01 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
      UVar7 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      if (pIVar4 != (Il2CppArrayBounds *)0x0) {
        if ((char)pIVar4[7].length != '\0') {
          uVar1 = *(undefined8 *)((long)&pIVar4[7].length + 4);
          fVar5 = UVar7.fields.x - (float)uVar1;
          fVar6 = UVar7.fields.y - (float)((ulong)uVar1 >> 0x20);
          if (fVar6 * fVar6 + fVar5 * fVar5 < 4.0) {
            return;
          }
          *(undefined1 *)&pIVar4[7].length = 0;
        }
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    (__this_01->fields)._id = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields)._id);
    return;
  }
  if ((__this->fields).version != (__this_01->fields)._openVersion) {
    return;
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow(__this_01,"down",in_RDX);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x3b8c2a0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass26_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o* __this, const MethodInfo* method);
// 0x3b8c2b0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass26_1$$<WireOptions>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1___WireOptions_b__0 (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o* __this, const MethodInfo* method);
// 0x3b8d760

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1___WireOptions_b__0
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o *pGVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  long lVar3;
  MethodInfo *in_RCX;
  int32_t index;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  
  pGVar1 = (__this->fields).CS___8__locals1;
  if ((pGVar1 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o *)0x0) &&
     (__this_00 = (pGVar1->fields).__4__this,
     __this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0)) {
    pGVar2 = (pGVar1->fields).root;
    index = (__this->fields).index;
    if (g_data_057a9c87 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9c87 = '\x01';
    }
    if (*(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1) {
      index = (__this_00->fields)._selectedIndex;
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select(__this_00,index,pGVar2,in_RCX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((char)(__this->fields).index == '\0') {
    return;
  }
  pGVar1 = (__this->fields).CS___8__locals1;
  if ((pGVar1 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o *)0x0) &&
     (pGVar2 = (pGVar1->fields).root, pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) {
    lVar3 = (pGVar2->fields).m_CachedPtr;
    __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o *)0x0;
    UVar6 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x70) != '\0') {
        fVar4 = UVar6.fields.x - (float)*(undefined8 *)(lVar3 + 0x74);
        fVar5 = UVar6.fields.y - (float)((ulong)*(undefined8 *)(lVar3 + 0x74) >> 0x20);
        if (fVar5 * fVar5 + fVar4 * fVar4 < 4.0) {
          return;
        }
        *(undefined1 *)(lVar3 + 0x70) = 0;
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this[1].klass = (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_c *)method;
  il2cpp_runtime_helper_022b4080(__this + 1);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass26_2$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2_o* __this, const MethodInfo* method);
// 0x3b8c6d0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl.<>c__DisplayClass26_2$$<WireOptions>b__1
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2___WireOptions_b__1 (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2_o* __this, const MethodInfo* method);
// 0x3b8d7d0

bool_conflict
Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2___WireOptions_b__1
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o *pGVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o *pGVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar4;
  bool_conflict bVar5;
  undefined8 extraout_RAX;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  
  if ((char)(__this->fields).enabled == '\0') {
    return 0;
  }
  pGVar2 = (__this->fields).CS___8__locals2;
  if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_1_o *)0x0) &&
     (pGVar3 = (pGVar2->fields).CS___8__locals1,
     pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_0_o *)0x0)) {
    pGVar4 = (pGVar3->fields).__4__this;
    __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2_o *)0x0;
    UVar8 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      if ((char)(pGVar4->fields)._pointerSelectionLocked != '\0') {
        UVar1 = (pGVar4->fields)._pointerLockPosition.fields;
        fVar6 = UVar8.fields.x - UVar1.x;
        fVar7 = UVar8.fields.y - UVar1.y;
        if (fVar7 * fVar7 + fVar6 * fVar6 < 4.0) {
          return 0;
        }
        *(undefined1 *)&(pGVar4->fields)._pointerSelectionLocked = 0;
      }
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this[1].klass = (Gisketch_Aottg2UI_Actions_AottgChoiceControl___c__DisplayClass26_2_c *)method;
  bVar5 = il2cpp_runtime_helper_022b4080(__this + 1);
  return bVar5;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* value, System_String_array* options, TMPro_TextMeshProUGUI_o* label, int32_t maxVisibleItems, UnityEngine_GameObject_o* arrow, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, const MethodInfo* method);
// 0x3b8a220

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *value,
               System_String_array *options,TMPro_TextMeshProUGUI_o *label,int32_t maxVisibleItems,
               UnityEngine_GameObject_o *arrow,Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,
               Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,MethodInfo *method)

{
  void *pvVar1;
  UnityEngine_Component_o *__this_00;
  char *pcVar2;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_01;
  System_String_Fields SVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  UnityEngine_Object_o *__this_02;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar7;
  Il2CppObject *__this_03;
  long lVar8;
  Il2CppClass *pIVar9;
  Il2CppClass *pIVar10;
  long lVar11;
  UnityEngine_GameObject_o *pUVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node_00;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  System_String_array *pSVar16;
  uint uVar17;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  long *plVar18;
  MethodInfo *pMVar19;
  MethodInfo *method_03;
  ulong uVar20;
  uint uVar21;
  Il2CppClass *pIVar22;
  Il2CppClass *__this_04;
  TMPro_TextMeshProUGUI_o *method_04;
  undefined4 in_register_0000008c;
  MethodInfo *method_05;
  uint uVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined4 in_stack_fffffffffffffea0;
  undefined4 in_stack_fffffffffffffea4;
  undefined4 in_stack_fffffffffffffea8;
  undefined4 in_stack_fffffffffffffeac;
  undefined4 in_stack_fffffffffffffeb0;
  undefined4 in_stack_fffffffffffffeb4;
  undefined4 in_stack_fffffffffffffeb8;
  undefined4 in_stack_fffffffffffffebc;
  System_String_o SStack_140;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  Il2CppClass *pIStack_100;
  Il2CppClass *pIStack_f8;
  Il2CppClass *pIStack_f0;
  Il2CppClass *pIStack_e8;
  System_String_array *pSStack_e0;
  undefined8 uStack_d8;
  Il2CppClass *pIStack_d0;
  MethodInfo *pMStack_c8;
  Il2CppClass *pIStack_c0;
  Il2CppClass *pIStack_b8;
  long lStack_b0;
  Il2CppClass *pIStack_a8;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGStack_a0;
  Il2CppClass *pIStack_98;
  System_String_array *pSStack_90;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGStack_88;
  TMPro_TextMeshProUGUI_o *pTStack_80;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_78;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGStack_70;
  System_String_o *pSStack_68;
  
  method_05 = (MethodInfo *)CONCAT44(in_register_0000008c,maxVisibleItems);
  (__this->fields)._node = node;
  pSVar16 = options;
  method_04 = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._node);
  (__this->fields)._actions = actions;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._actions);
  if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (bVar4 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0), (char)bVar4 == '\0')) {
    pSVar6 = (node->fields).id;
label_03b8a2b4:
    (__this->fields)._id = pSVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._id);
    pGVar7 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Create
                       (node,value,options,localizer,(MethodInfo *)method_04);
    (__this->fields)._options = pGVar7;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._options,pGVar7);
    iVar5 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf(__this,value,method_00);
    (__this->fields)._index = iVar5;
    (__this->fields)._label = label;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._label,label);
    iVar5 = 8;
    if (0 < maxVisibleItems) {
      iVar5 = maxVisibleItems;
    }
    (__this->fields)._maxVisibleItems = iVar5;
    (__this->fields)._arrow = arrow;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._arrow);
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel(__this,(MethodInfo *)arrow);
    return;
  }
  pIVar9 = (Il2CppClass *)0x0;
  pIVar10 = (Il2CppClass *)__this;
  __this_02 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_Object_o *)0x0) {
    pSVar6 = UnityEngine_Object__get_name(__this_02,(MethodInfo *)0x0);
    goto label_03b8a2b4;
  }
  auVar25 = il2cpp_runtime_helper_022b2c90();
  lVar8 = auVar25._8_8_;
  pSStack_90 = auVar25._0_8_;
  pGStack_70 = actions;
  pGStack_88 = __this;
  pTStack_80 = label;
  pGStack_78 = node;
  pSStack_68 = value;
  if (g_data_057a9ea9 == '\0') {
    pIStack_98 = (Il2CppClass *)0x3b8a37c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChoiceOptions);
    pIStack_98 = (Il2CppClass *)0x3b8a388;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    pIStack_98 = (Il2CppClass *)0x3b8a394;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionDefinition);
    pIStack_98 = (Il2CppClass *)0x3b8a3a0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    g_data_057a9ea9 = '\x01';
  }
  if (((pIVar10 != (Il2CppClass *)0x0) &&
      (node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(pIVar10->_1).implementedInterfaces,
      (Il2CppClass *)node != (Il2CppClass *)0x0)) && ((((Il2CppClass *)node)->_1).namespaze != (char *)0x0)) {
    pIStack_98 = (Il2CppClass *)0x3b8a3ce;
    __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgChoiceOptions);
    pIStack_98 = (Il2CppClass *)0x3b8a3db;
    System_Object___ctor(__this_03,(MethodInfo *)0x0);
    __this_03[1].klass = (Il2CppClass *)node;
    pIStack_98 = (Il2CppClass *)0x3b8a3eb;
    il2cpp_runtime_helper_022b4080(__this_03 + 1,node);
    goto label_03b8a56c;
  }
  pSStack_90 = pSVar16;
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
    pMVar19 = (MethodInfo *)0x1;
    pIStack_98 = (Il2CppClass *)0x3b8a415;
    pIVar22 = TypeInfo_string;
    lVar8 = il2cpp_runtime_helper_022b2a40();
    if (pIVar9 == (Il2CppClass *)0x0) {
      pIVar9 = (Il2CppClass *)**(long **)(g_data_057b9c00 + 0xb8);
    }
    if (lVar8 == 0) goto label_03b8a5eb;
    if (*(int *)(lVar8 + 0x18) != 0) {
      *(Il2CppClass **)(lVar8 + 0x20) = pIVar9;
      pIStack_98 = (Il2CppClass *)0x3b8a45e;
      il2cpp_runtime_helper_022b4080(lVar8 + 0x20,pIVar9);
      goto label_03b8a45e;
    }
    goto label_03b8a5d1;
  }
label_03b8a45e:
  pIStack_98 = (Il2CppClass *)0x3b8a472;
  pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchChoiceOptionDefinition);
  if (0 < *(int *)(lVar8 + 0x18)) {
    if (pIVar9 == (Il2CppClass *)0x0) {
      pIStack_98 = (Il2CppClass *)0x3b8a59d;
      pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
      pMVar19 = (MethodInfo *)0x0;
      pIStack_98 = (Il2CppClass *)0x3b8a5aa;
      pIVar22 = pIVar10;
      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)pIVar10,(MethodInfo *)0x0);
      if (*(int *)(lVar8 + 0x18) == 0) {
label_03b8a5d1:
        pIStack_98 = (Il2CppClass *)0x3b8a5d6;
        il2cpp_runtime_helper_022b2ca0();
      }
      else {
        if (pIVar10 == (Il2CppClass *)0x0) goto label_03b8a5eb;
        (pIVar10->_1).name = *(char **)(lVar8 + 0x20);
        pIStack_98 = (Il2CppClass *)0x3b8a5c9;
        il2cpp_runtime_helper_022b4080(&(pIVar10->_1).name);
        if (*(int *)(lVar8 + 0x18) == 0) goto label_03b8a5d1;
      }
      pMVar19 = *(MethodInfo **)(lVar8 + 0x20);
      pIVar22 = (Il2CppClass *)&(pIVar10->_1).namespaze;
      (pIVar10->_1).namespaze = (char *)pMVar19;
      pIStack_98 = (Il2CppClass *)0x3b8a5eb;
      il2cpp_runtime_helper_022b4080();
label_03b8a5eb:
      pIStack_98 = (Il2CppClass *)Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf;
      il2cpp_runtime_helper_022b2c90();
      lVar11 = *(long *)&(pIVar22->_1).byval_arg.bits;
      pIStack_b8 = pIVar10;
      lStack_b0 = lVar8;
      pIStack_a8 = (Il2CppClass *)node;
      pGStack_a0 = actions;
      pIStack_98 = pIVar9;
      if (lVar11 != 0) {
        uVar23 = 0;
        method_03 = pMVar19;
        pIVar9 = pIVar22;
        do {
          lVar8 = *(long *)(lVar11 + 0x10);
          if (lVar8 == 0) break;
          uVar21 = *(uint *)(lVar8 + 0x18);
          if ((int)uVar21 <= (int)uVar23) {
            return;
          }
          uVar17 = uVar21 - 1;
          if ((int)uVar23 < (int)(uVar21 - 1)) {
            uVar17 = uVar23;
          }
          if (uVar21 <= uVar17) {
            pIStack_c0 = (Il2CppClass *)Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel;
            il2cpp_runtime_helper_022b2ca0();
            __this_04 = pIVar9;
            pIStack_d0 = pIVar10;
            pMStack_c8 = pMVar19;
            pIStack_c0 = pIVar22;
            if (g_data_057a9ea0 == '\0') {
              __this_04 = (Il2CppClass *)&TypeInfo_Object;
              uStack_d8 = 0x3b8a6dd;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9ea0 = '\x01';
            }
            pIVar22 = (pIVar9->_1).castClass;
            if (pIVar22 == (Il2CppClass *)0x0) {
label_03b8a780:
              pIVar10 = (pIVar9->_1).this_arg.data;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                uStack_d8 = 0x3b8a79c;
                il2cpp_runtime_helper_02337ed0();
              }
              method_03 = (MethodInfo *)0x0;
              uStack_d8 = 0x3b8a7a8;
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pIVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if ((char)bVar4 == '\0') {
                return;
              }
              __this_04 = *(Il2CppClass **)&(pIVar9->_1).byval_arg.bits;
              if (__this_04 != (Il2CppClass *)0x0) {
                pIVar10 = (pIVar9->_1).this_arg.data;
                uVar23 = *(uint *)&(pIVar9->_1).parent;
                method_03 = (MethodInfo *)(ulong)uVar23;
                uStack_d8 = 0x3b8a7c2;
                pMVar19 = (MethodInfo *)
                          Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
                                    ((Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)__this_04,uVar23,
                                     method_01);
                if (pIVar10 != (Il2CppClass *)0x0) {
                  pvVar1 = (pIVar10->_1).image;
                  uStack_d8 = 0x3b8a7dd;
                  (**(code **)((long)pvVar1 + 0x558))(pIVar10,pMVar19,*(undefined8 *)((long)pvVar1 + 0x560));
                  __this_00 = (pIVar9->_1).this_arg.data;
                  __this_04 = (Il2CppClass *)0x0;
                  method_03 = pMVar19;
                  if (__this_00 != (UnityEngine_Component_o *)0x0) {
                    iVar5 = *(int32_t *)&(pIVar9->_1).parent;
                    uStack_d8 = 0x3b8a7f1;
                    pUVar12 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
                              ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pIVar9,iVar5,pUVar12,
                               (pIVar9->_1).this_arg.data,1,method_05);
                    return;
                  }
                }
              }
label_03b8a813:
              uStack_d8 = 0x3b8a818;
              il2cpp_runtime_helper_022b2c90();
            }
            else {
              lVar8 = *(long *)&(pIVar9->_1).byval_arg.bits;
              if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) goto label_03b8a813;
              uVar23 = *(uint *)&(pIVar9->_1).parent;
              uVar21 = *(uint *)(lVar8 + 0x18);
              method_03 = (MethodInfo *)(ulong)uVar21;
              uVar17 = uVar21 - 1;
              if ((int)uVar23 < (int)(uVar21 - 1)) {
                uVar17 = uVar23;
              }
              __this_04 = (Il2CppClass *)(ulong)uVar17;
              uVar14 = 0;
              if (-1 < (int)uVar23) {
                uVar14 = uVar17;
              }
              if (uVar14 < uVar21) {
                lVar8 = *(long *)(lVar8 + 0x20 + (long)(int)uVar14 * 8);
                pIVar10 = (Il2CppClass *)0x0;
                if (lVar8 == 0) goto label_03b8a813;
                uStack_d8 = 0x3b8a745;
                bVar4 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar8 + 0x10),(MethodInfo *)0x0);
                if ((char)bVar4 == '\0') {
                  plVar18 = (long *)(lVar8 + 0x10);
label_03b8a76d:
                  pIVar10 = (Il2CppClass *)*plVar18;
                }
                else {
                  pIVar10 = *(Il2CppClass **)(lVar8 + 0x18);
                  if (pIVar10 == (Il2CppClass *)0x0) {
                    plVar18 = *(long **)(g_data_057b9c00 + 0xb8);
                    goto label_03b8a76d;
                  }
                }
                (pIVar22->_1).declaringType = pIVar10;
                pIVar22 = (Il2CppClass *)&(pIVar22->_1).declaringType;
                uStack_d8 = 0x3b8a780;
                il2cpp_runtime_helper_022b4080(pIVar22);
                goto label_03b8a780;
              }
            }
            uStack_d8 = 0x3b8a81d;
            auVar24 = il2cpp_runtime_helper_022b2ca0();
            uStack_d8 = auVar24._0_8_;
            pcVar2 = (__this_04->_1).name;
            if (pcVar2 == (char *)0x0) goto label_03b8a8ab;
            uVar23 = (uint)*(undefined8 *)(pcVar2 + 0x18);
            if ((int)uVar23 < 1) goto label_03b8a88f;
            uVar21 = auVar24._8_4_ + (int)method_03 + uVar23;
            iVar15 = 1;
            goto label_03b8a85b;
          }
          pIVar10 = *(Il2CppClass **)(lVar8 + 0x20 + (long)(int)uVar17 * 8);
          if (pIVar10 == (Il2CppClass *)0x0) break;
          pIStack_c0 = (Il2CppClass *)0x3b8a657;
          bVar4 = System_String__IsNullOrEmpty
                            ((System_String_o *)
                             ((UnityEngine_Object_Fields *)&(pIVar10->_1).name)->m_CachedPtr,(MethodInfo *)0x0
                            );
          if ((char)bVar4 == '\0') {
            pIVar10 = (Il2CppClass *)&(pIVar10->_1).name;
label_03b8a684:
            pIVar9 = (pIVar10->_1).image;
          }
          else {
            pIVar9 = (Il2CppClass *)(pIVar10->_1).namespaze;
            if (pIVar9 == (Il2CppClass *)0x0) {
              pIVar10 = *(Il2CppClass **)(g_data_057b9c00 + 0xb8);
              goto label_03b8a684;
            }
          }
          pIStack_c0 = (Il2CppClass *)0x3b8a691;
          method_03 = pMVar19;
          bVar4 = System_String__op_Equality
                            ((System_String_o *)pIVar9,(System_String_o *)pMVar19,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            return;
          }
          uVar23 = uVar23 + 1;
          lVar11 = *(long *)&(pIVar22->_1).byval_arg.bits;
        } while (lVar11 != 0);
      }
      pIStack_c0 = (Il2CppClass *)0x3b8a6ab;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    pSVar16 = (System_String_array *)(lVar8 + 0x20);
    node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pIVar9->_1).byval_arg;
    actions = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0;
    do {
      pIStack_98 = (Il2CppClass *)0x3b8a4af;
      pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionDefinition);
      pMVar19 = (MethodInfo *)0x0;
      pIStack_98 = (Il2CppClass *)0x3b8a4bc;
      pIVar22 = pIVar10;
      Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)pIVar10,(MethodInfo *)0x0);
      if ((Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)(ulong)*(uint *)(lVar8 + 0x18) <= actions)
      goto label_03b8a5d1;
      if (pIVar10 == (Il2CppClass *)0x0) goto label_03b8a5eb;
      (pIVar10->_1).name = (char *)(pSVar16->obj).klass;
      pIStack_98 = (Il2CppClass *)0x3b8a4e4;
      il2cpp_runtime_helper_022b4080(&(pIVar10->_1).name);
      if ((Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)(ulong)*(uint *)(lVar8 + 0x18) <= actions)
      goto label_03b8a5d1;
      (pIVar10->_1).namespaze = (char *)(pSVar16->obj).klass;
      pIStack_98 = (Il2CppClass *)0x3b8a506;
      il2cpp_runtime_helper_022b4080(&(pIVar10->_1).namespaze);
      if ((Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)(ulong)*(uint *)&(pIVar9->_1).namespaze <=
          actions) goto label_03b8a5d1;
      (((Il2CppClass *)node)->_1).image = pIVar10;
      pIStack_98 = (Il2CppClass *)0x3b8a522;
      il2cpp_runtime_helper_022b4080(node);
      actions = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)((long)&actions->klass + 1);
      pSVar16 = (System_String_array *)&(pSVar16->obj).monitor;
      node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(((Il2CppClass *)node)->_1).gc_desc;
    } while ((long)actions < (long)*(int *)(lVar8 + 0x18));
  }
  pIStack_98 = (Il2CppClass *)0x3b8a54b;
  __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgChoiceOptions);
  pIStack_98 = (Il2CppClass *)0x3b8a558;
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  __this_03[1].klass = pIVar9;
  pIStack_98 = (Il2CppClass *)0x3b8a568;
  il2cpp_runtime_helper_022b4080(__this_03 + 1,pIVar9);
  pSVar16 = pSStack_90;
label_03b8a56c:
  __this_03[1].monitor = pSVar16;
  pIStack_98 = (Il2CppClass *)0x3b8a57c;
  il2cpp_runtime_helper_022b4080(&__this_03[1].monitor,pSVar16);
  return;
label_03b8a85b:
  __this_04 = (Il2CppClass *)(ulong)uVar21;
  uVar17 = (int)uVar21 % (int)uVar23;
  if ((-1 < (int)uVar23) && (-1 < (int)uVar17)) {
    uVar14 = uVar23 - 1;
    if ((int)uVar17 < (int)(uVar23 - 1)) {
      uVar14 = uVar17;
    }
    if (uVar23 <= uVar14) goto label_03b8a8b0;
    if (*(long *)(pcVar2 + (long)(int)uVar14 * 8 + 0x20) == 0) goto label_03b8a8ab;
    if (*(char *)(*(long *)(pcVar2 + (long)(int)uVar14 * 8 + 0x20) + 0x28) != '\0') {
      return;
    }
  }
  iVar15 = iVar15 + 1;
  uVar21 = uVar21 + auVar24._8_4_;
  if ((int)uVar23 < iVar15) {
label_03b8a88f:
    if ((int)method_03 < 0) {
      return;
    }
    return;
  }
  goto label_03b8a85b;
label_03b8a8ab:
  pSStack_e0 = (System_String_array *)0x3b8a8b0;
  il2cpp_runtime_helper_022b2c90();
label_03b8a8b0:
  pSStack_e0 = (System_String_array *)0x3b8a8b5;
  auVar25 = il2cpp_runtime_helper_022b2ca0();
  pIStack_f0 = auVar25._0_8_;
  lVar8 = *(long *)&(__this_04->_1).byval_arg.bits;
  pIStack_e8 = pIVar10;
  pSStack_e0 = pSVar16;
  if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) {
label_03b8a93b:
    pIStack_f8 = (Il2CppClass *)0x3b8a940;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar23 = *(uint *)(lVar8 + 0x18);
    uVar21 = uVar23 - 1;
    if ((int)method_03 < 0) {
      method_03 = (MethodInfo *)0x0;
      if ((int)uVar23 < 1) {
        return;
      }
    }
    else {
      if (((int)uVar21 < (int)method_03) && (method_03 = (MethodInfo *)(ulong)uVar21, (int)uVar21 < 0)) {
        return;
      }
      if ((int)uVar23 <= (int)method_03) {
        return;
      }
    }
    uVar17 = (uint)method_03;
    if ((int)uVar17 < (int)uVar21) {
      uVar21 = uVar17;
    }
    pIVar10 = __this_04;
    if (uVar21 < uVar23) {
      lVar8 = *(long *)(lVar8 + 0x20 + (long)(int)uVar21 * 8);
      if (lVar8 != 0) {
        if ((*(char *)(lVar8 + 0x28) == '\0') || (uVar17 == *(uint *)&(__this_04->_1).parent)) {
          return;
        }
        *(uint *)&(__this_04->_1).parent = uVar17;
        pIStack_f8 = (Il2CppClass *)0x3b8a91e;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                  ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_04,method_03);
        pIStack_f8 = (Il2CppClass *)&g_data_057b9b70;
        pIStack_100 = pIStack_e8;
        pIStack_f0 = pIVar9;
        pIStack_e8 = pIVar22;
        if (g_data_057a9ea2 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
          g_data_057a9ea2 = '\x01';
        }
        pIVar9 = (__this_04->_1).castClass;
        if (pIVar9 == (Il2CppClass *)0x0) {
          return;
        }
        pIVar9 = (pIVar9->_1).castClass;
        uVar20 = 0;
        bVar4 = System_String__IsNullOrEmpty((System_String_o *)pIVar9,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return;
        }
        pIVar10 = (__this_04->_1).declaringType;
        if (pIVar10 == (Il2CppClass *)0x0) {
          return;
        }
        pIVar22 = (__this_04->_1).castClass;
        if (pIVar22 != (Il2CppClass *)0x0) {
          pUVar12 = (UnityEngine_GameObject_o *)(pIVar22->_1).namespaze;
          pIVar9 = (pIVar22->_1).castClass;
          node_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
          SStack_140.fields._stringLength = 0;
          SStack_140.fields._firstChar = 0;
          SStack_140.fields._6_2_ = 0;
          uStack_128 = 0;
          SStack_140.klass = (System_String_c *)0x0;
          SStack_140.monitor = (void *)0x0;
          __this_01.fields.ElementId._4_4_ = in_stack_fffffffffffffea4;
          __this_01.fields.ElementId._0_4_ = in_stack_fffffffffffffea0;
          __this_01.fields.GameObject._0_4_ = in_stack_fffffffffffffea8;
          __this_01.fields.GameObject._4_4_ = in_stack_fffffffffffffeac;
          __this_01.fields.Node._0_4_ = in_stack_fffffffffffffeb0;
          __this_01.fields.Node._4_4_ = in_stack_fffffffffffffeb4;
          __this_01.fields.InputSource = in_stack_fffffffffffffeb8;
          __this_01.fields._28_4_ = in_stack_fffffffffffffebc;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
                    (__this_01,&SStack_140,pUVar12,node_00,(int32_t)(__this_04->_1).castClass,
                     (MethodInfo *)(auVar25._8_8_ & 0xffffffff));
          SVar3 = SStack_140.fields;
          uStack_110._0_4_ = SStack_140.fields._stringLength;
          uStack_110._4_2_ = SStack_140.fields._firstChar;
          uStack_110._6_2_ = SStack_140.fields._6_2_;
          uStack_108._0_4_ = (undefined4)uStack_128;
          uStack_108._4_4_ = uStack_128._4_4_;
          uStack_120 = SStack_140.klass._0_4_;
          uStack_11c = SStack_140.klass._4_4_;
          uStack_118 = SStack_140.monitor._0_4_;
          uStack_114 = SStack_140.monitor._4_4_;
          pvVar1 = (pIVar10->_1).image;
          SStack_140.fields = SVar3;
          if ((ulong)*(ushort *)((long)pvVar1 + 0x12e) != 0) {
            lVar8 = 0;
            do {
              if (*(long *)(*(long *)((long)pvVar1 + 0xb0) + lVar8) == TypeInfo_IGisketchActionHandler) {
                puVar13 = (undefined8 *)
                          ((long)pvVar1 +
                          (long)*(int *)(*(long *)((long)pvVar1 + 0xb0) + 8 + lVar8) * 0x10 + 0x138);
                goto label_03b8d4fd;
              }
              lVar8 = lVar8 + 0x10;
            } while ((ulong)*(ushort *)((long)pvVar1 + 0x12e) << 4 != lVar8);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar10,TypeInfo_IGisketchActionHandler,0);
label_03b8d4fd:
          (*(code *)*puVar13)(pIVar10,pIVar9,puVar13[1]);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        pcVar2 = (pIVar9->_1).name;
        if (pcVar2 != (char *)0x0) {
          uVar23 = *(uint *)(pcVar2 + 0x18) - 1;
          pIVar9 = (Il2CppClass *)(ulong)uVar23;
          if ((int)uVar20 < (int)uVar23) {
            pIVar9 = (Il2CppClass *)(uVar20 & 0xffffffff);
          }
          uVar23 = 0;
          if (-1 < (int)uVar20) {
            uVar23 = (uint)pIVar9;
          }
          if (*(uint *)(pcVar2 + 0x18) <= uVar23) goto label_03b8d59f;
          lVar8 = *(long *)(pcVar2 + (long)(int)uVar23 * 8 + 0x20);
          if (lVar8 != 0) {
            bVar4 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar8 + 0x10),(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              return;
            }
            if (*(long *)(lVar8 + 0x18) == 0) {
              return;
            }
            return;
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_03b8d59f:
        il2cpp_runtime_helper_022b2ca0();
        System_Object___ctor((Il2CppObject *)pIVar9,(MethodInfo *)0x0);
        return;
      }
      goto label_03b8a93b;
    }
  }
  pIStack_f8 = (Il2CppClass *)0x3b8a945;
  il2cpp_runtime_helper_022b2ca0();
  if (*(long *)&(__this_04->_1).byval_arg.bits == 0) {
    return;
  }
  pIStack_100 = (Il2CppClass *)0x3b8a960;
  pIVar9 = __this_04;
  pIStack_f8 = pIVar10;
  uVar21 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf
                     ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_04,(System_String_o *)method_03
                      ,method_02);
  uVar23 = (uint)method_03;
  lVar8 = *(long *)&(__this_04->_1).byval_arg.bits;
  if (lVar8 == 0) {
label_03b8a9aa:
    pIStack_100 = (Il2CppClass *)0x3b8a9af;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)uVar21 < 0) {
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x10);
    if (lVar8 == 0) goto label_03b8a9aa;
    uVar17 = *(uint *)(lVar8 + 0x18);
    if ((int)uVar17 <= (int)uVar21) {
      return;
    }
    uVar23 = uVar17 - 1;
    if ((int)uVar21 < (int)(uVar17 - 1)) {
      uVar23 = uVar21;
    }
    if (uVar23 < uVar17) {
      lVar8 = *(long *)(lVar8 + 0x20 + (long)(int)uVar23 * 8);
      if (lVar8 != 0) {
        if (*(char *)(lVar8 + 0x28) == '\0') {
          return;
        }
        *(uint *)&(__this_04->_1).parent = uVar21;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                  ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_04,(MethodInfo *)(ulong)uVar23);
        return;
      }
      goto label_03b8a9aa;
    }
  }
  pIStack_100 = (Il2CppClass *)0x3b8a9b4;
  pIStack_100 = (Il2CppClass *)il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar23 < 0) {
    return;
  }
  pcVar2 = (pIVar9->_1).name;
  if (pcVar2 != (char *)0x0) {
    uVar21 = *(uint *)(pcVar2 + 0x18);
    if ((int)uVar21 <= (int)uVar23) {
      return;
    }
    if ((int)(uVar21 - 1) <= (int)uVar23) {
      uVar23 = uVar21 - 1;
    }
    if (uVar21 <= uVar23) goto label_03b8aa00;
    if (*(long *)(pcVar2 + (long)(int)uVar23 * 8 + 0x20) != 0) {
      return;
    }
  }
  uStack_108 = 0x3b8aa00;
  il2cpp_runtime_helper_022b2c90();
label_03b8aa00:
  uStack_108 = 0x3b8aa05;
  uStack_108 = il2cpp_runtime_helper_022b2ca0();
  pcVar2 = (pIVar9->_1).name;
  if (pcVar2 != (char *)0x0) {
    uVar23 = *(uint *)(pcVar2 + 0x18);
    if ((int)uVar23 < 1) {
      return;
    }
    uVar21 = 0;
    while (uVar21 < uVar23) {
      pIVar9 = (Il2CppClass *)0x0;
      if (*(long *)(pcVar2 + (long)(int)uVar21 * 8 + 0x20) == 0) goto label_03b8aa59;
      pIVar9 = (Il2CppClass *)(ulong)*(byte *)(*(long *)(pcVar2 + (long)(int)uVar21 * 8 + 0x20) + 0x28);
      uVar21 = uVar21 + 1;
      if ((int)uVar23 <= (int)uVar21) {
        return;
      }
    }
    uStack_110 = 0x3b8aa59;
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b8aa59:
  uStack_110 = 0x3b8aa5e;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pIVar9,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Previous
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Previous (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t source, const MethodInfo* method);
// 0x3b86860

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Previous
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t source,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  uint uVar4;
  MethodInfo *pMVar5;
  uint uVar6;
  MethodInfo *method_00;
  int iVar7;
  int32_t source_00;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  uint uVar8;
  uint uVar9;
  
  pGVar2 = (__this->fields)._options;
  source_00 = source;
  if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
     (pGVar3 = (pGVar2->fields)._items,
     pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
    uVar8 = (__this->fields)._index;
    uVar1 = (uint)pGVar3->max_length;
    pMVar5 = (MethodInfo *)(ulong)uVar1;
    uVar9 = uVar1 - 1;
    if (0 < (int)uVar1) {
      source_00 = uVar8 + uVar1;
      iVar7 = 1;
      do {
        source_00 = source_00 + -1;
        uVar6 = source_00 % (int)uVar1;
        if (-1 < (int)uVar6) {
          uVar4 = uVar9;
          if ((int)uVar6 < (int)uVar9) {
            uVar4 = uVar6;
          }
          if (uVar1 <= uVar4) goto label_03b8690a;
          if (pGVar3->m_Items[(int)uVar4] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
          goto label_03b86905;
          if ((char)(pGVar3->m_Items[(int)uVar4]->fields).enabled != '\0') {
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,uVar6,source,pMVar5);
            return;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 <= (int)uVar1);
    }
    if (-1 < (int)uVar8) {
      if ((int)uVar9 <= (int)uVar8) {
        uVar8 = uVar9;
      }
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,uVar8,source,pMVar5);
      return;
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,0,source,pMVar5);
    return;
  }
label_03b86905:
  il2cpp_runtime_helper_022b2c90();
label_03b8690a:
  il2cpp_runtime_helper_022b2ca0();
  __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)(__this->fields).m_CancellationTokenSource;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next(__this_00,1,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar2 = (__this_00->fields)._options;
  if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
     (pGVar3 = (pGVar2->fields)._items,
     pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
    uVar8 = (__this_00->fields)._index;
    uVar1 = (uint)pGVar3->max_length;
    pMVar5 = (MethodInfo *)(ulong)uVar1;
    uVar9 = uVar1 - 1;
    if (0 < (int)uVar1) {
      iVar7 = 1;
      do {
        uVar6 = (int)(uVar8 + uVar1 + iVar7) % (int)uVar1;
        if (-1 < (int)uVar6) {
          uVar4 = uVar9;
          if ((int)uVar6 < (int)uVar9) {
            uVar4 = uVar6;
          }
          if (uVar1 <= uVar4) goto label_03b869d7;
          if (pGVar3->m_Items[(int)uVar4] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
          goto label_03b869d2;
          if ((char)(pGVar3->m_Items[(int)uVar4]->fields).enabled != '\0') {
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this_00,uVar6,source_00,pMVar5);
            return;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 <= (int)uVar1);
    }
    if (-1 < (int)uVar8) {
      if ((int)uVar9 <= (int)uVar8) {
        uVar8 = uVar9;
      }
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this_00,uVar8,source_00,pMVar5);
      return;
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this_00,0,source_00,pMVar5);
    return;
  }
label_03b869d2:
  il2cpp_runtime_helper_022b2c90();
label_03b869d7:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Next
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t source, const MethodInfo* method);
// 0x3b86930

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t source,MethodInfo *method)

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
          if (uVar1 <= uVar4) goto label_03b869d7;
          if (pGVar3->m_Items[(int)uVar4] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
          goto label_03b869d2;
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
label_03b869d2:
  il2cpp_runtime_helper_022b2c90();
label_03b869d7:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetValueWithoutNotify
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3b8a950

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetValueWithoutNotify
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,System_String_o *value,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  
  if ((__this->fields)._options == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    return;
  }
  __this_00 = __this;
  uVar6 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf(__this,value,method);
  uVar7 = (uint)value;
  pGVar2 = (__this->fields)._options;
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_03b8a9aa:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)uVar6 < 0) {
      return;
    }
    pGVar3 = (pGVar2->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_03b8a9aa;
    uVar1 = (uint)pGVar3->max_length;
    if ((int)uVar1 <= (int)uVar6) {
      return;
    }
    uVar7 = uVar1 - 1;
    if ((int)uVar6 < (int)(uVar1 - 1)) {
      uVar7 = uVar6;
    }
    if (uVar7 < uVar1) {
      if (pGVar3->m_Items[(int)uVar7] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
        if ((char)(pGVar3->m_Items[(int)uVar7]->fields).enabled == '\0') {
          return;
        }
        (__this->fields)._index = uVar6;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel(__this,(MethodInfo *)(ulong)uVar7);
        return;
      }
      goto label_03b8a9aa;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar7 < 0) {
    return;
  }
  lVar4 = (__this_00->fields).m_CachedPtr;
  if (lVar4 != 0) {
    uVar6 = *(uint *)(lVar4 + 0x18);
    if ((int)uVar6 <= (int)uVar7) {
      return;
    }
    if ((int)(uVar6 - 1) <= (int)uVar7) {
      uVar7 = uVar6 - 1;
    }
    if (uVar6 <= uVar7) goto label_03b8aa00;
    if (*(long *)(lVar4 + 0x20 + (long)(int)uVar7 * 8) != 0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b8aa00:
  il2cpp_runtime_helper_022b2ca0();
  lVar4 = (__this_00->fields).m_CachedPtr;
  if (lVar4 != 0) {
    uVar7 = *(uint *)(lVar4 + 0x18);
    if ((int)uVar7 < 1) {
      return;
    }
    uVar6 = 0;
    while (uVar6 < uVar7) {
      lVar5 = *(long *)(lVar4 + 0x20 + (long)(int)uVar6 * 8);
      __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
      if (lVar5 == 0) goto label_03b8aa59;
      __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)(ulong)*(byte *)(lVar5 + 0x28);
      uVar6 = uVar6 + 1;
      if ((int)uVar7 <= (int)uVar6) {
        return;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b8aa59:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$get_CanStep
// il2cpp: bool Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b8a1c0

bool_conflict
Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  bool_conflict bVar4;
  int iVar5;
  bool_conflict extraout_EAX;
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
        __this = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
        if (pGVar3->m_Items[iVar5] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
        goto label_03b8a206;
        iVar6 = iVar6 + (uint)(byte)(pGVar3->m_Items[iVar5]->fields).enabled;
        iVar5 = iVar5 + 1;
      } while (iVar1 != iVar5);
      bVar4 = CONCAT31((int3)((uint)iVar5 >> 8),1 < iVar6);
    }
    return bVar4;
  }
label_03b8a206:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return extraout_EAX;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Open
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Open (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b86030

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Open
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *root;
  Il2CppClass *x;
  UnityEngine_EventSystems_EventSystem_o *pUVar4;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root_00;
  MethodInfo *pMVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UnityEngine_GameObject_o *pUVar8;
  bool bVar9;
  UnityEngine_Vector3_o UVar10;
  
  if (g_data_057a9e97 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChoicePopoverLifetime_AddComponent_AottgChoicePopov);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Open_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&"up");
    il2cpp_runtime_helper_023445d0(&"choice-");
    g_data_057a9e97 = '\x01';
  }
  pIVar3 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  x = pIVar3;
  System_Object___ctor((Il2CppObject *)pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppClass *)0x0) {
    (pIVar3->_1).namespaze = (char *)__this;
    il2cpp_runtime_helper_022b4080(&(pIVar3->_1).namespaze,__this);
    root = (Il2CppClass *)
           UnityEngine_Component__GetComponentInParent_object_((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot)
    ;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    x = root;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return;
    }
    if (root != (Il2CppClass *)0x0) {
      if ((root->_1).events == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        return;
      }
      if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      x = (Il2CppClass *)UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar8 = (UnityEngine_GameObject_o *)0x0;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        x = (Il2CppClass *)0x0;
        pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_EventSystems_EventSystem_o *)0x0) goto label_03b863dc;
        pUVar8 = (pUVar4->fields).m_CurrentSelected;
      }
      if (__this != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
        (__this->fields)._opener = pUVar8;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._opener,pUVar8);
        iVar2 = (__this->fields)._openVersion + 1;
        (__this->fields)._openVersion = iVar2;
        *(int *)&(pIVar3->_1).name = iVar2;
        (__this->fields)._selectedIndex = (__this->fields)._index;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow(__this,"up",method_00);
        __this_00 = (root->_1).events;
        pMVar5 = (MethodInfo *)(__this->fields)._id;
        id = System_String__Concat_3ae5ba0("choice-",(System_String_o *)pMVar5,(MethodInfo *)0x0);
        root_00 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__PopoverNode(__this,pMVar5);
        x = (Il2CppClass *)__this;
        pMVar5 = (MethodInfo *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (g_data_057a9c87 == '\0') {
          x = (Il2CppClass *)&TypeInfo_GisketchFocusInputMode;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9c87 = '\x01';
        }
        if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          pIVar3 = (Il2CppClass *)
                   Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                             ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,id,root_00,
                              (UnityEngine_GameObject_o *)pMVar5,
                              (uint)(*(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1),1,0.0,1,
                              (MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          x = pIVar3;
          bVar1 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pIVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
label_03b86320:
            if (g_data_057a9c87 == '\0') {
              il2cpp_runtime_helper_023445d0();
              g_data_057a9c87 = '\x01';
            }
            bVar9 = *(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1;
            if (bVar9) {
              UVar10 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
              (__this->fields)._pointerLockPosition.fields = UVar10.fields._0_8_;
            }
            *(bool *)&(__this->fields)._pointerSelectionLocked = bVar9;
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__WireOptions
                      (__this,(UnityEngine_GameObject_o *)pIVar3,(Gisketch_Aottg2UI_GisketchUIRoot_o *)root,
                       pMVar5);
            if (g_data_057a9c87 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
              g_data_057a9c87 = '\x01';
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
                      (__this,(UnityEngine_GameObject_o *)pIVar3,pMVar5);
            return;
          }
          if (pIVar3 != (Il2CppClass *)0x0) {
            pIVar6 = UnityEngine_GameObject__AddComponent_object_
                               ((UnityEngine_GameObject_o *)pIVar3,MethodInfo_AottgChoicePopoverLifetime_AddComponent_AottgChoicePopov);
            pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
            pMVar5 = (MethodInfo *)0x0;
            x = pIVar7;
            System_Action___ctor();
            if (pIVar6 != (Il2CppObject *)0x0) {
              pIVar6[2].klass = pIVar7;
              il2cpp_runtime_helper_022b4080(pIVar6 + 2,pIVar7);
              goto label_03b86320;
            }
          }
        }
      }
    }
  }
label_03b863dc:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)x,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Cancel
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Cancel (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b8b850

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Cancel
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_Nullable_bool__Fields SVar3;
  UnityEngine_EventSystems_EventSystem_o *pUVar4;
  System_String_o *pSVar5;
  System_Nullable_bool__Fields SVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_Nullable_bool__Fields __this_00;
  uint uVar9;
  MethodInfo *method_00;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  System_Nullable_bool__Fields SVar13;
  System_Nullable_bool__Fields unaff_R12;
  uint index;
  bool bVar14;
  undefined4 uStack_ac;
  System_Nullable_bool__Fields SStack_a8;
  undefined8 uStack_a0;
  System_Nullable_bool__Fields SStack_98;
  System_Nullable_bool__Fields SStack_90;
  undefined2 uStack_5e;
  uint uStack_5c;
  System_Nullable_bool__Fields SStack_58;
  System_Nullable_bool__Fields SStack_50;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGStack_48;
  undefined8 *puStack_40;
  
  if (g_data_057a9e98 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e98 = '\x01';
  }
  SVar3 = (System_Nullable_bool__Fields)
          UnityEngine_Component__GetComponentInParent_object_((UnityEngine_Component_o *)__this,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = (System_String_o *)0x0;
  SVar13 = SVar3;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
label_03b8b8ed:
    unaff_R12 = (System_Nullable_bool__Fields)&TypeInfo_EventSystem;
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    __this_00 = (System_Nullable_bool__Fields)(__this->fields)._opener;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_String_o *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SVar13.hasValue = 0;
    SVar13.value = 0;
    pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
                (pUVar4,(__this->fields)._opener,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_00.hasValue = 0;
    __this_00.value = 0;
    if (SVar3 != (System_Nullable_bool__Fields)0x0) {
      if (*(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)((long)SVar3 + 0x88) !=
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  (*(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)((long)SVar3 + 0x88),1,
                   (MethodInfo *)0x0);
      }
      goto label_03b8b8ed;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)((long)SVar13 + 0x10) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  puStack_40 = &TypeInfo_Object;
  pSVar5 = pSVar7;
  SVar3 = SVar13;
  SStack_58 = __this_00;
  SStack_50 = unaff_R12;
  pGStack_48 = __this;
  if (g_data_057a9e9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"slideDown");
    il2cpp_runtime_helper_023445d0(&"percent");
    il2cpp_runtime_helper_023445d0(&"-options");
    il2cpp_runtime_helper_023445d0(&"Button");
    SVar3 = (System_Nullable_bool__Fields)&"dropdownItem";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e9a = '\x01';
  }
  if (*(long *)((long)SVar13 + 0x28) != 0) {
    index = (uint)pSVar7;
    if ((int)index < 0) {
label_03b8baae:
      bVar14 = false;
    }
    else {
      lVar1 = *(long *)(*(long *)((long)SVar13 + 0x28) + 0x10);
      if (lVar1 == 0) goto label_03b8be06;
      uVar10 = *(uint *)(lVar1 + 0x18);
      if ((int)uVar10 <= (int)index) goto label_03b8baae;
      uVar9 = uVar10 - 1;
      if ((int)index < (int)(uVar10 - 1)) {
        uVar9 = index;
      }
      if (uVar10 <= uVar9) goto label_03b8be0b;
      lVar1 = *(long *)(lVar1 + 0x20 + (long)(int)uVar9 * 8);
      if (lVar1 == 0) goto label_03b8be06;
      bVar14 = *(char *)(lVar1 + 0x28) != '\0';
    }
    unaff_R12 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pSVar5 = (System_String_o *)0x0;
    SVar3 = unaff_R12;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)((long)unaff_R12 + 0x10) = "Button";
      il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x10);
      uStack_5c = index;
      if (g_data_057a9ea4 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-option-");
        g_data_057a9ea4 = '\x01';
      }
      __this_00 = *(System_Nullable_bool__Fields *)((long)SVar13 + 0x20);
      pSVar5 = System_Int32__ToString((int32_t)&uStack_5c,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_3af7150
                         ((System_String_o *)__this_00,"-option-",pSVar5,(MethodInfo *)0x0);
      *(System_String_o **)((long)unaff_R12 + 0x18) = pSVar5;
      il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x18);
      SVar3.hasValue = 0;
      SVar3.value = 0;
      if (*(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)((long)SVar13 + 0x28) !=
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
        pSVar5 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
                           (*(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)((long)SVar13 + 0x28),index,
                            method_00);
        SVar3 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0x20);
        *(System_String_o **)((long)unaff_R12 + 0x20) = pSVar5;
        il2cpp_runtime_helper_022b4080();
        if ((*(long *)((long)SVar13 + 0x28) != 0) &&
           (lVar1 = *(long *)(*(long *)((long)SVar13 + 0x28) + 0x10), lVar1 != 0)) {
          uVar10 = *(uint *)(lVar1 + 0x18) - 1;
          pSVar5 = (System_String_o *)(ulong)uVar10;
          if ((int)index < (int)uVar10) {
            pSVar5 = (System_String_o *)((ulong)pSVar7 & 0xffffffff);
          }
          uVar10 = 0;
          if (-1 < (int)index) {
            uVar10 = (uint)pSVar5;
          }
          if (*(uint *)(lVar1 + 0x18) <= uVar10) goto label_03b8be0b;
          lVar1 = *(long *)(lVar1 + 0x20 + (long)(int)uVar10 * 8);
          if (lVar1 != 0) {
            *(undefined8 *)((long)unaff_R12 + 0x28) = *(undefined8 *)(lVar1 + 0x20);
            il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x28);
            *(undefined8 *)((long)unaff_R12 + 0x40) = "dropdownItem";
            il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x40);
            uStack_5e = 0;
            pSVar5 = (System_String_o *)(ulong)bVar14;
            SVar3 = (System_Nullable_bool__Fields)&uStack_5e;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar3,(uint)bVar14,MethodInfo_Nullable_1_Boolean);
            *(undefined2 *)((long)unaff_R12 + 0x6b) = uStack_5e;
            if ((*(long *)((long)SVar13 + 0x28) != 0) &&
               (lVar1 = *(long *)(*(long *)((long)SVar13 + 0x28) + 0x10), lVar1 != 0)) {
              uVar10 = *(uint *)(lVar1 + 0x18) - 1;
              pSVar5 = (System_String_o *)(ulong)uVar10;
              if ((int)index < (int)uVar10) {
                pSVar5 = (System_String_o *)((ulong)pSVar7 & 0xffffffff);
              }
              uVar10 = 0;
              if (-1 < (int)index) {
                uVar10 = (uint)pSVar5;
              }
              if (*(uint *)(lVar1 + 0x18) <= uVar10) goto label_03b8be0b;
              lVar1 = *(long *)(lVar1 + 0x20 + (long)(int)uVar10 * 8);
              if (lVar1 != 0) {
                pSVar5 = *(System_String_o **)(lVar1 + 0x30);
                SVar3 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0xb8);
                *(System_String_o **)((long)unaff_R12 + 0xb8) = pSVar5;
                il2cpp_runtime_helper_022b4080();
                if ((*(long *)((long)SVar13 + 0x28) != 0) &&
                   (lVar1 = *(long *)(*(long *)((long)SVar13 + 0x28) + 0x10), lVar1 != 0)) {
                  uVar10 = *(uint *)(lVar1 + 0x18) - 1;
                  pSVar5 = (System_String_o *)(ulong)uVar10;
                  if ((int)index < (int)uVar10) {
                    pSVar5 = (System_String_o *)((ulong)pSVar7 & 0xffffffff);
                  }
                  uVar10 = 0;
                  if (-1 < (int)index) {
                    uVar10 = (uint)pSVar5;
                  }
                  if (*(uint *)(lVar1 + 0x18) <= uVar10) goto label_03b8be0b;
                  lVar1 = *(long *)(lVar1 + 0x20 + (long)(int)uVar10 * 8);
                  if (lVar1 != 0) {
                    *(undefined8 *)((long)unaff_R12 + 0xc0) = *(undefined8 *)(lVar1 + 0x38);
                    il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xc0);
                    if (bVar14 == false) {
                      SVar6.hasValue = 0;
                      SVar6.value = 0;
                    }
                    else {
                      SVar6 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
                      pSVar5 = (System_String_o *)0x0;
                      SVar3 = SVar6;
                      Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                                ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)SVar6,(MethodInfo *)0x0)
                      ;
                      if (SVar6 == (System_Nullable_bool__Fields)0x0) goto label_03b8be06;
                      *(undefined8 *)((long)SVar6 + 0x10) = "slideDown";
                      il2cpp_runtime_helper_022b4080((long)SVar6 + 0x10);
                      pSVar7 = System_String__Concat_3ae5ba0
                                         (*(System_String_o **)((long)SVar13 + 0x20),"-options",
                                          (MethodInfo *)0x0);
                      *(System_String_o **)((long)SVar6 + 0x18) = pSVar7;
                      il2cpp_runtime_helper_022b4080((long)SVar6 + 0x18,pSVar7);
                      *(undefined4 *)((long)SVar6 + 0x20) = 0x3df5c28f;
                      *(undefined4 *)((long)SVar6 + 0x28) = 0x3ccccccd;
                      *(uint *)((long)SVar6 + 0x2c) = index;
                    }
                    *(System_Nullable_bool__Fields *)((long)unaff_R12 + 0xf8) = SVar6;
                    il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xf8);
                    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
                    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar8,(MethodInfo *)0x0);
                    __this_00 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                    pSVar5 = (System_String_o *)0x0;
                    SVar3 = __this_00;
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,(MethodInfo *)0x0);
                    if (__this_00 != (System_Nullable_bool__Fields)0x0) {
                      *(undefined4 *)((long)__this_00 + 0x10) = 0x42c80000;
                      pSVar5 = "percent";
                      SVar3 = (System_Nullable_bool__Fields)((long)__this_00 + 0x18);
                      *(System_String_o **)((long)__this_00 + 0x18) = "percent";
                      il2cpp_runtime_helper_022b4080();
                      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                        (pGVar8->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00;
                        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).width,__this_00);
                        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)unaff_R12 + 0xd8) =
                             pGVar8;
                        il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xd8,pGVar8);
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
label_03b8be06:
  il2cpp_runtime_helper_022b2c90();
label_03b8be0b:
  uStack_a0 = il2cpp_runtime_helper_022b2ca0();
  SStack_98 = __this_00;
  SStack_90 = unaff_R12;
  if (g_data_057a9e9b == '\0') {
    SStack_a8.hasValue = 0x3b8be36;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    SStack_a8.hasValue = 0x3b8be42;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    SStack_a8.hasValue = 0x3b8be4e;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    SStack_a8.hasValue = 0x3b8be5a;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_023445d0(&"Column");
    SStack_a8.hasValue = 0x3b8be66;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    SStack_a8.hasValue = 0x3b8be72;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_023445d0(&"point");
    SStack_a8.hasValue = 0x3b8be7e;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_023445d0(&"scrollView");
    SStack_a8.hasValue = 0x3b8be8a;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_023445d0(&"-options-scroll");
    SStack_a8.hasValue = 0x3b8be96;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9e9b = '\x01';
  }
  SStack_a8.hasValue = 0x3b8beac;
  SStack_a8.value = 0;
  SVar6 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  uVar11 = 0;
  SStack_a8.hasValue = 0x3b8beb9;
  SStack_a8.value = 0;
  SVar13 = SVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)SVar6,(MethodInfo *)0x0);
  if (SVar6 != (System_Nullable_bool__Fields)0x0) {
    *(undefined8 *)((long)SVar6 + 0x10) = "ScrollView";
    SStack_a8.hasValue = 0x3b8bedb;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_022b4080((long)SVar6 + 0x10);
    SStack_a8.hasValue = 0x3b8bef0;
    SStack_a8.value = 0;
    pSVar7 = System_String__Concat_3ae5ba0
                       (*(System_String_o **)((long)SVar3 + 0x20),"-options-scroll",(MethodInfo *)0x0);
    *(System_String_o **)((long)SVar6 + 0x18) = pSVar7;
    SStack_a8.hasValue = 0x3b8bf02;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_022b4080((long)SVar6 + 0x18,pSVar7);
    *(undefined8 *)((long)SVar6 + 0x40) = "scrollView";
    SStack_a8.hasValue = 0x3b8bf1b;
    SStack_a8.value = 0;
    il2cpp_runtime_helper_022b4080((long)SVar6 + 0x40);
    SStack_a8.hasValue = 0x3b8bf2b;
    SStack_a8.value = 0;
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    SStack_a8.hasValue = 0x3b8bf38;
    SStack_a8.value = 0;
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar8,(MethodInfo *)0x0);
    SStack_a8.hasValue = 0x3b8bf47;
    SStack_a8.value = 0;
    __this_00 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    uVar11 = 0;
    SStack_a8.hasValue = 0x3b8bf54;
    SStack_a8.value = 0;
    SVar13 = __this_00;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (System_Nullable_bool__Fields)0x0) {
      *(float *)((long)__this_00 + 0x10) = (float)*(int *)((long)SVar3 + 0x60) * 38.0;
      uVar12 = "point";
      SVar13 = (System_Nullable_bool__Fields)((long)__this_00 + 0x18);
      *(undefined8 *)((long)__this_00 + 0x18) = "point";
      SStack_a8.hasValue = 0x3b8bf8a;
      SStack_a8.value = 0;
      il2cpp_runtime_helper_022b4080();
      uVar11 = (undefined4)uVar12;
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar8->fields).height = (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00;
        SStack_a8.hasValue = 0x3b8bfa6;
        SStack_a8.value = 0;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).height,__this_00);
        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar6 + 0xd8) = pGVar8;
        SStack_a8.hasValue = 0x3b8bfbe;
        SStack_a8.value = 0;
        il2cpp_runtime_helper_022b4080((long)SVar6 + 0xd8);
        SStack_a8.hasValue = 0x3b8bfc7;
        SStack_a8.value = 0;
        SVar3 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
        uVar11 = 0;
        SStack_a8.hasValue = 0x3b8bfd4;
        SStack_a8.value = 0;
        SVar13 = SVar3;
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar3,(MethodInfo *)0x0);
        __this_00.hasValue = 0;
        __this_00.value = 0;
        if (SVar3 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)((long)SVar3 + 0x10) = "Column";
          SStack_a8.hasValue = 0x3b8bff0;
          SStack_a8.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar3 + 0x10);
          *(undefined8 *)((long)SVar3 + 0x20) = "Stretch";
          SStack_a8.hasValue = 0x3b8c00a;
          SStack_a8.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar3 + 0x20);
          *(undefined4 *)((long)SVar3 + 0x70) = 0;
          *(System_Nullable_bool__Fields *)((long)SVar6 + 0xe0) = SVar3;
          SStack_a8.hasValue = 0x3b8c029;
          SStack_a8.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar6 + 0xe0,SVar3);
          *(System_String_o **)((long)SVar6 + 0x118) = pSVar5;
          SStack_a8.hasValue = 0x3b8c043;
          SStack_a8.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar6 + 0x118,pSVar5);
          return;
        }
      }
    }
  }
  SStack_a8.hasValue = 0x3b8c05a;
  SStack_a8.value = 0;
  il2cpp_runtime_helper_022b2c90();
  uStack_ac = uVar11;
  SStack_a8 = __this_00;
  if (g_data_057a9ea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-option-");
    g_data_057a9ea4 = '\x01';
  }
  pSVar7 = *(System_String_o **)((long)SVar13 + 0x20);
  pSVar5 = System_Int32__ToString((int32_t)&uStack_ac,(MethodInfo *)0x0);
  System_String__Concat_3af7150(pSVar7,"-option-",pSVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$PopoverNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__PopoverNode (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b8ac00

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__PopoverNode
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar1;
  int iVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  MethodInfo *pMVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  ulong uVar7;
  undefined8 *unaff_R13;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *unaff_R14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **ppGVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (g_data_057a9e99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"-popover");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"popover");
    g_data_057a9e99 = '\x01';
  }
  pGVar3 = (__this->fields)._options;
  if ((pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
     ((pGVar3->fields)._items != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
    unaff_R13 = &TypeInfo_GisketchNodeDefinition;
    auVar10 = il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    pMVar6 = auVar10._8_8_;
    unaff_R14 = auVar10._0_8_;
    pGVar3 = (__this->fields)._options;
    if (pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
      if (unaff_R14 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_03b8ad21;
      ppGVar9 = unaff_R14->m_Items;
      uVar7 = 0;
      do {
        pGVar1 = (pGVar3->fields)._items;
        if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) break;
        iVar2 = (int)pGVar1->max_length;
        if ((long)iVar2 <= (long)uVar7) goto label_03b8ad35;
        pGVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode(__this,(int32_t)uVar7,pMVar6);
        if ((uint)unaff_R14->max_length <= uVar7) goto label_03b8ae8f;
        *ppGVar9 = pGVar4;
        il2cpp_runtime_helper_022b4080(ppGVar9);
        uVar7 = uVar7 + 1;
        pGVar3 = (__this->fields)._options;
        ppGVar9 = ppGVar9 + 1;
        pMVar6 = extraout_RDX;
      } while (pGVar3 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0);
    }
  }
label_03b8ad1c:
  do {
    auVar11 = il2cpp_runtime_helper_022b2c90();
    auVar10._8_8_ = auVar11._8_8_;
    auVar10._0_8_ = unaff_R14;
    pGVar3 = auVar11._0_8_;
label_03b8ad21:
    pMVar6 = auVar10._8_8_;
    unaff_R14 = auVar10._0_8_;
    pGVar1 = (pGVar3->fields)._items;
  } while (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0);
  iVar2 = (int)pGVar1->max_length;
  if (0 < iVar2) goto label_03b8ae94;
label_03b8ad35:
  pGVar8 = unaff_R14;
  if ((__this->fields)._maxVisibleItems < iVar2) {
    auVar10 = il2cpp_runtime_helper_022b2a40(*unaff_R13,1);
    pGVar8 = auVar10._0_8_;
    pGVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode(__this,unaff_R14,auVar10._8_8_);
    if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_03b8ad1c;
    if ((int)pGVar8->max_length == 0) {
label_03b8ae8f:
      il2cpp_runtime_helper_022b2ca0();
      pMVar6 = extraout_RDX_00;
label_03b8ae94:
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode(__this,0,pMVar6);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c87 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9c87 = '\x01';
      }
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
             CONCAT71((int7)((ulong)*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) >> 8),
                      *(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1);
    }
    pGVar8->m_Items[0] = pGVar4;
    il2cpp_runtime_helper_022b4080(pGVar8->m_Items);
  }
  pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar4,(MethodInfo *)0x0);
  unaff_R14 = pGVar8;
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar4->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&pGVar4->fields);
    pSVar5 = System_String__Concat_3ae5ba0((__this->fields)._id,"-popover",(MethodInfo *)0x0);
    (pGVar4->fields).id = pSVar5;
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).id,pSVar5);
    (pGVar4->fields).style = "popover";
    il2cpp_runtime_helper_022b4080(&(pGVar4->fields).style);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (__this_00->fields).direction = "Column";
      il2cpp_runtime_helper_022b4080(&__this_00->fields);
      (__this_00->fields).alignItems = "Stretch";
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).alignItems);
      (__this_00->fields).gap = 0.0;
      (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_00;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).search,__this_00);
      (pGVar4->fields).deferredChildren = pGVar8;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).deferredChildren,pGVar8);
      return pGVar4;
    }
  }
  goto label_03b8ad1c;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$OptionNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, const MethodInfo* method);
// 0x3b8b9c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  System_String_o *pSVar4;
  System_Nullable_bool__Fields SVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  System_Nullable_bool__Fields __this_00;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  uint uVar9;
  MethodInfo *method_00;
  System_Nullable_bool__Fields unaff_RBX;
  uint uVar10;
  undefined4 uVar11;
  undefined4 in_register_00000034;
  undefined8 uVar12;
  System_Nullable_bool__Fields SVar13;
  System_Nullable_bool__Fields unaff_R12;
  bool bVar14;
  undefined4 uStack_7c;
  System_Nullable_bool__Fields SStack_78;
  undefined8 uStack_70;
  System_Nullable_bool__Fields SStack_68;
  System_Nullable_bool__Fields SStack_60;
  undefined2 local_2e;
  int32_t local_2c;
  
  pSVar4 = (System_String_o *)CONCAT44(in_register_00000034,index);
  SVar13 = (System_Nullable_bool__Fields)__this;
  if (g_data_057a9e9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&"slideDown");
    il2cpp_runtime_helper_023445d0(&"percent");
    il2cpp_runtime_helper_023445d0(&"-options");
    il2cpp_runtime_helper_023445d0(&"Button");
    SVar13 = (System_Nullable_bool__Fields)&"dropdownItem";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e9a = '\x01';
  }
  pGVar2 = (__this->fields)._options;
  if (pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    if (index < 0) {
label_03b8baae:
      bVar14 = false;
    }
    else {
      pGVar3 = (pGVar2->fields)._items;
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_03b8be06;
      uVar1 = (uint)pGVar3->max_length;
      if ((int)uVar1 <= index) goto label_03b8baae;
      uVar10 = uVar1 - 1;
      if (index < (int)(uVar1 - 1)) {
        uVar10 = index;
      }
      if (uVar1 <= uVar10) goto label_03b8be0b;
      if (pGVar3->m_Items[(int)uVar10] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
      goto label_03b8be06;
      bVar14 = (char)(pGVar3->m_Items[(int)uVar10]->fields).enabled != '\0';
    }
    unaff_R12 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pSVar4 = (System_String_o *)0x0;
    SVar13 = unaff_R12;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)((long)unaff_R12 + 0x10) = "Button";
      il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x10);
      local_2c = index;
      if (g_data_057a9ea4 == '\0') {
        il2cpp_runtime_helper_023445d0(&"-option-");
        g_data_057a9ea4 = '\x01';
      }
      unaff_RBX = (System_Nullable_bool__Fields)(__this->fields)._id;
      pSVar4 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_3af7150
                         ((System_String_o *)unaff_RBX,"-option-",pSVar4,(MethodInfo *)0x0);
      *(System_String_o **)((long)unaff_R12 + 0x18) = pSVar4;
      il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x18);
      pGVar2 = (__this->fields)._options;
      SVar13.hasValue = 0;
      SVar13.value = 0;
      if (pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
        pSVar4 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text(pGVar2,index,method_00);
        SVar13 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0x20);
        *(System_String_o **)((long)unaff_R12 + 0x20) = pSVar4;
        il2cpp_runtime_helper_022b4080();
        pGVar2 = (__this->fields)._options;
        if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
           (pGVar3 = (pGVar2->fields)._items,
           pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
          uVar1 = (uint)pGVar3->max_length;
          uVar10 = uVar1 - 1;
          if (index < (int)uVar10) {
            uVar10 = index;
          }
          pSVar4 = (System_String_o *)(ulong)uVar10;
          uVar9 = 0;
          if (-1 < index) {
            uVar9 = uVar10;
          }
          if (uVar1 <= uVar9) goto label_03b8be0b;
          if (pGVar3->m_Items[(int)uVar9] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
            *(System_String_o **)((long)unaff_R12 + 0x28) = (pGVar3->m_Items[(int)uVar9]->fields).textKey;
            il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x28);
            *(undefined8 *)((long)unaff_R12 + 0x40) = "dropdownItem";
            il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x40);
            local_2e = 0;
            pSVar4 = (System_String_o *)(ulong)bVar14;
            SVar13 = (System_Nullable_bool__Fields)&local_2e;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar13,(uint)bVar14,MethodInfo_Nullable_1_Boolean);
            *(undefined2 *)((long)unaff_R12 + 0x6b) = local_2e;
            pGVar2 = (__this->fields)._options;
            if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
               (pGVar3 = (pGVar2->fields)._items,
               pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
              uVar1 = (uint)pGVar3->max_length;
              uVar10 = uVar1 - 1;
              if (index < (int)uVar10) {
                uVar10 = index;
              }
              pSVar4 = (System_String_o *)(ulong)uVar10;
              uVar9 = 0;
              if (-1 < index) {
                uVar9 = uVar10;
              }
              if (uVar1 <= uVar9) goto label_03b8be0b;
              if (pGVar3->m_Items[(int)uVar9] !=
                  (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
                pSVar4 = (pGVar3->m_Items[(int)uVar9]->fields).tooltip;
                SVar13 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0xb8);
                *(System_String_o **)((long)unaff_R12 + 0xb8) = pSVar4;
                il2cpp_runtime_helper_022b4080();
                pGVar2 = (__this->fields)._options;
                if ((pGVar2 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
                   (pGVar3 = (pGVar2->fields)._items,
                   pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
                  uVar1 = (uint)pGVar3->max_length;
                  uVar10 = uVar1 - 1;
                  if (index < (int)uVar10) {
                    uVar10 = index;
                  }
                  pSVar4 = (System_String_o *)(ulong)uVar10;
                  uVar9 = 0;
                  if (-1 < index) {
                    uVar9 = uVar10;
                  }
                  if (uVar1 <= uVar9) goto label_03b8be0b;
                  if (pGVar3->m_Items[(int)uVar9] !=
                      (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
                    *(System_String_o **)((long)unaff_R12 + 0xc0) =
                         (pGVar3->m_Items[(int)uVar9]->fields).tooltipKey;
                    il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xc0);
                    if (bVar14 == false) {
                      SVar5.hasValue = 0;
                      SVar5.value = 0;
                    }
                    else {
                      SVar5 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
                      pSVar4 = (System_String_o *)0x0;
                      SVar13 = SVar5;
                      Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                                ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)SVar5,(MethodInfo *)0x0)
                      ;
                      if (SVar5 == (System_Nullable_bool__Fields)0x0) goto label_03b8be06;
                      *(undefined8 *)((long)SVar5 + 0x10) = "slideDown";
                      il2cpp_runtime_helper_022b4080((long)SVar5 + 0x10);
                      pSVar4 = System_String__Concat_3ae5ba0
                                         ((__this->fields)._id,"-options",(MethodInfo *)0x0);
                      *(System_String_o **)((long)SVar5 + 0x18) = pSVar4;
                      il2cpp_runtime_helper_022b4080((long)SVar5 + 0x18,pSVar4);
                      *(undefined4 *)((long)SVar5 + 0x20) = 0x3df5c28f;
                      *(undefined4 *)((long)SVar5 + 0x28) = 0x3ccccccd;
                      *(int32_t *)((long)SVar5 + 0x2c) = index;
                    }
                    *(System_Nullable_bool__Fields *)((long)unaff_R12 + 0xf8) = SVar5;
                    il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xf8);
                    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                             il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
                    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar6,(MethodInfo *)0x0);
                    unaff_RBX = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                    pSVar4 = (System_String_o *)0x0;
                    SVar13 = unaff_RBX;
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX,(MethodInfo *)0x0);
                    if (unaff_RBX != (System_Nullable_bool__Fields)0x0) {
                      *(undefined4 *)((long)unaff_RBX + 0x10) = 0x42c80000;
                      pSVar4 = "percent";
                      SVar13 = (System_Nullable_bool__Fields)((long)unaff_RBX + 0x18);
                      *(System_String_o **)((long)unaff_RBX + 0x18) = "percent";
                      il2cpp_runtime_helper_022b4080();
                      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                        (pGVar6->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX;
                        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).width,unaff_RBX);
                        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)unaff_R12 + 0xd8) =
                             pGVar6;
                        il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xd8,pGVar6);
                        return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R12;
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
label_03b8be06:
  il2cpp_runtime_helper_022b2c90();
label_03b8be0b:
  uStack_70 = il2cpp_runtime_helper_022b2ca0();
  SStack_68 = unaff_RBX;
  SStack_60 = unaff_R12;
  if (g_data_057a9e9b == '\0') {
    SStack_78.hasValue = 0x3b8be36;
    SStack_78.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    SStack_78.hasValue = 0x3b8be42;
    SStack_78.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    SStack_78.hasValue = 0x3b8be4e;
    SStack_78.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    SStack_78.hasValue = 0x3b8be5a;
    SStack_78.value = 0;
    il2cpp_runtime_helper_023445d0(&"Column");
    SStack_78.hasValue = 0x3b8be66;
    SStack_78.value = 0;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    SStack_78.hasValue = 0x3b8be72;
    SStack_78.value = 0;
    il2cpp_runtime_helper_023445d0(&"point");
    SStack_78.hasValue = 0x3b8be7e;
    SStack_78.value = 0;
    il2cpp_runtime_helper_023445d0(&"scrollView");
    SStack_78.hasValue = 0x3b8be8a;
    SStack_78.value = 0;
    il2cpp_runtime_helper_023445d0(&"-options-scroll");
    SStack_78.hasValue = 0x3b8be96;
    SStack_78.value = 0;
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9e9b = '\x01';
  }
  SStack_78.hasValue = 0x3b8beac;
  SStack_78.value = 0;
  __this_00 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  uVar11 = 0;
  SStack_78.hasValue = 0x3b8beb9;
  SStack_78.value = 0;
  SVar5 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Nullable_bool__Fields)0x0) {
    *(undefined8 *)((long)__this_00 + 0x10) = "ScrollView";
    SStack_78.hasValue = 0x3b8bedb;
    SStack_78.value = 0;
    il2cpp_runtime_helper_022b4080((long)__this_00 + 0x10);
    SStack_78.hasValue = 0x3b8bef0;
    SStack_78.value = 0;
    pSVar7 = System_String__Concat_3ae5ba0
                       (*(System_String_o **)((long)SVar13 + 0x20),"-options-scroll",(MethodInfo *)0x0);
    *(System_String_o **)((long)__this_00 + 0x18) = pSVar7;
    SStack_78.hasValue = 0x3b8bf02;
    SStack_78.value = 0;
    il2cpp_runtime_helper_022b4080((long)__this_00 + 0x18,pSVar7);
    *(undefined8 *)((long)__this_00 + 0x40) = "scrollView";
    SStack_78.hasValue = 0x3b8bf1b;
    SStack_78.value = 0;
    il2cpp_runtime_helper_022b4080((long)__this_00 + 0x40);
    SStack_78.hasValue = 0x3b8bf2b;
    SStack_78.value = 0;
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    SStack_78.hasValue = 0x3b8bf38;
    SStack_78.value = 0;
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar6,(MethodInfo *)0x0);
    SStack_78.hasValue = 0x3b8bf47;
    SStack_78.value = 0;
    unaff_RBX = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    uVar11 = 0;
    SStack_78.hasValue = 0x3b8bf54;
    SStack_78.value = 0;
    SVar5 = unaff_RBX;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX,(MethodInfo *)0x0);
    if (unaff_RBX != (System_Nullable_bool__Fields)0x0) {
      *(float *)((long)unaff_RBX + 0x10) = (float)*(int *)((long)SVar13 + 0x60) * 38.0;
      uVar12 = "point";
      SVar5 = (System_Nullable_bool__Fields)((long)unaff_RBX + 0x18);
      *(undefined8 *)((long)unaff_RBX + 0x18) = "point";
      SStack_78.hasValue = 0x3b8bf8a;
      SStack_78.value = 0;
      il2cpp_runtime_helper_022b4080();
      uVar11 = (undefined4)uVar12;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar6->fields).height = (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX;
        SStack_78.hasValue = 0x3b8bfa6;
        SStack_78.value = 0;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).height,unaff_RBX);
        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)__this_00 + 0xd8) = pGVar6;
        SStack_78.hasValue = 0x3b8bfbe;
        SStack_78.value = 0;
        il2cpp_runtime_helper_022b4080((long)__this_00 + 0xd8);
        SStack_78.hasValue = 0x3b8bfc7;
        SStack_78.value = 0;
        SVar13 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
        uVar11 = 0;
        SStack_78.hasValue = 0x3b8bfd4;
        SStack_78.value = 0;
        SVar5 = SVar13;
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar13,(MethodInfo *)0x0);
        unaff_RBX.hasValue = 0;
        unaff_RBX.value = 0;
        if (SVar13 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)((long)SVar13 + 0x10) = "Column";
          SStack_78.hasValue = 0x3b8bff0;
          SStack_78.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar13 + 0x10);
          *(undefined8 *)((long)SVar13 + 0x20) = "Stretch";
          SStack_78.hasValue = 0x3b8c00a;
          SStack_78.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar13 + 0x20);
          *(undefined4 *)((long)SVar13 + 0x70) = 0;
          *(System_Nullable_bool__Fields *)((long)__this_00 + 0xe0) = SVar13;
          SStack_78.hasValue = 0x3b8c029;
          SStack_78.value = 0;
          il2cpp_runtime_helper_022b4080((long)__this_00 + 0xe0,SVar13);
          *(System_String_o **)((long)__this_00 + 0x118) = pSVar4;
          SStack_78.hasValue = 0x3b8c043;
          SStack_78.value = 0;
          il2cpp_runtime_helper_022b4080((long)__this_00 + 0x118,pSVar4);
          return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_00;
        }
      }
    }
  }
  SStack_78.hasValue = 0x3b8c05a;
  SStack_78.value = 0;
  il2cpp_runtime_helper_022b2c90();
  uStack_7c = uVar11;
  SStack_78 = unaff_RBX;
  if (g_data_057a9ea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-option-");
    g_data_057a9ea4 = '\x01';
  }
  pSVar4 = *(System_String_o **)((long)SVar5 + 0x20);
  pSVar7 = System_Int32__ToString((int32_t)&uStack_7c,(MethodInfo *)0x0);
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
           System_String__Concat_3af7150(pSVar4,"-option-",pSVar7,(MethodInfo *)0x0);
  return pGVar8;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$ScrollNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* children, const MethodInfo* method);
// 0x3b8be10

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *children,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  System_String_o *str2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *unaff_RBX;
  undefined4 uVar3;
  undefined4 uStack_44;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_40;
  
  if (g_data_057a9e9b == '\0') {
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8be36;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8be42;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8be4e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8be5a;
    il2cpp_runtime_helper_023445d0(&"Column");
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8be66;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8be72;
    il2cpp_runtime_helper_023445d0(&"point");
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8be7e;
    il2cpp_runtime_helper_023445d0(&"scrollView");
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8be8a;
    il2cpp_runtime_helper_023445d0(&"-options-scroll");
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8be96;
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9e9b = '\x01';
  }
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8beac;
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  uVar3 = 0;
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8beb9;
  pGVar2 = __this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "ScrollView";
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bedb;
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bef0;
    pSVar1 = System_String__Concat_3ae5ba0((__this->fields)._id,"-options-scroll",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar1;
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bf02;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).id,pSVar1);
    (__this_00->fields).style = "scrollView";
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bf1b;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).style);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bf2b;
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bf38;
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_01,(MethodInfo *)0x0);
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bf47;
    unaff_RBX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    uVar3 = 0;
    pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bf54;
    pGVar2 = unaff_RBX;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX,(MethodInfo *)0x0);
    if (unaff_RBX != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(float *)&(unaff_RBX->fields).type = (float)(__this->fields)._maxVisibleItems * 38.0;
      pSVar1 = "point";
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(unaff_RBX->fields).id;
      (unaff_RBX->fields).id = "point";
      pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bf8a;
      il2cpp_runtime_helper_022b4080();
      uVar3 = SUB84(pSVar1,0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_01->fields).height = (Gisketch_Aottg2UI_Data_GisketchLength_o *)unaff_RBX;
        pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bfa6;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields).height,unaff_RBX);
        (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_01;
        pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bfbe;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields).search);
        pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bfc7;
        __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
        uVar3 = 0;
        pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bfd4;
        pGVar2 = __this_02;
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)__this_02,(MethodInfo *)0x0);
        unaff_RBX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_02->fields).type = "Column";
          pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8bff0;
          il2cpp_runtime_helper_022b4080(&__this_02->fields);
          (__this_02->fields).text = "Stretch";
          pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8c00a;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields).text);
          (__this_02->fields).active = 0;
          (__this_00->fields).layout = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)__this_02;
          pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8c029;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).layout,__this_02);
          (__this_00->fields).deferredChildren = children;
          pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8c043;
          il2cpp_runtime_helper_022b4080(&(__this_00->fields).deferredChildren,children);
          return __this_00;
        }
      }
    }
  }
  pGStack_40 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x3b8c05a;
  il2cpp_runtime_helper_022b2c90();
  uStack_44 = uVar3;
  pGStack_40 = unaff_RBX;
  if (g_data_057a9ea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-option-");
    g_data_057a9ea4 = '\x01';
  }
  pSVar1 = (pGVar2->fields).text;
  str2 = System_Int32__ToString((int32_t)&uStack_44,(MethodInfo *)0x0);
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
           System_String__Concat_3af7150(pSVar1,"-option-",str2,(MethodInfo *)0x0);
  return pGVar2;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$WireOptions
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__WireOptions (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, UnityEngine_GameObject_o* content, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b8af00

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__WireOptions
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,UnityEngine_GameObject_o *content,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar4;
  long lVar5;
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  System_Object_array *pSVar6;
  UnityEngine_Transform_c *pUVar7;
  long lVar8;
  bool_conflict bVar9;
  uint uVar10;
  uint uVar11;
  Il2CppObject *pIVar12;
  TMPro_TextMeshProUGUI_o *label;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar13;
  Il2CppObject *__this_02;
  UnityEngine_EventSystems_EventSystem_o *pUVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar17;
  System_Nullable_bool__Fields SVar18;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *pUVar19;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_03;
  System_Func_bool__o *method_00;
  UnityEngine_Transform_o *x;
  UnityEngine_EventSystems_EventSystem_o *__this_04;
  System_Nullable_bool__Fields SVar20;
  System_Nullable_bool__Fields __this_05;
  System_Nullable_bool__Fields __this_06;
  System_Nullable_bool__Fields SVar21;
  uint uVar22;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  undefined4 uVar27;
  MethodInfo *pMVar28;
  undefined8 uVar29;
  UnityEngine_Transform_o *__this_07;
  System_Nullable_bool__Fields __this_08;
  MethodInfo *in_R9;
  UnityEngine_Transform_o *pUVar30;
  UnityEngine_Transform_o *x_00;
  UnityEngine_UI_Selectable_o *__this_09;
  Il2CppClass *pIVar31;
  System_String_o *pSVar32;
  bool bVar33;
  undefined4 uStack_14c;
  System_Nullable_bool__Fields SStack_148;
  undefined8 uStack_140;
  System_Nullable_bool__Fields SStack_138;
  System_Nullable_bool__Fields SStack_130;
  UnityEngine_Transform_o *pUStack_128;
  System_Nullable_bool__Fields SStack_120;
  System_String_o *pSStack_118;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_110;
  undefined2 uStack_fe;
  uint uStack_fc;
  System_Nullable_bool__Fields SStack_f8;
  System_Nullable_bool__Fields SStack_f0;
  UnityEngine_Transform_o *pUStack_e8;
  undefined8 *puStack_e0;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  UnityEngine_EventSystems_EventSystem_o *pUStack_c0;
  System_Nullable_bool__Fields SStack_b8;
  UnityEngine_Transform_o *pUStack_b0;
  UnityEngine_Transform_o *pUStack_a8;
  undefined4 uStack_94;
  UnityEngine_EventSystems_EventSystem_o *pUStack_90;
  System_Nullable_bool__Fields SStack_88;
  UnityEngine_Transform_o *pUStack_80;
  Il2CppObject *pIStack_78;
  UnityEngine_UI_Selectable_o *pUStack_70;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *local_60;
  Il2CppClass *local_58;
  int local_4c;
  Il2CppObject *local_48;
  UnityEngine_GameObject_o *local_40;
  ulong local_38;
  
  if (g_data_057a9e9c == '\0') {
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8af30;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8af3c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8af48;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8af54;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_bool);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8af60;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChoiceOptionCancel_AddComponent_AottgChoiceOptionCa);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8af6c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgChoiceOptionSelection_AddComponent_AottgChoiceOptio);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8af78;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8af84;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8af90;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8af9c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass26_0);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8afa8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_WireOptions_b__0);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8afb4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass26_1);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8afc0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_WireOptions_b__1);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8afcc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass26_2);
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8afd8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057a9e9c = '\x01';
  }
  pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8afee;
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass26_0);
  pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8affb;
  System_Object___ctor(pIVar12,(MethodInfo *)0x0);
  if (pIVar12 != (Il2CppObject *)0x0) {
    pIVar12[1].klass = (Il2CppClass *)__this;
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b014;
    il2cpp_runtime_helper_022b4080(pIVar12 + 1,__this);
    pIVar12[1].monitor = root;
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b027;
    il2cpp_runtime_helper_022b4080(&pIVar12[1].monitor);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b03f;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b04b;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    pSVar3 = (__this->fields)._feedback;
    if (pSVar3 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < iVar2) {
        pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b07f;
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      pGVar4 = (__this->fields)._options;
      if (pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
        uVar23 = 0;
        pGVar13 = (pGVar4->fields)._items;
        local_58 = (Il2CppClass *)__this;
        local_48 = pIVar12;
        local_40 = content;
        if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
          do {
            pIVar31 = local_58;
            iVar25 = (int)uVar23;
            if ((int)pGVar13->max_length <= iVar25) {
              return;
            }
            pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b152;
            __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass26_1);
            pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b15f;
            System_Object___ctor(__this_02,(MethodInfo *)0x0);
            if (__this_02 == (Il2CppObject *)0x0) break;
            __this_02[1].monitor = pIVar12;
            pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b17b;
            il2cpp_runtime_helper_022b4080(&__this_02[1].monitor);
            *(int *)&__this_02[1].klass = iVar25;
            if (content == (UnityEngine_GameObject_o *)0x0) break;
            pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b192;
            pUVar14 = (UnityEngine_EventSystems_EventSystem_o *)
                      UnityEngine_GameObject__get_transform(content,(MethodInfo *)0x0);
            local_4c = iVar25;
            if (g_data_057a9ea4 == '\0') {
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b1ae;
              il2cpp_runtime_helper_023445d0(&"-option-");
              g_data_057a9ea4 = '\x01';
            }
            pSVar16 = (pIVar31->_1).byval_arg.data;
            pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b1ca;
            local_38 = uVar23;
            pSVar15 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
            pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b1e1;
            pSVar16 = System_String__Concat_3af7150(pSVar16,"-option-",pSVar15,(MethodInfo *)0x0);
            pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b1ec;
            pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                      Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep
                                ((UnityEngine_Transform_o *)pUVar14,pSVar16,method_01);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b207;
              il2cpp_runtime_helper_02337ed0();
            }
            pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b213;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pGVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            __this_09 = (UnityEngine_UI_Selectable_o *)0x0;
            if ((char)bVar9 != '\0') {
              if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) break;
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b238;
              __this_09 = (UnityEngine_UI_Selectable_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pGVar17,MethodInfo_Button_GetComponent_Button);
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b253;
              il2cpp_runtime_helper_02337ed0();
            }
            pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b25f;
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_09,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if ((char)bVar9 != '\0') {
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b276;
              SVar18 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass26_2);
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b283;
              System_Object___ctor((Il2CppObject *)SVar18,(MethodInfo *)0x0);
              if (SVar18 == (System_Nullable_bool__Fields)0x0) break;
              pUVar30 = (UnityEngine_Transform_o *)((long)SVar18 + 0x18);
              *(Il2CppObject **)((long)SVar18 + 0x18) = __this_02;
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b2a3;
              x = pUVar30;
              il2cpp_runtime_helper_022b4080(pUVar30,__this_02);
              if ((*(long *)((long)SVar18 + 0x18) == 0) ||
                 (lVar5 = *(long *)&(local_58->_1).byval_arg.bits, lVar5 == 0)) break;
              uVar10 = *(uint *)(*(long *)((long)SVar18 + 0x18) + 0x10);
              if ((int)uVar10 < 0) {
label_03b8b320:
                uVar10 = 0;
                *(undefined1 *)((long)SVar18 + 0x10) = 0;
              }
              else {
                lVar5 = *(long *)(lVar5 + 0x10);
                if (lVar5 == 0) break;
                uVar26 = *(uint *)(lVar5 + 0x18);
                if ((int)uVar26 <= (int)uVar10) goto label_03b8b320;
                uVar24 = uVar26 - 1;
                x_00 = (UnityEngine_Transform_o *)(ulong)uVar24;
                if ((int)uVar24 <= (int)uVar10) {
                  uVar10 = uVar24;
                }
                if (uVar26 <= uVar10) {
                  pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b59b;
                  il2cpp_runtime_helper_022b2ca0();
                  __this_07 = x;
                  pUStack_90 = pUVar14;
                  SStack_88 = SVar18;
                  pUStack_80 = pUVar30;
                  pIStack_78 = __this_02;
                  pUStack_70 = __this_09;
                  if (g_data_057a9e9e == '\0') {
                    pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b5c8;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
                    __this_07 = (UnityEngine_Transform_o *)&TypeInfo_Object;
                    pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b5d4;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a9e9e = '\x01';
                  }
                  lVar5 = x[1].fields.m_CachedPtr;
                  if (lVar5 == 0) goto label_03b8b83a;
                  uVar10 = *(uint *)((long)&x[3].fields.m_CachedPtr + 4);
                  lVar5 = *(long *)(lVar5 + 0x10);
                  if ((int)uVar10 < 0) {
                    if (lVar5 == 0) goto label_03b8b83a;
                  }
                  else {
                    if (lVar5 == 0) goto label_03b8b83a;
                    uVar26 = *(uint *)(lVar5 + 0x18);
                    if ((int)uVar10 < (int)uVar26) {
                      uVar24 = uVar26 - 1;
                      if ((int)uVar10 < (int)(uVar26 - 1)) {
                        uVar24 = uVar10;
                      }
                      if (uVar26 <= uVar24) goto label_03b8b83f;
                      lVar8 = *(long *)(lVar5 + 0x20 + (long)(int)uVar24 * 8);
                      if (lVar8 == 0) goto label_03b8b83a;
                      if (*(char *)(lVar8 + 0x28) != '\0') {
                        iVar25 = *(int *)(TypeInfo_Object + 0xe4);
                        goto joined_r0x03b8b64e;
                      }
                    }
                  }
                  uVar26 = *(uint *)(lVar5 + 0x18);
                  pUVar14 = (UnityEngine_EventSystems_EventSystem_o *)(ulong)uVar26;
                  uVar24 = uVar26 - 1;
                  __this_07 = (UnityEngine_Transform_o *)(ulong)uVar24;
                  if ((int)uVar26 < 1) goto label_03b8b801;
                  iVar25 = 1;
                  goto label_03b8b7d7;
                }
                lVar5 = *(long *)(lVar5 + 0x20 + (long)(int)uVar10 * 8);
                if (lVar5 == 0) break;
                bVar33 = *(char *)(lVar5 + 0x28) != '\0';
                uVar10 = (uint)bVar33;
                *(bool *)((long)SVar18 + 0x10) = bVar33;
              }
              if (__this_09 == (UnityEngine_UI_Selectable_o *)0x0) break;
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b33d;
              UnityEngine_UI_Selectable__set_interactable(__this_09,uVar10,(MethodInfo *)0x0);
              local_60 = pGVar17;
              if (*(char *)((long)SVar18 + 0x10) == '\0') {
                pIVar31 = local_58;
                if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) break;
              }
              else {
                __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_09->fields).m_CanvasGroupCache;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b368;
                call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b382;
                UnityEngine_Events_UnityAction___ctor();
                if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) break;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b398;
                UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
                pGVar17 = local_60;
                if (local_60 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) break;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b3b0;
                pUVar19 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)local_60,(MethodInfo *)0x0);
                pIVar31 = local_58;
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) break;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b3d0;
                pIVar12 = UnityEngine_GameObject__AddComponent_object_(pUVar19,MethodInfo_AottgChoiceOptionCancel_AddComponent_AottgChoiceOptionCa);
                if (pIVar12 == (Il2CppObject *)0x0) break;
                pIVar12[2].klass = pIVar31;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b3ec;
                il2cpp_runtime_helper_022b4080(pIVar12 + 2);
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b3f6;
                pUVar19 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pGVar17,(MethodInfo *)0x0);
                if (pUVar19 == (UnityEngine_GameObject_o *)0x0) break;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b411;
                pIVar12 = UnityEngine_GameObject__AddComponent_object_(pUVar19,MethodInfo_AottgChoiceOptionSelection_AddComponent_AottgChoiceOptio);
                if ((pUVar30->klass == (UnityEngine_Transform_c *)0x0) || (pIVar12 == (Il2CppObject *)0x0))
                break;
                uVar27 = *(undefined4 *)&(pUVar30->klass->_1).name;
                pIVar12[2].klass = pIVar31;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b440;
                il2cpp_runtime_helper_022b4080(pIVar12 + 2,pIVar31);
                *(undefined4 *)&pIVar12[2].monitor = uVar27;
              }
              pGVar17 = local_60;
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b46a;
              __this_03 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)local_60,MethodInfo_GisketchDropdownItemFeedback_GetComponent_GisketchDropdo);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b485;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar28 = (MethodInfo *)0x0;
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b491;
              bVar9 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar9 != '\0') {
                if (__this_03 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
                *(byte *)((long)&(__this_03->fields)._hovered + 3) = *(byte *)((long)SVar18 + 0x10) ^ 1;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b4b8;
                Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(__this_03,pMVar28);
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b4c7;
                method_00 = (System_Func_bool__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_bool);
                bVar33 = false;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b4e4;
                System_Func_bool____ctor();
                (__this_03->fields)._pointerHoverAllowed = method_00;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b4fd;
                il2cpp_runtime_helper_022b4080(&(__this_03->fields)._pointerHoverAllowed);
                pGVar17 = local_60;
                if (*(char *)((long)SVar18 + 0x10) != '\0') {
                  if (pUVar30->klass == (UnityEngine_Transform_c *)0x0) break;
                  bVar33 = *(int *)&(pUVar30->klass->_1).name == *(int *)((long)&(pIVar31->_1).parent + 4);
                }
                *(bool *)((long)&(__this_03->fields)._hovered + 2) = bVar33;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b52d;
                Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh
                          (__this_03,(MethodInfo *)method_00);
              }
              lVar5 = MethodInfo_Void_Add;
              __this_01 = (pIVar31->_1).typeMetadataHandle;
              if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) break;
              piVar1 = &(__this_01->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar6 = (__this_01->fields)._items;
              if (pSVar6 == (System_Object_array *)0x0) break;
              uVar10 = (__this_01->fields)._size;
              if (uVar10 < (uint)pSVar6->max_length) {
                (__this_01->fields)._size = uVar10 + 1;
                pSVar6->m_Items[(int)uVar10] = (Il2CppObject *)__this_03;
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b575;
                il2cpp_runtime_helper_022b4080(pSVar6->m_Items + (int)uVar10);
                pUVar7 = pUVar30->klass;
              }
              else {
                pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b0c7;
                System_Collections_Generic_List_object___AddWithResize
                          (__this_01,(Il2CppObject *)__this_03,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                pUVar7 = pUVar30->klass;
              }
              if (pUVar7 == (UnityEngine_Transform_c *)0x0) break;
              iVar2 = *(int32_t *)&(pUVar7->_1).name;
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b0e1;
              pUVar19 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pGVar17,(MethodInfo *)0x0);
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b0f6;
              label = (TMPro_TextMeshProUGUI_o *)
                      UnityEngine_Component__GetComponentInChildren_object__24e7d50
                                ((UnityEngine_Component_o *)pGVar17,MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
              pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b109;
              Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
                        ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pIVar31,iVar2,pUVar19,label,0,in_R9
                        );
              content = local_40;
              pIVar12 = local_48;
            }
            uVar23 = (ulong)((int)local_38 + 1);
            lVar5 = *(long *)&(local_58->_1).byval_arg.bits;
            if ((lVar5 == 0) ||
               (pGVar13 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array **)(lVar5 + 0x10),
               pGVar13 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) break;
          } while( true );
        }
      }
    }
  }
  pUStack_70 = (UnityEngine_UI_Selectable_o *)0x3b8b587;
  il2cpp_runtime_helper_022b2c90();
  return;
label_03b8b7d7:
  do {
    uVar22 = (int)(uVar10 + uVar26 + iVar25) % (int)uVar26;
    if (-1 < (int)uVar22) {
      uVar11 = uVar24;
      if ((int)uVar22 < (int)uVar24) {
        uVar11 = uVar22;
      }
      if (uVar26 <= uVar11) goto label_03b8b83f;
      lVar8 = *(long *)(lVar5 + 0x20 + (long)(int)uVar11 * 8);
      if (lVar8 == 0) goto label_03b8b83a;
      if (*(char *)(lVar8 + 0x28) != '\0') goto label_03b8b814;
    }
    iVar25 = iVar25 + 1;
  } while (iVar25 <= (int)uVar26);
label_03b8b801:
  if ((int)uVar10 < 0) {
    uVar22 = 0;
  }
  else {
    uVar22 = uVar10;
    if ((int)uVar24 <= (int)uVar10) {
      uVar22 = uVar24;
    }
  }
label_03b8b814:
  *(uint *)((long)&x[3].fields.m_CachedPtr + 4) = uVar22;
  iVar25 = *(int *)(TypeInfo_Object + 0xe4);
joined_r0x03b8b64e:
  if (iVar25 == 0) {
    pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b835;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar30 = (UnityEngine_Transform_o *)&TypeInfo_Object;
  SVar18.hasValue = 0;
  SVar18.value = 0;
  SVar20.hasValue = 0;
  SVar20.value = 0;
  pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b663;
  __this_07 = x_00;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_03b8b67d:
    uStack_94 = *(undefined4 *)((long)&x[3].fields.m_CachedPtr + 4);
    if (g_data_057a9ea4 == '\0') {
      pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b69a;
      il2cpp_runtime_helper_023445d0(&"-option-");
      g_data_057a9ea4 = '\x01';
    }
    pSVar16 = x[1].monitor;
    pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b6b1;
    pSVar15 = System_Int32__ToString((int32_t)&uStack_94,(MethodInfo *)0x0);
    pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b6c8;
    pSVar16 = System_String__Concat_3af7150(pSVar16,"-option-",pSVar15,(MethodInfo *)0x0);
    pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b6d3;
    x = Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep
                  ((UnityEngine_Transform_o *)SVar18,pSVar16,method_02);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b6e8;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b6f4;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    x_00 = (UnityEngine_Transform_o *)&TypeInfo_EventSystem;
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b714;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b71b;
    pUVar14 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b730;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b73c;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b751;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_07 = (UnityEngine_Transform_o *)0x0;
    pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b758;
    __this_04 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (x != (UnityEngine_Transform_o *)0x0) {
      pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b76e;
      __this_07 = x;
      pUVar19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      x_00 = (UnityEngine_Transform_o *)0x0;
      if (__this_04 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
        pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b784;
        UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
                  (__this_04,pUVar19,(MethodInfo *)0x0);
        pMVar28 = (MethodInfo *)0x0;
        pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b78e;
        pUVar19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b79e;
        Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar19,12.0,pMVar28);
        return;
      }
    }
  }
  else {
    SVar18 = SVar20;
    if (x_00 != (UnityEngine_Transform_o *)0x0) {
      pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b67a;
      SVar18 = (System_Nullable_bool__Fields)
               UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x_00,(MethodInfo *)0x0);
      goto label_03b8b67d;
    }
  }
label_03b8b83a:
  pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b83f;
  il2cpp_runtime_helper_022b2c90();
label_03b8b83f:
  pUStack_a8 = (UnityEngine_Transform_o *)0x3b8b844;
  uStack_c8 = il2cpp_runtime_helper_022b2ca0();
  pUStack_c0 = pUVar14;
  SStack_b8 = SVar18;
  pUStack_b0 = x_00;
  pUStack_a8 = x;
  if (g_data_057a9e98 == '\0') {
    uStack_d0 = 0x3b8b870;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    uStack_d0 = 0x3b8b87c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    uStack_d0 = 0x3b8b888;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e98 = '\x01';
  }
  uStack_d0 = 0x3b8b8a1;
  SVar20 = (System_Nullable_bool__Fields)
           UnityEngine_Component__GetComponentInParent_object_
                     ((UnityEngine_Component_o *)__this_07,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_d0 = 0x3b8b8bc;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar16 = (System_String_o *)0x0;
  uStack_d0 = 0x3b8b8c8;
  SVar21 = SVar20;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
label_03b8b8ed:
    SVar18 = (System_Nullable_bool__Fields)&TypeInfo_EventSystem;
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      uStack_d0 = 0x3b8b906;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_d0 = 0x3b8b90d;
    pUVar14 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_d0 = 0x3b8b921;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_d0 = 0x3b8b92d;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    __this_06 = (System_Nullable_bool__Fields)__this_07[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_d0 = 0x3b8b946;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = (System_String_o *)0x0;
    uStack_d0 = 0x3b8b952;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_06,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      uStack_d0 = 0x3b8b968;
      il2cpp_runtime_helper_02337ed0();
    }
    SVar21.hasValue = 0;
    SVar21.value = 0;
    uStack_d0 = 0x3b8b96f;
    pUVar14 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar14 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
                (pUVar14,__this_07[2].monitor,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_06.hasValue = 0;
    __this_06.value = 0;
    if (SVar20 != (System_Nullable_bool__Fields)0x0) {
      if (*(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)((long)SVar20 + 0x88) !=
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        uStack_d0 = 0x3b8b8ed;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  (*(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)((long)SVar20 + 0x88),1,
                   (MethodInfo *)0x0);
      }
      goto label_03b8b8ed;
    }
  }
  uStack_d0 = 0x3b8b99e;
  uStack_d0 = il2cpp_runtime_helper_022b2c90();
  if (*(long *)((long)SVar21 + 0x10) != 0) {
    return;
  }
  pGStack_d8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8b9b4;
  il2cpp_runtime_helper_022b2c90();
  puStack_e0 = &TypeInfo_Object;
  pSVar32 = (System_String_o *)((ulong)pSVar16 & 0xffffffff);
  pSVar15 = pSVar16;
  __this_08 = SVar21;
  SStack_f8 = __this_06;
  SStack_f0 = SVar18;
  pUStack_e8 = __this_07;
  pGStack_d8 = pGVar17;
  if (g_data_057a9e9a == '\0') {
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8b9e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8b9f3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8b9ff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba17;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba23;
    il2cpp_runtime_helper_023445d0(&"slideDown");
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba2f;
    il2cpp_runtime_helper_023445d0(&"percent");
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba3b;
    il2cpp_runtime_helper_023445d0(&"-options");
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba47;
    il2cpp_runtime_helper_023445d0(&"Button");
    __this_08 = (System_Nullable_bool__Fields)&"dropdownItem";
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba53;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e9a = '\x01';
  }
  if (*(long *)((long)SVar21 + 0x28) != 0) {
    uVar10 = (uint)pSVar16;
    if ((int)uVar10 < 0) {
label_03b8baae:
      pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    }
    else {
      lVar5 = *(long *)(*(long *)((long)SVar21 + 0x28) + 0x10);
      if (lVar5 == 0) goto label_03b8be06;
      uVar26 = *(uint *)(lVar5 + 0x18);
      if ((int)uVar26 <= (int)uVar10) goto label_03b8baae;
      uVar24 = uVar26 - 1;
      if ((int)uVar10 < (int)(uVar26 - 1)) {
        uVar24 = uVar10;
      }
      if (uVar26 <= uVar24) goto label_03b8be0b;
      lVar5 = *(long *)(lVar5 + 0x20 + (long)(int)uVar24 * 8);
      if (lVar5 == 0) goto label_03b8be06;
      pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                CONCAT71((int7)((ulong)pGVar17 >> 8),*(char *)(lVar5 + 0x28) != '\0');
    }
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8babf;
    SVar18 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pSVar15 = (System_String_o *)0x0;
    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bacc;
    __this_08 = SVar18;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)SVar18,(MethodInfo *)0x0);
    if (SVar18 != (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)((long)SVar18 + 0x10) = "Button";
      pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8baee;
      il2cpp_runtime_helper_022b4080((long)SVar18 + 0x10);
      uStack_fc = uVar10;
      if (g_data_057a9ea4 == '\0') {
        pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb08;
        il2cpp_runtime_helper_023445d0(&"-option-");
        g_data_057a9ea4 = '\x01';
      }
      __this_06 = *(System_Nullable_bool__Fields *)((long)SVar21 + 0x20);
      pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb1f;
      pSVar15 = System_Int32__ToString((int32_t)&uStack_fc,(MethodInfo *)0x0);
      pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb36;
      pSVar15 = System_String__Concat_3af7150
                          ((System_String_o *)__this_06,"-option-",pSVar15,(MethodInfo *)0x0);
      *(System_String_o **)((long)SVar18 + 0x18) = pSVar15;
      pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb48;
      il2cpp_runtime_helper_022b4080((long)SVar18 + 0x18);
      __this_08.hasValue = 0;
      __this_08.value = 0;
      if (*(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)((long)SVar21 + 0x28) !=
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
        pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb5d;
        pSVar15 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
                            (*(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)((long)SVar21 + 0x28),uVar10,
                             method_03);
        __this_08 = (System_Nullable_bool__Fields)((long)SVar18 + 0x20);
        *(System_String_o **)((long)SVar18 + 0x20) = pSVar15;
        pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb6f;
        il2cpp_runtime_helper_022b4080();
        if ((*(long *)((long)SVar21 + 0x28) != 0) &&
           (lVar5 = *(long *)(*(long *)((long)SVar21 + 0x28) + 0x10), lVar5 != 0)) {
          uVar26 = *(uint *)(lVar5 + 0x18) - 1;
          pSVar15 = (System_String_o *)(ulong)uVar26;
          if ((int)uVar10 < (int)uVar26) {
            pSVar15 = pSVar32;
          }
          uVar26 = 0;
          if (-1 < (int)uVar10) {
            uVar26 = (uint)pSVar15;
          }
          if (*(uint *)(lVar5 + 0x18) <= uVar26) goto label_03b8be0b;
          lVar5 = *(long *)(lVar5 + 0x20 + (long)(int)uVar26 * 8);
          if (lVar5 != 0) {
            *(undefined8 *)((long)SVar18 + 0x28) = *(undefined8 *)(lVar5 + 0x20);
            pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bbca;
            il2cpp_runtime_helper_022b4080((long)SVar18 + 0x28);
            *(undefined8 *)((long)SVar18 + 0x40) = "dropdownItem";
            pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bbe3;
            il2cpp_runtime_helper_022b4080((long)SVar18 + 0x40);
            uStack_fe = 0;
            pSVar15 = (System_String_o *)((ulong)pGVar17 & 0xff);
            __this_08 = (System_Nullable_bool__Fields)&uStack_fe;
            pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bc02;
            System_Nullable_bool____ctor
                      ((System_Nullable_bool__o)__this_08,(bool_conflict)pSVar15,MethodInfo_Nullable_1_Boolean);
            *(undefined2 *)((long)SVar18 + 0x6b) = uStack_fe;
            if ((*(long *)((long)SVar21 + 0x28) != 0) &&
               (lVar5 = *(long *)(*(long *)((long)SVar21 + 0x28) + 0x10), lVar5 != 0)) {
              uVar26 = *(uint *)(lVar5 + 0x18) - 1;
              pSVar15 = (System_String_o *)(ulong)uVar26;
              if ((int)uVar10 < (int)uVar26) {
                pSVar15 = (System_String_o *)((ulong)pSVar16 & 0xffffffff);
              }
              uVar26 = 0;
              if (-1 < (int)uVar10) {
                uVar26 = (uint)pSVar15;
              }
              if (*(uint *)(lVar5 + 0x18) <= uVar26) goto label_03b8be0b;
              lVar5 = *(long *)(lVar5 + 0x20 + (long)(int)uVar26 * 8);
              if (lVar5 != 0) {
                pSVar15 = *(System_String_o **)(lVar5 + 0x30);
                __this_08 = (System_Nullable_bool__Fields)((long)SVar18 + 0xb8);
                *(System_String_o **)((long)SVar18 + 0xb8) = pSVar15;
                pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bc6e;
                il2cpp_runtime_helper_022b4080();
                if ((*(long *)((long)SVar21 + 0x28) != 0) &&
                   (lVar5 = *(long *)(*(long *)((long)SVar21 + 0x28) + 0x10), lVar5 != 0)) {
                  uVar26 = *(uint *)(lVar5 + 0x18) - 1;
                  pSVar15 = (System_String_o *)(ulong)uVar26;
                  if ((int)uVar10 < (int)uVar26) {
                    pSVar15 = (System_String_o *)((ulong)pSVar16 & 0xffffffff);
                  }
                  uVar26 = 0;
                  if (-1 < (int)uVar10) {
                    uVar26 = (uint)pSVar15;
                  }
                  if (*(uint *)(lVar5 + 0x18) <= uVar26) goto label_03b8be0b;
                  lVar5 = *(long *)(lVar5 + 0x20 + (long)(int)uVar26 * 8);
                  if (lVar5 != 0) {
                    *(undefined8 *)((long)SVar18 + 0xc0) = *(undefined8 *)(lVar5 + 0x38);
                    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bccf;
                    il2cpp_runtime_helper_022b4080((long)SVar18 + 0xc0);
                    if ((char)pGVar17 == '\0') {
                      __this_05.hasValue = 0;
                      __this_05.value = 0;
                    }
                    else {
                      pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bce3;
                      __this_05 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
                      pSVar15 = (System_String_o *)0x0;
                      pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bcf0;
                      __this_08 = __this_05;
                      Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                                ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)__this_05,
                                 (MethodInfo *)0x0);
                      pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
                      if (__this_05 == (System_Nullable_bool__Fields)0x0) goto label_03b8be06;
                      *(undefined8 *)((long)__this_05 + 0x10) = "slideDown";
                      pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd10;
                      il2cpp_runtime_helper_022b4080((long)__this_05 + 0x10);
                      pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd25;
                      pSVar16 = System_String__Concat_3ae5ba0
                                          (*(System_String_o **)((long)SVar21 + 0x20),"-options",
                                           (MethodInfo *)0x0);
                      *(System_String_o **)((long)__this_05 + 0x18) = pSVar16;
                      pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd38;
                      il2cpp_runtime_helper_022b4080((long)__this_05 + 0x18,pSVar16);
                      *(undefined4 *)((long)__this_05 + 0x20) = 0x3df5c28f;
                      *(undefined4 *)((long)__this_05 + 0x28) = 0x3ccccccd;
                      *(uint *)((long)__this_05 + 0x2c) = uVar10;
                    }
                    *(System_Nullable_bool__Fields *)((long)SVar18 + 0xf8) = __this_05;
                    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd66;
                    il2cpp_runtime_helper_022b4080((long)SVar18 + 0xf8);
                    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd75;
                    pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                              il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
                    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd82;
                    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar17,(MethodInfo *)0x0);
                    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd91;
                    __this_06 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                    pSVar15 = (System_String_o *)0x0;
                    pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd9e;
                    __this_08 = __this_06;
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_06,(MethodInfo *)0x0);
                    if (__this_06 != (System_Nullable_bool__Fields)0x0) {
                      *(undefined4 *)((long)__this_06 + 0x10) = 0x42c80000;
                      pSVar15 = "percent";
                      __this_08 = (System_Nullable_bool__Fields)((long)__this_06 + 0x18);
                      *(System_String_o **)((long)__this_06 + 0x18) = "percent";
                      pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bdc4;
                      il2cpp_runtime_helper_022b4080();
                      if (pGVar17 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                        (pGVar17->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_06;
                        pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bddc;
                        il2cpp_runtime_helper_022b4080(&(pGVar17->fields).width,__this_06);
                        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar18 + 0xd8) = pGVar17
                        ;
                        pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bdf6;
                        il2cpp_runtime_helper_022b4080((long)SVar18 + 0xd8,pGVar17);
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
label_03b8be06:
  pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8be0b;
  il2cpp_runtime_helper_022b2c90();
label_03b8be0b:
  pGStack_110 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode;
  uStack_140 = il2cpp_runtime_helper_022b2ca0();
  SStack_138 = __this_06;
  SStack_130 = SVar18;
  pUStack_128 = pUVar30;
  SStack_120 = SVar21;
  pSStack_118 = pSVar32;
  pGStack_110 = pGVar17;
  if (g_data_057a9e9b == '\0') {
    SStack_148.hasValue = 0x3b8be36;
    SStack_148.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    SStack_148.hasValue = 0x3b8be42;
    SStack_148.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    SStack_148.hasValue = 0x3b8be4e;
    SStack_148.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    SStack_148.hasValue = 0x3b8be5a;
    SStack_148.value = 0;
    il2cpp_runtime_helper_023445d0(&"Column");
    SStack_148.hasValue = 0x3b8be66;
    SStack_148.value = 0;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    SStack_148.hasValue = 0x3b8be72;
    SStack_148.value = 0;
    il2cpp_runtime_helper_023445d0(&"point");
    SStack_148.hasValue = 0x3b8be7e;
    SStack_148.value = 0;
    il2cpp_runtime_helper_023445d0(&"scrollView");
    SStack_148.hasValue = 0x3b8be8a;
    SStack_148.value = 0;
    il2cpp_runtime_helper_023445d0(&"-options-scroll");
    SStack_148.hasValue = 0x3b8be96;
    SStack_148.value = 0;
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9e9b = '\x01';
  }
  SStack_148.hasValue = 0x3b8beac;
  SStack_148.value = 0;
  SVar20 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  uVar27 = 0;
  SStack_148.hasValue = 0x3b8beb9;
  SStack_148.value = 0;
  SVar18 = SVar20;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)SVar20,(MethodInfo *)0x0);
  if (SVar20 != (System_Nullable_bool__Fields)0x0) {
    *(undefined8 *)((long)SVar20 + 0x10) = "ScrollView";
    SStack_148.hasValue = 0x3b8bedb;
    SStack_148.value = 0;
    il2cpp_runtime_helper_022b4080((long)SVar20 + 0x10);
    SStack_148.hasValue = 0x3b8bef0;
    SStack_148.value = 0;
    pSVar16 = System_String__Concat_3ae5ba0
                        (*(System_String_o **)((long)__this_08 + 0x20),"-options-scroll",(MethodInfo *)0x0);
    *(System_String_o **)((long)SVar20 + 0x18) = pSVar16;
    SStack_148.hasValue = 0x3b8bf02;
    SStack_148.value = 0;
    il2cpp_runtime_helper_022b4080((long)SVar20 + 0x18,pSVar16);
    *(undefined8 *)((long)SVar20 + 0x40) = "scrollView";
    SStack_148.hasValue = 0x3b8bf1b;
    SStack_148.value = 0;
    il2cpp_runtime_helper_022b4080((long)SVar20 + 0x40);
    SStack_148.hasValue = 0x3b8bf2b;
    SStack_148.value = 0;
    pGVar17 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    SStack_148.hasValue = 0x3b8bf38;
    SStack_148.value = 0;
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(pGVar17,(MethodInfo *)0x0);
    SStack_148.hasValue = 0x3b8bf47;
    SStack_148.value = 0;
    __this_06 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    uVar27 = 0;
    SStack_148.hasValue = 0x3b8bf54;
    SStack_148.value = 0;
    SVar18 = __this_06;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_06,(MethodInfo *)0x0);
    if (__this_06 != (System_Nullable_bool__Fields)0x0) {
      *(float *)((long)__this_06 + 0x10) = (float)*(int *)((long)__this_08 + 0x60) * 38.0;
      uVar29 = "point";
      SVar18 = (System_Nullable_bool__Fields)((long)__this_06 + 0x18);
      *(undefined8 *)((long)__this_06 + 0x18) = "point";
      SStack_148.hasValue = 0x3b8bf8a;
      SStack_148.value = 0;
      il2cpp_runtime_helper_022b4080();
      uVar27 = (undefined4)uVar29;
      if (pGVar17 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar17->fields).height = (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_06;
        SStack_148.hasValue = 0x3b8bfa6;
        SStack_148.value = 0;
        il2cpp_runtime_helper_022b4080(&(pGVar17->fields).height,__this_06);
        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar20 + 0xd8) = pGVar17;
        SStack_148.hasValue = 0x3b8bfbe;
        SStack_148.value = 0;
        il2cpp_runtime_helper_022b4080((long)SVar20 + 0xd8);
        SStack_148.hasValue = 0x3b8bfc7;
        SStack_148.value = 0;
        SVar21 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
        uVar27 = 0;
        SStack_148.hasValue = 0x3b8bfd4;
        SStack_148.value = 0;
        SVar18 = SVar21;
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar21,(MethodInfo *)0x0);
        __this_06.hasValue = 0;
        __this_06.value = 0;
        if (SVar21 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)((long)SVar21 + 0x10) = "Column";
          SStack_148.hasValue = 0x3b8bff0;
          SStack_148.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar21 + 0x10);
          *(undefined8 *)((long)SVar21 + 0x20) = "Stretch";
          SStack_148.hasValue = 0x3b8c00a;
          SStack_148.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar21 + 0x20);
          *(undefined4 *)((long)SVar21 + 0x70) = 0;
          *(System_Nullable_bool__Fields *)((long)SVar20 + 0xe0) = SVar21;
          SStack_148.hasValue = 0x3b8c029;
          SStack_148.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar20 + 0xe0,SVar21);
          *(System_String_o **)((long)SVar20 + 0x118) = pSVar15;
          SStack_148.hasValue = 0x3b8c043;
          SStack_148.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar20 + 0x118,pSVar15);
          return;
        }
      }
    }
  }
  SStack_148.hasValue = 0x3b8c05a;
  SStack_148.value = 0;
  il2cpp_runtime_helper_022b2c90();
  uStack_14c = uVar27;
  SStack_148 = __this_06;
  if (g_data_057a9ea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-option-");
    g_data_057a9ea4 = '\x01';
  }
  pSVar16 = *(System_String_o **)((long)SVar18 + 0x20);
  pSVar15 = System_Int32__ToString((int32_t)&uStack_14c,(MethodInfo *)0x0);
  System_String__Concat_3af7150(pSVar16,"-option-",pSVar15,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SelectFromNavigation
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromNavigation (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, UnityEngine_GameObject_o* option, const MethodInfo* method);
// 0x3b8ca40

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
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
    method_00 = extraout_RDX;
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
    method_00 = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 1) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
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
// 0x3b8d0b0

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
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
    method = extraout_RDX;
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
    method = extraout_RDX_00;
  }
  lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar2 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
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
// 0x3b8d1a0

bool_conflict
Gisketch_Aottg2UI_Actions_AottgChoiceControl__CanUsePointerSelection
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,UnityEngine_Vector2_o pointerPosition,
          MethodInfo *method)

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
// 0x3b8aef0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__LockPointerSelection
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,UnityEngine_Vector2_o pointerPosition,
               MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._pointerSelectionLocked = 1;
  (__this->fields)._pointerLockPosition.fields = pointerPosition.fields;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetSelectedIndex
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, const MethodInfo* method);
// 0x3b8cb30

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  UnityEngine_RectTransform_o *pUVar4;
  long lVar5;
  undefined4 uVar6;
  bool_conflict bVar7;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *pGVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_UI_ScrollRect_o *scroll;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX_05;
  uint uVar11;
  int32_t index_00;
  UnityEngine_UI_ScrollRect_o *pUVar12;
  UnityEngine_RectTransform_o *pUVar13;
  long *x_00;
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *pSVar14;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  UnityEngine_Rect_o UVar20;
  UnityEngine_Rect_o UVar21;
  undefined1 auStack_60 [16];
  float fStack_50;
  System_Threading_CancellationTokenSource_o *pSStack_48;
  
  x_00 = (long *)__this;
  if (g_data_057a9e9d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropdownItemFeedback_get_Item);
    x_00 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e9d = '\x01';
  }
  pGVar2 = (__this->fields)._options;
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_03b8cc99:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  if (index < 0) {
    return;
  }
  pGVar3 = (pGVar2->fields)._items;
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_03b8cc99;
  uVar11 = (uint)pGVar3->max_length;
  if ((int)uVar11 <= index) {
    return;
  }
  if ((int)(uVar11 - 1) <= index) {
    index = uVar11 - 1;
  }
  if ((uint)index < uVar11) {
    if (pGVar3->m_Items[index] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
      if ((char)(pGVar3->m_Items[index]->fields).enabled == '\0') {
        return;
      }
      (__this->fields)._selectedIndex = index;
      pSVar14 = (__this->fields)._feedback;
      if (pSVar14 != (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) {
        uVar11 = 0;
        if ((pSVar14->fields)._size < 1) {
          return;
        }
        do {
          x = (UnityEngine_Object_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar14,uVar11,MethodInfo_GisketchDropdownItemFeedback_get_Item);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            pSVar14 = (__this->fields)._feedback;
            if (pSVar14 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) break;
            pMVar10 = (MethodInfo *)(ulong)uVar11;
            pGVar8 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar14,uVar11,MethodInfo_GisketchDropdownItemFeedback_get_Item);
            if (pGVar8 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
            *(undefined1 *)&(pGVar8->fields)._hovered = 0;
            Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(pGVar8,pMVar10);
            pSVar14 = (__this->fields)._feedback;
            if (pSVar14 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) break;
            pMVar10 = (MethodInfo *)(ulong)uVar11;
            pGVar8 = (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar14,uVar11,MethodInfo_GisketchDropdownItemFeedback_get_Item);
            if (pGVar8 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0) break;
            *(bool *)((long)&(pGVar8->fields)._hovered + 2) = uVar11 == (__this->fields)._selectedIndex;
            Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Refresh(pGVar8,pMVar10);
          }
          uVar11 = uVar11 + 1;
          pSVar14 = (__this->fields)._feedback;
          if (pSVar14 == (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)0x0) break;
          if ((pSVar14->fields)._size <= (int)uVar11) {
            return;
          }
        } while( true );
      }
    }
    goto label_03b8cc99;
  }
  fVar15 = (float)il2cpp_runtime_helper_022b2ca0();
  pSStack_48 = (System_Threading_CancellationTokenSource_o *)(ulong)(uint)index;
  if (g_data_057a9eff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9eff = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar9 = (UnityEngine_RectTransform_o *)0x0;
  index_00 = 0;
  __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)x_00;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)x_00 ==
        (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) goto label_03b8d0ab;
    pUVar9 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)x_00,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  scroll = (UnityEngine_UI_ScrollRect_o *)0x0;
  index_00 = 0;
  __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)x_00;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar10 = extraout_RDX;
  if ((char)bVar7 != '\0') {
    if ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)x_00 ==
        (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) goto label_03b8d0ab;
    scroll = (UnityEngine_UI_ScrollRect_o *)
             UnityEngine_GameObject__GetComponentInParent_object__255a6c0
                       ((UnityEngine_GameObject_o *)x_00,0,MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    pMVar10 = extraout_RDX_00;
  }
  pUVar12 = scroll;
  bVar7 = Gisketch_Aottg2UI_Actions_GisketchScrollFocus__CanScroll(pUVar9,scroll,pMVar10);
  index_00 = (int32_t)pUVar12;
  if ((char)bVar7 == '\0') {
    return;
  }
  __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  if (scroll != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar4 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
    if (g_data_057a9f02 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      g_data_057a9f02 = '\x01';
    }
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)auStack_60;
    pUVar13 = pUVar4;
    UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
              ((UnityEngine_Bounds_o *)__this_00,(UnityEngine_Transform_o *)pUVar4,
               (UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0);
    fVar17 = fStack_50;
    uVar6 = auStack_60._4_4_;
    index_00 = (int32_t)pUVar13;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      index_00 = 0;
      UVar20 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
      fVar16 = UVar20.fields.m_YMin;
      fVar19 = ((float)uVar6 - fVar17) - fVar15;
      if (fVar16 <= fVar19) {
        fVar19 = UVar20.fields.m_Height + fVar16;
        fVar17 = fVar17 + (float)uVar6 + fVar15;
        fVar16 = 0.0;
        if (fVar19 < fVar17) {
          fVar16 = fVar19 - fVar17;
        }
      }
      else {
        fVar16 = fVar16 - fVar19;
      }
      if (ABS(fVar16) < 0.01) {
        return;
      }
      pUVar4 = (scroll->fields).m_Content;
      __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        index_00 = 0;
        UVar20 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
        pUVar4 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
        __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
        if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
          UVar21 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
          fVar19 = UVar20.fields.m_Height - UVar21.fields.m_Height;
          fVar17 = 0.0;
          if (0.0 <= fVar19) {
            fVar17 = fVar19;
          }
          (*(scroll->klass->vtable)._41_StopMovement.methodPtr)(scroll);
          fVar19 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
          fVar19 = fVar19 - fVar16 / fVar17;
          fVar17 = 1.0;
          if (fVar19 <= 1.0) {
            fVar17 = fVar19;
          }
          UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                    (scroll,(float)(-(uint)(0.0 <= fVar19) & (uint)fVar17),(MethodInfo *)0x0);
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          pUVar4 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
          if (g_data_057a9f02 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
            g_data_057a9f02 = '\x01';
          }
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)auStack_60;
          pUVar13 = pUVar4;
          UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                    ((UnityEngine_Bounds_o *)__this_00,(UnityEngine_Transform_o *)pUVar4,
                     (UnityEngine_Transform_o *)pUVar9,(MethodInfo *)0x0);
          index_00 = (int32_t)pUVar13;
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            index_00 = 0;
            UVar20 = UnityEngine_RectTransform__get_rect(pUVar4,(MethodInfo *)0x0);
            fVar17 = UVar20.fields.m_YMin;
            fVar16 = ((float)auStack_60._4_4_ - fStack_50) - fVar15;
            if (fVar17 <= fVar16) {
              fVar16 = UVar20.fields.m_Height + fVar17;
              fVar15 = fStack_50 + (float)auStack_60._4_4_ + fVar15;
              fVar17 = 0.0;
              if (fVar16 < fVar15) {
                fVar17 = fVar16 - fVar15;
              }
            }
            else {
              fVar17 = fVar17 - fVar16;
            }
            if (ABS(fVar17) < 0.01) {
              return;
            }
            pUVar9 = (scroll->fields).m_Content;
            __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
            if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
              index_00 = 0;
              UVar20 = UnityEngine_RectTransform__get_rect(pUVar9,(MethodInfo *)0x0);
              pUVar9 = *(UnityEngine_RectTransform_o **)&(scroll->fields).m_ScrollSensitivity;
              __this_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
              if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
                UVar21 = UnityEngine_RectTransform__get_rect(pUVar9,(MethodInfo *)0x0);
                fVar16 = UVar20.fields.m_Height - UVar21.fields.m_Height;
                fVar15 = 0.0;
                if (0.0 <= fVar16) {
                  fVar15 = fVar16;
                }
                (*(scroll->klass->vtable)._41_StopMovement.methodPtr)(scroll);
                fVar16 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(scroll,(MethodInfo *)0x0);
                fVar16 = fVar16 - fVar17 / fVar15;
                fVar15 = 1.0;
                if (fVar16 <= 1.0) {
                  fVar15 = fVar16;
                }
                UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                          (scroll,(float)(-(uint)(0.0 <= fVar16) & (uint)fVar15),(MethodInfo *)0x0);
                UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_03b8d0ab:
  uVar18 = il2cpp_runtime_helper_022b2c90();
  if ((char)(__this_00->fields)._pointerSelectionLocked != '\0') {
    UVar1 = (__this_00->fields)._pointerLockPosition.fields;
    fVar15 = (float)uVar18 - UVar1.x;
    fVar17 = (float)((ulong)uVar18 >> 0x20) - UVar1.y;
    if (fVar17 * fVar17 + fVar15 * fVar15 < 4.0) {
      return;
    }
    *(undefined1 *)&(__this_00->fields)._pointerSelectionLocked = 0;
  }
  pMVar10 = extraout_RDX_01;
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
    pMVar10 = extraout_RDX_02;
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
    pMVar10 = extraout_RDX_03;
  }
  lVar5 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar5 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar5 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      lVar5 = *(long *)(lVar5 + 0x10);
      pMVar10 = extraout_RDX_05;
    }
    else {
      *(undefined4 *)(lVar5 + 0x18) = 0;
      lVar5 = *(long *)(lVar5 + 0x10);
    }
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
      pMVar10 = extraout_RDX_04;
    }
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,index_00,pMVar10);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SelectFromClick
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromClick (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b8d1f0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromClick
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c *pGVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_String_Fields SVar9;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_01;
  bool_conflict bVar10;
  UnityEngine_EventSystems_EventSystem_o *pUVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar12;
  VirtualInvokeData *pVVar13;
  uint uVar14;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *x;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *x_00;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  long *__this_02;
  long *__this_03;
  long lVar18;
  System_String_o *pSVar19;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  System_String_o SStack_a8;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int32_t iStack_78;
  uint16_t uStack_74;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGStack_68;
  
  uVar15 = (ulong)(uint)index;
  __this_02 = (long *)__this;
  if (g_data_057a9c87 == '\0') {
    __this_02 = &TypeInfo_GisketchFocusInputMode;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c87 = '\x01';
  }
  if (*(int *)(*(long *)(TypeInfo_GisketchFocusInputMode + 0xb8) + 0x18) == 1) {
    index = (__this->fields)._selectedIndex;
label_03b8d239:
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select(__this,index,root,method);
    return;
  }
  if (__this != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) goto label_03b8d239;
  il2cpp_runtime_helper_022b2c90();
  uVar17 = (uint)uVar15;
  __this_03 = __this_02;
  if (g_data_057a9e9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    __this_03 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e9f = '\x01';
  }
  pGVar3 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._options;
  x_00 = x;
  if (pGVar3 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_03b8d3df:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)uVar17 < 0) {
      return;
    }
    pGVar4 = (pGVar3->fields)._items;
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_03b8d3df;
    uVar2 = (uint)pGVar4->max_length;
    if ((int)uVar2 <= (int)uVar17) {
      return;
    }
    uVar14 = uVar2 - 1;
    if ((int)uVar17 < (int)(uVar2 - 1)) {
      uVar14 = uVar17;
    }
    if (uVar14 < uVar2) {
      if (pGVar4->m_Items[(int)uVar14] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
        if ((char)(pGVar4->m_Items[(int)uVar14]->fields).enabled == '\0') {
          return;
        }
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex
                  ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02,uVar17,0,
                   (MethodInfo *)(long)(int)uVar14);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar15 = 0;
        __this_03 = (long *)x;
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          if (x == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) goto label_03b8d3df;
          __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)
                      ((UnityEngine_Object_Fields *)&x[1].monitor)->m_CachedPtr;
          if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(__this_00,1,(MethodInfo *)0x0);
          }
        }
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar11 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return;
        }
        x_00 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)
               (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._opener;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar15 = 0;
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_03 = (long *)0x0;
        pUVar11 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
                    (pUVar11,(((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._opener,
                     (MethodInfo *)0x0);
          return;
        }
      }
      goto label_03b8d3df;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pGStack_68 = x_00;
  if (g_data_057a9ea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
    g_data_057a9ea2 = '\x01';
  }
  pGVar12 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_03)->fields)._node;
  if (pGVar12 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  pSVar19 = (pGVar12->fields).action;
  uVar16 = 0;
  bVar10 = System_String__IsNullOrEmpty(pSVar19,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  pGVar5 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_03)->fields)._actions;
  if (pGVar5 == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
    return;
  }
  pGVar12 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_03)->fields)._node;
  if (pGVar12 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar19 = (pGVar12->fields).id;
    pSVar6 = (pGVar12->fields).action;
    pGVar12 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
    SStack_a8.fields._stringLength = 0;
    SStack_a8.fields._firstChar = 0;
    SStack_a8.fields._6_2_ = 0;
    uStack_90 = 0;
    SStack_a8.klass = (System_String_c *)0x0;
    SStack_a8.monitor = (void *)0x0;
    __this_01.fields.ElementId._4_4_ = in_stack_ffffffffffffff3c;
    __this_01.fields.ElementId._0_4_ = in_stack_ffffffffffffff38;
    __this_01.fields.GameObject._0_4_ = in_stack_ffffffffffffff40;
    __this_01.fields.GameObject._4_4_ = in_stack_ffffffffffffff44;
    __this_01.fields.Node._0_4_ = in_stack_ffffffffffffff48;
    __this_01.fields.Node._4_4_ = in_stack_ffffffffffffff4c;
    __this_01.fields.InputSource = in_stack_ffffffffffffff50;
    __this_01.fields._28_4_ = in_stack_ffffffffffffff54;
    Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
              (__this_01,&SStack_a8,(UnityEngine_GameObject_o *)pSVar19,pGVar12,
               (int32_t)(((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_03)->fields)._node,
               (MethodInfo *)(uVar15 & 0xffffffff));
    SVar9 = SStack_a8.fields;
    iStack_78 = SStack_a8.fields._stringLength;
    uStack_74 = SStack_a8.fields._firstChar;
    uStack_72 = SStack_a8.fields._6_2_;
    uStack_70 = (undefined4)uStack_90;
    uStack_6c = uStack_90._4_4_;
    uStack_88 = SStack_a8.klass._0_4_;
    uStack_84 = SStack_a8.klass._4_4_;
    uStack_80 = SStack_a8.monitor._0_4_;
    uStack_7c = SStack_a8.monitor._4_4_;
    pGVar7 = pGVar5->klass;
    uVar1._0_1_ = (pGVar7->_2).rank;
    uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
    SStack_a8.fields = SVar9;
    if ((ulong)uVar1 != 0) {
      pIVar8 = (pGVar7->_1).interfaceOffsets;
      lVar18 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IGisketchActionHandler) {
          pVVar13 = pGVar7->vtable + *(int *)((long)&pIVar8->offset + lVar18);
          goto label_03b8d4fd;
        }
        lVar18 = lVar18 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar18);
    }
    pVVar13 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar5,TypeInfo_IGisketchActionHandler,0);
label_03b8d4fd:
    (*pVVar13->methodPtr)(pGVar5,pSVar6,pVVar13->method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  SVar9 = pSVar19->fields;
  if (SVar9 != (System_String_Fields)0x0) {
    uVar17 = *(uint *)((long)SVar9 + 0x18) - 1;
    pSVar19 = (System_String_o *)(ulong)uVar17;
    if ((int)uVar16 < (int)uVar17) {
      pSVar19 = (System_String_o *)(uVar16 & 0xffffffff);
    }
    uVar17 = 0;
    if (-1 < (int)uVar16) {
      uVar17 = (uint)pSVar19;
    }
    if (*(uint *)((long)SVar9 + 0x18) <= uVar17) goto label_03b8d59f;
    lVar18 = *(long *)((long)SVar9 + 0x20 + (long)(int)uVar17 * 8);
    if (lVar18 != 0) {
      bVar10 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar18 + 0x10),(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      if (*(long *)(lVar18 + 0x18) == 0) {
        return;
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b8d59f:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pSVar19,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$FocusSelectedOption
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__FocusSelectedOption (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, UnityEngine_GameObject_o* content, const MethodInfo* method);
// 0x3b8b5a0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__FocusSelectedOption
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,UnityEngine_GameObject_o *content,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  long lVar3;
  bool_conflict bVar4;
  uint uVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *x;
  UnityEngine_EventSystems_EventSystem_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  System_Nullable_bool__Fields SVar10;
  System_Nullable_bool__Fields SVar11;
  System_Nullable_bool__Fields __this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_01;
  uint uVar12;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *unaff_RBP;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  MethodInfo *method_02;
  undefined8 uVar16;
  uint uVar17;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_02;
  System_Nullable_bool__Fields SVar18;
  System_Nullable_bool__Fields unaff_R12;
  undefined8 *unaff_R13;
  uint uVar19;
  System_String_o *pSVar20;
  undefined4 uStack_e4;
  System_Nullable_bool__Fields SStack_e0;
  undefined8 uStack_d8;
  System_Nullable_bool__Fields SStack_d0;
  System_Nullable_bool__Fields SStack_c8;
  undefined8 *puStack_c0;
  System_Nullable_bool__Fields SStack_b8;
  System_String_o *pSStack_b0;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGStack_a8;
  undefined2 uStack_96;
  uint uStack_94;
  System_Nullable_bool__Fields SStack_90;
  System_Nullable_bool__Fields SStack_88;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGStack_80;
  undefined8 *puStack_78;
  int32_t local_2c;
  
  __this_02 = __this;
  if (g_data_057a9e9e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    __this_02 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e9e = '\x01';
  }
  pGVar1 = (__this->fields)._options;
  if (pGVar1 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_03b8b83a:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar19 = (__this->fields)._selectedIndex;
    pGVar2 = (pGVar1->fields)._items;
    if ((int)uVar19 < 0) {
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
label_03b8b7b5:
        uVar14 = (uint)pGVar2->max_length;
        uVar17 = uVar14 - 1;
        __this_02 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)(ulong)uVar17;
        if (0 < (int)uVar14) {
          iVar13 = 1;
          do {
            uVar12 = (int)(uVar19 + uVar14 + iVar13) % (int)uVar14;
            if (-1 < (int)uVar12) {
              uVar5 = uVar17;
              if ((int)uVar12 < (int)uVar17) {
                uVar5 = uVar12;
              }
              if (uVar14 <= uVar5) goto label_03b8b83f;
              if (pGVar2->m_Items[(int)uVar5] ==
                  (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_03b8b83a;
              if ((char)(pGVar2->m_Items[(int)uVar5]->fields).enabled != '\0') goto label_03b8b814;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 <= (int)uVar14);
        }
        if ((int)uVar19 < 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = uVar19;
          if ((int)uVar17 <= (int)uVar19) {
            uVar12 = uVar17;
          }
        }
label_03b8b814:
        (__this->fields)._selectedIndex = uVar12;
        iVar13 = *(int *)(TypeInfo_Object + 0xe4);
joined_r0x03b8b82a:
        if (iVar13 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        unaff_R13 = &TypeInfo_Object;
        unaff_R12.hasValue = 0;
        unaff_R12.value = 0;
        __this_02 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)content;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)content,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (content == (UnityEngine_GameObject_o *)0x0) goto label_03b8b83a;
          unaff_R12 = (System_Nullable_bool__Fields)
                      UnityEngine_GameObject__get_transform(content,(MethodInfo *)0x0);
        }
        local_2c = (__this->fields)._selectedIndex;
        if (g_data_057a9ea4 == '\0') {
          il2cpp_runtime_helper_023445d0(&"-option-");
          g_data_057a9ea4 = '\x01';
        }
        pSVar7 = (__this->fields)._id;
        pSVar6 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat_3af7150(pSVar7,"-option-",pSVar6,(MethodInfo *)0x0);
        x = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep
                      ((UnityEngine_Transform_o *)unaff_R12,pSVar7,method_00);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_02 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
        pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if ((x != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) &&
           (__this_02 = x,
           pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           pUVar8 != (UnityEngine_EventSystems_EventSystem_o *)0x0)) {
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0(pUVar8,pUVar9,(MethodInfo *)0x0)
          ;
          method_02 = (MethodInfo *)0x0;
          pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar9,12.0,method_02);
          return;
        }
      }
      goto label_03b8b83a;
    }
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_03b8b83a;
    uVar14 = (uint)pGVar2->max_length;
    if ((int)uVar14 <= (int)uVar19) goto label_03b8b7b5;
    uVar17 = uVar14 - 1;
    if ((int)uVar19 < (int)(uVar14 - 1)) {
      uVar17 = uVar19;
    }
    if (uVar17 < uVar14) {
      if (pGVar2->m_Items[(int)uVar17] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
      goto label_03b8b83a;
      if ((char)(pGVar2->m_Items[(int)uVar17]->fields).enabled == '\0') goto label_03b8b7b5;
      iVar13 = *(int *)(TypeInfo_Object + 0xe4);
      goto joined_r0x03b8b82a;
    }
  }
label_03b8b83f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9e98 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e98 = '\x01';
  }
  SVar10 = (System_Nullable_bool__Fields)
           UnityEngine_Component__GetComponentInParent_object_
                     ((UnityEngine_Component_o *)__this_02,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = (System_String_o *)0x0;
  SVar18 = SVar10;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_03b8b8ed:
    unaff_R12 = (System_Nullable_bool__Fields)&TypeInfo_EventSystem;
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    __this_00 = (System_Nullable_bool__Fields)(__this_02->fields)._opener;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_String_o *)0x0;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SVar18.hasValue = 0;
    SVar18.value = 0;
    pUVar8 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
                (pUVar8,(__this_02->fields)._opener,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_00.hasValue = 0;
    __this_00.value = 0;
    if (SVar10 != (System_Nullable_bool__Fields)0x0) {
      if (*(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)((long)SVar10 + 0x88) !=
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  (*(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)((long)SVar10 + 0x88),1,
                   (MethodInfo *)0x0);
      }
      goto label_03b8b8ed;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (*(long *)((long)SVar18 + 0x10) != 0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  puStack_78 = &TypeInfo_Object;
  pSVar20 = (System_String_o *)((ulong)pSVar7 & 0xffffffff);
  pSVar6 = pSVar7;
  SVar10 = SVar18;
  SStack_90 = __this_00;
  SStack_88 = unaff_R12;
  pGStack_80 = __this_02;
  if (g_data_057a9e9a == '\0') {
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8b9e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8b9f3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8b9ff;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDefinition);
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba0b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba17;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba23;
    il2cpp_runtime_helper_023445d0(&"slideDown");
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba2f;
    il2cpp_runtime_helper_023445d0(&"percent");
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba3b;
    il2cpp_runtime_helper_023445d0(&"-options");
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba47;
    il2cpp_runtime_helper_023445d0(&"Button");
    SVar10 = (System_Nullable_bool__Fields)&"dropdownItem";
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8ba53;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e9a = '\x01';
  }
  if (*(long *)((long)SVar18 + 0x28) != 0) {
    uVar19 = (uint)pSVar7;
    if ((int)uVar19 < 0) {
label_03b8baae:
      unaff_RBP = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    }
    else {
      lVar3 = *(long *)(*(long *)((long)SVar18 + 0x28) + 0x10);
      if (lVar3 == 0) goto label_03b8be06;
      uVar14 = *(uint *)(lVar3 + 0x18);
      if ((int)uVar14 <= (int)uVar19) goto label_03b8baae;
      uVar17 = uVar14 - 1;
      if ((int)uVar19 < (int)(uVar14 - 1)) {
        uVar17 = uVar19;
      }
      if (uVar14 <= uVar17) goto label_03b8be0b;
      lVar3 = *(long *)(lVar3 + 0x20 + (long)(int)uVar17 * 8);
      if (lVar3 == 0) goto label_03b8be06;
      unaff_RBP = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                  CONCAT71((int7)((ulong)unaff_RBP >> 8),*(char *)(lVar3 + 0x28) != '\0');
    }
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8babf;
    unaff_R12 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    pSVar6 = (System_String_o *)0x0;
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bacc;
    SVar10 = unaff_R12;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (System_Nullable_bool__Fields)0x0) {
      *(undefined8 *)((long)unaff_R12 + 0x10) = "Button";
      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8baee;
      il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x10);
      uStack_94 = uVar19;
      if (g_data_057a9ea4 == '\0') {
        pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb08;
        il2cpp_runtime_helper_023445d0(&"-option-");
        g_data_057a9ea4 = '\x01';
      }
      __this_00 = *(System_Nullable_bool__Fields *)((long)SVar18 + 0x20);
      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb1f;
      pSVar6 = System_Int32__ToString((int32_t)&uStack_94,(MethodInfo *)0x0);
      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb36;
      pSVar6 = System_String__Concat_3af7150
                         ((System_String_o *)__this_00,"-option-",pSVar6,(MethodInfo *)0x0);
      *(System_String_o **)((long)unaff_R12 + 0x18) = pSVar6;
      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb48;
      il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x18);
      SVar10.hasValue = 0;
      SVar10.value = 0;
      if (*(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)((long)SVar18 + 0x28) !=
          (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
        pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb5d;
        pSVar6 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
                           (*(Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o **)((long)SVar18 + 0x28),uVar19,
                            method_01);
        SVar10 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0x20);
        *(System_String_o **)((long)unaff_R12 + 0x20) = pSVar6;
        pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bb6f;
        il2cpp_runtime_helper_022b4080();
        if ((*(long *)((long)SVar18 + 0x28) != 0) &&
           (lVar3 = *(long *)(*(long *)((long)SVar18 + 0x28) + 0x10), lVar3 != 0)) {
          uVar14 = *(uint *)(lVar3 + 0x18) - 1;
          pSVar6 = (System_String_o *)(ulong)uVar14;
          if ((int)uVar19 < (int)uVar14) {
            pSVar6 = pSVar20;
          }
          uVar14 = 0;
          if (-1 < (int)uVar19) {
            uVar14 = (uint)pSVar6;
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar14) goto label_03b8be0b;
          lVar3 = *(long *)(lVar3 + 0x20 + (long)(int)uVar14 * 8);
          if (lVar3 != 0) {
            *(undefined8 *)((long)unaff_R12 + 0x28) = *(undefined8 *)(lVar3 + 0x20);
            pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bbca;
            il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x28);
            *(undefined8 *)((long)unaff_R12 + 0x40) = "dropdownItem";
            pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bbe3;
            il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0x40);
            uStack_96 = 0;
            pSVar6 = (System_String_o *)((ulong)unaff_RBP & 0xff);
            SVar10 = (System_Nullable_bool__Fields)&uStack_96;
            pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bc02;
            System_Nullable_bool____ctor((System_Nullable_bool__o)SVar10,(bool_conflict)pSVar6,MethodInfo_Nullable_1_Boolean);
            *(undefined2 *)((long)unaff_R12 + 0x6b) = uStack_96;
            if ((*(long *)((long)SVar18 + 0x28) != 0) &&
               (lVar3 = *(long *)(*(long *)((long)SVar18 + 0x28) + 0x10), lVar3 != 0)) {
              uVar14 = *(uint *)(lVar3 + 0x18) - 1;
              pSVar6 = (System_String_o *)(ulong)uVar14;
              if ((int)uVar19 < (int)uVar14) {
                pSVar6 = (System_String_o *)((ulong)pSVar7 & 0xffffffff);
              }
              uVar14 = 0;
              if (-1 < (int)uVar19) {
                uVar14 = (uint)pSVar6;
              }
              if (*(uint *)(lVar3 + 0x18) <= uVar14) goto label_03b8be0b;
              lVar3 = *(long *)(lVar3 + 0x20 + (long)(int)uVar14 * 8);
              if (lVar3 != 0) {
                pSVar6 = *(System_String_o **)(lVar3 + 0x30);
                SVar10 = (System_Nullable_bool__Fields)((long)unaff_R12 + 0xb8);
                *(System_String_o **)((long)unaff_R12 + 0xb8) = pSVar6;
                pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bc6e;
                il2cpp_runtime_helper_022b4080();
                if ((*(long *)((long)SVar18 + 0x28) != 0) &&
                   (lVar3 = *(long *)(*(long *)((long)SVar18 + 0x28) + 0x10), lVar3 != 0)) {
                  uVar14 = *(uint *)(lVar3 + 0x18) - 1;
                  pSVar6 = (System_String_o *)(ulong)uVar14;
                  if ((int)uVar19 < (int)uVar14) {
                    pSVar6 = (System_String_o *)((ulong)pSVar7 & 0xffffffff);
                  }
                  uVar14 = 0;
                  if (-1 < (int)uVar19) {
                    uVar14 = (uint)pSVar6;
                  }
                  if (*(uint *)(lVar3 + 0x18) <= uVar14) goto label_03b8be0b;
                  lVar3 = *(long *)(lVar3 + 0x20 + (long)(int)uVar14 * 8);
                  if (lVar3 != 0) {
                    *(undefined8 *)((long)unaff_R12 + 0xc0) = *(undefined8 *)(lVar3 + 0x38);
                    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bccf;
                    il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xc0);
                    if ((char)unaff_RBP == '\0') {
                      SVar11.hasValue = 0;
                      SVar11.value = 0;
                    }
                    else {
                      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bce3;
                      SVar11 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchMotionDefinition);
                      pSVar6 = (System_String_o *)0x0;
                      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bcf0;
                      SVar10 = SVar11;
                      Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                                ((Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)SVar11,(MethodInfo *)0x0
                                );
                      unaff_RBP = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
                      if (SVar11 == (System_Nullable_bool__Fields)0x0) goto label_03b8be06;
                      *(undefined8 *)((long)SVar11 + 0x10) = "slideDown";
                      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd10;
                      il2cpp_runtime_helper_022b4080((long)SVar11 + 0x10);
                      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd25;
                      pSVar7 = System_String__Concat_3ae5ba0
                                         (*(System_String_o **)((long)SVar18 + 0x20),"-options",
                                          (MethodInfo *)0x0);
                      *(System_String_o **)((long)SVar11 + 0x18) = pSVar7;
                      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd38;
                      il2cpp_runtime_helper_022b4080((long)SVar11 + 0x18,pSVar7);
                      *(undefined4 *)((long)SVar11 + 0x20) = 0x3df5c28f;
                      *(undefined4 *)((long)SVar11 + 0x28) = 0x3ccccccd;
                      *(uint *)((long)SVar11 + 0x2c) = uVar19;
                    }
                    *(System_Nullable_bool__Fields *)((long)unaff_R12 + 0xf8) = SVar11;
                    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd66;
                    il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xf8);
                    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd75;
                    unaff_RBP = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                                il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
                    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd82;
                    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(unaff_RBP,(MethodInfo *)0x0);
                    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd91;
                    __this_00 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
                    pSVar6 = (System_String_o *)0x0;
                    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bd9e;
                    SVar10 = __this_00;
                    Gisketch_Aottg2UI_Data_GisketchLength___ctor
                              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,(MethodInfo *)0x0);
                    if (__this_00 != (System_Nullable_bool__Fields)0x0) {
                      *(undefined4 *)((long)__this_00 + 0x10) = 0x42c80000;
                      pSVar6 = "percent";
                      SVar10 = (System_Nullable_bool__Fields)((long)__this_00 + 0x18);
                      *(System_String_o **)((long)__this_00 + 0x18) = "percent";
                      pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bdc4;
                      il2cpp_runtime_helper_022b4080();
                      if (unaff_RBP != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
                        (unaff_RBP->fields).width = (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00;
                        pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bddc;
                        il2cpp_runtime_helper_022b4080(&(unaff_RBP->fields).width,__this_00);
                        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)unaff_R12 + 0xd8) =
                             unaff_RBP;
                        pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8bdf6;
                        il2cpp_runtime_helper_022b4080((long)unaff_R12 + 0xd8,unaff_RBP);
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
label_03b8be06:
  pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x3b8be0b;
  il2cpp_runtime_helper_022b2c90();
label_03b8be0b:
  pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
               Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode;
  uStack_d8 = il2cpp_runtime_helper_022b2ca0();
  SStack_d0 = __this_00;
  SStack_c8 = unaff_R12;
  puStack_c0 = unaff_R13;
  SStack_b8 = SVar18;
  pSStack_b0 = pSVar20;
  pGStack_a8 = unaff_RBP;
  if (g_data_057a9e9b == '\0') {
    SStack_e0.hasValue = 0x3b8be36;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    SStack_e0.hasValue = 0x3b8be42;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    SStack_e0.hasValue = 0x3b8be4e;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    SStack_e0.hasValue = 0x3b8be5a;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_023445d0(&"Column");
    SStack_e0.hasValue = 0x3b8be66;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_023445d0(&"Stretch");
    SStack_e0.hasValue = 0x3b8be72;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_023445d0(&"point");
    SStack_e0.hasValue = 0x3b8be7e;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_023445d0(&"scrollView");
    SStack_e0.hasValue = 0x3b8be8a;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_023445d0(&"-options-scroll");
    SStack_e0.hasValue = 0x3b8be96;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_023445d0(&"ScrollView");
    g_data_057a9e9b = '\x01';
  }
  SStack_e0.hasValue = 0x3b8beac;
  SStack_e0.value = 0;
  SVar11 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  uVar15 = 0;
  SStack_e0.hasValue = 0x3b8beb9;
  SStack_e0.value = 0;
  SVar18 = SVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)SVar11,(MethodInfo *)0x0);
  if (SVar11 != (System_Nullable_bool__Fields)0x0) {
    *(undefined8 *)((long)SVar11 + 0x10) = "ScrollView";
    SStack_e0.hasValue = 0x3b8bedb;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_022b4080((long)SVar11 + 0x10);
    SStack_e0.hasValue = 0x3b8bef0;
    SStack_e0.value = 0;
    pSVar7 = System_String__Concat_3ae5ba0
                       (*(System_String_o **)((long)SVar10 + 0x20),"-options-scroll",(MethodInfo *)0x0);
    *(System_String_o **)((long)SVar11 + 0x18) = pSVar7;
    SStack_e0.hasValue = 0x3b8bf02;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_022b4080((long)SVar11 + 0x18,pSVar7);
    *(undefined8 *)((long)SVar11 + 0x40) = "scrollView";
    SStack_e0.hasValue = 0x3b8bf1b;
    SStack_e0.value = 0;
    il2cpp_runtime_helper_022b4080((long)SVar11 + 0x40);
    SStack_e0.hasValue = 0x3b8bf2b;
    SStack_e0.value = 0;
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    SStack_e0.hasValue = 0x3b8bf38;
    SStack_e0.value = 0;
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_01,(MethodInfo *)0x0);
    SStack_e0.hasValue = 0x3b8bf47;
    SStack_e0.value = 0;
    __this_00 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    uVar15 = 0;
    SStack_e0.hasValue = 0x3b8bf54;
    SStack_e0.value = 0;
    SVar18 = __this_00;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (System_Nullable_bool__Fields)0x0) {
      *(float *)((long)__this_00 + 0x10) = (float)*(int *)((long)SVar10 + 0x60) * 38.0;
      uVar16 = "point";
      SVar18 = (System_Nullable_bool__Fields)((long)__this_00 + 0x18);
      *(undefined8 *)((long)__this_00 + 0x18) = "point";
      SStack_e0.hasValue = 0x3b8bf8a;
      SStack_e0.value = 0;
      il2cpp_runtime_helper_022b4080();
      uVar15 = (undefined4)uVar16;
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_01->fields).height = (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00;
        SStack_e0.hasValue = 0x3b8bfa6;
        SStack_e0.value = 0;
        il2cpp_runtime_helper_022b4080(&(__this_01->fields).height,__this_00);
        *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)((long)SVar11 + 0xd8) = __this_01;
        SStack_e0.hasValue = 0x3b8bfbe;
        SStack_e0.value = 0;
        il2cpp_runtime_helper_022b4080((long)SVar11 + 0xd8);
        SStack_e0.hasValue = 0x3b8bfc7;
        SStack_e0.value = 0;
        SVar10 = (System_Nullable_bool__Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
        uVar15 = 0;
        SStack_e0.hasValue = 0x3b8bfd4;
        SStack_e0.value = 0;
        SVar18 = SVar10;
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)SVar10,(MethodInfo *)0x0);
        __this_00.hasValue = 0;
        __this_00.value = 0;
        if (SVar10 != (System_Nullable_bool__Fields)0x0) {
          *(undefined8 *)((long)SVar10 + 0x10) = "Column";
          SStack_e0.hasValue = 0x3b8bff0;
          SStack_e0.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar10 + 0x10);
          *(undefined8 *)((long)SVar10 + 0x20) = "Stretch";
          SStack_e0.hasValue = 0x3b8c00a;
          SStack_e0.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar10 + 0x20);
          *(undefined4 *)((long)SVar10 + 0x70) = 0;
          *(System_Nullable_bool__Fields *)((long)SVar11 + 0xe0) = SVar10;
          SStack_e0.hasValue = 0x3b8c029;
          SStack_e0.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar11 + 0xe0,SVar10);
          *(System_String_o **)((long)SVar11 + 0x118) = pSVar6;
          SStack_e0.hasValue = 0x3b8c043;
          SStack_e0.value = 0;
          il2cpp_runtime_helper_022b4080((long)SVar11 + 0x118,pSVar6);
          return;
        }
      }
    }
  }
  SStack_e0.hasValue = 0x3b8c05a;
  SStack_e0.value = 0;
  il2cpp_runtime_helper_022b2c90();
  uStack_e4 = uVar15;
  SStack_e0 = __this_00;
  if (g_data_057a9ea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-option-");
    g_data_057a9ea4 = '\x01';
  }
  pSVar7 = *(System_String_o **)((long)SVar18 + 0x20);
  pSVar6 = System_Int32__ToString((int32_t)&uStack_e4,(MethodInfo *)0x0);
  System_String__Concat_3af7150(pSVar7,"-option-",pSVar6,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$Select
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x3b8d250

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__Select
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  System_Threading_CancellationTokenSource_o *gameObject;
  void *pvVar6;
  UnityEngine_GameObject_c *pUVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_String_Fields SVar9;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_01;
  bool_conflict bVar10;
  UnityEngine_EventSystems_EventSystem_o *pUVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  VirtualInvokeData *pVVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  long *__this_02;
  long lVar17;
  System_String_o *value;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  undefined4 in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  System_String_o local_90;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int32_t local_60;
  uint16_t uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined4 uStack_54;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGStack_50;
  
  uVar14 = (ulong)(uint)index;
  __this_02 = (long *)__this;
  if (g_data_057a9e9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    __this_02 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9e9f = '\x01';
  }
  pGVar2 = (__this->fields)._options;
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_03b8d3df:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (index < 0) {
      return;
    }
    pGVar3 = (pGVar2->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_03b8d3df;
    uVar16 = (uint)pGVar3->max_length;
    if ((int)uVar16 <= index) {
      return;
    }
    uVar13 = uVar16 - 1;
    if (index < (int)(uVar16 - 1)) {
      uVar13 = index;
    }
    if (uVar13 < uVar16) {
      if (pGVar3->m_Items[(int)uVar13] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
        if ((char)(pGVar3->m_Items[(int)uVar13]->fields).enabled == '\0') {
          return;
        }
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this,index,0,(MethodInfo *)(long)(int)uVar13)
        ;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar14 = 0;
        __this_02 = (long *)root;
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          if (root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) goto label_03b8d3df;
          __this_00 = (root->fields)._Theme_k__BackingField;
          if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,(MethodInfo *)0x0);
          }
        }
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar11 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return;
        }
        root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(__this->fields)._opener;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uVar14 = 0;
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return;
        }
        if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_02 = (long *)0x0;
        pUVar11 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
        if (pUVar11 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0
                    (pUVar11,(__this->fields)._opener,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_03b8d3df;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pGStack_50 = root;
  if (g_data_057a9ea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
    g_data_057a9ea2 = '\x01';
  }
  pUVar4 = (((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_02)->fields)._actionHandler;
  if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) {
    return;
  }
  value = pUVar4[2].monitor;
  uVar15 = 0;
  bVar10 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  pUVar5 = (((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_02)->fields)._canvasObject;
  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) {
    return;
  }
  pUVar4 = (((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_02)->fields)._actionHandler;
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    gameObject = (pUVar4->fields).m_CancellationTokenSource;
    pvVar6 = pUVar4[2].monitor;
    node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
    local_90.fields._stringLength = 0;
    local_90.fields._firstChar = 0;
    local_90.fields._6_2_ = 0;
    uStack_78 = 0;
    local_90.klass = (System_String_c *)0x0;
    local_90.monitor = (void *)0x0;
    __this_01.fields.ElementId._4_4_ = in_stack_ffffffffffffff54;
    __this_01.fields.ElementId._0_4_ = in_stack_ffffffffffffff50;
    __this_01.fields.GameObject._0_4_ = in_stack_ffffffffffffff58;
    __this_01.fields.GameObject._4_4_ = in_stack_ffffffffffffff5c;
    __this_01.fields.Node._0_4_ = in_stack_ffffffffffffff60;
    __this_01.fields.Node._4_4_ = in_stack_ffffffffffffff64;
    __this_01.fields.InputSource = in_stack_ffffffffffffff68;
    __this_01.fields._28_4_ = in_stack_ffffffffffffff6c;
    Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
              (__this_01,&local_90,(UnityEngine_GameObject_o *)gameObject,node,
               (int32_t)(((Gisketch_Aottg2UI_GisketchUIRoot_o *)__this_02)->fields)._actionHandler,
               (MethodInfo *)(uVar14 & 0xffffffff));
    SVar9 = local_90.fields;
    local_60 = local_90.fields._stringLength;
    uStack_5c = local_90.fields._firstChar;
    uStack_5a = local_90.fields._6_2_;
    uStack_58 = (undefined4)uStack_78;
    uStack_54 = uStack_78._4_4_;
    local_70 = local_90.klass._0_4_;
    uStack_6c = local_90.klass._4_4_;
    uStack_68 = local_90.monitor._0_4_;
    uStack_64 = local_90.monitor._4_4_;
    pUVar7 = pUVar5->klass;
    uVar1._0_1_ = (pUVar7->_2).rank;
    uVar1._1_1_ = (pUVar7->_2).minimumAlignment;
    local_90.fields = SVar9;
    if ((ulong)uVar1 != 0) {
      pIVar8 = (pUVar7->_1).interfaceOffsets;
      lVar17 = 0;
      do {
        if (*(long *)((long)&pIVar8->interfaceType + lVar17) == TypeInfo_IGisketchActionHandler) {
          pVVar12 = &(pUVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar17);
          goto label_03b8d4fd;
        }
        lVar17 = lVar17 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar17);
    }
    pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pUVar5,TypeInfo_IGisketchActionHandler,0);
label_03b8d4fd:
    (*pVVar12->methodPtr)(pUVar5,pvVar6,pVVar12->method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  SVar9 = value->fields;
  if (SVar9 != (System_String_Fields)0x0) {
    uVar16 = *(uint *)((long)SVar9 + 0x18) - 1;
    value = (System_String_o *)(ulong)uVar16;
    if ((int)uVar15 < (int)uVar16) {
      value = (System_String_o *)(uVar15 & 0xffffffff);
    }
    uVar16 = 0;
    if (-1 < (int)uVar15) {
      uVar16 = (uint)value;
    }
    if (*(uint *)((long)SVar9 + 0x18) <= uVar16) goto label_03b8d59f;
    lVar17 = *(long *)((long)SVar9 + 0x20 + (long)(int)uVar16 * 8);
    if (lVar17 != 0) {
      bVar10 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar17 + 0x10),(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        return;
      }
      if (*(long *)(lVar17 + 0x18) == 0) {
        return;
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b8d59f:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)value,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetIndex
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, int32_t source, const MethodInfo* method);
// 0x3b8a8c0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,int32_t source,
               MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  long lVar4;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c *pGVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_String_Fields SVar9;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_00;
  bool_conflict bVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar11;
  VirtualInvokeData *pVVar12;
  uint uVar13;
  MethodInfo *method_00;
  uint uVar14;
  undefined4 in_register_00000034;
  MethodInfo *method_01;
  ulong uVar15;
  uint uVar16;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_01;
  long lVar17;
  System_String_o *pSVar18;
  undefined4 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff7c;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 in_stack_ffffffffffffff84;
  undefined4 in_stack_ffffffffffffff88;
  undefined4 in_stack_ffffffffffffff8c;
  undefined4 in_stack_ffffffffffffff90;
  undefined4 in_stack_ffffffffffffff94;
  System_String_o SStack_68;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  pGVar2 = (__this->fields)._options;
  if ((pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
     (pGVar3 = (pGVar2->fields)._items,
     pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
label_03b8a93b:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar16 = (uint)pGVar3->max_length;
    uVar13 = uVar16 - 1;
    if (index < 0) {
      method_01 = (MethodInfo *)0x0;
      if ((int)uVar16 < 1) {
        return;
      }
    }
    else {
      if (((int)uVar13 < index) && (method_01 = (MethodInfo *)(ulong)uVar13, (int)uVar13 < 0)) {
        return;
      }
      if ((int)uVar16 <= (int)method_01) {
        return;
      }
    }
    uVar14 = (uint)method_01;
    if ((int)uVar14 < (int)uVar13) {
      uVar13 = uVar14;
    }
    if (uVar13 < uVar16) {
      if (pGVar3->m_Items[(int)uVar13] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
        if (((char)(pGVar3->m_Items[(int)uVar13]->fields).enabled == '\0') ||
           (uVar14 == (__this->fields)._index)) {
          return;
        }
        (__this->fields)._index = uVar14;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel(__this,method_01);
        if (g_data_057a9ea2 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
          g_data_057a9ea2 = '\x01';
        }
        pGVar11 = (__this->fields)._node;
        if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          return;
        }
        pSVar18 = (pGVar11->fields).action;
        uVar15 = 0;
        bVar10 = System_String__IsNullOrEmpty(pSVar18,(MethodInfo *)0x0);
        if ((char)bVar10 != '\0') {
          return;
        }
        pGVar5 = (__this->fields)._actions;
        if (pGVar5 == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
          return;
        }
        pGVar11 = (__this->fields)._node;
        if (pGVar11 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pSVar18 = (pGVar11->fields).id;
          pSVar6 = (pGVar11->fields).action;
          pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
          ;
          SStack_68.fields._stringLength = 0;
          SStack_68.fields._firstChar = 0;
          SStack_68.fields._6_2_ = 0;
          uStack_50 = 0;
          SStack_68.klass = (System_String_c *)0x0;
          SStack_68.monitor = (void *)0x0;
          __this_00.fields.ElementId._4_4_ = in_stack_ffffffffffffff7c;
          __this_00.fields.ElementId._0_4_ = in_stack_ffffffffffffff78;
          __this_00.fields.GameObject._0_4_ = in_stack_ffffffffffffff80;
          __this_00.fields.GameObject._4_4_ = in_stack_ffffffffffffff84;
          __this_00.fields.Node._0_4_ = in_stack_ffffffffffffff88;
          __this_00.fields.Node._4_4_ = in_stack_ffffffffffffff8c;
          __this_00.fields.InputSource = in_stack_ffffffffffffff90;
          __this_00.fields._28_4_ = in_stack_ffffffffffffff94;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
                    (__this_00,&SStack_68,(UnityEngine_GameObject_o *)pSVar18,pGVar11,
                     (int32_t)(__this->fields)._node,(MethodInfo *)(ulong)(uint)source);
          SVar9 = SStack_68.fields;
          uStack_38._0_4_ = SStack_68.fields._stringLength;
          uStack_38._4_2_ = SStack_68.fields._firstChar;
          uStack_38._6_2_ = SStack_68.fields._6_2_;
          uStack_30._0_4_ = (undefined4)uStack_50;
          uStack_30._4_4_ = uStack_50._4_4_;
          uStack_48 = SStack_68.klass._0_4_;
          uStack_44 = SStack_68.klass._4_4_;
          uStack_40 = SStack_68.monitor._0_4_;
          uStack_3c = SStack_68.monitor._4_4_;
          pGVar7 = pGVar5->klass;
          uVar1._0_1_ = (pGVar7->_2).rank;
          uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
          SStack_68.fields = SVar9;
          if ((ulong)uVar1 != 0) {
            pIVar8 = (pGVar7->_1).interfaceOffsets;
            lVar17 = 0;
            do {
              if (*(long *)((long)&pIVar8->interfaceType + lVar17) == TypeInfo_IGisketchActionHandler) {
                pVVar12 = pGVar7->vtable + *(int *)((long)&pIVar8->offset + lVar17);
                goto label_03b8d4fd;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar17);
          }
          pVVar12 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar5,TypeInfo_IGisketchActionHandler,0);
label_03b8d4fd:
          (*pVVar12->methodPtr)(pGVar5,pSVar6,pVVar12->method);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        SVar9 = pSVar18->fields;
        if (SVar9 != (System_String_Fields)0x0) {
          uVar16 = *(uint *)((long)SVar9 + 0x18) - 1;
          pSVar18 = (System_String_o *)(ulong)uVar16;
          if ((int)uVar15 < (int)uVar16) {
            pSVar18 = (System_String_o *)(uVar15 & 0xffffffff);
          }
          uVar16 = 0;
          if (-1 < (int)uVar15) {
            uVar16 = (uint)pSVar18;
          }
          if (*(uint *)((long)SVar9 + 0x18) <= uVar16) goto label_03b8d59f;
          lVar17 = *(long *)((long)SVar9 + 0x20 + (long)(int)uVar16 * 8);
          if (lVar17 != 0) {
            bVar10 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar17 + 0x10),(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              return;
            }
            if (*(long *)(lVar17 + 0x18) == 0) {
              return;
            }
            return;
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_03b8d59f:
        il2cpp_runtime_helper_022b2ca0();
        System_Object___ctor((Il2CppObject *)pSVar18,(MethodInfo *)0x0);
        return;
      }
      goto label_03b8a93b;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((__this->fields)._options == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    return;
  }
  uStack_28 = 0x3b8a960;
  __this_01 = __this;
  uVar13 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf
                     (__this,(System_String_o *)method_01,method_00);
  uVar16 = (uint)method_01;
  pGVar2 = (__this->fields)._options;
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_03b8a9aa:
    uStack_28 = 0x3b8a9af;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)uVar13 < 0) {
      return;
    }
    pGVar3 = (pGVar2->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_03b8a9aa;
    uVar14 = (uint)pGVar3->max_length;
    if ((int)uVar14 <= (int)uVar13) {
      return;
    }
    uVar16 = uVar14 - 1;
    if ((int)uVar13 < (int)(uVar14 - 1)) {
      uVar16 = uVar13;
    }
    if (uVar16 < uVar14) {
      if (pGVar3->m_Items[(int)uVar16] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
        if ((char)(pGVar3->m_Items[(int)uVar16]->fields).enabled == '\0') {
          return;
        }
        (__this->fields)._index = uVar13;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel(__this,(MethodInfo *)(ulong)uVar16);
        return;
      }
      goto label_03b8a9aa;
    }
  }
  uStack_28 = 0x3b8a9b4;
  uStack_28 = il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar16 < 0) {
    return;
  }
  lVar17 = (__this_01->fields).m_CachedPtr;
  if (lVar17 != 0) {
    uVar13 = *(uint *)(lVar17 + 0x18);
    if ((int)uVar13 <= (int)uVar16) {
      return;
    }
    if ((int)(uVar13 - 1) <= (int)uVar16) {
      uVar16 = uVar13 - 1;
    }
    if (uVar13 <= uVar16) goto label_03b8aa00;
    if (*(long *)(lVar17 + 0x20 + (long)(int)uVar16 * 8) != 0) {
      return;
    }
  }
  uStack_30 = 0x3b8aa00;
  il2cpp_runtime_helper_022b2c90();
label_03b8aa00:
  uStack_30 = 0x3b8aa05;
  uStack_30 = il2cpp_runtime_helper_022b2ca0();
  lVar17 = (__this_01->fields).m_CachedPtr;
  if (lVar17 != 0) {
    uVar16 = *(uint *)(lVar17 + 0x18);
    if ((int)uVar16 < 1) {
      return;
    }
    uVar13 = 0;
    while (uVar13 < uVar16) {
      lVar4 = *(long *)(lVar17 + 0x20 + (long)(int)uVar13 * 8);
      __this_01 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
      if (lVar4 == 0) goto label_03b8aa59;
      __this_01 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)(ulong)*(byte *)(lVar4 + 0x28);
      uVar13 = uVar13 + 1;
      if ((int)uVar16 <= (int)uVar13) {
        return;
      }
    }
    uStack_38 = 0x3b8aa59;
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b8aa59:
  uStack_38 = 0x3b8aa5e;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3b8a5f0

int32_t Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf
                  (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,System_String_o *value,
                  MethodInfo *method)

{
  byte bVar1;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  void *pvVar3;
  UnityEngine_Component_o *__this_00;
  char *pcVar4;
  Il2CppClass *pIVar5;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_01;
  System_String_Fields SVar6;
  bool_conflict bVar7;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  int iVar8;
  int32_t extraout_EAX_01;
  int32_t iVar9;
  int32_t extraout_EAX_02;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar10;
  MethodInfo *pMVar11;
  UnityEngine_GameObject_o *pUVar12;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  int extraout_EDX;
  uint uVar16;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_Object_c *unaff_RBX;
  long *plVar17;
  UnityEngine_Object_c *pUVar18;
  MethodInfo *method_02;
  Il2CppClass *pIVar19;
  ulong uVar20;
  uint uVar21;
  UnityEngine_Object_c *__this_02;
  UnityEngine_Object_c *pUVar22;
  long lVar23;
  Il2CppClass *pIVar24;
  MethodInfo *in_R9;
  uint uVar25;
  undefined1 auVar26 [16];
  undefined4 in_stack_ffffffffffffff30;
  undefined4 in_stack_ffffffffffffff34;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff3c;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  System_String_o SStack_b0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  UnityEngine_Object_c *pUStack_70;
  UnityEngine_Object_c *pUStack_68;
  UnityEngine_Object_c *pUStack_60;
  Il2CppClass *pIStack_58;
  
  pGVar10 = (__this->fields)._options;
  if (pGVar10 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    uVar25 = 0;
    method_02 = (MethodInfo *)value;
    pUVar22 = (UnityEngine_Object_c *)__this;
    do {
      pGVar2 = (pGVar10->fields)._items;
      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) break;
      uVar21 = (uint)pGVar2->max_length;
      if ((int)uVar21 <= (int)uVar25) {
        return 0;
      }
      uVar16 = uVar21 - 1;
      if ((int)uVar25 < (int)(uVar21 - 1)) {
        uVar16 = uVar25;
      }
      if (uVar21 <= uVar16) {
        il2cpp_runtime_helper_022b2ca0();
        __this_02 = pUVar22;
        if (g_data_057a9ea0 == '\0') {
          __this_02 = (UnityEngine_Object_c *)&TypeInfo_Object;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9ea0 = '\x01';
        }
        pIVar24 = (pUVar22->_1).castClass;
        if (pIVar24 == (Il2CppClass *)0x0) {
label_03b8a780:
          unaff_RBX = (pUVar22->_1).this_arg.data;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method_02 = (MethodInfo *)0x0;
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            return bVar7;
          }
          __this_02 = *(UnityEngine_Object_c **)&(pUVar22->_1).byval_arg.bits;
          if (__this_02 != (UnityEngine_Object_c *)0x0) {
            unaff_RBX = (pUVar22->_1).this_arg.data;
            uVar25 = *(uint *)&(pUVar22->_1).parent;
            method_02 = (MethodInfo *)(ulong)uVar25;
            pMVar11 = (MethodInfo *)
                      Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
                                ((Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)__this_02,uVar25,method_00)
            ;
            if (unaff_RBX != (UnityEngine_Object_c *)0x0) {
              pvVar3 = (unaff_RBX->_1).image;
              (**(code **)((long)pvVar3 + 0x558))(unaff_RBX,pMVar11,*(undefined8 *)((long)pvVar3 + 0x560));
              __this_00 = (pUVar22->_1).this_arg.data;
              __this_02 = (UnityEngine_Object_c *)0x0;
              method_02 = pMVar11;
              if (__this_00 != (UnityEngine_Component_o *)0x0) {
                iVar9 = *(int32_t *)&(pUVar22->_1).parent;
                pUVar12 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
                          ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)pUVar22,iVar9,pUVar12,
                           (pUVar22->_1).this_arg.data,1,in_R9);
                return extraout_EAX;
              }
            }
          }
label_03b8a813:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          lVar23 = *(long *)&(pUVar22->_1).byval_arg.bits;
          if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x10), lVar23 == 0)) goto label_03b8a813;
          uVar25 = *(uint *)&(pUVar22->_1).parent;
          uVar21 = *(uint *)(lVar23 + 0x18);
          method_02 = (MethodInfo *)(ulong)uVar21;
          uVar16 = uVar21 - 1;
          if ((int)uVar25 < (int)(uVar21 - 1)) {
            uVar16 = uVar25;
          }
          __this_02 = (UnityEngine_Object_c *)(ulong)uVar16;
          uVar14 = 0;
          if (-1 < (int)uVar25) {
            uVar14 = uVar16;
          }
          if (uVar14 < uVar21) {
            lVar23 = *(long *)(lVar23 + 0x20 + (long)(int)uVar14 * 8);
            unaff_RBX = (UnityEngine_Object_c *)0x0;
            if (lVar23 == 0) goto label_03b8a813;
            bVar7 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar23 + 0x10),(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              plVar17 = (long *)(lVar23 + 0x10);
label_03b8a76d:
              pIVar19 = (Il2CppClass *)*plVar17;
            }
            else {
              pIVar19 = *(Il2CppClass **)(lVar23 + 0x18);
              if (pIVar19 == (Il2CppClass *)0x0) {
                plVar17 = *(long **)(g_data_057b9c00 + 0xb8);
                goto label_03b8a76d;
              }
            }
            (pIVar24->_1).declaringType = pIVar19;
            pIVar24 = (Il2CppClass *)&(pIVar24->_1).declaringType;
            il2cpp_runtime_helper_022b4080(pIVar24);
            goto label_03b8a780;
          }
        }
        il2cpp_runtime_helper_022b2ca0();
        pcVar4 = (__this_02->_1).name;
        if (pcVar4 == (char *)0x0) goto label_03b8a8ab;
        uVar25 = (uint)*(undefined8 *)(pcVar4 + 0x18);
        iVar8 = (int)method_02;
        if ((int)uVar25 < 1) goto label_03b8a88f;
        uVar21 = extraout_EDX + iVar8 + uVar25;
        iVar15 = 1;
        goto label_03b8a85b;
      }
      unaff_RBX = (UnityEngine_Object_c *)pGVar2->m_Items[(int)uVar16];
      if (unaff_RBX == (UnityEngine_Object_c *)0x0) break;
      bVar7 = System_String__IsNullOrEmpty
                        ((System_String_o *)((UnityEngine_Object_Fields *)&(unaff_RBX->_1).name)->m_CachedPtr,
                         (MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        unaff_RBX = (UnityEngine_Object_c *)&(unaff_RBX->_1).name;
label_03b8a684:
        pUVar22 = (unaff_RBX->_1).image;
      }
      else {
        pUVar22 = (UnityEngine_Object_c *)(unaff_RBX->_1).namespaze;
        if (pUVar22 == (UnityEngine_Object_c *)0x0) {
          unaff_RBX = *(UnityEngine_Object_c **)(g_data_057b9c00 + 0xb8);
          goto label_03b8a684;
        }
      }
      method_02 = (MethodInfo *)value;
      bVar7 = System_String__op_Equality((System_String_o *)pUVar22,value,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return uVar25;
      }
      uVar25 = uVar25 + 1;
      pGVar10 = (__this->fields)._options;
    } while (pGVar10 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return 0;
label_03b8a85b:
  __this_02 = (UnityEngine_Object_c *)(ulong)uVar21;
  uVar16 = (int)uVar21 % (int)uVar25;
  if ((-1 < (int)uVar25) && (-1 < (int)uVar16)) {
    uVar14 = uVar25 - 1;
    if ((int)uVar16 < (int)(uVar25 - 1)) {
      uVar14 = uVar16;
    }
    if (uVar25 <= uVar14) goto label_03b8a8b0;
    if (*(long *)(pcVar4 + (long)(int)uVar14 * 8 + 0x20) == 0) goto label_03b8a8ab;
    if (*(char *)(*(long *)(pcVar4 + (long)(int)uVar14 * 8 + 0x20) + 0x28) != '\0') {
      return uVar16;
    }
  }
  iVar15 = iVar15 + 1;
  uVar21 = uVar21 + extraout_EDX;
  if ((int)uVar25 < iVar15) {
label_03b8a88f:
    if (-1 < iVar8) {
      iVar15 = uVar25 - 1;
      if (iVar8 < (int)(uVar25 - 1)) {
        iVar15 = iVar8;
      }
      return iVar15;
    }
    return 0;
  }
  goto label_03b8a85b;
label_03b8a8ab:
  il2cpp_runtime_helper_022b2c90();
label_03b8a8b0:
  auVar26 = il2cpp_runtime_helper_022b2ca0();
  pUStack_60 = auVar26._0_8_;
  lVar23 = *(long *)&(__this_02->_1).byval_arg.bits;
  pUVar18 = unaff_RBX;
  pIStack_58 = (Il2CppClass *)unaff_RBX;
  if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x10), lVar23 == 0)) {
label_03b8a93b:
    pUStack_68 = (UnityEngine_Object_c *)0x3b8a940;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar25 = *(uint *)(lVar23 + 0x18);
    uVar21 = uVar25 - 1;
    if ((int)method_02 < 0) {
      method_02 = (MethodInfo *)0x0;
      if ((int)uVar25 < 1) goto label_03b8a934;
    }
    else if ((((int)uVar21 < (int)method_02) && (method_02 = (MethodInfo *)(ulong)uVar21, (int)uVar21 < 0)) ||
            ((int)uVar25 <= (int)method_02)) goto label_03b8a934;
    uVar16 = (uint)method_02;
    if ((int)uVar16 < (int)uVar21) {
      uVar21 = uVar16;
    }
    pUVar18 = __this_02;
    if (uVar21 < uVar25) {
      lVar23 = *(long *)(lVar23 + 0x20 + (long)(int)uVar21 * 8);
      if (lVar23 != 0) {
        if ((*(char *)(lVar23 + 0x28) == '\0') || (uVar16 == *(uint *)&(__this_02->_1).parent)) {
label_03b8a934:
          return (int32_t)lVar23;
        }
        *(uint *)&(__this_02->_1).parent = uVar16;
        pUStack_68 = (UnityEngine_Object_c *)0x3b8a91e;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                  ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02,method_02);
        pUStack_68 = (UnityEngine_Object_c *)&g_data_057b9b70;
        pUStack_70 = (UnityEngine_Object_c *)pIStack_58;
        pUStack_60 = pUVar22;
        pIStack_58 = pIVar24;
        if (g_data_057a9ea2 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
          g_data_057a9ea2 = '\x01';
        }
        pIVar24 = (__this_02->_1).castClass;
        if (pIVar24 == (Il2CppClass *)0x0) {
          return 0;
        }
        pIVar24 = (pIVar24->_1).castClass;
        uVar20 = 0;
        bVar7 = System_String__IsNullOrEmpty((System_String_o *)pIVar24,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return bVar7;
        }
        pIVar19 = (__this_02->_1).declaringType;
        if (pIVar19 == (Il2CppClass *)0x0) {
          return bVar7;
        }
        pIVar5 = (__this_02->_1).castClass;
        if (pIVar5 != (Il2CppClass *)0x0) {
          pUVar12 = (UnityEngine_GameObject_o *)(pIVar5->_1).namespaze;
          pIVar24 = (pIVar5->_1).castClass;
          node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0)
          ;
          SStack_b0.fields._stringLength = 0;
          SStack_b0.fields._firstChar = 0;
          SStack_b0.fields._6_2_ = 0;
          uStack_98 = 0;
          SStack_b0.klass = (System_String_c *)0x0;
          SStack_b0.monitor = (void *)0x0;
          __this_01.fields.ElementId._4_4_ = in_stack_ffffffffffffff34;
          __this_01.fields.ElementId._0_4_ = in_stack_ffffffffffffff30;
          __this_01.fields.GameObject._0_4_ = in_stack_ffffffffffffff38;
          __this_01.fields.GameObject._4_4_ = in_stack_ffffffffffffff3c;
          __this_01.fields.Node._0_4_ = in_stack_ffffffffffffff40;
          __this_01.fields.Node._4_4_ = in_stack_ffffffffffffff44;
          __this_01.fields.InputSource = in_stack_ffffffffffffff48;
          __this_01.fields._28_4_ = in_stack_ffffffffffffff4c;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
                    (__this_01,&SStack_b0,pUVar12,node,(int32_t)(__this_02->_1).castClass,
                     (MethodInfo *)(auVar26._8_8_ & 0xffffffff));
          SVar6 = SStack_b0.fields;
          uStack_80._0_4_ = SStack_b0.fields._stringLength;
          uStack_80._4_2_ = SStack_b0.fields._firstChar;
          uStack_80._6_2_ = SStack_b0.fields._6_2_;
          uStack_78._0_4_ = (undefined4)uStack_98;
          uStack_78._4_4_ = uStack_98._4_4_;
          uStack_90 = SStack_b0.klass._0_4_;
          uStack_8c = SStack_b0.klass._4_4_;
          uStack_88 = SStack_b0.monitor._0_4_;
          uStack_84 = SStack_b0.monitor._4_4_;
          pvVar3 = (pIVar19->_1).image;
          SStack_b0.fields = SVar6;
          if ((ulong)*(ushort *)((long)pvVar3 + 0x12e) != 0) {
            lVar23 = 0;
            do {
              if (*(long *)(*(long *)((long)pvVar3 + 0xb0) + lVar23) == TypeInfo_IGisketchActionHandler) {
                puVar13 = (undefined8 *)
                          ((long)pvVar3 +
                          (long)*(int *)(*(long *)((long)pvVar3 + 0xb0) + 8 + lVar23) * 0x10 + 0x138);
                goto label_03b8d4fd;
              }
              lVar23 = lVar23 + 0x10;
            } while ((ulong)*(ushort *)((long)pvVar3 + 0x12e) << 4 != lVar23);
          }
          puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar19,TypeInfo_IGisketchActionHandler,0);
label_03b8d4fd:
          iVar9 = (*(code *)*puVar13)(pIVar19,pIVar24,puVar13[1]);
          return iVar9;
        }
        il2cpp_runtime_helper_022b2c90();
        pcVar4 = (pIVar24->_1).name;
        if (pcVar4 != (char *)0x0) {
          uVar25 = *(uint *)(pcVar4 + 0x18) - 1;
          pIVar24 = (Il2CppClass *)(ulong)uVar25;
          if ((int)uVar20 < (int)uVar25) {
            pIVar24 = (Il2CppClass *)(uVar20 & 0xffffffff);
          }
          uVar25 = 0;
          if (-1 < (int)uVar20) {
            uVar25 = (uint)pIVar24;
          }
          if (*(uint *)(pcVar4 + 0x18) <= uVar25) goto label_03b8d59f;
          lVar23 = *(long *)(pcVar4 + (long)(int)uVar25 * 8 + 0x20);
          if (lVar23 != 0) {
            bVar7 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar23 + 0x10),(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              return (int32_t)*(undefined8 *)(lVar23 + 0x10);
            }
            if (*(long *)(lVar23 + 0x18) != 0) {
              return (int32_t)*(long *)(lVar23 + 0x18);
            }
            return (int32_t)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_03b8d59f:
        il2cpp_runtime_helper_022b2ca0();
        System_Object___ctor((Il2CppObject *)pIVar24,(MethodInfo *)0x0);
        return extraout_EAX_02;
      }
      goto label_03b8a93b;
    }
  }
  pUStack_68 = (UnityEngine_Object_c *)0x3b8a945;
  iVar9 = il2cpp_runtime_helper_022b2ca0();
  if (*(long *)&(__this_02->_1).byval_arg.bits == 0) {
    return iVar9;
  }
  pUStack_70 = (UnityEngine_Object_c *)0x3b8a960;
  pUVar22 = __this_02;
  pUStack_68 = pUVar18;
  uVar21 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf
                     ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02,(System_String_o *)method_02
                      ,method_01);
  uVar25 = (uint)method_02;
  lVar23 = *(long *)&(__this_02->_1).byval_arg.bits;
  if (lVar23 == 0) {
label_03b8a9aa:
    pUStack_70 = (UnityEngine_Object_c *)0x3b8a9af;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)uVar21 < 0) {
      return uVar21;
    }
    lVar23 = *(long *)(lVar23 + 0x10);
    if (lVar23 == 0) goto label_03b8a9aa;
    uVar16 = *(uint *)(lVar23 + 0x18);
    if ((int)uVar16 <= (int)uVar21) {
      return uVar21;
    }
    uVar25 = uVar16 - 1;
    if ((int)uVar21 < (int)(uVar16 - 1)) {
      uVar25 = uVar21;
    }
    if (uVar25 < uVar16) {
      lVar23 = *(long *)(lVar23 + 0x20 + (long)(int)uVar25 * 8);
      if (lVar23 != 0) {
        if (*(char *)(lVar23 + 0x28) != '\0') {
          *(uint *)&(__this_02->_1).parent = uVar21;
          Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                    ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02,(MethodInfo *)(ulong)uVar25);
          return extraout_EAX_00;
        }
        return uVar21;
      }
      goto label_03b8a9aa;
    }
  }
  pUStack_70 = (UnityEngine_Object_c *)0x3b8a9b4;
  pUStack_70 = (UnityEngine_Object_c *)il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar25 < 0) {
    return 0;
  }
  pcVar4 = (pUVar22->_1).name;
  if (pcVar4 != (char *)0x0) {
    uVar21 = *(uint *)(pcVar4 + 0x18);
    if ((int)uVar21 <= (int)uVar25) {
      return 0;
    }
    if ((int)(uVar21 - 1) <= (int)uVar25) {
      uVar25 = uVar21 - 1;
    }
    if (uVar21 <= uVar25) goto label_03b8aa00;
    lVar23 = *(long *)(pcVar4 + (long)(int)uVar25 * 8 + 0x20);
    if (lVar23 != 0) {
      return (int32_t)CONCAT71((int7)((ulong)lVar23 >> 8),*(char *)(lVar23 + 0x28) != '\0');
    }
  }
  uStack_78 = 0x3b8aa00;
  il2cpp_runtime_helper_022b2c90();
label_03b8aa00:
  uStack_78 = 0x3b8aa05;
  uStack_78 = il2cpp_runtime_helper_022b2ca0();
  pcVar4 = (pUVar22->_1).name;
  if (pcVar4 != (char *)0x0) {
    uVar25 = *(uint *)(pcVar4 + 0x18);
    if ((int)uVar25 < 1) {
      return 0;
    }
    uVar21 = 0;
    iVar8 = 0;
    while (uVar21 < uVar25) {
      pUVar22 = (UnityEngine_Object_c *)0x0;
      if (*(long *)(pcVar4 + (long)(int)uVar21 * 8 + 0x20) == 0) goto label_03b8aa59;
      bVar1 = *(byte *)(*(long *)(pcVar4 + (long)(int)uVar21 * 8 + 0x20) + 0x28);
      pUVar22 = (UnityEngine_Object_c *)(ulong)bVar1;
      iVar8 = iVar8 + (uint)bVar1;
      uVar21 = uVar21 + 1;
      if ((int)uVar25 <= (int)uVar21) {
        return iVar8;
      }
    }
    uStack_80 = 0x3b8aa59;
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b8aa59:
  uStack_80 = 0x3b8aa5e;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pUVar22,(MethodInfo *)0x0);
  return extraout_EAX_01;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$RefreshLabel
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b8a6c0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  ushort uVar1;
  int32_t index;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar4;
  TMPro_TextMeshProUGUI_o *__this_00;
  long lVar5;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c *pGVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  System_String_Fields SVar10;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_01;
  bool_conflict bVar11;
  MethodInfo *pMVar12;
  UnityEngine_GameObject_o *root;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
  Il2CppMethodPointer *ppIVar14;
  uint uVar15;
  int iVar16;
  int extraout_EDX;
  uint uVar17;
  MethodInfo *method_00;
  ulong extraout_RDX;
  MethodInfo *method_01;
  TMPro_TextMeshProUGUI_o *unaff_RBX;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields *pGVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  long *__this_02;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_03;
  long lVar22;
  System_String_o *pSVar23;
  MethodInfo *in_R9;
  undefined4 in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 in_stack_ffffffffffffff74;
  System_String_o SStack_88;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  TMPro_TextMeshProUGUI_o *pTStack_48;
  
  __this_02 = (long *)__this;
  if (g_data_057a9ea0 == '\0') {
    __this_02 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ea0 = '\x01';
  }
  pGVar13 = (__this->fields)._node;
  if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_03b8a780:
    unaff_RBX = (__this->fields)._label;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return;
    }
    __this_02 = (long *)(__this->fields)._options;
    if ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02 !=
        (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      unaff_RBX = (__this->fields)._label;
      uVar21 = (__this->fields)._index;
      method = (MethodInfo *)(ulong)uVar21;
      pMVar12 = (MethodInfo *)
                Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text
                          ((Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)__this_02,uVar21,method_00);
      if (unaff_RBX != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(unaff_RBX->klass->vtable)._66_set_text.methodPtr)
                  (unaff_RBX,pMVar12,(unaff_RBX->klass->vtable)._66_set_text.method);
        __this_00 = (__this->fields)._label;
        __this_02 = (long *)0x0;
        method = pMVar12;
        if (__this_00 != (TMPro_TextMeshProUGUI_o *)0x0) {
          index = (__this->fields)._index;
          root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
          ;
          Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
                    (__this,index,root,(__this->fields)._label,1,in_R9);
          return;
        }
      }
    }
label_03b8a813:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pGVar2 = (__this->fields)._options;
    if ((pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
       (pGVar3 = (pGVar2->fields)._items,
       pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) goto label_03b8a813;
    uVar21 = (__this->fields)._index;
    uVar20 = (uint)pGVar3->max_length;
    method = (MethodInfo *)(ulong)uVar20;
    uVar17 = uVar20 - 1;
    if ((int)uVar21 < (int)(uVar20 - 1)) {
      uVar17 = uVar21;
    }
    __this_02 = (long *)(ulong)uVar17;
    uVar15 = 0;
    if (-1 < (int)uVar21) {
      uVar15 = uVar17;
    }
    if (uVar15 < uVar20) {
      pGVar4 = pGVar3->m_Items[(int)uVar15];
      unaff_RBX = (TMPro_TextMeshProUGUI_o *)0x0;
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) goto label_03b8a813;
      bVar11 = System_String__IsNullOrEmpty((pGVar4->fields).value,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        pGVar18 = &pGVar4->fields;
label_03b8a76d:
        pSVar23 = pGVar18->value;
      }
      else {
        pSVar23 = (pGVar4->fields).text;
        if (pSVar23 == (System_String_o *)0x0) {
          pGVar18 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields **)(g_data_057b9c00 + 0xb8);
          goto label_03b8a76d;
        }
      }
      (pGVar13->fields).value = pSVar23;
      il2cpp_runtime_helper_022b4080(&(pGVar13->fields).value);
      goto label_03b8a780;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)
           (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields).m_CachedPtr;
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
    uVar21 = (uint)pGVar3->max_length;
    if (0 < (int)uVar21) {
      uVar20 = extraout_EDX + (int)method + uVar21;
      iVar16 = 1;
      do {
        __this_02 = (long *)(ulong)uVar20;
        uVar17 = (int)uVar20 % (int)uVar21;
        if ((-1 < (int)uVar21) && (-1 < (int)uVar17)) {
          uVar15 = uVar21 - 1;
          if ((int)uVar17 < (int)(uVar21 - 1)) {
            uVar15 = uVar17;
          }
          if (uVar21 <= uVar15) goto label_03b8a8b0;
          if (pGVar3->m_Items[(int)uVar15] == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
          goto label_03b8a8ab;
          if ((char)(pGVar3->m_Items[(int)uVar15]->fields).enabled != '\0') {
            return;
          }
        }
        iVar16 = iVar16 + 1;
        uVar20 = uVar20 + extraout_EDX;
      } while (iVar16 <= (int)uVar21);
    }
    if ((int)method < 0) {
      return;
    }
    return;
  }
label_03b8a8ab:
  il2cpp_runtime_helper_022b2c90();
label_03b8a8b0:
  il2cpp_runtime_helper_022b2ca0();
  pGVar2 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._options;
  if ((pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) ||
     (pGVar3 = (pGVar2->fields)._items,
     pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
label_03b8a93b:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar21 = (uint)pGVar3->max_length;
    uVar20 = uVar21 - 1;
    if ((int)method < 0) {
      method = (MethodInfo *)0x0;
      if ((int)uVar21 < 1) {
        return;
      }
    }
    else {
      if (((int)uVar20 < (int)method) && (method = (MethodInfo *)(ulong)uVar20, (int)uVar20 < 0)) {
        return;
      }
      if ((int)uVar21 <= (int)method) {
        return;
      }
    }
    uVar17 = (uint)method;
    if ((int)uVar17 < (int)uVar20) {
      uVar20 = uVar17;
    }
    if (uVar20 < uVar21) {
      if (pGVar3->m_Items[(int)uVar20] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
        if (((char)(pGVar3->m_Items[(int)uVar20]->fields).enabled == '\0') ||
           (uVar17 == (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._index)) {
          return;
        }
        (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._index = uVar17;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                  ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02,method);
        pTStack_48 = unaff_RBX;
        if (g_data_057a9ea2 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
          g_data_057a9ea2 = '\x01';
        }
        pGVar13 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._node;
        if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          return;
        }
        pSVar23 = (pGVar13->fields).action;
        uVar19 = 0;
        bVar11 = System_String__IsNullOrEmpty(pSVar23,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return;
        }
        pGVar6 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._actions;
        if (pGVar6 == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
          return;
        }
        pGVar13 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._node;
        if (pGVar13 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pSVar23 = (pGVar13->fields).id;
          pSVar7 = (pGVar13->fields).action;
          pGVar13 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          SStack_88.fields._stringLength = 0;
          SStack_88.fields._firstChar = 0;
          SStack_88.fields._6_2_ = 0;
          uStack_70 = 0;
          SStack_88.klass = (System_String_c *)0x0;
          SStack_88.monitor = (void *)0x0;
          __this_01.fields.ElementId._4_4_ = in_stack_ffffffffffffff5c;
          __this_01.fields.ElementId._0_4_ = in_stack_ffffffffffffff58;
          __this_01.fields.GameObject._0_4_ = in_stack_ffffffffffffff60;
          __this_01.fields.GameObject._4_4_ = in_stack_ffffffffffffff64;
          __this_01.fields.Node._0_4_ = in_stack_ffffffffffffff68;
          __this_01.fields.Node._4_4_ = in_stack_ffffffffffffff6c;
          __this_01.fields.InputSource = in_stack_ffffffffffffff70;
          __this_01.fields._28_4_ = in_stack_ffffffffffffff74;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
                    (__this_01,&SStack_88,(UnityEngine_GameObject_o *)pSVar23,pGVar13,
                     (int32_t)(((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._node,
                     (MethodInfo *)(extraout_RDX & 0xffffffff));
          SVar10 = SStack_88.fields;
          uStack_58._0_4_ = SStack_88.fields._stringLength;
          uStack_58._4_2_ = SStack_88.fields._firstChar;
          uStack_58._6_2_ = SStack_88.fields._6_2_;
          uStack_50._0_4_ = (undefined4)uStack_70;
          uStack_50._4_4_ = uStack_70._4_4_;
          uStack_68 = SStack_88.klass._0_4_;
          uStack_64 = SStack_88.klass._4_4_;
          uStack_60 = SStack_88.monitor._0_4_;
          uStack_5c = SStack_88.monitor._4_4_;
          pGVar8 = pGVar6->klass;
          uVar1._0_1_ = (pGVar8->_2).rank;
          uVar1._1_1_ = (pGVar8->_2).minimumAlignment;
          SStack_88.fields = SVar10;
          if ((ulong)uVar1 != 0) {
            pIVar9 = (pGVar8->_1).interfaceOffsets;
            lVar22 = 0;
            do {
              if (*(long *)((long)&pIVar9->interfaceType + lVar22) == TypeInfo_IGisketchActionHandler) {
                ppIVar14 = &pGVar8->vtable[*(int *)((long)&pIVar9->offset + lVar22)].methodPtr;
                goto label_03b8d4fd;
              }
              lVar22 = lVar22 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar22);
          }
          ppIVar14 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pGVar6,TypeInfo_IGisketchActionHandler,0);
label_03b8d4fd:
          (**ppIVar14)(pGVar6,pSVar7,(MethodInfo *)ppIVar14[1]);
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        SVar10 = pSVar23->fields;
        if (SVar10 != (System_String_Fields)0x0) {
          uVar21 = *(uint *)((long)SVar10 + 0x18) - 1;
          pSVar23 = (System_String_o *)(ulong)uVar21;
          if ((int)uVar19 < (int)uVar21) {
            pSVar23 = (System_String_o *)(uVar19 & 0xffffffff);
          }
          uVar21 = 0;
          if (-1 < (int)uVar19) {
            uVar21 = (uint)pSVar23;
          }
          if (*(uint *)((long)SVar10 + 0x18) <= uVar21) goto label_03b8d59f;
          lVar22 = *(long *)((long)SVar10 + 0x20 + (long)(int)uVar21 * 8);
          if (lVar22 != 0) {
            bVar11 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar22 + 0x10),(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              return;
            }
            if (*(long *)(lVar22 + 0x18) == 0) {
              return;
            }
            return;
          }
        }
        il2cpp_runtime_helper_022b2c90();
label_03b8d59f:
        il2cpp_runtime_helper_022b2ca0();
        System_Object___ctor((Il2CppObject *)pSVar23,(MethodInfo *)0x0);
        return;
      }
      goto label_03b8a93b;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if ((((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._options ==
      (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
    return;
  }
  pTStack_48 = (TMPro_TextMeshProUGUI_o *)0x3b8a960;
  __this_03 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02;
  uVar20 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__IndexOf
                     ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02,(System_String_o *)method,
                      method_01);
  uVar21 = (uint)method;
  pGVar2 = (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._options;
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
label_03b8a9aa:
    pTStack_48 = (TMPro_TextMeshProUGUI_o *)0x3b8a9af;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((int)uVar20 < 0) {
      return;
    }
    pGVar3 = (pGVar2->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) goto label_03b8a9aa;
    uVar17 = (uint)pGVar3->max_length;
    if ((int)uVar17 <= (int)uVar20) {
      return;
    }
    uVar21 = uVar17 - 1;
    if ((int)uVar20 < (int)(uVar17 - 1)) {
      uVar21 = uVar20;
    }
    if (uVar21 < uVar17) {
      if (pGVar3->m_Items[(int)uVar21] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
        if ((char)(pGVar3->m_Items[(int)uVar21]->fields).enabled == '\0') {
          return;
        }
        (((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02)->fields)._index = uVar20;
        Gisketch_Aottg2UI_Actions_AottgChoiceControl__RefreshLabel
                  ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_02,(MethodInfo *)(ulong)uVar21);
        return;
      }
      goto label_03b8a9aa;
    }
  }
  pTStack_48 = (TMPro_TextMeshProUGUI_o *)0x3b8a9b4;
  pTStack_48 = (TMPro_TextMeshProUGUI_o *)il2cpp_runtime_helper_022b2ca0();
  if ((int)uVar21 < 0) {
    return;
  }
  lVar22 = (__this_03->fields).m_CachedPtr;
  if (lVar22 != 0) {
    uVar20 = *(uint *)(lVar22 + 0x18);
    if ((int)uVar20 <= (int)uVar21) {
      return;
    }
    if ((int)(uVar20 - 1) <= (int)uVar21) {
      uVar21 = uVar20 - 1;
    }
    if (uVar20 <= uVar21) goto label_03b8aa00;
    if (*(long *)(lVar22 + 0x20 + (long)(int)uVar21 * 8) != 0) {
      return;
    }
  }
  uStack_50 = 0x3b8aa00;
  il2cpp_runtime_helper_022b2c90();
label_03b8aa00:
  uStack_50 = 0x3b8aa05;
  uStack_50 = il2cpp_runtime_helper_022b2ca0();
  lVar22 = (__this_03->fields).m_CachedPtr;
  if (lVar22 != 0) {
    uVar21 = *(uint *)(lVar22 + 0x18);
    if ((int)uVar21 < 1) {
      return;
    }
    uVar20 = 0;
    while (uVar20 < uVar21) {
      lVar5 = *(long *)(lVar22 + 0x20 + (long)(int)uVar20 * 8);
      __this_03 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
      if (lVar5 == 0) goto label_03b8aa59;
      __this_03 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)(ulong)*(byte *)(lVar5 + 0x28);
      uVar20 = uVar20 + 1;
      if ((int)uVar21 <= (int)uVar20) {
        return;
      }
    }
    uStack_58 = 0x3b8aa59;
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b8aa59:
  uStack_58 = 0x3b8aa5e;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$RenderOption
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, UnityEngine_GameObject_o* root, TMPro_TextMeshProUGUI_o* label, bool closedValue, const MethodInfo* method);
// 0x3b8c720

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__RenderOption
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,
               UnityEngine_GameObject_o *root,TMPro_TextMeshProUGUI_o *label,bool_conflict closedValue,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar5;
  long lVar6;
  undefined1 uVar7;
  bool_conflict bVar8;
  TMPro_TextMeshProUGUI_o *context;
  System_String_o *pSVar9;
  uint uVar10;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar11;
  MethodInfo *extraout_RDX_00;
  MethodInfo *focused;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields *pGVar12;
  uint index_00;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *pGVar13;
  MethodInfo *method_01;
  TMPro_TextMeshProUGUI_o *__this_00;
  UnityEngine_Vector3_o UVar14;
  
  if (g_data_057a9ea1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionRenderContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchChoiceOptionRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ea1 = '\x01';
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
    il2cpp_runtime_helper_02337ed0();
  }
  index_00 = 0;
  __this_00 = label;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if ((char)closedValue == '\0') {
    pGVar4 = (__this->fields)._options;
    if (pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
      if (index < 0) {
        return;
      }
      pGVar3 = (pGVar4->fields)._items;
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
        uVar1 = (uint)pGVar3->max_length;
        if ((int)uVar1 <= index) {
          return;
        }
        uVar10 = uVar1 - 1;
        if (index < (int)(uVar1 - 1)) {
          uVar10 = index;
        }
        if (uVar1 <= uVar10) goto label_03b8ca30;
        if (pGVar3->m_Items[(int)uVar10] != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
          if ((char)(pGVar3->m_Items[(int)uVar10]->fields).enabled == '\0') {
            return;
          }
          goto label_03b8c7d0;
        }
      }
    }
  }
  else {
label_03b8c7d0:
    pGVar2 = (__this->fields)._node;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pGVar3 = (pGVar2->fields).choiceOptions;
      context = (TMPro_TextMeshProUGUI_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchChoiceOptionRenderContext);
      index_00 = 0;
      __this_00 = context;
      System_Object___ctor((Il2CppObject *)context,(MethodInfo *)0x0);
      if (context != (TMPro_TextMeshProUGUI_o *)0x0) {
        (context->fields).m_CachedPtr = (intptr_t)root;
        il2cpp_runtime_helper_022b4080(&context->fields,root);
        __this_00 = (TMPro_TextMeshProUGUI_o *)&(context->fields).m_CancellationTokenSource;
        (context->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)label;
        il2cpp_runtime_helper_022b4080();
        index_00 = (uint)label;
        pGVar4 = (__this->fields)._options;
        if ((pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
           (pGVar5 = (pGVar4->fields)._items,
           pGVar5 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
          uVar1 = (uint)pGVar5->max_length;
          index_00 = uVar1 - 1;
          if (index < (int)index_00) {
            index_00 = index;
          }
          uVar10 = 0;
          if (-1 < index) {
            uVar10 = index_00;
          }
          if (uVar1 <= uVar10) goto label_03b8ca30;
          pGVar13 = pGVar5->m_Items[(int)uVar10];
          (context->fields).m_Material = (UnityEngine_Material_o *)pGVar13;
          il2cpp_runtime_helper_022b4080(&(context->fields).m_Material);
          index_00 = (uint)pGVar13;
          pGVar4 = (__this->fields)._options;
          __this_00 = (TMPro_TextMeshProUGUI_o *)0x0;
          if (pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
            pSVar9 = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__Text(pGVar4,index,method_00);
            __this_00 = (TMPro_TextMeshProUGUI_o *)&(context->fields).m_Color;
            *(System_String_o **)&(context->fields).m_Color.fields = pSVar9;
            il2cpp_runtime_helper_022b4080();
            index_00 = (uint)pSVar9;
            pGVar4 = (__this->fields)._options;
            if ((pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
               (pGVar5 = (pGVar4->fields)._items,
               pGVar5 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
              uVar1 = (uint)pGVar5->max_length;
              index_00 = uVar1 - 1;
              if (index < (int)index_00) {
                index_00 = index;
              }
              uVar10 = 0;
              if (-1 < index) {
                uVar10 = index_00;
              }
              if (uVar1 <= uVar10) goto label_03b8ca30;
              pGVar13 = pGVar5->m_Items[(int)uVar10];
              if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0)
              goto label_03b8ca2b;
              bVar8 = System_String__IsNullOrEmpty((pGVar13->fields).value,(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                pGVar12 = &pGVar13->fields;
label_03b8c98a:
                pSVar9 = pGVar12->value;
              }
              else {
                pSVar9 = (pGVar13->fields).text;
                if (pSVar9 == (System_String_o *)0x0) {
                  pGVar12 = *(Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_Fields **)
                             (g_data_057b9c00 + 0xb8);
                  goto label_03b8c98a;
                }
              }
              __this_00 = (TMPro_TextMeshProUGUI_o *)&(context->fields).m_Color.fields.b;
              *(System_String_o **)&(context->fields).m_Color.fields.b = pSVar9;
              il2cpp_runtime_helper_022b4080();
              index_00 = (uint)pSVar9;
              (context->fields).m_SkipLayoutUpdate = index;
              pGVar4 = (__this->fields)._options;
              if (pGVar4 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
                if (index < 0) {
label_03b8c9e3:
                  uVar7 = 0;
                  pMVar11 = extraout_RDX;
label_03b8c9e5:
                  *(undefined1 *)&(context->fields).m_SkipMaterialUpdate = uVar7;
                  *(bool *)((long)&(context->fields).m_SkipMaterialUpdate + 1) =
                       (__this->fields)._index == index;
                  *(char *)((long)&(context->fields).m_SkipMaterialUpdate + 2) = (char)closedValue;
                  if (*(int *)(TypeInfo_GisketchChoiceOptionRenderer + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                    pMVar11 = extraout_RDX_00;
                  }
                  Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderer__TryRender
                            ((System_String_o *)pGVar3,
                             (Gisketch_Aottg2UI_Actions_GisketchChoiceOptionRenderContext_o *)context,pMVar11)
                  ;
                  return;
                }
                pGVar5 = (pGVar4->fields)._items;
                if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) {
                  uVar1 = (uint)pGVar5->max_length;
                  if ((int)uVar1 <= index) goto label_03b8c9e3;
                  uVar10 = uVar1 - 1;
                  if (index < (int)(uVar1 - 1)) {
                    uVar10 = index;
                  }
                  pMVar11 = (MethodInfo *)(ulong)uVar10;
                  if (uVar1 <= uVar10) goto label_03b8ca30;
                  if (pGVar5->m_Items[(int)uVar10] !=
                      (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_o *)0x0) {
                    uVar7 = (undefined1)(pGVar5->m_Items[(int)uVar10]->fields).enabled;
                    goto label_03b8c9e5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_03b8ca2b:
  il2cpp_runtime_helper_022b2c90();
label_03b8ca30:
  il2cpp_runtime_helper_022b2ca0();
  method_01 = (MethodInfo *)(ulong)index_00;
  pMVar11 = focused;
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
    pMVar11 = extraout_RDX_01;
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
    pMVar11 = extraout_RDX_02;
  }
  lVar6 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar6 + 0x18) != 1) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar6 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar6 + 0x18) = 1;
      lVar6 = *(long *)(lVar6 + 0x10);
      pMVar11 = extraout_RDX_04;
    }
    else {
      *(undefined4 *)(lVar6 + 0x18) = 1;
      lVar6 = *(long *)(lVar6 + 0x10);
    }
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      pMVar11 = extraout_RDX_03;
    }
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex
            ((Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)__this_00,index_00,pMVar11);
  UVar14 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  *(undefined1 *)&(__this_00->fields).m_VertsDirty = 1;
  *(long *)&(__this_00->fields).m_MaterialDirty = UVar14.fields._0_8_;
  Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal((UnityEngine_GameObject_o *)focused,12.0,method_01);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$NotifyChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__NotifyChanged (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t source, const MethodInfo* method);
// 0x3b8d3f0

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__NotifyChanged
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t source,MethodInfo *method)

{
  ushort uVar1;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c *pGVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_String_Fields SVar6;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_00;
  bool_conflict bVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  VirtualInvokeData *pVVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  System_String_o *pSVar13;
  undefined4 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff7c;
  undefined4 in_stack_ffffffffffffff80;
  undefined4 in_stack_ffffffffffffff84;
  undefined4 in_stack_ffffffffffffff88;
  undefined4 in_stack_ffffffffffffff8c;
  undefined4 in_stack_ffffffffffffff90;
  undefined4 in_stack_ffffffffffffff94;
  System_String_o SStack_68;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int32_t iStack_38;
  uint16_t uStack_34;
  undefined2 uStack_32;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (g_data_057a9ea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IGisketchActionHandler);
    g_data_057a9ea2 = '\x01';
  }
  pGVar8 = (__this->fields)._node;
  if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  pSVar13 = (pGVar8->fields).action;
  uVar10 = 0;
  bVar7 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  pGVar2 = (__this->fields)._actions;
  if (pGVar2 == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
    return;
  }
  pGVar8 = (__this->fields)._node;
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar13 = (pGVar8->fields).id;
    pSVar3 = (pGVar8->fields).action;
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    SStack_68.fields._stringLength = 0;
    SStack_68.fields._firstChar = 0;
    SStack_68.fields._6_2_ = 0;
    uStack_50 = 0;
    SStack_68.klass = (System_String_c *)0x0;
    SStack_68.monitor = (void *)0x0;
    __this_00.fields.ElementId._4_4_ = in_stack_ffffffffffffff7c;
    __this_00.fields.ElementId._0_4_ = in_stack_ffffffffffffff78;
    __this_00.fields.GameObject._0_4_ = in_stack_ffffffffffffff80;
    __this_00.fields.GameObject._4_4_ = in_stack_ffffffffffffff84;
    __this_00.fields.Node._0_4_ = in_stack_ffffffffffffff88;
    __this_00.fields.Node._4_4_ = in_stack_ffffffffffffff8c;
    __this_00.fields.InputSource = in_stack_ffffffffffffff90;
    __this_00.fields._28_4_ = in_stack_ffffffffffffff94;
    Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_3a9d250
              (__this_00,&SStack_68,(UnityEngine_GameObject_o *)pSVar13,pGVar8,(int32_t)(__this->fields)._node
               ,(MethodInfo *)(ulong)(uint)source);
    SVar6 = SStack_68.fields;
    iStack_38 = SStack_68.fields._stringLength;
    uStack_34 = SStack_68.fields._firstChar;
    uStack_32 = SStack_68.fields._6_2_;
    uStack_30 = (undefined4)uStack_50;
    uStack_2c = uStack_50._4_4_;
    uStack_48 = SStack_68.klass._0_4_;
    uStack_44 = SStack_68.klass._4_4_;
    uStack_40 = SStack_68.monitor._0_4_;
    uStack_3c = SStack_68.monitor._4_4_;
    pGVar4 = pGVar2->klass;
    uVar1._0_1_ = (pGVar4->_2).rank;
    uVar1._1_1_ = (pGVar4->_2).minimumAlignment;
    SStack_68.fields = SVar6;
    if ((ulong)uVar1 != 0) {
      pIVar5 = (pGVar4->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IGisketchActionHandler) {
          pVVar9 = pGVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
          goto label_03b8d4fd;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar12);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pGVar2,TypeInfo_IGisketchActionHandler,0);
label_03b8d4fd:
    (*pVVar9->methodPtr)(pGVar2,pSVar3,pVVar9->method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  SVar6 = pSVar13->fields;
  if (SVar6 != (System_String_Fields)0x0) {
    uVar11 = *(uint *)((long)SVar6 + 0x18) - 1;
    pSVar13 = (System_String_o *)(ulong)uVar11;
    if ((int)uVar10 < (int)uVar11) {
      pSVar13 = (System_String_o *)(uVar10 & 0xffffffff);
    }
    uVar11 = 0;
    if (-1 < (int)uVar10) {
      uVar11 = (uint)pSVar13;
    }
    if (*(uint *)((long)SVar6 + 0x18) <= uVar11) goto label_03b8d59f;
    lVar12 = *(long *)((long)SVar6 + 0x20 + (long)(int)uVar11 * 8);
    if (lVar12 != 0) {
      bVar7 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar12 + 0x10),(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      if (*(long *)(lVar12 + 0x18) == 0) {
        return;
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b8d59f:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$SetArrow
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, System_String_o* icon, const MethodInfo* method);
// 0x3b8aa70

void Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetArrow
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,System_String_o *icon,
               MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *pGVar2;
  bool_conflict bVar3;
  int iVar4;
  UnityEngine_Transform_o *__this_01;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *x;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_Sprite_o *value;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_03;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  ulong uVar9;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_04;
  undefined8 *puVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar11;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **ppGVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (g_data_057a9ea3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponentInChildren_Image);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"AoTTG Button Icon");
    g_data_057a9ea3 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._arrow;
  puVar10 = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    __this_04 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)(__this->fields)._arrow;
    if ((__this_04 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) ||
       (__this_01 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)__this_04,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto label_03b8abf6;
    x = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)
        UnityEngine_Transform__Find(__this_01,"AoTTG Button Icon",(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_04 = x;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar1 = (UnityEngine_Object_o *)(__this->fields)._arrow;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_02 = (UnityEngine_UI_Image_o *)0x0;
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_00 = (__this->fields)._arrow;
      __this_04 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_03b8abf6;
      __this_02 = (UnityEngine_UI_Image_o *)
                  UnityEngine_GameObject__GetComponentInChildren_object_(__this_00,MethodInfo_Image_GetComponentInChildren_Image);
    }
  }
  else {
    if (x == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) goto label_03b8abf6;
    __this_02 = (UnityEngine_UI_Image_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)x,MethodInfo_Image_GetComponent_Image);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  __this_04 = (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)icon;
  value = Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load(icon,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
    UnityEngine_UI_Image__set_sprite(__this_02,value,(MethodInfo *)0x0);
    return;
  }
label_03b8abf6:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9e99 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"-popover");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"popover");
    g_data_057a9e99 = '\x01';
  }
  pGVar5 = (__this_04->fields)._options;
  if ((pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) &&
     ((pGVar5->fields)._items != (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0)) {
    puVar10 = &TypeInfo_GisketchNodeDefinition;
    auVar13 = il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    pMVar8 = auVar13._8_8_;
    icon = auVar13._0_8_;
    pGVar5 = (__this_04->fields)._options;
    if (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0) {
      if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)icon ==
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_03b8ad21;
      ppGVar12 = ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)icon)->m_Items;
      uVar9 = 0;
      do {
        pGVar2 = (pGVar5->fields)._items;
        if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0) break;
        iVar4 = (int)pGVar2->max_length;
        if ((long)iVar4 <= (long)uVar9) goto label_03b8ad35;
        pGVar6 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode(__this_04,(int32_t)uVar9,pMVar8);
        if ((uint)((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)icon)->max_length <= uVar9)
        goto label_03b8ae8f;
        *ppGVar12 = pGVar6;
        il2cpp_runtime_helper_022b4080(ppGVar12);
        uVar9 = uVar9 + 1;
        pGVar5 = (__this_04->fields)._options;
        ppGVar12 = ppGVar12 + 1;
        pMVar8 = extraout_RDX;
      } while (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0);
    }
  }
label_03b8ad1c:
  do {
    auVar14 = il2cpp_runtime_helper_022b2c90();
    auVar13._8_8_ = auVar14._8_8_;
    auVar13._0_8_ = icon;
    pGVar5 = auVar14._0_8_;
label_03b8ad21:
    pMVar8 = auVar13._8_8_;
    icon = auVar13._0_8_;
    pGVar2 = (pGVar5->fields)._items;
  } while (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchChoiceOptionDefinition_array *)0x0);
  iVar4 = (int)pGVar2->max_length;
  if (0 < iVar4) goto label_03b8ae94;
label_03b8ad35:
  pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)icon;
  if ((__this_04->fields)._maxVisibleItems < iVar4) {
    auVar13 = il2cpp_runtime_helper_022b2a40(*puVar10,1);
    pGVar11 = auVar13._0_8_;
    pGVar6 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__ScrollNode
                       (__this_04,(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)icon,auVar13._8_8_);
    if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_03b8ad1c;
    if ((int)pGVar11->max_length == 0) {
label_03b8ae8f:
      il2cpp_runtime_helper_022b2ca0();
      pMVar8 = extraout_RDX_00;
label_03b8ae94:
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionNode(__this_04,0,pMVar8);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c87 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9c87 = '\x01';
      }
      return;
    }
    pGVar11->m_Items[0] = pGVar6;
    il2cpp_runtime_helper_022b4080(pGVar11->m_Items);
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar6,(MethodInfo *)0x0);
  icon = (System_String_o *)pGVar11;
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar6->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&pGVar6->fields);
    pSVar7 = System_String__Concat_3ae5ba0((__this_04->fields)._id,"-popover",(MethodInfo *)0x0);
    (pGVar6->fields).id = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).id,pSVar7);
    (pGVar6->fields).style = "popover";
    il2cpp_runtime_helper_022b4080(&(pGVar6->fields).style);
    __this_03 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_03,(MethodInfo *)0x0);
    if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (__this_03->fields).direction = "Column";
      il2cpp_runtime_helper_022b4080(&__this_03->fields);
      (__this_03->fields).alignItems = "Stretch";
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).alignItems);
      (__this_03->fields).gap = 0.0;
      (pGVar6->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_03;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).search,__this_03);
      (pGVar6->fields).deferredChildren = pGVar11;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).deferredChildren,pGVar11);
      return;
    }
  }
  goto label_03b8ad1c;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$OptionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionId (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, int32_t index, const MethodInfo* method);
// 0x3b8c060

System_String_o *
Gisketch_Aottg2UI_Actions_AottgChoiceControl__OptionId
          (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,int32_t index,MethodInfo *method)

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = index;
  if (g_data_057a9ea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"-option-");
    g_data_057a9ea4 = '\x01';
  }
  pSVar1 = (__this->fields)._id;
  str2 = System_Int32__ToString((int32_t)&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3af7150(pSVar1,"-option-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$FindDeep
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x3b8c2c0

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
  VirtualInvokeData *pVVar8;
  UnityEngine_Transform_o *x;
  long *plVar9;
  undefined8 *puVar10;
  MethodInfo *method_00;
  long lVar11;
  long lVar12;
  System_Collections_IEnumerator_o *unaff_R12;
  int iVar13;
  UnityEngine_Transform_o *pUVar14;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  long local_38;
  
  if (g_data_057a9ea5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057a9ea5 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar14 = (UnityEngine_Transform_o *)0x0;
  if ((char)bVar7 == '\0') {
    if (root == (UnityEngine_Transform_o *)0x0) {
label_03b8c5a4:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return root;
      }
      unaff_R12 = UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
      if (unaff_R12 != (System_Collections_IEnumerator_o *)0x0) {
        local_38 = 0;
        do {
          pSVar4 = unaff_R12->klass;
          uVar2._0_1_ = (pSVar4->_2).rank;
          uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar11 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IEnumerator) {
                pVVar8 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar11);
                goto label_03b8c403;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar11);
          }
          pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_03b8c403:
          cVar6 = (*pVVar8->methodPtr)(unaff_R12,pVVar8->method);
          if (cVar6 == '\0') {
            iVar13 = 7;
            goto label_03b8c503;
          }
          pSVar4 = unaff_R12->klass;
          uVar3._0_1_ = (pSVar4->_2).rank;
          uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar11 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar11) == TypeInfo_IEnumerator) {
                pVVar8 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar11) + 1);
                goto label_03b8c488;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar11);
          }
          pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,1);
label_03b8c488:
          auVar16 = (*pVVar8->methodPtr)(unaff_R12,pVVar8->method);
          method_00 = auVar16._8_8_;
          pUVar14 = auVar16._0_8_;
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            bVar1 = (TypeInfo_Transform->_2).naturalAligment;
            method_00 = (MethodInfo *)(ulong)bVar1;
            if (((pUVar14->klass->_2).naturalAligment < bVar1) ||
               ((pUVar14->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_Transform)) {
              il2cpp_runtime_helper_022b2fd0(pUVar14);
              goto label_03b8c5a4;
            }
          }
          x = Gisketch_Aottg2UI_Actions_AottgChoiceControl__FindDeep(pUVar14,name,method_00);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            iVar13 = 6;
            goto label_03b8c505;
          }
        } while( true );
      }
    }
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar15 = il2cpp_runtime_helper_022fefe0();
      iVar13 = 0;
      if (auVar15._8_4_ != 1) {
        plVar9 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
        if (plVar9 == (long *)0x0) goto label_03b8c6a6;
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto label_03b8c67f;
        lVar12 = 0;
        goto label_03b8c670;
      }
      plVar9 = (long *)__cxa_begin_catch(auVar15._0_8_);
      local_38 = *plVar9;
      __cxa_end_catch();
label_03b8c503:
      x = (UnityEngine_Transform_o *)0x0;
label_03b8c505:
      plVar9 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
      if (plVar9 != (long *)0x0) {
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
              puVar10 = (undefined8 *)
                        (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
              goto label_03b8c56d;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_03b8c56d:
        (*(code *)*puVar10)(plVar9,puVar10[1]);
      }
    } while (local_38 != 0);
    pUVar14 = (UnityEngine_Transform_o *)0x0;
    if (iVar13 == 6) {
      pUVar14 = x;
    }
  }
  return pUVar14;
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12) {
label_03b8c670:
    if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)(lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto label_03b8c69d;
    }
  }
label_03b8c67f:
  puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_03b8c69d:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
label_03b8c6a6:
  _Unwind_Resume(auVar15._0_8_);
}


// Gisketch.Aottg2UI.Actions.AottgChoiceControl$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceControl___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* __this, const MethodInfo* method);
// 0x3b8d690

void Gisketch_Aottg2UI_Actions_AottgChoiceControl___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchDropdownItemFeedback__o *__this_00;
  
  if (g_data_057a9ea6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdownItemFee);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchDropdownItemFeedback);
    g_data_057a9ea6 = '\x01';
  }
  (__this->fields)._maxVisibleItems = 8;
  __this_00 = (System_Collections_Generic_List_GisketchDropdownItemFeedback__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchDropdownItemFeedback);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Actions_GisketchDropdownItemFee);
  (__this->fields)._feedback = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._feedback);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



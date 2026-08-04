// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeParentRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$Register
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o* item, const MethodInfo* method);
// 0x44ead00

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Register
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *item,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint uVar3;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_array *pGVar4;
  long lVar5;
  undefined1 uVar6;
  bool_conflict bVar7;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *pGVar8;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_01;
  
  if (g_data_057aec2f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec2f = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  __this_00 = (__this->fields)._items;
  __this_01 = (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0;
  if (__this_00 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
    bVar7 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                       MethodInfo_Boolean_Contains);
    lVar5 = MethodInfo_Void_Add;
    if ((char)bVar7 != '\0') {
      return;
    }
    __this_01 = (__this->fields)._items;
    if (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar4 = (__this_01->fields)._items;
      if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_array *)0x0) {
        uVar3 = (__this_01->fields)._size;
        pGVar8 = item;
        if (uVar3 < (uint)pGVar4->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          __this_01 = (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)
                      (pGVar4->m_Items + (int)uVar3);
          pGVar4->m_Items[(int)uVar3] = item;
          il2cpp_runtime_helper_022b4080();
          cVar2 = (char)(__this->fields)._hovered;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          cVar2 = (char)(__this->fields)._hovered;
        }
        uVar6 = 1;
        if (cVar2 == '\0') {
          uVar6 = *(undefined1 *)((long)&(__this->fields)._hovered + 1);
        }
        if (item != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
          *(undefined1 *)&(item->fields)._active = uVar6;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(item,(MethodInfo *)pGVar8);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x44eaed0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  UnityEngine_Object_o *unaff_RBX;
  undefined1 *puVar2;
  uint uVar3;
  int index;
  MethodInfo *unaff_RBP;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *pGVar4;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_01;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *unaff_R14;
  undefined8 unaff_R15;
  undefined7 uVar5;
  
  *(undefined1 *)&(__this->fields)._hovered = 1;
  puVar2 = (undefined1 *)register0x00000020;
  do {
    pGVar4 = __this;
    *(MethodInfo **)(puVar2 + -8) = unaff_RBP;
    *(undefined8 *)(puVar2 + -0x10) = unaff_R15;
    *(Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o **)(puVar2 + -0x18) = unaff_R14;
    *(undefined8 **)(puVar2 + -0x20) = unaff_R13;
    *(undefined8 **)(puVar2 + -0x28) = unaff_R12;
    *(UnityEngine_Object_o **)(puVar2 + -0x30) = unaff_RBX;
    *(undefined8 *)(puVar2 + -0x38) = in_RAX;
    uVar5 = (undefined7)((ulong)unaff_R15 >> 8);
    if (g_data_057aec30 == '\0') {
      *(undefined8 *)(puVar2 + -0x40) = 0x44eafdc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eafe8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eaff4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eb000;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aec30 = '\x01';
      if ((char)(pGVar4->fields)._hovered == '\0') goto label_044eb015;
label_044eaf09:
      unaff_R15 = CONCAT71(uVar5,1);
      __this_01 = (pGVar4->fields)._items;
    }
    else {
      if ((char)(pGVar4->fields)._hovered != '\0') goto label_044eaf09;
label_044eb015:
      unaff_R15 = CONCAT71(uVar5,*(undefined1 *)((long)&(pGVar4->fields)._hovered + 1));
      __this_01 = (pGVar4->fields)._items;
    }
    __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    if (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
      uVar3 = (__this_01->fields)._size - 1;
      unaff_RBP = (MethodInfo *)(ulong)uVar3;
      if ((int)uVar3 < 0) {
        return;
      }
      unaff_R12 = &MethodInfo_AottgHoverMarqueeTextRuntime_get_Item;
      unaff_R13 = &TypeInfo_Object;
      do {
        index = (int)unaff_RBP;
        *(undefined8 *)(puVar2 + -0x40) = 0x44eaf3b;
        unaff_RBX = (UnityEngine_Object_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eaf50;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar2 + -0x40) = 0x44eaf5c;
        bVar1 = UnityEngine_Object__op_Equality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)(pGVar4->fields)._items;
        if (__this == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0) goto label_044eb026;
        if ((char)bVar1 == '\0') {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eafab;
          method_00 = unaff_RBP;
          __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
          if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044eb026;
          *(char *)&(__this_00->fields)._active = (char)unaff_R15;
          *(undefined8 *)(puVar2 + -0x40) = 0x44eafbc;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
        }
        else {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eaf7e;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_Void_RemoveAt);
        }
        if (index + -1 < 0) {
          return;
        }
        unaff_RBP = (MethodInfo *)(ulong)(index - 1);
        __this_01 = (pGVar4->fields)._items;
      } while (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
      __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    }
label_044eb026:
    *(undefined8 *)(puVar2 + -0x40) = 0x44eb02b;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&(__this->fields)._hovered = 0;
    puVar2 = puVar2 + -0x38;
    unaff_R14 = pGVar4;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x44eb030

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  undefined8 in_RAX;
  UnityEngine_Object_o *unaff_RBX;
  uint uVar2;
  int index;
  MethodInfo *unaff_RBP;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *pGVar3;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *unaff_R14;
  undefined7 uVar4;
  undefined8 unaff_R15;
  
  do {
    pGVar3 = __this;
    *(undefined1 *)&(pGVar3->fields)._hovered = 0;
    *(MethodInfo **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o **)((long)register0x00000020 + -0x18) =
         unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = in_RAX;
    uVar4 = (undefined7)((ulong)unaff_R15 >> 8);
    if (g_data_057aec30 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eafdc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eafe8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eaff4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eb000;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aec30 = '\x01';
      if ((char)(pGVar3->fields)._hovered == '\0') goto label_044eb015;
label_044eaf09:
      unaff_R15 = CONCAT71(uVar4,1);
      __this_01 = (pGVar3->fields)._items;
    }
    else {
      if ((char)(pGVar3->fields)._hovered != '\0') goto label_044eaf09;
label_044eb015:
      unaff_R15 = CONCAT71(uVar4,*(undefined1 *)((long)&(pGVar3->fields)._hovered + 1));
      __this_01 = (pGVar3->fields)._items;
    }
    __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    if (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
      uVar2 = (__this_01->fields)._size - 1;
      unaff_RBP = (MethodInfo *)(ulong)uVar2;
      if ((int)uVar2 < 0) {
        return;
      }
      unaff_R12 = &MethodInfo_AottgHoverMarqueeTextRuntime_get_Item;
      unaff_R13 = &TypeInfo_Object;
      do {
        index = (int)unaff_RBP;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eaf3b;
        unaff_RBX = (UnityEngine_Object_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eaf50;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eaf5c;
        bVar1 = UnityEngine_Object__op_Equality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)(pGVar3->fields)._items;
        if (__this == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0) goto label_044eb026;
        if ((char)bVar1 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eafab;
          method_00 = unaff_RBP;
          __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
          if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044eb026;
          *(char *)&(__this_00->fields)._active = (char)unaff_R15;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eafbc;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eaf7e;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_Void_RemoveAt);
        }
        if (index + -1 < 0) {
          return;
        }
        unaff_RBP = (MethodInfo *)(ulong)(index - 1);
        __this_01 = (pGVar3->fields)._items;
      } while (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
      __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    }
label_044eb026:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eb02b;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x38);
    unaff_R14 = pGVar3;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnSelect (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x44eb040

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnSelect
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  undefined8 in_RAX;
  UnityEngine_Object_o *unaff_RBX;
  undefined1 *puVar2;
  uint uVar3;
  int index;
  MethodInfo *unaff_RBP;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *pGVar4;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_01;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *unaff_R14;
  undefined7 uVar5;
  undefined8 unaff_R15;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 1;
  puVar2 = (undefined1 *)register0x00000020;
  do {
    pGVar4 = __this;
    *(MethodInfo **)(puVar2 + -8) = unaff_RBP;
    *(undefined8 *)(puVar2 + -0x10) = unaff_R15;
    *(Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o **)(puVar2 + -0x18) = unaff_R14;
    *(undefined8 **)(puVar2 + -0x20) = unaff_R13;
    *(undefined8 **)(puVar2 + -0x28) = unaff_R12;
    *(UnityEngine_Object_o **)(puVar2 + -0x30) = unaff_RBX;
    *(undefined8 *)(puVar2 + -0x38) = in_RAX;
    uVar5 = (undefined7)((ulong)unaff_R15 >> 8);
    if (g_data_057aec30 == '\0') {
      *(undefined8 *)(puVar2 + -0x40) = 0x44eafdc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eafe8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eaff4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eb000;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aec30 = '\x01';
      if ((char)(pGVar4->fields)._hovered == '\0') goto label_044eb015;
label_044eaf09:
      unaff_R15 = CONCAT71(uVar5,1);
      __this_01 = (pGVar4->fields)._items;
    }
    else {
      if ((char)(pGVar4->fields)._hovered != '\0') goto label_044eaf09;
label_044eb015:
      unaff_R15 = CONCAT71(uVar5,*(undefined1 *)((long)&(pGVar4->fields)._hovered + 1));
      __this_01 = (pGVar4->fields)._items;
    }
    __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    if (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
      uVar3 = (__this_01->fields)._size - 1;
      unaff_RBP = (MethodInfo *)(ulong)uVar3;
      if ((int)uVar3 < 0) {
        return;
      }
      unaff_R12 = &MethodInfo_AottgHoverMarqueeTextRuntime_get_Item;
      unaff_R13 = &TypeInfo_Object;
      do {
        index = (int)unaff_RBP;
        *(undefined8 *)(puVar2 + -0x40) = 0x44eaf3b;
        unaff_RBX = (UnityEngine_Object_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eaf50;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar2 + -0x40) = 0x44eaf5c;
        bVar1 = UnityEngine_Object__op_Equality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)(pGVar4->fields)._items;
        if (__this == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0) goto label_044eb026;
        if ((char)bVar1 == '\0') {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eafab;
          method_00 = unaff_RBP;
          __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
          if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044eb026;
          *(char *)&(__this_00->fields)._active = (char)unaff_R15;
          *(undefined8 *)(puVar2 + -0x40) = 0x44eafbc;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
        }
        else {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eaf7e;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_Void_RemoveAt);
        }
        if (index + -1 < 0) {
          return;
        }
        unaff_RBP = (MethodInfo *)(ulong)(index - 1);
        __this_01 = (pGVar4->fields)._items;
      } while (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
      __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    }
label_044eb026:
    *(undefined8 *)(puVar2 + -0x40) = 0x44eb02b;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&(__this->fields)._hovered = 0;
    puVar2 = puVar2 + -0x38;
    unaff_R14 = pGVar4;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDeselect (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x44eb050

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  undefined8 in_RAX;
  UnityEngine_Object_o *unaff_RBX;
  undefined1 *puVar2;
  uint uVar3;
  int index;
  MethodInfo *unaff_RBP;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *pGVar4;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_01;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *unaff_R14;
  undefined7 uVar5;
  undefined8 unaff_R15;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 0;
  puVar2 = (undefined1 *)register0x00000020;
  do {
    pGVar4 = __this;
    *(MethodInfo **)(puVar2 + -8) = unaff_RBP;
    *(undefined8 *)(puVar2 + -0x10) = unaff_R15;
    *(Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o **)(puVar2 + -0x18) = unaff_R14;
    *(undefined8 **)(puVar2 + -0x20) = unaff_R13;
    *(undefined8 **)(puVar2 + -0x28) = unaff_R12;
    *(UnityEngine_Object_o **)(puVar2 + -0x30) = unaff_RBX;
    *(undefined8 *)(puVar2 + -0x38) = in_RAX;
    uVar5 = (undefined7)((ulong)unaff_R15 >> 8);
    if (g_data_057aec30 == '\0') {
      *(undefined8 *)(puVar2 + -0x40) = 0x44eafdc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eafe8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eaff4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eb000;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aec30 = '\x01';
      if ((char)(pGVar4->fields)._hovered == '\0') goto label_044eb015;
label_044eaf09:
      unaff_R15 = CONCAT71(uVar5,1);
      __this_01 = (pGVar4->fields)._items;
    }
    else {
      if ((char)(pGVar4->fields)._hovered != '\0') goto label_044eaf09;
label_044eb015:
      unaff_R15 = CONCAT71(uVar5,*(undefined1 *)((long)&(pGVar4->fields)._hovered + 1));
      __this_01 = (pGVar4->fields)._items;
    }
    __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    if (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
      uVar3 = (__this_01->fields)._size - 1;
      unaff_RBP = (MethodInfo *)(ulong)uVar3;
      if ((int)uVar3 < 0) {
        return;
      }
      unaff_R12 = &MethodInfo_AottgHoverMarqueeTextRuntime_get_Item;
      unaff_R13 = &TypeInfo_Object;
      do {
        index = (int)unaff_RBP;
        *(undefined8 *)(puVar2 + -0x40) = 0x44eaf3b;
        unaff_RBX = (UnityEngine_Object_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eaf50;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar2 + -0x40) = 0x44eaf5c;
        bVar1 = UnityEngine_Object__op_Equality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)(pGVar4->fields)._items;
        if (__this == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0) goto label_044eb026;
        if ((char)bVar1 == '\0') {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eafab;
          method_00 = unaff_RBP;
          __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
          if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044eb026;
          *(char *)&(__this_00->fields)._active = (char)unaff_R15;
          *(undefined8 *)(puVar2 + -0x40) = 0x44eafbc;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
        }
        else {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eaf7e;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_Void_RemoveAt);
        }
        if (index + -1 < 0) {
          return;
        }
        unaff_RBP = (MethodInfo *)(ulong)(index - 1);
        __this_01 = (pGVar4->fields)._items;
      } while (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
      __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    }
label_044eb026:
    *(undefined8 *)(puVar2 + -0x40) = 0x44eb02b;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&(__this->fields)._hovered = 0;
    puVar2 = puVar2 + -0x38;
    unaff_R14 = pGVar4;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x44eb060

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  undefined8 in_RAX;
  UnityEngine_Object_o *unaff_RBX;
  undefined1 *puVar2;
  uint uVar3;
  int index;
  MethodInfo *unaff_RBP;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *pGVar4;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_01;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *unaff_R14;
  undefined7 uVar5;
  undefined8 unaff_R15;
  
  *(undefined2 *)&(__this->fields)._hovered = 0;
  puVar2 = (undefined1 *)register0x00000020;
  do {
    pGVar4 = __this;
    *(MethodInfo **)(puVar2 + -8) = unaff_RBP;
    *(undefined8 *)(puVar2 + -0x10) = unaff_R15;
    *(Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o **)(puVar2 + -0x18) = unaff_R14;
    *(undefined8 **)(puVar2 + -0x20) = unaff_R13;
    *(undefined8 **)(puVar2 + -0x28) = unaff_R12;
    *(UnityEngine_Object_o **)(puVar2 + -0x30) = unaff_RBX;
    *(undefined8 *)(puVar2 + -0x38) = in_RAX;
    uVar5 = (undefined7)((ulong)unaff_R15 >> 8);
    if (g_data_057aec30 == '\0') {
      *(undefined8 *)(puVar2 + -0x40) = 0x44eafdc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eafe8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eaff4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      *(undefined8 *)(puVar2 + -0x40) = 0x44eb000;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aec30 = '\x01';
      if ((char)(pGVar4->fields)._hovered == '\0') goto label_044eb015;
label_044eaf09:
      unaff_R15 = CONCAT71(uVar5,1);
      __this_01 = (pGVar4->fields)._items;
    }
    else {
      if ((char)(pGVar4->fields)._hovered != '\0') goto label_044eaf09;
label_044eb015:
      unaff_R15 = CONCAT71(uVar5,*(undefined1 *)((long)&(pGVar4->fields)._hovered + 1));
      __this_01 = (pGVar4->fields)._items;
    }
    __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    if (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
      uVar3 = (__this_01->fields)._size - 1;
      unaff_RBP = (MethodInfo *)(ulong)uVar3;
      if ((int)uVar3 < 0) {
        return;
      }
      unaff_R12 = &MethodInfo_AottgHoverMarqueeTextRuntime_get_Item;
      unaff_R13 = &TypeInfo_Object;
      do {
        index = (int)unaff_RBP;
        *(undefined8 *)(puVar2 + -0x40) = 0x44eaf3b;
        unaff_RBX = (UnityEngine_Object_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eaf50;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar2 + -0x40) = 0x44eaf5c;
        bVar1 = UnityEngine_Object__op_Equality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)(pGVar4->fields)._items;
        if (__this == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0) goto label_044eb026;
        if ((char)bVar1 == '\0') {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eafab;
          method_00 = unaff_RBP;
          __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
          if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044eb026;
          *(char *)&(__this_00->fields)._active = (char)unaff_R15;
          *(undefined8 *)(puVar2 + -0x40) = 0x44eafbc;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
        }
        else {
          *(undefined8 *)(puVar2 + -0x40) = 0x44eaf7e;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_Void_RemoveAt);
        }
        if (index + -1 < 0) {
          return;
        }
        unaff_RBP = (MethodInfo *)(ulong)(index - 1);
        __this_01 = (pGVar4->fields)._items;
      } while (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
      __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    }
label_044eb026:
    *(undefined8 *)(puVar2 + -0x40) = 0x44eb02b;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&(__this->fields)._hovered = 0;
    puVar2 = puVar2 + -0x38;
    unaff_R14 = pGVar4;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x44eaee0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime__Refresh
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this_00;
  UnityEngine_Object_o *unaff_RBX;
  uint uVar2;
  int index;
  MethodInfo *unaff_RBP;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *pGVar3;
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_01;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *unaff_R14;
  undefined8 unaff_R15;
  undefined7 uVar4;
  
  do {
    pGVar3 = __this;
    *(MethodInfo **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o **)((long)register0x00000020 + -0x18) =
         unaff_R14;
    *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(UnityEngine_Object_o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = in_RAX;
    uVar4 = (undefined7)((ulong)unaff_R15 >> 8);
    if (g_data_057aec30 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eafdc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eafe8;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eaff4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eb000;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057aec30 = '\x01';
      if ((char)(pGVar3->fields)._hovered == '\0') goto label_044eb015;
label_044eaf09:
      unaff_R15 = CONCAT71(uVar4,1);
      __this_01 = (pGVar3->fields)._items;
    }
    else {
      if ((char)(pGVar3->fields)._hovered != '\0') goto label_044eaf09;
label_044eb015:
      unaff_R15 = CONCAT71(uVar4,*(undefined1 *)((long)&(pGVar3->fields)._hovered + 1));
      __this_01 = (pGVar3->fields)._items;
    }
    __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    if (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0) {
      uVar2 = (__this_01->fields)._size - 1;
      unaff_RBP = (MethodInfo *)(ulong)uVar2;
      if ((int)uVar2 < 0) {
        return;
      }
      unaff_R12 = &MethodInfo_AottgHoverMarqueeTextRuntime_get_Item;
      unaff_R13 = &TypeInfo_Object;
      do {
        index = (int)unaff_RBP;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eaf3b;
        unaff_RBX = (UnityEngine_Object_o *)
                    System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eaf50;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eaf5c;
        bVar1 = UnityEngine_Object__op_Equality(unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)(pGVar3->fields)._items;
        if (__this == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0) goto label_044eb026;
        if ((char)bVar1 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eafab;
          method_00 = unaff_RBP;
          __this_00 = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_AottgHoverMarqueeTextRuntime_get_Item);
          if (__this_00 == (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) goto label_044eb026;
          *(char *)&(__this_00->fields)._active = (char)unaff_R15;
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eafbc;
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this_00,method_00);
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eaf7e;
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_Void_RemoveAt);
        }
        if (index + -1 < 0) {
          return;
        }
        unaff_RBP = (MethodInfo *)(ulong)(index - 1);
        __this_01 = (pGVar3->fields)._items;
      } while (__this_01 != (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)0x0);
      __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *)0x0;
    }
label_044eb026:
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x44eb02b;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&(__this->fields)._hovered = 0;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x38);
    unaff_R14 = pGVar3;
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeParentRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o* __this, const MethodInfo* method);
// 0x44eb070

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeParentRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *__this_00;
  
  if (g_data_057aec31 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRunti);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgHoverMarqueeTextRuntime);
    g_data_057aec31 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_AottgHoverMarqueeTextRuntime__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgHoverMarqueeTextRuntime);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRunti);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



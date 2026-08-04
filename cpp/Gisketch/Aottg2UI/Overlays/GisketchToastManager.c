// Type: Gisketch.Aottg2UI.Overlays.GisketchToastManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchToastManager.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchToastManager.ToastItem$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* __this, System_String_o* key, Gisketch_Aottg2UI_Building_GisketchView_o* view, UnityEngine_RectTransform_o* slot, float height, const MethodInfo* method);
// 0x3b55990

void Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *__this,System_String_o *key,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,UnityEngine_RectTransform_o *slot,float height,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Key = key;
  il2cpp_runtime_helper_022b4080(&__this->fields,key);
  (__this->fields).View = view;
  il2cpp_runtime_helper_022b4080(&(__this->fields).View,view);
  (__this->fields).Slot = slot;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Slot,slot);
  (__this->fields).Height = height;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass21_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass21_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x3b54d50

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass21_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass21_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass21_0$$<BuildToast>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass21_0___BuildToast_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x3b583c0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass21_0___BuildToast_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass21_0_o *__this,
               MethodInfo *method)

{
  char cVar1;
  System_Object_array *__this_00;
  Il2CppClass *a;
  System_Collections_Generic_List_object__o *pSVar2;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_01;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  UnityEngine_Vector2_o value;
  il2cpp_array_size_t *piVar4;
  bool_conflict bVar5;
  System_Object_array *__this_02;
  System_String_o *b;
  Il2CppObject *pIVar6;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  undefined8 in_RAX;
  MethodInfo *method_00;
  long extraout_RDX;
  uint index;
  undefined8 unaff_RBX;
  undefined1 *puVar7;
  undefined8 unaff_RBP;
  System_Object_array *pSVar8;
  MethodInfo *method_01;
  System_Object_array *pSVar9;
  System_Object_array *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  intptr_t iVar10;
  undefined8 unaff_R15;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_8 [8];
  
  puVar7 = auStack_8;
  pSVar9 = (System_Object_array *)(__this->fields).__4__this;
  if (pSVar9 == (System_Object_array *)0x0) {
    in_RAX = il2cpp_runtime_helper_022b2c90();
    __this_03 = (System_Object_array *)pSVar9->bounds;
    if (__this_03 == (System_Object_array *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if ((__this_03->max_length != 0) &&
         (__this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03->bounds,
         __this_01 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0)) {
        __this_03 = *(System_Object_array **)(__this_03->max_length + 0x20);
        if (g_data_057a9d23 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          g_data_057a9d23 = '\x01';
        }
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                  ((UnityEngine_RectTransform_o *)__this_03,method);
        pSVar3 = (__this_01->fields)._items;
        if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
          if ((pSVar3->fields)._size == 0) {
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this_01,method);
            return;
          }
          return;
        }
      }
      fVar11 = (float)il2cpp_runtime_helper_022b2c90();
      __this_04 = (UnityEngine_RectTransform_o *)__this_03->bounds;
      if (__this_04 == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9d27 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
          g_data_057a9d27 = '\x01';
        }
        __this_04[1].monitor = method;
        il2cpp_runtime_helper_022b4080(&__this_04[1].monitor,method);
        iVar10 = extraout_RDX;
        if (extraout_RDX == 0) {
          if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar10 = **(intptr_t **)(TypeInfo_GisketchTheme + 0xb8);
        }
        __this_04[1].fields.m_CachedPtr = iVar10;
        il2cpp_runtime_helper_022b4080(&__this_04[1].fields,iVar10);
        return;
      }
      fVar12 = (float)__this_03->max_length;
      fVar13 = (float)(__this_03->max_length >> 0x20);
      value.fields.y = fVar11 * ((float)((ulong)__this_03->m_Items[0] >> 0x20) - fVar13) + fVar13;
      value.fields.x = fVar11 * (SUB84(__this_03->m_Items[0],0) - fVar12) + fVar12;
      UnityEngine_RectTransform__set_anchoredPosition(__this_04,value,(MethodInfo *)0x0);
      return;
    }
    pSVar8 = (System_Object_array *)pSVar9->max_length;
  }
  else {
    pSVar8 = (System_Object_array *)(__this->fields).toast;
    puVar7 = (undefined1 *)register0x00000020;
    __this_03 = pSVar9;
  }
  *(undefined8 *)(puVar7 + -8) = unaff_RBP;
  *(undefined8 *)(puVar7 + -0x10) = unaff_R15;
  *(undefined8 *)(puVar7 + -0x18) = unaff_R14;
  *(undefined8 *)(puVar7 + -0x20) = unaff_R13;
  *(undefined8 *)(puVar7 + -0x28) = unaff_R12;
  *(undefined8 *)(puVar7 + -0x30) = unaff_RBX;
  *(undefined8 *)(puVar7 + -0x38) = in_RAX;
  if (g_data_057a9d07 == '\0') {
    *(undefined8 *)(puVar7 + -0x40) = 0x3b55b16;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    *(undefined8 *)(puVar7 + -0x40) = 0x3b55b22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    *(undefined8 *)(puVar7 + -0x40) = 0x3b55b2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    *(undefined8 *)(puVar7 + -0x40) = 0x3b55b3a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    *(undefined8 *)(puVar7 + -0x40) = 0x3b55b46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    *(undefined8 *)(puVar7 + -0x40) = 0x3b55b52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Close_b__0);
    *(undefined8 *)(puVar7 + -0x40) = 0x3b55b5e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    g_data_057a9d07 = '\x01';
  }
  *(undefined8 *)(puVar7 + -0x40) = 0x3b55b74;
  __this_02 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  *(undefined8 *)(puVar7 + -0x40) = 0x3b55b81;
  pSVar9 = __this_02;
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (System_Object_array *)0x0) {
    ((System_Collections_Generic_List_object__Fields *)&__this_02->bounds)->_items = __this_03;
    *(undefined8 *)(puVar7 + -0x40) = 0x3b55b9c;
    pSVar9 = __this_03;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_List_object__Fields *)&__this_02->bounds);
    __this_00 = (System_Object_array *)__this_03->m_Items[0];
    *(undefined8 *)(puVar7 + -0x40) = 0x3b55ba8;
    b = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key
                  ((Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pSVar8,(MethodInfo *)pSVar9);
    pSVar9 = pSVar8;
    if (g_data_057a9d0f == '\0') {
      *(undefined8 *)(puVar7 + -0x40) = 0x3b55bc0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      pSVar9 = (System_Object_array *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
      *(undefined8 *)(puVar7 + -0x40) = 0x3b55bcc;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d0f = '\x01';
    }
    if (__this_00 != (System_Object_array *)0x0) {
      if (0 < (int)__this_00->max_length) {
        index = 0;
        do {
          *(undefined8 *)(puVar7 + -0x40) = 0x3b55bfe;
          pSVar9 = __this_00;
          pIVar6 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          if (pIVar6 == (Il2CppObject *)0x0) goto label_03b55de7;
          a = pIVar6[1].klass;
          *(undefined8 *)(puVar7 + -0x40) = 0x3b55c15;
          bVar5 = System_String__op_Equality((System_String_o *)a,b,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pSVar2 = (System_Collections_Generic_List_object__o *)__this_03->m_Items[0];
            pSVar9 = (System_Object_array *)0x0;
            if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b55de7;
            *(undefined8 *)(puVar7 + -0x40) = 0x3b55c3f;
            pIVar6 = System_Collections_Generic_List_object___get_Item(pSVar2,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
            piVar4 = &__this_02->max_length;
            __this_02->max_length = (il2cpp_array_size_t)pIVar6;
            *(undefined8 *)(puVar7 + -0x40) = 0x3b55c56;
            il2cpp_runtime_helper_022b4080(piVar4);
            pSVar2 = (System_Collections_Generic_List_object__o *)__this_03->m_Items[0];
            pSVar9 = (System_Object_array *)0x0;
            if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b55de7;
            method_01 = (MethodInfo *)(ulong)index;
            *(undefined8 *)(puVar7 + -0x40) = 0x3b55c74;
            System_Collections_Generic_List_object___RemoveAt(pSVar2,index,MethodInfo_Void_RemoveAt);
            *(undefined8 *)(puVar7 + -0x40) = 0x3b55c7c;
            pSVar9 = __this_03;
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending
                      ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03,method_01);
            if (g_data_057a9d0a == '\0') {
              pSVar9 = (System_Object_array *)&MethodInfo_Int32_get_Count;
              *(undefined8 *)(puVar7 + -0x40) = 0x3b55c91;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9d0a = '\x01';
            }
            if (__this_03->m_Items[0] == (Il2CppObject *)0x0) goto label_03b55de7;
            if (*(int *)&__this_03->m_Items[0][1].monitor != 0) {
              *(undefined8 *)(puVar7 + -0x40) = 0x3b55cb3;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03,method_01);
              *(undefined8 *)(puVar7 + -0x40) = 0x3b55cbb;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03,method_01);
              method_01 = (MethodInfo *)0x1;
              *(undefined8 *)(puVar7 + -0x40) = 0x3b55cc8;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03,1,method_00);
            }
            if (*(int *)((long)TypeInfo_GisketchMotion->m_Items + 0xc4) == 0) {
              *(undefined8 *)(puVar7 + -0x40) = 0x3b55d70;
              il2cpp_runtime_helper_02337ed0();
              cVar1 = *(char *)&TypeInfo_GisketchMotion->m_Items[0x13]->klass;
              pSVar9 = TypeInfo_GisketchMotion;
            }
            else {
              cVar1 = *(char *)&TypeInfo_GisketchMotion->m_Items[0x13]->klass;
              pSVar9 = TypeInfo_GisketchMotion;
            }
            TypeInfo_GisketchMotion = pSVar9;
            if (cVar1 != '\0') {
              if (*piVar4 == 0) goto label_03b55de7;
              pSVar8 = *(System_Object_array **)(*piVar4 + 0x18);
              if (*(int *)((long)pSVar9->m_Items + 0xc4) == 0) {
                *(undefined8 *)(puVar7 + -0x40) = 0x3b55d0d;
                il2cpp_runtime_helper_02337ed0();
              }
              method_01 = (MethodInfo *)0x0;
              *(undefined8 *)(puVar7 + -0x40) = 0x3b55d17;
              t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit
                            ((Gisketch_Aottg2UI_Building_GisketchView_o *)pSVar8,(MethodInfo *)0x0);
              pSVar9 = pSVar8;
              if (t != (DG_Tweening_Tween_o *)0x0) {
                *(undefined8 *)(puVar7 + -0x40) = 0x3b55d2e;
                action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                *(undefined8 *)(puVar7 + -0x40) = 0x3b55d48;
                DG_Tweening_TweenCallback___ctor();
                DG_Tweening_TweenSettingsExtensions__OnComplete_object_((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween)
                ;
                return;
              }
            }
            if (*piVar4 != 0) {
              pSVar9 = *(System_Object_array **)(*piVar4 + 0x20);
              if (g_data_057a9d23 == '\0') {
                *(undefined8 *)(puVar7 + -0x40) = 0x3b55da4;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                g_data_057a9d23 = '\x01';
              }
              *(undefined8 *)(puVar7 + -0x40) = 0x3b55db3;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                        ((UnityEngine_RectTransform_o *)pSVar9,method_01);
              if (__this_03->m_Items[0] != (Il2CppObject *)0x0) {
                if (*(int *)&__this_03->m_Items[0][1].monitor != 0) {
                  return;
                }
                Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost
                          ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03,method_01);
                return;
              }
            }
            goto label_03b55de7;
          }
          index = index + 1;
        } while ((int)index < (int)__this_00->max_length);
      }
      return;
    }
  }
label_03b55de7:
  *(undefined8 *)(puVar7 + -0x40) = 0x3b55dec;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pSVar9->obj,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass22_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass22_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x3b55a00

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass22_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass22_0_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass22_0$$<Wire>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass22_0___Wire_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x3b583e0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass22_0___Wire_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass22_0_o *__this,
               MethodInfo *method)

{
  char cVar1;
  System_Object_array *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_01;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  UnityEngine_Vector2_o value;
  il2cpp_array_size_t *piVar3;
  bool_conflict bVar4;
  System_Object_array *__this_02;
  System_String_o *b;
  Il2CppObject *pIVar5;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *method_00;
  long extraout_RDX;
  uint index;
  MethodInfo *method_01;
  System_Object_array *pSVar6;
  System_Object_array *pSVar7;
  System_Object_array *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  intptr_t iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  __this_03 = (System_Object_array *)(__this->fields).__4__this;
  if (__this_03 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((__this_03->max_length != 0) &&
       (__this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03->bounds,
       __this_01 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0)) {
      __this_03 = *(System_Object_array **)(__this_03->max_length + 0x20);
      if (g_data_057a9d23 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        g_data_057a9d23 = '\x01';
      }
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                ((UnityEngine_RectTransform_o *)__this_03,method);
      pSVar2 = (__this_01->fields)._items;
      if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
        if ((pSVar2->fields)._size == 0) {
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this_01,method);
          return;
        }
        return;
      }
    }
    fVar9 = (float)il2cpp_runtime_helper_022b2c90();
    __this_04 = (UnityEngine_RectTransform_o *)__this_03->bounds;
    if (__this_04 == (UnityEngine_RectTransform_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d27 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
        g_data_057a9d27 = '\x01';
      }
      __this_04[1].monitor = method;
      il2cpp_runtime_helper_022b4080(&__this_04[1].monitor,method);
      iVar8 = extraout_RDX;
      if (extraout_RDX == 0) {
        if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        iVar8 = **(intptr_t **)(TypeInfo_GisketchTheme + 0xb8);
      }
      __this_04[1].fields.m_CachedPtr = iVar8;
      il2cpp_runtime_helper_022b4080(&__this_04[1].fields,iVar8);
      return;
    }
    fVar10 = (float)__this_03->max_length;
    fVar11 = (float)(__this_03->max_length >> 0x20);
    value.fields.y = fVar9 * ((float)((ulong)__this_03->m_Items[0] >> 0x20) - fVar11) + fVar11;
    value.fields.x = fVar9 * (SUB84(__this_03->m_Items[0],0) - fVar10) + fVar10;
    UnityEngine_RectTransform__set_anchoredPosition(__this_04,value,(MethodInfo *)0x0);
    return;
  }
  pSVar6 = (System_Object_array *)(__this->fields).toast;
  if (g_data_057a9d07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Close_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    g_data_057a9d07 = '\x01';
  }
  __this_02 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  pSVar7 = __this_02;
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (System_Object_array *)0x0) {
    ((System_Collections_Generic_List_object__Fields *)&__this_02->bounds)->_items = __this_03;
    pSVar7 = __this_03;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_List_object__Fields *)&__this_02->bounds);
    __this_00 = (System_Object_array *)__this_03->m_Items[0];
    b = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key
                  ((Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pSVar6,(MethodInfo *)pSVar7);
    pSVar7 = pSVar6;
    if (g_data_057a9d0f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      pSVar7 = (System_Object_array *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d0f = '\x01';
    }
    if (__this_00 != (System_Object_array *)0x0) {
      if (0 < (int)__this_00->max_length) {
        index = 0;
        do {
          pSVar7 = __this_00;
          pIVar5 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          if (pIVar5 == (Il2CppObject *)0x0) goto label_03b55de7;
          bVar4 = System_String__op_Equality((System_String_o *)pIVar5[1].klass,b,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pSVar7 = (System_Object_array *)0x0;
            if ((System_Collections_Generic_List_object__o *)__this_03->m_Items[0] ==
                (System_Collections_Generic_List_object__o *)0x0) goto label_03b55de7;
            pIVar5 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_03->m_Items[0],index,
                                MethodInfo_GisketchToastManager_ToastItem_get_Item);
            piVar3 = &__this_02->max_length;
            __this_02->max_length = (il2cpp_array_size_t)pIVar5;
            il2cpp_runtime_helper_022b4080(piVar3);
            pSVar7 = (System_Object_array *)0x0;
            if ((System_Collections_Generic_List_object__o *)__this_03->m_Items[0] ==
                (System_Collections_Generic_List_object__o *)0x0) goto label_03b55de7;
            method_01 = (MethodInfo *)(ulong)index;
            System_Collections_Generic_List_object___RemoveAt
                      ((System_Collections_Generic_List_object__o *)__this_03->m_Items[0],index,MethodInfo_Void_RemoveAt);
            pSVar7 = __this_03;
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending
                      ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03,method_01);
            if (g_data_057a9d0a == '\0') {
              pSVar7 = (System_Object_array *)&MethodInfo_Int32_get_Count;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9d0a = '\x01';
            }
            if (__this_03->m_Items[0] == (Il2CppObject *)0x0) goto label_03b55de7;
            if (*(int *)&__this_03->m_Items[0][1].monitor != 0) {
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03,method_01);
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03,method_01);
              method_01 = (MethodInfo *)0x1;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03,1,method_00);
            }
            if (*(int *)((long)TypeInfo_GisketchMotion->m_Items + 0xc4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              cVar1 = *(char *)&TypeInfo_GisketchMotion->m_Items[0x13]->klass;
              pSVar7 = TypeInfo_GisketchMotion;
            }
            else {
              cVar1 = *(char *)&TypeInfo_GisketchMotion->m_Items[0x13]->klass;
              pSVar7 = TypeInfo_GisketchMotion;
            }
            TypeInfo_GisketchMotion = pSVar7;
            if (cVar1 != '\0') {
              if (*piVar3 == 0) goto label_03b55de7;
              pSVar6 = *(System_Object_array **)(*piVar3 + 0x18);
              if (*(int *)((long)pSVar7->m_Items + 0xc4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              method_01 = (MethodInfo *)0x0;
              t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit
                            ((Gisketch_Aottg2UI_Building_GisketchView_o *)pSVar6,(MethodInfo *)0x0);
              pSVar7 = pSVar6;
              if (t != (DG_Tweening_Tween_o *)0x0) {
                action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                DG_Tweening_TweenCallback___ctor();
                DG_Tweening_TweenSettingsExtensions__OnComplete_object_((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween)
                ;
                return;
              }
            }
            if (*piVar3 != 0) {
              pSVar7 = *(System_Object_array **)(*piVar3 + 0x20);
              if (g_data_057a9d23 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                g_data_057a9d23 = '\x01';
              }
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                        ((UnityEngine_RectTransform_o *)pSVar7,method_01);
              if (__this_03->m_Items[0] != (Il2CppObject *)0x0) {
                if (*(int *)&__this_03->m_Items[0][1].monitor != 0) {
                  return;
                }
                Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost
                          ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_03,method_01);
                return;
              }
            }
            goto label_03b55de7;
          }
          index = index + 1;
        } while ((int)index < (int)__this_00->max_length);
      }
      return;
    }
  }
label_03b55de7:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pSVar7->obj,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x3b55df0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass23_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass23_0$$<Close>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass23_0___Close_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x3b58400

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass23_0___Close_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass23_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *pGVar1;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  UnityEngine_Vector2_o value;
  System_Collections_Generic_List_AottgToastDefinition__o *extraout_RDX;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar3;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pGVar1 = (__this->fields).item;
  if ((pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) &&
     (pGVar3 = (__this->fields).__4__this, pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0)
     ) {
    __this = (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass23_0_o *)(pGVar1->fields).Slot;
    if (g_data_057a9d23 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      g_data_057a9d23 = '\x01';
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot((UnityEngine_RectTransform_o *)__this,method)
    ;
    pSVar2 = (pGVar3->fields)._items;
    if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      if ((pSVar2->fields)._size != 0) {
        return;
      }
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(pGVar3,method);
      return;
    }
  }
  fVar5 = (float)il2cpp_runtime_helper_022b2c90();
  pGVar3 = (__this->fields).__4__this;
  if (pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    pGVar1 = (__this->fields).item;
    fVar6 = SUB84(pGVar1,0);
    fVar7 = (float)((ulong)pGVar1 >> 0x20);
    value.fields.y = fVar5 * ((float)((ulong)__this[1].klass >> 0x20) - fVar7) + fVar7;
    value.fields.x = fVar5 * (SUB84(__this[1].klass,0) - fVar6) + fVar6;
    UnityEngine_RectTransform__set_anchoredPosition
              ((UnityEngine_RectTransform_o *)pGVar3,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    g_data_057a9d27 = '\x01';
  }
  (pGVar3->fields)._items = (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)method;
  il2cpp_runtime_helper_022b4080(&(pGVar3->fields)._items,method);
  pSVar4 = extraout_RDX;
  if (extraout_RDX == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar4 = (System_Collections_Generic_List_AottgToastDefinition__o *)**(long **)(TypeInfo_GisketchTheme + 0xb8);
  }
  (pGVar3->fields)._pending = pSVar4;
  il2cpp_runtime_helper_022b4080(&(pGVar3->fields)._pending,pSVar4);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass49_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass49_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass49_0_o* __this, const MethodInfo* method);
// 0x3b58190

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass49_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass49_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager.<>c__DisplayClass49_0$$<AnimateSlot>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass49_0___AnimateSlot_b__0 (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass49_0_o* __this, float value, const MethodInfo* method);
// 0x3b58470

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass49_0___AnimateSlot_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager___c__DisplayClass49_0_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector2_o value_00;
  long extraout_RDX;
  UnityEngine_RectTransform_o *__this_00;
  intptr_t iVar3;
  float fVar4;
  float fVar5;
  
  __this_00 = (__this->fields).rect;
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    UVar1 = (__this->fields).start.fields;
    UVar2 = (__this->fields).position.fields;
    fVar4 = UVar1.x;
    fVar5 = UVar1.y;
    value_00.fields.y = value * (UVar2.y - fVar5) + fVar5;
    value_00.fields.x = value * (UVar2.x - fVar4) + fVar4;
    UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    g_data_057a9d27 = '\x01';
  }
  __this_00[1].monitor = method;
  il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,method);
  iVar3 = extraout_RDX;
  if (extraout_RDX == 0) {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    iVar3 = **(intptr_t **)(TypeInfo_GisketchTheme + 0xb8);
  }
  __this_00[1].fields.m_CachedPtr = iVar3;
  il2cpp_runtime_helper_022b4080(&__this_00[1].fields,iVar3);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_Transform_o* layer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x3b53df0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_Transform_o *layer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  System_Collections_Generic_List_AottgToastDefinition__o *__this_01;
  
  if (g_data_057a9d01 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchToastManager_T);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgToastDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgToastDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ToastItem);
    g_data_057a9d01 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_ToastItem);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchToastManager_T);
  (__this->fields)._items = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items,__this_00);
  __this_01 = (System_Collections_Generic_List_AottgToastDefinition__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgToastDefinition);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgToastDefinition);
  (__this->fields)._pending = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._pending);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._layer = layer;
  il2cpp_runtime_helper_022b4080(&__this->fields,layer);
  (__this->fields)._context = context;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._context,context);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Show
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3b53ef0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Show
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_array *pGVar4;
  long lVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_array *values;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar8;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *list;
  System_Enum_o *__this_00;
  System_Enum_o SStack_48;
  undefined4 uStack_38;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *pGStack_30;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGStack_28;
  System_String_o *pSStack_20;
  
  pMVar8 = (MethodInfo *)toast;
  if (g_data_057a9d02 == '\0') {
    pSStack_20 = (System_String_o *)0x3b53f10;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_20 = (System_String_o *)0x3b53f1c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9d02 = '\x01';
  }
  if (toast == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    return;
  }
  pSStack_20 = (System_String_o *)0x3b53f34;
  pSVar7 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,pMVar8);
  pSStack_20 = (System_String_o *)0x3b53f42;
  bVar6 = System_String__IsNullOrEmpty((toast->fields).UpdateKey,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pSStack_20 = (System_String_o *)0x3b53fde;
    pMVar8 = (MethodInfo *)toast;
    list = __this;
    bVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdateVisible(__this,toast,pSVar7,in_RCX);
    if ((char)bVar6 == '\0') {
      pSStack_20 = (System_String_o *)0x3b53ff0;
      list = __this;
      bVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdatePending(__this,toast,pSVar7,in_RCX);
      if ((char)bVar6 != '\0') {
        return;
      }
      goto label_03b53f61;
    }
joined_r0x03b54078:
    if (g_data_057a9d0a == '\0') {
      list = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Int32_get_Count;
      pSStack_20 = (System_String_o *)0x3b5401c;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d0a = '\x01';
    }
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      if ((pSVar3->fields)._size == 0) {
        return;
      }
      pSStack_20 = (System_String_o *)0x3b5403a;
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,pMVar8);
      pSStack_20 = (System_String_o *)0x3b54042;
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,pMVar8);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,1,method_02);
      return;
    }
  }
  else {
    pSStack_20 = (System_String_o *)0x3b53f55;
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__RemoveVisible(__this,pSVar7,method_00);
    list = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._pending;
    pSStack_20 = (System_String_o *)0x3b53f61;
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__Remove
              ((System_Collections_Generic_List_AottgToastDefinition__o *)list,pSVar7,method_01);
label_03b53f61:
    lVar5 = MethodInfo_Void_Add;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      if ((pSVar3->fields)._size < 3) {
        pSStack_20 = (System_String_o *)0x3b54007;
        pMVar8 = (MethodInfo *)toast;
        list = __this;
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible(__this,toast,0,in_RCX);
        goto joined_r0x03b54078;
      }
      list = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._pending;
      if (list != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
        piVar1 = (int32_t *)((long)&(list->fields)._context + 4);
        *piVar1 = *piVar1 + 1;
        pGVar4 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)(list->fields)._layer;
        if (pGVar4 != (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)0x0) {
          uVar2 = *(uint *)&(list->fields)._context;
          if (uVar2 < (uint)pGVar4->max_length) {
            *(uint *)&(list->fields)._context = uVar2 + 1;
            list = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar4->m_Items + (int)uVar2);
            pGVar4->m_Items[(int)uVar2] = toast;
            pSStack_20 = (System_String_o *)0x3b53fc8;
            pMVar8 = (MethodInfo *)toast;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            pSStack_20 = (System_String_o *)0x3b54071;
            pMVar8 = (MethodInfo *)toast;
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)list,(Il2CppObject *)toast,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          goto joined_r0x03b54078;
        }
      }
    }
  }
  pSStack_20 = (System_String_o *)0x3b54081;
  il2cpp_runtime_helper_022b2c90();
  pGStack_30 = toast;
  pGStack_28 = __this;
  pSStack_20 = pSVar7;
  if (g_data_057a9d19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgToastVariant);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057a9d19 = '\x01';
  }
  if (list != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    bVar6 = System_String__IsNullOrEmpty((System_String_o *)(list->fields)._host,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      return;
    }
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    SStack_48.klass = TypeInfo_AottgToastVariant;
    SStack_48.monitor = (void *)0xffffffffffffffff;
    uStack_38 = *(undefined4 *)&(list->fields)._layer;
    __this_00 = &SStack_48;
    pSVar7 = System_Enum__ToString(__this_00,(MethodInfo *)0x0);
    if (values == (System_String_array *)0x0) goto label_03b5421e;
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar7;
      il2cpp_runtime_helper_022b4080(values->m_Items,pSVar7);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = "|";
        il2cpp_runtime_helper_022b4080(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = (System_String_o *)(list->fields)._context;
          il2cpp_runtime_helper_022b4080(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = "|";
            il2cpp_runtime_helper_022b4080(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = (System_String_o *)(list->fields)._items;
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = "|";
                il2cpp_runtime_helper_022b4080(values->m_Items + 5);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = (System_String_o *)(list->fields)._pending;
                  il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                  System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  __this_00 = TypeInfo_string;
  il2cpp_runtime_helper_022b2a40();
label_03b5421e:
  il2cpp_runtime_helper_022b2c90();
  if (__this_00 == (System_Enum_o *)0x0) {
    return;
  }
  System_String__IsNullOrEmpty((System_String_o *)__this_00[3].klass,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Close
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x3b54810

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool_conflict animate,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  int length_00;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar2;
  DG_Tweening_Tween_o *t;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  UnityEngine_Object_o *pUVar4;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_GameObject_o **ppUVar7;
  undefined4 in_register_00000034;
  MethodInfo *pMVar8;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar9;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  
  pMVar8 = (MethodInfo *)CONCAT44(in_register_00000034,animate);
  pGVar9 = __this;
  if (g_data_057a9d03 == '\0') {
    pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d03 = '\x01';
  }
  pSVar2 = (__this->fields)._pending;
  if (pSVar2 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      pMVar8 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,pMVar8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d10 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&(pGVar9->fields)._stackTween;
  t = (pGVar9->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  (pGVar9->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_helper_022b4080();
  pSVar3 = (pGVar9->fields)._items;
  if (pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d0c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d0c = '\x01';
    }
    pUVar4 = (UnityEngine_Object_o *)(__this_00->fields)._host;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pUVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(__this_00,pMVar8);
      (__this_00->fields)._host = pUVar6;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields)._host,pUVar6);
      return;
    }
    return;
  }
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  length_00 = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < length_00) {
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length_00,(MethodInfo *)0x0);
  }
  (pGVar9->fields)._expandedStackHeight = 0.0;
  *(undefined1 *)&(pGVar9->fields)._expanded = 0;
  (pGVar9->fields)._stack = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._stack);
  pUVar4 = (UnityEngine_Object_o *)(pGVar9->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  ppUVar7 = &(pGVar9->fields)._host;
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar4 = (UnityEngine_Object_o *)*ppUVar7;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar5 == '\0') {
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar4,(MethodInfo *)0x0);
  }
  else {
    UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
  }
  *ppUVar7 = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar7,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AddVisible
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, int32_t index, const MethodInfo* method);
// 0x3b54740

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  int length_00;
  UnityEngine_Object_o *pUVar2;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar4;
  DG_Tweening_Tween_o *t;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *pUVar6;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar7;
  UnityEngine_GameObject_o **ppUVar8;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar9;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  
  if (g_data_057a9d04 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    g_data_057a9d04 = '\x01';
  }
  if (g_data_057a9d0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d0c = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar7 = extraout_RDX;
  if ((char)bVar5 != '\0') {
    pUVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(__this,method_00);
    (__this->fields)._host = pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._host,pUVar6);
    pMVar7 = extraout_RDX_00;
  }
  pSVar3 = (__this->fields)._items;
  item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast(__this,toast,pMVar7);
  if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    System_Collections_Generic_List_object___Insert
              ((System_Collections_Generic_List_object__o *)pSVar3,index,(Il2CppObject *)item,MethodInfo_Void_Insert);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar9 = __this;
  if (g_data_057a9d03 == '\0') {
    pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d03 = '\x01';
  }
  pSVar4 = (__this->fields)._pending;
  if (pSVar4 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      toast = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,(MethodInfo *)toast);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d10 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&(pGVar9->fields)._stackTween;
  t = (pGVar9->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  (pGVar9->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_helper_022b4080();
  pSVar3 = (pGVar9->fields)._items;
  if (pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d0c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d0c = '\x01';
    }
    pUVar2 = (UnityEngine_Object_o *)(__this_00->fields)._host;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar7 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pUVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(__this_00,pMVar7);
      (__this_00->fields)._host = pUVar6;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields)._host,pUVar6);
      return;
    }
    return;
  }
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  length_00 = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < length_00) {
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length_00,(MethodInfo *)0x0);
  }
  (pGVar9->fields)._expandedStackHeight = 0.0;
  *(undefined1 *)&(pGVar9->fields)._expanded = 0;
  (pGVar9->fields)._stack = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._stack);
  pUVar2 = (UnityEngine_Object_o *)(pGVar9->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  ppUVar8 = &(pGVar9->fields)._host;
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar2 = (UnityEngine_Object_o *)*ppUVar8;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar5 == '\0') {
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar2,(MethodInfo *)0x0);
  }
  else {
    UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
  }
  *ppUVar8 = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar8,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$BuildToast
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3b54a50

Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
          Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  UnityEngine_GameObject_o *__this_00;
  char **ppcVar1;
  Il2CppClass *pIVar2;
  Il2CppClass *overlay;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  UnityEngine_Transform_o *parent;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  UnityEngine_RectTransform_o *pUVar4;
  Il2CppObject *pIVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *extraout_RAX;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  Il2CppClass *__this_02;
  
  if (g_data_057a9d05 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastBehaviour_AddComponent_GisketchToastBehavio);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchOverlayDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ToastItem);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildToast_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass21_0);
    il2cpp_runtime_helper_023445d0(&"toast");
    g_data_057a9d05 = '\x01';
  }
  pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass21_0);
  __this_02 = pIVar2;
  System_Object___ctor((Il2CppObject *)pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppClass *)0x0) {
    (pIVar2->_1).name = (char *)__this;
    il2cpp_runtime_helper_022b4080(&(pIVar2->_1).name,__this);
    ppcVar1 = &(pIVar2->_1).namespaze;
    (pIVar2->_1).namespaze = (char *)toast;
    il2cpp_runtime_helper_022b4080(ppcVar1);
    pIVar2 = (Il2CppClass *)
             Gisketch_Aottg2UI_Overlays_GisketchToastManager__Slot
                       ((__this->fields)._stack,96.0,(MethodInfo *)toast);
    overlay = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchOverlayDefinition);
    *(undefined2 *)&(overlay->_1).byval_arg.data = 0x101;
    __this_02 = overlay;
    System_Object___ctor((Il2CppObject *)overlay,(MethodInfo *)0x0);
    pMVar7 = "toast";
    if (overlay != (Il2CppClass *)0x0) {
      ((Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&(overlay->_1).name)->id =
           (System_String_o *)"toast";
      il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&(overlay->_1).name);
      *(undefined1 *)&(overlay->_1).byval_arg.data = 0;
      pGVar3 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode
                         ((Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)*ppcVar1,pMVar7);
      __this_02 = (Il2CppClass *)&(overlay->_1).this_arg.bits;
      *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)&(overlay->_1).this_arg.bits = pGVar3;
      il2cpp_runtime_helper_022b4080();
      if (pIVar2 != (Il2CppClass *)0x0) {
        parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar2,(MethodInfo *)0x0);
        context = (__this->fields)._context;
        if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar7 = (MethodInfo *)0x0;
        view = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                         ((Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)overlay,parent,context,
                          (MethodInfo *)0x0);
        pUVar4 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pIVar2,MethodInfo_RectTransform_GetComponent_RectTransform)
        ;
        __this_02 = pIVar2;
        if (view != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot
                    (__this,(view->fields)._Root_k__BackingField,96.0,method_00);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout
                    ((view->fields)._Root_k__BackingField,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire
                    (__this,(view->fields)._Root_k__BackingField,
                     (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)*ppcVar1,pMVar7);
          __this_00 = (view->fields)._Root_k__BackingField;
          __this_02 = (Il2CppClass *)0x0;
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            pIVar5 = UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_GisketchToastBehaviour_AddComponent_GisketchToastBehavio);
            pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
            __this_02 = pIVar2;
            System_Action___ctor();
            if (pIVar5 != (Il2CppObject *)0x0) {
              pIVar5[2].klass = pIVar2;
              il2cpp_runtime_helper_022b4080(pIVar5 + 2);
              *(undefined4 *)&pIVar5[3].klass = 0x40a00000;
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar7 = (MethodInfo *)0x0;
              Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(view,(MethodInfo *)0x0);
              pSVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key
                                 ((Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)*ppcVar1,pMVar7);
              __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_ToastItem);
              System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
              (__this_01->fields).Key = pSVar6;
              il2cpp_runtime_helper_022b4080(&__this_01->fields,pSVar6);
              (__this_01->fields).View = view;
              il2cpp_runtime_helper_022b4080(&(__this_01->fields).View,view);
              (__this_01->fields).Slot = pUVar4;
              il2cpp_runtime_helper_022b4080(&(__this_01->fields).Slot,pUVar4);
              (__this_01->fields).Height = 96.0;
              return __this_01;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Wire
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_GameObject_o* root, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3b557a0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Wire
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_GameObject_o *root,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_UI_Button_o *pUVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  System_Threading_CancellationTokenSource_o *extraout_RDX_01;
  UnityEngine_UI_Button_o *pUVar5;
  UnityEngine_UI_Button_o *__this_00;
  int32_t iVar6;
  
  if (g_data_057a9d06 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CloseAll);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Wire_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"toast-close-all");
    il2cpp_runtime_helper_023445d0(&"toast-close");
    g_data_057a9d06 = '\x01';
  }
  pUVar3 = (UnityEngine_UI_Button_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  pUVar5 = (UnityEngine_UI_Button_o *)0x0;
  __this_00 = pUVar3;
  System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
  if (pUVar3 == (UnityEngine_UI_Button_o *)0x0) goto label_03b55989;
  (pUVar3->fields).m_CachedPtr = (intptr_t)__this;
  il2cpp_runtime_helper_022b4080(&pUVar3->fields,__this);
  (pUVar3->fields).m_CancellationTokenSource = (System_Threading_CancellationTokenSource_o *)toast;
  il2cpp_runtime_helper_022b4080(&(pUVar3->fields).m_CancellationTokenSource,toast);
  pUVar4 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button(root,"toast-close",method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_UI_Button_o *)0x0;
  __this_00 = pUVar4;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_01 = extraout_RDX;
  if ((char)bVar2 != '\0') {
    if (pUVar4 == (UnityEngine_UI_Button_o *)0x0) goto label_03b55989;
    pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar4->fields).m_CanvasGroupCache;
    pUVar4 = (UnityEngine_UI_Button_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    method = (MethodInfo *)0x0;
    __this_00 = pUVar4;
    UnityEngine_Events_UnityAction___ctor();
    pUVar5 = pUVar3;
    if (pUVar1 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_03b55989;
    UnityEngine_Events_UnityEvent__AddListener
              (pUVar1,(UnityEngine_Events_UnityAction_o *)pUVar4,(MethodInfo *)0x0);
    method_01 = extraout_RDX_00;
  }
  pUVar3 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button(root,"toast-close-all",method_01);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar5 = (UnityEngine_UI_Button_o *)0x0;
  __this_00 = pUVar3;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
    pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar3->fields).m_CanvasGroupCache;
    pUVar3 = (UnityEngine_UI_Button_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    method = (MethodInfo *)0x0;
    __this_00 = pUVar3;
    UnityEngine_Events_UnityAction___ctor();
    pUVar5 = (UnityEngine_UI_Button_o *)__this;
    if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener
                (pUVar1,(UnityEngine_Events_UnityAction_o *)pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
label_03b55989:
  iVar6 = il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_CachedPtr = (intptr_t)pUVar5;
  il2cpp_runtime_helper_022b4080(&__this_00->fields,pUVar5);
  (__this_00->fields).m_CancellationTokenSource = extraout_RDX_01;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).m_CancellationTokenSource,extraout_RDX_01);
  *(MethodInfo **)&(__this_00->fields).m_EnableCalled = method;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).m_EnableCalled,method);
  (__this_00->fields).m_Navigation.fields.m_Mode = iVar6;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Close
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3b55af0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Close_3a55af0
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
               Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  char cVar1;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar4;
  System_String_o *b;
  Il2CppObject *pIVar5;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar6;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *method_00;
  uint index;
  MethodInfo *pMVar7;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *slot;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o **ppGVar8;
  
  if (g_data_057a9d07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Close_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    g_data_057a9d07 = '\x01';
  }
  pGVar4 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  slot = pGVar4;
  System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
  if (pGVar4 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    (pGVar4->fields)._layer = (UnityEngine_Transform_o *)__this;
    pMVar7 = (MethodInfo *)__this;
    il2cpp_runtime_helper_022b4080(&pGVar4->fields);
    __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
    b = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,pMVar7);
    slot = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)toast;
    if (g_data_057a9d0f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      slot = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d0f = '\x01';
    }
    if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
      if (0 < *(int *)&(__this_00->fields)._context) {
        index = 0;
        do {
          slot = __this_00;
          pIVar5 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          if (pIVar5 == (Il2CppObject *)0x0) goto label_03b55de7;
          bVar3 = System_String__op_Equality((System_String_o *)pIVar5[1].klass,b,(MethodInfo *)0x0);
          if ((char)bVar3 != '\0') {
            pSVar2 = (__this->fields)._items;
            slot = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
            if (pSVar2 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
            goto label_03b55de7;
            pGVar6 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)
                     System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
            ppGVar8 = &(pGVar4->fields)._context;
            (pGVar4->fields)._context = pGVar6;
            il2cpp_runtime_helper_022b4080(ppGVar8);
            pSVar2 = (__this->fields)._items;
            slot = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
            if (pSVar2 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
            goto label_03b55de7;
            pMVar7 = (MethodInfo *)(ulong)index;
            System_Collections_Generic_List_object___RemoveAt
                      ((System_Collections_Generic_List_object__o *)pSVar2,index,MethodInfo_Void_RemoveAt);
            slot = __this;
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending(__this,pMVar7);
            if (g_data_057a9d0a == '\0') {
              slot = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Int32_get_Count;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9d0a = '\x01';
            }
            pSVar2 = (__this->fields)._items;
            if (pSVar2 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
            goto label_03b55de7;
            if ((pSVar2->fields)._size != 0) {
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,pMVar7);
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,pMVar7);
              pMVar7 = (MethodInfo *)0x1;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,1,method_00);
            }
            if (*(int *)((long)&TypeInfo_GisketchMotion[2].fields._stackTween + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              cVar1 = *(char *)&(TypeInfo_GisketchMotion[2].fields._context)->klass;
              slot = TypeInfo_GisketchMotion;
            }
            else {
              cVar1 = *(char *)&(TypeInfo_GisketchMotion[2].fields._context)->klass;
              slot = TypeInfo_GisketchMotion;
            }
            TypeInfo_GisketchMotion = slot;
            if (cVar1 != '\0') {
              if (*ppGVar8 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_03b55de7;
              pGVar4 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)((*ppGVar8)->fields).Theme;
              if (*(int *)((long)&slot[2].fields._stackTween + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar7 = (MethodInfo *)0x0;
              t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit
                            ((Gisketch_Aottg2UI_Building_GisketchView_o *)pGVar4,(MethodInfo *)0x0);
              slot = pGVar4;
              if (t != (DG_Tweening_Tween_o *)0x0) {
                action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                DG_Tweening_TweenCallback___ctor();
                DG_Tweening_TweenSettingsExtensions__OnComplete_object_((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween)
                ;
                return;
              }
            }
            if (*ppGVar8 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
              slot = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)((*ppGVar8)->fields).Localizer;
              if (g_data_057a9d23 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                g_data_057a9d23 = '\x01';
              }
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                        ((UnityEngine_RectTransform_o *)slot,pMVar7);
              pSVar2 = (__this->fields)._items;
              if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
                if ((pSVar2->fields)._size != 0) {
                  return;
                }
                Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,pMVar7);
                return;
              }
            }
            goto label_03b55de7;
          }
          index = index + 1;
        } while ((int)index < *(int *)&(__this_00->fields)._context);
      }
      return;
    }
  }
label_03b55de7:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)slot,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$CloseAll
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__CloseAll (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3b55fd0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__CloseAll
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  long *plVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_05;
  undefined1 auVar5 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  Il2CppObject *pIVar8;
  undefined1 local_50 [16];
  Il2CppObject *local_40;
  Il2CppRGCTXData *pIStack_38;
  
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,method);
  __this_05 = __this;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending(__this,method);
  if (g_data_057a9d0a == '\0') {
    __this_05 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0a = '\x01';
  }
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar1->fields)._size != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,method);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,method);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,0,method_00);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_38 = (Il2CppRGCTXData *)__this;
  if (g_data_057a9d08 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastBehaviour_GetComponent_GisketchToastBehavio);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Overlays_GisketchT);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d08 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppType *)0x0;
  pIVar8 = (Il2CppObject *)0x0;
  *(char *)&(__this_05->fields)._expanded = (char)method;
  pSVar1 = (__this_05->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
               (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Overlays_GisketchT);
    pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_50._0_8_;
    pIVar7 = (Il2CppType *)local_50._8_8_;
    pIVar8 = local_40;
    while (__this_01.fields._8_8_ = pIVar7,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6,
          __this_01.fields._current = pIVar8,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff90), (char)bVar3 != '\0') {
      if (pIVar8 == (Il2CppObject *)0x0) {
label_03b561a9:
        il2cpp_runtime_helper_022b2c90();
label_03b561ae:
        il2cpp_runtime_helper_022b2c90();
        goto label_03b561b3;
      }
      if (pIVar8[1].monitor == (void *)0x0) goto label_03b561ae;
      __this_00 = *(UnityEngine_GameObject_o **)((long)pIVar8[1].monitor + 0x18);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_03b561a9;
      }
      x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_GisketchToastBehaviour_GetComponent_GisketchToastBehavio);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (x == (UnityEngine_Object_o *)0x0) {
label_03b561b3:
          il2cpp_runtime_helper_022b2c90();
          goto label_03b561b8;
        }
        *(char *)((long)&x[2].klass + 4) = (char)method;
      }
    }
    __this_02.fields._8_8_ = pIVar7;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_02.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
    method_01 = extraout_RDX;
label_03b56186:
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this_05,1,method_01);
    return;
  }
label_03b561b8:
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_03.fields._current = pIVar8;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
    method_01 = extraout_RDX_00;
    if (lVar2 == 0) goto label_03b56186;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
  __this_04.fields._current = pIVar8;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff90);
  _Unwind_Resume(auVar5._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetExpanded
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetExpanded (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool expanded, const MethodInfo* method);
// 0x3b56030

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetExpanded
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool_conflict expanded,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  long *plVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  Il2CppObject *pIVar7;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057a9d08 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastBehaviour_GetComponent_GisketchToastBehavio);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Overlays_GisketchT);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d08 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  *(char *)&(__this->fields)._expanded = (char)expanded;
  __this_00 = (__this->fields)._items;
  if (__this_00 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Overlays_GisketchT);
    pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar6 = (Il2CppType *)auStack_48._8_8_;
    pIVar7 = pIStack_38;
    while (__this_02.fields._8_8_ = pIVar6,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar5,
          __this_02.fields._current = pIVar7,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98), (char)bVar2 != '\0') {
      if (pIVar7 == (Il2CppObject *)0x0) {
label_03b561a9:
        il2cpp_runtime_helper_022b2c90();
label_03b561ae:
        il2cpp_runtime_helper_022b2c90();
        goto label_03b561b3;
      }
      if (pIVar7[1].monitor == (void *)0x0) goto label_03b561ae;
      __this_01 = *(UnityEngine_GameObject_o **)((long)pIVar7[1].monitor + 0x18);
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_03b561a9;
      }
      x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(__this_01,MethodInfo_GisketchToastBehaviour_GetComponent_GisketchToastBehavio);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (x == (UnityEngine_Object_o *)0x0) {
label_03b561b3:
          il2cpp_runtime_helper_022b2c90();
          goto label_03b561b8;
        }
        *(char *)((long)&x[2].klass + 4) = (char)expanded;
      }
    }
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    method_00 = extraout_RDX;
label_03b56186:
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,1,method_00);
    return;
  }
label_03b561b8:
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar6;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
    __this_04.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    method_00 = extraout_RDX_00;
    if (lVar1 == 0) goto label_03b56186;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._8_8_ = pIVar6;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
  __this_05.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar4._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$PromotePending
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3b55ea0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar2;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  MethodInfo *in_RCX;
  
  if (g_data_057a9d09 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgToastDefinition_get_Item);
    g_data_057a9d09 = '\x01';
  }
  pSVar1 = (__this->fields)._items;
  while (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if (2 < (pSVar1->fields)._size) {
      return;
    }
    pSVar2 = (__this->fields)._pending;
    if (pSVar2 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) break;
    if ((pSVar2->fields)._size < 1) {
      return;
    }
    toast = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
            System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar2,0,MethodInfo_AottgToastDefinition_get_Item);
    pSVar2 = (__this->fields)._pending;
    if (pSVar2 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) break;
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar2,0,MethodInfo_Void_RemoveAt);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible(__this,toast,0,in_RCX);
    pSVar1 = (__this->fields)._items;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ApplyCurrentLayout
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x3b543d0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyCurrentLayout
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool_conflict animate,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint index;
  int32_t length;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar3;
  UnityEngine_Object_o *pUVar4;
  DG_Tweening_Tween_o *t;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  int32_t index_00;
  MethodInfo *method_00;
  MethodInfo *b;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  int iVar11;
  MethodInfo *pMVar12;
  MethodInfo *pMVar13;
  UnityEngine_GameObject_o **ppUVar14;
  undefined4 in_register_00000034;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar15;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar16;
  
  pMVar10 = (MethodInfo *)CONCAT44(in_register_00000034,animate);
  pGVar15 = __this;
  if (g_data_057a9d0a == '\0') {
    pGVar15 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0a = '\x01';
  }
  pSVar2 = (__this->fields)._items;
  if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar2->fields)._size == 0) {
      return;
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(__this,pMVar10);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(__this,pMVar10);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(__this,animate & 0xff,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar10;
  if (g_data_057a9d25 == '\0') {
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Void_set_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d25 = '\x01';
    pSVar3 = (pGVar15->fields)._pending;
  }
  else {
    pSVar3 = (pGVar15->fields)._pending;
    pGVar16 = pGVar15;
  }
  if (g_data_057a9d26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_AottgToastDefinition_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d26 = '\x01';
  }
  if (pSVar3 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    pMVar12 = (MethodInfo *)0x0;
    if (0 < (pSVar3->fields)._size) {
      do {
        iVar11 = (int)pMVar12;
        pGVar6 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,iVar11,MethodInfo_AottgToastDefinition_get_Item);
        pSVar7 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(pGVar6,pMVar12);
        pMVar12 = b;
        bVar5 = System_String__op_Equality(pSVar7,(System_String_o *)b,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar3 = (pGVar15->fields)._pending;
          pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
          if (pSVar3 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
            System_Collections_Generic_List_object___set_Item
                      ((System_Collections_Generic_List_object__o *)pSVar3,iVar11,(Il2CppObject *)pMVar10,
                       MethodInfo_Void_set_Item);
            return;
          }
          goto label_03b5453e;
        }
        pMVar12 = (MethodInfo *)(ulong)(iVar11 + 1U);
      } while ((int)(iVar11 + 1U) < (pSVar3->fields)._size);
    }
    return;
  }
label_03b5453e:
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar12;
  if (g_data_057a9d0d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0d = '\x01';
    pGVar15 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar16->fields)._items;
  }
  else {
    pGVar15 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar16->fields)._items;
    __this_00 = pGVar16;
  }
  if (g_data_057a9d0f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0f = '\x01';
  }
  if (pGVar15 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    if (0 < *(int *)&(pGVar15->fields)._context) {
      pMVar13 = (MethodInfo *)0x0;
      do {
        iVar11 = (int)pMVar13;
        pMVar10 = pMVar13;
        __this_00 = pGVar15;
        pIVar8 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pGVar15,iVar11,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if (pIVar8 == (Il2CppObject *)0x0) goto label_03b5467f;
        pMVar10 = pMVar12;
        bVar5 = System_String__op_Equality
                          ((System_String_o *)pIVar8[1].klass,(System_String_o *)pMVar12,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar2 = (pGVar16->fields)._items;
          __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
          if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
            pMVar10 = pMVar13;
            pIVar8 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,iVar11,MethodInfo_GisketchToastManager_ToastItem_get_Item);
            __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar16->fields)._items;
            if ((__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) &&
               (System_Collections_Generic_List_object___RemoveAt
                          ((System_Collections_Generic_List_object__o *)__this_00,iVar11,MethodInfo_Void_RemoveAt),
               pMVar10 = pMVar13, pIVar8 != (Il2CppObject *)0x0)) {
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                        ((UnityEngine_RectTransform_o *)pIVar8[2].klass,pMVar13);
              return;
            }
          }
          goto label_03b5467f;
        }
        pMVar13 = (MethodInfo *)(ulong)(iVar11 + 1U);
      } while ((int)(iVar11 + 1U) < *(int *)&(pGVar15->fields)._context);
    }
    return;
  }
label_03b5467f:
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar10;
  pGVar15 = __this_00;
  if (g_data_057a9d0e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar15 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_AottgToastDefinition_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0e = '\x01';
  }
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    index = *(uint *)&(__this_00->fields)._context;
    while (index = index - 1, -1 < (int)index) {
      pMVar12 = (MethodInfo *)(ulong)index;
      pGVar6 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_AottgToastDefinition_get_Item);
      pSVar7 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(pGVar6,pMVar12);
      bVar5 = System_String__op_Equality(pSVar7,(System_String_o *)pMVar10,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_Void_RemoveAt);
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d04 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    g_data_057a9d04 = '\x01';
  }
  if (g_data_057a9d0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d0c = '\x01';
  }
  pUVar4 = (UnityEngine_Object_o *)(pGVar15->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar10 = extraout_RDX;
  if ((char)bVar5 != '\0') {
    pUVar9 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(pGVar15,pMVar13);
    (pGVar15->fields)._host = pUVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar15->fields)._host,pUVar9);
    pMVar10 = extraout_RDX_00;
  }
  pSVar2 = (pGVar15->fields)._items;
  item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast
                   (pGVar15,(Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pMVar12,pMVar10);
  if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    System_Collections_Generic_List_object___Insert
              ((System_Collections_Generic_List_object__o *)pSVar2,index_00,(Il2CppObject *)item,MethodInfo_Void_Insert)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar16 = pGVar15;
  if (g_data_057a9d03 == '\0') {
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d03 = '\x01';
  }
  pSVar3 = (pGVar15->fields)._pending;
  if (pSVar3 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      pMVar12 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(pGVar15,pMVar12);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d10 = '\x01';
  }
  pGVar15 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&(pGVar16->fields)._stackTween;
  t = (pGVar16->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  (pGVar16->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_helper_022b4080();
  pSVar2 = (pGVar16->fields)._items;
  if (pSVar2 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d0c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d0c = '\x01';
    }
    pUVar4 = (UnityEngine_Object_o *)(pGVar15->fields)._host;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar10 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar9 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(pGVar15,pMVar10);
    (pGVar15->fields)._host = pUVar9;
    il2cpp_runtime_helper_022b4080(&(pGVar15->fields)._host,pUVar9);
    return;
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar11 = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (0 < iVar11) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar11,(MethodInfo *)0x0);
  }
  (pGVar16->fields)._expandedStackHeight = 0.0;
  *(undefined1 *)&(pGVar16->fields)._expanded = 0;
  (pGVar16->fields)._stack = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(pGVar16->fields)._stack);
  pUVar4 = (UnityEngine_Object_o *)(pGVar16->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    ppUVar14 = &(pGVar16->fields)._host;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)*ppUVar14;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar5 == '\0') {
      UnityEngine_Object__DestroyImmediate_4e01e00(pUVar4,(MethodInfo *)0x0);
    }
    else {
      UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
    }
    *ppUVar14 = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar14,0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SettleVisibleLayouts
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3b569c0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *root;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar5;
  Il2CppType *pIVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (g_data_057a9d0b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Overlays_GisketchT);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d0b = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar6 = (Il2CppType *)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._items;
  if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
label_03b56b33:
    auVar4 = il2cpp_runtime_helper_022b2c90();
    if (auVar4._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar6;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
      __this_03.fields._current = pIVar7;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_04.fields._8_8_ = pIVar6;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
    __this_04.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    _Unwind_Resume(auVar4._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Overlays_GisketchT);
  pSVar5 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
  pIVar6 = (Il2CppType *)local_48._8_8_;
  do {
    do {
      pIVar8 = local_38;
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
      __this_01.fields._current = pIVar8;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar5;
        __this_02.fields._current = pIVar8;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
        return;
      }
      if (pIVar8 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        pIVar7 = pIVar8;
label_03b56b29:
        il2cpp_runtime_helper_022b2c90();
        goto label_03b56b2e;
      }
      pIVar7 = pIVar8;
      if (pIVar8[1].monitor == (void *)0x0) goto label_03b56b29;
      x = *(UnityEngine_Object_o **)((long)pIVar8[1].monitor + 0x18);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      local_38 = pIVar7;
    } while ((char)bVar2 == '\0');
    if (pIVar8[1].monitor == (void *)0x0) {
label_03b56b2e:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b56b33;
    }
    root = *(UnityEngine_GameObject_o **)((long)pIVar8[1].monitor + 0x18);
    if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
    local_38 = pIVar7;
  } while( true );
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$EnsureHost
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__EnsureHost (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3b549d0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__EnsureHost
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *method_00;
  
  if (g_data_057a9d0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d0c = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pUVar2 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(__this,method_00);
    (__this->fields)._host = pUVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._host,pUVar2);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$RemoveVisible
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RemoveVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, System_String_o* key, const MethodInfo* method);
// 0x3b54550

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RemoveVisible
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,System_String_o *key,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint index;
  int32_t length;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  UnityEngine_Object_o *pUVar3;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar4;
  DG_Tweening_Tween_o *t;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  System_String_o *a;
  UnityEngine_GameObject_o *pUVar7;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  int32_t index_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  int iVar9;
  MethodInfo *pMVar10;
  UnityEngine_GameObject_o **ppUVar11;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar12;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar13;
  
  pMVar8 = (MethodInfo *)key;
  if (g_data_057a9d0d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    pGVar13 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0d = '\x01';
    pGVar12 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
  }
  else {
    pGVar12 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
    pGVar13 = __this;
  }
  if (g_data_057a9d0f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar13 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0f = '\x01';
  }
  if (pGVar12 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    if (0 < *(int *)&(pGVar12->fields)._context) {
      pMVar10 = (MethodInfo *)0x0;
      do {
        iVar9 = (int)pMVar10;
        pMVar8 = pMVar10;
        pGVar13 = pGVar12;
        pIVar6 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pGVar12,iVar9,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if (pIVar6 == (Il2CppObject *)0x0) goto label_03b5467f;
        pMVar8 = (MethodInfo *)key;
        bVar5 = System_String__op_Equality((System_String_o *)pIVar6[1].klass,key,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar2 = (__this->fields)._items;
          pGVar13 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
          if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
            pMVar8 = pMVar10;
            pIVar6 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,iVar9,MethodInfo_GisketchToastManager_ToastItem_get_Item);
            pGVar13 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
            if ((pGVar13 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) &&
               (System_Collections_Generic_List_object___RemoveAt
                          ((System_Collections_Generic_List_object__o *)pGVar13,iVar9,MethodInfo_Void_RemoveAt),
               pMVar8 = pMVar10, pIVar6 != (Il2CppObject *)0x0)) {
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                        ((UnityEngine_RectTransform_o *)pIVar6[2].klass,pMVar10);
              return;
            }
          }
          goto label_03b5467f;
        }
        pMVar10 = (MethodInfo *)(ulong)(iVar9 + 1U);
      } while ((int)(iVar9 + 1U) < *(int *)&(pGVar12->fields)._context);
    }
    return;
  }
label_03b5467f:
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar8;
  pGVar12 = pGVar13;
  if (g_data_057a9d0e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar12 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_AottgToastDefinition_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0e = '\x01';
  }
  if (pGVar13 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    index = *(uint *)&(pGVar13->fields)._context;
    while (index = index - 1, -1 < (int)index) {
      pMVar10 = (MethodInfo *)(ulong)index;
      toast = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pGVar13,index,MethodInfo_AottgToastDefinition_get_Item);
      a = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,pMVar10);
      bVar5 = System_String__op_Equality(a,(System_String_o *)pMVar8,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pGVar13,index,MethodInfo_Void_RemoveAt);
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d04 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    g_data_057a9d04 = '\x01';
  }
  if (g_data_057a9d0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d0c = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(pGVar12->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar8 = extraout_RDX;
  if ((char)bVar5 != '\0') {
    pUVar7 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(pGVar12,method_00);
    (pGVar12->fields)._host = pUVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar12->fields)._host,pUVar7);
    pMVar8 = extraout_RDX_00;
  }
  pSVar2 = (pGVar12->fields)._items;
  item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast
                   (pGVar12,(Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pMVar10,pMVar8);
  if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    System_Collections_Generic_List_object___Insert
              ((System_Collections_Generic_List_object__o *)pSVar2,index_00,(Il2CppObject *)item,MethodInfo_Void_Insert)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar13 = pGVar12;
  if (g_data_057a9d03 == '\0') {
    pGVar13 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d03 = '\x01';
  }
  pSVar4 = (pGVar12->fields)._pending;
  if (pSVar4 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      pMVar10 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(pGVar12,pMVar10);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d10 = '\x01';
  }
  pGVar12 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&(pGVar13->fields)._stackTween;
  t = (pGVar13->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  (pGVar13->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_helper_022b4080();
  pSVar2 = (pGVar13->fields)._items;
  if (pSVar2 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d0c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d0c = '\x01';
    }
    pUVar3 = (UnityEngine_Object_o *)(pGVar12->fields)._host;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar8 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pUVar7 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(pGVar12,pMVar8);
    (pGVar12->fields)._host = pUVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar12->fields)._host,pUVar7);
    return;
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar9 = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (0 < iVar9) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar9,(MethodInfo *)0x0);
  }
  (pGVar13->fields)._expandedStackHeight = 0.0;
  *(undefined1 *)&(pGVar13->fields)._expanded = 0;
  (pGVar13->fields)._stack = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(pGVar13->fields)._stack);
  pUVar3 = (UnityEngine_Object_o *)(pGVar13->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    ppUVar11 = &(pGVar13->fields)._host;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar3 = (UnityEngine_Object_o *)*ppUVar11;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar5 == '\0') {
      UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
    }
    else {
      UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
    }
    *ppUVar11 = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar11,0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Remove
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Remove (System_Collections_Generic_List_AottgToastDefinition__o* list, System_String_o* key, const MethodInfo* method);
// 0x3b54690

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__Remove
               (System_Collections_Generic_List_AottgToastDefinition__o *list,System_String_o *key,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint index;
  int32_t length;
  int length_00;
  UnityEngine_Object_o *pUVar2;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar4;
  DG_Tweening_Tween_o *t;
  bool_conflict bVar5;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  System_String_o *a;
  UnityEngine_GameObject_o *pUVar6;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  int32_t index_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  UnityEngine_GameObject_o **ppUVar7;
  MethodInfo *pMVar8;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar9;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar10;
  
  pMVar8 = (MethodInfo *)key;
  pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)list;
  if (g_data_057a9d0e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_AottgToastDefinition_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0e = '\x01';
  }
  if (list != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    index = (list->fields)._size;
    while (index = index - 1, -1 < (int)index) {
      pMVar8 = (MethodInfo *)(ulong)index;
      toast = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)list,index,MethodInfo_AottgToastDefinition_get_Item);
      a = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,pMVar8);
      bVar5 = System_String__op_Equality(a,key,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)list,index,MethodInfo_Void_RemoveAt);
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d04 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    g_data_057a9d04 = '\x01';
  }
  if (g_data_057a9d0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d0c = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(pGVar9->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((char)bVar5 != '\0') {
    pUVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(pGVar9,method_01);
    (pGVar9->fields)._host = pUVar6;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._host,pUVar6);
    method_00 = extraout_RDX_00;
  }
  pSVar3 = (pGVar9->fields)._items;
  item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast
                   (pGVar9,(Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pMVar8,method_00);
  if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    System_Collections_Generic_List_object___Insert
              ((System_Collections_Generic_List_object__o *)pSVar3,index_00,(Il2CppObject *)item,MethodInfo_Void_Insert)
    ;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar10 = pGVar9;
  if (g_data_057a9d03 == '\0') {
    pGVar10 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d03 = '\x01';
  }
  pSVar4 = (pGVar9->fields)._pending;
  if (pSVar4 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < length) {
      pMVar8 = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(pGVar9,pMVar8);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d10 = '\x01';
  }
  pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&(pGVar10->fields)._stackTween;
  t = (pGVar10->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  (pGVar10->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_helper_022b4080();
  pSVar3 = (pGVar10->fields)._items;
  if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length_00 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length_00) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length_00,(MethodInfo *)0x0);
    }
    (pGVar10->fields)._expandedStackHeight = 0.0;
    *(undefined1 *)&(pGVar10->fields)._expanded = 0;
    (pGVar10->fields)._stack = (UnityEngine_RectTransform_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(pGVar10->fields)._stack);
    pUVar2 = (UnityEngine_Object_o *)(pGVar10->fields)._host;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    ppUVar7 = &(pGVar10->fields)._host;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Object_o *)*ppUVar7;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar5 == '\0') {
      UnityEngine_Object__DestroyImmediate_4e01e00(pUVar2,(MethodInfo *)0x0);
    }
    else {
      UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
    }
    *ppUVar7 = (UnityEngine_GameObject_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar7,0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d0c = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(pGVar9->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    pUVar6 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(pGVar9,pMVar8);
    (pGVar9->fields)._host = pUVar6;
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._host,pUVar6);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf (System_Collections_Generic_List_GisketchToastManager_ToastItem__o* list, System_String_o* key, const MethodInfo* method);
// 0x3b55e00

int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf
                  (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *list,
                  System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar4;
  MethodInfo *in_RCX;
  int index;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this;
  int32_t iVar5;
  
  __this = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)list;
  if (g_data_057a9d0f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0f = '\x01';
  }
  if (list != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    iVar5 = -1;
    if (0 < (list->fields)._size) {
      index = 0;
      do {
        __this = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)list;
        pIVar3 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)list,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if (pIVar3 == (Il2CppObject *)0x0) goto code_r0x03b55e8e;
        bVar2 = System_String__op_Equality((System_String_o *)pIVar3[1].klass,key,(MethodInfo *)0x0);
        iVar5 = index;
      } while (((char)bVar2 == '\0') && (index = index + 1, iVar5 = -1, index < (list->fields)._size));
    }
    return iVar5;
  }
code_r0x03b55e8e:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d09 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgToastDefinition_get_Item);
    g_data_057a9d09 = '\x01';
  }
  pSVar4 = (__this->fields)._items;
  while (pSVar4 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if (2 < (pSVar4->fields)._size) goto label_03b55f61;
    pSVar1 = (__this->fields)._pending;
    if (pSVar1 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) break;
    if ((pSVar1->fields)._size < 1) goto label_03b55f61;
    toast = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
            System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_AottgToastDefinition_get_Item);
    pSVar1 = (__this->fields)._pending;
    if (pSVar1 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) break;
    System_Collections_Generic_List_object___RemoveAt
              ((System_Collections_Generic_List_object__o *)pSVar1,0,MethodInfo_Void_RemoveAt);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__AddVisible(__this,toast,0,in_RCX);
    pSVar4 = (__this->fields)._items;
  }
  pSVar4 = (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)il2cpp_runtime_helper_022b2c90();
label_03b55f61:
  return (int32_t)pSVar4;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$DestroyHost
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3b54870

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  DG_Tweening_Tween_o *t;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  UnityEngine_Object_o *pUVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_GameObject_o **ppUVar6;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  
  if (g_data_057a9d10 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d10 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&(__this->fields)._stackTween;
  t = (__this->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  (__this->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_helper_022b4080();
  pSVar2 = (__this->fields)._items;
  if (pSVar2 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d0c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d0c = '\x01';
    }
    pUVar3 = (UnityEngine_Object_o *)(__this_00->fields)._host;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pUVar5 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(__this_00,method_00);
      (__this_00->fields)._host = pUVar5;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields)._host,pUVar5);
      return;
    }
    return;
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  }
  (__this->fields)._expandedStackHeight = 0.0;
  *(undefined1 *)&(__this->fields)._expanded = 0;
  (__this->fields)._stack = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._stack);
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  ppUVar6 = &(__this->fields)._host;
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Object_o *)*ppUVar6;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar4 == '\0') {
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
  }
  else {
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
  }
  *ppUVar6 = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar6,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Host
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3b56bf0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_Type_array *pSVar4;
  System_Type_o *pSVar5;
  long lVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Transform_o *parent;
  Il2CppObject *pIVar11;
  Il2CppClass *pIVar12;
  UnityEngine_Object_o *pUVar13;
  undefined4 extraout_var;
  UnityEngine_GameObject_o *extraout_RAX;
  UnityEngine_GameObject_o *extraout_RAX_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar14;
  undefined4 extraout_var_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar15;
  UnityEngine_GameObject_Fields UVar16;
  UnityEngine_GameObject_o *pUVar17;
  UnityEngine_GameObject_Fields UVar18;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *extraout_RAX_01;
  System_String_o *str1;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar19;
  System_String_o **__this_01;
  MethodInfo *method_00;
  
  if (g_data_057a9d11 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastStackHover_AddComponent_GisketchToastStackH);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetExpanded);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Toast Host");
    il2cpp_runtime_helper_023445d0(&"AoTTG Toast Stack");
    g_data_057a9d11 = '\x01';
  }
  pSVar4 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar4 == (System_Type_array *)0x0) {
label_03b57091:
    il2cpp_runtime_helper_022b2c90();
label_03b57096:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar5 == (System_Type_o *)0x0) || (lVar6 = il2cpp_runtime_helper_023051f0(pSVar5), lVar6 != 0)) {
    if ((int)pSVar4->max_length != 0) {
      pSVar4->m_Items[0] = pSVar5;
      il2cpp_runtime_helper_022b4080(pSVar4->m_Items,pSVar5);
      pUVar7 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar7,"AoTTG Toast Host",pSVar4,(MethodInfo *)0x0);
      if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar8 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
         pUVar8 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar8,(__this->fields)._layer,0,(MethodInfo *)0x0);
        pUVar9 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent_object_(pUVar7,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (g_data_057a694c == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (pUVar9,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                     (MethodInfo *)0x0);
          if (g_data_057a9c86 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a9c86 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar9,(UnityEngine_Vector2_o)
                            *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                     (MethodInfo *)0x0);
          if (g_data_057a694c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMin
                    (pUVar9,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                     (MethodInfo *)0x0);
          if (g_data_057a694c == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMax
                    (pUVar9,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                     (MethodInfo *)0x0);
          pSVar4 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
          pSVar5 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
          if (pSVar4 != (System_Type_array *)0x0) {
            if ((pSVar5 != (System_Type_o *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pSVar5), lVar6 == 0))
            goto label_03b5709b;
            if ((int)pSVar4->max_length == 0) goto label_03b57096;
            pSVar4->m_Items[0] = pSVar5;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items,pSVar5);
            pUVar10 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor_4dfc440(pUVar10,"AoTTG Toast Stack",pSVar4,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
              pUVar8 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0);
              parent = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_4e09e30(pUVar8,parent,0,(MethodInfo *)0x0);
                pUVar9 = (UnityEngine_RectTransform_o *)
                         UnityEngine_GameObject__GetComponent_object_(pUVar10,MethodInfo_RectTransform_GetComponent_RectTransform);
                ppUVar1 = &(__this->fields)._stack;
                (__this->fields)._stack = pUVar9;
                il2cpp_runtime_helper_022b4080(ppUVar1);
                pUVar9 = (__this->fields)._stack;
                if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (pUVar9,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                  if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMax
                              (*ppUVar1,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                    if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_pivot
                                (*ppUVar1,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
                      if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_anchoredPosition
                                  (*ppUVar1,(UnityEngine_Vector2_o)0x4200000000000000,(MethodInfo *)0x0);
                        if (*ppUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                          UnityEngine_RectTransform__set_sizeDelta
                                    (*ppUVar1,(UnityEngine_Vector2_o)0x42c00000440c0000,(MethodInfo *)0x0);
                          pIVar11 = UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_Image_AddComponent_Image);
                          if (pIVar11 != (Il2CppObject *)0x0) {
                            (*pIVar11->klass->vtable[0x17].methodPtr)
                                      (0,0,pIVar11,pIVar11->klass->vtable[0x17].method);
                            (*pIVar11->klass->vtable[0x19].methodPtr)
                                      (pIVar11,1,pIVar11->klass->vtable[0x19].method);
                            pIVar11 = UnityEngine_GameObject__AddComponent_object_(pUVar10,MethodInfo_GisketchToastStackHover_AddComponent_GisketchToastStackH);
                            pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool);
                            System_Action_bool____ctor();
                            if (pIVar11 != (Il2CppObject *)0x0) {
                              pIVar11[2].klass = pIVar12;
                              il2cpp_runtime_helper_022b4080(pIVar11 + 2,pIVar12);
                              return pUVar7;
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
      goto label_03b57091;
    }
    goto label_03b57096;
  }
label_03b5709b:
  pUVar13 = (UnityEngine_Object_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057a9d22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d22 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str1 = (System_String_o *)0x0;
  bVar3 = UnityEngine_Object__op_Equality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (UnityEngine_GameObject_o *)CONCAT44(extraout_var,bVar3);
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (pUVar13 != (UnityEngine_Object_o *)0x0) {
    pUVar13 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar3 != '\0') {
      UnityEngine_Object__Destroy_4e01c60(pUVar13,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar13,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (System_String_o **)pSVar19;
  if (g_data_057a9d14 == '\0') {
    il2cpp_runtime_helper_023445d0(&"point");
    __this_01 = &"toast";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d14 = '\x01';
  }
  if ((((System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)pSVar19->max_length !=
        (System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)0x0) &&
      (__this_01 = (System_String_o **)
                   (((System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)
                    pSVar19->max_length)->fields)._entries,
      (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_01 !=
      (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) &&
     (str1 = "toast",
     pGVar14 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                         ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_01,"toast",
                          (MethodInfo *)0x0),
     pGVar14 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) {
    pGVar2 = (pGVar14->fields).width;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      return (UnityEngine_GameObject_o *)(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    __this_01 = (System_String_o **)(pGVar2->fields).unit;
    str1 = "point";
    bVar3 = System_String__Equals_3af50f0((System_String_o *)__this_01,"point",5,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return (UnityEngine_GameObject_o *)
             (Gisketch_Aottg2UI_Data_GisketchLength_o *)CONCAT44(extraout_var_00,bVar3);
    }
    pGVar2 = (pGVar14->fields).width;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      return (UnityEngine_GameObject_o *)pGVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"toast-icon");
    il2cpp_runtime_helper_023445d0(&"toastTitle");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"buttonPrimary");
    il2cpp_runtime_helper_023445d0(&"toastIcon");
    il2cpp_runtime_helper_023445d0(&"cross");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"toast-title-row");
    il2cpp_runtime_helper_023445d0(&"toast-title");
    il2cpp_runtime_helper_023445d0(&"toast-close");
    g_data_057a9d16 = '\x01';
  }
  pUVar10 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  *(undefined1 *)((long)&pUVar10[4].monitor + 2) = 1;
  pUVar7 = pUVar10;
  System_Object___ctor((Il2CppObject *)pUVar10,(MethodInfo *)0x0);
  if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
    (pUVar10->fields).m_CachedPtr = "Panel".m_CachedPtr;
    il2cpp_runtime_helper_022b4080(&pUVar10->fields);
    pUVar10[1].klass = "toast-title-row";
    il2cpp_runtime_helper_022b4080(pUVar10 + 1);
    method_00 = (MethodInfo *)&pUVar10[2].fields;
    pUVar10[2].fields.m_CachedPtr = "clear".m_CachedPtr;
    il2cpp_runtime_helper_022b4080();
    pGVar15 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(8.0,method_00);
    pUVar10[9].klass = (UnityEngine_GameObject_c *)pGVar15;
    il2cpp_runtime_helper_022b4080(pUVar10 + 9,pGVar15);
    UVar16.m_CachedPtr = il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    pUVar17 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&pUVar17[4].monitor + 2) = 1;
    pUVar7 = pUVar17;
    System_Object___ctor((Il2CppObject *)pUVar17,(MethodInfo *)0x0);
    if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
      (pUVar17->fields).m_CachedPtr = "Icon".m_CachedPtr;
      il2cpp_runtime_helper_022b4080(&pUVar17->fields);
      pUVar7 = pUVar17 + 1;
      pUVar17[1].klass = "toast-icon";
      il2cpp_runtime_helper_022b4080();
      if ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)__this_01 !=
          (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        pUVar17[3].fields.m_CachedPtr =
             ((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)__this_01)->max_length;
        il2cpp_runtime_helper_022b4080(&pUVar17[3].fields);
        UVar18.m_CachedPtr = (intptr_t)System_String__Concat_3ae5ba0("toastIcon",str1,(MethodInfo *)0x0);
        pUVar7 = (UnityEngine_GameObject_o *)&pUVar17[2].fields;
        pUVar17[2].fields.m_CachedPtr = UVar18.m_CachedPtr;
        il2cpp_runtime_helper_022b4080();
        if (UVar16.m_CachedPtr != 0) {
          if (*(int *)(UVar16.m_CachedPtr + 0x18) == 0) goto label_03b5762d;
          *(UnityEngine_GameObject_o **)(UVar16.m_CachedPtr + 0x20) = pUVar17;
          il2cpp_runtime_helper_022b4080(UVar16.m_CachedPtr + 0x20);
          pUVar17 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
          *(undefined1 *)((long)&pUVar17[4].monitor + 2) = 1;
          pUVar7 = pUVar17;
          System_Object___ctor((Il2CppObject *)pUVar17,(MethodInfo *)0x0);
          if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
            (pUVar17->fields).m_CachedPtr = "Text".m_CachedPtr;
            il2cpp_runtime_helper_022b4080(&pUVar17->fields);
            pUVar17[1].klass = "toast-title";
            il2cpp_runtime_helper_022b4080(pUVar17 + 1);
            pUVar17[1].monitor =
                 *(System_Collections_Generic_Dictionary_string__GisketchMotionToken__o **)
                  &((System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)__this_01)->m_Items[0].
                   fields;
            il2cpp_runtime_helper_022b4080(&pUVar17[1].monitor);
            pUVar17[2].fields.m_CachedPtr = "toastTitle".m_CachedPtr;
            il2cpp_runtime_helper_022b4080(&pUVar17[2].fields);
            __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
            *(undefined4 *)((long)&__this_00[4].monitor + 4) = 0x3f800000;
            pUVar7 = __this_00;
            System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              *(undefined4 *)&__this_00[4].monitor = 0x3f800000;
              pUVar7 = pUVar17 + 9;
              pUVar17[9].klass = (UnityEngine_GameObject_c *)__this_00;
              il2cpp_runtime_helper_022b4080();
              if (*(uint *)(UVar16.m_CachedPtr + 0x18) < 2) goto label_03b5762d;
              *(UnityEngine_GameObject_o **)(UVar16.m_CachedPtr + 0x28) = pUVar17;
              il2cpp_runtime_helper_022b4080(UVar16.m_CachedPtr + 0x28);
              pUVar17 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
              *(undefined1 *)((long)&pUVar17[4].monitor + 2) = 1;
              pUVar7 = pUVar17;
              System_Object___ctor((Il2CppObject *)pUVar17,(MethodInfo *)0x0);
              if (pUVar17 != (UnityEngine_GameObject_o *)0x0) {
                (pUVar17->fields).m_CachedPtr = "Button".m_CachedPtr;
                il2cpp_runtime_helper_022b4080(&pUVar17->fields);
                pUVar17[1].klass = "toast-close";
                il2cpp_runtime_helper_022b4080(pUVar17 + 1);
                pUVar17[3].fields.m_CachedPtr = "cross".m_CachedPtr;
                il2cpp_runtime_helper_022b4080(&pUVar17[3].fields);
                *(undefined1 *)&pUVar17[4].monitor = 1;
                pUVar7 = (UnityEngine_GameObject_o *)&pUVar17[2].fields;
                pUVar17[2].fields.m_CachedPtr = "buttonPrimary".m_CachedPtr;
                il2cpp_runtime_helper_022b4080();
                if (2 < *(uint *)(UVar16.m_CachedPtr + 0x18)) {
                  *(UnityEngine_GameObject_o **)(UVar16.m_CachedPtr + 0x30) = pUVar17;
                  il2cpp_runtime_helper_022b4080(UVar16.m_CachedPtr + 0x30,pUVar17);
                  pUVar10[0xb].fields.m_CachedPtr = UVar16.m_CachedPtr;
                  il2cpp_runtime_helper_022b4080(&pUVar10[0xb].fields,UVar16.m_CachedPtr);
                  return pUVar10;
                }
                goto label_03b5762d;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b5762d:
  il2cpp_runtime_helper_022b2ca0();
  *(undefined1 *)((long)&pUVar7[4].monitor + 2) = 1;
  System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
  return extraout_RAX_01;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Slot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Slot (UnityEngine_RectTransform_o* parent, float height, const MethodInfo* method);
// 0x3b54d60

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Slot
          (UnityEngine_RectTransform_o *parent,float height,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  UnityEngine_Vector2_o value;
  bool_conflict bVar5;
  System_Type_array *components;
  System_Type_o *pSVar6;
  long lVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar9;
  System_String_Fields SVar10;
  System_Collections_Generic_List_object__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *item;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar11;
  System_String_Fields SVar12;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar13;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar14;
  System_Collections_Generic_List_AottgToastDefinition__c *pSVar15;
  System_String_Fields SVar16;
  undefined4 extraout_var;
  UnityEngine_GameObject_o *extraout_RAX;
  System_String_Fields SVar17;
  undefined4 extraout_var_00;
  UnityEngine_GameObject_o *extraout_RAX_00;
  System_Object_array *in_RCX;
  MethodInfo *method_00;
  System_String_c *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar18;
  System_String_c *extraout_RDX_02;
  System_RuntimeTypeHandle_o SVar19;
  System_String_Fields SVar20;
  System_Collections_Generic_List_AottgToastDefinition__c *__this_02;
  float fVar21;
  float fVar22;
  int32_t iVar23;
  System_Enum_o SStack_80;
  int32_t iStack_70;
  System_Type_o *pSStack_68;
  System_Type_array *pSStack_60;
  
  if (g_data_057a9d12 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Toast Slot");
    g_data_057a9d12 = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar19.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Type__GetTypeFromHandle(SVar19,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_03b54f55:
    il2cpp_runtime_helper_022b2c90();
label_03b54f5a:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    SVar19.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar6;
    if (pSVar6 == (System_Type_o *)0x0) {
label_03b54e2f:
      if ((int)components->max_length != 0) {
        components->m_Items[0] = pSVar6;
        il2cpp_runtime_helper_022b4080(components->m_Items,pSVar6);
        pUVar8 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
        in_RCX = (System_Object_array *)0x0;
        UnityEngine_GameObject___ctor_4dfc440(pUVar8,"AoTTG Toast Slot",components,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
          __this = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
          if (__this != (UnityEngine_Transform_o *)0x0) {
            in_RCX = (System_Object_array *)0x0;
            UnityEngine_Transform__SetParent_4e09e30
                      (__this,(UnityEngine_Transform_o *)parent,0,(MethodInfo *)0x0);
            __this_00 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin(__this_00,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0)
              ;
              UnityEngine_RectTransform__set_anchorMax
                        (__this_00,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_pivot
                        (__this_00,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
              if (g_data_057a694c == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              UnityEngine_RectTransform__set_offsetMin
                        (__this_00,
                         (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              UnityEngine_RectTransform__set_offsetMax
                        (__this_00,(UnityEngine_Vector2_o)((ulong)(uint)height << 0x20),(MethodInfo *)0x0);
              return pUVar8;
            }
          }
        }
        goto label_03b54f55;
      }
      goto label_03b54f5a;
    }
    lVar7 = il2cpp_runtime_helper_023051f0(pSVar6);
    if (lVar7 != 0) goto label_03b54e2f;
  }
  pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)il2cpp_runtime_helper_0231b270();
  SVar16._stringLength = 0;
  SVar16._firstChar = 0;
  SVar16._6_2_ = 0;
  il2cpp_runtime_helper_022b2b10();
  __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)pGVar9;
  pSStack_68 = (System_Type_o *)SVar19.fields.value;
  pSStack_60 = components;
  if (g_data_057a9d15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgToastVariant);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Dismiss all");
    il2cpp_runtime_helper_023445d0(&"toast-close-all");
    il2cpp_runtime_helper_023445d0(&"toast-content");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"toastContent");
    il2cpp_runtime_helper_023445d0(&"percent");
    il2cpp_runtime_helper_023445d0(&"toast-message");
    il2cpp_runtime_helper_023445d0(&"toast-root");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"toast-border");
    il2cpp_runtime_helper_023445d0(&"toastContentPanel");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"toast");
    il2cpp_runtime_helper_023445d0(&"Image");
    il2cpp_runtime_helper_023445d0(&"buttonQuiet");
    __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)&"toastBorder";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d15 = '\x01';
  }
  if (pGVar9 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
label_03b55627:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SStack_80.klass = TypeInfo_AottgToastVariant;
    SStack_80.monitor = (void *)0xffffffffffffffff;
    iStack_70 = *(int32_t *)&(pGVar9->fields)._layer;
    SVar10 = (System_String_Fields)System_Enum__ToString(&SStack_80,(MethodInfo *)0x0);
    __this_01 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchNodeDefinition);
    System_Collections_Generic_List_object____ctor(__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    SVar16 = SVar10;
    __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)pGVar9;
    item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle
                     ((Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pGVar9,(System_String_o *)SVar10,
                      method_00);
    pSVar3 = MethodInfo_Void_Add;
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b55627;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    in_RCX = (__this_01->fields)._items;
    if (in_RCX == (System_Object_array *)0x0) goto label_03b55627;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)in_RCX->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      in_RCX->m_Items[(int)uVar2] = (Il2CppObject *)item;
      il2cpp_runtime_helper_022b4080(in_RCX->m_Items + (int)uVar2);
    }
    else {
      in_RCX = (System_Object_array *)pSVar3->m_Items[0][0xc].klass;
      System_Collections_Generic_List_object___AddWithResize
                (__this_01,(Il2CppObject *)item,((Il2CppType *)in_RCX->m_Items)[5].data);
    }
    pGVar11 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&pGVar11[1].fields._context + 2) = 1;
    SVar16._stringLength = 0;
    SVar16._firstChar = 0;
    SVar16._6_2_ = 0;
    __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)pGVar11;
    System_Object___ctor((Il2CppObject *)pGVar11,(MethodInfo *)0x0);
    if (pGVar11 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) goto label_03b55627;
    (pGVar11->fields)._layer = "Text";
    il2cpp_runtime_helper_022b4080(&pGVar11->fields);
    (pGVar11->fields)._context = "toast-message";
    il2cpp_runtime_helper_022b4080(&(pGVar11->fields)._context);
    (pGVar11->fields)._items =
         (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)(pGVar9->fields)._pending;
    il2cpp_runtime_helper_022b4080(&(pGVar11->fields)._items);
    SVar16 = "toastContent";
    __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)&(pGVar11->fields)._stackTween;
    (pGVar11->fields)._stackTween = (DG_Tweening_Tween_o *)"toastContent";
    il2cpp_runtime_helper_022b4080();
    in_RCX = MethodInfo_Void_Add;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_01->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_03b55627;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      in_RCX = (System_Object_array *)(ulong)(uVar2 + 1);
      (__this_01->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pGVar11;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_01,(Il2CppObject *)pGVar11,((in_RCX->m_Items[0][0xc].klass)->_1).interopData);
    }
    pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&pGVar9[1].fields._context + 2) = 1;
    SVar16._stringLength = 0;
    SVar16._firstChar = 0;
    SVar16._6_2_ = 0;
    __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)pGVar9;
    System_Object___ctor((Il2CppObject *)pGVar9,(MethodInfo *)0x0);
    if (pGVar9 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) goto label_03b55627;
    (pGVar9->fields)._layer = "Button";
    il2cpp_runtime_helper_022b4080(&pGVar9->fields);
    (pGVar9->fields)._context = "toast-close-all";
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._context);
    (pGVar9->fields)._items = "Dismiss all";
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._items);
    (pGVar9->fields)._stackTween = "buttonQuiet";
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._stackTween);
    SVar12 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    *(undefined4 *)((long)SVar12 + 0x6c) = 0x3f800000;
    System_Object___ctor((Il2CppObject *)SVar12,(MethodInfo *)0x0);
    pGVar11 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    SVar16._stringLength = 0;
    SVar16._firstChar = 0;
    SVar16._6_2_ = 0;
    __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)pGVar11;
    System_Object___ctor((Il2CppObject *)pGVar11,(MethodInfo *)0x0);
    if (pGVar11 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) goto label_03b55627;
    *(undefined4 *)&(pGVar11->fields)._layer = 0x42c80000;
    SVar16 = "percent";
    __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)&(pGVar11->fields)._context;
    (pGVar11->fields)._context = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)"percent";
    il2cpp_runtime_helper_022b4080();
    if (SVar12 == (System_String_Fields)0x0) goto label_03b55627;
    *(Gisketch_Aottg2UI_Overlays_GisketchToastManager_o **)((long)SVar12 + 0x38) = pGVar11;
    il2cpp_runtime_helper_022b4080((long)SVar12 + 0x38,pGVar11);
    __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)&pGVar9[2].fields._stack;
    pGVar9[2].fields._stack = (UnityEngine_RectTransform_o *)SVar12;
    il2cpp_runtime_helper_022b4080();
    in_RCX = MethodInfo_Void_Add;
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_01->fields)._items;
    SVar16 = SVar12;
    if (pSVar3 == (System_Object_array *)0x0) goto label_03b55627;
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      in_RCX = (System_Object_array *)(ulong)(uVar2 + 1);
      (__this_01->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pGVar9;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this_01,(Il2CppObject *)pGVar9,((in_RCX->m_Items[0][0xc].klass)->_1).interopData);
    }
    pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&pGVar9[1].fields._context + 2) = 1;
    SVar16._stringLength = 0;
    SVar16._firstChar = 0;
    SVar16._6_2_ = 0;
    __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)pGVar9;
    System_Object___ctor((Il2CppObject *)pGVar9,(MethodInfo *)0x0);
    if (pGVar9 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) goto label_03b55627;
    (pGVar9->fields)._layer = "Panel";
    il2cpp_runtime_helper_022b4080(&pGVar9->fields);
    (pGVar9->fields)._context = "toast-root";
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields)._context);
    pMVar18 = (MethodInfo *)&(pGVar9->fields)._stackTween;
    (pGVar9->fields)._stackTween = "toast";
    il2cpp_runtime_helper_022b4080();
    pGVar13 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(0.0,pMVar18);
    pGVar9[2].fields._stack = (UnityEngine_RectTransform_o *)pGVar13;
    il2cpp_runtime_helper_022b4080(&pGVar9[2].fields._stack,pGVar13);
    pSVar14 = (System_Collections_Generic_List_AottgToastDefinition__o *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    pSVar15 = (System_Collections_Generic_List_AottgToastDefinition__c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&(pSVar15->_1).typeMetadataHandle + 2) = 1;
    SVar16._stringLength = 0;
    SVar16._firstChar = 0;
    SVar16._6_2_ = 0;
    __this_02 = pSVar15;
    System_Object___ctor((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
    if (pSVar15 == (System_Collections_Generic_List_AottgToastDefinition__c *)0x0) goto label_03b55627;
    (pSVar15->_1).name = "Image";
    il2cpp_runtime_helper_022b4080(&(pSVar15->_1).name);
    (pSVar15->_1).namespaze = "toast-border";
    il2cpp_runtime_helper_022b4080(&(pSVar15->_1).namespaze);
    SVar16 = (System_String_Fields)
             System_String__Concat_3ae5ba0("toastBorder",(System_String_o *)SVar10,(MethodInfo *)0x0);
    __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)&(pSVar15->_1).element_class;
    (pSVar15->_1).element_class = (Il2CppClass *)SVar16;
    il2cpp_runtime_helper_022b4080();
    if (pSVar14 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) goto label_03b55627;
    if ((pSVar14->fields)._size != 0) {
      (pSVar14->fields)._syncRoot = (Il2CppObject *)pSVar15;
      il2cpp_runtime_helper_022b4080(&(pSVar14->fields)._syncRoot);
      pSVar15 = (System_Collections_Generic_List_AottgToastDefinition__c *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      *(undefined1 *)((long)&(pSVar15->_1).typeMetadataHandle + 2) = 1;
      SVar16._stringLength = 0;
      SVar16._firstChar = 0;
      SVar16._6_2_ = 0;
      __this_02 = pSVar15;
      System_Object___ctor((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
      if (pSVar15 == (System_Collections_Generic_List_AottgToastDefinition__c *)0x0) goto label_03b55627;
      (pSVar15->_1).name = (char *)"Panel";
      il2cpp_runtime_helper_022b4080(&(pSVar15->_1).name);
      (pSVar15->_1).namespaze = "toast-content";
      il2cpp_runtime_helper_022b4080(&(pSVar15->_1).namespaze);
      pMVar18 = (MethodInfo *)&(pSVar15->_1).element_class;
      (pSVar15->_1).element_class = "toastContentPanel";
      il2cpp_runtime_helper_022b4080();
      pGVar13 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column(12.0,pMVar18);
      *(Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **)&(pSVar15->_2).initializationExceptionGCHandle =
           pGVar13;
      il2cpp_runtime_helper_022b4080(&(pSVar15->_2).initializationExceptionGCHandle,pGVar13);
      SVar16 = (System_String_Fields)System_Collections_Generic_List_object___ToArray(__this_01,MethodInfo_GisketchNodeDefinition_ToArray);
      __this_02 = (System_Collections_Generic_List_AottgToastDefinition__c *)&(pSVar15->_2).token;
      (pSVar15->_2).token = SVar16._stringLength;
      (pSVar15->_2).method_count = SVar16._firstChar;
      (pSVar15->_2).property_count = SVar16._6_2_;
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)(pSVar14->fields)._size) {
        pSVar14[1].klass = pSVar15;
        il2cpp_runtime_helper_022b4080(pSVar14 + 1,pSVar15);
        pGVar9[3].fields._pending = pSVar14;
        il2cpp_runtime_helper_022b4080(&pGVar9[3].fields._pending,pSVar14);
        return (UnityEngine_GameObject_o *)pGVar9;
      }
    }
  }
  fVar21 = (float)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9d13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d13 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar12._stringLength = 0;
  SVar12._firstChar = 0;
  SVar12._6_2_ = 0;
  pUVar8 = (UnityEngine_GameObject_o *)0x0;
  SVar10 = SVar16;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b556c6:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar8 = (UnityEngine_GameObject_o *)0x0;
    SVar10 = SVar12;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)SVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (UnityEngine_GameObject_o *)CONCAT44(extraout_var,bVar5);
    }
    if (SVar12 != (System_String_Fields)0x0) {
      UnityEngine_RectTransform__set_anchorMin
                ((UnityEngine_RectTransform_o *)SVar12,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMax
                ((UnityEngine_RectTransform_o *)SVar12,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_pivot
                ((UnityEngine_RectTransform_o *)SVar12,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
      if (g_data_057a694c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
      }
      pMVar18 = (MethodInfo *)0x0;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)SVar12,
                 (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                 (MethodInfo *)0x0);
      fVar22 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth
                         ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_02,pMVar18);
      value.fields.y = fVar21;
      value.fields.x = fVar22;
      UnityEngine_RectTransform__set_sizeDelta((UnityEngine_RectTransform_o *)SVar12,value,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  else if (SVar16 != (System_String_Fields)0x0) {
    SVar12 = (System_String_Fields)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)SVar16,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b556c6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d06 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CloseAll);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Wire_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"toast-close-all");
    il2cpp_runtime_helper_023445d0(&"toast-close");
    g_data_057a9d06 = '\x01';
  }
  SVar12 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  SVar20._stringLength = 0;
  SVar20._firstChar = 0;
  SVar20._6_2_ = 0;
  SVar16 = SVar12;
  System_Object___ctor((Il2CppObject *)SVar12,(MethodInfo *)0x0);
  if (SVar12 == (System_String_Fields)0x0) goto label_03b55989;
  *(System_String_Fields *)((long)SVar12 + 0x10) = SVar10;
  il2cpp_runtime_helper_022b4080((UnityEngine_UI_Button_Fields *)((long)SVar12 + 0x10),SVar10);
  ((System_String_o *)((long)SVar12 + 0x18))->klass = extraout_RDX;
  il2cpp_runtime_helper_022b4080((System_String_o *)((long)SVar12 + 0x18),extraout_RDX);
  SVar17 = (System_String_Fields)
           Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button(pUVar8,"toast-close",method_01);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar20._stringLength = 0;
  SVar20._firstChar = 0;
  SVar20._6_2_ = 0;
  SVar16 = SVar17;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar18 = extraout_RDX_00;
  if ((char)bVar5 != '\0') {
    if (SVar17 == (System_String_Fields)0x0) goto label_03b55989;
    pUVar4 = *(UnityEngine_Events_UnityEvent_o **)((long)SVar17 + 0x100);
    SVar17 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    in_RCX = (System_Object_array *)0x0;
    SVar16 = SVar17;
    UnityEngine_Events_UnityAction___ctor();
    SVar20 = SVar12;
    if (pUVar4 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_03b55989;
    UnityEngine_Events_UnityEvent__AddListener
              (pUVar4,(UnityEngine_Events_UnityAction_o *)SVar17,(MethodInfo *)0x0);
    pMVar18 = extraout_RDX_01;
  }
  SVar12 = (System_String_Fields)
           Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
                     (pUVar8,(System_String_o *)"toast-close-all",pMVar18);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar20._stringLength = 0;
  SVar20._firstChar = 0;
  SVar20._6_2_ = 0;
  SVar16 = SVar12;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return (UnityEngine_GameObject_o *)CONCAT44(extraout_var_00,bVar5);
  }
  if (SVar12 != (System_String_Fields)0x0) {
    pUVar4 = *(UnityEngine_Events_UnityEvent_o **)((long)SVar12 + 0x100);
    SVar12 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    in_RCX = (System_Object_array *)0x0;
    SVar16 = SVar12;
    UnityEngine_Events_UnityAction___ctor();
    SVar20 = SVar10;
    if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener
                (pUVar4,(UnityEngine_Events_UnityAction_o *)SVar12,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
label_03b55989:
  iVar23 = il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)SVar16,(MethodInfo *)0x0);
  *(System_String_Fields *)((long)SVar16 + 0x10) = SVar20;
  il2cpp_runtime_helper_022b4080((UnityEngine_UI_Button_Fields *)((long)SVar16 + 0x10),SVar20);
  ((System_String_o *)((long)SVar16 + 0x18))->klass = extraout_RDX_02;
  il2cpp_runtime_helper_022b4080((System_String_o *)((long)SVar16 + 0x18),extraout_RDX_02);
  *(System_Object_array **)((long)SVar16 + 0x20) = in_RCX;
  pUVar8 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_022b4080((void **)((long)SVar16 + 0x20),in_RCX);
  (((UnityEngine_UI_Navigation_o *)((long)SVar16 + 0x28))->fields).m_Mode = iVar23;
  return pUVar8;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ConfigureToastRoot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_GameObject_o* root, float height, const MethodInfo* method);
// 0x3b55640

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ConfigureToastRoot
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_GameObject_o *root,
               float height,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  UnityEngine_Vector2_o value;
  bool_conflict bVar2;
  UnityEngine_UI_Button_o *pUVar3;
  UnityEngine_UI_Button_o *pUVar4;
  UnityEngine_UI_Button_o *pUVar5;
  undefined8 in_RCX;
  System_Threading_CancellationTokenSource_o *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar6;
  System_Threading_CancellationTokenSource_o *extraout_RDX_02;
  UnityEngine_GameObject_o *root_00;
  UnityEngine_UI_Button_o *pUVar7;
  UnityEngine_UI_Button_o *__this_00;
  float fVar8;
  int32_t iVar9;
  
  if (g_data_057a9d13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d13 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_UI_Button_o *)0x0;
  root_00 = (UnityEngine_GameObject_o *)0x0;
  pUVar7 = (UnityEngine_UI_Button_o *)root;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
label_03b556c6:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    root_00 = (UnityEngine_GameObject_o *)0x0;
    pUVar7 = pUVar3;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    if (pUVar3 != (UnityEngine_UI_Button_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMin
                ((UnityEngine_RectTransform_o *)pUVar3,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMax
                ((UnityEngine_RectTransform_o *)pUVar3,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_pivot
                ((UnityEngine_RectTransform_o *)pUVar3,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
      if (g_data_057a694c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
      }
      pMVar6 = (MethodInfo *)0x0;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)pUVar3,
                 (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                 (MethodInfo *)0x0);
      fVar8 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth(__this,pMVar6);
      value.fields.y = height;
      value.fields.x = fVar8;
      UnityEngine_RectTransform__set_sizeDelta((UnityEngine_RectTransform_o *)pUVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
  else if (root != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = (UnityEngine_UI_Button_o *)UnityEngine_GameObject__GetComponent_object_(root,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b556c6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d06 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CloseAll);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Wire_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"toast-close-all");
    il2cpp_runtime_helper_023445d0(&"toast-close");
    g_data_057a9d06 = '\x01';
  }
  pUVar4 = (UnityEngine_UI_Button_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  pUVar3 = (UnityEngine_UI_Button_o *)0x0;
  __this_00 = pUVar4;
  System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_UI_Button_o *)0x0) goto label_03b55989;
  (pUVar4->fields).m_CachedPtr = (intptr_t)pUVar7;
  il2cpp_runtime_helper_022b4080(&pUVar4->fields,pUVar7);
  (pUVar4->fields).m_CancellationTokenSource = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(pUVar4->fields).m_CancellationTokenSource,extraout_RDX);
  pUVar5 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button(root_00,"toast-close",method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_UI_Button_o *)0x0;
  __this_00 = pUVar5;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar6 = extraout_RDX_00;
  if ((char)bVar2 != '\0') {
    if (pUVar5 == (UnityEngine_UI_Button_o *)0x0) goto label_03b55989;
    pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar5->fields).m_CanvasGroupCache;
    pUVar5 = (UnityEngine_UI_Button_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    in_RCX = 0;
    __this_00 = pUVar5;
    UnityEngine_Events_UnityAction___ctor();
    pUVar3 = pUVar4;
    if (pUVar1 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_03b55989;
    UnityEngine_Events_UnityEvent__AddListener
              (pUVar1,(UnityEngine_Events_UnityAction_o *)pUVar5,(MethodInfo *)0x0);
    pMVar6 = extraout_RDX_01;
  }
  pUVar4 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button(root_00,"toast-close-all",pMVar6);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_UI_Button_o *)0x0;
  __this_00 = pUVar4;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (pUVar4 != (UnityEngine_UI_Button_o *)0x0) {
    pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar4->fields).m_CanvasGroupCache;
    pUVar4 = (UnityEngine_UI_Button_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    in_RCX = 0;
    __this_00 = pUVar4;
    UnityEngine_Events_UnityAction___ctor();
    pUVar3 = pUVar7;
    if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener
                (pUVar1,(UnityEngine_Events_UnityAction_o *)pUVar4,(MethodInfo *)0x0);
      return;
    }
  }
label_03b55989:
  iVar9 = il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_CachedPtr = (intptr_t)pUVar3;
  il2cpp_runtime_helper_022b4080(&__this_00->fields,pUVar3);
  (__this_00->fields).m_CancellationTokenSource = extraout_RDX_02;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).m_CancellationTokenSource,extraout_RDX_02);
  *(undefined8 *)&(__this_00->fields).m_EnableCalled = in_RCX;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).m_EnableCalled,in_RCX);
  (__this_00->fields).m_Navigation.fields.m_Mode = iVar9;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastRootWidth
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3b57180

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  Il2CppObject *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  void *pvVar6;
  Il2CppObject *pIVar7;
  Il2CppClass *pIVar8;
  Il2CppObject *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_02;
  Il2CppObject *__this_03;
  MethodInfo *method_00;
  float fVar9;
  float extraout_XMM0_Da;
  
  __this_02 = __this;
  if (g_data_057a9d14 == '\0') {
    il2cpp_runtime_helper_023445d0(&"point");
    __this_02 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&"toast";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d14 = '\x01';
  }
  pGVar1 = (__this->fields)._context;
  if (((pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
      (__this_02 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar1->fields).Theme,
      __this_02 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0)) &&
     (method = "toast",
     pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                        ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_02,
                         (System_String_o *)"toast",(MethodInfo *)0x0),
     pGVar4 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) {
    pGVar2 = (pGVar4->fields).width;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      return 520.0;
    }
    __this_02 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar2->fields).unit;
    method = "point";
    bVar3 = System_String__Equals_3af50f0
                      ((System_String_o *)__this_02,(System_String_o *)"point",5,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return 520.0;
    }
    pGVar2 = (pGVar4->fields).width;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      return (pGVar2->fields).value;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"toast-icon");
    il2cpp_runtime_helper_023445d0(&"toastTitle");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"buttonPrimary");
    il2cpp_runtime_helper_023445d0(&"toastIcon");
    il2cpp_runtime_helper_023445d0(&"cross");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"toast-title-row");
    il2cpp_runtime_helper_023445d0(&"toast-title");
    il2cpp_runtime_helper_023445d0(&"toast-close");
    g_data_057a9d16 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  *(undefined1 *)((long)&__this_00[6].monitor + 2) = 1;
  __this_03 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = "Panel";
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    __this_00[1].monitor = "toast-title-row";
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor);
    method_00 = (MethodInfo *)(__this_00 + 4);
    __this_00[4].klass = "clear";
    il2cpp_runtime_helper_022b4080();
    pGVar5 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(8.0,method_00);
    __this_00[0xd].monitor = pGVar5;
    il2cpp_runtime_helper_022b4080(&__this_00[0xd].monitor,pGVar5);
    pvVar6 = (void *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&pIVar7[6].monitor + 2) = 1;
    __this_03 = pIVar7;
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    if (pIVar7 != (Il2CppObject *)0x0) {
      pIVar7[1].klass = "Icon";
      il2cpp_runtime_helper_022b4080(pIVar7 + 1);
      __this_03 = (Il2CppObject *)&pIVar7[1].monitor;
      pIVar7[1].monitor = "toast-icon";
      il2cpp_runtime_helper_022b4080();
      if (__this_02 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
        pIVar7[5].monitor =
             (System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)
             (__this_02->fields)._context;
        il2cpp_runtime_helper_022b4080(&pIVar7[5].monitor);
        pIVar8 = (Il2CppClass *)
                 System_String__Concat_3ae5ba0("toastIcon",(System_String_o *)method,(MethodInfo *)0x0);
        __this_03 = pIVar7 + 4;
        pIVar7[4].klass = pIVar8;
        il2cpp_runtime_helper_022b4080();
        if (pvVar6 != (void *)0x0) {
          if (*(int *)((long)pvVar6 + 0x18) == 0) goto label_03b5762d;
          *(Il2CppObject **)((long)pvVar6 + 0x20) = pIVar7;
          il2cpp_runtime_helper_022b4080((long)pvVar6 + 0x20);
          pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
          *(undefined1 *)((long)&pIVar7[6].monitor + 2) = 1;
          __this_03 = pIVar7;
          System_Object___ctor(pIVar7,(MethodInfo *)0x0);
          if (pIVar7 != (Il2CppObject *)0x0) {
            pIVar7[1].klass = "Text";
            il2cpp_runtime_helper_022b4080(pIVar7 + 1);
            pIVar7[1].monitor = "toast-title";
            il2cpp_runtime_helper_022b4080(&pIVar7[1].monitor);
            pIVar7[2].klass = (Il2CppClass *)(__this_02->fields)._items;
            il2cpp_runtime_helper_022b4080(pIVar7 + 2);
            pIVar7[4].klass = "toastTitle";
            il2cpp_runtime_helper_022b4080(pIVar7 + 4);
            __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
            *(undefined4 *)((long)&__this_01[6].monitor + 4) = 0x3f800000;
            __this_03 = __this_01;
            System_Object___ctor(__this_01,(MethodInfo *)0x0);
            if (__this_01 != (Il2CppObject *)0x0) {
              *(undefined4 *)&__this_01[6].monitor = 0x3f800000;
              __this_03 = (Il2CppObject *)&pIVar7[0xd].monitor;
              pIVar7[0xd].monitor = __this_01;
              il2cpp_runtime_helper_022b4080();
              if (*(uint *)((long)pvVar6 + 0x18) < 2) goto label_03b5762d;
              *(Il2CppObject **)((long)pvVar6 + 0x28) = pIVar7;
              il2cpp_runtime_helper_022b4080((long)pvVar6 + 0x28);
              pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
              *(undefined1 *)((long)&pIVar7[6].monitor + 2) = 1;
              __this_03 = pIVar7;
              System_Object___ctor(pIVar7,(MethodInfo *)0x0);
              if (pIVar7 != (Il2CppObject *)0x0) {
                pIVar7[1].klass = "Button";
                il2cpp_runtime_helper_022b4080(pIVar7 + 1);
                pIVar7[1].monitor = "toast-close";
                il2cpp_runtime_helper_022b4080(&pIVar7[1].monitor);
                pIVar7[5].monitor = "cross";
                il2cpp_runtime_helper_022b4080(&pIVar7[5].monitor);
                *(undefined1 *)&pIVar7[6].monitor = 1;
                __this_03 = pIVar7 + 4;
                pIVar7[4].klass = "buttonPrimary";
                il2cpp_runtime_helper_022b4080();
                if (2 < *(uint *)((long)pvVar6 + 0x18)) {
                  *(Il2CppObject **)((long)pvVar6 + 0x30) = pIVar7;
                  il2cpp_runtime_helper_022b4080((long)pvVar6 + 0x30,pIVar7);
                  __this_00[0x11].monitor = pvVar6;
                  fVar9 = (float)il2cpp_runtime_helper_022b4080(&__this_00[0x11].monitor,pvVar6);
                  return fVar9;
                }
                goto label_03b5762d;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b5762d:
  il2cpp_runtime_helper_022b2ca0();
  *(undefined1 *)((long)&__this_03[6].monitor + 2) = 1;
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3b54f70

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastNode
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  UnityEngine_Events_UnityEvent_o *pUVar4;
  UnityEngine_Vector2_o value;
  bool_conflict bVar5;
  System_String_Fields SVar6;
  System_Collections_Generic_List_object__o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_String_Fields SVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar11;
  undefined4 extraout_var;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  System_String_Fields SVar12;
  System_String_Fields SVar13;
  undefined4 extraout_var_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX_00;
  System_Object_array *in_RCX;
  MethodInfo *method_00;
  System_String_c *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar14;
  System_String_c *extraout_RDX_02;
  UnityEngine_GameObject_o *root;
  System_String_Fields SVar15;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar16;
  float fVar17;
  float fVar18;
  int32_t iVar19;
  System_Enum_o local_48;
  int32_t local_38;
  
  pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)toast;
  if (g_data_057a9d15 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgToastVariant);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Dismiss all");
    il2cpp_runtime_helper_023445d0(&"toast-close-all");
    il2cpp_runtime_helper_023445d0(&"toast-content");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"toastContent");
    il2cpp_runtime_helper_023445d0(&"percent");
    il2cpp_runtime_helper_023445d0(&"toast-message");
    il2cpp_runtime_helper_023445d0(&"toast-root");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"toast-border");
    il2cpp_runtime_helper_023445d0(&"toastContentPanel");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"toast");
    il2cpp_runtime_helper_023445d0(&"Image");
    il2cpp_runtime_helper_023445d0(&"buttonQuiet");
    pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&"toastBorder";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d15 = '\x01';
  }
  if (toast == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
label_03b55627:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    local_48.klass = TypeInfo_AottgToastVariant;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = (toast->fields).Variant;
    SVar6 = (System_String_Fields)System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchNodeDefinition);
    System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    method = (MethodInfo *)SVar6;
    pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)toast;
    pGVar7 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle
                       (toast,(System_String_o *)SVar6,method_00);
    pSVar3 = MethodInfo_Void_Add;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_03b55627;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    in_RCX = (__this->fields)._items;
    if (in_RCX == (System_Object_array *)0x0) goto label_03b55627;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)in_RCX->max_length) {
      (__this->fields)._size = uVar2 + 1;
      in_RCX->m_Items[(int)uVar2] = (Il2CppObject *)pGVar7;
      il2cpp_runtime_helper_022b4080(in_RCX->m_Items + (int)uVar2);
    }
    else {
      in_RCX = (System_Object_array *)pSVar3->m_Items[0][0xc].klass;
      System_Collections_Generic_List_object___AddWithResize
                (__this,(Il2CppObject *)pGVar7,((Il2CppType *)in_RCX->m_Items)[5].data);
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&(pGVar7->fields).hasIcon + 2) = 1;
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    pGVar16 = pGVar7;
    System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
    if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b55627;
    (pGVar7->fields).type = "Text";
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    (pGVar7->fields).id = "toast-message";
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id);
    (pGVar7->fields).text = (toast->fields).Content;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).text);
    method = (MethodInfo *)"toastContent";
    pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar7->fields).style;
    (pGVar7->fields).style = (System_String_o *)"toastContent";
    il2cpp_runtime_helper_022b4080();
    in_RCX = MethodInfo_Void_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) goto label_03b55627;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      in_RCX = (System_Object_array *)(ulong)(uVar2 + 1);
      (__this->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pGVar7;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this,(Il2CppObject *)pGVar7,((in_RCX->m_Items[0][0xc].klass)->_1).interopData);
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&(pGVar7->fields).hasIcon + 2) = 1;
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    pGVar16 = pGVar7;
    System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
    if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b55627;
    (pGVar7->fields).type = "Button";
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    (pGVar7->fields).id = "toast-close-all";
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id);
    (pGVar7->fields).text = "Dismiss all";
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).text);
    (pGVar7->fields).style = "buttonQuiet";
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).style);
    SVar8 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
    *(undefined4 *)((long)SVar8 + 0x6c) = 0x3f800000;
    System_Object___ctor((Il2CppObject *)SVar8,(MethodInfo *)0x0);
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    pGVar16 = pGVar9;
    System_Object___ctor((Il2CppObject *)pGVar9,(MethodInfo *)0x0);
    if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b55627;
    *(undefined4 *)&(pGVar9->fields).type = 0x42c80000;
    method = (MethodInfo *)"percent";
    pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar9->fields).id;
    (pGVar9->fields).id = (System_String_o *)"percent";
    il2cpp_runtime_helper_022b4080();
    if (SVar8 == (System_String_Fields)0x0) goto label_03b55627;
    *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)SVar8 + 0x38) = pGVar9;
    il2cpp_runtime_helper_022b4080((long)SVar8 + 0x38,pGVar9);
    pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar7->fields).search;
    (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)SVar8;
    il2cpp_runtime_helper_022b4080();
    in_RCX = MethodInfo_Void_Add;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    method = (MethodInfo *)SVar8;
    if (pSVar3 == (System_Object_array *)0x0) goto label_03b55627;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      in_RCX = (System_Object_array *)(ulong)(uVar2 + 1);
      (__this->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pGVar7;
      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                (__this,(Il2CppObject *)pGVar7,((in_RCX->m_Items[0][0xc].klass)->_1).interopData);
    }
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&(pGVar7->fields).hasIcon + 2) = 1;
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    pGVar16 = pGVar7;
    System_Object___ctor((Il2CppObject *)pGVar7,(MethodInfo *)0x0);
    if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b55627;
    (pGVar7->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&pGVar7->fields);
    (pGVar7->fields).id = "toast-root";
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).id);
    pMVar14 = (MethodInfo *)&(pGVar7->fields).style;
    (pGVar7->fields).style = "toast";
    il2cpp_runtime_helper_022b4080();
    pGVar10 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(0.0,pMVar14);
    (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar10);
    pGVar11 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&(pGVar9->fields).hasIcon + 2) = 1;
    method._0_4_ = 0;
    method._4_2_ = 0;
    method._6_2_ = 0;
    pGVar16 = pGVar9;
    System_Object___ctor((Il2CppObject *)pGVar9,(MethodInfo *)0x0);
    if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b55627;
    (pGVar9->fields).type = "Image";
    il2cpp_runtime_helper_022b4080(&pGVar9->fields);
    (pGVar9->fields).id = "toast-border";
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).id);
    method = (MethodInfo *)
             System_String__Concat_3ae5ba0("toastBorder",(System_String_o *)SVar6,(MethodInfo *)0x0);
    pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar9->fields).style;
    (pGVar9->fields).style = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080();
    if (pGVar11 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_03b55627;
    if ((int)pGVar11->max_length != 0) {
      pGVar11->m_Items[0] = pGVar9;
      il2cpp_runtime_helper_022b4080(pGVar11->m_Items);
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
      *(undefined1 *)((long)&(pGVar9->fields).hasIcon + 2) = 1;
      method._0_4_ = 0;
      method._4_2_ = 0;
      method._6_2_ = 0;
      pGVar16 = pGVar9;
      System_Object___ctor((Il2CppObject *)pGVar9,(MethodInfo *)0x0);
      if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_03b55627;
      (pGVar9->fields).type = "Panel";
      il2cpp_runtime_helper_022b4080(&pGVar9->fields);
      (pGVar9->fields).id = "toast-content";
      il2cpp_runtime_helper_022b4080(&(pGVar9->fields).id);
      pMVar14 = (MethodInfo *)&(pGVar9->fields).style;
      (pGVar9->fields).style = "toastContentPanel";
      il2cpp_runtime_helper_022b4080();
      pGVar10 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column(12.0,pMVar14);
      (pGVar9->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar10;
      il2cpp_runtime_helper_022b4080(&(pGVar9->fields).search,pGVar10);
      method = (MethodInfo *)System_Collections_Generic_List_object___ToArray(__this,MethodInfo_GisketchNodeDefinition_ToArray);
      pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar9->fields).deferredChildren;
      (pGVar9->fields).deferredChildren = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)method;
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pGVar11->max_length) {
        pGVar11->m_Items[1] = pGVar9;
        il2cpp_runtime_helper_022b4080(pGVar11->m_Items + 1,pGVar9);
        (pGVar7->fields).deferredChildren = pGVar11;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).deferredChildren,pGVar11);
        return pGVar7;
      }
    }
  }
  fVar17 = (float)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9d13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d13 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar8._stringLength = 0;
  SVar8._firstChar = 0;
  SVar8._6_2_ = 0;
  root = (UnityEngine_GameObject_o *)0x0;
  SVar6 = (System_String_Fields)method;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_03b556c6:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    root = (UnityEngine_GameObject_o *)0x0;
    SVar6 = SVar8;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)SVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var,bVar5);
    }
    if (SVar8 != (System_String_Fields)0x0) {
      UnityEngine_RectTransform__set_anchorMin
                ((UnityEngine_RectTransform_o *)SVar8,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMax
                ((UnityEngine_RectTransform_o *)SVar8,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_pivot
                ((UnityEngine_RectTransform_o *)SVar8,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
      if (g_data_057a694c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
      }
      pMVar14 = (MethodInfo *)0x0;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)SVar8,
                 (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                 (MethodInfo *)0x0);
      fVar18 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastRootWidth
                         ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)pGVar16,pMVar14);
      value.fields.y = fVar17;
      value.fields.x = fVar18;
      UnityEngine_RectTransform__set_sizeDelta((UnityEngine_RectTransform_o *)SVar8,value,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  else if ((System_String_Fields)method != (System_String_Fields)0x0) {
    SVar8 = (System_String_Fields)
            UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)method,MethodInfo_RectTransform_GetComponent_RectTransform);
    goto label_03b556c6;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d06 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CloseAll);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Wire_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass22_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"toast-close-all");
    il2cpp_runtime_helper_023445d0(&"toast-close");
    g_data_057a9d06 = '\x01';
  }
  SVar12 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass22_0);
  SVar15._stringLength = 0;
  SVar15._firstChar = 0;
  SVar15._6_2_ = 0;
  SVar8 = SVar12;
  System_Object___ctor((Il2CppObject *)SVar12,(MethodInfo *)0x0);
  if (SVar12 == (System_String_Fields)0x0) goto label_03b55989;
  *(System_String_Fields *)((long)SVar12 + 0x10) = SVar6;
  il2cpp_runtime_helper_022b4080((UnityEngine_UI_Button_Fields *)((long)SVar12 + 0x10),SVar6);
  ((System_String_o *)((long)SVar12 + 0x18))->klass = extraout_RDX;
  il2cpp_runtime_helper_022b4080((System_String_o *)((long)SVar12 + 0x18),extraout_RDX);
  SVar13 = (System_String_Fields)
           Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button(root,"toast-close",method_01);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar15._stringLength = 0;
  SVar15._firstChar = 0;
  SVar15._6_2_ = 0;
  SVar8 = SVar13;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar14 = extraout_RDX_00;
  if ((char)bVar5 != '\0') {
    if (SVar13 == (System_String_Fields)0x0) goto label_03b55989;
    pUVar4 = *(UnityEngine_Events_UnityEvent_o **)((long)SVar13 + 0x100);
    SVar13 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    in_RCX = (System_Object_array *)0x0;
    SVar8 = SVar13;
    UnityEngine_Events_UnityAction___ctor();
    SVar15 = SVar12;
    if (pUVar4 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_03b55989;
    UnityEngine_Events_UnityEvent__AddListener
              (pUVar4,(UnityEngine_Events_UnityAction_o *)SVar13,(MethodInfo *)0x0);
    pMVar14 = extraout_RDX_01;
  }
  SVar12 = (System_String_Fields)
           Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button(root,"toast-close-all",pMVar14);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar15._stringLength = 0;
  SVar15._firstChar = 0;
  SVar15._6_2_ = 0;
  SVar8 = SVar12;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)SVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)CONCAT44(extraout_var_00,bVar5);
  }
  if (SVar12 != (System_String_Fields)0x0) {
    pUVar4 = *(UnityEngine_Events_UnityEvent_o **)((long)SVar12 + 0x100);
    SVar12 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
    in_RCX = (System_Object_array *)0x0;
    SVar8 = SVar12;
    UnityEngine_Events_UnityAction___ctor();
    SVar15 = SVar6;
    if (pUVar4 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener
                (pUVar4,(UnityEngine_Events_UnityAction_o *)SVar12,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
label_03b55989:
  iVar19 = il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)SVar8,(MethodInfo *)0x0);
  *(System_String_Fields *)((long)SVar8 + 0x10) = SVar15;
  il2cpp_runtime_helper_022b4080((UnityEngine_UI_Button_Fields *)((long)SVar8 + 0x10),SVar15);
  ((System_String_o *)((long)SVar8 + 0x18))->klass = extraout_RDX_02;
  il2cpp_runtime_helper_022b4080((System_String_o *)((long)SVar8 + 0x18),extraout_RDX_02);
  *(System_Object_array **)((long)SVar8 + 0x20) = in_RCX;
  pGVar16 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
            il2cpp_runtime_helper_022b4080((void **)((long)SVar8 + 0x20),in_RCX);
  (((UnityEngine_UI_Navigation_o *)((long)SVar8 + 0x28))->fields).m_Mode = iVar19;
  return pGVar16;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastTitle
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* variant, const MethodInfo* method);
// 0x3b57230

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastTitle
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *variant,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  MethodInfo *method_00;
  
  if (g_data_057a9d16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"toast-icon");
    il2cpp_runtime_helper_023445d0(&"toastTitle");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"buttonPrimary");
    il2cpp_runtime_helper_023445d0(&"toastIcon");
    il2cpp_runtime_helper_023445d0(&"cross");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"toast-title-row");
    il2cpp_runtime_helper_023445d0(&"toast-title");
    il2cpp_runtime_helper_023445d0(&"toast-close");
    g_data_057a9d16 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  *(undefined1 *)((long)&(__this->fields).hasIcon + 2) = 1;
  __this_01 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    il2cpp_runtime_helper_022b4080(&__this->fields);
    (__this->fields).id = "toast-title-row";
    il2cpp_runtime_helper_022b4080(&(__this->fields).id);
    method_00 = (MethodInfo *)&(__this->fields).style;
    (__this->fields).style = "clear";
    il2cpp_runtime_helper_022b4080();
    pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(8.0,method_00);
    (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
    il2cpp_runtime_helper_022b4080(&(__this->fields).search,pGVar1);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 1;
    __this_01 = pGVar3;
    System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).type = "Icon";
      il2cpp_runtime_helper_022b4080(&pGVar3->fields);
      __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar3->fields).id;
      (pGVar3->fields).id = "toast-icon";
      il2cpp_runtime_helper_022b4080();
      if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
        (pGVar3->fields).icon = (toast->fields).Icon;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).icon);
        pSVar4 = System_String__Concat_3ae5ba0("toastIcon",variant,(MethodInfo *)0x0);
        __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar3->fields).style;
        (pGVar3->fields).style = pSVar4;
        il2cpp_runtime_helper_022b4080();
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          if ((int)pGVar2->max_length == 0) goto label_03b5762d;
          pGVar2->m_Items[0] = pGVar3;
          il2cpp_runtime_helper_022b4080(pGVar2->m_Items);
          pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
          *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 1;
          __this_01 = pGVar3;
          System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar3->fields).type = "Text";
            il2cpp_runtime_helper_022b4080(&pGVar3->fields);
            (pGVar3->fields).id = "toast-title";
            il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id);
            (pGVar3->fields).text = (toast->fields).Title;
            il2cpp_runtime_helper_022b4080(&(pGVar3->fields).text);
            (pGVar3->fields).style = "toastTitle";
            il2cpp_runtime_helper_022b4080(&(pGVar3->fields).style);
            __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
            (__this_00->fields).clip = 0x3f800000;
            __this_01 = __this_00;
            System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
            if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (__this_00->fields).hasIcon = 0x3f800000;
              __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar3->fields).search;
              (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)__this_00;
              il2cpp_runtime_helper_022b4080();
              if ((uint)pGVar2->max_length < 2) goto label_03b5762d;
              pGVar2->m_Items[1] = pGVar3;
              il2cpp_runtime_helper_022b4080(pGVar2->m_Items + 1);
              pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
              *(undefined1 *)((long)&(pGVar3->fields).hasIcon + 2) = 1;
              __this_01 = pGVar3;
              System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
              if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar3->fields).type = "Button";
                il2cpp_runtime_helper_022b4080(&pGVar3->fields);
                (pGVar3->fields).id = "toast-close";
                il2cpp_runtime_helper_022b4080(&(pGVar3->fields).id);
                (pGVar3->fields).icon = "cross";
                il2cpp_runtime_helper_022b4080(&(pGVar3->fields).icon);
                *(undefined1 *)&(pGVar3->fields).hasIcon = 1;
                __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar3->fields).style;
                (pGVar3->fields).style = "buttonPrimary";
                il2cpp_runtime_helper_022b4080();
                if (2 < (uint)pGVar2->max_length) {
                  pGVar2->m_Items[2] = pGVar3;
                  il2cpp_runtime_helper_022b4080(pGVar2->m_Items + 2,pGVar3);
                  (__this->fields).deferredChildren = pGVar2;
                  il2cpp_runtime_helper_022b4080(&(__this->fields).deferredChildren,pGVar2);
                  return __this;
                }
                goto label_03b5762d;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b5762d:
  il2cpp_runtime_helper_022b2ca0();
  *(undefined1 *)((long)&(__this_01->fields).hasIcon + 2) = 1;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Button
// il2cpp: UnityEngine_UI_Button_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button (UnityEngine_GameObject_o* root, System_String_o* id, const MethodInfo* method);
// 0x3b55a10

UnityEngine_UI_Button_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
          (UnityEngine_GameObject_o *root,System_String_o *id,MethodInfo *method)

{
  char cVar1;
  System_Object_array *__this;
  il2cpp_array_size_t *piVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *root_00;
  System_Object_array *pSVar4;
  UnityEngine_UI_Button_o *pUVar5;
  System_Object_array *__this_00;
  UnityEngine_UI_Button_o *b;
  Il2CppObject *pIVar6;
  undefined4 extraout_var;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  UnityEngine_UI_Button_o *extraout_RAX;
  UnityEngine_UI_Button_o *extraout_RAX_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  uint index;
  System_Object_array *pSVar7;
  MethodInfo *pMVar8;
  System_Object_array *__this_01;
  
  if (g_data_057a9d17 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d17 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  root_00 = (UnityEngine_Transform_o *)0x0;
  pSVar7 = (System_Object_array *)0x0;
  __this_01 = (System_Object_array *)root;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar8 = extraout_RDX;
  if ((char)bVar3 != '\0') {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_03b55ae3;
    root_00 = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
    pMVar8 = extraout_RDX_00;
  }
  pSVar4 = (System_Object_array *)Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep(root_00,id,pMVar8)
  ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = (System_Object_array *)0x0;
  __this_01 = pSVar4;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return (UnityEngine_UI_Button_o *)0x0;
  }
  if (pSVar4 != (System_Object_array *)0x0) {
    pUVar5 = (UnityEngine_UI_Button_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar4,MethodInfo_Button_GetComponent_Button);
    return pUVar5;
  }
label_03b55ae3:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d07 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Close_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    g_data_057a9d07 = '\x01';
  }
  __this_00 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  pSVar4 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Object_array *)0x0) {
    ((System_Collections_Generic_List_object__Fields *)&__this_00->bounds)->_items = __this_01;
    pSVar4 = __this_01;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_List_object__Fields *)&__this_00->bounds);
    __this = (System_Object_array *)__this_01->m_Items[0];
    b = (UnityEngine_UI_Button_o *)
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key
                  ((Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pSVar7,(MethodInfo *)pSVar4);
    pUVar5 = b;
    pSVar4 = pSVar7;
    if (g_data_057a9d0f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      pSVar4 = (System_Object_array *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
      pUVar5 = (UnityEngine_UI_Button_o *)il2cpp_runtime_helper_023445d0();
      g_data_057a9d0f = '\x01';
    }
    if (__this != (System_Object_array *)0x0) {
      if (0 < (int)__this->max_length) {
        index = 0;
        do {
          pSVar4 = __this;
          pIVar6 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          if (pIVar6 == (Il2CppObject *)0x0) goto label_03b55de7;
          bVar3 = System_String__op_Equality
                            ((System_String_o *)pIVar6[1].klass,(System_String_o *)b,(MethodInfo *)0x0);
          pUVar5 = (UnityEngine_UI_Button_o *)CONCAT44(extraout_var,bVar3);
          if ((char)bVar3 != '\0') {
            pSVar4 = (System_Object_array *)0x0;
            if ((System_Collections_Generic_List_object__o *)__this_01->m_Items[0] ==
                (System_Collections_Generic_List_object__o *)0x0) goto label_03b55de7;
            pIVar6 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01->m_Items[0],index,
                                MethodInfo_GisketchToastManager_ToastItem_get_Item);
            piVar2 = &__this_00->max_length;
            __this_00->max_length = (il2cpp_array_size_t)pIVar6;
            il2cpp_runtime_helper_022b4080(piVar2);
            pSVar4 = (System_Object_array *)0x0;
            if ((System_Collections_Generic_List_object__o *)__this_01->m_Items[0] ==
                (System_Collections_Generic_List_object__o *)0x0) goto label_03b55de7;
            pMVar8 = (MethodInfo *)(ulong)index;
            System_Collections_Generic_List_object___RemoveAt
                      ((System_Collections_Generic_List_object__o *)__this_01->m_Items[0],index,MethodInfo_Void_RemoveAt);
            pSVar4 = __this_01;
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending
                      ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_01,pMVar8);
            if (g_data_057a9d0a == '\0') {
              pSVar4 = (System_Object_array *)&MethodInfo_Int32_get_Count;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9d0a = '\x01';
            }
            if (__this_01->m_Items[0] == (Il2CppObject *)0x0) goto label_03b55de7;
            if (*(int *)&__this_01->m_Items[0][1].monitor != 0) {
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_01,pMVar8);
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_01,pMVar8);
              pMVar8 = (MethodInfo *)0x1;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_01,1,method_00);
            }
            if (*(int *)((long)TypeInfo_GisketchMotion->m_Items + 0xc4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              cVar1 = *(char *)&TypeInfo_GisketchMotion->m_Items[0x13]->klass;
              pSVar4 = TypeInfo_GisketchMotion;
            }
            else {
              cVar1 = *(char *)&TypeInfo_GisketchMotion->m_Items[0x13]->klass;
              pSVar4 = TypeInfo_GisketchMotion;
            }
            TypeInfo_GisketchMotion = pSVar4;
            if (cVar1 != '\0') {
              if (*piVar2 == 0) goto label_03b55de7;
              pSVar7 = *(System_Object_array **)(*piVar2 + 0x18);
              if (*(int *)((long)pSVar4->m_Items + 0xc4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar8 = (MethodInfo *)0x0;
              t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit
                            ((Gisketch_Aottg2UI_Building_GisketchView_o *)pSVar7,(MethodInfo *)0x0);
              pSVar4 = pSVar7;
              if (t != (DG_Tweening_Tween_o *)0x0) {
                action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                DG_Tweening_TweenCallback___ctor();
                pUVar5 = (UnityEngine_UI_Button_o *)
                         DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                   ((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
                return pUVar5;
              }
            }
            if (*piVar2 != 0) {
              pSVar4 = *(System_Object_array **)(*piVar2 + 0x20);
              if (g_data_057a9d23 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                g_data_057a9d23 = '\x01';
              }
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                        ((UnityEngine_RectTransform_o *)pSVar4,pMVar8);
              pUVar5 = (UnityEngine_UI_Button_o *)__this_01->m_Items[0];
              if (pUVar5 != (UnityEngine_UI_Button_o *)0x0) {
                if (*(int *)&(pUVar5->fields).m_CancellationTokenSource != 0) {
                  return pUVar5;
                }
                Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost
                          ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_01,pMVar8);
                return extraout_RAX;
              }
            }
            goto label_03b55de7;
          }
          index = index + 1;
        } while ((int)index < (int)__this->max_length);
      }
      return pUVar5;
    }
  }
label_03b55de7:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pSVar4->obj,(MethodInfo *)0x0);
  return extraout_RAX_00;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$FindDeep
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x3b577f0

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

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
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  long local_38;
  
  if (g_data_057a9d18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057a9d18 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar14 = (UnityEngine_Transform_o *)0x0;
  if ((char)bVar7 == '\0') {
    if (root == (UnityEngine_Transform_o *)0x0) {
label_03b57ad4:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
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
                goto label_03b57933;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar11);
          }
          pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_03b57933:
          cVar6 = (*pVVar8->methodPtr)(unaff_R12,pVVar8->method);
          if (cVar6 == '\0') {
            iVar13 = 7;
            goto label_03b57a33;
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
                goto label_03b579b8;
              }
              lVar11 = lVar11 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar11);
          }
          pVVar8 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,1);
label_03b579b8:
          auVar15 = (*pVVar8->methodPtr)(unaff_R12,pVVar8->method);
          method_00 = auVar15._8_8_;
          pUVar14 = auVar15._0_8_;
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            bVar1 = (TypeInfo_Transform->_2).naturalAligment;
            method_00 = (MethodInfo *)(ulong)bVar1;
            if (((pUVar14->klass->_2).naturalAligment < bVar1) ||
               ((pUVar14->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_Transform)) {
              il2cpp_runtime_helper_022b2fd0(pUVar14);
              goto label_03b57ad4;
            }
          }
          x = Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep(pUVar14,id,method_00);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            iVar13 = 6;
            goto label_03b57a35;
          }
        } while( true );
      }
    }
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar16 = il2cpp_runtime_helper_022fefe0();
      iVar13 = 0;
      if (auVar16._8_4_ != 1) {
        plVar9 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
        if (plVar9 == (long *)0x0) goto label_03b57bd6;
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto label_03b57baf;
        lVar12 = 0;
        goto label_03b57ba0;
      }
      plVar9 = (long *)__cxa_begin_catch(auVar16._0_8_);
      local_38 = *plVar9;
      __cxa_end_catch();
label_03b57a33:
      x = (UnityEngine_Transform_o *)0x0;
label_03b57a35:
      plVar9 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
      if (plVar9 != (long *)0x0) {
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar12 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
              puVar10 = (undefined8 *)
                        (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
              goto label_03b57a9d;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_03b57a9d:
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
label_03b57ba0:
    if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)(lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto label_03b57bcd;
    }
  }
label_03b57baf:
  puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar9,TypeInfo_IDisposable,0);
label_03b57bcd:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
label_03b57bd6:
  _Unwind_Resume(auVar16._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Key
// il2cpp: System_String_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3b54090

System_String_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  undefined4 extraout_var;
  System_Enum_o *__this;
  System_Enum_o local_30;
  int32_t local_20;
  
  if (g_data_057a9d19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgToastVariant);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"|");
    g_data_057a9d19 = '\x01';
  }
  if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((toast->fields).UpdateKey,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return (toast->fields).UpdateKey;
    }
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    local_30.klass = TypeInfo_AottgToastVariant;
    local_30.monitor = (void *)0xffffffffffffffff;
    local_20 = (toast->fields).Variant;
    __this = &local_30;
    pSVar2 = System_Enum__ToString(__this,(MethodInfo *)0x0);
    if (values == (System_String_array *)0x0) goto label_03b5421e;
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar2;
      il2cpp_runtime_helper_022b4080(values->m_Items,pSVar2);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = "|";
        il2cpp_runtime_helper_022b4080(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = (toast->fields).Icon;
          il2cpp_runtime_helper_022b4080(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = "|";
            il2cpp_runtime_helper_022b4080(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = (toast->fields).Title;
              il2cpp_runtime_helper_022b4080(values->m_Items + 4);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = "|";
                il2cpp_runtime_helper_022b4080(values->m_Items + 5);
                if (6 < (uint)values->max_length) {
                  values->m_Items[6] = (toast->fields).Content;
                  il2cpp_runtime_helper_022b4080(values->m_Items + 6);
                  pSVar2 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                  return pSVar2;
                }
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  __this = TypeInfo_string;
  il2cpp_runtime_helper_022b2a40();
label_03b5421e:
  il2cpp_runtime_helper_022b2c90();
  if (__this == (System_Enum_o *)0x0) {
    return (System_String_o *)0x0;
  }
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)__this[3].klass,(MethodInfo *)0x0);
  return (System_String_o *)(CONCAT71((int7)(CONCAT44(extraout_var,bVar1) >> 8),(char)bVar1) ^ 1);
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Row
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row (float gap, const MethodInfo* method);
// 0x3b57670

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(float gap,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar9;
  System_String_o *a;
  VirtualInvokeData *pVVar10;
  UnityEngine_Transform_o *root;
  long *plVar11;
  undefined8 *puVar12;
  MethodInfo *method_00;
  System_String_o *b;
  long lVar13;
  long lVar14;
  System_Collections_IEnumerator_o *unaff_R12;
  int iVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  long lStack_68;
  
  if (g_data_057a9d1a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    g_data_057a9d1a = '\x01';
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
  (pGVar8->fields).shrink = 1.0;
  System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar8->fields).direction = "Row";
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).alignItems = "Center";
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).alignItems);
    (pGVar8->fields).gap = gap;
    return pGVar8;
  }
  fVar16 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057a9d1b = '\x01';
  }
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
  (pGVar9->fields).shrink = 1.0;
  b = (System_String_o *)0x0;
  pGVar8 = pGVar9;
  System_Object___ctor((Il2CppObject *)pGVar9,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar9->fields).direction = "Column";
    il2cpp_runtime_helper_022b4080(&pGVar9->fields);
    (pGVar9->fields).alignItems = "Stretch";
    il2cpp_runtime_helper_022b4080(&(pGVar9->fields).alignItems);
    (pGVar9->fields).gap = fVar16;
    (pGVar9->fields).grow = 1.0;
    return pGVar9;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057a9d18 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  if ((char)bVar7 == '\0') {
    if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
label_03b57ad4:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      a = UnityEngine_Object__get_name((UnityEngine_Object_o *)pGVar8,(MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return pGVar8;
      }
      unaff_R12 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)pGVar8,(MethodInfo *)0x0);
      if (unaff_R12 != (System_Collections_IEnumerator_o *)0x0) {
        lStack_68 = 0;
        do {
          pSVar4 = unaff_R12->klass;
          uVar2._0_1_ = (pSVar4->_2).rank;
          uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
                pVVar10 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
                goto label_03b57933;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar13);
          }
          pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_03b57933:
          cVar6 = (*pVVar10->methodPtr)(unaff_R12,pVVar10->method);
          if (cVar6 == '\0') {
            iVar15 = 7;
            goto label_03b57a33;
          }
          pSVar4 = unaff_R12->klass;
          uVar3._0_1_ = (pSVar4->_2).rank;
          uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
                pVVar10 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar13) + 1);
                goto label_03b579b8;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar13);
          }
          pVVar10 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,1);
label_03b579b8:
          auVar17 = (*pVVar10->methodPtr)(unaff_R12,pVVar10->method);
          method_00 = auVar17._8_8_;
          root = auVar17._0_8_;
          if (root != (UnityEngine_Transform_o *)0x0) {
            bVar1 = (TypeInfo_Transform->_2).naturalAligment;
            method_00 = (MethodInfo *)(ulong)bVar1;
            if (((root->klass->_2).naturalAligment < bVar1) ||
               ((root->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_Transform)) {
              il2cpp_runtime_helper_022b2fd0(root);
              goto label_03b57ad4;
            }
          }
          pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                   Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep(root,b,method_00);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            iVar15 = 6;
            goto label_03b57a35;
          }
        } while( true );
      }
    }
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar18 = il2cpp_runtime_helper_022fefe0();
      iVar15 = 0;
      if (auVar18._8_4_ != 1) {
        plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
        if (plVar11 == (long *)0x0) goto label_03b57bd6;
        lVar13 = *plVar11;
        if ((ulong)*(ushort *)(lVar13 + 0x12e) == 0) goto label_03b57baf;
        lVar14 = 0;
        goto label_03b57ba0;
      }
      plVar11 = (long *)__cxa_begin_catch(auVar18._0_8_);
      lStack_68 = *plVar11;
      __cxa_end_catch();
label_03b57a33:
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
label_03b57a35:
      plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
      if (plVar11 != (long *)0x0) {
        lVar13 = *plVar11;
        if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
              puVar12 = (undefined8 *)
                        (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
              goto label_03b57a9d;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
        }
        puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_03b57a9d:
        (*(code *)*puVar12)(plVar11,puVar12[1]);
      }
    } while (lStack_68 != 0);
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    if (iVar15 == 6) {
      pGVar9 = pGVar8;
    }
  }
  return pGVar9;
  while (lVar14 = lVar14 + 0x10, (ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14) {
label_03b57ba0:
    if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
      puVar12 = (undefined8 *)(lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
      goto label_03b57bcd;
    }
  }
label_03b57baf:
  puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_03b57bcd:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
label_03b57bd6:
  _Unwind_Resume(auVar18._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$Column
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column (float gap, const MethodInfo* method);
// 0x3b57730

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchToastManager__Column(float gap,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  System_String_o *a;
  VirtualInvokeData *pVVar9;
  UnityEngine_Transform_o *root;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  long *plVar11;
  undefined8 *puVar12;
  MethodInfo *method_00;
  System_String_o *b;
  long lVar13;
  long lVar14;
  System_Collections_IEnumerator_o *unaff_R12;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  long lStack_50;
  
  if (g_data_057a9d1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057a9d1b = '\x01';
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
  (pGVar8->fields).shrink = 1.0;
  b = (System_String_o *)0x0;
  pGVar10 = pGVar8;
  System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar8->fields).direction = "Column";
    il2cpp_runtime_helper_022b4080(&pGVar8->fields);
    (pGVar8->fields).alignItems = "Stretch";
    il2cpp_runtime_helper_022b4080(&(pGVar8->fields).alignItems);
    (pGVar8->fields).gap = gap;
    (pGVar8->fields).grow = 1.0;
    return pGVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d18 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Transform);
    g_data_057a9d18 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  if ((char)bVar7 == '\0') {
    if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
label_03b57ad4:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      a = UnityEngine_Object__get_name((UnityEngine_Object_o *)pGVar10,(MethodInfo *)0x0);
      bVar7 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return pGVar10;
      }
      unaff_R12 = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)pGVar10,(MethodInfo *)0x0);
      if (unaff_R12 != (System_Collections_IEnumerator_o *)0x0) {
        lStack_50 = 0;
        do {
          pSVar4 = unaff_R12->klass;
          uVar2._0_1_ = (pSVar4->_2).rank;
          uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar2 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
                pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar13);
                goto label_03b57933;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)uVar2 << 4 != lVar13);
          }
          pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_03b57933:
          cVar6 = (*pVVar9->methodPtr)(unaff_R12,pVVar9->method);
          if (cVar6 == '\0') {
            iVar15 = 7;
            goto label_03b57a33;
          }
          pSVar4 = unaff_R12->klass;
          uVar3._0_1_ = (pSVar4->_2).rank;
          uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
          if ((ulong)uVar3 != 0) {
            pIVar5 = (pSVar4->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(long *)((long)&pIVar5->interfaceType + lVar13) == TypeInfo_IEnumerator) {
                pVVar9 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar13) + 1);
                goto label_03b579b8;
              }
              lVar13 = lVar13 + 0x10;
            } while ((ulong)uVar3 << 4 != lVar13);
          }
          pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,1);
label_03b579b8:
          auVar16 = (*pVVar9->methodPtr)(unaff_R12,pVVar9->method);
          method_00 = auVar16._8_8_;
          root = auVar16._0_8_;
          if (root != (UnityEngine_Transform_o *)0x0) {
            bVar1 = (TypeInfo_Transform->_2).naturalAligment;
            method_00 = (MethodInfo *)(ulong)bVar1;
            if (((root->klass->_2).naturalAligment < bVar1) ||
               ((root->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_Transform)) {
              il2cpp_runtime_helper_022b2fd0(root);
              goto label_03b57ad4;
            }
          }
          pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                    Gisketch_Aottg2UI_Overlays_GisketchToastManager__FindDeep(root,b,method_00);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            iVar15 = 6;
            goto label_03b57a35;
          }
        } while( true );
      }
    }
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar17 = il2cpp_runtime_helper_022fefe0();
      iVar15 = 0;
      if (auVar17._8_4_ != 1) {
        plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
        if (plVar11 == (long *)0x0) goto label_03b57bd6;
        lVar13 = *plVar11;
        if ((ulong)*(ushort *)(lVar13 + 0x12e) == 0) goto label_03b57baf;
        lVar14 = 0;
        goto label_03b57ba0;
      }
      plVar11 = (long *)__cxa_begin_catch(auVar17._0_8_);
      lStack_50 = *plVar11;
      __cxa_end_catch();
label_03b57a33:
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
label_03b57a35:
      plVar11 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
      if (plVar11 != (long *)0x0) {
        lVar13 = *plVar11;
        if ((ulong)*(ushort *)(lVar13 + 0x12e) != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
              puVar12 = (undefined8 *)
                        (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
              goto label_03b57a9d;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14);
        }
        puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_03b57a9d:
        (*(code *)*puVar12)(plVar11,puVar12[1]);
      }
    } while (lStack_50 != 0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    if (iVar15 == 6) {
      pGVar8 = pGVar10;
    }
  }
  return pGVar8;
  while (lVar14 = lVar14 + 0x10, (ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14) {
label_03b57ba0:
    if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
      puVar12 = (undefined8 *)(lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
      goto label_03b57bcd;
    }
  }
label_03b57baf:
  puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar11,TypeInfo_IDisposable,0);
label_03b57bcd:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
label_03b57bd6:
  _Unwind_Resume(auVar17._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ApplyStack
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, bool animate, const MethodInfo* method);
// 0x3b56280

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,bool_conflict animate,
               MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  undefined8 uVar2;
  int iVar3;
  UnityEngine_RectTransform_o *pUVar4;
  DG_Tweening_Tween_o *t;
  Il2CppClass *pIVar5;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar6;
  UnityEngine_Vector2_o value;
  bool_conflict bVar7;
  DG_Tweening_Sequence_o *pDVar8;
  Il2CppObject *pIVar9;
  UnityEngine_UI_Button_o *x;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar10;
  MethodInfo *method_00;
  int32_t iVar11;
  uint index;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_01;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar12;
  char cVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o scale;
  float local_7c;
  
  if (g_data_057a9d1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9d1c = '\x01';
  }
  pUVar4 = (__this->fields)._stack;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar10 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar4 = (__this->fields)._stack;
    __this_01 = __this;
    fVar15 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight(__this,pMVar10);
    if ((char)(__this->fields)._expanded == '\0') {
      (__this->fields)._expandedStackHeight = 0.0;
      fVar18 = fVar15;
    }
    else {
      fVar18 = (__this->fields)._expandedStackHeight;
      if (fVar18 <= fVar15) {
        fVar18 = fVar15;
      }
      (__this->fields)._expandedStackHeight = fVar18;
    }
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_03b567ec;
    value.fields.y = fVar18;
    value.fields.x = 560.0;
    UnityEngine_RectTransform__set_sizeDelta(pUVar4,value,(MethodInfo *)0x0);
  }
  ppDVar1 = &(__this->fields)._stackTween;
  t = (__this->fields)._stackTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  *ppDVar1 = (DG_Tweening_Tween_o *)0x0;
  pDVar8 = (DG_Tweening_Sequence_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppDVar1,0);
  if ((char)animate == '\0') {
label_03b56435:
    __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pDVar8 = (DG_Tweening_Sequence_o *)0x0;
    bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar7 == '\0') goto label_03b56435;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar13 = **(char **)(TypeInfo_GisketchMotion + 0xb8);
    }
    else {
      cVar13 = **(char **)(TypeInfo_GisketchMotion + 0xb8);
    }
    if (cVar13 != '\0') {
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar8 = (DG_Tweening_Sequence_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar8,1,MethodInfo_Sequence_SetUpdate_Sequence);
      goto label_03b56435;
    }
    pDVar8 = (DG_Tweening_Sequence_o *)0x0;
    __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
  }
  if (__this_01 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    iVar11 = 0;
    local_7c = 0.0;
    if (0 < *(int *)&(__this_01->fields)._context) {
      do {
        pIVar9 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,iVar11,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if (pIVar9 == (Il2CppObject *)0x0) goto label_03b567ec;
        pIVar5 = pIVar9[2].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pIVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          cVar13 = '\x01';
          fVar15 = local_7c;
          pMVar10 = extraout_RDX;
          if ((char)(__this->fields)._expanded == '\0') {
            if (iVar11 == 0) {
              cVar13 = '\0';
              fVar15 = 0.0;
            }
            else {
              if (g_data_057a9d1f == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
                g_data_057a9d1f = '\x01';
                pMVar10 = extraout_RDX_03;
              }
              __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
              if (__this_01 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) goto label_03b567ec;
              if (*(int *)&(__this_01->fields)._context < 1) {
                fVar15 = 0.0;
              }
              else {
                pIVar9 = System_Collections_Generic_List_object___get_Item
                                   ((System_Collections_Generic_List_object__o *)__this_01,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
                if (pIVar9 == (Il2CppObject *)0x0) goto label_03b567ec;
                fVar15 = *(float *)&pIVar9[2].monitor + -96.0;
                pMVar10 = extraout_RDX_04;
              }
              fVar18 = 0.0;
              if (0.0 <= fVar15) {
                fVar18 = fVar15;
              }
              cVar13 = (char)(__this->fields)._expanded;
              fVar15 = (float)iVar11 * 14.0 + fVar18;
            }
          }
          if (g_data_057a6932 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
            g_data_057a6932 = '\x01';
            pMVar10 = extraout_RDX_00;
          }
          uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          fVar19 = (float)uVar2;
          fVar20 = (float)((ulong)uVar2 >> 0x20);
          fVar18 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
          if (cVar13 == '\0') {
            fVar16 = (float)iVar11 * -0.06 + 1.0;
            fVar17 = 0.82;
            if (0.82 <= fVar16) {
              fVar17 = fVar16;
            }
            fVar18 = fVar18 * fVar17;
            fVar19 = fVar19 * fVar17;
            fVar20 = fVar20 * fVar17;
          }
          value_00.fields.y = fVar20;
          value_00.fields.x = fVar19;
          if (g_data_057a9d1f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
            g_data_057a9d1f = '\x01';
            pMVar10 = extraout_RDX_01;
          }
          __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
          if (__this_01 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) goto label_03b567ec;
          fVar17 = 96.0;
          if (iVar11 < *(int *)&(__this_01->fields)._context) {
            pIVar9 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,iVar11,MethodInfo_GisketchToastManager_ToastItem_get_Item);
            if (pIVar9 == (Il2CppObject *)0x0) goto label_03b567ec;
            fVar17 = *(float *)&pIVar9[2].monitor;
            pMVar10 = extraout_RDX_02;
          }
          local_7c = local_7c + fVar17 + 8.0;
          if (pDVar8 != (DG_Tweening_Sequence_o *)0x0) {
            scale.fields.y = fVar20;
            scale.fields.x = fVar19;
            scale.fields.z = fVar18;
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot
                      (pDVar8,(UnityEngine_RectTransform_o *)pIVar5,
                       (UnityEngine_Vector2_o)((ulong)(uint)fVar15 << 0x20),scale,pMVar10);
            goto label_03b564c1;
          }
          if (pIVar5 == (Il2CppClass *)0x0) goto label_03b567ec;
          UnityEngine_RectTransform__set_anchoredPosition
                    ((UnityEngine_RectTransform_o *)pIVar5,
                     (UnityEngine_Vector2_o)((ulong)(uint)fVar15 << 0x20),(MethodInfo *)0x0);
          value_00.fields.z = fVar18;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pIVar5,value_00,(MethodInfo *)0x0);
          __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
        }
        else {
label_03b564c1:
          __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
        }
        if (__this_01 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) goto label_03b567ec;
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)&(__this_01->fields)._context);
    }
    (__this->fields)._stackTween = (DG_Tweening_Tween_o *)pDVar8;
    il2cpp_runtime_helper_022b4080(ppDVar1,pDVar8);
    __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
    if (__this_01 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
      iVar11 = *(int *)&(__this_01->fields)._context + -1;
      if (iVar11 < 0) {
        return;
      }
      while (pIVar9 = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,iVar11,MethodInfo_GisketchToastManager_ToastItem_get_Item),
            pIVar9 != (Il2CppObject *)0x0) {
        pIVar5 = pIVar9[2].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pIVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
          if ((__this_01 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) ||
             (pIVar9 = System_Collections_Generic_List_object___get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_01,iVar11,MethodInfo_GisketchToastManager_ToastItem_get_Item),
             pIVar9 == (Il2CppObject *)0x0)) break;
          __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
          if (pIVar9[2].klass == (Il2CppClass *)0x0) break;
          UnityEngine_Transform__SetAsLastSibling
                    ((UnityEngine_Transform_o *)pIVar9[2].klass,(MethodInfo *)0x0);
        }
        iVar11 = iVar11 + -1;
        if (iVar11 < 0) {
          return;
        }
        __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
        if (__this_01 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) break;
      }
    }
  }
label_03b567ec:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d20 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"toast-close-all");
    g_data_057a9d20 = '\x01';
  }
  pSVar12 = (__this_01->fields)._items;
  if (pSVar12 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
label_03b569a0:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  index = 0;
  do {
    iVar3 = (pSVar12->fields)._size;
    if (iVar3 <= (int)index) {
      return;
    }
    uVar14 = 0;
    if ((index == 0) && (uVar14 = 1, iVar3 < 2)) {
      pSVar6 = (__this_01->fields)._pending;
      if (pSVar6 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) goto label_03b569a0;
      uVar14 = (ulong)(0 < (pSVar6->fields)._size);
    }
    pIVar9 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar12,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
    if ((pIVar9 == (Il2CppObject *)0x0) || (pIVar9[1].monitor == (void *)0x0)) goto label_03b569a0;
    x = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
                  (*(UnityEngine_GameObject_o **)((long)pIVar9[1].monitor + 0x18),"toast-close-all",method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if ((x == (UnityEngine_UI_Button_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_03b569a0;
      UnityEngine_GameObject__SetActive(__this_00,(bool_conflict)uVar14,(MethodInfo *)0x0);
    }
    pSVar12 = (__this_01->fields)._items;
    if ((pSVar12 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
       (pIVar9 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar12,index,MethodInfo_GisketchToastManager_ToastItem_get_Item),
       pIVar9 == (Il2CppObject *)0x0)) goto label_03b569a0;
    fVar15 = *(float *)(&g_data_00d1d5c0 + uVar14 * 4);
    *(float *)&pIVar9[2].monitor = fVar15;
    pSVar12 = (__this_01->fields)._items;
    if (pSVar12 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
    goto label_03b569a0;
    pMVar10 = (MethodInfo *)(ulong)index;
    item = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)
           System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar12,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight(item,fVar15,pMVar10);
    index = index + 1;
    pSVar12 = (__this_01->fields)._items;
    if (pSVar12 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
    goto label_03b569a0;
  } while( true );
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AppliedStackHeight
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__AppliedStackHeight (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3b57c00

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__AppliedStackHeight
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight(__this,method);
  if ((char)(__this->fields)._expanded != '\0') {
    fVar2 = (__this->fields)._expandedStackHeight;
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
    (__this->fields)._expandedStackHeight = fVar2;
    return fVar2;
  }
  (__this->fields)._expandedStackHeight = 0.0;
  return fVar1;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetSlot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlot (UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o position, UnityEngine_Vector3_o scale, const MethodInfo* method);
// 0x3b57ed0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlot
               (UnityEngine_RectTransform_o *rect,UnityEngine_Vector2_o position,UnityEngine_Vector3_o scale,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int iVar2;
  System_Collections_Generic_List_object__o *__this;
  
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(rect,position,(MethodInfo *)0x0);
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)rect,scale,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9d1e = '\x01';
  }
  __this = rect[1].monitor;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    iVar2 = (__this->fields)._size;
    if (iVar2 != 0) {
      if (*(char *)&rect[3].klass == '\0') {
        if (g_data_057a9d1f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
          g_data_057a9d1f = '\x01';
          __this = rect[1].monitor;
          if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_03b58181;
        }
        if ((__this->fields)._size < 1) {
          iVar2 = (__this->fields)._size;
        }
        else {
          pIVar1 = System_Collections_Generic_List_object___get_Item(__this,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          if ((pIVar1 == (Il2CppObject *)0x0) ||
             (__this = rect[1].monitor, __this == (System_Collections_Generic_List_object__o *)0x0))
          goto label_03b58181;
          iVar2 = (__this->fields)._size;
        }
        if (0 < iVar2 + -1) {
          if (g_data_057a9d1f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
            g_data_057a9d1f = '\x01';
            __this = rect[1].monitor;
            if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_03b58181;
          }
          if ((0 < (__this->fields)._size) &&
             (pIVar1 = System_Collections_Generic_List_object___get_Item(__this,0,MethodInfo_GisketchToastManager_ToastItem_get_Item),
             pIVar1 == (Il2CppObject *)0x0)) goto label_03b58181;
        }
      }
      else if (0 < iVar2) {
        iVar2 = 0;
        do {
          if (g_data_057a9d1f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
            g_data_057a9d1f = '\x01';
          }
          __this = rect[1].monitor;
          if ((__this == (System_Collections_Generic_List_object__o *)0x0) ||
             (((iVar2 < (__this->fields)._size &&
               (pIVar1 = System_Collections_Generic_List_object___get_Item(__this,iVar2,MethodInfo_GisketchToastManager_ToastItem_get_Item),
               pIVar1 == (Il2CppObject *)0x0)) || (rect[1].monitor == (void *)0x0)))) goto label_03b58181;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)((long)rect[1].monitor + 0x18));
      }
    }
    return;
  }
label_03b58181:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$AnimateSlot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot (DG_Tweening_Sequence_o* sequence, UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o position, UnityEngine_Vector3_o scale, const MethodInfo* method);
// 0x3b57d50

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__AnimateSlot
               (DG_Tweening_Sequence_o *sequence,UnityEngine_RectTransform_o *rect,
               UnityEngine_Vector2_o position,UnityEngine_Vector3_o scale,MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_RectTransform_o *__this_00;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *pDVar2;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t_00;
  Il2CppObject *pIVar3;
  int iVar4;
  UnityEngine_RectTransform_o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o value;
  
  fVar7 = scale.fields.z;
  fVar5 = scale.fields.x;
  fVar6 = scale.fields.y;
  if (g_data_057a9d1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AnimateSlot_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass49_0);
    g_data_057a9d1d = '\x01';
  }
  __this_00 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass49_0);
  __this_01 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    (__this_00->fields).m_CachedPtr = (intptr_t)rect;
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    __this_00[1].monitor = (void *)position.fields;
    __this = (UnityEngine_RectTransform_o *)(__this_00->fields).m_CachedPtr;
    __this_01 = (UnityEngine_RectTransform_o *)0x0;
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = UnityEngine_RectTransform__get_anchoredPosition(__this,(MethodInfo *)0x0);
      __this_00[1].klass = (UnityEngine_RectTransform_c *)UVar1.fields;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor();
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,0.12,onVirtualUpdate,(MethodInfo *)0x0);
      pDVar2 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
      DG_Tweening_TweenSettingsExtensions__Join(sequence,pDVar2,(MethodInfo *)0x0);
      t_00 = DG_Tweening_ShortcutExtensions__DOScale
                       ((UnityEngine_Transform_o *)(__this_00->fields).m_CachedPtr,scale,0.12,
                        (MethodInfo *)0x0);
      pDVar2 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)t_00,1,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      DG_Tweening_TweenSettingsExtensions__Join(sequence,pDVar2,(MethodInfo *)0x0);
      return;
    }
  }
  UVar1.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(__this_01,UVar1,(MethodInfo *)0x0);
    value.fields.y = fVar6;
    value.fields.x = fVar5;
    value.fields.z = fVar7;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_01,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9d1e = '\x01';
  }
  __this_02 = __this_01[1].monitor;
  if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar4 = (__this_02->fields)._size;
    if (iVar4 != 0) {
      if (*(char *)&__this_01[3].klass == '\0') {
        if (g_data_057a9d1f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
          g_data_057a9d1f = '\x01';
          __this_02 = __this_01[1].monitor;
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b58181;
        }
        if ((__this_02->fields)._size < 1) {
          iVar4 = (__this_02->fields)._size;
        }
        else {
          pIVar3 = System_Collections_Generic_List_object___get_Item(__this_02,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          if ((pIVar3 == (Il2CppObject *)0x0) ||
             (__this_02 = __this_01[1].monitor, __this_02 == (System_Collections_Generic_List_object__o *)0x0)
             ) goto label_03b58181;
          iVar4 = (__this_02->fields)._size;
        }
        if (0 < iVar4 + -1) {
          if (g_data_057a9d1f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
            g_data_057a9d1f = '\x01';
            __this_02 = __this_01[1].monitor;
            if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b58181;
          }
          if ((0 < (__this_02->fields)._size) &&
             (pIVar3 = System_Collections_Generic_List_object___get_Item(__this_02,0,MethodInfo_GisketchToastManager_ToastItem_get_Item),
             pIVar3 == (Il2CppObject *)0x0)) goto label_03b58181;
        }
      }
      else if (0 < iVar4) {
        iVar4 = 0;
        do {
          if (g_data_057a9d1f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
            g_data_057a9d1f = '\x01';
          }
          __this_02 = __this_01[1].monitor;
          if ((__this_02 == (System_Collections_Generic_List_object__o *)0x0) ||
             (((iVar4 < (__this_02->fields)._size &&
               (pIVar3 = System_Collections_Generic_List_object___get_Item(__this_02,iVar4,MethodInfo_GisketchToastManager_ToastItem_get_Item),
               pIVar3 == (Il2CppObject *)0x0)) || (__this_01[1].monitor == (void *)0x0)))) goto label_03b58181;
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((long)__this_01[1].monitor + 0x18));
      }
    }
    return;
  }
label_03b58181:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$StackHeight
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3b57f10

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__StackHeight
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_00;
  float fVar5;
  float extraout_XMM0_Da;
  float fVar6;
  float local_24;
  
  if (g_data_057a9d1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9d1e = '\x01';
  }
  __this_00 = (__this->fields)._items;
  if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
label_03b58181:
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  iVar2 = (__this_00->fields)._size;
  if (iVar2 == 0) {
    local_24 = 96.0;
  }
  else if ((char)(__this->fields)._expanded == '\0') {
    if (g_data_057a9d1f == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
      g_data_057a9d1f = '\x01';
      __this_00 = (__this->fields)._items;
      if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
      goto label_03b58181;
    }
    if ((__this_00->fields)._size < 1) {
      local_24 = 96.0;
      iVar2 = (__this_00->fields)._size;
    }
    else {
      pIVar4 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
      if ((pIVar4 == (Il2CppObject *)0x0) ||
         (__this_00 = (__this->fields)._items,
         __this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0))
      goto label_03b58181;
      local_24 = *(float *)&pIVar4[2].monitor;
      iVar2 = (__this_00->fields)._size;
    }
    fVar5 = 96.0;
    if (0 < iVar2 + -1) {
      if (g_data_057a9d1f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
        g_data_057a9d1f = '\x01';
        __this_00 = (__this->fields)._items;
        if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
        goto label_03b58181;
      }
      fVar5 = 0.0;
      if (0 < (__this_00->fields)._size) {
        pIVar4 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if (pIVar4 == (Il2CppObject *)0x0) goto label_03b58181;
        fVar5 = *(float *)&pIVar4[2].monitor + -96.0;
      }
      fVar6 = 0.0;
      if (0.0 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = (float)(iVar2 + -1) * 14.0 + fVar6 + 96.0;
    }
    if (local_24 <= fVar5) {
      local_24 = fVar5;
    }
    local_24 = local_24 + 16.0;
  }
  else {
    local_24 = 16.0;
    if (0 < iVar2) {
      local_24 = 16.0;
      iVar2 = 0;
      do {
        if (g_data_057a9d1f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
          g_data_057a9d1f = '\x01';
        }
        __this_00 = (__this->fields)._items;
        if (__this_00 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
        goto label_03b58181;
        fVar5 = 96.0;
        if (iVar2 < (__this_00->fields)._size) {
          pIVar4 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,iVar2,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          if (pIVar4 == (Il2CppObject *)0x0) goto label_03b58181;
          fVar5 = *(float *)&pIVar4[2].monitor;
        }
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0)
        goto label_03b58181;
        iVar1 = iVar2 + 1;
        fVar6 = 0.0;
        if (iVar2 != 0) {
          fVar6 = 8.0;
        }
        local_24 = local_24 + fVar6 + fVar5;
        iVar2 = iVar1;
      } while (iVar1 < (pSVar3->fields)._size);
    }
  }
  return local_24;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$HeightAt
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__HeightAt (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, int32_t index, const MethodInfo* method);
// 0x3b57cd0

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__HeightAt
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,int32_t index,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar3;
  void *pvVar4;
  Il2CppObject *pIVar5;
  UnityEngine_RectTransform_o *__this_01;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *pDVar6;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t_00;
  undefined4 in_register_00000034;
  ulong uVar7;
  ulong uVar8;
  DG_Tweening_Sequence_o *s;
  UnityEngine_RectTransform_o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  float extraout_XMM0_Da;
  float fVar9;
  float extraout_XMM0_Da_01;
  undefined4 in_XMM1_Da;
  undefined4 uVar10;
  float fVar11;
  undefined4 in_XMM1_Db;
  undefined4 uVar12;
  float in_XMM2_Da;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o value;
  float fStack_ac;
  float extraout_XMM0_Da_00;
  
  uVar7 = CONCAT44(in_register_00000034,index);
  uVar8 = (ulong)(uint)index;
  if (g_data_057a9d1f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    g_data_057a9d1f = '\x01';
  }
  if (index < 0) {
    return 96.0;
  }
  s = (DG_Tweening_Sequence_o *)(__this->fields)._items;
  if (s != (DG_Tweening_Sequence_o *)0x0) {
    if ((int)(s->fields).sequencedEndPosition <= index) {
      return 96.0;
    }
    pIVar5 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)s,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
    uVar7 = uVar8;
    if (pIVar5 != (Il2CppObject *)0x0) {
      return *(float *)&pIVar5[2].monitor;
    }
  }
  pvVar4 = (void *)il2cpp_runtime_helper_022b2c90();
  uVar10 = in_XMM1_Da;
  uVar12 = in_XMM1_Db;
  fVar9 = in_XMM2_Da;
  if (g_data_057a9d1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AnimateSlot_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass49_0);
    g_data_057a9d1d = '\x01';
  }
  __this_01 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass49_0);
  __this_02 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    (__this_01->fields).m_CachedPtr = uVar7;
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    __this_01[1].monitor = pvVar4;
    __this_00 = (UnityEngine_RectTransform_o *)(__this_01->fields).m_CachedPtr;
    __this_02 = (UnityEngine_RectTransform_o *)0x0;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
      __this_01[1].klass = (UnityEngine_RectTransform_c *)UVar3.fields;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor();
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,0.12,onVirtualUpdate,(MethodInfo *)0x0);
      pDVar6 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
      DG_Tweening_TweenSettingsExtensions__Join(s,pDVar6,(MethodInfo *)0x0);
      endValue.fields.y = (float)in_XMM1_Db;
      endValue.fields.x = (float)in_XMM1_Da;
      endValue.fields.z = in_XMM2_Da;
      t_00 = DG_Tweening_ShortcutExtensions__DOScale
                       ((UnityEngine_Transform_o *)(__this_01->fields).m_CachedPtr,endValue,0.12,
                        (MethodInfo *)0x0);
      pDVar6 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)t_00,1,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      DG_Tweening_TweenSettingsExtensions__Join(s,pDVar6,(MethodInfo *)0x0);
      return extraout_XMM0_Da;
    }
  }
  UVar3.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
  if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(__this_02,UVar3,(MethodInfo *)0x0);
    value.fields.y = (float)uVar12;
    value.fields.x = (float)uVar10;
    value.fields.z = fVar9;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_02,value,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9d1e = '\x01';
  }
  __this_03 = __this_02[1].monitor;
  if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar2 = (__this_03->fields)._size;
    if (iVar2 == 0) {
      fStack_ac = 96.0;
    }
    else if (*(char *)&__this_02[3].klass == '\0') {
      if (g_data_057a9d1f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
        g_data_057a9d1f = '\x01';
        __this_03 = __this_02[1].monitor;
        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b58181;
      }
      if ((__this_03->fields)._size < 1) {
        fStack_ac = 96.0;
        iVar2 = (__this_03->fields)._size;
      }
      else {
        pIVar5 = System_Collections_Generic_List_object___get_Item(__this_03,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if ((pIVar5 == (Il2CppObject *)0x0) ||
           (__this_03 = __this_02[1].monitor, __this_03 == (System_Collections_Generic_List_object__o *)0x0))
        goto label_03b58181;
        fStack_ac = *(float *)&pIVar5[2].monitor;
        iVar2 = (__this_03->fields)._size;
      }
      fVar9 = 96.0;
      if (0 < iVar2 + -1) {
        if (g_data_057a9d1f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
          g_data_057a9d1f = '\x01';
          __this_03 = __this_02[1].monitor;
          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b58181;
        }
        fVar9 = 0.0;
        if (0 < (__this_03->fields)._size) {
          pIVar5 = System_Collections_Generic_List_object___get_Item(__this_03,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          if (pIVar5 == (Il2CppObject *)0x0) goto label_03b58181;
          fVar9 = *(float *)&pIVar5[2].monitor + -96.0;
        }
        fVar11 = 0.0;
        if (0.0 <= fVar9) {
          fVar11 = fVar9;
        }
        fVar9 = (float)(iVar2 + -1) * 14.0 + fVar11 + 96.0;
      }
      if (fStack_ac <= fVar9) {
        fStack_ac = fVar9;
      }
      fStack_ac = fStack_ac + 16.0;
    }
    else {
      fStack_ac = 16.0;
      if (0 < iVar2) {
        fStack_ac = 16.0;
        iVar2 = 0;
        do {
          if (g_data_057a9d1f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
            g_data_057a9d1f = '\x01';
          }
          __this_03 = __this_02[1].monitor;
          if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b58181;
          fVar9 = 96.0;
          if (iVar2 < (__this_03->fields)._size) {
            pIVar5 = System_Collections_Generic_List_object___get_Item(__this_03,iVar2,MethodInfo_GisketchToastManager_ToastItem_get_Item);
            if (pIVar5 == (Il2CppObject *)0x0) goto label_03b58181;
            fVar9 = *(float *)&pIVar5[2].monitor;
          }
          if (__this_02[1].monitor == (void *)0x0) goto label_03b58181;
          iVar1 = iVar2 + 1;
          fVar11 = 0.0;
          if (iVar2 != 0) {
            fVar11 = 8.0;
          }
          fStack_ac = fStack_ac + fVar11 + fVar9;
          iVar2 = iVar1;
        } while (iVar1 < *(int *)((long)__this_02[1].monitor + 0x18));
      }
    }
    return fStack_ac;
  }
label_03b58181:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  return extraout_XMM0_Da_01;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$ToastHeight
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastHeight (bool showDismissAll, const MethodInfo* method);
// 0x3b581a0

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__ToastHeight
                (bool_conflict showDismissAll,MethodInfo *method)

{
  if (showDismissAll == 0) {
    return 96.0;
  }
  return 168.0;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$RefreshDismissAllButtons
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, const MethodInfo* method);
// 0x3b56800

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,MethodInfo *method)

{
  float height;
  int iVar1;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  UnityEngine_UI_Button_o *x;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  MethodInfo *method_00;
  uint index;
  MethodInfo *method_01;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar5;
  ulong uVar6;
  
  if (g_data_057a9d20 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"toast-close-all");
    g_data_057a9d20 = '\x01';
  }
  pSVar5 = (__this->fields)._items;
  if (pSVar5 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
label_03b569a0:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  index = 0;
  do {
    iVar1 = (pSVar5->fields)._size;
    if (iVar1 <= (int)index) {
      return;
    }
    uVar6 = 0;
    if ((index == 0) && (uVar6 = 1, iVar1 < 2)) {
      pSVar2 = (__this->fields)._pending;
      if (pSVar2 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) goto label_03b569a0;
      uVar6 = (ulong)(0 < (pSVar2->fields)._size);
    }
    pIVar4 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar5,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
    if ((pIVar4 == (Il2CppObject *)0x0) || (pIVar4[1].monitor == (void *)0x0)) goto label_03b569a0;
    x = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Button
                  (*(UnityEngine_GameObject_o **)((long)pIVar4[1].monitor + 0x18),"toast-close-all",method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if ((x == (UnityEngine_UI_Button_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_03b569a0;
      UnityEngine_GameObject__SetActive(__this_00,(bool_conflict)uVar6,(MethodInfo *)0x0);
    }
    pSVar5 = (__this->fields)._items;
    if ((pSVar5 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) ||
       (pIVar4 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar5,index,MethodInfo_GisketchToastManager_ToastItem_get_Item),
       pIVar4 == (Il2CppObject *)0x0)) goto label_03b569a0;
    height = *(float *)(&g_data_00d1d5c0 + uVar6 * 4);
    *(float *)&pIVar4[2].monitor = height;
    pSVar5 = (__this->fields)._items;
    if (pSVar5 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) goto label_03b569a0;
    method_01 = (MethodInfo *)(ulong)index;
    item = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)
           System_Collections_Generic_List_object___get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar5,index,MethodInfo_GisketchToastManager_ToastItem_get_Item);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight(item,height,method_01);
    index = index + 1;
    pSVar5 = (__this->fields)._items;
    if (pSVar5 == (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) goto label_03b569a0;
  } while( true );
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$CollapsedY
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchToastManager__CollapsedY (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, int32_t index, const MethodInfo* method);
// 0x3b57c30

float Gisketch_Aottg2UI_Overlays_GisketchToastManager__CollapsedY
                (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,int32_t index,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar2;
  void *pvVar3;
  Il2CppObject *pIVar4;
  UnityEngine_RectTransform_o *__this_01;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *pDVar5;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t_00;
  int iVar6;
  undefined4 in_register_00000034;
  ulong uVar7;
  ulong uVar8;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *__this_02;
  DG_Tweening_Sequence_o *s;
  UnityEngine_RectTransform_o *__this_03;
  System_Collections_Generic_List_object__o *__this_04;
  float extraout_XMM0_Da;
  float fVar9;
  float extraout_XMM0_Da_01;
  float in_XMM1_Da;
  float fVar10;
  undefined4 in_XMM1_Db;
  undefined4 uVar11;
  float in_XMM2_Da;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o value;
  float fStack_c4;
  float extraout_XMM0_Da_00;
  
  uVar7 = CONCAT44(in_register_00000034,index);
  if (index < 1) {
    return 0.0;
  }
  if (g_data_057a9d1f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    g_data_057a9d1f = '\x01';
  }
  __this_02 = (__this->fields)._items;
  if (__this_02 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    in_XMM2_Da = 0.0;
    in_XMM1_Da = 0.0;
    in_XMM1_Db = 0;
    if ((__this_02->fields)._size < 1) {
label_03b57ca3:
      fVar9 = 0.0;
      if (0.0 <= in_XMM1_Da) {
        fVar9 = in_XMM1_Da;
      }
      return (float)index * 14.0 + fVar9;
    }
    uVar7 = 0;
    pIVar4 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_02,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
    if (pIVar4 != (Il2CppObject *)0x0) {
      in_XMM1_Da = *(float *)&pIVar4[2].monitor + -96.0;
      goto label_03b57ca3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  uVar8 = uVar7;
  if (g_data_057a9d1f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    g_data_057a9d1f = '\x01';
  }
  iVar6 = (int)uVar7;
  if (iVar6 < 0) {
    return 96.0;
  }
  s = (DG_Tweening_Sequence_o *)(__this_02->fields)._syncRoot;
  if (s != (DG_Tweening_Sequence_o *)0x0) {
    if ((int)(s->fields).sequencedEndPosition <= iVar6) {
      return 96.0;
    }
    uVar8 = uVar7 & 0xffffffff;
    pIVar4 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)s,iVar6,MethodInfo_GisketchToastManager_ToastItem_get_Item);
    if (pIVar4 != (Il2CppObject *)0x0) {
      return *(float *)&pIVar4[2].monitor;
    }
  }
  pvVar3 = (void *)il2cpp_runtime_helper_022b2c90();
  fVar9 = in_XMM1_Da;
  uVar11 = in_XMM1_Db;
  fVar10 = in_XMM2_Da;
  if (g_data_057a9d1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AnimateSlot_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass49_0);
    g_data_057a9d1d = '\x01';
  }
  __this_01 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass49_0);
  __this_03 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    (__this_01->fields).m_CachedPtr = uVar8;
    il2cpp_runtime_helper_022b4080(&__this_01->fields);
    __this_01[1].monitor = pvVar3;
    __this_00 = (UnityEngine_RectTransform_o *)(__this_01->fields).m_CachedPtr;
    __this_03 = (UnityEngine_RectTransform_o *)0x0;
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar2 = UnityEngine_RectTransform__get_anchoredPosition(__this_00,(MethodInfo *)0x0);
      __this_01[1].klass = (UnityEngine_RectTransform_c *)UVar2.fields;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor();
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,0.12,onVirtualUpdate,(MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
      DG_Tweening_TweenSettingsExtensions__Join(s,pDVar5,(MethodInfo *)0x0);
      endValue.fields.y = (float)in_XMM1_Db;
      endValue.fields.x = in_XMM1_Da;
      endValue.fields.z = in_XMM2_Da;
      t_00 = DG_Tweening_ShortcutExtensions__DOScale
                       ((UnityEngine_Transform_o *)(__this_01->fields).m_CachedPtr,endValue,0.12,
                        (MethodInfo *)0x0);
      pDVar5 = (DG_Tweening_Tween_o *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)t_00,1,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      DG_Tweening_TweenSettingsExtensions__Join(s,pDVar5,(MethodInfo *)0x0);
      return extraout_XMM0_Da;
    }
  }
  UVar2.fields = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
  if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchoredPosition(__this_03,UVar2,(MethodInfo *)0x0);
    value.fields.y = (float)uVar11;
    value.fields.x = fVar9;
    value.fields.z = fVar10;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_03,value,(MethodInfo *)0x0);
    return extraout_XMM0_Da_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d1e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9d1e = '\x01';
  }
  __this_04 = __this_03[1].monitor;
  if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar6 = (__this_04->fields)._size;
    if (iVar6 == 0) {
      fStack_c4 = 96.0;
    }
    else if (*(char *)&__this_03[3].klass == '\0') {
      if (g_data_057a9d1f == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
        g_data_057a9d1f = '\x01';
        __this_04 = __this_03[1].monitor;
        if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b58181;
      }
      if ((__this_04->fields)._size < 1) {
        fStack_c4 = 96.0;
        iVar6 = (__this_04->fields)._size;
      }
      else {
        pIVar4 = System_Collections_Generic_List_object___get_Item(__this_04,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if ((pIVar4 == (Il2CppObject *)0x0) ||
           (__this_04 = __this_03[1].monitor, __this_04 == (System_Collections_Generic_List_object__o *)0x0))
        goto label_03b58181;
        fStack_c4 = *(float *)&pIVar4[2].monitor;
        iVar6 = (__this_04->fields)._size;
      }
      fVar9 = 96.0;
      if (0 < iVar6 + -1) {
        if (g_data_057a9d1f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
          g_data_057a9d1f = '\x01';
          __this_04 = __this_03[1].monitor;
          if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b58181;
        }
        fVar9 = 0.0;
        if (0 < (__this_04->fields)._size) {
          pIVar4 = System_Collections_Generic_List_object___get_Item(__this_04,0,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          if (pIVar4 == (Il2CppObject *)0x0) goto label_03b58181;
          fVar9 = *(float *)&pIVar4[2].monitor + -96.0;
        }
        fVar10 = 0.0;
        if (0.0 <= fVar9) {
          fVar10 = fVar9;
        }
        fVar9 = (float)(iVar6 + -1) * 14.0 + fVar10 + 96.0;
      }
      if (fStack_c4 <= fVar9) {
        fStack_c4 = fVar9;
      }
      fStack_c4 = fStack_c4 + 16.0;
    }
    else {
      fStack_c4 = 16.0;
      if (0 < iVar6) {
        fStack_c4 = 16.0;
        iVar6 = 0;
        do {
          if (g_data_057a9d1f == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
            g_data_057a9d1f = '\x01';
          }
          __this_04 = __this_03[1].monitor;
          if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b58181;
          fVar9 = 96.0;
          if (iVar6 < (__this_04->fields)._size) {
            pIVar4 = System_Collections_Generic_List_object___get_Item(__this_04,iVar6,MethodInfo_GisketchToastManager_ToastItem_get_Item);
            if (pIVar4 == (Il2CppObject *)0x0) goto label_03b58181;
            fVar9 = *(float *)&pIVar4[2].monitor;
          }
          if (__this_03[1].monitor == (void *)0x0) goto label_03b58181;
          iVar1 = iVar6 + 1;
          fVar10 = 0.0;
          if (iVar6 != 0) {
            fVar10 = 8.0;
          }
          fStack_c4 = fStack_c4 + fVar10 + fVar9;
          iVar6 = iVar1;
        } while (iVar1 < *(int *)((long)__this_03[1].monitor + 0x18));
      }
    }
    return fStack_c4;
  }
label_03b58181:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  return extraout_XMM0_Da_01;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$SetSlotHeight
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o* item, float height, const MethodInfo* method);
// 0x3b581c0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__SetSlotHeight
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item,float height,
               MethodInfo *method)

{
  char cVar1;
  System_Object_array *__this;
  Il2CppClass *a;
  System_Collections_Generic_List_object__o *pSVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar3;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_01;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar4;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o UVar5;
  il2cpp_array_size_t *piVar6;
  bool_conflict bVar7;
  System_Object_array *__this_02;
  Il2CppObject *pIVar8;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *pGVar9;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast;
  System_String_o *pSVar10;
  undefined8 uVar11;
  MethodInfo *method_00;
  long extraout_RDX;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *unaff_RBX;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o **ppGVar12;
  uint uVar13;
  undefined8 unaff_RBP;
  System_Object_array *pSVar14;
  MethodInfo *pMVar15;
  System_Object_array *pSVar16;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *__this_03;
  System_Object_array *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  intptr_t iVar17;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *unaff_R15;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_68;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *pGStack_60;
  undefined8 *puStack_58;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *pGStack_50;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *pGStack_48;
  
  __this_03 = item;
  if (g_data_057a9d21 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    __this_03 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d21 = '\x01';
  }
  if (item != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) {
    unaff_RBX = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)(item->fields).Slot;
    unaff_R12 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    __this_03 = unaff_RBX;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      __this_03 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)(item->fields).Slot;
      if (__this_03 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) goto label_03b5830e;
      method = (MethodInfo *)0x0;
      UnityEngine_RectTransform__set_offsetMax
                ((UnityEngine_RectTransform_o *)__this_03,(UnityEngine_Vector2_o)((ulong)(uint)height << 0x20)
                 ,(MethodInfo *)0x0);
    }
    pGVar3 = (item->fields).View;
    if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      unaff_RBX = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)
                  (pGVar3->fields)._Root_k__BackingField;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0;
      method = (MethodInfo *)0x0;
      __this_03 = unaff_RBX;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pGVar3 = (item->fields).View;
        unaff_R15 = pGVar9;
        if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) goto label_03b5830e;
        __this_00 = (pGVar3->fields)._Root_k__BackingField;
        __this_03 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0;
        if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_03b5830e;
        pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)
                 UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      __this_03 = pGVar9;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        return;
      }
      unaff_R15 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0;
      if (pGVar9 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) {
        UVar5 = UnityEngine_RectTransform__get_sizeDelta
                          ((UnityEngine_RectTransform_o *)pGVar9,(MethodInfo *)0x0);
        value.fields.y = height;
        value.fields.x = UVar5.fields.x;
        UnityEngine_RectTransform__set_sizeDelta
                  ((UnityEngine_RectTransform_o *)pGVar9,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_03b5830e:
  il2cpp_runtime_helper_022b2c90();
  pMVar15 = method;
  pGVar9 = __this_03;
  pGStack_60 = unaff_RBX;
  puStack_58 = unaff_R12;
  pGStack_50 = item;
  pGStack_48 = unaff_R15;
  if (g_data_057a9d26 == '\0') {
    uStack_68 = 0x3b58343;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar9 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)&MethodInfo_AottgToastDefinition_get_Item;
    uStack_68 = 0x3b5834f;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d26 = '\x01';
  }
  if (__this_03 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *)0x0) {
    if (0 < *(int *)&(__this_03->fields).View) {
      uVar13 = 0;
      do {
        pMVar15 = (MethodInfo *)(ulong)uVar13;
        uStack_68 = 0x3b5837e;
        toast = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_03,uVar13,MethodInfo_AottgToastDefinition_get_Item);
        uStack_68 = 0x3b58386;
        pSVar10 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(toast,pMVar15);
        uStack_68 = 0x3b58393;
        bVar7 = System_String__op_Equality(pSVar10,(System_String_o *)method,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          return;
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < *(int *)&(__this_03->fields).View);
    }
    return;
  }
  uStack_68 = 0x3b583b5;
  uVar11 = il2cpp_runtime_helper_022b2c90();
  ppGVar12 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o **)&uStack_68;
  pSVar16 = (System_Object_array *)(pGVar9->fields).Key;
  uStack_68 = uVar11;
  if (pSVar16 == (System_Object_array *)0x0) {
    uVar11 = il2cpp_runtime_helper_022b2c90();
    __this_04 = (System_Object_array *)pSVar16->bounds;
    if (__this_04 == (System_Object_array *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if ((__this_04->max_length != 0) &&
         (__this_01 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_04->bounds,
         __this_01 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0)) {
        __this_04 = *(System_Object_array **)(__this_04->max_length + 0x20);
        if (g_data_057a9d23 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          g_data_057a9d23 = '\x01';
        }
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                  ((UnityEngine_RectTransform_o *)__this_04,pMVar15);
        pSVar4 = (__this_01->fields)._items;
        if (pSVar4 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
          if ((pSVar4->fields)._size == 0) {
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this_01,pMVar15);
            return;
          }
          return;
        }
      }
      fVar18 = (float)il2cpp_runtime_helper_022b2c90();
      __this_05 = (UnityEngine_RectTransform_o *)__this_04->bounds;
      if (__this_05 == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9d27 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
          g_data_057a9d27 = '\x01';
        }
        __this_05[1].monitor = pMVar15;
        il2cpp_runtime_helper_022b4080(&__this_05[1].monitor,pMVar15);
        iVar17 = extraout_RDX;
        if (extraout_RDX == 0) {
          if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar17 = **(intptr_t **)(TypeInfo_GisketchTheme + 0xb8);
        }
        __this_05[1].fields.m_CachedPtr = iVar17;
        il2cpp_runtime_helper_022b4080(&__this_05[1].fields,iVar17);
        return;
      }
      fVar19 = (float)__this_04->max_length;
      fVar20 = (float)(__this_04->max_length >> 0x20);
      UVar5.fields.y = fVar18 * ((float)((ulong)__this_04->m_Items[0] >> 0x20) - fVar20) + fVar20;
      UVar5.fields.x = fVar18 * (SUB84(__this_04->m_Items[0],0) - fVar19) + fVar19;
      UnityEngine_RectTransform__set_anchoredPosition(__this_05,UVar5,(MethodInfo *)0x0);
      return;
    }
    pSVar14 = (System_Object_array *)pSVar16->max_length;
  }
  else {
    pSVar14 = (System_Object_array *)(pGVar9->fields).View;
    ppGVar12 = &pGStack_60;
    __this_04 = pSVar16;
  }
  *(undefined8 *)((long)ppGVar12 + -8) = unaff_RBP;
  *(Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o **)((long)ppGVar12 + -0x10) = unaff_R15;
  *(MethodInfo **)((long)ppGVar12 + -0x18) = method;
  *(undefined8 *)((long)ppGVar12 + -0x20) = unaff_R13;
  *(undefined8 **)((long)ppGVar12 + -0x28) = unaff_R12;
  *(undefined8 *)((long)ppGVar12 + -0x30) = 0;
  *(undefined8 *)((long)ppGVar12 + -0x38) = uVar11;
  if (g_data_057a9d07 == '\0') {
    *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55b16;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55b22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55b2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55b3a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55b46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55b52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Close_b__0);
    *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55b5e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    g_data_057a9d07 = '\x01';
  }
  *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55b74;
  __this_02 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55b81;
  pSVar16 = __this_02;
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (System_Object_array *)0x0) {
    ((System_Collections_Generic_List_object__Fields *)&__this_02->bounds)->_items = __this_04;
    *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55b9c;
    pSVar16 = __this_04;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_List_object__Fields *)&__this_02->bounds);
    __this = (System_Object_array *)__this_04->m_Items[0];
    *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55ba8;
    pSVar10 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key
                        ((Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pSVar14,(MethodInfo *)pSVar16);
    pSVar16 = pSVar14;
    if (g_data_057a9d0f == '\0') {
      *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55bc0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      pSVar16 = (System_Object_array *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
      *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55bcc;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d0f = '\x01';
    }
    if (__this != (System_Object_array *)0x0) {
      if (0 < (int)__this->max_length) {
        uVar13 = 0;
        do {
          *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55bfe;
          pSVar16 = __this;
          pIVar8 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this,uVar13,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          if (pIVar8 == (Il2CppObject *)0x0) goto label_03b55de7;
          a = pIVar8[1].klass;
          *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55c15;
          bVar7 = System_String__op_Equality((System_String_o *)a,pSVar10,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            pSVar2 = (System_Collections_Generic_List_object__o *)__this_04->m_Items[0];
            pSVar16 = (System_Object_array *)0x0;
            if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b55de7;
            *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55c3f;
            pIVar8 = System_Collections_Generic_List_object___get_Item(pSVar2,uVar13,MethodInfo_GisketchToastManager_ToastItem_get_Item);
            piVar6 = &__this_02->max_length;
            __this_02->max_length = (il2cpp_array_size_t)pIVar8;
            *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55c56;
            il2cpp_runtime_helper_022b4080(piVar6);
            pSVar2 = (System_Collections_Generic_List_object__o *)__this_04->m_Items[0];
            pSVar16 = (System_Object_array *)0x0;
            if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b55de7;
            pMVar15 = (MethodInfo *)(ulong)uVar13;
            *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55c74;
            System_Collections_Generic_List_object___RemoveAt(pSVar2,uVar13,MethodInfo_Void_RemoveAt);
            *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55c7c;
            pSVar16 = __this_04;
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending
                      ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_04,pMVar15);
            if (g_data_057a9d0a == '\0') {
              pSVar16 = (System_Object_array *)&MethodInfo_Int32_get_Count;
              *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55c91;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9d0a = '\x01';
            }
            if (__this_04->m_Items[0] == (Il2CppObject *)0x0) goto label_03b55de7;
            if (*(int *)&__this_04->m_Items[0][1].monitor != 0) {
              *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55cb3;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_04,pMVar15);
              *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55cbb;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_04,pMVar15);
              pMVar15 = (MethodInfo *)0x1;
              *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55cc8;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_04,1,method_00);
            }
            if (*(int *)((long)TypeInfo_GisketchMotion->m_Items + 0xc4) == 0) {
              *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55d70;
              il2cpp_runtime_helper_02337ed0();
              cVar1 = *(char *)&TypeInfo_GisketchMotion->m_Items[0x13]->klass;
              pSVar16 = TypeInfo_GisketchMotion;
            }
            else {
              cVar1 = *(char *)&TypeInfo_GisketchMotion->m_Items[0x13]->klass;
              pSVar16 = TypeInfo_GisketchMotion;
            }
            TypeInfo_GisketchMotion = pSVar16;
            if (cVar1 != '\0') {
              if (*piVar6 == 0) goto label_03b55de7;
              pSVar14 = *(System_Object_array **)(*piVar6 + 0x18);
              if (*(int *)((long)pSVar16->m_Items + 0xc4) == 0) {
                *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55d0d;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar15 = (MethodInfo *)0x0;
              *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55d17;
              t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit
                            ((Gisketch_Aottg2UI_Building_GisketchView_o *)pSVar14,(MethodInfo *)0x0);
              pSVar16 = pSVar14;
              if (t != (DG_Tweening_Tween_o *)0x0) {
                *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55d2e;
                action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55d48;
                DG_Tweening_TweenCallback___ctor();
                DG_Tweening_TweenSettingsExtensions__OnComplete_object_((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween)
                ;
                return;
              }
            }
            if (*piVar6 != 0) {
              pSVar16 = *(System_Object_array **)(*piVar6 + 0x20);
              if (g_data_057a9d23 == '\0') {
                *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55da4;
                il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
                g_data_057a9d23 = '\x01';
              }
              *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55db3;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                        ((UnityEngine_RectTransform_o *)pSVar16,pMVar15);
              if (__this_04->m_Items[0] != (Il2CppObject *)0x0) {
                if (*(int *)&__this_04->m_Items[0][1].monitor != 0) {
                  return;
                }
                Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost
                          ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_04,pMVar15);
                return;
              }
            }
            goto label_03b55de7;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)__this->max_length);
      }
      return;
    }
  }
label_03b55de7:
  *(undefined8 *)((long)ppGVar12 + -0x40) = 0x3b55dec;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pSVar16->obj,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$DestroySlot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot (UnityEngine_RectTransform_o* slot, const MethodInfo* method);
// 0x3b570b0

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
               (UnityEngine_RectTransform_o *slot,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *obj;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  Il2CppObject *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  void *pvVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  Il2CppObject *__this_00;
  System_String_o *str1;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar8;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_01;
  Il2CppObject *__this_02;
  MethodInfo *method_00;
  
  if (g_data_057a9d22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d22 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  str1 = (System_String_o *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)slot,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (slot != (UnityEngine_RectTransform_o *)0x0) {
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)slot,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar2 != '\0') {
      UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_Object__DestroyImmediate_4e01e00(obj,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pSVar8;
  if (g_data_057a9d14 == '\0') {
    il2cpp_runtime_helper_023445d0(&"point");
    __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&"toast";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d14 = '\x01';
  }
  if ((((System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)pSVar8->max_length !=
        (System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)0x0) &&
      (__this_01 = (((System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)
                    pSVar8->max_length)->fields)._entries,
      __this_01 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) &&
     (str1 = "toast",
     pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                        ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_01,"toast",(MethodInfo *)0x0
                        ), pGVar3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) {
    pGVar1 = (pGVar3->fields).width;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      return;
    }
    __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(pGVar1->fields).unit;
    str1 = "point";
    bVar2 = System_String__Equals_3af50f0((System_String_o *)__this_01,"point",5,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if ((pGVar3->fields).width != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d16 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLayoutDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"toast-icon");
    il2cpp_runtime_helper_023445d0(&"toastTitle");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"buttonPrimary");
    il2cpp_runtime_helper_023445d0(&"toastIcon");
    il2cpp_runtime_helper_023445d0(&"cross");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Panel");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"toast-title-row");
    il2cpp_runtime_helper_023445d0(&"toast-title");
    il2cpp_runtime_helper_023445d0(&"toast-close");
    g_data_057a9d16 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  *(undefined1 *)((long)&__this[6].monitor + 2) = 1;
  __this_02 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = "Panel";
    il2cpp_runtime_helper_022b4080(__this + 1);
    __this[1].monitor = "toast-title-row";
    il2cpp_runtime_helper_022b4080(&__this[1].monitor);
    method_00 = (MethodInfo *)(__this + 4);
    __this[4].klass = "clear";
    il2cpp_runtime_helper_022b4080();
    pGVar4 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Row(8.0,method_00);
    __this[0xd].monitor = pGVar4;
    il2cpp_runtime_helper_022b4080(&__this[0xd].monitor,pGVar4);
    pvVar5 = (void *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchNodeDefinition);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    *(undefined1 *)((long)&pIVar6[6].monitor + 2) = 1;
    __this_02 = pIVar6;
    System_Object___ctor(pIVar6,(MethodInfo *)0x0);
    if (pIVar6 != (Il2CppObject *)0x0) {
      pIVar6[1].klass = "Icon";
      il2cpp_runtime_helper_022b4080(pIVar6 + 1);
      __this_02 = (Il2CppObject *)&pIVar6[1].monitor;
      pIVar6[1].monitor = "toast-icon";
      il2cpp_runtime_helper_022b4080();
      if (__this_01 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
        pIVar6[5].monitor =
             (System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)__this_01->max_length
        ;
        il2cpp_runtime_helper_022b4080(&pIVar6[5].monitor);
        pIVar7 = (Il2CppClass *)System_String__Concat_3ae5ba0("toastIcon",str1,(MethodInfo *)0x0);
        __this_02 = pIVar6 + 4;
        pIVar6[4].klass = pIVar7;
        il2cpp_runtime_helper_022b4080();
        if (pvVar5 != (void *)0x0) {
          if (*(int *)((long)pvVar5 + 0x18) == 0) goto label_03b5762d;
          *(Il2CppObject **)((long)pvVar5 + 0x20) = pIVar6;
          il2cpp_runtime_helper_022b4080((long)pvVar5 + 0x20);
          pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
          *(undefined1 *)((long)&pIVar6[6].monitor + 2) = 1;
          __this_02 = pIVar6;
          System_Object___ctor(pIVar6,(MethodInfo *)0x0);
          if (pIVar6 != (Il2CppObject *)0x0) {
            pIVar6[1].klass = "Text";
            il2cpp_runtime_helper_022b4080(pIVar6 + 1);
            pIVar6[1].monitor = "toast-title";
            il2cpp_runtime_helper_022b4080(&pIVar6[1].monitor);
            pIVar6[2].klass = *(Il2CppClass **)&__this_01->m_Items[0].fields;
            il2cpp_runtime_helper_022b4080(pIVar6 + 2);
            pIVar6[4].klass = "toastTitle";
            il2cpp_runtime_helper_022b4080(pIVar6 + 4);
            __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLayoutDefinition);
            *(undefined4 *)((long)&__this_00[6].monitor + 4) = 0x3f800000;
            __this_02 = __this_00;
            System_Object___ctor(__this_00,(MethodInfo *)0x0);
            if (__this_00 != (Il2CppObject *)0x0) {
              *(undefined4 *)&__this_00[6].monitor = 0x3f800000;
              __this_02 = (Il2CppObject *)&pIVar6[0xd].monitor;
              pIVar6[0xd].monitor = __this_00;
              il2cpp_runtime_helper_022b4080();
              if (*(uint *)((long)pvVar5 + 0x18) < 2) goto label_03b5762d;
              *(Il2CppObject **)((long)pvVar5 + 0x28) = pIVar6;
              il2cpp_runtime_helper_022b4080((long)pvVar5 + 0x28);
              pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
              *(undefined1 *)((long)&pIVar6[6].monitor + 2) = 1;
              __this_02 = pIVar6;
              System_Object___ctor(pIVar6,(MethodInfo *)0x0);
              if (pIVar6 != (Il2CppObject *)0x0) {
                pIVar6[1].klass = "Button";
                il2cpp_runtime_helper_022b4080(pIVar6 + 1);
                pIVar6[1].monitor = "toast-close";
                il2cpp_runtime_helper_022b4080(&pIVar6[1].monitor);
                pIVar6[5].monitor = "cross";
                il2cpp_runtime_helper_022b4080(&pIVar6[5].monitor);
                *(undefined1 *)&pIVar6[6].monitor = 1;
                __this_02 = pIVar6 + 4;
                pIVar6[4].klass = "buttonPrimary";
                il2cpp_runtime_helper_022b4080();
                if (2 < *(uint *)((long)pvVar5 + 0x18)) {
                  *(Il2CppObject **)((long)pvVar5 + 0x30) = pIVar6;
                  il2cpp_runtime_helper_022b4080((long)pvVar5 + 0x30,pIVar6);
                  __this[0x11].monitor = pvVar5;
                  il2cpp_runtime_helper_022b4080(&__this[0x11].monitor,pvVar5);
                  return;
                }
                goto label_03b5762d;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b5762d:
  il2cpp_runtime_helper_022b2ca0();
  *(undefined1 *)((long)&__this_02[6].monitor + 2) = 1;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$FinishClose
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchToastManager__FinishClose (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, UnityEngine_RectTransform_o* slot, const MethodInfo* method);
// 0x3b55f70

void Gisketch_Aottg2UI_Overlays_GisketchToastManager__FinishClose
               (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,UnityEngine_RectTransform_o *slot,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  long *plVar4;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX_00;
  Il2CppRGCTXData *__this_05;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  undefined1 auStack_68 [16];
  Il2CppObject *pIStack_58;
  Il2CppRGCTXData *pIStack_50;
  
  pMVar5 = (MethodInfo *)slot;
  if (g_data_057a9d23 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057a9d23 = '\x01';
  }
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot(slot,pMVar5);
  pSVar1 = (__this->fields)._items;
  if (pSVar1 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar1->fields)._size != 0) {
      return;
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this,pMVar5);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost
            ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)slot,pMVar5);
  __this_05 = (Il2CppRGCTXData *)slot;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending
            ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)slot,pMVar5);
  if (g_data_057a9d0a == '\0') {
    __this_05 = (Il2CppRGCTXData *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0a = '\x01';
  }
  if (((Il2CppRGCTXData *)((long)slot + 0x20))->method != (MethodInfo *)0x0) {
    if (*(int *)&((Il2CppRGCTXData *)((long)slot + 0x20))->method->name != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
                ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)slot,pMVar5);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts
                ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)slot,pMVar5);
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack
                ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)slot,0,method_00);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIStack_50 = (Il2CppRGCTXData *)slot;
  if (g_data_057a9d08 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastBehaviour_GetComponent_GisketchToastBehavio);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Overlays_GisketchT);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d08 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  pIVar9 = (Il2CppObject *)0x0;
  *(char *)(__this_05 + 9) = (char)pMVar5;
  if (__this_05[4].method != (MethodInfo *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_68,
               (System_Collections_Generic_List_object__o *)__this_05[4].method,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Overlays_GisketchT);
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_68._0_8_;
    pIVar8 = (Il2CppType *)auStack_68._8_8_;
    pIVar9 = pIStack_58;
    while (__this_01.fields._8_8_ = pIVar8,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7,
          __this_01.fields._current = pIVar9,
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78), (char)bVar3 != '\0') {
      if (pIVar9 == (Il2CppObject *)0x0) {
label_03b561a9:
        il2cpp_runtime_helper_022b2c90();
label_03b561ae:
        il2cpp_runtime_helper_022b2c90();
        goto label_03b561b3;
      }
      if (pIVar9[1].monitor == (void *)0x0) goto label_03b561ae;
      __this_00 = *(UnityEngine_GameObject_o **)((long)pIVar9[1].monitor + 0x18);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_03b561a9;
      }
      x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_GisketchToastBehaviour_GetComponent_GisketchToastBehavio);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (x == (UnityEngine_Object_o *)0x0) {
label_03b561b3:
          il2cpp_runtime_helper_022b2c90();
          goto label_03b561b8;
        }
        *(char *)((long)&x[2].klass + 4) = (char)pMVar5;
      }
    }
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_02.fields._current = pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    pMVar5 = extraout_RDX;
label_03b56186:
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack
              ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_05,1,pMVar5);
    return;
  }
label_03b561b8:
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_03.fields._current = pIVar9;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    pMVar5 = extraout_RDX_00;
    if (lVar2 == 0) goto label_03b56186;
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar8;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
  __this_04.fields._current = pIVar9;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
  _Unwind_Resume(auVar6._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$UpdateVisible
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdateVisible (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* key, const MethodInfo* method);
// 0x3b54250

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdateVisible
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
          Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  uint index;
  int32_t length;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar3;
  UnityEngine_Object_o *pUVar4;
  DG_Tweening_Tween_o *t;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  bool_conflict extraout_EAX_03;
  Il2CppObject *pIVar6;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *pGVar8;
  System_String_o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  int32_t index_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *b;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar11;
  int iVar12;
  MethodInfo *pMVar13;
  UnityEngine_GameObject_o **ppUVar14;
  MethodInfo *pMVar15;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar16;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar17;
  
  pMVar15 = (MethodInfo *)toast;
  if (g_data_057a9d24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    pGVar17 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d24 = '\x01';
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
  }
  else {
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
    pGVar17 = __this;
  }
  if (g_data_057a9d0f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar17 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0f = '\x01';
  }
  if (pGVar16 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    pMVar11 = (MethodInfo *)0x0;
    if (0 < *(int *)&(pGVar16->fields)._context) {
      do {
        iVar12 = (int)pMVar11;
        pMVar15 = pMVar11;
        pGVar17 = pGVar16;
        pIVar6 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pGVar16,iVar12,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if (pIVar6 == (Il2CppObject *)0x0) goto label_03b543bd;
        pMVar15 = (MethodInfo *)key;
        bVar5 = System_String__op_Equality((System_String_o *)pIVar6[1].klass,key,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar2 = (__this->fields)._items;
          pGVar17 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
          if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
            pMVar15 = pMVar11;
            pIVar6 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,iVar12,MethodInfo_GisketchToastManager_ToastItem_get_Item);
            pGVar17 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(__this->fields)._items;
            if ((pGVar17 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) &&
               (pMVar15 = pMVar11,
               System_Collections_Generic_List_object___RemoveAt
                         ((System_Collections_Generic_List_object__o *)pGVar17,iVar12,MethodInfo_Void_RemoveAt),
               pIVar6 != (Il2CppObject *)0x0)) {
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                        ((UnityEngine_RectTransform_o *)pIVar6[2].klass,pMVar15);
              pSVar2 = (__this->fields)._items;
              pGVar7 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast(__this,toast,method_00);
              pMVar15 = (MethodInfo *)toast;
              pGVar17 = __this;
              if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
                System_Collections_Generic_List_object___Insert
                          ((System_Collections_Generic_List_object__o *)pSVar2,iVar12,(Il2CppObject *)pGVar7,
                           MethodInfo_Void_Insert);
                return (bool_conflict)CONCAT71((int7)((ulong)pMVar11 >> 8),1);
              }
            }
          }
          goto label_03b543bd;
        }
        pMVar11 = (MethodInfo *)(ulong)(iVar12 + 1U);
      } while ((int)(iVar12 + 1U) < *(int *)&(pGVar16->fields)._context);
    }
    return 0;
  }
label_03b543bd:
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar15;
  pGVar16 = pGVar17;
  if (g_data_057a9d0a == '\0') {
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d0a = '\x01';
  }
  pSVar2 = (pGVar17->fields)._items;
  if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    if ((pSVar2->fields)._size == 0) {
      return (bool_conflict)pSVar2;
    }
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons(pGVar17,pMVar11);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts(pGVar17,pMVar11);
    Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack(pGVar17,(uint)pMVar15 & 0xff,method_01);
    return extraout_EAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar15 = pMVar11;
  if (g_data_057a9d25 == '\0') {
    pGVar17 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Void_set_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d25 = '\x01';
    pSVar3 = (pGVar16->fields)._pending;
  }
  else {
    pSVar3 = (pGVar16->fields)._pending;
    pGVar17 = pGVar16;
  }
  if (g_data_057a9d26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar17 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_AottgToastDefinition_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d26 = '\x01';
  }
  if (pSVar3 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    pMVar13 = (MethodInfo *)0x0;
    if (0 < (pSVar3->fields)._size) {
      do {
        iVar12 = (int)pMVar13;
        pMVar15 = pMVar13;
        pGVar8 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,iVar12,MethodInfo_AottgToastDefinition_get_Item);
        pSVar9 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(pGVar8,pMVar15);
        pMVar15 = b;
        bVar5 = System_String__op_Equality(pSVar9,(System_String_o *)b,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar3 = (pGVar16->fields)._pending;
          pGVar17 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
          if (pSVar3 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
            System_Collections_Generic_List_object___set_Item
                      ((System_Collections_Generic_List_object__o *)pSVar3,iVar12,(Il2CppObject *)pMVar11,
                       MethodInfo_Void_set_Item);
            return (bool_conflict)CONCAT71((int7)((ulong)pMVar13 >> 8),1);
          }
          goto label_03b5453e;
        }
        pMVar13 = (MethodInfo *)(ulong)(iVar12 + 1U);
      } while ((int)(iVar12 + 1U) < (pSVar3->fields)._size);
    }
    return 0;
  }
label_03b5453e:
  bVar5 = il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar15;
  if (g_data_057a9d0d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
    bVar5 = il2cpp_runtime_helper_023445d0();
    g_data_057a9d0d = '\x01';
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar17->fields)._items;
  }
  else {
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar17->fields)._items;
    __this_00 = pGVar17;
  }
  if (g_data_057a9d0f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
    bVar5 = il2cpp_runtime_helper_023445d0();
    g_data_057a9d0f = '\x01';
  }
  if (pGVar16 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    if (0 < *(int *)&(pGVar16->fields)._context) {
      pMVar13 = (MethodInfo *)0x0;
      do {
        iVar12 = (int)pMVar13;
        pMVar11 = pMVar13;
        __this_00 = pGVar16;
        pIVar6 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pGVar16,iVar12,MethodInfo_GisketchToastManager_ToastItem_get_Item);
        if (pIVar6 == (Il2CppObject *)0x0) goto label_03b5467f;
        pMVar11 = pMVar15;
        bVar5 = System_String__op_Equality
                          ((System_String_o *)pIVar6[1].klass,(System_String_o *)pMVar15,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar2 = (pGVar17->fields)._items;
          __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
          if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
            pMVar11 = pMVar13;
            pIVar6 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,iVar12,MethodInfo_GisketchToastManager_ToastItem_get_Item);
            __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar17->fields)._items;
            if ((__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) &&
               (System_Collections_Generic_List_object___RemoveAt
                          ((System_Collections_Generic_List_object__o *)__this_00,iVar12,MethodInfo_Void_RemoveAt),
               pMVar11 = pMVar13, pIVar6 != (Il2CppObject *)0x0)) {
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                        ((UnityEngine_RectTransform_o *)pIVar6[2].klass,pMVar13);
              return extraout_EAX_00;
            }
          }
          goto label_03b5467f;
        }
        pMVar13 = (MethodInfo *)(ulong)(iVar12 + 1U);
      } while ((int)(iVar12 + 1U) < *(int *)&(pGVar16->fields)._context);
    }
    return bVar5;
  }
label_03b5467f:
  bVar5 = il2cpp_runtime_helper_022b2c90();
  pMVar15 = pMVar11;
  pGVar16 = __this_00;
  if (g_data_057a9d0e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_AottgToastDefinition_get_Item;
    bVar5 = il2cpp_runtime_helper_023445d0();
    g_data_057a9d0e = '\x01';
  }
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
    index = *(uint *)&(__this_00->fields)._context;
    while (index = index - 1, -1 < (int)index) {
      pMVar15 = (MethodInfo *)(ulong)index;
      pGVar8 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_AottgToastDefinition_get_Item);
      pSVar9 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(pGVar8,pMVar15);
      bVar5 = System_String__op_Equality(pSVar9,(System_String_o *)pMVar11,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_Void_RemoveAt);
        bVar5 = extraout_EAX_01;
      }
    }
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d04 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
    g_data_057a9d04 = '\x01';
  }
  if (g_data_057a9d0c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d0c = '\x01';
  }
  pUVar4 = (UnityEngine_Object_o *)(pGVar16->fields)._host;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar13 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar11 = extraout_RDX;
  if ((char)bVar5 != '\0') {
    pUVar10 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(pGVar16,pMVar13);
    (pGVar16->fields)._host = pUVar10;
    il2cpp_runtime_helper_022b4080(&(pGVar16->fields)._host,pUVar10);
    pMVar11 = extraout_RDX_00;
  }
  pSVar2 = (pGVar16->fields)._items;
  pGVar7 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast
                     (pGVar16,(Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pMVar15,pMVar11);
  if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
    System_Collections_Generic_List_object___Insert
              ((System_Collections_Generic_List_object__o *)pSVar2,index_00,(Il2CppObject *)pGVar7,
               MethodInfo_Void_Insert);
    return extraout_EAX_02;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar17 = pGVar16;
  if (g_data_057a9d03 == '\0') {
    pGVar17 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d03 = '\x01';
  }
  pSVar3 = (pGVar16->fields)._pending;
  if (pSVar3 == (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d10 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d10 = '\x01';
    }
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&(pGVar17->fields)._stackTween;
    t = (pGVar17->fields)._stackTween;
    if (t != (DG_Tweening_Tween_o *)0x0) {
      DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
    }
    (pGVar17->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
    il2cpp_runtime_helper_022b4080();
    pSVar2 = (pGVar17->fields)._items;
    if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar12 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < iVar12) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar12,(MethodInfo *)0x0);
      }
      (pGVar17->fields)._expandedStackHeight = 0.0;
      *(undefined1 *)&(pGVar17->fields)._expanded = 0;
      (pGVar17->fields)._stack = (UnityEngine_RectTransform_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(pGVar17->fields)._stack);
      pUVar4 = (UnityEngine_Object_o *)(pGVar17->fields)._host;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        ppUVar14 = &(pGVar17->fields)._host;
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)*ppUVar14;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((char)bVar5 == '\0') {
          UnityEngine_Object__DestroyImmediate_4e01e00(pUVar4,(MethodInfo *)0x0);
        }
        else {
          UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
        }
        *ppUVar14 = (UnityEngine_GameObject_o *)0x0;
        bVar5 = il2cpp_runtime_helper_022b4080(ppUVar14,0);
        return bVar5;
      }
      return bVar5;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d0c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d0c = '\x01';
    }
    pUVar4 = (UnityEngine_Object_o *)(pGVar16->fields)._host;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar15 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return bVar5;
    }
    pUVar10 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(pGVar16,pMVar15);
    (pGVar16->fields)._host = pUVar10;
    bVar5 = il2cpp_runtime_helper_022b4080(&(pGVar16->fields)._host,pUVar10);
    return bVar5;
  }
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < length) {
    pMVar15 = (MethodInfo *)0x0;
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(pGVar16,pMVar15);
  return extraout_EAX_03;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$UpdatePending
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdatePending (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o* __this, Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, System_String_o* key, const MethodInfo* method);
// 0x3b54440

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchToastManager__UpdatePending
          (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this,
          Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,System_String_o *key,MethodInfo *method)

{
  int32_t *piVar1;
  uint index;
  int32_t length;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar2;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar3;
  UnityEngine_Object_o *pUVar4;
  DG_Tweening_Tween_o *t;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  bool_conflict extraout_EAX_02;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_ToastItem_o *item;
  int32_t index_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  int iVar11;
  MethodInfo *pMVar12;
  UnityEngine_GameObject_o **ppUVar13;
  MethodInfo *pMVar14;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar15;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *pGVar16;
  
  pMVar14 = (MethodInfo *)toast;
  if (g_data_057a9d25 == '\0') {
    pGVar15 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Void_set_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d25 = '\x01';
    pSVar2 = (__this->fields)._pending;
  }
  else {
    pSVar2 = (__this->fields)._pending;
    pGVar15 = __this;
  }
  if (g_data_057a9d26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pGVar15 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_AottgToastDefinition_get_Item;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d26 = '\x01';
  }
  if (pSVar2 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    pMVar10 = (MethodInfo *)0x0;
    if (0 < (pSVar2->fields)._size) {
      do {
        iVar11 = (int)pMVar10;
        pMVar14 = pMVar10;
        pGVar6 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar2,iVar11,MethodInfo_AottgToastDefinition_get_Item);
        pSVar7 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(pGVar6,pMVar14);
        pMVar14 = (MethodInfo *)key;
        bVar5 = System_String__op_Equality(pSVar7,key,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar2 = (__this->fields)._pending;
          pGVar15 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
          if (pSVar2 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
            System_Collections_Generic_List_object___set_Item
                      ((System_Collections_Generic_List_object__o *)pSVar2,iVar11,(Il2CppObject *)toast,
                       MethodInfo_Void_set_Item);
            return (bool_conflict)CONCAT71((int7)((ulong)pMVar10 >> 8),1);
          }
          goto label_03b5453e;
        }
        pMVar10 = (MethodInfo *)(ulong)(iVar11 + 1U);
      } while ((int)(iVar11 + 1U) < (pSVar2->fields)._size);
    }
    return 0;
  }
label_03b5453e:
  bVar5 = il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar14;
  if (g_data_057a9d0d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
    bVar5 = il2cpp_runtime_helper_023445d0();
    g_data_057a9d0d = '\x01';
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar15->fields)._items;
  }
  else {
    pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar15->fields)._items;
    __this_00 = pGVar15;
  }
  if (g_data_057a9d0f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
    bVar5 = il2cpp_runtime_helper_023445d0();
    g_data_057a9d0f = '\x01';
  }
  if (pGVar16 == (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
label_03b5467f:
    bVar5 = il2cpp_runtime_helper_022b2c90();
    pMVar14 = pMVar10;
    pGVar15 = __this_00;
    if (g_data_057a9d0e == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      pGVar15 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_AottgToastDefinition_get_Item;
      bVar5 = il2cpp_runtime_helper_023445d0();
      g_data_057a9d0e = '\x01';
    }
    if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) {
      index = *(uint *)&(__this_00->fields)._context;
      while (index = index - 1, -1 < (int)index) {
        pMVar14 = (MethodInfo *)(ulong)index;
        pGVar6 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_AottgToastDefinition_get_Item);
        pSVar7 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(pGVar6,pMVar14);
        bVar5 = System_String__op_Equality(pSVar7,(System_String_o *)pMVar10,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          System_Collections_Generic_List_object___RemoveAt
                    ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_Void_RemoveAt);
          bVar5 = extraout_EAX_00;
        }
      }
      return bVar5;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d04 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Insert);
      g_data_057a9d04 = '\x01';
    }
    if (g_data_057a9d0c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d0c = '\x01';
    }
    pUVar4 = (UnityEngine_Object_o *)(pGVar15->fields)._host;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar12 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pMVar10 = extraout_RDX;
    if ((char)bVar5 != '\0') {
      pUVar9 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(pGVar15,pMVar12);
      (pGVar15->fields)._host = pUVar9;
      il2cpp_runtime_helper_022b4080(&(pGVar15->fields)._host,pUVar9);
      pMVar10 = extraout_RDX_00;
    }
    pSVar3 = (pGVar15->fields)._items;
    item = Gisketch_Aottg2UI_Overlays_GisketchToastManager__BuildToast
                     (pGVar15,(Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pMVar14,pMVar10);
    if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      System_Collections_Generic_List_object___Insert
                ((System_Collections_Generic_List_object__o *)pSVar3,index_00,(Il2CppObject *)item,
                 MethodInfo_Void_Insert);
      return extraout_EAX_01;
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar16 = pGVar15;
    if (g_data_057a9d03 == '\0') {
      pGVar16 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&MethodInfo_Void_Clear;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9d03 = '\x01';
    }
    pSVar2 = (pGVar15->fields)._pending;
    if (pSVar2 != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        pMVar14 = (MethodInfo *)0x0;
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(pGVar15,pMVar14);
      return extraout_EAX_02;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d10 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d10 = '\x01';
    }
    pGVar15 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)&(pGVar16->fields)._stackTween;
    t = (pGVar16->fields)._stackTween;
    if (t != (DG_Tweening_Tween_o *)0x0) {
      DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
    }
    (pGVar16->fields)._stackTween = (DG_Tweening_Tween_o *)0x0;
    il2cpp_runtime_helper_022b4080();
    pSVar3 = (pGVar16->fields)._items;
    if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar11 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < iVar11) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar11,(MethodInfo *)0x0);
      }
      (pGVar16->fields)._expandedStackHeight = 0.0;
      *(undefined1 *)&(pGVar16->fields)._expanded = 0;
      (pGVar16->fields)._stack = (UnityEngine_RectTransform_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(pGVar16->fields)._stack);
      pUVar4 = (UnityEngine_Object_o *)(pGVar16->fields)._host;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return bVar5;
      }
      ppUVar13 = &(pGVar16->fields)._host;
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      pUVar4 = (UnityEngine_Object_o *)*ppUVar13;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((char)bVar5 == '\0') {
        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar4,(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Object__Destroy_4e01c60(pUVar4,(MethodInfo *)0x0);
      }
      *ppUVar13 = (UnityEngine_GameObject_o *)0x0;
      bVar5 = il2cpp_runtime_helper_022b4080(ppUVar13,0);
      return bVar5;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d0c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d0c = '\x01';
    }
    pUVar4 = (UnityEngine_Object_o *)(pGVar15->fields)._host;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar14 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pUVar9 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Host(pGVar15,pMVar14);
      (pGVar15->fields)._host = pUVar9;
      bVar5 = il2cpp_runtime_helper_022b4080(&(pGVar15->fields)._host,pUVar9);
      return bVar5;
    }
    return bVar5;
  }
  if (0 < *(int *)&(pGVar16->fields)._context) {
    pMVar12 = (MethodInfo *)0x0;
    do {
      iVar11 = (int)pMVar12;
      pMVar10 = pMVar12;
      __this_00 = pGVar16;
      pIVar8 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pGVar16,iVar11,MethodInfo_GisketchToastManager_ToastItem_get_Item);
      if (pIVar8 == (Il2CppObject *)0x0) goto label_03b5467f;
      pMVar10 = pMVar14;
      bVar5 = System_String__op_Equality
                        ((System_String_o *)pIVar8[1].klass,(System_String_o *)pMVar14,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        pSVar3 = (pGVar15->fields)._items;
        __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0;
        if (pSVar3 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
          pMVar10 = pMVar12;
          pIVar8 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar3,iVar11,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)(pGVar15->fields)._items;
          if ((__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0) &&
             (System_Collections_Generic_List_object___RemoveAt
                        ((System_Collections_Generic_List_object__o *)__this_00,iVar11,MethodInfo_Void_RemoveAt),
             pMVar10 = pMVar12, pIVar8 != (Il2CppObject *)0x0)) {
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                      ((UnityEngine_RectTransform_o *)pIVar8[2].klass,pMVar12);
            return extraout_EAX;
          }
        }
        goto label_03b5467f;
      }
      pMVar12 = (MethodInfo *)(ulong)(iVar11 + 1U);
    } while ((int)(iVar11 + 1U) < *(int *)&(pGVar16->fields)._context);
  }
  return bVar5;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$HasUpdateKey
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchToastManager__HasUpdateKey (Gisketch_Aottg2UI_Code_AottgToastDefinition_o* toast, const MethodInfo* method);
// 0x3b54230

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchToastManager__HasUpdateKey
          (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *toast,MethodInfo *method)

{
  uint uVar1;
  
  if (toast != (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) {
    uVar1 = System_String__IsNullOrEmpty((toast->fields).UpdateKey,(MethodInfo *)0x0);
    return uVar1 ^ 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Overlays.GisketchToastManager$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf (System_Collections_Generic_List_AottgToastDefinition__o* list, System_String_o* key, const MethodInfo* method);
// 0x3b58320

int32_t Gisketch_Aottg2UI_Overlays_GisketchToastManager__IndexOf_3a58320
                  (System_Collections_Generic_List_AottgToastDefinition__o *list,System_String_o *key,
                  MethodInfo *method)

{
  char cVar1;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_array *__this;
  Il2CppClass *a;
  Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *__this_00;
  System_Collections_Generic_List_GisketchToastManager_ToastItem__o *pSVar2;
  UnityEngine_Vector2_o value;
  il2cpp_array_size_t *piVar3;
  uint uVar4;
  int32_t extraout_EAX;
  int32_t extraout_EAX_00;
  bool_conflict bVar5;
  int32_t extraout_EAX_01;
  int32_t extraout_EAX_02;
  int32_t iVar6;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_array *__this_01;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *b;
  Il2CppObject *pIVar7;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_o *pGVar8;
  System_String_o *a_00;
  undefined8 uVar9;
  MethodInfo *method_00;
  long extraout_RDX;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 unaff_RBP;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_array *pGVar12;
  MethodInfo *pMVar13;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_array *pGVar14;
  System_Collections_Generic_List_AottgToastDefinition__o *pSVar15;
  Gisketch_Aottg2UI_Code_AottgToastDefinition_array *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  intptr_t iVar16;
  undefined8 unaff_R15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_30;
  
  pMVar13 = (MethodInfo *)key;
  pSVar15 = list;
  if (g_data_057a9d26 == '\0') {
    uStack_30 = 0x3b58343;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSVar15 = (System_Collections_Generic_List_AottgToastDefinition__o *)&MethodInfo_AottgToastDefinition_get_Item;
    uStack_30 = 0x3b5834f;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d26 = '\x01';
  }
  if (list != (System_Collections_Generic_List_AottgToastDefinition__o *)0x0) {
    if (0 < (list->fields)._size) {
      uVar11 = 0;
      do {
        pMVar13 = (MethodInfo *)(ulong)uVar11;
        uStack_30 = 0x3b5837e;
        pGVar8 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)list,uVar11,MethodInfo_AottgToastDefinition_get_Item);
        uStack_30 = 0x3b58386;
        a_00 = Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key(pGVar8,pMVar13);
        uStack_30 = 0x3b58393;
        bVar5 = System_String__op_Equality(a_00,key,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return uVar11;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (list->fields)._size);
    }
    return -1;
  }
  uStack_30 = 0x3b583b5;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  puVar10 = &uStack_30;
  pGVar14 = (pSVar15->fields)._items;
  uStack_30 = uVar9;
  if (pGVar14 == (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)0x0) {
    uVar9 = il2cpp_runtime_helper_022b2c90();
    __this_02 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)pGVar14->bounds;
    if (__this_02 == (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if ((__this_02->max_length != 0) &&
         (__this_00 = (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_02->bounds,
         __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)0x0)) {
        __this_02 = *(Gisketch_Aottg2UI_Code_AottgToastDefinition_array **)(__this_02->max_length + 0x20);
        if (g_data_057a9d23 == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          g_data_057a9d23 = '\x01';
        }
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                  ((UnityEngine_RectTransform_o *)__this_02,pMVar13);
        pSVar2 = (__this_00->fields)._items;
        if (pSVar2 != (System_Collections_Generic_List_GisketchToastManager_ToastItem__o *)0x0) {
          if ((pSVar2->fields)._size == 0) {
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost(__this_00,pMVar13);
            return extraout_EAX_01;
          }
          return (int32_t)pSVar2;
        }
      }
      fVar17 = (float)il2cpp_runtime_helper_022b2c90();
      __this_03 = (UnityEngine_RectTransform_o *)__this_02->bounds;
      if (__this_03 == (UnityEngine_RectTransform_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9d27 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
          g_data_057a9d27 = '\x01';
        }
        __this_03[1].monitor = pMVar13;
        il2cpp_runtime_helper_022b4080(&__this_03[1].monitor,pMVar13);
        iVar16 = extraout_RDX;
        if (extraout_RDX == 0) {
          if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar16 = **(intptr_t **)(TypeInfo_GisketchTheme + 0xb8);
        }
        __this_03[1].fields.m_CachedPtr = iVar16;
        iVar6 = il2cpp_runtime_helper_022b4080(&__this_03[1].fields,iVar16);
        return iVar6;
      }
      fVar18 = (float)__this_02->max_length;
      fVar19 = (float)(__this_02->max_length >> 0x20);
      value.fields.y = fVar17 * ((float)((ulong)__this_02->m_Items[0] >> 0x20) - fVar19) + fVar19;
      value.fields.x = fVar17 * (SUB84(__this_02->m_Items[0],0) - fVar18) + fVar18;
      UnityEngine_RectTransform__set_anchoredPosition(__this_03,value,(MethodInfo *)0x0);
      return extraout_EAX_02;
    }
    pGVar12 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)pGVar14->max_length;
  }
  else {
    pGVar12 = *(Gisketch_Aottg2UI_Code_AottgToastDefinition_array **)&(pSVar15->fields)._size;
    puVar10 = (undefined8 *)&stack0xffffffffffffffd8;
    __this_02 = pGVar14;
  }
  *(undefined8 *)((long)puVar10 + -8) = unaff_RBP;
  *(undefined8 *)((long)puVar10 + -0x10) = unaff_R15;
  *(System_String_o **)((long)puVar10 + -0x18) = key;
  *(undefined8 *)((long)puVar10 + -0x20) = unaff_R13;
  *(undefined8 *)((long)puVar10 + -0x28) = unaff_R12;
  *(undefined8 *)((long)puVar10 + -0x30) = 0;
  *(undefined8 *)((long)puVar10 + -0x38) = uVar9;
  if (g_data_057a9d07 == '\0') {
    *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55b16;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55b22;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RemoveAt);
    *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55b2e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchToastManager_ToastItem_get_Item);
    *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55b3a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55b46;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55b52;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Close_b__0);
    *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55b5e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass23_0);
    g_data_057a9d07 = '\x01';
  }
  *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55b74;
  __this_01 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass23_0);
  *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55b81;
  pGVar14 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)0x0) {
    ((System_Collections_Generic_List_object__Fields *)&__this_01->bounds)->_items =
         (System_Object_array *)__this_02;
    *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55b9c;
    pGVar14 = __this_02;
    il2cpp_runtime_helper_022b4080((System_Collections_Generic_List_object__Fields *)&__this_01->bounds);
    __this = (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)__this_02->m_Items[0];
    *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55ba8;
    b = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)
        Gisketch_Aottg2UI_Overlays_GisketchToastManager__Key
                  ((Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)pGVar12,(MethodInfo *)pGVar14);
    pGVar8 = b;
    pGVar14 = pGVar12;
    if (g_data_057a9d0f == '\0') {
      *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55bc0;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      pGVar14 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)&MethodInfo_GisketchToastManager_ToastItem_get_Item;
      *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55bcc;
      pGVar8 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)il2cpp_runtime_helper_023445d0();
      g_data_057a9d0f = '\x01';
    }
    if (__this != (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)0x0) {
      if (0 < (int)__this->max_length) {
        uVar11 = 0;
        do {
          *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55bfe;
          pGVar14 = __this;
          pIVar7 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this,uVar11,MethodInfo_GisketchToastManager_ToastItem_get_Item);
          if (pIVar7 == (Il2CppObject *)0x0) goto label_03b55de7;
          a = pIVar7[1].klass;
          *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55c15;
          uVar4 = System_String__op_Equality((System_String_o *)a,(System_String_o *)b,(MethodInfo *)0x0);
          pGVar8 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)(ulong)uVar4;
          if ((char)uVar4 != '\0') {
            pGVar8 = __this_02->m_Items[0];
            pGVar14 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)0x0;
            if (pGVar8 == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) goto label_03b55de7;
            *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55c3f;
            pIVar7 = System_Collections_Generic_List_object___get_Item
                               ((System_Collections_Generic_List_object__o *)pGVar8,uVar11,MethodInfo_GisketchToastManager_ToastItem_get_Item);
            piVar3 = &__this_01->max_length;
            __this_01->max_length = (il2cpp_array_size_t)pIVar7;
            *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55c56;
            il2cpp_runtime_helper_022b4080(piVar3);
            pGVar8 = __this_02->m_Items[0];
            pGVar14 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)0x0;
            if (pGVar8 == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) goto label_03b55de7;
            pMVar13 = (MethodInfo *)(ulong)uVar11;
            *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55c74;
            System_Collections_Generic_List_object___RemoveAt
                      ((System_Collections_Generic_List_object__o *)pGVar8,uVar11,MethodInfo_Void_RemoveAt);
            *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55c7c;
            pGVar14 = __this_02;
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__PromotePending
                      ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_02,pMVar13);
            if (g_data_057a9d0a == '\0') {
              pGVar14 = (Gisketch_Aottg2UI_Code_AottgToastDefinition_array *)&MethodInfo_Int32_get_Count;
              *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55c91;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9d0a = '\x01';
            }
            if (__this_02->m_Items[0] == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0)
            goto label_03b55de7;
            if (*(int *)&(__this_02->m_Items[0]->fields).Icon != 0) {
              *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55cb3;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__RefreshDismissAllButtons
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_02,pMVar13);
              *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55cbb;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__SettleVisibleLayouts
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_02,pMVar13);
              pMVar13 = (MethodInfo *)0x1;
              *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55cc8;
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__ApplyStack
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_02,1,method_00);
            }
            if (*(int *)((long)TypeInfo_GisketchMotion->m_Items + 0xc4) == 0) {
              *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55d70;
              il2cpp_runtime_helper_02337ed0();
              cVar1 = *(char *)&TypeInfo_GisketchMotion->m_Items[0x13]->klass;
              pGVar14 = TypeInfo_GisketchMotion;
            }
            else {
              cVar1 = *(char *)&TypeInfo_GisketchMotion->m_Items[0x13]->klass;
              pGVar14 = TypeInfo_GisketchMotion;
            }
            TypeInfo_GisketchMotion = pGVar14;
            if (cVar1 != '\0') {
              if (*piVar3 == 0) goto label_03b55de7;
              pGVar12 = *(Gisketch_Aottg2UI_Code_AottgToastDefinition_array **)(*piVar3 + 0x18);
              if (*(int *)((long)pGVar14->m_Items + 0xc4) == 0) {
                *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55d0d;
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar13 = (MethodInfo *)0x0;
              *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55d17;
              t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit
                            ((Gisketch_Aottg2UI_Building_GisketchView_o *)pGVar12,(MethodInfo *)0x0);
              pGVar14 = pGVar12;
              if (t != (DG_Tweening_Tween_o *)0x0) {
                *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55d2e;
                action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55d48;
                DG_Tweening_TweenCallback___ctor();
                pIVar7 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                   ((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
                return (int32_t)pIVar7;
              }
            }
            if (*piVar3 == 0) goto label_03b55de7;
            pGVar14 = *(Gisketch_Aottg2UI_Code_AottgToastDefinition_array **)(*piVar3 + 0x20);
            if (g_data_057a9d23 == '\0') {
              *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55da4;
              il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
              g_data_057a9d23 = '\x01';
            }
            *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55db3;
            Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroySlot
                      ((UnityEngine_RectTransform_o *)pGVar14,pMVar13);
            pGVar8 = __this_02->m_Items[0];
            if (pGVar8 == (Gisketch_Aottg2UI_Code_AottgToastDefinition_o *)0x0) goto label_03b55de7;
            if (*(int *)&(pGVar8->fields).Icon == 0) {
              Gisketch_Aottg2UI_Overlays_GisketchToastManager__DestroyHost
                        ((Gisketch_Aottg2UI_Overlays_GisketchToastManager_o *)__this_02,pMVar13);
              return extraout_EAX;
            }
            break;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)__this->max_length);
      }
      return (int32_t)pGVar8;
    }
  }
label_03b55de7:
  *(undefined8 *)((long)puVar10 + -0x40) = 0x3b55dec;
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(&pGVar14->obj,(MethodInfo *)0x0);
  return extraout_EAX_00;
}



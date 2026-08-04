// Type: Gisketch.Aottg2UI.Overlays.GisketchOverlayManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchOverlayManager.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$get_ContentRoot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_ContentRoot (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, const MethodInfo* method);
// 0x3b53ba0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_ContentRoot
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,MethodInfo *method)

{
  return (__this->fields)._ContentRoot_k__BackingField;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$set_ContentRoot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_ContentRoot (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x3b53bb0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_ContentRoot
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               UnityEngine_GameObject_o *value,MethodInfo *method)

{
  (__this->fields)._ContentRoot_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ContentRoot_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$get_PreviousSelected
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_PreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, const MethodInfo* method);
// 0x3b53bc0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_PreviousSelected
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,MethodInfo *method)

{
  return (__this->fields)._PreviousSelected_k__BackingField;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$set_PreviousSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_PreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x3b53bd0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_PreviousSelected
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               UnityEngine_GameObject_o *value,MethodInfo *method)

{
  (__this->fields)._PreviousSelected_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._PreviousSelected_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, int32_t kind, System_String_o* id, UnityEngine_GameObject_o* host, Gisketch_Aottg2UI_Building_GisketchView_o* inner, const MethodInfo* method);
// 0x3b50bf0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,int32_t kind,
               System_String_o *id,UnityEngine_GameObject_o *host,
               Gisketch_Aottg2UI_Building_GisketchView_o *inner,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o **ppGVar1;
  int32_t *piVar2;
  System_Collections_Generic_List_GisketchMotionTarget__o *pSVar3;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *pGVar4;
  long lVar5;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  System_String_o *detail;
  MethodInfo *instance;
  UnityEngine_RectTransform_o *pUVar6;
  System_String_o **ppSVar7;
  MethodInfo *pMVar8;
  UnityEngine_GameObject_o *pUVar9;
  long *plVar10;
  char cVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_GameObject_o *extraout_RDX;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar13;
  uint uVar14;
  uint uVar15;
  char unaff_R12B;
  float popoverGap;
  undefined1 auVar16 [12];
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  bool_conflict bVar20;
  System_String_o SStack_80;
  _union_13 _Stack_68;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGStack_58;
  Gisketch_Aottg2UI_Building_GisketchView_o **ppGStack_50;
  
  pUVar12 = host;
  pGVar13 = inner;
  if (g_data_057a9cfe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchView);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    g_data_057a9cfe = '\x01';
  }
  cVar11 = (char)pUVar12;
  uVar14 = (uint)pGVar13;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Kind = kind;
  (__this->fields).Id = id;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Id,id);
  (__this->fields).Host = host;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Host);
  instance = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchView);
  Gisketch_Aottg2UI_Building_GisketchView___ctor
            ((Gisketch_Aottg2UI_Building_GisketchView_o *)instance,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields).View;
  (__this->fields).View = (Gisketch_Aottg2UI_Building_GisketchView_o *)instance;
  il2cpp_runtime_helper_022b4080(ppGVar1);
  pGVar13 = (__this->fields).View;
  if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    instance = (MethodInfo *)host;
    Gisketch_Aottg2UI_Building_GisketchView__SetRoot(pGVar13,host,(MethodInfo *)0x0);
    if ((*ppGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
       (inner != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
      pSVar3 = ((*ppGVar1)->fields)._MotionTargets_k__BackingField;
      pGVar13 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
      if (pSVar3 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
        System_Collections_Generic_List_GisketchMotionTarget___AddRange
                  (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)
                          (inner->fields)._MotionTargets_k__BackingField,MethodInfo_Void_AddRange);
        instance = (MethodInfo *)(inner->fields)._Root_k__BackingField;
        pGVar13 = (Gisketch_Aottg2UI_Building_GisketchView_o *)&(__this->fields)._ContentRoot_k__BackingField;
        (__this->fields)._ContentRoot_k__BackingField = (UnityEngine_GameObject_o *)instance;
        il2cpp_runtime_helper_022b4080();
        if (host != (UnityEngine_GameObject_o *)0x0) {
          pUVar6 = (UnityEngine_RectTransform_o *)
                   UnityEngine_GameObject__GetComponent_object_(host,MethodInfo_RectTransform_GetComponent_RectTransform);
          (__this->fields).HostRect = pUVar6;
          il2cpp_runtime_helper_022b4080(&(__this->fields).HostRect,pUVar6);
          return;
        }
      }
    }
  }
  popoverGap = (float)il2cpp_runtime_helper_022b2c90();
  uVar15 = (uint)method;
  pUVar12 = extraout_RDX;
  pGStack_58 = __this;
  ppGStack_50 = ppGVar1;
  if (g_data_057a9ce0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"Overlay.OpenInstance");
    g_data_057a9ce0 = '\x01';
  }
  detail = "Overlay.OpenInstance";
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  bVar20 = 0;
  if (instance == (MethodInfo *)0x0) {
    ppSVar7 = (System_String_o **)&"null";
  }
  else {
    ppSVar7 = (System_String_o **)&instance->name;
  }
  pMVar8 = (MethodInfo *)*ppSVar7;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_80.fields._stringLength = 0;
  SStack_80.fields._firstChar = 0;
  SStack_80.fields._6_2_ = 0;
  _Stack_68.rgctx_data = (Il2CppRGCTXData *)0x0;
  SStack_80.klass = (System_String_c *)0x0;
  SStack_80.monitor = (Il2CppType *)0x0;
  __this_00.fields._area._4_4_ = popoverGap;
  __this_00.fields._area._0_4_ = uVar15;
  __this_00.fields._detail = (System_String_o *)pUVar12;
  __this_00.fields._startMs._0_4_ = uVar17;
  __this_00.fields._startMs._4_4_ = uVar18;
  __this_00.fields._enabled = uVar19;
  __this_00.fields._hotLoop = bVar20;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_00,&SStack_80,detail,pMVar8);
  uVar17 = SStack_80.klass._0_4_;
  uVar18 = SStack_80.klass._4_4_;
  uVar19 = SStack_80.monitor._0_4_;
  bVar20 = SStack_80.monitor._4_4_;
  if (instance == (MethodInfo *)0x0) {
label_03b50f1a:
    __this_01.fields._area._4_4_ = popoverGap;
    __this_01.fields._area._0_4_ = uVar15;
    __this_01.fields._detail = (System_String_o *)pUVar12;
    __this_01.fields._startMs._0_4_ = uVar17;
    __this_01.fields._startMs._4_4_ = uVar18;
    __this_01.fields._enabled = uVar19;
    __this_01.fields._hotLoop = bVar20;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xffffffffffffff60);
    return;
  }
  if (instance->klass == (Il2CppClass *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_03b50f54:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar8 = (MethodInfo *)
             UnityEngine_GameObject__get_transform
                       ((UnityEngine_GameObject_o *)instance->klass,(MethodInfo *)0x0);
    if (pMVar8 == (MethodInfo *)0x0) goto label_03b50f54;
    UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)pMVar8,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow
              ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pMVar8,
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)instance,pUVar12,
               uVar14 & 0xff,uVar15 & 0xff,popoverGap,method);
    if (cVar11 == '\0') {
      pUVar9 = (UnityEngine_GameObject_o *)0x0;
    }
    else {
      pUVar9 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(pMVar8);
    }
    (instance->field8_0x40).genericMethod = pUVar9;
    il2cpp_runtime_helper_022b4080(&instance->field8_0x40);
    lVar5 = MethodInfo_Void_Add;
    pSVar3 = (pGVar13->fields)._MotionTargets_k__BackingField;
    if (pSVar3 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
      piVar2 = &(pSVar3->fields)._version;
      *piVar2 = *piVar2 + 1;
      pGVar4 = (pSVar3->fields)._items;
      if (pGVar4 != (Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *)0x0) {
        uVar14 = (pSVar3->fields)._size;
        pMVar8 = instance;
        if (uVar14 < (uint)pGVar4->max_length) {
          (pSVar3->fields)._size = uVar14 + 1;
          (&pGVar4->m_Items[0].fields.GameObject)[(int)uVar14] = (UnityEngine_GameObject_o *)instance;
          il2cpp_runtime_helper_022b4080(&pGVar4->m_Items[0].fields.GameObject + (int)uVar14);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)instance,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        if (((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_Fields *)
            &instance->invoker_method)->Kind == 1) {
          (pGVar13->fields)._SearchEntries_k__BackingField =
               (System_Collections_Generic_List_GisketchSearchEntry__o *)instance;
          pMVar8 = instance;
          il2cpp_runtime_helper_022b4080(&(pGVar13->fields)._SearchEntries_k__BackingField);
        }
        if (unaff_R12B != '\0') {
          pGVar13 = (Gisketch_Aottg2UI_Building_GisketchView_o *)instance->return_type;
          if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar8 = (MethodInfo *)0x0;
          Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(pGVar13,(MethodInfo *)0x0);
        }
        if (cVar11 != '\0') {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus
                    ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)instance,pMVar8);
        }
        goto label_03b50f1a;
      }
      goto label_03b50f5e;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b50f5e:
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar5 = *plVar10;
    __cxa_end_catch();
    __this_02.fields._area._4_4_ = popoverGap;
    __this_02.fields._area._0_4_ = uVar15;
    __this_02.fields._detail = (System_String_o *)pUVar12;
    __this_02.fields._startMs._0_4_ = uVar17;
    __this_02.fields._startMs._4_4_ = uVar18;
    __this_02.fields._enabled = uVar19;
    __this_02.fields._hotLoop = bVar20;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_02,(MethodInfo *)&stack0xffffffffffffff60);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_03.fields._area._4_4_ = popoverGap;
  __this_03.fields._area._0_4_ = uVar15;
  __this_03.fields._detail = (System_String_o *)pUVar12;
  __this_03.fields._startMs._0_4_ = uVar17;
  __this_03.fields._startMs._4_4_ = uVar18;
  __this_03.fields._enabled = uVar19;
  __this_03.fields._hotLoop = bVar20;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_03,(MethodInfo *)&stack0xffffffffffffff60);
  _Unwind_Resume(auVar16._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$ReplaceContent
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__ReplaceContent (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, Gisketch_Aottg2UI_Building_GisketchView_o* inner, const MethodInfo* method);
// 0x3b53320

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__ReplaceContent
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               Gisketch_Aottg2UI_Building_GisketchView_o *inner,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_GisketchMotionTarget__o *pSVar2;
  char cVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  System_Object_array *pSVar6;
  MethodInfo *pMVar7;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_array *fourCornersArray;
  ulong uVar8;
  MethodInfo *pMVar9;
  float *pfVar10;
  ulong uVar11;
  uint uVar12;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar13;
  MethodInfo *__this_01;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *array;
  MethodInfo *rect;
  MethodInfo **__this_02;
  UnityEngine_Vector2_Fields UVar14;
  UnityEngine_Vector2_Fields UVar15;
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar16;
  undefined8 extraout_XMM0_Qb_00;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_Fields worldPoint;
  UnityEngine_Vector3_o worldPoint_00;
  UnityEngine_Vector3_o worldPoint_01;
  UnityEngine_Vector2_Fields UStack_d8;
  UnityEngine_Vector2_Fields UStack_d0;
  undefined8 uStack_c8;
  float fStack_b4;
  UnityEngine_Vector2_Fields UStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *pGStack_88;
  MethodInfo *pMStack_80;
  
  pGVar13 = inner;
  array = (Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *)__this;
  if (g_data_057a9cff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    array = (Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cff = '\x01';
  }
  uVar12 = (uint)pGVar13;
  pGVar13 = (__this->fields).View;
  if ((pGVar13 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
     (pSVar2 = (pGVar13->fields)._MotionTargets_k__BackingField,
     pSVar2 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0)) {
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      array = (pSVar2->fields)._items;
      uVar12 = 0;
      System_Array__Clear((System_Array_o *)array,0,length,(MethodInfo *)0x0);
    }
    if (inner == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      (__this->fields)._ContentRoot_k__BackingField = (UnityEngine_GameObject_o *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._ContentRoot_k__BackingField,0);
      return;
    }
    pGVar13 = (__this->fields).View;
    if (pGVar13 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      pSVar2 = (pGVar13->fields)._MotionTargets_k__BackingField;
      array = (Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *)0x0;
      if (pSVar2 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
        System_Collections_Generic_List_GisketchMotionTarget___AddRange
                  (pSVar2,(System_Collections_Generic_IEnumerable_T__o *)
                          (inner->fields)._MotionTargets_k__BackingField,MethodInfo_Void_AddRange);
        (__this->fields)._ContentRoot_k__BackingField = (inner->fields)._Root_k__BackingField;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._ContentRoot_k__BackingField);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ced == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    g_data_057a9ced = '\x01';
  }
  pMVar9 = (MethodInfo *)array->m_Items[0].fields.GameObject;
  if (pMVar9 != (MethodInfo *)0x0) {
    if ((0 < *(int *)&pMVar9->name) &&
       (pIVar5 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pMVar9,*(int *)&pMVar9->name + -1,
                            MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item), pIVar5 != (Il2CppObject *)0x0)) {
      Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
                ((UnityEngine_GameObject_o *)pIVar5[3].klass,uVar12 & 0xff,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  __this_01 = (MethodInfo *)0x0;
  rect = pMVar9;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (pMVar9 != (MethodInfo *)0x0) {
    __this_01 = (MethodInfo *)0x0;
    pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       ((UnityEngine_GameObject_o *)pMVar9,0,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    rect = pMVar9;
    if (pSVar6 != (System_Object_array *)0x0) {
      if ((int)pSVar6->max_length < 1) {
        return;
      }
      array = (Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *)0x0;
      if ((pSVar6->max_length & 0xffffffff) != 0) {
        do {
          pMVar7 = (MethodInfo *)pSVar6->m_Items[(long)array];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_01 = (MethodInfo *)0x0;
          pMVar9 = pMVar7;
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pMVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            rect = pMVar9;
            if (pMVar7 == (MethodInfo *)0x0) goto label_03b535bb;
            __this_01 = (((System_Collections_Generic_List_object__c *)pMVar7->methodPointer)->vtable).
                        _9_unknown.method;
            pMVar9 = pMVar7;
            cVar3 = (*(((System_Collections_Generic_List_object__c *)pMVar7->methodPointer)->vtable).
                      _9_unknown.methodPtr)();
            if (cVar3 != '\0') {
              __this_01 = (((System_Collections_Generic_List_object__c *)pMVar7->methodPointer)->vtable).
                          _24_System_Collections_IList_get_IsFixedSize.method;
              pMVar9 = pMVar7;
              cVar3 = (*(((System_Collections_Generic_List_object__c *)pMVar7->methodPointer)->vtable).
                        _24_System_Collections_IList_get_IsFixedSize.methodPtr)();
              if (cVar3 != '\0') {
                return;
              }
            }
          }
          array = (Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *)((long)&(array->obj).klass + 1);
          uVar12 = (uint)pSVar6->max_length;
          if ((long)(int)uVar12 <= (long)array) {
            return;
          }
        } while (array < (Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *)(ulong)uVar12);
      }
      il2cpp_runtime_helper_022b2ca0();
      rect = pMVar9;
    }
  }
label_03b535bb:
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (MethodInfo **)rect;
  pGStack_88 = array;
  pMStack_80 = pMVar7;
  if (g_data_057a9cfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    __this_02 = &TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cfb = '\x01';
  }
  if (__this_01 != (MethodInfo *)0x0) {
    pMVar7 = (MethodInfo *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
    pMVar9 = (MethodInfo *)0x0;
    if ((pMVar7 != (MethodInfo *)0x0) &&
       (pMVar9 = (MethodInfo *)0x0,
       (System_Collections_Generic_List_object__c *)pMVar7->methodPointer == TypeInfo_RectTransform)) {
      pMVar9 = pMVar7;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      __this_02 = (MethodInfo **)TypeInfo_Vector3;
      fourCornersArray = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
      if ((pMVar9 != (MethodInfo *)0x0) &&
         (UnityEngine_RectTransform__GetWorldCorners
                    ((UnityEngine_RectTransform_o *)pMVar9,fourCornersArray,(MethodInfo *)0x0),
         __this_02 = (MethodInfo **)pMVar9, fourCornersArray != (UnityEngine_Vector3_array *)0x0)) {
        fVar17 = fStack_9c;
        if ((int)fourCornersArray->max_length != 0) {
          UVar14.x = fourCornersArray->m_Items[0].fields.x;
          UVar14.y = fourCornersArray->m_Items[0].fields.y;
          fVar17 = fourCornersArray->m_Items[0].fields.z;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            uStack_c8 = 0;
            UStack_d0 = UVar14;
            fStack_a0 = fVar17;
            il2cpp_runtime_helper_02337ed0();
            UVar14 = UStack_d0;
            fVar17 = fStack_a0;
          }
          worldPoint_00.fields.z = fVar17;
          worldPoint_00.fields.x = UVar14.x;
          worldPoint_00.fields.y = UVar14.y;
          UVar14 = (UnityEngine_Vector2_Fields)
                   UnityEngine_RectTransformUtility__WorldToScreenPoint
                             ((UnityEngine_Camera_o *)0x0,worldPoint_00,(MethodInfo *)0x0);
          uVar16 = extraout_XMM0_Qb;
          if (g_data_057a9cfd == '\0') {
            UStack_d0 = UVar14;
            uStack_c8 = extraout_XMM0_Qb;
            il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
            g_data_057a9cfd = '\x01';
            UVar14 = UStack_d0;
            uVar16 = uStack_c8;
          }
          UStack_d8.x = 0.0;
          UStack_d8.y = 0.0;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            UStack_d0 = UVar14;
            uStack_c8 = uVar16;
            il2cpp_runtime_helper_02337ed0();
            UVar14 = UStack_d0;
          }
          pMVar9 = rect;
          UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar14,
                     (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStack_d8,(MethodInfo *)0x0);
          if ((int)fourCornersArray->max_length < 2) {
            return;
          }
          uVar8 = fourCornersArray->max_length & 0xffffffff;
          pfVar10 = &fourCornersArray->m_Items[1].fields.z;
          uVar11 = 1;
          fStack_9c = 0.0;
          UStack_d0.x = UStack_d8.x;
          fVar18 = UStack_d8.y;
          fVar19 = 0.0;
          fStack_a0 = UStack_d8.x;
          fVar17 = UStack_d8.y;
          while( true ) {
            UStack_d0.y = fVar18;
            uStack_c8 = CONCAT44(fVar19,fVar19);
            fStack_98 = fStack_9c;
            fStack_94 = fStack_9c;
            if (uVar8 <= uVar11) break;
            UVar15.x = ((UnityEngine_Vector3_Fields *)(pfVar10 + -2))->x;
            UVar15.y = ((UnityEngine_Vector3_Fields *)(pfVar10 + -2))->y;
            fVar18 = *pfVar10;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              uStack_a8 = 0;
              fStack_b4 = *pfVar10;
              UStack_b0 = UVar15;
              fStack_9c = fVar17;
              fStack_94 = fStack_98;
              il2cpp_runtime_helper_02337ed0();
              UVar15 = UStack_b0;
              fVar17 = fStack_9c;
              fVar18 = fStack_b4;
            }
            fStack_9c = fVar17;
            worldPoint_01.fields.z = fVar18;
            worldPoint_01.fields.x = UVar15.x;
            worldPoint_01.fields.y = UVar15.y;
            UVar14 = (UnityEngine_Vector2_Fields)
                     UnityEngine_RectTransformUtility__WorldToScreenPoint
                               ((UnityEngine_Camera_o *)0x0,worldPoint_01,(MethodInfo *)0x0);
            uVar16 = extraout_XMM0_Qb_00;
            if (g_data_057a9cfd == '\0') {
              UStack_b0 = UVar14;
              uStack_a8 = extraout_XMM0_Qb_00;
              il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
              g_data_057a9cfd = '\x01';
              UVar14 = UStack_b0;
              uVar16 = uStack_a8;
            }
            UStack_d8.x = 0.0;
            UStack_d8.y = 0.0;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              UStack_b0 = UVar14;
              uStack_a8 = uVar16;
              il2cpp_runtime_helper_02337ed0();
              UVar14 = UStack_b0;
            }
            pMVar9 = rect;
            UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar14,
                       (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStack_d8,(MethodInfo *)0x0);
            fVar17 = UStack_d8.x;
            if (fVar17 <= UStack_d0.x) {
              UStack_d0.x = fVar17;
            }
            if (fStack_a0 <= fVar17) {
              fStack_a0 = fVar17;
            }
            fVar19 = UStack_d8.y;
            fVar18 = UStack_d0.y;
            if (fVar19 <= UStack_d0.y) {
              fVar18 = fVar19;
            }
            fVar17 = fStack_9c;
            if (fStack_9c <= fVar19) {
              fVar17 = fVar19;
            }
            uVar11 = uVar11 + 1;
            uVar12 = (uint)fourCornersArray->max_length;
            uVar8 = (ulong)uVar12;
            pfVar10 = pfVar10 + 3;
            fVar19 = UStack_d0.y;
            if ((long)(int)uVar12 <= (long)uVar11) {
              return;
            }
          }
        }
        fStack_9c = fVar17;
        il2cpp_runtime_helper_022b2ca0();
        __this_02 = (MethodInfo **)pMVar9;
      }
    }
    else {
      __this_00 = UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
      __this_02 = (MethodInfo **)__this_01;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        worldPoint = (UnityEngine_Vector3_Fields)
                     UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          UStack_d0 = worldPoint._0_8_;
          fStack_a0 = worldPoint.z;
          il2cpp_runtime_helper_02337ed0();
          worldPoint.z = fStack_a0;
          worldPoint.x = UStack_d0.x;
          worldPoint.y = UStack_d0.y;
        }
        UVar14 = (UnityEngine_Vector2_Fields)
                 UnityEngine_RectTransformUtility__WorldToScreenPoint
                           ((UnityEngine_Camera_o *)0x0,(UnityEngine_Vector3_o)worldPoint,(MethodInfo *)0x0);
        if (g_data_057a9cfd == '\0') {
          UStack_d0 = UVar14;
          il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
          g_data_057a9cfd = '\x01';
          UVar14 = UStack_d0;
        }
        UStack_d8.x = 0.0;
        UStack_d8.y = 0.0;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          UStack_d0 = UVar14;
          il2cpp_runtime_helper_02337ed0();
          UVar14 = UStack_d0;
        }
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar14,
                   (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStack_d8,(MethodInfo *)0x0);
        if (g_data_057a694c == '\0') {
          UStack_d0 = UStack_d8;
          uStack_c8 = 0;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)__this_02 == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$SetPreviousSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__SetPreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* previousSelected, const MethodInfo* method);
// 0x3b51310

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__SetPreviousSelected
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               UnityEngine_GameObject_o *previousSelected,MethodInfo *method)

{
  (__this->fields)._PreviousSelected_k__BackingField = previousSelected;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._PreviousSelected_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.<>c__DisplayClass25_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass25_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x3b52bb0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass25_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.<>c__DisplayClass25_0$$<CloseInstance>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass25_0___CloseInstance_b__0 (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x3b53be0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass25_0___CloseInstance_b__0
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  
  pGVar1 = (__this->fields).instance;
  if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject((pGVar1->fields).Host,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$BuildOverlayInstance
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* anchor, int32_t kind, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x3b4fee0

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_GameObject_o *anchor,
          int32_t kind,bool_conflict forceBelow,bool_conflict matchAnchorWidth,float popoverGap,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  UnityEngine_Events_UnityEvent_o *__this_00;
  undefined1 auVar1 [16];
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_04;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_05;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_06;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_07;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_08;
  byte bVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  System_Type_array *pSVar5;
  System_Type_o *pSVar6;
  long lVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  Gilzoide_FlexUi_FlexLayout_o *pGVar10;
  Gisketch_Aottg2UI_Building_GisketchView_o *inner;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar11;
  undefined8 uVar12;
  Gilzoide_FlexUi_FlexLayout_o *pGVar13;
  undefined8 *puVar14;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *extraout_RAX;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar15;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *extraout_RAX_00;
  System_RuntimeTypeHandle_o SVar16;
  UnityEngine_RectTransform_o *rect;
  Il2CppObject *pIVar17;
  UnityEngine_UI_Selectable_o *__this_09;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *extraout_RAX_01;
  UnityEngine_GameObject_o *root;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *extraout_RAX_02;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *extraout_RAX_03;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *pGVar18;
  Il2CppClass *method_01;
  MethodInfo *method_02;
  ulong extraout_RDX;
  UnityEngine_RectTransform_o *host;
  MethodInfo *method_03;
  uint uVar19;
  MethodInfo *pMVar20;
  UnityEngine_Transform_o *parent;
  long *plVar21;
  long *plVar22;
  undefined4 in_register_00000084;
  MethodInfo *pMVar23;
  ulong uVar24;
  ulong uVar25;
  float gap;
  int32_t iVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [12];
  System_String_o SStack_190;
  _union_13 _Stack_178;
  System_Type_array *pSStack_168;
  UnityEngine_Transform_o *pUStack_160;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGStack_158;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_150;
  ulong uStack_148;
  System_Type_o *pSStack_140;
  undefined8 uStack_138;
  int32_t iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_118;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGStack_110;
  UnityEngine_GameObject_o *pUStack_108;
  System_String_o *pSStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_d0;
  UnityEngine_GameObject_o *pUStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  UnityEngine_GameObject_o *pUStack_b0;
  MethodInfo *in_stack_ffffffffffffff58;
  undefined8 in_stack_ffffffffffffff60;
  int32_t in_stack_ffffffffffffff68;
  System_String_o local_88;
  undefined8 uStack_70;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *local_68;
  UnityEngine_GameObject_o *local_60;
  System_String_c *local_58;
  Il2CppMethodPointer pIStack_50;
  System_String_Fields local_48;
  char *pcStack_40;
  
  uVar24 = (ulong)(uint)matchAnchorWidth;
  pMVar23 = (MethodInfo *)CONCAT44(in_register_00000084,forceBelow);
  pUVar8 = (UnityEngine_GameObject_o *)(ulong)(uint)kind;
  local_60 = anchor;
  if (g_data_057a9cdf == '\0') {
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ff25;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ff31;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_AddComponent_FlexLayout);
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ff3d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ff49;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ff55;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ff61;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ff6d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_OverlayInstance);
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ff79;
    il2cpp_runtime_helper_023445d0(&TypeInfo_OverlayKind);
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ff85;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ff91;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ff9d;
    il2cpp_runtime_helper_023445d0(&" ");
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ffa9;
    il2cpp_runtime_helper_023445d0(&"Overlay.BuildOverlayInstance");
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4ffb5;
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057a9cdf = '\x01';
  }
  local_48 = (System_String_Fields)0x0;
  pcStack_40 = (char *)0x0;
  local_58 = (System_String_c *)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  local_88.klass = TypeInfo_OverlayKind;
  local_88.monitor = (void *)0xffffffffffffffff;
  local_88.fields._stringLength = kind;
  pUStack_b0 = (UnityEngine_GameObject_o *)0x3b4fff2;
  pSVar4 = System_Enum__ToString((System_Enum_o *)&local_88,(MethodInfo *)0x0);
  pMVar20 = "Overlay.BuildOverlayInstance";
  local_68 = &overlay->fields;
  pGVar18 = local_68;
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    pGVar18 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&"null";
  }
  method_01 = (Il2CppClass *)0x0;
  pUStack_b0 = (UnityEngine_GameObject_o *)0x3b5002b;
  method_00 = (MethodInfo *)System_String__Concat_3af7150(pSVar4," ",pGVar18->id,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50046;
    il2cpp_runtime_helper_02337ed0();
  }
  local_88.fields._stringLength = 0;
  local_88.fields._firstChar = 0;
  local_88.fields._6_2_ = 0;
  uStack_70 = (char *)0x0;
  local_88.klass = (System_String_c *)0x0;
  local_88.monitor = (Il2CppMethodPointer)0x0;
  pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50063;
  __this_05.fields._detail = (System_String_o *)in_stack_ffffffffffffff60;
  __this_05.fields._area = (System_String_o *)in_stack_ffffffffffffff58;
  __this_05.fields._startMs._0_4_ = in_stack_ffffffffffffff68;
  __this_05.fields._startMs._4_4_ = forceBelow;
  __this_05.fields._enabled = matchAnchorWidth;
  __this_05.fields._hotLoop = (bool_conflict)popoverGap;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__this_05,&local_88,(System_String_o *)pMVar20,method_00);
  local_48 = local_88.fields;
  pcStack_40 = uStack_70;
  local_58 = local_88.klass;
  pIStack_50 = local_88.monitor;
  pUStack_b0 = (UnityEngine_GameObject_o *)0x3b5007f;
  iVar26 = local_88.fields._stringLength;
  uVar27 = local_88.fields._4_4_;
  uVar28 = (undefined4)uStack_70;
  uVar29 = uStack_70._4_4_;
  pSVar4 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OverlayName(overlay,pMVar20);
  pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50096;
  pSVar5 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar16 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b500bf;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_b0 = (UnityEngine_GameObject_o *)0x3b500c9;
  pSVar6 = System_Type__GetTypeFromHandle(SVar16,(MethodInfo *)0x0);
  if (pSVar5 == (System_Type_array *)0x0) {
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b502ca;
    il2cpp_runtime_helper_022b2c90();
label_03b502ca:
    kind = in_stack_ffffffffffffff68;
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b502cf;
    il2cpp_runtime_helper_022b2ca0();
label_03b502cf:
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b502d4;
    il2cpp_runtime_helper_022b2c90();
label_03b502d4:
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b502d9;
    il2cpp_runtime_helper_022b2c90();
label_03b502d9:
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b502de;
    il2cpp_runtime_helper_022b2c90();
label_03b502de:
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b502e3;
    il2cpp_runtime_helper_022b2c90();
    in_stack_ffffffffffffff68 = kind;
  }
  else {
    if (pSVar6 == (System_Type_o *)0x0) {
label_03b500f2:
      if ((int)pSVar5->max_length == 0) goto label_03b502ca;
      pSVar5->m_Items[0] = pSVar6;
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b5010f;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items,pSVar6);
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50123;
      pUVar8 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      method_01 = (Il2CppClass *)0x0;
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50136;
      UnityEngine_GameObject___ctor_4dfc440(pUVar8,pSVar4,pSVar5,(MethodInfo *)0x0);
      if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_03b502cf;
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50149;
      pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
      if (pUVar9 == (UnityEngine_Transform_o *)0x0) goto label_03b502d4;
      method_01 = (Il2CppClass *)0x0;
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50163;
      UnityEngine_Transform__SetParent_4e09e30(pUVar9,(__this->fields)._layer,0,(MethodInfo *)0x0);
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50175;
      UnityEngine_GameObject__AddComponent_object_(pUVar8,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50187;
      pMVar20 = MethodInfo_RectTransform_GetComponent_RectTransform;
      pSVar4 = (System_String_o *)
               UnityEngine_GameObject__GetComponent_object_(pUVar8,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50192;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch
                ((UnityEngine_RectTransform_o *)pSVar4,pMVar20);
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b501a4;
      pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)
                UnityEngine_GameObject__AddComponent_object_(pUVar8,MethodInfo_FlexLayout_AddComponent_FlexLayout);
      if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) goto label_03b502d9;
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b501ba;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ConfigureHost
                (pGVar10,(uint)(byte)(overlay->fields).modal,method_02);
      if ((char)(overlay->fields).modal == '\0') {
        if (*(char *)((long)&(overlay->fields).modal + 1) != '\0') {
          pUStack_b0 = (UnityEngine_GameObject_o *)0x3b501f8;
          pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
          uVar28 = 0;
          uVar29 = 0;
          pUStack_b0 = (UnityEngine_GameObject_o *)0x3b5020e;
          iVar26 = 0;
          uVar27._0_2_ = 0;
          uVar27._2_2_ = 0;
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
                    (__this,pUVar9,1,(UnityEngine_Color_o)ZEXT816(0),(MethodInfo *)method_01);
        }
      }
      else {
        pUStack_b0 = (UnityEngine_GameObject_o *)0x3b501cb;
        pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
        iVar26 = (int32_t)g_data_00d1bd10;
        uVar27 = g_data_00d1bd10._4_4_;
        uVar28 = g_data_00d1bd10._8_4_;
        uVar29 = g_data_00d1bd10._12_4_;
        pUStack_b0 = (UnityEngine_GameObject_o *)0x3b501e5;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = (ulong)g_data_00d1bd10;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
                  (__this,pUVar9,(uint)*(byte *)((long)&(overlay->fields).modal + 1),
                   (UnityEngine_Color_o)(auVar1 << 0x40),(MethodInfo *)method_01);
      }
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50218;
      pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
      context = (__this->fields)._context;
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50238;
        il2cpp_runtime_helper_02337ed0();
      }
      method_01 = (Il2CppClass *)0x0;
      pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50248;
      inner = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                        (overlay,pUVar9,context,(MethodInfo *)0x0);
      if (inner != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        pMVar23 = (MethodInfo *)(ulong)(byte)matchAnchorWidth;
        pUStack_b0 = (UnityEngine_GameObject_o *)0x3b5027a;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
                  (overlay,(inner->fields)._Root_k__BackingField,(UnityEngine_RectTransform_o *)pSVar4,
                   local_60,forceBelow & 0xff,matchAnchorWidth & 0xff,popoverGap,in_stack_ffffffffffffff58);
        pSVar4 = local_68->id;
        pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50291;
        pGVar11 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_OverlayInstance);
        pUStack_b0 = (UnityEngine_GameObject_o *)0x3b502a9;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance___ctor
                  (pGVar11,kind,pSVar4,pUVar8,inner,pMVar23);
        pUStack_b0 = (UnityEngine_GameObject_o *)0x3b502b3;
        __this_06.fields._detail = (System_String_o *)in_stack_ffffffffffffff60;
        __this_06.fields._area = (System_String_o *)in_stack_ffffffffffffff58;
        __this_06.fields._startMs._0_4_ = kind;
        __this_06.fields._startMs._4_4_ = forceBelow;
        __this_06.fields._enabled = matchAnchorWidth;
        __this_06.fields._hotLoop = (bool_conflict)popoverGap;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_06,(MethodInfo *)&local_58);
        return pGVar11;
      }
      goto label_03b502de;
    }
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b500e9;
    lVar7 = il2cpp_runtime_helper_023051f0(pSVar6);
    if (lVar7 != 0) goto label_03b500f2;
  }
  pUStack_b0 = (UnityEngine_GameObject_o *)0x3b502e8;
  uVar12 = il2cpp_runtime_helper_0231b270();
  pUVar9 = (UnityEngine_Transform_o *)0x0;
  pUStack_b0 = (UnityEngine_GameObject_o *)0x3b502f2;
  auVar30 = il2cpp_runtime_helper_022b2b10(uVar12);
  uStack_b8 = auVar30._0_8_;
  if (auVar30._8_4_ == 1) {
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50442;
    plVar21 = (long *)__cxa_begin_catch(uStack_b8);
    lVar7 = *plVar21;
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b5044a;
    __cxa_end_catch();
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50454;
    __this_07.fields._detail = (System_String_o *)in_stack_ffffffffffffff60;
    __this_07.fields._area = (System_String_o *)in_stack_ffffffffffffff58;
    __this_07.fields._startMs._0_4_ = in_stack_ffffffffffffff68;
    __this_07.fields._startMs._4_4_ = forceBelow;
    __this_07.fields._enabled = matchAnchorWidth;
    __this_07.fields._hotLoop = (bool_conflict)popoverGap;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_07,(MethodInfo *)&local_58);
    if (lVar7 == 0) {
      return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
    }
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b5046c;
    uStack_b8 = il2cpp_runtime_helper_022fefe0(lVar7);
  }
  else {
    lVar7 = 0;
  }
  pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50479;
  __this_08.fields._detail = (System_String_o *)in_stack_ffffffffffffff60;
  __this_08.fields._area = (System_String_o *)in_stack_ffffffffffffff58;
  __this_08.fields._startMs._0_4_ = in_stack_ffffffffffffff68;
  __this_08.fields._startMs._4_4_ = forceBelow;
  __this_08.fields._enabled = matchAnchorWidth;
  __this_08.fields._hotLoop = (bool_conflict)popoverGap;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_08,(MethodInfo *)&local_58);
  if (lVar7 == 0) {
    pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50486;
    _Unwind_Resume(uStack_b8);
  }
  pUStack_b0 = (UnityEngine_GameObject_o *)0x3b5048e;
  pGVar13 = (Gilzoide_FlexUi_FlexLayout_o *)il2cpp_runtime_helper_022fefe0(lVar7);
  pUStack_b0 = (UnityEngine_GameObject_o *)0x3b50496;
  uStack_c0 = il2cpp_runtime_helper_01f66400();
  pGVar10 = pGVar13;
  pUStack_b0 = pUVar8;
  if (g_data_057a9cea == '\0') {
    pUStack_c8 = (UnityEngine_GameObject_o *)0x3b504bc;
    il2cpp_runtime_helper_023445d0(&" ");
    pUStack_c8 = (UnityEngine_GameObject_o *)0x3b504c8;
    il2cpp_runtime_helper_023445d0(&"AoTTG ");
    pUStack_c8 = (UnityEngine_GameObject_o *)0x3b504d4;
    il2cpp_runtime_helper_023445d0(&"Popover");
    pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)&"Dialog";
    pUStack_c8 = (UnityEngine_GameObject_o *)0x3b504e0;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cea = '\x01';
  }
  if (pGVar13 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    if (*(char *)&(pGVar13->fields)._configuration == '\0') {
      puVar14 = &"Popover";
    }
    else {
      puVar14 = &"Dialog";
    }
    pSVar4 = (System_String_o *)*puVar14;
    pUStack_c8 = (UnityEngine_GameObject_o *)0x3b50510;
    bVar3 = System_String__IsNullOrEmpty((System_String_o *)(pGVar13->fields).m_CachedPtr,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pGVar11 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                System_String__Concat_3af7470
                          ("AoTTG ",pSVar4," ",(System_String_o *)(pGVar13->fields).m_CachedPtr,
                           (MethodInfo *)0x0);
      return pGVar11;
    }
    pGVar11 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
              System_String__Concat_3ae5ba0("AoTTG ",pSVar4,(MethodInfo *)0x0);
    return pGVar11;
  }
  pUStack_c8 = (UnityEngine_GameObject_o *)0x3b5055e;
  uStack_d8 = il2cpp_runtime_helper_022b2c90();
  plVar21 = (long *)pGVar10;
  pGStack_d0 = pGVar13;
  pUStack_c8 = pUVar8;
  if (g_data_057a694c == '\0') {
    plVar21 = &TypeInfo_Vector2;
    lStack_e0 = 0x3b5057c;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (pGVar10 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    lStack_e0 = 0x3b505ab;
    UnityEngine_RectTransform__set_anchorMin
              ((UnityEngine_RectTransform_o *)pGVar10,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a9c86 == '\0') {
      lStack_e0 = 0x3b505c0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    lStack_e0 = 0x3b505e0;
    UnityEngine_RectTransform__set_anchorMax
              ((UnityEngine_RectTransform_o *)pGVar10,
               (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      lStack_e0 = 0x3b505f5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    lStack_e0 = 0x3b50614;
    UnityEngine_RectTransform__set_offsetMin
              ((UnityEngine_RectTransform_o *)pGVar10,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a694c == '\0') {
      lStack_e0 = 0x3b50629;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              ((UnityEngine_RectTransform_o *)pGVar10,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    return extraout_RAX;
  }
  lStack_e0 = 0x3b50654;
  uStack_f0 = il2cpp_runtime_helper_022b2c90();
  parent = pUVar9;
  plVar22 = plVar21;
  pGStack_e8 = pGVar10;
  lStack_e0 = lVar7;
  if (g_data_057a9ce9 == '\0') {
    plVar22 = &TypeInfo_YGValue;
    uStack_f8 = 0x3b5067d;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ce9 = '\x01';
  }
  if ((Gilzoide_FlexUi_FlexLayout_o *)plVar21 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    uStack_f8 = 0x3b50699;
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection((Gilzoide_FlexUi_FlexLayout_o *)plVar21,0,(MethodInfo *)0x0)
    ;
    uStack_f8 = 0x3b506a5;
    Gilzoide_FlexUi_FlexLayout__set_FlexWrap((Gilzoide_FlexUi_FlexLayout_o *)plVar21,0,(MethodInfo *)0x0);
    uVar19 = (uint)pUVar9 & 0xff;
    uStack_f8 = 0x3b506b5;
    Gilzoide_FlexUi_FlexLayout__set_JustifyContent
              ((Gilzoide_FlexUi_FlexLayout_o *)plVar21,uVar19,(MethodInfo *)0x0);
    uStack_f8 = 0x3b506c4;
    Gilzoide_FlexUi_FlexLayout__set_AlignItems
              ((Gilzoide_FlexUi_FlexLayout_o *)plVar21,uVar19 + 1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      uStack_f8 = 0x3b506dc;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_f8 = 0x3b506eb;
    GVar15 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    uStack_f8 = 0x3b506f8;
    Gilzoide_FlexUi_FlexLayout__set_Width((Gilzoide_FlexUi_FlexLayout_o *)plVar21,GVar15,(MethodInfo *)0x0);
    uStack_f8 = 0x3b50707;
    GVar15 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Height((Gilzoide_FlexUi_FlexLayout_o *)plVar21,GVar15,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uStack_f8 = 0x3b5071f;
  uStack_138 = il2cpp_runtime_helper_022b2c90();
  uVar25 = extraout_RDX & 0xffffffff;
  iStack_128 = iVar26;
  uStack_124 = uVar27;
  uStack_120 = uVar28;
  uStack_11c = uVar29;
  pGStack_118 = (Gilzoide_FlexUi_FlexLayout_o *)plVar21;
  pGStack_110 = __this;
  pUStack_108 = pUVar8;
  pSStack_100 = pSVar4;
  uStack_f8 = (ulong)pUVar9 & 0xffffffff;
  if (g_data_057a9ceb == '\0') {
    pSStack_140 = (System_Type_o *)0x3b50753;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_AddComponent_Button);
    pSStack_140 = (System_Type_o *)0x3b5075f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pSStack_140 = (System_Type_o *)0x3b5076b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pSStack_140 = (System_Type_o *)0x3b50777;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pSStack_140 = (System_Type_o *)0x3b50783;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddBackdrop_b__20_0);
    pSStack_140 = (System_Type_o *)0x3b5078f;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pSStack_140 = (System_Type_o *)0x3b5079b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pSStack_140 = (System_Type_o *)0x3b507a7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    pSStack_140 = (System_Type_o *)0x3b507b3;
    il2cpp_runtime_helper_023445d0(&"AoTTG Backdrop");
    g_data_057a9ceb = '\x01';
  }
  pSStack_140 = (System_Type_o *)0x3b507ce;
  pSVar5 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar16 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pSStack_140 = (System_Type_o *)0x3b507f7;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_140 = (System_Type_o *)0x3b50801;
  pSVar6 = System_Type__GetTypeFromHandle(SVar16,(MethodInfo *)0x0);
  if (pSVar5 == (System_Type_array *)0x0) {
label_03b50972:
    pSStack_140 = (System_Type_o *)0x3b50977;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar16.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar6;
    if (pSVar6 != (System_Type_o *)0x0) {
      pSStack_140 = (System_Type_o *)0x3b50821;
      lVar7 = il2cpp_runtime_helper_023051f0(pSVar6);
      if (lVar7 == 0) goto label_03b5097c;
    }
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = pSVar6;
      pSStack_140 = (System_Type_o *)0x3b50847;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items,pSVar6);
      pSStack_140 = (System_Type_o *)0x3b50856;
      SVar16.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      method_01 = (Il2CppClass *)0x0;
      pSStack_140 = (System_Type_o *)0x3b50870;
      UnityEngine_GameObject___ctor_4dfc440
                ((UnityEngine_GameObject_o *)SVar16.fields.value,"AoTTG Backdrop",pSVar5,(MethodInfo *)0x0);
      if (SVar16.fields.value != 0) {
        pSStack_140 = (System_Type_o *)0x3b50883;
        pUVar9 = UnityEngine_GameObject__get_transform
                           ((UnityEngine_GameObject_o *)SVar16.fields.value,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          method_01 = (Il2CppClass *)0x0;
          pSStack_140 = (System_Type_o *)0x3b5089b;
          UnityEngine_Transform__SetParent_4e09e30(pUVar9,parent,0,(MethodInfo *)0x0);
          pSStack_140 = (System_Type_o *)0x3b508ad;
          pMVar20 = MethodInfo_RectTransform_GetComponent_RectTransform;
          rect = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent_object_
                           ((UnityEngine_GameObject_o *)SVar16.fields.value,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform
                           );
          pSStack_140 = (System_Type_o *)0x3b508b5;
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch(rect,pMVar20);
          pSStack_140 = (System_Type_o *)0x3b508c7;
          pIVar17 = UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)SVar16.fields.value,MethodInfo_Image_AddComponent_Image);
          if (pIVar17 != (Il2CppObject *)0x0) {
            method_01 = pIVar17->klass;
            pSStack_140 = (System_Type_o *)0x3b508ec;
            pGVar11 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                      (*method_01->vtable[0x17].methodPtr)
                                ((undefined4)uStack_138,iStack_128,pIVar17,method_01->vtable[0x17].method);
            if ((char)uVar25 == '\0') {
              return pGVar11;
            }
            pSStack_140 = (System_Type_o *)0x3b50903;
            __this_09 = (UnityEngine_UI_Selectable_o *)
                        UnityEngine_GameObject__AddComponent_object_
                                  ((UnityEngine_GameObject_o *)SVar16.fields.value,MethodInfo_Button_AddComponent_Button);
            if (__this_09 != (UnityEngine_UI_Selectable_o *)0x0) {
              pSStack_140 = (System_Type_o *)0x3b50917;
              UnityEngine_UI_Selectable__set_transition(__this_09,0,(MethodInfo *)0x0);
              __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_09->fields).m_CanvasGroupCache;
              pSStack_140 = (System_Type_o *)0x3b5092d;
              SVar16.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              method_01 = (Il2CppClass *)0x0;
              pSStack_140 = (System_Type_o *)0x3b50947;
              UnityEngine_Events_UnityAction___ctor();
              pSVar5 = (System_Type_array *)0x0;
              if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener
                          (__this_00,(UnityEngine_Events_UnityAction_o *)SVar16.fields.value,(MethodInfo *)0x0
                          );
                return extraout_RAX_01;
              }
            }
          }
        }
      }
      goto label_03b50972;
    }
  }
  pSStack_140 = (System_Type_o *)0x3b5097c;
  il2cpp_runtime_helper_022b2ca0();
label_03b5097c:
  pSStack_140 = (System_Type_o *)0x3b50981;
  lVar7 = il2cpp_runtime_helper_0231b270();
  pUVar8 = (UnityEngine_GameObject_o *)0x0;
  pSStack_140 = (System_Type_o *)0x3b5098b;
  gap = (float)il2cpp_runtime_helper_022b2b10();
  uVar19 = (uint)pMVar23;
  pSStack_168 = pSVar5;
  pUStack_160 = parent;
  pGStack_158 = overlay;
  pGStack_150 = (Gilzoide_FlexUi_FlexLayout_o *)plVar22;
  uStack_148 = uVar25;
  pSStack_140 = (System_Type_o *)SVar16.fields.value;
  if (g_data_057a9ce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"Overlay.PrepareLayout");
    g_data_057a9ce2 = '\x01';
  }
  pSVar4 = "Overlay.PrepareLayout";
  uVar27 = 0;
  uVar28 = 0;
  uVar29 = 0;
  bVar3 = 0;
  if (lVar7 == 0) {
    puVar14 = &"null";
  }
  else {
    puVar14 = (undefined8 *)(lVar7 + 0x10);
  }
  pMVar20 = (MethodInfo *)*puVar14;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_190.fields._stringLength = 0;
  SStack_190.fields._firstChar = 0;
  SStack_190.fields._6_2_ = 0;
  _Stack_178.rgctx_data = (Il2CppRGCTXData *)0x0;
  SStack_190.klass = (System_String_c *)0x0;
  SStack_190.monitor = (Il2CppType *)0x0;
  __this_01.fields._area._4_4_ = gap;
  __this_01.fields._area._0_4_ = uVar19;
  __this_01.fields._detail = (System_String_o *)method_01;
  __this_01.fields._startMs._0_4_ = uVar27;
  __this_01.fields._startMs._4_4_ = uVar28;
  __this_01.fields._enabled = uVar29;
  __this_01.fields._hotLoop = bVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_01,&SStack_190,pSVar4,pMVar20);
  uVar27 = SStack_190.klass._0_4_;
  uVar28 = SStack_190.klass._4_4_;
  uVar29 = SStack_190.monitor._0_4_;
  bVar3 = SStack_190.monitor._4_4_;
  if (lVar7 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)(lVar7 + 0x20) == '\0') {
      bVar2 = 0;
    }
    else {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight(host,pUVar8,method_03);
      bVar2 = *(byte *)(lVar7 + 0x20);
    }
    if (((uint)(byte)~bVar2 & (uint)(MethodInfo *)(uVar24 & 0xff)) != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
                (pUVar8,host,(UnityEngine_GameObject_o *)method_01,(MethodInfo *)(uVar24 & 0xff));
    }
    if (host != (UnityEngine_RectTransform_o *)0x0) {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
      if (*(char *)(lVar7 + 0x20) == '\0') {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                  (pUVar8,host,(UnityEngine_GameObject_o *)method_01,uVar19 & 0xff,gap,pMVar23);
      }
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar8,(MethodInfo *)0x0);
      __this_02.fields._area._4_4_ = gap;
      __this_02.fields._area._0_4_ = uVar19;
      __this_02.fields._detail = (System_String_o *)method_01;
      __this_02.fields._startMs._0_4_ = uVar27;
      __this_02.fields._startMs._4_4_ = uVar28;
      __this_02.fields._enabled = uVar29;
      __this_02.fields._hotLoop = bVar3;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_02,(MethodInfo *)&stack0xfffffffffffffe50);
      return extraout_RAX_02;
    }
  }
  auVar30 = il2cpp_runtime_helper_022b2c90();
  if (auVar30._8_4_ == 1) {
    plVar21 = (long *)__cxa_begin_catch(auVar30._0_8_);
    lVar7 = *plVar21;
    __cxa_end_catch();
    __this_03.fields._area._4_4_ = gap;
    __this_03.fields._area._0_4_ = uVar19;
    __this_03.fields._detail = (System_String_o *)method_01;
    __this_03.fields._startMs._0_4_ = uVar27;
    __this_03.fields._startMs._4_4_ = uVar28;
    __this_03.fields._enabled = uVar29;
    __this_03.fields._hotLoop = bVar3;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_03,(MethodInfo *)&stack0xfffffffffffffe50);
    if (lVar7 == 0) {
      return extraout_RAX_03;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_04.fields._area._4_4_ = gap;
  __this_04.fields._area._0_4_ = uVar19;
  __this_04.fields._detail = (System_String_o *)method_01;
  __this_04.fields._startMs._0_4_ = uVar27;
  __this_04.fields._startMs._4_4_ = uVar28;
  __this_04.fields._enabled = uVar29;
  __this_04.fields._hotLoop = bVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_04,(MethodInfo *)&stack0xfffffffffffffe50);
  _Unwind_Resume(auVar30._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$OpenInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, UnityEngine_GameObject_o* anchor, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate, const MethodInfo* method);
// 0x3b50d20

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               UnityEngine_GameObject_o *anchor,bool_conflict focusOnOpen,bool_conflict forceBelow,
               bool_conflict matchAnchorWidth,float popoverGap,bool_conflict animate,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_array *pGVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  long lVar4;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_04;
  System_String_o *detail;
  System_String_o **ppSVar5;
  MethodInfo *pMVar6;
  UnityEngine_GameObject_o *pUVar7;
  long *plVar8;
  undefined4 in_register_0000008c;
  undefined1 auVar9 [12];
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool_conflict bVar14;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  uVar10 = matchAnchorWidth;
  if (g_data_057a9ce0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"Overlay.OpenInstance");
    g_data_057a9ce0 = '\x01';
  }
  detail = "Overlay.OpenInstance";
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  bVar14 = 0;
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    ppSVar5 = (System_String_o **)&"null";
  }
  else {
    ppSVar5 = &(instance->fields).Id;
  }
  pMVar6 = (MethodInfo *)*ppSVar5;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  __this_01.fields._area._4_4_ = popoverGap;
  __this_01.fields._area._0_4_ = uVar10;
  __this_01.fields._detail = (System_String_o *)anchor;
  __this_01.fields._startMs._0_4_ = uVar11;
  __this_01.fields._startMs._4_4_ = uVar12;
  __this_01.fields._enabled = uVar13;
  __this_01.fields._hotLoop = bVar14;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_01,&local_58,detail,pMVar6);
  uVar11 = local_58.klass._0_4_;
  uVar12 = local_58.klass._4_4_;
  uVar13 = local_58.monitor._0_4_;
  bVar14 = local_58.monitor._4_4_;
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
label_03b50f1a:
    __this_02.fields._area._4_4_ = popoverGap;
    __this_02.fields._area._0_4_ = uVar10;
    __this_02.fields._detail = (System_String_o *)anchor;
    __this_02.fields._startMs._0_4_ = uVar11;
    __this_02.fields._startMs._4_4_ = uVar12;
    __this_02.fields._enabled = uVar13;
    __this_02.fields._hotLoop = bVar14;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
    return;
  }
  pUVar7 = (instance->fields).Host;
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_03b50f54:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar6 = (MethodInfo *)UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pMVar6 == (MethodInfo *)0x0) goto label_03b50f54;
    UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)pMVar6,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow
              ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pMVar6,instance,anchor,forceBelow & 0xff
               ,uVar10 & 0xff,popoverGap,(MethodInfo *)CONCAT44(in_register_0000008c,matchAnchorWidth));
    if ((char)focusOnOpen == '\0') {
      pUVar7 = (UnityEngine_GameObject_o *)0x0;
    }
    else {
      pUVar7 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(pMVar6);
    }
    (instance->fields)._PreviousSelected_k__BackingField = pUVar7;
    il2cpp_runtime_helper_022b4080(&(instance->fields)._PreviousSelected_k__BackingField);
    lVar4 = MethodInfo_Void_Add;
    __this_00 = (__this->fields)._stack;
    if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar3 = (__this_00->fields)._items;
      if (pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        pMVar6 = (MethodInfo *)instance;
        if (uVar2 < (uint)pGVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pGVar3->m_Items[(int)uVar2] = instance;
          il2cpp_runtime_helper_022b4080(pGVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)instance,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        if ((instance->fields).Kind == 1) {
          (__this->fields)._activePopover = instance;
          pMVar6 = (MethodInfo *)instance;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._activePopover);
        }
        if ((char)animate != '\0') {
          view = (instance->fields).View;
          if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar6 = (MethodInfo *)0x0;
          Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(view,(MethodInfo *)0x0);
        }
        if ((char)focusOnOpen != '\0') {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,pMVar6);
        }
        goto label_03b50f1a;
      }
      goto label_03b50f5e;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b50f5e:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._area._4_4_ = popoverGap;
    __this_03.fields._area._0_4_ = uVar10;
    __this_03.fields._detail = (System_String_o *)anchor;
    __this_03.fields._startMs._0_4_ = uVar11;
    __this_03.fields._startMs._4_4_ = uVar12;
    __this_03.fields._enabled = uVar13;
    __this_03.fields._hotLoop = bVar14;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_03,(MethodInfo *)&stack0xffffffffffffff88);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_04.fields._area._4_4_ = popoverGap;
  __this_04.fields._area._0_4_ = uVar10;
  __this_04.fields._detail = (System_String_o *)anchor;
  __this_04.fields._startMs._0_4_ = uVar11;
  __this_04.fields._startMs._4_4_ = uVar12;
  __this_04.fields._enabled = uVar13;
  __this_04.fields._hotLoop = bVar14;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_04,(MethodInfo *)&stack0xffffffffffffff88);
  _Unwind_Resume(auVar9._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PrepareLayoutForShow
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, UnityEngine_GameObject_o* anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x3b51030

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               UnityEngine_GameObject_o *anchor,bool_conflict forceBelow,bool_conflict matchAnchorWidth,
               float popoverGap,MethodInfo *method)

{
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar1;
  long lVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  System_String_o *detail;
  System_String_o **ppSVar3;
  long *plVar4;
  undefined4 in_register_0000000c;
  MethodInfo *method_01;
  MethodInfo *method_02;
  bool_conflict bVar5;
  undefined4 in_register_00000084;
  undefined1 auVar6 [12];
  undefined1 in_stack_ffffffffffffff78 [12];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool_conflict bVar10;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_0000000c,forceBelow);
  bVar5 = matchAnchorWidth;
  if (g_data_057a9ce1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"Overlay.PrepareLayoutForShow");
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057a9ce1 = '\x01';
  }
  detail = "Overlay.PrepareLayoutForShow";
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  bVar10 = 0;
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    ppSVar3 = (System_String_o **)&"null";
  }
  else {
    ppSVar3 = &(instance->fields).Id;
  }
  method_00 = (MethodInfo *)*ppSVar3;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  __this_00.fields._detail._4_4_ = popoverGap;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff78;
  __this_00.fields._startMs._0_4_ = uVar7;
  __this_00.fields._startMs._4_4_ = uVar8;
  __this_00.fields._enabled = uVar9;
  __this_00.fields._hotLoop = bVar10;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_00,&local_58,detail,method_00);
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    uVar7 = local_58.klass._0_4_;
    uVar8 = local_58.klass._4_4_;
    uVar9 = local_58.monitor._0_4_;
    bVar5 = local_58.monitor._4_4_;
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ == 1) {
      plVar4 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar2 = *plVar4;
      __cxa_end_catch();
      __this_02.fields._detail._4_4_ = popoverGap;
      __this_02.fields._0_12_ = in_stack_ffffffffffffff78;
      __this_02.fields._startMs._0_4_ = uVar7;
      __this_02.fields._startMs._4_4_ = uVar8;
      __this_02.fields._enabled = uVar9;
      __this_02.fields._hotLoop = bVar5;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
      if (lVar2 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_03.fields._detail._4_4_ = popoverGap;
    __this_03.fields._0_12_ = in_stack_ffffffffffffff78;
    __this_03.fields._startMs._0_4_ = uVar7;
    __this_03.fields._startMs._4_4_ = uVar8;
    __this_03.fields._enabled = uVar9;
    __this_03.fields._hotLoop = bVar5;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_03,(MethodInfo *)&stack0xffffffffffffff88);
    _Unwind_Resume(auVar6._0_8_);
  }
  uVar7 = local_58.klass._0_4_;
  uVar8 = local_58.klass._4_4_;
  uVar9 = local_58.monitor._0_4_;
  bVar10 = local_58.monitor._4_4_;
  if ((instance->fields).Kind == 1) {
    if ((char)matchAnchorWidth != '\0') {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
                ((instance->fields)._ContentRoot_k__BackingField,(instance->fields).HostRect,anchor,method_01)
      ;
    }
    pUVar1 = (instance->fields).Host;
    if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar1,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
              ((instance->fields)._ContentRoot_k__BackingField,(instance->fields).HostRect,anchor,
               forceBelow & 0xff,popoverGap,(MethodInfo *)CONCAT44(in_register_00000084,bVar5));
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout((instance->fields).Host,(MethodInfo *)0x0);
  }
  else {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight
              ((instance->fields).HostRect,(instance->fields)._ContentRoot_k__BackingField,method_02);
    pUVar1 = (instance->fields).Host;
    if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar1,(MethodInfo *)0x0);
  }
  __this_01.fields._detail._4_4_ = popoverGap;
  __this_01.fields._0_12_ = in_stack_ffffffffffffff78;
  __this_01.fields._startMs._0_4_ = uVar7;
  __this_01.fields._startMs._4_4_ = uVar8;
  __this_01.fields._enabled = uVar9;
  __this_01.fields._hotLoop = bVar10;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PrepareLayout
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* hostRect, UnityEngine_GameObject_o* anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x3b50990

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
               (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_GameObject_o *root,
               UnityEngine_RectTransform_o *hostRect,UnityEngine_GameObject_o *anchor,bool_conflict forceBelow
               ,bool_conflict matchAnchorWidth,float popoverGap,MethodInfo *method)

{
  MethodInfo *method_00;
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  System_String_o *detail;
  byte bVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *pGVar3;
  UnityEngine_GameObject_o *pUVar4;
  long *plVar5;
  MethodInfo *method_01;
  undefined4 in_register_00000084;
  MethodInfo *method_02;
  undefined1 auVar6 [12];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool_conflict bVar10;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  method_02 = (MethodInfo *)CONCAT44(in_register_00000084,forceBelow);
  if (g_data_057a9ce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"Overlay.PrepareLayout");
    g_data_057a9ce2 = '\x01';
  }
  detail = "Overlay.PrepareLayout";
  uVar7 = 0;
  uVar8 = 0;
  uVar9 = 0;
  bVar10 = 0;
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&"null";
  }
  else {
    pGVar3 = &overlay->fields;
  }
  method_00 = (MethodInfo *)pGVar3->id;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  __this.fields._area._4_4_ = popoverGap;
  __this.fields._area._0_4_ = forceBelow;
  __this.fields._detail = (System_String_o *)anchor;
  __this.fields._startMs._0_4_ = uVar7;
  __this.fields._startMs._4_4_ = uVar8;
  __this.fields._enabled = uVar9;
  __this.fields._hotLoop = bVar10;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this,&local_58,detail,method_00);
  uVar7 = local_58.klass._0_4_;
  uVar8 = local_58.klass._4_4_;
  uVar9 = local_58.monitor._0_4_;
  bVar10 = local_58.monitor._4_4_;
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((char)(overlay->fields).modal == '\0') {
      bVar2 = 0;
    }
    else {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight(hostRect,root,method_01);
      bVar2 = (byte)(overlay->fields).modal;
    }
    if (((uint)(byte)~bVar2 & (uint)(MethodInfo *)((ulong)(uint)matchAnchorWidth & 0xff)) != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
                (root,hostRect,anchor,(MethodInfo *)((ulong)(uint)matchAnchorWidth & 0xff));
    }
    if (hostRect != (UnityEngine_RectTransform_o *)0x0) {
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hostRect,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar4,(MethodInfo *)0x0);
      if ((char)(overlay->fields).modal == '\0') {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                  (root,hostRect,anchor,forceBelow & 0xff,popoverGap,method_02);
      }
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)hostRect,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar4,(MethodInfo *)0x0);
      __this_00.fields._area._4_4_ = popoverGap;
      __this_00.fields._area._0_4_ = forceBelow;
      __this_00.fields._detail = (System_String_o *)anchor;
      __this_00.fields._startMs._0_4_ = uVar7;
      __this_00.fields._startMs._4_4_ = uVar8;
      __this_00.fields._enabled = uVar9;
      __this_00.fields._hotLoop = bVar10;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
      return;
    }
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  if (auVar6._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_01.fields._area._4_4_ = popoverGap;
    __this_01.fields._area._0_4_ = forceBelow;
    __this_01.fields._detail = (System_String_o *)anchor;
    __this_01.fields._startMs._0_4_ = uVar7;
    __this_01.fields._startMs._4_4_ = uVar8;
    __this_01.fields._enabled = uVar9;
    __this_01.fields._hotLoop = bVar10;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_02.fields._area._4_4_ = popoverGap;
  __this_02.fields._area._0_4_ = forceBelow;
  __this_02.fields._detail = (System_String_o *)anchor;
  __this_02.fields._startMs._0_4_ = uVar7;
  __this_02.fields._startMs._4_4_ = uVar8;
  __this_02.fields._enabled = uVar9;
  __this_02.fields._hotLoop = bVar10;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
  _Unwind_Resume(auVar6._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, UnityEngine_Transform_o* layer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x3b51a70

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,UnityEngine_Transform_o *layer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  
  if (g_data_057a9ce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_OverlayInstance);
    g_data_057a9ce3 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_OverlayInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
  (__this->fields)._stack = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._stack);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._layer = layer;
  il2cpp_runtime_helper_022b4080(&__this->fields,layer);
  (__this->fields)._context = context;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._context,context);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$get_HasOpenOverlays
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x3b51b20

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *pSVar1;
  System_Func_string__GisketchOverlayDefinition__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  long lVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_04;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  undefined8 in_RAX;
  undefined7 uVar7;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  System_String_o *pSVar5;
  long *plVar6;
  uint extraout_EDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar8;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_05;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  MethodInfo *in_stack_ffffffffffffff70;
  Il2CppMethodPointer pIVar11;
  Il2CppClass *pIVar12;
  Il2CppMethodPointer pIVar13;
  Il2CppType *pIVar14;
  InvokerMethod pIVar15;
  System_String_Fields SVar16;
  char *pcVar17;
  _union_13 _Var18;
  System_String_o SStack_60;
  _union_13 _Stack_48;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGStack_38;
  
  __this_05 = __this;
  if (g_data_057a9ce4 == '\0') {
    __this_05 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)&MethodInfo_Int32_get_Count;
    in_RAX = il2cpp_runtime_helper_023445d0();
    g_data_057a9ce4 = '\x01';
  }
  pSVar1 = (__this->fields)._stack;
  if (pSVar1 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    uVar7 = (undefined7)((ulong)in_RAX >> 8);
    if ((pSVar1->fields)._size < 1) {
      return (bool_conflict)
             CONCAT71(uVar7,(__this->fields)._activePopover !=
                            (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0);
    }
    return (bool_conflict)CONCAT71(uVar7,1);
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_38 = __this;
  if (g_data_057a9ce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"Overlay.ShowDialog");
    il2cpp_runtime_helper_023445d0(&"Gisketch dialog not found: ");
    il2cpp_runtime_helper_023445d0(&"missing ");
    il2cpp_runtime_helper_023445d0(&"focus existing ");
    g_data_057a9ce5 = '\x01';
  }
  pIVar15 = (InvokerMethod)0x0;
  pcVar17 = (char *)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_60.klass = (System_String_c *)0x0;
  SStack_60.monitor = (Il2CppType *)0x0;
  SStack_60.fields._stringLength = 0;
  SStack_60.fields._firstChar = 0;
  SStack_60.fields._6_2_ = 0;
  _Stack_48.rgctx_data = (Il2CppRGCTXData *)0x0;
  __this_01.fields._detail = (System_String_o *)pIVar13;
  __this_01.fields._area = (System_String_o *)pIVar11;
  __this_01.fields._startMs = (int64_t)pIVar15;
  __this_01.fields._24_8_ = pcVar17;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_01,&SStack_60,"Overlay.ShowDialog",method);
  pIVar12 = (Il2CppClass *)SStack_60.klass;
  pIVar14 = SStack_60.monitor;
  SVar16 = SStack_60.fields;
  _Var18 = _Stack_48;
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
                       (__this_05,(System_String_o *)method,method_01);
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    method_00 = (MethodInfo *)
                System_String__Concat_3ae5ba0("focus existing ",(System_String_o *)method,(MethodInfo *)0x0);
    pMVar8 = extraout_RDX_00;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar8 = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Overlay.ShowDialog",(System_String_o *)method_00,pMVar8);
    if ((char)extraout_EDX != '\0') {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,method_00);
    }
    goto label_03b51d93;
  }
  pGVar4 = (__this_05->fields)._context;
  if (pGVar4 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_03b51daf:
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ == 1) {
      plVar6 = (long *)__cxa_begin_catch(auVar9._0_8_);
      lVar3 = *plVar6;
      __cxa_end_catch();
      __this_03.fields._detail = (System_String_o *)pIVar14;
      __this_03.fields._area = (System_String_o *)pIVar12;
      __this_03.fields._startMs._0_4_ = SVar16._stringLength;
      __this_03.fields._startMs._4_2_ = SVar16._firstChar;
      __this_03.fields._startMs._6_2_ = SVar16._6_2_;
      __this_03.fields._24_8_ = _Var18.rgctx_data;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_03,(MethodInfo *)&stack0xffffffffffffff80);
      if (lVar3 == 0) {
        return extraout_EAX_00;
      }
      il2cpp_runtime_helper_022fefe0(lVar3);
    }
    __this_04.fields._detail = (System_String_o *)pIVar14;
    __this_04.fields._area = (System_String_o *)pIVar12;
    __this_04.fields._startMs._0_4_ = SVar16._stringLength;
    __this_04.fields._startMs._4_2_ = SVar16._firstChar;
    __this_04.fields._startMs._6_2_ = SVar16._6_2_;
    __this_04.fields._24_8_ = _Var18.rgctx_data;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_04,(MethodInfo *)&stack0xffffffffffffff80);
    _Unwind_Resume(auVar9._0_8_);
  }
  pSVar2 = (pGVar4->fields).DialogResolver;
  pMVar8 = extraout_RDX;
  if (pSVar2 == (System_Func_string__GisketchOverlayDefinition__o *)0x0) {
label_03b51cda:
    __this_00 = (pGVar4->fields).Manifest;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      overlay = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog
                          (__this_00,(System_String_o *)method,pMVar8);
      goto joined_r0x03b51cf1;
    }
  }
  else {
    auVar10 = (*(code *)(pSVar2->fields).invoke_impl)
                        ((pSVar2->fields).method_code,method,(pSVar2->fields).method);
    pMVar8 = auVar10._8_8_;
    overlay = auVar10._0_8_;
    if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      pGVar4 = (__this_05->fields)._context;
      if (pGVar4 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_03b51daf;
      goto label_03b51cda;
    }
joined_r0x03b51cf1:
    if (overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                (__this_05,overlay,(UnityEngine_GameObject_o *)0x0,0,extraout_EDX & 0xff,0,0,24.0,1,
                 in_stack_ffffffffffffff70);
      goto label_03b51d93;
    }
  }
  pSVar5 = System_String__Concat_3ae5ba0("missing ",(System_String_o *)method,(MethodInfo *)0x0);
  pMVar8 = extraout_RDX_02;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = extraout_RDX_03;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Overlay.ShowDialog",pSVar5,pMVar8);
  pSVar5 = System_String__Concat_3ae5ba0("Gisketch dialog not found: ",(System_String_o *)method,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
label_03b51d93:
  __this_02.fields._detail = (System_String_o *)pIVar14;
  __this_02.fields._area = (System_String_o *)pIVar12;
  __this_02.fields._startMs._0_4_ = SVar16._stringLength;
  __this_02.fields._startMs._4_2_ = SVar16._firstChar;
  __this_02.fields._startMs._6_2_ = SVar16._6_2_;
  __this_02.fields._24_8_ = _Var18.rgctx_data;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xffffffffffffff80);
  return extraout_EAX;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDialog
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool focusOnOpen, const MethodInfo* method);
// 0x3b51b70

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
               bool_conflict focusOnOpen,MethodInfo *method)

{
  System_Func_string__GisketchOverlayDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  long lVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_04;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  System_String_o *pSVar4;
  long *plVar5;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  MethodInfo *in_stack_ffffffffffffff78;
  Il2CppMethodPointer pIVar9;
  Il2CppClass *pIVar10;
  Il2CppMethodPointer pIVar11;
  Il2CppType *pIVar12;
  InvokerMethod pIVar13;
  System_String_Fields SVar14;
  char *pcVar15;
  _union_13 _Var16;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  if (g_data_057a9ce5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"Overlay.ShowDialog");
    il2cpp_runtime_helper_023445d0(&"Gisketch dialog not found: ");
    il2cpp_runtime_helper_023445d0(&"missing ");
    il2cpp_runtime_helper_023445d0(&"focus existing ");
    g_data_057a9ce5 = '\x01';
  }
  pIVar13 = (InvokerMethod)0x0;
  pcVar15 = (char *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar11 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  __this_01.fields._detail = (System_String_o *)pIVar11;
  __this_01.fields._area = (System_String_o *)pIVar9;
  __this_01.fields._startMs = (int64_t)pIVar13;
  __this_01.fields._24_8_ = pcVar15;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__this_01,&local_58,"Overlay.ShowDialog",(MethodInfo *)id);
  pIVar10 = (Il2CppClass *)local_58.klass;
  pIVar12 = local_58.monitor;
  SVar14 = local_58.fields;
  _Var16 = _Stack_40;
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this,id,method_01);
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    method_00 = (MethodInfo *)System_String__Concat_3ae5ba0("focus existing ",id,(MethodInfo *)0x0);
    pMVar6 = extraout_RDX_00;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar6 = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Overlay.ShowDialog",(System_String_o *)method_00,pMVar6);
    if ((char)focusOnOpen != '\0') {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,method_00);
    }
    goto label_03b51d93;
  }
  pGVar3 = (__this->fields)._context;
  if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_03b51daf:
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ == 1) {
      plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
      lVar2 = *plVar5;
      __cxa_end_catch();
      __this_03.fields._detail = (System_String_o *)pIVar12;
      __this_03.fields._area = (System_String_o *)pIVar10;
      __this_03.fields._startMs._0_4_ = SVar14._stringLength;
      __this_03.fields._startMs._4_2_ = SVar14._firstChar;
      __this_03.fields._startMs._6_2_ = SVar14._6_2_;
      __this_03.fields._24_8_ = _Var16.rgctx_data;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_03,(MethodInfo *)&stack0xffffffffffffff88);
      if (lVar2 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar2);
    }
    __this_04.fields._detail = (System_String_o *)pIVar12;
    __this_04.fields._area = (System_String_o *)pIVar10;
    __this_04.fields._startMs._0_4_ = SVar14._stringLength;
    __this_04.fields._startMs._4_2_ = SVar14._firstChar;
    __this_04.fields._startMs._6_2_ = SVar14._6_2_;
    __this_04.fields._24_8_ = _Var16.rgctx_data;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_04,(MethodInfo *)&stack0xffffffffffffff88);
    _Unwind_Resume(auVar7._0_8_);
  }
  pSVar1 = (pGVar3->fields).DialogResolver;
  pMVar6 = extraout_RDX;
  if (pSVar1 == (System_Func_string__GisketchOverlayDefinition__o *)0x0) {
label_03b51cda:
    __this_00 = (pGVar3->fields).Manifest;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      overlay = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog(__this_00,id,pMVar6);
      goto joined_r0x03b51cf1;
    }
  }
  else {
    auVar8 = (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,id,(pSVar1->fields).method);
    pMVar6 = auVar8._8_8_;
    overlay = auVar8._0_8_;
    if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      pGVar3 = (__this->fields)._context;
      if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_03b51daf;
      goto label_03b51cda;
    }
joined_r0x03b51cf1:
    if (overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                (__this,overlay,(UnityEngine_GameObject_o *)0x0,0,focusOnOpen & 0xff,0,0,24.0,1,
                 in_stack_ffffffffffffff78);
      goto label_03b51d93;
    }
  }
  pSVar4 = System_String__Concat_3ae5ba0("missing ",id,(MethodInfo *)0x0);
  pMVar6 = extraout_RDX_02;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar6 = extraout_RDX_03;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Overlay.ShowDialog",pSVar4,pMVar6);
  pSVar4 = System_String__Concat_3ae5ba0("Gisketch dialog not found: ",id,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
label_03b51d93:
  __this_02.fields._detail = (System_String_o *)pIVar12;
  __this_02.fields._area = (System_String_o *)pIVar10;
  __this_02.fields._startMs._0_4_ = SVar14._stringLength;
  __this_02.fields._startMs._4_2_ = SVar14._firstChar;
  __this_02.fields._startMs._6_2_ = SVar14._6_2_;
  __this_02.fields._24_8_ = _Var16.rgctx_data;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowPopover
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, UnityEngine_GameObject_o* anchor, bool focusOnOpen, float gap, const MethodInfo* method);
// 0x3b521e0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          UnityEngine_GameObject_o *anchor,bool_conflict focusOnOpen,float gap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  UnityEngine_GameObject_o *root;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar4;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  pMVar4 = (MethodInfo *)anchor;
  if (g_data_057a9ce6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    g_data_057a9ce6 = '\x01';
    pMVar4 = extraout_RDX;
  }
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
     (__this_00 = (pGVar1->fields).Manifest,
     __this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto label_03b522ed;
  overlay = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindPopover(__this_00,id,pMVar4);
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    return (UnityEngine_GameObject_o *)0x0;
  }
  pGVar3 = (__this->fields)._activePopover;
  if (pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    bVar2 = System_String__op_Equality((pGVar3->fields).Id,id,(MethodInfo *)0x0);
    pGVar3 = (__this->fields)._activePopover;
    if ((char)bVar2 != '\0') {
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
label_03b522ed:
        il2cpp_runtime_helper_022b2c90();
        return (UnityEngine_GameObject_o *)0x0;
      }
      root = (pGVar3->fields).Host;
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
      pGVar3 = (__this->fields)._activePopover;
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto label_03b522ed;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                ((pGVar3->fields)._ContentRoot_k__BackingField,(pGVar3->fields).HostRect,anchor,0,gap,method);
      pGVar3 = (__this->fields)._activePopover;
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto label_03b522ed;
      pMVar4 = (MethodInfo *)0x0;
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout((pGVar3->fields).Host,(MethodInfo *)0x0);
      if ((char)focusOnOpen != '\0') {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus
                  ((__this->fields)._activePopover,pMVar4);
      }
      pGVar3 = (__this->fields)._activePopover;
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto label_03b522ed;
      goto label_03b52338;
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,pGVar3,0,0,method);
  }
  pGVar3 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                     (__this,overlay,anchor,1,focusOnOpen & 0xff,0,0,gap,1,in_stack_ffffffffffffffb8);
  if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return (UnityEngine_GameObject_o *)0x0;
  }
label_03b52338:
  return (pGVar3->fields)._ContentRoot_k__BackingField;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseTop
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, bool restoreFocus, const MethodInfo* method);
// 0x3b52630

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,bool_conflict restoreFocus,
          MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar2;
  undefined8 extraout_RAX;
  Il2CppObject *pIVar3;
  undefined8 extraout_RAX_00;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  System_String_o *id;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  MethodInfo *in_R8;
  
  id = (System_String_o *)CONCAT44(in_register_00000034,restoreFocus);
  if (g_data_057a9ced == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    g_data_057a9ced = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      pGVar2 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      if (pGVar2 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                  (__this,pGVar2,restoreFocus & 0xff,1,in_R8);
        return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      }
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ced == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    g_data_057a9ced = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)(__this_00->fields)._syncRoot;
  if (__this_01 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    iVar1 = *(int *)&(__this_01->fields)._context;
    if (0 < iVar1) {
      pIVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,iVar1 + -1,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      return (bool_conflict)pIVar3;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this_01,id,method_00);
  if (pGVar2 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
              (__this_01,pGVar2,(uint)method_00 & 0xff,1,in_R8);
    return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX_00 >> 8),1);
  }
  return 0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseDialog
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool restoreFocus, const MethodInfo* method);
// 0x3b52720

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          bool_conflict restoreFocus,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  undefined8 extraout_RAX;
  undefined4 in_register_00000014;
  MethodInfo *in_R8;
  
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
                       (__this,id,(MethodInfo *)CONCAT44(in_register_00000014,restoreFocus));
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
              (__this,instance,restoreFocus & 0xff,1,in_R8);
    return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
  }
  return 0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Clear
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x3b52760

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  MethodInfo *in_R8;
  
  if (g_data_057a9ce7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    g_data_057a9ce7 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  while (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    uVar1 = (__this_00->fields)._size;
    method = (MethodInfo *)(ulong)uVar1;
    if ((int)uVar1 < 1) goto label_03b527cf;
    method = (MethodInfo *)
             System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,uVar1 - 1,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
              (__this,(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)method,0,0,in_R8)
    ;
    __this_00 = (__this->fields)._stack;
  }
  il2cpp_runtime_helper_022b2c90();
label_03b527cf:
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected((UnityEngine_UI_Selectable_o *)0x0,method);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FocusTopFromNavigation
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusTopFromNavigation (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x3b52930

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusTopFromNavigation
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  System_Object_array *items;
  long lVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  System_Func_T__string__o *getId;
  uint index;
  System_String_o *id;
  MethodInfo *__this_01;
  MethodInfo *pMVar3;
  UnityEngine_Object_o *x_00;
  
  if (g_data_057a9ced == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    g_data_057a9ced = '\x01';
  }
  __this_01 = (MethodInfo *)(__this->fields)._stack;
  if (__this_01 != (MethodInfo *)0x0) {
    if (0 < *(int *)&__this_01->name) {
      index = *(int *)&__this_01->name - 1;
      pMVar3 = (MethodInfo *)(ulong)index;
      instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      if ((instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) &&
         (bVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ContainsSelected(instance,pMVar3),
         (char)bVar2 == '\0')) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,pMVar3);
        return;
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar3 = __this_01;
  if (g_data_057a9cef == '\0') {
    pMVar3 = (MethodInfo *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cef = '\x01';
  }
  x = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(pMVar3);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((__this_01 != (MethodInfo *)0x0) && ((char)bVar2 != '\0')) {
    x_00 = (UnityEngine_Object_o *)__this_01->parameters;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    id = (System_String_o *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (x != (UnityEngine_Object_o *)0x0) {
        id = (System_String_o *)0x0;
        __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        x_00 = (UnityEngine_Object_o *)__this_01->parameters;
        if (x_00 != (UnityEngine_Object_o *)0x0) {
          id = (System_String_o *)0x0;
          parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x_00,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__IsChildOf(__this_00,parent,(MethodInfo *)0x0);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d3f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_GisketchOverlayDefinition_string);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayDefinition_FindById_GisketchOverlayDefini);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_FindDialog_b__9_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057a9d3f = '\x01';
      }
      items = (System_Object_array *)x_00[2].klass;
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (getId == (System_Func_T__string__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        getId = (System_Func_T__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_GisketchOverlayDefinition_string);
        System_Func_object__object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__string__o **)(lVar1 + 0x10) = getId;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x10,getId);
      }
      Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_(items,id,getId,MethodInfo_GisketchOverlayDefinition_FindById_GisketchOverlayDefini);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowOverlay
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* anchor, int32_t kind, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate, const MethodInfo* method);
// 0x3b51fc0

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_GameObject_o *anchor,
          int32_t kind,bool_conflict focusOnOpen,bool_conflict forceBelow,bool_conflict matchAnchorWidth,
          float popoverGap,bool_conflict animate,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_String_o *detail;
  UnityEngine_GameObject_o *anchor_00;
  uint animate_00;
  System_String_o *str0;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *pGVar1;
  uint forceBelow_00;
  undefined4 in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  MethodInfo *in_stack_ffffffffffffff60;
  System_String_o local_88;
  char *pcStack_70;
  UnityEngine_GameObject_o *local_60;
  System_String_c *local_58;
  Il2CppMethodPointer pIStack_50;
  System_String_Fields local_48;
  char *pcStack_40;
  
  local_60 = anchor;
  if (g_data_057a9ce8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OverlayKind);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"Overlay.ShowOverlay");
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057a9ce8 = '\x01';
  }
  local_48 = (System_String_Fields)0x0;
  pcStack_40 = (char *)0x0;
  local_58 = (System_String_c *)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  local_88.klass = TypeInfo_OverlayKind;
  local_88.monitor = (void *)0xffffffffffffffff;
  local_88.fields._stringLength = kind;
  str0 = System_Enum__ToString((System_Enum_o *)&local_88,(MethodInfo *)0x0);
  detail = "Overlay.ShowOverlay";
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&"null";
  }
  else {
    pGVar1 = &overlay->fields;
  }
  method_00 = (MethodInfo *)System_String__Concat_3af7150(str0," ",pGVar1->id,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  local_88.fields._stringLength = 0;
  local_88.fields._firstChar = 0;
  local_88.fields._6_2_ = 0;
  pcStack_70 = (char *)0x0;
  local_88.klass = (System_String_c *)0x0;
  local_88.monitor = (Il2CppMethodPointer)0x0;
  __this_00.fields._area._4_4_ = in_stack_ffffffffffffff5c;
  __this_00.fields._area._0_4_ = in_stack_ffffffffffffff58;
  __this_00.fields._detail = (System_String_o *)in_stack_ffffffffffffff60;
  __this_00.fields._startMs._0_4_ = popoverGap;
  __this_00.fields._startMs._4_4_ = focusOnOpen;
  __this_00.fields._enabled = forceBelow;
  __this_00.fields._hotLoop = kind;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_00,&local_88,detail,method_00);
  anchor_00 = local_60;
  local_48 = local_88.fields;
  pcStack_40 = pcStack_70;
  local_58 = local_88.klass;
  pIStack_50 = local_88.monitor;
  forceBelow_00 = forceBelow & 0xff;
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance
                       (__this,overlay,local_60,kind,forceBelow_00,matchAnchorWidth & 0xff,popoverGap,
                        (MethodInfo *)CONCAT44(in_stack_ffffffffffffff5c,in_stack_ffffffffffffff58));
  animate_00 = animate & 0xff;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance
            (__this,instance,anchor_00,focusOnOpen & 0xff,forceBelow_00,matchAnchorWidth & 0xff,popoverGap,
             animate_00,in_stack_ffffffffffffff60);
  __this_01.fields._area._4_4_ = in_stack_ffffffffffffff5c;
  __this_01.fields._area._0_4_ = animate_00;
  __this_01.fields._detail = (System_String_o *)in_stack_ffffffffffffff60;
  __this_01.fields._startMs._0_4_ = popoverGap;
  __this_01.fields._startMs._4_4_ = focusOnOpen;
  __this_01.fields._enabled = forceBelow;
  __this_01.fields._hotLoop = kind;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_58);
  return instance;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ConfigureHost
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ConfigureHost (Gilzoide_FlexUi_FlexLayout_o* flex, bool modal, const MethodInfo* method);
// 0x3b50660

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ConfigureHost
               (Gilzoide_FlexUi_FlexLayout_o *flex,bool_conflict modal,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  System_RuntimeTypeHandle_o handle;
  System_String_o *detail;
  byte bVar1;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar2;
  System_Type_array *components;
  System_Type_o *pSVar3;
  long lVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_RectTransform_o *rect;
  Il2CppObject *pIVar6;
  UnityEngine_UI_Selectable_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 *puVar7;
  UnityEngine_GameObject_o *root;
  long *plVar8;
  Il2CppClass *in_RCX;
  char extraout_DL;
  UnityEngine_RectTransform_o *host;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  UnityEngine_Transform_o *parent;
  MethodInfo *pMVar9;
  uint uVar10;
  MethodInfo *in_R8;
  uint in_R9D;
  undefined4 uVar11;
  float gap;
  undefined4 in_XMM1_Da;
  undefined1 auVar12 [12];
  undefined4 uVar13;
  undefined4 uVar14;
  bool_conflict bVar15;
  System_String_o SStack_b8;
  _union_13 _Stack_a0;
  System_Type_array *pSStack_90;
  UnityEngine_Transform_o *pUStack_88;
  
  parent = (UnityEngine_Transform_o *)CONCAT44(in_register_00000034,modal);
  if (g_data_057a9ce9 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ce9 = '\x01';
  }
  if (flex != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection(flex,0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_FlexWrap(flex,0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_JustifyContent(flex,modal & 0xffU,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_AlignItems(flex,(modal & 0xffU) + 1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GVar2 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Width(flex,GVar2,(MethodInfo *)0x0);
    GVar2 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Height(flex,GVar2,(MethodInfo *)0x0);
    return;
  }
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ceb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_AddComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddBackdrop_b__20_0);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"AoTTG Backdrop");
    g_data_057a9ceb = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_03b50972:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar3 != (System_Type_o *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pSVar3), lVar4 == 0))
    goto label_03b5097c;
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar3;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar3);
      pUVar5 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      in_RCX = (Il2CppClass *)0x0;
      UnityEngine_GameObject___ctor_4dfc440(pUVar5,"AoTTG Backdrop",components,(MethodInfo *)0x0);
      if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
         (__this_04 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
         __this_04 != (UnityEngine_Transform_o *)0x0)) {
        in_RCX = (Il2CppClass *)0x0;
        UnityEngine_Transform__SetParent_4e09e30(__this_04,parent,0,(MethodInfo *)0x0);
        pMVar9 = MethodInfo_RectTransform_GetComponent_RectTransform;
        rect = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent_object_(pUVar5,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch(rect,pMVar9);
        pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_Image_AddComponent_Image);
        if (pIVar6 != (Il2CppObject *)0x0) {
          in_RCX = pIVar6->klass;
          (*in_RCX->vtable[0x17].methodPtr)(uVar11,in_XMM1_Da,pIVar6,in_RCX->vtable[0x17].method);
          if (extraout_DL == '\0') {
            return;
          }
          __this_05 = (UnityEngine_UI_Selectable_o *)
                      UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_Button_AddComponent_Button);
          if (__this_05 != (UnityEngine_UI_Selectable_o *)0x0) {
            UnityEngine_UI_Selectable__set_transition(__this_05,0,(MethodInfo *)0x0);
            __this = (UnityEngine_Events_UnityEvent_o *)(__this_05->fields).m_CanvasGroupCache;
            call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            in_RCX = (Il2CppClass *)0x0;
            UnityEngine_Events_UnityAction___ctor();
            components = (System_Type_array *)0x0;
            if (__this != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this,call,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_03b50972;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b5097c:
  lVar4 = il2cpp_runtime_helper_0231b270();
  pUVar5 = (UnityEngine_GameObject_o *)0x0;
  gap = (float)il2cpp_runtime_helper_022b2b10();
  uVar10 = (uint)in_R8;
  pSStack_90 = components;
  pUStack_88 = parent;
  if (g_data_057a9ce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"Overlay.PrepareLayout");
    g_data_057a9ce2 = '\x01';
  }
  detail = "Overlay.PrepareLayout";
  uVar11 = 0;
  uVar13 = 0;
  uVar14 = 0;
  bVar15 = 0;
  if (lVar4 == 0) {
    puVar7 = &"null";
  }
  else {
    puVar7 = (undefined8 *)(lVar4 + 0x10);
  }
  pMVar9 = (MethodInfo *)*puVar7;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_b8.fields._stringLength = 0;
  SStack_b8.fields._firstChar = 0;
  SStack_b8.fields._6_2_ = 0;
  _Stack_a0.rgctx_data = (Il2CppRGCTXData *)0x0;
  SStack_b8.klass = (System_String_c *)0x0;
  SStack_b8.monitor = (Il2CppType *)0x0;
  __this_00.fields._area._4_4_ = gap;
  __this_00.fields._area._0_4_ = uVar10;
  __this_00.fields._detail = (System_String_o *)in_RCX;
  __this_00.fields._startMs._0_4_ = uVar11;
  __this_00.fields._startMs._4_4_ = uVar13;
  __this_00.fields._enabled = uVar14;
  __this_00.fields._hotLoop = bVar15;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_00,&SStack_b8,detail,pMVar9);
  uVar11 = SStack_b8.klass._0_4_;
  uVar13 = SStack_b8.klass._4_4_;
  uVar14 = SStack_b8.monitor._0_4_;
  bVar15 = SStack_b8.monitor._4_4_;
  if (lVar4 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)(lVar4 + 0x20) == '\0') {
      bVar1 = 0;
    }
    else {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight(host,pUVar5,method_00);
      bVar1 = *(byte *)(lVar4 + 0x20);
    }
    if (((uint)(byte)~bVar1 & (uint)(MethodInfo *)((ulong)in_R9D & 0xff)) != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
                (pUVar5,host,(UnityEngine_GameObject_o *)in_RCX,(MethodInfo *)((ulong)in_R9D & 0xff));
    }
    if (host != (UnityEngine_RectTransform_o *)0x0) {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
      if (*(char *)(lVar4 + 0x20) == '\0') {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                  (pUVar5,host,(UnityEngine_GameObject_o *)in_RCX,uVar10 & 0xff,gap,in_R8);
      }
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar5,(MethodInfo *)0x0);
      __this_01.fields._area._4_4_ = gap;
      __this_01.fields._area._0_4_ = uVar10;
      __this_01.fields._detail = (System_String_o *)in_RCX;
      __this_01.fields._startMs._0_4_ = uVar11;
      __this_01.fields._startMs._4_4_ = uVar13;
      __this_01.fields._enabled = uVar14;
      __this_01.fields._hotLoop = bVar15;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_01,(MethodInfo *)&stack0xffffffffffffff28);
      return;
    }
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_02.fields._area._4_4_ = gap;
    __this_02.fields._area._0_4_ = uVar10;
    __this_02.fields._detail = (System_String_o *)in_RCX;
    __this_02.fields._startMs._0_4_ = uVar11;
    __this_02.fields._startMs._4_4_ = uVar13;
    __this_02.fields._enabled = uVar14;
    __this_02.fields._hotLoop = bVar15;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_02,(MethodInfo *)&stack0xffffffffffffff28);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_03.fields._area._4_4_ = gap;
  __this_03.fields._area._0_4_ = uVar10;
  __this_03.fields._detail = (System_String_o *)in_RCX;
  __this_03.fields._startMs._0_4_ = uVar11;
  __this_03.fields._startMs._4_4_ = uVar13;
  __this_03.fields._enabled = uVar14;
  __this_03.fields._hotLoop = bVar15;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_03,(MethodInfo *)&stack0xffffffffffffff28);
  _Unwind_Resume(auVar12._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$OverlayName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OverlayName (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, const MethodInfo* method);
// 0x3b504a0

System_String_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OverlayName
          (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  System_RuntimeTypeHandle_o handle;
  byte bVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_String_o *pSVar4;
  System_String_o *extraout_RAX;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar5;
  System_String_o *extraout_RAX_00;
  System_Type_array *components;
  System_Type_o *pSVar6;
  long lVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_RectTransform_o *rect;
  Il2CppObject *pIVar9;
  UnityEngine_UI_Selectable_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  System_String_o *extraout_RAX_01;
  UnityEngine_GameObject_o *root;
  System_String_o *extraout_RAX_02;
  System_String_o *extraout_RAX_03;
  Il2CppClass *in_RCX;
  char extraout_DL;
  UnityEngine_RectTransform_o *host;
  MethodInfo *method_00;
  uint uVar10;
  MethodInfo *pMVar11;
  MethodInfo *method_01;
  Gilzoide_FlexUi_FlexLayout_o *__this_06;
  long *plVar12;
  MethodInfo *in_R8;
  uint in_R9D;
  undefined4 uVar13;
  float gap;
  undefined4 in_XMM1_Da;
  undefined1 auVar14 [12];
  undefined4 uVar15;
  undefined4 uVar16;
  System_String_o SStack_e8;
  _union_13 _Stack_d0;
  System_Type_array *pSStack_c0;
  MethodInfo *pMStack_b8;
  
  __this_06 = (Gilzoide_FlexUi_FlexLayout_o *)overlay;
  if (g_data_057a9cea == '\0') {
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"AoTTG ");
    il2cpp_runtime_helper_023445d0(&"Popover");
    __this_06 = (Gilzoide_FlexUi_FlexLayout_o *)&"Dialog";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cea = '\x01';
  }
  if (overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    if ((char)(overlay->fields).modal == '\0') {
      puVar3 = &"Popover";
    }
    else {
      puVar3 = &"Dialog";
    }
    pSVar4 = (System_String_o *)*puVar3;
    bVar2 = System_String__IsNullOrEmpty((overlay->fields).id,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar4 = System_String__Concat_3af7470
                         ("AoTTG ",pSVar4," ",(overlay->fields).id,(MethodInfo *)0x0);
      return pSVar4;
    }
    pSVar4 = System_String__Concat_3ae5ba0("AoTTG ",pSVar4,(MethodInfo *)0x0);
    return pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar12 = (long *)__this_06;
  if (g_data_057a694c == '\0') {
    plVar12 = &TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (__this_06 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              ((UnityEngine_RectTransform_o *)__this_06,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              ((UnityEngine_RectTransform_o *)__this_06,
               (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              ((UnityEngine_RectTransform_o *)__this_06,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              ((UnityEngine_RectTransform_o *)__this_06,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = method;
  if (g_data_057a9ce9 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ce9 = '\x01';
  }
  if ((Gilzoide_FlexUi_FlexLayout_o *)plVar12 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection((Gilzoide_FlexUi_FlexLayout_o *)plVar12,0,(MethodInfo *)0x0)
    ;
    Gilzoide_FlexUi_FlexLayout__set_FlexWrap((Gilzoide_FlexUi_FlexLayout_o *)plVar12,0,(MethodInfo *)0x0);
    uVar10 = (uint)method & 0xff;
    Gilzoide_FlexUi_FlexLayout__set_JustifyContent
              ((Gilzoide_FlexUi_FlexLayout_o *)plVar12,uVar10,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_AlignItems
              ((Gilzoide_FlexUi_FlexLayout_o *)plVar12,uVar10 + 1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GVar5 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Width((Gilzoide_FlexUi_FlexLayout_o *)plVar12,GVar5,(MethodInfo *)0x0);
    GVar5 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Height((Gilzoide_FlexUi_FlexLayout_o *)plVar12,GVar5,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  uVar13 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ceb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_AddComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddBackdrop_b__20_0);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"AoTTG Backdrop");
    g_data_057a9ceb = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_03b50972:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar6 != (System_Type_o *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pSVar6), lVar7 == 0))
    goto label_03b5097c;
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar6;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar6);
      pUVar8 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      in_RCX = (Il2CppClass *)0x0;
      UnityEngine_GameObject___ctor_4dfc440(pUVar8,"AoTTG Backdrop",components,(MethodInfo *)0x0);
      if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
         (__this_04 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
         __this_04 != (UnityEngine_Transform_o *)0x0)) {
        in_RCX = (Il2CppClass *)0x0;
        UnityEngine_Transform__SetParent_4e09e30
                  (__this_04,(UnityEngine_Transform_o *)pMVar11,0,(MethodInfo *)0x0);
        method_01 = MethodInfo_RectTransform_GetComponent_RectTransform;
        rect = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent_object_(pUVar8,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch(rect,method_01);
        pIVar9 = UnityEngine_GameObject__AddComponent_object_(pUVar8,MethodInfo_Image_AddComponent_Image);
        if (pIVar9 != (Il2CppObject *)0x0) {
          in_RCX = pIVar9->klass;
          pSVar4 = (System_String_o *)
                   (*in_RCX->vtable[0x17].methodPtr)(uVar13,in_XMM1_Da,pIVar9,in_RCX->vtable[0x17].method);
          if (extraout_DL == '\0') {
            return pSVar4;
          }
          __this_05 = (UnityEngine_UI_Selectable_o *)
                      UnityEngine_GameObject__AddComponent_object_(pUVar8,MethodInfo_Button_AddComponent_Button);
          if (__this_05 != (UnityEngine_UI_Selectable_o *)0x0) {
            UnityEngine_UI_Selectable__set_transition(__this_05,0,(MethodInfo *)0x0);
            __this = (UnityEngine_Events_UnityEvent_o *)(__this_05->fields).m_CanvasGroupCache;
            call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            in_RCX = (Il2CppClass *)0x0;
            UnityEngine_Events_UnityAction___ctor();
            components = (System_Type_array *)0x0;
            if (__this != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this,call,(MethodInfo *)0x0);
              return extraout_RAX_01;
            }
          }
        }
      }
      goto label_03b50972;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b5097c:
  lVar7 = il2cpp_runtime_helper_0231b270();
  pUVar8 = (UnityEngine_GameObject_o *)0x0;
  gap = (float)il2cpp_runtime_helper_022b2b10();
  uVar10 = (uint)in_R8;
  pSStack_c0 = components;
  pMStack_b8 = pMVar11;
  if (g_data_057a9ce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"Overlay.PrepareLayout");
    g_data_057a9ce2 = '\x01';
  }
  pSVar4 = "Overlay.PrepareLayout";
  uVar13 = 0;
  uVar15 = 0;
  uVar16 = 0;
  bVar2 = 0;
  if (lVar7 == 0) {
    puVar3 = &"null";
  }
  else {
    puVar3 = (undefined8 *)(lVar7 + 0x10);
  }
  pMVar11 = (MethodInfo *)*puVar3;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_e8.fields._stringLength = 0;
  SStack_e8.fields._firstChar = 0;
  SStack_e8.fields._6_2_ = 0;
  _Stack_d0.rgctx_data = (Il2CppRGCTXData *)0x0;
  SStack_e8.klass = (System_String_c *)0x0;
  SStack_e8.monitor = (Il2CppType *)0x0;
  __this_00.fields._area._4_4_ = gap;
  __this_00.fields._area._0_4_ = uVar10;
  __this_00.fields._detail = (System_String_o *)in_RCX;
  __this_00.fields._startMs._0_4_ = uVar13;
  __this_00.fields._startMs._4_4_ = uVar15;
  __this_00.fields._enabled = uVar16;
  __this_00.fields._hotLoop = bVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_00,&SStack_e8,pSVar4,pMVar11);
  uVar13 = SStack_e8.klass._0_4_;
  uVar15 = SStack_e8.klass._4_4_;
  uVar16 = SStack_e8.monitor._0_4_;
  bVar2 = SStack_e8.monitor._4_4_;
  if (lVar7 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)(lVar7 + 0x20) == '\0') {
      bVar1 = 0;
    }
    else {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight(host,pUVar8,method_00);
      bVar1 = *(byte *)(lVar7 + 0x20);
    }
    if (((uint)(byte)~bVar1 & (uint)(MethodInfo *)((ulong)in_R9D & 0xff)) != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
                (pUVar8,host,(UnityEngine_GameObject_o *)in_RCX,(MethodInfo *)((ulong)in_R9D & 0xff));
    }
    if (host != (UnityEngine_RectTransform_o *)0x0) {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
      if (*(char *)(lVar7 + 0x20) == '\0') {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                  (pUVar8,host,(UnityEngine_GameObject_o *)in_RCX,uVar10 & 0xff,gap,in_R8);
      }
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar8,(MethodInfo *)0x0);
      __this_01.fields._area._4_4_ = gap;
      __this_01.fields._area._0_4_ = uVar10;
      __this_01.fields._detail = (System_String_o *)in_RCX;
      __this_01.fields._startMs._0_4_ = uVar13;
      __this_01.fields._startMs._4_4_ = uVar15;
      __this_01.fields._enabled = uVar16;
      __this_01.fields._hotLoop = bVar2;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
      return extraout_RAX_02;
    }
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar12 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar7 = *plVar12;
    __cxa_end_catch();
    __this_02.fields._area._4_4_ = gap;
    __this_02.fields._area._0_4_ = uVar10;
    __this_02.fields._detail = (System_String_o *)in_RCX;
    __this_02.fields._startMs._0_4_ = uVar13;
    __this_02.fields._startMs._4_4_ = uVar15;
    __this_02.fields._enabled = uVar16;
    __this_02.fields._hotLoop = bVar2;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
    if (lVar7 == 0) {
      return extraout_RAX_03;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_03.fields._area._4_4_ = gap;
  __this_03.fields._area._0_4_ = uVar10;
  __this_03.fields._detail = (System_String_o *)in_RCX;
  __this_03.fields._startMs._0_4_ = uVar13;
  __this_03.fields._startMs._4_4_ = uVar15;
  __this_03.fields._enabled = uVar16;
  __this_03.fields._hotLoop = bVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_03,(MethodInfo *)&stack0xfffffffffffffef8);
  _Unwind_Resume(auVar14._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$AddBackdrop
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, UnityEngine_Transform_o* parent, bool dismiss, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3b50720

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,UnityEngine_Transform_o *parent,
               bool_conflict dismiss,UnityEngine_Color_o color,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_04;
  System_RuntimeTypeHandle_o handle;
  System_String_o *detail;
  byte bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_05;
  UnityEngine_RectTransform_o *rect;
  Il2CppObject *pIVar5;
  UnityEngine_UI_Selectable_o *__this_06;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 *puVar6;
  UnityEngine_GameObject_o *root;
  long *plVar7;
  UnityEngine_RectTransform_o *host;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  uint uVar9;
  MethodInfo *in_R8;
  uint in_R9D;
  float gap;
  undefined1 auVar10 [12];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool_conflict bVar14;
  System_String_o SStack_a0;
  _union_13 _Stack_88;
  System_Type_array *pSStack_78;
  UnityEngine_Transform_o *pUStack_70;
  float local_48;
  float local_38;
  
  if (g_data_057a9ceb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_AddComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddBackdrop_b__20_0);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"AoTTG Backdrop");
    g_data_057a9ceb = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_03b50972:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar2 != (System_Type_o *)0x0) && (lVar3 = il2cpp_runtime_helper_023051f0(pSVar2), lVar3 == 0))
    goto label_03b5097c;
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar2;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar2);
      pUVar4 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      method = (MethodInfo *)0x0;
      UnityEngine_GameObject___ctor_4dfc440(pUVar4,"AoTTG Backdrop",components,(MethodInfo *)0x0);
      if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
         (__this_05 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
         __this_05 != (UnityEngine_Transform_o *)0x0)) {
        method = (MethodInfo *)0x0;
        UnityEngine_Transform__SetParent_4e09e30(__this_05,parent,0,(MethodInfo *)0x0);
        pMVar8 = MethodInfo_RectTransform_GetComponent_RectTransform;
        rect = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent_object_(pUVar4,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch(rect,pMVar8);
        pIVar5 = UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_Image_AddComponent_Image);
        if (pIVar5 != (Il2CppObject *)0x0) {
          method = (MethodInfo *)pIVar5->klass;
          local_48 = color.fields.r;
          local_38 = color.fields.b;
          (*((Il2CppClass *)method)->vtable[0x17].methodPtr)
                    (local_48,local_38,pIVar5,((Il2CppClass *)method)->vtable[0x17].method);
          if ((char)dismiss == '\0') {
            return;
          }
          __this_06 = (UnityEngine_UI_Selectable_o *)
                      UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_Button_AddComponent_Button);
          if (__this_06 != (UnityEngine_UI_Selectable_o *)0x0) {
            UnityEngine_UI_Selectable__set_transition(__this_06,0,(MethodInfo *)0x0);
            __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_06->fields).m_CanvasGroupCache;
            call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            method = (MethodInfo *)0x0;
            UnityEngine_Events_UnityAction___ctor();
            components = (System_Type_array *)0x0;
            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_03b50972;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b5097c:
  lVar3 = il2cpp_runtime_helper_0231b270();
  pUVar4 = (UnityEngine_GameObject_o *)0x0;
  gap = (float)il2cpp_runtime_helper_022b2b10();
  uVar9 = (uint)in_R8;
  pSStack_78 = components;
  pUStack_70 = parent;
  if (g_data_057a9ce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"Overlay.PrepareLayout");
    g_data_057a9ce2 = '\x01';
  }
  detail = "Overlay.PrepareLayout";
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  bVar14 = 0;
  if (lVar3 == 0) {
    puVar6 = &"null";
  }
  else {
    puVar6 = (undefined8 *)(lVar3 + 0x10);
  }
  pMVar8 = (MethodInfo *)*puVar6;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_a0.fields._stringLength = 0;
  SStack_a0.fields._firstChar = 0;
  SStack_a0.fields._6_2_ = 0;
  _Stack_88.rgctx_data = (Il2CppRGCTXData *)0x0;
  SStack_a0.klass = (System_String_c *)0x0;
  SStack_a0.monitor = (Il2CppType *)0x0;
  __this_01.fields._area._4_4_ = gap;
  __this_01.fields._area._0_4_ = uVar9;
  __this_01.fields._detail = (System_String_o *)method;
  __this_01.fields._startMs._0_4_ = uVar11;
  __this_01.fields._startMs._4_4_ = uVar12;
  __this_01.fields._enabled = uVar13;
  __this_01.fields._hotLoop = bVar14;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_01,&SStack_a0,detail,pMVar8);
  uVar11 = SStack_a0.klass._0_4_;
  uVar12 = SStack_a0.klass._4_4_;
  uVar13 = SStack_a0.monitor._0_4_;
  bVar14 = SStack_a0.monitor._4_4_;
  if (lVar3 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)(lVar3 + 0x20) == '\0') {
      bVar1 = 0;
    }
    else {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight(host,pUVar4,method_00);
      bVar1 = *(byte *)(lVar3 + 0x20);
    }
    if (((uint)(byte)~bVar1 & (uint)(MethodInfo *)((ulong)in_R9D & 0xff)) != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
                (pUVar4,host,(UnityEngine_GameObject_o *)method,(MethodInfo *)((ulong)in_R9D & 0xff));
    }
    if (host != (UnityEngine_RectTransform_o *)0x0) {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
      if (*(char *)(lVar3 + 0x20) == '\0') {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                  (pUVar4,host,(UnityEngine_GameObject_o *)method,uVar9 & 0xff,gap,in_R8);
      }
      pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar4,(MethodInfo *)0x0);
      __this_02.fields._area._4_4_ = gap;
      __this_02.fields._area._0_4_ = uVar9;
      __this_02.fields._detail = (System_String_o *)method;
      __this_02.fields._startMs._0_4_ = uVar11;
      __this_02.fields._startMs._4_4_ = uVar12;
      __this_02.fields._enabled = uVar13;
      __this_02.fields._hotLoop = bVar14;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_02,(MethodInfo *)&stack0xffffffffffffff40);
      return;
    }
  }
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar3 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._area._4_4_ = gap;
    __this_03.fields._area._0_4_ = uVar9;
    __this_03.fields._detail = (System_String_o *)method;
    __this_03.fields._startMs._0_4_ = uVar11;
    __this_03.fields._startMs._4_4_ = uVar12;
    __this_03.fields._enabled = uVar13;
    __this_03.fields._hotLoop = bVar14;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_03,(MethodInfo *)&stack0xffffffffffffff40);
    if (lVar3 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._area._4_4_ = gap;
  __this_04.fields._area._0_4_ = uVar9;
  __this_04.fields._detail = (System_String_o *)method;
  __this_04.fields._startMs._0_4_ = uVar11;
  __this_04.fields._startMs._4_4_ = uVar12;
  __this_04.fields._enabled = uVar13;
  __this_04.fields._hotLoop = bVar14;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_04,(MethodInfo *)&stack0xffffffffffffff40);
  _Unwind_Resume(auVar10._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3b50560

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  System_RuntimeTypeHandle_o handle;
  System_String_o *detail;
  byte bVar1;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar2;
  System_Type_array *components;
  System_Type_o *pSVar3;
  long lVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_RectTransform_o *rect_00;
  Il2CppObject *pIVar6;
  UnityEngine_UI_Selectable_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 *puVar7;
  UnityEngine_GameObject_o *root;
  Il2CppClass *in_RCX;
  char extraout_DL;
  UnityEngine_RectTransform_o *host;
  MethodInfo *method_00;
  uint uVar8;
  MethodInfo *pMVar9;
  MethodInfo *method_01;
  long *plVar10;
  MethodInfo *in_R8;
  uint in_R9D;
  undefined4 uVar11;
  float gap;
  undefined4 in_XMM1_Da;
  undefined1 auVar12 [12];
  undefined4 uVar13;
  undefined4 uVar14;
  bool_conflict bVar15;
  System_String_o SStack_d0;
  _union_13 _Stack_b8;
  System_Type_array *pSStack_a8;
  MethodInfo *pMStack_a0;
  
  plVar10 = (long *)rect;
  if (g_data_057a694c == '\0') {
    plVar10 = &TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8)
               ,(MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = method;
  if (g_data_057a9ce9 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ce9 = '\x01';
  }
  if ((Gilzoide_FlexUi_FlexLayout_o *)plVar10 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection((Gilzoide_FlexUi_FlexLayout_o *)plVar10,0,(MethodInfo *)0x0)
    ;
    Gilzoide_FlexUi_FlexLayout__set_FlexWrap((Gilzoide_FlexUi_FlexLayout_o *)plVar10,0,(MethodInfo *)0x0);
    uVar8 = (uint)method & 0xff;
    Gilzoide_FlexUi_FlexLayout__set_JustifyContent
              ((Gilzoide_FlexUi_FlexLayout_o *)plVar10,uVar8,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_AlignItems
              ((Gilzoide_FlexUi_FlexLayout_o *)plVar10,uVar8 + 1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    GVar2 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Width((Gilzoide_FlexUi_FlexLayout_o *)plVar10,GVar2,(MethodInfo *)0x0);
    GVar2 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Height((Gilzoide_FlexUi_FlexLayout_o *)plVar10,GVar2,(MethodInfo *)0x0);
    return;
  }
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ceb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_AddComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddBackdrop_b__20_0);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"AoTTG Backdrop");
    g_data_057a9ceb = '\x01';
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_03b50972:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if ((pSVar3 != (System_Type_o *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pSVar3), lVar4 == 0))
    goto label_03b5097c;
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar3;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar3);
      pUVar5 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      in_RCX = (Il2CppClass *)0x0;
      UnityEngine_GameObject___ctor_4dfc440(pUVar5,"AoTTG Backdrop",components,(MethodInfo *)0x0);
      if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
         (__this_04 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
         __this_04 != (UnityEngine_Transform_o *)0x0)) {
        in_RCX = (Il2CppClass *)0x0;
        UnityEngine_Transform__SetParent_4e09e30
                  (__this_04,(UnityEngine_Transform_o *)pMVar9,0,(MethodInfo *)0x0);
        method_01 = MethodInfo_RectTransform_GetComponent_RectTransform;
        rect_00 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent_object_(pUVar5,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch(rect_00,method_01);
        pIVar6 = UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_Image_AddComponent_Image);
        if (pIVar6 != (Il2CppObject *)0x0) {
          in_RCX = pIVar6->klass;
          (*in_RCX->vtable[0x17].methodPtr)(uVar11,in_XMM1_Da,pIVar6,in_RCX->vtable[0x17].method);
          if (extraout_DL == '\0') {
            return;
          }
          __this_05 = (UnityEngine_UI_Selectable_o *)
                      UnityEngine_GameObject__AddComponent_object_(pUVar5,MethodInfo_Button_AddComponent_Button);
          if (__this_05 != (UnityEngine_UI_Selectable_o *)0x0) {
            UnityEngine_UI_Selectable__set_transition(__this_05,0,(MethodInfo *)0x0);
            __this = (UnityEngine_Events_UnityEvent_o *)(__this_05->fields).m_CanvasGroupCache;
            call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
            in_RCX = (Il2CppClass *)0x0;
            UnityEngine_Events_UnityAction___ctor();
            components = (System_Type_array *)0x0;
            if (__this != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this,call,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_03b50972;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b5097c:
  lVar4 = il2cpp_runtime_helper_0231b270();
  pUVar5 = (UnityEngine_GameObject_o *)0x0;
  gap = (float)il2cpp_runtime_helper_022b2b10();
  uVar8 = (uint)in_R8;
  pSStack_a8 = components;
  pMStack_a0 = pMVar9;
  if (g_data_057a9ce2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&"Overlay.PrepareLayout");
    g_data_057a9ce2 = '\x01';
  }
  detail = "Overlay.PrepareLayout";
  uVar11 = 0;
  uVar13 = 0;
  uVar14 = 0;
  bVar15 = 0;
  if (lVar4 == 0) {
    puVar7 = &"null";
  }
  else {
    puVar7 = (undefined8 *)(lVar4 + 0x10);
  }
  pMVar9 = (MethodInfo *)*puVar7;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_d0.fields._stringLength = 0;
  SStack_d0.fields._firstChar = 0;
  SStack_d0.fields._6_2_ = 0;
  _Stack_b8.rgctx_data = (Il2CppRGCTXData *)0x0;
  SStack_d0.klass = (System_String_c *)0x0;
  SStack_d0.monitor = (Il2CppType *)0x0;
  __this_00.fields._area._4_4_ = gap;
  __this_00.fields._area._0_4_ = uVar8;
  __this_00.fields._detail = (System_String_o *)in_RCX;
  __this_00.fields._startMs._0_4_ = uVar11;
  __this_00.fields._startMs._4_4_ = uVar13;
  __this_00.fields._enabled = uVar14;
  __this_00.fields._hotLoop = bVar15;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_00,&SStack_d0,detail,pMVar9);
  uVar11 = SStack_d0.klass._0_4_;
  uVar13 = SStack_d0.klass._4_4_;
  uVar14 = SStack_d0.monitor._0_4_;
  bVar15 = SStack_d0.monitor._4_4_;
  if (lVar4 == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(char *)(lVar4 + 0x20) == '\0') {
      bVar1 = 0;
    }
    else {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight(host,pUVar5,method_00);
      bVar1 = *(byte *)(lVar4 + 0x20);
    }
    if (((uint)(byte)~bVar1 & (uint)(MethodInfo *)((ulong)in_R9D & 0xff)) != 0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
                (pUVar5,host,(UnityEngine_GameObject_o *)in_RCX,(MethodInfo *)((ulong)in_R9D & 0xff));
    }
    if (host != (UnityEngine_RectTransform_o *)0x0) {
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
      if (*(char *)(lVar4 + 0x20) == '\0') {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                  (pUVar5,host,(UnityEngine_GameObject_o *)in_RCX,uVar8 & 0xff,gap,in_R8);
      }
      pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)host,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar5,(MethodInfo *)0x0);
      __this_01.fields._area._4_4_ = gap;
      __this_01.fields._area._0_4_ = uVar8;
      __this_01.fields._detail = (System_String_o *)in_RCX;
      __this_01.fields._startMs._0_4_ = uVar11;
      __this_01.fields._startMs._4_4_ = uVar13;
      __this_01.fields._enabled = uVar14;
      __this_01.fields._hotLoop = bVar15;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_01,(MethodInfo *)&stack0xffffffffffffff10);
      return;
    }
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar4 = *plVar10;
    __cxa_end_catch();
    __this_02.fields._area._4_4_ = gap;
    __this_02.fields._area._0_4_ = uVar8;
    __this_02.fields._detail = (System_String_o *)in_RCX;
    __this_02.fields._startMs._0_4_ = uVar11;
    __this_02.fields._startMs._4_4_ = uVar13;
    __this_02.fields._enabled = uVar14;
    __this_02.fields._hotLoop = bVar15;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_02,(MethodInfo *)&stack0xffffffffffffff10);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_03.fields._area._4_4_ = gap;
  __this_03.fields._area._0_4_ = uVar8;
  __this_03.fields._detail = (System_String_o *)in_RCX;
  __this_03.fields._startMs._0_4_ = uVar11;
  __this_03.fields._startMs._4_4_ = uVar13;
  __this_03.fields._enabled = uVar14;
  __this_03.fields._hotLoop = bVar15;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_03,(MethodInfo *)&stack0xffffffffffffff10);
  _Unwind_Resume(auVar12._0_8_);
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FindDialog
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b51e50

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar2;
  int index;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  
  if (g_data_057a9cec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cec = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    index = (__this_00->fields)._size + -1;
    if (index < 0) {
      return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
    }
    do {
      pGVar2 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      if (pGVar2 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) break;
      if (((pGVar2->fields).Kind == 0) &&
         (bVar1 = System_String__op_Equality((pGVar2->fields).Id,id,(MethodInfo *)0x0), (char)bVar1 != '\0'))
      {
        x = (UnityEngine_Object_o *)(pGVar2->fields).Host;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          return pGVar2;
        }
      }
      index = index + -1;
      if (index < 0) {
        return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
      }
      __this_00 = (__this->fields)._stack;
    } while (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Top
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Top (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x3b526c0

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Top
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar2;
  undefined8 extraout_RAX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  MethodInfo *in_R8;
  
  if (g_data_057a9ced == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    g_data_057a9ced = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)(__this->fields)._stack;
  if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    iVar1 = *(int *)&(__this_00->fields)._context;
    if (0 < iVar1) {
      pGVar2 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      return pGVar2;
    }
    return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
                     (__this_00,(System_String_o *)method,method_00);
  if (pGVar2 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
              (__this_00,pGVar2,(uint)method_00 & 0xff,1,in_R8);
    return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
           CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
  }
  return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ResolveDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResolveDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b51f50

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResolveDialog
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  System_String_o *detail;
  UnityEngine_GameObject_o *anchor;
  uint animate;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar2;
  System_String_o *str0;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  bool_conflict in_ECX;
  System_Func_string__GisketchOverlayDefinition__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *pGVar4;
  UnityEngine_GameObject_o *extraout_RDX;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *unaff_RBX;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar5;
  uint forceBelow;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_03;
  uint in_R8D;
  uint in_R9D;
  byte unaff_R14B;
  float popoverGap;
  undefined1 auVar6 [16];
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  MethodInfo *in_stack_ffffffffffffff48;
  System_String_o SStack_a0;
  char *pcStack_88;
  UnityEngine_GameObject_o *pUStack_78;
  System_String_c *pSStack_70;
  Il2CppMethodPointer pIStack_68;
  System_String_Fields SStack_60;
  char *pcStack_58;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGStack_48;
  
  pGVar1 = (__this->fields)._context;
  pGVar5 = unaff_RBX;
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)id;
  __this_03 = __this;
  if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    pSVar3 = (pGVar1->fields).DialogResolver;
    if (pSVar3 != (System_Func_string__GisketchOverlayDefinition__o *)0x0) {
      __this_03 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)(pSVar3->fields).method_code;
      auVar6 = (*(code *)(pSVar3->fields).invoke_impl)(__this_03,id,(pSVar3->fields).method);
      method = auVar6._8_8_;
      in_ECX = (bool_conflict)pSVar3;
      if (auVar6._0_8_ != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
        return auVar6._0_8_;
      }
      pGVar1 = (__this->fields)._context;
      pGVar5 = __this;
      if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_03b51fb2;
    }
    __this_00 = (pGVar1->fields).Manifest;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog(__this_00,id,method);
      return pGVar2;
    }
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
  }
label_03b51fb2:
  popoverGap = (float)il2cpp_runtime_helper_022b2c90();
  pUStack_78 = extraout_RDX;
  pGStack_48 = pGVar5;
  if (g_data_057a9ce8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OverlayKind);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"Overlay.ShowOverlay");
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057a9ce8 = '\x01';
  }
  SStack_60 = (System_String_Fields)0x0;
  pcStack_58 = (char *)0x0;
  pSStack_70 = (System_String_c *)0x0;
  pIStack_68 = (Il2CppMethodPointer)0x0;
  SStack_a0.klass = TypeInfo_OverlayKind;
  SStack_a0.monitor = (void *)0xffffffffffffffff;
  SStack_a0.fields._stringLength = in_ECX;
  str0 = System_Enum__ToString((System_Enum_o *)&SStack_a0,(MethodInfo *)0x0);
  detail = "Overlay.ShowOverlay";
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&"null";
  }
  else {
    pGVar4 = &pGVar2->fields;
  }
  method_00 = (MethodInfo *)System_String__Concat_3af7150(str0," ",pGVar4->id,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SStack_a0.fields._stringLength = 0;
  SStack_a0.fields._firstChar = 0;
  SStack_a0.fields._6_2_ = 0;
  pcStack_88 = (char *)0x0;
  SStack_a0.klass = (System_String_c *)0x0;
  SStack_a0.monitor = (Il2CppMethodPointer)0x0;
  __this_01.fields._area._4_4_ = in_stack_ffffffffffffff44;
  __this_01.fields._area._0_4_ = in_stack_ffffffffffffff40;
  __this_01.fields._detail = (System_String_o *)in_stack_ffffffffffffff48;
  __this_01.fields._startMs._0_4_ = popoverGap;
  __this_01.fields._startMs._4_4_ = in_R8D;
  __this_01.fields._enabled = in_R9D;
  __this_01.fields._hotLoop = in_ECX;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_01,&SStack_a0,detail,method_00);
  anchor = pUStack_78;
  SStack_60 = SStack_a0.fields;
  pcStack_58 = pcStack_88;
  pSStack_70 = SStack_a0.klass;
  pIStack_68 = SStack_a0.monitor;
  forceBelow = in_R9D & 0xff;
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance
                       (__this_03,pGVar2,pUStack_78,in_ECX,forceBelow,(uint)(byte)unaff_RBX,popoverGap,
                        (MethodInfo *)CONCAT44(in_stack_ffffffffffffff44,in_stack_ffffffffffffff40));
  animate = (uint)unaff_R14B;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance
            (__this_03,instance,anchor,in_R8D & 0xff,forceBelow,(uint)(byte)unaff_RBX,popoverGap,animate,
             in_stack_ffffffffffffff48);
  __this_02.fields._area._4_4_ = in_stack_ffffffffffffff44;
  __this_02.fields._area._0_4_ = animate;
  __this_02.fields._detail = (System_String_o *)in_stack_ffffffffffffff48;
  __this_02.fields._startMs._0_4_ = popoverGap;
  __this_02.fields._startMs._4_4_ = in_R8D;
  __this_02.fields._enabled = in_R9D;
  __this_02.fields._hotLoop = in_ECX;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)&pSStack_70);
  return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)instance;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, bool restoreFocus, bool animate, const MethodInfo* method);
// 0x3b52470

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               bool_conflict restoreFocus,bool_conflict animate,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  MethodInfo *method_00;
  System_Object_array *pSVar2;
  DG_Tweening_Tween_o *t;
  System_Object_array *action;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  System_Object_array *item;
  System_Object_array *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_02;
  System_Collections_Generic_List_object__Fields *pSVar4;
  
  if (g_data_057a9cee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tween_OnComplete_Tween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CloseInstance_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass25_0);
    g_data_057a9cee = '\x01';
  }
  pSVar2 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass25_0);
  item = (System_Object_array *)0x0;
  __this_00 = pSVar2;
  System_Object___ctor((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  if (pSVar2 == (System_Object_array *)0x0) goto label_03b5262a;
  pSVar4 = (System_Collections_Generic_List_object__Fields *)&pSVar2->bounds;
  ((System_Collections_Generic_List_object__Fields *)&pSVar2->bounds)->_items =
       (System_Object_array *)instance;
  il2cpp_runtime_helper_022b4080(pSVar4,instance);
  item = ((System_Collections_Generic_List_object__Fields *)&pSVar2->bounds)->_items;
  if (item == (System_Object_array *)0x0) {
    return;
  }
  __this_00 = (System_Object_array *)(__this->fields)._stack;
  if (__this_00 == (System_Object_array *)0x0) goto label_03b5262a;
  System_Collections_Generic_List_object___Remove
            ((System_Collections_Generic_List_object__o *)__this_00,&item->obj,MethodInfo_Boolean_Remove);
  if ((System_Object_array *)(__this->fields)._activePopover == pSVar4->_items) {
    __this_00 = (System_Object_array *)&(__this->fields)._activePopover;
    *(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o **)__this_00 =
         (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
    item = (System_Object_array *)0x0;
    il2cpp_runtime_helper_022b4080();
    if ((char)animate == '\0') goto label_03b525a1;
label_03b52552:
    if (pSVar4->_items == (System_Object_array *)0x0) goto label_03b5262a;
    view = (Gisketch_Aottg2UI_Building_GisketchView_o *)pSVar4->_items->m_Items[1];
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(view,(MethodInfo *)0x0);
  }
  else {
    if ((char)animate != '\0') goto label_03b52552;
label_03b525a1:
    t = (DG_Tweening_Tween_o *)0x0;
  }
  action = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
  __this_00 = action;
  DG_Tweening_TweenCallback___ctor();
  if (t == (DG_Tweening_Tween_o *)0x0) {
    item = pSVar2;
    if (action == (System_Object_array *)0x0) {
label_03b5262a:
      il2cpp_runtime_helper_022b2c90();
      pSVar2 = item;
      if (g_data_057a9ced == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
        g_data_057a9ced = '\x01';
      }
      __this_01 = (System_Collections_Generic_List_object__o *)__this_00->m_Items[0];
      if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
        iVar1 = (__this_01->fields)._size;
        if ((0 < iVar1) &&
           (pGVar3 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                     System_Collections_Generic_List_object___get_Item(__this_01,iVar1 + -1,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item),
           pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                    ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,pGVar3,(uint)item & 0xff
                     ,1,method);
          return;
        }
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9ced == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
        g_data_057a9ced = '\x01';
      }
      __this_02 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)(__this_01->fields)._syncRoot;
      if (__this_02 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        iVar1 = *(int *)&(__this_02->fields)._context;
        if (0 < iVar1) {
          System_Collections_Generic_List_object___get_Item
                    ((System_Collections_Generic_List_object__o *)__this_02,iVar1 + -1,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
          return;
        }
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      pGVar3 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
                         (__this_02,(System_String_o *)pSVar2,method_01);
      if (pGVar3 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                  (__this_02,pGVar3,(uint)method_01 & 0xff,1,method);
        return;
      }
      return;
    }
    (*(code *)action->max_length)(action->m_Items[4],action->m_Items[1]);
    method_00 = extraout_RDX_00;
  }
  else {
    DG_Tweening_TweenSettingsExtensions__OnComplete_object_
              ((Il2CppObject *)t,(DG_Tweening_TweenCallback_o *)action,MethodInfo_Tween_OnComplete_Tween);
    method_00 = extraout_RDX;
  }
  if ((char)restoreFocus == '\0') {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusAfterClose
            (__this,(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)pSVar4->_items,
             method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FocusAfterClose
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusAfterClose (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* closed, const MethodInfo* method);
// 0x3b52bc0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusAfterClose
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *closed,MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer pIVar2;
  char cVar3;
  bool_conflict bVar4;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  UnityEngine_UI_Selectable_o *x;
  undefined8 uVar5;
  System_Object_array *pSVar6;
  UnityEngine_UI_Selectable_o *pUVar7;
  System_Object_array *pSVar8;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *unaff_RBX;
  long *selectable;
  ulong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  UnityEngine_UI_Selectable_o *pUVar13;
  System_Object_array *pSVar14;
  System_Object_array *x_00;
  undefined8 unaff_R12;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *unaff_R14;
  undefined8 unaff_R15;
  undefined1 auStack_18 [8];
  MethodInfo *pMVar12;
  
  puVar10 = auStack_18;
  if (g_data_057a9ced == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    g_data_057a9ced = '\x01';
  }
  pUVar7 = (UnityEngine_UI_Selectable_o *)(__this->fields)._stack;
  if (pUVar7 == (UnityEngine_UI_Selectable_o *)0x0) {
label_03b52c3a:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar1 = *(int *)&(pUVar7->fields).m_CancellationTokenSource;
    if (0 < iVar1) {
      uVar11 = iVar1 - 1;
      pMVar12 = (MethodInfo *)(ulong)uVar11;
      instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pUVar7,uVar11,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,pMVar12);
        return;
      }
    }
    if (closed == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
    goto label_03b52c3a;
    pUVar7 = (UnityEngine_UI_Selectable_o *)(closed->fields)._PreviousSelected_k__BackingField;
    __this = unaff_RBX;
    puVar10 = (undefined1 *)register0x00000020;
    closed = unaff_R14;
  }
  *(undefined8 *)(puVar10 + -8) = unaff_R15;
  *(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o **)(puVar10 + -0x10) = closed;
  *(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o **)(puVar10 + -0x18) = __this;
  if (g_data_057a9cf1 == '\0') {
    *(undefined8 *)(puVar10 + -0x20) = 0x3b52c5d;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    *(undefined8 *)(puVar10 + -0x20) = 0x3b52c69;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf1 = '\x01';
  }
  selectable = &TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar10 + -0x20) = 0x3b52c88;
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_UI_Selectable_o *)0x0;
  pMVar12 = (MethodInfo *)0x0;
  *(undefined8 *)(puVar10 + -0x20) = 0x3b52c97;
  pUVar13 = pUVar7;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (pUVar7 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b52d24;
    *(undefined8 *)(puVar10 + -0x20) = 0x3b52cb6;
    x = (UnityEngine_UI_Selectable_o *)
        UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pUVar7,MethodInfo_Selectable_GetComponent_Selectable);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar10 + -0x20) = 0x3b52cca;
    il2cpp_runtime_helper_02337ed0();
  }
  selectable = (long *)0x0;
  pMVar12 = (MethodInfo *)0x0;
  *(undefined8 *)(puVar10 + -0x20) = 0x3b52cd8;
  pUVar13 = x;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (x == (UnityEngine_UI_Selectable_o *)0x0) {
label_03b52d24:
      *(undefined8 *)(puVar10 + -0x20) = 0x3b52d29;
      uVar5 = il2cpp_runtime_helper_022b2c90();
      *(UnityEngine_UI_Selectable_o **)(puVar10 + -0x20) = pUVar7;
      *(long **)(puVar10 + -0x28) = selectable;
      *(undefined8 *)(puVar10 + -0x30) = uVar5;
      if (g_data_057a9cf7 == '\0') {
        *(undefined8 *)(puVar10 + -0x38) = 0x3b52d4c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9cf7 = '\x01';
      }
      if ((pUVar13 == (UnityEngine_UI_Selectable_o *)0x0) || (*(int *)&(pUVar13->fields).m_CachedPtr != 0)) {
        pSVar6 = (System_Object_array *)0x0;
        iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        pUVar7 = (pUVar13->fields).m_Navigation.fields.m_SelectOnUp;
        *(undefined8 *)(puVar10 + -0x38) = 0x3b52dce;
        pSVar6 = (System_Object_array *)
                 Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput
                           ((UnityEngine_GameObject_o *)pUVar7,pMVar12);
        iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar1 == 0) {
        *(undefined8 *)(puVar10 + -0x38) = 0x3b52d79;
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar12 = (MethodInfo *)0x0;
      *(undefined8 *)(puVar10 + -0x38) = 0x3b52d85;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (pUVar13 == (UnityEngine_UI_Selectable_o *)0x0) {
          pUVar7 = (UnityEngine_UI_Selectable_o *)0x0;
        }
        else {
          pUVar7 = (pUVar13->fields).m_Navigation.fields.m_SelectOnUp;
        }
        *(undefined8 *)(puVar10 + -0x38) = 0x3b52ded;
        pUVar7 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable
                           ((UnityEngine_GameObject_o *)pUVar7,pMVar12);
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(pUVar7,pMVar12);
        return;
      }
      *(undefined8 *)(puVar10 + -0x38) = 0x3b52d91;
      pSVar14 = pSVar6;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
                ((UnityEngine_UI_Selectable_o *)pSVar6,pMVar12);
      if (pSVar6 != (System_Object_array *)0x0) {
        pIVar2 = (((TMPro_TMP_InputField_VTable *)((pSVar6->obj).klass)->vtable)->_38_Select).methodPtr;
        *(undefined8 *)(puVar10 + -0x38) = 0x3b52da9;
        (*pIVar2)(pSVar6);
        TMPro_TMP_InputField__ActivateInputField((TMPro_TMP_InputField_o *)pSVar6,(MethodInfo *)0x0);
        return;
      }
      *(undefined8 *)(puVar10 + -0x38) = 0x3b52e01;
      uVar5 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)(puVar10 + -0x38) = 0;
      *(UnityEngine_UI_Selectable_o **)(puVar10 + -0x40) = pUVar13;
      *(undefined8 *)(puVar10 + -0x48) = unaff_R12;
      *(undefined8 *)(puVar10 + -0x50) = 0;
      *(undefined8 *)(puVar10 + -0x58) = uVar5;
      if (g_data_057a9cf0 == '\0') {
        *(undefined8 *)(puVar10 + -0x60) = 0x3b52e30;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponentsInChildren_Selectable);
        *(undefined8 *)(puVar10 + -0x60) = 0x3b52e3c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9cf0 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar10 + -0x60) = 0x3b52e5b;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar10 + -0x60) = 0x3b52e6a;
      pSVar6 = pSVar14;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pSVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      uVar9 = 0;
      if (pSVar14 != (System_Object_array *)0x0) {
        *(undefined8 *)(puVar10 + -0x60) = 0x3b52e8f;
        pSVar6 = pSVar14;
        pSVar8 = UnityEngine_GameObject__GetComponentsInChildren_object_
                           ((UnityEngine_GameObject_o *)pSVar14,0,MethodInfo_Selectable_GetComponentsInChildren_Selectable);
        if (pSVar8 != (System_Object_array *)0x0) {
          if ((int)pSVar8->max_length < 1) {
            return;
          }
          uVar9 = 0;
          pSVar14 = pSVar8;
          if ((pSVar8->max_length & 0xffffffff) != 0) {
            do {
              x_00 = (System_Object_array *)pSVar8->m_Items[uVar9];
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                *(undefined8 *)(puVar10 + -0x60) = 0x3b52eed;
                il2cpp_runtime_helper_02337ed0();
              }
              *(undefined8 *)(puVar10 + -0x60) = 0x3b52ef9;
              pSVar6 = x_00;
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                if (x_00 == (System_Object_array *)0x0) goto label_03b52f4b;
                pIVar2 = (((TMPro_TMP_InputField_VTable *)((x_00->obj).klass)->vtable)->_9_IsActive).methodPtr
                ;
                *(undefined8 *)(puVar10 + -0x60) = 0x3b52f16;
                pSVar6 = x_00;
                cVar3 = (*pIVar2)();
                if (cVar3 != '\0') {
                  pIVar2 = (((TMPro_TMP_InputField_VTable *)((x_00->obj).klass)->vtable)->_24_IsInteractable).
                           methodPtr;
                  *(undefined8 *)(puVar10 + -0x60) = 0x3b52f2e;
                  cVar3 = (*pIVar2)();
                  pSVar6 = x_00;
                  if (cVar3 != '\0') {
                    return;
                  }
                }
              }
              uVar9 = uVar9 + 1;
              uVar11 = (uint)pSVar8->max_length;
              if ((long)(int)uVar11 <= (long)uVar9) {
                return;
              }
            } while (uVar9 < uVar11);
          }
          *(undefined8 *)(puVar10 + -0x60) = 0x3b52f4b;
          il2cpp_runtime_helper_022b2ca0();
        }
      }
label_03b52f4b:
      *(code **)(puVar10 + -0x60) = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject;
      il2cpp_runtime_helper_022b2c90();
      *(long **)(puVar10 + -0x60) = &TypeInfo_Object;
      *(System_Object_array **)(puVar10 + -0x68) = pSVar14;
      *(ulong *)(puVar10 + -0x70) = uVar9;
      if (g_data_057a9cf4 == '\0') {
        *(undefined8 *)(puVar10 + -0x78) = 0x3b52f6d;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
        *(undefined8 *)(puVar10 + -0x78) = 0x3b52f79;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9cf4 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar10 + -0x78) = 0x3b52f98;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar10 + -0x78) = 0x3b52fa4;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        *(undefined8 *)(puVar10 + -0x78) = 0x3b52fc6;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar10 + -0x78) = 0x3b52fcd;
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar10 + -0x78) = 0x3b52ff3;
        il2cpp_runtime_helper_02337ed0();
      }
      if ((char)bVar4 == '\0') {
        UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pSVar6,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pSVar6,(MethodInfo *)0x0);
      return;
    }
    pMVar12 = (x->klass->vtable)._9_IsActive.method;
    pIVar2 = (x->klass->vtable)._9_IsActive.methodPtr;
    *(undefined8 *)(puVar10 + -0x20) = 0x3b52cf4;
    cVar3 = (*pIVar2)(x);
    if (cVar3 == '\0') {
      selectable = (long *)(UnityEngine_UI_Selectable_o *)0x0;
    }
    else {
      pMVar12 = (x->klass->vtable)._24_IsInteractable.method;
      pIVar2 = (x->klass->vtable)._24_IsInteractable.methodPtr;
      *(undefined8 *)(puVar10 + -0x20) = 0x3b52d0b;
      cVar3 = (*pIVar2)(x);
      selectable = (long *)(UnityEngine_UI_Selectable_o *)0x0;
      if (cVar3 != '\0') {
        selectable = (long *)x;
      }
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
            ((UnityEngine_UI_Selectable_o *)selectable,pMVar12);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Focus
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Focus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, bool focus, const MethodInfo* method);
// 0x3b51320

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Focus
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               bool_conflict focus,MethodInfo *method)

{
  undefined4 in_register_00000034;
  
  if ((char)focus != '\0') {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus
              (instance,(MethodInfo *)CONCAT44(in_register_00000034,focus));
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ContainsSelected
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ContainsSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x3b529b0

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ContainsSelected
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,MethodInfo *method)

{
  System_Object_array *items;
  long lVar1;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  System_Func_T__string__o *getId;
  Il2CppObject *pIVar3;
  System_String_o *id;
  MethodInfo *method_00;
  UnityEngine_Object_o *x_00;
  
  method_00 = (MethodInfo *)instance;
  if (g_data_057a9cef == '\0') {
    method_00 = (MethodInfo *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cef = '\x01';
  }
  x = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) &&
     ((char)bVar2 != '\0')) {
    x_00 = (UnityEngine_Object_o *)(instance->fields)._ContentRoot_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    id = (System_String_o *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (x != (UnityEngine_Object_o *)0x0) {
        id = (System_String_o *)0x0;
        __this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
        x_00 = (UnityEngine_Object_o *)(instance->fields)._ContentRoot_k__BackingField;
        if (x_00 != (UnityEngine_Object_o *)0x0) {
          id = (System_String_o *)0x0;
          parent = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x_00,(MethodInfo *)0x0);
          if (__this != (UnityEngine_Transform_o *)0x0) {
            bVar2 = UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
            return bVar2;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d3f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Func_GisketchOverlayDefinition_string);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayDefinition_FindById_GisketchOverlayDefini);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_FindDialog_b__9_0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c);
        g_data_057a9d3f = '\x01';
      }
      items = (System_Object_array *)x_00[2].klass;
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (getId == (System_Func_T__string__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        getId = (System_Func_T__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_GisketchOverlayDefinition_string);
        System_Func_object__object____ctor();
        lVar1 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__string__o **)(lVar1 + 0x10) = getId;
        il2cpp_runtime_helper_022b4080(lVar1 + 0x10,getId);
      }
      pIVar3 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_
                         (items,id,getId,MethodInfo_GisketchOverlayDefinition_FindById_GisketchOverlayDefini);
      return (bool_conflict)pIVar3;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FirstSelectable
// il2cpp: UnityEngine_UI_Selectable_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b52e10

UnityEngine_UI_Selectable_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Selectable_o *x;
  char cVar2;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  undefined4 extraout_var;
  UnityEngine_UI_Selectable_o *extraout_RAX;
  UnityEngine_UI_Selectable_o *extraout_RAX_00;
  ulong uVar5;
  UnityEngine_UI_Selectable_o *x_00;
  
  if (g_data_057a9cf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponentsInChildren_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x_00 = (UnityEngine_UI_Selectable_o *)root;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (UnityEngine_UI_Selectable_o *)0x0;
  }
  if ((root != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object_(root,0,MethodInfo_Selectable_GetComponentsInChildren_Selectable),
     x_00 = (UnityEngine_UI_Selectable_o *)root, pSVar4 != (System_Object_array *)0x0)) {
    if ((int)pSVar4->max_length < 1) {
      return (UnityEngine_UI_Selectable_o *)0x0;
    }
    uVar5 = 0;
    if ((pSVar4->max_length & 0xffffffff) != 0) {
      do {
        x = (UnityEngine_UI_Selectable_o *)pSVar4->m_Items[uVar5];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        root = (UnityEngine_GameObject_o *)x;
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          x_00 = (UnityEngine_UI_Selectable_o *)root;
          if (x == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b52f4b;
          root = (UnityEngine_GameObject_o *)x;
          cVar2 = (*(x->klass->vtable)._9_IsActive.methodPtr)();
          if ((cVar2 != '\0') &&
             (root = (UnityEngine_GameObject_o *)x,
             cVar2 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)(), cVar2 != '\0')) {
            return x;
          }
        }
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar4->max_length;
        if ((long)(int)uVar1 <= (long)uVar5) {
          return (UnityEngine_UI_Selectable_o *)0x0;
        }
      } while (uVar5 < uVar1);
    }
    il2cpp_runtime_helper_022b2ca0();
    x_00 = (UnityEngine_UI_Selectable_o *)root;
  }
label_03b52f4b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar3 == '\0') {
      UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)x_00,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)x_00,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  return (UnityEngine_UI_Selectable_o *)CONCAT44(extraout_var,bVar3);
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Restore
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Restore (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3b52c40

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Restore
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool_conflict bVar4;
  UnityEngine_UI_Selectable_o *x;
  TMPro_TMP_InputField_o *pTVar5;
  UnityEngine_UI_Selectable_o *pUVar6;
  System_Object_array *pSVar7;
  UnityEngine_UI_Selectable_o *selectable;
  ulong uVar8;
  MethodInfo *pMVar9;
  TMPro_TMP_InputField_o *x_00;
  TMPro_TMP_InputField_o *x_01;
  
  if (g_data_057a9cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf1 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_UI_Selectable_o *)0x0;
  pMVar9 = (MethodInfo *)0x0;
  pUVar6 = (UnityEngine_UI_Selectable_o *)go;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_03b52d24;
    x = (UnityEngine_UI_Selectable_o *)UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_Selectable_GetComponent_Selectable);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar9 = (MethodInfo *)0x0;
  pUVar6 = x;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  selectable = (UnityEngine_UI_Selectable_o *)0x0;
  if ((char)bVar4 != '\0') {
    if (x == (UnityEngine_UI_Selectable_o *)0x0) {
label_03b52d24:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9cf7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9cf7 = '\x01';
      }
      if ((pUVar6 == (UnityEngine_UI_Selectable_o *)0x0) || ((int)(pUVar6->fields).m_CachedPtr != 0)) {
        pTVar5 = (TMPro_TMP_InputField_o *)0x0;
        iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      }
      else {
        pTVar5 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput
                           ((UnityEngine_GameObject_o *)(pUVar6->fields).m_Navigation.fields.m_SelectOnUp,
                            pMVar9);
        iVar1 = *(int *)(TypeInfo_Object + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar9 = (MethodInfo *)0x0;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (pUVar6 == (UnityEngine_UI_Selectable_o *)0x0) {
          pUVar6 = (UnityEngine_UI_Selectable_o *)0x0;
        }
        else {
          pUVar6 = (pUVar6->fields).m_Navigation.fields.m_SelectOnUp;
        }
        pUVar6 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable
                           ((UnityEngine_GameObject_o *)pUVar6,pMVar9);
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(pUVar6,pMVar9);
        return;
      }
      x_00 = pTVar5;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
                ((UnityEngine_UI_Selectable_o *)pTVar5,pMVar9);
      if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
        (*(pTVar5->klass->vtable)._38_Select.methodPtr)(pTVar5);
        TMPro_TMP_InputField__ActivateInputField(pTVar5,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9cf0 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponentsInChildren_Selectable);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9cf0 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pTVar5 = x_00;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      if ((x_00 != (TMPro_TMP_InputField_o *)0x0) &&
         (pSVar7 = UnityEngine_GameObject__GetComponentsInChildren_object_
                             ((UnityEngine_GameObject_o *)x_00,0,MethodInfo_Selectable_GetComponentsInChildren_Selectable), pTVar5 = x_00,
         pSVar7 != (System_Object_array *)0x0)) {
        if ((int)pSVar7->max_length < 1) {
          return;
        }
        uVar8 = 0;
        if ((pSVar7->max_length & 0xffffffff) != 0) {
          do {
            x_01 = (TMPro_TMP_InputField_o *)pSVar7->m_Items[uVar8];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pTVar5 = x_01;
            bVar4 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            x_00 = pTVar5;
            if ((char)bVar4 != '\0') {
              if (x_01 == (TMPro_TMP_InputField_o *)0x0) goto label_03b52f4b;
              x_00 = x_01;
              cVar3 = (*(x_01->klass->vtable)._9_IsActive.methodPtr)();
              if ((cVar3 != '\0') &&
                 (cVar3 = (*(x_01->klass->vtable)._24_IsInteractable.methodPtr)(), x_00 = x_01, cVar3 != '\0')
                 ) {
                return;
              }
            }
            uVar8 = uVar8 + 1;
            uVar2 = (uint)pSVar7->max_length;
            if ((long)(int)uVar2 <= (long)uVar8) {
              return;
            }
          } while (uVar8 < uVar2);
        }
        il2cpp_runtime_helper_022b2ca0();
        pTVar5 = x_00;
      }
label_03b52f4b:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9cf4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9cf4 = '\x01';
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((char)bVar4 == '\0') {
        UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pTVar5,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pTVar5,(MethodInfo *)0x0);
      return;
    }
    pMVar9 = (x->klass->vtable)._9_IsActive.method;
    cVar3 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x);
    if (cVar3 == '\0') {
      selectable = (UnityEngine_UI_Selectable_o *)0x0;
    }
    else {
      pMVar9 = (x->klass->vtable)._24_IsInteractable.method;
      cVar3 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)(x);
      selectable = (UnityEngine_UI_Selectable_o *)0x0;
      if (cVar3 != '\0') {
        selectable = x;
      }
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(selectable,pMVar9);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CurrentSelected
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected (const MethodInfo* method);
// 0x3b51260

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (g_data_057a9cf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf2 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = (UnityEngine_GameObject_o *)0x0;
  uVar4 = 0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar5 = 0;
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)(lVar5 + 0x40) = uVar4;
      pUVar3 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_022b4080(lVar5 + 0x40);
      return pUVar3;
    }
    pUVar3 = (pUVar2->fields).m_CurrentSelected;
  }
  return pUVar3;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected (UnityEngine_UI_Selectable_o* selectable, const MethodInfo* method);
// 0x3b527e0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
               (UnityEngine_UI_Selectable_o *selectable,MethodInfo *method)

{
  System_Object_array *items;
  long lVar1;
  bool_conflict bVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  System_Func_T__string__o *getId;
  uint index;
  System_String_o *id;
  UnityEngine_UI_Selectable_o *pUVar5;
  MethodInfo *__this_00;
  MethodInfo *pMVar6;
  UnityEngine_Object_o *x_00;
  
  if (g_data_057a9cf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf3 = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_GameObject_o *)0x0;
  pUVar5 = selectable;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (selectable == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b52924;
    pUVar5 = selectable;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectable,(MethodInfo *)0x0);
  }
  if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
label_03b52924:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9ced == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      g_data_057a9ced = '\x01';
    }
    __this_00 = *(MethodInfo **)&(pUVar5->fields).m_EnableCalled;
    if (__this_00 == (MethodInfo *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pMVar6 = __this_00;
      if (g_data_057a9cef == '\0') {
        pMVar6 = (MethodInfo *)&TypeInfo_Object;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9cef = '\x01';
      }
      x = (UnityEngine_Object_o *)Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(pMVar6);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((__this_00 != (MethodInfo *)0x0) && ((char)bVar2 != '\0')) {
        x_00 = (UnityEngine_Object_o *)__this_00->parameters;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        id = (System_String_o *)0x0;
        bVar2 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (x != (UnityEngine_Object_o *)0x0) {
            id = (System_String_o *)0x0;
            __this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
            x_00 = (UnityEngine_Object_o *)__this_00->parameters;
            if (x_00 != (UnityEngine_Object_o *)0x0) {
              id = (System_String_o *)0x0;
              parent = UnityEngine_GameObject__get_transform
                                 ((UnityEngine_GameObject_o *)x_00,(MethodInfo *)0x0);
              if (__this != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
                return;
              }
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9d3f == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Func_GisketchOverlayDefinition_string);
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayDefinition_FindById_GisketchOverlayDefini);
            il2cpp_runtime_helper_023445d0(&MethodInfo_String_FindDialog_b__9_0);
            il2cpp_runtime_helper_023445d0(&TypeInfo_c);
            g_data_057a9d3f = '\x01';
          }
          items = (System_Object_array *)x_00[2].klass;
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          else {
            getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
          }
          if (getId == (System_Func_T__string__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            getId = (System_Func_T__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_GisketchOverlayDefinition_string);
            System_Func_object__object____ctor();
            lVar1 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__string__o **)(lVar1 + 0x10) = getId;
            il2cpp_runtime_helper_022b4080(lVar1 + 0x10,getId);
          }
          Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_(items,id,getId,MethodInfo_GisketchOverlayDefinition_FindById_GisketchOverlayDefini);
          return;
        }
      }
      return;
    }
    if (0 < *(int *)&__this_00->name) {
      index = *(int *)&__this_00->name - 1;
      pMVar6 = (MethodInfo *)(ulong)index;
      instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      if ((instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) &&
         (bVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ContainsSelected(instance,pMVar6),
         (char)bVar2 == '\0')) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,pMVar6);
        return;
      }
    }
    return;
  }
  UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0(pUVar3,pUVar4,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_GameObject_o *)0x0;
  pUVar5 = selectable;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (selectable == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b52924;
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)selectable,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar4,12.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$DestroyObject
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3b52f50

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057a9cf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar1 == '\0') {
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDynamicPopover
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* root, UnityEngine_GameObject_o* anchor, bool focusOnOpen, bool matchAnchorWidth, float gap, bool animate, const MethodInfo* method);
// 0x3b53010

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root,UnityEngine_GameObject_o *anchor,
          bool_conflict focusOnOpen,bool_conflict matchAnchorWidth,float gap,bool_conflict animate,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  UnityEngine_GameObject_o *extraout_RAX;
  UnityEngine_GameObject_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *__this_00;
  undefined4 in_register_00000084;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000084,focusOnOpen);
  if (g_data_057a9cf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchOverlayDefinition);
    g_data_057a9cf5 = '\x01';
  }
  if (root == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pUVar2 = (UnityEngine_GameObject_o *)0x0;
  }
  else {
    pGVar1 = (__this->fields)._activePopover;
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,pGVar1,0,0,method_00);
    }
    overlay = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchOverlayDefinition);
    *(undefined2 *)&(overlay->fields).modal = 0x101;
    __this_00 = overlay;
    System_Object___ctor((Il2CppObject *)overlay,(MethodInfo *)0x0);
    if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      *(undefined2 *)&(__this_00->fields).modal = 0x101;
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    (overlay->fields).id = id;
    il2cpp_runtime_helper_022b4080(&overlay->fields,id);
    *(undefined1 *)&(overlay->fields).modal = 0;
    (overlay->fields).root = root;
    il2cpp_runtime_helper_022b4080(&(overlay->fields).root,root);
    pUVar2 = (UnityEngine_GameObject_o *)0x0;
    pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                       (__this,overlay,anchor,1,focusOnOpen & 0xff,0,matchAnchorWidth & 0xff,gap,
                        animate & 0xff,in_stack_ffffffffffffffa8);
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      pUVar2 = (pGVar1->fields)._ContentRoot_k__BackingField;
    }
  }
  return pUVar2;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ClosePopover
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool animate, const MethodInfo* method);
// 0x3b53150

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          bool_conflict animate,MethodInfo *method)

{
  System_String_Fields SVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  long lVar3;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_02;
  char cVar4;
  bool_conflict bVar5;
  int iVar6;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Building_GisketchView_o *inner;
  Il2CppObject *pIVar10;
  System_Object_array *pSVar11;
  MethodInfo *pMVar12;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_Vector3_array *fourCornersArray;
  ulong uVar13;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *pMVar14;
  float *pfVar15;
  undefined8 unaff_RBP;
  ulong uVar16;
  uint uVar17;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar18;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar19;
  MethodInfo *rect;
  MethodInfo **__this_04;
  MethodInfo *in_R8;
  UnityEngine_Vector2_Fields UVar20;
  UnityEngine_Vector2_Fields UVar21;
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qb_00;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  UnityEngine_Vector3_Fields worldPoint;
  UnityEngine_Vector3_o worldPoint_00;
  UnityEngine_Vector3_o worldPoint_01;
  UnityEngine_Vector2_Fields UStackY_138;
  UnityEngine_Vector2_Fields UStackY_130;
  undefined8 uStackY_128;
  float fStackY_114;
  UnityEngine_Vector2_Fields UStackY_110;
  undefined8 uStackY_108;
  float fStackY_100;
  float fStackY_fc;
  float fStackY_f8;
  float fStackY_f4;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGStackY_e8;
  MethodInfo *pMStackY_e0;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if ((__this->fields)._activePopover ==
      (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return 0;
  }
  pMVar14 = (MethodInfo *)0x0;
  pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)id;
  bVar5 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
label_03b53192:
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
              (__this,(__this->fields)._activePopover,0,animate & 0xff,in_R8);
    return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  }
  pGVar7 = (__this->fields)._activePopover;
  if (pGVar7 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    unaff_RBP = 0;
    bVar5 = System_String__op_Inequality((pGVar7->fields).Id,id,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return 0;
    }
    goto label_03b53192;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = extraout_RDX;
  if (g_data_057a9cf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    g_data_057a9cf6 = '\x01';
    pMVar12 = extraout_RDX_00;
  }
  pMVar9 = pMVar14;
  pGVar18 = pGVar19;
  pGVar7 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
                     ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pGVar19,
                      (System_String_o *)pMVar14,pMVar12);
  if (pGVar7 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return 0;
  }
  pSVar8 = (pGVar19->fields).title;
  if (pSVar8 != (System_String_o *)0x0) {
    SVar1 = pSVar8[2].fields;
    pMVar12 = extraout_RDX_01;
    if (SVar1 == (System_String_Fields)0x0) {
label_03b5324b:
      __this_00 = *(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o **)&(pSVar8->fields)._stringLength;
      if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
        return 0;
      }
      overlay = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog
                          (__this_00,(System_String_o *)pMVar14,pMVar12);
      pMVar9 = pMVar14;
    }
    else {
      pGVar18 = *(Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o **)((long)SVar1 + 0x40);
      pMVar9 = pMVar14;
      auVar26 = (**(code **)((long)SVar1 + 0x18))(pGVar18,pMVar14,*(undefined8 *)((long)SVar1 + 0x28));
      pMVar12 = auVar26._8_8_;
      overlay = auVar26._0_8_;
      if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
        pSVar8 = (pGVar19->fields).title;
        if (pSVar8 == (System_String_o *)0x0) goto label_03b53317;
        goto label_03b5324b;
      }
    }
    if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      return 0;
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
              ((pGVar7->fields)._ContentRoot_k__BackingField,pMVar9);
    __this_01 = (pGVar7->fields).Host;
    pGVar18 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pMVar9 = (MethodInfo *)UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      context = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)(pGVar19->fields).title;
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar18 = overlay;
      inner = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                        (overlay,(UnityEngine_Transform_o *)pMVar9,context,(MethodInfo *)0x0);
      if (inner != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
                  (overlay,(inner->fields)._Root_k__BackingField,(pGVar7->fields).HostRect,
                   (UnityEngine_GameObject_o *)0x0,0,0,0.0,in_stack_ffffffffffffffa0);
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__ReplaceContent
                  (pGVar7,inner,method_00);
        pMVar14 = (MethodInfo *)0x0;
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout
                  ((pGVar7->fields).Host,(MethodInfo *)0x0);
        bVar5 = (bool_conflict)CONCAT71((int7)((ulong)inner >> 8),1);
        if ((char)extraout_RDX != '\0') {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(pGVar7,pMVar14);
          return bVar5;
        }
        return bVar5;
      }
    }
  }
label_03b53317:
  il2cpp_runtime_helper_022b2c90();
  pMVar14 = pMVar9;
  pGVar19 = pGVar18;
  if (g_data_057a9cff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cff = '\x01';
  }
  uVar17 = (uint)pMVar14;
  pGVar2 = (pGVar18->fields).enter;
  if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) &&
     (lVar3 = *(long *)&(pGVar2->fields).duration, lVar3 != 0)) {
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    iVar6 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    if (0 < iVar6) {
      pGVar19 = *(Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o **)(lVar3 + 0x10);
      uVar17 = 0;
      System_Array__Clear((System_Array_o *)pGVar19,0,iVar6,(MethodInfo *)0x0);
    }
    if (pMVar9 == (MethodInfo *)0x0) {
      (pGVar18->fields).exit = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
      bVar5 = il2cpp_runtime_helper_022b4080(&(pGVar18->fields).exit,0);
      return bVar5;
    }
    pGVar2 = (pGVar18->fields).enter;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      __this_02 = *(System_Collections_Generic_List_GisketchMotionTarget__o **)&(pGVar2->fields).duration;
      pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
      if (__this_02 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
        System_Collections_Generic_List_GisketchMotionTarget___AddRange
                  (__this_02,(System_Collections_Generic_IEnumerable_T__o *)pMVar9->klass,MethodInfo_Void_AddRange);
        (pGVar18->fields).exit = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pMVar9->name;
        bVar5 = il2cpp_runtime_helper_022b4080(&(pGVar18->fields).exit);
        return bVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ced == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    g_data_057a9ced = '\x01';
  }
  pMVar14 = *(MethodInfo **)&(pGVar19->fields).modal;
  if (pMVar14 != (MethodInfo *)0x0) {
    if ((0 < *(int *)&pMVar14->name) &&
       (pIVar10 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pMVar14,*(int *)&pMVar14->name + -1,
                             MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item), pIVar10 != (Il2CppObject *)0x0)) {
      bVar5 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
                        ((UnityEngine_GameObject_o *)pIVar10[3].klass,uVar17 & 0xff,(MethodInfo *)0x0);
      return bVar5;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = (MethodInfo *)0x0;
  pMVar9 = (MethodInfo *)0x0;
  rect = pMVar14;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pMVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
label_03b535a7:
    return (bool_conflict)pMVar12;
  }
  if (pMVar14 != (MethodInfo *)0x0) {
    pMVar9 = (MethodInfo *)0x0;
    pSVar11 = UnityEngine_GameObject__GetComponentsInChildren_object_
                        ((UnityEngine_GameObject_o *)pMVar14,0,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    rect = pMVar14;
    if (pSVar11 != (System_Object_array *)0x0) {
      if ((int)pSVar11->max_length < 1) {
label_03b535a4:
        pMVar12 = (MethodInfo *)0x0;
        goto label_03b535a7;
      }
      pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
      if ((pSVar11->max_length & 0xffffffff) != 0) {
        do {
          pMVar12 = (MethodInfo *)pSVar11->m_Items[(long)pGVar19];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar9 = (MethodInfo *)0x0;
          pMVar14 = pMVar12;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pMVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            rect = pMVar14;
            if (pMVar12 == (MethodInfo *)0x0) goto label_03b535bb;
            pMVar9 = (((System_Collections_Generic_List_object__c *)pMVar12->methodPointer)->vtable).
                     _9_unknown.method;
            pMVar14 = pMVar12;
            cVar4 = (*(((System_Collections_Generic_List_object__c *)pMVar12->methodPointer)->vtable).
                      _9_unknown.methodPtr)();
            if (cVar4 != '\0') {
              pMVar9 = (((System_Collections_Generic_List_object__c *)pMVar12->methodPointer)->vtable).
                       _24_System_Collections_IList_get_IsFixedSize.method;
              pMVar14 = pMVar12;
              cVar4 = (*(((System_Collections_Generic_List_object__c *)pMVar12->methodPointer)->vtable).
                        _24_System_Collections_IList_get_IsFixedSize.methodPtr)();
              if (cVar4 != '\0') goto label_03b535a7;
            }
          }
          pGVar19 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)((long)&pGVar19->klass + 1);
          uVar17 = (uint)pSVar11->max_length;
          if ((long)(int)uVar17 <= (long)pGVar19) goto label_03b535a4;
        } while (pGVar19 < (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)(ulong)uVar17);
      }
      il2cpp_runtime_helper_022b2ca0();
      rect = pMVar14;
    }
  }
label_03b535bb:
  il2cpp_runtime_helper_022b2c90();
  __this_04 = (MethodInfo **)rect;
  pGStackY_e8 = pGVar19;
  pMStackY_e0 = pMVar12;
  if (g_data_057a9cfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    __this_04 = &TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cfb = '\x01';
  }
  if (pMVar9 != (MethodInfo *)0x0) {
    pMVar12 = (MethodInfo *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar9,(MethodInfo *)0x0);
    pMVar14 = (MethodInfo *)0x0;
    if ((pMVar12 != (MethodInfo *)0x0) &&
       (pMVar14 = (MethodInfo *)0x0,
       (System_Collections_Generic_List_object__c *)pMVar12->methodPointer == TypeInfo_RectTransform)) {
      pMVar14 = pMVar12;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pMVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      __this_04 = (MethodInfo **)TypeInfo_Vector3;
      fourCornersArray = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
      if ((pMVar14 != (MethodInfo *)0x0) &&
         (UnityEngine_RectTransform__GetWorldCorners
                    ((UnityEngine_RectTransform_o *)pMVar14,fourCornersArray,(MethodInfo *)0x0),
         __this_04 = (MethodInfo **)pMVar14, fourCornersArray != (UnityEngine_Vector3_array *)0x0)) {
        fVar23 = fStackY_fc;
        if ((int)fourCornersArray->max_length != 0) {
          UVar20.x = fourCornersArray->m_Items[0].fields.x;
          UVar20.y = fourCornersArray->m_Items[0].fields.y;
          fVar23 = fourCornersArray->m_Items[0].fields.z;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            uStackY_128 = 0;
            UStackY_130 = UVar20;
            fStackY_100 = fVar23;
            il2cpp_runtime_helper_02337ed0();
            UVar20 = UStackY_130;
            fVar23 = fStackY_100;
          }
          worldPoint_00.fields.z = fVar23;
          worldPoint_00.fields.x = UVar20.x;
          worldPoint_00.fields.y = UVar20.y;
          UVar20 = (UnityEngine_Vector2_Fields)
                   UnityEngine_RectTransformUtility__WorldToScreenPoint
                             ((UnityEngine_Camera_o *)0x0,worldPoint_00,(MethodInfo *)0x0);
          uVar22 = extraout_XMM0_Qb;
          if (g_data_057a9cfd == '\0') {
            UStackY_130 = UVar20;
            uStackY_128 = extraout_XMM0_Qb;
            il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
            g_data_057a9cfd = '\x01';
            UVar20 = UStackY_130;
            uVar22 = uStackY_128;
          }
          UStackY_138.x = 0.0;
          UStackY_138.y = 0.0;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            UStackY_130 = UVar20;
            uStackY_128 = uVar22;
            il2cpp_runtime_helper_02337ed0();
            UVar20 = UStackY_130;
          }
          pMVar14 = rect;
          UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar20,
                     (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStackY_138,(MethodInfo *)0x0);
          iVar6 = (int)fourCornersArray->max_length;
          if (iVar6 < 2) {
            return iVar6;
          }
          uVar13 = fourCornersArray->max_length & 0xffffffff;
          pfVar15 = &fourCornersArray->m_Items[1].fields.z;
          uVar16 = 1;
          fStackY_fc = 0.0;
          UStackY_130.x = UStackY_138.x;
          fVar24 = UStackY_138.y;
          fVar25 = 0.0;
          fStackY_100 = UStackY_138.x;
          fVar23 = UStackY_138.y;
          while( true ) {
            UStackY_130.y = fVar24;
            uStackY_128 = CONCAT44(fVar25,fVar25);
            fStackY_f8 = fStackY_fc;
            fStackY_f4 = fStackY_fc;
            if (uVar13 <= uVar16) break;
            UVar21.x = ((UnityEngine_Vector3_Fields *)(pfVar15 + -2))->x;
            UVar21.y = ((UnityEngine_Vector3_Fields *)(pfVar15 + -2))->y;
            fVar24 = *pfVar15;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              uStackY_108 = 0;
              fStackY_114 = *pfVar15;
              UStackY_110 = UVar21;
              fStackY_fc = fVar23;
              fStackY_f4 = fStackY_f8;
              il2cpp_runtime_helper_02337ed0();
              UVar21 = UStackY_110;
              fVar23 = fStackY_fc;
              fVar24 = fStackY_114;
            }
            fStackY_fc = fVar23;
            worldPoint_01.fields.z = fVar24;
            worldPoint_01.fields.x = UVar21.x;
            worldPoint_01.fields.y = UVar21.y;
            UVar20 = (UnityEngine_Vector2_Fields)
                     UnityEngine_RectTransformUtility__WorldToScreenPoint
                               ((UnityEngine_Camera_o *)0x0,worldPoint_01,(MethodInfo *)0x0);
            uVar22 = extraout_XMM0_Qb_00;
            if (g_data_057a9cfd == '\0') {
              UStackY_110 = UVar20;
              uStackY_108 = extraout_XMM0_Qb_00;
              il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
              g_data_057a9cfd = '\x01';
              UVar20 = UStackY_110;
              uVar22 = uStackY_108;
            }
            UStackY_138.x = 0.0;
            UStackY_138.y = 0.0;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              UStackY_110 = UVar20;
              uStackY_108 = uVar22;
              il2cpp_runtime_helper_02337ed0();
              UVar20 = UStackY_110;
            }
            pMVar14 = rect;
            UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar20,
                       (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStackY_138,(MethodInfo *)0x0);
            fVar23 = UStackY_138.x;
            if (fVar23 <= UStackY_130.x) {
              UStackY_130.x = fVar23;
            }
            if (fStackY_100 <= fVar23) {
              fStackY_100 = fVar23;
            }
            fVar25 = UStackY_138.y;
            fVar24 = UStackY_130.y;
            if (fVar25 <= UStackY_130.y) {
              fVar24 = fVar25;
            }
            fVar23 = fStackY_fc;
            if (fStackY_fc <= fVar25) {
              fVar23 = fVar25;
            }
            uVar16 = uVar16 + 1;
            uVar17 = (uint)fourCornersArray->max_length;
            uVar13 = (ulong)uVar17;
            pfVar15 = pfVar15 + 3;
            fVar25 = UStackY_130.y;
            if ((long)(int)uVar17 <= (long)uVar16) {
              return uVar17;
            }
          }
        }
        fStackY_fc = fVar23;
        il2cpp_runtime_helper_022b2ca0();
        __this_04 = (MethodInfo **)pMVar14;
      }
    }
    else {
      __this_03 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pMVar9,(MethodInfo *)0x0);
      __this_04 = (MethodInfo **)pMVar9;
      if (__this_03 != (UnityEngine_Transform_o *)0x0) {
        worldPoint = (UnityEngine_Vector3_Fields)
                     UnityEngine_Transform__get_position(__this_03,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          UStackY_130 = worldPoint._0_8_;
          fStackY_100 = worldPoint.z;
          il2cpp_runtime_helper_02337ed0();
          worldPoint.z = fStackY_100;
          worldPoint.x = UStackY_130.x;
          worldPoint.y = UStackY_130.y;
        }
        UVar20 = (UnityEngine_Vector2_Fields)
                 UnityEngine_RectTransformUtility__WorldToScreenPoint
                           ((UnityEngine_Camera_o *)0x0,(UnityEngine_Vector3_o)worldPoint,(MethodInfo *)0x0);
        if (g_data_057a9cfd == '\0') {
          UStackY_130 = UVar20;
          il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
          g_data_057a9cfd = '\x01';
          UVar20 = UStackY_130;
        }
        UStackY_138.x = 0.0;
        UStackY_138.y = 0.0;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          UStackY_130 = UVar20;
          il2cpp_runtime_helper_02337ed0();
          UVar20 = UStackY_130;
        }
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar20,
                   (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStackY_138,(MethodInfo *)0x0);
        if (g_data_057a694c == '\0') {
          UStackY_130 = UStackY_138;
          uStackY_128 = 0;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        return (bool_conflict)*(undefined8 *)(TypeInfo_Vector2 + 0xb8);
      }
    }
  }
  bVar5 = il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)__this_04 != (MethodInfo *)0x0) {
    UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_04,(MethodInfo *)0x0);
    return bVar5;
  }
  bVar5 = il2cpp_runtime_helper_022b2c90();
  return bVar5;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$RefreshDialogContent
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__RefreshDialogContent (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool focusOnRefresh, const MethodInfo* method);
// 0x3b531c0

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__RefreshDialogContent
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          bool_conflict focusOnRefresh,MethodInfo *method)

{
  System_Func_string__GisketchOverlayDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  long lVar3;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_02;
  char cVar4;
  bool_conflict bVar5;
  int iVar6;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this_03;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar7;
  MethodInfo *pMVar8;
  Gisketch_Aottg2UI_Building_GisketchView_o *inner;
  Il2CppObject *pIVar9;
  System_Object_array *pSVar10;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_Vector3_array *fourCornersArray;
  ulong uVar11;
  undefined4 in_register_00000014;
  MethodInfo *pMVar12;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float *pfVar13;
  ulong uVar14;
  uint uVar15;
  MethodInfo *__this_05;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar16;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar17;
  MethodInfo *rect;
  MethodInfo **__this_06;
  UnityEngine_Vector2_Fields UVar18;
  UnityEngine_Vector2_Fields UVar19;
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar20;
  undefined8 extraout_XMM0_Qb_00;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  UnityEngine_Vector3_Fields worldPoint;
  UnityEngine_Vector3_o worldPoint_00;
  UnityEngine_Vector3_o worldPoint_01;
  UnityEngine_Vector2_Fields UStackY_110;
  UnityEngine_Vector2_Fields UStackY_108;
  undefined8 uStackY_100;
  float fStackY_ec;
  UnityEngine_Vector2_Fields UStackY_e8;
  undefined8 uStackY_e0;
  float fStackY_d8;
  float fStackY_d4;
  float fStackY_d0;
  float fStackY_cc;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGStackY_c0;
  MethodInfo *pMStackY_b8;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  pMVar12 = (MethodInfo *)CONCAT44(in_register_00000014,focusOnRefresh);
  if (g_data_057a9cf6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    g_data_057a9cf6 = '\x01';
    pMVar12 = extraout_RDX;
  }
  pMVar8 = (MethodInfo *)id;
  pGVar16 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)__this;
  __this_03 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this,id,pMVar12);
  if (__this_03 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return 0;
  }
  pGVar7 = (__this->fields)._context;
  if (pGVar7 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    pSVar1 = (pGVar7->fields).DialogResolver;
    pMVar12 = extraout_RDX_00;
    if (pSVar1 == (System_Func_string__GisketchOverlayDefinition__o *)0x0) {
label_03b5324b:
      __this_00 = (pGVar7->fields).Manifest;
      if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
        return 0;
      }
      pGVar17 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog(__this_00,id,pMVar12);
      pMVar8 = (MethodInfo *)id;
    }
    else {
      pGVar16 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)(pSVar1->fields).method_code;
      pMVar8 = (MethodInfo *)id;
      auVar24 = (*(code *)(pSVar1->fields).invoke_impl)(pGVar16,id,(pSVar1->fields).method);
      pMVar12 = auVar24._8_8_;
      pGVar17 = auVar24._0_8_;
      if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
        pGVar7 = (__this->fields)._context;
        if (pGVar7 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_03b53317;
        goto label_03b5324b;
      }
    }
    if (pGVar17 == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      return 0;
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
              ((__this_03->fields)._ContentRoot_k__BackingField,pMVar8);
    __this_01 = (__this_03->fields).Host;
    pGVar16 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      pMVar8 = (MethodInfo *)UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      pGVar7 = (__this->fields)._context;
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar16 = pGVar17;
      inner = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                        (pGVar17,(UnityEngine_Transform_o *)pMVar8,pGVar7,(MethodInfo *)0x0);
      if (inner != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
                  (pGVar17,(inner->fields)._Root_k__BackingField,(__this_03->fields).HostRect,
                   (UnityEngine_GameObject_o *)0x0,0,0,0.0,in_stack_ffffffffffffffc8);
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__ReplaceContent
                  (__this_03,inner,method_00);
        pMVar12 = (MethodInfo *)0x0;
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout
                  ((__this_03->fields).Host,(MethodInfo *)0x0);
        bVar5 = (bool_conflict)CONCAT71((int7)((ulong)inner >> 8),1);
        if ((char)focusOnRefresh != '\0') {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(__this_03,pMVar12);
          return bVar5;
        }
        return bVar5;
      }
    }
  }
label_03b53317:
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar8;
  pGVar17 = pGVar16;
  if (g_data_057a9cff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddRange);
    pGVar17 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)&MethodInfo_Void_Clear;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cff = '\x01';
  }
  uVar15 = (uint)pMVar12;
  pGVar2 = (pGVar16->fields).enter;
  if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) &&
     (lVar3 = *(long *)&(pGVar2->fields).duration, lVar3 != 0)) {
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    iVar6 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    if (0 < iVar6) {
      pGVar17 = *(Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o **)(lVar3 + 0x10);
      uVar15 = 0;
      System_Array__Clear((System_Array_o *)pGVar17,0,iVar6,(MethodInfo *)0x0);
    }
    if (pMVar8 == (MethodInfo *)0x0) {
      (pGVar16->fields).exit = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
      bVar5 = il2cpp_runtime_helper_022b4080(&(pGVar16->fields).exit,0);
      return bVar5;
    }
    pGVar2 = (pGVar16->fields).enter;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      __this_02 = *(System_Collections_Generic_List_GisketchMotionTarget__o **)&(pGVar2->fields).duration;
      pGVar17 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
      if (__this_02 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
        System_Collections_Generic_List_GisketchMotionTarget___AddRange
                  (__this_02,(System_Collections_Generic_IEnumerable_T__o *)pMVar8->klass,MethodInfo_Void_AddRange);
        (pGVar16->fields).exit = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)pMVar8->name;
        bVar5 = il2cpp_runtime_helper_022b4080(&(pGVar16->fields).exit);
        return bVar5;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ced == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    g_data_057a9ced = '\x01';
  }
  pMVar12 = *(MethodInfo **)&(pGVar17->fields).modal;
  if (pMVar12 != (MethodInfo *)0x0) {
    if ((0 < *(int *)&pMVar12->name) &&
       (pIVar9 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pMVar12,*(int *)&pMVar12->name + -1,
                            MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item), pIVar9 != (Il2CppObject *)0x0)) {
      bVar5 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
                        ((UnityEngine_GameObject_o *)pIVar9[3].klass,uVar15 & 0xff,(MethodInfo *)0x0);
      return bVar5;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = (MethodInfo *)0x0;
  __this_05 = (MethodInfo *)0x0;
  rect = pMVar12;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pMVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
label_03b535a7:
    return (bool_conflict)pMVar8;
  }
  if (pMVar12 != (MethodInfo *)0x0) {
    __this_05 = (MethodInfo *)0x0;
    pSVar10 = UnityEngine_GameObject__GetComponentsInChildren_object_
                        ((UnityEngine_GameObject_o *)pMVar12,0,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    rect = pMVar12;
    if (pSVar10 != (System_Object_array *)0x0) {
      if ((int)pSVar10->max_length < 1) {
label_03b535a4:
        pMVar8 = (MethodInfo *)0x0;
        goto label_03b535a7;
      }
      pGVar17 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
      if ((pSVar10->max_length & 0xffffffff) != 0) {
        do {
          pMVar8 = (MethodInfo *)pSVar10->m_Items[(long)pGVar17];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_05 = (MethodInfo *)0x0;
          pMVar12 = pMVar8;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            rect = pMVar12;
            if (pMVar8 == (MethodInfo *)0x0) goto label_03b535bb;
            __this_05 = (((System_Collections_Generic_List_object__c *)pMVar8->methodPointer)->vtable).
                        _9_unknown.method;
            pMVar12 = pMVar8;
            cVar4 = (*(((System_Collections_Generic_List_object__c *)pMVar8->methodPointer)->vtable).
                      _9_unknown.methodPtr)();
            if (cVar4 != '\0') {
              __this_05 = (((System_Collections_Generic_List_object__c *)pMVar8->methodPointer)->vtable).
                          _24_System_Collections_IList_get_IsFixedSize.method;
              pMVar12 = pMVar8;
              cVar4 = (*(((System_Collections_Generic_List_object__c *)pMVar8->methodPointer)->vtable).
                        _24_System_Collections_IList_get_IsFixedSize.methodPtr)();
              if (cVar4 != '\0') goto label_03b535a7;
            }
          }
          pGVar17 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)((long)&pGVar17->klass + 1);
          uVar15 = (uint)pSVar10->max_length;
          if ((long)(int)uVar15 <= (long)pGVar17) goto label_03b535a4;
        } while (pGVar17 < (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)(ulong)uVar15);
      }
      il2cpp_runtime_helper_022b2ca0();
      rect = pMVar12;
    }
  }
label_03b535bb:
  il2cpp_runtime_helper_022b2c90();
  __this_06 = (MethodInfo **)rect;
  pGStackY_c0 = pGVar17;
  pMStackY_b8 = pMVar8;
  if (g_data_057a9cfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    __this_06 = &TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cfb = '\x01';
  }
  if (__this_05 != (MethodInfo *)0x0) {
    pMVar8 = (MethodInfo *)
             UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_05,(MethodInfo *)0x0);
    pMVar12 = (MethodInfo *)0x0;
    if ((pMVar8 != (MethodInfo *)0x0) &&
       (pMVar12 = (MethodInfo *)0x0,
       (System_Collections_Generic_List_object__c *)pMVar8->methodPointer == TypeInfo_RectTransform)) {
      pMVar12 = pMVar8;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pMVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      __this_06 = (MethodInfo **)TypeInfo_Vector3;
      fourCornersArray = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
      if ((pMVar12 != (MethodInfo *)0x0) &&
         (UnityEngine_RectTransform__GetWorldCorners
                    ((UnityEngine_RectTransform_o *)pMVar12,fourCornersArray,(MethodInfo *)0x0),
         __this_06 = (MethodInfo **)pMVar12, fourCornersArray != (UnityEngine_Vector3_array *)0x0)) {
        fVar21 = fStackY_d4;
        if ((int)fourCornersArray->max_length != 0) {
          UVar18.x = fourCornersArray->m_Items[0].fields.x;
          UVar18.y = fourCornersArray->m_Items[0].fields.y;
          fVar21 = fourCornersArray->m_Items[0].fields.z;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            uStackY_100 = 0;
            UStackY_108 = UVar18;
            fStackY_d8 = fVar21;
            il2cpp_runtime_helper_02337ed0();
            UVar18 = UStackY_108;
            fVar21 = fStackY_d8;
          }
          worldPoint_00.fields.z = fVar21;
          worldPoint_00.fields.x = UVar18.x;
          worldPoint_00.fields.y = UVar18.y;
          UVar18 = (UnityEngine_Vector2_Fields)
                   UnityEngine_RectTransformUtility__WorldToScreenPoint
                             ((UnityEngine_Camera_o *)0x0,worldPoint_00,(MethodInfo *)0x0);
          uVar20 = extraout_XMM0_Qb;
          if (g_data_057a9cfd == '\0') {
            UStackY_108 = UVar18;
            uStackY_100 = extraout_XMM0_Qb;
            il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
            g_data_057a9cfd = '\x01';
            UVar18 = UStackY_108;
            uVar20 = uStackY_100;
          }
          UStackY_110.x = 0.0;
          UStackY_110.y = 0.0;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            UStackY_108 = UVar18;
            uStackY_100 = uVar20;
            il2cpp_runtime_helper_02337ed0();
            UVar18 = UStackY_108;
          }
          pMVar12 = rect;
          UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar18,
                     (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStackY_110,(MethodInfo *)0x0);
          iVar6 = (int)fourCornersArray->max_length;
          if (iVar6 < 2) {
            return iVar6;
          }
          uVar11 = fourCornersArray->max_length & 0xffffffff;
          pfVar13 = &fourCornersArray->m_Items[1].fields.z;
          uVar14 = 1;
          fStackY_d4 = 0.0;
          UStackY_108.x = UStackY_110.x;
          fVar22 = UStackY_110.y;
          fVar23 = 0.0;
          fStackY_d8 = UStackY_110.x;
          fVar21 = UStackY_110.y;
          while( true ) {
            UStackY_108.y = fVar22;
            uStackY_100 = CONCAT44(fVar23,fVar23);
            fStackY_d0 = fStackY_d4;
            fStackY_cc = fStackY_d4;
            if (uVar11 <= uVar14) break;
            UVar19.x = ((UnityEngine_Vector3_Fields *)(pfVar13 + -2))->x;
            UVar19.y = ((UnityEngine_Vector3_Fields *)(pfVar13 + -2))->y;
            fVar22 = *pfVar13;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              uStackY_e0 = 0;
              fStackY_ec = *pfVar13;
              UStackY_e8 = UVar19;
              fStackY_d4 = fVar21;
              fStackY_cc = fStackY_d0;
              il2cpp_runtime_helper_02337ed0();
              UVar19 = UStackY_e8;
              fVar21 = fStackY_d4;
              fVar22 = fStackY_ec;
            }
            fStackY_d4 = fVar21;
            worldPoint_01.fields.z = fVar22;
            worldPoint_01.fields.x = UVar19.x;
            worldPoint_01.fields.y = UVar19.y;
            UVar18 = (UnityEngine_Vector2_Fields)
                     UnityEngine_RectTransformUtility__WorldToScreenPoint
                               ((UnityEngine_Camera_o *)0x0,worldPoint_01,(MethodInfo *)0x0);
            uVar20 = extraout_XMM0_Qb_00;
            if (g_data_057a9cfd == '\0') {
              UStackY_e8 = UVar18;
              uStackY_e0 = extraout_XMM0_Qb_00;
              il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
              g_data_057a9cfd = '\x01';
              UVar18 = UStackY_e8;
              uVar20 = uStackY_e0;
            }
            UStackY_110.x = 0.0;
            UStackY_110.y = 0.0;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              UStackY_e8 = UVar18;
              uStackY_e0 = uVar20;
              il2cpp_runtime_helper_02337ed0();
              UVar18 = UStackY_e8;
            }
            pMVar12 = rect;
            UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar18,
                       (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStackY_110,(MethodInfo *)0x0);
            fVar21 = UStackY_110.x;
            if (fVar21 <= UStackY_108.x) {
              UStackY_108.x = fVar21;
            }
            if (fStackY_d8 <= fVar21) {
              fStackY_d8 = fVar21;
            }
            fVar23 = UStackY_110.y;
            fVar22 = UStackY_108.y;
            if (fVar23 <= UStackY_108.y) {
              fVar22 = fVar23;
            }
            fVar21 = fStackY_d4;
            if (fStackY_d4 <= fVar23) {
              fVar21 = fVar23;
            }
            uVar14 = uVar14 + 1;
            uVar15 = (uint)fourCornersArray->max_length;
            uVar11 = (ulong)uVar15;
            pfVar13 = pfVar13 + 3;
            fVar23 = UStackY_108.y;
            if ((long)(int)uVar15 <= (long)uVar14) {
              return uVar15;
            }
          }
        }
        fStackY_d4 = fVar21;
        il2cpp_runtime_helper_022b2ca0();
        __this_06 = (MethodInfo **)pMVar12;
      }
    }
    else {
      __this_04 = UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)__this_05,(MethodInfo *)0x0);
      __this_06 = (MethodInfo **)__this_05;
      if (__this_04 != (UnityEngine_Transform_o *)0x0) {
        worldPoint = (UnityEngine_Vector3_Fields)
                     UnityEngine_Transform__get_position(__this_04,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          UStackY_108 = worldPoint._0_8_;
          fStackY_d8 = worldPoint.z;
          il2cpp_runtime_helper_02337ed0();
          worldPoint.z = fStackY_d8;
          worldPoint.x = UStackY_108.x;
          worldPoint.y = UStackY_108.y;
        }
        UVar18 = (UnityEngine_Vector2_Fields)
                 UnityEngine_RectTransformUtility__WorldToScreenPoint
                           ((UnityEngine_Camera_o *)0x0,(UnityEngine_Vector3_o)worldPoint,(MethodInfo *)0x0);
        if (g_data_057a9cfd == '\0') {
          UStackY_108 = UVar18;
          il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
          g_data_057a9cfd = '\x01';
          UVar18 = UStackY_108;
        }
        UStackY_110.x = 0.0;
        UStackY_110.y = 0.0;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          UStackY_108 = UVar18;
          il2cpp_runtime_helper_02337ed0();
          UVar18 = UStackY_108;
        }
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar18,
                   (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStackY_110,(MethodInfo *)0x0);
        if (g_data_057a694c == '\0') {
          UStackY_108 = UStackY_110;
          uStackY_100 = 0;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        return (bool_conflict)*(undefined8 *)(TypeInfo_Vector2 + 0xb8);
      }
    }
  }
  bVar5 = il2cpp_runtime_helper_022b2c90();
  if ((MethodInfo *)__this_06 != (MethodInfo *)0x0) {
    UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_06,(MethodInfo *)0x0);
    return bVar5;
  }
  bVar5 = il2cpp_runtime_helper_022b2c90();
  return bVar5;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CycleFocus
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CycleFocus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, bool backwards, const MethodInfo* method);
// 0x3b53400

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CycleFocus
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,bool_conflict backwards,
          MethodInfo *method)

{
  uint uVar1;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  Il2CppObject *pIVar5;
  System_Object_array *pSVar6;
  MethodInfo *pMVar7;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_array *fourCornersArray;
  ulong uVar8;
  MethodInfo *pMVar9;
  float *pfVar10;
  ulong uVar11;
  MethodInfo *__this_01;
  MethodInfo *rect;
  MethodInfo **__this_02;
  UnityEngine_Vector2_Fields UVar12;
  UnityEngine_Vector2_Fields UVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qb_00;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_Fields worldPoint;
  UnityEngine_Vector3_o worldPoint_00;
  UnityEngine_Vector3_o worldPoint_01;
  UnityEngine_Vector2_Fields UStack_c0;
  UnityEngine_Vector2_Fields UStack_b8;
  undefined8 uStack_b0;
  float fStack_9c;
  UnityEngine_Vector2_Fields UStack_98;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGStack_70;
  MethodInfo *pMStack_68;
  
  if (g_data_057a9ced == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    g_data_057a9ced = '\x01';
  }
  pMVar9 = (MethodInfo *)(__this->fields)._stack;
  if (pMVar9 != (MethodInfo *)0x0) {
    if ((0 < *(int *)&pMVar9->name) &&
       (pIVar5 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)pMVar9,*(int *)&pMVar9->name + -1,
                            MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item), pIVar5 != (Il2CppObject *)0x0)) {
      bVar3 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
                        ((UnityEngine_GameObject_o *)pIVar5[3].klass,backwards & 0xff,(MethodInfo *)0x0);
      return bVar3;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  __this_01 = (MethodInfo *)0x0;
  rect = pMVar9;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (pMVar9 != (MethodInfo *)0x0) {
      __this_01 = (MethodInfo *)0x0;
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object_
                         ((UnityEngine_GameObject_o *)pMVar9,0,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
      rect = pMVar9;
      if (pSVar6 != (System_Object_array *)0x0) {
        if ((int)pSVar6->max_length < 1) {
label_03b535a4:
          pMVar7 = (MethodInfo *)0x0;
          goto label_03b535a7;
        }
        __this = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0;
        if ((pSVar6->max_length & 0xffffffff) != 0) {
          do {
            pMVar7 = (MethodInfo *)pSVar6->m_Items[(long)__this];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            __this_01 = (MethodInfo *)0x0;
            pMVar9 = pMVar7;
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pMVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              rect = pMVar9;
              if (pMVar7 == (MethodInfo *)0x0) goto label_03b535bb;
              __this_01 = (((System_Collections_Generic_List_object__c *)pMVar7->methodPointer)->vtable).
                          _9_unknown.method;
              pMVar9 = pMVar7;
              cVar2 = (*(((System_Collections_Generic_List_object__c *)pMVar7->methodPointer)->vtable).
                        _9_unknown.methodPtr)();
              if (cVar2 != '\0') {
                __this_01 = (((System_Collections_Generic_List_object__c *)pMVar7->methodPointer)->vtable).
                            _24_System_Collections_IList_get_IsFixedSize.method;
                pMVar9 = pMVar7;
                cVar2 = (*(((System_Collections_Generic_List_object__c *)pMVar7->methodPointer)->vtable).
                          _24_System_Collections_IList_get_IsFixedSize.methodPtr)();
                if (cVar2 != '\0') goto label_03b535a7;
              }
            }
            __this = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)((long)&__this->klass + 1);
            uVar1 = (uint)pSVar6->max_length;
            if ((long)(int)uVar1 <= (long)__this) goto label_03b535a4;
          } while (__this < (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)(ulong)uVar1);
        }
        il2cpp_runtime_helper_022b2ca0();
        rect = pMVar9;
      }
    }
label_03b535bb:
    il2cpp_runtime_helper_022b2c90();
    __this_02 = (MethodInfo **)rect;
    pGStack_70 = __this;
    pMStack_68 = pMVar7;
    if (g_data_057a9cfb == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
      il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
      __this_02 = &TypeInfo_Vector3;
      il2cpp_runtime_helper_023445d0();
      g_data_057a9cfb = '\x01';
    }
    if (__this_01 != (MethodInfo *)0x0) {
      pMVar7 = (MethodInfo *)
               UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
      pMVar9 = (MethodInfo *)0x0;
      if ((pMVar7 != (MethodInfo *)0x0) &&
         (pMVar9 = (MethodInfo *)0x0,
         (System_Collections_Generic_List_object__c *)pMVar7->methodPointer == TypeInfo_RectTransform)) {
        pMVar9 = pMVar7;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        __this_02 = (MethodInfo **)TypeInfo_Vector3;
        fourCornersArray = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
        if ((pMVar9 != (MethodInfo *)0x0) &&
           (UnityEngine_RectTransform__GetWorldCorners
                      ((UnityEngine_RectTransform_o *)pMVar9,fourCornersArray,(MethodInfo *)0x0),
           __this_02 = (MethodInfo **)pMVar9, fourCornersArray != (UnityEngine_Vector3_array *)0x0)) {
          fVar15 = fStack_84;
          if ((int)fourCornersArray->max_length != 0) {
            UVar12.x = fourCornersArray->m_Items[0].fields.x;
            UVar12.y = fourCornersArray->m_Items[0].fields.y;
            fVar15 = fourCornersArray->m_Items[0].fields.z;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              uStack_b0 = 0;
              UStack_b8 = UVar12;
              fStack_88 = fVar15;
              il2cpp_runtime_helper_02337ed0();
              UVar12 = UStack_b8;
              fVar15 = fStack_88;
            }
            worldPoint_00.fields.z = fVar15;
            worldPoint_00.fields.x = UVar12.x;
            worldPoint_00.fields.y = UVar12.y;
            UVar12 = (UnityEngine_Vector2_Fields)
                     UnityEngine_RectTransformUtility__WorldToScreenPoint
                               ((UnityEngine_Camera_o *)0x0,worldPoint_00,(MethodInfo *)0x0);
            uVar14 = extraout_XMM0_Qb;
            if (g_data_057a9cfd == '\0') {
              UStack_b8 = UVar12;
              uStack_b0 = extraout_XMM0_Qb;
              il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
              g_data_057a9cfd = '\x01';
              UVar12 = UStack_b8;
              uVar14 = uStack_b0;
            }
            UStack_c0.x = 0.0;
            UStack_c0.y = 0.0;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              UStack_b8 = UVar12;
              uStack_b0 = uVar14;
              il2cpp_runtime_helper_02337ed0();
              UVar12 = UStack_b8;
            }
            pMVar9 = rect;
            UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar12,
                       (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStack_c0,(MethodInfo *)0x0);
            iVar4 = (int)fourCornersArray->max_length;
            if (iVar4 < 2) {
              return iVar4;
            }
            uVar8 = fourCornersArray->max_length & 0xffffffff;
            pfVar10 = &fourCornersArray->m_Items[1].fields.z;
            uVar11 = 1;
            fStack_84 = 0.0;
            UStack_b8.x = UStack_c0.x;
            fVar16 = UStack_c0.y;
            fVar17 = 0.0;
            fStack_88 = UStack_c0.x;
            fVar15 = UStack_c0.y;
            while( true ) {
              UStack_b8.y = fVar16;
              uStack_b0 = CONCAT44(fVar17,fVar17);
              fStack_80 = fStack_84;
              fStack_7c = fStack_84;
              if (uVar8 <= uVar11) break;
              UVar13.x = ((UnityEngine_Vector3_Fields *)(pfVar10 + -2))->x;
              UVar13.y = ((UnityEngine_Vector3_Fields *)(pfVar10 + -2))->y;
              fVar16 = *pfVar10;
              if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                uStack_90 = 0;
                fStack_9c = *pfVar10;
                UStack_98 = UVar13;
                fStack_84 = fVar15;
                fStack_7c = fStack_80;
                il2cpp_runtime_helper_02337ed0();
                UVar13 = UStack_98;
                fVar15 = fStack_84;
                fVar16 = fStack_9c;
              }
              fStack_84 = fVar15;
              worldPoint_01.fields.z = fVar16;
              worldPoint_01.fields.x = UVar13.x;
              worldPoint_01.fields.y = UVar13.y;
              UVar12 = (UnityEngine_Vector2_Fields)
                       UnityEngine_RectTransformUtility__WorldToScreenPoint
                                 ((UnityEngine_Camera_o *)0x0,worldPoint_01,(MethodInfo *)0x0);
              uVar14 = extraout_XMM0_Qb_00;
              if (g_data_057a9cfd == '\0') {
                UStack_98 = UVar12;
                uStack_90 = extraout_XMM0_Qb_00;
                il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                g_data_057a9cfd = '\x01';
                UVar12 = UStack_98;
                uVar14 = uStack_90;
              }
              UStack_c0.x = 0.0;
              UStack_c0.y = 0.0;
              if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                UStack_98 = UVar12;
                uStack_90 = uVar14;
                il2cpp_runtime_helper_02337ed0();
                UVar12 = UStack_98;
              }
              pMVar9 = rect;
              UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                        ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar12,
                         (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStack_c0,(MethodInfo *)0x0);
              fVar15 = UStack_c0.x;
              if (fVar15 <= UStack_b8.x) {
                UStack_b8.x = fVar15;
              }
              if (fStack_88 <= fVar15) {
                fStack_88 = fVar15;
              }
              fVar17 = UStack_c0.y;
              fVar16 = UStack_b8.y;
              if (fVar17 <= UStack_b8.y) {
                fVar16 = fVar17;
              }
              fVar15 = fStack_84;
              if (fStack_84 <= fVar17) {
                fVar15 = fVar17;
              }
              uVar11 = uVar11 + 1;
              uVar1 = (uint)fourCornersArray->max_length;
              uVar8 = (ulong)uVar1;
              pfVar10 = pfVar10 + 3;
              fVar17 = UStack_b8.y;
              if ((long)(int)uVar1 <= (long)uVar11) {
                return uVar1;
              }
            }
          }
          fStack_84 = fVar15;
          il2cpp_runtime_helper_022b2ca0();
          __this_02 = (MethodInfo **)pMVar9;
        }
      }
      else {
        __this_00 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
        __this_02 = (MethodInfo **)__this_01;
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          worldPoint = (UnityEngine_Vector3_Fields)
                       UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            UStack_b8 = worldPoint._0_8_;
            fStack_88 = worldPoint.z;
            il2cpp_runtime_helper_02337ed0();
            worldPoint.z = fStack_88;
            worldPoint.x = UStack_b8.x;
            worldPoint.y = UStack_b8.y;
          }
          UVar12 = (UnityEngine_Vector2_Fields)
                   UnityEngine_RectTransformUtility__WorldToScreenPoint
                             ((UnityEngine_Camera_o *)0x0,(UnityEngine_Vector3_o)worldPoint,(MethodInfo *)0x0)
          ;
          if (g_data_057a9cfd == '\0') {
            UStack_b8 = UVar12;
            il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
            g_data_057a9cfd = '\x01';
            UVar12 = UStack_b8;
          }
          UStack_c0.x = 0.0;
          UStack_c0.y = 0.0;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            UStack_b8 = UVar12;
            il2cpp_runtime_helper_02337ed0();
            UVar12 = UStack_b8;
          }
          UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar12,
                     (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStack_c0,(MethodInfo *)0x0);
          if (g_data_057a694c == '\0') {
            UStack_b8 = UStack_c0;
            uStack_b0 = 0;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
            g_data_057a694c = '\x01';
          }
          return (bool_conflict)*(undefined8 *)(TypeInfo_Vector2 + 0xb8);
        }
      }
    }
    bVar3 = il2cpp_runtime_helper_022b2c90();
    if ((MethodInfo *)__this_02 == (MethodInfo *)0x0) {
      bVar3 = il2cpp_runtime_helper_022b2c90();
      return bVar3;
    }
    UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_02,(MethodInfo *)0x0);
    return bVar3;
  }
label_03b535a7:
  return (bool_conflict)pMVar7;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SelectInitialFocus
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x3b52d30

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool_conflict bVar4;
  TMPro_TMP_InputField_o *pTVar5;
  UnityEngine_UI_Selectable_o *selectable;
  System_Object_array *pSVar6;
  ulong uVar7;
  MethodInfo *method_00;
  TMPro_TMP_InputField_o *x;
  UnityEngine_GameObject_o *root;
  TMPro_TMP_InputField_o *x_00;
  
  if (g_data_057a9cf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf7 = '\x01';
  }
  if ((instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) ||
     ((instance->fields).Kind != 0)) {
    pTVar5 = (TMPro_TMP_InputField_o *)0x0;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pTVar5 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput
                       ((instance->fields)._ContentRoot_k__BackingField,method);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      root = (UnityEngine_GameObject_o *)0x0;
    }
    else {
      root = (instance->fields)._ContentRoot_k__BackingField;
    }
    selectable = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable(root,method_00);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(selectable,method_00);
    return;
  }
  x = pTVar5;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
            ((UnityEngine_UI_Selectable_o *)pTVar5,method_00);
  if (pTVar5 != (TMPro_TMP_InputField_o *)0x0) {
    (*(pTVar5->klass->vtable)._38_Select.methodPtr)(pTVar5);
    TMPro_TMP_InputField__ActivateInputField(pTVar5,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponentsInChildren_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pTVar5 = x;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if ((x != (TMPro_TMP_InputField_o *)0x0) &&
     (pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object_
                         ((UnityEngine_GameObject_o *)x,0,MethodInfo_Selectable_GetComponentsInChildren_Selectable), pTVar5 = x,
     pSVar6 != (System_Object_array *)0x0)) {
    if ((int)pSVar6->max_length < 1) {
      return;
    }
    uVar7 = 0;
    if ((pSVar6->max_length & 0xffffffff) != 0) {
      do {
        x_00 = (TMPro_TMP_InputField_o *)pSVar6->m_Items[uVar7];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pTVar5 = x_00;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        x = pTVar5;
        if ((char)bVar4 != '\0') {
          if (x_00 == (TMPro_TMP_InputField_o *)0x0) goto label_03b52f4b;
          x = x_00;
          cVar3 = (*(x_00->klass->vtable)._9_IsActive.methodPtr)();
          if ((cVar3 != '\0') &&
             (cVar3 = (*(x_00->klass->vtable)._24_IsInteractable.methodPtr)(), x = x_00, cVar3 != '\0')) {
            return;
          }
        }
        uVar7 = uVar7 + 1;
        uVar2 = (uint)pSVar6->max_length;
        if ((long)(int)uVar2 <= (long)uVar7) {
          return;
        }
      } while (uVar7 < uVar2);
    }
    il2cpp_runtime_helper_022b2ca0();
    pTVar5 = x;
  }
label_03b52f4b:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar4 == '\0') {
    UnityEngine_Object__DestroyImmediate_4e01e00((UnityEngine_Object_o *)pTVar5,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pTVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FirstInput
// il2cpp: TMPro_TMP_InputField_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b53480

TMPro_TMP_InputField_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  bool_conflict bVar4;
  System_Object_array *pSVar5;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_array *fourCornersArray;
  TMPro_TMP_InputField_o *pTVar6;
  ulong unaff_RBX;
  Il2CppClass *pIVar7;
  float *pfVar8;
  TMPro_TMP_InputField_o *pTVar9;
  Il2CppClass *__this_00;
  Il2CppClass *rect;
  Il2CppClass *pIVar10;
  UnityEngine_Vector2_Fields UVar11;
  UnityEngine_Vector2_Fields UVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb_00;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_Fields worldPoint;
  UnityEngine_Vector3_o worldPoint_00;
  UnityEngine_Vector3_o worldPoint_01;
  UnityEngine_Vector2_Fields UStack_a8;
  UnityEngine_Vector2_Fields UStack_a0;
  undefined8 uStack_98;
  float fStack_84;
  UnityEngine_Vector2_Fields UStack_80;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  ulong uStack_58;
  UnityEngine_Object_o *pUStack_50;
  
  if (g_data_057a9cf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9cf8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar7 = (Il2CppClass *)0x0;
  __this_00 = (Il2CppClass *)0x0;
  rect = (Il2CppClass *)root;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (TMPro_TMP_InputField_o *)0x0;
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (Il2CppClass *)0x0;
    pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object_(root,0,MethodInfo_TMP_InputField_GetComponentsInChildren_TMP_InputField);
    rect = (Il2CppClass *)root;
    if (pSVar5 != (System_Object_array *)0x0) {
      if ((int)pSVar5->max_length < 1) {
        return (TMPro_TMP_InputField_o *)0x0;
      }
      unaff_RBX = 0;
      if ((pSVar5->max_length & 0xffffffff) != 0) {
        do {
          pIVar7 = (Il2CppClass *)pSVar5->m_Items[unaff_RBX];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = (Il2CppClass *)0x0;
          root = (UnityEngine_GameObject_o *)pIVar7;
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            rect = (Il2CppClass *)root;
            if (pIVar7 == (Il2CppClass *)0x0) goto label_03b535bb;
            __this_00 = (pIVar7->_1).image[1]._1.parent;
            root = (UnityEngine_GameObject_o *)pIVar7;
            cVar3 = (*(code *)(pIVar7->_1).image[1]._1.declaringType)();
            if (cVar3 != '\0') {
              pvVar2 = (pIVar7->_1).image;
              __this_00 = *(Il2CppClass **)((long)pvVar2 + 0x2c0);
              root = (UnityEngine_GameObject_o *)pIVar7;
              cVar3 = (**(code **)((long)pvVar2 + 0x2b8))();
              if (cVar3 != '\0') {
                return (TMPro_TMP_InputField_o *)pIVar7;
              }
            }
          }
          unaff_RBX = unaff_RBX + 1;
          uVar1 = (uint)pSVar5->max_length;
          if ((long)(int)uVar1 <= (long)unaff_RBX) {
            return (TMPro_TMP_InputField_o *)0x0;
          }
        } while (unaff_RBX < uVar1);
      }
      il2cpp_runtime_helper_022b2ca0();
      rect = (Il2CppClass *)root;
    }
  }
label_03b535bb:
  il2cpp_runtime_helper_022b2c90();
  pIVar10 = rect;
  uStack_58 = unaff_RBX;
  pUStack_50 = (UnityEngine_Object_o *)pIVar7;
  if (g_data_057a9cfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    pIVar10 = (Il2CppClass *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cfb = '\x01';
  }
  if (__this_00 != (Il2CppClass *)0x0) {
    pIVar10 = (Il2CppClass *)
              UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
    pIVar7 = (Il2CppClass *)0x0;
    if ((pIVar10 != (Il2CppClass *)0x0) && (pIVar7 = (Il2CppClass *)0x0, (pIVar10->_1).image == TypeInfo_RectTransform))
    {
      pIVar7 = pIVar10;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      pIVar10 = TypeInfo_Vector3;
      fourCornersArray = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
      if ((pIVar7 != (Il2CppClass *)0x0) &&
         (UnityEngine_RectTransform__GetWorldCorners
                    ((UnityEngine_RectTransform_o *)pIVar7,fourCornersArray,(MethodInfo *)0x0),
         pIVar10 = pIVar7, fourCornersArray != (UnityEngine_Vector3_array *)0x0)) {
        fVar14 = fStack_6c;
        if ((int)fourCornersArray->max_length != 0) {
          UVar11.x = fourCornersArray->m_Items[0].fields.x;
          UVar11.y = fourCornersArray->m_Items[0].fields.y;
          fVar14 = fourCornersArray->m_Items[0].fields.z;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            uStack_98 = 0;
            UStack_a0 = UVar11;
            fStack_70 = fVar14;
            il2cpp_runtime_helper_02337ed0();
            UVar11 = UStack_a0;
            fVar14 = fStack_70;
          }
          worldPoint_00.fields.z = fVar14;
          worldPoint_00.fields.x = UVar11.x;
          worldPoint_00.fields.y = UVar11.y;
          UVar11 = (UnityEngine_Vector2_Fields)
                   UnityEngine_RectTransformUtility__WorldToScreenPoint
                             ((UnityEngine_Camera_o *)0x0,worldPoint_00,(MethodInfo *)0x0);
          uVar13 = extraout_XMM0_Qb;
          if (g_data_057a9cfd == '\0') {
            UStack_a0 = UVar11;
            uStack_98 = extraout_XMM0_Qb;
            il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
            g_data_057a9cfd = '\x01';
            UVar11 = UStack_a0;
            uVar13 = uStack_98;
          }
          UStack_a8.x = 0.0;
          UStack_a8.y = 0.0;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            UStack_a0 = UVar11;
            uStack_98 = uVar13;
            il2cpp_runtime_helper_02337ed0();
            UVar11 = UStack_a0;
          }
          pIVar7 = rect;
          UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar11,
                     (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStack_a8,(MethodInfo *)0x0);
          pTVar6 = (TMPro_TMP_InputField_o *)fourCornersArray->max_length;
          if ((int)pTVar6 < 2) {
            return pTVar6;
          }
          pTVar6 = (TMPro_TMP_InputField_o *)((ulong)pTVar6 & 0xffffffff);
          pfVar8 = &fourCornersArray->m_Items[1].fields.z;
          pTVar9 = (TMPro_TMP_InputField_o *)0x1;
          fStack_6c = 0.0;
          UStack_a0.x = UStack_a8.x;
          fVar15 = UStack_a8.y;
          fVar16 = 0.0;
          fStack_70 = UStack_a8.x;
          fVar14 = UStack_a8.y;
          while( true ) {
            UStack_a0.y = fVar15;
            uStack_98 = CONCAT44(fVar16,fVar16);
            fStack_68 = fStack_6c;
            fStack_64 = fStack_6c;
            if (pTVar6 <= pTVar9) break;
            UVar12.x = ((UnityEngine_Vector3_Fields *)(pfVar8 + -2))->x;
            UVar12.y = ((UnityEngine_Vector3_Fields *)(pfVar8 + -2))->y;
            fVar15 = *pfVar8;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              uStack_78 = 0;
              fStack_84 = *pfVar8;
              UStack_80 = UVar12;
              fStack_6c = fVar14;
              fStack_64 = fStack_68;
              il2cpp_runtime_helper_02337ed0();
              UVar12 = UStack_80;
              fVar14 = fStack_6c;
              fVar15 = fStack_84;
            }
            fStack_6c = fVar14;
            worldPoint_01.fields.z = fVar15;
            worldPoint_01.fields.x = UVar12.x;
            worldPoint_01.fields.y = UVar12.y;
            UVar11 = (UnityEngine_Vector2_Fields)
                     UnityEngine_RectTransformUtility__WorldToScreenPoint
                               ((UnityEngine_Camera_o *)0x0,worldPoint_01,(MethodInfo *)0x0);
            uVar13 = extraout_XMM0_Qb_00;
            if (g_data_057a9cfd == '\0') {
              UStack_80 = UVar11;
              uStack_78 = extraout_XMM0_Qb_00;
              il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
              g_data_057a9cfd = '\x01';
              UVar11 = UStack_80;
              uVar13 = uStack_78;
            }
            UStack_a8.x = 0.0;
            UStack_a8.y = 0.0;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              UStack_80 = UVar11;
              uStack_78 = uVar13;
              il2cpp_runtime_helper_02337ed0();
              UVar11 = UStack_80;
            }
            pIVar7 = rect;
            UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar11,
                       (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStack_a8,(MethodInfo *)0x0);
            fVar14 = UStack_a8.x;
            if (fVar14 <= UStack_a0.x) {
              UStack_a0.x = fVar14;
            }
            if (fStack_70 <= fVar14) {
              fStack_70 = fVar14;
            }
            fVar16 = UStack_a8.y;
            fVar15 = UStack_a0.y;
            if (fVar16 <= UStack_a0.y) {
              fVar15 = fVar16;
            }
            fVar14 = fStack_6c;
            if (fStack_6c <= fVar16) {
              fVar14 = fVar16;
            }
            pTVar9 = (TMPro_TMP_InputField_o *)((long)&pTVar9->klass + 1);
            uVar1 = (uint)fourCornersArray->max_length;
            pTVar6 = (TMPro_TMP_InputField_o *)(ulong)uVar1;
            pfVar8 = pfVar8 + 3;
            fVar16 = UStack_a0.y;
            if ((long)(int)uVar1 <= (long)pTVar9) {
              return pTVar6;
            }
          }
        }
        fStack_6c = fVar14;
        il2cpp_runtime_helper_022b2ca0();
        pIVar10 = pIVar7;
      }
    }
    else {
      __this = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      pIVar10 = __this_00;
      if (__this != (UnityEngine_Transform_o *)0x0) {
        worldPoint = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          UStack_a0 = worldPoint._0_8_;
          fStack_70 = worldPoint.z;
          il2cpp_runtime_helper_02337ed0();
          worldPoint.z = fStack_70;
          worldPoint.x = UStack_a0.x;
          worldPoint.y = UStack_a0.y;
        }
        UVar11 = (UnityEngine_Vector2_Fields)
                 UnityEngine_RectTransformUtility__WorldToScreenPoint
                           ((UnityEngine_Camera_o *)0x0,(UnityEngine_Vector3_o)worldPoint,(MethodInfo *)0x0);
        if (g_data_057a9cfd == '\0') {
          UStack_a0 = UVar11;
          il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
          g_data_057a9cfd = '\x01';
          UVar11 = UStack_a0;
        }
        UStack_a8.x = 0.0;
        UStack_a8.y = 0.0;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          UStack_a0 = UVar11;
          il2cpp_runtime_helper_02337ed0();
          UVar11 = UStack_a0;
        }
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UVar11,
                   (UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&UStack_a8,(MethodInfo *)0x0);
        if (g_data_057a694c == '\0') {
          UStack_a0 = UStack_a8;
          uStack_98 = 0;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        return *(TMPro_TMP_InputField_o **)(TypeInfo_Vector2 + 0xb8);
      }
    }
  }
  pTVar6 = (TMPro_TMP_InputField_o *)il2cpp_runtime_helper_022b2c90();
  if (pIVar10 != (Il2CppClass *)0x0) {
    UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pIVar10,(MethodInfo *)0x0);
    return pTVar6;
  }
  pTVar6 = (TMPro_TMP_InputField_o *)il2cpp_runtime_helper_022b2c90();
  return pTVar6;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ApplyDialogMaxHeight
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight (UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b518a0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight
               (UnityEngine_RectTransform_o *host,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  Gilzoide_FlexUi_FlexLayoutConfig_o *__this_01;
  System_Threading_CancellationTokenSource_o *extraout_RDX;
  intptr_t iVar4;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  float value_00;
  float fVar5;
  UnityEngine_Rect_o UVar6;
  
  if (g_data_057a9cf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9cf9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  iVar4 = 0;
  __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)root;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_03b51a5c;
    __this = (Gilzoide_FlexUi_FlexLayout_o *)UnityEngine_GameObject__GetComponent_object_(root,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar4 = 0;
  __this_02 = __this;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (host != (UnityEngine_RectTransform_o *)0x0) {
    iVar4 = 0;
    __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)host;
    UVar6 = UnityEngine_RectTransform__get_rect(host,(MethodInfo *)0x0);
    fVar5 = UVar6.fields.m_Height;
    if (fVar5 <= 0.0) {
      iVar4 = 0;
      __this_00 = (Gilzoide_FlexUi_FlexLayout_o *)
                  UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)host,(MethodInfo *)0x0);
      __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)host;
      if ((__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) && (__this_00->klass == TypeInfo_RectTransform)) {
        iVar4 = 0;
        UVar6 = UnityEngine_RectTransform__get_rect
                          ((UnityEngine_RectTransform_o *)__this_00,(MethodInfo *)0x0);
        fVar5 = UVar6.fields.m_Height;
        __this_02 = __this_00;
      }
    }
    if (fVar5 <= 0.0) {
      __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      fVar5 = (float)iVar3;
    }
    if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      value_00 = 0.0;
      if (0.0 <= fVar5 + -64.0) {
        value_00 = fVar5 + -64.0;
      }
      GVar1 = (__this->fields)._maxHeight.fields;
      if ((((ulong)GVar1 >> 0x20 == 1) && (fVar5 = GVar1.Value, 0.0 < fVar5)) && (fVar5 <= value_00)) {
        value_00 = fVar5;
      }
      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value_00,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__set_MaxHeight(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
label_03b51a5c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_OverlayInstance);
    g_data_057a9ce3 = '\x01';
  }
  __this_01 = (Gilzoide_FlexUi_FlexLayoutConfig_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_OverlayInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
  (__this_02->fields)._configuration = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._configuration);
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  (__this_02->fields).m_CachedPtr = iVar4;
  il2cpp_runtime_helper_022b4080(&__this_02->fields,iVar4);
  (__this_02->fields).m_CancellationTokenSource = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields).m_CancellationTokenSource,extraout_RDX);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PositionPopover
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover (UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, bool forceBelow, float gap, const MethodInfo* method);
// 0x3b514a0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
               (UnityEngine_GameObject_o *root,UnityEngine_RectTransform_o *host,
               UnityEngine_GameObject_o *anchor,bool_conflict forceBelow,float gap,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar1;
  uint uVar2;
  bool bVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  Gilzoide_FlexUi_FlexLayout_o *pGVar6;
  UnityEngine_RectTransform_o *__this;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar7;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  Gilzoide_FlexUi_FlexLayout_o *pGVar8;
  Gilzoide_FlexUi_FlexLayoutConfig_o *__this_01;
  MethodInfo *method_00;
  System_Threading_CancellationTokenSource_o *extraout_RDX;
  intptr_t iVar9;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar10;
  undefined8 in_XMM1_Qb;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar11 [16];
  float fVar14;
  uint uVar16;
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar23;
  undefined1 auVar22 [16];
  UnityEngine_Rect_o UVar24;
  UnityEngine_Rect_o UVar25;
  UnityEngine_Rect_o UVar26;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector2_o local_b8;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  float local_78;
  float fStack_74;
  uint uStack_70;
  uint uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  if (g_data_057a9cfa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9cfa = '\x01';
    in_XMM1_Qb = extraout_XMM1_Qb;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_XMM1_Qb = extraout_XMM1_Qb_00;
  }
  pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)root;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_03b5154c:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_XMM1_Qb = extraout_XMM1_Qb_01;
    }
    __this = (UnityEngine_RectTransform_o *)0x0;
    pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)root;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (root == (UnityEngine_GameObject_o *)0x0) goto label_03b5188d;
      __this = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__GetComponent_object_(root,MethodInfo_RectTransform_GetComponent_RectTransform);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_XMM1_Qb = extraout_XMM1_Qb_02;
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_XMM1_Qb = extraout_XMM1_Qb_03;
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_XMM1_Qb = extraout_XMM1_Qb_04;
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)host,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_XMM1_Qb = extraout_XMM1_Qb_05;
    }
    pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)anchor;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)anchor,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (host != (UnityEngine_RectTransform_o *)0x0) {
      UVar24 = UnityEngine_RectTransform__get_rect(host,(MethodInfo *)0x0);
      uVar12 = in_XMM1_Qb;
      UVar25 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect(host,anchor,method_00);
      pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)anchor;
      __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)host;
      if (__this != (UnityEngine_RectTransform_o *)0x0) {
        pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        uVar13 = uVar12;
        UVar26 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
        auVar22._0_8_ = UVar26.fields._8_8_;
        auVar22._8_8_ = uVar13;
        auVar22 = maxps(_DAT_00d19fc0,auVar22);
        fVar23 = auVar22._4_4_;
        local_b8.fields.x = UVar25.fields.m_XMin;
        local_b8.fields.y = UVar25.fields.m_YMin;
        fStack_b0 = (float)extraout_XMM0_Qb_00;
        fStack_ac = (float)((ulong)extraout_XMM0_Qb_00 >> 0x20);
        local_78 = UVar24.fields.m_XMin;
        fStack_74 = UVar24.fields.m_YMin;
        uStack_70 = (uint)extraout_XMM0_Qb;
        uStack_6c = (uint)((ulong)extraout_XMM0_Qb >> 0x20);
        local_a8 = UVar24.fields.m_Width;
        fStack_a4 = UVar24.fields.m_Height;
        uStack_a0 = (uint)in_XMM1_Qb;
        uStack_9c = (uint)((ulong)in_XMM1_Qb >> 0x20);
        fVar17 = fStack_a4 + fStack_74;
        local_68 = UVar25.fields.m_Width;
        fStack_64 = UVar25.fields.m_Height;
        fStack_60 = (float)uVar12;
        fStack_5c = (float)((ulong)uVar12 >> 0x20);
        bVar3 = false;
        if ((local_b8.fields.y - fStack_74 < fVar23 + gap) && (bVar3 = false, (char)forceBelow == '\0')) {
          bVar3 = local_b8.fields.y - fStack_74 < fVar17 - (fStack_64 + local_b8.fields.y);
        }
        local_b8.fields.x = local_b8.fields.x + local_68 * 0.5;
        fVar18 = local_b8.fields.y + fStack_64 * 0.5;
        fStack_b0 = fStack_b0 + fStack_60 * 0.0;
        fStack_ac = fStack_ac + fStack_5c * 0.0;
        fVar14 = local_b8.fields.x - auVar22._0_4_ * 0.5;
        fVar19 = (local_a8 + local_78) - auVar22._0_4_;
        fVar21 = fVar19;
        if (fVar14 <= fVar19) {
          fVar21 = fVar14;
        }
        auVar15._0_4_ =
             (~-(uint)(local_78 <= fVar14) & (uint)local_78 | (uint)fVar21 & -(uint)(local_78 <= fVar14)) &
             -(uint)(local_78 <= fVar19);
        auVar15._4_4_ = (~(uint)fVar18 & (uint)fStack_74 | (uint)fStack_a4 & (uint)fVar18) & (uint)fStack_a4;
        auVar15._8_4_ = (~(uint)fStack_b0 & uStack_70 | uStack_a0 & (uint)fStack_b0) & uStack_a0;
        auVar15._12_4_ = (~(uint)fStack_ac & uStack_6c | uStack_9c & (uint)fStack_ac) & uStack_9c;
        auVar20._0_4_ = ~-(uint)(local_78 <= fVar19) & (uint)local_78;
        auVar20._4_4_ = ~(uint)fStack_a4 & (uint)fStack_74;
        auVar20._8_4_ = ~uStack_a0 & uStack_70;
        auVar20._12_4_ = ~uStack_9c & uStack_6c;
        if (bVar3) {
          fVar21 = fStack_64 + local_b8.fields.y + gap + fVar23;
          local_b8.fields.y = fStack_64;
        }
        else {
          fVar21 = local_b8.fields.y - gap;
        }
        if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        fVar14 = SUB164(auVar20 | auVar15,0);
        __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        GVar7 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar14 - local_78,(MethodInfo *)0x0);
        if (pGVar6 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          fVar10 = fStack_74 + fVar23;
          fVar19 = fVar17;
          if (fVar21 <= fVar17) {
            fVar19 = fVar21;
          }
          uVar16 = (~(uint)local_b8.fields.y & (uint)fStack_74 | (uint)fStack_a4 & (uint)local_b8.fields.y) &
                   (uint)fStack_a4;
          uVar2 = ~(uint)fStack_a4;
          fVar21 = (float)(~-(uint)(fVar10 <= fVar17) & (uint)fVar10 |
                          (~-(uint)(fVar10 <= fVar21) & (uint)fVar10 |
                          (uint)fVar19 & -(uint)(fVar10 <= fVar21)) & -(uint)(fVar10 <= fVar17));
          Gilzoide_FlexUi_FlexLayout__set_MarginLeft(pGVar6,GVar7,(MethodInfo *)0x0);
          GVar7 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar17 - fVar21,(MethodInfo *)0x0);
          Gilzoide_FlexUi_FlexLayout__set_MarginTop(pGVar6,GVar7,(MethodInfo *)0x0);
          fStack_a4 = SUB164(auVar20 | auVar15,4);
          auVar11._0_4_ = local_b8.fields.x - fVar14;
          auVar11._4_4_ = fVar18 - (fVar21 - fVar23);
          auVar11._8_4_ = fStack_b0 - fStack_a4;
          auVar11._12_4_ = fStack_ac - (float)(uVar2 & (uint)fStack_74 | uVar16);
          auVar22 = divps(auVar11,auVar22);
          value = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this,(MethodInfo *)0x0);
          local_b8.fields = auVar22._0_8_;
          UnityEngine_RectTransform__set_pivot(__this,local_b8,(MethodInfo *)0x0);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else if (root != (UnityEngine_GameObject_o *)0x0) {
    pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)UnityEngine_GameObject__GetComponent_object_(root,MethodInfo_FlexLayout_GetComponent_FlexLayout);
    goto label_03b5154c;
  }
label_03b5188d:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9cf9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  iVar9 = 0;
  pGVar6 = pGVar8;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b51a5c;
    __this_00 = (Gilzoide_FlexUi_FlexLayout_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pGVar8,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar9 = 0;
  pGVar6 = __this_00;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (__this_02 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    iVar9 = 0;
    pGVar6 = __this_02;
    UVar24 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_02,(MethodInfo *)0x0);
    fVar17 = UVar24.fields.m_Height;
    if (fVar17 <= 0.0) {
      iVar9 = 0;
      pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)
               UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
      pGVar6 = __this_02;
      if ((pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) && (pGVar8->klass == TypeInfo_RectTransform)) {
        iVar9 = 0;
        UVar24 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pGVar8,(MethodInfo *)0x0);
        fVar17 = UVar24.fields.m_Height;
        pGVar6 = pGVar8;
      }
    }
    if (fVar17 <= 0.0) {
      pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      fVar17 = (float)iVar5;
    }
    if (__this_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      fVar23 = 0.0;
      if (0.0 <= fVar17 + -64.0) {
        fVar23 = fVar17 + -64.0;
      }
      GVar1 = (__this_00->fields)._maxHeight.fields;
      if ((((ulong)GVar1 >> 0x20 == 1) && (fVar17 = GVar1.Value, 0.0 < fVar17)) && (fVar17 <= fVar23)) {
        fVar23 = fVar17;
      }
      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GVar7 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar23,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__set_MaxHeight(__this_00,GVar7,(MethodInfo *)0x0);
      return;
    }
  }
label_03b51a5c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_OverlayInstance);
    g_data_057a9ce3 = '\x01';
  }
  __this_01 = (Gilzoide_FlexUi_FlexLayoutConfig_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_OverlayInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
  (pGVar6->fields)._configuration = __this_01;
  il2cpp_runtime_helper_022b4080(&(pGVar6->fields)._configuration);
  System_Object___ctor((Il2CppObject *)pGVar6,(MethodInfo *)0x0);
  (pGVar6->fields).m_CachedPtr = iVar9;
  il2cpp_runtime_helper_022b4080(&pGVar6->fields,iVar9);
  (pGVar6->fields).m_CancellationTokenSource = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(pGVar6->fields).m_CancellationTokenSource,extraout_RDX);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$AnchorRect
// il2cpp: UnityEngine_Rect_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect (UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x3b535c0

UnityEngine_Rect_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect
          (UnityEngine_RectTransform_o *host,UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_array *fourCornersArray;
  ulong uVar2;
  UnityEngine_RectTransform_o *__this_00;
  float *pfVar3;
  ulong uVar4;
  UnityEngine_RectTransform_o *pUVar5;
  float fVar6;
  UnityEngine_Vector2_Fields UVar7;
  UnityEngine_Vector2_Fields UVar8;
  UnityEngine_Vector2_Fields UVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  UnityEngine_Vector2_Fields in_XMM1_Qa;
  float fVar12;
  float fVar13;
  undefined1 in_XMM2 [16];
  float fVar14;
  UnityEngine_Rect_o UVar15;
  UnityEngine_Rect_o UVar16;
  UnityEngine_Rect_o UVar17;
  UnityEngine_Vector3_Fields worldPoint;
  UnityEngine_Vector3_o worldPoint_00;
  UnityEngine_Vector3_o worldPoint_01;
  UnityEngine_Vector2_Fields local_80;
  UnityEngine_Vector2_Fields local_78;
  undefined8 uStack_70;
  float local_5c;
  UnityEngine_Vector2_Fields local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  
  pUVar5 = host;
  if (g_data_057a9cfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    pUVar5 = (UnityEngine_RectTransform_o *)&TypeInfo_Vector3;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cfb = '\x01';
  }
  if (anchor != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = (UnityEngine_RectTransform_o *)UnityEngine_GameObject__get_transform(anchor,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar5 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_00 = (UnityEngine_RectTransform_o *)0x0, pUVar5->klass == TypeInfo_RectTransform)) {
      __this_00 = pUVar5;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pUVar5 = TypeInfo_Vector3;
      fourCornersArray = (UnityEngine_Vector3_array *)il2cpp_runtime_helper_022b2a40();
      if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
         (UnityEngine_RectTransform__GetWorldCorners(__this_00,fourCornersArray,(MethodInfo *)0x0),
         pUVar5 = __this_00, fourCornersArray != (UnityEngine_Vector3_array *)0x0)) {
        if ((int)fourCornersArray->max_length != 0) {
          UVar7.x = fourCornersArray->m_Items[0].fields.x;
          UVar7.y = fourCornersArray->m_Items[0].fields.y;
          fVar14 = fourCornersArray->m_Items[0].fields.z;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            uStack_70 = 0;
            local_48._0_4_ = fVar14;
            local_78 = UVar7;
            il2cpp_runtime_helper_02337ed0();
            UVar7 = local_78;
            fVar14 = (float)local_48._0_4_;
          }
          in_XMM1_Qa.y = 0.0;
          in_XMM1_Qa.x = fVar14;
          worldPoint_00.fields.z = fVar14;
          worldPoint_00.fields.x = UVar7.x;
          worldPoint_00.fields.y = UVar7.y;
          UVar7 = (UnityEngine_Vector2_Fields)
                  UnityEngine_RectTransformUtility__WorldToScreenPoint
                            ((UnityEngine_Camera_o *)0x0,worldPoint_00,(MethodInfo *)0x0);
          uVar10 = extraout_XMM0_Qb;
          if (g_data_057a9cfd == '\0') {
            local_78 = UVar7;
            uStack_70 = extraout_XMM0_Qb;
            il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
            g_data_057a9cfd = '\x01';
            UVar7 = local_78;
            uVar10 = uStack_70;
          }
          local_80.x = 0.0;
          local_80.y = 0.0;
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            local_78 = UVar7;
            uStack_70 = uVar10;
            il2cpp_runtime_helper_02337ed0();
            UVar7 = local_78;
          }
          __this_00 = host;
          UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    (host,(UnityEngine_Vector2_o)UVar7,(UnityEngine_Camera_o *)0x0,
                     (UnityEngine_Vector2_o *)&local_80,(MethodInfo *)0x0);
          local_78.x = local_80.x;
          fVar14 = local_80.y;
          UVar7 = local_80;
          UVar8 = local_80;
          if (1 < (int)fourCornersArray->max_length) {
            uVar2 = fourCornersArray->max_length & 0xffffffff;
            pfVar3 = &fourCornersArray->m_Items[1].fields.z;
            uVar4 = 1;
            in_XMM2._8_8_ = 0;
            in_XMM2._0_4_ = local_80.x;
            in_XMM2._4_4_ = local_80.y;
            fVar6 = 0.0;
            do {
              local_78.y = fVar14;
              uStack_70 = CONCAT44(fVar6,fVar6);
              local_48._0_16_ = in_XMM2;
              if (uVar2 <= uVar4) goto label_03b539ac;
              UVar9.x = ((UnityEngine_Vector3_Fields *)(pfVar3 + -2))->x;
              UVar9.y = ((UnityEngine_Vector3_Fields *)(pfVar3 + -2))->y;
              fVar14 = *pfVar3;
              if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                uStack_50 = 0;
                local_5c = *pfVar3;
                local_58 = UVar9;
                il2cpp_runtime_helper_02337ed0();
                UVar9 = local_58;
                fVar14 = local_5c;
              }
              worldPoint_01.fields.z = fVar14;
              worldPoint_01.fields.x = UVar9.x;
              worldPoint_01.fields.y = UVar9.y;
              UVar7 = (UnityEngine_Vector2_Fields)
                      UnityEngine_RectTransformUtility__WorldToScreenPoint
                                ((UnityEngine_Camera_o *)0x0,worldPoint_01,(MethodInfo *)0x0);
              uVar10 = extraout_XMM0_Qb_00;
              if (g_data_057a9cfd == '\0') {
                local_58 = UVar7;
                uStack_50 = extraout_XMM0_Qb_00;
                il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                g_data_057a9cfd = '\x01';
                UVar7 = local_58;
                uVar10 = uStack_50;
              }
              local_80.x = 0.0;
              local_80.y = 0.0;
              if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                local_58 = UVar7;
                uStack_50 = uVar10;
                il2cpp_runtime_helper_02337ed0();
                UVar7 = local_58;
              }
              __this_00 = host;
              UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                        (host,(UnityEngine_Vector2_o)UVar7,(UnityEngine_Camera_o *)0x0,
                         (UnityEngine_Vector2_o *)&local_80,(MethodInfo *)0x0);
              fVar14 = local_80.x;
              if (fVar14 <= local_78.x) {
                local_78.x = fVar14;
              }
              if ((float)local_48._0_4_ <= fVar14) {
                local_48._0_4_ = fVar14;
              }
              fVar6 = local_80.y;
              fVar14 = local_78.y;
              if (fVar6 <= local_78.y) {
                fVar14 = fVar6;
              }
              UVar8.y = fVar14;
              UVar8.x = local_78.x;
              fVar13 = (float)local_48._4_4_;
              if ((float)local_48._4_4_ <= fVar6) {
                fVar13 = fVar6;
              }
              in_XMM1_Qa.y = fVar13;
              in_XMM1_Qa.x = (float)local_48._0_4_;
              uVar4 = uVar4 + 1;
              uVar11 = (uint)fourCornersArray->max_length;
              uVar2 = (ulong)uVar11;
              pfVar3 = pfVar3 + 3;
              in_XMM2._4_4_ = fVar13;
              in_XMM2._0_4_ = local_48._0_4_;
              in_XMM2._8_4_ = local_48._4_4_;
              in_XMM2._12_4_ = local_48._4_4_;
              UVar7 = in_XMM1_Qa;
              fVar6 = local_78.y;
            } while ((long)uVar4 < (long)(int)uVar11);
          }
          local_80 = UVar8;
          uVar10 = CONCAT44(UVar7.y - local_80.y,UVar7.x - local_80.x);
          goto label_03b5399d;
        }
label_03b539ac:
        il2cpp_runtime_helper_022b2ca0();
        pUVar5 = __this_00;
      }
    }
    else {
      __this = UnityEngine_GameObject__get_transform(anchor,(MethodInfo *)0x0);
      pUVar5 = (UnityEngine_RectTransform_o *)anchor;
      if (__this != (UnityEngine_Transform_o *)0x0) {
        worldPoint = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0)
        ;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          local_48._0_4_ = worldPoint.z;
          local_78 = worldPoint._0_8_;
          il2cpp_runtime_helper_02337ed0();
          worldPoint.z = (float)local_48._0_4_;
          worldPoint.x = local_78.x;
          worldPoint.y = local_78.y;
        }
        UVar7 = (UnityEngine_Vector2_Fields)
                UnityEngine_RectTransformUtility__WorldToScreenPoint
                          ((UnityEngine_Camera_o *)0x0,(UnityEngine_Vector3_o)worldPoint,(MethodInfo *)0x0);
        if (g_data_057a9cfd == '\0') {
          local_78 = UVar7;
          il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
          g_data_057a9cfd = '\x01';
          UVar7 = local_78;
        }
        local_80.x = 0.0;
        local_80.y = 0.0;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          local_78 = UVar7;
          il2cpp_runtime_helper_02337ed0();
          UVar7 = local_78;
        }
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  (host,(UnityEngine_Vector2_o)UVar7,(UnityEngine_Camera_o *)0x0,
                   (UnityEngine_Vector2_o *)&local_80,(MethodInfo *)0x0);
        if (g_data_057a694c == '\0') {
          local_78 = local_80;
          uStack_70 = 0;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
          local_80 = local_78;
        }
        uVar10 = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
label_03b5399d:
        UVar15.fields.m_Width = (float)(int)uVar10;
        UVar15.fields.m_Height = (float)(int)((ulong)uVar10 >> 0x20);
        UVar15.fields.m_XMin = local_80.x;
        UVar15.fields.m_YMin = local_80.y;
        return (UnityEngine_Rect_o)UVar15.fields;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) {
    uVar10 = il2cpp_runtime_helper_022b2c90();
    fVar13 = in_XMM2._0_4_;
    fVar6 = (float)uVar10;
    fVar14 = fVar13;
    if (fVar6 <= fVar13) {
      fVar14 = fVar6;
    }
    fVar12 = in_XMM1_Qa.x;
    uVar11 = (uint)((ulong)uVar10 >> 0x20);
    UVar17.fields._0_8_ =
         CONCAT44(~uVar11 & (uint)in_XMM1_Qa.y,~-(uint)(fVar12 <= fVar6) & (uint)fVar12) |
         CONCAT44((~in_XMM2._4_4_ & (uint)in_XMM1_Qa.y | in_XMM2._4_4_) & uVar11,
                  (~-(uint)(fVar12 <= fVar13) & (uint)fVar12 | (uint)fVar14 & -(uint)(fVar12 <= fVar13)) &
                  -(uint)(fVar12 <= fVar6));
    UVar17.fields.m_Width = in_XMM1_Qa.x;
    UVar17.fields.m_Height = in_XMM1_Qa.y;
    return (UnityEngine_Rect_o)UVar17.fields;
  }
  UVar15 = UnityEngine_RectTransform__get_rect(pUVar5,(MethodInfo *)0x0);
  fVar14 = 1.0;
  if (1.0 <= UVar15.fields.m_Width) {
    fVar14 = UVar15.fields.m_Width;
  }
  UVar16.fields.m_Height = UVar15.fields.m_Height;
  UVar16.fields.m_Width = UVar16.fields.m_Height;
  fVar6 = 1.0;
  if (1.0 <= UVar16.fields.m_Height) {
    fVar6 = UVar16.fields.m_Height;
  }
  UVar16.fields.m_YMin = fVar6;
  UVar16.fields.m_XMin = fVar14;
  return (UnityEngine_Rect_o)UVar16.fields;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$MatchPopoverWidth
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth (UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x3b51330

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
               (UnityEngine_GameObject_o *root,UnityEngine_RectTransform_o *host,
               UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar1;
  uint uVar2;
  bool bVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  Gilzoide_FlexUi_FlexLayout_o *pGVar6;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar7;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  Gilzoide_FlexUi_FlexLayout_o *pGVar8;
  Gilzoide_FlexUi_FlexLayoutConfig_o *__this_01;
  char cVar9;
  MethodInfo *method_00;
  Gilzoide_FlexUi_FlexLayout_o *x;
  MethodInfo *method_01;
  System_Threading_CancellationTokenSource_o *extraout_RDX;
  Gilzoide_FlexUi_FlexLayout_o *pGVar10;
  intptr_t iVar11;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  float fVar12;
  float fVar13;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 extraout_XMM1_Qb_06;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar14 [16];
  float fVar18;
  uint uVar20;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar26;
  undefined1 auVar25 [16];
  UnityEngine_Rect_o UVar27;
  UnityEngine_Rect_o UVar28;
  UnityEngine_Rect_o UVar29;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector2_o UStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  float fStack_b0;
  float fStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  cVar9 = (char)method;
  if (g_data_057a9cfc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9cfc = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)root;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_03b513c4:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)host,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)anchor,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    UVar27 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect(host,anchor,method_00);
    fVar12 = 1.0;
    if (1.0 <= UVar27.fields.m_Width) {
      fVar12 = UVar27.fields.m_Width;
    }
    pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)anchor;
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)anchor;
    }
    pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    GVar7 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar12,(MethodInfo *)0x0);
    if (pGVar6 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__set_Width(pGVar6,GVar7,(MethodInfo *)0x0);
      return;
    }
  }
  else if (root != (UnityEngine_GameObject_o *)0x0) {
    pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)UnityEngine_GameObject__GetComponent_object_(root,MethodInfo_FlexLayout_GetComponent_FlexLayout);
    goto label_03b513c4;
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  uVar15 = extraout_XMM1_Qb;
  if (g_data_057a9cfa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9cfa = '\x01';
    uVar15 = extraout_XMM1_Qb_00;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar15 = extraout_XMM1_Qb_01;
  }
  __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  __this_02 = pGVar8;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_03b5154c:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar15 = extraout_XMM1_Qb_02;
    }
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
    pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    __this_02 = pGVar8;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b5188d;
      __this_00 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            ((UnityEngine_GameObject_o *)pGVar8,MethodInfo_RectTransform_GetComponent_RectTransform);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar15 = extraout_XMM1_Qb_03;
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar15 = extraout_XMM1_Qb_04;
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar15 = extraout_XMM1_Qb_05;
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar15 = extraout_XMM1_Qb_06;
    }
    pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    __this_02 = x;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (pGVar10 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      UVar27 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pGVar10,(MethodInfo *)0x0);
      pGVar6 = x;
      uVar16 = uVar15;
      UVar28 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect
                         ((UnityEngine_RectTransform_o *)pGVar10,(UnityEngine_GameObject_o *)x,method_01);
      __this_02 = pGVar10;
      if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
        pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        uVar17 = uVar16;
        UVar29 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
        auVar25._0_8_ = UVar29.fields._8_8_;
        auVar25._8_8_ = uVar17;
        auVar25 = maxps(_DAT_00d19fc0,auVar25);
        fVar26 = auVar25._4_4_;
        UStack_f0.fields.x = UVar28.fields.m_XMin;
        UStack_f0.fields.y = UVar28.fields.m_YMin;
        fStack_e8 = (float)extraout_XMM0_Qb_00;
        fStack_e4 = (float)((ulong)extraout_XMM0_Qb_00 >> 0x20);
        fStack_b0 = UVar27.fields.m_XMin;
        fStack_ac = UVar27.fields.m_YMin;
        uStack_a8 = (uint)extraout_XMM0_Qb;
        uStack_a4 = (uint)((ulong)extraout_XMM0_Qb >> 0x20);
        fStack_e0 = UVar27.fields.m_Width;
        fStack_dc = UVar27.fields.m_Height;
        uStack_d8 = (uint)uVar15;
        uStack_d4 = (uint)((ulong)uVar15 >> 0x20);
        fVar21 = fStack_dc + fStack_ac;
        fStack_a0 = UVar28.fields.m_Width;
        fStack_9c = UVar28.fields.m_Height;
        fStack_98 = (float)uVar16;
        fStack_94 = (float)((ulong)uVar16 >> 0x20);
        bVar3 = false;
        if ((UStack_f0.fields.y - fStack_ac < fVar26 + fVar12) && (bVar3 = false, cVar9 == '\0')) {
          bVar3 = UStack_f0.fields.y - fStack_ac < fVar21 - (fStack_9c + UStack_f0.fields.y);
        }
        UStack_f0.fields.x = UStack_f0.fields.x + fStack_a0 * 0.5;
        fVar22 = UStack_f0.fields.y + fStack_9c * 0.5;
        fStack_e8 = fStack_e8 + fStack_98 * 0.0;
        fStack_e4 = fStack_e4 + fStack_94 * 0.0;
        fVar18 = UStack_f0.fields.x - auVar25._0_4_ * 0.5;
        fVar23 = (fStack_e0 + fStack_b0) - auVar25._0_4_;
        fVar13 = fVar23;
        if (fVar18 <= fVar23) {
          fVar13 = fVar18;
        }
        auVar19._0_4_ =
             (~-(uint)(fStack_b0 <= fVar18) & (uint)fStack_b0 | (uint)fVar13 & -(uint)(fStack_b0 <= fVar18)) &
             -(uint)(fStack_b0 <= fVar23);
        auVar19._4_4_ = (~(uint)fVar22 & (uint)fStack_ac | (uint)fStack_dc & (uint)fVar22) & (uint)fStack_dc;
        auVar19._8_4_ = (~(uint)fStack_e8 & uStack_a8 | uStack_d8 & (uint)fStack_e8) & uStack_d8;
        auVar19._12_4_ = (~(uint)fStack_e4 & uStack_a4 | uStack_d4 & (uint)fStack_e4) & uStack_d4;
        auVar24._0_4_ = ~-(uint)(fStack_b0 <= fVar23) & (uint)fStack_b0;
        auVar24._4_4_ = ~(uint)fStack_dc & (uint)fStack_ac;
        auVar24._8_4_ = ~uStack_d8 & uStack_a8;
        auVar24._12_4_ = ~uStack_d4 & uStack_a4;
        if (bVar3) {
          fVar12 = fStack_9c + UStack_f0.fields.y + fVar12 + fVar26;
          UStack_f0.fields.y = fStack_9c;
        }
        else {
          fVar12 = UStack_f0.fields.y - fVar12;
        }
        if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        fVar13 = SUB164(auVar24 | auVar19,0);
        __this_02 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        GVar7 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar13 - fStack_b0,(MethodInfo *)0x0);
        if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          fVar23 = fStack_ac + fVar26;
          fVar18 = fVar21;
          if (fVar12 <= fVar21) {
            fVar18 = fVar12;
          }
          uVar20 = (~(uint)UStack_f0.fields.y & (uint)fStack_ac | (uint)fStack_dc & (uint)UStack_f0.fields.y)
                   & (uint)fStack_dc;
          uVar2 = ~(uint)fStack_dc;
          fVar12 = (float)(~-(uint)(fVar23 <= fVar21) & (uint)fVar23 |
                          (~-(uint)(fVar23 <= fVar12) & (uint)fVar23 |
                          (uint)fVar18 & -(uint)(fVar23 <= fVar12)) & -(uint)(fVar23 <= fVar21));
          Gilzoide_FlexUi_FlexLayout__set_MarginLeft(__this,GVar7,(MethodInfo *)0x0);
          GVar7 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar21 - fVar12,(MethodInfo *)0x0);
          Gilzoide_FlexUi_FlexLayout__set_MarginTop(__this,GVar7,(MethodInfo *)0x0);
          fStack_dc = SUB164(auVar24 | auVar19,4);
          auVar14._0_4_ = UStack_f0.fields.x - fVar13;
          auVar14._4_4_ = fVar22 - (fVar12 - fVar26);
          auVar14._8_4_ = fStack_e8 - fStack_dc;
          auVar14._12_4_ = fStack_e4 - (float)(uVar2 & (uint)fStack_ac | uVar20);
          auVar25 = divps(auVar14,auVar25);
          value = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
          UStack_f0.fields = auVar25._0_8_;
          UnityEngine_RectTransform__set_pivot(__this_00,UStack_f0,(MethodInfo *)0x0);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    __this = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pGVar8,MethodInfo_FlexLayout_GetComponent_FlexLayout);
    goto label_03b5154c;
  }
label_03b5188d:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9cf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9cf9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  iVar11 = 0;
  pGVar10 = pGVar6;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (pGVar6 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b51a5c;
    pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pGVar6,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar11 = 0;
  pGVar10 = pGVar8;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (__this_02 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    iVar11 = 0;
    pGVar10 = __this_02;
    UVar27 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_02,(MethodInfo *)0x0);
    fVar12 = UVar27.fields.m_Height;
    if (fVar12 <= 0.0) {
      iVar11 = 0;
      pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)
               UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
      pGVar10 = __this_02;
      if ((pGVar6 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) && (pGVar6->klass == TypeInfo_RectTransform)) {
        iVar11 = 0;
        UVar27 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pGVar6,(MethodInfo *)0x0);
        fVar12 = UVar27.fields.m_Height;
        pGVar10 = pGVar6;
      }
    }
    if (fVar12 <= 0.0) {
      pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      fVar12 = (float)iVar5;
    }
    if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      fVar21 = 0.0;
      if (0.0 <= fVar12 + -64.0) {
        fVar21 = fVar12 + -64.0;
      }
      GVar1 = (pGVar8->fields)._maxHeight.fields;
      if ((((ulong)GVar1 >> 0x20 == 1) && (fVar12 = GVar1.Value, 0.0 < fVar12)) && (fVar12 <= fVar21)) {
        fVar21 = fVar12;
      }
      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      GVar7 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar21,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__set_MaxHeight(pGVar8,GVar7,(MethodInfo *)0x0);
      return;
    }
  }
label_03b51a5c:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ce3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_OverlayInstance);
    g_data_057a9ce3 = '\x01';
  }
  __this_01 = (Gilzoide_FlexUi_FlexLayoutConfig_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_OverlayInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
  (pGVar10->fields)._configuration = __this_01;
  il2cpp_runtime_helper_022b4080(&(pGVar10->fields)._configuration);
  System_Object___ctor((Il2CppObject *)pGVar10,(MethodInfo *)0x0);
  (pGVar10->fields).m_CachedPtr = iVar11;
  il2cpp_runtime_helper_022b4080(&pGVar10->fields,iVar11);
  (pGVar10->fields).m_CancellationTokenSource = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(pGVar10->fields).m_CancellationTokenSource,extraout_RDX);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$LocalPoint
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__LocalPoint (UnityEngine_RectTransform_o* host, UnityEngine_Vector2_o screenPoint, const MethodInfo* method);
// 0x3b53aa0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__LocalPoint
          (UnityEngine_RectTransform_o *host,UnityEngine_Vector2_o screenPoint,MethodInfo *method)

{
  UnityEngine_Vector2_o screenPoint_00;
  float fVar1;
  float fVar2;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  UnityEngine_Vector2_Fields local_20;
  undefined1 local_18 [8];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  fVar1 = screenPoint.fields.x;
  fVar2 = screenPoint.fields.y;
  if (g_data_057a9cfd == '\0') {
    uStack_10 = in_XMM0_Dc;
    local_18 = (undefined1  [8])screenPoint.fields;
    uStack_c = in_XMM0_Dd;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057a9cfd = '\x01';
    fVar1 = (float)local_18._0_4_;
    fVar2 = (float)local_18._4_4_;
    in_XMM0_Dc = uStack_10;
    in_XMM0_Dd = uStack_c;
  }
  local_20.x = 0.0;
  local_20.y = 0.0;
  if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
    local_18._4_4_ = fVar2;
    local_18._0_4_ = fVar1;
    uStack_10 = in_XMM0_Dc;
    uStack_c = in_XMM0_Dd;
    il2cpp_runtime_helper_02337ed0();
    fVar1 = (float)local_18._0_4_;
    fVar2 = (float)local_18._4_4_;
  }
  screenPoint_00.fields.y = fVar2;
  screenPoint_00.fields.x = fVar1;
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
            (host,screenPoint_00,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&local_20,
             (MethodInfo *)0x0);
  return (UnityEngine_Vector2_o)local_20;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PopoverSize
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PopoverSize (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3b539c0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PopoverSize
          (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_Fields UVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  undefined8 in_XMM1_Qa;
  uint uVar6;
  float in_XMM2_Da;
  uint in_XMM2_Db;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UVar8 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
    fVar7 = 1.0;
    if (1.0 <= UVar8.fields.m_Width) {
      fVar7 = UVar8.fields.m_Width;
    }
    fVar1 = 1.0;
    if (1.0 <= UVar8.fields.m_Height) {
      fVar1 = UVar8.fields.m_Height;
    }
    UVar2.y = fVar1;
    UVar2.x = fVar7;
    return (UnityEngine_Vector2_o)UVar2;
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  fVar1 = (float)uVar3;
  fVar7 = in_XMM2_Da;
  if (fVar1 <= in_XMM2_Da) {
    fVar7 = fVar1;
  }
  fVar5 = (float)in_XMM1_Qa;
  uVar6 = (uint)((ulong)in_XMM1_Qa >> 0x20);
  uVar4 = (uint)((ulong)uVar3 >> 0x20);
  return (UnityEngine_Vector2_Fields)
         (CONCAT44(~uVar4 & uVar6,~-(uint)(fVar5 <= fVar1) & (uint)fVar5) |
         CONCAT44((~in_XMM2_Db & uVar6 | in_XMM2_Db) & uVar4,
                  (~-(uint)(fVar5 <= in_XMM2_Da) & (uint)fVar5 | (uint)fVar7 & -(uint)(fVar5 <= in_XMM2_Da)) &
                  -(uint)(fVar5 <= fVar1)));
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PivotFor
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PivotFor (UnityEngine_Vector2_o anchor, float left, float top, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x3b53a20

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PivotFor
          (UnityEngine_Vector2_o anchor,float left,float top,UnityEngine_Vector2_o size,MethodInfo *method)

{
  undefined8 in_XMM0_Qb;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float in_XMM1_Db;
  float in_XMM2_Db;
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  
  auVar1._0_4_ = anchor.fields.x - left;
  auVar1._4_4_ = anchor.fields.y - (top - size.fields.y);
  auVar1._8_4_ = (float)in_XMM0_Qb - in_XMM1_Db;
  auVar1._12_4_ = (float)((ulong)in_XMM0_Qb >> 0x20) - in_XMM2_Db;
  auVar2._8_4_ = in_XMM3_Dc;
  auVar2._0_8_ = size.fields;
  auVar2._12_4_ = in_XMM3_Dd;
  auVar2 = divps(auVar1,auVar2);
  return (UnityEngine_Vector2_o)auVar2._0_8_;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetPivot
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetPivot (UnityEngine_RectTransform_o* rect, UnityEngine_Vector2_o pivot, const MethodInfo* method);
// 0x3b53a40

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetPivot
               (UnityEngine_RectTransform_o *rect,UnityEngine_Vector2_o pivot,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector2_Fields UStack_58;
  UnityEngine_Vector2_Fields UStack_50;
  
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    value = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot(rect,pivot,(MethodInfo *)0x0);
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)rect,value,(MethodInfo *)0x0);
    return;
  }
  UVar2 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
  UVar1.y = UStack_50.y;
  UVar1.x = UStack_50.x;
  UStack_50 = UVar2;
  if (g_data_057a9cfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    g_data_057a9cfd = '\x01';
    UVar1 = UStack_50;
  }
  UStack_58.x = 0.0;
  UStack_58.y = 0.0;
  if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    UVar1 = UStack_50;
  }
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
            (rect,(UnityEngine_Vector2_o)UStack_50,(UnityEngine_Camera_o *)0x0,
             (UnityEngine_Vector2_o *)&UStack_58,(MethodInfo *)0x0);
  UStack_50 = UVar1;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Clamp
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clamp (float value, float min, float max, const MethodInfo* method);
// 0x3b539f0

float Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clamp
                (float value,float min,float max,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = max;
  if (value <= max) {
    fVar1 = value;
  }
  return (float)(~-(uint)(min <= value) & (uint)min |
                (~-(uint)(min <= max) & (uint)min | (uint)fVar1 & -(uint)(min <= max)) & -(uint)(min <= value)
                );
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$<AddBackdrop>b__20_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___AddBackdrop_b__20_0 (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x3b53b20

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___AddBackdrop_b__20_0
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  MethodInfo *in_R8;
  
  if (g_data_057a9ced == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    g_data_057a9ced = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                 System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,instance,1,1,in_R8);
        Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}



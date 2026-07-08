// Type: Gisketch.Aottg2UI.Overlays.GisketchOverlayManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchOverlayManager.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$get_PreviousSelected
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_PreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, const MethodInfo* method);
// 0x3ae92a0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__get_PreviousSelected
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
          MethodInfo *method)

{
  return (__this->fields)._PreviousSelected_k__BackingField;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$set_PreviousSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_PreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x3ae92b0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__set_PreviousSelected
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               UnityEngine_GameObject_o *value,MethodInfo *method)

{
  (__this->fields)._PreviousSelected_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._PreviousSelected_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, int32_t kind, System_String_o* id, UnityEngine_GameObject_o* host, Gisketch_Aottg2UI_Building_GisketchView_o* inner, const MethodInfo* method);
// 0x3ae6570

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               int32_t kind,System_String_o *id,UnityEngine_GameObject_o *host,
               Gisketch_Aottg2UI_Building_GisketchView_o *inner,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o **ppGVar1;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar2;
  UnityEngine_RectTransform_o *pUVar3;
  
  if (DAT_057013dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GisketchView);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddRange);
    DAT_057013dd = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Kind = kind;
  (__this->fields).Id = id;
  il2cpp_runtime_glue(&(__this->fields).Id,id);
  (__this->fields).Host = host;
  il2cpp_runtime_glue(&(__this->fields).Host);
  pGVar2 = (Gisketch_Aottg2UI_Building_GisketchView_o *)il2cpp_runtime_glue(TypeInfo_GisketchView);
  Gisketch_Aottg2UI_Building_GisketchView___ctor(pGVar2,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields).View;
  (__this->fields).View = pGVar2;
  il2cpp_runtime_glue(ppGVar1,pGVar2);
  pGVar2 = (__this->fields).View;
  if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchView__SetRoot(pGVar2,host,(MethodInfo *)0x0);
    pGVar2 = *ppGVar1;
    if (((pGVar2 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) &&
        (inner != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) &&
       (__this_00 = (pGVar2->fields)._MotionTargets_k__BackingField,
       __this_00 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0)) {
      System_Collections_Generic_List<GisketchMotionTarget>__AddRange
                (__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)
                 (inner->fields)._MotionTargets_k__BackingField,MethodInfo_Void_AddRange);
      (__this->fields).ContentRoot = (inner->fields)._Root_k__BackingField;
      il2cpp_runtime_glue(&(__this->fields).ContentRoot);
      if (host != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = (UnityEngine_RectTransform_o *)
                 UnityEngine_GameObject__GetComponent<object>(host,MethodInfo_RectTransform_GetComponent_RectTransform);
        (__this->fields).HostRect = pUVar3;
        il2cpp_runtime_glue(&(__this->fields).HostRect,pUVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$SetPreviousSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__SetPreviousSelected (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* __this, UnityEngine_GameObject_o* previousSelected, const MethodInfo* method);
// 0x3ae6c90

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance__SetPreviousSelected
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this,
               UnityEngine_GameObject_o *previousSelected,MethodInfo *method)

{
  (__this->fields)._PreviousSelected_k__BackingField = previousSelected;
  il2cpp_runtime_glue(&(__this->fields)._PreviousSelected_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.<>c__DisplayClass42_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass42_0___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass42_0_o* __this, const MethodInfo* method);
// 0x3ae8fe0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_<>c__DisplayClass42_0___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass42_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.<>c__DisplayClass42_0$$<CloseInstance>b__0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass42_0___CloseInstance_b__0 (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass42_0_o* __this, const MethodInfo* method);
// 0x3ae92c0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_<>c__DisplayClass42_0__<CloseInstance>b__0
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___c__DisplayClass42_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  
  pGVar1 = (__this->fields).instance;
  if (pGVar1 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  x = (UnityEngine_Object_o *)(pGVar1->fields).Host;
  if (DAT_057013dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013dc = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar2 == '\0') {
    UnityEngine_Object__DestroyImmediate(x,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy(x,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$BuildOverlayInstance
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* anchor, int32_t kind, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x3ae5860

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,
          UnityEngine_GameObject_o *anchor,int32_t kind,bool_conflict forceBelow,
          bool_conflict matchAnchorWidth,float popoverGap,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_RuntimeTypeHandle_o handle;
  System_String_o *pSVar1;
  MethodInfo *pMVar2;
  System_Type_array *components;
  System_Type_o *pSVar3;
  long lVar4;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_RectTransform_o *rect;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  Gisketch_Aottg2UI_Building_GisketchView_o *inner;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *__this_03;
  undefined8 uVar6;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *pGVar7;
  MethodInfo *method_00;
  MethodInfo *pMVar8;
  MethodInfo *in_stack_ffffffffffffff58;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff68;
  System_String_o local_88;
  char *pcStack_70;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *local_68;
  UnityEngine_GameObject_o *local_60;
  System_String_c *local_58;
  Il2CppMethodPointer pIStack_50;
  System_String_Fields local_48;
  char *pcStack_40;
  
  local_60 = anchor;
  if (DAT_057013bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_AddComponent_FlexLayout);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_OverlayInstance);
    il2cpp_init_method_metadata(&TypeInfo_OverlayKind);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"Overlay.BuildOverlayInstance");
    il2cpp_init_method_metadata(&"null");
    DAT_057013bf = '\x01';
  }
  local_48 = (System_String_Fields)0x0;
  pcStack_40 = (char *)0x0;
  local_58 = (System_String_c *)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  local_88.klass = TypeInfo_OverlayKind;
  local_88.monitor = (void *)0xffffffffffffffff;
  local_88.fields._stringLength = kind;
  pSVar1 = System_Enum__ToString((System_Enum_o *)&local_88,(MethodInfo *)0x0);
  pMVar8 = "Overlay.BuildOverlayInstance";
  local_68 = &overlay->fields;
  pGVar7 = local_68;
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&"null";
  }
  pMVar2 = (MethodInfo *)System_String__Concat(pSVar1," ",pGVar7->id,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_88.fields._stringLength = 0;
  local_88.fields._firstChar = 0;
  local_88.fields._6_2_ = 0;
  pcStack_70 = (char *)0x0;
  local_88.klass = (System_String_c *)0x0;
  local_88.monitor = (Il2CppMethodPointer)0x0;
  __this_00.fields._detail = (System_String_o *)in_stack_ffffffffffffff60;
  __this_00.fields._area = (System_String_o *)in_stack_ffffffffffffff58;
  __this_00.fields._startMs._0_4_ = in_stack_ffffffffffffff68;
  __this_00.fields._startMs._4_4_ = forceBelow;
  __this_00.fields._enabled = matchAnchorWidth;
  __this_00.fields._hotLoop = (bool_conflict)popoverGap;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__this_00,&local_88,(System_String_o *)pMVar8,pMVar2);
  local_48 = local_88.fields;
  pcStack_40 = pcStack_70;
  local_58 = local_88.klass;
  pIStack_50 = local_88.monitor;
  pSVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OverlayName(overlay,pMVar8);
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pSVar3 != (System_Type_o *)0x0) {
    lVar4 = il2cpp_runtime_glue(pSVar3,(((components->obj).klass)->_1).element_class);
    if (lVar4 == 0) {
      uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar6,0);
    }
  }
  if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  components->m_Items[0] = pSVar3;
  il2cpp_runtime_glue(components->m_Items,pSVar3);
  __this_02 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this_02,pSVar1,components,(MethodInfo *)0x0);
  if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar5 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pMVar2 = (MethodInfo *)0x0;
  UnityEngine_Transform__SetParent(pUVar5,(__this->fields)._layer,0,(MethodInfo *)0x0);
  UnityEngine_GameObject__AddComponent<object>(__this_02,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
  pMVar8 = MethodInfo_RectTransform_GetComponent_RectTransform;
  rect = (UnityEngine_RectTransform_o *)
         UnityEngine_GameObject__GetComponent<object>(__this_02,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch(rect,pMVar8);
  flex = (Gilzoide_FlexUi_FlexLayout_o *)
         UnityEngine_GameObject__AddComponent<object>(__this_02,MethodInfo_FlexLayout_AddComponent_FlexLayout);
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ConfigureHost
            (flex,(uint)(byte)(overlay->fields).modal,method_00);
  if ((char)(overlay->fields).modal == '\0') {
    if (*(char *)((long)&(overlay->fields).modal + 1) != '\0') {
      pUVar5 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
                (__this,pUVar5,1,(UnityEngine_Color_o)ZEXT816(0),pMVar2);
    }
  }
  else {
    pUVar5 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
              (__this,pUVar5,(uint)*(byte *)((long)&(overlay->fields).modal + 1),
               (UnityEngine_Color_o)(ZEXT816(0x3f1eb85200000000) << 0x40),pMVar2);
  }
  pUVar5 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
  context = (__this->fields)._context;
  if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
    il2cpp_init_class();
  }
  inner = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
                    (overlay,pUVar5,context,(MethodInfo *)0x0);
  if (inner != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    pMVar8 = (MethodInfo *)(ulong)(byte)matchAnchorWidth;
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
              (overlay,(inner->fields)._Root_k__BackingField,rect,local_60,forceBelow & 0xff,
               matchAnchorWidth & 0xff,popoverGap,in_stack_ffffffffffffff58);
    pSVar1 = local_68->id;
    __this_03 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                il2cpp_runtime_glue(TypeInfo_OverlayInstance);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance___ctor
              (__this_03,kind,pSVar1,__this_02,inner,pMVar8);
    __this_01.fields._detail = (System_String_o *)in_stack_ffffffffffffff60;
    __this_01.fields._area = (System_String_o *)in_stack_ffffffffffffff58;
    __this_01.fields._startMs._0_4_ = kind;
    __this_01.fields._startMs._4_4_ = forceBelow;
    __this_01.fields._enabled = matchAnchorWidth;
    __this_01.fields._hotLoop = (bool_conflict)popoverGap;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&local_58);
    return __this_03;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$OpenInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, UnityEngine_GameObject_o* anchor, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate, const MethodInfo* method);
// 0x3ae66a0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               UnityEngine_GameObject_o *anchor,bool_conflict focusOnOpen,bool_conflict forceBelow,
               bool_conflict matchAnchorWidth,float popoverGap,bool_conflict animate,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_array *pGVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  long lVar4;
  System_String_o *detail;
  System_String_o **ppSVar5;
  MethodInfo *pMVar6;
  UnityEngine_GameObject_o *pUVar7;
  undefined4 in_register_0000008c;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool_conflict bVar12;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  uVar8 = matchAnchorWidth;
  if (DAT_057013c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"Overlay.OpenInstance");
    DAT_057013c0 = '\x01';
  }
  detail = "Overlay.OpenInstance";
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  bVar12 = 0;
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    ppSVar5 = (System_String_o **)&"null";
  }
  else {
    ppSVar5 = &(instance->fields).Id;
  }
  pMVar6 = (MethodInfo *)*ppSVar5;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  __this_01.fields._area._4_4_ = popoverGap;
  __this_01.fields._area._0_4_ = uVar8;
  __this_01.fields._detail = (System_String_o *)anchor;
  __this_01.fields._startMs._0_4_ = uVar9;
  __this_01.fields._startMs._4_4_ = uVar10;
  __this_01.fields._enabled = uVar11;
  __this_01.fields._hotLoop = bVar12;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_01,&local_58,detail,pMVar6);
  uVar9 = local_58.klass._0_4_;
  uVar10 = local_58.klass._4_4_;
  uVar11 = local_58.monitor._0_4_;
  bVar12 = local_58.monitor._4_4_;
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    pUVar7 = (instance->fields).Host;
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar6 = (MethodInfo *)UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
    if (pMVar6 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_Transform__SetAsLastSibling((UnityEngine_Transform_o *)pMVar6,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow
              ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)pMVar6,instance,anchor,
               forceBelow & 0xff,uVar8 & 0xff,popoverGap,
               (MethodInfo *)CONCAT44(in_register_0000008c,matchAnchorWidth));
    if ((char)focusOnOpen == '\0') {
      pUVar7 = (UnityEngine_GameObject_o *)0x0;
    }
    else {
      pUVar7 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(pMVar6);
    }
    (instance->fields)._PreviousSelected_k__BackingField = pUVar7;
    il2cpp_runtime_glue(&(instance->fields)._PreviousSelected_k__BackingField);
    lVar4 = MethodInfo_Void_Add;
    __this_00 = (__this->fields)._stack;
    if (__this_00 ==
        (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar3 = (__this_00->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar2 = (__this_00->fields)._size;
    pMVar6 = (MethodInfo *)instance;
    if (uVar2 < (uint)pGVar3->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pGVar3->m_Items[(int)uVar2] = instance;
      il2cpp_runtime_glue(pGVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)instance,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    if ((instance->fields).Kind == 1) {
      (__this->fields)._activePopover = instance;
      pMVar6 = (MethodInfo *)instance;
      il2cpp_runtime_glue(&(__this->fields)._activePopover);
    }
    if ((char)animate != '\0') {
      view = (instance->fields).View;
      if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar6 = (MethodInfo *)0x0;
      Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewEnter(view,(MethodInfo *)0x0);
    }
    if ((char)focusOnOpen != '\0') {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,pMVar6);
    }
  }
  __this_02.fields._area._4_4_ = popoverGap;
  __this_02.fields._area._0_4_ = uVar8;
  __this_02.fields._detail = (System_String_o *)anchor;
  __this_02.fields._startMs._0_4_ = uVar9;
  __this_02.fields._startMs._4_4_ = uVar10;
  __this_02.fields._enabled = uVar11;
  __this_02.fields._hotLoop = bVar12;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PrepareLayoutForShow
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, UnityEngine_GameObject_o* anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x3ae69b0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayoutForShow
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               UnityEngine_GameObject_o *anchor,bool_conflict forceBelow,
               bool_conflict matchAnchorWidth,float popoverGap,MethodInfo *method)

{
  MethodInfo *method_00;
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_String_o *detail;
  System_String_o **ppSVar2;
  undefined4 in_register_0000000c;
  MethodInfo *method_01;
  MethodInfo *method_02;
  bool_conflict bVar3;
  undefined4 in_register_00000084;
  undefined1 in_stack_ffffffffffffff78 [12];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool_conflict bVar7;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  method_01 = (MethodInfo *)CONCAT44(in_register_0000000c,forceBelow);
  bVar3 = matchAnchorWidth;
  if (DAT_057013c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&"Overlay.PrepareLayoutForShow");
    il2cpp_init_method_metadata(&"null");
    DAT_057013c1 = '\x01';
  }
  detail = "Overlay.PrepareLayoutForShow";
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  bVar7 = 0;
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    ppSVar2 = (System_String_o **)&"null";
  }
  else {
    ppSVar2 = &(instance->fields).Id;
  }
  method_00 = (MethodInfo *)*ppSVar2;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  __this_00.fields._detail._4_4_ = popoverGap;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff78;
  __this_00.fields._startMs._0_4_ = uVar4;
  __this_00.fields._startMs._4_4_ = uVar5;
  __this_00.fields._enabled = uVar6;
  __this_00.fields._hotLoop = bVar7;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_00,&local_58,detail,method_00)
  ;
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    uVar4 = local_58.klass._0_4_;
    uVar5 = local_58.klass._4_4_;
    uVar6 = local_58.monitor._0_4_;
    bVar7 = local_58.monitor._4_4_;
    if ((instance->fields).Kind == 1) {
      if ((char)matchAnchorWidth != '\0') {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
                  ((instance->fields).ContentRoot,(instance->fields).HostRect,anchor,method_01);
      }
      pUVar1 = (instance->fields).Host;
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar1,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                ((instance->fields).ContentRoot,(instance->fields).HostRect,anchor,forceBelow & 0xff
                 ,popoverGap,(MethodInfo *)CONCAT44(in_register_00000084,bVar3));
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout
                ((instance->fields).Host,(MethodInfo *)0x0);
    }
    else {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight
                ((instance->fields).HostRect,(instance->fields).ContentRoot,method_02);
      pUVar1 = (instance->fields).Host;
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar1,(MethodInfo *)0x0);
    }
    __this_01.fields._detail._4_4_ = popoverGap;
    __this_01.fields._0_12_ = in_stack_ffffffffffffff78;
    __this_01.fields._startMs._0_4_ = uVar4;
    __this_01.fields._startMs._4_4_ = uVar5;
    __this_01.fields._enabled = uVar6;
    __this_01.fields._hotLoop = bVar7;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PrepareLayout
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* hostRect, UnityEngine_GameObject_o* anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap, const MethodInfo* method);
// 0x3ae6310

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PrepareLayout
               (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,
               UnityEngine_GameObject_o *root,UnityEngine_RectTransform_o *hostRect,
               UnityEngine_GameObject_o *anchor,bool_conflict forceBelow,
               bool_conflict matchAnchorWidth,float popoverGap,MethodInfo *method)

{
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  System_String_o *detail;
  byte bVar1;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *pGVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_01;
  undefined4 in_register_00000084;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool_conflict bVar8;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  uVar4 = forceBelow;
  if (DAT_057013c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&"Overlay.PrepareLayout");
    DAT_057013c2 = '\x01';
  }
  detail = "Overlay.PrepareLayout";
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  bVar8 = 0;
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&"null";
  }
  else {
    pGVar2 = &overlay->fields;
  }
  method_00 = (MethodInfo *)pGVar2->id;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  __this.fields._area._4_4_ = popoverGap;
  __this.fields._area._0_4_ = uVar4;
  __this.fields._detail = (System_String_o *)anchor;
  __this.fields._startMs._0_4_ = uVar5;
  __this.fields._startMs._4_4_ = uVar6;
  __this.fields._enabled = uVar7;
  __this.fields._hotLoop = bVar8;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this,&local_58,detail,method_00);
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar5 = local_58.klass._0_4_;
  uVar6 = local_58.klass._4_4_;
  uVar7 = local_58.monitor._0_4_;
  bVar8 = local_58.monitor._4_4_;
  if ((char)(overlay->fields).modal == '\0') {
    bVar1 = 0;
  }
  else {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight(hostRect,root,method_01)
    ;
    bVar1 = (byte)(overlay->fields).modal;
  }
  if (((uint)(byte)~bVar1 & matchAnchorWidth & 0xffU) != 0) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
              (root,hostRect,anchor,(MethodInfo *)(ulong)(matchAnchorWidth & 0xffU));
  }
  if (hostRect != (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)hostRect,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar3,(MethodInfo *)0x0);
    if ((char)(overlay->fields).modal == '\0') {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                (root,hostRect,anchor,uVar4 & 0xff,popoverGap,
                 (MethodInfo *)CONCAT44(in_register_00000084,forceBelow));
    }
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)hostRect,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(pUVar3,(MethodInfo *)0x0);
    __this_00.fields._area._4_4_ = popoverGap;
    __this_00.fields._area._0_4_ = uVar4;
    __this_00.fields._detail = (System_String_o *)anchor;
    __this_00.fields._startMs._0_4_ = uVar5;
    __this_00.fields._startMs._4_4_ = uVar6;
    __this_00.fields._enabled = uVar7;
    __this_00.fields._hotLoop = bVar8;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDynamicPopover
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* root, UnityEngine_GameObject_o* anchor, bool focusOnOpen, bool matchAnchorWidth, float gap, bool animate, const MethodInfo* method);
// 0x3ae73f0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *root,UnityEngine_GameObject_o *anchor,
          bool_conflict focusOnOpen,bool_conflict matchAnchorWidth,float gap,bool_conflict animate,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  UnityEngine_GameObject_o *pUVar2;
  undefined4 in_register_00000084;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000084,focusOnOpen);
  if (DAT_057013c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchOverlayDefinition);
    DAT_057013c3 = '\x01';
  }
  if (root == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pUVar2 = (UnityEngine_GameObject_o *)0x0;
  }
  else {
    pGVar1 = (__this->fields)._activePopover;
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,pGVar1,0,0,method_00);
    }
    overlay = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchOverlayDefinition)
    ;
    *(undefined2 *)&(overlay->fields).modal = 0x101;
    System_Object___ctor((Il2CppObject *)overlay,(MethodInfo *)0x0);
    if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (overlay->fields).id = id;
    il2cpp_runtime_glue(&overlay->fields,id);
    *(undefined1 *)&(overlay->fields).modal = 0;
    (overlay->fields).root = root;
    il2cpp_runtime_glue(&(overlay->fields).root,root);
    pUVar2 = (UnityEngine_GameObject_o *)0x0;
    pGVar1 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                       (__this,overlay,anchor,1,focusOnOpen & 0xff,0,matchAnchorWidth & 0xff,gap,
                        animate & 0xff,in_stack_ffffffffffffffa8);
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      pUVar2 = (pGVar1->fields).ContentRoot;
    }
  }
  return pUVar2;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ClosePopover
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool animate, const MethodInfo* method);
// 0x3ae7910

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          bool_conflict animate,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar1;
  bool_conflict bVar2;
  undefined8 unaff_RBP;
  MethodInfo *in_R8;
  
  if ((__this->fields)._activePopover ==
      (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    bVar2 = 0;
  }
  else {
    bVar2 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pGVar1 = (__this->fields)._activePopover;
      if (pGVar1 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      unaff_RBP = 0;
      bVar2 = System_String__op_Inequality((pGVar1->fields).Id,id,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        return 0;
      }
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
              (__this,(__this->fields)._activePopover,0,animate & 0xff,in_R8);
    bVar2 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CycleFocus
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CycleFocus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, bool backwards, const MethodInfo* method);
// 0x3ae7980

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CycleFocus
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,bool_conflict backwards,
          MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_057013d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    DAT_057013d5 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
  {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                          MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      if (pIVar3 != (Il2CppObject *)0x0) {
        bVar2 = Gisketch_Aottg2UI_Actions_GisketchFocusNavigation__Cycle
                          ((UnityEngine_GameObject_o *)pIVar3[3].klass,backwards & 0xff,
                           (MethodInfo *)0x0);
        return bVar2;
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SelectInitialFocus
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, const MethodInfo* method);
// 0x3ae7a60

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  TMPro_TMP_InputField_o *__this;
  UnityEngine_UI_Selectable_o *selectable;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *root;
  
  if (DAT_057013c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013c4 = '\x01';
  }
  if ((instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) ||
     ((instance->fields).Kind != 0)) {
    __this = (TMPro_TMP_InputField_o *)0x0;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    __this = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput
                       ((instance->fields).ContentRoot,method);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
              ((UnityEngine_UI_Selectable_o *)__this,method_00);
    if (__this != (TMPro_TMP_InputField_o *)0x0) {
      (*(__this->klass->vtable)._38_Select.methodPtr)(__this);
      TMPro_TMP_InputField__ActivateInputField(__this,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (instance == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    root = (UnityEngine_GameObject_o *)0x0;
  }
  else {
    root = (instance->fields).ContentRoot;
  }
  selectable = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable(root,method_00);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(selectable,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FirstInput
// il2cpp: TMPro_TMP_InputField_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3ae7b40

TMPro_TMP_InputField_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstInput
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  TMPro_TMP_InputField_o *x;
  char cVar2;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  
  if (DAT_057013c5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013c5 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if ((root == (UnityEngine_GameObject_o *)0x0) ||
       (pSVar4 = UnityEngine_GameObject__GetComponentsInChildren<object>(root,0,MethodInfo_TMP_InputField___GetComponentsInChildren_TMP_Inp),
       pSVar4 == (System_Object_array *)0x0)) {
LAB_03ae7c7b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          x = (TMPro_TMP_InputField_o *)pSVar4->m_Items[uVar5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                            );
          if ((char)bVar3 != '\0') {
            if (x == (TMPro_TMP_InputField_o *)0x0) goto LAB_03ae7c7b;
            cVar2 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x);
            if ((cVar2 != '\0') &&
               (cVar2 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)(x), cVar2 != '\0')) {
              return x;
            }
          }
          uVar5 = uVar5 + 1;
          uVar1 = (uint)pSVar4->max_length;
          if ((long)(int)uVar1 <= (long)uVar5) {
            return (TMPro_TMP_InputField_o *)0x0;
          }
        } while (uVar5 < uVar1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (TMPro_TMP_InputField_o *)0x0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ApplyDialogMaxHeight
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight (UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3ae7220

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ApplyDialogMaxHeight
               (UnityEngine_RectTransform_o *host,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar1;
  bool_conflict bVar2;
  int32_t iVar3;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  float value_00;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  
  if (DAT_057013c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_057013c6 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (root == (UnityEngine_GameObject_o *)0x0) goto LAB_03ae73dc;
    __this = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_GameObject__GetComponent<object>(root,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (host != (UnityEngine_RectTransform_o *)0x0) {
    UVar5 = UnityEngine_RectTransform__get_rect(host,(MethodInfo *)0x0);
    fVar4 = UVar5.fields.m_Height;
    if (((fVar4 <= 0.0) &&
        (__this_00 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Transform__get_parent
                               ((UnityEngine_Transform_o *)host,(MethodInfo *)0x0),
        __this_00 != (UnityEngine_RectTransform_o *)0x0)) && (__this_00->klass == TypeInfo_RectTransform)) {
      UVar5 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      fVar4 = UVar5.fields.m_Height;
    }
    if (fVar4 <= 0.0) {
      iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
      fVar4 = (float)iVar3;
    }
    if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      value_00 = 0.0;
      if (0.0 <= fVar4 + -64.0) {
        value_00 = fVar4 + -64.0;
      }
      GVar1 = (__this->fields)._maxHeight.fields;
      if ((((ulong)GVar1 >> 0x20 == 1) && (fVar4 = GVar1.Value, 0.0 < fVar4)) && (fVar4 <= value_00)
         ) {
        value_00 = fVar4;
      }
      if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value_00,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__set_MaxHeight(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03ae73dc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PositionPopover
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover (UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, bool forceBelow, float gap, const MethodInfo* method);
// 0x3ae6e20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
               (UnityEngine_GameObject_o *root,UnityEngine_RectTransform_o *host,
               UnityEngine_GameObject_o *anchor,bool_conflict forceBelow,float gap,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  bool_conflict bVar3;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  UnityEngine_RectTransform_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar4;
  MethodInfo *method_00;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar5;
  undefined8 in_XMM1_Qb;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined8 extraout_XMM1_Qb_02;
  undefined8 extraout_XMM1_Qb_03;
  undefined8 extraout_XMM1_Qb_04;
  undefined8 extraout_XMM1_Qb_05;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar6 [16];
  float fVar9;
  uint uVar11;
  undefined1 auVar10 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar18;
  undefined1 auVar17 [16];
  UnityEngine_Vector3_o value;
  UnityEngine_Rect_o UVar19;
  UnityEngine_Rect_o UVar20;
  UnityEngine_Rect_o UVar21;
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
  
  if (DAT_057013c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_057013c7 = '\x01';
    in_XMM1_Qb = extraout_XMM1_Qb;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
    in_XMM1_Qb = extraout_XMM1_Qb_00;
  }
  __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (root == (UnityEngine_GameObject_o *)0x0) goto LAB_03ae720d;
    __this = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_GameObject__GetComponent<object>(root,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
    in_XMM1_Qb = extraout_XMM1_Qb_01;
  }
  __this_00 = (UnityEngine_RectTransform_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (root == (UnityEngine_GameObject_o *)0x0) goto LAB_03ae720d;
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent<object>(root,MethodInfo_RectTransform_GetComponent_RectTransform);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
    in_XMM1_Qb = extraout_XMM1_Qb_02;
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
      in_XMM1_Qb = extraout_XMM1_Qb_03;
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
        in_XMM1_Qb = extraout_XMM1_Qb_04;
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)host,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
      if ((char)bVar3 == '\0') {
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
          in_XMM1_Qb = extraout_XMM1_Qb_05;
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)anchor,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (host != (UnityEngine_RectTransform_o *)0x0) {
            UVar19 = UnityEngine_RectTransform__get_rect(host,(MethodInfo *)0x0);
            uVar7 = in_XMM1_Qb;
            UVar20 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect
                               (host,anchor,method_00);
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              uVar8 = uVar7;
              UVar21 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
              auVar17._0_8_ = UVar21.fields._8_8_;
              auVar17._8_8_ = uVar8;
              auVar17 = maxps(_DAT_00ccd980,auVar17);
              fVar18 = auVar17._4_4_;
              local_b8.fields.x = UVar20.fields.m_XMin;
              local_b8.fields.y = UVar20.fields.m_YMin;
              fStack_b0 = (float)extraout_XMM0_Qb_00;
              fStack_ac = (float)((ulong)extraout_XMM0_Qb_00 >> 0x20);
              local_78 = UVar19.fields.m_XMin;
              fStack_74 = UVar19.fields.m_YMin;
              uStack_70 = (uint)extraout_XMM0_Qb;
              uStack_6c = (uint)((ulong)extraout_XMM0_Qb >> 0x20);
              local_a8 = UVar19.fields.m_Width;
              fStack_a4 = UVar19.fields.m_Height;
              uStack_a0 = (uint)in_XMM1_Qb;
              uStack_9c = (uint)((ulong)in_XMM1_Qb >> 0x20);
              fVar12 = fStack_a4 + fStack_74;
              local_68 = UVar20.fields.m_Width;
              fStack_64 = UVar20.fields.m_Height;
              fStack_60 = (float)uVar7;
              fStack_5c = (float)((ulong)uVar7 >> 0x20);
              bVar2 = false;
              if ((local_b8.fields.y - fStack_74 < fVar18 + gap) &&
                 (bVar2 = false, (char)forceBelow == '\0')) {
                bVar2 = local_b8.fields.y - fStack_74 < fVar12 - (fStack_64 + local_b8.fields.y);
              }
              local_b8.fields.x = local_b8.fields.x + local_68 * 0.5;
              fVar13 = local_b8.fields.y + fStack_64 * 0.5;
              fStack_b0 = fStack_b0 + fStack_60 * 0.0;
              fStack_ac = fStack_ac + fStack_5c * 0.0;
              fVar9 = local_b8.fields.x - auVar17._0_4_ * 0.5;
              fVar14 = (local_a8 + local_78) - auVar17._0_4_;
              fVar16 = fVar14;
              if (fVar9 <= fVar14) {
                fVar16 = fVar9;
              }
              auVar10._0_4_ =
                   (~-(uint)(local_78 <= fVar9) & (uint)local_78 |
                   (uint)fVar16 & -(uint)(local_78 <= fVar9)) & -(uint)(local_78 <= fVar14);
              auVar10._4_4_ =
                   (~(uint)fVar13 & (uint)fStack_74 | (uint)fStack_a4 & (uint)fVar13) &
                   (uint)fStack_a4;
              auVar10._8_4_ =
                   (~(uint)fStack_b0 & uStack_70 | uStack_a0 & (uint)fStack_b0) & uStack_a0;
              auVar10._12_4_ =
                   (~(uint)fStack_ac & uStack_6c | uStack_9c & (uint)fStack_ac) & uStack_9c;
              auVar15._0_4_ = ~-(uint)(local_78 <= fVar14) & (uint)local_78;
              auVar15._4_4_ = ~(uint)fStack_a4 & (uint)fStack_74;
              auVar15._8_4_ = ~uStack_a0 & uStack_70;
              auVar15._12_4_ = ~uStack_9c & uStack_6c;
              if (bVar2) {
                fVar16 = fStack_64 + local_b8.fields.y + gap + fVar18;
                local_b8.fields.y = fStack_64;
              }
              else {
                fVar16 = local_b8.fields.y - gap;
              }
              if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                il2cpp_init_class();
              }
              fVar9 = SUB164(auVar15 | auVar10,0);
              GVar4 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar9 - local_78,(MethodInfo *)0x0);
              if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                fVar5 = fStack_74 + fVar18;
                fVar14 = fVar12;
                if (fVar16 <= fVar12) {
                  fVar14 = fVar16;
                }
                uVar11 = (~(uint)local_b8.fields.y & (uint)fStack_74 |
                         (uint)fStack_a4 & (uint)local_b8.fields.y) & (uint)fStack_a4;
                uVar1 = ~(uint)fStack_a4;
                fVar16 = (float)(~-(uint)(fVar5 <= fVar12) & (uint)fVar5 |
                                (~-(uint)(fVar5 <= fVar16) & (uint)fVar5 |
                                (uint)fVar14 & -(uint)(fVar5 <= fVar16)) & -(uint)(fVar5 <= fVar12))
                ;
                Gilzoide_FlexUi_FlexLayout__set_MarginLeft(__this,GVar4,(MethodInfo *)0x0);
                GVar4 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar12 - fVar16,(MethodInfo *)0x0)
                ;
                Gilzoide_FlexUi_FlexLayout__set_MarginTop(__this,GVar4,(MethodInfo *)0x0);
                fStack_a4 = SUB164(auVar15 | auVar10,4);
                auVar6._0_4_ = local_b8.fields.x - fVar9;
                auVar6._4_4_ = fVar13 - (fVar16 - fVar18);
                auVar6._8_4_ = fStack_b0 - fStack_a4;
                auVar6._12_4_ = fStack_ac - (float)(uVar1 & (uint)fStack_74 | uVar11);
                auVar17 = divps(auVar6,auVar17);
                value = UnityEngine_Transform__get_position
                                  ((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
                local_b8.fields = auVar17._0_8_;
                UnityEngine_RectTransform__set_pivot(__this_00,local_b8,(MethodInfo *)0x0);
                UnityEngine_Transform__set_position
                          ((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
LAB_03ae720d:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$AnchorRect
// il2cpp: UnityEngine_Rect_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect (UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x3ae7f10

UnityEngine_Rect_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect
          (UnityEngine_RectTransform_o *host,UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  UnityEngine_Vector2_o screenPoint;
  UnityEngine_Vector2_o screenPoint_00;
  UnityEngine_Vector2_o UVar6;
  undefined1 auVar7 [16];
  bool_conflict bVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_array *fourCornersArray;
  ulong uVar10;
  UnityEngine_RectTransform_o *__this_00;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float fVar15;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar16;
  undefined4 extraout_XMM0_Dd_02;
  undefined8 uVar17;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o worldPoint;
  UnityEngine_Vector3_o worldPoint_00;
  UnityEngine_Rect_o UVar19;
  UnityEngine_Vector2_Fields local_80;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  float local_5c;
  undefined1 local_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  if (DAT_057013c8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_057013c8 = '\x01';
  }
  if (anchor != (UnityEngine_GameObject_o *)0x0) {
    pUVar9 = (UnityEngine_RectTransform_o *)
             UnityEngine_GameObject__get_transform(anchor,(MethodInfo *)0x0);
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar9 != (UnityEngine_RectTransform_o *)0x0) &&
       (__this_00 = (UnityEngine_RectTransform_o *)0x0, pUVar9->klass == TypeInfo_RectTransform)) {
      __this_00 = pUVar9;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      fourCornersArray = (UnityEngine_Vector3_array *)il2cpp_glue_02274930(TypeInfo_Vector3,4);
      if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
         (UnityEngine_RectTransform__GetWorldCorners(__this_00,fourCornersArray,(MethodInfo *)0x0),
         auVar7 = _local_78, fourCornersArray != (UnityEngine_Vector3_array *)0x0)) {
        fVar13 = fStack_44;
        if ((int)fourCornersArray->max_length == 0) {
LAB_03ae82fc:
          fStack_44 = fVar13;
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar1 = fourCornersArray->m_Items[0].fields.x;
        uVar3 = fourCornersArray->m_Items[0].fields.y;
        local_78._4_4_ = uVar3;
        local_78._0_4_ = uVar1;
        fVar13 = fourCornersArray->m_Items[0].fields.z;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          _fStack_70 = 0;
          local_48 = fVar13;
          il2cpp_init_class();
          uVar1 = local_78._0_4_;
          uVar3 = local_78._4_4_;
          auVar7 = _local_78;
          fVar13 = local_48;
        }
        _local_78 = auVar7;
        UVar18.fields.y = (float)uVar3;
        UVar18.fields.x = (float)uVar1;
        UVar18.fields.z = fVar13;
        UVar6 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                          ((UnityEngine_Camera_o *)0x0,UVar18,(MethodInfo *)0x0);
        fVar13 = UVar6.fields.x;
        fVar14 = UVar6.fields.y;
        fVar15 = (float)extraout_XMM0_Dc_01;
        fVar16 = (float)extraout_XMM0_Dd_01;
        if (DAT_057013ca == '\0') {
          fStack_70 = (float)extraout_XMM0_Dc_01;
          local_78._0_4_ = UVar6.fields.x;
          local_78._4_4_ = UVar6.fields.y;
          fStack_6c = (float)extraout_XMM0_Dd_01;
          il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
          DAT_057013ca = '\x01';
          fVar13 = (float)local_78._0_4_;
          fVar14 = (float)local_78._4_4_;
          fVar15 = fStack_70;
          fVar16 = fStack_6c;
        }
        local_80.x = 0.0;
        local_80.y = 0.0;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          local_78._4_4_ = fVar14;
          local_78._0_4_ = fVar13;
          fStack_70 = fVar15;
          fStack_6c = fVar16;
          il2cpp_init_class();
          fVar13 = (float)local_78._0_4_;
          fVar14 = (float)local_78._4_4_;
        }
        UVar6.fields.y = fVar14;
        UVar6.fields.x = fVar13;
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  (host,UVar6,(UnityEngine_Camera_o *)0x0,(UnityEngine_Vector2_o *)&local_80,
                   (MethodInfo *)0x0);
        local_78._0_4_ = local_80.x;
        fVar14 = local_80.y;
        fStack_44 = 0.0;
        local_48 = (float)local_78._0_4_;
        fVar13 = fVar14;
        if (1 < (int)fourCornersArray->max_length) {
          uVar10 = fourCornersArray->max_length & 0xffffffff;
          pfVar11 = &fourCornersArray->m_Items[1].fields.z;
          uVar12 = 1;
          fStack_70 = fStack_44;
          do {
            auVar7 = _local_58;
            local_78._4_4_ = fVar14;
            fStack_6c = fStack_70;
            fStack_40 = fStack_44;
            fStack_3c = fStack_44;
            if (uVar10 <= uVar12) goto LAB_03ae82fc;
            uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar11 + -2))->x;
            uVar4 = ((UnityEngine_Vector3_Fields *)(pfVar11 + -2))->y;
            local_58._4_4_ = uVar4;
            local_58._0_4_ = uVar2;
            fVar14 = *pfVar11;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              _uStack_50 = 0;
              local_5c = *pfVar11;
              fStack_44 = fVar13;
              fStack_3c = fStack_40;
              il2cpp_init_class();
              uVar2 = local_58._0_4_;
              uVar4 = local_58._4_4_;
              auVar7 = _local_58;
              fVar13 = fStack_44;
              fVar14 = local_5c;
            }
            fStack_44 = fVar13;
            _local_58 = auVar7;
            worldPoint_00.fields.y = (float)uVar4;
            worldPoint_00.fields.x = (float)uVar2;
            worldPoint_00.fields.z = fVar14;
            UVar6 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                              ((UnityEngine_Camera_o *)0x0,worldPoint_00,(MethodInfo *)0x0);
            fVar13 = UVar6.fields.x;
            fVar14 = UVar6.fields.y;
            uVar1 = extraout_XMM0_Dc_02;
            uVar3 = extraout_XMM0_Dd_02;
            if (DAT_057013ca == '\0') {
              uStack_50 = extraout_XMM0_Dc_02;
              local_58._0_4_ = UVar6.fields.x;
              local_58._4_4_ = UVar6.fields.y;
              uStack_4c = extraout_XMM0_Dd_02;
              il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
              DAT_057013ca = '\x01';
              fVar13 = (float)local_58._0_4_;
              fVar14 = (float)local_58._4_4_;
              uVar1 = uStack_50;
              uVar3 = uStack_4c;
            }
            local_80.x = 0.0;
            local_80.y = 0.0;
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              local_58._4_4_ = fVar14;
              local_58._0_4_ = fVar13;
              uStack_50 = uVar1;
              uStack_4c = uVar3;
              il2cpp_init_class();
              fVar13 = (float)local_58._0_4_;
              fVar14 = (float)local_58._4_4_;
            }
            screenPoint.fields.y = fVar14;
            screenPoint.fields.x = fVar13;
            UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      (host,screenPoint,(UnityEngine_Camera_o *)0x0,
                       (UnityEngine_Vector2_o *)&local_80,(MethodInfo *)0x0);
            fVar13 = local_80.x;
            if (fVar13 <= (float)local_78._0_4_) {
              local_78._0_4_ = fVar13;
            }
            if (local_48 <= fVar13) {
              local_48 = fVar13;
            }
            fVar15 = local_80.y;
            fVar14 = (float)local_78._4_4_;
            if (fVar15 <= (float)local_78._4_4_) {
              fVar14 = fVar15;
            }
            fVar13 = fStack_44;
            if (fStack_44 <= fVar15) {
              fVar13 = fVar15;
            }
            uVar12 = uVar12 + 1;
            uVar5 = (uint)fourCornersArray->max_length;
            uVar10 = (ulong)uVar5;
            pfVar11 = pfVar11 + 3;
            fStack_70 = (float)local_78._4_4_;
          } while ((long)uVar12 < (long)(int)uVar5);
        }
        uVar17 = CONCAT44(fVar13 - fVar14,local_48 - (float)local_78._0_4_);
        goto LAB_03ae82ed;
      }
    }
    else {
      __this = UnityEngine_GameObject__get_transform(anchor,(MethodInfo *)0x0);
      if (__this != (UnityEngine_Transform_o *)0x0) {
        UVar18 = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
        fVar13 = UVar18.fields.x;
        fVar14 = UVar18.fields.y;
        fVar15 = UVar18.fields.z;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          fStack_70 = (float)extraout_XMM0_Dc;
          local_78 = (undefined1  [8])UVar18.fields._0_8_;
          fStack_6c = (float)extraout_XMM0_Dd;
          local_48 = UVar18.fields.z;
          il2cpp_init_class();
          fVar13 = (float)local_78._0_4_;
          fVar14 = (float)local_78._4_4_;
          fVar15 = local_48;
        }
        worldPoint.fields.y = fVar14;
        worldPoint.fields.x = fVar13;
        worldPoint.fields.z = fVar15;
        UVar6 = UnityEngine_RectTransformUtility__WorldToScreenPoint
                          ((UnityEngine_Camera_o *)0x0,worldPoint,(MethodInfo *)0x0);
        fVar13 = UVar6.fields.x;
        fVar14 = UVar6.fields.y;
        fVar15 = (float)extraout_XMM0_Dc_00;
        fVar16 = (float)extraout_XMM0_Dd_00;
        if (DAT_057013ca == '\0') {
          fStack_70 = (float)extraout_XMM0_Dc_00;
          local_78._0_4_ = UVar6.fields.x;
          local_78._4_4_ = UVar6.fields.y;
          fStack_6c = (float)extraout_XMM0_Dd_00;
          il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
          DAT_057013ca = '\x01';
          fVar13 = (float)local_78._0_4_;
          fVar14 = (float)local_78._4_4_;
          fVar15 = fStack_70;
          fVar16 = fStack_6c;
        }
        local_80.x = 0.0;
        local_80.y = 0.0;
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          local_78._4_4_ = fVar14;
          local_78._0_4_ = fVar13;
          fStack_70 = fVar15;
          fStack_6c = fVar16;
          il2cpp_init_class();
          fVar13 = (float)local_78._0_4_;
          fVar14 = (float)local_78._4_4_;
        }
        screenPoint_00.fields.y = fVar14;
        screenPoint_00.fields.x = fVar13;
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  (host,screenPoint_00,(UnityEngine_Camera_o *)0x0,
                   (UnityEngine_Vector2_o *)&local_80,(MethodInfo *)0x0);
        local_78._0_4_ = local_80.x;
        fVar14 = local_80.y;
        if (DAT_056fe093 == '\0') {
          _fStack_70 = 0;
          local_78._0_4_ = local_80.x;
          local_78._4_4_ = local_80.y;
          il2cpp_init_method_metadata(&TypeInfo_Vector2);
          DAT_056fe093 = '\x01';
          fVar14 = (float)local_78._4_4_;
        }
        uVar17 = **(undefined8 **)(TypeInfo_Vector2 + 0xb8);
LAB_03ae82ed:
        UVar19.fields.m_YMin = fVar14;
        UVar19.fields.m_XMin = (float)local_78._0_4_;
        UVar19.fields.m_Width = (float)(int)uVar17;
        UVar19.fields.m_Height = (float)(int)((ulong)uVar17 >> 0x20);
        return (UnityEngine_Rect_o)UVar19.fields;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$MatchPopoverWidth
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth (UnityEngine_GameObject_o* root, UnityEngine_RectTransform_o* host, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x3ae6cb0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__MatchPopoverWidth
               (UnityEngine_GameObject_o *root,UnityEngine_RectTransform_o *host,
               UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  bool_conflict bVar1;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  Gilzoide_FlexUi_Yoga_YGValue_o value;
  MethodInfo *method_00;
  float value_00;
  UnityEngine_Rect_o UVar2;
  
  if (DAT_057013c9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_057013c9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (root == (UnityEngine_GameObject_o *)0x0) goto LAB_03ae6e19;
    __this = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_GameObject__GetComponent<object>(root,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)host,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)anchor,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        UVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AnchorRect(host,anchor,method_00)
        ;
        value_00 = 1.0;
        if (1.0 <= UVar2.fields.m_Width) {
          value_00 = UVar2.fields.m_Width;
        }
        if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
          il2cpp_init_class();
        }
        value = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value_00,(MethodInfo *)0x0);
        if (__this != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__set_Width(__this,value,(MethodInfo *)0x0);
          return;
        }
LAB_03ae6e19:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$LocalPoint
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__LocalPoint (UnityEngine_RectTransform_o* host, UnityEngine_Vector2_o screenPoint, const MethodInfo* method);
// 0x3ae83f0

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
  if (DAT_057013ca == '\0') {
    uStack_10 = in_XMM0_Dc;
    local_18 = (undefined1  [8])screenPoint.fields;
    uStack_c = in_XMM0_Dd;
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_057013ca = '\x01';
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
    il2cpp_init_class();
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
// 0x3ae8310

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PopoverSize
          (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UVar4 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
    fVar1 = 1.0;
    if (1.0 <= UVar4.fields.m_Width) {
      fVar1 = UVar4.fields.m_Width;
    }
    fVar3 = 1.0;
    if (1.0 <= UVar4.fields.m_Height) {
      fVar3 = UVar4.fields.m_Height;
    }
    UVar2.fields.y = fVar3;
    UVar2.fields.x = fVar1;
    return (UnityEngine_Vector2_o)UVar2.fields;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PivotFor
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PivotFor (UnityEngine_Vector2_o anchor, float left, float top, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x3ae8370

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PivotFor
          (UnityEngine_Vector2_o anchor,float left,float top,UnityEngine_Vector2_o size,
          MethodInfo *method)

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
// 0x3ae8390

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetPivot
               (UnityEngine_RectTransform_o *rect,UnityEngine_Vector2_o pivot,MethodInfo *method)

{
  UnityEngine_Vector3_o value;
  
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    value = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)rect,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot(rect,pivot,(MethodInfo *)0x0);
    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)rect,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Clamp
// il2cpp: float Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clamp (float value, float min, float max, const MethodInfo* method);
// 0x3ae8340

float Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clamp
                (float value,float min,float max,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = max;
  if (value <= max) {
    fVar1 = value;
  }
  return (float)(~-(uint)(min <= value) & (uint)min |
                (~-(uint)(min <= max) & (uint)min | (uint)fVar1 & -(uint)(min <= max)) &
                -(uint)(min <= value));
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, UnityEngine_Transform_o* layer, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x3ae8470

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               UnityEngine_Transform_o *layer,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  
  if (DAT_057013cb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchOverla);
    il2cpp_init_method_metadata(&TypeInfo_List_OverlayInstance);
    DAT_057013cb = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)
              il2cpp_runtime_glue(TypeInfo_List_OverlayInstance);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Overlays_GisketchOverla);
  (__this->fields)._stack = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._stack);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._layer = layer;
  il2cpp_runtime_glue(&__this->fields,layer);
  (__this->fields)._context = context;
  il2cpp_runtime_glue(&(__this->fields)._context,context);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$get_HasOpenOverlays
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x3ae8520

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__get_HasOpenOverlays
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *pSVar1;
  undefined4 in_EAX;
  undefined3 uVar2;
  
  if (DAT_057013cc == '\0') {
    in_EAX = il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_057013cc = '\x01';
  }
  pSVar1 = (__this->fields)._stack;
  if (pSVar1 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
    uVar2 = (undefined3)((uint)in_EAX >> 8);
    if (0 < (pSVar1->fields)._size) {
      return CONCAT31(uVar2,1);
    }
    return CONCAT31(uVar2,(__this->fields)._activePopover !=
                          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0
                   );
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDialog
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, bool focusOnOpen, const MethodInfo* method);
// 0x3ae8570

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
               bool_conflict focusOnOpen,MethodInfo *method)

{
  System_Func_string__GisketchOverlayDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay;
  System_String_o *pSVar3;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar4;
  undefined1 auVar5 [16];
  MethodInfo *in_stack_ffffffffffffff78;
  Il2CppMethodPointer pIVar6;
  Il2CppClass *pIVar7;
  Il2CppMethodPointer pIVar8;
  Il2CppType *pIVar9;
  InvokerMethod pIVar10;
  System_String_Fields SVar11;
  char *pcVar12;
  _union_13 _Var13;
  System_String_o local_58;
  _union_13 _Stack_40;
  
  if (DAT_057013cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&"Overlay.ShowDialog");
    il2cpp_init_method_metadata(&"Gisketch dialog not found: ");
    il2cpp_init_method_metadata(&"missing ");
    il2cpp_init_method_metadata(&"focus existing ");
    DAT_057013cd = '\x01';
  }
  pIVar10 = (InvokerMethod)0x0;
  pcVar12 = (char *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (Il2CppType *)0x0;
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  __this_01.fields._detail = (System_String_o *)pIVar8;
  __this_01.fields._area = (System_String_o *)pIVar6;
  __this_01.fields._startMs = (int64_t)pIVar10;
  __this_01.fields._24_8_ = pcVar12;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__this_01,&local_58,"Overlay.ShowDialog",(MethodInfo *)id);
  pIVar7 = (Il2CppClass *)local_58.klass;
  pIVar9 = local_58.monitor;
  SVar11 = local_58.fields;
  _Var13 = _Stack_40;
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog(__this,id,method_01);
  if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    method_00 = (MethodInfo *)System_String__Concat("focus existing ",id,(MethodInfo *)0x0);
    pMVar4 = extraout_RDX_00;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar4 = extraout_RDX_01;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
              ("Overlay.ShowDialog",(System_String_o *)method_00,pMVar4);
    if ((char)focusOnOpen != '\0') {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,method_00);
    }
    goto LAB_03ae8793;
  }
  pGVar2 = (__this->fields)._context;
  if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar1 = (pGVar2->fields).DialogResolver;
  pMVar4 = extraout_RDX;
  if (pSVar1 == (System_Func_string__GisketchOverlayDefinition__o *)0x0) {
LAB_03ae86da:
    __this_00 = (pGVar2->fields).Manifest;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      overlay = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog(__this_00,id,pMVar4);
      goto joined_r0x03ae86f1;
    }
  }
  else {
    auVar5 = (*(code *)(pSVar1->fields).invoke_impl)
                       ((pSVar1->fields).method_code,id,(pSVar1->fields).method);
    pMVar4 = auVar5._8_8_;
    overlay = auVar5._0_8_;
    if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      pGVar2 = (__this->fields)._context;
      if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      goto LAB_03ae86da;
    }
joined_r0x03ae86f1:
    if (overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                (__this,overlay,(UnityEngine_GameObject_o *)0x0,0,focusOnOpen & 0xff,0,0,24.0,1,
                 in_stack_ffffffffffffff78);
      goto LAB_03ae8793;
    }
  }
  pSVar3 = System_String__Concat("missing ",id,(MethodInfo *)0x0);
  pMVar4 = extraout_RDX_02;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar4 = extraout_RDX_03;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Overlay.ShowDialog",pSVar3,pMVar4);
  pSVar3 = System_String__Concat("Gisketch dialog not found: ",id,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
LAB_03ae8793:
  __this_02.fields._detail = (System_String_o *)pIVar9;
  __this_02.fields._area = (System_String_o *)pIVar7;
  __this_02.fields._startMs._0_4_ = SVar11._stringLength;
  __this_02.fields._startMs._4_2_ = SVar11._firstChar;
  __this_02.fields._startMs._6_2_ = SVar11._6_2_;
  __this_02.fields._24_8_ = _Var13.rgctx_data;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowPopover
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowPopover (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, UnityEngine_GameObject_o* anchor, bool focusOnOpen, float gap, const MethodInfo* method);
// 0x3ae89c0

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
  if (DAT_057013ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    DAT_057013ce = '\x01';
    pMVar4 = extraout_RDX;
  }
  pGVar1 = (__this->fields)._context;
  if ((pGVar1 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
     (__this_00 = (pGVar1->fields).Manifest,
     __this_00 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0)) goto LAB_03ae8acd;
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
LAB_03ae8acd:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      root = (pGVar3->fields).Host;
      if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
      pGVar3 = (__this->fields)._activePopover;
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto LAB_03ae8acd;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__PositionPopover
                ((pGVar3->fields).ContentRoot,(pGVar3->fields).HostRect,anchor,0,gap,method);
      pGVar3 = (__this->fields)._activePopover;
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto LAB_03ae8acd;
      pMVar4 = (MethodInfo *)0x0;
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout
                ((pGVar3->fields).Host,(MethodInfo *)0x0);
      if ((char)focusOnOpen != '\0') {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus
                  ((__this->fields)._activePopover,pMVar4);
      }
      pGVar3 = (__this->fields)._activePopover;
      if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      goto LAB_03ae8acd;
      goto LAB_03ae8b18;
    }
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,pGVar3,0,0,method);
  }
  pGVar3 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
                     (__this,overlay,anchor,1,focusOnOpen & 0xff,0,0,gap,1,in_stack_ffffffffffffffb8
                     );
  if (pGVar3 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
    return (UnityEngine_GameObject_o *)0x0;
  }
LAB_03ae8b18:
  return (pGVar3->fields).ContentRoot;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseTop
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, bool restoreFocus, const MethodInfo* method);
// 0x3ae8c50

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,bool_conflict restoreFocus,
          MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  undefined8 extraout_RAX;
  MethodInfo *in_R8;
  
  if (DAT_057013d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    DAT_057013d5 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
  {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                            MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
                  (__this,instance,restoreFocus & 0xff,1,in_R8);
        return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      }
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Clear
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x3ae8ce0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Clear
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  MethodInfo *in_R8;
  
  if (DAT_057013cf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    DAT_057013cf = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  while( true ) {
    if (__this_00 ==
        (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar1 = (__this_00->fields)._size;
    if ((int)uVar1 < 1) break;
    instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,uVar1 - 1,
                          MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,instance,0,0,in_R8);
    __this_00 = (__this->fields)._stack;
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
            ((UnityEngine_UI_Selectable_o *)0x0,(MethodInfo *)(ulong)uVar1);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FocusTopFromNavigation
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusTopFromNavigation (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x3ae8d60

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusTopFromNavigation
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  uint index;
  MethodInfo *method_00;
  
  if (DAT_057013d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    DAT_057013d5 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
  {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      index = iVar1 - 1;
      method_00 = (MethodInfo *)(ulong)index;
      instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
        bVar2 = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ContainsSelected
                          (instance,method_00);
        if ((char)bVar2 == '\0') {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,method_00);
          return;
        }
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowOverlay
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_GameObject_o* anchor, int32_t kind, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate, const MethodInfo* method);
// 0x3ae76f0

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowOverlay
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,
          UnityEngine_GameObject_o *anchor,int32_t kind,bool_conflict focusOnOpen,
          bool_conflict forceBelow,bool_conflict matchAnchorWidth,float popoverGap,
          bool_conflict animate,MethodInfo *method)

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
  if (DAT_057013d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_OverlayKind);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"Overlay.ShowOverlay");
    il2cpp_init_method_metadata(&"null");
    DAT_057013d0 = '\x01';
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
  method_00 = (MethodInfo *)System_String__Concat(str0," ",pGVar1->id,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
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
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__this_00,&local_88,detail,method_00)
  ;
  anchor_00 = local_60;
  local_48 = local_88.fields;
  pcStack_40 = pcStack_70;
  local_58 = local_88.klass;
  pIStack_50 = local_88.monitor;
  forceBelow_00 = forceBelow & 0xff;
  instance = Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__BuildOverlayInstance
                       (__this,overlay,local_60,kind,forceBelow_00,matchAnchorWidth & 0xff,
                        popoverGap,
                        (MethodInfo *)CONCAT44(in_stack_ffffffffffffff5c,in_stack_ffffffffffffff58))
  ;
  animate_00 = animate & 0xff;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OpenInstance
            (__this,instance,anchor_00,focusOnOpen & 0xff,forceBelow_00,matchAnchorWidth & 0xff,
             popoverGap,animate_00,in_stack_ffffffffffffff60);
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
// 0x3ae5fe0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ConfigureHost
               (Gilzoide_FlexUi_FlexLayout_o *flex,bool_conflict modal,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGValue_o GVar1;
  
  if (DAT_057013d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_YGValue);
    DAT_057013d1 = '\x01';
  }
  if (flex != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection(flex,0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_FlexWrap(flex,0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_JustifyContent(flex,modal & 0xffU,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_AlignItems(flex,(modal & 0xffU) + 1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
      il2cpp_init_class();
    }
    GVar1 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Width(flex,GVar1,(MethodInfo *)0x0);
    GVar1 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_Height(flex,GVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$OverlayName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OverlayName (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, const MethodInfo* method);
// 0x3ae5e20

System_String_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__OverlayName
          (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  System_String_o *pSVar3;
  
  if (DAT_057013d2 == '\0') {
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"AoTTG ");
    il2cpp_init_method_metadata(&"Popover");
    il2cpp_init_method_metadata(&"Dialog");
    DAT_057013d2 = '\x01';
  }
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((char)(overlay->fields).modal == '\0') {
    puVar2 = &"Popover";
  }
  else {
    puVar2 = &"Dialog";
  }
  pSVar3 = (System_String_o *)*puVar2;
  bVar1 = System_String__IsNullOrEmpty((overlay->fields).id,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pSVar3 = System_String__Concat("AoTTG ",pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  pSVar3 = System_String__Concat
                     ("AoTTG ",pSVar3," ",(overlay->fields).id,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$AddBackdrop
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, UnityEngine_Transform_o* parent, bool dismiss, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3ae60a0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__AddBackdrop
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               UnityEngine_Transform_o *parent,bool_conflict dismiss,UnityEngine_Color_o color,
               MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_RectTransform_o *rect;
  Il2CppObject *pIVar3;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar4;
  MethodInfo *method_00;
  float local_48;
  float local_38;
  
  if (DAT_057013d3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_AddComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_Void__AddBackdrop_b__37_0);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"AoTTG Backdrop");
    DAT_057013d3 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items,pSVar1);
    __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this_01,"AoTTG Backdrop",components,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_02,parent,0,(MethodInfo *)0x0);
        method_00 = MethodInfo_RectTransform_GetComponent_RectTransform;
        rect = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (__this_01,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch(rect,method_00);
        pIVar3 = UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_Image_AddComponent_Image);
        if (pIVar3 != (Il2CppObject *)0x0) {
          local_48 = color.fields.r;
          local_38 = color.fields.b;
          (*pIVar3->klass->vtable[0x17].methodPtr)
                    (local_48,local_38,pIVar3,pIVar3->klass->vtable[0x17].method);
          if ((char)dismiss == '\0') {
            return;
          }
          __this_03 = (UnityEngine_UI_Selectable_o *)
                      UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_Button_AddComponent_Button);
          if (__this_03 != (UnityEngine_UI_Selectable_o *)0x0) {
            UnityEngine_UI_Selectable__set_transition(__this_03,0,(MethodInfo *)0x0);
            __this_00 = (UnityEngine_Events_UnityEvent_o *)(__this_03->fields).m_CanvasGroupCache;
            call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3ae5ee0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_0570136e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_0570136e = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)
                    *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FindDialog
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3ae8850

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FindDialog
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar2;
  int index;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  
  if (DAT_057013d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013d4 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
  {
    index = (__this_00->fields)._size + -1;
    if (index < 0) {
      return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
    }
    do {
      pGVar2 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item)
      ;
      if (pGVar2 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
      break;
      if (((pGVar2->fields).Kind == 0) &&
         (bVar1 = System_String__op_Equality((pGVar2->fields).Id,id,(MethodInfo *)0x0),
         (char)bVar1 != '\0')) {
        x = (UnityEngine_Object_o *)(pGVar2->fields).Host;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
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
    } while (__this_00 !=
             (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Top
// il2cpp: Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Top (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x3ae7a00

Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Top
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *pGVar2;
  
  if (DAT_057013d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    DAT_057013d5 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
  {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      pGVar2 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                          MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      return pGVar2;
    }
    return (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ResolveDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResolveDialog (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3ae8950

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ResolveDialog
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,System_String_o *id,
          MethodInfo *method)

{
  System_Func_string__GisketchOverlayDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar3;
  undefined1 auVar4 [16];
  
  pGVar2 = (__this->fields)._context;
  if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    pSVar1 = (pGVar2->fields).DialogResolver;
    if (pSVar1 != (System_Func_string__GisketchOverlayDefinition__o *)0x0) {
      auVar4 = (*(code *)(pSVar1->fields).invoke_impl)
                         ((pSVar1->fields).method_code,id,(pSVar1->fields).method);
      method = auVar4._8_8_;
      if (auVar4._0_8_ != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
        return auVar4._0_8_;
      }
      pGVar2 = (__this->fields)._context;
      if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto LAB_03ae89b2;
    }
    __this_00 = (pGVar2->fields).Manifest;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog(__this_00,id,method);
      return pGVar3;
    }
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
  }
LAB_03ae89b2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseInstance
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, bool restoreFocus, bool animate, const MethodInfo* method);
// 0x3ae7520

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
               bool_conflict restoreFocus,bool_conflict animate,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  MethodInfo *method_00;
  Il2CppObject *__this_01;
  DG_Tweening_Tween_o *t;
  DG_Tweening_TweenCallback_o *action;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  Il2CppObject *pIVar1;
  
  if (DAT_057013d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback);
    il2cpp_init_method_metadata(&MethodInfo_Tween_OnComplete_Tween);
    il2cpp_init_method_metadata(&MethodInfo_Void__CloseInstance_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass42_0);
    DAT_057013d6 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass42_0);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Il2CppObject *)0x0) goto LAB_03ae76da;
  pIVar1 = __this_01 + 1;
  __this_01[1].klass = (Il2CppClass *)instance;
  il2cpp_runtime_glue(pIVar1,instance);
  if (__this_01[1].klass == (Il2CppClass *)0x0) {
    return;
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
  goto LAB_03ae76da;
  System_Collections_Generic_List<object>__Remove
            ((System_Collections_Generic_List_object__o *)__this_00,
             (Il2CppObject *)__this_01[1].klass,MethodInfo_Boolean_Remove);
  if ((Il2CppClass *)(__this->fields)._activePopover == pIVar1->klass) {
    (__this->fields)._activePopover =
         (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0;
    il2cpp_runtime_glue();
    if ((char)animate == '\0') goto LAB_03ae7651;
LAB_03ae7602:
    if (pIVar1->klass == (Il2CppClass *)0x0) goto LAB_03ae76da;
    view = *(Gisketch_Aottg2UI_Building_GisketchView_o **)&(pIVar1->klass->_1).byval_arg.bits;
    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
      il2cpp_init_class();
    }
    t = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayViewExit(view,(MethodInfo *)0x0);
  }
  else {
    if ((char)animate != '\0') goto LAB_03ae7602;
LAB_03ae7651:
    t = (DG_Tweening_Tween_o *)0x0;
  }
  action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_glue(TypeInfo_TweenCallback);
  DG_Tweening_TweenCallback___ctor();
  if (t == (DG_Tweening_Tween_o *)0x0) {
    if (action == (DG_Tweening_TweenCallback_o *)0x0) {
LAB_03ae76da:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(code *)(action->fields).invoke_impl)((action->fields).method_code,(action->fields).method);
    method_00 = extraout_RDX_00;
  }
  else {
    DG_Tweening_TweenSettingsExtensions__OnComplete<object>((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
    method_00 = extraout_RDX;
  }
  if ((char)restoreFocus == '\0') {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusAfterClose
            (__this,(Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                    pIVar1->klass,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FocusAfterClose
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusAfterClose (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* closed, const MethodInfo* method);
// 0x3ae8ff0

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FocusAfterClose
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,
               Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *closed,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  UnityEngine_Object_o *x;
  char cVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  UnityEngine_UI_Selectable_o *x_00;
  UnityEngine_UI_Selectable_o *selectable;
  uint index;
  MethodInfo *pMVar4;
  
  if (DAT_057013d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    DAT_057013d5 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 == (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
  {
LAB_03ae906a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = (__this_00->fields)._size;
  if (0 < iVar1) {
    index = iVar1 - 1;
    pMVar4 = (MethodInfo *)(ulong)index;
    instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,index,MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item)
    ;
    if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SelectInitialFocus(instance,pMVar4);
      return;
    }
  }
  if (closed == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0)
  goto LAB_03ae906a;
  x = (UnityEngine_Object_o *)(closed->fields)._PreviousSelected_k__BackingField;
  if (DAT_057013d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013d9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x_00 = (UnityEngine_UI_Selectable_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (x == (UnityEngine_Object_o *)0x0) goto LAB_03ae9154;
    x_00 = (UnityEngine_UI_Selectable_o *)
           UnityEngine_GameObject__GetComponent<object>((UnityEngine_GameObject_o *)x,MethodInfo_Selectable_GetComponent_Selectable);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  selectable = (UnityEngine_UI_Selectable_o *)0x0;
  if ((char)bVar3 != '\0') {
    if (x_00 == (UnityEngine_UI_Selectable_o *)0x0) {
LAB_03ae9154:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar4 = (x_00->klass->vtable)._9_IsActive.method;
    cVar2 = (*(x_00->klass->vtable)._9_IsActive.methodPtr)(x_00);
    if (cVar2 == '\0') {
      selectable = (UnityEngine_UI_Selectable_o *)0x0;
    }
    else {
      pMVar4 = (x_00->klass->vtable)._24_IsInteractable.method;
      cVar2 = (*(x_00->klass->vtable)._24_IsInteractable.methodPtr)(x_00);
      selectable = (UnityEngine_UI_Selectable_o *)0x0;
      if (cVar2 != '\0') {
        selectable = x_00;
      }
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(selectable,pMVar4);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Focus
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Focus (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o* instance, bool focus, const MethodInfo* method);
// 0x3ae6ca0

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
// 0x3ae8de0

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ContainsSelected
          (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance,
          MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this;
  bool_conflict bVar1;
  UnityEngine_Object_o *x_00;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)instance;
  if (DAT_057013d7 == '\0') {
    method_00 = (MethodInfo *)&TypeInfo_Object;
    il2cpp_init_method_metadata();
    DAT_057013d7 = '\x01';
  }
  x_00 = (UnityEngine_Object_o *)
         Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) &&
     ((char)bVar1 != '\0')) {
    x = (UnityEngine_Object_o *)(instance->fields).ContentRoot;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (x_00 != (UnityEngine_Object_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)x_00,(MethodInfo *)0x0);
        __this = (instance->fields).ContentRoot;
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            bVar1 = UnityEngine_Transform__IsChildOf(__this_00,parent,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FirstSelectable
// il2cpp: UnityEngine_UI_Selectable_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3ae7dd0

UnityEngine_UI_Selectable_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__FirstSelectable
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Selectable_o *x;
  char cVar2;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  
  if (DAT_057013d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Selectable___GetComponentsInChildren_Selectable);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013d8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if ((root == (UnityEngine_GameObject_o *)0x0) ||
       (pSVar4 = UnityEngine_GameObject__GetComponentsInChildren<object>(root,0,MethodInfo_Selectable___GetComponentsInChildren_Selectable),
       pSVar4 == (System_Object_array *)0x0)) {
LAB_03ae7f0b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_UI_Selectable_o *)pSVar4->m_Items[uVar5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                            );
          if ((char)bVar3 != '\0') {
            if (x == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_03ae7f0b;
            cVar2 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x);
            if ((cVar2 != '\0') &&
               (cVar2 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)(x), cVar2 != '\0')) {
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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (UnityEngine_UI_Selectable_o *)0x0;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Restore
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Restore (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3ae9070

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__Restore
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  UnityEngine_UI_Selectable_o *x;
  UnityEngine_UI_Selectable_o *selectable;
  MethodInfo *method_00;
  
  if (DAT_057013d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Selectable_GetComponent_Selectable);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013d9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_UI_Selectable_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (go == (UnityEngine_GameObject_o *)0x0) goto LAB_03ae9154;
    x = (UnityEngine_UI_Selectable_o *)UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_Selectable_GetComponent_Selectable)
    ;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  selectable = (UnityEngine_UI_Selectable_o *)0x0;
  if ((char)bVar2 != '\0') {
    if (x == (UnityEngine_UI_Selectable_o *)0x0) {
LAB_03ae9154:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_00 = (x->klass->vtable)._9_IsActive.method;
    cVar1 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x);
    if (cVar1 == '\0') {
      selectable = (UnityEngine_UI_Selectable_o *)0x0;
    }
    else {
      method_00 = (x->klass->vtable)._24_IsInteractable.method;
      cVar1 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)(x);
      selectable = (UnityEngine_UI_Selectable_o *)0x0;
      if (cVar1 != '\0') {
        selectable = x;
      }
    }
  }
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected(selectable,method_00);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CurrentSelected
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected (const MethodInfo* method);
// 0x3ae6be0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CurrentSelected(MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (DAT_057013da == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013da = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = (UnityEngine_GameObject_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = (pUVar2->fields).m_CurrentSelected;
  }
  return pUVar3;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetSelected
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected (UnityEngine_UI_Selectable_o* selectable, const MethodInfo* method);
// 0x3ae7c80

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__SetSelected
               (UnityEngine_UI_Selectable_o *selectable,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (DAT_057013db == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013db = '\x01';
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = (UnityEngine_GameObject_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (selectable == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_03ae7dc4;
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)selectable,(MethodInfo *)0x0);
  }
  if (pUVar2 != (UnityEngine_EventSystems_EventSystem_o *)0x0) {
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(pUVar2,pUVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = (UnityEngine_GameObject_o *)0x0;
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)selectable,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (selectable == (UnityEngine_UI_Selectable_o *)0x0) goto LAB_03ae7dc4;
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)selectable,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(pUVar3,12.0,(MethodInfo *)0x0);
    return;
  }
LAB_03ae7dc4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$DestroyObject
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3ae9160

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__DestroyObject
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057013dc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057013dc = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar1 == '\0') {
    UnityEngine_Object__DestroyImmediate((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$<AddBackdrop>b__37_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___AddBackdrop_b__37_0 (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o* __this, const MethodInfo* method);
// 0x3ae9220

void Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__<AddBackdrop>b__37_0
               (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *instance;
  MethodInfo *in_R8;
  
  if (DAT_057013d5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
    DAT_057013d5 = '\x01';
  }
  __this_00 = (__this->fields)._stack;
  if (__this_00 != (System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance__o *)0x0)
  {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      instance = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                            MethodInfo_GisketchOverlayManager_OverlayInstance_get_Item);
      if (instance != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_OverlayInstance_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseInstance(__this,instance,1,1,in_R8);
        Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(1,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}



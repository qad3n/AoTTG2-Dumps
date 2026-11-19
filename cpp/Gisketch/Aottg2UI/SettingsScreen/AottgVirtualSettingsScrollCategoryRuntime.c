// Type: Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$get_ItemCount
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__get_ItemCount (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, const MethodInfo* method);
// 0x5e58730

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__get_ItemCount
                  (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
                  MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  pGVar1 = (__this->fields)._items;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    return 0;
  }
  return (int32_t)pGVar1->max_length;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$get_Metrics
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__get_Metrics (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, const MethodInfo* method);
// 0x5e58740

Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *
Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__get_Metrics
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
          MethodInfo *method)

{
  float paddingTop;
  
  paddingTop = (__this->fields)._paddingTop;
  (__return_storage_ptr__->fields).OverscanRows = 0;
  (__return_storage_ptr__->fields).PaddingLeft = 0.0;
  (__return_storage_ptr__->fields).PaddingRight = 0.0;
  (__return_storage_ptr__->fields).PaddingTop = 0.0;
  (__return_storage_ptr__->fields).ItemHeight = 0.0;
  (__return_storage_ptr__->fields).Gap = 0.0;
  (__return_storage_ptr__->fields).ViewportHeight = 0.0;
  (__return_storage_ptr__->fields).VirtualizationThreshold = 0;
  (__return_storage_ptr__->fields).PaddingBottom = 0.0;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics___ctor
            (__return_storage_ptr__,72.0,6.0,1080.0,0x14,3,582.0,88.0,paddingTop,188.0,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__RegisterFactory (const MethodInfo* method);
// 0x5e58640

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__RegisterFactory
               (MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07548689 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_BuildRuntime
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgVirtualSettingsScrollCategory");
    Il2CppMethodInitialized_07548689 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime->static_fields->
      _registered != false) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_BuildRuntime
             ,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgVirtualSettingsScrollCategory",__this_00,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime->static_fields->
  _registered = true;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5e587a0

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this;
  
  if (Il2CppMethodInitialized_0754868a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgVirtualSettingsScrollCategoryRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754868a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if ((go == (UnityEngine_GameObject_o *)0x0) ||
     (__this = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_AottgVirtualSettingsScrollCategoryRuntime
                         ),
     __this == (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Setup
            (__this,node,context,view,method);
  return true;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Setup (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5e58850
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e5898b: test rdi, rdi
// asm:   0x5e5898e: je 0x5e58a27

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Setup
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Globalization_CultureInfo_o *pSVar2;
  System_String_array *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *pGVar4;
  
  if (Il2CppMethodInitialized_0754868b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchVirtualScrollRuntime);
    Il2CppMethodInitialized_0754868b = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *)0x0)
    goto label_05e58a27;
    (__this->fields)._items = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
    (__this->fields)._context = context;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._context);
    (__this->fields)._view = view;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._view);
  }
  else {
    if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *)0x0)
    goto label_05e58a27;
    (__this->fields)._items = (node->fields).deferredChildren;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
    (__this->fields)._context = context;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._context);
    (__this->fields)._view = view;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._view);
    pSVar3 = (node->fields).options;
    if (pSVar3 != (System_String_array *)0x0) {
      if (pSVar3->max_length != 0) {
        if ((int)pSVar3->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        pSVar1 = pSVar3->m_Items[0];
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        System_Single__TryParse_54d11a0
                  (pSVar1,0xa7,(System_IFormatProvider_o *)pSVar2,&(__this->fields)._initialScrollOffset,
                   (MethodInfo *)0x0);
        pSVar3 = (node->fields).options;
        if (pSVar3 == (System_String_array *)0x0) goto label_05e589c7;
      }
      if (1 < (int)pSVar3->max_length) {
        pSVar1 = pSVar3->m_Items[1];
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        System_Single__TryParse_54d11a0
                  (pSVar1,0xa7,(System_IFormatProvider_o *)pSVar2,&(__this->fields)._paddingTop,
                   (MethodInfo *)0x0);
      }
    }
  }
label_05e589c7:
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pGVar4 = UnityEngine_GameObject__AddComponent_object_
                       (__this_00,
                        (MethodInfo_353B6A0 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_GisketchVirtualScrollRuntime);
    (__this->fields)._virtualScroll = pGVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._virtualScroll);
    if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
       (pGVar4 = (__this->fields)._virtualScroll,
       pGVar4 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0)) {
      Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Setup
                (pGVar4,(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)__this,
                 (context->fields).Theme,48.0,(MethodInfo *)0x0);
      return;
    }
  }
label_05e58a27:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Start
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Start (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, const MethodInfo* method);
// 0x5e58a40

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Start
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_0754868c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754868c = '\x01';
  }
  pGVar1 = (__this->fields)._virtualScroll;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar2) && (0.0 < (__this->fields)._initialScrollOffset)) {
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    pGVar1 = (__this->fields)._virtualScroll;
    if (pGVar1 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__SetScrollOffset
                (pGVar1,(__this->fields)._initialScrollOffset,(MethodInfo *)0x0);
      pGVar1 = (__this->fields)._virtualScroll;
      if (pGVar1 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Refresh(pGVar1,true,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$ItemId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ItemId (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x5e58ae0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ItemId
          (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
          int32_t itemIndex,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if ((itemIndex < 0) ||
     (pGVar2 = (__this->fields)._items, pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0))
  {
    return (System_String_o *)0x0;
  }
  uVar1 = (uint)pGVar2->max_length;
  if (itemIndex < (int)uVar1) {
    if (uVar1 <= (uint)itemIndex) {
      ThrowIndexOutOfRangeException();
    }
    if (pGVar2->m_Items[(uint)itemIndex] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      return (pGVar2->m_Items[(uint)itemIndex]->fields).id;
    }
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$GapBefore
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__GapBefore (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x5e58b50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e58bb1: xorps xmm0, xmm0

float Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__GapBefore
                (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
                int32_t itemIndex,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_0754868d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsSpacingBefore");
    Il2CppMethodInitialized_0754868d = '\x01';
  }
  if (((-1 < itemIndex) &&
      (pGVar2 = (__this->fields)._items, pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)
      ) && (uVar1 = (uint)pGVar2->max_length, itemIndex < (int)uVar1)) {
    if (uVar1 <= (uint)itemIndex) {
      ThrowIndexOutOfRangeException();
    }
    if ((pGVar2->m_Items[(uint)itemIndex] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       (bVar3 = System_String__op_Equality
                          ((pGVar2->m_Items[(uint)itemIndex]->fields).value,"SettingsSpacingBefore",
                           (MethodInfo *)0x0), bVar3)) {
      return 20.0;
    }
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$CreateItem
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__CreateItem (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, UnityEngine_Transform_o* parent, int32_t slotIndex, const MethodInfo* method);
// 0x5e58be0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__CreateItem
          (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
          UnityEngine_Transform_o *parent,int32_t slotIndex,MethodInfo *method)

{
  Il2CppType *handle;
  System_String_o *pSVar1;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  int32_t iStack_24;
  
  if (Il2CppMethodInitialized_0754868e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-virtual-row-");
    Il2CppMethodInitialized_0754868e = '\x01';
  }
  pSVar1 = System_Int32__ToString(&iStack_24,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("settings-virtual-row-",pSVar1,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_00,pSVar1,components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              (__this_00,
                               (MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
        if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
          UnityEngine_CanvasGroup__set_alpha(__this_02,0.0,(MethodInfo *)0x0);
          return __this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$BindItem
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__BindItem (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, UnityEngine_GameObject_o* item, int32_t itemIndex, const MethodInfo* method);
// 0x5e58d80

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__BindItem
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               UnityEngine_GameObject_o *item,int32_t itemIndex,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  bool bVar3;
  UnityEngine_CanvasGroup_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *pMVar6;
  uint uStack_3c;
  UnityEngine_CanvasGroup_o *pUStack_38;
  
  uStack_3c = itemIndex;
  if (Il2CppMethodInitialized_0754868f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-virtual-row-");
    Il2CppMethodInitialized_0754868f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (itemIndex < 0) {
    return;
  }
  pGVar2 = (__this->fields)._items;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    return;
  }
  uVar1 = (uint)pGVar2->max_length;
  if ((int)uVar1 <= itemIndex) {
    return;
  }
  if (uVar1 <= (uint)itemIndex) goto label_05e59014;
  if (pGVar2->m_Items[(uint)itemIndex] == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  if ((item == (UnityEngine_GameObject_o *)0x0) ||
     ((pUVar4 = UnityEngine_GameObject__GetComponent_object_
                          (item,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup),
      pUVar4 == (UnityEngine_CanvasGroup_o *)0x0 &&
      (pUVar4 = UnityEngine_GameObject__AddComponent_object_
                          (item,(MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup),
      pUVar4 == (UnityEngine_CanvasGroup_o *)0x0)))) goto label_05e59019;
  pMVar6 = (MethodInfo *)0x0;
  UnityEngine_CanvasGroup__set_alpha(pUVar4,0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ClearItem(item,pMVar6);
  pGVar2 = (__this->fields)._items;
  if ((pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) ||
     (uVar1 = (uint)pGVar2->max_length, (int)uVar1 <= itemIndex)) {
label_05e58ece:
    pSVar5 = System_Int32__ToString((int32_t *)&uStack_3c,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_52f0320("settings-virtual-row-",pSVar5,(MethodInfo *)0x0);
  }
  else {
    if (uVar1 <= (uint)itemIndex) goto label_05e59014;
    if ((pGVar2->m_Items[(uint)itemIndex] == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
       (pSVar5 = (pGVar2->m_Items[(uint)itemIndex]->fields).id, pSVar5 == (System_String_o *)0x0))
    goto label_05e58ece;
  }
  UnityEngine_Object__set_name((UnityEngine_Object_o *)item,pSVar5,(MethodInfo *)0x0);
  pGVar2 = (__this->fields)._items;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_05e59019:
    ThrowNullReferenceException();
  }
  pUStack_38 = pUVar4;
  if ((uint)pGVar2->max_length <= uStack_3c) {
label_05e59014:
    ThrowIndexOutOfRangeException();
  }
  node = pGVar2->m_Items[(int)uStack_3c];
  parent = UnityEngine_GameObject__get_transform(item,(MethodInfo *)0x0);
  context = (__this->fields)._context;
  view = (__this->fields)._view;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
                (node,parent,context,view,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  rect = (UnityEngine_RectTransform_o *)0x0;
  pMVar6 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar4 = pUStack_38;
  if (bVar3) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_05e59019;
    pMVar6 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
    rect = UnityEngine_GameObject__GetComponent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Stretch(rect,pMVar6);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0
              ((UnityEngine_GameObject_o *)x,1,(MethodInfo *)0x0);
  }
  UnityEngine_CanvasGroup__set_alpha(pUVar4,1.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$UnbindItem
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__UnbindItem (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, UnityEngine_GameObject_o* item, const MethodInfo* method);
// 0x5e592a0

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__UnbindItem
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               UnityEngine_GameObject_o *item,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548690 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-virtual-row");
    Il2CppMethodInitialized_07548690 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = (__this->fields)._view;
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    method_00 = (MethodInfo *)item;
    Gisketch_Aottg2UI_Building_GisketchView__UnregisterSubtree(__this_00,item,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ClearItem(item,method_00);
  if (item == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Object__set_name((UnityEngine_Object_o *)item,"settings-virtual-row",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$CanRecycleItem
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__CanRecycleItem (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, UnityEngine_GameObject_o* item, const MethodInfo* method);
// 0x5e59350

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__CanRecycleItem
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               UnityEngine_GameObject_o *item,MethodInfo *method)

{
  return true;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$TryGetSearchTargetItemIndex
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__TryGetSearchTargetItemIndex (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, System_String_o* targetId, int32_t* itemIndex, const MethodInfo* method);
// 0x5e59360
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e593d2: xor r12d, r12d
// asm:   0x5e593d5: jmp 0x5e593dd

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__TryGetSearchTargetItemIndex
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               System_String_o *targetId,int32_t *itemIndex,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  ulong uVar4;
  
  *itemIndex = -1;
  bVar2 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0);
  if ((!bVar2) &&
     (pGVar3 = (__this->fields)._items, pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0))
  {
    uVar4 = 0;
    while( true ) {
      uVar1 = (uint)pGVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar4) break;
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      bVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId
                        (pGVar3->m_Items[uVar4],targetId,(MethodInfo *)(long)(int)uVar1);
      if (bVar2) {
        *itemIndex = (int32_t)uVar4;
        return true;
      }
      uVar4 = uVar4 + 1;
      pGVar3 = (__this->fields)._items;
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        ThrowNullReferenceException();
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$TryResolveSearchTarget
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__TryResolveSearchTarget (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, System_String_o* targetId, int32_t itemIndex, UnityEngine_GameObject_o* item, UnityEngine_GameObject_o** target, const MethodInfo* method);
// 0x5e594f0

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__TryResolveSearchTarget
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               System_String_o *targetId,int32_t itemIndex,UnityEngine_GameObject_o *item,
               UnityEngine_GameObject_o **target,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Transform_o *root;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548691 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548691 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  root = (UnityEngine_Transform_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if (bVar1) {
    if (item == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__get_transform(item,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  pUVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Find
                     (root,targetId,method_00);
  *target = pUVar2;
  Il2CppCodeGenWriteBarrier(target);
  x = (UnityEngine_Object_o *)*target;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$IsValid
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__IsValid (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x5e58b20

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__IsValid
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               int32_t itemIndex,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  bool bVar3;
  
  bVar3 = false;
  if ((-1 < itemIndex) &&
     (pGVar2 = (__this->fields)._items, pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0))
  {
    uVar1 = (uint)pGVar2->max_length;
    if ((int)uVar1 <= itemIndex) {
      return false;
    }
    if (uVar1 <= (uint)itemIndex) {
      ThrowIndexOutOfRangeException();
    }
    bVar3 = pGVar2->m_Items[(uint)itemIndex] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
  }
  return bVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$ContainsId
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* id, const MethodInfo* method);
// 0x5e593f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e594ca: jmp 0x5e594cf

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *id,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  bool bVar3;
  ulong uVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_RDX_01;
  ulong uVar6;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
    if (bVar3) {
      return false;
    }
    bVar3 = System_String__Equals_52ffe30((node->fields).id,id,5,(MethodInfo *)0x0);
    if (bVar3) {
      return true;
    }
    pGVar2 = (node->fields).children;
    pMVar5 = extraout_RDX;
    if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
       (0 < (int)pGVar2->max_length)) {
      uVar4 = pGVar2->max_length & 0xffffffff;
      uVar6 = 0;
      do {
        if (uVar4 <= uVar6) goto label_05e594dc;
        bVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId
                          (pGVar2->m_Items[uVar6],id,pMVar5);
        if (bVar3) {
          return true;
        }
        uVar6 = uVar6 + 1;
        uVar1 = (uint)pGVar2->max_length;
        uVar4 = (ulong)uVar1;
        pMVar5 = extraout_RDX_00;
      } while ((long)uVar6 < (long)(int)uVar1);
    }
    pGVar2 = (node->fields).deferredChildren;
    if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
       (0 < (int)pGVar2->max_length)) {
      uVar4 = pGVar2->max_length & 0xffffffff;
      uVar6 = 0;
      while (uVar6 < uVar4) {
        bVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId
                          (pGVar2->m_Items[uVar6],id,pMVar5);
        if (bVar3) {
          return true;
        }
        uVar6 = uVar6 + 1;
        uVar1 = (uint)pGVar2->max_length;
        uVar4 = (ulong)uVar1;
        pMVar5 = extraout_RDX_01;
        if ((long)(int)uVar1 <= (long)uVar6) {
          return false;
        }
      }
label_05e594dc:
      ThrowIndexOutOfRangeException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$ContainsId
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, System_String_o* id, const MethodInfo* method);
// 0x5e596f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e5970c: nop dword ptr [rax]

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId_5d596f0
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,System_String_o *id,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) || ((int)nodes->max_length < 1)) {
    return false;
  }
  uVar3 = nodes->max_length & 0xffffffff;
  uVar4 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      ThrowIndexOutOfRangeException();
    }
    bVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId
                      (nodes->m_Items[uVar4],id,method);
    if (bVar2) break;
    uVar4 = uVar4 + 1;
    uVar1 = (uint)nodes->max_length;
    uVar3 = (ulong)uVar1;
    method = (MethodInfo *)(long)(int)uVar1;
    if ((long)method <= (long)uVar4) {
      return false;
    }
  }
  return true;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Find
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Find (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x5e595b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e59675: nop word ptr cs:[rax + rax]
// asm:   0x5e596d8: jmp 0x5e59616

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Find
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *a;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *root_00;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  int index;
  
  if (Il2CppMethodInitialized_07548692 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548692 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) && (bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), !bVar1)) {
    if (root == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar1 = System_String__Equals_52ffe30(a,id,5,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
      return pUVar3;
    }
    index = 0;
    iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
    if (0 < iVar2) {
      do {
        root_00 = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)
            Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Find
                      (root_00,id,method_00);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          return (UnityEngine_GameObject_o *)x;
        }
        index = index + 1;
        iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0);
      } while (index < iVar2);
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Stretch
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x5e59160

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548693 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548693 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchorMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$ClearItem
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ClearItem (UnityEngine_GameObject_o* item, const MethodInfo* method);
// 0x5e59020
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e590af: lea r12, [rip + 0x141c77a]  ; TypeInfo_UnityEngine_Application
// asm:   0x5e590b6: jmp 0x5e590e0
// asm:   0x5e590d2: jmp 0x5e5914a

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ClearItem
               (UnityEngine_GameObject_o *item,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  int index;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_07548694 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548694 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((item == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar3 = UnityEngine_GameObject__get_transform(item,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_Transform_o *)0x0)) {
label_05e59153:
      ThrowNullReferenceException();
    }
    index = UnityEngine_Transform__get_childCount(pUVar3,(MethodInfo *)0x0);
    while (index = index + -1, -1 < index) {
      while( true ) {
        pUVar3 = UnityEngine_GameObject__get_transform(item,(MethodInfo *)0x0);
        if ((pUVar3 == (UnityEngine_Transform_o *)0x0) ||
           (pUVar3 = UnityEngine_Transform__GetChild(pUVar3,index,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_05e59153;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        }
        bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
        if (!bVar2) break;
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
        index = index + -1;
        if (index < 0) {
          return;
        }
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_6921750(obj,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, const MethodInfo* method);
// 0x5e59750

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               MethodInfo *method)

{
  (__this->fields)._paddingTop = 98.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



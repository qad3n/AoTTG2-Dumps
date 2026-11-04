// Type: Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgVirtualSettingsScrollCategoryRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$get_ItemCount
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__get_ItemCount (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, const MethodInfo* method);
// 0x1823a1740

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__get_ItemCount
                  (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
                  MethodInfo *method)

{
  if ((__this->fields)._items != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    return (int32_t)((__this->fields)._items)->max_length;
  }
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$get_Metrics
// il2cpp: Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__get_Metrics (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, const MethodInfo* method);
// 0x1823a1760

Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *
Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__get_Metrics
          (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
          MethodInfo *method)

{
  float paddingTop;
  
  paddingTop = (__this->fields)._paddingTop;
  (__return_storage_ptr__->fields).ItemHeight = 0.0;
  (__return_storage_ptr__->fields).Gap = 0.0;
  (__return_storage_ptr__->fields).ViewportHeight = 0.0;
  (__return_storage_ptr__->fields).VirtualizationThreshold = 0;
  (__return_storage_ptr__->fields).OverscanRows = 0;
  (__return_storage_ptr__->fields).PaddingLeft = 0.0;
  (__return_storage_ptr__->fields).PaddingRight = 0.0;
  (__return_storage_ptr__->fields).PaddingTop = 0.0;
  (__return_storage_ptr__->fields).PaddingBottom = 0.0;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollMetrics___ctor
            (__return_storage_ptr__,72.0,6.0,1080.0,0x14,3,582.0,88.0,paddingTop,188.0,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__RegisterFactory (const MethodInfo* method);
// 0x1823a1060

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__RegisterFactory
               (MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_184347b66 == '\0') {
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
    Il2CppMethodInitialized_184347b66 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime->static_fields->
      _registered == false) {
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
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1823a0910

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this;
  
  if (Il2CppMethodInitialized_184347b67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgVirtualSettingsScrollCategoryRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347b67 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if ((go != (UnityEngine_GameObject_o *)0x0) &&
     (__this = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_AottgVirtualSettingsScrollCategoryRuntime
                         ),
     __this != (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *)0x0)) {
    Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Setup
              (__this,node,context,view,(MethodInfo *)0x0);
    return true;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Setup (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1823a1160

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Setup
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  System_Globalization_CultureInfo_o *pSVar4;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value;
  
  if (Il2CppMethodInitialized_184347b68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchVirtualScrollRuntime);
    Il2CppMethodInitialized_184347b68 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
  }
  else {
    value = (node->fields).deferredChildren;
  }
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *)0x0) {
    (__this->fields)._items = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._items,value);
    (__this->fields)._context = context;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._context,context);
    (__this->fields)._view = view;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._view,view);
    if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       ((node->fields).options != (System_String_array *)0x0)) {
      pSVar2 = (node->fields).options;
      if (pSVar2->max_length != 0) {
        if ((int)pSVar2->max_length == 0) goto label_1823a1313;
        pSVar3 = pSVar2->m_Items[0];
        if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
        }
        pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
        System_Single__TryParse_1b4a540
                  (pSVar3,0xa7,(System_IFormatProvider_o *)pSVar4,&(__this->fields)._initialScrollOffset,
                   (MethodInfo *)0x0);
      }
      if ((node->fields).options != (System_String_array *)0x0) {
        pSVar2 = (node->fields).options;
        uVar1 = (uint)pSVar2->max_length;
        if (1 < (int)uVar1) {
          if (uVar1 < 2) {
label_1823a1313:
            ThrowIndexOutOfRangeException();
          }
          pSVar3 = pSVar2->m_Items[1];
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          pSVar4 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          System_Single__TryParse_1b4a540
                    (pSVar3,0xa7,(System_IFormatProvider_o *)pSVar4,&(__this->fields)._paddingTop,
                     (MethodInfo *)0x0);
        }
      }
    }
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pGVar5 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_6F4D60 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_GisketchVirtualScrollRuntime);
      (__this->fields)._virtualScroll = pGVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._virtualScroll,pGVar5);
      if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
         (pGVar5 = (__this->fields)._virtualScroll,
         pGVar5 != (Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *)0x0)) {
        Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime__Setup
                  (pGVar5,(Gisketch_Aottg2UI_Virtualization_IGisketchVirtualScrollSource_o *)__this,
                   (context->fields).Theme,48.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Start
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Start (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, const MethodInfo* method);
// 0x1823a1320

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Start
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Virtualization_GisketchVirtualScrollRuntime_o *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347b69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347b69 = '\x01';
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
// 0x1823a1000

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ItemId
          (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
          int32_t itemIndex,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (((__this->fields)._items != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
     (-1 < itemIndex)) {
    pGVar2 = (__this->fields)._items;
    uVar1 = (uint)pGVar2->max_length;
    if (itemIndex < (int)uVar1) {
      if (uVar1 <= (uint)itemIndex) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar2->m_Items[itemIndex] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        if (pGVar2->m_Items[itemIndex] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          return (pGVar2->m_Items[itemIndex]->fields).id;
        }
        ThrowNullReferenceException();
      }
    }
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$GapBefore
// il2cpp: float Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__GapBefore (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x1823a0f20

float Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__GapBefore
                (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
                int32_t itemIndex,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184347b6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsSpacingBefore");
    Il2CppMethodInitialized_184347b6a = '\x01';
  }
  if (((__this->fields)._items != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
     (-1 < itemIndex)) {
    pGVar2 = (__this->fields)._items;
    uVar1 = (uint)pGVar2->max_length;
    if (itemIndex < (int)uVar1) {
      if (uVar1 <= (uint)itemIndex) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar2->m_Items[itemIndex] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        if (pGVar2->m_Items[itemIndex] == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = System_String__op_Equality
                          ((pGVar2->m_Items[itemIndex]->fields).value,"SettingsSpacingBefore",(MethodInfo *)0x0)
        ;
        if (bVar3) {
          return 20.0;
        }
      }
    }
  }
  return 0.0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$CreateItem
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__CreateItem (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, UnityEngine_Transform_o* parent, int32_t slotIndex, const MethodInfo* method);
// 0x1823a0c60

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
  int32_t local_res18 [4];
  
  local_res18[0] = slotIndex;
  if (Il2CppMethodInitialized_184347b6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-virtual-row-");
    Il2CppMethodInitialized_184347b6b = '\x01';
  }
  pSVar1 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("settings-virtual-row-",pSVar1,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this_00,pSVar1,components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
        __this_02 = UnityEngine_GameObject__AddComponent_object_
                              (__this_00,
                               (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup
                              );
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
// 0x1823a0510

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
  UnityEngine_CanvasGroup_o *__this_00;
  System_String_o *pSVar4;
  UnityEngine_Transform_o *parent;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *__this_01;
  uint local_res18 [4];
  
  local_res18[0] = itemIndex;
  if (Il2CppMethodInitialized_184347b6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-virtual-row-");
    Il2CppMethodInitialized_184347b6c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((__this->fields)._items == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    return;
  }
  if ((int)local_res18[0] < 0) {
    return;
  }
  pGVar2 = (__this->fields)._items;
  uVar1 = (uint)pGVar2->max_length;
  if ((int)uVar1 <= (int)local_res18[0]) {
    return;
  }
  if (uVar1 <= local_res18[0]) goto label_1823a08fa;
  if (pGVar2->m_Items[(int)local_res18[0]] == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  if ((item == (UnityEngine_GameObject_o *)0x0) ||
     ((__this_00 = UnityEngine_GameObject__GetComponent_object_
                             (item,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_CanvasGroup),
      __this_00 == (UnityEngine_CanvasGroup_o *)0x0 &&
      (__this_00 = UnityEngine_GameObject__AddComponent_object_
                             (item,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup),
      __this_00 == (UnityEngine_CanvasGroup_o *)0x0)))) goto label_1823a0900;
  UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ClearItem
            (item,(MethodInfo *)0x0);
  if (((__this->fields)._items == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) ||
     ((int)local_res18[0] < 0)) {
label_1823a0667:
    pSVar4 = System_Int32__ToString((int32_t *)local_res18,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_1969e50("settings-virtual-row-",pSVar4,(MethodInfo *)0x0);
  }
  else {
    pGVar2 = (__this->fields)._items;
    uVar1 = (uint)pGVar2->max_length;
    if ((int)uVar1 <= (int)local_res18[0]) goto label_1823a0667;
    if (uVar1 <= local_res18[0]) goto label_1823a08fa;
    if ((pGVar2->m_Items[(int)local_res18[0]] == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
       (pSVar4 = (pGVar2->m_Items[(int)local_res18[0]]->fields).id, pSVar4 == (System_String_o *)0x0))
    goto label_1823a0667;
  }
  UnityEngine_Object__set_name((UnityEngine_Object_o *)item,pSVar4,(MethodInfo *)0x0);
  pGVar2 = (__this->fields)._items;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_1823a0900:
    ThrowNullReferenceException();
  }
  if ((uint)pGVar2->max_length <= local_res18[0]) {
label_1823a08fa:
    ThrowIndexOutOfRangeException();
  }
  node = pGVar2->m_Items[(int)local_res18[0]];
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
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_1823a0900;
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)x,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    __this_01 = (UnityEngine_RectTransform_o *)0x0;
  }
  if (Il2CppMethodInitialized_184347b70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347b70 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto label_1823a0900;
    UnityEngine_RectTransform__set_anchorMin
              (__this_01,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (__this_01,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (__this_01,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (__this_01,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0
              ((UnityEngine_GameObject_o *)x,1,(MethodInfo *)0x0);
  }
  UnityEngine_CanvasGroup__set_alpha(__this_00,1.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$UnbindItem
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__UnbindItem (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, UnityEngine_GameObject_o* item, const MethodInfo* method);
// 0x1823a1680

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__UnbindItem
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               UnityEngine_GameObject_o *item,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347b6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"settings-virtual-row");
    Il2CppMethodInitialized_184347b6d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (__this->fields)._view;
    if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      Gisketch_Aottg2UI_Building_GisketchView__UnregisterSubtree(__this_00,item,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ClearItem
              (item,(MethodInfo *)0x0);
    if (item == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Object__set_name((UnityEngine_Object_o *)item,"settings-virtual-row",(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$CanRecycleItem
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__CanRecycleItem (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, UnityEngine_GameObject_o* item, const MethodInfo* method);
// 0x1808ed110

bool
Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__CanRecycleItem(Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, UnityEngine_GameObject_o* item, MethodInfo* method)

{
  return true;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$TryGetSearchTargetItemIndex
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__TryGetSearchTargetItemIndex (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, System_String_o* targetId, int32_t* itemIndex, const MethodInfo* method);
// 0x1823a1520
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a158e: jmp 0x1823a1557

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__TryGetSearchTargetItemIndex
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               System_String_o *targetId,int32_t *itemIndex,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  uint uVar3;
  
  *itemIndex = -1;
  bVar1 = System_String__IsNullOrEmpty(targetId,(MethodInfo *)0x0);
  if ((bVar1) || ((__this->fields)._items == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
    return false;
  }
  pGVar2 = (__this->fields)._items;
  uVar3 = 0;
  do {
    if ((int)pGVar2->max_length <= (int)uVar3) {
      return false;
    }
    pGVar2 = (__this->fields)._items;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
    if ((uint)pGVar2->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    bVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId
                      (pGVar2->m_Items[(int)uVar3],targetId,(MethodInfo *)0x0);
    if (bVar1) {
      *itemIndex = uVar3;
      return true;
    }
    pGVar2 = (__this->fields)._items;
    uVar3 = uVar3 + 1;
  } while (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0);
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$TryResolveSearchTarget
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__TryResolveSearchTarget (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, System_String_o* targetId, int32_t itemIndex, UnityEngine_GameObject_o* item, UnityEngine_GameObject_o** target, const MethodInfo* method);
// 0x1823a15c0

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__TryResolveSearchTarget
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               System_String_o *targetId,int32_t itemIndex,UnityEngine_GameObject_o *item,
               UnityEngine_GameObject_o **target,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  UnityEngine_Transform_o *root;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_184347b6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347b6e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (item == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__get_transform(item,(MethodInfo *)0x0);
  }
  else {
    root = (UnityEngine_Transform_o *)0x0;
  }
  value = Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Find
                    (root,targetId,(MethodInfo *)0x0);
  *target = value;
  Il2CppCodeGenWriteBarrier(target,value);
  x = (UnityEngine_Object_o *)*target;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$IsValid
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__IsValid (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, int32_t itemIndex, const MethodInfo* method);
// 0x1823a0fc0

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__IsValid
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               int32_t itemIndex,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (((__this->fields)._items != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
     (-1 < itemIndex)) {
    pGVar2 = (__this->fields)._items;
    uVar1 = (uint)pGVar2->max_length;
    if (itemIndex < (int)uVar1) {
      if ((uint)itemIndex < uVar1) {
        return pGVar2->m_Items[itemIndex] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$ContainsId
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* id, const MethodInfo* method);
// 0x1823a0b80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a0bde: nop 

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  bool bVar2;
  uint uVar3;
  
  if ((node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     (bVar2 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), bVar2)) {
    return false;
  }
  bVar2 = System_String__Equals_196c550((node->fields).id,id,5,(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  pGVar1 = (node->fields).children;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    for (uVar3 = 0; (int)uVar3 < (int)pGVar1->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pGVar1->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      bVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId
                        (pGVar1->m_Items[(int)uVar3],id,(MethodInfo *)0x0);
      if (bVar2) {
        return true;
      }
    }
  }
  bVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId_23a0b00
                    ((node->fields).deferredChildren,id,(MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$ContainsId
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, System_String_o* id, const MethodInfo* method);
// 0x1823a0b00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a0b1e: nop 

bool Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId_23a0b00
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,System_String_o *id,
               MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  
  if (nodes != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    for (uVar2 = 0; (int)uVar2 < (int)nodes->max_length; uVar2 = uVar2 + 1) {
      if ((uint)nodes->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      bVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ContainsId
                        (nodes->m_Items[(int)uVar2],id,(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Find
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Find (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo* method);
// 0x1823a0df0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a0ee9: mov rax, rdi
// asm:   0x1823a0eec: jmp 0x1823a0efc

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Find
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *a;
  UnityEngine_Transform_o *root_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *pUVar3;
  int index;
  
  if (Il2CppMethodInitialized_184347b6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347b6f = '\x01';
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
    bVar1 = System_String__Equals_196c550(a,id,5,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)root,(MethodInfo *)0x0);
      return pUVar3;
    }
    for (index = 0; iVar2 = UnityEngine_Transform__get_childCount(root,(MethodInfo *)0x0), index < iVar2;
        index = index + 1) {
      root_00 = UnityEngine_Transform__GetChild(root,index,(MethodInfo *)0x0);
      x = (UnityEngine_Object_o *)
          Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Find
                    (root_00,id,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return (UnityEngine_GameObject_o *)x;
      }
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$Stretch
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x1823a13c0

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347b70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347b70 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMin
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184341f36 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341f36 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMin
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMax
                (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                 (MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$ClearItem
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ClearItem (UnityEngine_GameObject_o* item, const MethodInfo* method);
// 0x1823a09c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a0ae1: sub ebx, 1
// asm:   0x1823a0ae4: jns 0x1823a0a56
// asm:   0x1823a0aea: mov rbx, qword ptr [rsp + 0x30]
// asm:   0x1823a0aef: mov rdi, qword ptr [rsp + 0x38]

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime__ClearItem
               (UnityEngine_GameObject_o *item,MethodInfo *method)

{
  bool bVar1;
  int index;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *obj;
  
  if (Il2CppMethodInitialized_184347b71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347b71 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((item == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(item,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) {
label_1823a0afa:
      ThrowNullReferenceException();
    }
    index = UnityEngine_Transform__get_childCount(pUVar2,(MethodInfo *)0x0);
    while (index = index + -1, -1 < index) {
      pUVar2 = UnityEngine_GameObject__get_transform(item,(MethodInfo *)0x0);
      if ((pUVar2 == (UnityEngine_Transform_o *)0x0) ||
         (pUVar2 = UnityEngine_Transform__GetChild(pUVar2,index,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_1823a0afa;
      obj = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__DestroyImmediate_2f1fb90(obj,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategoryRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o* __this, const MethodInfo* method);
// 0x1823a1730

void Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategoryRuntime_o *__this,
               MethodInfo *method)

{
  (__this->fields)._paddingTop = 98.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



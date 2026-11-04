// Type: ApplicationManagers.FullscreenHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/FullscreenHandler.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/FullscreenHandler.cs
// --------------------------------

// ApplicationManagers.FullscreenHandler$$Init
// il2cpp: void ApplicationManagers_FullscreenHandler__Init (const MethodInfo* method);
// 0x18234efa0

void ApplicationManagers_FullscreenHandler__Init(MethodInfo *method)

{
  ApplicationManagers_FullscreenHandler_o *value;
  
  if (Il2CppMethodInitialized_18434796c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_FullscreenHandler);
    Il2CppMethodInitialized_18434796c = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  value = Utility_SingletonFactory__CreateSingleton_object_
                    ((Il2CppObject *)TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance,
                     (MethodInfo_798ED0 *)
                     MethodInfo_Utility_SingletonFactory_CreateSingleton_FullscreenHandler);
  TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance = value;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_instance,value);
  return;
}


// ApplicationManagers.FullscreenHandler$$Apply
// il2cpp: void ApplicationManagers_FullscreenHandler__Apply (int32_t resolutionIndex, int32_t fullscreenLevel, const MethodInfo* method);
// 0x18234e960

void ApplicationManagers_FullscreenHandler__Apply
               (int32_t resolutionIndex,int32_t fullscreenLevel,MethodInfo *method)

{
  ApplicationManagers_FullscreenHandler_StaticFields *pAVar1;
  System_Collections_Generic_List_Resolution__o *__this;
  undefined1 local_18 [16];
  
  if (Il2CppMethodInitialized_18434796d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Resolution_get_Item);
    Il2CppMethodInitialized_18434796d = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  __this = ApplicationManagers_FullscreenHandler__GetResolutions((MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_List_Resolution__o *)0x0) {
    System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___get_Item
              ((UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_o
                *)local_18,(System_Collections_Generic_List_T__o *)__this,resolutionIndex,
               (MethodInfo_92B880 *)MethodInfo_System_Collections_Generic_List_Resolution_get_Item);
    pAVar1 = TypeInfo_ApplicationManagers_FullscreenHandler->static_fields;
    (pAVar1->_resolution).fields.m_Width = local_18._0_4_;
    (pAVar1->_resolution).fields.m_Height = local_18._4_4_;
    (pAVar1->_resolution).fields.m_RefreshRate.fields = (UnityEngine_RefreshRate_Fields)local_18._8_8_;
    ApplicationManagers_FullscreenHandler__SetFullscreen(fullscreenLevel,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.FullscreenHandler$$SanitizeResolutionSetting
// il2cpp: int32_t ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting (int32_t resolutionIndex, const MethodInfo* method);
// 0x18234f2b0

int32_t ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting
                  (int32_t resolutionIndex,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_Resolution__o *pSVar2;
  int iVar3;
  
  if (Il2CppMethodInitialized_18434796e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Resolution_get_Count);
    Il2CppMethodInitialized_18434796e = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  pSVar2 = ApplicationManagers_FullscreenHandler__GetResolutions((MethodInfo *)0x0);
  if (pSVar2 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    iVar3 = 0;
    if (resolutionIndex < (pSVar2->fields)._size) {
      iVar3 = resolutionIndex;
    }
    iVar1 = 0;
    if (-1 < iVar3) {
      iVar1 = iVar3;
    }
    return iVar1;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.FullscreenHandler$$GetResolutionOptions
// il2cpp: System_String_array* ApplicationManagers_FullscreenHandler__GetResolutionOptions (const MethodInfo* method);
// 0x18234ea00
// eh: try 0x18234eb40..0x18234eca3 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234ec40: mov rdx, qword ptr [rip + 0x1d45339]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_Dispose
// asm:   0x18234ec47: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18234ec4c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18234ec51: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18234ec56: test rcx, rcx
// asm:   0x18234ec59: jne 0x18234eca3
// asm:   0x18234ec5b: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x18234eca3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_String_array * ApplicationManagers_FullscreenHandler__GetResolutionOptions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this;
  System_Collections_Generic_List_Resolution__o *__this_00;
  System_String_o *pSVar6;
  System_String_o *str2;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar7;
  int32_t local_res10 [2];
  System_Collections_Generic_List_string__o *local_res18;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_28;
  Il2CppObject *local_20;
  undefined8 uStack_18;
  
  if (Il2CppMethodInitialized_18434796f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Resolution_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&" x ");
    Il2CppMethodInitialized_18434796f = '\x01';
  }
  local_30 = (undefined1  [8])0x0;
  pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_20 = (Il2CppObject *)0x0;
  uStack_18._0_4_ = 0.0;
  uStack_18._4_4_ = 0.0;
  local_40._0_8_ = (Il2CppObject *)0x0;
  local_40._8_4_ = 0.0;
  local_40._12_4_ = 0.0;
  local_res10[0] = 0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  __this_00 = ApplicationManagers_FullscreenHandler__GetResolutions((MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_Resolution__o *)0x0) {
    local_res18 = __this;
    System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F200 *)MethodInfo_System_Collections_Generic_List_Resolution_GetEnumerator);
    local_30 = (undefined1  [8])local_60._0_8_;
    pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
    local_20 = local_50;
    uStack_18._0_4_ = fStack_48;
    uStack_18._4_4_ = fStack_44;
    local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_Vector4___MoveNext
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_30,
                         (MethodInfo_1529380 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_MoveNext);
      if (!bVar5) break;
      local_40._0_8_ = local_20;
      local_40._8_4_ = (float)uStack_18;
      local_40._12_4_ = uStack_18._4_4_;
      local_res10[0] = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)local_40,(MethodInfo *)0x0);
      pSVar6 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      local_res10[0] =
           UnityEngine_TextCore_GlyphRect__get_y
                     ((UnityEngine_TextCore_GlyphRect_o *)local_40,(MethodInfo *)0x0);
      str2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_1969b70(pSVar6," x ",str2,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar6;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar6,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
    }
    System_Collections_Generic_List_Enumerator_Resolution___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
               MethodInfo_System_Collections_Generic_List_Enumerator_Resolution_Dispose);
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      pUVar7 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_T__o *)__this,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar7;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.FullscreenHandler$$GetResolutions
// il2cpp: System_Collections_Generic_List_Resolution__o* ApplicationManagers_FullscreenHandler__GetResolutions (const MethodInfo* method);
// 0x18234ecb0

System_Collections_Generic_List_Resolution__o *
ApplicationManagers_FullscreenHandler__GetResolutions(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UILineInfo_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_UILineInfo__o *__this;
  System_Collections_Generic_HashSet_string__o *__this_00;
  UnityEngine_Resolution_array *pUVar6;
  System_String_o *pSVar7;
  System_String_o *str2;
  uint uVar8;
  int32_t local_res10 [2];
  Unity_Hierarchy_HierarchyPropertyDescriptor_Fields local_48;
  Unity_Hierarchy_HierarchyPropertyDescriptor_Fields UStack_40;
  Unity_Hierarchy_HierarchyPropertyDescriptor_Fields local_38;
  Unity_Hierarchy_HierarchyPropertyDescriptor_Fields UStack_30;
  Unity_Hierarchy_HierarchyPropertyDescriptor_Fields local_28;
  Unity_Hierarchy_HierarchyPropertyDescriptor_Fields UStack_20;
  
  if (Il2CppMethodInitialized_184347970 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Resolution_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Resolution_Reverse)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Resolution_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Resolution_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Resolution);
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_184347970 = '\x01';
  }
  local_48.m_Size = 0;
  local_48.m_Type = 0;
  UStack_40.m_Size = 0;
  UStack_40.m_Type = 0;
  local_38.m_Size = 0;
  local_38.m_Type = 0;
  UStack_30.m_Size = 0;
  UStack_30.m_Type = 0;
  local_res10[0] = 0;
  __this = (System_Collections_Generic_List_UILineInfo__o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Resolution);
  System_Collections_Generic_List_Resolution____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Resolution_ctor);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pUVar6 = UnityEngine_Screen__get_resolutions((MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Resolution_array *)0x0) {
    for (uVar8 = 0; (int)uVar8 < (int)pUVar6->max_length; uVar8 = uVar8 + 1) {
      if ((uint)pUVar6->max_length <= uVar8) goto label_18234ef99;
      local_48 = *(Unity_Hierarchy_HierarchyPropertyDescriptor_Fields *)(pUVar6->m_Items + (int)uVar8);
      UStack_40 = ((Unity_Hierarchy_HierarchyPropertyDescriptor_Fields *)(pUVar6->m_Items + (int)uVar8))[1];
      local_res10[0] = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_48,(MethodInfo *)0x0);
      pSVar7 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      local_res10[0] =
           UnityEngine_TextCore_GlyphRect__get_y
                     ((UnityEngine_TextCore_GlyphRect_o *)&local_48,(MethodInfo *)0x0);
      str2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat_1969b70(pSVar7,",",str2,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_18234ef93;
      bVar5 = System_Collections_Generic_HashSet_object___Contains
                        ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar7,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      pMVar4 = MethodInfo_System_Collections_Generic_List_Resolution_Add;
      if (!bVar5) {
        if (__this == (System_Collections_Generic_List_UILineInfo__o *)0x0) goto label_18234ef93;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (__this->fields)._items;
        if (pUVar3 == (UnityEngine_UILineInfo_array *)0x0) goto label_18234ef93;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pUVar3->max_length <= uVar2) goto label_18234ef99;
          *(Unity_Hierarchy_HierarchyPropertyDescriptor_Fields *)(pUVar3->m_Items + (int)uVar2) = local_48;
          ((Unity_Hierarchy_HierarchyPropertyDescriptor_Fields *)(pUVar3->m_Items + (int)uVar2))[1] =
               UStack_40;
        }
        else {
          local_28 = local_48;
          UStack_20 = UStack_40;
          System_Collections_Generic_List_Resolution___AddWithResize
                    (__this,(UnityEngine_UILineInfo_o *)&local_28,
                     (MethodInfo_91A940 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar7,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
      }
    }
    if (__this != (System_Collections_Generic_List_UILineInfo__o *)0x0) {
      System_Collections_Generic_List_Resolution___Reverse
                ((System_Collections_Generic_List_Vector4__o *)__this,
                 (MethodInfo_923660 *)MethodInfo_System_Collections_Generic_List_Resolution_Reverse);
      if ((__this->fields)._size == 0) {
        local_38.m_Size = 0;
        local_38.m_Type = 0;
        UStack_30.m_Size = 0;
        UStack_30.m_Type = 0;
        UnityEngine_AI_NavMeshDataInstance__set_id
                  ((UnityEngine_AI_NavMeshDataInstance_o *)&local_38,800,(MethodInfo *)0x0);
        Unity_Hierarchy_HierarchyPropertyDescriptor__set_Type
                  ((Unity_Hierarchy_HierarchyPropertyDescriptor_o *)&local_38,600,(MethodInfo *)0x0);
        pMVar4 = MethodInfo_System_Collections_Generic_List_Resolution_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (__this->fields)._items;
        if (pUVar3 == (UnityEngine_UILineInfo_array *)0x0) goto label_18234ef93;
        uVar8 = (__this->fields)._size;
        if (uVar8 < (uint)pUVar3->max_length) {
          (__this->fields)._size = uVar8 + 1;
          if ((uint)pUVar3->max_length <= uVar8) {
label_18234ef99:
            ThrowIndexOutOfRangeException();
          }
          *(Unity_Hierarchy_HierarchyPropertyDescriptor_Fields *)(pUVar3->m_Items + (int)uVar8) = local_38;
          ((Unity_Hierarchy_HierarchyPropertyDescriptor_Fields *)(pUVar3->m_Items + (int)uVar8))[1] =
               UStack_30;
        }
        else {
          local_28 = local_38;
          UStack_20 = UStack_30;
          System_Collections_Generic_List_Resolution___AddWithResize
                    (__this,(UnityEngine_UILineInfo_o *)&local_28,
                     (MethodInfo_91A940 *)pMVar4->klass->rgctx_data[0xe].method);
        }
      }
      return (System_Collections_Generic_List_Resolution__o *)__this;
    }
  }
label_18234ef93:
  ThrowNullReferenceException();
}


// ApplicationManagers.FullscreenHandler$$SetFullscreen
// il2cpp: void ApplicationManagers_FullscreenHandler__SetFullscreen (int32_t fullscreen, const MethodInfo* method);
// 0x18234f320

void ApplicationManagers_FullscreenHandler__SetFullscreen(int32_t fullscreen,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  uint uVar5;
  uint fullscreenMode;
  
  if (Il2CppMethodInitialized_184347971 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184347971 = '\x01';
  }
  if (fullscreen == 0) {
    fullscreenMode = 3;
  }
  else {
    fullscreenMode = (uint)(fullscreen == 1);
  }
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  iVar4 = UnityEngine_Touch__get_fingerId
                    ((UnityEngine_Touch_o *)
                     &TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_resolution,
                     (MethodInfo *)0x0);
  if (iVar3 == iVar4) {
    iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
    }
    iVar4 = UnityEngine_TextCore_GlyphRect__get_y
                      ((UnityEngine_TextCore_GlyphRect_o *)
                       &TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_resolution,
                       (MethodInfo *)0x0);
    if (iVar3 == iVar4) {
      uVar5 = UnityEngine_Screen__get_fullScreenMode((MethodInfo *)0x0);
      if (uVar5 == fullscreenMode) goto label_18234f469;
    }
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  iVar3 = UnityEngine_Touch__get_fingerId
                    ((UnityEngine_Touch_o *)
                     &TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_resolution,
                     (MethodInfo *)0x0);
  iVar4 = UnityEngine_TextCore_GlyphRect__get_y
                    ((UnityEngine_TextCore_GlyphRect_o *)
                     &TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_resolution,
                     (MethodInfo *)0x0);
  UnityEngine_Screen__SetResolution_2ed3cc0(iVar3,iVar4,fullscreenMode,(MethodInfo *)0x0);
label_18234f469:
  if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
  }
  UI_CursorManager__RefreshCursorLock((MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar1 != (UI_BaseMenu_o *)0x0) {
      UI_BaseMenu__ApplyScale
                (pUVar1,TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  return;
}


// ApplicationManagers.FullscreenHandler$$UpdateFPS
// il2cpp: void ApplicationManagers_FullscreenHandler__UpdateFPS (const MethodInfo* method);
// 0x18234f590
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18234f6bd: mov rcx, qword ptr [rip + 0x1d77e2c]  ; TypeInfo_UnityEngine_Application
// asm:   0x18234f72f: jmp 0x18234f6c4
// asm:   0x18234f736: jmp 0x18234f6c4

void ApplicationManagers_FullscreenHandler__UpdateFPS(MethodInfo *method)

{
  int32_t val1;
  int32_t val1_00;
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  int32_t iVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_184347972 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347972 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (((pSVar1 == (Settings_GraphicsSettings_o *)0x0) ||
      (pSVar2 = (pSVar1->fields).FPSCap, pSVar2 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar3 = (pSVar1->fields).MenuFPSCap, pSVar3 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  val1 = (pSVar2->fields)._value;
  val1_00 = (pSVar3->fields)._value;
  if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 2) {
    bVar5 = true;
  }
  else {
    bVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 3;
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  if (TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused == false) {
    if (bVar5) {
      if (0 < val1) {
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        iVar4 = System_Math__Min_1b2c2d0(val1,0x3c,(MethodInfo *)0x0);
        goto label_18234f6c4;
      }
    }
    else if (0 < val1_00) {
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar4 = System_Math__Min_1b2c2d0(val1_00,0x3c,(MethodInfo *)0x0);
      goto label_18234f6c4;
    }
    iVar4 = 0x3c;
  }
  else {
    iVar4 = -1;
    if (bVar5) {
      if (0 < val1) {
        iVar4 = val1;
      }
    }
    else if (0 < val1_00) {
      iVar4 = val1_00;
    }
  }
label_18234f6c4:
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  UnityEngine_Application__set_targetFrameRate(iVar4,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.FullscreenHandler$$UpdateSound
// il2cpp: void ApplicationManagers_FullscreenHandler__UpdateSound (const MethodInfo* method);
// 0x18234f740

void ApplicationManagers_FullscreenHandler__UpdateSound(MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  float value;
  
  if (Il2CppMethodInitialized_184347973 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_184347973 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).MuteMinimized, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == false) {
      pSVar3 = (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings->fields).Volume;
      if (pSVar3 == (Settings_FloatSetting_o *)0x0) goto label_18234f8d0;
      UnityEngine_AudioListener__set_volume((pSVar3->fields)._value,(MethodInfo *)0x0);
      TypeInfo_ApplicationManagers_MusicManager->static_fields->_muted = false;
    }
    else {
      if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
      }
      if (TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused == false) {
        value = 0.0;
      }
      else {
        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
        if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
           (pSVar3 = (pSVar1->fields).Volume, pSVar3 == (Settings_FloatSetting_o *)0x0)) goto label_18234f8d0;
        value = (pSVar3->fields)._value;
      }
      UnityEngine_AudioListener__set_volume(value,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
      }
      TypeInfo_ApplicationManagers_MusicManager->static_fields->_muted =
           TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused == false;
    }
    ApplicationManagers_MusicManager__ApplySoundSettings((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    ApplicationManagers_VoiceChatManager__ApplySoundSettings((MethodInfo *)0x0);
    return;
  }
label_18234f8d0:
  ThrowNullReferenceException();
}


// ApplicationManagers.FullscreenHandler$$OnApplicationFocus
// il2cpp: void ApplicationManagers_FullscreenHandler__OnApplicationFocus (ApplicationManagers_FullscreenHandler_o* __this, bool hasFocus, const MethodInfo* method);
// 0x18234f090

void ApplicationManagers_FullscreenHandler__OnApplicationFocus
               (ApplicationManagers_FullscreenHandler_o *__this,bool hasFocus,MethodInfo *method)

{
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  bool bVar4;
  float value;
  
  if (Il2CppMethodInitialized_184347974 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    Il2CppMethodInitialized_184347974 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
  }
  bVar4 = Il2CppMethodInitialized_184347973 == '\0';
  TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused = hasFocus;
  if (bVar4) {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_MusicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_184347973 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
  if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).MuteMinimized, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar2->fields)._value == false) {
      pSVar3 = (TypeInfo_Settings_SettingsManager->static_fields->SoundSettings->fields).Volume;
      if (pSVar3 == (Settings_FloatSetting_o *)0x0) goto label_18234f2a2;
      UnityEngine_AudioListener__set_volume((pSVar3->fields)._value,(MethodInfo *)0x0);
      TypeInfo_ApplicationManagers_MusicManager->static_fields->_muted = false;
    }
    else {
      if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
      }
      if (TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused == false) {
        value = 0.0;
      }
      else {
        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
        if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
           (pSVar3 = (pSVar1->fields).Volume, pSVar3 == (Settings_FloatSetting_o *)0x0)) goto label_18234f2a2;
        value = (pSVar3->fields)._value;
      }
      UnityEngine_AudioListener__set_volume(value,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
      }
      TypeInfo_ApplicationManagers_MusicManager->static_fields->_muted =
           TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused == false;
    }
    ApplicationManagers_MusicManager__ApplySoundSettings((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    ApplicationManagers_VoiceChatManager__ApplySoundSettings((MethodInfo *)0x0);
    ApplicationManagers_FullscreenHandler__UpdateFPS((MethodInfo *)0x0);
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UI_CursorManager__RefreshCursorLock((MethodInfo *)0x0);
    return;
  }
label_18234f2a2:
  ThrowNullReferenceException();
}


// ApplicationManagers.FullscreenHandler$$IsWindowed
// il2cpp: bool ApplicationManagers_FullscreenHandler__IsWindowed (const MethodInfo* method);
// 0x18234f030

bool ApplicationManagers_FullscreenHandler__IsWindowed(MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347975 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184347975 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if ((pSVar1 != (Settings_GraphicsSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).FullScreenMode, pSVar2 != (Settings_IntSetting_o *)0x0)) {
    return (pSVar2->fields)._value == 0;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.FullscreenHandler$$Supported
// il2cpp: bool ApplicationManagers_FullscreenHandler__Supported (const MethodInfo* method);
// 0x18234f540

bool ApplicationManagers_FullscreenHandler__Supported(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184347976 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_184347976 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  return iVar1 == 2;
}


// ApplicationManagers.FullscreenHandler$$.ctor
// il2cpp: void ApplicationManagers_FullscreenHandler___ctor (ApplicationManagers_FullscreenHandler_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_FullscreenHandler___ctor(ApplicationManagers_FullscreenHandler_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.FullscreenHandler$$.cctor
// il2cpp: void ApplicationManagers_FullscreenHandler___cctor (const MethodInfo* method);
// 0x18234f8e0

void ApplicationManagers_FullscreenHandler___cctor(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347977 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    Il2CppMethodInitialized_184347977 = '\x01';
  }
  TypeInfo_ApplicationManagers_FullscreenHandler->static_fields->_isFocused = true;
  return;
}



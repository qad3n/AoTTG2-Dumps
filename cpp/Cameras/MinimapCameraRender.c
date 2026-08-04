// Type: Cameras.MinimapCameraRender
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Cameras/MinimapCameraRender.cs
// Prior real C# source (older reference): Assets/Scripts/Cameras/MinimapCamera.cs
// --------------------------------

// Cameras.MinimapCameraRender$$OnPreCull
// il2cpp: void Cameras_MinimapCameraRender__OnPreCull (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x447ed80

void Cameras_MinimapCameraRender__OnPreCull(Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  uint uVar2;
  System_Collections_Generic_List_MapLight__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  Map_MapLight_array *pMVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  long *plVar7;
  float fVar8;
  UnityEngine_Color_Fields UVar9;
  UnityEngine_Color_o value;
  undefined1 auVar10 [12];
  System_Collections_Generic_List_T__o *pSVar11;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Map_MapLight_o *pMVar13;
  Map_MapLight_o *__this_05;
  undefined1 local_40 [16];
  Map_MapLight_o *local_30;
  
  if (g_data_057ae883 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapLight_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapLight_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057ae883 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_T__o *)0x0;
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pMVar13 = (Map_MapLight_o *)0x0;
  pSVar3 = (__this->fields)._disabledLights;
  if (pSVar3 != (System_Collections_Generic_List_MapLight__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x30);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,MethodInfo_List_1_T_Enumerator_Map_MapLight_GetEnumerator);
      pSVar11 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
label_0447eeb7:
      __this_05 = local_30;
      __this_01.fields._8_8_ = pSVar12;
      __this_01.fields._list = pSVar11;
      __this_01.fields._current = (Il2CppObject *)__this_05;
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
      if ((char)bVar6 != '\0') {
        if (__this_05 != (Map_MapLight_o *)0x0) goto code_r0x0447eed5;
        il2cpp_runtime_helper_022b2c90();
        pMVar13 = __this_05;
        goto label_0447efa0;
      }
      __this_02.fields._8_8_ = pSVar12;
      __this_02.fields._list = pSVar11;
      __this_02.fields._current = (Il2CppObject *)__this_05;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      goto label_0447ef3d;
    }
  }
label_0447efaa:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pSVar12;
    __this_03.fields._list = pSVar11;
    __this_03.fields._current = (Il2CppObject *)pMVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar5 == 0) {
label_0447ef3d:
      UVar9 = (UnityEngine_Color_Fields)UnityEngine_RenderSettings__get_ambientLight((MethodInfo *)0x0);
      (__this->fields)._ambientLight.fields = UVar9;
      fVar8 = UnityEngine_RenderSettings__get_ambientIntensity((MethodInfo *)0x0);
      (__this->fields)._ambientIntensity = fVar8;
      bVar6 = UnityEngine_RenderSettings__get_fog((MethodInfo *)0x0);
      *(char *)&(__this->fields)._fog = (char)bVar6;
      value.fields.b = 1.0;
      value.fields.a = 1.0;
      value.fields.r = 1.0;
      value.fields.g = 1.0;
      UnityEngine_RenderSettings__set_ambientLight(value,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_ambientIntensity(1.0,(MethodInfo *)0x0);
      UnityEngine_RenderSettings__set_fog(0,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_04.fields._8_8_ = pSVar12;
  __this_04.fields._list = pSVar11;
  __this_04.fields._current = (Il2CppObject *)pMVar13;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar10._0_8_);
code_r0x0447eed5:
  pMVar13 = __this_05;
  bVar6 = Map_MapLight__MinimapDisableLight(__this_05,(MethodInfo *)0x0);
  lVar5 = MethodInfo_Void_Add;
  local_30 = pMVar13;
  if ((char)bVar6 != '\0') {
    pSVar3 = (__this->fields)._disabledLights;
    if (pSVar3 != (System_Collections_Generic_List_MapLight__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pMVar4 = (pSVar3->fields)._items;
      if (pMVar4 != (Map_MapLight_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pMVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pMVar4->m_Items[(int)uVar2] = __this_05;
          il2cpp_runtime_helper_022b4080(pMVar4->m_Items + (int)uVar2,__this_05);
          local_30 = pMVar13;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_05,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          local_30 = pMVar13;
        }
        goto label_0447eeb7;
      }
label_0447efa0:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022b2c90();
    goto label_0447efaa;
  }
  goto label_0447eeb7;
}


// Cameras.MinimapCameraRender$$OnPostRender
// il2cpp: void Cameras_MinimapCameraRender__OnPostRender (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x447f050

void Cameras_MinimapCameraRender__OnPostRender(Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapLight__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Map_MapLight_o *__this_05;
  
  if (g_data_057ae884 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapLight_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Map_MapLight_GetEnumerator);
    g_data_057ae884 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_05 = (Map_MapLight_o *)0x0;
  __this_00 = (__this->fields)._disabledLights;
  if (__this_00 != (System_Collections_Generic_List_MapLight__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Map_MapLight_GetEnumerator);
    while (__this_01.fields._8_8_ = pIVar6, __this_01.fields._list = pSVar5,
          __this_01.fields._current = (Il2CppObject *)__this_05,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0') {
      if (__this_05 != (Map_MapLight_o *)0x0) {
        Map_MapLight__MinimapEnableLight(__this_05,(MethodInfo *)0x0);
      }
    }
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._list = pSVar5;
    __this_02.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
label_0447f114:
    UnityEngine_RenderSettings__set_ambientLight
              ((UnityEngine_Color_o)(__this->fields)._ambientLight.fields,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_ambientIntensity((__this->fields)._ambientIntensity,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_fog((uint)(byte)(__this->fields)._fog,(MethodInfo *)0x0);
    return;
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    if (lVar1 == 0) goto label_0447f114;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(auVar4._0_8_);
}


// Cameras.MinimapCameraRender$$.ctor
// il2cpp: void Cameras_MinimapCameraRender___ctor (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x447f1d0

void Cameras_MinimapCameraRender___ctor(Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapLight__o *__this_00;
  
  if (g_data_057ae885 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Map_MapLight);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MapLight);
    g_data_057ae885 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_MapLight__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MapLight);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Map_MapLight);
  (__this->fields)._disabledLights = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._disabledLights);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



// Type: Cameras.MinimapCameraRender
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Cameras/MinimapCameraRender.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Cameras/MinimapCamera.cs  [prior source available (delta unverified)]
// --------------------------------

// Cameras.MinimapCameraRender$$OnPreCull
// il2cpp: void Cameras_MinimapCameraRender__OnPreCull (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x414bd70

void Cameras_MinimapCameraRender__OnPreCull
               (Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  uint uVar2;
  System_Collections_Generic_List_MapLight__o *pSVar3;
  System_Collections_Generic_List_object__o *__this_00;
  Map_MapLight_array *pMVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar5;
  bool_conflict bVar6;
  float fVar7;
  UnityEngine_Color_Fields UVar8;
  UnityEngine_Color_o value;
  System_Collections_Generic_List_T__o *pSVar9;
  System_Collections_Generic_List_Enumerator_T__c *pSVar10;
  Map_MapLight_o *__this_03;
  Map_MapLight_o *pMVar11;
  undefined1 local_40 [16];
  Map_MapLight_o *local_30;
  
  if (DAT_057049bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapLight_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapLight__GetEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_057049bd = '\x01';
  }
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
      il2cpp_init_class();
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)
                 (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x30);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this_00,MethodInfo_List_1_T__Enumerator_Map_MapLight__GetEnumerator)
      ;
      pSVar9 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
      pSVar10 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
      while( true ) {
        do {
          __this_03 = local_30;
          __this_01.fields._8_8_ = pSVar10;
          __this_01.fields._list = pSVar9;
          __this_01.fields._current = (Il2CppObject *)__this_03;
          bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
          if ((char)bVar6 == '\0') {
            __this_02.fields._8_8_ = pSVar10;
            __this_02.fields._list = pSVar9;
            __this_02.fields._current = (Il2CppObject *)__this_03;
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
            UVar8 = (UnityEngine_Color_Fields)
                    UnityEngine_RenderSettings__get_ambientLight((MethodInfo *)0x0);
            (__this->fields)._ambientLight.fields = UVar8;
            fVar7 = UnityEngine_RenderSettings__get_ambientIntensity((MethodInfo *)0x0);
            (__this->fields)._ambientIntensity = fVar7;
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
          if (__this_03 == (Map_MapLight_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pMVar11 = __this_03;
          bVar6 = Map_MapLight__MinimapDisableLight(__this_03,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          local_30 = pMVar11;
        } while ((char)bVar6 == '\0');
        pSVar3 = (__this->fields)._disabledLights;
        if (pSVar3 == (System_Collections_Generic_List_MapLight__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pMVar4 = (pSVar3->fields)._items;
        if (pMVar4 == (Map_MapLight_array *)0x0) break;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pMVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pMVar4->m_Items[(int)uVar2] = __this_03;
          il2cpp_runtime_glue(pMVar4->m_Items + (int)uVar2,__this_03);
          local_30 = pMVar11;
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_03,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          local_30 = pMVar11;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MinimapCameraRender$$OnPostRender
// il2cpp: void Cameras_MinimapCameraRender__OnPostRender (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x414c040

void Cameras_MinimapCameraRender__OnPostRender
               (Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapLight__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Map_MapLight_o *__this_03;
  
  if (DAT_057049be == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapLight_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapLight__GetEnumerator);
    DAT_057049be = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  __this_03 = (Map_MapLight_o *)0x0;
  __this_00 = (__this->fields)._disabledLights;
  if (__this_00 != (System_Collections_Generic_List_MapLight__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Map_MapLight__GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar1 == '\0') break;
      if (__this_03 != (Map_MapLight_o *)0x0) {
        Map_MapLight__MinimapEnableLight(__this_03,(MethodInfo *)0x0);
      }
    }
    __this_02.fields._8_8_ = pIVar3;
    __this_02.fields._list = pSVar2;
    __this_02.fields._current = (Il2CppObject *)__this_03;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    UnityEngine_RenderSettings__set_ambientLight
              ((UnityEngine_Color_o)(__this->fields)._ambientLight.fields,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_ambientIntensity
              ((__this->fields)._ambientIntensity,(MethodInfo *)0x0);
    UnityEngine_RenderSettings__set_fog((uint)(byte)(__this->fields)._fog,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Cameras.MinimapCameraRender$$.ctor
// il2cpp: void Cameras_MinimapCameraRender___ctor (Cameras_MinimapCameraRender_o* __this, const MethodInfo* method);
// 0x414c1c0

void Cameras_MinimapCameraRender___ctor(Cameras_MinimapCameraRender_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapLight__o *__this_00;
  
  if (DAT_057049bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapLight);
    il2cpp_init_method_metadata(&TypeInfo_List_MapLight);
    DAT_057049bf = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_MapLight__o *)il2cpp_runtime_glue(TypeInfo_List_MapLight);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Map_MapLight);
  (__this->fields)._disabledLights = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._disabledLights);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



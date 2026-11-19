// Type: Utility.MobileFullscreenUtility
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/Utility/MobileFullscreenUtility.cs
// Prior real C# source: none
// --------------------------------

// Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$.ctor
// il2cpp: void Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15___ctor (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5de08c0

void Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15___ctor
               (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$System.IDisposable.Dispose
// il2cpp: void Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15__System_IDisposable_Dispose (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o* __this, const MethodInfo* method);
// 0x5de0990

void Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15__System_IDisposable_Dispose
               (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o *__this,
               MethodInfo *method)

{
  return;
}


// Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$MoveNext
// il2cpp: bool Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15__MoveNext (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o* __this, const MethodInfo* method);
// 0x5de09a0

bool Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15__MoveNext
               (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o *__this,
               MethodInfo *method)

{
  int iVar1;
  UI_BaseMenu_o *pUVar2;
  bool bVar3;
  int iVar4;
  Il2CppObject *__this_00;
  Utility_MobileFullscreenUtility_c *method_00;
  
  if (Il2CppMethodInitialized_0754827e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_0754827e = '\x01';
  }
  iVar4 = (__this->fields).__1__state;
  if (iVar4 == 1) {
    (__this->fields).__1__state = -1;
    method_00 = TypeInfo_Utility_MobileFullscreenUtility;
    if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
    }
    Utility_MobileFullscreenUtility__RefreshResolutionInputScale((MethodInfo *)method_00);
    iVar4 = (__this->fields)._i_5__2 + 1;
    (__this->fields)._i_5__2 = iVar4;
    if (5 < iVar4) {
      iVar4 = (__this->fields).requestId;
      if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
        iVar1 = TypeInfo_Utility_MobileFullscreenUtility->static_fields->_uiRefreshRequestId;
      }
      else {
        iVar1 = TypeInfo_Utility_MobileFullscreenUtility->static_fields->_uiRefreshRequestId;
      }
      if (iVar4 != iVar1) {
        return false;
      }
      if ((((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        return false;
      }
      if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
      }
      UI_CursorManager__RefreshCursorLock((MethodInfo *)0x0);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar2 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar2 == (UI_BaseMenu_o *)0x0) {
        ThrowNullReferenceException();
      }
      UI_BaseMenu__ApplyScale
                (pUVar2,TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName,(MethodInfo *)0x0);
      return false;
    }
  }
  else {
    if (iVar4 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    (__this->fields)._i_5__2 = 0;
  }
  __this_00 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame)
  ;
  UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)__this_00,(MethodInfo *)0x0);
  (__this->fields).__2__current = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  (__this->fields).__1__state = 1;
  return true;
}


// Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o* __this, const MethodInfo* method);
// 0x5de0ba0

Il2CppObject *
Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$System.Collections.IEnumerator.Reset
// il2cpp: void Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15__System_Collections_IEnumerator_Reset (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o* __this, const MethodInfo* method);
// 0x5de0bb0

void Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15__System_Collections_IEnumerator_Reset
               (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Utility_MobileFullscreenUtility_RefreshUIAfterResolutionChange_d__15_System_Collections_IEnumera
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Utility.MobileFullscreenUtility.<RefreshUIAfterResolutionChange>d__15$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15__System_Collections_IEnumerator_get_Current (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o* __this, const MethodInfo* method);
// 0x5de0bf0

Il2CppObject *
Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15__System_Collections_IEnumerator_get_Current
          (Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Utility.MobileFullscreenUtility$$GetResolutions
// il2cpp: System_Collections_Generic_List_Resolution__o* Utility_MobileFullscreenUtility__GetResolutions (const MethodInfo* method);
// 0x5ddfc20
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ddff49: jmp 0x5ddff83
// asm:   0x5ddff9e: jmp 0x5de0007
// asm:   0x5de0043: jmp 0x5de0007

System_Collections_Generic_List_Resolution__o *
Utility_MobileFullscreenUtility__GetResolutions(MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  System_Int32_array *pSVar3;
  int32_t iVar4;
  int32_t iVar5;
  int32_t iVar6;
  UnityEngine_Display_o *pUVar7;
  System_Collections_Generic_List_Resolution__o *__this;
  MethodInfo *__this_00;
  ulong uVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar9;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  ulong uVar10;
  double dVar11;
  Il2CppMethodPointer pIVar12;
  Il2CppMethodPointer pIVar13;
  UnityEngine_Resolution_Fields local_60;
  Il2CppMethodPointer local_50;
  float local_44;
  double local_40;
  Il2CppMethodPointer local_38;
  
  if (Il2CppMethodInitialized_07548275 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Display);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Resolution_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Resolution);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    Il2CppMethodInitialized_07548275 = '\x01';
  }
  local_60 = (UnityEngine_Resolution_Fields)UnityEngine_Screen__get_currentResolution((MethodInfo *)0x0);
  iVar4 = UnityEngine_Resolution__get_width((UnityEngine_Resolution_o *)&local_60,(MethodInfo *)0x0);
  local_60 = (UnityEngine_Resolution_Fields)UnityEngine_Screen__get_currentResolution((MethodInfo *)0x0);
  iVar5 = UnityEngine_Resolution__get_height((UnityEngine_Resolution_o *)&local_60,(MethodInfo *)0x0);
  if (iVar5 < iVar4) {
    iVar5 = iVar4;
  }
  local_60 = (UnityEngine_Resolution_Fields)UnityEngine_Screen__get_currentResolution((MethodInfo *)0x0);
  iVar6 = UnityEngine_Resolution__get_width((UnityEngine_Resolution_o *)&local_60,(MethodInfo *)0x0);
  local_60 = (UnityEngine_Resolution_Fields)UnityEngine_Screen__get_currentResolution((MethodInfo *)0x0);
  iVar4 = UnityEngine_Resolution__get_height((UnityEngine_Resolution_o *)&local_60,(MethodInfo *)0x0);
  if (iVar6 < iVar4) {
    iVar4 = iVar6;
  }
  if ((iVar5 < 1) || (iVar4 < 1)) {
    iVar4 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    iVar5 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    iVar6 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    if (iVar6 < iVar4) {
      iVar4 = iVar6;
    }
    uVar1 = (TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor;
    pMVar9 = extraout_RDX_00;
  }
  else {
    uVar1 = (TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor;
    pMVar9 = extraout_RDX;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
    pMVar9 = extraout_RDX_01;
  }
  Utility_MobileFullscreenUtility__CacheNativeResolution(iVar5,iVar4,pMVar9);
  if ((TypeInfo_UnityEngine_Display->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Display);
  }
  pUVar7 = UnityEngine_Display__get_main((MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_Display_o *)0x0) {
    iVar5 = UnityEngine_Display__get_systemWidth(pUVar7,(MethodInfo *)0x0);
    pUVar7 = UnityEngine_Display__get_main((MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Display_o *)0x0) {
      iVar4 = UnityEngine_Display__get_systemHeight(pUVar7,(MethodInfo *)0x0);
      if (iVar4 < iVar5) {
        iVar4 = iVar5;
      }
      pUVar7 = UnityEngine_Display__get_main((MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Display_o *)0x0) {
        iVar5 = UnityEngine_Display__get_systemWidth(pUVar7,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_Display__get_main((MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Display_o *)0x0) {
          iVar6 = UnityEngine_Display__get_systemHeight(pUVar7,(MethodInfo *)0x0);
          if (iVar6 <= iVar5) {
            iVar5 = iVar6;
          }
          Utility_MobileFullscreenUtility__CacheNativeResolution(iVar4,iVar5,method_00);
          iVar5 = TypeInfo_Utility_MobileFullscreenUtility->static_fields->_nativeWidth;
          iVar4 = TypeInfo_Utility_MobileFullscreenUtility->static_fields->_nativeHeight;
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Resolution);
          System_Collections_Generic_List_Resolution____ctor
                    (__this,(MethodInfo_3991760 *)MethodInfo_System_Collections_Generic_List_Resolution_ctor);
          __this_00 = (MethodInfo *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
          System_Collections_Generic_HashSet_object____ctor
                    ((System_Collections_Generic_HashSet_object__o *)__this_00,
                     (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
          pMVar9 = __this_00;
          Utility_MobileFullscreenUtility__AddResolution
                    (__this,(System_Collections_Generic_HashSet_string__o *)__this_00,iVar5,iVar4,in_R8);
          pSVar3 = TypeInfo_Utility_MobileFullscreenUtility->static_fields->ShortSideOptions;
          if (pSVar3 != (System_Int32_array *)0x0) {
            if (0 < (int)pSVar3->max_length) {
              local_44 = (float)iVar5 / (float)iVar4;
              uVar8 = pSVar3->max_length & 0xffffffff;
              uVar10 = 0;
              do {
                if (uVar8 <= uVar10) {
                  ThrowIndexOutOfRangeException();
                }
                iVar5 = pSVar3->m_Items[uVar10];
                if (iVar5 <= iVar4) {
                  if (Il2CppMethodInitialized_07541320 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
                    Il2CppMethodInitialized_07541320 = '\x01';
                    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                  }
                  else {
                    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
                  }
                  if (uVar1 == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                  }
                  local_50 = (Il2CppMethodPointer)CONCAT44(local_50._4_4_,(float)iVar5 * local_44);
                  local_40 = (double)((float)iVar5 * local_44);
                  method_01 = (MethodInfo *)&local_38;
                  dVar11 = modf(local_40,(double *)method_01,pMVar9);
                  if (0.0 <= local_50._0_4_) {
                    if ((dVar11 == 0.5) && (!NAN(dVar11))) {
                      pIVar13 = (Il2CppMethodPointer)((double)local_38 + 1.0);
                      goto joined_r0x05ddff81;
                    }
                    pIVar13 = (Il2CppMethodPointer)floor(local_40 + 0.5,method_01);
                    uVar1 = (TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor;
                    pIVar12 = local_50;
                  }
                  else {
                    if ((dVar11 != -0.5) || (NAN(dVar11))) {
                      pIVar12 = (Il2CppMethodPointer)ceil(local_40 + -0.5,method_01);
                    }
                    else {
                      pIVar13 = (Il2CppMethodPointer)((double)local_38 + -1.0);
joined_r0x05ddff81:
                      pIVar12 = local_38;
                      if (((long)(double)local_38 & 1U) != 0) {
                        uVar1 = (TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor;
                        pIVar12 = local_50;
                        goto joined_r0x05de003d;
                      }
                    }
                    uVar1 = (TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor;
                    pIVar13 = pIVar12;
                    pIVar12 = local_50;
                  }
joined_r0x05de003d:
                  local_50 = pIVar13;
                  pIVar13 = local_50;
                  if (uVar1 == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility)
                    ;
                    pIVar13 = local_50;
                    pIVar12 = local_50;
                  }
                  local_50 = pIVar12;
                  pMVar9 = __this_00;
                  Utility_MobileFullscreenUtility__AddResolution
                            (__this,(System_Collections_Generic_HashSet_string__o *)__this_00,
                             (int)(double)pIVar13,iVar5,in_R8);
                }
                uVar10 = uVar10 + 1;
                uVar2 = (uint)pSVar3->max_length;
                uVar8 = (ulong)uVar2;
              } while ((long)uVar10 < (long)(int)uVar2);
            }
            return __this;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.MobileFullscreenUtility$$ApplyResolution
// il2cpp: UnityEngine_Resolution_o Utility_MobileFullscreenUtility__ApplyResolution (int32_t resolutionIndex, const MethodInfo* method);
// 0x5de0310
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de0348: jmp 0x5de0510

UnityEngine_Resolution_o
Utility_MobileFullscreenUtility__ApplyResolution(int32_t resolutionIndex,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  bool bVar2;
  uint width;
  int32_t height;
  System_Collections_Generic_List_Resolution__o *__this;
  int index;
  Utility_MobileFullscreenUtility_c *pUVar3;
  MethodInfo *method_00;
  UnityEngine_Resolution_Fields local_28;
  
  if (Il2CppMethodInitialized_07548276 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Resolution_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Resolution_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07548276 = '\x01';
    if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) goto label_05de03bf;
label_05de033a:
    __this = Utility_MobileFullscreenUtility__GetResolutions
                       ((MethodInfo *)TypeInfo_Utility_MobileFullscreenUtility);
  }
  else {
    if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor != 0) goto label_05de033a;
label_05de03bf:
    pUVar3 = TypeInfo_Utility_MobileFullscreenUtility;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
    __this = Utility_MobileFullscreenUtility__GetResolutions((MethodInfo *)pUVar3);
  }
  if (__this == (System_Collections_Generic_List_Resolution__o *)0x0) {
label_05de0510:
    ThrowNullReferenceException();
  }
  index = (__this->fields)._size + -1;
  if (resolutionIndex < index) {
    index = resolutionIndex;
  }
  if (resolutionIndex < 0) {
    index = 0;
  }
  local_28 = (UnityEngine_Resolution_Fields)
             System_Collections_Generic_List_Resolution___get_Item
                       (__this,index,
                        (MethodInfo_3991D70 *)MethodInfo_System_Collections_Generic_List_Resolution_get_Item);
  UnityEngine_Screen__set_orientation(3,(MethodInfo *)0x0);
  width = UnityEngine_Resolution__get_width((UnityEngine_Resolution_o *)&local_28,(MethodInfo *)0x0);
  height = UnityEngine_Resolution__get_height((UnityEngine_Resolution_o *)&local_28,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)(ulong)width;
  UnityEngine_Screen__SetResolution_68cfaa0(width,height,true,(MethodInfo *)0x0);
  Utility_MobileFullscreenUtility__RefreshResolutionInputScale(method_00);
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
    if (pUVar1 == (UI_BaseMenu_o *)0x0) goto label_05de0510;
    UI_BaseMenu__ApplyScale
              (pUVar1,TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName,(MethodInfo *)0x0);
    pUVar3 = TypeInfo_Utility_MobileFullscreenUtility;
    if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
    }
    Utility_MobileFullscreenUtility__ScheduleUIRefreshAfterResolutionChange((MethodInfo *)pUVar3);
  }
  return (UnityEngine_Resolution_o)local_28;
}


// Utility.MobileFullscreenUtility$$GetResolutionInputScale
// il2cpp: float Utility_MobileFullscreenUtility__GetResolutionInputScale (const MethodInfo* method);
// 0x5de07a0

float Utility_MobileFullscreenUtility__GetResolutionInputScale(MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  Utility_MobileFullscreenUtility_c *method_00;
  
  if (Il2CppMethodInitialized_07548277 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    Il2CppMethodInitialized_07548277 = '\x01';
  }
  if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
  }
  iVar1 = TypeInfo_Utility_MobileFullscreenUtility->static_fields->_lastScreenWidth;
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  if (iVar1 == iVar2) {
    if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
    }
    iVar1 = TypeInfo_Utility_MobileFullscreenUtility->static_fields->_lastScreenHeight;
    iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
    if (iVar1 == iVar2) goto label_05de082e;
  }
  method_00 = TypeInfo_Utility_MobileFullscreenUtility;
  if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
  }
  Utility_MobileFullscreenUtility__RefreshResolutionInputScale((MethodInfo *)method_00);
label_05de082e:
  if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
  }
  return TypeInfo_Utility_MobileFullscreenUtility->static_fields->_resolutionInputScale;
}


// Utility.MobileFullscreenUtility$$AddResolution
// il2cpp: void Utility_MobileFullscreenUtility__AddResolution (System_Collections_Generic_List_Resolution__o* resolutions, System_Collections_Generic_HashSet_string__o* found, int32_t width, int32_t height, const MethodInfo* method);
// 0x5de01a0

void Utility_MobileFullscreenUtility__AddResolution
               (System_Collections_Generic_List_Resolution__o *resolutions,
               System_Collections_Generic_HashSet_string__o *found,int32_t width,int32_t height,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Resolution_array *pUVar3;
  UnityEngine_Resolution_o item;
  MethodInfo *pMVar4;
  bool bVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  int32_t local_40;
  int32_t local_3c;
  UnityEngine_Resolution_Fields local_38;
  
  local_40 = height;
  local_3c = width;
  if (Il2CppMethodInitialized_07548278 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Resolution_Add);
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_07548278 = '\x01';
  }
  pSVar6 = System_Int32__ToString(&local_3c,(MethodInfo *)0x0);
  str2 = System_Int32__ToString(&local_40,(MethodInfo *)0x0);
  pSVar6 = System_String__Concat_5301f10(pSVar6,",",str2,(MethodInfo *)0x0);
  if (found != (System_Collections_Generic_HashSet_string__o *)0x0) {
    bVar5 = System_Collections_Generic_HashSet_object___Contains
                      ((System_Collections_Generic_HashSet_object__o *)found,(Il2CppObject *)pSVar6,
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (bVar5) {
      return;
    }
    local_38.m_Width = 0;
    local_38.m_Height = 0;
    local_38.m_RefreshRate.fields.numerator = 0;
    local_38.m_RefreshRate.fields.denominator = 0;
    UnityEngine_Resolution__set_width((UnityEngine_Resolution_o *)&local_38,local_3c,(MethodInfo *)0x0);
    UnityEngine_Resolution__set_height((UnityEngine_Resolution_o *)&local_38,local_40,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_Resolution_Add;
    if (resolutions != (System_Collections_Generic_List_Resolution__o *)0x0) {
      item.fields.m_RefreshRate.fields = local_38.m_RefreshRate.fields;
      item.fields.m_Width = local_38.m_Width;
      item.fields.m_Height = local_38.m_Height;
      piVar1 = &(resolutions->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (resolutions->fields)._items;
      if (pUVar3 != (UnityEngine_Resolution_array *)0x0) {
        uVar2 = (resolutions->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (resolutions->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2].fields.m_Width = local_38.m_Width;
          pUVar3->m_Items[(int)uVar2].fields.m_Height = local_38.m_Height;
          pUVar3->m_Items[(int)uVar2].fields.m_RefreshRate.fields = local_38.m_RefreshRate.fields;
        }
        else {
          System_Collections_Generic_List_Resolution___AddWithResize
                    (resolutions,item,(MethodInfo_39920B0 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)found,(Il2CppObject *)pSVar6,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.MobileFullscreenUtility$$CacheNativeResolution
// il2cpp: void Utility_MobileFullscreenUtility__CacheNativeResolution (int32_t width, int32_t height, const MethodInfo* method);
// 0x5de00c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de0114: jmp 0x5de017b
// asm:   0x5de013b: jmp 0x5de017b

void Utility_MobileFullscreenUtility__CacheNativeResolution(int32_t width,int32_t height,MethodInfo *method)

{
  int iVar1;
  Utility_MobileFullscreenUtility_StaticFields *pUVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07548279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    Il2CppMethodInitialized_07548279 = '\x01';
  }
  if ((0 < width) && (0 < height)) {
    if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
      pUVar2 = TypeInfo_Utility_MobileFullscreenUtility->static_fields;
      iVar1 = pUVar2->_nativeWidth;
    }
    else {
      pUVar2 = TypeInfo_Utility_MobileFullscreenUtility->static_fields;
      iVar1 = pUVar2->_nativeWidth;
    }
    if (0 < iVar1) {
      if ((((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
        pUVar2 = TypeInfo_Utility_MobileFullscreenUtility->static_fields;
        iVar3 = pUVar2->_nativeHeight;
      }
      else {
        iVar3 = pUVar2->_nativeHeight;
      }
      if (0 < iVar3) {
        if ((((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
          pUVar2 = TypeInfo_Utility_MobileFullscreenUtility->static_fields;
          iVar3 = pUVar2->_nativeHeight;
        }
        if (height * width <= iVar3 * pUVar2->_nativeWidth) {
          return;
        }
      }
    }
    if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
    }
    pUVar2 = TypeInfo_Utility_MobileFullscreenUtility->static_fields;
    pUVar2->_nativeWidth = width;
    pUVar2->_nativeHeight = height;
  }
  return;
}


// Utility.MobileFullscreenUtility$$RefreshResolutionInputScale
// il2cpp: void Utility_MobileFullscreenUtility__RefreshResolutionInputScale (const MethodInfo* method);
// 0x5de0520

void Utility_MobileFullscreenUtility__RefreshResolutionInputScale(MethodInfo *method)

{
  uint32_t uVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_Display_o *pUVar5;
  MethodInfo *method_00;
  float fVar6;
  
  if (Il2CppMethodInitialized_0754827a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Display);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    Il2CppMethodInitialized_0754827a = '\x01';
  }
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
  }
  TypeInfo_Utility_MobileFullscreenUtility->static_fields->_lastScreenWidth = iVar2;
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  TypeInfo_Utility_MobileFullscreenUtility->static_fields->_lastScreenHeight = iVar2;
  if ((TypeInfo_UnityEngine_Display->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Display);
  }
  pUVar5 = UnityEngine_Display__get_main((MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Display_o *)0x0) {
    iVar2 = UnityEngine_Display__get_systemWidth(pUVar5,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Display__get_main((MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Display_o *)0x0) {
      iVar3 = UnityEngine_Display__get_systemHeight(pUVar5,(MethodInfo *)0x0);
      if (iVar3 < iVar2) {
        iVar3 = iVar2;
      }
      pUVar5 = UnityEngine_Display__get_main((MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Display_o *)0x0) {
        iVar2 = UnityEngine_Display__get_systemWidth(pUVar5,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_Display__get_main((MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_Display_o *)0x0) {
          iVar4 = UnityEngine_Display__get_systemHeight(pUVar5,(MethodInfo *)0x0);
          if (iVar4 <= iVar2) {
            iVar2 = iVar4;
          }
          Utility_MobileFullscreenUtility__CacheNativeResolution(iVar3,iVar2,method_00);
          iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
          iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
          if (iVar3 < iVar2) {
            iVar2 = iVar3;
          }
          uVar1 = (TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor;
          if (iVar2 < 1) {
            fVar6 = 1.0;
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
              fVar6 = 1.0;
            }
          }
          else {
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
            }
            fVar6 = 1080.0 / (float)iVar2;
          }
          TypeInfo_Utility_MobileFullscreenUtility->static_fields->_resolutionInputScale = fVar6;
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Utility.MobileFullscreenUtility$$ScheduleUIRefreshAfterResolutionChange
// il2cpp: void Utility_MobileFullscreenUtility__ScheduleUIRefreshAfterResolutionChange (const MethodInfo* method);
// 0x5de06a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5de0795: jmp 0x5de0730

void Utility_MobileFullscreenUtility__ScheduleUIRefreshAfterResolutionChange(MethodInfo *method)

{
  UI_BaseMenu_o *__this;
  Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o *__this_00;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_0754827b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_0754827b = '\x01';
  }
  if ((TypeInfo_Utility_MobileFullscreenUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_MobileFullscreenUtility);
  }
  iVar1 = TypeInfo_Utility_MobileFullscreenUtility->static_fields->_uiRefreshRequestId + 1;
  TypeInfo_Utility_MobileFullscreenUtility->static_fields->_uiRefreshRequestId = iVar1;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    iVar1 = TypeInfo_Utility_MobileFullscreenUtility->static_fields->_uiRefreshRequestId;
    __this = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  else {
    __this = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  }
  if (Il2CppMethodInitialized_0754827c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Utility_MobileFullscreenUtility_RefreshUIAfterResolutionChange_d__15);
    Il2CppMethodInitialized_0754827c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Utility_MobileFullscreenUtility_RefreshUIAfterResolutionChange_d__15);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).requestId = iVar1;
  if (__this == (UI_BaseMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// Utility.MobileFullscreenUtility$$RefreshUIAfterResolutionChange
// il2cpp: System_Collections_IEnumerator_o* Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange (int32_t requestId, const MethodInfo* method);
// 0x5de0860

System_Collections_IEnumerator_o *
Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange(int32_t requestId,MethodInfo *method)

{
  Utility_MobileFullscreenUtility__RefreshUIAfterResolutionChange_d__15_o *__this;
  
  if (Il2CppMethodInitialized_0754827c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Utility_MobileFullscreenUtility_RefreshUIAfterResolutionChange_d__15);
    Il2CppMethodInitialized_0754827c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Utility_MobileFullscreenUtility_RefreshUIAfterResolutionChange_d__15);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).requestId = requestId;
  return (System_Collections_IEnumerator_o *)__this;
}


// Utility.MobileFullscreenUtility$$.cctor
// il2cpp: void Utility_MobileFullscreenUtility___cctor (const MethodInfo* method);
// 0x5de08e0

void Utility_MobileFullscreenUtility___cctor(MethodInfo *method)

{
  System_Int32_array *array;
  
  if (Il2CppMethodInitialized_0754827d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_MobileFullscreenUtility);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_3423A0FF744CD6C5D7ABC320BF7C5DC4BD9C9BAFD54BFDE46CC9B706D1F415AE
              );
    Il2CppMethodInitialized_0754827d = '\x01';
  }
  array = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,8);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
            ((System_Array_o *)array,
             FieldRva_PrivateImplementationDetails_3423A0FF744CD6C5D7ABC320BF7C5DC4BD9C9BAFD54BFDE46CC9B706D1F415AE
             ,(MethodInfo *)0x0);
  TypeInfo_Utility_MobileFullscreenUtility->static_fields->ShortSideOptions = array;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Utility_MobileFullscreenUtility->static_fields->ShortSideOptions);
  TypeInfo_Utility_MobileFullscreenUtility->static_fields->_resolutionInputScale = 1.0;
  return;
}



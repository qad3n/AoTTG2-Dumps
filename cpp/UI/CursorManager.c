// Type: UI.CursorManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CursorManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CursorManager.cs  [CHANGED since prior version]
// --------------------------------

// UI.CursorManager$$Init
// il2cpp: void UI_CursorManager__Init (const MethodInfo* method);
// 0x4079890

/* WARNING: Removing unreachable block (ram,0x04079e50) */

void UI_CursorManager__Init(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int32_t key;
  System_Collections_IEnumerator_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_String_o *path;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  System_RuntimeTypeHandle_o handle;
  char cVar5;
  Il2CppObject *pIVar6;
  System_Type_o *enumType;
  System_Array_o *__this_00;
  System_Collections_IEnumerator_o *pSVar7;
  VirtualInvokeData *pVVar8;
  long *plVar9;
  int32_t *piVar10;
  System_String_o *pSVar11;
  UnityEngine_Object_o *value;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (DAT_057044c8 == '\0') {
    il2cpp_init_method_metadata(&TypeRef_CrosshairStyle);
    il2cpp_init_method_metadata(&TypeInfo_CrosshairStyle);
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_CursorManager_CreateSingleton_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"Cursors/Cursor");
    DAT_057044c8 = '\x01';
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar6 = Utility_SingletonFactory__CreateSingleton<object>
                     (*(Il2CppObject **)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8),MethodInfo_CursorManager_CreateSingleton_CursorManager);
  lVar13 = *(long *)(TypeInfo_CursorManager + 0xb8);
  *(Il2CppObject **)(lVar13 + 8) = pIVar6;
  il2cpp_runtime_glue(lVar13 + 8);
  handle = TypeRef_CrosshairStyle;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_00 != (System_Array_o *)0x0) {
    pSVar7 = System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
    if (pSVar7 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      pSVar3 = pSVar7->klass;
      uVar1._0_1_ = (pSVar3->_2).rank;
      uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_IEnumerator) {
            pVVar8 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
            goto LAB_04079a63;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar13);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar7,TypeInfo_IEnumerator,0);
LAB_04079a63:
      cVar5 = (*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      if (cVar5 == '\0') {
        plVar9 = (long *)il2cpp_runtime_glue(pSVar7,TypeInfo_IDisposable);
        if (plVar9 == (long *)0x0) goto LAB_04079d66;
        lVar13 = *plVar9;
        if ((ulong)*(ushort *)(lVar13 + 0x12e) == 0) goto LAB_04079d3f;
        lVar14 = 0;
        goto LAB_04079d30;
      }
      pSVar3 = pSVar7->klass;
      uVar2._0_1_ = (pSVar3->_2).rank;
      uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_IEnumerator) {
            pVVar8 = pSVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar13) + 1);
            goto LAB_04079ae8;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar13);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar7,TypeInfo_IEnumerator,1);
LAB_04079ae8:
      plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(Il2CppClass **)(*plVar9 + 0x40) != (TypeInfo_CrosshairStyle->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(plVar9);
      }
      piVar10 = (int32_t *)il2cpp_glue_022c7330(plVar9);
      key = *piVar10;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      local_48.klass = TypeInfo_CrosshairStyle;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = key;
      pSVar11 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      pSVar11 = System_String__Concat("Cursors/Cursor",pSVar11,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      value = ApplicationManagers_ResourceManager__LoadAsset(path,pSVar11,0,(MethodInfo *)0x0);
      if ((value != (UnityEngine_Object_o *)0x0) && (value->klass != TypeInfo_Texture2D)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(value);
      }
      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (*(long *)(TypeInfo_CursorManager + 0xb8) + 0x10);
      if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_Dictionary<Int32Enum__object>__Add
                (__this,key,(Il2CppObject *)value,MethodInfo_Void_Add);
    } while( true );
  }
  goto LAB_04079e4b;
  while (lVar14 = lVar14 + 0x10, (ulong)*(ushort *)(lVar13 + 0x12e) << 4 != lVar14) {
LAB_04079d30:
    if (*(long *)(*(long *)(lVar13 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
      puVar12 = (undefined8 *)
                (lVar13 + (long)*(int *)(*(long *)(lVar13 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
      goto LAB_04079d5d;
    }
  }
LAB_04079d3f:
  puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_04079d5d:
  (*(code *)*puVar12)(plVar9,puVar12[1]);
LAB_04079d66:
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar13 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
  if (lVar13 != 0) {
    *(undefined1 *)(lVar13 + 0x20) = 1;
    return;
  }
LAB_04079e4b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CursorManager$$Update
// il2cpp: void UI_CursorManager__Update (UI_CursorManager_o* __this, const MethodInfo* method);
// 0x4079e70

/* WARNING: Type propagation algorithm not settling */

void UI_CursorManager__Update(UI_CursorManager_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  UI_ChatPanel_o *__this_00;
  long lVar4;
  char cVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  UnityEngine_Object_o *pUVar8;
  long *plVar9;
  
  if (DAT_057044c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_BasePlayerController_GetComponent_BasePlayerCont);
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057044c9 = '\x01';
  }
  uVar1 = *(uint *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
  if ((uVar1 < 8) && ((0xf3U >> (uVar1 & 0x1f) & 1) != 0)) {
LAB_04079f2c:
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057044ca == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CursorManager);
      DAT_057044ca = '\x01';
      iVar2 = *(int *)(TypeInfo_CursorManager + 0xe4);
    }
    else {
      iVar2 = *(int *)(TypeInfo_CursorManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
      iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    else {
      iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    if (iVar2 != 0) {
      UnityEngine_Cursor__set_visible(1,(MethodInfo *)0x0);
      UnityEngine_Cursor__set_lockState(0,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 0;
    }
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar8 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class(TypeInfo_UIManager);
  }
  plVar9 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (plVar9 == (long *)0x0) {
    return;
  }
  if (*(byte *)(*plVar9 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) {
    return;
  }
  if (*(long *)(*(long *)(*plVar9 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
      TypeInfo_InGameMenu) {
    return;
  }
  plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar3 != (long *)0x0) {
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
        TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(plVar3,TypeInfo_InGameManager);
    }
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class(TypeInfo_UIManager);
    plVar9 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar9 == (long *)0x0) goto LAB_0407a351;
  }
  if ((*(byte *)(*plVar9 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
     (*(long *)(*(long *)(*plVar9 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
      TypeInfo_InGameMenu)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  __this_00 = (UI_ChatPanel_o *)plVar9[0x19];
  bVar6 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
  if ((char)bVar6 != '\0') goto LAB_04079f2c;
  if (plVar3 == (long *)0x0) goto LAB_0407a351;
  cVar5 = (**(code **)(*plVar3 + 0x4b8))(plVar3);
  if (((cVar5 == '\0') || (*(char *)((long)plVar3 + 0x7a) != '\0')) ||
     (*(char *)((long)plVar3 + 0x7b) != '\0')) goto LAB_04079f2c;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar6 != '\0') {
    if (__this_00 == (UI_ChatPanel_o *)0x0) goto LAB_0407a351;
    bVar6 = UI_ChatPanel__IsInputActive(__this_00,(MethodInfo *)0x0);
    if (((char)bVar6 != '\0') ||
       (bVar6 = UI_ChatPanel__IsPointerOverChatUI(__this_00,(MethodInfo *)0x0), (char)bVar6 != '\0')
       ) goto LAB_04079f2c;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (*(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x71) != '\0') goto LAB_04079f2c;
  pUVar8 = (UnityEngine_Object_o *)plVar3[0xe];
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar6 != '\0') && (plVar9 = (long *)plVar3[0xe], plVar9 != (long *)0x0)) {
    lVar4 = *plVar9;
    if ((((*(byte *)(TypeInfo_Human + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
         (*(long *)(*(long *)(lVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Human + 0x130) * 8) ==
          TypeInfo_Human)) ||
        ((*(byte *)(TypeInfo_BasicTitan + 0x130) <= *(byte *)(lVar4 + 0x130) &&
         (*(long *)(*(long *)(lVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BasicTitan + 0x130) * 8) ==
          TypeInfo_BasicTitan)))) && ((char)plVar9[0xd] == '\0')) {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (*(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38) == '\0') {
        if ((UnityEngine_Component_o *)plVar3[0xe] == (UnityEngine_Component_o *)0x0) {
LAB_0407a351:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pUVar8 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)plVar3[0xe],MethodInfo_BasePlayerController_GetComponent_BasePlayerCont);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_0407a351;
          if (*(char *)((long)&pUVar8[3].klass + 1) == '\0') {
            if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057044cc == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_CursorManager);
              il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
              il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
              il2cpp_init_method_metadata(&TypeInfo_Object);
              il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
              il2cpp_init_method_metadata();
              DAT_057044cc = '\x01';
            }
            if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
              il2cpp_init_class();
              iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
            }
            else {
              iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
            }
            if (iVar2 != 1) {
              UnityEngine_Cursor__set_visible(0,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 1;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
                plVar9 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              }
              else {
                plVar9 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
              }
              if (plVar9 != (long *)0x0) {
                if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar9 + 200) + -8 +
                             (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) == TypeInfo_InGameMenu)) {
                  pUVar8 = (UnityEngine_Object_o *)plVar9[0x19];
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar6 = UnityEngine_Object__op_Inequality
                                    (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar6 != '\0') {
                    if ((UI_ChatPanel_o *)plVar9[0x19] == (UI_ChatPanel_o *)0x0) goto LAB_0407a61b;
                    UI_ChatPanel__CloseEmojiPanel((UI_ChatPanel_o *)plVar9[0x19],(MethodInfo *)0x0);
                  }
                }
              }
            }
            plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
            if (plVar9 != (long *)0x0) {
              if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
                 (*(long *)(*(long *)(*plVar9 + 200) + -8 +
                           (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) == TypeInfo_InGameCamera)) {
                if ((*(uint *)(plVar9 + 0xd) | 2) == 2) {
                  iVar7 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
                  if (iVar7 == 1) {
                    return;
                  }
                  iVar7 = 1;
                }
                else {
                  iVar7 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
                  if (iVar7 == 2) {
                    return;
                  }
                  iVar7 = 2;
                }
                UnityEngine_Cursor__set_lockState(iVar7,(MethodInfo *)0x0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume();
            }
LAB_0407a61b:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_057044cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata();
    DAT_057044cb = '\x01';
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_init_class();
    iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
  }
  else {
    iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
  }
  if (iVar2 != 2) {
    UnityEngine_Cursor__set_visible(0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 2;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
      plVar9 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      plVar9 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
          TypeInfo_InGameMenu)) {
        pUVar8 = (UnityEngine_Object_o *)plVar9[0x19];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          (pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if ((UI_ChatPanel_o *)plVar9[0x19] == (UI_ChatPanel_o *)0x0) goto LAB_0407a82b;
          UI_ChatPanel__CloseEmojiPanel((UI_ChatPanel_o *)plVar9[0x19],(MethodInfo *)0x0);
        }
      }
    }
  }
  plVar9 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar9 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
       (*(long *)(*(long *)(*plVar9 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) ==
        TypeInfo_InGameCamera)) {
      if ((*(uint *)(plVar9 + 0xd) | 2) == 2) {
        iVar7 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
        if (iVar7 == 1) {
          return;
        }
        iVar7 = 1;
      }
      else {
        iVar7 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
        if (iVar7 == 2) {
          return;
        }
        iVar7 = 2;
      }
      UnityEngine_Cursor__set_lockState(iVar7,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
LAB_0407a82b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CursorManager$$RefreshCursorLock
// il2cpp: void UI_CursorManager__RefreshCursorLock (const MethodInfo* method);
// 0x407a830

void UI_CursorManager__RefreshCursorLock(MethodInfo *method)

{
  return;
}


// UI.CursorManager$$SetPointer
// il2cpp: void UI_CursorManager__SetPointer (bool force, const MethodInfo* method);
// 0x407a360

void UI_CursorManager__SetPointer(bool_conflict force,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057044ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    DAT_057044ca = '\x01';
  }
  if ((char)force == '\0') {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    else {
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    if (iVar1 == 0) {
      return;
    }
  }
  UnityEngine_Cursor__set_visible(1,(MethodInfo *)0x0);
  UnityEngine_Cursor__set_lockState(0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) != 0) {
    **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 0;
    return;
  }
  il2cpp_init_class();
  **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 0;
  return;
}


// UI.CursorManager$$SetHidden
// il2cpp: void UI_CursorManager__SetHidden (bool force, const MethodInfo* method);
// 0x407a620

void UI_CursorManager__SetHidden(bool_conflict force,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  long *plVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  
  if (DAT_057044cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata();
    DAT_057044cb = '\x01';
  }
  if ((char)force == '\0') {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    else {
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    if (iVar1 != 2) goto LAB_0407a6be;
  }
  else {
LAB_0407a6be:
    UnityEngine_Cursor__set_visible(0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 2;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
      plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
          TypeInfo_InGameMenu)) {
        x = (UnityEngine_Object_o *)plVar2[0x19];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if ((UI_ChatPanel_o *)plVar2[0x19] == (UI_ChatPanel_o *)0x0) goto LAB_0407a82b;
          UI_ChatPanel__CloseEmojiPanel((UI_ChatPanel_o *)plVar2[0x19],(MethodInfo *)0x0);
        }
      }
    }
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) ==
        TypeInfo_InGameCamera)) {
      if ((*(uint *)(plVar2 + 0xd) | 2) == 2) {
        iVar4 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
        if (iVar4 == 1) {
          return;
        }
        iVar4 = 1;
      }
      else {
        iVar4 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
        if (iVar4 == 2) {
          return;
        }
        iVar4 = 2;
      }
      UnityEngine_Cursor__set_lockState(iVar4,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
LAB_0407a82b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CursorManager$$SetCrosshair
// il2cpp: void UI_CursorManager__SetCrosshair (bool force, const MethodInfo* method);
// 0x407a410

void UI_CursorManager__SetCrosshair(bool_conflict force,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  long *plVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  
  if (DAT_057044cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata();
    DAT_057044cc = '\x01';
  }
  if ((char)force == '\0') {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    else {
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    if (iVar1 != 1) goto LAB_0407a4ae;
  }
  else {
LAB_0407a4ae:
    UnityEngine_Cursor__set_visible(0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 1;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
      plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (plVar2 != (long *)0x0) {
      if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
          TypeInfo_InGameMenu)) {
        x = (UnityEngine_Object_o *)plVar2[0x19];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if ((UI_ChatPanel_o *)plVar2[0x19] == (UI_ChatPanel_o *)0x0) goto LAB_0407a61b;
          UI_ChatPanel__CloseEmojiPanel((UI_ChatPanel_o *)plVar2[0x19],(MethodInfo *)0x0);
        }
      }
    }
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) ==
        TypeInfo_InGameCamera)) {
      if ((*(uint *)(plVar2 + 0xd) | 2) == 2) {
        iVar4 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
        if (iVar4 == 1) {
          return;
        }
        iVar4 = 1;
      }
      else {
        iVar4 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
        if (iVar4 == 2) {
          return;
        }
        iVar4 = 2;
      }
      UnityEngine_Cursor__set_lockState(iVar4,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
LAB_0407a61b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CursorManager$$SetCrosshairColor
// il2cpp: void UI_CursorManager__SetCrosshairColor (bool white, const MethodInfo* method);
// 0x407a840

void UI_CursorManager__SetCrosshairColor(bool_conflict white,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_057044cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    DAT_057044cd = '\x01';
    if (*(int *)(TypeInfo_CursorManager + 0xe4) != 0) goto LAB_0407a862;
LAB_0407a8cf:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) goto LAB_0407a8cf;
LAB_0407a862:
    lVar1 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
  }
  if (lVar1 != 0) {
    if ((uint)*(byte *)(lVar1 + 0x21) != (white & 0xffU)) {
      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
        il2cpp_init_class();
        lVar1 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
        if (lVar1 == 0) goto LAB_0407a8e7;
      }
      *(char *)(lVar1 + 0x21) = (char)white;
    }
    return;
  }
LAB_0407a8e7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CursorManager$$SetCrosshairText
// il2cpp: void UI_CursorManager__SetCrosshairText (System_String_o* text, const MethodInfo* method);
// 0x407a8f0

void UI_CursorManager__SetCrosshairText(System_String_o *text,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_057044ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    DAT_057044ce = '\x01';
    iVar1 = *(int *)(TypeInfo_CursorManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CursorManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    *(System_String_o **)(lVar2 + 0x28) = text;
    il2cpp_runtime_glue(lVar2 + 0x28,text);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CursorManager$$SetHookArrow
// il2cpp: void UI_CursorManager__SetHookArrow (bool left, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, bool white, const MethodInfo* method);
// 0x407a980

void UI_CursorManager__SetHookArrow
               (bool_conflict left,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
               bool_conflict white,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (DAT_057044cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    DAT_057044cf = '\x01';
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) goto LAB_0407aa4c;
LAB_0407a9ad:
    lVar1 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
    lVar2 = TypeInfo_CursorManager;
  }
  else {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) != 0) goto LAB_0407a9ad;
LAB_0407aa4c:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
    lVar2 = TypeInfo_CursorManager;
  }
  TypeInfo_CursorManager = lVar2;
  if (lVar1 != 0) {
    if ((char)left == '\0') {
      *(long *)(lVar1 + 0x44) = position.fields._0_8_;
      *(float *)(lVar1 + 0x4c) = position.fields.z;
      lVar1 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar1 == 0) goto LAB_0407aac5;
      *(char *)(lVar1 + 0x71) = (char)white;
      *(long *)(lVar1 + 0x60) = rotation.fields._0_8_;
      puVar3 = (undefined8 *)(lVar1 + 0x68);
    }
    else {
      *(long *)(lVar1 + 0x38) = position.fields._0_8_;
      *(float *)(lVar1 + 0x40) = position.fields.z;
      lVar1 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
      if (lVar1 == 0) goto LAB_0407aac5;
      *(char *)(lVar1 + 0x70) = (char)white;
      *(long *)(lVar1 + 0x50) = rotation.fields._0_8_;
      puVar3 = (undefined8 *)(lVar1 + 0x58);
    }
    *puVar3 = rotation.fields._8_8_;
    return;
  }
LAB_0407aac5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CursorManager$$UpdateHookArrows
// il2cpp: void UI_CursorManager__UpdateHookArrows (UnityEngine_UI_Image_o* hookArrowLeft, UnityEngine_UI_Image_o* hookArrowRight, const MethodInfo* method);
// 0x407aad0

void UI_CursorManager__UpdateHookArrows
               (UnityEngine_UI_Image_o *hookArrowLeft,UnityEngine_UI_Image_o *hookArrowRight,
               MethodInfo *method)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  UnityEngine_Object_o *x;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (DAT_057044d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_057044d0 = '\x01';
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) goto LAB_0407abb3;
LAB_0407ab00:
    lVar2 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) != 0) goto LAB_0407ab00;
LAB_0407abb3:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x20) == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    else {
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    if (iVar1 == 1) {
      plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
      if (plVar3 != (long *)0x0) {
        if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(TypeInfo_InGameManager + 0x130)) ||
           (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) !=
            TypeInfo_InGameManager)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(plVar3);
        }
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0xa8), lVar2 == 0)) goto LAB_0407afe2;
      if (*(char *)(lVar2 + 0x11) != '\0') {
        if (plVar3 == (long *)0x0) goto LAB_0407afe2;
        x = (UnityEngine_Object_o *)plVar3[0xe];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (((char)bVar4 != '\0') && ((long *)plVar3[0xe] != (long *)0x0)) {
          lVar2 = *(long *)plVar3[0xe];
          if ((*(byte *)(TypeInfo_Human + 0x130) <= *(byte *)(lVar2 + 0x130)) &&
             (*(long *)(*(long *)(lVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Human + 0x130) * 8) ==
              TypeInfo_Human)) {
            if ((hookArrowLeft != (UnityEngine_UI_Image_o *)0x0) &&
               (pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0),
               pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
              bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
              if ((char)bVar4 == '\0') {
                pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_0407afe2;
                UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
              }
              if ((hookArrowRight != (UnityEngine_UI_Image_o *)0x0) &&
                 (pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0),
                 pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
                bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
                if ((char)bVar4 == '\0') {
                  pUVar5 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                  if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_0407afe2;
                  UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
                }
                pUVar6 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                lVar2 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
                if ((lVar2 != 0) && (pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__set_position
                            (pUVar6,(UnityEngine_Vector3_o)
                                    *(UnityEngine_Vector3_Fields *)(lVar2 + 0x38),(MethodInfo *)0x0)
                  ;
                  pUVar6 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                  lVar2 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
                  if ((lVar2 != 0) && (pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__set_position
                              (pUVar6,(UnityEngine_Vector3_o)
                                      *(UnityEngine_Vector3_Fields *)(lVar2 + 0x44),
                               (MethodInfo *)0x0);
                    pUVar6 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                    lVar2 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
                    if ((lVar2 != 0) && (pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                      UnityEngine_Transform__set_rotation
                                (pUVar6,(UnityEngine_Quaternion_o)
                                        *(UnityEngine_Quaternion_Fields *)(lVar2 + 0x50),
                                 (MethodInfo *)0x0);
                      pUVar6 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)hookArrowRight,
                                          (MethodInfo *)0x0);
                      lVar2 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
                      if ((lVar2 != 0) && (pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                        UnityEngine_Transform__set_rotation
                                  (pUVar6,(UnityEngine_Quaternion_o)
                                          *(UnityEngine_Quaternion_Fields *)(lVar2 + 0x60),
                                   (MethodInfo *)0x0);
                        lVar2 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
                        if (lVar2 != 0) {
                          uVar7 = 0x3f8000003f800000;
                          uVar8 = uVar7;
                          if (*(char *)(lVar2 + 0x70) == '\0') {
                            uVar7 = 0x3f800000;
                            uVar8 = 0x3f80000000000000;
                          }
                          (*(hookArrowLeft->klass->vtable)._23_set_color.methodPtr)
                                    (uVar7,uVar8,hookArrowLeft,
                                     (hookArrowLeft->klass->vtable)._23_set_color.method);
                          uVar7 = extraout_RDX;
                          if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
                            il2cpp_init_class();
                            uVar7 = extraout_RDX_00;
                          }
                          lVar2 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
                          if (lVar2 != 0) {
                            uVar8 = 0x3f8000003f800000;
                            uVar9 = uVar8;
                            if (*(char *)(lVar2 + 0x71) == '\0') {
                              uVar8 = 0x3f800000;
                              uVar9 = 0x3f80000000000000;
                            }
                            vtable_dispatch =
                                 (hookArrowRight->klass->vtable)._23_set_color.methodPtr;
                            (*vtable_dispatch)
                                      (uVar8,uVar9,hookArrowRight,
                                       (hookArrowRight->klass->vtable)._23_set_color.method,uVar7,
                                       vtable_dispatch);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_0407afe2;
          }
        }
      }
    }
    if ((hookArrowLeft != (UnityEngine_UI_Image_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto LAB_0407afe2;
        UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      }
      if ((hookArrowRight != (UnityEngine_UI_Image_o *)0x0) &&
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
        bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          return;
        }
        pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0407afe2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CursorManager$$UpdateCrosshair
// il2cpp: void UI_CursorManager__UpdateCrosshair (UnityEngine_UI_RawImage_o* crosshairImageWhite, UnityEngine_UI_RawImage_o* crosshairImageRed, UnityEngine_UI_Text_o* crosshairLabelWhite, UnityEngine_UI_Text_o* crosshairLabelRed, bool force, const MethodInfo* method);
// 0x407aff0

void UI_CursorManager__UpdateCrosshair
               (UnityEngine_UI_RawImage_o *crosshairImageWhite,
               UnityEngine_UI_RawImage_o *crosshairImageRed,
               UnityEngine_UI_Text_o *crosshairLabelWhite,UnityEngine_UI_Text_o *crosshairLabelRed,
               bool_conflict force,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_Texture_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this;
  long lVar5;
  undefined1 uVar6;
  MethodInfo *pMVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_o UVar10;
  float local_58;
  float fStack_54;
  
  if (DAT_057044d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&MethodInfo_Texture2D_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"");
    DAT_057044d1 = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto LAB_0407b137;
LAB_0407b032:
    lVar5 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto LAB_0407b032;
LAB_0407b137:
    il2cpp_init_class();
    lVar5 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  if (lVar5 == 0) goto LAB_0407b5fd;
  if (*(char *)(lVar5 + 0x20) == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
    iVar1 = *(int *)TypeInfo_CursorManager[2].virtualMethodPointer;
  }
  else {
    iVar1 = *(int *)TypeInfo_CursorManager[2].virtualMethodPointer;
  }
  if (iVar1 != 1) {
    if ((crosshairImageRed != (UnityEngine_UI_RawImage_o *)0x0) &&
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_0407b5fd;
        UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
      }
      if ((crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0407b5fd;
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar4,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_0407b5fd;
        UnityEngine_GameObject__SetActive(pUVar4,0,(MethodInfo *)0x0);
      }
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      lVar5 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
      uVar6 = 1;
      if (lVar5 == 0) goto LAB_0407b5fd;
      goto LAB_0407b5a4;
    }
    goto LAB_0407b5fd;
  }
  lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x58), lVar5 == 0)) goto LAB_0407b5fd;
  bVar2 = System_String__op_Inequality
                    (*(System_String_o **)(lVar5 + 0x18),"",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x90), lVar5 == 0)) goto LAB_0407b5fd;
    iVar1 = *(int *)(lVar5 + 0x14);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    lVar5 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
    if (lVar5 == 0) goto LAB_0407b5fd;
    if ((*(int *)(lVar5 + 0x34) == iVar1) && ((char)force == '\0')) {
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
        lVar5 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
        if (lVar5 == 0) goto LAB_0407b5fd;
      }
      pMVar7 = TypeInfo_CursorManager;
      if (*(char *)(lVar5 + 0x30) != '\0') goto LAB_0407b2c4;
    }
    else {
LAB_0407b2c4:
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_init_class();
      }
      if ((*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
            (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10) ==
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar3 = (UnityEngine_Texture_o *)
                   System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                             (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                               (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10),iVar1,MethodInfo_Texture2D_get_Item),
         crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0)) goto LAB_0407b5fd;
      UnityEngine_UI_RawImage__set_texture(crosshairImageWhite,pUVar3,(MethodInfo *)0x0);
      if ((*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
            (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10) ==
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar3 = (UnityEngine_Texture_o *)
                   System_Collections_Generic_Dictionary<Int32Enum__object>__get_Item
                             (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                               (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10),iVar1,MethodInfo_Texture2D_get_Item),
         crosshairImageRed == (UnityEngine_UI_RawImage_o *)0x0)) goto LAB_0407b5fd;
      UnityEngine_UI_RawImage__set_texture(crosshairImageRed,pUVar3,(MethodInfo *)0x0);
      pMVar7 = TypeInfo_CursorManager;
      if (*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) == 0) goto LAB_0407b5fd;
      *(int *)(*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x34) = iVar1;
    }
    iVar1 = *(int *)((long)&pMVar7[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_CursorManager[2].parameters + 4);
    pMVar7 = TypeInfo_CursorManager;
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pMVar7 = TypeInfo_CursorManager;
  }
  lVar5 = *(long *)(pMVar7[2].virtualMethodPointer + 8);
  if (lVar5 == 0) goto LAB_0407b5fd;
  if ((*(char *)(lVar5 + 0x21) == *(char *)(lVar5 + 0x22)) && ((char)force == '\0')) {
    if (*(int *)((long)&pMVar7[2].parameters + 4) == 0) {
      il2cpp_init_class();
      lVar5 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
      pMVar7 = TypeInfo_CursorManager;
      if (lVar5 == 0) goto LAB_0407b5fd;
    }
    if (*(char *)(lVar5 + 0x30) != '\0') goto LAB_0407b3d2;
  }
  else {
LAB_0407b3d2:
    if (crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_0407b5fd;
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    if (((*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) == 0) ||
        (pUVar4 == (UnityEngine_GameObject_o *)0x0)) ||
       (UnityEngine_GameObject__SetActive
                  (pUVar4,(uint)*(byte *)(*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x21
                                         ),(MethodInfo *)0x0),
       crosshairImageRed == (UnityEngine_UI_RawImage_o *)0x0)) goto LAB_0407b5fd;
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0);
    if ((*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) == 0) ||
       (pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0407b5fd;
    UnityEngine_GameObject__SetActive
              (pUVar4,(uint)(*(char *)(*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x21)
                            == '\0'),(MethodInfo *)0x0);
    pMVar7 = TypeInfo_CursorManager;
    lVar5 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
    if (lVar5 == 0) goto LAB_0407b5fd;
    *(undefined1 *)(lVar5 + 0x22) = *(undefined1 *)(lVar5 + 0x21);
  }
  if (*(int *)((long)&pMVar7[2].parameters + 4) == 0) {
    il2cpp_init_class();
    pMVar7 = TypeInfo_CursorManager;
  }
  lVar5 = *(long *)(pMVar7[2].virtualMethodPointer + 8);
  if (lVar5 == 0) goto LAB_0407b5fd;
  if (*(char *)(lVar5 + 0x21) == '\0') {
    crosshairLabelWhite = crosshairLabelRed;
    crosshairImageWhite = crosshairImageRed;
  }
  if (*(int *)((long)&pMVar7[2].parameters + 4) == 0) {
    il2cpp_init_class();
    lVar5 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
    if (lVar5 == 0) goto LAB_0407b5fd;
  }
  if (((crosshairLabelWhite == (UnityEngine_UI_Text_o *)0x0) ||
      ((*(crosshairLabelWhite->klass->vtable)._75_set_text.methodPtr)
                 (crosshairLabelWhite,*(undefined8 *)(lVar5 + 0x28),
                  (crosshairLabelWhite->klass->vtable)._75_set_text.method),
      crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0)) ||
     (__this = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0),
     __this == (UnityEngine_Transform_o *)0x0)) goto LAB_0407b5fd;
  UVar9 = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
  UVar10 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  local_58 = UVar9.fields.x;
  fStack_54 = UVar9.fields.y;
  fStack_54 = fStack_54 - UVar10.fields.y;
  fVar8 = UVar9.fields.z - UVar10.fields.z;
  local_58 = local_58 - UVar10.fields.x;
  if (9.9999994e-11 <= local_58 * local_58 + fStack_54 * fStack_54 + fVar8 * fVar8) {
    pMVar7 = TypeInfo_CursorManager;
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    UVar9 = UI_CursorManager__GetInGameMousePosition(pMVar7);
    UnityEngine_Transform__set_position(__this,UVar9,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto LAB_0407b5e4;
LAB_0407b592:
    lVar5 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto LAB_0407b592;
LAB_0407b5e4:
    il2cpp_init_class();
    lVar5 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  if (lVar5 != 0) {
    uVar6 = 0;
LAB_0407b5a4:
    *(undefined1 *)(lVar5 + 0x30) = uVar6;
    return;
  }
LAB_0407b5fd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CursorManager$$GetInGameMousePosition
// il2cpp: UnityEngine_Vector3_o UI_CursorManager__GetInGameMousePosition (const MethodInfo* method);
// 0x407b610

UnityEngine_Vector3_o UI_CursorManager__GetInGameMousePosition(MethodInfo *method)

{
  long *plVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_Fields UVar5;
  
  if (DAT_057044d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_057044d2 = '\x01';
  }
  plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar1 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) ==
        TypeInfo_InGameCamera)) {
      if ((*(uint *)(plVar1 + 0xd) | 2) == 2) {
        iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
        iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
        UVar4.fields.x = (float)iVar2 * 0.5;
        UVar4.fields.y = (float)iVar3 * 0.5;
        UVar4.fields.z = 0.0;
        return (UnityEngine_Vector3_o)UVar4.fields;
      }
      UVar5 = (UnityEngine_Vector3_Fields)UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      return (UnityEngine_Vector3_o)UVar5;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CursorManager$$.ctor
// il2cpp: void UI_CursorManager___ctor (UI_CursorManager_o* __this, const MethodInfo* method);
// 0x407b6d0

void UI_CursorManager___ctor(UI_CursorManager_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._ready + 1) = 1;
  *(undefined8 *)&(__this->fields)._lastCrosshairWhite = **(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._lastCrosshairWhite);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$.cctor
// il2cpp: void UI_CursorManager___cctor (const MethodInfo* method);
// 0x407b710

void UI_CursorManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  
  if (DAT_057044d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UI_CrosshairStyle_UnityEngine_Textu);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_CrosshairStyle__Texture2D);
    DAT_057044d3 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_CrosshairStyle__Texture2D)
  ;
  System_Collections_Generic_Dictionary<Int32Enum__object>___ctor(__this,MethodInfo_Dictionary_2_UI_CrosshairStyle_UnityEngine_Textu);
  lVar1 = *(long *)(TypeInfo_CursorManager + 0xb8);
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar1 + 0x10) = __this;
  il2cpp_runtime_glue(lVar1 + 0x10,__this);
  return;
}



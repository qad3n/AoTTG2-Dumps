// Type: UI.CursorManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CursorManager.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CursorManager.cs
// --------------------------------

// UI.CursorManager$$Init
// il2cpp: void UI_CursorManager__Init (const MethodInfo* method);
// 0x43872a0

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
  VirtualInvokeData *pVVar7;
  long *plVar8;
  int32_t *piVar9;
  System_String_o *pSVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  System_Collections_IEnumerator_o *unaff_R12;
  long unaff_R15;
  undefined1 auVar14 [12];
  long local_50;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (g_data_057ae242 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeRef_CrosshairStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CrosshairStyle);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CursorManager_CreateSingleton_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Cursors/Cursor");
    g_data_057ae242 = '\x01';
  }
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar6 = Utility_SingletonFactory__CreateSingleton_object_
                     (*(Il2CppObject **)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8),MethodInfo_CursorManager_CreateSingleton_CursorManager);
  lVar12 = *(long *)(TypeInfo_CursorManager + 0xb8);
  *(Il2CppObject **)(lVar12 + 8) = pIVar6;
  il2cpp_runtime_helper_022b4080(lVar12 + 8);
  handle = TypeRef_CrosshairStyle;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  if (__this_00 == (System_Array_o *)0x0) goto label_0438785b;
  unaff_R12 = System_Array__GetEnumerator(__this_00,(MethodInfo *)0x0);
  if (unaff_R12 != (System_Collections_IEnumerator_o *)0x0) {
    local_50 = 0;
label_04387420:
    pSVar3 = unaff_R12->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IEnumerator) {
          pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
          goto label_04387473;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar12);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,0);
label_04387473:
    cVar5 = (*pVVar7->methodPtr)(unaff_R12,pVVar7->method);
    if (cVar5 == '\0') goto label_043876f3;
    pSVar3 = unaff_R12->klass;
    uVar2._0_1_ = (pSVar3->_2).rank;
    uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IEnumerator) {
          pVVar7 = pSVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 1);
          goto label_043874f8;
        }
        lVar12 = lVar12 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar12);
    }
    pVVar7 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(unaff_R12,TypeInfo_IEnumerator,1);
label_043874f8:
    plVar8 = (long *)(*pVVar7->methodPtr)(unaff_R12,pVVar7->method);
    if (plVar8 != (long *)0x0) {
      if (*(Il2CppClass **)(*plVar8 + 0x40) != (TypeInfo_CrosshairStyle->_1).element_class) {
        il2cpp_runtime_helper_022b2fd0(plVar8);
        goto label_04387620;
      }
      piVar9 = (int32_t *)il2cpp_runtime_helper_02305440(plVar8);
      key = *piVar9;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      path = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      local_48.klass = TypeInfo_CrosshairStyle;
      local_48.monitor = (void *)0xffffffffffffffff;
      local_38 = key;
      pSVar10 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat_3ae5ba0("Cursors/Cursor",pSVar10,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      enumType = (System_Type_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(path,pSVar10,0,(MethodInfo *)0x0);
      if ((enumType != (System_Type_o *)0x0) && (enumType->klass != TypeInfo_Texture2D)) goto label_0438762a;
      if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (*(long *)(TypeInfo_CursorManager + 0xb8) + 0x10);
      if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_04387625;
      System_Collections_Generic_Dictionary_Int32Enum__object___Add
                (__this,key,(Il2CppObject *)enumType,MethodInfo_Void_Add);
      goto label_04387420;
    }
label_04387620:
    il2cpp_runtime_helper_022b2c90();
label_04387625:
    il2cpp_runtime_helper_022b2c90();
label_0438762a:
    il2cpp_runtime_helper_022b2fd0(enumType);
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  unaff_R15 = auVar14._0_8_;
  if (auVar14._8_4_ != 1) {
    local_50 = 0;
    do {
      plVar8 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
      if (plVar8 != (long *)0x0) {
        lVar12 = *plVar8;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
              puVar11 = (undefined8 *)
                        (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
              goto label_0438783d;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IDisposable,0);
label_0438783d:
        (*(code *)*puVar11)(plVar8,puVar11[1]);
      }
      if (local_50 == 0) {
        _Unwind_Resume(unaff_R15);
      }
      il2cpp_runtime_helper_022fefe0(local_50);
label_0438785b:
      il2cpp_runtime_helper_022b2c90();
label_04387860:
      unaff_R15 = il2cpp_runtime_helper_022fefe0(unaff_R15);
    } while( true );
  }
  plVar8 = (long *)__cxa_begin_catch(unaff_R15);
  local_50 = *plVar8;
  __cxa_end_catch();
label_043876f3:
  plVar8 = (long *)il2cpp_runtime_helper_023051f0(unaff_R12,TypeInfo_IDisposable);
  if (plVar8 != (long *)0x0) {
    lVar12 = *plVar8;
    if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
      lVar13 = 0;
      do {
        if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
          puVar11 = (undefined8 *)
                    (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 + 0x138);
          goto label_0438776d;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar8,TypeInfo_IDisposable,0);
label_0438776d:
    (*(code *)*puVar11)(plVar8,puVar11[1]);
  }
  unaff_R15 = local_50;
  if (local_50 != 0) goto label_04387860;
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_CursorManager + 0xb8) + 8);
  if (lVar12 == 0) goto label_0438785b;
  *(undefined1 *)(lVar12 + 0x20) = 1;
  return;
}


// UI.CursorManager$$Update
// il2cpp: void UI_CursorManager__Update (UI_CursorManager_o* __this, const MethodInfo* method);
// 0x4387880

void UI_CursorManager__Update(UI_CursorManager_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  UI_ChatPanel_o *pUVar3;
  long lVar4;
  char cVar5;
  bool_conflict bVar6;
  int32_t iVar7;
  UnityEngine_Object_o *pUVar8;
  undefined8 *puVar9;
  long *unaff_RBX;
  UI_ChatPanel_o *pUVar10;
  UnityEngine_Object_o *pUVar11;
  long *plVar12;
  long *plVar13;
  UnityEngine_Object_o *unaff_R14;
  
  if (g_data_057ae243 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePlayerController_GetComponent_BasePlayerController);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae243 = '\x01';
  }
  uVar1 = *(uint *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8);
  if ((uVar1 < 8) && ((0xf3U >> (uVar1 & 0x1f) & 1) != 0)) goto label_0438793c;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar8 = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
  }
  plVar13 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
  if (plVar13 == (long *)0x0) {
    return;
  }
  if (*(byte *)(*plVar13 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) {
    return;
  }
  if (*(long *)(*(long *)(*plVar13 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) != TypeInfo_InGameMenu)
  {
    return;
  }
  plVar12 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar12 == (long *)0x0) {
label_04387ae1:
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0(TypeInfo_UIManager);
      plVar13 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      cVar5 = '\0';
      if (plVar13 == (long *)0x0) goto label_04387d64;
    }
    if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
       (*(long *)(*(long *)(*plVar13 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) == TypeInfo_InGameMenu
       )) {
      pUVar3 = (UI_ChatPanel_o *)plVar13[0x19];
      cVar5 = '\0';
      bVar6 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
      if ((char)bVar6 != '\0') goto label_0438793c;
      if (plVar12 == (long *)0x0) goto label_04387d64;
      cVar5 = (**(code **)(*plVar12 + 0x4b8))(plVar12);
      if (((cVar5 == '\0') || (*(char *)((long)plVar12 + 0x7a) != '\0')) ||
         (*(char *)((long)plVar12 + 0x7b) != '\0')) {
label_0438793c:
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (g_data_057ae244 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
          g_data_057ae244 = '\x01';
          iVar2 = *(int *)(TypeInfo_CursorManager + 0xe4);
        }
        else {
          iVar2 = *(int *)(TypeInfo_CursorManager + 0xe4);
        }
        if (iVar2 == 0) {
          il2cpp_runtime_helper_02337ed0();
          iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
        }
        else {
          iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
        }
        if (iVar2 != 0) {
          UnityEngine_Cursor__set_visible(1,(MethodInfo *)0x0);
          UnityEngine_Cursor__set_lockState(0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 0;
        }
        return;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar10 = pUVar3;
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      cVar5 = (char)pUVar10;
      if ((char)bVar6 != '\0') {
        if (pUVar3 == (UI_ChatPanel_o *)0x0) goto label_04387d64;
        bVar6 = UI_ChatPanel__IsInputActive(pUVar3,(MethodInfo *)0x0);
        if (((char)bVar6 != '\0') ||
           (bVar6 = UI_ChatPanel__IsPointerOverChatUI(pUVar3,(MethodInfo *)0x0), (char)bVar6 != '\0'))
        goto label_0438793c;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (*(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x81) != '\0') goto label_0438793c;
      pUVar8 = (UnityEngine_Object_o *)plVar12[0xe];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar6 == '\0') || (plVar13 = (long *)plVar12[0xe], plVar13 == (long *)0x0)) {
label_04387d04:
        puVar9 = &TypeInfo_CursorManager;
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          puVar9 = (undefined8 *)il2cpp_runtime_helper_02337ed0();
        }
        cVar5 = '\0';
      }
      else {
        lVar4 = *plVar13;
        if ((((*(byte *)(lVar4 + 0x130) < *(byte *)(TypeInfo_Human + 0x130)) ||
             (*(long *)(*(long *)(lVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_Human + 0x130) * 8) !=
              TypeInfo_Human)) &&
            ((*(byte *)(lVar4 + 0x130) < *(byte *)(TypeInfo_BasicTitan + 0x130) ||
             (*(long *)(*(long *)(lVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_BasicTitan + 0x130) * 8) !=
              TypeInfo_BasicTitan)))) || ((char)plVar13[0xd] != '\0')) goto label_04387d04;
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (*(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x48) != '\0') goto label_04387d04;
        cVar5 = '\0';
        if ((UnityEngine_Component_o *)plVar12[0xe] == (UnityEngine_Component_o *)0x0) goto label_04387d64;
        pUVar8 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)plVar12[0xe],MethodInfo_BasePlayerController_GetComponent_BasePlayerController);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar11 = pUVar8;
        bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        cVar5 = (char)pUVar11;
        if ((char)bVar6 == '\0') goto label_04387d04;
        if (pUVar8 == (UnityEngine_Object_o *)0x0) goto label_04387d64;
        if (*(char *)((long)&pUVar8[3].klass + 1) != '\0') goto label_04387d04;
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        register0x00000020 = (BADSPACEBASE *)&stack0xffffffffffffffe8;
        if (g_data_057ae246 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
          il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
          il2cpp_runtime_helper_023445d0();
          g_data_057ae246 = '\x01';
        }
        unaff_RBX = &TypeInfo_CursorManager;
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (**(int **)(TypeInfo_CursorManager + 0xb8) != 1) goto label_04387ebe;
label_04387f9f:
          plVar13 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
          if (plVar13 != (long *)0x0) {
            if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
               (*(long *)(*(long *)(*plVar13 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) ==
                TypeInfo_InGameCamera)) {
              if ((*(uint *)(plVar13 + 0xd) | 2) == 2) {
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
            il2cpp_runtime_helper_022b2fd0();
          }
        }
        else {
          if (**(int **)(TypeInfo_CursorManager + 0xb8) == 1) goto label_04387f9f;
label_04387ebe:
          UnityEngine_Cursor__set_visible(0,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 1;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            unaff_RBX = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
            if (unaff_RBX != (long *)0x0) goto label_04387f2f;
            goto label_04387f9f;
          }
          unaff_RBX = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (unaff_RBX == (long *)0x0) goto label_04387f9f;
label_04387f2f:
          if ((*(byte *)(*unaff_RBX + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
             (*(long *)(*(long *)(*unaff_RBX + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
              TypeInfo_InGameMenu)) goto label_04387f9f;
          unaff_R14 = (UnityEngine_Object_o *)unaff_RBX[0x19];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Inequality(unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') goto label_04387f9f;
          plVar13 = (long *)0x0;
          if ((UI_ChatPanel_o *)unaff_RBX[0x19] != (UI_ChatPanel_o *)0x0) {
            UI_ChatPanel__CloseEmojiPanel((UI_ChatPanel_o *)unaff_RBX[0x19],(MethodInfo *)0x0);
            goto label_04387f9f;
          }
        }
        cVar5 = (char)plVar13;
        puVar9 = (undefined8 *)il2cpp_runtime_helper_022b2c90();
      }
      *(UnityEngine_Object_o **)((long)register0x00000020 + -8) = unaff_R14;
      *(long **)((long)register0x00000020 + -0x10) = unaff_RBX;
      *(undefined8 **)((long)register0x00000020 + -0x18) = puVar9;
      if (g_data_057ae245 == '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x438804b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4388057;
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4388063;
        il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x438806f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x438807b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4388087;
        il2cpp_runtime_helper_023445d0();
        g_data_057ae245 = '\x01';
      }
      if (cVar5 == '\0') {
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43880bb;
          il2cpp_runtime_helper_02337ed0();
          iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
        }
        else {
          iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
        }
        if (iVar2 != 2) goto label_043880ce;
      }
      else {
label_043880ce:
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43880d7;
        UnityEngine_Cursor__set_visible(0,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43880ef;
          il2cpp_runtime_helper_02337ed0();
        }
        **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 2;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x20) = 0x438812c;
          il2cpp_runtime_helper_02337ed0();
          plVar13 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        }
        else {
          plVar13 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        }
        if (plVar13 != (long *)0x0) {
          if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
             (*(long *)(*(long *)(*plVar13 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
              TypeInfo_InGameMenu)) {
            pUVar8 = (UnityEngine_Object_o *)plVar13[0x19];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4388188;
              il2cpp_runtime_helper_02337ed0();
            }
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4388194;
            bVar6 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              pUVar3 = (UI_ChatPanel_o *)plVar13[0x19];
              if (pUVar3 == (UI_ChatPanel_o *)0x0) goto label_0438823b;
              *(undefined8 *)((long)register0x00000020 + -0x20) = 0x43881af;
              UI_ChatPanel__CloseEmojiPanel(pUVar3,(MethodInfo *)0x0);
            }
          }
        }
      }
      plVar13 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
      if (plVar13 != (long *)0x0) {
        if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
           (*(long *)(*(long *)(*plVar13 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) ==
            TypeInfo_InGameCamera)) {
          if ((*(uint *)(plVar13 + 0xd) | 2) == 2) {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4388205;
            iVar7 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
            if (iVar7 == 1) {
              return;
            }
            iVar7 = 1;
          }
          else {
            *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4388216;
            iVar7 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
            if (iVar7 == 2) {
              return;
            }
            iVar7 = 2;
          }
          UnityEngine_Cursor__set_lockState(iVar7,(MethodInfo *)0x0);
          return;
        }
        *(undefined8 *)((long)register0x00000020 + -0x20) = 0x438823b;
        il2cpp_runtime_helper_022b2fd0();
      }
label_0438823b:
      *(code **)((long)register0x00000020 + -0x20) = UI_CursorManager__RefreshCursorLock;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  else if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar12 + 0x130)) &&
          (*(long *)(*(long *)(*plVar12 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) ==
           TypeInfo_InGameManager)) goto label_04387ae1;
  il2cpp_runtime_helper_022b2fd0();
  cVar5 = (char)plVar12;
label_04387d64:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae244 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057ae244 = '\x01';
  }
  if (cVar5 == '\0') {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    else {
      iVar2 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    if (iVar2 == 0) {
      return;
    }
  }
  UnityEngine_Cursor__set_visible(1,(MethodInfo *)0x0);
  UnityEngine_Cursor__set_lockState(0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 0;
    return;
  }
  **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 0;
  return;
}


// UI.CursorManager$$RefreshCursorLock
// il2cpp: void UI_CursorManager__RefreshCursorLock (const MethodInfo* method);
// 0x4388240

void UI_CursorManager__RefreshCursorLock(MethodInfo *method)

{
  return;
}


// UI.CursorManager$$SetPointer
// il2cpp: void UI_CursorManager__SetPointer (bool force, const MethodInfo* method);
// 0x4387d70

void UI_CursorManager__SetPointer(bool_conflict force,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae244 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057ae244 = '\x01';
  }
  if ((char)force == '\0') {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
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
  il2cpp_runtime_helper_02337ed0();
  **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 0;
  return;
}


// UI.CursorManager$$SetHidden
// il2cpp: void UI_CursorManager__SetHidden (bool force, const MethodInfo* method);
// 0x4388030

void UI_CursorManager__SetHidden(bool_conflict force,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  long *plVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  
  if (g_data_057ae245 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae245 = '\x01';
  }
  if ((char)force == '\0') {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    else {
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    if (iVar1 != 2) goto label_043880ce;
  }
  else {
label_043880ce:
    UnityEngine_Cursor__set_visible(0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 2;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
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
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if ((UI_ChatPanel_o *)plVar2[0x19] == (UI_ChatPanel_o *)0x0) goto label_0438823b;
          UI_ChatPanel__CloseEmojiPanel((UI_ChatPanel_o *)plVar2[0x19],(MethodInfo *)0x0);
        }
      }
    }
  }
  plVar2 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) == TypeInfo_InGameCamera)
       ) {
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
    il2cpp_runtime_helper_022b2fd0();
  }
label_0438823b:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CursorManager$$SetCrosshair
// il2cpp: void UI_CursorManager__SetCrosshair (bool force, const MethodInfo* method);
// 0x4387e20

void UI_CursorManager__SetCrosshair(bool_conflict force,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *pUVar2;
  int32_t iVar3;
  bool_conflict bVar4;
  long *plVar5;
  char cVar6;
  long *plVar7;
  
  if (g_data_057ae246 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae246 = '\x01';
  }
  if ((char)force == '\0') {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    else {
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    if (iVar1 != 1) goto label_04387ebe;
label_04387f9f:
    plVar7 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (plVar7 != (long *)0x0) {
      if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar7 + 0x130)) &&
         (*(long *)(*(long *)(*plVar7 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) ==
          TypeInfo_InGameCamera)) {
        if ((*(uint *)(plVar7 + 0xd) | 2) == 2) {
          iVar3 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
          if (iVar3 == 1) {
            return;
          }
          iVar3 = 1;
        }
        else {
          iVar3 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
          if (iVar3 == 2) {
            return;
          }
          iVar3 = 2;
        }
        UnityEngine_Cursor__set_lockState(iVar3,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2fd0();
    }
  }
  else {
label_04387ebe:
    UnityEngine_Cursor__set_visible(0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 1;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar5 != (long *)0x0) goto label_04387f2f;
      goto label_04387f9f;
    }
    plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (plVar5 == (long *)0x0) goto label_04387f9f;
label_04387f2f:
    if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
       (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) != TypeInfo_InGameMenu)
       ) goto label_04387f9f;
    pUVar2 = (UnityEngine_Object_o *)plVar5[0x19];
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto label_04387f9f;
    plVar7 = (long *)0x0;
    if ((UI_ChatPanel_o *)plVar5[0x19] != (UI_ChatPanel_o *)0x0) {
      UI_ChatPanel__CloseEmojiPanel((UI_ChatPanel_o *)plVar5[0x19],(MethodInfo *)0x0);
      goto label_04387f9f;
    }
  }
  cVar6 = (char)plVar7;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae245 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae245 = '\x01';
  }
  if (cVar6 == '\0') {
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    else {
      iVar1 = **(int **)(TypeInfo_CursorManager + 0xb8);
    }
    if (iVar1 != 2) goto label_043880ce;
  }
  else {
label_043880ce:
    UnityEngine_Cursor__set_visible(0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    **(undefined4 **)(TypeInfo_CursorManager + 0xb8) = 2;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    else {
      plVar5 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    }
    if (plVar5 != (long *)0x0) {
      if ((*(byte *)(TypeInfo_InGameMenu + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
         (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) ==
          TypeInfo_InGameMenu)) {
        pUVar2 = (UnityEngine_Object_o *)plVar5[0x19];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if ((UI_ChatPanel_o *)plVar5[0x19] == (UI_ChatPanel_o *)0x0) goto label_0438823b;
          UI_ChatPanel__CloseEmojiPanel((UI_ChatPanel_o *)plVar5[0x19],(MethodInfo *)0x0);
        }
      }
    }
  }
  plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(TypeInfo_InGameCamera + 0x130) <= *(byte *)(*plVar5 + 0x130)) &&
       (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameCamera + 0x130) * 8) == TypeInfo_InGameCamera)
       ) {
      if ((*(uint *)(plVar5 + 0xd) | 2) == 2) {
        iVar3 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
        if (iVar3 == 1) {
          return;
        }
        iVar3 = 1;
      }
      else {
        iVar3 = UnityEngine_Cursor__get_lockState((MethodInfo *)0x0);
        if (iVar3 == 2) {
          return;
        }
        iVar3 = 2;
      }
      UnityEngine_Cursor__set_lockState(iVar3,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
label_0438823b:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// UI.CursorManager$$SetCrosshairColor
// il2cpp: void UI_CursorManager__SetCrosshairColor (bool white, const MethodInfo* method);
// 0x4388250

void UI_CursorManager__SetCrosshairColor(bool_conflict white,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  UnityEngine_Transform_c *pUVar4;
  UnityEngine_Object_o *x;
  void *pvVar5;
  code *vtableDispatch;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  bool_conflict bVar7;
  undefined8 *puVar8;
  UnityEngine_GameObject_o *pUVar9;
  Il2CppClass *__this;
  UnityEngine_Texture_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  long lVar12;
  undefined1 uVar13;
  long *in_RCX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *extraout_RDX_01;
  Il2CppClass *pIVar14;
  MethodInfo *pMVar15;
  UnityEngine_MonoBehaviour_o *__this_00;
  char in_R8B;
  long *plVar16;
  undefined8 uVar17;
  undefined4 in_XMM1_Da;
  undefined4 uVar18;
  undefined4 in_XMM2_Da;
  float fVar19;
  undefined4 in_XMM2_Db;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM3_Db;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  float fStack_108;
  float fStack_104;
  
  if (g_data_057ae247 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057ae247 = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_043882df;
label_04388272:
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    pMVar15 = TypeInfo_CursorManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388272;
label_043882df:
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    pMVar15 = TypeInfo_CursorManager;
  }
  TypeInfo_CursorManager = pMVar15;
  if (lVar12 != 0) {
    in_RCX = (long *)(ulong)*(byte *)(lVar12 + 0x21);
    if ((uint)*(byte *)(lVar12 + 0x21) == (white & 0xffU)) {
      return;
    }
    if (*(int *)((long)&pMVar15[2].parameters + 4) != 0) {
label_043882ae:
      *(char *)(lVar12 + 0x21) = (char)white;
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar12 != 0) goto label_043882ae;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae248 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057ae248 = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388370;
label_04388323:
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388323;
label_04388370:
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  if (lVar12 != 0) {
    *(MethodInfo **)(lVar12 + 0x28) = pMVar15;
    il2cpp_runtime_helper_022b4080(lVar12 + 0x28,pMVar15);
    return;
  }
  uVar17 = il2cpp_runtime_helper_022b2c90();
  uVar13 = SUB81(method,0);
  if (g_data_057ae249 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057ae249 = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_0438845c;
label_043883bd:
    lVar3 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8
                     );
    pMVar15 = TypeInfo_CursorManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_043883bd;
label_0438845c:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8
                     );
    pMVar15 = TypeInfo_CursorManager;
  }
  TypeInfo_CursorManager = pMVar15;
  if (lVar3 != 0) {
    if ((char)lVar12 == '\0') {
      *(undefined8 *)(lVar3 + 0x44) = uVar17;
      *(undefined4 *)(lVar3 + 0x4c) = in_XMM1_Da;
      lVar12 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
      if (lVar12 != 0) {
        *(undefined1 *)(lVar12 + 0x71) = uVar13;
        *(ulong *)(lVar12 + 0x60) = CONCAT44(in_XMM2_Db,in_XMM2_Da);
        puVar8 = (undefined8 *)(lVar12 + 0x68);
        goto label_043884c9;
      }
    }
    else {
      *(undefined8 *)(lVar3 + 0x38) = uVar17;
      *(undefined4 *)(lVar3 + 0x40) = in_XMM1_Da;
      lVar12 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
      if (lVar12 != 0) {
        *(undefined1 *)(lVar12 + 0x70) = uVar13;
        *(ulong *)(lVar12 + 0x50) = CONCAT44(in_XMM2_Db,in_XMM2_Da);
        puVar8 = (undefined8 *)(lVar12 + 0x58);
label_043884c9:
        *puVar8 = CONCAT44(in_XMM3_Db,in_XMM3_Da);
        return;
      }
    }
  }
  __this = (Il2CppClass *)&TypeInfo_CursorManager;
  il2cpp_runtime_helper_022b2c90();
  pIVar14 = (Il2CppClass *)method;
  if (g_data_057ae24a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae24a = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_043885c3;
label_04388510:
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar12 == 0) goto label_043889f2;
label_04388524:
    if (*(char *)(lVar12 + 0x20) == '\0') {
      return;
    }
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr == 1)
      goto label_043885fe;
label_043886ea:
      if (pMVar15 != (MethodInfo *)0x0) {
        pIVar14 = (Il2CppClass *)0x0;
        pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          pIVar14 = (Il2CppClass *)0x0;
          bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            pIVar14 = (Il2CppClass *)0x0;
            pUVar9 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
            if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
            pIVar14 = (Il2CppClass *)0x0;
            UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
          }
          if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
            pIVar14 = (Il2CppClass *)0x0;
            pUVar9 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
            if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
              bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                return;
              }
              pIVar14 = (Il2CppClass *)0x0;
              pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto label_043889f2;
    }
    if (*(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr != 1)
    goto label_043886ea;
label_043885fe:
    __this = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this == (Il2CppClass *)0x0) {
label_0438864a:
      lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0xa8), lVar12 == 0)) goto label_043889f2;
      if (*(char *)(lVar12 + 0x11) != '\0') {
        if (__this == (Il2CppClass *)0x0) goto label_043889f2;
        x = (__this->_1).interopData;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar14 = (Il2CppClass *)0x0;
        bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          plVar16 = (__this->_1).interopData;
          in_RCX = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            in_RCX = (long *)*plVar16;
            if ((*(byte *)(TypeInfo_Human + 0x130) <= *(byte *)(in_RCX + 0x26)) &&
               (in_RCX = (long *)in_RCX[0x19],
               in_RCX[(ulong)*(byte *)(TypeInfo_Human + 0x130) - 1] == TypeInfo_Human)) {
              if (pMVar15 != (MethodInfo *)0x0) {
                pIVar14 = (Il2CppClass *)0x0;
                pUVar9 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                  pIVar14 = (Il2CppClass *)0x0;
                  bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
                  if ((char)bVar7 == '\0') {
                    pIVar14 = (Il2CppClass *)0x0;
                    pUVar9 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
                    pIVar14 = (Il2CppClass *)0x1;
                    UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
                  }
                  if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
                    pIVar14 = (Il2CppClass *)0x0;
                    pUVar9 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
                    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
                      if ((char)bVar7 == '\0') {
                        pIVar14 = (Il2CppClass *)0x0;
                        pUVar9 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
                        if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
                        UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
                      }
                      pIVar14 = (Il2CppClass *)0x0;
                      __this = (Il2CppClass *)
                               UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      lVar12 = *(long *)(((UnityEngine_Component_Fields *)
                                         &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                      if ((lVar12 != 0) && (__this != (Il2CppClass *)0x0)) {
                        UnityEngine_Transform__set_position
                                  ((UnityEngine_Transform_o *)__this,
                                   (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(lVar12 + 0x38),
                                   (MethodInfo *)0x0);
                        pIVar14 = (Il2CppClass *)0x0;
                        pUVar11 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
                        in_RCX = *(long **)(((UnityEngine_Component_Fields *)
                                            &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                        if ((in_RCX != (long *)0x0) && (pUVar11 != (UnityEngine_Transform_o *)0x0)) {
                          UnityEngine_Transform__set_position
                                    (pUVar11,(UnityEngine_Vector3_o)
                                             *(UnityEngine_Vector3_Fields *)((long)in_RCX + 0x44),
                                     (MethodInfo *)0x0);
                          pIVar14 = (Il2CppClass *)0x0;
                          pUVar11 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                          in_RCX = *(long **)(((UnityEngine_Component_Fields *)
                                              &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                          if ((in_RCX != (long *)0x0) && (pUVar11 != (UnityEngine_Transform_o *)0x0)) {
                            UnityEngine_Transform__set_rotation
                                      (pUVar11,(UnityEngine_Quaternion_o)
                                               *(UnityEngine_Quaternion_Fields *)(in_RCX + 10),
                                       (MethodInfo *)0x0);
                            pIVar14 = (Il2CppClass *)0x0;
                            pUVar11 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
                            in_RCX = *(long **)(((UnityEngine_Component_Fields *)
                                                &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                            if ((in_RCX != (long *)0x0) && (pUVar11 != (UnityEngine_Transform_o *)0x0)) {
                              pIVar14 = (Il2CppClass *)0x0;
                              UnityEngine_Transform__set_rotation
                                        (pUVar11,(UnityEngine_Quaternion_o)
                                                 *(UnityEngine_Quaternion_Fields *)(in_RCX + 0xc),
                                         (MethodInfo *)0x0);
                              lVar12 = *(long *)(((UnityEngine_Component_Fields *)
                                                 &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                              if (lVar12 != 0) {
                                uVar18 = 0x3f800000;
                                if (*(char *)(lVar12 + 0x70) == '\0') {
                                  uVar18 = 0;
                                }
                                pIVar14 = (Il2CppClass *)
                                          ((UnityEngine_Component_c *)pMVar15->methodPointer)[1].vtable.
                                          _0_Equals.methodPtr;
                                (**(code **)&((UnityEngine_Component_c *)pMVar15->methodPointer)[1]._2.
                                             naturalAligment)(0x3f800000,uVar18,pMVar15);
                                uVar17 = extraout_RDX;
                                if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                  uVar17 = extraout_RDX_00;
                                }
                                lVar12 = *(long *)(((UnityEngine_Component_Fields *)
                                                   &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                                if (lVar12 != 0) {
                                  uVar18 = 0x3f800000;
                                  if (*(char *)(lVar12 + 0x71) == '\0') {
                                    uVar18 = 0;
                                  }
                                  pvVar5 = (((Il2CppClass *)method)->_1).image;
                                  vtableDispatch = *(code **)((long)pvVar5 + 0x2a8);
                                  (*vtableDispatch)
                                            (0x3f800000,uVar18,method,*(undefined8 *)((long)pvVar5 + 0x2b0),
                                             uVar17,vtableDispatch);
                                  return;
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
              goto label_043889f2;
            }
          }
        }
      }
      goto label_043886ea;
    }
    pUVar4 = (__this->_1).image;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    in_RCX = (long *)(ulong)bVar1;
    pIVar14 = TypeInfo_InGameManager;
    if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
       ((pUVar4->_2).typeHierarchy[(long)in_RCX + -1] == TypeInfo_InGameManager)) goto label_0438864a;
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388510;
label_043885c3:
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar12 != 0) goto label_04388524;
label_043889f2:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae24b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae24b = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388b47;
label_04388a42:
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388a42;
label_04388b47:
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  if (lVar12 == 0) goto label_0438900d;
  if (*(char *)(lVar12 + 0x20) == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar2 = *(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr;
  }
  else {
    iVar2 = *(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr;
  }
  if (iVar2 != 1) {
    if ((pIVar14 != (Il2CppClass *)0x0) &&
       (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0),
       pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
        if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_0438900d;
        UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
      }
      if ((__this == (Il2CppClass *)0x0) ||
         (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
         pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_0438900d;
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_0438900d;
        UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
      }
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr
                        + 8);
      uVar13 = 1;
      if (lVar12 == 0) goto label_0438900d;
      goto label_04388fb4;
    }
    goto label_0438900d;
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x58), lVar12 == 0)) goto label_0438900d;
  bVar7 = System_String__op_Inequality(*(System_String_o **)(lVar12 + 0x18),"",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x90), lVar12 == 0)) goto label_0438900d;
    iVar2 = *(int *)(lVar12 + 0x14);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar12 == 0) goto label_0438900d;
    if ((*(int *)(lVar12 + 0x34) == iVar2) && (in_R8B == '\0')) {
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->
                           m_CachedPtr + 8);
        if (lVar12 == 0) goto label_0438900d;
      }
      pMVar15 = TypeInfo_CursorManager;
      if (*(char *)(lVar12 + 0x30) != '\0') goto label_04388cd4;
    }
    else {
label_04388cd4:
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 0x10);
      if ((pSVar6 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar10 = (UnityEngine_Texture_o *)
                    System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              (pSVar6,iVar2,MethodInfo_Texture2D_get_Item), __this == (Il2CppClass *)0x0)) goto label_0438900d;
      UnityEngine_UI_RawImage__set_texture((UnityEngine_UI_RawImage_o *)__this,pUVar10,(MethodInfo *)0x0);
      pSVar6 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 0x10);
      if ((pSVar6 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar10 = (UnityEngine_Texture_o *)
                    System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              (pSVar6,iVar2,MethodInfo_Texture2D_get_Item), pIVar14 == (Il2CppClass *)0x0)) goto label_0438900d;
      UnityEngine_UI_RawImage__set_texture((UnityEngine_UI_RawImage_o *)pIVar14,pUVar10,(MethodInfo *)0x0);
      pMVar15 = TypeInfo_CursorManager;
      lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr
                        + 8);
      if (lVar12 == 0) goto label_0438900d;
      *(int *)(lVar12 + 0x34) = iVar2;
    }
    iVar2 = *(int *)((long)&pMVar15[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_CursorManager[2].parameters + 4);
    pMVar15 = TypeInfo_CursorManager;
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar15 = TypeInfo_CursorManager;
  }
  lVar12 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
  if (lVar12 == 0) goto label_0438900d;
  if ((*(char *)(lVar12 + 0x21) == *(char *)(lVar12 + 0x22)) && (in_R8B == '\0')) {
    if (*(int *)((long)&pMVar15[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr
                        + 8);
      pMVar15 = TypeInfo_CursorManager;
      if (lVar12 == 0) goto label_0438900d;
    }
    if (*(char *)(lVar12 + 0x30) != '\0') goto label_04388de2;
  }
  else {
label_04388de2:
    if (__this == (Il2CppClass *)0x0) goto label_0438900d;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (((lVar12 == 0) || (pUVar9 == (UnityEngine_GameObject_o *)0x0)) ||
       (UnityEngine_GameObject__SetActive(pUVar9,(uint)*(byte *)(lVar12 + 0x21),(MethodInfo *)0x0),
       pIVar14 == (Il2CppClass *)0x0)) goto label_0438900d;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if ((lVar12 == 0) || (pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_0438900d;
    UnityEngine_GameObject__SetActive(pUVar9,(uint)(*(char *)(lVar12 + 0x21) == '\0'),(MethodInfo *)0x0);
    pMVar15 = TypeInfo_CursorManager;
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar12 == 0) goto label_0438900d;
    *(undefined1 *)(lVar12 + 0x22) = *(undefined1 *)(lVar12 + 0x21);
  }
  if (*(int *)((long)&pMVar15[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar15 = TypeInfo_CursorManager;
  }
  lVar12 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
  if (lVar12 == 0) goto label_0438900d;
  plVar16 = extraout_RDX_01;
  if (*(char *)(lVar12 + 0x21) == '\0') {
    plVar16 = in_RCX;
    __this = pIVar14;
  }
  if (*(int *)((long)&pMVar15[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar12 == 0) goto label_0438900d;
  }
  if (((plVar16 == (long *)0x0) ||
      ((**(code **)(*plVar16 + 0x5e8))
                 (plVar16,*(undefined8 *)(lVar12 + 0x28),*(undefined8 *)(*plVar16 + 0x5f0)),
      __this == (Il2CppClass *)0x0)) ||
     (pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
     pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_0438900d;
  UVar20 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
  UVar21 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fStack_108 = UVar20.fields.x;
  fStack_104 = UVar20.fields.y;
  fStack_104 = fStack_104 - UVar21.fields.y;
  fVar19 = UVar20.fields.z - UVar21.fields.z;
  fStack_108 = fStack_108 - UVar21.fields.x;
  if (9.9999994e-11 <= fStack_108 * fStack_108 + fStack_104 * fStack_104 + fVar19 * fVar19) {
    pMVar15 = TypeInfo_CursorManager;
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar20 = UI_CursorManager__GetInGameMousePosition(pMVar15);
    UnityEngine_Transform__set_position(pUVar11,UVar20,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388ff4;
label_04388fa2:
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388fa2;
label_04388ff4:
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  if (lVar12 != 0) {
    uVar13 = 0;
label_04388fb4:
    *(undefined1 *)(lVar12 + 0x30) = uVar13;
    return;
  }
label_0438900d:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae24c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae24c = '\x01';
  }
  __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      if ((*(uint *)&__this_00[3].monitor | 2) == 2) {
        UnityEngine_Screen__get_width((MethodInfo *)0x0);
        UnityEngine_Screen__get_height((MethodInfo *)0x0);
        return;
      }
      UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&__this_00[1].klass + 1) = 1;
  __this_00[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&__this_00[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$SetCrosshairText
// il2cpp: void UI_CursorManager__SetCrosshairText (System_String_o* text, const MethodInfo* method);
// 0x4388300

void UI_CursorManager__SetCrosshairText(System_String_o *text,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  UnityEngine_Transform_c *pUVar4;
  UnityEngine_Object_o *x;
  void *pvVar5;
  code *vtableDispatch;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  bool_conflict bVar7;
  undefined8 *puVar8;
  UnityEngine_GameObject_o *pUVar9;
  Il2CppClass *__this;
  UnityEngine_Texture_o *pUVar10;
  UnityEngine_Transform_o *pUVar11;
  long lVar12;
  undefined1 uVar13;
  long *in_RCX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *extraout_RDX_01;
  Il2CppClass *pIVar14;
  MethodInfo *pMVar15;
  UnityEngine_MonoBehaviour_o *__this_00;
  char in_R8B;
  long *plVar16;
  undefined8 uVar17;
  undefined4 in_XMM1_Da;
  undefined4 uVar18;
  undefined4 in_XMM2_Da;
  float fVar19;
  undefined4 in_XMM2_Db;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM3_Db;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o UVar21;
  float fStack_f0;
  float fStack_ec;
  
  if (g_data_057ae248 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057ae248 = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388370;
label_04388323:
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388323;
label_04388370:
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  if (lVar12 != 0) {
    *(System_String_o **)(lVar12 + 0x28) = text;
    il2cpp_runtime_helper_022b4080(lVar12 + 0x28,text);
    return;
  }
  uVar17 = il2cpp_runtime_helper_022b2c90();
  uVar13 = SUB81(method,0);
  if (g_data_057ae249 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057ae249 = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_0438845c;
label_043883bd:
    lVar3 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8
                     );
    pMVar15 = TypeInfo_CursorManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_043883bd;
label_0438845c:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8
                     );
    pMVar15 = TypeInfo_CursorManager;
  }
  TypeInfo_CursorManager = pMVar15;
  if (lVar3 != 0) {
    if ((char)lVar12 == '\0') {
      *(undefined8 *)(lVar3 + 0x44) = uVar17;
      *(undefined4 *)(lVar3 + 0x4c) = in_XMM1_Da;
      lVar12 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
      if (lVar12 != 0) {
        *(undefined1 *)(lVar12 + 0x71) = uVar13;
        *(ulong *)(lVar12 + 0x60) = CONCAT44(in_XMM2_Db,in_XMM2_Da);
        puVar8 = (undefined8 *)(lVar12 + 0x68);
        goto label_043884c9;
      }
    }
    else {
      *(undefined8 *)(lVar3 + 0x38) = uVar17;
      *(undefined4 *)(lVar3 + 0x40) = in_XMM1_Da;
      lVar12 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
      if (lVar12 != 0) {
        *(undefined1 *)(lVar12 + 0x70) = uVar13;
        *(ulong *)(lVar12 + 0x50) = CONCAT44(in_XMM2_Db,in_XMM2_Da);
        puVar8 = (undefined8 *)(lVar12 + 0x58);
label_043884c9:
        *puVar8 = CONCAT44(in_XMM3_Db,in_XMM3_Da);
        return;
      }
    }
  }
  __this = (Il2CppClass *)&TypeInfo_CursorManager;
  il2cpp_runtime_helper_022b2c90();
  pIVar14 = (Il2CppClass *)method;
  if (g_data_057ae24a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae24a = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_043885c3;
label_04388510:
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar12 == 0) goto label_043889f2;
label_04388524:
    if (*(char *)(lVar12 + 0x20) == '\0') {
      return;
    }
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr == 1)
      goto label_043885fe;
label_043886ea:
      if (pMVar15 != (MethodInfo *)0x0) {
        pIVar14 = (Il2CppClass *)0x0;
        pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
          pIVar14 = (Il2CppClass *)0x0;
          bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            pIVar14 = (Il2CppClass *)0x0;
            pUVar9 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
            if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
            pIVar14 = (Il2CppClass *)0x0;
            UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
          }
          if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
            pIVar14 = (Il2CppClass *)0x0;
            pUVar9 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
            if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
              bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                return;
              }
              pIVar14 = (Il2CppClass *)0x0;
              pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
              if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto label_043889f2;
    }
    if (*(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr != 1)
    goto label_043886ea;
label_043885fe:
    __this = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this == (Il2CppClass *)0x0) {
label_0438864a:
      lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0xa8), lVar12 == 0)) goto label_043889f2;
      if (*(char *)(lVar12 + 0x11) != '\0') {
        if (__this == (Il2CppClass *)0x0) goto label_043889f2;
        x = (__this->_1).interopData;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar14 = (Il2CppClass *)0x0;
        bVar7 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          plVar16 = (__this->_1).interopData;
          in_RCX = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            in_RCX = (long *)*plVar16;
            if ((*(byte *)(TypeInfo_Human + 0x130) <= *(byte *)(in_RCX + 0x26)) &&
               (in_RCX = (long *)in_RCX[0x19],
               in_RCX[(ulong)*(byte *)(TypeInfo_Human + 0x130) - 1] == TypeInfo_Human)) {
              if (pMVar15 != (MethodInfo *)0x0) {
                pIVar14 = (Il2CppClass *)0x0;
                pUVar9 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                  pIVar14 = (Il2CppClass *)0x0;
                  bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
                  if ((char)bVar7 == '\0') {
                    pIVar14 = (Il2CppClass *)0x0;
                    pUVar9 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
                    pIVar14 = (Il2CppClass *)0x1;
                    UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
                  }
                  if ((Il2CppClass *)method != (Il2CppClass *)0x0) {
                    pIVar14 = (Il2CppClass *)0x0;
                    pUVar9 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
                    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
                      if ((char)bVar7 == '\0') {
                        pIVar14 = (Il2CppClass *)0x0;
                        pUVar9 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
                        if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
                        UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
                      }
                      pIVar14 = (Il2CppClass *)0x0;
                      __this = (Il2CppClass *)
                               UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      lVar12 = *(long *)(((UnityEngine_Component_Fields *)
                                         &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                      if ((lVar12 != 0) && (__this != (Il2CppClass *)0x0)) {
                        UnityEngine_Transform__set_position
                                  ((UnityEngine_Transform_o *)__this,
                                   (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(lVar12 + 0x38),
                                   (MethodInfo *)0x0);
                        pIVar14 = (Il2CppClass *)0x0;
                        pUVar11 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
                        in_RCX = *(long **)(((UnityEngine_Component_Fields *)
                                            &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                        if ((in_RCX != (long *)0x0) && (pUVar11 != (UnityEngine_Transform_o *)0x0)) {
                          UnityEngine_Transform__set_position
                                    (pUVar11,(UnityEngine_Vector3_o)
                                             *(UnityEngine_Vector3_Fields *)((long)in_RCX + 0x44),
                                     (MethodInfo *)0x0);
                          pIVar14 = (Il2CppClass *)0x0;
                          pUVar11 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                          in_RCX = *(long **)(((UnityEngine_Component_Fields *)
                                              &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                          if ((in_RCX != (long *)0x0) && (pUVar11 != (UnityEngine_Transform_o *)0x0)) {
                            UnityEngine_Transform__set_rotation
                                      (pUVar11,(UnityEngine_Quaternion_o)
                                               *(UnityEngine_Quaternion_Fields *)(in_RCX + 10),
                                       (MethodInfo *)0x0);
                            pIVar14 = (Il2CppClass *)0x0;
                            pUVar11 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)method,(MethodInfo *)0x0);
                            in_RCX = *(long **)(((UnityEngine_Component_Fields *)
                                                &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                            if ((in_RCX != (long *)0x0) && (pUVar11 != (UnityEngine_Transform_o *)0x0)) {
                              pIVar14 = (Il2CppClass *)0x0;
                              UnityEngine_Transform__set_rotation
                                        (pUVar11,(UnityEngine_Quaternion_o)
                                                 *(UnityEngine_Quaternion_Fields *)(in_RCX + 0xc),
                                         (MethodInfo *)0x0);
                              lVar12 = *(long *)(((UnityEngine_Component_Fields *)
                                                 &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                              if (lVar12 != 0) {
                                uVar18 = 0x3f800000;
                                if (*(char *)(lVar12 + 0x70) == '\0') {
                                  uVar18 = 0;
                                }
                                pIVar14 = (Il2CppClass *)
                                          ((UnityEngine_Component_c *)pMVar15->methodPointer)[1].vtable.
                                          _0_Equals.methodPtr;
                                (**(code **)&((UnityEngine_Component_c *)pMVar15->methodPointer)[1]._2.
                                             naturalAligment)(0x3f800000,uVar18,pMVar15);
                                uVar17 = extraout_RDX;
                                if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                  uVar17 = extraout_RDX_00;
                                }
                                lVar12 = *(long *)(((UnityEngine_Component_Fields *)
                                                   &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                                if (lVar12 != 0) {
                                  uVar18 = 0x3f800000;
                                  if (*(char *)(lVar12 + 0x71) == '\0') {
                                    uVar18 = 0;
                                  }
                                  pvVar5 = (((Il2CppClass *)method)->_1).image;
                                  vtableDispatch = *(code **)((long)pvVar5 + 0x2a8);
                                  (*vtableDispatch)
                                            (0x3f800000,uVar18,method,*(undefined8 *)((long)pvVar5 + 0x2b0),
                                             uVar17,vtableDispatch);
                                  return;
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
              goto label_043889f2;
            }
          }
        }
      }
      goto label_043886ea;
    }
    pUVar4 = (__this->_1).image;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    in_RCX = (long *)(ulong)bVar1;
    pIVar14 = TypeInfo_InGameManager;
    if ((bVar1 <= (pUVar4->_2).naturalAligment) &&
       ((pUVar4->_2).typeHierarchy[(long)in_RCX + -1] == TypeInfo_InGameManager)) goto label_0438864a;
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388510;
label_043885c3:
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar12 != 0) goto label_04388524;
label_043889f2:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae24b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae24b = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388b47;
label_04388a42:
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388a42;
label_04388b47:
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  if (lVar12 == 0) goto label_0438900d;
  if (*(char *)(lVar12 + 0x20) == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar2 = *(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr;
  }
  else {
    iVar2 = *(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr;
  }
  if (iVar2 != 1) {
    if ((pIVar14 != (Il2CppClass *)0x0) &&
       (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0),
       pUVar9 != (UnityEngine_GameObject_o *)0x0)) {
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
        if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_0438900d;
        UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
      }
      if ((__this == (Il2CppClass *)0x0) ||
         (pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
         pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_0438900d;
      bVar7 = UnityEngine_GameObject__get_activeSelf(pUVar9,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_0438900d;
        UnityEngine_GameObject__SetActive(pUVar9,0,(MethodInfo *)0x0);
      }
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr
                        + 8);
      uVar13 = 1;
      if (lVar12 == 0) goto label_0438900d;
      goto label_04388fb4;
    }
    goto label_0438900d;
  }
  lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x58), lVar12 == 0)) goto label_0438900d;
  bVar7 = System_String__op_Inequality(*(System_String_o **)(lVar12 + 0x18),"",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    lVar12 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 0x90), lVar12 == 0)) goto label_0438900d;
    iVar2 = *(int *)(lVar12 + 0x14);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar12 == 0) goto label_0438900d;
    if ((*(int *)(lVar12 + 0x34) == iVar2) && (in_R8B == '\0')) {
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->
                           m_CachedPtr + 8);
        if (lVar12 == 0) goto label_0438900d;
      }
      pMVar15 = TypeInfo_CursorManager;
      if (*(char *)(lVar12 + 0x30) != '\0') goto label_04388cd4;
    }
    else {
label_04388cd4:
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 0x10);
      if ((pSVar6 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar10 = (UnityEngine_Texture_o *)
                    System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              (pSVar6,iVar2,MethodInfo_Texture2D_get_Item), __this == (Il2CppClass *)0x0)) goto label_0438900d;
      UnityEngine_UI_RawImage__set_texture((UnityEngine_UI_RawImage_o *)__this,pUVar10,(MethodInfo *)0x0);
      pSVar6 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 0x10);
      if ((pSVar6 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar10 = (UnityEngine_Texture_o *)
                    System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                              (pSVar6,iVar2,MethodInfo_Texture2D_get_Item), pIVar14 == (Il2CppClass *)0x0)) goto label_0438900d;
      UnityEngine_UI_RawImage__set_texture((UnityEngine_UI_RawImage_o *)pIVar14,pUVar10,(MethodInfo *)0x0);
      pMVar15 = TypeInfo_CursorManager;
      lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr
                        + 8);
      if (lVar12 == 0) goto label_0438900d;
      *(int *)(lVar12 + 0x34) = iVar2;
    }
    iVar2 = *(int *)((long)&pMVar15[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_CursorManager[2].parameters + 4);
    pMVar15 = TypeInfo_CursorManager;
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar15 = TypeInfo_CursorManager;
  }
  lVar12 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
  if (lVar12 == 0) goto label_0438900d;
  if ((*(char *)(lVar12 + 0x21) == *(char *)(lVar12 + 0x22)) && (in_R8B == '\0')) {
    if (*(int *)((long)&pMVar15[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr
                        + 8);
      pMVar15 = TypeInfo_CursorManager;
      if (lVar12 == 0) goto label_0438900d;
    }
    if (*(char *)(lVar12 + 0x30) != '\0') goto label_04388de2;
  }
  else {
label_04388de2:
    if (__this == (Il2CppClass *)0x0) goto label_0438900d;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (((lVar12 == 0) || (pUVar9 == (UnityEngine_GameObject_o *)0x0)) ||
       (UnityEngine_GameObject__SetActive(pUVar9,(uint)*(byte *)(lVar12 + 0x21),(MethodInfo *)0x0),
       pIVar14 == (Il2CppClass *)0x0)) goto label_0438900d;
    pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if ((lVar12 == 0) || (pUVar9 == (UnityEngine_GameObject_o *)0x0)) goto label_0438900d;
    UnityEngine_GameObject__SetActive(pUVar9,(uint)(*(char *)(lVar12 + 0x21) == '\0'),(MethodInfo *)0x0);
    pMVar15 = TypeInfo_CursorManager;
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar12 == 0) goto label_0438900d;
    *(undefined1 *)(lVar12 + 0x22) = *(undefined1 *)(lVar12 + 0x21);
  }
  if (*(int *)((long)&pMVar15[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar15 = TypeInfo_CursorManager;
  }
  lVar12 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
  if (lVar12 == 0) goto label_0438900d;
  plVar16 = extraout_RDX_01;
  if (*(char *)(lVar12 + 0x21) == '\0') {
    plVar16 = in_RCX;
    __this = pIVar14;
  }
  if (*(int *)((long)&pMVar15[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar12 == 0) goto label_0438900d;
  }
  if (((plVar16 == (long *)0x0) ||
      ((**(code **)(*plVar16 + 0x5e8))
                 (plVar16,*(undefined8 *)(lVar12 + 0x28),*(undefined8 *)(*plVar16 + 0x5f0)),
      __this == (Il2CppClass *)0x0)) ||
     (pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
     pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_0438900d;
  UVar20 = UnityEngine_Transform__get_position(pUVar11,(MethodInfo *)0x0);
  UVar21 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fStack_f0 = UVar20.fields.x;
  fStack_ec = UVar20.fields.y;
  fStack_ec = fStack_ec - UVar21.fields.y;
  fVar19 = UVar20.fields.z - UVar21.fields.z;
  fStack_f0 = fStack_f0 - UVar21.fields.x;
  if (9.9999994e-11 <= fStack_f0 * fStack_f0 + fStack_ec * fStack_ec + fVar19 * fVar19) {
    pMVar15 = TypeInfo_CursorManager;
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar20 = UI_CursorManager__GetInGameMousePosition(pMVar15);
    UnityEngine_Transform__set_position(pUVar11,UVar20,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388ff4;
label_04388fa2:
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388fa2;
label_04388ff4:
    il2cpp_runtime_helper_02337ed0();
    lVar12 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  if (lVar12 != 0) {
    uVar13 = 0;
label_04388fb4:
    *(undefined1 *)(lVar12 + 0x30) = uVar13;
    return;
  }
label_0438900d:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae24c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae24c = '\x01';
  }
  __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      if ((*(uint *)&__this_00[3].monitor | 2) == 2) {
        UnityEngine_Screen__get_width((MethodInfo *)0x0);
        UnityEngine_Screen__get_height((MethodInfo *)0x0);
        return;
      }
      UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&__this_00[1].klass + 1) = 1;
  __this_00[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&__this_00[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$SetHookArrow
// il2cpp: void UI_CursorManager__SetHookArrow (bool left, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, bool white, const MethodInfo* method);
// 0x4388390

void UI_CursorManager__SetHookArrow
               (bool_conflict left,UnityEngine_Vector3_o position,UnityEngine_Quaternion_o rotation,
               bool_conflict white,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_Transform_c *pUVar3;
  UnityEngine_Object_o *x;
  void *pvVar4;
  code *vtableDispatch;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  bool_conflict bVar6;
  undefined8 *puVar7;
  UnityEngine_GameObject_o *pUVar8;
  Il2CppClass *__this;
  UnityEngine_Texture_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  long lVar11;
  undefined1 uVar12;
  long *in_RCX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar13;
  long *extraout_RDX_01;
  undefined4 in_register_00000034;
  Il2CppClass *__this_00;
  Il2CppClass *pIVar14;
  MethodInfo *pMVar15;
  UnityEngine_MonoBehaviour_o *__this_01;
  char in_R8B;
  long *plVar16;
  undefined4 uVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o UVar20;
  float fStack_d8;
  float fStack_d4;
  
  __this_00 = (Il2CppClass *)CONCAT44(in_register_00000034,white);
  if (g_data_057ae249 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    g_data_057ae249 = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_0438845c;
label_043883bd:
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    pMVar15 = TypeInfo_CursorManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_043883bd;
label_0438845c:
    il2cpp_runtime_helper_02337ed0();
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    pMVar15 = TypeInfo_CursorManager;
  }
  TypeInfo_CursorManager = pMVar15;
  if (lVar11 != 0) {
    if ((char)left == '\0') {
      *(long *)(lVar11 + 0x44) = position.fields._0_8_;
      *(float *)(lVar11 + 0x4c) = position.fields.z;
      lVar11 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
      if (lVar11 != 0) {
        *(char *)(lVar11 + 0x71) = (char)white;
        *(long *)(lVar11 + 0x60) = rotation.fields._0_8_;
        puVar7 = (undefined8 *)(lVar11 + 0x68);
        goto label_043884c9;
      }
    }
    else {
      *(long *)(lVar11 + 0x38) = position.fields._0_8_;
      *(float *)(lVar11 + 0x40) = position.fields.z;
      lVar11 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
      if (lVar11 != 0) {
        *(char *)(lVar11 + 0x70) = (char)white;
        *(long *)(lVar11 + 0x50) = rotation.fields._0_8_;
        puVar7 = (undefined8 *)(lVar11 + 0x58);
label_043884c9:
        *puVar7 = rotation.fields._8_8_;
        return;
      }
    }
  }
  __this = (Il2CppClass *)&TypeInfo_CursorManager;
  il2cpp_runtime_helper_022b2c90();
  pIVar14 = __this_00;
  if (g_data_057ae24a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae24a = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_043885c3;
label_04388510:
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar11 == 0) goto label_043889f2;
label_04388524:
    if (*(char *)(lVar11 + 0x20) == '\0') {
      return;
    }
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr == 1)
      goto label_043885fe;
label_043886ea:
      if (pMVar15 != (MethodInfo *)0x0) {
        pIVar14 = (Il2CppClass *)0x0;
        pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
          pIVar14 = (Il2CppClass *)0x0;
          bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            pIVar14 = (Il2CppClass *)0x0;
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
            pIVar14 = (Il2CppClass *)0x0;
            UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
          }
          if (__this_00 != (Il2CppClass *)0x0) {
            pIVar14 = (Il2CppClass *)0x0;
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                return;
              }
              pIVar14 = (Il2CppClass *)0x0;
              pUVar8 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto label_043889f2;
    }
    if (*(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr != 1)
    goto label_043886ea;
label_043885fe:
    __this = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (__this == (Il2CppClass *)0x0) {
label_0438864a:
      lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0xa8), lVar11 == 0)) goto label_043889f2;
      if (*(char *)(lVar11 + 0x11) != '\0') {
        if (__this == (Il2CppClass *)0x0) goto label_043889f2;
        x = (__this->_1).interopData;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar14 = (Il2CppClass *)0x0;
        bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          plVar16 = (__this->_1).interopData;
          in_RCX = (long *)0x0;
          if (plVar16 != (long *)0x0) {
            in_RCX = (long *)*plVar16;
            if ((*(byte *)(TypeInfo_Human + 0x130) <= *(byte *)(in_RCX + 0x26)) &&
               (in_RCX = (long *)in_RCX[0x19],
               in_RCX[(ulong)*(byte *)(TypeInfo_Human + 0x130) - 1] == TypeInfo_Human)) {
              if (pMVar15 != (MethodInfo *)0x0) {
                pIVar14 = (Il2CppClass *)0x0;
                pUVar8 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                  pIVar14 = (Il2CppClass *)0x0;
                  bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
                  if ((char)bVar6 == '\0') {
                    pIVar14 = (Il2CppClass *)0x0;
                    pUVar8 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
                    pIVar14 = (Il2CppClass *)0x1;
                    UnityEngine_GameObject__SetActive(pUVar8,1,(MethodInfo *)0x0);
                  }
                  if (__this_00 != (Il2CppClass *)0x0) {
                    pIVar14 = (Il2CppClass *)0x0;
                    pUVar8 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                      bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
                      if ((char)bVar6 == '\0') {
                        pIVar14 = (Il2CppClass *)0x0;
                        pUVar8 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                        if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
                        UnityEngine_GameObject__SetActive(pUVar8,1,(MethodInfo *)0x0);
                      }
                      pIVar14 = (Il2CppClass *)0x0;
                      __this = (Il2CppClass *)
                               UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      lVar11 = *(long *)(((UnityEngine_Component_Fields *)
                                         &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                      if ((lVar11 != 0) && (__this != (Il2CppClass *)0x0)) {
                        UnityEngine_Transform__set_position
                                  ((UnityEngine_Transform_o *)__this,
                                   (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(lVar11 + 0x38),
                                   (MethodInfo *)0x0);
                        pIVar14 = (Il2CppClass *)0x0;
                        pUVar10 = UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                        in_RCX = *(long **)(((UnityEngine_Component_Fields *)
                                            &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                        if ((in_RCX != (long *)0x0) && (pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                          UnityEngine_Transform__set_position
                                    (pUVar10,(UnityEngine_Vector3_o)
                                             *(UnityEngine_Vector3_Fields *)((long)in_RCX + 0x44),
                                     (MethodInfo *)0x0);
                          pIVar14 = (Il2CppClass *)0x0;
                          pUVar10 = UnityEngine_Component__get_transform
                                              ((UnityEngine_Component_o *)pMVar15,(MethodInfo *)0x0);
                          in_RCX = *(long **)(((UnityEngine_Component_Fields *)
                                              &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                          if ((in_RCX != (long *)0x0) && (pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                            UnityEngine_Transform__set_rotation
                                      (pUVar10,(UnityEngine_Quaternion_o)
                                               *(UnityEngine_Quaternion_Fields *)(in_RCX + 10),
                                       (MethodInfo *)0x0);
                            pIVar14 = (Il2CppClass *)0x0;
                            pUVar10 = UnityEngine_Component__get_transform
                                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                            in_RCX = *(long **)(((UnityEngine_Component_Fields *)
                                                &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                            if ((in_RCX != (long *)0x0) && (pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                              pIVar14 = (Il2CppClass *)0x0;
                              UnityEngine_Transform__set_rotation
                                        (pUVar10,(UnityEngine_Quaternion_o)
                                                 *(UnityEngine_Quaternion_Fields *)(in_RCX + 0xc),
                                         (MethodInfo *)0x0);
                              lVar11 = *(long *)(((UnityEngine_Component_Fields *)
                                                 &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                              if (lVar11 != 0) {
                                uVar17 = 0x3f800000;
                                if (*(char *)(lVar11 + 0x70) == '\0') {
                                  uVar17 = 0;
                                }
                                pIVar14 = (Il2CppClass *)
                                          ((UnityEngine_Component_c *)pMVar15->methodPointer)[1].vtable.
                                          _0_Equals.methodPtr;
                                (**(code **)&((UnityEngine_Component_c *)pMVar15->methodPointer)[1]._2.
                                             naturalAligment)(0x3f800000,uVar17,pMVar15);
                                uVar13 = extraout_RDX;
                                if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                  uVar13 = extraout_RDX_00;
                                }
                                lVar11 = *(long *)(((UnityEngine_Component_Fields *)
                                                   &TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 8);
                                if (lVar11 != 0) {
                                  uVar17 = 0x3f800000;
                                  if (*(char *)(lVar11 + 0x71) == '\0') {
                                    uVar17 = 0;
                                  }
                                  pvVar4 = (__this_00->_1).image;
                                  vtableDispatch = *(code **)((long)pvVar4 + 0x2a8);
                                  (*vtableDispatch)
                                            (0x3f800000,uVar17,__this_00,*(undefined8 *)((long)pvVar4 + 0x2b0)
                                             ,uVar13,vtableDispatch);
                                  return;
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
              goto label_043889f2;
            }
          }
        }
      }
      goto label_043886ea;
    }
    pUVar3 = (__this->_1).image;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    in_RCX = (long *)(ulong)bVar1;
    pIVar14 = TypeInfo_InGameManager;
    if ((bVar1 <= (pUVar3->_2).naturalAligment) &&
       ((pUVar3->_2).typeHierarchy[(long)in_RCX + -1] == TypeInfo_InGameManager)) goto label_0438864a;
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388510;
label_043885c3:
    il2cpp_runtime_helper_02337ed0();
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar11 != 0) goto label_04388524;
label_043889f2:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae24b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae24b = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388b47;
label_04388a42:
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388a42;
label_04388b47:
    il2cpp_runtime_helper_02337ed0();
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  if (lVar11 == 0) goto label_0438900d;
  if (*(char *)(lVar11 + 0x20) == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar2 = *(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr;
  }
  else {
    iVar2 = *(int *)((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr;
  }
  if (iVar2 != 1) {
    if ((pIVar14 != (Il2CppClass *)0x0) &&
       (pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0),
       pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
      bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_0438900d;
        UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
      }
      if ((__this == (Il2CppClass *)0x0) ||
         (pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
         pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_0438900d;
      bVar6 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_0438900d;
        UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
      }
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr
                        + 8);
      uVar12 = 1;
      if (lVar11 == 0) goto label_0438900d;
      goto label_04388fb4;
    }
    goto label_0438900d;
  }
  lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x58), lVar11 == 0)) goto label_0438900d;
  bVar6 = System_String__op_Inequality(*(System_String_o **)(lVar11 + 0x18),"",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    lVar11 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar11 == 0) || (lVar11 = *(long *)(lVar11 + 0x90), lVar11 == 0)) goto label_0438900d;
    iVar2 = *(int *)(lVar11 + 0x14);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar11 == 0) goto label_0438900d;
    if ((*(int *)(lVar11 + 0x34) == iVar2) && (in_R8B == '\0')) {
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->
                           m_CachedPtr + 8);
        if (lVar11 == 0) goto label_0438900d;
      }
      pMVar15 = TypeInfo_CursorManager;
      if (*(char *)(lVar11 + 0x30) != '\0') goto label_04388cd4;
    }
    else {
label_04388cd4:
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 0x10);
      if ((pSVar5 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar9 = (UnityEngine_Texture_o *)
                   System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             (pSVar5,iVar2,MethodInfo_Texture2D_get_Item), __this == (Il2CppClass *)0x0)) goto label_0438900d;
      UnityEngine_UI_RawImage__set_texture((UnityEngine_UI_RawImage_o *)__this,pUVar9,(MethodInfo *)0x0);
      pSVar5 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                (((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr + 0x10);
      if ((pSVar5 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar9 = (UnityEngine_Texture_o *)
                   System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             (pSVar5,iVar2,MethodInfo_Texture2D_get_Item), pIVar14 == (Il2CppClass *)0x0)) goto label_0438900d;
      UnityEngine_UI_RawImage__set_texture((UnityEngine_UI_RawImage_o *)pIVar14,pUVar9,(MethodInfo *)0x0);
      pMVar15 = TypeInfo_CursorManager;
      lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr
                        + 8);
      if (lVar11 == 0) goto label_0438900d;
      *(int *)(lVar11 + 0x34) = iVar2;
    }
    iVar2 = *(int *)((long)&pMVar15[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_CursorManager[2].parameters + 4);
    pMVar15 = TypeInfo_CursorManager;
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar15 = TypeInfo_CursorManager;
  }
  lVar11 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
  if (lVar11 == 0) goto label_0438900d;
  if ((*(char *)(lVar11 + 0x21) == *(char *)(lVar11 + 0x22)) && (in_R8B == '\0')) {
    if (*(int *)((long)&pMVar15[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr
                        + 8);
      pMVar15 = TypeInfo_CursorManager;
      if (lVar11 == 0) goto label_0438900d;
    }
    if (*(char *)(lVar11 + 0x30) != '\0') goto label_04388de2;
  }
  else {
label_04388de2:
    if (__this == (Il2CppClass *)0x0) goto label_0438900d;
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (((lVar11 == 0) || (pUVar8 == (UnityEngine_GameObject_o *)0x0)) ||
       (UnityEngine_GameObject__SetActive(pUVar8,(uint)*(byte *)(lVar11 + 0x21),(MethodInfo *)0x0),
       pIVar14 == (Il2CppClass *)0x0)) goto label_0438900d;
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar14,(MethodInfo *)0x0);
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if ((lVar11 == 0) || (pUVar8 == (UnityEngine_GameObject_o *)0x0)) goto label_0438900d;
    UnityEngine_GameObject__SetActive(pUVar8,(uint)(*(char *)(lVar11 + 0x21) == '\0'),(MethodInfo *)0x0);
    pMVar15 = TypeInfo_CursorManager;
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar11 == 0) goto label_0438900d;
    *(undefined1 *)(lVar11 + 0x22) = *(undefined1 *)(lVar11 + 0x21);
  }
  if (*(int *)((long)&pMVar15[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar15 = TypeInfo_CursorManager;
  }
  lVar11 = *(long *)(((UnityEngine_Component_Fields *)&pMVar15[2].virtualMethodPointer)->m_CachedPtr + 8);
  if (lVar11 == 0) goto label_0438900d;
  plVar16 = extraout_RDX_01;
  if (*(char *)(lVar11 + 0x21) == '\0') {
    plVar16 = in_RCX;
    __this = pIVar14;
  }
  if (*(int *)((long)&pMVar15[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
    if (lVar11 == 0) goto label_0438900d;
  }
  if (((plVar16 == (long *)0x0) ||
      ((**(code **)(*plVar16 + 0x5e8))
                 (plVar16,*(undefined8 *)(lVar11 + 0x28),*(undefined8 *)(*plVar16 + 0x5f0)),
      __this == (Il2CppClass *)0x0)) ||
     (pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
     pUVar10 == (UnityEngine_Transform_o *)0x0)) goto label_0438900d;
  UVar19 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
  UVar20 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fStack_d8 = UVar19.fields.x;
  fStack_d4 = UVar19.fields.y;
  fStack_d4 = fStack_d4 - UVar20.fields.y;
  fVar18 = UVar19.fields.z - UVar20.fields.z;
  fStack_d8 = fStack_d8 - UVar20.fields.x;
  if (9.9999994e-11 <= fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4 + fVar18 * fVar18) {
    pMVar15 = TypeInfo_CursorManager;
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar19 = UI_CursorManager__GetInGameMousePosition(pMVar15);
    UnityEngine_Transform__set_position(pUVar10,UVar19,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388ff4;
label_04388fa2:
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388fa2;
label_04388ff4:
    il2cpp_runtime_helper_02337ed0();
    lVar11 = *(long *)(((UnityEngine_Component_Fields *)&TypeInfo_CursorManager[2].virtualMethodPointer)->m_CachedPtr +
                      8);
  }
  if (lVar11 != 0) {
    uVar12 = 0;
label_04388fb4:
    *(undefined1 *)(lVar11 + 0x30) = uVar12;
    return;
  }
label_0438900d:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae24c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae24c = '\x01';
  }
  __this_01 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_01 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      if ((*(uint *)&__this_01[3].monitor | 2) == 2) {
        UnityEngine_Screen__get_width((MethodInfo *)0x0);
        UnityEngine_Screen__get_height((MethodInfo *)0x0);
        return;
      }
      UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&__this_01[1].klass + 1) = 1;
  __this_01[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&__this_01[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$UpdateHookArrows
// il2cpp: void UI_CursorManager__UpdateHookArrows (UnityEngine_UI_Image_o* hookArrowLeft, UnityEngine_UI_Image_o* hookArrowRight, const MethodInfo* method);
// 0x43884e0

void UI_CursorManager__UpdateHookArrows
               (UnityEngine_UI_Image_o *hookArrowLeft,UnityEngine_UI_Image_o *hookArrowRight,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  UnityEngine_Object_o *x;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Texture_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  long lVar8;
  undefined1 uVar9;
  long *in_RCX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar10;
  long *extraout_RDX_01;
  Il2CppClass *unaff_RBX;
  Il2CppClass *pIVar11;
  MethodInfo *pMVar12;
  UnityEngine_MonoBehaviour_o *__this;
  char in_R8B;
  long *plVar13;
  undefined4 uVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  float fStack_80;
  float fStack_7c;
  
  pIVar11 = (Il2CppClass *)hookArrowRight;
  if (g_data_057ae24a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057ae24a = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_043885c3;
label_04388510:
    lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
    if (lVar8 == 0) goto label_043889f2;
label_04388524:
    if (*(char *)(lVar8 + 0x20) == '\0') {
      return;
    }
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (*(int *)TypeInfo_CursorManager[2].virtualMethodPointer == 1) goto label_043885fe;
label_043886ea:
      if (hookArrowLeft != (UnityEngine_UI_Image_o *)0x0) {
        pIVar11 = (Il2CppClass *)0x0;
        pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          pIVar11 = (Il2CppClass *)0x0;
          bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            pIVar11 = (Il2CppClass *)0x0;
            pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
            if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
            pIVar11 = (Il2CppClass *)0x0;
            UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
          }
          if (hookArrowRight != (UnityEngine_UI_Image_o *)0x0) {
            pIVar11 = (Il2CppClass *)0x0;
            pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
              if ((char)bVar4 == '\0') {
                return;
              }
              pIVar11 = (Il2CppClass *)0x0;
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto label_043889f2;
    }
    if (*(int *)TypeInfo_CursorManager[2].virtualMethodPointer != 1) goto label_043886ea;
label_043885fe:
    unaff_RBX = *(Il2CppClass **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
    if (unaff_RBX == (Il2CppClass *)0x0) {
label_0438864a:
      lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
      if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0xa8), lVar8 == 0)) goto label_043889f2;
      if (*(char *)(lVar8 + 0x11) != '\0') {
        if (unaff_RBX == (Il2CppClass *)0x0) goto label_043889f2;
        x = (unaff_RBX->_1).interopData;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar11 = (Il2CppClass *)0x0;
        bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          plVar13 = (unaff_RBX->_1).interopData;
          in_RCX = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            in_RCX = (long *)*plVar13;
            if ((*(byte *)(TypeInfo_Human + 0x130) <= *(byte *)(in_RCX + 0x26)) &&
               (in_RCX = (long *)in_RCX[0x19],
               in_RCX[(ulong)*(byte *)(TypeInfo_Human + 0x130) - 1] == TypeInfo_Human)) {
              if (hookArrowLeft != (UnityEngine_UI_Image_o *)0x0) {
                pIVar11 = (Il2CppClass *)0x0;
                pUVar5 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                  pIVar11 = (Il2CppClass *)0x0;
                  bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
                  if ((char)bVar4 == '\0') {
                    pIVar11 = (Il2CppClass *)0x0;
                    pUVar5 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                    if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
                    pIVar11 = (Il2CppClass *)0x1;
                    UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
                  }
                  if (hookArrowRight != (UnityEngine_UI_Image_o *)0x0) {
                    pIVar11 = (Il2CppClass *)0x0;
                    pUVar5 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                      bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
                      if ((char)bVar4 == '\0') {
                        pIVar11 = (Il2CppClass *)0x0;
                        pUVar5 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_043889f2;
                        UnityEngine_GameObject__SetActive(pUVar5,1,(MethodInfo *)0x0);
                      }
                      pIVar11 = (Il2CppClass *)0x0;
                      unaff_RBX = (Il2CppClass *)
                                  UnityEngine_Component__get_transform
                                            ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      if ((*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) != 0) &&
                         (unaff_RBX != (Il2CppClass *)0x0)) {
                        UnityEngine_Transform__set_position
                                  ((UnityEngine_Transform_o *)unaff_RBX,
                                   (UnityEngine_Vector3_o)
                                   *(UnityEngine_Vector3_Fields *)
                                    (*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x38),
                                   (MethodInfo *)0x0);
                        pIVar11 = (Il2CppClass *)0x0;
                        pUVar7 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                        in_RCX = *(long **)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
                        if ((in_RCX != (long *)0x0) && (pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                          UnityEngine_Transform__set_position
                                    (pUVar7,(UnityEngine_Vector3_o)
                                            *(UnityEngine_Vector3_Fields *)((long)in_RCX + 0x44),
                                     (MethodInfo *)0x0);
                          pIVar11 = (Il2CppClass *)0x0;
                          pUVar7 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)hookArrowLeft,(MethodInfo *)0x0);
                          in_RCX = *(long **)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
                          if ((in_RCX != (long *)0x0) && (pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                            UnityEngine_Transform__set_rotation
                                      (pUVar7,(UnityEngine_Quaternion_o)
                                              *(UnityEngine_Quaternion_Fields *)(in_RCX + 10),
                                       (MethodInfo *)0x0);
                            pIVar11 = (Il2CppClass *)0x0;
                            pUVar7 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)hookArrowRight,(MethodInfo *)0x0);
                            in_RCX = *(long **)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
                            if ((in_RCX != (long *)0x0) && (pUVar7 != (UnityEngine_Transform_o *)0x0)) {
                              pIVar11 = (Il2CppClass *)0x0;
                              UnityEngine_Transform__set_rotation
                                        (pUVar7,(UnityEngine_Quaternion_o)
                                                *(UnityEngine_Quaternion_Fields *)(in_RCX + 0xc),
                                         (MethodInfo *)0x0);
                              if (*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) != 0) {
                                uVar14 = 0x3f800000;
                                if (*(char *)(*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x70) ==
                                    '\0') {
                                  uVar14 = 0;
                                }
                                pIVar11 = (Il2CppClass *)(hookArrowLeft->klass->vtable)._23_set_color.method;
                                (*(hookArrowLeft->klass->vtable)._23_set_color.methodPtr)
                                          (0x3f800000,uVar14,hookArrowLeft);
                                uVar10 = extraout_RDX;
                                if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                  uVar10 = extraout_RDX_00;
                                }
                                if (*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) != 0) {
                                  uVar14 = 0x3f800000;
                                  if (*(char *)(*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x71) ==
                                      '\0') {
                                    uVar14 = 0;
                                  }
                                  vtableDispatch =
                                       (hookArrowRight->klass->vtable)._23_set_color.methodPtr;
                                  (*vtableDispatch)
                                            (0x3f800000,uVar14,hookArrowRight,
                                             (hookArrowRight->klass->vtable)._23_set_color.method,uVar10,
                                             vtableDispatch);
                                  return;
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
              goto label_043889f2;
            }
          }
        }
      }
      goto label_043886ea;
    }
    pvVar3 = (unaff_RBX->_1).image;
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    in_RCX = (long *)(ulong)bVar1;
    pIVar11 = TypeInfo_InGameManager;
    if ((bVar1 <= *(byte *)((long)pvVar3 + 0x130)) &&
       (*(Il2CppClass **)(*(long *)((long)pvVar3 + 200) + -8 + (long)in_RCX * 8) == TypeInfo_InGameManager))
    goto label_0438864a;
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388510;
label_043885c3:
    il2cpp_runtime_helper_02337ed0();
    lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
    if (lVar8 != 0) goto label_04388524;
label_043889f2:
    il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae24b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae24b = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388b47;
label_04388a42:
    lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388a42;
label_04388b47:
    il2cpp_runtime_helper_02337ed0();
    lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  if (lVar8 == 0) goto label_0438900d;
  if (*(char *)(lVar8 + 0x20) == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar2 = *(int *)TypeInfo_CursorManager[2].virtualMethodPointer;
  }
  else {
    iVar2 = *(int *)TypeInfo_CursorManager[2].virtualMethodPointer;
  }
  if (iVar2 != 1) {
    if ((pIVar11 != (Il2CppClass *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar11,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar11,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_0438900d;
        UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      }
      if ((unaff_RBX == (Il2CppClass *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)unaff_RBX,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto label_0438900d;
      bVar4 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)unaff_RBX,(MethodInfo *)0x0)
        ;
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_0438900d;
        UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      }
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
      uVar9 = 1;
      if (lVar8 == 0) goto label_0438900d;
      goto label_04388fb4;
    }
    goto label_0438900d;
  }
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x58), lVar8 == 0)) goto label_0438900d;
  bVar4 = System_String__op_Inequality(*(System_String_o **)(lVar8 + 0x18),"",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x90), lVar8 == 0)) goto label_0438900d;
    iVar2 = *(int *)(lVar8 + 0x14);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
    if (lVar8 == 0) goto label_0438900d;
    if ((*(int *)(lVar8 + 0x34) == iVar2) && (in_R8B == '\0')) {
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
        if (lVar8 == 0) goto label_0438900d;
      }
      pMVar12 = TypeInfo_CursorManager;
      if (*(char *)(lVar8 + 0x30) != '\0') goto label_04388cd4;
    }
    else {
label_04388cd4:
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
            (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10) ==
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar6 = (UnityEngine_Texture_o *)
                   System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                               (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10),iVar2,MethodInfo_Texture2D_get_Item),
         unaff_RBX == (Il2CppClass *)0x0)) goto label_0438900d;
      UnityEngine_UI_RawImage__set_texture((UnityEngine_UI_RawImage_o *)unaff_RBX,pUVar6,(MethodInfo *)0x0);
      if ((*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
            (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10) ==
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar6 = (UnityEngine_Texture_o *)
                   System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                               (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10),iVar2,MethodInfo_Texture2D_get_Item),
         pIVar11 == (Il2CppClass *)0x0)) goto label_0438900d;
      UnityEngine_UI_RawImage__set_texture((UnityEngine_UI_RawImage_o *)pIVar11,pUVar6,(MethodInfo *)0x0);
      pMVar12 = TypeInfo_CursorManager;
      if (*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) == 0) goto label_0438900d;
      *(int *)(*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x34) = iVar2;
    }
    iVar2 = *(int *)((long)&pMVar12[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_CursorManager[2].parameters + 4);
    pMVar12 = TypeInfo_CursorManager;
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar12 = TypeInfo_CursorManager;
  }
  lVar8 = *(long *)(pMVar12[2].virtualMethodPointer + 8);
  if (lVar8 == 0) goto label_0438900d;
  if ((*(char *)(lVar8 + 0x21) == *(char *)(lVar8 + 0x22)) && (in_R8B == '\0')) {
    if (*(int *)((long)&pMVar12[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
      pMVar12 = TypeInfo_CursorManager;
      if (lVar8 == 0) goto label_0438900d;
    }
    if (*(char *)(lVar8 + 0x30) != '\0') goto label_04388de2;
  }
  else {
label_04388de2:
    if (unaff_RBX == (Il2CppClass *)0x0) goto label_0438900d;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)unaff_RBX,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (((*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) == 0) ||
        (pUVar5 == (UnityEngine_GameObject_o *)0x0)) ||
       (UnityEngine_GameObject__SetActive
                  (pUVar5,(uint)*(byte *)(*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x21),
                   (MethodInfo *)0x0), pIVar11 == (Il2CppClass *)0x0)) goto label_0438900d;
    pUVar5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar11,(MethodInfo *)0x0);
    if ((*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) == 0) ||
       (pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto label_0438900d;
    UnityEngine_GameObject__SetActive
              (pUVar5,(uint)(*(char *)(*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x21) == '\0'),
               (MethodInfo *)0x0);
    pMVar12 = TypeInfo_CursorManager;
    lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
    if (lVar8 == 0) goto label_0438900d;
    *(undefined1 *)(lVar8 + 0x22) = *(undefined1 *)(lVar8 + 0x21);
  }
  if (*(int *)((long)&pMVar12[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar12 = TypeInfo_CursorManager;
  }
  lVar8 = *(long *)(pMVar12[2].virtualMethodPointer + 8);
  if (lVar8 == 0) goto label_0438900d;
  plVar13 = extraout_RDX_01;
  if (*(char *)(lVar8 + 0x21) == '\0') {
    plVar13 = in_RCX;
    unaff_RBX = pIVar11;
  }
  if (*(int *)((long)&pMVar12[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
    if (lVar8 == 0) goto label_0438900d;
  }
  if (((plVar13 == (long *)0x0) ||
      ((**(code **)(*plVar13 + 0x5e8))
                 (plVar13,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(*plVar13 + 0x5f0)),
      unaff_RBX == (Il2CppClass *)0x0)) ||
     (pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)unaff_RBX,(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_0438900d;
  UVar16 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  UVar17 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fStack_80 = UVar16.fields.x;
  fStack_7c = UVar16.fields.y;
  fStack_7c = fStack_7c - UVar17.fields.y;
  fVar15 = UVar16.fields.z - UVar17.fields.z;
  fStack_80 = fStack_80 - UVar17.fields.x;
  if (9.9999994e-11 <= fStack_80 * fStack_80 + fStack_7c * fStack_7c + fVar15 * fVar15) {
    pMVar12 = TypeInfo_CursorManager;
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar16 = UI_CursorManager__GetInGameMousePosition(pMVar12);
    UnityEngine_Transform__set_position(pUVar7,UVar16,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388ff4;
label_04388fa2:
    lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388fa2;
label_04388ff4:
    il2cpp_runtime_helper_02337ed0();
    lVar8 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  if (lVar8 != 0) {
    uVar9 = 0;
label_04388fb4:
    *(undefined1 *)(lVar8 + 0x30) = uVar9;
    return;
  }
label_0438900d:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae24c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae24c = '\x01';
  }
  __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      if ((*(uint *)&__this[3].monitor | 2) == 2) {
        UnityEngine_Screen__get_width((MethodInfo *)0x0);
        UnityEngine_Screen__get_height((MethodInfo *)0x0);
        return;
      }
      UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&__this[1].klass + 1) = 1;
  __this[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&__this[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$UpdateCrosshair
// il2cpp: void UI_CursorManager__UpdateCrosshair (UnityEngine_UI_RawImage_o* crosshairImageWhite, UnityEngine_UI_RawImage_o* crosshairImageRed, UnityEngine_UI_Text_o* crosshairLabelWhite, UnityEngine_UI_Text_o* crosshairLabelRed, bool force, const MethodInfo* method);
// 0x4388a00

void UI_CursorManager__UpdateCrosshair
               (UnityEngine_UI_RawImage_o *crosshairImageWhite,UnityEngine_UI_RawImage_o *crosshairImageRed,
               UnityEngine_UI_Text_o *crosshairLabelWhite,UnityEngine_UI_Text_o *crosshairLabelRed,
               bool_conflict force,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool_conflict bVar3;
  UnityEngine_Texture_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *__this;
  long lVar6;
  undefined1 uVar7;
  MethodInfo *pMVar8;
  UnityEngine_MonoBehaviour_o *__this_00;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  float local_58;
  float fStack_54;
  
  if (g_data_057ae24b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Texture2D_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae24b = '\x01';
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388b47;
label_04388a42:
    lVar6 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388a42;
label_04388b47:
    il2cpp_runtime_helper_02337ed0();
    lVar6 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  if (lVar6 == 0) goto label_0438900d;
  if (*(char *)(lVar6 + 0x20) == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar2 = *(int *)TypeInfo_CursorManager[2].virtualMethodPointer;
  }
  else {
    iVar2 = *(int *)TypeInfo_CursorManager[2].virtualMethodPointer;
  }
  if (iVar2 != 1) {
    if ((crosshairImageRed != (UnityEngine_UI_RawImage_o *)0x0) &&
       (pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_0438900d;
        UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      }
      if ((crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0),
         pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto label_0438900d;
      bVar3 = UnityEngine_GameObject__get_activeSelf(pUVar5,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0);
        if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_0438900d;
        UnityEngine_GameObject__SetActive(pUVar5,0,(MethodInfo *)0x0);
      }
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar6 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
      uVar7 = 1;
      if (lVar6 == 0) goto label_0438900d;
      goto label_04388fb4;
    }
    goto label_0438900d;
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x58), lVar6 == 0)) goto label_0438900d;
  bVar3 = System_String__op_Inequality(*(System_String_o **)(lVar6 + 0x18),"",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x90), lVar6 == 0)) goto label_0438900d;
    iVar2 = *(int *)(lVar6 + 0x14);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar6 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
    if (lVar6 == 0) goto label_0438900d;
    if ((*(int *)(lVar6 + 0x34) == iVar2) && ((char)force == '\0')) {
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar6 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
        if (lVar6 == 0) goto label_0438900d;
      }
      pMVar8 = TypeInfo_CursorManager;
      if (*(char *)(lVar6 + 0x30) != '\0') goto label_04388cd4;
    }
    else {
label_04388cd4:
      if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
            (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10) ==
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar4 = (UnityEngine_Texture_o *)
                   System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                               (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10),iVar2,MethodInfo_Texture2D_get_Item),
         crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0)) goto label_0438900d;
      UnityEngine_UI_RawImage__set_texture(crosshairImageWhite,pUVar4,(MethodInfo *)0x0);
      if ((*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
            (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10) ==
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) ||
         (pUVar4 = (UnityEngine_Texture_o *)
                   System_Collections_Generic_Dictionary_Int32Enum__object___get_Item
                             (*(System_Collections_Generic_Dictionary_TKey__TValue__o **)
                               (TypeInfo_CursorManager[2].virtualMethodPointer + 0x10),iVar2,MethodInfo_Texture2D_get_Item),
         crosshairImageRed == (UnityEngine_UI_RawImage_o *)0x0)) goto label_0438900d;
      UnityEngine_UI_RawImage__set_texture(crosshairImageRed,pUVar4,(MethodInfo *)0x0);
      pMVar8 = TypeInfo_CursorManager;
      if (*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) == 0) goto label_0438900d;
      *(int *)(*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x34) = iVar2;
    }
    iVar2 = *(int *)((long)&pMVar8[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_CursorManager[2].parameters + 4);
    pMVar8 = TypeInfo_CursorManager;
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = TypeInfo_CursorManager;
  }
  lVar6 = *(long *)(pMVar8[2].virtualMethodPointer + 8);
  if (lVar6 == 0) goto label_0438900d;
  if ((*(char *)(lVar6 + 0x21) == *(char *)(lVar6 + 0x22)) && ((char)force == '\0')) {
    if (*(int *)((long)&pMVar8[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar6 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
      pMVar8 = TypeInfo_CursorManager;
      if (lVar6 == 0) goto label_0438900d;
    }
    if (*(char *)(lVar6 + 0x30) != '\0') goto label_04388de2;
  }
  else {
label_04388de2:
    if (crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0) goto label_0438900d;
    pUVar5 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (((*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) == 0) ||
        (pUVar5 == (UnityEngine_GameObject_o *)0x0)) ||
       (UnityEngine_GameObject__SetActive
                  (pUVar5,(uint)*(byte *)(*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x21),
                   (MethodInfo *)0x0), crosshairImageRed == (UnityEngine_UI_RawImage_o *)0x0))
    goto label_0438900d;
    pUVar5 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)crosshairImageRed,(MethodInfo *)0x0);
    if ((*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) == 0) ||
       (pUVar5 == (UnityEngine_GameObject_o *)0x0)) goto label_0438900d;
    UnityEngine_GameObject__SetActive
              (pUVar5,(uint)(*(char *)(*(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8) + 0x21) == '\0'),
               (MethodInfo *)0x0);
    pMVar8 = TypeInfo_CursorManager;
    lVar6 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
    if (lVar6 == 0) goto label_0438900d;
    *(undefined1 *)(lVar6 + 0x22) = *(undefined1 *)(lVar6 + 0x21);
  }
  if (*(int *)((long)&pMVar8[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = TypeInfo_CursorManager;
  }
  lVar6 = *(long *)(pMVar8[2].virtualMethodPointer + 8);
  if (lVar6 == 0) goto label_0438900d;
  if (*(char *)(lVar6 + 0x21) == '\0') {
    crosshairLabelWhite = crosshairLabelRed;
    crosshairImageWhite = crosshairImageRed;
  }
  if (*(int *)((long)&pMVar8[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
    if (lVar6 == 0) goto label_0438900d;
  }
  if (((crosshairLabelWhite == (UnityEngine_UI_Text_o *)0x0) ||
      ((*(crosshairLabelWhite->klass->vtable)._75_set_text.methodPtr)
                 (crosshairLabelWhite,*(undefined8 *)(lVar6 + 0x28),
                  (crosshairLabelWhite->klass->vtable)._75_set_text.method),
      crosshairImageWhite == (UnityEngine_UI_RawImage_o *)0x0)) ||
     (__this = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)crosshairImageWhite,(MethodInfo *)0x0),
     __this == (UnityEngine_Transform_o *)0x0)) goto label_0438900d;
  UVar10 = UnityEngine_Transform__get_position(__this,(MethodInfo *)0x0);
  UVar11 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  local_58 = UVar10.fields.x;
  fStack_54 = UVar10.fields.y;
  fStack_54 = fStack_54 - UVar11.fields.y;
  fVar9 = UVar10.fields.z - UVar11.fields.z;
  local_58 = local_58 - UVar11.fields.x;
  if (9.9999994e-11 <= local_58 * local_58 + fStack_54 * fStack_54 + fVar9 * fVar9) {
    pMVar8 = TypeInfo_CursorManager;
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar10 = UI_CursorManager__GetInGameMousePosition(pMVar8);
    UnityEngine_Transform__set_position(__this,UVar10,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) == 0) goto label_04388ff4;
label_04388fa2:
    lVar6 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  else {
    if (*(int *)((long)&TypeInfo_CursorManager[2].parameters + 4) != 0) goto label_04388fa2;
label_04388ff4:
    il2cpp_runtime_helper_02337ed0();
    lVar6 = *(long *)(TypeInfo_CursorManager[2].virtualMethodPointer + 8);
  }
  if (lVar6 != 0) {
    uVar7 = 0;
label_04388fb4:
    *(undefined1 *)(lVar6 + 0x30) = uVar7;
    return;
  }
label_0438900d:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae24c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae24c = '\x01';
  }
  __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      if ((*(uint *)&__this_00[3].monitor | 2) == 2) {
        UnityEngine_Screen__get_width((MethodInfo *)0x0);
        UnityEngine_Screen__get_height((MethodInfo *)0x0);
        return;
      }
      UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&__this_00[1].klass + 1) = 1;
  __this_00[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&__this_00[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$GetInGameMousePosition
// il2cpp: UnityEngine_Vector3_o UI_CursorManager__GetInGameMousePosition (const MethodInfo* method);
// 0x4389020

UnityEngine_Vector3_o UI_CursorManager__GetInGameMousePosition(MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  int32_t iVar3;
  UnityEngine_MonoBehaviour_o *__this;
  float in_XMM1_Da;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_Fields UVar5;
  UnityEngine_Vector3_o UVar6;
  undefined8 extraout_XMM0_Qa;
  
  if (g_data_057ae24c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameCamera);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057ae24c = '\x01';
  }
  __this = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameCamera)) {
      if ((*(uint *)&__this[3].monitor | 2) == 2) {
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
    il2cpp_runtime_helper_022b2fd0();
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&__this[1].klass + 1) = 1;
  __this[1].monitor = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&__this[1].monitor);
  UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
  UVar6.fields.z = in_XMM1_Da;
  UVar6.fields.x = (float)(int)extraout_XMM0_Qa;
  UVar6.fields.y = (float)(int)((ulong)extraout_XMM0_Qa >> 0x20);
  return (UnityEngine_Vector3_o)UVar6.fields;
}


// UI.CursorManager$$.ctor
// il2cpp: void UI_CursorManager___ctor (UI_CursorManager_o* __this, const MethodInfo* method);
// 0x43890e0

void UI_CursorManager___ctor(UI_CursorManager_o *__this,MethodInfo *method)

{
  *(undefined1 *)((long)&(__this->fields)._ready + 1) = 1;
  *(undefined8 *)&(__this->fields)._lastCrosshairWhite = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._lastCrosshairWhite);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CursorManager$$.cctor
// il2cpp: void UI_CursorManager___cctor (const MethodInfo* method);
// 0x4389120

void UI_CursorManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  
  if (g_data_057ae24d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CursorManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UI_CrosshairStyle_UnityEngine_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_CrosshairStyle_Texture2D);
    g_data_057ae24d = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_CrosshairStyle_Texture2D);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(__this,MethodInfo_Dictionary_2_UI_CrosshairStyle_UnityEngine_Texture2D);
  lVar1 = *(long *)(TypeInfo_CursorManager + 0xb8);
  *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar1 + 0x10) = __this;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x10,__this);
  return;
}



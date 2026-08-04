// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSkinSetActions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$get_CurrentSettings
// il2cpp: Settings_ISetSettingsContainer_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentSettings (const MethodInfo* method);
// 0x4464e70

Settings_ISetSettingsContainer_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentSettings(MethodInfo *method)

{
  if (g_data_057ae7b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    g_data_057ae7b4 = '\x01';
  }
  return (Settings_ISetSettingsContainer_o *)**(undefined8 **)(TypeInfo_AottgSkinSetActions + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$get_CurrentOperation
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentOperation (const MethodInfo* method);
// 0x4464eb0

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentOperation(MethodInfo *method)

{
  if (g_data_057ae7b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    g_data_057ae7b5 = '\x01';
  }
  return *(int32_t *)(*(long *)(TypeInfo_AottgSkinSetActions + 0xb8) + 8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenCreate
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCreate (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, const MethodInfo* method);
// 0x4464ef0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCreate
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Settings_ISetSettingsContainer_o *settings,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057ae7bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-skin-set-name");
    g_data_057ae7bb = '\x01';
  }
  if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
    **(undefined8 **)(TypeInfo_AottgSkinSetActions + 0xb8) = settings;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSkinSetActions + 0xb8),settings);
    *(undefined4 *)(*(long *)(TypeInfo_AottgSkinSetActions + 0xb8) + 8) = 0;
    if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
      pIVar1 = UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (pIVar1[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (pIVar1[8].monitor,"setting-skin-set-name",1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenRename
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenRename (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, const MethodInfo* method);
// 0x4464fe0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenRename
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Settings_ISetSettingsContainer_o *settings,MethodInfo *method)

{
  ushort uVar1;
  Settings_ISetSettingsContainer_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  
  if (g_data_057ae7b6 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7b6 = '\x01';
  }
  if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
    pSVar2 = settings->klass;
    uVar1._0_1_ = (pSVar2->_2).rank;
    uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_ISetSettingsContainer) {
          pVVar6 = pSVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 8);
          goto label_04465069;
        }
        lVar7 = lVar7 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar7);
    }
    pVVar6 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(settings,TypeInfo_ISetSettingsContainer,8);
label_04465069:
    cVar4 = (*pVVar6->methodPtr)(settings,pVVar6->method);
    if (cVar4 != '\0') {
      if (g_data_057ae7bb == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        il2cpp_runtime_helper_023445d0(&"setting-skin-set-name");
        g_data_057ae7bb = '\x01';
      }
      if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
        **(undefined8 **)(TypeInfo_AottgSkinSetActions + 0xb8) = settings;
        il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSkinSetActions + 0xb8),settings);
        *(undefined4 *)(*(long *)(TypeInfo_AottgSkinSetActions + 0xb8) + 8) = 1;
        if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
          pIVar5 = UnityEngine_GameObject__GetComponentInParent_object_
                             (context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar5[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                      (pIVar5[8].monitor,"setting-skin-set-name",1,(MethodInfo *)0x0);
            return;
          }
        }
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenCopy
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCopy (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, const MethodInfo* method);
// 0x4465090

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCopy
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Settings_ISetSettingsContainer_o *settings,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (g_data_057ae7bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-skin-set-name");
    g_data_057ae7bb = '\x01';
  }
  if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
    **(undefined8 **)(TypeInfo_AottgSkinSetActions + 0xb8) = settings;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSkinSetActions + 0xb8),settings);
    *(undefined4 *)(*(long *)(TypeInfo_AottgSkinSetActions + 0xb8) + 8) = 2;
    if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
      pIVar1 = UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (pIVar1[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (pIVar1[8].monitor,"setting-skin-set-name",1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenDelete
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenDelete (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, const MethodInfo* method);
// 0x44650a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenDelete
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Settings_ISetSettingsContainer_o *settings,MethodInfo *method)

{
  ushort uVar1;
  Settings_ISetSettingsContainer_c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  VirtualInvokeData *pVVar5;
  Il2CppObject *pIVar6;
  long lVar7;
  
  if (g_data_057ae7b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7b7 = '\x01';
  }
  if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
    pSVar2 = settings->klass;
    uVar1._0_1_ = (pSVar2->_2).rank;
    uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar7 = 0;
      do {
        if (*(long *)((long)&pIVar3->interfaceType + lVar7) == TypeInfo_ISetSettingsContainer) {
          pVVar5 = pSVar2->vtable + (*(int *)((long)&pIVar3->offset + lVar7) + 7);
          goto label_04465159;
        }
        lVar7 = lVar7 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar7);
    }
    pVVar5 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(settings,TypeInfo_ISetSettingsContainer,7);
label_04465159:
    cVar4 = (*pVVar5->methodPtr)(settings,pVVar5->method);
    if (cVar4 != '\0') {
      **(undefined8 **)(TypeInfo_AottgSkinSetActions + 0xb8) = settings;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSkinSetActions + 0xb8),settings);
      if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
        pIVar6 = UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (pIVar6[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (pIVar6[8].monitor,"setting-skin-set-delete",1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$SelectedName
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__SelectedName (const MethodInfo* method);
// 0x44651e0

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__SelectedName(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_String_c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  void *pvVar5;
  char cVar6;
  bool_conflict bVar7;
  int iVar8;
  VirtualInvokeData *pVVar9;
  undefined8 *puVar10;
  undefined4 extraout_var;
  System_String_o *pSVar11;
  Settings_TypedSetting_int__o *pSVar12;
  long *plVar13;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  System_String_o *pSVar14;
  System_String_o *extraout_RAX_01;
  long lVar15;
  long lVar16;
  long lVar17;
  
  if (g_data_057ae7b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7b8 = '\x01';
  }
  pSVar14 = (System_String_o *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
  if (pSVar14 != (System_String_o *)0x0) {
    pSVar3 = pSVar14->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar15 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar15) == TypeInfo_ISetSettingsContainer) {
          pVVar9 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar15);
          goto label_04465291;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar15);
    }
    pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar14,TypeInfo_ISetSettingsContainer,0);
label_04465291:
    lVar15 = (*pVVar9->methodPtr)();
    if (lVar15 != 0) {
      pSVar11 = (System_String_o *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
      if (pSVar11 != (System_String_o *)0x0) {
        pSVar3 = pSVar11->klass;
        uVar2._0_1_ = (pSVar3->_2).rank;
        uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar4 = (pSVar3->_1).interfaceOffsets;
          lVar15 = 0;
          do {
            if (*(long *)((long)&pIVar4->interfaceType + lVar15) == TypeInfo_ISetSettingsContainer) {
              pVVar9 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar15);
              goto label_04465328;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar15);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_ISetSettingsContainer,0);
label_04465328:
        lVar15 = (*pVVar9->methodPtr)();
        pSVar14 = pSVar11;
        if ((lVar15 != 0) && (*(long *)(lVar15 + 0x20) != 0)) {
          puVar10 = (undefined8 *)(*(long *)(lVar15 + 0x20) + 0x18);
          goto label_04465343;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae7b9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
        il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
        il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
        g_data_057ae7b9 = '\x01';
      }
      if ((*(System_String_o **)(TypeInfo_AottgSkinSetActions + 0xb8))->klass == (System_String_c *)0x0) {
        return *(System_String_o **)(TypeInfo_AottgSkinSetActions + 0xb8);
      }
      bVar7 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return (System_String_o *)CONCAT44(extraout_var,bVar7);
      }
      pSVar11 = *(System_String_o **)(TypeInfo_AottgSkinSetActions + 0xb8);
      iVar8 = *(int *)&pSVar11->monitor;
      if (iVar8 == 1) {
        pSVar3 = pSVar11->klass;
        if (pSVar3 == (System_String_c *)0x0) goto label_04465958;
        pvVar5 = (pSVar3->_1).image;
        if ((ulong)*(ushort *)((long)pvVar5 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)((long)pvVar5 + 0xb0) + lVar15) == TypeInfo_ISetSettingsContainer) {
              puVar10 = (undefined8 *)
                        ((long)pvVar5 +
                        (long)(*(int *)(*(long *)((long)pvVar5 + 0xb0) + 8 + lVar15) + 8) * 0x10 + 0x138);
              goto label_04465570;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)((long)pvVar5 + 0x12e) << 4 != lVar15);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar3,TypeInfo_ISetSettingsContainer,8);
label_04465570:
        cVar6 = (*(code *)*puVar10)(pSVar3,puVar10[1]);
        if (cVar6 != '\0') {
          plVar13 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
          if (plVar13 != (long *)0x0) {
            lVar15 = *plVar13;
            if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
              lVar16 = 0;
              do {
                if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_ISetSettingsContainer) {
                  puVar10 = (undefined8 *)
                            ((long)*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) * 0x10 + lVar15 + 0x138);
                  goto label_04465924;
                }
                lVar16 = lVar16 + 0x10;
              } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
            }
            puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_ISetSettingsContainer,0);
label_04465924:
            lVar15 = (*(code *)*puVar10)(plVar13,puVar10[1]);
            if ((lVar15 != 0) &&
               (*(Settings_TypedSetting_T__o **)(lVar15 + 0x20) != (Settings_TypedSetting_T__o *)0x0)) {
              Settings_TypedSetting_object___set_Value
                        (*(Settings_TypedSetting_T__o **)(lVar15 + 0x20),(Il2CppObject *)pSVar14,MethodInfo_Void_set_Value)
              ;
              return extraout_RAX_00;
            }
          }
          goto label_04465958;
        }
        pSVar11 = *(System_String_o **)(TypeInfo_AottgSkinSetActions + 0xb8);
        iVar8 = *(int *)&pSVar11->monitor;
label_044655ef:
        if (iVar8 != 2) {
          return pSVar11;
        }
        pSVar3 = pSVar11->klass;
        if (pSVar3 == (System_String_c *)0x0) goto label_04465958;
        pvVar5 = (pSVar3->_1).image;
        if ((ulong)*(ushort *)((long)pvVar5 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)((long)pvVar5 + 0xb0) + lVar15) == TypeInfo_ISetSettingsContainer) {
              puVar10 = (undefined8 *)
                        ((long)pvVar5 +
                        (long)(*(int *)(*(long *)((long)pvVar5 + 0xb0) + 8 + lVar15) + 5) * 0x10 + 0x138);
              goto label_0446575f;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)((long)pvVar5 + 0x12e) << 4 != lVar15);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar3,TypeInfo_ISetSettingsContainer,5);
label_0446575f:
        (*(code *)*puVar10)(pSVar3,pSVar14,puVar10[1]);
        plVar13 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
        if (plVar13 == (long *)0x0) goto label_04465958;
        lVar15 = *plVar13;
        if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_ISetSettingsContainer) {
              puVar10 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) + 1) * 0x10 + lVar15 + 0x138);
              goto label_044657e9;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_ISetSettingsContainer,1);
label_044657e9:
        pSVar12 = (Settings_TypedSetting_int__o *)(*(code *)*puVar10)(plVar13,puVar10[1]);
        plVar13 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
        if (plVar13 == (long *)0x0) goto label_04465958;
        lVar15 = *plVar13;
        if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_ISetSettingsContainer) {
              puVar10 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) + 2) * 0x10 + lVar15 + 0x138);
              goto label_04465869;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_ISetSettingsContainer,2);
label_04465869:
        plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
        if (plVar13 == (long *)0x0) goto label_04465958;
        lVar15 = *plVar13;
        if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
          lVar16 = *(long *)(lVar15 + 0xb0);
          lVar17 = 0;
          do {
            if (*(long *)(lVar16 + lVar17) == TypeInfo_IListSetting) goto label_044658ce;
            lVar17 = lVar17 + 0x10;
          } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar17);
        }
      }
      else {
        if (iVar8 != 0) goto label_044655ef;
        pSVar3 = pSVar11->klass;
        if (pSVar3 == (System_String_c *)0x0) goto label_04465958;
        pvVar5 = (pSVar3->_1).image;
        if ((ulong)*(ushort *)((long)pvVar5 + 0x12e) != 0) {
          lVar15 = 0;
          do {
            if (*(long *)(*(long *)((long)pvVar5 + 0xb0) + lVar15) == TypeInfo_ISetSettingsContainer) {
              puVar10 = (undefined8 *)
                        ((long)pvVar5 +
                        (long)(*(int *)(*(long *)((long)pvVar5 + 0xb0) + 8 + lVar15) + 4) * 0x10 + 0x138);
              goto label_044654df;
            }
            lVar15 = lVar15 + 0x10;
          } while ((ulong)*(ushort *)((long)pvVar5 + 0x12e) << 4 != lVar15);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar3,TypeInfo_ISetSettingsContainer,4);
label_044654df:
        (*(code *)*puVar10)(pSVar3,pSVar14,puVar10[1]);
        plVar13 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
        if (plVar13 == (long *)0x0) goto label_04465958;
        lVar15 = *plVar13;
        if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_ISetSettingsContainer) {
              puVar10 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) + 1) * 0x10 + lVar15 + 0x138);
              goto label_0446566d;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_ISetSettingsContainer,1);
label_0446566d:
        pSVar12 = (Settings_TypedSetting_int__o *)(*(code *)*puVar10)(plVar13,puVar10[1]);
        plVar13 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
        if (plVar13 == (long *)0x0) goto label_04465958;
        lVar15 = *plVar13;
        if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_ISetSettingsContainer) {
              puVar10 = (undefined8 *)
                        ((long)(*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) + 2) * 0x10 + lVar15 + 0x138);
              goto label_044656e9;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_ISetSettingsContainer,2);
label_044656e9:
        plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
        if (plVar13 == (long *)0x0) goto label_04465958;
        lVar15 = *plVar13;
        if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
          lVar16 = *(long *)(lVar15 + 0xb0);
          lVar17 = 0;
          do {
            if (*(long *)(lVar16 + lVar17) == TypeInfo_IListSetting) goto label_044658ce;
            lVar17 = lVar17 + 0x10;
          } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar17);
        }
      }
      puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IListSetting,0);
      goto label_044658e1;
    }
  }
  puVar10 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
label_04465343:
  return (System_String_o *)*puVar10;
label_044658ce:
  puVar10 = (undefined8 *)((long)*(int *)(lVar16 + 8 + lVar17) * 0x10 + lVar15 + 0x138);
label_044658e1:
  iVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
  if (pSVar12 != (Settings_TypedSetting_int__o *)0x0) {
    Settings_TypedSetting_int___set_Value(pSVar12,iVar8 + -1,MethodInfo_Void_set_Value);
    return extraout_RAX;
  }
label_04465958:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7ba = '\x01';
  }
  pSVar14 = *(System_String_o **)(TypeInfo_AottgSkinSetActions + 0xb8);
  pSVar3 = pSVar14->klass;
  if (pSVar3 != (System_String_c *)0x0) {
    pvVar5 = (pSVar3->_1).image;
    if ((ulong)*(ushort *)((long)pvVar5 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)((long)pvVar5 + 0xb0) + lVar15) == TypeInfo_ISetSettingsContainer) {
          puVar10 = (undefined8 *)
                    ((long)pvVar5 +
                    (long)(*(int *)(*(long *)((long)pvVar5 + 0xb0) + 8 + lVar15) + 7) * 0x10 + 0x138);
          goto label_04465a19;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)((long)pvVar5 + 0x12e) << 4 != lVar15);
    }
    puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(pSVar3,TypeInfo_ISetSettingsContainer,7);
label_04465a19:
    pSVar14 = (System_String_o *)(*(code *)*puVar10)(pSVar3,puVar10[1]);
    if ((char)pSVar14 != '\0') {
      plVar13 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
      if (plVar13 != (long *)0x0) {
        lVar15 = *plVar13;
        if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
          lVar16 = 0;
          do {
            if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_ISetSettingsContainer) {
              puVar10 = (undefined8 *)
                        (lVar15 + (long)(*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) + 6) * 0x10 + 0x138);
              goto label_04465a9b;
            }
            lVar16 = lVar16 + 0x10;
          } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_ISetSettingsContainer,6);
label_04465a9b:
        (*(code *)*puVar10)(plVar13,puVar10[1]);
        plVar13 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
        if (plVar13 != (long *)0x0) {
          lVar15 = *plVar13;
          if ((ulong)*(ushort *)(lVar15 + 0x12e) != 0) {
            lVar16 = 0;
            do {
              if (*(long *)(*(long *)(lVar15 + 0xb0) + lVar16) == TypeInfo_ISetSettingsContainer) {
                puVar10 = (undefined8 *)
                          ((long)(*(int *)(*(long *)(lVar15 + 0xb0) + 8 + lVar16) + 1) * 0x10 + lVar15 + 0x138
                          );
                goto label_04465b19;
              }
              lVar16 = lVar16 + 0x10;
            } while ((ulong)*(ushort *)(lVar15 + 0x12e) << 4 != lVar16);
          }
          puVar10 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_ISetSettingsContainer,1);
label_04465b19:
          pSVar12 = (Settings_TypedSetting_int__o *)(*(code *)*puVar10)(plVar13);
          if (pSVar12 != (Settings_TypedSetting_int__o *)0x0) {
            Settings_TypedSetting_int___set_Value(pSVar12,0,MethodInfo_Void_set_Value);
            return extraout_RAX_01;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae7bc == '\0') {
        il2cpp_runtime_helper_023445d0(&"Delete Skin Set");
        g_data_057ae7bc = '\x01';
      }
      return "Delete Skin Set";
    }
  }
  return pSVar14;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$ApplyName
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__ApplyName (System_String_o* name, const MethodInfo* method);
// 0x4465360

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__ApplyName(System_String_o *name,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  int iVar3;
  undefined8 *puVar4;
  Settings_TypedSetting_int__o *pSVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (g_data_057ae7b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    g_data_057ae7b9 = '\x01';
  }
  if (**(long **)(TypeInfo_AottgSkinSetActions + 0xb8) == 0) {
    return;
  }
  bVar2 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  plVar6 = *(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
  iVar3 = (int)plVar6[1];
  if (iVar3 == 1) {
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) goto label_04465958;
    lVar7 = *plVar6;
    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar8 = 0;
      do {
        if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar8) == TypeInfo_ISetSettingsContainer) {
          puVar4 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar8) + 8) * 0x10 + lVar7 + 0x138);
          goto label_04465570;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar8);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_ISetSettingsContainer,8);
label_04465570:
    cVar1 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if (cVar1 != '\0') {
      plVar6 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
          lVar8 = 0;
          do {
            if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar8) == TypeInfo_ISetSettingsContainer) {
              puVar4 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar8) * 0x10 + lVar7 + 0x138);
              goto label_04465924;
            }
            lVar8 = lVar8 + 0x10;
          } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar8);
        }
        puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_ISetSettingsContainer,0);
label_04465924:
        lVar7 = (*(code *)*puVar4)(plVar6,puVar4[1]);
        if ((lVar7 != 0) &&
           (*(Settings_TypedSetting_T__o **)(lVar7 + 0x20) != (Settings_TypedSetting_T__o *)0x0)) {
          Settings_TypedSetting_object___set_Value
                    (*(Settings_TypedSetting_T__o **)(lVar7 + 0x20),(Il2CppObject *)name,MethodInfo_Void_set_Value);
          return;
        }
      }
      goto label_04465958;
    }
    plVar6 = *(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
    iVar3 = (int)plVar6[1];
label_044655ef:
    if (iVar3 != 2) {
      return;
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) goto label_04465958;
    lVar7 = *plVar6;
    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar8 = 0;
      do {
        if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar8) == TypeInfo_ISetSettingsContainer) {
          puVar4 = (undefined8 *)
                   (lVar7 + (long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar8) + 5) * 0x10 + 0x138);
          goto label_0446575f;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar8);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_ISetSettingsContainer,5);
label_0446575f:
    (*(code *)*puVar4)(plVar6,name,puVar4[1]);
    plVar6 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
    if (plVar6 == (long *)0x0) goto label_04465958;
    lVar7 = *plVar6;
    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar8 = 0;
      do {
        if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar8) == TypeInfo_ISetSettingsContainer) {
          puVar4 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar8) + 1) * 0x10 + lVar7 + 0x138);
          goto label_044657e9;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar8);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_ISetSettingsContainer,1);
label_044657e9:
    pSVar5 = (Settings_TypedSetting_int__o *)(*(code *)*puVar4)(plVar6,puVar4[1]);
    plVar6 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
    if (plVar6 == (long *)0x0) goto label_04465958;
    lVar7 = *plVar6;
    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar8 = 0;
      do {
        if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar8) == TypeInfo_ISetSettingsContainer) {
          puVar4 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar8) + 2) * 0x10 + lVar7 + 0x138);
          goto label_04465869;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar8);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_ISetSettingsContainer,2);
label_04465869:
    plVar6 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
    if (plVar6 == (long *)0x0) goto label_04465958;
    lVar7 = *plVar6;
    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar8 = *(long *)(lVar7 + 0xb0);
      lVar9 = 0;
      do {
        if (*(long *)(lVar8 + lVar9) == TypeInfo_IListSetting) goto label_044658ce;
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar9);
    }
  }
  else {
    if (iVar3 != 0) goto label_044655ef;
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) goto label_04465958;
    lVar7 = *plVar6;
    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar8 = 0;
      do {
        if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar8) == TypeInfo_ISetSettingsContainer) {
          puVar4 = (undefined8 *)
                   (lVar7 + (long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar8) + 4) * 0x10 + 0x138);
          goto label_044654df;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar8);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_ISetSettingsContainer,4);
label_044654df:
    (*(code *)*puVar4)(plVar6,name,puVar4[1]);
    plVar6 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
    if (plVar6 == (long *)0x0) goto label_04465958;
    lVar7 = *plVar6;
    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar8 = 0;
      do {
        if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar8) == TypeInfo_ISetSettingsContainer) {
          puVar4 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar8) + 1) * 0x10 + lVar7 + 0x138);
          goto label_0446566d;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar8);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_ISetSettingsContainer,1);
label_0446566d:
    pSVar5 = (Settings_TypedSetting_int__o *)(*(code *)*puVar4)(plVar6,puVar4[1]);
    plVar6 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
    if (plVar6 == (long *)0x0) goto label_04465958;
    lVar7 = *plVar6;
    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar8 = 0;
      do {
        if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar8) == TypeInfo_ISetSettingsContainer) {
          puVar4 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar8) + 2) * 0x10 + lVar7 + 0x138);
          goto label_044656e9;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar8);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_ISetSettingsContainer,2);
label_044656e9:
    plVar6 = (long *)(*(code *)*puVar4)(plVar6,puVar4[1]);
    if (plVar6 == (long *)0x0) goto label_04465958;
    lVar7 = *plVar6;
    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar8 = *(long *)(lVar7 + 0xb0);
      lVar9 = 0;
      do {
        if (*(long *)(lVar8 + lVar9) == TypeInfo_IListSetting) goto label_044658ce;
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar9);
    }
  }
  puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_IListSetting,0);
label_044658e1:
  iVar3 = (*(code *)*puVar4)(plVar6,puVar4[1]);
  if (pSVar5 != (Settings_TypedSetting_int__o *)0x0) {
    Settings_TypedSetting_int___set_Value(pSVar5,iVar3 + -1,MethodInfo_Void_set_Value);
    return;
  }
label_04465958:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae7ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7ba = '\x01';
  }
  plVar6 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
      lVar8 = 0;
      do {
        if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar8) == TypeInfo_ISetSettingsContainer) {
          puVar4 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar8) + 7) * 0x10 + lVar7 + 0x138);
          goto label_04465a19;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar8);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_ISetSettingsContainer,7);
label_04465a19:
    cVar1 = (*(code *)*puVar4)(plVar6,puVar4[1]);
    if (cVar1 != '\0') {
      plVar6 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
      if (plVar6 != (long *)0x0) {
        lVar7 = *plVar6;
        if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
          lVar8 = 0;
          do {
            if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar8) == TypeInfo_ISetSettingsContainer) {
              puVar4 = (undefined8 *)
                       (lVar7 + (long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar8) + 6) * 0x10 + 0x138);
              goto label_04465a9b;
            }
            lVar8 = lVar8 + 0x10;
          } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar8);
        }
        puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_ISetSettingsContainer,6);
label_04465a9b:
        (*(code *)*puVar4)(plVar6,puVar4[1]);
        plVar6 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
        if (plVar6 != (long *)0x0) {
          lVar7 = *plVar6;
          if ((ulong)*(ushort *)(lVar7 + 0x12e) != 0) {
            lVar8 = 0;
            do {
              if (*(long *)(*(long *)(lVar7 + 0xb0) + lVar8) == TypeInfo_ISetSettingsContainer) {
                puVar4 = (undefined8 *)
                         ((long)(*(int *)(*(long *)(lVar7 + 0xb0) + 8 + lVar8) + 1) * 0x10 + lVar7 + 0x138);
                goto label_04465b19;
              }
              lVar8 = lVar8 + 0x10;
            } while ((ulong)*(ushort *)(lVar7 + 0x12e) << 4 != lVar8);
          }
          puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar6,TypeInfo_ISetSettingsContainer,1);
label_04465b19:
          pSVar5 = (Settings_TypedSetting_int__o *)(*(code *)*puVar4)(plVar6);
          if (pSVar5 != (Settings_TypedSetting_int__o *)0x0) {
            Settings_TypedSetting_int___set_Value(pSVar5,0,MethodInfo_Void_set_Value);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae7bc == '\0') {
        il2cpp_runtime_helper_023445d0(&"Delete Skin Set");
        g_data_057ae7bc = '\x01';
      }
      return;
    }
  }
  return;
label_044658ce:
  puVar4 = (undefined8 *)((long)*(int *)(lVar8 + 8 + lVar9) * 0x10 + lVar7 + 0x138);
  goto label_044658e1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$DeleteSelected
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__DeleteSelected (const MethodInfo* method);
// 0x4465960

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__DeleteSelected(MethodInfo *method)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  Settings_TypedSetting_int__o *__this;
  long lVar5;
  
  if (g_data_057ae7ba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ISetSettingsContainer);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae7ba = '\x01';
  }
  plVar1 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
      lVar5 = 0;
      do {
        if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar5) == TypeInfo_ISetSettingsContainer) {
          puVar4 = (undefined8 *)
                   ((long)(*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar5) + 7) * 0x10 + lVar2 + 0x138);
          goto label_04465a19;
        }
        lVar5 = lVar5 + 0x10;
      } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar5);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar1,TypeInfo_ISetSettingsContainer,7);
label_04465a19:
    cVar3 = (*(code *)*puVar4)(plVar1,puVar4[1]);
    if (cVar3 != '\0') {
      plVar1 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
      if (plVar1 != (long *)0x0) {
        lVar2 = *plVar1;
        if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
          lVar5 = 0;
          do {
            if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar5) == TypeInfo_ISetSettingsContainer) {
              puVar4 = (undefined8 *)
                       (lVar2 + (long)(*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar5) + 6) * 0x10 + 0x138);
              goto label_04465a9b;
            }
            lVar5 = lVar5 + 0x10;
          } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar5);
        }
        puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar1,TypeInfo_ISetSettingsContainer,6);
label_04465a9b:
        (*(code *)*puVar4)(plVar1,puVar4[1]);
        plVar1 = (long *)**(long **)(TypeInfo_AottgSkinSetActions + 0xb8);
        if (plVar1 != (long *)0x0) {
          lVar2 = *plVar1;
          if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
            lVar5 = 0;
            do {
              if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar5) == TypeInfo_ISetSettingsContainer) {
                puVar4 = (undefined8 *)
                         ((long)(*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar5) + 1) * 0x10 + lVar2 + 0x138);
                goto label_04465b19;
              }
              lVar5 = lVar5 + 0x10;
            } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar5);
          }
          puVar4 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar1,TypeInfo_ISetSettingsContainer,1);
label_04465b19:
          __this = (Settings_TypedSetting_int__o *)(*(code *)*puVar4)(plVar1);
          if (__this != (Settings_TypedSetting_int__o *)0x0) {
            Settings_TypedSetting_int___set_Value(__this,0,MethodInfo_Void_set_Value);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae7bc == '\0') {
        il2cpp_runtime_helper_023445d0(&"Delete Skin Set");
        g_data_057ae7bc = '\x01';
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenName
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, int32_t operation, const MethodInfo* method);
// 0x4464f00

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Settings_ISetSettingsContainer_o *settings,int32_t operation,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae7bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgSkinSetActions);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&"setting-skin-set-name");
    g_data_057ae7bb = '\x01';
    method = extraout_RDX;
  }
  if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
    **(undefined8 **)(TypeInfo_AottgSkinSetActions + 0xb8) = settings;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgSkinSetActions + 0xb8),settings,method);
    *(int32_t *)(*(long *)(TypeInfo_AottgSkinSetActions + 0xb8) + 8) = operation;
    if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
      pIVar1 = UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (pIVar1[8].monitor != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (pIVar1[8].monitor,"setting-skin-set-name",1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}



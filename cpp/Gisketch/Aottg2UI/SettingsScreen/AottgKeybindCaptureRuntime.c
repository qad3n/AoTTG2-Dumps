// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindCaptureRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__RegisterFactory (const MethodInfo* method);
// 0x445e110

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__RegisterFactory(MethodInfo *method)

{
  uint index;
  int index_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this_00;
  long lVar2;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  Il2CppObject *pIVar7;
  System_Action_GisketchActionContext__o *pSVar8;
  System_Action_GisketchActionContext__o *pSVar9;
  Settings_InputKey_o *pSVar10;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_02;
  System_String_o *text;
  long *plVar11;
  undefined1 *puVar12;
  undefined8 unaff_RBP;
  System_String_o *pSVar13;
  System_Action_GisketchActionContext__o *pSVar14;
  System_Action_GisketchActionContext__o *x;
  int32_t iVar15;
  System_Collections_Generic_List_object__o *pSVar16;
  System_String_o *in_R8;
  System_String_o *in_R9;
  MethodInfo *in_stack_ffffffffffffff70;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (g_data_057ae769 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Build);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"AottgKeybindCaptureRuntime");
    g_data_057ae769 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8)
  ;
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this_00,"AottgKeybindCaptureRuntime",factory,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae765 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae765 = '\x01';
  }
  lVar2 = **(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
  if (lVar2 != 0) {
    index = *(uint *)(*(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 1);
    pSVar14 = (System_Action_GisketchActionContext__o *)(ulong)index;
    if (-1 < (int)index) {
      pSVar16 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x10);
      if (pSVar16 != (System_Collections_Generic_List_object__o *)0x0) {
        if ((pSVar16->fields)._size <= (int)index) {
          return;
        }
        pIVar7 = System_Collections_Generic_List_object___get_Item(pSVar16,index,MethodInfo_InputKey_get_Item);
        if (pIVar7 != (Il2CppObject *)0x0) {
          vtableDispatch = pIVar7->klass->vtable[3].methodPtr;
          (*vtableDispatch)(pIVar7,pIVar7->klass->vtable[3].method,vtableDispatch);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae762 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Unbind);
        il2cpp_runtime_helper_023445d0(&"Unbind");
        il2cpp_runtime_helper_023445d0(&"Cancel");
        g_data_057ae762 = '\x01';
      }
      pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      pSVar9 = pSVar8;
      System_Action_GisketchActionContext____ctor();
      if (pSVar14 != (System_Action_GisketchActionContext__o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet_3a5fe60
                  ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)pSVar14,"Cancel",pSVar8,(MethodInfo *)0x0
                  );
        pSVar9 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x445e339;
        System_Action_GisketchActionContext____ctor();
        pSVar13 = "Unbind";
        pSVar8 = (System_Action_GisketchActionContext__o *)0x0;
        __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pSVar14->fields).method_ptr;
        if (__this == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          pGVar1 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pSVar14->fields).invoke_impl;
          if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                               (pGVar1,(System_String_o *)(pSVar14->fields).m_target,pSVar8,(MethodInfo *)0x0)
            ;
          }
          Gisketch_Aottg2UI_Code_AottgUi__Button
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)pSVar14,(int32_t)pSVar13,text,pSVar6,in_R8,in_R9,
                     enter,(System_String_o *)factory,in_stack_ffffffffffffff70);
          return;
        }
        pGVar1 = (__this->fields)._actions;
        if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                             (pGVar1,(__this->fields)._ownerId,pSVar9,(MethodInfo *)0x0);
        }
        Gisketch_Aottg2UI_Code_AottgUi__Button
                  (__this,0,pSVar13,pSVar6,(System_String_o *)0x0,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                   (MethodInfo *)factory);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      puVar12 = &stack0xffffffffffffffb0;
      if (g_data_057ae763 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
        g_data_057ae763 = '\x01';
      }
      plVar11 = &TypeInfo_AottgKeybindCaptureDialog;
      pSVar10 = *(Settings_InputKey_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x20);
      if (pSVar10 != (Settings_InputKey_o *)0x0) {
        x = (System_Action_GisketchActionContext__o *)0x0;
        bVar5 = Settings_InputKey__ReadNextInput(pSVar10,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x20);
          if (pSVar13 == (System_String_o *)0x0) {
            pSVar6 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
          }
          else {
            plVar11 = (long *)pSVar8;
            pSVar6 = (System_String_o *)
                     (*(pSVar13->klass->vtable)._3_ToString.methodPtr)
                               (pSVar13,(pSVar13->klass->vtable)._3_ToString.method);
            puVar12 = &stack0xffffffffffffffc8;
            x = pSVar9;
            pSVar13 = pSVar6;
            pSVar9 = pSVar14;
          }
          *(System_Action_GisketchActionContext__o **)(puVar12 + -8) = pSVar9;
          *(long **)(puVar12 + -0x10) = plVar11;
          *(System_String_o **)(puVar12 + -0x18) = pSVar6;
          if (g_data_057ae767 == '\0') {
            *(undefined8 *)(puVar12 + -0x20) = 0x445e40f;
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            *(undefined8 *)(puVar12 + -0x20) = 0x445e41b;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            *(undefined8 *)(puVar12 + -0x20) = 0x445e427;
            il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
            g_data_057ae767 = '\x01';
          }
          lVar2 = **(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
          if ((lVar2 != 0) && (index_00 = (int)(*(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8))[1], -1 < index_00)) {
            pSVar16 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x10);
            if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
label_0445e48c:
              iVar15 = (int32_t)pSVar16;
              *(undefined8 *)(puVar12 + -0x20) = 0x445e491;
              il2cpp_runtime_helper_022b2c90();
              *(System_Action_GisketchActionContext__o **)(puVar12 + -0x20) = x;
              if (g_data_057ae764 == '\0') {
                *(undefined8 *)(puVar12 + -0x28) = 0x445e4b8;
                il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
                g_data_057ae764 = '\x01';
              }
              *(undefined8 *)(puVar12 + -0x28) = 0x445e4c8;
              Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar15,(MethodInfo *)0x0);
              if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar15) {
                *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
              }
              return;
            }
            if (index_00 < (pSVar16->fields)._size) {
              *(undefined8 *)(puVar12 + -0x20) = 0x445e46b;
              pSVar10 = (Settings_InputKey_o *)
                        System_Collections_Generic_List_object___get_Item(pSVar16,index_00,MethodInfo_InputKey_get_Item);
              if (pSVar10 == (Settings_InputKey_o *)0x0) goto label_0445e48c;
              *(undefined8 *)(puVar12 + -0x20) = 0x445e47d;
              Settings_InputKey__LoadFromString(pSVar10,pSVar13,(MethodInfo *)0x0);
            }
          }
          uVar3 = *(undefined8 *)(puVar12 + -0x10);
          uVar4 = *(undefined8 *)(puVar12 + -8);
          *(undefined8 *)(puVar12 + -8) = unaff_RBP;
          *(undefined8 *)(puVar12 + -0x10) = uVar4;
          *(undefined8 *)(puVar12 + -0x18) = uVar3;
          if (g_data_057ae768 == '\0') {
            *(undefined8 *)(puVar12 + -0x20) = 0x445e56c;
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            *(undefined8 *)(puVar12 + -0x20) = 0x445e578;
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
            *(undefined8 *)(puVar12 + -0x20) = 0x445e584;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae768 = '\x01';
          }
          iVar15 = *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18);
          if (g_data_057ae764 == '\0') {
            *(undefined8 *)(puVar12 + -0x20) = 0x445e5b4;
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            g_data_057ae764 = '\x01';
          }
          *(undefined8 *)(puVar12 + -0x20) = 0x445e5c4;
          Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar15,(MethodInfo *)0x0);
          if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar15) {
            *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar12 + -0x20) = 0x445e5f2;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar12 + -0x20) = 0x445e5fe;
          pSVar14 = x;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (x == (System_Action_GisketchActionContext__o *)0x0) {
              *(undefined8 *)(puVar12 + -0x20) = 0x445e651;
              il2cpp_runtime_helper_022b2c90();
              System_Object___ctor((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
              return;
            }
            *(undefined8 *)(puVar12 + -0x20) = 0x445e619;
            __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                        UnityEngine_GameObject__GetComponentInParent_object_
                                  ((UnityEngine_GameObject_o *)x,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
            if (__this_02 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              __this_01 = (__this_02->fields)._Theme_k__BackingField;
              if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                *(undefined8 *)(puVar12 + -0x20) = 0x445e639;
                Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                          ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,1,
                           (MethodInfo *)0x0);
              }
              Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_02,(MethodInfo *)0x0);
              return;
            }
          }
          return;
        }
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Build
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Build (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x445e670

bool_conflict
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Build
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint in_EAX;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  undefined4 uVar3;
  int32_t *result;
  MethodInfo_255A020 *pMVar4;
  System_String_o *s;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (g_data_057ae76a == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae76a = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    s = (System_String_o *)0x0;
  }
  else {
    s = (node->fields).value;
  }
  result = (int32_t *)((long)&uStack_18 + 4);
  System_Int32__TryParse(s,result,(MethodInfo *)0x0);
  uVar3 = SUB84(result,0);
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pMVar4 = MethodInfo_AottgKeybindCaptureRuntime_AddComponent_AottgKeybindCapt;
    pIVar2 = UnityEngine_GameObject__AddComponent_object_(go,MethodInfo_AottgKeybindCaptureRuntime_AddComponent_AottgKeybindCapt);
    uVar3 = SUB84(pMVar4,0);
    s = (System_String_o *)go;
    if (pIVar2 != (Il2CppObject *)0x0) {
      *(undefined4 *)&pIVar2[2].klass = uStack_18._4_4_;
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar2 >> 8),1);
    }
  }
  bVar1 = il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&s[1].monitor = uVar3;
  return bVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Setup (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, int32_t token, const MethodInfo* method);
// 0x445e6f0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Setup
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *__this,int32_t token,
               MethodInfo *method)

{
  (__this->fields)._token = token;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Update
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Update (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, const MethodInfo* method);
// 0x445e700

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Update
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  bool_conflict bVar3;
  Settings_InputKey_o *pSVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  UnityEngine_Object_o *x;
  System_String_o *serializedKey;
  int32_t iVar5;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_Object_o *__this_03;
  long *plVar6;
  
  iVar1 = (__this->fields)._skipFrames;
  if (iVar1 < 1) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (g_data_057ae763 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
      g_data_057ae763 = '\x01';
    }
    pSVar4 = *(Settings_InputKey_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x20);
    if (pSVar4 != (Settings_InputKey_o *)0x0) {
      bVar3 = Settings_InputKey__ReadNextInput(pSVar4,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        plVar6 = *(long **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x20);
        if (plVar6 == (long *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          lVar2 = plVar6[4];
          if (g_data_057ae764 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            g_data_057ae764 = '\x01';
          }
          Gisketch_Aottg2UI_Actions_GisketchInputCapture__End((int32_t)lVar2,(MethodInfo *)0x0);
          if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == (int32_t)lVar2) {
            *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
          }
          return;
        }
        serializedKey =
             (System_String_o *)(**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        if (g_data_057ae767 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
          il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
          il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
          g_data_057ae767 = '\x01';
        }
        lVar2 = **(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
        if ((lVar2 != 0) && (iVar1 = (int)(*(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8))[1], -1 < iVar1)) {
          __this_02 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x10);
          if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
label_0445e48c:
            iVar5 = (int32_t)__this_02;
            il2cpp_runtime_helper_022b2c90();
            if (g_data_057ae764 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
              g_data_057ae764 = '\x01';
            }
            Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar5,(MethodInfo *)0x0);
            if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar5) {
              *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
            }
            return;
          }
          if (iVar1 < (__this_02->fields)._size) {
            pSVar4 = (Settings_InputKey_o *)
                     System_Collections_Generic_List_object___get_Item(__this_02,iVar1,MethodInfo_InputKey_get_Item);
            if (pSVar4 == (Settings_InputKey_o *)0x0) goto label_0445e48c;
            Settings_InputKey__LoadFromString(pSVar4,serializedKey,(MethodInfo *)0x0);
          }
        }
        if (g_data_057ae768 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057ae768 = '\x01';
        }
        iVar5 = *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18);
        if (g_data_057ae764 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
          g_data_057ae764 = '\x01';
        }
        Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar5,(MethodInfo *)0x0);
        if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar5) {
          *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_03 = x;
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          if (x == (UnityEngine_Object_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
            return;
          }
          __this_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                      UnityEngine_GameObject__GetComponentInParent_object_
                                ((UnityEngine_GameObject_o *)x,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
          if (__this_01 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
            __this_00 = (__this_01->fields)._Theme_k__BackingField;
            if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                        ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,(MethodInfo *)0x0)
              ;
            }
            Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_01,(MethodInfo *)0x0);
            return;
          }
        }
        return;
      }
    }
  }
  else {
    (__this->fields)._skipFrames = iVar1 + -1;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__OnDestroy (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, const MethodInfo* method);
// 0x445e7a0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__OnDestroy
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *__this,MethodInfo *method)

{
  int32_t token;
  
  token = (__this->fields)._token;
  if (g_data_057ae764 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    g_data_057ae764 = '\x01';
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(token,(MethodInfo *)0x0);
  if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == token) {
    *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, const MethodInfo* method);
// 0x445e7f0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._skipFrames = 2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



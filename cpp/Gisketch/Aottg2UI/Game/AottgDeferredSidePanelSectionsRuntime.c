// Type: Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgDeferredSidePanelSectionsRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12___ctor (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4534ee0

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12___ctor
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x4535000

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__MoveNext (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x4535010

bool_conflict
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__MoveNext
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
          MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *root;
  UnityEngine_Object_o *obj;
  undefined7 uVar5;
  int iVar6;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *x;
  
  x = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)__this;
  if (g_data_057aeed5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenBuilder);
    x = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeed5 = '\x01';
  }
  iVar6 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  uVar5 = (undefined7)((ulong)__this >> 8);
  if (iVar6 == 2) {
    (__this->fields).__1__state = -1;
    iVar6 = (__this->fields)._i_5__3 + 1;
    (__this->fields)._i_5__3 = iVar6;
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
      pGVar2 = (__this_00->fields)._nodes;
joined_r0x045350ff:
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        if ((int)pGVar2->max_length <= iVar6) {
label_045351c5:
          obj = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__Destroy_4e01c60(obj,(MethodInfo *)0x0);
          return 0;
        }
        x = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)(__this->fields)._parent_5__2;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') goto label_045351c5;
        pGVar2 = (__this_00->fields)._nodes;
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          uVar1 = (__this->fields)._i_5__3;
          if (uVar1 < (uint)pGVar2->max_length) {
            node = pGVar2->m_Items[(int)uVar1];
            method_00 = (MethodInfo *)(__this->fields)._parent_5__2;
            context = (__this_00->fields)._context;
            view = (__this_00->fields)._view;
            if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
                      (node,(UnityEngine_Transform_o *)method_00,context,view,(MethodInfo *)0x0);
            root = Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__SettleRoot
                             (__this_00,method_00);
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)0x0;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
            (__this->fields).__1__state = 2;
            return (bool_conflict)CONCAT71(uVar5,1);
          }
          goto label_04535210;
        }
      }
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        (__this->fields).__1__state = -1;
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71(uVar5,1);
      }
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
      iVar6 = 0;
      x = __this_00;
      pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
        x = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)&(__this->fields)._parent_5__2;
        (__this->fields)._parent_5__2 = pUVar4;
        il2cpp_runtime_helper_022b4080();
        (__this->fields)._i_5__3 = 0;
        pGVar2 = (__this_00->fields)._nodes;
        goto joined_r0x045350ff;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04535210:
  il2cpp_runtime_helper_022b2ca0();
  return (bool_conflict)(x->fields).m_CancellationTokenSource;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x4535220

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x4535230

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x4535270

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__RegisterFactory (const MethodInfo* method);
// 0x4534a00

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  char cVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar3;
  Il2CppObject *pIVar4;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this_00;
  undefined8 uVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGVar6;
  UnityEngine_Coroutine_o *pUVar7;
  Il2CppClass *view;
  Il2CppClass *pIVar8;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o **__this_01;
  MethodInfo *in_R8;
  undefined1 auVar12 [16];
  undefined8 uStack_78;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGStack_70;
  long lStack_68;
  Il2CppClass *pIStack_60;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGStack_58;
  undefined8 uStack_50;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *pGStack_48;
  
  if (g_data_057aeecf == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgDeferredSidePanelSectionsRuntime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"DeferredSidePanelSections");
    g_data_057aeecf = '\x01';
  }
  if (**(char **)(TypeInfo_AottgDeferredSidePanelSectionsRuntime + 0xb8) != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  pGVar3 = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  lVar10 = 0;
  view = (Il2CppClass *)0x0;
  pGVar6 = pGVar3;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"DeferredSidePanelSections",pGVar3,(MethodInfo *)0x0);
    **(undefined1 **)(TypeInfo_AottgDeferredSidePanelSectionsRuntime + 0xb8) = 1;
    return;
  }
  auVar12 = il2cpp_runtime_helper_022b2c90();
  context = auVar12._8_8_;
  uStack_50 = auVar12._0_8_;
  pIVar8 = view;
  pGStack_48 = pGVar3;
  if (g_data_057aeed0 == '\0') {
    pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b1c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDeferredSidePanelSectionsRuntime_AddComponent_Aottg);
    pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b28;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b34;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b40;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aeed0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b60;
    il2cpp_runtime_helper_02337ed0();
  }
  nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
  pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b6c;
  plVar11 = (long *)pGVar6;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (pGVar6 != (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)0x0) {
    pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b8f;
    pGVar3 = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)pGVar6,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534ba4;
      il2cpp_runtime_helper_02337ed0();
    }
    nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534bb0;
    plVar11 = (long *)pGVar3;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (g_data_057a694c == '\0') {
        plVar11 = &TypeInfo_Vector2;
        pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534bc9;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)0x0) goto label_04534c71;
      pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534bf8;
      UnityEngine_RectTransform__set_sizeDelta
                ((UnityEngine_RectTransform_o *)pGVar3,
                 (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                 (MethodInfo *)0x0);
    }
    pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534c0a;
    nodes = MethodInfo_LayoutElement_AddComponent_LayoutElement;
    plVar11 = (long *)pGVar6;
    pIVar4 = UnityEngine_GameObject__AddComponent_object_
                       ((UnityEngine_GameObject_o *)pGVar6,(MethodInfo_255A020 *)MethodInfo_LayoutElement_AddComponent_LayoutElement);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar8 = pIVar4->klass;
      pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534c27;
      (*pIVar8->vtable[0x1c].methodPtr)(pIVar4,1,pIVar8->vtable[0x1c].method);
      pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534c39;
      plVar11 = (long *)pGVar6;
      __this_00 = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pGVar6,MethodInfo_AottgDeferredSidePanelSectionsRuntime_AddComponent_Aottg);
      if (lVar10 == 0) {
        nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
      }
      else {
        nodes = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array **)(lVar10 + 0x110);
      }
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
        pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534c59;
        Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup
                  (__this_00,nodes,context,(Gisketch_Aottg2UI_Building_GisketchView_o *)view,in_R8);
        return;
      }
    }
  }
label_04534c71:
  pGStack_58 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534c76;
  auVar12 = il2cpp_runtime_helper_022b2c90();
  uStack_78 = auVar12._0_8_;
  puVar9 = &uStack_78;
  __this_01 = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o **)plVar11;
  pGVar3 = TypeInfo_GisketchNodeDefinition;
  pGStack_70 = pGVar6;
  lStack_68 = lVar10;
  pIStack_60 = view;
  pGStack_58 = context;
  if (g_data_057aeed1 == '\0') {
    __this_01 = &TypeInfo_GisketchNodeDefinition;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeed1 = '\x01';
    pGVar3 = TypeInfo_GisketchNodeDefinition;
  }
  TypeInfo_GisketchNodeDefinition = pGVar3;
  if (nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40();
    __this_01 = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o **)pGVar3;
  }
  if ((Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)plVar11 ==
      (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)0x0) {
    uVar5 = il2cpp_runtime_helper_022b2c90();
    pGVar6 = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)plVar11;
  }
  else {
    (((Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)plVar11)->fields).m_target = &nodes->obj;
    il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)plVar11)->fields).m_target,
                       nodes);
    (((Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)plVar11)->fields).method = auVar12._8_8_;
    il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)plVar11)->fields).method,
                       auVar12._8_8_);
    (((Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)plVar11)->fields).delegate_trampoline =
         (intptr_t)pIVar8;
    uVar5 = il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)plVar11)->fields).
                                delegate_trampoline);
    pGVar6 = pGStack_70;
    puVar9 = &uStack_50;
    __this_01 = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o **)plVar11;
    pIVar8 = pIStack_60;
  }
  while( true ) {
    *(Il2CppClass **)((long)puVar9 + -8) = pIVar8;
    *(Gisketch_Aottg2UI_Building_GisketchComponentFactory_o **)((long)puVar9 + -0x10) = pGVar6;
    *(undefined8 *)((long)puVar9 + -0x18) = uVar5;
    if (g_data_057aeed2 == '\0') {
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534d3c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      g_data_057aeed2 = '\x01';
    }
    if ((((Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)__this_01)->fields).extra_arg != 0) {
      return;
    }
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534e0d;
      il2cpp_runtime_helper_02337ed0();
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534e14;
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    else {
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534d6c;
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    if (cVar1 == '\0') break;
    pIVar4 = (((Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)__this_01)->fields).m_target;
    if (pIVar4 == (Il2CppObject *)0x0) {
      return;
    }
    if (pIVar4[1].monitor == (void *)0x0) {
      return;
    }
    if (g_data_057aeed3 == '\0') {
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534da1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuildDeferred_d__12);
      g_data_057aeed3 = '\x01';
    }
    *(undefined8 *)((long)puVar9 + -0x20) = 0x4534db7;
    pGVar6 = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BuildDeferred_d__12);
    *(undefined8 *)((long)puVar9 + -0x20) = 0x4534dc4;
    pGVar3 = pGVar6;
    System_Object___ctor((Il2CppObject *)pGVar6,(MethodInfo *)0x0);
    *(undefined4 *)&(pGVar6->fields).method_ptr = 0;
    if (pGVar6 != (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)0x0) {
      (pGVar6->fields).m_target = (Il2CppObject *)__this_01;
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534de4;
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).m_target,__this_01);
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534df1;
      pUVar7 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this_01,(System_Collections_IEnumerator_o *)pGVar6,
                          (MethodInfo *)0x0);
      (((Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)__this_01)->fields).extra_arg =
           (intptr_t)pUVar7;
      il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)__this_01)->fields).
                          extra_arg,pUVar7);
      return;
    }
    *(undefined8 *)((long)puVar9 + -0x20) = 0x4534e29;
    uVar5 = il2cpp_runtime_helper_022b2c90();
    pIVar8 = (Il2CppClass *)0x0;
    pGVar6 = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)__this_01;
    puVar9 = (undefined8 *)((long)puVar9 + -0x18);
    __this_01 = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o **)pGVar3;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x4534af0

bool_conflict
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildRuntime
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  char cVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_MonoBehaviour_o *pUVar4;
  Il2CppObject *pIVar5;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this;
  ulong extraout_RAX;
  ulong uVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  System_Threading_CancellationTokenSource_o *pSVar7;
  Il2CppClass *pIVar8;
  undefined8 *puVar9;
  long *plVar10;
  UnityEngine_MonoBehaviour_o **__this_00;
  UnityEngine_MonoBehaviour_o *pUVar11;
  undefined1 auVar12 [16];
  undefined8 uStack_60;
  UnityEngine_MonoBehaviour_o *pUStack_58;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_50;
  Il2CppClass *pIStack_48;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGStack_40;
  undefined1 auStack_38 [8];
  
  pIVar8 = (Il2CppClass *)view;
  if (g_data_057aeed0 == '\0') {
    pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b1c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDeferredSidePanelSectionsRuntime_AddComponent_Aottg);
    pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b28;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b34;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b40;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aeed0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b60;
    il2cpp_runtime_helper_02337ed0();
  }
  nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
  pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b6c;
  plVar10 = (long *)go;
  uVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar6 = (ulong)uVar2;
  if ((char)uVar2 != '\0') {
label_04534c59:
    return (bool_conflict)CONCAT71((int7)(uVar6 >> 8),1);
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534b8f;
    pUVar4 = (UnityEngine_MonoBehaviour_o *)UnityEngine_GameObject__GetComponent_object_(go,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534ba4;
      il2cpp_runtime_helper_02337ed0();
    }
    nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534bb0;
    plVar10 = (long *)pUVar4;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (g_data_057a694c == '\0') {
        plVar10 = &TypeInfo_Vector2;
        pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534bc9;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (pUVar4 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_04534c71;
      pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534bf8;
      UnityEngine_RectTransform__set_sizeDelta
                ((UnityEngine_RectTransform_o *)pUVar4,
                 (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                 (MethodInfo *)0x0);
    }
    pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534c0a;
    nodes = MethodInfo_LayoutElement_AddComponent_LayoutElement;
    plVar10 = (long *)go;
    pIVar5 = UnityEngine_GameObject__AddComponent_object_(go,(MethodInfo_255A020 *)MethodInfo_LayoutElement_AddComponent_LayoutElement);
    if (pIVar5 != (Il2CppObject *)0x0) {
      pIVar8 = pIVar5->klass;
      pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534c27;
      (*pIVar8->vtable[0x1c].methodPtr)(pIVar5,1,pIVar8->vtable[0x1c].method);
      pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534c39;
      plVar10 = (long *)go;
      __this = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)
               UnityEngine_GameObject__AddComponent_object_(go,MethodInfo_AottgDeferredSidePanelSectionsRuntime_AddComponent_Aottg);
      if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
      }
      else {
        nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(node->fields).steps;
      }
      if (__this != (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
        pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534c59;
        Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup(__this,nodes,context,view,method);
        uVar6 = extraout_RAX;
        goto label_04534c59;
      }
    }
  }
label_04534c71:
  pGStack_40 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x4534c76;
  auVar12 = il2cpp_runtime_helper_022b2c90();
  uStack_60 = auVar12._0_8_;
  puVar9 = &uStack_60;
  __this_00 = (UnityEngine_MonoBehaviour_o **)plVar10;
  pUVar4 = TypeInfo_GisketchNodeDefinition;
  pUStack_58 = (UnityEngine_MonoBehaviour_o *)go;
  pGStack_50 = node;
  pIStack_48 = (Il2CppClass *)view;
  pGStack_40 = context;
  if (g_data_057aeed1 == '\0') {
    __this_00 = &TypeInfo_GisketchNodeDefinition;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeed1 = '\x01';
    pUVar4 = TypeInfo_GisketchNodeDefinition;
  }
  TypeInfo_GisketchNodeDefinition = pUVar4;
  if (nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40();
    __this_00 = (UnityEngine_MonoBehaviour_o **)pUVar4;
  }
  if ((UnityEngine_MonoBehaviour_o *)plVar10 == (UnityEngine_MonoBehaviour_o *)0x0) {
    uVar6 = il2cpp_runtime_helper_022b2c90();
    pUVar4 = (UnityEngine_MonoBehaviour_o *)plVar10;
  }
  else {
    ((UnityEngine_MonoBehaviour_o *)((long)plVar10 + 0x20))->klass = (UnityEngine_MonoBehaviour_c *)nodes;
    il2cpp_runtime_helper_022b4080((UnityEngine_MonoBehaviour_o *)((long)plVar10 + 0x20),nodes);
    ((UnityEngine_MonoBehaviour_o *)((long)plVar10 + 0x20))->monitor = auVar12._8_8_;
    il2cpp_runtime_helper_022b4080(&((UnityEngine_MonoBehaviour_o *)((long)plVar10 + 0x20))->monitor,auVar12._8_8_);
    (((UnityEngine_MonoBehaviour_o *)((long)plVar10 + 0x20))->fields).m_CachedPtr = (intptr_t)pIVar8;
    uVar6 = il2cpp_runtime_helper_022b4080(&((UnityEngine_MonoBehaviour_o *)((long)plVar10 + 0x20))->fields);
    pUVar4 = pUStack_58;
    puVar9 = (undefined8 *)auStack_38;
    __this_00 = (UnityEngine_MonoBehaviour_o **)plVar10;
    pIVar8 = pIStack_48;
  }
  while( true ) {
    *(Il2CppClass **)((long)puVar9 + -8) = pIVar8;
    *(UnityEngine_MonoBehaviour_o **)((long)puVar9 + -0x10) = pUVar4;
    *(ulong *)((long)puVar9 + -0x18) = uVar6;
    if (g_data_057aeed2 == '\0') {
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534d3c;
      uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      g_data_057aeed2 = '\x01';
    }
    if ((((UnityEngine_MonoBehaviour_o *)((long)__this_00 + 0x20))->fields).m_CancellationTokenSource !=
        (System_Threading_CancellationTokenSource_o *)0x0) break;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534e0d;
      il2cpp_runtime_helper_02337ed0();
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534e14;
      uVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar1 = (char)uVar2;
    }
    else {
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534d6c;
      uVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar1 = (char)uVar2;
    }
    uVar6 = (ulong)uVar2;
    if (((cVar1 == '\0') ||
        (uVar6 = (ulong)((UnityEngine_MonoBehaviour_o *)((long)__this_00 + 0x20))->klass, uVar6 == 0)) ||
       (*(long *)(uVar6 + 0x18) == 0)) break;
    if (g_data_057aeed3 == '\0') {
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534da1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuildDeferred_d__12);
      g_data_057aeed3 = '\x01';
    }
    *(undefined8 *)((long)puVar9 + -0x20) = 0x4534db7;
    pUVar4 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BuildDeferred_d__12);
    *(undefined8 *)((long)puVar9 + -0x20) = 0x4534dc4;
    pUVar11 = pUVar4;
    System_Object___ctor((Il2CppObject *)pUVar4,(MethodInfo *)0x0);
    *(undefined4 *)&(pUVar4->fields).m_CachedPtr = 0;
    if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
      pUVar4[1].klass = (UnityEngine_MonoBehaviour_c *)__this_00;
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534de4;
      il2cpp_runtime_helper_022b4080(pUVar4 + 1,__this_00);
      *(undefined8 *)((long)puVar9 + -0x20) = 0x4534df1;
      pSVar7 = (System_Threading_CancellationTokenSource_o *)
               UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)pUVar4,
                          (MethodInfo *)0x0);
      (((UnityEngine_MonoBehaviour_o *)((long)__this_00 + 0x20))->fields).m_CancellationTokenSource = pSVar7;
      bVar3 = il2cpp_runtime_helper_022b4080(&(((UnityEngine_MonoBehaviour_o *)((long)__this_00 + 0x20))->fields).
                                  m_CancellationTokenSource,pSVar7);
      return bVar3;
    }
    *(undefined8 *)((long)puVar9 + -0x20) = 0x4534e29;
    uVar6 = il2cpp_runtime_helper_022b2c90();
    pIVar8 = (Il2CppClass *)0x0;
    pUVar4 = (UnityEngine_MonoBehaviour_o *)__this_00;
    puVar9 = (undefined8 *)((long)puVar9 + -0x18);
    __this_00 = (UnityEngine_MonoBehaviour_o **)pUVar11;
  }
  return (bool_conflict)uVar6;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x4534c80

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *__this_00;
  UnityEngine_Coroutine_o *pUVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *unaff_RBX;
  undefined1 *puVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Building_GisketchView_o *unaff_R14;
  undefined1 auStack_28 [8];
  
  puVar5 = auStack_28;
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this;
  pGVar6 = TypeInfo_GisketchNodeDefinition;
  if (g_data_057aeed1 == '\0') {
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)&TypeInfo_GisketchNodeDefinition;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeed1 = '\x01';
    pGVar6 = TypeInfo_GisketchNodeDefinition;
  }
  TypeInfo_GisketchNodeDefinition = pGVar6;
  if (nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_022b2a40();
    __this_01 = pGVar6;
  }
  if (__this == (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
    uVar3 = il2cpp_runtime_helper_022b2c90();
    unaff_RBX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this;
  }
  else {
    (__this->fields)._nodes = nodes;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._nodes,nodes);
    (__this->fields)._context = context;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._context,context);
    (__this->fields)._view = view;
    uVar3 = il2cpp_runtime_helper_022b4080(&(__this->fields)._view);
    puVar5 = (undefined1 *)register0x00000020;
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this;
    view = unaff_R14;
  }
  while( true ) {
    *(Gisketch_Aottg2UI_Building_GisketchView_o **)(puVar5 + -8) = view;
    *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array **)(puVar5 + -0x10) = unaff_RBX;
    *(undefined8 *)(puVar5 + -0x18) = uVar3;
    if (g_data_057aeed2 == '\0') {
      *(undefined8 *)(puVar5 + -0x20) = 0x4534d3c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      g_data_057aeed2 = '\x01';
    }
    if ((UnityEngine_Coroutine_o *)__this_01->m_Items[3] != (UnityEngine_Coroutine_o *)0x0) {
      return;
    }
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      *(undefined8 *)(puVar5 + -0x20) = 0x4534e0d;
      il2cpp_runtime_helper_02337ed0();
      *(undefined8 *)(puVar5 + -0x20) = 0x4534e14;
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    else {
      *(undefined8 *)(puVar5 + -0x20) = 0x4534d6c;
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    if (cVar1 == '\0') {
      return;
    }
    if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this_01->m_Items[0] ==
        (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      return;
    }
    if (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this_01->m_Items[0])->max_length == 0)
    break;
    if (g_data_057aeed3 == '\0') {
      *(undefined8 *)(puVar5 + -0x20) = 0x4534da1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuildDeferred_d__12);
      g_data_057aeed3 = '\x01';
    }
    *(undefined8 *)(puVar5 + -0x20) = 0x4534db7;
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_BuildDeferred_d__12);
    *(undefined8 *)(puVar5 + -0x20) = 0x4534dc4;
    pGVar6 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)
     &((Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_Fields *)&__this_00->bounds)->m_CachedPtr
         = 0;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      __this_00->m_Items[0] = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this_01;
      *(undefined8 *)(puVar5 + -0x20) = 0x4534de4;
      il2cpp_runtime_helper_022b4080(__this_00->m_Items,__this_01);
      *(undefined8 *)(puVar5 + -0x20) = 0x4534df1;
      pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this_01,
                          (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      __this_01->m_Items[3] = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pUVar4;
      il2cpp_runtime_helper_022b4080(__this_01->m_Items + 3,pUVar4);
      return;
    }
    *(undefined8 *)(puVar5 + -0x20) = 0x4534e29;
    uVar3 = il2cpp_runtime_helper_022b2c90();
    view = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
    unaff_RBX = __this_01;
    puVar5 = puVar5 + -0x18;
    __this_01 = pGVar6;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnEnable (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x4534e30

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnEnable
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *__this_00;
  UnityEngine_Coroutine_o *pUVar3;
  undefined8 in_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *unaff_RBX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  undefined8 unaff_R14;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
    *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057aeed2 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534d3c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      g_data_057aeed2 = '\x01';
    }
    if ((UnityEngine_Coroutine_o *)((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this)->m_Items[3]
        != (UnityEngine_Coroutine_o *)0x0) {
      return;
    }
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534e0d;
      il2cpp_runtime_helper_02337ed0();
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534e14;
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534d6c;
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    if (cVar1 == '\0') break;
    if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
        ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this)->m_Items[0] ==
        (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      return;
    }
    if (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
        ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this)->m_Items[0])->max_length == 0) {
      return;
    }
    if (g_data_057aeed3 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534da1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuildDeferred_d__12);
      g_data_057aeed3 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534db7;
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_BuildDeferred_d__12);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534dc4;
    pGVar4 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)
     &((Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_Fields *)&__this_00->bounds)->m_CachedPtr
         = 0;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      __this_00->m_Items[0] = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534de4;
      il2cpp_runtime_helper_022b4080(__this_00->m_Items,__this);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534df1;
      pUVar3 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                          (MethodInfo *)0x0);
      ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this)->m_Items[3] =
           (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pUVar3;
      il2cpp_runtime_helper_022b4080(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this)->m_Items + 3,pUVar3);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534e29;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_R14 = 0;
    unaff_RBX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)pGVar4;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$StartIfReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x4534d20

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  undefined8 in_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *__this_00;
  UnityEngine_Coroutine_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *unaff_RBX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  undefined8 unaff_R14;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_R14;
    *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057aeed2 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534d3c;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      g_data_057aeed2 = '\x01';
    }
    if ((UnityEngine_Coroutine_o *)((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this)->m_Items[3]
        != (UnityEngine_Coroutine_o *)0x0) {
      return;
    }
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534e0d;
      il2cpp_runtime_helper_02337ed0();
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534e14;
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    else {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534d6c;
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    if (cVar1 == '\0') break;
    if ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
        ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this)->m_Items[0] ==
        (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      return;
    }
    if (((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
        ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this)->m_Items[0])->max_length == 0) {
      return;
    }
    if (g_data_057aeed3 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534da1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuildDeferred_d__12);
      g_data_057aeed3 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534db7;
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_runtime_helper_023052d0(TypeInfo_BuildDeferred_d__12);
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534dc4;
    pGVar4 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)
     &((Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_Fields *)&__this_00->bounds)->m_CachedPtr
         = 0;
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      __this_00->m_Items[0] = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)__this;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534de4;
      il2cpp_runtime_helper_022b4080(__this_00->m_Items,__this);
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534df1;
      pUVar3 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                          (MethodInfo *)0x0);
      ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this)->m_Items[3] =
           (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)pUVar3;
      il2cpp_runtime_helper_022b4080(((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this)->m_Items + 3,pUVar3);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x4534e29;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    unaff_R14 = 0;
    unaff_RBX = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)__this;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x18);
    __this = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)pGVar4;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x4534eb0

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  UnityEngine_Coroutine_o *routine;
  
  ppUVar1 = &(__this->fields)._build;
  routine = (__this->fields)._build;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$BuildDeferred
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x4534e40

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  System_Threading_CancellationTokenSource_o **ppSVar1;
  System_Threading_CancellationTokenSource_o *routine;
  UnityEngine_MonoBehaviour_o *__this_00;
  System_Collections_IEnumerator_o *pSVar2;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057aeed3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuildDeferred_d__12);
    g_data_057aeed3 = '\x01';
  }
  __this_00 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BuildDeferred_d__12);
  __this_01 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
  if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
    __this_00[1].klass = (UnityEngine_MonoBehaviour_c *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar1 = &__this_01[1].fields.m_CancellationTokenSource;
  routine = __this_01[1].fields.m_CancellationTokenSource;
  if (routine != (System_Threading_CancellationTokenSource_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              (__this_01,(UnityEngine_Coroutine_o *)routine,(MethodInfo *)0x0);
  }
  *ppSVar1 = (System_Threading_CancellationTokenSource_o *)0x0;
  pSVar2 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b4080(ppSVar1,0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$SettleRoot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__SettleRoot (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x4534f00

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__SettleRoot
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *pGVar2;
  UnityEngine_Transform_o *pUVar3;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this_00;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_GameObject_o *extraout_RAX;
  
  if (g_data_057aeed4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aeed4 = '\x01';
  }
  pGVar2 = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)
           UnityEngine_Component__GetComponentInParent_object_((UnityEngine_Component_o *)__this,MethodInfo_ScrollRect_GetComponentInParent_ScrollRect)
  ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = pGVar2;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pGVar2 = __this;
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_04534fe1;
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto label_04534fd5;
    __this_00 = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pGVar2 = __this;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) goto label_04534fe1;
    pGVar2 = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)
             UnityEngine_Transform__get_root((UnityEngine_Transform_o *)__this_00,(MethodInfo *)0x0);
  }
  __this = pGVar2;
  pGVar2 = __this_00;
  if (__this != (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
label_04534fd5:
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    return pUVar4;
  }
label_04534fe1:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pGVar2,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime___ctor (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x4534ff0

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



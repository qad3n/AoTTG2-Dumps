// Type: Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgDeferredSidePanelSectionsRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12___ctor (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x59148d0

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
// 0x59149f0

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__MoveNext (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x5914a00

bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__MoveNext
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  bool bVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *root;
  UnityEngine_Object_o *obj;
  int iVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075456e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456e0 = '\x01';
  }
  iVar5 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar5 == 2) {
    (__this->fields).__1__state = -1;
    iVar5 = (__this->fields)._i_5__3 + 1;
    (__this->fields)._i_5__3 = iVar5;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) goto label_05914bef;
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 0) {
        (__this->fields).__1__state = -1;
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        return true;
      }
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) goto label_05914bef;
    iVar5 = 0;
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05914bef;
    pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
    (__this->fields)._parent_5__2 = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._parent_5__2);
    (__this->fields)._i_5__3 = 0;
  }
  pGVar2 = (__this_00->fields)._nodes;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_05914bef:
    ThrowNullReferenceException();
  }
  if (iVar5 < (int)pGVar2->max_length) {
    pUVar4 = (__this->fields)._parent_5__2;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pGVar2 = (__this_00->fields)._nodes;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        uVar1 = (__this->fields)._i_5__3;
        if ((uint)pGVar2->max_length <= uVar1) {
          ThrowIndexOutOfRangeException();
        }
        node = pGVar2->m_Items[(int)uVar1];
        method_00 = (MethodInfo *)(__this->fields)._parent_5__2;
        context = (__this_00->fields)._context;
        view = (__this_00->fields)._view;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
                  (node,(UnityEngine_Transform_o *)method_00,context,view,(MethodInfo *)0x0);
        root = Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__SettleRoot(__this_00,method_00);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 2;
        return true;
      }
      goto label_05914bef;
    }
  }
  obj = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
  return false;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x5914c00

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x5914c10

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildDeferred_d__12_System_Collecti
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x5914c50

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__RegisterFactory (const MethodInfo* method);
// 0x5914400

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_075456da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"DeferredSidePanelSections");
    Il2CppMethodInitialized_075456da = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime->static_fields->_registered !=
      false) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildRuntime,
             (MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"DeferredSidePanelSections",__this_00,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime->static_fields->_registered = true;
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x59144f0

bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  
  if (Il2CppMethodInitialized_075456db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgDeferredSidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456db = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
    ;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      if (__this == (UnityEngine_RectTransform_o *)0x0) goto label_05914671;
      UnityEngine_RectTransform__set_sizeDelta
                (__this,(UnityEngine_Vector2_o)
                        (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
    }
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._28_set_ignoreLayout.methodPtr)
                (pUVar2,true,(pUVar2->klass->vtable)._28_set_ignoreLayout.method);
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_AottgDeferredSidePanelSectionsRuntime
                            );
      if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
      }
      else {
        nodes = (node->fields).deferredChildren;
      }
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup
                  (__this_00,nodes,context,view,method);
        return true;
      }
    }
  }
label_05914671:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5914680
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591469d: test r12, r12
// asm:   0x59146a0: je 0x5914702
// asm:   0x59146a2: test rbx, rbx
// asm:   0x59146a5: je 0x591471b

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075456dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    Il2CppMethodInitialized_075456dc = '\x01';
  }
  if (nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
            SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,0);
  }
  if (__this == (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._nodes = nodes;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._nodes);
  (__this->fields)._context = context;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._context);
  (__this->fields)._view = view;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._view);
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady(__this,(MethodInfo *)view);
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnEnable (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x5914820

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnEnable
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$StartIfReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x5914720
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x591476d: jmp 0x591480b

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this_00;
  UnityEngine_Coroutine_o *pUVar3;
  
  if (Il2CppMethodInitialized_075456dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_075456dd = '\x01';
  }
  if ((__this->fields)._build == (UnityEngine_Coroutine_o *)0x0) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    }
    else {
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    }
    if (((bVar2) &&
        (pGVar1 = (__this->fields)._nodes,
        pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) && (pGVar1->max_length != 0)) {
      if (Il2CppMethodInitialized_075456de == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildDeferred_d__12)
        ;
        Il2CppMethodInitialized_075456de = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildDeferred_d__12
                            );
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
      pUVar3 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                         ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                          (MethodInfo *)0x0);
      (__this->fields)._build = pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._build);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x59148a0

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_Coroutine_o **targetAddress;
  UnityEngine_Coroutine_o *routine;
  
  targetAddress = &(__this->fields)._build;
  routine = (__this->fields)._build;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *targetAddress = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$BuildDeferred
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x5914830

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_075456de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildDeferred_d__12);
    Il2CppMethodInitialized_075456de = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildDeferred_d__12
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$SettleRoot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__SettleRoot (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x59148f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59149c2: mov rdi, rax

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__SettleRoot
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_ScrollRect_o *x;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_075456df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456df = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__34b0d00
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x != (UnityEngine_UI_ScrollRect_o *)0x0) {
      __this = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)x;
label_059149c5:
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      return pUVar3;
    }
  }
  else {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((!bVar1) ||
         ((pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
          pUVar2 != (UnityEngine_Transform_o *)0x0 &&
          (__this = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)
                    UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0),
          (UnityEngine_UI_ScrollRect_o *)__this != (UnityEngine_UI_ScrollRect_o *)0x0)))) goto label_059149c5;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime___ctor (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x59149e0

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



// Type: Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgDeferredSidePanelSectionsRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12___ctor (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12___ctor(Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_IDisposable_Dispose(Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__MoveNext (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x181e3a040
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e3a0a7: jmp 0x181e3a0ed
// asm:   0x181e3a27b: jmp 0x181e3a289
// asm:   0x181e3a27d: test rsi, rsi
// asm:   0x181e3a286: mov rdi, rsi

bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__MoveNext
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this,
               MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  bool bVar5;
  UnityEngine_UI_ScrollRect_o *x;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *root;
  UnityEngine_Object_o *obj;
  UnityEngine_UI_ScrollRect_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d62 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (UnityEngine_UI_ScrollRect_o *)(__this->fields).__4__this;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if ((__this_00 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
       (pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_181e3a32f;
    pUVar6 = UnityEngine_Transform__GetParent(pUVar6,(MethodInfo *)0x0);
    (__this->fields)._parent_5__2 = pUVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._parent_5__2,pUVar6);
    (__this->fields)._i_5__3 = 0;
  }
  else {
    if (iVar2 != 2) {
      return false;
    }
    piVar1 = &(__this->fields)._i_5__3;
    *piVar1 = *piVar1 + 1;
    (__this->fields).__1__state = -1;
    if (__this_00 == (UnityEngine_UI_ScrollRect_o *)0x0) goto label_181e3a32f;
  }
  pUVar4 = (__this_00->fields).m_Content;
  if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_181e3a32f;
  if (*(int *)&(*(uint64_t *)((char *)pUVar4 + 0x18)) <= (__this->fields)._i_5__3) {
label_181e3a2cb:
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70(obj,(MethodInfo *)0x0);
    return false;
  }
  pUVar6 = (__this->fields)._parent_5__2;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) goto label_181e3a2cb;
  pUVar4 = (__this_00->fields).m_Content;
  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
    uVar3 = (__this->fields)._i_5__3;
    if (*(uint *)&(*(uint64_t *)((char *)pUVar4 + 0x18)) <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    node = (&(*(uint64_t *)((char *)pUVar4 + 0x20)))[(int)uVar3];
    view = *(Gisketch_Aottg2UI_Building_GisketchView_o **)&(__this_00->fields).m_Elasticity;
    pUVar6 = (__this->fields)._parent_5__2;
    context = *(Gisketch_Aottg2UI_Building_GisketchBuildContext_o **)&(__this_00->fields).m_Horizontal;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
              (node,pUVar6,context,view,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344d61 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184344d61 = '\x01';
    }
    x = UnityEngine_Component__GetComponentInParent_object__664f20
                  ((UnityEngine_Component_o *)__this_00,
                   (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_181e3a32f;
      pUVar6 = UnityEngine_Transform__GetRoot(pUVar6,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) goto label_181e3a289;
      pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_181e3a32f;
      x = (UnityEngine_UI_ScrollRect_o *)UnityEngine_Transform__GetRoot(pUVar6,(MethodInfo *)0x0);
    }
    __this_00 = x;
    if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
label_181e3a289:
      root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,1,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 2;
      return true;
    }
  }
label_181e3a32f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x181e3a340

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
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__RegisterFactory (const MethodInfo* method);
// 0x181e2a1d0

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"DeferredSidePanelSections");
    Il2CppMethodInitialized_184344d5c = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime->static_fields->_registered ==
      false) {
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
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181e29f90

bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value;
  
  if (Il2CppMethodInitialized_184344d5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgDeferredSidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d5d = '\x01';
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
                       (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      if (__this == (UnityEngine_RectTransform_o *)0x0) goto label_181e2a179;
      UnityEngine_RectTransform__set_sizeDelta
                (__this,(UnityEngine_Vector2_o)
                        (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
    }
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    if (pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0) {
      (*(pUVar2->klass->vtable)._28_set_ignoreLayout.methodPtr)
                (pUVar2,true,(pUVar2->klass->vtable)._28_set_ignoreLayout.method);
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_AottgDeferredSidePanelSectionsRuntime
                            );
      if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
      }
      else {
        value = (node->fields).deferredChildren;
      }
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
        if (Il2CppMethodInitialized_184344d5e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
          Il2CppMethodInitialized_184344d5e = '\x01';
        }
        if (value == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                  SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,0);
        }
        (__this_00->fields)._nodes = value;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._nodes,value);
        (__this_00->fields)._context = context;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._context,context);
        (__this_00->fields)._view = view;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._view,view);
        Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady
                  (__this_00,(MethodInfo *)0x0);
        return true;
      }
    }
  }
label_181e2a179:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181e2a3d0

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344d5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    Il2CppMethodInitialized_184344d5e = '\x01';
  }
  if (nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
            SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,0);
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
    (__this->fields)._nodes = nodes;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._nodes,nodes);
    (__this->fields)._context = context;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._context,context);
    (__this->fields)._view = view;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._view,view);
    Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnEnable (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x181e2a1c0

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnEnable
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$StartIfReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x181e2a470

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *routine;
  UnityEngine_Coroutine_o *value;
  
  if (Il2CppMethodInitialized_184344d5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_184344d5f = '\x01';
  }
  if ((__this->fields)._build == (UnityEngine_Coroutine_o *)0x0) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (((bVar1) && ((__this->fields)._nodes != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0))
       && (((__this->fields)._nodes)->max_length != 0)) {
      if (Il2CppMethodInitialized_184344d60 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildDeferred_d__12)
        ;
        Il2CppMethodInitialized_184344d60 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildDeferred_d__12
                          );
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                         (MethodInfo *)0x0);
      (__this->fields)._build = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._build,value);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x181e2a180

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  if ((__this->fields)._build != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._build,(MethodInfo *)0x0);
  }
  (__this->fields)._build = (UnityEngine_Coroutine_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._build,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$BuildDeferred
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x181e29f20

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildDeferred_d__12);
    Il2CppMethodInitialized_184344d60 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_BuildDeferred_d__12
                        );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$SettleRoot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__SettleRoot (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x181e2a2d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2a39d: xor edx, edx
// asm:   0x181e2a39f: mov rcx, rax

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__SettleRoot
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_ScrollRect_o *x;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (Il2CppMethodInitialized_184344d61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d61 = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__664f20
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x != (UnityEngine_UI_ScrollRect_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      return pUVar3;
    }
  }
  else {
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((!bVar1) ||
         ((pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0),
          pUVar2 != (UnityEngine_Transform_o *)0x0 &&
          (__this = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)
                    UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0),
          __this != (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0)))) {
        pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        return pUVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime___ctor (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime___ctor(Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



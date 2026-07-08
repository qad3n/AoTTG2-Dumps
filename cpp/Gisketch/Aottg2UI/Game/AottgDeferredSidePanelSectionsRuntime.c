// Type: Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgDeferredSidePanelSectionsRuntime.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12___ctor (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4203540

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_<BuildDeferred>d__12___ctor
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x4203660

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_<BuildDeferred>d__12__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o
                *__this,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__MoveNext (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x4203670

bool_conflict
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_<BuildDeferred>d__12__MoveNext
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o
           *__this,MethodInfo *method)

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
  
  if (DAT_05704ffa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenBuilder);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ffa = '\x01';
  }
  iVar6 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  uVar5 = (undefined7)((ulong)__this >> 8);
  if (iVar6 == 2) {
    (__this->fields).__1__state = -1;
    iVar6 = (__this->fields)._i_5__3 + 1;
    (__this->fields)._i_5__3 = iVar6;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0)
    goto LAB_0420386b;
    pGVar2 = (__this_00->fields)._nodes;
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 0) {
        (__this->fields).__1__state = -1;
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        il2cpp_runtime_glue(&(__this->fields).__2__current,0);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71(uVar5,1);
      }
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0)
    goto LAB_0420386b;
    iVar6 = 0;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_0420386b;
    pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
    (__this->fields)._parent_5__2 = pUVar4;
    il2cpp_runtime_glue(&(__this->fields)._parent_5__2);
    (__this->fields)._i_5__3 = 0;
    pGVar2 = (__this_00->fields)._nodes;
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if (iVar6 < (int)pGVar2->max_length) {
      pUVar4 = (__this->fields)._parent_5__2;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pGVar2 = (__this_00->fields)._nodes;
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          uVar1 = (__this->fields)._i_5__3;
          if (uVar1 < (uint)pGVar2->max_length) {
            node = pGVar2->m_Items[(int)uVar1];
            method_00 = (MethodInfo *)(__this->fields)._parent_5__2;
            context = (__this_00->fields)._context;
            view = (__this_00->fields)._view;
            if (*(int *)(TypeInfo_GisketchScreenBuilder + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
                      (node,(UnityEngine_Transform_o *)method_00,context,view,(MethodInfo *)0x0);
            root = Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__SettleRoot
                             (__this_00,method_00);
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout(root,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)0x0;
            il2cpp_runtime_glue(&(__this->fields).__2__current,0);
            (__this->fields).__1__state = 2;
            return (bool_conflict)CONCAT71(uVar5,1);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        goto LAB_0420386b;
      }
    }
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject
                    ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    return 0;
  }
LAB_0420386b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x4203880

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_<BuildDeferred>d__12__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o
           *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x4203890

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_<BuildDeferred>d__12__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o
                *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime.<BuildDeferred>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o* __this, const MethodInfo* method);
// 0x42038d0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_<BuildDeferred>d__12__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred_d__12_o
           *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__RegisterFactory (const MethodInfo* method);
// 0x4203060

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__RegisterFactory
               (MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  
  if (DAT_05704ff4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_init_method_metadata(&TypeInfo_AottgDeferredSidePanelSectionsRuntime);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentFactory);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentRegistry);
    il2cpp_init_method_metadata(&"DeferredSidePanelSections");
    DAT_05704ff4 = '\x01';
  }
  if (**(char **)(TypeInfo_AottgDeferredSidePanelSectionsRuntime + 0xb8) != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
           **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)
            il2cpp_runtime_glue(TypeInfo_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"DeferredSidePanelSections",factory,(MethodInfo *)0x0);
    **(undefined1 **)(TypeInfo_AottgDeferredSidePanelSectionsRuntime + 0xb8) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x4203150

bool_conflict
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildRuntime
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  UnityEngine_RectTransform_o *__this;
  Il2CppObject *pIVar4;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this_00;
  ulong extraout_RAX;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  ulong uVar3;
  
  if (DAT_05704ff5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgDeferredSidePanelSectionsRuntime_AddCompone);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ff5 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar3 = (ulong)uVar1;
  if ((char)uVar1 == '\0') {
    if (go != (UnityEngine_GameObject_o *)0x0) {
      __this = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>(go,MethodInfo_RectTransform_GetComponent_RectTransform);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (DAT_056fe093 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector2);
          DAT_056fe093 = '\x01';
        }
        if (__this == (UnityEngine_RectTransform_o *)0x0) goto LAB_042032d1;
        UnityEngine_RectTransform__set_sizeDelta
                  (__this,(UnityEngine_Vector2_o)
                          **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
      }
      pIVar4 = UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_LayoutElement_AddComponent_LayoutElement);
      if (pIVar4 != (Il2CppObject *)0x0) {
        (*pIVar4->klass->vtable[0x1c].methodPtr)(pIVar4,1,pIVar4->klass->vtable[0x1c].method);
        __this_00 = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)
                    UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_AottgDeferredSidePanelSectionsRuntime_AddCompone);
        if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
        }
        else {
          nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(node->fields).steps;
        }
        if (__this_00 != (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
          Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup
                    (__this_00,nodes,context,view,method);
          uVar3 = extraout_RAX;
          goto LAB_042032b9;
        }
      }
    }
LAB_042032d1:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_042032b9:
  return (bool_conflict)CONCAT71((int7)(uVar3 >> 8),1);
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x42032e0

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  char cVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  UnityEngine_Coroutine_o *pUVar4;
  
  if (DAT_05704ff6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    DAT_05704ff6 = '\x01';
  }
  if (nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    nodes = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition,0);
  }
  if (__this == (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (__this->fields)._nodes = nodes;
  il2cpp_runtime_glue(&(__this->fields)._nodes,nodes);
  (__this->fields)._context = context;
  il2cpp_runtime_glue(&(__this->fields)._context,context);
  (__this->fields)._view = view;
  il2cpp_runtime_glue(&(__this->fields)._view);
  if (DAT_05704ff7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_05704ff7 = '\x01';
  }
  if ((__this->fields)._build == (UnityEngine_Coroutine_o *)0x0) {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar2 = (char)bVar3;
    }
    else {
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar2 = (char)bVar3;
    }
    if (((cVar2 != '\0') &&
        (pGVar1 = (__this->fields)._nodes,
        pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) &&
       (pGVar1->max_length != 0)) {
      if (DAT_05704ff8 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuildDeferred_d__12);
        DAT_05704ff8 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_BuildDeferred_d__12);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_00 + 2,__this);
      pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine
                         ((UnityEngine_MonoBehaviour_o *)__this,
                          (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      (__this->fields)._build = pUVar4;
      il2cpp_runtime_glue(&(__this->fields)._build,pUVar4);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$OnEnable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnEnable (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x4203490

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnEnable
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  char cVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  UnityEngine_Coroutine_o *pUVar4;
  
  if (DAT_05704ff7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_05704ff7 = '\x01';
  }
  if ((__this->fields)._build == (UnityEngine_Coroutine_o *)0x0) {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar2 = (char)bVar3;
    }
    else {
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar2 = (char)bVar3;
    }
    if (((cVar2 != '\0') &&
        (pGVar1 = (__this->fields)._nodes,
        pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) &&
       (pGVar1->max_length != 0)) {
      if (DAT_05704ff8 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuildDeferred_d__12);
        DAT_05704ff8 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_BuildDeferred_d__12);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_00 + 2,__this);
      pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine
                         ((UnityEngine_MonoBehaviour_o *)__this,
                          (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      (__this->fields)._build = pUVar4;
      il2cpp_runtime_glue(&(__this->fields)._build,pUVar4);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$StartIfReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x4203380

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__StartIfReady
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  char cVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  UnityEngine_Coroutine_o *pUVar4;
  
  if (DAT_05704ff7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_05704ff7 = '\x01';
  }
  if ((__this->fields)._build == (UnityEngine_Coroutine_o *)0x0) {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar2 = (char)bVar3;
    }
    else {
      bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      cVar2 = (char)bVar3;
    }
    if (((cVar2 != '\0') &&
        (pGVar1 = (__this->fields)._nodes,
        pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) &&
       (pGVar1->max_length != 0)) {
      if (DAT_05704ff8 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuildDeferred_d__12);
        DAT_05704ff8 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_BuildDeferred_d__12);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_00[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_00 + 2,__this);
      pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine
                         ((UnityEngine_MonoBehaviour_o *)__this,
                          (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
      (__this->fields)._build = pUVar4;
      il2cpp_runtime_glue(&(__this->fields)._build,pUVar4);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnDisable (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x4203510

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__OnDisable
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,
               MethodInfo *method)

{
  UnityEngine_Coroutine_o **ppUVar1;
  UnityEngine_Coroutine_o *routine;
  
  ppUVar1 = &(__this->fields)._build;
  routine = (__this->fields)._build;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  *ppUVar1 = (UnityEngine_Coroutine_o *)0x0;
  il2cpp_runtime_glue(ppUVar1,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$BuildDeferred
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x42034a0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__BuildDeferred
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method
          )

{
  Il2CppObject *__this_00;
  
  if (DAT_05704ff8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuildDeferred_d__12);
    DAT_05704ff8 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_BuildDeferred_d__12);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$SettleRoot
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__SettleRoot (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x4203560

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__SettleRoot
          (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,MethodInfo *method
          )

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *x;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  
  if (DAT_05704ff9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704ff9 = '\x01';
  }
  x = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)
      UnityEngine_Component__GetComponentInParent<object>
                ((UnityEngine_Component_o *)__this,MethodInfo_ScrollRect_GetComponentInParent_ScrollRect);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_04203641;
    pUVar2 = UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 == '\0') goto LAB_04203635;
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_04203641;
    x = (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)
        UnityEngine_Transform__get_root(pUVar2,(MethodInfo *)0x0);
  }
  __this = x;
  if (__this != (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *)0x0) {
LAB_04203635:
    pUVar3 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    return pUVar3;
  }
LAB_04203641:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgDeferredSidePanelSectionsRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime___ctor (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x4203650

void Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime_o *__this,
               MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



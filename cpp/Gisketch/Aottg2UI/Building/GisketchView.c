// Type: Gisketch.Aottg2UI.Building.GisketchView
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchView.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchView.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___ctor(Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView.<>c__DisplayClass20_0$$<UnregisterSubtree>b__0
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___UnregisterSubtree_b__0 (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o* __this, Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* entry, const MethodInfo* method);
// 0x18190aca0

bool Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___UnregisterSubtree_b__0
               (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o *__this,
               Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *entry,MethodInfo *method)

{
  bool bVar1;
  
  if (entry == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *)0x0) {
    return true;
  }
  bVar1 = Gisketch_Aottg2UI_Building_GisketchView__IsInSubtree
                    ((entry->fields)._Target_k__BackingField,(__this->fields).root,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchView.<>c__DisplayClass20_0$$<UnregisterSubtree>b__1
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___UnregisterSubtree_b__1 (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o* __this, Gisketch_Aottg2UI_Building_GisketchMotionTarget_o target, const MethodInfo* method);
// 0x18190acc0

bool Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0___UnregisterSubtree_b__1
               (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o *__this,
               Gisketch_Aottg2UI_Building_GisketchMotionTarget_o *target,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Gisketch_Aottg2UI_Building_GisketchView__IsInSubtree
                    ((target->fields).GameObject,(__this->fields).root,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_Root
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchView__get_Root (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x180573e90

UnityEngine_GameObject_o*
Gisketch_Aottg2UI_Building_GisketchView__get_Root(Gisketch_Aottg2UI_Building_GisketchView_o* __this, MethodInfo* method)

{
  return (__this->fields)._Root_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$set_Root
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__set_Root (Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* value, const MethodInfo* method);
// 0x180c8de30

void
Gisketch_Aottg2UI_Building_GisketchView__set_Root(Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* value, MethodInfo* method)

{
  (__this->fields)._Root_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Root_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_MotionTargets
// il2cpp: System_Collections_Generic_List_GisketchMotionTarget__o* Gisketch_Aottg2UI_Building_GisketchView__get_MotionTargets (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x1805852b0

System_Collections_Generic_List_GisketchMotionTarget__o*
Gisketch_Aottg2UI_Building_GisketchView__get_MotionTargets(Gisketch_Aottg2UI_Building_GisketchView_o* __this, MethodInfo* method)

{
  return (__this->fields)._MotionTargets_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_SearchEntries
// il2cpp: System_Collections_Generic_List_GisketchSearchEntry__o* Gisketch_Aottg2UI_Building_GisketchView__get_SearchEntries (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x180584c80

System_Collections_Generic_List_GisketchSearchEntry__o*
Gisketch_Aottg2UI_Building_GisketchView__get_SearchEntries(Gisketch_Aottg2UI_Building_GisketchView_o* __this, MethodInfo* method)

{
  return (__this->fields)._SearchEntries_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$get_LayoutDirty
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__get_LayoutDirty (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x180acdd00

bool
Gisketch_Aottg2UI_Building_GisketchView__get_LayoutDirty(Gisketch_Aottg2UI_Building_GisketchView_o* __this, MethodInfo* method)

{
  return (__this->fields)._LayoutDirty_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchView$$set_LayoutDirty
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__set_LayoutDirty (Gisketch_Aottg2UI_Building_GisketchView_o* __this, bool value, const MethodInfo* method);
// 0x180ace1a0

void
Gisketch_Aottg2UI_Building_GisketchView__set_LayoutDirty(Gisketch_Aottg2UI_Building_GisketchView_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._LayoutDirty_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$SetRoot
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__SetRoot (Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x180c8de30

void
Gisketch_Aottg2UI_Building_GisketchView__SetRoot(Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* root, MethodInfo* method)

{
  (__this->fields)._Root_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Root_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$MarkLayoutDirty
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutDirty (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x180acca70

void Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutDirty
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  (__this->fields)._LayoutDirty_k__BackingField = true;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$MarkLayoutSettled
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x180acca60

void Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  (__this->fields)._LayoutDirty_k__BackingField = false;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$Register
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__Register (Gisketch_Aottg2UI_Building_GisketchView_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* styleMotion, const MethodInfo* method);
// 0x181908f40
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181909331: lea rcx, [r8 + r8*4]
// asm:   0x181909335: movups xmmword ptr [rdx + rcx*8 + 0x20], xmm0
// asm:   0x18190933a: movups xmmword ptr [rdx + rcx*8 + 0x30], xmm1
// asm:   0x18190933f: movsd qword ptr [rdx + rcx*8 + 0x40], xmm2
// asm:   0x181909345: lea rcx, [r8 + 1]
// asm:   0x181909349: lea rcx, [r8 + rcx*4]
// asm:   0x18190934d: lea rcx, [rdx + rcx*8]
// asm:   0x181909351: xor edx, edx
// asm:   0x181909353: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x181909358: jmp 0x1819092da

void Gisketch_Aottg2UI_Building_GisketchView__Register
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *styleMotion,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_Fields *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **ppGVar3;
  uint uVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_01;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar6;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_02;
  Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *pGVar7;
  MethodInfo *pMVar8;
  bool bVar9;
  UnityEngine_UI_Selectable_o *x;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *x_00;
  Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  undefined1 local_78 [24];
  UnityEngine_Rendering_VolumeComponent_o *pUStack_60;
  UnityEngine_Rendering_Volume_o *local_58;
  UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain_o local_48;
  
  if (Il2CppMethodInitialized_1843421c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421c2 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      return;
    }
    bVar9 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
    if (!bVar9) {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._elements;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181909366;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)(node->fields).id,(Il2CppObject *)go,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_set_Item);
    }
    if (Il2CppMethodInitialized_1843421c5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFocusRing);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_1843421c5 = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar9) &&
       (((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0 ||
        ((((node->fields).search)->fields).hidden == false)))) {
      if (go == (UnityEngine_GameObject_o *)0x0) goto label_181909366;
      x = UnityEngine_GameObject__GetComponent_object_
                    (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar9) {
        if (x == (UnityEngine_UI_Selectable_o *)0x0) goto label_181909366;
        bVar9 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x,(x->klass->vtable)._9_IsActive.method);
        if (((bVar9) &&
            (bVar9 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)
                               (x,(x->klass->vtable)._24_IsInteractable.method), bVar9)) &&
           ((x->fields).m_Navigation.fields.m_Mode != 0)) {
          x_00 = UnityEngine_GameObject__GetComponent_object_
                           (go,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFocusRing);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar9) {
            __this_01 = (__this->fields)._SearchEntries_k__BackingField;
            __this_03 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor(__this_03,node,go,(MethodInfo *)0x0);
            pMVar8 = MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_Add;
            if (__this_01 == (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
label_181909366:
              ThrowNullReferenceException();
            }
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pGVar5 = (__this_01->fields)._items;
            if (pGVar5 == (Gisketch_Aottg2UI_Search_GisketchSearchEntry_array *)0x0) goto label_181909366;
            uVar4 = (__this_01->fields)._size;
            if (uVar4 < (uint)pGVar5->max_length) {
              (__this_01->fields)._size = uVar4 + 1;
              if ((uint)pGVar5->max_length <= uVar4) {
                ThrowIndexOutOfRangeException();
              }
              pGVar5->m_Items[(int)uVar4] = __this_03;
              Il2CppCodeGenWriteBarrier(pGVar5->m_Items + (int)uVar4,__this_03);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_03,
                         (MethodInfo_93DD50 *)pMVar8->klass->rgctx_data[0xe].method);
            }
          }
        }
      }
    }
    enter = (node->fields).enter;
    if ((enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) &&
       (pGVar6 = (node->fields).motion, enter = styleMotion,
       pGVar6 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) {
      enter = pGVar6;
    }
    if ((((node->fields).bind == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) ||
        (bVar9 = System_String__IsNullOrEmpty((((node->fields).bind)->fields).visible,(MethodInfo *)0x0),
        bVar9)) &&
       (((enter != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0 &&
         (bVar9 = System_String__IsNullOrEmpty((enter->fields).preset,(MethodInfo *)0x0), !bVar9)) ||
        ((pGVar6 = (node->fields).exit, pGVar6 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0 &&
         (bVar9 = System_String__IsNullOrEmpty((pGVar6->fields).preset,(MethodInfo *)0x0), !bVar9)))))) {
      __this_02 = (__this->fields)._MotionTargets_k__BackingField;
      local_58 = (UnityEngine_Rendering_Volume_o *)0x0;
      local_78._0_8_ = (System_String_o *)0x0;
      local_78._8_8_ = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
      local_78._16_8_ = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
      pUStack_60 = (UnityEngine_Rendering_VolumeComponent_o *)0x0;
      Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor
                ((Gisketch_Aottg2UI_Building_GisketchMotionTarget_o *)local_78,go,enter,(node->fields).exit,
                 (MethodInfo *)0x0);
      pMVar8 = MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_Add;
      if (__this_02 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
        pGVar7 = (__this_02->fields)._items;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        if (pGVar7 != (Gisketch_Aottg2UI_Building_GisketchMotionTarget_array *)0x0) {
          uVar4 = (__this_02->fields)._size;
          if ((uint)pGVar7->max_length <= uVar4) {
            local_48.fields.nameAndTooltip.fields.name = (System_String_o *)local_78._0_8_;
            local_48.fields.nameAndTooltip.fields.tooltip = (System_String_o *)local_78._8_8_;
            local_48.fields.volumeProfile = (UnityEngine_Rendering_VolumeProfile_o *)local_78._16_8_;
            local_48.fields.volumeComponent = pUStack_60;
            local_48.fields.volume = local_58;
            System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain___AddWithResize
                      ((System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain__o
                        *)__this_02,&local_48,(MethodInfo_93DB50 *)pMVar8->klass->rgctx_data[0xe].method);
            return;
          }
          (__this_02->fields)._size = uVar4 + 1;
          if (uVar4 < (uint)pGVar7->max_length) {
            pGVar2 = &pGVar7->m_Items[(int)uVar4].fields;
            (((UnityEngine_Rendering_DebugUI_Widget_NameAndTooltip_o *)&pGVar2->GameObject)->fields).name =
                 (System_String_o *)local_78._0_8_;
            pGVar2->Enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)local_78._8_8_;
            ppGVar3 = &pGVar7->m_Items[(int)uVar4].fields.Exit;
            *ppGVar3 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)local_78._16_8_;
            *(UnityEngine_Rendering_VolumeComponent_o **)&((UnityEngine_Vector3_o *)(ppGVar3 + 1))->fields =
                 pUStack_60;
            *(UnityEngine_Rendering_Volume_o **)&pGVar7->m_Items[(int)uVar4].fields.RestScale.fields.z =
                 local_58;
            Il2CppCodeGenWriteBarrier(&pGVar7->m_Items[(int)uVar4].fields.GameObject,(void *)0x0);
            return;
          }
          ThrowIndexOutOfRangeException();
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchView$$Find
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchView__Find (Gisketch_Aottg2UI_Building_GisketchView_o* __this, System_String_o* id, const MethodInfo* method);
// 0x181908c00

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchView__Find
          (Gisketch_Aottg2UI_Building_GisketchView_o *__this,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *local_res10 [3];
  
  if (Il2CppMethodInitialized_1843421c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
    Il2CppMethodInitialized_1843421c3 = '\x01';
  }
  local_res10[0] = (UnityEngine_GameObject_o *)0x0;
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._elements;
    if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)id,(Il2CppObject **)local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
    if (bVar1) {
      return local_res10[0];
    }
  }
  return (UnityEngine_GameObject_o *)0x0;
}


// Gisketch.Aottg2UI.Building.GisketchView$$UnregisterSubtree
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView__UnregisterSubtree (Gisketch_Aottg2UI_Building_GisketchView_o* __this, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x181909380
// eh: try 0x1819095a0..0x18190971d -> pad 0x183331c60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1819095fd: mov rdx, qword ptr [rip + 0x27b1abc]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_Dispose
// asm:   0x181909604: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181909609: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18190960e: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x181909613: test rcx, rcx
// asm:   0x181909616: jne 0x18190971d
// asm:   0x18190961c: xor edi, edi
// asm:   0x18190961e: mov r13, qword ptr [rsp + 0xd0]
// asm:   0x181909626: mov r14, qword ptr [rsp + 0xd8]
// asm:   0x18190962e: mov rsi, qword ptr [rsp + 0xe8]
// asm:   0x181909636: mov r15, rsi
// asm:   0x18190971d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331c60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331c65: push rbp
// asm:   0x183331c66: sub rsp, 0x20
// asm:   0x183331c6a: mov rbp, rdx
// asm:   0x183331c6d: mov rax, qword ptr [rbp + 0x60]
// asm:   0x183331c71: mov rcx, qword ptr [rax]
// asm:   0x183331c74: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183331c78: movabs rax, 0
// asm:   0x183331c82: add rsp, 0x20
// asm:   0x183331c86: pop rbp
// asm:   0x183331c87: ret 

void Gisketch_Aottg2UI_Building_GisketchView__UnregisterSubtree
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,UnityEngine_GameObject_o *root,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_02;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_03;
  Il2CppObject *pIVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o *object;
  System_Collections_Generic_List_string__o *__this_04;
  System_String_o *key;
  System_Predicate_T__o *pSVar3;
  int32_t index;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_90;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if (Il2CppMethodInitialized_1843421c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_GameObject_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_GameObject_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_RemoveAll);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_GisketchMotionTarget);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_GisketchSearchEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__1)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0);
    Il2CppMethodInitialized_1843421c4 = '\x01';
  }
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Building_GisketchView___c__DisplayClass20_0_o *)0x0) {
    (object->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
    x = (UnityEngine_Object_o *)(object->fields).root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return;
    }
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    __this_00 = (__this->fields)._elements;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__GameObject__o *)0x0) {
      System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                (&local_60,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_13C1150 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_GetEnumerator);
      local_90.fields._dictionary = local_60.fields._dictionary;
      local_90.fields._version = local_60.fields._version;
      local_90.fields._index = local_60.fields._index;
      local_90.fields._current.fields.key = local_60.fields._current.fields.key;
      local_90.fields._current.fields.value = local_60.fields._current.fields.value;
      local_90.fields._getEnumeratorRetType = local_60.fields._getEnumeratorRetType;
      local_90.fields._36_4_ = local_60.fields._36_4_;
      index = 0;
      while (bVar2 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                               (&local_90,
                                (MethodInfo_1585360 *)
                                MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_MoveNext
                               ), pIVar1 = local_90.fields._current.fields.key, bVar2) {
        bVar2 = Gisketch_Aottg2UI_Building_GisketchView__IsInSubtree
                          ((UnityEngine_GameObject_o *)local_90.fields._current.fields.value,
                           (object->fields).root,(MethodInfo *)0x0);
        if (bVar2) {
          if (__this_04 == (System_Collections_Generic_List_string__o *)0x0) {
            ThrowNullReferenceException();
          }
          il2cpp_runtime_helper_180012890(__this_04,pIVar1);
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_90,
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_Dispose);
      if (__this_04 != (System_Collections_Generic_List_string__o *)0x0) {
        for (; index < (__this_04->fields)._size; index = index + 1) {
          __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._elements;
          key = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          ((System_Collections_Generic_List_object__o *)__this_04,index,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_string_get_Item);
          if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181909711;
          System_Collections_Generic_Dictionary_object__object___Remove
                    (__this_01,(Il2CppObject *)key,
                     (MethodInfo_1470BF0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
        }
        __this_02 = (__this->fields)._SearchEntries_k__BackingField;
        pSVar3 = (System_Predicate_T__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_GisketchSearchEntry);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)pSVar3,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__0
                   ,(MethodInfo_B61EB0 *)0x0);
        if (__this_02 != (System_Collections_Generic_List_GisketchSearchEntry__o *)0x0) {
          System_Collections_Generic_List_object___RemoveAll
                    ((System_Collections_Generic_List_object__o *)__this_02,pSVar3,
                     (MethodInfo_946210 *)
                     MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_RemoveAll);
          __this_03 = (__this->fields)._MotionTargets_k__BackingField;
          pSVar3 = (System_Predicate_T__o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_GisketchMotionTarget);
          System_Predicate_GisketchMotionTarget____ctor
                    (pSVar3,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Building_GisketchView_c__DisplayClass20_0_UnregisterSubtree_b__1
                     ,(MethodInfo_B61BE0 *)0x0);
          if (__this_03 != (System_Collections_Generic_List_GisketchMotionTarget__o *)0x0) {
            System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain___RemoveAll
                      ((System_Collections_Generic_List_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain__o
                        *)__this_03,pSVar3,
                       (MethodInfo_946350 *)
                       MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_RemoveAll);
            return;
          }
        }
      }
    }
  }
label_181909711:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchView$$IsSearchable
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__IsSearchable (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x181908de0

bool Gisketch_Aottg2UI_Building_GisketchView__IsSearchable
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_GameObject_o *go,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Selectable_o *x;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *x_00;
  
  if (Il2CppMethodInitialized_1843421c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFocusRing);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421c5 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar1) &&
       (((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0 ||
        ((((node->fields).search)->fields).hidden == false)))) {
      if (go == (UnityEngine_GameObject_o *)0x0) {
label_181908f37:
        ThrowNullReferenceException();
      }
      x = UnityEngine_GameObject__GetComponent_object_
                    (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Selectable);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_UI_Selectable_o *)0x0) goto label_181908f37;
        bVar1 = (*(x->klass->vtable)._9_IsActive.methodPtr)(x,(x->klass->vtable)._9_IsActive.method);
        if (bVar1) {
          bVar1 = (*(x->klass->vtable)._24_IsInteractable.methodPtr)
                            (x,(x->klass->vtable)._24_IsInteractable.method);
          if ((bVar1) && ((x->fields).m_Navigation.fields.m_Mode != 0)) {
            x_00 = UnityEngine_GameObject__GetComponent_object_
                             (go,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFocusRing);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar1 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Building.GisketchView$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x181887a10

bool Gisketch_Aottg2UI_Building_GisketchView__HasMotion
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  bool bVar1;
  
  if (motion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    return false;
  }
  bVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchView$$HasVisibleBinding
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__HasVisibleBinding (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x181908c90

bool Gisketch_Aottg2UI_Building_GisketchView__HasVisibleBinding
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  bool bVar1;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((node->fields).bind == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    return false;
  }
  bVar1 = System_String__IsNullOrEmpty((((node->fields).bind)->fields).visible,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchView$$IsInSubtree
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchView__IsInSubtree (UnityEngine_GameObject_o* value, UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x181908cd0

bool Gisketch_Aottg2UI_Building_GisketchView__IsInSubtree
               (UnityEngine_GameObject_o *value,UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this;
  UnityEngine_Transform_o *parent;
  
  if (Il2CppMethodInitialized_1843421c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421c6 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)root,(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
      if (value != (UnityEngine_GameObject_o *)0x0) {
        __this = UnityEngine_GameObject__get_transform(value,(MethodInfo *)0x0);
        if (root != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(root,(MethodInfo *)0x0);
          if (__this != (UnityEngine_Transform_o *)0x0) {
            bVar1 = UnityEngine_Transform__IsChildOf(__this,parent,(MethodInfo *)0x0);
            return bVar1;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Building.GisketchView$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchView___ctor (Gisketch_Aottg2UI_Building_GisketchView_o* __this, const MethodInfo* method);
// 0x181909730

void Gisketch_Aottg2UI_Building_GisketchView___ctor
               (Gisketch_Aottg2UI_Building_GisketchView_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_00;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_01;
  System_Collections_Generic_List_GisketchSearchEntry__o *__this_02;
  
  if (Il2CppMethodInitialized_1843421c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchMotionTarget)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
    Il2CppMethodInitialized_1843421c7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor);
  (__this->fields)._elements = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._elements,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchMotionTarget);
  System_Collections_Generic_List_GisketchMotionTarget____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchMotionTarget_ctor);
  (__this->fields)._MotionTargets_k__BackingField = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._MotionTargets_k__BackingField,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GisketchSearchEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_GisketchSearchEntry_ctor);
  (__this->fields)._SearchEntries_k__BackingField = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SearchEntries_k__BackingField,__this_02);
  (__this->fields)._LayoutDirty_k__BackingField = true;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}



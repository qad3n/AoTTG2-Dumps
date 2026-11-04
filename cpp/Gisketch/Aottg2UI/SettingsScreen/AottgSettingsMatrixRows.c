// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsMatrixRows.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass10_0$$<BuildPair>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0___BuildPair_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* pair, const MethodInfo* method);
// 0x1823a23a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0___BuildPair_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *pair,MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar3;
  System_String_o *str2;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t local_res8 [2];
  
  pGVar2 = (__this->fields).__4__this;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) {
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildCell
              (pGVar2,pair,(__this->fields).index,(MethodInfo *)0x0);
    pGVar2 = (__this->fields).__4__this;
    if ((pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) &&
       (pGVar3 = (pGVar2->fields)._rows, pGVar3 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)) {
      pGVar2 = (__this->fields).__4__this;
      if ((__this->fields).rightIndex < (int)pGVar3->max_length) {
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildCell
                  (pGVar2,pair,(__this->fields).rightIndex,(MethodInfo *)0x0);
        return;
      }
      iVar1 = (__this->fields).index;
      if (Il2CppMethodInitialized_184347ae5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"clear");
        Il2CppMethodInitialized_184347ae5 = '\x01';
      }
      local_res8[0] = iVar1;
      if (Il2CppMethodInitialized_184347ae8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"-spacer-");
        Il2CppMethodInitialized_184347ae8 = '\x01';
      }
      pSVar4 = (pGVar2->fields)._id;
      str2 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969b70(pSVar4,"-spacer-",str2,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellLayout((MethodInfo *)0x0);
      if (pair != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (pair,"clear",(System_Action_AottgUi__o *)0x0,pSVar4,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass11_0$$<BuildCell>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0___BuildCell_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* cell, const MethodInfo* method);
// 0x1823a2520

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0___BuildCell_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *cell,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar3;
  
  pGVar2 = (__this->fields).__4__this;
  if ((pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) &&
     (pGVar3 = (pGVar2->fields)._rows, pGVar3 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)) {
    uVar1 = (__this->fields).index;
    if ((uint)pGVar3->max_length <= uVar1) {
      ThrowIndexOutOfRangeException();
    }
    if (cell != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component(cell,pGVar3->m_Items[(int)uVar1],(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass7_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows.<>c__DisplayClass7_0$$<AddVirtualScrollItems>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0___AddVirtualScrollItems_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* pair, const MethodInfo* method);
// 0x1823a2c30

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0___AddVirtualScrollItems_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *pair,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) {
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildPair
              (__this_00,pair,(__this->fields).i,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_AottgComponent_array* rows, const MethodInfo* method);
// 0x18238ff10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18238ffad: nop dword ptr [rax]
// asm:   0x182390000: jmp 0x18238ffb0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Code_AottgComponent_array *rows,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347add == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    Il2CppMethodInitialized_184347add = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  if (rows == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
  }
  (__this->fields)._rows = rows;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows,rows);
  if (Il2CppMethodInitialized_184347ae2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
    Il2CppMethodInitialized_184347ae2 = '\x01';
  }
  uVar3 = 0;
  pGVar1 = (__this->fields)._rows;
  while (pGVar1 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    if ((int)pGVar1->max_length <= (int)uVar3) {
      return;
    }
    pGVar1 = (__this->fields)._rows;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) break;
    if ((uint)pGVar1->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)pGVar1->m_Items[(int)uVar3],
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
    if (pIVar2 != (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_180026600(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware,pIVar2,1);
    }
    uVar3 = uVar3 + 1;
    pGVar1 = (__this->fields)._rows;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x18238f7d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347ade == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_Build_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_184347ade = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_Build_b__4_0,
             (MethodInfo *)0x0);
  id = (__this->fields)._id;
  if (Il2CppMethodInitialized_184347ae9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347ae9 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"clear",(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x18238f280
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18238f330: jmp 0x18238f2c3

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  System_String_o *local_38;
  System_String_o *pSStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  System_String_o *local_18;
  
  if (Il2CppMethodInitialized_184347adf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable);
    Il2CppMethodInitialized_184347adf = '\x01';
  }
  uVar3 = 0;
  pGVar1 = (__this->fields)._rows;
  while (pGVar1 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    if ((int)pGVar1->max_length <= (int)uVar3) {
      return;
    }
    pGVar1 = (__this->fields)._rows;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) break;
    if ((uint)pGVar1->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)pGVar1->m_Items[(int)uVar3],
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable);
    if (pIVar2 != (Il2CppObject *)0x0) {
      local_38 = (context->fields).ScreenTitle;
      pSStack_30 = (context->fields).CategoryId;
      local_28 = *(undefined4 *)&(context->fields).CategoryTitle;
      uStack_24 = *(undefined4 *)((longlong)&(context->fields).CategoryTitle + 4);
      uStack_20 = *(undefined4 *)&(context->fields).GroupId;
      uStack_1c = *(undefined4 *)((longlong)&(context->fields).GroupId + 4);
      local_18 = (context->fields).GroupTitle;
      il2cpp_runtime_helper_180359dd0(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable,pIVar2,&local_38);
    }
    uVar3 = uVar3 + 1;
    pGVar1 = (__this->fields)._rows;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x18238fdf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18238fe2f: nop 
// asm:   0x18238fe7f: jmp 0x18238fe30

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347ae0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync);
    Il2CppMethodInitialized_184347ae0 = '\x01';
  }
  uVar3 = 0;
  pGVar1 = (__this->fields)._rows;
  while (pGVar1 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    if ((int)pGVar1->max_length <= (int)uVar3) {
      return;
    }
    pGVar1 = (__this->fields)._rows;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) break;
    if ((uint)pGVar1->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)pGVar1->m_Items[(int)uVar3],
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync);
    if (pIVar2 != (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_180014780(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync,pIVar2,root);
    }
    uVar3 = uVar3 + 1;
    pGVar1 = (__this->fields)._rows;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$AddVirtualScrollItems
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__AddVirtualScrollItems (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, System_Collections_Generic_List_GisketchNodeDefinition__o* items, Gisketch_Aottg2UI_Code_AottgUi_o* owner, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x18238f030

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__AddVirtualScrollItems
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               System_Collections_Generic_List_GisketchNodeDefinition__o *items,
               Gisketch_Aottg2UI_Code_AottgUi_o *owner,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *context,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *ownerId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_48;
  
  if (Il2CppMethodInitialized_184347ae1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass7_0_AddVirtualScrollItem
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass7_0);
    Il2CppMethodInitialized_184347ae1 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass7_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    if ((items == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) ||
       (owner == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
      return;
    }
    local_48.fields.ScreenTitle = (context->fields).ScreenTitle;
    local_48.fields.CategoryId = (context->fields).CategoryId;
    local_48.fields.CategoryTitle = (context->fields).CategoryTitle;
    local_48.fields.GroupId = (context->fields).GroupId;
    local_48.fields.GroupTitle = (context->fields).GroupTitle;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplySearchContext
              (__this,&local_48,(MethodInfo *)0x0);
    (object->fields).i = 0;
    while (pGVar2 = (__this->fields)._rows, pGVar2 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      if (((int)pGVar2->max_length + 1) / 2 <= (object->fields).i) {
        return;
      }
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(object->fields).__9__0;
      if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this_00,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass7_0_AddVirtualScrollItem
                   ,(MethodInfo *)0x0);
        (object->fields).__9__0 = (System_Action_AottgUi__o *)__this_00;
        Il2CppCodeGenWriteBarrier(&(object->fields).__9__0,__this_00);
      }
      ownerId = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__PairId
                          (__this,(object->fields).i,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
                         (owner,(System_Action_AottgUi__o *)__this_00,ownerId,(MethodInfo *)0x0);
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
      if (pGVar3->max_length != 0) {
        if ((int)pGVar3->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        il2cpp_runtime_helper_180012890(items,pGVar3->m_Items[0]);
      }
      piVar1 = &(object->fields).i;
      *piVar1 = *piVar1 + 1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$ApplyCompactLayout
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplyCompactLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, const MethodInfo* method);
// 0x18238f1e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18238f266: jmp 0x18238f216

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplyCompactLayout
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347ae2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
    Il2CppMethodInitialized_184347ae2 = '\x01';
  }
  uVar3 = 0;
  pGVar1 = (__this->fields)._rows;
  while (pGVar1 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    if ((int)pGVar1->max_length <= (int)uVar3) {
      return;
    }
    pGVar1 = (__this->fields)._rows;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) break;
    if ((uint)pGVar1->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)pGVar1->m_Items[(int)uVar3],
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
    if (pIVar2 != (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_180026600(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware,pIVar2,1);
    }
    uVar3 = uVar3 + 1;
    pGVar1 = (__this->fields)._rows;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$RowsPerColumn
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__RowsPerColumn (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, const MethodInfo* method);
// 0x18238fd60

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__RowsPerColumn
                  (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  
  pGVar1 = (__this->fields)._rows;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    return ((int)pGVar1->max_length + 1) / 2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$BuildPair
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildPair (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t index, const MethodInfo* method);
// 0x18238f490

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildPair
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *str2;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t local_48 [10];
  
  if (Il2CppMethodInitialized_184347ae3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass10_0_BuildPair_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass10_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_184347ae3 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass10_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass10_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).index = index;
    pGVar1 = (__this->fields)._rows;
    if (pGVar1 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      (object->fields).rightIndex = ((int)pGVar1->max_length + 1) / 2 + index;
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass10_0_BuildPair_b__0
                 ,(MethodInfo *)0x0);
      local_48[0] = (object->fields).index;
      if (Il2CppMethodInitialized_184347ae6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"-pair-");
        Il2CppMethodInitialized_184347ae6 = '\x01';
      }
      pSVar2 = (__this->fields)._id;
      str2 = System_Int32__ToString(local_48,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969b70(pSVar2,"-pair-",str2,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184347aea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
        il2cpp_codegen_initialize_runtime_metadata(&"Row");
        Il2CppMethodInitialized_184347aea = '\x01';
      }
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,72.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",(System_Action_AottgUi__o *)__this_00,pSVar2,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$BuildCell
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildCell (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* pair, int32_t index, const MethodInfo* method);
// 0x18238f350

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildCell
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *pair,int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *str2;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t local_38 [6];
  
  if (Il2CppMethodInitialized_184347ae4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass11_0_BuildCell_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass11_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_184347ae4 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass11_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass11_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).index = index;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass11_0_BuildCell_b__0
               ,(MethodInfo *)0x0);
    local_38[0] = (object->fields).index;
    if (Il2CppMethodInitialized_184347ae7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"-cell-");
      Il2CppMethodInitialized_184347ae7 = '\x01';
    }
    pSVar1 = (__this->fields)._id;
    str2 = System_Int32__ToString(local_38,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969b70(pSVar1,"-cell-",str2,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellLayout((MethodInfo *)0x0);
    if (pair != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pair,"clear",(System_Action_AottgUi__o *)__this_00,pSVar1,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$BuildSpacer
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildSpacer (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* pair, int32_t index, const MethodInfo* method);
// 0x18238f700

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildSpacer
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *pair,int32_t index,MethodInfo *method)

{
  System_String_o *str2;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184347ae5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_184347ae5 = '\x01';
  }
  local_res18[0] = index;
  if (Il2CppMethodInitialized_184347ae8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-spacer-");
    Il2CppMethodInitialized_184347ae8 = '\x01';
  }
  pSVar1 = (__this->fields)._id;
  str2 = System_Int32__ToString(local_res18,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70(pSVar1,"-spacer-",str2,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellLayout((MethodInfo *)0x0);
  if (pair != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pair,"clear",(System_Action_AottgUi__o *)0x0,pSVar1,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$PairId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__PairId (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, int32_t index, const MethodInfo* method);
// 0x18238fbe0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__PairId
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,int32_t index,MethodInfo *method
          )

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  local_res10[0] = index;
  if (Il2CppMethodInitialized_184347ae6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-pair-");
    Il2CppMethodInitialized_184347ae6 = '\x01';
  }
  pSVar1 = (__this->fields)._id;
  str2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70(pSVar1,"-pair-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$CellId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellId (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, int32_t index, const MethodInfo* method);
// 0x18238f970

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellId
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,int32_t index,MethodInfo *method
          )

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  local_res10[0] = index;
  if (Il2CppMethodInitialized_184347ae7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-cell-");
    Il2CppMethodInitialized_184347ae7 = '\x01';
  }
  pSVar1 = (__this->fields)._id;
  str2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70(pSVar1,"-cell-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$SpacerId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__SpacerId (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, int32_t index, const MethodInfo* method);
// 0x18238fd90

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__SpacerId
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,int32_t index,MethodInfo *method
          )

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  local_res10[0] = index;
  if (Il2CppMethodInitialized_184347ae8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-spacer-");
    Il2CppMethodInitialized_184347ae8 = '\x01';
  }
  pSVar1 = (__this->fields)._id;
  str2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70(pSVar1,"-spacer-",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$MatrixLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__MatrixLayout (const MethodInfo* method);
// 0x18238fae0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__MatrixLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347ae9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347ae9 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$PairLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__PairLayout (const MethodInfo* method);
// 0x18238fc40

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__PairLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347aea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347aea = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,72.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$CellLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellLayout (const MethodInfo* method);
// 0x18238f9d0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__CellLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347aeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_184347aeb = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows$$<Build>b__4_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___Build_b__4_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* matrix, const MethodInfo* method);
// 0x18238fea0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18238feee: jmp 0x18238fec2

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___Build_b__4_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *matrix,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  int index;
  
  index = 0;
  pGVar1 = (__this->fields)._rows;
  while( true ) {
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      ThrowNullReferenceException();
    }
    if (((int)pGVar1->max_length + 1) / 2 <= index) break;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__BuildPair(__this,matrix,index,(MethodInfo *)0x0)
    ;
    pGVar1 = (__this->fields)._rows;
    index = index + 1;
  }
  return;
}



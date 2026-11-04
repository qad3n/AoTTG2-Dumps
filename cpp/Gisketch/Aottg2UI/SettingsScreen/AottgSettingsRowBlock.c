// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsRowBlock.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock.<>c__DisplayClass11_0$$<AddSingleColumnItems>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0___AddSingleColumnItems_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823a24d0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0___AddSingleColumnItems_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar3;
  
  pGVar2 = (__this->fields).__4__this;
  if ((pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) &&
     (pGVar3 = (pGVar2->fields)._rows, pGVar3 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)) {
    uVar1 = (__this->fields).i;
    if ((uint)pGVar3->max_length <= uVar1) {
      ThrowIndexOutOfRangeException();
    }
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component(row,pGVar3->m_Items[(int)uVar1],(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock.<>c__DisplayClass8_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0___ctor(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock.<>c__DisplayClass8_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0___Build_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* block, const MethodInfo* method);
// 0x1823a3360
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a33af: nop 
// asm:   0x1823a3481: jmp 0x1823a33b0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0___Build_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *block,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Il2CppObject *pIVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *pGVar3;
  uint uVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_38;
  
  if (Il2CppMethodInitialized_184347af7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable);
    Il2CppMethodInitialized_184347af7 = '\x01';
  }
  pGVar3 = (__this->fields).__4__this;
  if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
    if ((pGVar3->fields)._layoutMode == 0) {
      __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__MatrixRows
                            (pGVar3,(__this->fields).id,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) {
        local_38.fields.ScreenTitle = (__this->fields).context.fields.ScreenTitle;
        local_38.fields.CategoryId = (__this->fields).context.fields.CategoryId;
        local_38.fields.CategoryTitle = (__this->fields).context.fields.CategoryTitle;
        local_38.fields.GroupId = (__this->fields).context.fields.GroupId;
        local_38.fields.GroupTitle = (__this->fields).context.fields.GroupTitle;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplySearchContext
                  (__this_00,&local_38,(MethodInfo *)0x0);
        if (block != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Component
                    (block,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      uVar4 = 0;
      while (pGVar1 = (pGVar3->fields)._rows, pGVar1 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
        if ((int)pGVar1->max_length <= (int)uVar4) {
          return;
        }
        pGVar3 = (__this->fields).__4__this;
        if ((pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) ||
           (pGVar1 = (pGVar3->fields)._rows, pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0))
        break;
        if ((uint)pGVar1->max_length <= uVar4) {
label_1823a34f0:
          ThrowIndexOutOfRangeException();
        }
        pIVar2 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pGVar1->m_Items[(int)uVar4],
                            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable)
        ;
        if (pIVar2 != (Il2CppObject *)0x0) {
          local_38.fields.ScreenTitle = (__this->fields).context.fields.ScreenTitle;
          local_38.fields.CategoryId = (__this->fields).context.fields.CategoryId;
          local_38.fields.CategoryTitle = (__this->fields).context.fields.CategoryTitle;
          local_38.fields.GroupId = (__this->fields).context.fields.GroupId;
          local_38.fields.GroupTitle = (__this->fields).context.fields.GroupTitle;
          il2cpp_runtime_helper_180359dd0(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable,pIVar2,&local_38)
          ;
        }
        pGVar3 = (__this->fields).__4__this;
        if ((pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) ||
           (pGVar1 = (pGVar3->fields)._rows, pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0))
        break;
        if ((uint)pGVar1->max_length <= uVar4) goto label_1823a34f0;
        if (block == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
        Gisketch_Aottg2UI_Code_AottgUi__Component(block,pGVar1->m_Items[(int)uVar4],(MethodInfo *)0x0);
        pGVar3 = (__this->fields).__4__this;
        uVar4 = uVar4 + 1;
        if (pGVar3 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) break;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, int32_t layoutMode, Gisketch_Aottg2UI_Code_AottgComponent_array* rows, const MethodInfo* method);
// 0x182391210
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182391302: jmp 0x1823912b5

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,int32_t layoutMode,
               Gisketch_Aottg2UI_Code_AottgComponent_array *rows,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347aec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    Il2CppMethodInitialized_184347aec = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (rows == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
  }
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
    (__this->fields)._rows = rows;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rows,rows);
    if (Il2CppMethodInitialized_184347aef == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
      Il2CppMethodInitialized_184347aef = '\x01';
    }
    (__this->fields)._layoutMode = layoutMode;
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
                          (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware
                         );
      if (pIVar2 != (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_180026600(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware,pIVar2,
                      layoutMode == 0);
      }
      uVar3 = uVar3 + 1;
      pGVar1 = (__this->fields)._rows;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SingleColumn
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SingleColumn (Gisketch_Aottg2UI_Code_AottgComponent_array* rows, const MethodInfo* method);
// 0x182390c80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182390d3d: nop dword ptr [rax]
// asm:   0x182390d8d: jmp 0x182390d40

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SingleColumn
          (Gisketch_Aottg2UI_Code_AottgComponent_array *rows,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this;
  Il2CppObject *pIVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347aed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock);
    Il2CppMethodInitialized_184347aed = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock);
  if (Il2CppMethodInitialized_184347aec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    Il2CppMethodInitialized_184347aec = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (rows == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
  }
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
    (__this->fields)._rows = rows;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rows,rows);
    if (Il2CppMethodInitialized_184347aef == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
      Il2CppMethodInitialized_184347aef = '\x01';
    }
    (__this->fields)._layoutMode = 1;
    uVar3 = 0;
    pGVar1 = (__this->fields)._rows;
    while (pGVar1 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      if ((int)pGVar1->max_length <= (int)uVar3) {
        return __this;
      }
      pGVar1 = (__this->fields)._rows;
      if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) break;
      if ((uint)pGVar1->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)pGVar1->m_Items[(int)uVar3],
                          (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware
                         );
      if (pIVar2 != (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_180026600(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware,pIVar2,0);
      }
      uVar3 = uVar3 + 1;
      pGVar1 = (__this->fields)._rows;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$TwoColumn
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn (Gisketch_Aottg2UI_Code_AottgComponent_array* rows, const MethodInfo* method);
// 0x1823910e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239119d: nop dword ptr [rax]
// asm:   0x1823911f0: jmp 0x1823911a0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
          (Gisketch_Aottg2UI_Code_AottgComponent_array *rows,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this;
  Il2CppObject *pIVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347aee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock);
    Il2CppMethodInitialized_184347aee = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock);
  if (Il2CppMethodInitialized_184347aec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    Il2CppMethodInitialized_184347aec = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (rows == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
  }
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
    (__this->fields)._rows = rows;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._rows,rows);
    if (Il2CppMethodInitialized_184347aef == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
      Il2CppMethodInitialized_184347aef = '\x01';
    }
    (__this->fields)._layoutMode = 0;
    uVar3 = 0;
    pGVar1 = (__this->fields)._rows;
    while (pGVar1 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      if ((int)pGVar1->max_length <= (int)uVar3) {
        return __this;
      }
      pGVar1 = (__this->fields)._rows;
      if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) break;
      if ((uint)pGVar1->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)pGVar1->m_Items[(int)uVar3],
                          (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware
                         );
      if (pIVar2 != (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_180026600(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware,pIVar2,1);
      }
      uVar3 = uVar3 + 1;
      pGVar1 = (__this->fields)._rows;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$get_LayoutMode
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__get_LayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, const MethodInfo* method);
// 0x1808fb390

int32_t
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__get_LayoutMode(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, MethodInfo* method)

{
  return (UnityEngine_InputForUI_EventModifiers_Fields)
         (UnityEngine_InputForUI_EventModifiers_Fields)
         (__this->fields)._layoutMode.fields._state;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SetLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, int32_t layoutMode, const MethodInfo* method);
// 0x182390bc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182390c55: jmp 0x182390c08

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,int32_t layoutMode,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347aef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
    Il2CppMethodInitialized_184347aef = '\x01';
  }
  (__this->fields)._layoutMode = layoutMode;
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
      il2cpp_runtime_helper_180026600(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware,pIVar2,
                    layoutMode == 0);
    }
    uVar3 = uVar3 + 1;
    pGVar1 = (__this->fields)._rows;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x182390820

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *context,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347af0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass8_0_Build_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass8_0);
    il2cpp_codegen_initialize_runtime_metadata(&"-rows");
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347af0 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass8_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    pSVar3 = (context->fields).CategoryId;
    pSVar1 = (context->fields).CategoryTitle;
    pSVar2 = (context->fields).GroupId;
    (object->fields).context.fields.ScreenTitle = (context->fields).ScreenTitle;
    (object->fields).context.fields.CategoryId = pSVar3;
    pSVar3 = (context->fields).GroupTitle;
    (object->fields).context.fields.CategoryTitle = pSVar1;
    (object->fields).context.fields.GroupId = pSVar2;
    (object->fields).context.fields.GroupTitle = pSVar3;
    Il2CppCodeGenWriteBarrier((void **)&(object->fields).context,(void *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass8_0_Build_b__0
                 ,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_1969e50((object->fields).id,"-rows",(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",(System_Action_AottgUi__o *)__this_00,pSVar3,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$AddVirtualScrollItems
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddVirtualScrollItems (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, System_Collections_Generic_List_GisketchNodeDefinition__o* items, Gisketch_Aottg2UI_Code_AottgUi_o* owner, System_String_o* id, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, bool separateFromPreviousBlock, const MethodInfo* method);
// 0x182390540
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182390676: mov r12, qword ptr [rsp + 0xa0]
// asm:   0x18239067e: mov rdi, qword ptr [rsp + 0x98]
// asm:   0x182390686: mov rbp, qword ptr [rsp + 0x90]
// asm:   0x18239068e: mov r15, qword ptr [rsp + 0x60]

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddVirtualScrollItems
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,
               System_Collections_Generic_List_GisketchNodeDefinition__o *items,
               Gisketch_Aottg2UI_Code_AottgUi_o *owner,System_String_o *id,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *context,
               bool separateFromPreviousBlock,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t index;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_58;
  
  if (Il2CppMethodInitialized_184347af1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"-start");
    Il2CppMethodInitialized_184347af1 = '\x01';
  }
  if ((items != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
     (owner != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
    index = (items->fields)._size;
    if ((__this->fields)._layoutMode == 0) {
      __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__MatrixRows
                            (__this,id,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) {
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
                            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass7_0
                           );
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
        if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows___c__DisplayClass7_0_o *)0x0)
        {
          (object->fields).__4__this = __this_00;
          Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this_00);
          local_58.fields.ScreenTitle = (context->fields).ScreenTitle;
          local_58.fields.CategoryId = (context->fields).CategoryId;
          local_58.fields.CategoryTitle = (context->fields).CategoryTitle;
          local_58.fields.GroupId = (context->fields).GroupId;
          local_58.fields.GroupTitle = (context->fields).GroupTitle;
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplySearchContext
                    (__this_00,&local_58,(MethodInfo *)0x0);
          (object->fields).i = 0;
          while (pGVar2 = (__this_00->fields)._rows,
                pGVar2 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
            if (((int)pGVar2->max_length + 1) / 2 <= (object->fields).i) goto label_18239061c;
            __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                        (object->fields).__9__0;
            if (__this_01 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
              __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                          il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
              System_Action_object____ctor
                        (__this_01,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_c__DisplayClass7_0_AddVirtualScrollItem
                         ,(MethodInfo *)0x0);
              (object->fields).__9__0 = (System_Action_AottgUi__o *)__this_01;
              Il2CppCodeGenWriteBarrier(&(object->fields).__9__0,__this_01);
            }
            pSVar4 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__PairId
                               (__this_00,(object->fields).i,(MethodInfo *)0x0);
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
                               (owner,(System_Action_AottgUi__o *)__this_01,pSVar4,(MethodInfo *)0x0);
            if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) break;
            if (pGVar5->max_length != 0) {
              if ((int)pGVar5->max_length == 0) {
                ThrowIndexOutOfRangeException();
              }
              il2cpp_runtime_helper_180012890(items,pGVar5->m_Items[0]);
            }
            piVar1 = &(object->fields).i;
            *piVar1 = *piVar1 + 1;
          }
        }
      }
      ThrowNullReferenceException();
    }
    local_58.fields.ScreenTitle = (context->fields).ScreenTitle;
    local_58.fields.CategoryId = (context->fields).CategoryId;
    local_58.fields.CategoryTitle = (context->fields).CategoryTitle;
    local_58.fields.GroupId = (context->fields).GroupId;
    local_58.fields.GroupTitle = (context->fields).GroupTitle;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddSingleColumnItems
              (__this,items,owner,id,&local_58,(MethodInfo *)0x0);
label_18239061c:
    if ((separateFromPreviousBlock) && (index < (items->fields)._size)) {
      pGVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)items,index,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_get_Item);
      pSVar4 = System_String__Concat_1969e50(id,"-start",(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SpacedItem
                         (pGVar3,pSVar4,(MethodInfo *)0x0);
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)items,index,(Il2CppObject *)pGVar3,
                 (MethodInfo_950000 *)
                 MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_set_Item);
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x182391000
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823910bd: jmp 0x182391070
// asm:   0x1823910bf: mov rbx, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347af2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347af2 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  uVar4 = 0;
  pGVar1 = (__this->fields)._rows;
  while (pGVar1 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    if ((int)pGVar1->max_length <= (int)uVar4) {
      return;
    }
    pGVar1 = (__this->fields)._rows;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) break;
    if ((uint)pGVar1->max_length <= uVar4) {
      ThrowIndexOutOfRangeException();
    }
    pIVar3 = il2cpp_vm_Object_IsInst
                       ((Il2CppObject *)pGVar1->m_Items[(int)uVar4],
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync);
    if (pIVar3 != (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_180014780(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync,pIVar3,root);
    }
    uVar4 = uVar4 + 1;
    pGVar1 = (__this->fields)._rows;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$AddSingleColumnItems
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddSingleColumnItems (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, System_Collections_Generic_List_GisketchNodeDefinition__o* items, Gisketch_Aottg2UI_Code_AottgUi_o* owner, System_String_o* id, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x182390270

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddSingleColumnItems
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,
               System_Collections_Generic_List_GisketchNodeDefinition__o *items,
               Gisketch_Aottg2UI_Code_AottgUi_o *owner,System_String_o *id,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *context,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0_o *object;
  Il2CppObject *pIVar4;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  System_String_o *local_58;
  System_String_o *pSStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_184347af3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsVirtualItemSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass11_0_AddSingleColumnItems
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass11_0);
    il2cpp_codegen_initialize_runtime_metadata(&"-virtual-row-");
    il2cpp_codegen_initialize_runtime_metadata(&"-row-");
    Il2CppMethodInitialized_184347af3 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass11_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    (object->fields).i = 0;
label_182390350:
    do {
      pGVar3 = (__this->fields)._rows;
      if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) break;
      if ((int)pGVar3->max_length <= (object->fields).i) {
        return;
      }
      pGVar3 = (__this->fields)._rows;
      uVar2 = (object->fields).i;
      if ((uint)pGVar3->max_length <= uVar2) {
label_182390527:
        ThrowIndexOutOfRangeException();
      }
      if (pGVar3->m_Items[(int)uVar2] != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pGVar3->m_Items[(object->fields).i],
                            (Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsVirtualItemSource);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pGVar3 = (__this->fields)._rows;
          if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) break;
          uVar2 = (object->fields).i;
          if ((uint)pGVar3->max_length <= uVar2) goto label_182390527;
          pIVar4 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pGVar3->m_Items[(int)uVar2],
                              (Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable);
          if (pIVar4 != (Il2CppObject *)0x0) {
            local_58 = (context->fields).ScreenTitle;
            pSStack_50 = (context->fields).CategoryId;
            local_48 = *(undefined4 *)&(context->fields).CategoryTitle;
            uStack_44 = *(undefined4 *)((longlong)&(context->fields).CategoryTitle + 4);
            uStack_40 = *(undefined4 *)&(context->fields).GroupId;
            uStack_3c = *(undefined4 *)((longlong)&(context->fields).GroupId + 4);
            local_38 = (context->fields).GroupTitle;
            il2cpp_runtime_helper_180359dd0(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable,pIVar4);
          }
          __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                      (object->fields).__9__0;
          if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
            __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
            System_Action_object____ctor
                      (__this_00,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass11_0_AddSingleColumnItems
                       ,(MethodInfo *)0x0);
            (object->fields).__9__0 = (System_Action_AottgUi__o *)__this_00;
            Il2CppCodeGenWriteBarrier(&(object->fields).__9__0,__this_00);
          }
          pSVar5 = System_Int32__ToString(&(object->fields).i,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat_1969b70(id,"-row-",pSVar5,(MethodInfo *)0x0);
          if (owner == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
          nodes = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
                            (owner,(System_Action_AottgUi__o *)__this_00,pSVar5,(MethodInfo *)0x0);
          pSVar5 = System_Int32__ToString(&(object->fields).i,(MethodInfo *)0x0);
          pSVar5 = System_String__Concat_1969b70(id,"-virtual-row-",pSVar5,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddItemNodes
                    (items,nodes,pSVar5,(MethodInfo *)0x0);
          piVar1 = &(object->fields).i;
          *piVar1 = *piVar1 + 1;
          goto label_182390350;
        }
        local_58 = (context->fields).ScreenTitle;
        pSStack_50 = (context->fields).CategoryId;
        local_48 = *(undefined4 *)&(context->fields).CategoryTitle;
        uStack_44 = *(undefined4 *)((longlong)&(context->fields).CategoryTitle + 4);
        uStack_40 = *(undefined4 *)&(context->fields).GroupId;
        uStack_3c = *(undefined4 *)((longlong)&(context->fields).GroupId + 4);
        local_38 = (context->fields).GroupTitle;
        il2cpp_runtime_helper_180359e80(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsVirtualItemSource,pIVar4,items
                      ,owner,&local_58);
      }
      piVar1 = &(object->fields).i;
      *piVar1 = *piVar1 + 1;
    } while( true );
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$MatrixRows
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__MatrixRows (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, System_String_o* id, const MethodInfo* method);
// 0x182390a50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182390b93: jmp 0x182390b43

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__MatrixRows
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,System_String_o *id,
          MethodInfo *method)

{
  System_String_o *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar1;
  Il2CppObject *pIVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347af4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows);
    il2cpp_codegen_initialize_runtime_metadata(&"-matrix");
    Il2CppMethodInitialized_184347af4 = '\x01';
  }
  value = System_String__Concat_1969e50(id,"-matrix",(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._rows;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows);
  if (Il2CppMethodInitialized_184347add == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    Il2CppMethodInitialized_184347add = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._id = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._id,value);
  if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    pGVar1 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
  }
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) {
    (__this_00->fields)._rows = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._rows,pGVar1);
    if (Il2CppMethodInitialized_184347ae2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
      Il2CppMethodInitialized_184347ae2 = '\x01';
    }
    uVar3 = 0;
    pGVar1 = (__this_00->fields)._rows;
    while (pGVar1 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      if ((int)pGVar1->max_length <= (int)uVar3) {
        return __this_00;
      }
      pGVar1 = (__this_00->fields)._rows;
      if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) break;
      if ((uint)pGVar1->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pIVar2 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)pGVar1->m_Items[(int)uVar3],
                          (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware
                         );
      if (pIVar2 != (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_180026600(0,TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware,pIVar2,1);
      }
      uVar3 = uVar3 + 1;
      pGVar1 = (__this_00->fields)._rows;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SpacedItem
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SpacedItem (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* item, System_String_o* id, const MethodInfo* method);
// 0x182390db0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SpacedItem
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *item,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value_00;
  
  if (Il2CppMethodInitialized_184347af5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsSpacingBefore");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_184347af5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Panel");
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
    (__this->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style,"clear");
    (__this->fields).value = "SettingsSpacingBefore";
    Il2CppCodeGenWriteBarrier(&(__this->fields).value,"SettingsSpacingBefore");
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,"Stretch",
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    (__this->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).layout,value);
    value_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
    if (value_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      if ((int)value_00->max_length != 0) {
        value_00->m_Items[0] = item;
        Il2CppCodeGenWriteBarrier(value_00->m_Items,item);
        (__this->fields).children = value_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).children,value_00);
        return __this;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$AddItemNodes
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddItemNodes (System_Collections_Generic_List_GisketchNodeDefinition__o* items, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, System_String_o* id, const MethodInfo* method);
// 0x182390020
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182390218: mov r8, qword ptr [rip + 0x1d14931]  ; MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add
// asm:   0x18239021f: mov rdx, rsi

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddItemNodes
               (System_Collections_Generic_List_GisketchNodeDefinition__o *items,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,System_String_o *id,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184347af6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_184347af6 = '\x01';
  }
  if ((nodes != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) && (nodes->max_length != 0)) {
    if ((int)nodes->max_length == 1) {
      if ((int)nodes->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      if (items == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) goto label_18239025f;
      __this = nodes->m_Items[0];
    }
    else {
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
      if (__this == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_18239025f:
        ThrowNullReferenceException();
      }
      (__this->fields).type = "Panel";
      Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Panel");
      (__this->fields).id = id;
      Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
      (__this->fields).style = "clear";
      Il2CppCodeGenWriteBarrier(&(__this->fields).style,"clear");
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
      value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                        ("Column",(System_String_o *)0x0,"Stretch",
                         (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                         (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                         0.0,0.0,(MethodInfo *)0x0);
      (__this->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).layout,value);
      (__this->fields).children = nodes;
      Il2CppCodeGenWriteBarrier(&(__this->fields).children,nodes);
      if (items == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) goto label_18239025f;
    }
    il2cpp_runtime_helper_180012890(items,__this,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
  }
  return;
}



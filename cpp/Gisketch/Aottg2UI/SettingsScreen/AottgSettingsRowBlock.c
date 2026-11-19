// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsRowBlock.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x5e4a0f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock.<>c__DisplayClass11_0$$<AddSingleColumnItems>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0___AddSingleColumnItems_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x5e4a3a0

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
// 0x5e49a40

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock.<>c__DisplayClass8_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0___Build_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* block, const MethodInfo* method);
// 0x5e4a3e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4a4bf: nop 
// asm:   0x5e4a561: jmp 0x5e4a5c7

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0___Build_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *block,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_Fields context;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this_00;
  ulong uVar6;
  MethodInfo *extraout_RDX;
  ulong uVar7;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *pGVar8;
  long lVar9;
  
  if (Il2CppMethodInitialized_07548619 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable);
    Il2CppMethodInitialized_07548619 = '\x01';
    method = extraout_RDX;
  }
  pGVar8 = (__this->fields).__4__this;
  if (pGVar8 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
    if ((pGVar8->fields)._layoutMode == 0) {
      method_00 = (MethodInfo *)(__this->fields).id;
      __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__MatrixRows
                            (pGVar8,(System_String_o *)method_00,method);
      if ((__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) &&
         (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplySearchContext
                    (__this_00,
                     (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o)
                     (__this->fields).context.fields,method_00),
         block != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (block,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      uVar7 = 0;
      while (pGVar2 = (pGVar8->fields)._rows, pGVar2 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
        uVar1 = (uint)pGVar2->max_length;
        if ((long)(int)uVar1 <= (long)uVar7) {
          return;
        }
        if (uVar1 <= uVar7) {
label_05e4a5cc:
          ThrowIndexOutOfRangeException();
        }
        obj = il2cpp_vm_Object_IsInst
                        ((Il2CppObject *)pGVar2->m_Items[uVar7],
                         (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable);
        if (obj != (Il2CppObject *)0x0) {
          context = (__this->fields).context.fields;
          pIVar3 = obj->klass;
          uVar6 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar6 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            lVar9 = 0;
            do {
              if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable_c **)
                   ((long)&pIVar4->interfaceType + lVar9) ==
                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable) {
                pVVar5 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar9);
                goto label_05e4a4ed;
              }
              lVar9 = lVar9 + 0x10;
            } while (uVar6 * 0x10 != lVar9);
          }
          pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)
                                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable,0);
label_05e4a4ed:
          (*pVVar5->methodPtr)
                    (obj,(Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o)context,pVVar5->method
                    );
        }
        pGVar8 = (__this->fields).__4__this;
        if ((pGVar8 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) ||
           (pGVar2 = (pGVar8->fields)._rows, pGVar2 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0))
        break;
        if ((uint)pGVar2->max_length <= uVar7) goto label_05e4a5cc;
        if (block == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
        Gisketch_Aottg2UI_Code_AottgUi__Component(block,pGVar2->m_Items[uVar7],(MethodInfo *)0x0);
        uVar7 = uVar7 + 1;
        pGVar8 = (__this->fields).__4__this;
        if (pGVar8 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) break;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, int32_t layoutMode, Gisketch_Aottg2UI_Code_AottgComponent_array* rows, const MethodInfo* method);
// 0x5e499b0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,int32_t layoutMode,
               Gisketch_Aottg2UI_Code_AottgComponent_array *rows,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754860e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    Il2CppMethodInitialized_0754860e = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (rows == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
  }
  if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._rows = rows;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode(__this,layoutMode,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SingleColumn
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SingleColumn (Gisketch_Aottg2UI_Code_AottgComponent_array* rows, const MethodInfo* method);
// 0x5e48ed0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SingleColumn
          (Gisketch_Aottg2UI_Code_AottgComponent_array *rows,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754860f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock);
    Il2CppMethodInitialized_0754860f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock);
  if (Il2CppMethodInitialized_0754860e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    Il2CppMethodInitialized_0754860e = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (rows == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
  }
  if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._rows = rows;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode(__this,1,method_00);
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$TwoColumn
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn (Gisketch_Aottg2UI_Code_AottgComponent_array* rows, const MethodInfo* method);
// 0x5e40ca0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn
          (Gisketch_Aottg2UI_Code_AottgComponent_array *rows,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548610 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock);
    Il2CppMethodInitialized_07548610 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock);
  if (Il2CppMethodInitialized_0754860e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    Il2CppMethodInitialized_0754860e = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (rows == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    rows = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
  }
  if (__this == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._rows = rows;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rows);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode(__this,0,method_00);
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$get_LayoutMode
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__get_LayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, const MethodInfo* method);
// 0x5e49a30

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__get_LayoutMode
                  (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,MethodInfo *method)

{
  return (__this->fields)._layoutMode;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SetLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, int32_t layoutMode, const MethodInfo* method);
// 0x5e41270
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e4132c: nop dword ptr [rax]
// asm:   0x5e4133f: jmp 0x5e412c0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,int32_t layoutMode,
               MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar5;
  Il2CppObject *obj;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_07548611 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
    Il2CppMethodInitialized_07548611 = '\x01';
  }
  (__this->fields)._layoutMode = layoutMode;
  pGVar5 = (__this->fields)._rows;
  if (pGVar5 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    uVar7 = 0;
    do {
      uVar1 = (uint)pGVar5->max_length;
      if ((long)(int)uVar1 <= (long)uVar7) {
        return;
      }
      if (uVar1 <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      obj = il2cpp_vm_Object_IsInst
                      ((Il2CppObject *)pGVar5->m_Items[uVar7],
                       (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware);
      if (obj != (Il2CppObject *)0x0) {
        pIVar2 = obj->klass;
        uVar6 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar6 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar8 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware_c **)
                 ((long)&pIVar3->interfaceType + lVar8) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware) {
              pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar8);
              goto label_05e412ca;
            }
            lVar8 = lVar8 + 0x10;
          } while (uVar6 * 0x10 != lVar8);
        }
        pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingRowLayoutAware,0);
label_05e412ca:
        (*pVVar4->methodPtr)(obj,(uint)(layoutMode == 0),pVVar4->method);
      }
      uVar7 = uVar7 + 1;
      pGVar5 = (__this->fields)._rows;
    } while (pGVar5 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5e426e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0_o *__this_00;
  System_Action_AottgUi__o *__this_01;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07548612 == '\0') {
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
    Il2CppMethodInitialized_07548612 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass8_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass8_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
  (__this_00->fields).context.fields.GroupTitle = context.fields.GroupTitle;
  (__this_00->fields).context.fields.CategoryTitle = context.fields.CategoryTitle;
  (__this_00->fields).context.fields.GroupId = context.fields.GroupId;
  (__this_00->fields).context.fields.ScreenTitle = context.fields.ScreenTitle;
  (__this_00->fields).context.fields.CategoryId = context.fields.CategoryId;
  Il2CppCodeGenWriteBarrier((void **)&(__this_00->fields).context);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass8_0_Build_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    id_00 = System_String__Concat_52f0320((__this_00->fields).id,"-rows",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,6.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"clear",__this_01,id_00,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$AddVirtualScrollItems
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddVirtualScrollItems (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, System_Collections_Generic_List_GisketchNodeDefinition__o* items, Gisketch_Aottg2UI_Code_AottgUi_o* owner, System_String_o* id, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, bool separateFromPreviousBlock, const MethodInfo* method);
// 0x5e421d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e42282: jmp 0x5e42331

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddVirtualScrollItems
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,
               System_Collections_Generic_List_GisketchNodeDefinition__o *items,
               Gisketch_Aottg2UI_Code_AottgUi_o *owner,System_String_o *id,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,
               bool separateFromPreviousBlock,MethodInfo *method)

{
  int index;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *id_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined3 in_register_00000081;
  undefined4 uVar2;
  undefined4 in_register_00000084;
  
  uVar2 = CONCAT31(in_register_00000081,separateFromPreviousBlock);
  method_00 = (MethodInfo *)owner;
  if (Il2CppMethodInitialized_07548613 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"-start");
    Il2CppMethodInitialized_07548613 = '\x01';
    method_00 = extraout_RDX;
  }
  if ((items != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) &&
     (owner != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
    index = (items->fields)._size;
    if ((__this->fields)._layoutMode == 0) {
      __this_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__MatrixRows(__this,id,method_00);
      if (__this_00 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *)0x0) {
        ThrowNullReferenceException();
      }
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__AddVirtualScrollItems
                (__this_00,items,owner,context,(MethodInfo *)context.fields.GroupTitle);
    }
    else {
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddSingleColumnItems
                (__this,items,owner,id,context,(MethodInfo *)CONCAT44(in_register_00000084,uVar2));
    }
    if ((separateFromPreviousBlock) && (index < (items->fields)._size)) {
      pGVar1 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)items,index,
                          (MethodInfo_395CF20 *)
                          MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_get_Item);
      id_00 = System_String__Concat_52f0320(id,"-start",(MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SpacedItem(pGVar1,id_00,method_01);
      System_Collections_Generic_List_object___set_Item
                ((System_Collections_Generic_List_object__o *)items,index,(Il2CppObject *)pGVar1,
                 (MethodInfo_395CF60 *)
                 MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_set_Item);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e419d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e41adf: jmp 0x5e41a60

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar6;
  Il2CppObject *obj;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if (Il2CppMethodInitialized_07548614 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548614 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pGVar6 = (__this->fields)._rows;
  if (pGVar6 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    uVar8 = 0;
    do {
      uVar1 = (uint)pGVar6->max_length;
      if ((long)(int)uVar1 <= (long)uVar8) {
        return;
      }
      if (uVar1 <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      obj = il2cpp_vm_Object_IsInst
                      ((Il2CppObject *)pGVar6->m_Items[uVar8],
                       (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync);
      if (obj != (Il2CppObject *)0x0) {
        pIVar2 = obj->klass;
        uVar7 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar7 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync_c **)
                 ((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync) {
              pVVar5 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_05e41a6a;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar7 * 0x10 != lVar9);
        }
        pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync,0);
label_05e41a6a:
        (*pVVar5->methodPtr)(obj,root,pVVar5->method);
      }
      uVar8 = uVar8 + 1;
      pGVar6 = (__this->fields)._rows;
    } while (pGVar6 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$AddSingleColumnItems
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddSingleColumnItems (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, System_Collections_Generic_List_GisketchNodeDefinition__o* items, Gisketch_Aottg2UI_Code_AottgUi_o* owner, System_String_o* id, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5e49b30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e49c5c: lea r15, [rip + 0x142f19d]  ; TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsVirtualItemSource
// asm:   0x5e49ce3: jmp 0x5e49c20

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddSingleColumnItems
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,
               System_Collections_Generic_List_GisketchNodeDefinition__o *items,
               Gisketch_Aottg2UI_Code_AottgUi_o *owner,System_String_o *id,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,MethodInfo *method)

{
  int32_t *__this_00;
  uint uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0_o *__this_01;
  VirtualInvokeData *pVVar4;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar5;
  Il2CppObject *pIVar6;
  System_Action_AottgUi__o *__this_02;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  uint uVar8;
  System_Action_AottgUi__o **targetAddress;
  ulong uVar9;
  MethodInfo *method_00;
  long lVar10;
  
  if (Il2CppMethodInitialized_07548615 == '\0') {
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
    Il2CppMethodInitialized_07548615 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass11_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock___c__DisplayClass11_0_o *)0x0) {
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    (__this_01->fields).i = 0;
    pGVar5 = (__this->fields)._rows;
    if (pGVar5 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      __this_00 = &(__this_01->fields).i;
      targetAddress = &(__this_01->fields).__9__0;
      uVar8 = 0;
      do {
        uVar1 = (uint)pGVar5->max_length;
        if ((int)uVar1 <= (int)uVar8) {
          return;
        }
        if (uVar1 <= uVar8) {
label_05e49ec2:
          ThrowIndexOutOfRangeException();
        }
        if ((Il2CppObject *)pGVar5->m_Items[(int)uVar8] != (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)pGVar5->m_Items[(int)uVar8],
                              (Il2CppClass *)
                              TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsVirtualItemSource);
          if (pIVar6 == (Il2CppObject *)0x0) {
            pGVar5 = (__this->fields)._rows;
            if (pGVar5 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) break;
            if ((uint)pGVar5->max_length <= (uint)*__this_00) goto label_05e49ec2;
            pIVar6 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pGVar5->m_Items[*__this_00],
                                (Il2CppClass *)
                                TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable);
            if (pIVar6 != (Il2CppObject *)0x0) {
              pIVar2 = pIVar6->klass;
              uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
              if (uVar9 != 0) {
                pIVar3 = (pIVar2->_1).interfaceOffsets;
                lVar10 = 0;
                do {
                  if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable_c **)
                       ((long)&pIVar3->interfaceType + lVar10) ==
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable) {
                    pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
                    goto label_05e49dc4;
                  }
                  lVar10 = lVar10 + 0x10;
                } while (uVar9 * 0x10 != lVar10);
              }
              pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                                 (pIVar6,(Il2CppClass *)
                                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsSearchable,0)
              ;
label_05e49dc4:
              (*pVVar4->methodPtr)(pIVar6,context,pVVar4->method);
            }
            __this_02 = *targetAddress;
            if (__this_02 == (System_Action_AottgUi__o *)0x0) {
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
              System_Action_object____ctor
                        ((System_Action_object__o *)__this_02,(Il2CppObject *)__this_01,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_c__DisplayClass11_0_AddSingleColumnItems
                         ,(MethodInfo_4A81BE0 *)0x0);
              (__this_01->fields).__9__0 = __this_02;
              Il2CppCodeGenWriteBarrier(targetAddress);
            }
            pSVar7 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
            pSVar7 = System_String__Concat_5301f10(id,"-row-",pSVar7,(MethodInfo *)0x0);
            if (owner == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
            nodes = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached(owner,__this_02,pSVar7,(MethodInfo *)0x0);
            pSVar7 = System_Int32__ToString(__this_00,(MethodInfo *)0x0);
            method_00 = (MethodInfo *)0x0;
            pSVar7 = System_String__Concat_5301f10(id,"-virtual-row-",pSVar7,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddItemNodes(items,nodes,pSVar7,method_00)
            ;
          }
          else {
            pIVar2 = pIVar6->klass;
            uVar9 = (ulong)(pIVar2->_2).interface_offsets_count;
            if (uVar9 != 0) {
              pIVar3 = (pIVar2->_1).interfaceOffsets;
              lVar10 = 0;
              do {
                if (*(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsVirtualItemSource_c **)
                     ((long)&pIVar3->interfaceType + lVar10) ==
                    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsVirtualItemSource) {
                  pVVar4 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar10);
                  goto label_05e49c2a;
                }
                lVar10 = lVar10 + 0x10;
              } while (uVar9 * 0x10 != lVar10);
            }
            pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath
                               (pIVar6,(Il2CppClass *)
                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsVirtualItemSource
                                ,0);
label_05e49c2a:
            (*pVVar4->methodPtr)(pIVar6,items,owner,context,pVVar4->method);
          }
        }
        uVar8 = *__this_00 + 1;
        *__this_00 = uVar8;
        pGVar5 = (__this->fields)._rows;
      } while (pGVar5 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$MatrixRows
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__MatrixRows (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o* __this, System_String_o* id, const MethodInfo* method);
// 0x5e49a50

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__MatrixRows
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this,System_String_o *id,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgComponent_array *method_00;
  
  if (Il2CppMethodInitialized_07548616 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows);
    il2cpp_codegen_initialize_runtime_metadata(&"-matrix");
    Il2CppMethodInitialized_07548616 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320(id,"-matrix",(MethodInfo *)0x0);
  method_00 = (__this->fields)._rows;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows);
  if (Il2CppMethodInitialized_075485f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    Il2CppMethodInitialized_075485f7 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._id = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._id);
  if (method_00 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
    method_00 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
  }
  (__this_00->fields)._rows = method_00;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._rows);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMatrixRows__ApplyCompactLayout
            (__this_00,(MethodInfo *)method_00);
  return __this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$SpacedItem
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SpacedItem (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* item, System_String_o* id, const MethodInfo* method);
// 0x5e49ed0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SpacedItem
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *item,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (Il2CppMethodInitialized_07548617 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsSpacingBefore");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_07548617 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).style = "clear";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style);
    (__this->fields).value = "SettingsSpacingBefore";
    Il2CppCodeGenWriteBarrier(&(__this->fields).value);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    (__this->fields).layout = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      if ((int)pGVar2->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pGVar2->m_Items[0] = item;
      Il2CppCodeGenWriteBarrier(pGVar2->m_Items);
      (__this->fields).children = pGVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).children);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock$$AddItemNodes
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddItemNodes (System_Collections_Generic_List_GisketchNodeDefinition__o* items, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, System_String_o* id, const MethodInfo* method);
// 0x5e4a100

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddItemNodes
               (System_Collections_Generic_List_GisketchNodeDefinition__o *items,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,System_String_o *id,
               MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **ppGVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  MethodInfo *pMVar6;
  
  if (Il2CppMethodInitialized_07548618 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_07548618 = '\x01';
  }
  pMVar6 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
  if ((nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) || (nodes->max_length == 0)) {
    return;
  }
  if ((int)nodes->max_length == 1) {
    if (items != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      __this = nodes->m_Items[0];
      piVar1 = &(items->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar4 = (items->fields)._items;
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        uVar3 = (items->fields)._size;
        if ((uint)pGVar4->max_length <= uVar3) {
          pMVar6 = pMVar6->klass->rgctx_data[0xe].method;
label_05e4a380:
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)items,(Il2CppObject *)__this,
                     (MethodInfo_395D230 *)pMVar6);
          return;
        }
        (items->fields)._size = uVar3 + 1;
        ppGVar2 = pGVar4->m_Items + (long)(int)uVar3 + -4;
        pGVar4->m_Items[(int)uVar3] = __this;
label_05e4a347:
        Il2CppCodeGenWriteBarrier(ppGVar2 + 4);
        return;
      }
    }
  }
  else {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this->fields).type = "Panel";
      Il2CppCodeGenWriteBarrier(&(__this->fields).type);
      (__this->fields).id = id;
      Il2CppCodeGenWriteBarrier(&(__this->fields).id);
      (__this->fields).style = "clear";
      Il2CppCodeGenWriteBarrier(&(__this->fields).style);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (__this->fields).layout = pGVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
      (__this->fields).children = nodes;
      Il2CppCodeGenWriteBarrier(&(__this->fields).children);
      pMVar6 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
      if (items != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
        piVar1 = &(items->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar4 = (items->fields)._items;
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          uVar3 = (items->fields)._size;
          if ((uint)pGVar4->max_length <= uVar3) {
            pMVar6 = pMVar6->klass->rgctx_data[0xe].method;
            goto label_05e4a380;
          }
          (items->fields)._size = uVar3 + 1;
          ppGVar2 = pGVar4->m_Items + (long)(int)uVar3 + -4;
          pGVar4->m_Items[(int)uVar3] = __this;
          goto label_05e4a347;
        }
      }
    }
  }
  ThrowNullReferenceException();
}



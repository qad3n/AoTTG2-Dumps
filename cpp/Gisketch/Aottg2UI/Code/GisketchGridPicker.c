// Type: Gisketch.Aottg2UI.Code.GisketchGridPicker
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchGridPicker.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchGridPicker.RuntimeDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, int32_t columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, float viewportHeight, bool lazyLoadThumbnails, System_Action_GisketchActionContext__GisketchGridPickerItem__o* select, bool releaseThumbnails, const MethodInfo* method);
// 0x536b930

void Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items,int32_t columns,float itemWidth,
               float itemHeight,float thumbnailWidth,float thumbnailHeight,float viewportHeight,
               bool lazyLoadThumbnails,System_Action_GisketchActionContext__GisketchGridPickerItem__o *select,
               bool releaseThumbnails,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).ReleaseThumbnails = releaseThumbnails;
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Id);
  (__this->fields).Items = items;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Items);
  (__this->fields).Columns = columns;
  (__this->fields).ItemWidth = itemWidth;
  (__this->fields).ItemHeight = itemHeight;
  (__this->fields).ThumbnailWidth = thumbnailWidth;
  (__this->fields).ThumbnailHeight = thumbnailHeight;
  (__this->fields).ViewportHeight = viewportHeight;
  (__this->fields).LazyLoadThumbnails = lazyLoadThumbnails;
  (__this->fields).Select = select;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Select);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x536bc50

void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass23_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker.<>c__DisplayClass23_0$$<BuildSearch>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass23_0___BuildSearch_b__0 (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass23_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x536cab0

void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass23_0___BuildSearch_b__0
               (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass23_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *pGVar1;
  System_String_o *pickerId;
  System_String_o *inputId;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07542a31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    Il2CppMethodInitialized_07542a31 = '\x01';
    in_RDX = extraout_RDX;
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *)0x0) {
    ThrowNullReferenceException();
  }
  pickerId = (pGVar1->fields)._id;
  inputId = (__this->fields).inputId;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    in_RDX = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter(context,pickerId,inputId,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___cctor (const MethodInfo* method);
// 0x536af80
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x536b194: jmp 0x536b21d
// asm:   0x536b200: lea rax, [rip + 0x1f20509]  ; MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_set_Item
// asm:   0x536b207: mov rcx, qword ptr [rax]
// asm:   0x536b20a: mov rsi, r14
// asm:   0x536b20d: mov rdx, r15
// asm:   0x536b210: pop rbx
// asm:   0x536b211: pop r12
// asm:   0x536b213: pop r14
// asm:   0x536b215: pop r15
// asm:   0x536b217: pop rbp
// asm:   0x536b218: jmp 0x4bad4c0  ; System_Collections_Generic_Dictionary_object__object___set_Item()

void Gisketch_Aottg2UI_Code_GisketchGridPicker___cctor(MethodInfo *method)

{
  uint8_t uVar1;
  uint32_t uVar2;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *pGVar3;
  undefined8 uVar4;
  System_String_o *value;
  MethodInfo *pMVar5;
  char cVar6;
  bool bVar7;
  System_Collections_Generic_Dictionary_object__object__o *pSVar8;
  Il2CppObject *pIVar9;
  undefined1 *puVar10;
  
  if (Il2CppMethodInitialized_07542a27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"GridPickerRuntime");
    Il2CppMethodInitialized_07542a27 = '\x01';
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor != 0) goto label_0536afac;
label_0536b12d:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (g_data_07542886 != '\0') goto label_0536afb9;
label_0536b13f:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    g_data_07542886 = '\x01';
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) goto label_0536b12d;
label_0536afac:
    if (g_data_07542886 == '\0') goto label_0536b13f;
label_0536afb9:
    uVar2 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition
                     );
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            (pSVar8,(System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_ctor
            );
  TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->static_fields->Definitions =
       (System_Collections_Generic_Dictionary_string__GisketchGridPicker_RuntimeDefinition__o *)pSVar8;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->static_fields->Definitions);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  pIVar9 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  pMVar5 = MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_BuildRuntime;
  pIVar9[1].klass =
       (Il2CppClass *)MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_BuildRuntime->virtualMethodPointer;
  pIVar9[2].monitor = pMVar5;
  pIVar9[2].klass = (Il2CppClass *)0x0;
  Il2CppCodeGenWriteBarrier(&pIVar9[2].klass);
  uVar1 = pMVar5->parameters_count;
  pIVar9[4].klass = (Il2CppClass *)pIVar9;
  cVar6 = il2cpp_runtime_helper_030d61c0();
  if (cVar6 == '\0') {
    if (uVar1 != 3) {
      pIVar9 = il2cpp_codegen_get_argument_exception
                         ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
    }
    puVar10 = &label_02d4ba20;
  }
  else {
    if (uVar1 != 4) {
      uVar4 = pIVar9[2].klass;
      pIVar9[1].monitor = pIVar9[1].klass;
      pIVar9[4].klass = (Il2CppClass *)uVar4;
      pIVar9[3].monitor = &label_02d4b9b0;
      value = "GridPickerRuntime";
      goto joined_r0x0536b192;
    }
    puVar10 = &label_02d4ba50;
  }
  pIVar9[1].monitor = puVar10;
  pIVar9[3].monitor = &label_02d4b9b0;
  value = "GridPickerRuntime";
joined_r0x0536b192:
  "GridPickerRuntime" = value;
  if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    if (Il2CppMethodInitialized_07542aad == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_set_Item);
      Il2CppMethodInitialized_07542aad = '\x01';
    }
    bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar7) {
      return;
    }
    pSVar8 = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar3->fields)._factories;
    if (pSVar8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___TryInsert
                (pSVar8,(Il2CppObject *)value,pIVar9,1,
                 (MethodInfo_4AAE0A0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_set_Item->
                 klass->rgctx_data[0x22].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, int32_t columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, System_String_o* searchPlaceholder, System_Action_GisketchActionContext__GisketchGridPickerItem__o* select, float height, bool lazyLoadThumbnails, bool searchAtBottom, bool releaseThumbnails, const MethodInfo* method);
// 0x536b360

void Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items,int32_t columns,float itemWidth,
               float itemHeight,float thumbnailWidth,float thumbnailHeight,System_String_o *searchPlaceholder,
               System_Action_GisketchActionContext__GisketchGridPickerItem__o *select,float height,
               bool lazyLoadThumbnails,bool searchAtBottom,bool releaseThumbnails,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07542a28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07542a28 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._releaseThumbnails = releaseThumbnails;
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  if (items == (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0) {
    items = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)
            SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array,0);
  }
  (__this->fields)._items = items;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items);
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Max_54bad40(1,columns,(MethodInfo *)0x0);
  (__this->fields)._columns = iVar1;
  (__this->fields)._itemWidth = itemWidth;
  (__this->fields)._itemHeight = itemHeight;
  (__this->fields)._thumbnailWidth = thumbnailWidth;
  (__this->fields)._thumbnailHeight = thumbnailHeight;
  (__this->fields)._searchPlaceholder = searchPlaceholder;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._searchPlaceholder);
  (__this->fields)._select = select;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._select);
  (__this->fields)._height = height;
  (__this->fields)._lazyLoadThumbnails = lazyLoadThumbnails;
  (__this->fields)._searchAtBottom = searchAtBottom;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$get_PreferredWidth
// il2cpp: float Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, const MethodInfo* method);
// 0x536b4c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x536b503: cmp byte ptr [rip + 0x21d7520], 0
// asm:   0x536b50a: je 0x536b575

float Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth
                (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,MethodInfo *method)

{
  float fVar1;
  uint32_t uVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07542a29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    Il2CppMethodInitialized_07542a29 = '\x01';
  }
  iVar3 = (__this->fields)._columns;
  fVar1 = (__this->fields)._itemWidth;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  }
  if (Il2CppMethodInitialized_07542a2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07542a2a = '\x01';
    uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar3 = System_Math__Max_54bad40(1,iVar3,(MethodInfo *)0x0);
  return (float)(iVar3 + -1) * 10.0 + fVar1 * (float)iVar3 + 8.0 + 28.0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$PreferredWidthFor
// il2cpp: float Gisketch_Aottg2UI_Code_GisketchGridPicker__PreferredWidthFor (int32_t columns, float itemWidth, const MethodInfo* method);
// 0x536b5b0

float Gisketch_Aottg2UI_Code_GisketchGridPicker__PreferredWidthFor
                (int32_t columns,float itemWidth,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_07542a2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07542a2a = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Max_54bad40(1,columns,(MethodInfo *)0x0);
  return (float)(iVar1 + -1) * 10.0 + (float)iVar1 * itemWidth + 8.0 + 28.0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker__Build (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x536b640

void Gisketch_Aottg2UI_Code_GisketchGridPicker__Build
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar4;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *pSVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *__this_01;
  System_Action_AottgUi__o *__this_02;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *pMVar11;
  float fVar12;
  MethodInfo *in_stack_ffffffffffffff90;
  
  if (Il2CppMethodInitialized_07542a2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Build_b__22_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-grid-picker");
    Il2CppMethodInitialized_07542a2b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->static_fields->Definitions;
  pSVar10 = (__this->fields)._id;
  pGVar4 = (__this->fields)._items;
  iVar3 = (__this->fields)._columns;
  fVar12 = (__this->fields)._height;
  bVar1 = (__this->fields)._lazyLoadThumbnails;
  pSVar5 = (__this->fields)._select;
  bVar2 = (__this->fields)._releaseThumbnails;
  fVar6 = (__this->fields)._itemWidth;
  fVar7 = (__this->fields)._itemHeight;
  fVar8 = (__this->fields)._thumbnailWidth;
  fVar9 = (__this->fields)._thumbnailHeight;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields).ReleaseThumbnails = bVar2;
  (__this_01->fields).Id = pSVar10;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Id);
  (__this_01->fields).Items = pGVar4;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Items);
  (__this_01->fields).Columns = iVar3;
  (__this_01->fields).ItemWidth = fVar6;
  (__this_01->fields).ItemHeight = fVar7;
  (__this_01->fields).ThumbnailWidth = fVar8;
  (__this_01->fields).ThumbnailHeight = fVar9;
  (__this_01->fields).ViewportHeight = fVar12;
  (__this_01->fields).LazyLoadThumbnails = bVar1;
  (__this_01->fields).Select = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields).Select);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)pSVar10,(Il2CppObject *)__this_01,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_set_Item
              );
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_02,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Build_b__22_0,
               (MethodInfo_4A81BE0 *)0x0);
    pMVar11 = (MethodInfo *)"-grid-picker";
    pSVar10 = System_String__Concat_52f0320((__this->fields)._id,"-grid-picker",(MethodInfo *)0x0);
    fVar12 = Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth(__this,pMVar11);
    if (Il2CppMethodInitialized_07542a23 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542a23 = '\x01';
    }
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_03,(MethodInfo *)0x0);
    if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_03->fields).value = fVar12;
      (__this_03->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(__this_03->fields).unit);
      pMVar11 = (MethodInfo *)0x0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,10.0,__this_03,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffff90);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",__this_02,pSVar10,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pMVar11);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$BuildSearch
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildSearch (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* root, const MethodInfo* method);
// 0x536ba10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x536babe: add rsp, 8
// asm:   0x536bac2: jmp 0x536bc3c

void Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildSearch
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *root,
               MethodInfo *method)

{
  System_String_o *placeholder;
  bool bVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass23_0_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_Action_GisketchActionContext__o *__this_02;
  undefined4 uVar3;
  undefined4 in_stack_ffffffffffffffbc;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_c__DisplayClass23_0_BuildSearch_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_c__DisplayClass23_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-search");
    Il2CppMethodInitialized_07542a2c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_c__DisplayClass23_0
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass23_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._searchPlaceholder,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pSVar2 = System_String__Concat_52f0320((__this->fields)._id,"-search",(MethodInfo *)0x0);
    (__this_00->fields).inputId = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).inputId);
    pSVar2 = (__this_00->fields).inputId;
    placeholder = (__this->fields)._searchPlaceholder;
    if (Il2CppMethodInitialized_07542a24 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"percent");
      Il2CppMethodInitialized_07542a24 = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = 100.0;
      (__this_01->fields).unit = "percent";
      method_00 = (MethodInfo *)0x536bb67;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).unit);
      uVar3 = 0x3f800000;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_01,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,method_00);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_02,(Il2CppObject *)__this_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_c__DisplayClass23_0_BuildSearch_b__0,
                 (MethodInfo_4A803E0 *)0x0);
      if (root != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__InputField
                  (root,pSVar2,placeholder,0,"inputField",layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,__this_02,0.2,0,
                   (System_Action_GisketchActionContext__o *)0x0,
                   (MethodInfo *)CONCAT44(in_stack_ffffffffffffffbc,uVar3));
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x536bc60

bool Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *local_28;
  
  if (Il2CppMethodInitialized_07542a2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchGridPickerRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    Il2CppMethodInitialized_07542a2d = '\x01';
  }
  local_28 = (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0;
  if ((node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     (bVar1 = System_String__IsNullOrEmpty((node->fields).value,(MethodInfo *)0x0), bVar1)) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->static_fields->Definitions;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    method_00 = 
    MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_TryGetValue;
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)(node->fields).value,(Il2CppObject **)&local_28,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_TryGetValue
                      );
    if (!bVar1) {
      return true;
    }
    if (((go != (UnityEngine_GameObject_o *)0x0) &&
        (__this_00 = UnityEngine_GameObject__AddComponent_object_
                               (go,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchGridPickerRuntime),
        context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) &&
       (__this_00 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0)) {
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Setup
                (__this_00,local_28,(context->fields).Theme,method_00);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Filter
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* pickerId, System_String_o* inputId, const MethodInfo* method);
// 0x536c280
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x536c450: jmp 0x536c4a5

void Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *pickerId,
               System_String_o *inputId,MethodInfo *method)

{
  System_String_o *query;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar1;
  System_String_o *__this_00;
  bool bVar2;
  uint uVar3;
  UnityEngine_Transform_o *pUVar4;
  TMPro_TMP_InputField_o *x;
  System_Object_array *pSVar5;
  MethodInfo *method_00;
  uint uVar6;
  System_String_o **ppSVar7;
  
  if (Il2CppMethodInitialized_07542a2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchGridPickerRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Find_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a2e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    if ((context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar4 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto label_0536c4a5;
    pUVar4 = UnityEngine_Transform__get_root(pUVar4,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  }
  x = Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_
                (pUVar4,inputId,
                 (MethodInfo_353C880 *)
                 MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Find_TMP_InputField);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (x == (TMPro_TMP_InputField_o *)0x0) goto label_0536c4a5;
    ppSVar7 = &(x->fields).m_Text;
  }
  else {
    ppSVar7 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    query = *ppSVar7;
    pSVar5 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)pUVar4,true,
                        (MethodInfo_34B1260 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchGridPickerRuntime);
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar3 = (uint)pSVar5->max_length;
      if ((int)uVar3 < 1) {
        return;
      }
      uVar6 = 0;
      while( true ) {
        if (uVar3 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        __this = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)pSVar5->m_Items[(int)uVar6];
        if (__this == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) break;
        pGVar1 = (__this->fields)._definition;
        if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
          __this_00 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        else {
          __this_00 = (pGVar1->fields).Id;
        }
        if (__this_00 == (System_String_o *)0x0) break;
        bVar2 = System_String__Equals_52ffb20(__this_00,pickerId,5,(MethodInfo *)0x0);
        if (bVar2) {
          Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SetQuery(__this,query,method_00);
        }
        uVar6 = uVar6 + 1;
        uVar3 = (uint)pSVar5->max_length;
        if ((int)uVar3 <= (int)uVar6) {
          return;
        }
      }
    }
  }
label_0536c4a5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_353C880* method);
// 0x363c880
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x363c9a0: jmp 0x363c9a4
// asm:   0x363c9a2: xor ebp, ebp
// asm:   0x363c9d6: jmp 0x363c8c7

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_353C880 *method)

{
  uint32_t uVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar6;
  
  if ((method->rgctx_data == (MethodInfo_353C880_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_353C880_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar3) && (bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), !bVar3)) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_34B1260 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_),
       pSVar4 == (System_Object_array *)0x0)) {
label_0363c9db:
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = pSVar4->max_length & 0xffffffff;
      uVar6 = 0;
      do {
        if (uVar5 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar6];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (__this = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
             __this == (UnityEngine_Object_o *)0x0)) goto label_0363c9db;
          a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
          if (bVar3) {
            return (Il2CppObject *)x;
          }
        }
        uVar6 = uVar6 + 1;
        uVar2 = (uint)pSVar4->max_length;
        uVar5 = (ulong)uVar2;
      } while ((long)uVar6 < (long)(int)uVar2);
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$<Build>b__22_0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__22_0 (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* root, const MethodInfo* method);
// 0x536c5e0

void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__22_0
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *root,
               MethodInfo *method)

{
  float fVar1;
  System_String_o *id;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_07542a2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Build_b__22_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"scrollView");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_07542a2f = '\x01';
    method = extraout_RDX;
  }
  if ((__this->fields)._searchAtBottom == false) {
    Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildSearch(__this,root,method);
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Build_b__22_1,
             (MethodInfo_4A81BE0 *)0x0);
  id = (__this->fields)._id;
  fVar1 = (__this->fields)._height;
  if (Il2CppMethodInitialized_07542a23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542a23 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_01->fields).value = fVar1;
    (__this_01->fields).unit = "point";
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).unit);
    if (Il2CppMethodInitialized_07542a24 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"percent");
      Il2CppMethodInitialized_07542a24 = '\x01';
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_02->fields).value = 100.0;
      (__this_02->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).unit);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_02,__this_01,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffffc0);
      method_01 = (MethodInfo *)0x0;
      contentLayout =
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,in_stack_ffffffffffffffc0);
      if (root != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                  (root,"scrollView",__this_00,id,layout,contentLayout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,method_01);
        if ((__this->fields)._searchAtBottom == false) {
          return;
        }
        Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildSearch(__this,root,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$<Build>b__22_1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__22_1 (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* scroll, const MethodInfo* method);
// 0x536c8b0

void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__22_1
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *scroll,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar3;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_07542a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-runtime");
    il2cpp_codegen_initialize_runtime_metadata(&"GridPickerRuntime");
    Il2CppMethodInitialized_07542a30 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "GridPickerRuntime";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    pSVar1 = System_String__Concat_52f0320((__this->fields)._id,"-runtime",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    method_01 = (MethodInfo *)(__this->fields)._id;
    (__this_00->fields).value = (System_String_o *)method_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
    fVar3 = Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth(__this,method_01);
    if (Il2CppMethodInitialized_07542a23 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542a23 = '\x01';
    }
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = fVar3 + -28.0;
      (__this_01->fields).unit = "point";
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).unit);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_01,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffffd0);
      (__this_00->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
      if (scroll != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add(scroll,__this_00,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}



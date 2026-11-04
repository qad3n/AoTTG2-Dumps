// Type: Gisketch.Aottg2UI.Code.GisketchGridPicker
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchGridPicker.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchGridPicker.RuntimeDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, int32_t columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, float viewportHeight, bool lazyLoadThumbnails, System_Action_GisketchActionContext__GisketchGridPickerItem__o* select, const MethodInfo* method);
// 0x1818d8c10

void Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items,int32_t columns,float itemWidth,
               float itemHeight,float thumbnailWidth,float thumbnailHeight,float viewportHeight,
               bool lazyLoadThumbnails,System_Action_GisketchActionContext__GisketchGridPickerItem__o *select,
               MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Id,id);
  (__this->fields).Items = items;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Items,items);
  (__this->fields).ItemWidth = itemWidth;
  (__this->fields).ThumbnailWidth = thumbnailWidth;
  (__this->fields).ItemHeight = itemHeight;
  (__this->fields).ViewportHeight = viewportHeight;
  (__this->fields).ThumbnailHeight = thumbnailHeight;
  (__this->fields).Columns = columns;
  (__this->fields).LazyLoadThumbnails = lazyLoadThumbnails;
  (__this->fields).Select = select;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Select,select);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker.<>c__DisplayClass22_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass22_0___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass22_0___ctor(Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker.<>c__DisplayClass22_0$$<BuildSearch>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass22_0___BuildSearch_b__0 (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass22_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1818d9d80

void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass22_0___BuildSearch_b__0
               (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass22_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *pGVar1;
  System_String_o *inputId;
  System_String_o *pickerId;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_1843420b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    Il2CppMethodInitialized_1843420b3 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *)0x0) {
    inputId = (__this->fields).inputId;
    pickerId = (pGVar1->fields)._id;
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    }
    local_28.fields.ElementId = (context->fields).ElementId;
    local_28.fields.GameObject = (context->fields).GameObject;
    local_28.fields.Node = (context->fields).Node;
    local_28.fields.InputSource = (context->fields).InputSource;
    local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
    Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter(&local_28,pickerId,inputId,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___cctor (const MethodInfo* method);
// 0x1818d0120

void Gisketch_Aottg2UI_Code_GisketchGridPicker___cctor(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  System_Collections_Generic_Dictionary_string__GisketchGridPicker_RuntimeDefinition__o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_01;
  
  if (Il2CppMethodInitialized_1843420a9 == '\0') {
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
    Il2CppMethodInitialized_1843420a9 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_ctor
            );
  TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->static_fields->Definitions = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->static_fields->Definitions,__this_00);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_01,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_BuildRuntime,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"GridPickerRuntime",__this_01,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, int32_t columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, System_String_o* searchPlaceholder, System_Action_GisketchActionContext__GisketchGridPickerItem__o* select, float height, bool lazyLoadThumbnails, bool searchAtBottom, const MethodInfo* method);
// 0x1818d02b0

void Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items,int32_t columns,float itemWidth,
               float itemHeight,float thumbnailWidth,float thumbnailHeight,System_String_o *searchPlaceholder,
               System_Action_GisketchActionContext__GisketchGridPickerItem__o *select,float height,
               bool lazyLoadThumbnails,bool searchAtBottom,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_1843420aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_1843420aa = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  if (items == (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0) {
    items = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)
            SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array,0);
  }
  (__this->fields)._items = items;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._items,items);
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Max_1b2c0d0(1,columns,(MethodInfo *)0x0);
  (__this->fields)._itemWidth = itemWidth;
  (__this->fields)._itemHeight = itemHeight;
  (__this->fields)._thumbnailWidth = thumbnailWidth;
  (__this->fields)._thumbnailHeight = thumbnailHeight;
  (__this->fields)._columns = iVar1;
  (__this->fields)._searchPlaceholder = searchPlaceholder;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._searchPlaceholder,searchPlaceholder);
  (__this->fields)._select = select;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._select,select);
  (__this->fields)._lazyLoadThumbnails = lazyLoadThumbnails;
  (__this->fields)._searchAtBottom = searchAtBottom;
  (__this->fields)._height = height;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$get_PreferredWidth
// il2cpp: float Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, const MethodInfo* method);
// 0x1818d03e0

float Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth
                (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,MethodInfo *method)

{
  float fVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_1843420ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    Il2CppMethodInitialized_1843420ab = '\x01';
  }
  iVar2 = (__this->fields)._columns;
  fVar1 = (__this->fields)._itemWidth;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  }
  if (Il2CppMethodInitialized_1843420ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_1843420ac = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar2 = System_Math__Max_1b2c0d0(1,iVar2,(MethodInfo *)0x0);
  return (float)iVar2 * fVar1 + (float)(iVar2 + -1) * 10.0 + 8.0 + 28.0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$PreferredWidthFor
// il2cpp: float Gisketch_Aottg2UI_Code_GisketchGridPicker__PreferredWidthFor (int32_t columns, float itemWidth, const MethodInfo* method);
// 0x1818cfc10

float Gisketch_Aottg2UI_Code_GisketchGridPicker__PreferredWidthFor
                (int32_t columns,float itemWidth,MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_1843420ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_1843420ac = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  iVar1 = System_Math__Max_1b2c0d0(1,columns,(MethodInfo *)0x0);
  return (float)iVar1 * itemWidth + (float)(iVar1 + -1) * 10.0 + 8.0 + 28.0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker__Build (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1818cf720

void Gisketch_Aottg2UI_Code_GisketchGridPicker__Build
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *value;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *value_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *value_01;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  float fVar8;
  
  if (Il2CppMethodInitialized_1843420ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Build_b__21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-grid-picker");
    Il2CppMethodInitialized_1843420ad = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  }
  pSVar7 = (__this->fields)._id;
  value = (__this->fields)._items;
  iVar2 = (__this->fields)._columns;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->static_fields->Definitions;
  fVar3 = (__this->fields)._itemWidth;
  fVar4 = (__this->fields)._itemHeight;
  fVar5 = (__this->fields)._thumbnailWidth;
  fVar6 = (__this->fields)._thumbnailHeight;
  bVar1 = (__this->fields)._lazyLoadThumbnails;
  fVar8 = (__this->fields)._height;
  value_00 = (__this->fields)._select;
  value_01 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)value_01,(MethodInfo *)0x0);
  (value_01->fields).Id = pSVar7;
  Il2CppCodeGenWriteBarrier(&(value_01->fields).Id,pSVar7);
  (value_01->fields).Items = value;
  Il2CppCodeGenWriteBarrier(&(value_01->fields).Items,value);
  (value_01->fields).ViewportHeight = fVar8;
  (value_01->fields).Columns = iVar2;
  (value_01->fields).ItemWidth = fVar3;
  (value_01->fields).ItemHeight = fVar4;
  (value_01->fields).ThumbnailWidth = fVar5;
  (value_01->fields).ThumbnailHeight = fVar6;
  (value_01->fields).LazyLoadThumbnails = bVar1;
  (value_01->fields).Select = value_00;
  Il2CppCodeGenWriteBarrier(&(value_01->fields).Select,value_00);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)pSVar7,(Il2CppObject *)value_01,
               (MethodInfo_147A7F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_set_Item
              );
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Build_b__21_0,(MethodInfo *)0x0)
    ;
    pSVar7 = System_String__Concat_1969e50((__this->fields)._id,"-grid-picker",(MethodInfo *)0x0);
    fVar8 = Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth(__this,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar8,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"clear",(System_Action_AottgUi__o *)__this_01,pSVar7,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$BuildSearch
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildSearch (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* root, const MethodInfo* method);
// 0x1818cf4c0

void Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildSearch
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *root,
               MethodInfo *method)

{
  System_String_o *placeholder;
  bool bVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass22_0_o *object;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  
  if (Il2CppMethodInitialized_1843420ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_c__DisplayClass22_0_BuildSearch_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_c__DisplayClass22_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-search");
    Il2CppMethodInitialized_1843420ae = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_c__DisplayClass22_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass22_0_o *)0x0) {
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._searchPlaceholder,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = System_String__Concat_1969e50((__this->fields)._id,"-search",(MethodInfo *)0x0);
      (object->fields).inputId = pSVar2;
      Il2CppCodeGenWriteBarrier(&(object->fields).inputId,pSVar2);
      pSVar2 = (object->fields).inputId;
      placeholder = (__this->fields)._searchPlaceholder;
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_c__DisplayClass22_0_BuildSearch_b__0,
                 (MethodInfo_1387DC0 *)0x0);
      if (root == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1818cf712;
      Gisketch_Aottg2UI_Code_AottgUi__InputField
                (root,pSVar2,placeholder,0,"inputField",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (System_Action_GisketchActionContext__o *)__this_00,0.2,0,
                 (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    }
    return;
  }
label_1818cf712:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818cf3c0

bool Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *local_res10;
  
  if (Il2CppMethodInitialized_1843420af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_TryGetValue
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchGridPickerRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    Il2CppMethodInitialized_1843420af = '\x01';
  }
  local_res10 = (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0;
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
    bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)(node->fields).value,(Il2CppObject **)&local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchGridPicker_RuntimeDefinition_TryGetValue
                      );
    if (!bVar1) {
      return true;
    }
    if (((go != (UnityEngine_GameObject_o *)0x0) &&
        (__this_00 = UnityEngine_GameObject__AddComponent_object_
                               (go,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchGridPickerRuntime),
        context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) &&
       (__this_00 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0)) {
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Setup
                (__this_00,local_res10,(context->fields).Theme,(MethodInfo *)0x0);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Filter
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* pickerId, System_String_o* inputId, const MethodInfo* method);
// 0x1818cfa00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818cfb7f: nop 

void Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *pickerId,
               System_String_o *inputId,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  System_String_o *query;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this_00;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  TMPro_TMP_InputField_o *x;
  System_Object_array *pSVar3;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar4;
  uint uVar5;
  System_String_o **ppSVar6;
  
  if (Il2CppMethodInitialized_1843420b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchGridPickerRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Find_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843420b0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if ((__this == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_1818cfc08;
    pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  }
  x = Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_
                (pUVar2,inputId,
                 (MethodInfo_68B2C0 *)MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Find_TMP_InputField
                );
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (TMPro_TMP_InputField_o *)0x0) goto label_1818cfc08;
    ppSVar6 = &(x->fields).m_Text;
  }
  else {
    ppSVar6 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
  }
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    query = *ppSVar6;
    pSVar3 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)pUVar2,true,
                        (MethodInfo_665440 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_GisketchGridPickerRuntime);
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar5 = 0;
      while( true ) {
        if ((int)pSVar3->max_length <= (int)uVar5) {
          return;
        }
        if ((uint)pSVar3->max_length <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        __this_00 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)pSVar3->m_Items[(int)uVar5];
        if (__this_00 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) break;
        if ((__this_00->fields)._definition ==
            (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
          pGVar4 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)
                    (g_data_184354e50 + 0xb8);
        }
        else {
          pGVar4 = &((__this_00->fields)._definition)->fields;
        }
        if (pGVar4->Id == (System_String_o *)0x0) break;
        bVar1 = System_String__Equals_196c240(pGVar4->Id,pickerId,5,(MethodInfo *)0x0);
        if (bVar1) {
          Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SetQuery(__this_00,query,(MethodInfo *)0x0);
        }
        uVar5 = uVar5 + 1;
      }
    }
  }
label_1818cfc08:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_68B2C0* method);
// 0x18068b2c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18068b3d8: mov rax, rdi
// asm:   0x18068b3db: jmp 0x18068b3df

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_68B2C0 *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  uint uVar3;
  
  if ((method->rgctx_data == (MethodInfo_68B2C0_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_68B2C0_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) && (bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), !bVar1)) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_665440 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_),
       pSVar2 == (System_Object_array *)0x0)) {
label_18068b3fa:
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar2->m_Items[(int)uVar3];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) goto label_18068b3fa;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
        if (bVar1) {
          return (Il2CppObject *)x;
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$<Build>b__21_0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__21_0 (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* root, const MethodInfo* method);
// 0x1818cfca0

void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__21_0
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *root,
               MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  
  if (Il2CppMethodInitialized_1843420b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Build_b__21_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"scrollView");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_1843420b1 = '\x01';
  }
  if ((__this->fields)._searchAtBottom == false) {
    Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildSearch(__this,root,(MethodInfo *)0x0);
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker_Build_b__21_1,(MethodInfo *)0x0);
  id = (__this->fields)._id;
  height = Gisketch_Aottg2UI_Code_AottgUi__Points((__this->fields)._height,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  contentLayout =
       Gisketch_Aottg2UI_Code_AottgUi__Layout
                 ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                  (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,8.0,0.0,0.0,0.0,0.0,0.0,1.0,
                  (MethodInfo *)0x0);
  if (root != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__ScrollView
              (root,"scrollView",(System_Action_AottgUi__o *)__this_00,id,layout,contentLayout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((__this->fields)._searchAtBottom != false) {
      Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildSearch(__this,root,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$<Build>b__21_1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__21_1 (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* scroll, const MethodInfo* method);
// 0x1818cff30

void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__21_1
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *scroll,
               MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843420b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-runtime");
    il2cpp_codegen_initialize_runtime_metadata(&"GridPickerRuntime");
    Il2CppMethodInitialized_1843420b2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  (__this_00->fields).active = true;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).type = "GridPickerRuntime";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"GridPickerRuntime");
  pSVar2 = System_String__Concat_1969e50((__this->fields)._id,"-runtime",(MethodInfo *)0x0);
  (__this_00->fields).id = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar2);
  pSVar2 = (__this->fields)._id;
  (__this_00->fields).value = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,pSVar2);
  fVar3 = Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth(__this,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar3 - 28.0,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                    ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                     (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                     0.0,(MethodInfo *)0x0);
  (__this_00->fields).layout = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value);
  if (scroll != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (Il2CppMethodInitialized_18434209b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      Il2CppMethodInitialized_18434209b = '\x01';
    }
    pSVar1 = (scroll->fields)._children;
    if (pSVar1 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,__this_00,MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}



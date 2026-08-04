// Type: Gisketch.Aottg2UI.Code.GisketchGridPicker
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchGridPicker.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchGridPicker.RuntimeDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, int32_t columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, bool lazyLoadThumbnails, System_Action_GisketchActionContext__GisketchGridPickerItem__o* select, const MethodInfo* method);
// 0x3b64800

void Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items,int32_t columns,float itemWidth,
               float itemHeight,float thumbnailWidth,float thumbnailHeight,bool_conflict lazyLoadThumbnails,
               System_Action_GisketchActionContext__GisketchGridPickerItem__o *select,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  (__this->fields).Items = items;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Items,items);
  (__this->fields).Columns = columns;
  (__this->fields).ItemWidth = itemWidth;
  (__this->fields).ItemHeight = itemHeight;
  (__this->fields).ThumbnailWidth = thumbnailWidth;
  (__this->fields).ThumbnailHeight = thumbnailHeight;
  *(char *)&(__this->fields).LazyLoadThumbnails = (char)lazyLoadThumbnails;
  (__this->fields).Select = select;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Select,select);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x3b65820

void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker.<>c__DisplayClass20_0$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0___Build_b__2 (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3b65a30

void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0___Build_b__2
               (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *pGVar1;
  System_String_o *pickerId;
  System_String_o *inputId;
  System_String_o *in_RCX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  void *extraout_RDX_01;
  Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0_o *pGVar2;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *in_R8;
  
  pGVar2 = __this;
  if (g_data_057a9dac == '\0') {
    pGVar2 = (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0_o *)&TypeInfo_GisketchGridPicker;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9dac = '\x01';
    in_RDX = extraout_RDX;
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *)0x0) {
    pickerId = (pGVar1->fields)._id;
    inputId = (__this->fields).inputId;
    if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter(context,pickerId,inputId,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar2->klass = (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0_c *)method;
  il2cpp_runtime_helper_022b4080();
  pGVar2->monitor = extraout_RDX_01;
  il2cpp_runtime_helper_022b4080(&pGVar2->monitor,extraout_RDX_01);
  (pGVar2->fields).inputId = in_RCX;
  il2cpp_runtime_helper_022b4080(&pGVar2->fields,in_RCX);
  (pGVar2->fields).__4__this = in_R8;
  il2cpp_runtime_helper_022b4080(&(pGVar2->fields).__4__this,in_R8);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___cctor (const MethodInfo* method);
// 0x3b63e80

void Gisketch_Aottg2UI_Code_GisketchGridPicker___cctor(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  void *pvVar3;
  char cVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  Il2CppObject *value;
  undefined1 *puVar8;
  long lVar9;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar10;
  undefined8 *puVar11;
  long extraout_RDX;
  Il2CppObject *value_00;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *extraout_RDX_00;
  long lVar12;
  System_String_o *pSVar13;
  System_Int32_array *pSVar14;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *in_R8;
  Il2CppObject *in_R9;
  int32_t iVar15;
  int32_t in_XMM1_Da;
  int32_t in_XMM2_Da;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM4_Da;
  
  if (cRam00000000057a9da3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Code_Gisket);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_RuntimeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    il2cpp_runtime_helper_023445d0(&"GridPickerRuntime");
    cRam00000000057a9da3 = '\x01';
    if (*(int *)(TypeInfo_StringComparer + 0xe4) != 0) goto code_r0x03b63eac;
code_r0x03b6402d:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057a9c88 != '\0') goto code_r0x03b63eb9;
code_r0x03b6403f:
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) goto code_r0x03b6402d;
code_r0x03b63eac:
    if (g_data_057a9c88 == '\0') goto code_r0x03b6403f;
code_r0x03b63eb9:
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18)
  ;
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(_DAT_05570ca0);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(pSVar7,comparer,_DAT_05589dd0);
  puVar11 = *(undefined8 **)(TypeInfo_GisketchGridPicker + 0xb8);
  *puVar11 = pSVar7;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_GisketchGridPicker + 0xb8));
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar9 = **(long **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  value = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  pvVar3 = _DAT_055a2088;
  value[1].klass = (Il2CppClass *)*(undefined8 *)((long)_DAT_055a2088 + 8);
  value[2].monitor = pvVar3;
  value[2].klass = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b4080(value + 2);
  cVar1 = *(char *)((long)pvVar3 + 0x52);
  value[4].klass = (Il2CppClass *)value;
  cVar4 = il2cpp_runtime_helper_022b2a80(pvVar3);
  iVar6 = (int32_t)puVar11;
  if (cVar4 == '\0') {
    if (cVar1 == '\x03') {
      puVar8 = &label_02099410;
      goto code_r0x03b64080;
    }
  }
  else {
    if (cVar1 == '\x04') {
      puVar8 = &label_02099440;
code_r0x03b64080:
      value[1].monitor = puVar8;
      value[3].monitor = &label_020993a0;
      pSVar13 = "GridPickerRuntime";
    }
    else {
      puVar11 = (undefined8 *)value[2].klass;
      value[1].monitor = value[1].klass;
      value[4].klass = (Il2CppClass *)puVar11;
      value[3].monitor = &label_020993a0;
      pSVar13 = "GridPickerRuntime";
    }
    iVar6 = (int32_t)puVar11;
    "GridPickerRuntime" = pSVar13;
    if (lVar9 != 0) {
      if (g_data_057a9e10 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057a9e10 = '\x01';
      }
      bVar5 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar9 + 0x10);
      if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___TryInsert
                  (pSVar7,(Il2CppObject *)pSVar13,value,'\x01',
                   (MethodInfo_3105A00 *)
                   MethodInfo_Void_set_Item->klass->rgctx_data->
                   _34_System_Collections_Generic_Dictionary_TKey__TValue__TryInsert);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  lVar9 = il2cpp_runtime_helper_0231a840(0);
  lVar12 = 0;
  il2cpp_runtime_helper_022b2b10();
  *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(extraout_RDX + 8);
  *(long *)(lVar9 + 0x28) = extraout_RDX;
  *(long *)(lVar9 + 0x20) = lVar12;
  il2cpp_runtime_helper_022b4080(lVar9 + 0x20);
  cVar1 = *(char *)(extraout_RDX + 0x52);
  *(long *)(lVar9 + 0x40) = lVar9;
  cVar4 = il2cpp_runtime_helper_022b2a80(extraout_RDX);
  if (cVar4 == '\0') {
    if (cVar1 == '\x03') {
      *(undefined1 **)(lVar9 + 0x18) = &label_02099410;
      goto label_03b641b8;
    }
    if (lVar12 == 0) {
      lVar9 = il2cpp_runtime_helper_0231a840(0);
      pSVar13 = (System_String_o *)0x0;
      il2cpp_runtime_helper_022b2b10();
      if (g_data_057a9e10 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057a9e10 = '\x01';
      }
      pSVar14 = (System_Int32_array *)0x0;
      bVar5 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
      if ((value_00 != (Il2CppObject *)0x0) && ((char)bVar5 == '\0')) {
        pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar9 + 0x10);
        if (pSVar7 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          iVar15 = il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9da4 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPickerItem);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
            g_data_057a9da4 = '\x01';
          }
          System_Object___ctor((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
          (pSVar7->fields)._buckets = pSVar14;
          il2cpp_runtime_helper_022b4080(&pSVar7->fields,pSVar14);
          pSVar10 = extraout_RDX_00;
          if (extraout_RDX_00 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
            pSVar10 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchGridPickerItem,0);
          }
          (pSVar7->fields)._entries = pSVar10;
          il2cpp_runtime_helper_022b4080(&(pSVar7->fields)._entries,pSVar10);
          if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          iVar6 = System_Math__Max_3cb7c30(1,iVar6,(MethodInfo *)0x0);
          (pSVar7->fields)._count = iVar6;
          (pSVar7->fields)._freeList = iVar15;
          (pSVar7->fields)._freeCount = in_XMM1_Da;
          (pSVar7->fields)._version = in_XMM2_Da;
          *(undefined4 *)&(pSVar7->fields)._comparer = in_XMM3_Da;
          (pSVar7->fields)._values = in_R8;
          il2cpp_runtime_helper_022b4080(&(pSVar7->fields)._values,in_R8);
          (pSVar7->fields)._syncRoot = in_R9;
          il2cpp_runtime_helper_022b4080(&(pSVar7->fields)._syncRoot,in_R9);
          *(undefined4 *)((long)&(pSVar7->fields)._comparer + 4) = in_XMM4_Da;
          *(undefined1 *)&(pSVar7->fields)._keys = 0;
          return;
        }
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar7,(Il2CppObject *)pSVar13,value_00,MethodInfo_Void_set_Item);
        return;
      }
      return;
    }
  }
  else if (cVar1 == '\x04') {
    *(undefined1 **)(lVar9 + 0x18) = &label_02099440;
    goto label_03b641b8;
  }
  *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar9 + 0x10);
  *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)(lVar9 + 0x20);
label_03b641b8:
  *(undefined1 **)(lVar9 + 0x38) = &label_020993a0;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, int32_t columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, System_String_o* searchPlaceholder, System_Action_GisketchActionContext__GisketchGridPickerItem__o* select, float height, bool lazyLoadThumbnails, const MethodInfo* method);
// 0x3b64260

void Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items,int32_t columns,float itemWidth,
               float itemHeight,float thumbnailWidth,float thumbnailHeight,System_String_o *searchPlaceholder,
               System_Action_GisketchActionContext__GisketchGridPickerItem__o *select,float height,
               bool_conflict lazyLoadThumbnails,MethodInfo *method)

{
  int32_t iVar1;
  
  if (g_data_057a9da4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPickerItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a9da4 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_helper_022b4080(&__this->fields,id);
  if (items == (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0) {
    items = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchGridPickerItem,0);
  }
  (__this->fields)._items = items;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._items,items);
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = System_Math__Max_3cb7c30(1,columns,(MethodInfo *)0x0);
  (__this->fields)._columns = iVar1;
  (__this->fields)._itemWidth = itemWidth;
  (__this->fields)._itemHeight = itemHeight;
  (__this->fields)._thumbnailWidth = thumbnailWidth;
  (__this->fields)._thumbnailHeight = thumbnailHeight;
  (__this->fields)._searchPlaceholder = searchPlaceholder;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._searchPlaceholder,searchPlaceholder);
  (__this->fields)._select = select;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._select,select);
  (__this->fields)._height = height;
  *(undefined1 *)&(__this->fields)._lazyLoadThumbnails = (undefined1)lazyLoadThumbnails;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$get_PreferredWidth
// il2cpp: float Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, const MethodInfo* method);
// 0x3b643b0

float Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth
                (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  int32_t iVar3;
  
  if (g_data_057a9da5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPicker);
    g_data_057a9da5 = '\x01';
  }
  iVar3 = (__this->fields)._columns;
  fVar1 = (__this->fields)._itemWidth;
  if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9da6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a9da6 = '\x01';
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar3 = System_Math__Max_3cb7c30(1,iVar3,(MethodInfo *)0x0);
  return (float)(iVar3 + -1) * 10.0 + fVar1 * (float)iVar3 + 8.0 + 28.0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$PreferredWidthFor
// il2cpp: float Gisketch_Aottg2UI_Code_GisketchGridPicker__PreferredWidthFor (int32_t columns, float itemWidth, const MethodInfo* method);
// 0x3b644a0

float Gisketch_Aottg2UI_Code_GisketchGridPicker__PreferredWidthFor
                (int32_t columns,float itemWidth,MethodInfo *method)

{
  int32_t iVar1;
  
  if (g_data_057a9da6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    g_data_057a9da6 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar1 = System_Math__Max_3cb7c30(1,columns,(MethodInfo *)0x0);
  return (float)(iVar1 + -1) * 10.0 + (float)iVar1 * itemWidth + 8.0 + 28.0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker__Build (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x3b64530

void Gisketch_Aottg2UI_Code_GisketchGridPicker__Build
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *key;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar1;
  int32_t iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool_conflict bVar6;
  Il2CppObject *__this_01;
  System_Action_AottgUi__o *build;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  undefined4 in_ECX;
  System_String_o *extraout_RDX;
  MethodInfo *pMVar7;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_03;
  undefined1 in_R8B;
  Gisketch_Aottg2UI_Data_GisketchLength_o *in_R9;
  float fVar9;
  undefined4 uVar10;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM2_Da;
  float in_XMM3_Da;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (g_data_057a9da7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RuntimeDefinition);
    il2cpp_runtime_helper_023445d0(&"clear");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-grid-picker");
    g_data_057a9da7 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              **(undefined8 **)(TypeInfo_GisketchGridPicker + 0xb8);
  key = (Il2CppClass *)(__this->fields)._id;
  pGVar1 = (__this->fields)._items;
  iVar2 = (__this->fields)._columns;
  fVar3 = (__this->fields)._itemWidth;
  fVar4 = (__this->fields)._itemHeight;
  fVar5 = (__this->fields)._thumbnailWidth;
  fVar9 = (__this->fields)._thumbnailHeight;
  bVar6 = (__this->fields)._lazyLoadThumbnails;
  pSVar8 = (__this->fields)._select;
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_RuntimeDefinition);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  __this_01[1].klass = key;
  il2cpp_runtime_helper_022b4080(__this_01 + 1,key);
  __this_01[1].monitor = pGVar1;
  il2cpp_runtime_helper_022b4080(&__this_01[1].monitor,pGVar1);
  *(int32_t *)&__this_01[2].klass = iVar2;
  *(float *)((long)&__this_01[2].klass + 4) = fVar3;
  *(float *)&__this_01[2].monitor = fVar4;
  *(float *)((long)&__this_01[2].monitor + 4) = fVar5;
  *(float *)&__this_01[3].klass = fVar9;
  *(char *)((long)&__this_01[3].klass + 4) = (char)bVar6;
  __this_03 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)&__this_01[3].monitor;
  __this_01[3].monitor = pSVar8;
  il2cpp_runtime_helper_022b4080();
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)key,__this_01,MethodInfo_Void_set_Item);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    in_ECX = 0;
    System_Action_object____ctor();
    pMVar7 = "-grid-picker";
    id = System_String__Concat_3ae5ba0((__this->fields)._id,(System_String_o *)"-grid-picker",(MethodInfo *)0x0)
    ;
    fVar9 = Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth(__this,pMVar7);
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    __this_02 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar8 = (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0;
    __this_03 = __this_02;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_02->fields).value = fVar9;
      (__this_02->fields).unit = "point";
      il2cpp_runtime_helper_022b4080(&(__this_02->fields).unit);
      pMVar7 = (MethodInfo *)0x0;
      in_XMM1_Da = 0;
      in_XMM2_Da = 0;
      in_XMM3_Da = 0.0;
      pSVar8 = (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0;
      in_ECX = 0;
      in_R8B = 0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,10.0,__this_02,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                          ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffffa0);
      __this_03 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      in_R9 = __this_02;
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",build,id,layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   pMVar7);
        return;
      }
    }
  }
  uVar10 = il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
  *(System_Action_GisketchActionContext__GisketchGridPickerItem__o **)&__this_03->fields = pSVar8;
  il2cpp_runtime_helper_022b4080(&__this_03->fields,pSVar8);
  (__this_03->fields).unit = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields).unit,extraout_RDX);
  *(undefined4 *)&__this_03[1].klass = in_ECX;
  *(undefined4 *)((long)&__this_03[1].klass + 4) = uVar10;
  *(undefined4 *)&__this_03[1].monitor = in_XMM1_Da;
  *(undefined4 *)((long)&__this_03[1].monitor + 4) = in_XMM2_Da;
  __this_03[1].fields.value = in_XMM3_Da;
  __this_03[1].fields.field_0x4 = in_R8B;
  __this_03[1].fields.unit = (System_String_o *)in_R9;
  il2cpp_runtime_helper_022b4080(&__this_03[1].fields.unit,in_R9);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b648c0

bool_conflict
Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildRuntime
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o **ppGVar1;
  System_String_o *detail;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar2;
  long lVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  uint uVar4;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  ulong in_RAX;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this_02;
  ulong extraout_RAX;
  InvokerMethod *ppIVar5;
  System_String_array *values;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar6;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_GridLayoutGroup_o *__this_03;
  long *plVar9;
  MethodInfo *pMVar10;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *extraout_RDX;
  MethodInfo_255A020 *key;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this_04;
  float fVar11;
  undefined1 auVar12 [12];
  undefined1 in_stack_ffffffffffffff50 [12];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool_conflict bVar17;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_78;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_58;
  undefined8 *puStack_50;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *local_28;
  
  if (g_data_057a9da8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchGridPickerRuntime_AddComponent_GisketchGridPicke);
    in_RAX = il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPicker);
    g_data_057a9da8 = '\x01';
  }
  local_28 = (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_03b6499c:
    return (bool_conflict)CONCAT71((int7)(in_RAX >> 8),1);
  }
  key = (MethodInfo_255A020 *)0x0;
  uVar4 = System_String__IsNullOrEmpty((node->fields).value,(MethodInfo *)0x0);
  in_RAX = (ulong)uVar4;
  if ((char)uVar4 != '\0') goto label_03b6499c;
  if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_04 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)**(undefined8 **)(TypeInfo_GisketchGridPicker + 0xb8);
  if (__this_04 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) {
    key = (MethodInfo_255A020 *)(node->fields).value;
    pMVar10 = MethodInfo_Boolean_TryGetValue;
    uVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_04,
                       (Il2CppObject *)key,(Il2CppObject **)&local_28,(MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
    in_RAX = (ulong)uVar4;
    if ((char)uVar4 == '\0') goto label_03b6499c;
    if (((go != (UnityEngine_GameObject_o *)0x0) &&
        (key = MethodInfo_GisketchGridPickerRuntime_AddComponent_GisketchGridPicke,
        __this_02 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)
                    UnityEngine_GameObject__AddComponent_object_(go,MethodInfo_GisketchGridPickerRuntime_AddComponent_GisketchGridPicke),
        __this_04 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)go,
        context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) &&
       (__this_02 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0)) {
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Setup
                (__this_02,local_28,(context->fields).Theme,pMVar10);
      in_RAX = extraout_RAX;
      goto label_03b6499c;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  puStack_50 = &TypeInfo_GisketchGridPicker;
  pGStack_58 = node;
  if (g_data_057a9dad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GridLayoutGroup_AddComponent_GridLayoutGroup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"x");
    il2cpp_runtime_helper_023445d0(&" item=");
    il2cpp_runtime_helper_023445d0(&"GridPicker.Setup");
    il2cpp_runtime_helper_023445d0(&" columns=");
    il2cpp_runtime_helper_023445d0(&"null");
    il2cpp_runtime_helper_023445d0(&" items=");
    g_data_057a9dad = '\x01';
  }
  pSVar7 = "GridPicker.Setup";
  uVar13 = 0;
  if (key == (MethodInfo_255A020 *)0x0) {
    ppIVar5 = (InvokerMethod *)&"null";
  }
  else {
    ppIVar5 = &key->invoker_method;
  }
  detail = (System_String_o *)*ppIVar5;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&GStack_78,pSVar7,detail,(MethodInfo *)0x0);
  ppGVar1 = &(__this_04->fields)._definition;
  (__this_04->fields)._definition = (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)key;
  il2cpp_runtime_helper_022b4080(ppGVar1,key);
  (__this_04->fields)._theme = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields)._theme,extraout_RDX);
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*ppGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    pGVar6 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)(g_data_057b9c00 + 0xb8);
    if (values != (System_String_array *)0x0) goto label_03b64b16;
label_03b64d99:
    il2cpp_runtime_helper_022b2c90();
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
label_03b64d9e:
    il2cpp_runtime_helper_022b2ca0();
label_03b64da3:
    il2cpp_runtime_helper_022b2ca0();
label_03b64da8:
    il2cpp_runtime_helper_022b2ca0();
label_03b64dad:
    il2cpp_runtime_helper_022b2ca0();
label_03b64db2:
    il2cpp_runtime_helper_022b2c90();
label_03b64db7:
    il2cpp_runtime_helper_022b2ca0();
label_03b64dbc:
    il2cpp_runtime_helper_022b2ca0();
label_03b64dc1:
    il2cpp_runtime_helper_022b2ca0();
label_03b64dc6:
    il2cpp_runtime_helper_022b2ca0();
label_03b64dcb:
    il2cpp_runtime_helper_022b2ca0();
label_03b64dd0:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pGVar6 = &(*ppGVar1)->fields;
    if (values == (System_String_array *)0x0) goto label_03b64d99;
label_03b64b16:
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
    if ((int)values->max_length == 0) goto label_03b64d9e;
    values->m_Items[0] = pGVar6->Id;
    il2cpp_runtime_helper_022b4080(values->m_Items);
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
    if ((uint)values->max_length < 2) goto label_03b64da3;
    values->m_Items[1] = " items=";
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    uVar13 = 0;
    if ((*ppGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) &&
       (pGVar2 = ((*ppGVar1)->fields).Items, uVar13 = 0,
       pGVar2 != (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0)) {
      uVar13 = (undefined4)pGVar2->max_length;
    }
    pSVar7 = System_Int32__ToString((int32_t)&stack0xffffffffffffff5c,(MethodInfo *)0x0);
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
    if ((uint)values->max_length < 3) goto label_03b64da8;
    values->m_Items[2] = pSVar7;
    il2cpp_runtime_helper_022b4080(values->m_Items + 2);
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
    if ((uint)values->max_length < 4) goto label_03b64dad;
    values->m_Items[3] = " columns=";
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
    if (key == (MethodInfo_255A020 *)0x0) goto label_03b64db2;
    pSVar7 = System_Int32__ToString((int32_t)&key->klass,(MethodInfo *)0x0);
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
    if ((uint)values->max_length < 5) goto label_03b64db7;
    values->m_Items[4] = pSVar7;
    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
    if ((uint)values->max_length < 6) goto label_03b64dbc;
    values->m_Items[5] = " item=";
    fVar11 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 5);
    pMVar10 = (MethodInfo *)((long)&key->klass + 4);
    pSVar7 = System_Single__ToString(fVar11,pMVar10);
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
    if ((uint)values->max_length < 7) goto label_03b64dc1;
    values->m_Items[6] = pSVar7;
    il2cpp_runtime_helper_022b4080(values->m_Items + 6);
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
    if ((uint)values->max_length < 8) goto label_03b64dc6;
    values->m_Items[7] = "x";
    fVar11 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 7);
    pSVar7 = System_Single__ToString(fVar11,(MethodInfo *)&key->return_type);
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
    if ((uint)values->max_length < 9) goto label_03b64dcb;
    values->m_Items[8] = pSVar7;
    il2cpp_runtime_helper_022b4080(values->m_Items + 8);
    pSVar7 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    uVar14 = GStack_78.fields._area._0_4_;
    uVar15 = GStack_78.fields._area._4_4_;
    uVar16 = GStack_78.fields._detail._0_4_;
    bVar17 = GStack_78.fields._detail._4_4_;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar14 = GStack_78.fields._area._0_4_;
      uVar15 = GStack_78.fields._area._4_4_;
      uVar16 = GStack_78.fields._detail._0_4_;
      bVar17 = GStack_78.fields._detail._4_4_;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("GridPicker.Setup",pSVar7,(MethodInfo *)0x0);
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_03b64dd0;
    __this_03 = (UnityEngine_UI_GridLayoutGroup_o *)
                UnityEngine_GameObject__AddComponent_object_(pUVar8,MethodInfo_GridLayoutGroup_AddComponent_GridLayoutGroup);
    if (__this_03 != (UnityEngine_UI_GridLayoutGroup_o *)0x0) {
      UnityEngine_UI_GridLayoutGroup__set_cellSize
                (__this_03,(UnityEngine_Vector2_o)pMVar10->methodPointer,(MethodInfo *)0x0);
      UnityEngine_UI_GridLayoutGroup__set_spacing
                (__this_03,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
      UnityEngine_UI_GridLayoutGroup__set_constraint(__this_03,1,(MethodInfo *)0x0);
      UnityEngine_UI_GridLayoutGroup__set_constraintCount(__this_03,*(int32_t *)&key->klass,(MethodInfo *)0x0)
      ;
      UnityEngine_UI_GridLayoutGroup__set_startAxis(__this_03,0,(MethodInfo *)0x0);
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)__this_03,0,(MethodInfo *)0x0);
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        pMVar10 = MethodInfo_LayoutElement_AddComponent_LayoutElement;
        UnityEngine_GameObject__AddComponent_object_(pUVar8,(MethodInfo_255A020 *)MethodInfo_LayoutElement_AddComponent_LayoutElement);
        Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild(__this_04,pMVar10);
        __this.fields._detail._4_4_ = uVar13;
        __this.fields._0_12_ = in_stack_ffffffffffffff50;
        __this.fields._startMs._0_4_ = uVar14;
        __this.fields._startMs._4_4_ = uVar15;
        __this.fields._enabled = uVar16;
        __this.fields._hotLoop = bVar17;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                  (__this,(MethodInfo *)&stack0xffffffffffffff60);
        return extraout_EAX;
      }
      goto label_03b64dda;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b64dda:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar3 = *plVar9;
    __cxa_end_catch();
    __this_00.fields._detail._4_4_ = uVar13;
    __this_00.fields._0_12_ = in_stack_ffffffffffffff50;
    __this_00.fields._startMs._0_4_ = uVar14;
    __this_00.fields._startMs._4_4_ = uVar15;
    __this_00.fields._enabled = uVar16;
    __this_00.fields._hotLoop = bVar17;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_00,(MethodInfo *)&stack0xffffffffffffff60);
    if (lVar3 == 0) {
      return extraout_EAX_00;
    }
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_01.fields._detail._4_4_ = uVar13;
  __this_01.fields._0_12_ = in_stack_ffffffffffffff50;
  __this_01.fields._startMs._0_4_ = uVar14;
  __this_01.fields._startMs._4_4_ = uVar15;
  __this_01.fields._enabled = uVar16;
  __this_01.fields._hotLoop = bVar17;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_01,(MethodInfo *)&stack0xffffffffffffff60);
  _Unwind_Resume(auVar12._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Filter
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* pickerId, System_String_o* inputId, const MethodInfo* method);
// 0x3b64f80

void Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *pickerId,
               System_String_o *inputId,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *__this;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *a;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *pGVar5;
  System_Object_array *pSVar6;
  System_String_o **ppSVar7;
  long lVar8;
  uint uVar9;
  MethodInfo *method_00;
  MethodInfo *pMVar10;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this_00;
  
  if (g_data_057a9da9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchGridPickerRuntime_GetComponentsInChildren_Gisket);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9da9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0;
  __this_00 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)context.fields.GameObject;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_03b6502f:
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)a,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar5 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)
             Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_
                       ((UnityEngine_Transform_o *)a,inputId,MethodInfo_TMP_InputField_Find_TMP_InputField);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = pGVar5;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      ppSVar7 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) goto label_03b652e1;
      ppSVar7 = &pGVar5[5].fields._query;
    }
    if (a != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) {
      pMVar10 = (MethodInfo *)*ppSVar7;
      pSVar6 = UnityEngine_Component__GetComponentsInChildren_object_
                         ((UnityEngine_Component_o *)a,1,MethodInfo_GisketchGridPickerRuntime_GetComponentsInChildren_Gisket);
      __this_00 = a;
      if (pSVar6 != (System_Object_array *)0x0) {
        if (pMVar10 == (MethodInfo *)0x0) {
          iVar1 = (int)pSVar6->max_length;
          if (iVar1 < 1) {
            return;
          }
          lVar8 = 0;
          if (iVar1 != 0) {
            do {
              pGVar5 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)pSVar6->m_Items[lVar8];
              __this_00 = a;
              if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) goto label_03b652e1;
              pGVar3 = (pGVar5->fields)._definition;
              if (pGVar3 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
                __this_00 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)
                            **(undefined8 **)(g_data_057b9c00 + 0xb8);
              }
              else {
                __this_00 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)(pGVar3->fields).Id;
              }
              if (__this_00 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) goto label_03b652e1;
              bVar4 = System_String__Equals_3af4de0((System_String_o *)__this_00,pickerId,5,(MethodInfo *)0x0)
              ;
              a = __this_00;
              if ((char)bVar4 != '\0') {
                pMVar10 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                a = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)(pGVar5->fields)._query;
                bVar4 = System_String__Equals_3af50f0
                                  ((System_String_o *)a,(System_String_o *)pMVar10,5,(MethodInfo *)0x0);
                if ((char)bVar4 == '\0') {
                  (pGVar5->fields)._query = (System_String_o *)pMVar10;
                  il2cpp_runtime_helper_022b4080(&(pGVar5->fields)._query);
                  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild(pGVar5,pMVar10);
                  a = pGVar5;
                }
              }
              uVar9 = (uint)pSVar6->max_length;
              lVar8 = lVar8 + 1;
              if ((int)uVar9 <= (int)(uint)lVar8) {
                return;
              }
            } while ((uint)lVar8 < uVar9);
          }
        }
        else {
          iVar1 = (int)pSVar6->max_length;
          if (iVar1 < 1) {
            return;
          }
          uVar9 = 0;
          if (iVar1 != 0) {
            do {
              pGVar5 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)pSVar6->m_Items[(int)uVar9];
              __this_00 = a;
              if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) goto label_03b652e1;
              pGVar3 = (pGVar5->fields)._definition;
              if (pGVar3 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
                __this_00 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)
                            **(undefined8 **)(g_data_057b9c00 + 0xb8);
              }
              else {
                __this_00 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)(pGVar3->fields).Id;
              }
              if (__this_00 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) goto label_03b652e1;
              bVar4 = System_String__Equals_3af4de0((System_String_o *)__this_00,pickerId,5,(MethodInfo *)0x0)
              ;
              a = __this_00;
              if ((char)bVar4 != '\0') {
                a = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)(pGVar5->fields)._query;
                bVar4 = System_String__Equals_3af50f0
                                  ((System_String_o *)a,(System_String_o *)pMVar10,5,(MethodInfo *)0x0);
                if ((char)bVar4 == '\0') {
                  (pGVar5->fields)._query = (System_String_o *)pMVar10;
                  method_00 = pMVar10;
                  il2cpp_runtime_helper_022b4080(&(pGVar5->fields)._query);
                  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild(pGVar5,method_00);
                  a = pGVar5;
                }
              }
              uVar9 = uVar9 + 1;
              uVar2 = (uint)pSVar6->max_length;
              if ((int)uVar2 <= (int)uVar9) {
                return;
              }
            } while (uVar9 < uVar2);
          }
        }
        goto label_03b652e6;
      }
    }
  }
  else if ((context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) &&
          (__this = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0),
          __this_00 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)context.fields.GameObject,
          __this != (UnityEngine_Transform_o *)0x0)) {
    a = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)
        UnityEngine_Transform__get_root(__this,(MethodInfo *)0x0);
    goto label_03b6502f;
  }
label_03b652e1:
  a = __this_00;
  il2cpp_runtime_helper_022b2c90();
label_03b652e6:
  il2cpp_runtime_helper_022b2ca0();
  if ((a->fields)._definition == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_255B340* method);
// 0x265b340

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_255B340 *method)

{
  int iVar1;
  bool_conflict bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  System_String_o *a_00;
  ulong uVar5;
  uint uVar6;
  long in_RCX;
  long extraout_RDX;
  long extraout_RDX_00;
  ulong unaff_RBX;
  System_String_o *x;
  System_String_o *value;
  System_String_o *pSVar7;
  Il2CppObject *pIVar8;
  uint uStack_7c;
  ulong uStack_78;
  long lStack_70;
  System_String_o *pSStack_68;
  ulong uStack_60;
  MethodInfo_255B340 *pMStack_58;
  undefined8 *puStack_50;
  System_String_o *pSStack_48;
  System_Object_array *pSStack_40;
  
  if (method->rgctx_data == (MethodInfo_255B340_RGCTXs *)0x0) {
    pSStack_40 = (System_Object_array *)0x265b367;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    if (method->rgctx_data != (MethodInfo_255B340_RGCTXs *)0x0) goto label_0265b373;
    pSStack_40 = (System_Object_array *)0x265b48f;
    il2cpp_runtime_helper_02300a20(method);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
label_0265b373:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    pSStack_40 = (System_Object_array *)0x265b38c;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_40 = (System_Object_array *)0x265b39a;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (Il2CppObject *)0x0;
  }
  x = (System_String_o *)0x0;
  value = (System_String_o *)0x0;
  pSStack_40 = (System_Object_array *)0x265b3ae;
  a = id;
  bVar2 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (Il2CppObject *)0x0;
  }
  if (root != (UnityEngine_Transform_o *)0x0) {
    value = (System_String_o *)0x1;
    pSStack_40 = (System_Object_array *)0x265b3d5;
    a = (System_String_o *)root;
    pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)root,1,
                        (MethodInfo_24E85B0 *)
                        method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((int)pSVar4->max_length < 1) {
        return (Il2CppObject *)0x0;
      }
      unaff_RBX = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          x = (System_String_o *)pSVar4->m_Items[unaff_RBX];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pSStack_40 = (System_Object_array *)0x265b432;
            il2cpp_runtime_helper_02337ed0();
          }
          value = (System_String_o *)0x0;
          pSStack_40 = (System_Object_array *)0x265b43e;
          a = x;
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            root = (UnityEngine_Transform_o *)pSVar4;
            if (x == (System_String_o *)0x0) goto label_0265b4ac;
            value = (System_String_o *)0x0;
            pSStack_40 = (System_Object_array *)0x265b451;
            a = x;
            __this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (__this == (UnityEngine_Object_o *)0x0) goto label_0265b4ac;
            pSStack_40 = (System_Object_array *)0x265b460;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            pSStack_40 = (System_Object_array *)0x265b46d;
            value = id;
            bVar2 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              return (Il2CppObject *)x;
            }
          }
          unaff_RBX = unaff_RBX + 1;
          uVar3 = (uint)pSVar4->max_length;
          in_RCX = (long)(int)uVar3;
          if (in_RCX <= (long)unaff_RBX) {
            return (Il2CppObject *)0x0;
          }
        } while (unaff_RBX < uVar3);
      }
      goto label_0265b4b1;
    }
  }
label_0265b4ac:
  pSStack_40 = (System_Object_array *)0x265b4b1;
  il2cpp_runtime_helper_022b2c90();
  pSVar4 = (System_Object_array *)root;
label_0265b4b1:
  pSStack_40 = (System_Object_array *)0x265b4b6;
  il2cpp_runtime_helper_022b2ca0();
  puStack_50 = &TypeInfo_Object;
  uStack_60 = unaff_RBX;
  pMStack_58 = method;
  pSStack_48 = id;
  pSStack_40 = pSVar4;
  if (*(long *)(in_RCX + 0x38) == 0) {
    pSStack_68 = (System_String_o *)0x265b4eb;
    il2cpp_runtime_helper_02300a20(in_RCX);
  }
  if (a != (System_String_o *)0x0) {
    pSVar7 = (System_String_o *)0x0;
    pSStack_68 = (System_String_o *)0x265b4fd;
    a_00 = value;
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return (Il2CppObject *)0x0;
    }
    uVar3 = (uint)a[1].klass;
    if (0 < (int)uVar3) {
      if (extraout_RDX == 0) {
        uVar6 = 0;
        while (uVar6 < uVar3) {
          if ((&a[1].monitor)[(int)uVar6] != (void *)0x0) goto label_0265b59d;
          uVar6 = uVar6 + 1;
          if ((int)uVar3 <= (int)uVar6) {
            return (Il2CppObject *)0x0;
          }
        }
      }
      else {
        unaff_RBX = 0;
        uVar5 = (ulong)a[1].klass & 0xffffffff;
        if (uVar5 != 0) {
          do {
            pIVar8 = (&a[1].monitor)[unaff_RBX];
            if (pIVar8 != (Il2CppObject *)0x0) {
              pSStack_68 = (System_String_o *)0x265b54c;
              a_00 = (System_String_o *)
                     (**(code **)(extraout_RDX + 0x18))
                               (*(undefined8 *)(extraout_RDX + 0x40),pIVar8,
                                *(undefined8 *)(extraout_RDX + 0x28));
              pSStack_68 = (System_String_o *)0x265b55e;
              pSVar7 = value;
              bVar2 = System_String__Equals_3af50f0(a_00,value,5,(MethodInfo *)0x0);
              if ((char)bVar2 != '\0') {
                return pIVar8;
              }
              uVar5 = (ulong)*(uint *)&a[1].klass;
            }
            unaff_RBX = unaff_RBX + 1;
            if ((long)(int)uVar5 <= (long)unaff_RBX) {
              return (Il2CppObject *)0x0;
            }
          } while (unaff_RBX < uVar5);
        }
      }
      pSStack_68 = (System_String_o *)0x265b59d;
      il2cpp_runtime_helper_022b2ca0();
label_0265b59d:
      pSStack_68 = (System_String_o *)0x265b5a2;
      il2cpp_runtime_helper_022b2c90();
      pIVar8 = (Il2CppObject *)((ulong)pSVar7 & 0xffffffff);
      uStack_78 = unaff_RBX;
      lStack_70 = extraout_RDX;
      pSStack_68 = x;
      if (*(long *)(extraout_RDX_00 + 0x38) == 0) {
        il2cpp_runtime_helper_02300a20(extraout_RDX_00);
      }
      uStack_7c = 0;
      bVar2 = System_String__IsNullOrEmpty(a_00,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_Enum__TryParse_Int32Enum__2501010
                          (a_00,1,(int32_t *)&uStack_7c,
                           (MethodInfo_2501010 *)**(undefined8 **)(extraout_RDX_00 + 0x38));
        if ((char)bVar2 != '\0') {
          pIVar8 = (Il2CppObject *)(ulong)uStack_7c;
        }
      }
      return pIVar8;
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$<Build>b__20_0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__20_0 (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* root, const MethodInfo* method);
// 0x3b65390

void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__20_0
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *root,
               MethodInfo *method)

{
  float fVar1;
  System_String_o *placeholder;
  bool_conflict bVar2;
  System_Action_GisketchActionContext__o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_AottgUi__o *build;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  System_Action_GisketchActionContext__o *__this_01;
  MethodInfo *pMVar6;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (g_data_057a9daa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__20_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"scrollView");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    il2cpp_runtime_helper_023445d0(&"-search");
    g_data_057a9daa = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._searchPlaceholder,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
    __this_01 = pSVar3;
    System_Object___ctor((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) goto label_03b65814;
    (pSVar3->fields).invoke_impl = (intptr_t)__this;
    il2cpp_runtime_helper_022b4080(&(pSVar3->fields).invoke_impl,__this);
    pSVar4 = System_String__Concat_3ae5ba0((__this->fields)._id,"-search",(MethodInfo *)0x0);
    (pSVar3->fields).method_ptr = (intptr_t)pSVar4;
    il2cpp_runtime_helper_022b4080(&pSVar3->fields);
    pSVar4 = (System_String_o *)(pSVar3->fields).method_ptr;
    placeholder = (__this->fields)._searchPlaceholder;
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    __this_01 = pSVar3;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pSVar3,(MethodInfo *)0x0);
    if (pSVar3 == (System_Action_GisketchActionContext__o *)0x0) goto label_03b65814;
    *(float *)&(pSVar3->fields).method_ptr = 100.0;
    (pSVar3->fields).invoke_impl = (intptr_t)"percent";
    il2cpp_runtime_helper_022b4080(&(pSVar3->fields).invoke_impl);
    pMVar6 = (MethodInfo *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)pSVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,in_stack_ffffffffffffffc0);
    pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    __this_01 = pSVar3;
    System_Action_GisketchActionContext____ctor();
    if (root == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_03b65814;
    Gisketch_Aottg2UI_Code_AottgUi__InputField
              (root,pSVar4,placeholder,0,"inputField",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar3,0.2,0,pMVar6);
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
  System_Action_object____ctor();
  pSVar4 = (__this->fields)._id;
  fVar1 = (__this->fields)._height;
  if (g_data_057a9d9a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&"point");
    g_data_057a9d9a = '\x01';
  }
  pSVar3 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
  __this_01 = pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength___ctor
            ((Gisketch_Aottg2UI_Data_GisketchLength_o *)pSVar3,(MethodInfo *)0x0);
  if (pSVar3 != (System_Action_GisketchActionContext__o *)0x0) {
    *(float *)&(pSVar3->fields).method_ptr = fVar1;
    (pSVar3->fields).invoke_impl = "point";
    il2cpp_runtime_helper_022b4080(&(pSVar3->fields).invoke_impl);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    __this_00 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    __this_01 = __this_00;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (System_Action_GisketchActionContext__o *)0x0) {
      *(undefined4 *)&(__this_00->fields).method_ptr = 0x42c80000;
      (__this_00->fields).invoke_impl = (intptr_t)"percent";
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).invoke_impl);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)pSVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffffc0);
      pMVar6 = (MethodInfo *)0x0;
      __this_01 = "Column";
      contentLayout =
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
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
                  (root,"scrollView",build,pSVar4,pGVar5,contentLayout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pMVar6);
        return;
      }
    }
  }
label_03b65814:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$<Build>b__20_1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__20_1 (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* scroll, const MethodInfo* method);
// 0x3b65830

void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__20_1
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *scroll,
               MethodInfo *method)

{
  System_String_Fields pickerId;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *pGVar3;
  System_String_o *in_RCX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar4;
  void *extraout_RDX_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  System_String_o *in_R8;
  float fVar6;
  undefined8 in_stack_ffffffffffffff90;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 in_stack_ffffffffffffffa0;
  undefined8 in_stack_ffffffffffffffa8;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057a9dab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"-runtime");
    il2cpp_runtime_helper_023445d0(&"GridPickerRuntime");
    g_data_057a9dab = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)0x0;
  pGVar5 = pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar1->fields).type = "GridPickerRuntime";
    il2cpp_runtime_helper_022b4080(&pGVar1->fields);
    pSVar2 = System_String__Concat_3ae5ba0((__this->fields)._id,"-runtime",(MethodInfo *)0x0);
    (pGVar1->fields).id = pSVar2;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).id,pSVar2);
    pMVar4 = (MethodInfo *)(__this->fields)._id;
    (pGVar1->fields).value = (System_String_o *)pMVar4;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).value);
    fVar6 = Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth(__this,pMVar4);
    if (g_data_057a9d9a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"point");
      g_data_057a9d9a = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)0x0;
    pGVar5 = __this_00;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      *(float *)&(__this_00->fields).type = fVar6 + -28.0;
      (__this_00->fields).id = "point";
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).id);
      in_stack_ffffffffffffff98 = 0;
      in_stack_ffffffffffffffa0 = 0;
      in_stack_ffffffffffffff90 = 0;
      in_stack_ffffffffffffffa8 = 0;
      in_RCX = (System_String_o *)0x0;
      in_R8 = (System_String_o *)0x0;
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_c *)
               Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)__this_00,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,in_stack_ffffffffffffffd0);
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(pGVar1->fields).search;
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_helper_022b4080();
      if (scroll != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add(scroll,pGVar1,method_00);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = extraout_RDX;
  pGVar1 = pGVar5;
  if (g_data_057a9dac == '\0') {
    pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&TypeInfo_GisketchGridPicker;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9dac = '\x01';
    pMVar4 = extraout_RDX_00;
  }
  pSVar2 = (pGVar5->fields).id;
  if (pSVar2 != (System_String_o *)0x0) {
    pickerId = pSVar2->fields;
    pSVar2 = (pGVar5->fields).type;
    if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar4 = extraout_RDX_01;
    }
    context.fields.GameObject = (UnityEngine_GameObject_o *)in_stack_ffffffffffffff98;
    context.fields.ElementId = (System_String_o *)in_stack_ffffffffffffff90;
    context.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)in_stack_ffffffffffffffa0;
    context.fields._24_8_ = in_stack_ffffffffffffffa8;
    Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter(context,(System_String_o *)pickerId,pSVar2,pMVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar1->klass = pGVar3;
  il2cpp_runtime_helper_022b4080();
  pGVar1->monitor = extraout_RDX_02;
  il2cpp_runtime_helper_022b4080(&pGVar1->monitor,extraout_RDX_02);
  (pGVar1->fields).type = in_RCX;
  il2cpp_runtime_helper_022b4080(&pGVar1->fields,in_RCX);
  (pGVar1->fields).id = in_R8;
  il2cpp_runtime_helper_022b4080(&(pGVar1->fields).id,in_R8);
  return;
}



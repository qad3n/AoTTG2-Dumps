// Type: Gisketch.Aottg2UI.Code.GisketchGridPicker
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchGridPicker.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchGridPicker.RuntimeDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, int32_t columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, bool lazyLoadThumbnails, System_Action_GisketchActionContext__GisketchGridPickerItem__o* select, const MethodInfo* method);
// 0x3af96b0

void Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *__this,
               System_String_o *id,Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items,
               int32_t columns,float itemWidth,float itemHeight,float thumbnailWidth,
               float thumbnailHeight,bool_conflict lazyLoadThumbnails,
               System_Action_GisketchActionContext__GisketchGridPickerItem__o *select,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Id = id;
  il2cpp_runtime_glue(&__this->fields,id);
  (__this->fields).Items = items;
  il2cpp_runtime_glue(&(__this->fields).Items,items);
  (__this->fields).Columns = columns;
  (__this->fields).ItemWidth = itemWidth;
  (__this->fields).ItemHeight = itemHeight;
  (__this->fields).ThumbnailWidth = thumbnailWidth;
  (__this->fields).ThumbnailHeight = thumbnailHeight;
  *(char *)&(__this->fields).LazyLoadThumbnails = (char)lazyLoadThumbnails;
  (__this->fields).Select = select;
  il2cpp_runtime_glue(&(__this->fields).Select,select);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x3afa6d0

void Gisketch_Aottg2UI_Code_GisketchGridPicker_<>c__DisplayClass20_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker.<>c__DisplayClass20_0$$<Build>b__2
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0___Build_b__2 (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x3afa8e0

void Gisketch_Aottg2UI_Code_GisketchGridPicker_<>c__DisplayClass20_0__<Build>b__2
               (Gisketch_Aottg2UI_Code_GisketchGridPicker___c__DisplayClass20_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *pGVar1;
  System_String_o *pickerId;
  System_String_o *inputId;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05701489 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchGridPicker);
    DAT_05701489 = '\x01';
    in_RDX = extraout_RDX;
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *)0x0) {
    pickerId = (pGVar1->fields)._id;
    inputId = (__this->fields).inputId;
    if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter(context,pickerId,inputId,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___cctor (const MethodInfo* method);
// 0x3af8d30

/* WARNING: Type propagation algorithm not settling */

void Gisketch_Aottg2UI_Code_GisketchGridPicker___cctor(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_Collections_Generic_IEqualityComparer_TKey__o *comparer;
  long lVar3;
  System_String_o *value;
  void *pvVar4;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  Il2CppObject *value_00;
  undefined1 *puVar8;
  undefined8 uVar9;
  
  if (DAT_05701480 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Cod);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__RuntimeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentFactory);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentRegistry);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_init_method_metadata(&TypeInfo_GisketchGridPicker);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    il2cpp_init_method_metadata(&"GridPickerRuntime");
    DAT_05701480 = '\x01';
    if (*(int *)(TypeInfo_StringComparer + 0xe4) != 0) goto LAB_03af8d5c;
LAB_03af8edd:
    il2cpp_init_class();
    if (DAT_0570136f != '\0') goto LAB_03af8d69;
LAB_03af8eef:
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) goto LAB_03af8edd;
LAB_03af8d5c:
    if (DAT_0570136f == '\0') goto LAB_03af8eef;
LAB_03af8d69:
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__RuntimeDefinition);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar7,comparer,MethodInfo_Dictionary_2_System_String_Gisketch_Aottg2UI_Cod);
  **(undefined8 **)(TypeInfo_GisketchGridPicker + 0xb8) = pSVar7;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_GisketchGridPicker + 0xb8));
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar3 = **(long **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  value_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GisketchComponentFactory);
  pvVar4 = MethodInfo_Boolean_BuildRuntime;
  value_00[1].klass = (Il2CppClass *)*(undefined8 *)((long)MethodInfo_Boolean_BuildRuntime + 8);
  value_00[2].monitor = pvVar4;
  value_00[2].klass = (Il2CppClass *)0x0;
  il2cpp_runtime_glue(value_00 + 2);
  cVar1 = *(char *)((long)pvVar4 + 0x52);
  value_00[4].klass = (Il2CppClass *)value_00;
  cVar5 = il2cpp_glue_02274970(pvVar4);
  if (cVar5 == '\0') {
    if (cVar1 != '\x03') {
      uVar9 = il2cpp_glue_022dc730(0,"Delegate to an instance method cannot have null \'this\'.");
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar9,0);
    }
    puVar8 = &LAB_0205e5c0;
  }
  else {
    if (cVar1 != '\x04') {
      uVar9 = value_00[2].klass;
      value_00[1].monitor = value_00[1].klass;
      value_00[4].klass = (Il2CppClass *)uVar9;
      value_00[3].monitor = &LAB_0205e550;
      value = "GridPickerRuntime";
      goto joined_r0x03af8f42;
    }
    puVar8 = &LAB_0205e5f0;
  }
  value_00[1].monitor = puVar8;
  value_00[3].monitor = &LAB_0205e550;
  value = "GridPickerRuntime";
joined_r0x03af8f42:
  "GridPickerRuntime" = value;
  if (lVar3 != 0) {
    if (DAT_057014e2 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
      DAT_057014e2 = '\x01';
    }
    bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    pSVar7 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar3 + 0x10);
    if (pSVar7 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__set_Item
                (pSVar7,(Il2CppObject *)value,value_00,MethodInfo_Void_set_Item);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, int32_t columns, float itemWidth, float itemHeight, float thumbnailWidth, float thumbnailHeight, System_String_o* searchPlaceholder, System_Action_GisketchActionContext__GisketchGridPickerItem__o* select, float height, bool lazyLoadThumbnails, const MethodInfo* method);
// 0x3af9110

void Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items,int32_t columns,
               float itemWidth,float itemHeight,float thumbnailWidth,float thumbnailHeight,
               System_String_o *searchPlaceholder,
               System_Action_GisketchActionContext__GisketchGridPickerItem__o *select,float height,
               bool_conflict lazyLoadThumbnails,MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_05701481 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchGridPickerItem);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_05701481 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_glue(&__this->fields,id);
  if (items == (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0) {
    items = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)il2cpp_glue_02274930(TypeInfo_GisketchGridPickerItem,0);
  }
  (__this->fields)._items = items;
  il2cpp_runtime_glue(&(__this->fields)._items,items);
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = System_Math__Max(1,columns,(MethodInfo *)0x0);
  (__this->fields)._columns = iVar1;
  (__this->fields)._itemWidth = itemWidth;
  (__this->fields)._itemHeight = itemHeight;
  (__this->fields)._thumbnailWidth = thumbnailWidth;
  (__this->fields)._thumbnailHeight = thumbnailHeight;
  (__this->fields)._searchPlaceholder = searchPlaceholder;
  il2cpp_runtime_glue(&(__this->fields)._searchPlaceholder,searchPlaceholder);
  (__this->fields)._select = select;
  il2cpp_runtime_glue(&(__this->fields)._select,select);
  (__this->fields)._height = height;
  *(undefined1 *)&(__this->fields)._lazyLoadThumbnails = (undefined1)lazyLoadThumbnails;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$get_PreferredWidth
// il2cpp: float Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, const MethodInfo* method);
// 0x3af9260

float Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth
                (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  int32_t iVar3;
  
  if (DAT_05701482 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchGridPicker);
    DAT_05701482 = '\x01';
  }
  iVar3 = (__this->fields)._columns;
  fVar1 = (__this->fields)._itemWidth;
  if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05701483 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_05701483 = '\x01';
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  iVar3 = System_Math__Max(1,iVar3,(MethodInfo *)0x0);
  return (float)(iVar3 + -1) * 10.0 + fVar1 * (float)iVar3 + 8.0 + 28.0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$PreferredWidthFor
// il2cpp: float Gisketch_Aottg2UI_Code_GisketchGridPicker__PreferredWidthFor (int32_t columns, float itemWidth, const MethodInfo* method);
// 0x3af9350

float Gisketch_Aottg2UI_Code_GisketchGridPicker__PreferredWidthFor
                (int32_t columns,float itemWidth,MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_05701483 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_05701483 = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar1 = System_Math__Max(1,columns,(MethodInfo *)0x0);
  return (float)(iVar1 + -1) * 10.0 + (float)iVar1 * itemWidth + 8.0 + 28.0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker__Build (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x3af93e0

void Gisketch_Aottg2UI_Code_GisketchGridPicker__Build
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *key;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar1;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *pSVar2;
  int32_t iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool_conflict bVar7;
  Il2CppObject *__this_01;
  System_Action_AottgUi__o *build;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *pMVar8;
  float fVar9;
  MethodInfo *in_stack_ffffffffffffffa0;
  
  if (DAT_05701484 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__20_0);
    il2cpp_init_method_metadata(&TypeInfo_GisketchGridPicker);
    il2cpp_init_method_metadata(&TypeInfo_RuntimeDefinition);
    il2cpp_init_method_metadata(&"clear");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"-grid-picker");
    DAT_05701484 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              **(undefined8 **)(TypeInfo_GisketchGridPicker + 0xb8);
  key = (Il2CppClass *)(__this->fields)._id;
  pGVar1 = (__this->fields)._items;
  iVar3 = (__this->fields)._columns;
  fVar4 = (__this->fields)._itemWidth;
  fVar5 = (__this->fields)._itemHeight;
  fVar6 = (__this->fields)._thumbnailWidth;
  fVar9 = (__this->fields)._thumbnailHeight;
  bVar7 = (__this->fields)._lazyLoadThumbnails;
  pSVar2 = (__this->fields)._select;
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RuntimeDefinition);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  __this_01[1].klass = key;
  il2cpp_runtime_glue(__this_01 + 1,key);
  __this_01[1].monitor = pGVar1;
  il2cpp_runtime_glue(&__this_01[1].monitor,pGVar1);
  *(int32_t *)&__this_01[2].klass = iVar3;
  *(float *)((long)&__this_01[2].klass + 4) = fVar4;
  *(float *)&__this_01[2].monitor = fVar5;
  *(float *)((long)&__this_01[2].monitor + 4) = fVar6;
  *(float *)&__this_01[3].klass = fVar9;
  *(char *)((long)&__this_01[3].klass + 4) = (char)bVar7;
  __this_01[3].monitor = pSVar2;
  il2cpp_runtime_glue(&__this_01[3].monitor,pSVar2);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_00,(Il2CppObject *)key,__this_01,MethodInfo_Void_set_Item);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    pMVar8 = "-grid-picker";
    id = System_String__Concat
                   ((__this->fields)._id,(System_String_o *)"-grid-picker",(MethodInfo *)0x0);
    fVar9 = Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth(__this,pMVar8);
    if (DAT_0570147c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"point");
      DAT_0570147c = '\x01';
    }
    __this_02 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_02->fields).value = fVar9;
      (__this_02->fields).unit = "point";
      il2cpp_runtime_glue(&(__this_02->fields).unit);
      pMVar8 = (MethodInfo *)0x0;
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,10.0,__this_02,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffa0);
      if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (ui,"clear",build,id,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pMVar8);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3af9770

bool_conflict
Gisketch_Aottg2UI_Code_GisketchGridPicker__BuildRuntime
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint uVar1;
  ulong in_RAX;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this;
  ulong extraout_RAX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *local_28;
  
  if (DAT_05701485 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_GisketchGridPickerRuntime_AddComponent_GisketchG);
    in_RAX = il2cpp_init_method_metadata(&TypeInfo_GisketchGridPicker);
    DAT_05701485 = '\x01';
  }
  local_28 = (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0;
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    uVar1 = System_String__IsNullOrEmpty((node->fields).value,(MethodInfo *)0x0);
    in_RAX = (ulong)uVar1;
    if ((char)uVar1 == '\0') {
      if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)
          **(undefined8 **)(TypeInfo_GisketchGridPicker + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        method_00 = MethodInfo_Boolean_TryGetValue;
        uVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                          ((System_Collections_Generic_Dictionary_object__object__o *)
                           **(undefined8 **)(TypeInfo_GisketchGridPicker + 0xb8),
                           (Il2CppObject *)(node->fields).value,(Il2CppObject **)&local_28,
                           (MethodInfo_308E3E0 *)MethodInfo_Boolean_TryGetValue);
        in_RAX = (ulong)uVar1;
        if ((char)uVar1 == '\0') goto LAB_03af984c;
        if (go != (UnityEngine_GameObject_o *)0x0) {
          __this = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)
                   UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_GisketchGridPickerRuntime_AddComponent_GisketchG);
          if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
             (__this != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0)) {
            Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Setup
                      (__this,local_28,(context->fields).Theme,method_00);
            in_RAX = extraout_RAX;
            goto LAB_03af984c;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03af984c:
  return (bool_conflict)CONCAT71((int7)(in_RAX >> 8),1);
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Filter
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* pickerId, System_String_o* inputId, const MethodInfo* method);
// 0x3af9e30

void Gisketch_Aottg2UI_Code_GisketchGridPicker__Filter
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *pickerId,
               System_String_o *inputId,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *pGVar3;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar4;
  System_String_o *pSVar5;
  bool_conflict bVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Object_o *x;
  System_Object_array *pSVar8;
  UnityEngine_Object_Fields *pUVar9;
  long lVar10;
  uint uVar11;
  MethodInfo *method_00;
  MethodInfo *pMVar12;
  
  if (DAT_05701486 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchGridPickerRuntime___GetComponentsInChild);
    il2cpp_init_method_metadata(&MethodInfo_TMP_InputField_Find_TMP_InputField);
    il2cpp_init_method_metadata(&TypeInfo_GisketchGridPicker);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701486 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar7 = (UnityEngine_Transform_o *)0x0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if ((context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar7 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0),
       pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_03afa191;
    pUVar7 = UnityEngine_Transform__get_root(pUVar7,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = (UnityEngine_Object_o *)
      Gisketch_Aottg2UI_Code_GisketchGridPicker__Find<object>(pUVar7,inputId,MethodInfo_TMP_InputField_Find_TMP_InputField);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pUVar9 = *(UnityEngine_Object_Fields **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (x == (UnityEngine_Object_o *)0x0) goto LAB_03afa191;
    pUVar9 = &x[0x16].fields;
  }
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    pMVar12 = (MethodInfo *)pUVar9->m_CachedPtr;
    pSVar8 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)pUVar7,1,MethodInfo_GisketchGridPickerRuntime___GetComponentsInChild);
    if (pSVar8 != (System_Object_array *)0x0) {
      if (pMVar12 == (MethodInfo *)0x0) {
        iVar1 = (int)pSVar8->max_length;
        if (iVar1 < 1) {
          return;
        }
        lVar10 = 0;
        if (iVar1 != 0) {
          do {
            pGVar3 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)pSVar8->m_Items[lVar10];
            if (pGVar3 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0)
            goto LAB_03afa191;
            pGVar4 = (pGVar3->fields)._definition;
            if (pGVar4 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
              pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            }
            else {
              pSVar5 = (pGVar4->fields).Id;
            }
            if (pSVar5 == (System_String_o *)0x0) goto LAB_03afa191;
            bVar6 = System_String__Equals(pSVar5,pickerId,5,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              pMVar12 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
              bVar6 = System_String__Equals
                                ((pGVar3->fields)._query,(System_String_o *)pMVar12,5,
                                 (MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                (pGVar3->fields)._query = (System_String_o *)pMVar12;
                il2cpp_runtime_glue(&(pGVar3->fields)._query);
                Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild(pGVar3,pMVar12);
              }
            }
            uVar11 = (uint)pSVar8->max_length;
            lVar10 = lVar10 + 1;
            if ((int)uVar11 <= (int)(uint)lVar10) {
              return;
            }
          } while ((uint)lVar10 < uVar11);
        }
      }
      else {
        iVar1 = (int)pSVar8->max_length;
        if (iVar1 < 1) {
          return;
        }
        uVar11 = 0;
        if (iVar1 != 0) {
          do {
            pGVar3 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)
                     pSVar8->m_Items[(int)uVar11];
            if (pGVar3 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0)
            goto LAB_03afa191;
            pGVar4 = (pGVar3->fields)._definition;
            if (pGVar4 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
              pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
            }
            else {
              pSVar5 = (pGVar4->fields).Id;
            }
            if (pSVar5 == (System_String_o *)0x0) goto LAB_03afa191;
            bVar6 = System_String__Equals(pSVar5,pickerId,5,(MethodInfo *)0x0);
            if (((char)bVar6 != '\0') &&
               (bVar6 = System_String__Equals
                                  ((pGVar3->fields)._query,(System_String_o *)pMVar12,5,
                                   (MethodInfo *)0x0), (char)bVar6 == '\0')) {
              (pGVar3->fields)._query = (System_String_o *)pMVar12;
              method_00 = pMVar12;
              il2cpp_runtime_glue(&(pGVar3->fields)._query);
              Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild(pGVar3,method_00);
            }
            uVar11 = uVar11 + 1;
            uVar2 = (uint)pSVar8->max_length;
            if ((int)uVar2 <= (int)uVar11) {
              return;
            }
          } while (uVar11 < uVar2);
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03afa191:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_24F21D0* method);
// 0x25f21d0

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPicker__Find<object>
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_24F21D0 *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar5;
  
  if ((method->rgctx_data == (MethodInfo_24F21D0_RGCTXs *)0x0) &&
     (il2cpp_init_method_metadata(&TypeInfo_Object), method->rgctx_data == (MethodInfo_24F21D0_RGCTXs *)0x0)) {
    il2cpp_glue_022c2910(method);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar3 == '\0') &&
     (bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), (char)bVar3 == '\0')) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)root,1,
                            (MethodInfo_24A5220 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_)
       , pSVar4 == (System_Object_array *)0x0)) {
LAB_025f233c:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar3 != '\0') {
            if ((x == (UnityEngine_Object_o *)0x0) ||
               (__this = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
               __this == (UnityEngine_Object_o *)0x0)) goto LAB_025f233c;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return (Il2CppObject *)x;
            }
          }
          uVar5 = uVar5 + 1;
          uVar2 = (uint)pSVar4->max_length;
          if ((long)(int)uVar2 <= (long)uVar5) {
            return (Il2CppObject *)0x0;
          }
        } while (uVar5 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$<Build>b__20_0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__20_0 (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* root, const MethodInfo* method);
// 0x3afa240

void Gisketch_Aottg2UI_Code_GisketchGridPicker__<Build>b__20_0
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *root,MethodInfo *method)

{
  float fVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  System_Action_GisketchActionContext__o *change;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  MethodInfo *pMVar7;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (DAT_05701487 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__20_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__2);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass20_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"scrollView");
    il2cpp_init_method_metadata(&"inputField");
    il2cpp_init_method_metadata(&"FlexStart");
    il2cpp_init_method_metadata(&"-search");
    DAT_05701487 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty((__this->fields)._searchPlaceholder,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass20_0);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Il2CppObject *)0x0) goto LAB_03afa6c4;
    __this_00[1].monitor = __this;
    il2cpp_runtime_glue(&__this_00[1].monitor,__this);
    pIVar4 = (Il2CppClass *)
             System_String__Concat((__this->fields)._id,"-search",(MethodInfo *)0x0);
    __this_00[1].klass = pIVar4;
    il2cpp_runtime_glue(__this_00 + 1);
    pIVar4 = __this_00[1].klass;
    pSVar2 = (__this->fields)._searchPlaceholder;
    if (DAT_0570147d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"percent");
      DAT_0570147d = '\x01';
    }
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto LAB_03afa6c4;
    (pGVar5->fields).value = 100.0;
    (pGVar5->fields).unit = "percent";
    il2cpp_runtime_glue(&(pGVar5->fields).unit);
    pMVar7 = (MethodInfo *)0x0;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,in_stack_ffffffffffffffc0);
    change = (System_Action_GisketchActionContext__o *)il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
    System_Action<GisketchActionContext>___ctor();
    if (root == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto LAB_03afa6c4;
    Gisketch_Aottg2UI_Code_AottgUi__InputField
              (root,(System_String_o *)pIVar4,pSVar2,0,"inputField",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,change,0.2,0,pMVar7);
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  pSVar2 = (__this->fields)._id;
  fVar1 = (__this->fields)._height;
  if (DAT_0570147c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&"point");
    DAT_0570147c = '\x01';
  }
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (pGVar5->fields).value = fVar1;
    (pGVar5->fields).unit = "point";
    il2cpp_runtime_glue(&(pGVar5->fields).unit);
    if (DAT_0570147d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"percent");
      DAT_0570147d = '\x01';
    }
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = 100.0;
      (__this_01->fields).unit = "percent";
      il2cpp_runtime_glue(&(__this_01->fields).unit);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_01,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,in_stack_ffffffffffffffc0);
      pMVar7 = (MethodInfo *)0x0;
      contentLayout =
           Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,8.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,in_stack_ffffffffffffffc0);
      if (root != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                  (root,"scrollView",build,pSVar2,pGVar6,contentLayout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pMVar7);
        return;
      }
    }
  }
LAB_03afa6c4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPicker$$<Build>b__20_1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPicker___Build_b__20_1 (Gisketch_Aottg2UI_Code_GisketchGridPicker_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* scroll, const MethodInfo* method);
// 0x3afa6e0

void Gisketch_Aottg2UI_Code_GisketchGridPicker__<Build>b__20_1
               (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *scroll,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar3;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_05701488 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"-runtime");
    il2cpp_init_method_metadata(&"GridPickerRuntime");
    DAT_05701488 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "GridPickerRuntime";
    il2cpp_runtime_glue(&__this_00->fields);
    pSVar1 = System_String__Concat((__this->fields)._id,"-runtime",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar1;
    il2cpp_runtime_glue(&(__this_00->fields).id,pSVar1);
    method_01 = (MethodInfo *)(__this->fields)._id;
    (__this_00->fields).value = (System_String_o *)method_01;
    il2cpp_runtime_glue(&(__this_00->fields).value);
    fVar3 = Gisketch_Aottg2UI_Code_GisketchGridPicker__get_PreferredWidth(__this,method_01);
    if (DAT_0570147c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"point");
      DAT_0570147c = '\x01';
    }
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = fVar3 + -28.0;
      (__this_01->fields).unit = "point";
      il2cpp_runtime_glue(&(__this_01->fields).unit);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,__this_01,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,in_stack_ffffffffffffffd0);
      (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_glue(&(__this_00->fields).search,pGVar2);
      if (scroll != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Add(scroll,__this_00,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}



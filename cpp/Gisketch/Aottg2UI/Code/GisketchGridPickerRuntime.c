// Type: Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchGridPickerRuntime.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.ThumbnailLoad$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o __this, UnityEngine_UI_Image_o* image, System_String_o* resourcePath, int32_t generation, const MethodInfo* method);
// 0x3afced0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o __this,
               UnityEngine_UI_Image_o *image,System_String_o *resourcePath,int32_t generation,
               MethodInfo *method)

{
  undefined4 in_register_00000014;
  
  image->klass = (UnityEngine_UI_Image_c *)resourcePath;
  il2cpp_runtime_glue();
  image->monitor = (void *)CONCAT44(in_register_00000014,generation);
  il2cpp_runtime_glue(&image->monitor,(void *)CONCAT44(in_register_00000014,generation));
  *(int *)&(image->fields).m_CachedPtr = (int)method;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x3afc290

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<>c__DisplayClass20_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass20_0$$<CreateCard>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0___CreateCard_b__0 (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x3afd280

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<>c__DisplayClass20_0__<CreateCard>b__0
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *pGVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar2;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *pSVar3;
  UnityEngine_Object_o *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_01;
  System_String_o *gameObject;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 in_stack_ffffffffffffff50;
  undefined4 in_stack_ffffffffffffff54;
  undefined4 in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  System_String_o SStack_78;
  undefined8 uStack_60;
  System_String_c *pSStack_58;
  void *pvStack_50;
  System_String_Fields SStack_48;
  undefined8 uStack_40;
  System_String_o *pSStack_38;
  System_String_o *pSStack_30;
  System_String_o *pSStack_28;
  System_String_o *pSStack_20;
  
  pGVar1 = (__this->fields).__4__this;
  if ((pGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) &&
     (pGVar2 = (pGVar1->fields)._definition,
     pGVar2 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0)) {
    pSVar3 = (pGVar2->fields).Select;
    if (pSVar3 != (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
      __this_00 = (UnityEngine_Object_o *)(__this->fields).card;
      if (__this_00 == (UnityEngine_Object_o *)0x0) goto LAB_03afd35b;
      gameObject = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      SStack_78.fields._stringLength = 0;
      SStack_78.fields._firstChar = 0;
      SStack_78.fields._6_2_ = 0;
      uStack_60 = 0;
      SStack_78.klass = (System_String_c *)0x0;
      SStack_78.monitor = (void *)0x0;
      __this_01.fields.ElementId._4_4_ = in_stack_ffffffffffffff4c;
      __this_01.fields.ElementId._0_4_ = in_stack_ffffffffffffff48;
      __this_01.fields.GameObject._0_4_ = in_stack_ffffffffffffff50;
      __this_01.fields.GameObject._4_4_ = in_stack_ffffffffffffff54;
      __this_01.fields.Node._0_4_ = in_stack_ffffffffffffff58;
      __this_01.fields.Node._4_4_ = in_stack_ffffffffffffff5c;
      __this_01.fields.InputSource = in_stack_ffffffffffffff60;
      __this_01.fields._28_4_ = in_stack_ffffffffffffff64;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                (__this_01,&SStack_78,(UnityEngine_GameObject_o *)gameObject,
                 (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this->fields).card,
                 (MethodInfo *)0x0);
      pSStack_38 = (__this->fields).item.fields.Key;
      pSStack_30 = (__this->fields).item.fields.Label;
      pSStack_28 = (__this->fields).item.fields.Sprite;
      pSStack_20 = (__this->fields).item.fields.Keywords;
      pSStack_58 = SStack_78.klass;
      pvStack_50 = SStack_78.monitor;
      SStack_48 = SStack_78.fields;
      uStack_40 = uStack_60;
      (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
    }
    return;
  }
LAB_03afd35b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass25_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x3afd180

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<>c__DisplayClass25_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass25_0$$<FadeIn>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0___FadeIn_b__0 (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0_o* __this, float value, const MethodInfo* method);
// 0x3afd360

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<>c__DisplayClass25_0__<FadeIn>b__0
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  undefined4 uVar3;
  undefined4 in_XMM1_Da;
  
  if (DAT_05701498 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701498 = '\x01';
  }
  pUVar1 = (__this->fields).image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pUVar1 = (__this->fields).image;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    uVar3 = (*(pUVar1->klass->vtable)._22_get_color.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._22_get_color.method);
    pUVar1 = (__this->fields).image;
    if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
      vtable_dispatch = (pUVar1->klass->vtable)._23_set_color.methodPtr;
      (*vtable_dispatch)
                (uVar3,in_XMM1_Da,pUVar1,(pUVar1->klass->vtable)._23_set_color.method,extraout_RDX,
                 vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3afb0b0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<BuildCards>d__17___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_IDisposable_Dispose (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3afd410

/* WARNING: Removing unreachable block (ram,0x03afd48f) */

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<BuildCards>d__17__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o __this_01;
  undefined8 unaff_RBX;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_retaddr;
  undefined1 in_stack_00000008 [16];
  
  uVar1 = (__this->fields).__1__state;
  if ((uVar1 & 0xfffffffe) == 0xfffffffc) {
    if ((uVar1 != 1) && (uVar1 != 0xfffffffc)) goto LAB_03afd46c;
  }
  else if (uVar1 != 1) {
    return;
  }
  if (DAT_0570149a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_0570149a = '\x01';
  }
  (__this->fields).__1__state = -3;
  __this_01.fields._index = (int)unaff_R14;
  __this_01.fields._version = (int)((ulong)unaff_R14 >> 0x20);
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)unaff_RBX;
  __this_01.fields._current.fields.Key = (System_String_o *)unaff_R15;
  __this_01.fields._current.fields.Label = (System_String_o *)unaff_retaddr;
  __this_01.fields._current.fields._16_16_ = in_stack_00000008;
  System_Collections_Generic_List_Enumerator<GisketchGridPickerItem>__Dispose
            (__this_01,(MethodInfo_317FC00 *)&(__this->fields).__7__wrap3);
LAB_03afd46c:
  (__this->fields).__1__state = -1;
  __this_00.fields._detail = (System_String_o *)unaff_R14;
  __this_00.fields._area = (System_String_o *)unaff_RBX;
  __this_00.fields._startMs = unaff_R15;
  __this_00.fields._24_8_ = unaff_retaddr;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_00,(MethodInfo *)&(__this->fields).__7__wrap1);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__MoveNext (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3afd4f0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<BuildCards>d__17__MoveNext
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
          MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *pGVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *method_00;
  int iVar3;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar5;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o __this_02;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o __this_03;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o __this_04;
  bool bVar6;
  bool bVar7;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *pGVar8;
  bool_conflict bVar9;
  System_String_o *pSVar10;
  System_Collections_Generic_List_GisketchGridPickerItem__o *__this_05;
  System_String_array *values;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar11;
  System_String_o *pSVar12;
  undefined8 uVar13;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  int32_t *piVar14;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o *method_04;
  System_String_o *in_stack_ffffffffffffff18;
  System_String_o *in_stack_ffffffffffffff20;
  System_String_o *in_stack_ffffffffffffff28;
  System_String_o *in_stack_ffffffffffffff30;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff40;
  int iVar15;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_b8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  System_Collections_Generic_List_Enumerator_T__o SStack_88;
  bool_conflict bStack_70;
  bool_conflict bStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int32_t iStack_50;
  int32_t iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  bool_conflict bStack_40;
  bool_conflict bStack_3c;
  
  if (DAT_05701499 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GisketchGridPickerItem_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Code_Gisk);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&" complete built=");
    il2cpp_init_method_metadata(&" query='");
    il2cpp_init_method_metadata(&"'");
    il2cpp_init_method_metadata(&" total=");
    il2cpp_init_method_metadata(&"GridPicker.BuildCards");
    il2cpp_init_method_metadata(&" filtered=");
    il2cpp_init_method_metadata(&" yield built=");
    DAT_05701499 = '\x01';
  }
  iVar15 = 0;
  iVar3 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -4;
    if (__this_00 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) {
      __this_02.fields._8_8_ = in_stack_ffffffffffffff20;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
      __this_02.fields._current.fields.Key = in_stack_ffffffffffffff28;
      __this_02.fields._current.fields.Label = in_stack_ffffffffffffff30;
      __this_02.fields._current.fields.Sprite = (System_String_o *)in_stack_ffffffffffffff38;
      __this_02.fields._current.fields.Keywords._0_4_ = in_stack_ffffffffffffff40;
      __this_02.fields._current.fields.Keywords._4_4_ = 0;
      bVar9 = System_Collections_Generic_List_Enumerator<GisketchGridPickerItem>__MoveNext
                        (__this_02,(MethodInfo_317FC10 *)&(__this->fields).__7__wrap3);
      bVar7 = true;
      bVar6 = true;
      pGVar8 = __this;
      if ((char)bVar9 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      goto joined_r0x03afd62b;
    }
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar4 = (__this_00->fields)._definition;
    if (pGVar4 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      pGVar11 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)
                 (DAT_057110b0 + 0xb8);
    }
    else {
      pGVar11 = &pGVar4->fields;
    }
    pSVar10 = System_String__Concat
                        (pGVar11->Id," query='",(__this_00->fields)._query,"'",
                         (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              (&GStack_b8,"GridPicker.BuildCards",pSVar10,(MethodInfo *)0x0);
    uStack_48 = (undefined4)GStack_b8.fields._startMs;
    uStack_44 = GStack_b8.fields._startMs._4_4_;
    bStack_40 = GStack_b8.fields._enabled;
    bStack_3c = GStack_b8.fields._hotLoop;
    uStack_58 = GStack_b8.fields._area._0_4_;
    uStack_54 = GStack_b8.fields._area._4_4_;
    iStack_50 = (int32_t)GStack_b8.fields._detail;
    iStack_4c = GStack_b8.fields._detail._4_4_;
    *(undefined4 *)&(__this->fields).__7__wrap1.fields._startMs =
         (undefined4)GStack_b8.fields._startMs;
    *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._startMs + 4) =
         GStack_b8.fields._startMs._4_4_;
    (__this->fields).__7__wrap1.fields._enabled = GStack_b8.fields._enabled;
    (__this->fields).__7__wrap1.fields._hotLoop = GStack_b8.fields._hotLoop;
    *(undefined4 *)&(__this->fields).__7__wrap1.fields._area = GStack_b8.fields._area._0_4_;
    *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._area + 4) =
         GStack_b8.fields._area._4_4_;
    *(int32_t *)&(__this->fields).__7__wrap1.fields._detail = (int32_t)GStack_b8.fields._detail;
    *(int32_t *)((long)&(__this->fields).__7__wrap1.fields._detail + 4) =
         GStack_b8.fields._detail._4_4_;
    method_03 = (MethodInfo *)0x0;
    il2cpp_runtime_glue(&(__this->fields).__7__wrap1);
    (__this->fields).__1__state = -3;
    __this_05 = Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__FilteredItems(__this_00,method_03)
    ;
    values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
    pGVar4 = (__this_00->fields)._definition;
    if (pGVar4 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      pGVar11 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)
                 (DAT_057110b0 + 0xb8);
    }
    else {
      pGVar11 = &pGVar4->fields;
    }
    if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    values->m_Items[0] = pGVar11->Id;
    il2cpp_runtime_glue(values->m_Items);
    if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    values->m_Items[1] = " filtered=";
    il2cpp_runtime_glue(values->m_Items + 1);
    if (__this_05 == (System_Collections_Generic_List_GisketchGridPickerItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar10 = System_Int32__ToString((int32_t)&stack0xffffffffffffff44,(MethodInfo *)0x0);
    if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    values->m_Items[2] = pSVar10;
    il2cpp_runtime_glue(values->m_Items + 2,pSVar10);
    if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    values->m_Items[3] = " total=";
    il2cpp_runtime_glue(values->m_Items + 3);
    pGVar4 = (__this_00->fields)._definition;
    iVar15 = 0;
    if ((pGVar4 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) &&
       (pGVar5 = (pGVar4->fields).Items, iVar15 = 0,
       pGVar5 != (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0)) {
      iVar15 = (int)pGVar5->max_length;
    }
    pSVar10 = System_Int32__ToString((int32_t)&stack0xffffffffffffff44,(MethodInfo *)0x0);
    if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    values->m_Items[4] = pSVar10;
    il2cpp_runtime_glue(values->m_Items + 4);
    pSVar10 = System_String__Concat(values,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("GridPicker.BuildCards",pSVar10,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__UpdateHeight
              (__this_00,(__this_05->fields)._size,method_01);
    (__this->fields)._built_5__3 = 0;
    System_Collections_Generic_List<GisketchGridPickerItem>__GetEnumerator
              (&SStack_88,__this_05,MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Code_Gisk);
    uStack_98 = uStack_68;
    uStack_94 = uStack_64;
    uStack_90 = uStack_60;
    uStack_8c = uStack_5c;
    GStack_b8.fields._startMs._0_4_ = SStack_88.fields._current._0_4_;
    GStack_b8.fields._startMs._4_4_ = SStack_88.fields._current._4_4_;
    GStack_b8.fields._enabled = bStack_70;
    GStack_b8.fields._hotLoop = bStack_6c;
    GStack_b8.fields._area._0_4_ = SStack_88.fields._list._0_4_;
    GStack_b8.fields._area._4_4_ = SStack_88.fields._list._4_4_;
    GStack_b8.fields._detail._0_4_ = SStack_88.fields._index;
    GStack_b8.fields._detail._4_4_ = SStack_88.fields._version;
    *(undefined4 *)&(__this->fields).__7__wrap3.fields._current.fields.Sprite = uStack_68;
    *(undefined4 *)((long)&(__this->fields).__7__wrap3.fields._current.fields.Sprite + 4) =
         uStack_64;
    *(undefined4 *)&(__this->fields).__7__wrap3.fields._current.fields.Keywords = uStack_60;
    *(undefined4 *)((long)&(__this->fields).__7__wrap3.fields._current.fields.Keywords + 4) =
         uStack_5c;
    *(undefined4 *)&(__this->fields).__7__wrap3.fields._current.fields.Key =
         SStack_88.fields._current._0_4_;
    *(undefined4 *)((long)&(__this->fields).__7__wrap3.fields._current.fields.Key + 4) =
         SStack_88.fields._current._4_4_;
    *(bool_conflict *)&(__this->fields).__7__wrap3.fields._current.fields.Label = bStack_70;
    *(bool_conflict *)((long)&(__this->fields).__7__wrap3.fields._current.fields.Label + 4) =
         bStack_6c;
    *(undefined4 *)&(__this->fields).__7__wrap3.fields._list = SStack_88.fields._list._0_4_;
    *(undefined4 *)((long)&(__this->fields).__7__wrap3.fields._list + 4) =
         SStack_88.fields._list._4_4_;
    (__this->fields).__7__wrap3.fields._index = SStack_88.fields._index;
    (__this->fields).__7__wrap3.fields._version = SStack_88.fields._version;
    il2cpp_runtime_glue(&(__this->fields).__7__wrap3,0);
    (__this->fields).__1__state = -4;
  }
  piVar14 = &(__this->fields)._built_5__3;
  pGVar2 = &(__this->fields).__7__wrap3.fields._current;
  in_stack_ffffffffffffff38 = __this;
  while (__this_03.fields._8_8_ = in_stack_ffffffffffffff20,
        __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18,
        __this_03.fields._current.fields.Key = in_stack_ffffffffffffff28,
        __this_03.fields._current.fields.Label = in_stack_ffffffffffffff30,
        __this_03.fields._current.fields.Sprite = (System_String_o *)in_stack_ffffffffffffff38,
        __this_03.fields._current.fields.Keywords._0_4_ = in_stack_ffffffffffffff40,
        __this_03.fields._current.fields.Keywords._4_4_ = iVar15,
        bVar9 = System_Collections_Generic_List_Enumerator<GisketchGridPickerItem>__MoveNext
                          (__this_03,(MethodInfo_317FC10 *)&(__this->fields).__7__wrap3),
        (char)bVar9 != '\0') {
    in_stack_ffffffffffffff18 = (pGVar2->fields).Key;
    in_stack_ffffffffffffff20 = (__this->fields).__7__wrap3.fields._current.fields.Label;
    in_stack_ffffffffffffff28 = (__this->fields).__7__wrap3.fields._current.fields.Sprite;
    in_stack_ffffffffffffff30 = (__this->fields).__7__wrap3.fields._current.fields.Keywords;
    Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__CreateCard
              (__this_00,(Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)pGVar2->fields,*piVar14,
               method_02);
    iVar15 = *piVar14;
    uVar1 = iVar15 + 1;
    *piVar14 = uVar1;
    if ((0x17 < (int)uVar1) && (iVar15 + (uVar1 / 0xc) * -0xc == -1)) {
      pGVar4 = (__this_00->fields)._definition;
      if (pGVar4 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
        pGVar11 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)
                   (DAT_057110b0 + 0xb8);
      }
      else {
        pGVar11 = &pGVar4->fields;
      }
      pSVar10 = pGVar11->Id;
      pSVar12 = System_Int32__ToString((int32_t)piVar14,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat(pSVar10," yield built=",pSVar12,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("GridPicker.BuildCards",pSVar10,(MethodInfo *)0x0);
      (in_stack_ffffffffffffff38->fields).__2__current = (Il2CppObject *)0x0;
      uVar13 = il2cpp_runtime_glue(&(in_stack_ffffffffffffff38->fields).__2__current,0);
      (in_stack_ffffffffffffff38->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar13 >> 8),1);
    }
  }
  bVar7 = false;
  bVar6 = false;
  pGVar8 = in_stack_ffffffffffffff38;
joined_r0x03afd62b:
  if (DAT_0570149a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_0570149a = '\x01';
    bVar6 = bVar7;
  }
  method_04 = &(__this->fields).__7__wrap3;
  (pGVar8->fields).__1__state = -3;
  __this_04.fields._8_8_ = in_stack_ffffffffffffff20;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
  __this_04.fields._current.fields.Key = in_stack_ffffffffffffff28;
  __this_04.fields._current.fields.Label = in_stack_ffffffffffffff30;
  __this_04.fields._current.fields.Sprite = (System_String_o *)in_stack_ffffffffffffff38;
  __this_04.fields._current.fields.Keywords._0_4_ = in_stack_ffffffffffffff40;
  __this_04.fields._current.fields.Keywords._4_4_ = iVar15;
  System_Collections_Generic_List_Enumerator<GisketchGridPickerItem>__Dispose
            (__this_04,(MethodInfo_317FC00 *)method_04);
  (__this->fields).__7__wrap3.fields._current.fields.Sprite = (System_String_o *)0x0;
  (__this->fields).__7__wrap3.fields._current.fields.Keywords = (System_String_o *)0x0;
  (__this->fields).__7__wrap3.fields._current.fields.Key = (System_String_o *)0x0;
  (__this->fields).__7__wrap3.fields._current.fields.Label = (System_String_o *)0x0;
  (method_04->fields)._list = (System_Collections_Generic_List_T__o *)0x0;
  (__this->fields).__7__wrap3.fields._index = 0;
  (__this->fields).__7__wrap3.fields._version = 0;
  if (!bVar6) {
    (__this_00->fields)._build = (UnityEngine_Coroutine_o *)0x0;
    il2cpp_runtime_glue(&(__this_00->fields)._build);
    pGVar4 = (__this_00->fields)._definition;
    if (pGVar4 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      pGVar11 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)
                 (DAT_057110b0 + 0xb8);
    }
    else {
      pGVar11 = &pGVar4->fields;
    }
    pSVar10 = pGVar11->Id;
    pSVar12 = System_Int32__ToString((int)__this + 0x48,(MethodInfo *)0x0);
    pSVar10 = System_String__Concat(pSVar10," complete built=",pSVar12,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("GridPicker.BuildCards",pSVar10,(MethodInfo *)0x0);
    (pGVar8->fields).__1__state = -1;
    method_00 = &(pGVar8->fields).__7__wrap1;
    __this_01.fields._detail = in_stack_ffffffffffffff20;
    __this_01.fields._area = in_stack_ffffffffffffff18;
    __this_01.fields._startMs = (int64_t)in_stack_ffffffffffffff28;
    __this_01.fields._24_8_ = in_stack_ffffffffffffff30;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)method_00);
    (pGVar8->fields).__7__wrap1.fields._startMs = 0;
    (pGVar8->fields).__7__wrap1.fields._enabled = 0;
    (pGVar8->fields).__7__wrap1.fields._hotLoop = 0;
    (method_00->fields)._area = (System_String_o *)0x0;
    (pGVar8->fields).__7__wrap1.fields._detail = (System_String_o *)0x0;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17____m__Finally1 (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3afdc00

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<BuildCards>d__17__<>m__Finally1
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [32];
  
  (__this->fields).__1__state = -1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o)in_stack_00000008,
             (MethodInfo *)&(__this->fields).__7__wrap1);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$<>m__Finally2
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17____m__Finally2 (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3afdbc0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<BuildCards>d__17__<>m__Finally2
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [48];
  
  if (DAT_0570149a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_0570149a = '\x01';
  }
  (__this->fields).__1__state = -3;
  System_Collections_Generic_List_Enumerator<GisketchGridPickerItem>__Dispose
            ((System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o)in_stack_00000008
             ,(MethodInfo_317FC00 *)&(__this->fields).__7__wrap3);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3afdc20

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<BuildCards>d__17__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3afdc30

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<BuildCards>d__17__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
               MethodInfo *method)

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


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3afdc70

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<BuildCards>d__17__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3afcf00

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<LoadThumbnails>d__23___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_IDisposable_Dispose (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, const MethodInfo* method);
// 0x3afdc80

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<LoadThumbnails>d__23__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__MoveNext (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, const MethodInfo* method);
// 0x3afdc90

/* WARNING: Type propagation algorithm not settling */

bool_conflict
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<LoadThumbnails>d__23__MoveNext
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,
          MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *pGVar3;
  System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *__this_00;
  UnityEngine_UI_Image_o *pUVar4;
  System_String_o *pSVar5;
  bool_conflict bVar6;
  MethodInfo *pMVar7;
  UnityEngine_ResourceRequest_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *unaff_RBX;
  UnityEngine_Sprite_o *pUStack_68;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o GStack_60;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int32_t iStack_38;
  undefined4 uStack_34;
  
  if (DAT_0570149b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_GisketchGridPickerRuntime_ThumbnailLoad_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_ResourceRequest_LoadAsync_Sprite);
    il2cpp_init_method_metadata(&TypeInfo_Sprite);
    DAT_0570149b = '\x01';
  }
  pUStack_68 = (UnityEngine_Sprite_o *)0x0;
  uVar1 = (__this->fields).__1__state;
  if (4 < uVar1) {
    return 0;
  }
  pGVar3 = (__this->fields).__4__this;
  switch(uVar1) {
  case 0:
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
LAB_03afe050:
    return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  case 1:
    (__this->fields).__1__state = -1;
    (__this->fields)._index_5__2 = 0;
    break;
  case 2:
    (__this->fields).__1__state = -1;
    break;
  case 3:
    (__this->fields).__1__state = -1;
    if (pGVar3 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) goto LAB_03afe063;
    iVar2 = (__this->fields).generation;
    if ((iVar2 == (pGVar3->fields)._thumbnailGeneration) &&
       ((__this->fields)._load_5__3.fields.Generation == iVar2)) {
      pUVar4 = (__this->fields)._load_5__3.fields.Image;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pUVar8 = (__this->fields)._request_5__4;
        if (pUVar8 == (UnityEngine_ResourceRequest_o *)0x0) goto LAB_03afe063;
        pMVar7 = (MethodInfo *)UnityEngine_ResourceRequest__get_asset(pUVar8,(MethodInfo *)0x0);
        unaff_RBX = (MethodInfo *)0x0;
        if ((pMVar7 != (MethodInfo *)0x0) &&
           (unaff_RBX = (MethodInfo *)0x0,
           (UnityEngine_Object_c *)pMVar7->methodPointer == TypeInfo_Sprite)) {
          unaff_RBX = pMVar7;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar5 = (__this->fields)._load_5__3.fields.ResourcePath;
          if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store
                    (pSVar5,(UnityEngine_Sprite_o *)unaff_RBX,(MethodInfo *)0x0);
          pUVar4 = (__this->fields)._load_5__3.fields.Image;
          if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
            pMVar7 = unaff_RBX;
            UnityEngine_UI_Image__set_sprite
                      (pUVar4,(UnityEngine_Sprite_o *)unaff_RBX,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__FadeIn
                      ((__this->fields)._load_5__3.fields.Image,pMVar7);
            (__this->fields).__2__current = (Il2CppObject *)0x0;
            il2cpp_runtime_glue(&(__this->fields).__2__current,0);
            (__this->fields).__1__state = 4;
            goto LAB_03afe050;
          }
          goto LAB_03afe063;
        }
      }
    }
    goto LAB_03afde57;
  case 4:
    (__this->fields).__1__state = -1;
    (__this->fields)._load_5__3.fields.Image = (UnityEngine_UI_Image_o *)0x0;
    (__this->fields)._load_5__3.fields.ResourcePath = (System_String_o *)0x0;
    *(undefined8 *)&(__this->fields)._load_5__3.fields.Generation = 0;
    (__this->fields)._request_5__4 = (UnityEngine_ResourceRequest_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._request_5__4,0);
  }
  if (pGVar3 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) {
LAB_03afde57:
    if ((__this->fields).generation != (pGVar3->fields)._thumbnailGeneration) {
      return 0;
    }
    unaff_RBX = (MethodInfo *)&(__this->fields)._load_5__3;
    __this_00 = (pGVar3->fields)._thumbnailLoads;
    while (__this_00 !=
           (System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *)0x0) {
      iVar2 = (__this->fields)._index_5__2;
      if ((__this_00->fields)._size <= iVar2) {
        if ((pGVar3->fields)._build == (UnityEngine_Coroutine_o *)0x0) {
          (pGVar3->fields)._thumbnailLoader = (UnityEngine_Coroutine_o *)0x0;
          il2cpp_runtime_glue(&(pGVar3->fields)._thumbnailLoader,0);
          return 0;
        }
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        il2cpp_runtime_glue(&(__this->fields).__2__current,0);
        (__this->fields).__1__state = 2;
        goto LAB_03afe050;
      }
      (__this->fields)._index_5__2 = iVar2 + 1;
      System_Collections_Generic_List<GisketchGridPickerRuntime_ThumbnailLoad>__get_Item
                (&GStack_60,__this_00,iVar2,MethodInfo_GisketchGridPickerRuntime_ThumbnailLoad_get_Item);
      iStack_38 = GStack_60.fields.Generation;
      uStack_34 = GStack_60.fields._20_4_;
      uStack_48 = GStack_60.fields.Image._0_4_;
      uStack_44 = GStack_60.fields.Image._4_4_;
      uStack_40 = GStack_60.fields.ResourcePath._0_4_;
      uStack_3c = GStack_60.fields.ResourcePath._4_4_;
      (__this->fields)._load_5__3.fields.Generation = GStack_60.fields.Generation;
      *(undefined4 *)&(__this->fields)._load_5__3.fields.field_0x14 = GStack_60.fields._20_4_;
      *(undefined4 *)
       &(((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o *)unaff_RBX)->fields).
        Image = GStack_60.fields.Image._0_4_;
      *(undefined4 *)((long)&(__this->fields)._load_5__3.fields.Image + 4) =
           GStack_60.fields.Image._4_4_;
      *(undefined4 *)&(__this->fields)._load_5__3.fields.ResourcePath =
           GStack_60.fields.ResourcePath._0_4_;
      *(undefined4 *)((long)&(__this->fields)._load_5__3.fields.ResourcePath + 4) =
           GStack_60.fields.ResourcePath._4_4_;
      il2cpp_runtime_glue(unaff_RBX);
      if ((__this->fields)._load_5__3.fields.Generation == (__this->fields).generation) {
        pUVar4 = (((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o *)unaff_RBX)->
                 fields).Image;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar5 = (__this->fields)._load_5__3.fields.ResourcePath;
          if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar6 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
                            (pSVar5,&pUStack_68,(MethodInfo *)0x0);
          if ((char)bVar6 == '\0') {
            pUVar8 = UnityEngine_Resources__LoadAsync<object>
                               ((__this->fields)._load_5__3.fields.ResourcePath,MethodInfo_ResourceRequest_LoadAsync_Sprite);
            (__this->fields)._request_5__4 = pUVar8;
            il2cpp_runtime_glue(&(__this->fields)._request_5__4,pUVar8);
            (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._request_5__4;
            il2cpp_runtime_glue(&(__this->fields).__2__current);
            (__this->fields).__1__state = 3;
            goto LAB_03afe050;
          }
          Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__ShowLoaded
                    ((((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o *)unaff_RBX
                      )->fields).Image,pUStack_68,method_00);
        }
      }
      if ((__this->fields).generation != (pGVar3->fields)._thumbnailGeneration) {
        return 0;
      }
      __this_00 = (pGVar3->fields)._thumbnailLoads;
    }
  }
LAB_03afe063:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, const MethodInfo* method);
// 0x3afe070

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<LoadThumbnails>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, const MethodInfo* method);
// 0x3afe080

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<LoadThumbnails>d__23__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,
               MethodInfo *method)

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


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, const MethodInfo* method);
// 0x3afe0c0

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_<LoadThumbnails>d__23__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__get_Id (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, const MethodInfo* method);
// 0x3afa1a0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__get_Id
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar1;
  
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    return (pGVar1->fields).Id;
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Setup (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o* definition, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3af9860

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Setup
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,
               Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *definition,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o **ppGVar1;
  int32_t *piVar2;
  UnityEngine_Vector2_o value;
  System_String_o *detail;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  undefined4 uVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar5;
  System_String_array *values;
  System_String_o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_UI_GridLayoutGroup_o *__this_01;
  MethodInfo *method_00;
  float fVar8;
  undefined1 in_stack_ffffffffffffff78 [12];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool_conflict bVar12;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (DAT_0570148a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GridLayoutGroup_AddComponent_GridLayoutGroup);
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_AddComponent_LayoutElement);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"x");
    il2cpp_init_method_metadata(&" item=");
    il2cpp_init_method_metadata(&"GridPicker.Setup");
    il2cpp_init_method_metadata(&" columns=");
    il2cpp_init_method_metadata(&"null");
    il2cpp_init_method_metadata(&" items=");
    DAT_0570148a = '\x01';
  }
  pSVar6 = "GridPicker.Setup";
  if (definition == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    pGVar5 = (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *)&"null";
  }
  else {
    pGVar5 = &definition->fields;
  }
  detail = pGVar5->Id;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_50,pSVar6,detail,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields)._definition;
  (__this->fields)._definition = definition;
  il2cpp_runtime_glue(ppGVar1,definition);
  (__this->fields)._theme = theme;
  il2cpp_runtime_glue(&(__this->fields)._theme,theme);
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,9);
  if (*ppGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    pGVar5 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)
              (DAT_057110b0 + 0xb8);
  }
  else {
    pGVar5 = &(*ppGVar1)->fields;
  }
  if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  values->m_Items[0] = pGVar5->Id;
  il2cpp_runtime_glue(values->m_Items);
  if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  values->m_Items[1] = " items=";
  il2cpp_runtime_glue(values->m_Items + 1);
  uVar4 = 0;
  if ((*ppGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) &&
     (pGVar3 = ((*ppGVar1)->fields).Items, uVar4 = 0,
     pGVar3 != (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0)) {
    uVar4 = (undefined4)pGVar3->max_length;
  }
  pSVar6 = System_Int32__ToString((int32_t)&stack0xffffffffffffff84,(MethodInfo *)0x0);
  if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  values->m_Items[2] = pSVar6;
  il2cpp_runtime_glue(values->m_Items + 2,pSVar6);
  if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  values->m_Items[3] = " columns=";
  il2cpp_runtime_glue(values->m_Items + 3);
  if (definition == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  piVar2 = &(definition->fields).Columns;
  pSVar6 = System_Int32__ToString((int32_t)piVar2,(MethodInfo *)0x0);
  if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  values->m_Items[4] = pSVar6;
  il2cpp_runtime_glue(values->m_Items + 4,pSVar6);
  if ((uint)values->max_length < 6) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  values->m_Items[5] = " item=";
  fVar8 = (float)il2cpp_runtime_glue(values->m_Items + 5);
  pSVar6 = System_Single__ToString(fVar8,(MethodInfo *)&(definition->fields).ItemWidth);
  if ((uint)values->max_length < 7) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  values->m_Items[6] = pSVar6;
  il2cpp_runtime_glue(values->m_Items + 6,pSVar6);
  if ((uint)values->max_length < 8) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  values->m_Items[7] = "x";
  fVar8 = (float)il2cpp_runtime_glue(values->m_Items + 7);
  pSVar6 = System_Single__ToString(fVar8,(MethodInfo *)&(definition->fields).ItemHeight);
  if ((uint)values->max_length < 9) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  values->m_Items[8] = pSVar6;
  il2cpp_runtime_glue(values->m_Items + 8);
  pSVar6 = System_String__Concat(values,(MethodInfo *)0x0);
  uVar9 = local_50.fields._area._0_4_;
  uVar10 = local_50.fields._area._4_4_;
  uVar11 = local_50.fields._detail._0_4_;
  bVar12 = local_50.fields._detail._4_4_;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
    uVar9 = local_50.fields._area._0_4_;
    uVar10 = local_50.fields._area._4_4_;
    uVar11 = local_50.fields._detail._0_4_;
    bVar12 = local_50.fields._detail._4_4_;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("GridPicker.Setup",pSVar6,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_01 = (UnityEngine_UI_GridLayoutGroup_o *)
              UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_GridLayoutGroup_AddComponent_GridLayoutGroup);
  if (__this_01 == (UnityEngine_UI_GridLayoutGroup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value.fields.x = (definition->fields).ItemWidth;
  value.fields.y = (definition->fields).ItemHeight;
  UnityEngine_UI_GridLayoutGroup__set_cellSize(__this_01,value,(MethodInfo *)0x0);
  UnityEngine_UI_GridLayoutGroup__set_spacing
            (__this_01,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
  UnityEngine_UI_GridLayoutGroup__set_constraint(__this_01,1,(MethodInfo *)0x0);
  UnityEngine_UI_GridLayoutGroup__set_constraintCount(__this_01,*piVar2,(MethodInfo *)0x0);
  UnityEngine_UI_GridLayoutGroup__set_startAxis(__this_01,0,(MethodInfo *)0x0);
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)__this_01,0,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  method_00 = MethodInfo_LayoutElement_AddComponent_LayoutElement;
  UnityEngine_GameObject__AddComponent<object>(pUVar7,(MethodInfo_24F0EB0 *)MethodInfo_LayoutElement_AddComponent_LayoutElement);
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild(__this,method_00);
  __this_00.fields._detail._4_4_ = uVar4;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff78;
  __this_00.fields._startMs._0_4_ = uVar9;
  __this_00.fields._startMs._4_4_ = uVar10;
  __this_00.fields._enabled = uVar11;
  __this_00.fields._hotLoop = bVar12;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$SetQuery
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SetQuery (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, System_String_o* query, const MethodInfo* method);
// 0x3afa1d0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SetQuery
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,System_String_o *query,
               MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (query == (System_String_o *)0x0) {
    query = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  bVar1 = System_String__Equals((__this->fields)._query,query,5,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  (__this->fields)._query = query;
  il2cpp_runtime_glue(&(__this->fields)._query);
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild(__this,(MethodInfo *)query);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Rebuild
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, const MethodInfo* method);
// 0x3afaa00

/* WARNING: Removing unreachable block (ram,0x03afaec6) */
/* WARNING: Removing unreachable block (ram,0x03afad38) */

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Coroutine_o **ppUVar2;
  int iVar3;
  int32_t iVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar5;
  System_Collections_Generic_List_GameObject__o *pSVar6;
  System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *pSVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  bool_conflict bVar8;
  System_String_array *values;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar9;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  UnityEngine_Coroutine_o *pUVar12;
  undefined1 in_stack_ffffffffffffff48 [12];
  int32_t iVar13;
  System_Collections_Generic_List_T__o *pSVar14;
  Il2CppRGCTXData *pIVar15;
  System_Collections_Generic_List_T__o *local_78;
  Il2CppRGCTXData *pIStack_70;
  _union_247328 local_68;
  _union_14 _Stack_60;
  undefined1 local_50 [32];
  
  if (DAT_0570148b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&" query='");
    il2cpp_init_method_metadata(&"' oldCards=");
    il2cpp_init_method_metadata(&"GridPicker.Rebuild");
    DAT_0570148b = '\x01';
  }
  local_68.genericMethod = (void *)0x0;
  _Stack_60 = (_union_14)0x0;
  local_78 = (System_Collections_Generic_List_T__o *)0x0;
  pIStack_70 = (Il2CppRGCTXData *)0x0;
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
  pGVar5 = (__this->fields)._definition;
  if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    pGVar9 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)
              (DAT_057110b0 + 0xb8);
  }
  else {
    pGVar9 = &pGVar5->fields;
  }
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pGVar9->Id;
      il2cpp_runtime_glue(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = " query='";
        il2cpp_runtime_glue(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = (__this->fields)._query;
          il2cpp_runtime_glue(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = "' oldCards=";
            il2cpp_runtime_glue(values->m_Items + 3);
            pSVar6 = (__this->fields)._cards;
            if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) goto LAB_03afaeb2;
            iVar13 = (pSVar6->fields)._size;
            pSVar10 = System_Int32__ToString((int32_t)&stack0xffffffffffffff54,(MethodInfo *)0x0);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar10;
              il2cpp_runtime_glue(values->m_Items + 4);
              pSVar10 = System_String__Concat(values,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
                il2cpp_init_class();
              }
              Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                        ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_50,
                         "GridPicker.Rebuild",pSVar10,(MethodInfo *)0x0);
              local_68.genericMethod = (void *)local_50._16_8_;
              _Stack_60 = (_union_14)local_50._24_8_;
              local_78 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
              pIStack_70 = (Il2CppRGCTXData *)local_50._8_8_;
              piVar1 = &(__this->fields)._thumbnailGeneration;
              *piVar1 = *piVar1 + 1;
              pUVar12 = (__this->fields)._build;
              if (pUVar12 != (UnityEngine_Coroutine_o *)0x0) {
                UnityEngine_MonoBehaviour__StopCoroutine
                          ((UnityEngine_MonoBehaviour_o *)__this,pUVar12,(MethodInfo *)0x0);
              }
              pUVar12 = (__this->fields)._thumbnailLoader;
              if (pUVar12 != (UnityEngine_Coroutine_o *)0x0) {
                UnityEngine_MonoBehaviour__StopCoroutine
                          ((UnityEngine_MonoBehaviour_o *)__this,pUVar12,(MethodInfo *)0x0);
              }
              pSVar7 = (__this->fields)._thumbnailLoads;
              if (pSVar7 == (System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o
                             *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              piVar1 = &(pSVar7->fields)._version;
              *piVar1 = *piVar1 + 1;
              iVar3 = (pSVar7->fields)._size;
              (pSVar7->fields)._size = 0;
              if (0 < iVar3) {
                System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,iVar3,
                                    (MethodInfo *)0x0);
              }
              pSVar6 = (__this->fields)._cards;
              if (pSVar6 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_List<object>__GetEnumerator
                        ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                         (System_Collections_Generic_List_object__o *)pSVar6,MethodInfo_List_1_T__Enumerator_UnityEngine_GameObject__Get);
              ppUVar2 = &(__this->fields)._thumbnailLoader;
              pSVar14 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
              pIVar15 = (Il2CppRGCTXData *)local_50._8_8_;
              while (__this_00.fields._version = iVar13,
                    __this_00.fields._list =
                         (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_,
                    __this_00.fields._index = in_stack_ffffffffffffff48._8_4_,
                    __this_00.fields._current = (Il2CppObject *)pSVar14,
                    bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                      (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff58),
                    (char)bVar8 != '\0') {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityEngine_Object__Destroy
                          ((UnityEngine_Object_o *)local_50._16_8_,(MethodInfo *)0x0);
              }
              __this_01.fields._version = iVar13;
              __this_01.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_;
              __this_01.fields._index = in_stack_ffffffffffffff48._8_4_;
              __this_01.fields._current = (Il2CppObject *)pSVar14;
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff58);
              pSVar6 = (__this->fields)._cards;
              if (pSVar6 != (System_Collections_Generic_List_GameObject__o *)0x0) {
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                iVar3 = (pSVar6->fields)._size;
                (pSVar6->fields)._size = 0;
                if (0 < iVar3) {
                  System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar3,
                                      (MethodInfo *)0x0);
                }
                if (DAT_0570148c == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_BuildCards_d__17);
                  DAT_0570148c = '\x01';
                }
                pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_BuildCards_d__17);
                System_Object___ctor(pIVar11,(MethodInfo *)0x0);
                *(undefined4 *)&pIVar11[1].klass = 0;
                if (pIVar11 != (Il2CppObject *)0x0) {
                  pIVar11[2].klass = (Il2CppClass *)__this;
                  il2cpp_runtime_glue(pIVar11 + 2,__this);
                  pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine
                                      ((UnityEngine_MonoBehaviour_o *)__this,
                                       (System_Collections_IEnumerator_o *)pIVar11,(MethodInfo *)0x0
                                      );
                  (__this->fields)._build = pUVar12;
                  il2cpp_runtime_glue();
                  pGVar5 = (__this->fields)._definition;
                  if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0
                     ) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  if ((char)(pGVar5->fields).LazyLoadThumbnails != '\0') {
                    iVar4 = (__this->fields)._thumbnailGeneration;
                    if (DAT_05701492 == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_LoadThumbnails_d__23);
                      DAT_05701492 = '\x01';
                    }
                    pIVar11 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadThumbnails_d__23);
                    System_Object___ctor(pIVar11,(MethodInfo *)0x0);
                    *(undefined4 *)&pIVar11[1].klass = 0;
                    if (pIVar11 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pIVar11[2].klass = (Il2CppClass *)__this;
                    il2cpp_runtime_glue(pIVar11 + 2,__this);
                    *(int32_t *)&pIVar11[2].monitor = iVar4;
                    pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine
                                        ((UnityEngine_MonoBehaviour_o *)__this,
                                         (System_Collections_IEnumerator_o *)pIVar11,
                                         (MethodInfo *)0x0);
                    *ppUVar2 = pUVar12;
                    il2cpp_runtime_glue(ppUVar2,pUVar12);
                  }
                  __this_02.fields._detail._4_4_ = iVar13;
                  __this_02.fields._0_12_ = in_stack_ffffffffffffff48;
                  __this_02.fields._startMs = (int64_t)pSVar14;
                  __this_02.fields._24_8_ = pIVar15;
                  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                            (__this_02,(MethodInfo *)&local_78);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03afaeb2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$BuildCards
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, const MethodInfo* method);
// 0x3afafc0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570148c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuildCards_d__17);
    DAT_0570148c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_BuildCards_d__17);
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


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$FilteredItems
// il2cpp: System_Collections_Generic_List_GisketchGridPickerItem__o* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__FilteredItems (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, const MethodInfo* method);
// 0x3afb0d0

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_GisketchGridPickerItem__o *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__FilteredItems
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *pGVar1;
  int32_t *piVar2;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *pGVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar11;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item;
  long lVar12;
  bool_conflict bVar13;
  int32_t iVar14;
  System_Collections_Generic_List_GisketchGridPickerItem__o *__this_00;
  System_String_array *values;
  System_String_o *pSVar15;
  System_String_o **ppSVar16;
  ulong uVar17;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (DAT_0570148d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_init_method_metadata(&TypeInfo_List_GisketchGridPickerItem);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&" ");
    DAT_0570148d = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GisketchGridPickerItem__o *)
              il2cpp_runtime_glue(TypeInfo_List_GisketchGridPickerItem);
  System_Collections_Generic_List<GisketchGridPickerItem>___ctor(__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  pGVar5 = (__this->fields)._definition;
  if ((pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) ||
     (pGVar6 = (pGVar5->fields).Items,
     pGVar6 == (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0)) {
LAB_03afb3a8:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)pGVar6->max_length < 1) {
    return __this_00;
  }
  ppSVar16 = &pGVar6->m_Items[0].fields.Keywords;
  uVar17 = 0;
  if ((pGVar6->max_length & 0xffffffff) != 0) {
    do {
      pGVar1 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *)(ppSVar16 + -3);
      pSVar7 = pGVar1->Key;
      pSVar8 = ppSVar16[-2];
      pSVar9 = ppSVar16[-1];
      pSVar10 = *ppSVar16;
      values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
      if (values == (System_String_array *)0x0) goto LAB_03afb3a8;
      if ((int)values->max_length == 0) break;
      values->m_Items[0] = pSVar8;
      il2cpp_runtime_glue(values->m_Items,pSVar8);
      if ((uint)values->max_length < 2) break;
      values->m_Items[1] = " ";
      il2cpp_runtime_glue(values->m_Items + 1);
      if ((uint)values->max_length < 3) break;
      values->m_Items[2] = pSVar7;
      il2cpp_runtime_glue(values->m_Items + 2,pSVar7);
      if ((uint)values->max_length < 4) break;
      values->m_Items[3] = " ";
      il2cpp_runtime_glue(values->m_Items + 3);
      if ((uint)values->max_length < 5) break;
      values->m_Items[4] = pSVar10;
      il2cpp_runtime_glue(values->m_Items + 4);
      pSVar15 = System_String__Concat(values,(MethodInfo *)0x0);
      if (pSVar15 == (System_String_o *)0x0) goto LAB_03afb3a8;
      pSVar15 = System_String__Trim(pSVar15,(MethodInfo *)0x0);
      bVar13 = System_String__IsNullOrWhiteSpace((__this->fields)._query,(MethodInfo *)0x0);
      if ((char)bVar13 == '\0') {
        if (pSVar15 == (System_String_o *)0x0) goto LAB_03afb3a8;
        iVar14 = System_String__IndexOf(pSVar15,(__this->fields)._query,5,(MethodInfo *)0x0);
        if (-1 < iVar14) goto LAB_03afb312;
      }
      else {
LAB_03afb312:
        lVar12 = MethodInfo_Void_Add;
        if (__this_00 == (System_Collections_Generic_List_GisketchGridPickerItem__o *)0x0)
        goto LAB_03afb3a8;
        piVar2 = &(__this_00->fields)._version;
        *piVar2 = *piVar2 + 1;
        pGVar11 = (__this_00->fields)._items;
        if (pGVar11 == (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0)
        goto LAB_03afb3a8;
        uVar4 = (__this_00->fields)._size;
        if (uVar4 < (uint)pGVar11->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          local_50 = SUB84(pSVar7,0);
          uStack_4c = (undefined4)((ulong)pSVar7 >> 0x20);
          uStack_48 = SUB84(pSVar8,0);
          uStack_44 = (undefined4)((ulong)pSVar8 >> 0x20);
          local_40 = SUB84(pSVar9,0);
          uStack_3c = (undefined4)((ulong)pSVar9 >> 0x20);
          uStack_38 = SUB84(pSVar10,0);
          uStack_34 = (undefined4)((ulong)pSVar10 >> 0x20);
          pGVar1 = &pGVar11->m_Items[(int)uVar4].fields;
          *(undefined4 *)&pGVar1->Sprite = local_40;
          *(undefined4 *)((long)&pGVar1->Sprite + 4) = uStack_3c;
          *(undefined4 *)&pGVar1->Keywords = uStack_38;
          *(undefined4 *)((long)&pGVar1->Keywords + 4) = uStack_34;
          pGVar3 = pGVar11->m_Items + (int)uVar4;
          *(undefined4 *)&(pGVar3->fields).Key = local_50;
          *(undefined4 *)((long)&(pGVar3->fields).Key + 4) = uStack_4c;
          *(undefined4 *)&(pGVar3->fields).Label = uStack_48;
          *(undefined4 *)((long)&(pGVar3->fields).Label + 4) = uStack_44;
          il2cpp_runtime_glue(pGVar11->m_Items + (int)uVar4,0);
        }
        else {
          item.fields.Keywords = pSVar10;
          item.fields.Key = pGVar1->Key;
          item.fields.Label = pGVar1->Label;
          item.fields.Sprite = pGVar1->Sprite;
          System_Collections_Generic_List<GisketchGridPickerItem>__AddWithResize
                    (__this_00,item,
                     *(MethodInfo_35255D0 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar17 = uVar17 + 1;
      uVar4 = (uint)pGVar6->max_length;
      ppSVar16 = ppSVar16 + 4;
      if ((long)(int)uVar4 <= (long)uVar17) {
        return __this_00;
      }
    } while (uVar17 < uVar4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$UpdateHeight
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__UpdateHeight (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, int32_t count, const MethodInfo* method);
// 0x3afb3b0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__UpdateHeight
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,int32_t count,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar2;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar3;
  undefined8 extraout_RDX;
  int iVar4;
  float fVar5;
  
  if (DAT_0570148e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    DAT_0570148e = '\x01';
  }
  pGVar2 = (__this->fields)._definition;
  if (pGVar2 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    iVar4 = (pGVar2->fields).Columns;
    if (DAT_056fdee8 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fdee8 = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar5 = ceilf((float)count / (float)iVar4);
    iVar4 = 1;
    if (0 < (int)fVar5) {
      iVar4 = (int)fVar5;
    }
    pIVar3 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pGVar2 = (__this->fields)._definition;
    if ((pGVar2 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) &&
       (pIVar3 != (Il2CppObject *)0x0)) {
      iVar1 = (pGVar2->fields).Columns;
      (*pIVar3->klass->vtable[0x24].methodPtr)
                ((float)(iVar1 + -1) * 10.0 + (float)iVar1 * (pGVar2->fields).ItemWidth,pIVar3,
                 pIVar3->klass->vtable[0x24].method);
      pGVar2 = (__this->fields)._definition;
      if (pGVar2 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
        vtable_dispatch = pIVar3->klass->vtable[0x26].methodPtr;
        (*vtable_dispatch)
                  ((float)(iVar4 + -1) * 10.0 + (float)iVar4 * (pGVar2->fields).ItemHeight,pIVar3,
                   pIVar3->klass->vtable[0x26].method,extraout_RDX,vtable_dispatch);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$CreateCard
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__CreateCard (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, int32_t index, const MethodInfo* method);
// 0x3afb510

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__CreateCard
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,int32_t index,MethodInfo *method
               )

{
  int32_t *piVar1;
  float relief;
  UnityEngine_Vector2_o value;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar5;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar6;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar7;
  System_Nullable_float__o stainScaleOverride;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  System_RuntimeTypeHandle_o handle;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this_03;
  UnityEngine_UI_Selectable_o *__this_04;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *pGVar8;
  Il2CppObject *pIVar9;
  System_String_array *values;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_Type_array *pSVar13;
  System_Type_o *pSVar14;
  long lVar15;
  UnityEngine_GameObject_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_Transform_o *pUVar18;
  UnityEngine_RectTransform_o *pUVar19;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar20;
  UnityEngine_UI_Image_o *image;
  UnityEngine_Material_o *pUVar21;
  Il2CppClass *pIVar22;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar23;
  MethodInfo *method_00;
  MethodInfo *method_01;
  void **ppvVar24;
  MethodInfo *pMVar25;
  UnityEngine_Color_o UVar26;
  System_String_o *pSVar27;
  System_String_o *pSVar28;
  int32_t local_ac;
  void **local_a8;
  Il2CppObject *local_a0;
  UnityEngine_RectTransform_o *local_98;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *local_90;
  UnityEngine_UI_Selectable_o *local_88;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *local_80;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  local_ac = index;
  if (DAT_0570148f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Button_AddComponent_Button);
    il2cpp_init_method_metadata(&MethodInfo_GisketchButtonRelief_AddComponent_GisketchButton);
    il2cpp_init_method_metadata(&MethodInfo_GisketchDisabledSelectableOpacity_AddComponent_G);
    il2cpp_init_method_metadata(&MethodInfo_GisketchSurfaceMaterialOwner_AddComponent_Gisket);
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_GetValueOrDefault);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateCard_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass20_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"-item-");
    il2cpp_init_method_metadata(&"] ");
    il2cpp_init_method_metadata(&"gridPickerItem");
    il2cpp_init_method_metadata(&"[");
    il2cpp_init_method_metadata(&"shadow");
    il2cpp_init_method_metadata(&"GridPicker.CreateCard");
    il2cpp_init_method_metadata(&"AoTTG Button Face");
    DAT_0570148f = '\x01';
  }
  local_68 = (InvokerMethod)0x0;
  pcStack_60 = (char *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass20_0);
  System_Object___ctor(pIVar9,(MethodInfo *)0x0);
  if (pIVar9 != (Il2CppObject *)0x0) {
    pIVar9[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(pIVar9 + 1,__this);
    ppvVar24 = &pIVar9[1].monitor;
    *(undefined4 *)&pIVar9[2].monitor = item.fields.Sprite._0_4_;
    *(undefined4 *)((long)&pIVar9[2].monitor + 4) = item.fields.Sprite._4_4_;
    *(undefined4 *)&pIVar9[3].klass = item.fields.Keywords._0_4_;
    *(undefined4 *)((long)&pIVar9[3].klass + 4) = item.fields.Keywords._4_4_;
    *(undefined4 *)&pIVar9[1].monitor = item.fields.Key._0_4_;
    *(undefined4 *)((long)&pIVar9[1].monitor + 4) = item.fields.Key._4_4_;
    *(undefined4 *)&pIVar9[2].klass = item.fields.Label._0_4_;
    *(undefined4 *)((long)&pIVar9[2].klass + 4) = item.fields.Label._4_4_;
    il2cpp_runtime_glue(ppvVar24,0);
    values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
    pGVar5 = (__this->fields)._definition;
    if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      pGVar10 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)
                 (DAT_057110b0 + 0xb8);
    }
    else {
      pGVar10 = &pGVar5->fields;
    }
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = pGVar10->Id;
        il2cpp_runtime_glue(values->m_Items);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = "[";
          il2cpp_runtime_glue(values->m_Items + 1);
          pSVar11 = System_Int32__ToString((int32_t)&local_ac,(MethodInfo *)0x0);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = pSVar11;
            il2cpp_runtime_glue(values->m_Items + 2,pSVar11);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = "] ";
              il2cpp_runtime_glue(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = *ppvVar24;
                il2cpp_runtime_glue(values->m_Items + 4);
                pSVar11 = System_String__Concat(values,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pMVar25 = "GridPicker.CreateCard";
                Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                          (&local_50,(System_String_o *)"GridPicker.CreateCard",pSVar11,(MethodInfo *)0x0);
                pGVar5 = (__this->fields)._definition;
                if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0)
                {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar11 = (pGVar5->fields).Id;
                pSVar12 = Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SafeId
                                    (*ppvVar24,pMVar25);
                pSVar11 = System_String__Concat(pSVar11,"-item-",pSVar12,(MethodInfo *)0x0);
                local_a0 = pIVar9;
                local_80 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *)ppvVar24;
                pSVar13 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                handle = TypeRef_RectTransform;
                if (*(int *)(DAT_05711100 + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar14 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
                if (pSVar13 == (System_Type_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if ((pSVar14 != (System_Type_o *)0x0) &&
                   (lVar15 = il2cpp_runtime_glue(pSVar14,(((pSVar13->obj).klass)->_1).element_class),
                   lVar15 == 0)) {
                  uVar23 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                  il2cpp_glue_02274a00(uVar23,0);
                }
                if ((int)pSVar13->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar13->m_Items[0] = pSVar14;
                il2cpp_runtime_glue(pSVar13->m_Items,pSVar14);
                pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                UnityEngine_GameObject___ctor(pUVar16,pSVar11,pSVar13,(MethodInfo *)0x0);
                ppvVar24 = &local_a0[3].monitor;
                local_a0[3].monitor = pUVar16;
                il2cpp_runtime_glue(ppvVar24);
                if (*ppvVar24 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pUVar17 = UnityEngine_GameObject__get_transform(*ppvVar24,(MethodInfo *)0x0);
                pUVar18 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if (pUVar17 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                UnityEngine_Transform__SetParent(pUVar17,pUVar18,0,(MethodInfo *)0x0);
                lVar15 = MethodInfo_Void_Add;
                __this_00 = (__this->fields)._cards;
                if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pUVar16 = *ppvVar24;
                piVar1 = &(__this_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar6 = (__this_00->fields)._items;
                if (pUVar6 == (UnityEngine_GameObject_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                uVar4 = (__this_00->fields)._size;
                if (uVar4 < (uint)pUVar6->max_length) {
                  (__this_00->fields)._size = uVar4 + 1;
                  pUVar6->m_Items[(int)uVar4] = pUVar16;
                  il2cpp_runtime_glue(pUVar6->m_Items + (int)uVar4);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)pUVar16,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                }
                if (*ppvVar24 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pUVar19 = (UnityEngine_RectTransform_o *)
                          UnityEngine_GameObject__GetComponent<object>
                                    (*ppvVar24,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
                pGVar5 = (__this->fields)._definition;
                if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0)
                {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                if (pUVar19 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                value.fields.x = (pGVar5->fields).ItemWidth;
                value.fields.y = (pGVar5->fields).ItemHeight;
                UnityEngine_RectTransform__set_sizeDelta(pUVar19,value,(MethodInfo *)0x0);
                if (*ppvVar24 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pIVar9 = UnityEngine_GameObject__AddComponent<object>(*ppvVar24,MethodInfo_Image_AddComponent_Image);
                pGVar7 = (__this->fields)._theme;
                if (pGVar7 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                UVar26 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                   (pGVar7,"shadow",
                                    (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                                    (MethodInfo *)0x0);
                if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception(UVar26.fields.r,UVar26.fields.b);
                }
                (*pIVar9->klass->vtable[0x17].methodPtr)(pIVar9,pIVar9->klass->vtable[0x17].method);
                if (*ppvVar24 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                local_88 = (UnityEngine_UI_Selectable_o *)
                           UnityEngine_GameObject__AddComponent<object>(*ppvVar24,MethodInfo_Button_AddComponent_Button);
                if (local_88 == (UnityEngine_UI_Selectable_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                UnityEngine_UI_Selectable__set_transition(local_88,0,(MethodInfo *)0x0);
                if (*ppvVar24 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__AddComponent<object>(*ppvVar24,MethodInfo_GisketchDisabledSelectableOpacity_AddComponent_G);
                  local_a8 = ppvVar24;
                  pSVar13 = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
                  pSVar14 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                  if (pSVar13 == (System_Type_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  if ((pSVar14 != (System_Type_o *)0x0) &&
                     (lVar15 = il2cpp_runtime_glue(pSVar14,(((pSVar13->obj).klass)->_1).element_class
                                                 ), lVar15 == 0)) {
                    uVar23 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                    il2cpp_glue_02274a00(uVar23,0);
                  }
                  if ((int)pSVar13->max_length == 0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar13->m_Items[0] = pSVar14;
                  il2cpp_runtime_glue(pSVar13->m_Items,pSVar14);
                  pUVar16 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
                  ppvVar24 = local_a8;
                  UnityEngine_GameObject___ctor(pUVar16,"AoTTG Button Face",pSVar13,(MethodInfo *)0x0);
                  if (pUVar16 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                  if (*ppvVar24 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pUVar18 = UnityEngine_GameObject__get_transform(*ppvVar24,(MethodInfo *)0x0);
                  if (pUVar17 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  UnityEngine_Transform__SetParent(pUVar17,pUVar18,0,(MethodInfo *)0x0);
                  pMVar25 = MethodInfo_RectTransform_GetComponent_RectTransform;
                  pUVar19 = (UnityEngine_RectTransform_o *)
                            UnityEngine_GameObject__GetComponent<object>
                                      (pUVar16,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
                  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Stretch(pUVar19,pMVar25);
                  pGVar7 = (__this->fields)._theme;
                  if (pGVar7 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pGVar20 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                                      (pGVar7,"gridPickerItem",(MethodInfo *)0x0);
                  image = (UnityEngine_UI_Image_o *)
                          UnityEngine_GameObject__AddComponent<object>(pUVar16,MethodInfo_Image_AddComponent_Image);
                  if (pGVar20 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                    pGVar7 = (__this->fields)._theme;
                    if (pGVar7 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    UVar26.fields.b = 1.0;
                    UVar26.fields.a = 1.0;
                    UVar26.fields.r = 1.0;
                    UVar26.fields.g = 1.0;
                    UVar26 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                       (pGVar7,(pGVar20->fields).background,UVar26,(MethodInfo *)0x0
                                       );
                    if (image == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception(UVar26.fields.r,UVar26.fields.b);
                    }
                    local_98 = pUVar19;
                    local_90 = __this;
                    (*(image->klass->vtable)._23_set_color.methodPtr)
                              (image,(image->klass->vtable)._23_set_color.method);
                    relief = (float)(pGVar20->fields).wornStainScale.fields.hasValue;
                    bVar2 = *(byte *)((long)&(pGVar20->fields).wornStainScale.fields.value + 1);
                    uVar3 = *(ushort *)((long)&(pGVar20->fields).textured.fields.hasValue + 2);
                    stainScaleOverride.fields =
                         *(System_Nullable_float__Fields *)&(pGVar20->fields).textured.fields.value;
                    if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pUVar21 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
                                        (relief,(uint)bVar2,
                                         (uint)(0xff < uVar3 || (char)uVar3 == '\0'),
                                         stainScaleOverride,0,0,(MethodInfo *)0x0);
                    (*(image->klass->vtable)._33_set_material.methodPtr)
                              (image,pUVar21,(image->klass->vtable)._33_set_material.method);
                    pIVar9 = UnityEngine_GameObject__AddComponent<object>(pUVar16,MethodInfo_GisketchSurfaceMaterialOwner_AddComponent_Gisket);
                    __this_04 = local_88;
                    __this_03 = local_90;
                    pIVar22 = (Il2CppClass *)
                              (*(image->klass->vtable)._32_get_material.methodPtr)
                                        (image,(image->klass->vtable)._32_get_material.method);
                    if (pIVar9 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pIVar9[2].klass = pIVar22;
                    il2cpp_runtime_glue(pIVar9 + 2,pIVar22);
                    UnityEngine_UI_Selectable__set_targetGraphic
                              (__this_04,(UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
                    if (*local_a8 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    __this_05 = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)
                                UnityEngine_GameObject__AddComponent<object>(*local_a8,MethodInfo_GisketchButtonRelief_AddComponent_GisketchButton)
                    ;
                    if (__this_05 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
                              (__this_05,image,local_98,
                               (float)(pGVar20->fields).wornStainScale.fields.hasValue,
                               (UnityEngine_UI_RectMask2D_o *)0x0,
                               (System_Nullable_float__o)(pGVar20->fields).relief.fields,
                               (MethodInfo *)0x0);
                    pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                    pGVar8 = local_80;
                    Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildThumbnail
                              (__this_03,pUVar17,
                               (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)*local_80,method_00)
                    ;
                    pUVar17 = UnityEngine_GameObject__get_transform(pUVar16,(MethodInfo *)0x0);
                    pSVar11 = pGVar8->Key;
                    pSVar12 = pGVar8->Label;
                    pSVar27 = pGVar8->Sprite;
                    pSVar28 = pGVar8->Keywords;
                    Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildLabel
                              (__this_03,pUVar17,
                               (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)*pGVar8,method_01);
                    __this_01 = (UnityEngine_Events_UnityEvent_o *)
                                (__this_04->fields).m_CanvasGroupCache;
                    call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
                    UnityEngine_Events_UnityAction___ctor();
                    if (__this_01 == (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
                    __this_02.fields._detail = pSVar12;
                    __this_02.fields._area = pSVar11;
                    __this_02.fields._startMs = (int64_t)pSVar27;
                    __this_02.fields._24_8_ = pSVar28;
                    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                              (__this_02,(MethodInfo *)&local_78);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$BuildThumbnail
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildThumbnail (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x3afc430

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildThumbnail
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,
               UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,
               MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  System_RuntimeTypeHandle_o handle;
  System_String_array *values;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar2;
  System_String_o *detail;
  System_Type_array *components;
  System_Type_o *pSVar3;
  long lVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_UI_Image_o *__this_04;
  UnityEngine_Sprite_o *value_00;
  undefined8 uVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *in_R8;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool_conflict bVar13;
  undefined1 local_50 [32];
  
  if (DAT_05701490 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Image_AddComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"AoTTG Grid Thumbnail");
    il2cpp_init_method_metadata(&" sprite=");
    il2cpp_init_method_metadata(&"GridPicker.BuildThumbnail");
    DAT_05701490 = '\x01';
    method = extraout_RDX;
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5,method);
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    pGVar2 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)
              (DAT_057110b0 + 0xb8);
  }
  else {
    pGVar2 = &pGVar1->fields;
  }
  if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = pGVar2->Id;
    il2cpp_runtime_glue(values->m_Items);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = " ";
      il2cpp_runtime_glue(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = item.fields.Key;
        il2cpp_runtime_glue(values->m_Items + 2);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = " sprite=";
          il2cpp_runtime_glue(values->m_Items + 3);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = item.fields.Sprite;
            il2cpp_runtime_glue(values->m_Items + 4);
            detail = System_String__Concat(values,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
              il2cpp_init_class();
            }
            Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                      ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_50,
                       "GridPicker.BuildThumbnail",detail,(MethodInfo *)0x0);
            components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
            handle = TypeRef_RectTransform;
            uVar6 = local_50._0_4_;
            uVar7 = local_50._4_4_;
            uVar8 = local_50._8_4_;
            uVar9 = local_50._12_4_;
            uVar10 = local_50._16_4_;
            uVar11 = local_50._20_4_;
            uVar12 = local_50._24_4_;
            bVar13 = local_50._28_4_;
            if (*(int *)(DAT_05711100 + 0xe4) == 0) {
              il2cpp_init_class();
              uVar6 = local_50._0_4_;
              uVar7 = local_50._4_4_;
              uVar8 = local_50._8_4_;
              uVar9 = local_50._12_4_;
              uVar10 = local_50._16_4_;
              uVar11 = local_50._20_4_;
              uVar12 = local_50._24_4_;
              bVar13 = local_50._28_4_;
            }
            pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
            if (components == (System_Type_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((pSVar3 != (System_Type_o *)0x0) &&
               (lVar4 = il2cpp_runtime_glue(pSVar3,(((components->obj).klass)->_1).element_class),
               lVar4 == 0)) {
              uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar5,0);
            }
            if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            components->m_Items[0] = pSVar3;
            il2cpp_runtime_glue(components->m_Items,pSVar3);
            __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
            UnityEngine_GameObject___ctor(__this_01,"AoTTG Grid Thumbnail",components,(MethodInfo *)0x0);
            if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
            if (__this_02 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UnityEngine_Transform__SetParent(__this_02,parent,0,(MethodInfo *)0x0);
            __this_03 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
            if (__this_03 == (UnityEngine_RectTransform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            UnityEngine_RectTransform__set_anchorMin
                      (__this_03,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMax
                      (__this_03,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_pivot
                      (__this_03,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
            pGVar1 = (__this->fields)._definition;
            if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            value.fields.x = (pGVar1->fields).ThumbnailWidth;
            value.fields.y = (pGVar1->fields).ThumbnailHeight;
            UnityEngine_RectTransform__set_sizeDelta(__this_03,value,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchoredPosition
                      (__this_03,(UnityEngine_Vector2_o)0xc140000000000000,(MethodInfo *)0x0);
            __this_04 = (UnityEngine_UI_Image_o *)
                        UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_Image_AddComponent_Image);
            if (__this_04 != (UnityEngine_UI_Image_o *)0x0) {
              UnityEngine_UI_Image__set_preserveAspect(__this_04,1,(MethodInfo *)0x0);
              (*(__this_04->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_04,0,(__this_04->klass->vtable)._25_set_raycastTarget.method);
              pGVar1 = (__this->fields)._definition;
              if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if ((char)(pGVar1->fields).LazyLoadThumbnails == '\0') {
                if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                value_00 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load
                                     (item.fields.Sprite,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_sprite(__this_04,value_00,(MethodInfo *)0x0);
                (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                          (0x3f800000,0x3f800000,__this_04,
                           (__this_04->klass->vtable)._23_set_color.method);
              }
              else {
                (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                          (0x3f800000,0x3f800000,__this_04,
                           (__this_04->klass->vtable)._23_set_color.method);
                Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__QueueThumbnail
                          (__this,__this_04,item.fields.Sprite,(__this->fields)._thumbnailGeneration
                           ,in_R8);
              }
              __this_00.fields._area._4_4_ = uVar7;
              __this_00.fields._area._0_4_ = uVar6;
              __this_00.fields._detail._0_4_ = uVar8;
              __this_00.fields._detail._4_4_ = uVar9;
              __this_00.fields._startMs._0_4_ = uVar10;
              __this_00.fields._startMs._4_4_ = uVar11;
              __this_00.fields._enabled = uVar12;
              __this_00.fields._hotLoop = bVar13;
              Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                        (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
              return;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$QueueThumbnail
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__QueueThumbnail (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, UnityEngine_UI_Image_o* image, System_String_o* resourcePath, int32_t generation, const MethodInfo* method);
// 0x3afcd70

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__QueueThumbnail
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,
               UnityEngine_UI_Image_o *image,System_String_o *resourcePath,int32_t generation,
               MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o *pGVar2;
  uint uVar3;
  System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_array *pGVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o item;
  long lVar5;
  bool_conflict bVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  if (DAT_05701491 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701491 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar6 == '\0') &&
     (bVar6 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0), (char)bVar6 == '\0')) {
    __this_00 = (__this->fields)._thumbnailLoads;
    uStack_58 = (System_String_o *)0x0;
    uStack_50 = 0;
    local_60 = image;
    il2cpp_runtime_glue(&local_60,image);
    uStack_58 = resourcePath;
    il2cpp_runtime_glue(&uStack_58,resourcePath);
    lVar5 = MethodInfo_Void_Add;
    uStack_50 = CONCAT44(uStack_50._4_4_,generation);
    if (__this_00 !=
        (System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *)0x0) {
      local_38 = uStack_50;
      local_48 = (undefined4)local_60;
      uStack_44 = local_60._4_4_;
      uStack_40 = (undefined4)uStack_58;
      uStack_3c = uStack_58._4_4_;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar4 = (__this_00->fields)._items;
      if (pGVar4 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_array *)0x0) {
        uVar3 = (__this_00->fields)._size;
        if (uVar3 < (uint)pGVar4->max_length) {
          (__this_00->fields)._size = uVar3 + 1;
          *(undefined8 *)&pGVar4->m_Items[(int)uVar3].fields.Generation = uStack_50;
          pGVar2 = pGVar4->m_Items + (int)uVar3;
          *(undefined4 *)&(pGVar2->fields).Image = (undefined4)local_60;
          *(undefined4 *)((long)&(pGVar2->fields).Image + 4) = local_60._4_4_;
          *(undefined4 *)&(pGVar2->fields).ResourcePath = (undefined4)uStack_58;
          *(undefined4 *)((long)&(pGVar2->fields).ResourcePath + 4) = uStack_58._4_4_;
          il2cpp_runtime_glue(pGVar4->m_Items + (int)uVar3,0);
          return;
        }
        item.fields.ResourcePath = uStack_58;
        item.fields.Image = local_60;
        item.fields._16_8_ = uStack_50;
        System_Collections_Generic_List<GisketchGridPickerRuntime_ThumbnailLoad>__AddWithResize
                  (__this_00,item,
                   *(MethodInfo_3648D90 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$LoadThumbnails
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, int32_t generation, const MethodInfo* method);
// 0x3afb030

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,int32_t generation,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05701492 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadThumbnails_d__23);
    DAT_05701492 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadThumbnails_d__23);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    *(int32_t *)&__this_00[2].monitor = generation;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$ShowLoaded
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__ShowLoaded (UnityEngine_UI_Image_o* image, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
// 0x3afcf20

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__ShowLoaded
               (UnityEngine_UI_Image_o *image,UnityEngine_Sprite_o *sprite,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05701493 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05701493 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)sprite,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar1 == '\0') {
      if (image != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_sprite(image,sprite,(MethodInfo *)0x0);
        (*(image->klass->vtable)._23_set_color.methodPtr)
                  (0x3f800000,0x3f800000,image,(image->klass->vtable)._23_set_color.method);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$FadeIn
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__FadeIn (UnityEngine_UI_Image_o* image, const MethodInfo* method);
// 0x3afcfe0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__FadeIn
               (UnityEngine_UI_Image_o *image,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  void *pvVar2;
  bool_conflict bVar3;
  Il2CppObject *__this;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *tween;
  Il2CppObject *pIVar4;
  
  if (DAT_05701494 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__FadeIn_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass25_0);
    DAT_05701494 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass25_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    pIVar4 = __this + 1;
    __this[1].klass = (Il2CppClass *)image;
    il2cpp_runtime_glue(pIVar4);
    pIVar1 = __this[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      return;
    }
    pIVar1 = pIVar4->klass;
    if (pIVar1 != (Il2CppClass *)0x0) {
      pvVar2 = (pIVar1->_1).image;
      (**(code **)((long)pvVar2 + 0x298))(pIVar1,*(undefined8 *)((long)pvVar2 + 0x2a0));
      pIVar1 = pIVar4->klass;
      if (pIVar1 != (Il2CppClass *)0x0) {
        pvVar2 = (pIVar1->_1).image;
        (**(code **)((long)pvVar2 + 0x2a8))(pIVar1,*(undefined8 *)((long)pvVar2 + 0x2b0));
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback<float>___ctor();
        t = DG_Tweening_DOVirtual__Float(0.0,1.0,0.12,onVirtualUpdate,(MethodInfo *)0x0);
        tween = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                          ((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
        if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(tween,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$BuildLabel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildLabel (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x3afca60

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildLabel
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,
               UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Il2CppMethodPointer vtable_dispatch;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  TMPro_TMP_Text_o *__this_04;
  TMPro_TMP_FontAsset_o *value;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  UnityEngine_Color_o UVar4;
  
  if (DAT_05701495 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTypography);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG Grid Label");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"textMuted");
    DAT_05701495 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,1,method);
  handle = TypeRef_RectTransform;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items,pSVar1);
    __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this_01,"AoTTG Grid Label",components,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      __this_02 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_02,parent,0,(MethodInfo *)0x0);
        __this_03 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_03,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_03,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_03,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMin
                    (__this_03,(UnityEngine_Vector2_o)0x4100000040c00000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMax
                    (__this_03,(UnityEngine_Vector2_o)0x42080000c0c00000,(MethodInfo *)0x0);
          __this_04 = (TMPro_TMP_Text_o *)
                      UnityEngine_GameObject__AddComponent<object>(__this_01,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
          if (__this_04 != (TMPro_TMP_Text_o *)0x0) {
            (*(__this_04->klass->vtable)._66_set_text.methodPtr)
                      (__this_04,item.fields.Label,(__this_04->klass->vtable)._66_set_text.method);
            TMPro_TMP_Text__set_fontSize(__this_04,15.0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
              il2cpp_init_class();
            }
            value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                              ("text",500,item.fields.Label,(MethodInfo *)0x0);
            TMPro_TMP_Text__set_font(__this_04,value,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._theme;
            if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              UVar4.fields.b = 1.0;
              UVar4.fields.a = 1.0;
              UVar4.fields.r = 1.0;
              UVar4.fields.g = 1.0;
              UVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                (__this_00,"textMuted",UVar4,(MethodInfo *)0x0);
              (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                        (UVar4.fields._0_8_,UVar4.fields._8_8_,__this_04,
                         (__this_04->klass->vtable)._23_set_color.method);
              TMPro_TMP_Text__set_alignment(__this_04,0x202,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_enableWordWrapping(__this_04,0,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_overflowMode(__this_04,1,(MethodInfo *)0x0);
              vtable_dispatch = (__this_04->klass->vtable)._25_set_raycastTarget.methodPtr;
              (*vtable_dispatch)
                        (__this_04,0,(__this_04->klass->vtable)._25_set_raycastTarget.method,
                         vtable_dispatch);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3afc330

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_0570136e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_0570136e = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)
                    *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$SafeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SafeId (System_String_o* value, const MethodInfo* method);
// 0x3afc2a0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SafeId(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (DAT_05701496 == '\0') {
    il2cpp_init_method_metadata(&"item");
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"-");
    DAT_05701496 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "item";
  }
  if (value != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace(value," ","-",(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$ItemCount
// il2cpp: int32_t Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__ItemCount (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, const MethodInfo* method);
// 0x3afa9e0

int32_t Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__ItemCount
                  (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar2;
  int32_t iVar3;
  
  pGVar1 = (__this->fields)._definition;
  iVar3 = 0;
  if ((pGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) &&
     (pGVar2 = (pGVar1->fields).Items, iVar3 = 0,
     pGVar2 != (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0)) {
    iVar3 = (int32_t)pGVar2->max_length;
  }
  return iVar3;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, const MethodInfo* method);
// 0x3afd190

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *__this_01;
  
  if (DAT_05701497 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_init_method_metadata(&TypeInfo_List_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_List_ThumbnailLoad);
    DAT_05701497 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_glue(TypeInfo_List_GameObject);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._cards = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._cards,__this_00);
  __this_01 = (System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *)
              il2cpp_runtime_glue(TypeInfo_List_ThumbnailLoad);
  System_Collections_Generic_List<GisketchGridPickerRuntime_ThumbnailLoad>___ctor
            (__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  (__this->fields)._thumbnailLoads = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._thumbnailLoads,__this_01);
  (__this->fields)._query = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  il2cpp_runtime_glue(&(__this->fields)._query);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



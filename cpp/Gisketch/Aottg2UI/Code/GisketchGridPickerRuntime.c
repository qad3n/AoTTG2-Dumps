// Type: Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchGridPickerRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.ThumbnailLoad$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o __this, UnityEngine_UI_Image_o* image, System_String_o* resourcePath, int32_t generation, const MethodInfo* method);
// 0x3b68020

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o __this,
               UnityEngine_UI_Image_o *image,System_String_o *resourcePath,int32_t generation,
               MethodInfo *method)

{
  undefined4 in_register_00000014;
  
  image->klass = (UnityEngine_UI_Image_c *)resourcePath;
  il2cpp_runtime_helper_022b4080();
  image->monitor = (void *)CONCAT44(in_register_00000014,generation);
  il2cpp_runtime_helper_022b4080(&image->monitor,(void *)CONCAT44(in_register_00000014,generation));
  *(int *)&(image->fields).m_CachedPtr = (int)method;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x3b673e0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass20_0$$<CreateCard>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0___CreateCard_b__0 (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x3b683d0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0___CreateCard_b__0
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar2;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *pSVar3;
  UnityEngine_Object_o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *pGVar4;
  code *vtableDispatch;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o __this_03;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this_04;
  bool_conflict bVar5;
  System_String_o *gameObject;
  long *plVar6;
  undefined8 extraout_RDX;
  MethodInfo *pMVar7;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0_o *pGVar8;
  long lVar9;
  undefined8 unaff_R15;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Da;
  undefined1 auVar12 [12];
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *pGVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  System_String_o *in_stack_ffffffffffffff30;
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
  
  pGVar13 = (__this->fields).__4__this;
  pGVar8 = __this;
  if ((pGVar13 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) &&
     (pGVar2 = (pGVar13->fields)._definition,
     pGVar2 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0)) {
    pSVar3 = (pGVar2->fields).Select;
    if (pSVar3 == (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
      return;
    }
    __this_00 = (UnityEngine_Object_o *)(__this->fields).card;
    pGVar8 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass20_0_o *)0x0;
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      gameObject = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      SStack_78.fields._stringLength = 0;
      SStack_78.fields._firstChar = 0;
      SStack_78.fields._6_2_ = 0;
      uStack_60 = 0;
      SStack_78.klass = (System_String_c *)0x0;
      SStack_78.monitor = (void *)0x0;
      __this_04.fields.ElementId._4_4_ = in_stack_ffffffffffffff4c;
      __this_04.fields.ElementId._0_4_ = in_stack_ffffffffffffff48;
      __this_04.fields.GameObject._0_4_ = in_stack_ffffffffffffff50;
      __this_04.fields.GameObject._4_4_ = in_stack_ffffffffffffff54;
      __this_04.fields.Node._0_4_ = in_stack_ffffffffffffff58;
      __this_04.fields.Node._4_4_ = in_stack_ffffffffffffff5c;
      __this_04.fields.InputSource = in_stack_ffffffffffffff60;
      __this_04.fields._28_4_ = in_stack_ffffffffffffff64;
      Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                (__this_04,&SStack_78,(UnityEngine_GameObject_o *)gameObject,
                 (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(__this->fields).card,(MethodInfo *)0x0);
      pSStack_38 = (__this->fields).item.fields.Key;
      pSStack_30 = (__this->fields).item.fields.Label;
      pSStack_28 = (__this->fields).item.fields.Sprite;
      pSStack_20 = (__this->fields).item.fields.Keywords;
      pSStack_58 = SStack_78.klass;
      pvStack_50 = SStack_78.monitor;
      SStack_48 = SStack_78.fields;
      uStack_40 = uStack_60;
      (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
      return;
    }
  }
  uVar11 = il2cpp_runtime_helper_022b2c90();
  uVar14 = extraout_XMM0_Dc;
  uVar15 = extraout_XMM0_Dd;
  if (cRam00000000057a9dbb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    cRam00000000057a9dbb = '\x01';
  }
  pGVar13 = (pGVar8->fields).__4__this;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pGVar4 = (pGVar8->fields).__4__this;
  if (pGVar4 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) {
    uVar10 = (**(code **)&pGVar4->klass[1]._2.field_count)();
    pGVar4 = (pGVar8->fields).__4__this;
    if (pGVar4 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) {
      vtableDispatch = *(code **)&pGVar4->klass[1]._2.naturalAligment;
      (*vtableDispatch)
                (uVar10,in_XMM1_Da,pGVar4,pGVar4->klass[1].vtable._0_Equals.methodPtr,extraout_RDX,
                 vtableDispatch);
      return;
    }
  }
  pMVar7 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b2c90();
  uVar1 = *(uint *)&pMVar7->invoker_method;
  if ((uVar1 & 0xfffffffe) == 0xfffffffc) {
    if ((uVar1 != 1) && (uVar1 != 0xfffffffc)) goto label_03b685bc;
  }
  else if (uVar1 != 1) {
    return;
  }
  if (g_data_057a9dbd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057a9dbd = '\x01';
  }
  *(undefined4 *)&pMVar7->invoker_method = 0xfffffffd;
  __this_03.fields._8_8_ = pGVar8;
  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pGVar13;
  __this_03.fields._current.fields.Key = (System_String_o *)unaff_R15;
  __this_03.fields._current.fields.Label._0_4_ = (int)uVar11;
  __this_03.fields._current.fields.Label._4_4_ = (int)((ulong)uVar11 >> 0x20);
  __this_03.fields._current.fields.Sprite._0_4_ = uVar14;
  __this_03.fields._current.fields.Sprite._4_4_ = uVar15;
  __this_03.fields._current.fields.Keywords = in_stack_ffffffffffffff30;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem___Dispose
            (__this_03,(MethodInfo_3213FB0 *)&pMVar7->slot);
label_03b685bc:
  lVar9 = 0;
  while( true ) {
    *(undefined4 *)&pMVar7->invoker_method = 0xffffffff;
    __this_01.fields._detail = (System_String_o *)pGVar8;
    __this_01.fields._area = (System_String_o *)pGVar13;
    __this_01.fields._startMs = unaff_R15;
    __this_01.fields._enabled = (int)uVar11;
    __this_01.fields._hotLoop = (bool_conflict)((ulong)uVar11 >> 0x20);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&pMVar7->return_type);
    if (lVar9 == 0) {
      return;
    }
    auVar12 = il2cpp_runtime_helper_022fefe0(lVar9);
    if (auVar12._8_4_ != 1) break;
    plVar6 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar9 = *plVar6;
    __cxa_end_catch();
    pMVar7 = (MethodInfo *)&pMVar7->return_type;
  }
  *(undefined4 *)&pMVar7->field7_0x38 = 0xffffffff;
  __this_02.fields._detail = (System_String_o *)pGVar8;
  __this_02.fields._area = (System_String_o *)pGVar13;
  __this_02.fields._startMs = unaff_R15;
  __this_02.fields._enabled = (int)uVar11;
  __this_02.fields._hotLoop = (bool_conflict)((ulong)uVar11 >> 0x20);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)&pMVar7->slot);
  _Unwind_Resume(auVar12._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass25_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x3b682d0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<>c__DisplayClass25_0$$<FadeIn>b__0
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0___FadeIn_b__0 (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0_o* __this, float value, const MethodInfo* method);
// 0x3b684b0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0___FadeIn_b__0
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___c__DisplayClass25_0_o *__this,float value,
               MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_Image_o *pUVar2;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o __this_02;
  bool_conflict bVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  MethodInfo *pMVar5;
  long lVar6;
  undefined8 unaff_R15;
  undefined4 uVar7;
  bool_conflict in_XMM0_Db;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Da;
  undefined1 auVar8 [12];
  UnityEngine_UI_Image_o *x;
  System_String_o *in_stack_ffffffffffffffe8;
  
  if (cRam00000000057a9dbb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    cRam00000000057a9dbb = '\x01';
  }
  x = (__this->fields).image;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  pUVar2 = (__this->fields).image;
  if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
    uVar7 = (*(pUVar2->klass->vtable)._22_get_color.methodPtr)();
    pUVar2 = (__this->fields).image;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      vtableDispatch = (pUVar2->klass->vtable)._23_set_color.methodPtr;
      (*vtableDispatch)
                (uVar7,in_XMM1_Da,pUVar2,(pUVar2->klass->vtable)._23_set_color.method,extraout_RDX,
                 vtableDispatch);
      return;
    }
  }
  pMVar5 = (MethodInfo *)0x0;
  il2cpp_runtime_helper_022b2c90();
  uVar1 = *(uint *)&pMVar5->invoker_method;
  if ((uVar1 & 0xfffffffe) == 0xfffffffc) {
    if ((uVar1 != 1) && (uVar1 != 0xfffffffc)) goto label_03b685bc;
  }
  else if (uVar1 != 1) {
    return;
  }
  if (g_data_057a9dbd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057a9dbd = '\x01';
  }
  *(undefined4 *)&pMVar5->invoker_method = 0xfffffffd;
  __this_02.fields._8_8_ = __this;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)x;
  __this_02.fields._current.fields.Key = (System_String_o *)unaff_R15;
  __this_02.fields._current.fields.Label._0_4_ = value;
  __this_02.fields._current.fields.Label._4_4_ = in_XMM0_Db;
  __this_02.fields._current.fields.Sprite._0_4_ = in_XMM0_Dc;
  __this_02.fields._current.fields.Sprite._4_4_ = in_XMM0_Dd;
  __this_02.fields._current.fields.Keywords = in_stack_ffffffffffffffe8;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem___Dispose
            (__this_02,(MethodInfo_3213FB0 *)&pMVar5->slot);
label_03b685bc:
  lVar6 = 0;
  while( true ) {
    *(undefined4 *)&pMVar5->invoker_method = 0xffffffff;
    __this_00.fields._detail = (System_String_o *)__this;
    __this_00.fields._area = (System_String_o *)x;
    __this_00.fields._startMs = unaff_R15;
    __this_00.fields._enabled = (bool_conflict)value;
    __this_00.fields._hotLoop = in_XMM0_Db;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_00,(MethodInfo *)&pMVar5->return_type);
    if (lVar6 == 0) {
      return;
    }
    auVar8 = il2cpp_runtime_helper_022fefe0(lVar6);
    if (auVar8._8_4_ != 1) break;
    plVar4 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar6 = *plVar4;
    __cxa_end_catch();
    pMVar5 = (MethodInfo *)&pMVar5->return_type;
  }
  *(undefined4 *)&pMVar5->field7_0x38 = 0xffffffff;
  __this_01.fields._detail = (System_String_o *)__this;
  __this_01.fields._area = (System_String_o *)x;
  __this_01.fields._startMs = unaff_R15;
  __this_01.fields._enabled = (bool_conflict)value;
  __this_01.fields._hotLoop = in_XMM0_Db;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&pMVar5->slot);
  _Unwind_Resume(auVar8._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b66200

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_IDisposable_Dispose (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3b68560

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
               MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o __this_02;
  long *plVar2;
  undefined8 unaff_RBX;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *method_00;
  undefined8 unaff_R14;
  long lVar3;
  undefined8 unaff_R15;
  undefined1 auVar4 [12];
  undefined8 unaff_retaddr;
  undefined1 in_stack_00000008 [16];
  
  uVar1 = (__this->fields).__1__state;
  if ((uVar1 & 0xfffffffe) == 0xfffffffc) {
    if ((uVar1 != 1) && (uVar1 != 0xfffffffc)) goto label_03b685bc;
  }
  else if (uVar1 != 1) {
    return;
  }
  if (g_data_057a9dbd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057a9dbd = '\x01';
  }
  (__this->fields).__1__state = -3;
  __this_02.fields._index = (int)unaff_R14;
  __this_02.fields._version = (int)((ulong)unaff_R14 >> 0x20);
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)unaff_RBX;
  __this_02.fields._current.fields.Key = (System_String_o *)unaff_R15;
  __this_02.fields._current.fields.Label = (System_String_o *)unaff_retaddr;
  __this_02.fields._current.fields._16_16_ = in_stack_00000008;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem___Dispose
            (__this_02,(MethodInfo_3213FB0 *)&(__this->fields).__7__wrap3);
label_03b685bc:
  lVar3 = 0;
  while( true ) {
    (__this->fields).__1__state = -1;
    method_00 = &(__this->fields).__7__wrap1;
    __this_00.fields._detail = (System_String_o *)unaff_R14;
    __this_00.fields._area = (System_String_o *)unaff_RBX;
    __this_00.fields._startMs = unaff_R15;
    __this_00.fields._24_8_ = unaff_retaddr;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)method_00);
    if (lVar3 == 0) {
      return;
    }
    auVar4 = il2cpp_runtime_helper_022fefe0(lVar3);
    if (auVar4._8_4_ != 1) break;
    plVar2 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar3 = *plVar2;
    __cxa_end_catch();
    __this = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *)method_00;
  }
  *(undefined4 *)&(__this->fields).__7__wrap1.fields._startMs = 0xffffffff;
  __this_01.fields._detail = (System_String_o *)unaff_R14;
  __this_01.fields._area = (System_String_o *)unaff_RBX;
  __this_01.fields._startMs = unaff_R15;
  __this_01.fields._24_8_ = unaff_retaddr;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_01,(MethodInfo *)&(__this->fields).__7__wrap3);
  _Unwind_Resume(auVar4._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__MoveNext (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3b68640

bool_conflict
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__MoveNext
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *pGVar2;
  int iVar3;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar5;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o __this_02;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o __this_03;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o __this_04;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o __this_05;
  undefined1 uVar6;
  undefined1 uVar7;
  bool_conflict bVar8;
  bool_conflict extraout_EAX;
  System_String_o *pSVar9;
  System_Collections_Generic_List_GisketchGridPickerItem__o *__this_06;
  System_String_array *values;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar10;
  MethodInfo *pMVar11;
  System_String_o *pSVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *pGVar16;
  MethodInfo *pMVar17;
  int32_t *piVar18;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o *method_02;
  undefined1 auVar19 [12];
  System_String_o *in_stack_ffffffffffffff18;
  System_String_o *in_stack_ffffffffffffff20;
  System_String_o *in_stack_ffffffffffffff28;
  System_String_o *in_stack_ffffffffffffff30;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *in_stack_ffffffffffffff38;
  undefined4 in_stack_ffffffffffffff40;
  int iVar20;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  bool_conflict bStack_a0;
  bool_conflict bStack_9c;
  System_Collections_Generic_List_Enumerator_T__o SStack_88;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  if (g_data_057a9dbc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchGridPickerItem_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Code_GisketchGridP);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&" complete built=");
    il2cpp_runtime_helper_023445d0(&" query='");
    il2cpp_runtime_helper_023445d0(&"'");
    il2cpp_runtime_helper_023445d0(&" total=");
    il2cpp_runtime_helper_023445d0(&"GridPicker.BuildCards");
    il2cpp_runtime_helper_023445d0(&" filtered=");
    il2cpp_runtime_helper_023445d0(&" yield built=");
    g_data_057a9dbc = '\x01';
  }
  iVar20 = 0;
  iVar3 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  pGVar16 = __this;
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
      pMVar11 = MethodInfo_Boolean_MoveNext;
      bVar8 = System_Collections_Generic_List_Enumerator_GisketchGridPickerItem___MoveNext
                        (__this_02,(MethodInfo_3213FC0 *)&(__this->fields).__7__wrap3);
      uVar7 = true;
      uVar6 = true;
      if ((char)bVar8 != '\0') goto label_03b68c49;
joined_r0x03b6877b:
      if (g_data_057a9dbd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057a9dbd = '\x01';
        uVar6 = uVar7;
      }
      method_02 = &(__this->fields).__7__wrap3;
      ((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_Fields *)((long)pGVar16 + 0x10))->
      __1__state = -3;
      __this_04.fields._8_8_ = in_stack_ffffffffffffff20;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
      __this_04.fields._current.fields.Key = in_stack_ffffffffffffff28;
      __this_04.fields._current.fields.Label = in_stack_ffffffffffffff30;
      __this_04.fields._current.fields.Sprite = (System_String_o *)in_stack_ffffffffffffff38;
      __this_04.fields._current.fields.Keywords._0_4_ = in_stack_ffffffffffffff40;
      __this_04.fields._current.fields.Keywords._4_4_ = iVar20;
      method = MethodInfo_Void_Dispose;
      System_Collections_Generic_List_Enumerator_GisketchGridPickerItem___Dispose
                (__this_04,(MethodInfo_3213FB0 *)method_02);
      (__this->fields).__7__wrap3.fields._current.fields.Sprite = (System_String_o *)0x0;
      (__this->fields).__7__wrap3.fields._current.fields.Keywords = (System_String_o *)0x0;
      (__this->fields).__7__wrap3.fields._current.fields.Key = (System_String_o *)0x0;
      (__this->fields).__7__wrap3.fields._current.fields.Label = (System_String_o *)0x0;
      (method_02->fields)._list = (System_Collections_Generic_List_T__o *)0x0;
      (__this->fields).__7__wrap3.fields._index = 0;
      (__this->fields).__7__wrap3.fields._version = 0;
      if (!(bool)uVar6) {
        (__this_00->fields)._build = (UnityEngine_Coroutine_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._build);
        pGVar4 = (__this_00->fields)._definition;
        if (pGVar4 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
          pGVar10 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)
                     (g_data_057b9c00 + 0xb8);
        }
        else {
          pGVar10 = &pGVar4->fields;
        }
        pSVar9 = pGVar10->Id;
        pSVar12 = System_Int32__ToString((int)__this + 0x48,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat_3af7150(pSVar9," complete built=",pSVar12,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("GridPicker.BuildCards",pSVar9,(MethodInfo *)0x0);
        ((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_Fields *)((long)pGVar16 + 0x10))
        ->__1__state = -1;
        __this_01.fields._detail = in_stack_ffffffffffffff20;
        __this_01.fields._area = in_stack_ffffffffffffff18;
        __this_01.fields._startMs = (int64_t)in_stack_ffffffffffffff28;
        __this_01.fields._24_8_ = in_stack_ffffffffffffff30;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                  (__this_01,(MethodInfo *)((long)pGVar16 + 0x28U));
        *(int64_t *)((long)pGVar16 + 0x38) = 0;
        *(undefined8 *)((long)pGVar16 + 0x40) = 0;
        ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_Fields *)
        &((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_Fields *)((long)pGVar16 + 0x28U)
         )->__1__state)->_area = (System_String_o *)0x0;
        *(System_String_o **)((long)pGVar16 + 0x30) = (System_String_o *)0x0;
        return 0;
      }
      il2cpp_runtime_helper_022b2c90();
      goto label_03b68c1c;
    }
label_03b689c5:
    piVar18 = &(__this->fields)._built_5__3;
    pGVar2 = &(__this->fields).__7__wrap3.fields._current;
    in_stack_ffffffffffffff38 = __this;
    do {
      __this_03.fields._8_8_ = in_stack_ffffffffffffff20;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff18;
      __this_03.fields._current.fields.Key = in_stack_ffffffffffffff28;
      __this_03.fields._current.fields.Label = in_stack_ffffffffffffff30;
      __this_03.fields._current.fields.Sprite = (System_String_o *)in_stack_ffffffffffffff38;
      __this_03.fields._current.fields.Keywords._0_4_ = in_stack_ffffffffffffff40;
      __this_03.fields._current.fields.Keywords._4_4_ = iVar20;
      bVar8 = System_Collections_Generic_List_Enumerator_GisketchGridPickerItem___MoveNext
                        (__this_03,(MethodInfo_3213FC0 *)&(__this->fields).__7__wrap3);
      if ((char)bVar8 == '\0') {
        uVar7 = false;
        uVar6 = false;
        pGVar16 = in_stack_ffffffffffffff38;
        goto joined_r0x03b6877b;
      }
      in_stack_ffffffffffffff18 = (pGVar2->fields).Key;
      in_stack_ffffffffffffff20 = (__this->fields).__7__wrap3.fields._current.fields.Label;
      in_stack_ffffffffffffff28 = (__this->fields).__7__wrap3.fields._current.fields.Sprite;
      in_stack_ffffffffffffff30 = (__this->fields).__7__wrap3.fields._current.fields.Keywords;
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__CreateCard
                (__this_00,(Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)pGVar2->fields,*piVar18,method_01)
      ;
      iVar20 = *piVar18;
      uVar1 = iVar20 + 1;
      *piVar18 = uVar1;
    } while (((int)uVar1 < 0x18) || (iVar20 + (uVar1 / 0xc) * -0xc != -1));
    pGVar4 = (__this_00->fields)._definition;
    if (pGVar4 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      pGVar10 = &pGVar4->fields;
      goto label_03b68b91;
    }
label_03b68b7c:
    pGVar10 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)(g_data_057b9c00 + 0xb8);
label_03b68b91:
    pSVar9 = pGVar10->Id;
    pSVar12 = System_Int32__ToString((int32_t)piVar18,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat_3af7150(pSVar9," yield built=",pSVar12,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("GridPicker.BuildCards",pSVar9,(MethodInfo *)0x0);
    (in_stack_ffffffffffffff38->fields).__2__current = (Il2CppObject *)0x0;
    uVar13 = il2cpp_runtime_helper_022b4080(&(in_stack_ffffffffffffff38->fields).__2__current,0);
    (in_stack_ffffffffffffff38->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar13 >> 8),1);
  }
  if (iVar3 != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  if (__this_00 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) {
label_03b68c1c:
    il2cpp_runtime_helper_022b2c90();
label_03b68c26:
    il2cpp_runtime_helper_022b2ca0();
label_03b68c2b:
    pMVar17 = method;
    il2cpp_runtime_helper_022b2ca0();
label_03b68c30:
    il2cpp_runtime_helper_022b2c90();
label_03b68c3a:
    pMVar11 = pMVar17;
    il2cpp_runtime_helper_022b2ca0();
label_03b68c3f:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    pGVar4 = (__this_00->fields)._definition;
    if (pGVar4 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      pGVar10 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pGVar10 = &pGVar4->fields;
    }
    pSVar9 = System_String__Concat_3af7470
                       (pGVar10->Id," query='",(__this_00->fields)._query,"'",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    piVar18 = (int32_t *)&"GridPicker.BuildCards";
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)&stack0xffffffffffffff48,
               "GridPicker.BuildCards",pSVar9,(MethodInfo *)0x0);
    *(undefined4 *)&(__this->fields).__7__wrap1.fields._startMs = uStack_a8;
    *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._startMs + 4) = uStack_a4;
    (__this->fields).__7__wrap1.fields._enabled = bStack_a0;
    (__this->fields).__7__wrap1.fields._hotLoop = bStack_9c;
    *(undefined4 *)&(__this->fields).__7__wrap1.fields._area = in_stack_ffffffffffffff48;
    *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._area + 4) = in_stack_ffffffffffffff4c;
    *(undefined4 *)&(__this->fields).__7__wrap1.fields._detail = uStack_b0;
    *(undefined4 *)((long)&(__this->fields).__7__wrap1.fields._detail + 4) = uStack_ac;
    pMVar11 = (MethodInfo *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap1);
    (__this->fields).__1__state = -3;
    __this_06 = Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__FilteredItems(__this_00,pMVar11);
    method = (MethodInfo *)&g_data_00000005;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    pGVar4 = (__this_00->fields)._definition;
    if (pGVar4 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      pGVar10 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)(g_data_057b9c00 + 0xb8);
      if (values != (System_String_array *)0x0) goto label_03b68865;
label_03b68b77:
      il2cpp_runtime_helper_022b2c90();
      goto label_03b68b7c;
    }
    pGVar10 = &pGVar4->fields;
    if (values == (System_String_array *)0x0) goto label_03b68b77;
label_03b68865:
    if ((int)values->max_length == 0) goto label_03b68c26;
    method = (MethodInfo *)pGVar10->Id;
    values->m_Items[0] = (System_String_o *)method;
    il2cpp_runtime_helper_022b4080(values->m_Items);
    pMVar17 = " filtered=";
    if ((uint)values->max_length < 2) goto label_03b68c2b;
    values->m_Items[1] = (System_String_o *)" filtered=";
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    if (__this_06 == (System_Collections_Generic_List_GisketchGridPickerItem__o *)0x0) goto label_03b68c30;
    iVar20 = (__this_06->fields)._size;
    pMVar17 = (MethodInfo *)0x0;
    pMVar11 = (MethodInfo *)System_Int32__ToString((int32_t)&stack0xffffffffffffff44,(MethodInfo *)0x0);
    if ((uint)values->max_length < 3) goto label_03b68c3a;
    values->m_Items[2] = (System_String_o *)pMVar11;
    il2cpp_runtime_helper_022b4080(values->m_Items + 2);
    if ((uint)values->max_length < 4) goto label_03b68c3f;
    values->m_Items[3] = " total=";
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    pGVar4 = (__this_00->fields)._definition;
    iVar20 = 0;
    if ((pGVar4 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) &&
       (pGVar5 = (pGVar4->fields).Items, iVar20 = 0,
       pGVar5 != (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0)) {
      iVar20 = (int)pGVar5->max_length;
    }
    pMVar11 = (MethodInfo *)0x0;
    pSVar9 = System_Int32__ToString((int32_t)&stack0xffffffffffffff44,(MethodInfo *)0x0);
    if (4 < (uint)values->max_length) {
      values->m_Items[4] = pSVar9;
      il2cpp_runtime_helper_022b4080(values->m_Items + 4);
      pSVar9 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("GridPicker.BuildCards",pSVar9,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__UpdateHeight
                (__this_00,(__this_06->fields)._size,method_00);
      (__this->fields)._built_5__3 = 0;
      System_Collections_Generic_List_GisketchGridPickerItem___GetEnumerator
                (&SStack_88,__this_06,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Code_GisketchGridP);
      *(undefined4 *)&(__this->fields).__7__wrap3.fields._current.fields.Sprite = uStack_68;
      *(undefined4 *)((long)&(__this->fields).__7__wrap3.fields._current.fields.Sprite + 4) = uStack_64;
      *(undefined4 *)&(__this->fields).__7__wrap3.fields._current.fields.Keywords = uStack_60;
      *(undefined4 *)((long)&(__this->fields).__7__wrap3.fields._current.fields.Keywords + 4) = uStack_5c;
      *(undefined4 *)&(__this->fields).__7__wrap3.fields._current.fields.Key = SStack_88.fields._current._0_4_
      ;
      *(undefined4 *)((long)&(__this->fields).__7__wrap3.fields._current.fields.Key + 4) =
           SStack_88.fields._current._4_4_;
      *(undefined4 *)&(__this->fields).__7__wrap3.fields._current.fields.Label = uStack_70;
      *(undefined4 *)((long)&(__this->fields).__7__wrap3.fields._current.fields.Label + 4) = uStack_6c;
      *(undefined4 *)&(__this->fields).__7__wrap3.fields._list = SStack_88.fields._list._0_4_;
      *(undefined4 *)((long)&(__this->fields).__7__wrap3.fields._list + 4) = SStack_88.fields._list._4_4_;
      (__this->fields).__7__wrap3.fields._index = SStack_88.fields._index;
      (__this->fields).__7__wrap3.fields._version = SStack_88.fields._version;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__7__wrap3,0);
      (__this->fields).__1__state = -4;
      in_stack_ffffffffffffff48 = SStack_88.fields._list._0_4_;
      in_stack_ffffffffffffff4c = SStack_88.fields._list._4_4_;
      goto label_03b689c5;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  __this = pGVar16;
label_03b68c49:
  auVar19 = il2cpp_runtime_helper_022b2c90();
  uVar13 = auVar19._0_8_;
  if (auVar19._8_4_ == 1) {
    plVar14 = (long *)__cxa_begin_catch(uVar13);
    lVar15 = *plVar14;
    __cxa_end_catch();
    if (lVar15 == 0) {
      return 0;
    }
    Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_IDisposable_Dispose
              (__this,pMVar11);
    uVar13 = il2cpp_runtime_helper_022fefe0(lVar15);
    if (lVar15 != 0) {
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_IDisposable_Dispose
                (__this,pMVar11);
      lVar15 = il2cpp_runtime_helper_022fefe0(lVar15);
      il2cpp_runtime_helper_01f66400();
      if (g_data_057a9dbd == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        g_data_057a9dbd = '\x01';
      }
      *(undefined4 *)(lVar15 + 0x10) = 0xfffffffd;
      __this_05.fields._8_8_ = in_stack_ffffffffffffff28;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff20;
      __this_05.fields._current.fields.Key = in_stack_ffffffffffffff30;
      __this_05.fields._current.fields.Label = (System_String_o *)__this;
      __this_05.fields._current.fields.Sprite._0_4_ = in_stack_ffffffffffffff40;
      __this_05.fields._current.fields.Sprite._4_4_ = iVar20;
      __this_05.fields._current.fields.Keywords._0_4_ = in_stack_ffffffffffffff48;
      __this_05.fields._current.fields.Keywords._4_4_ = in_stack_ffffffffffffff4c;
      System_Collections_Generic_List_Enumerator_GisketchGridPickerItem___Dispose
                (__this_05,(MethodInfo_3213FB0 *)(lVar15 + 0x50));
      return extraout_EAX;
    }
  }
  _Unwind_Resume(uVar13);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$<>m__Finally1
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17____m__Finally1 (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3b68d50

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17____m__Finally1
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
// 0x3b68d10

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17____m__Finally2
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
               MethodInfo *method)

{
  undefined1 in_stack_00000008 [48];
  
  if (g_data_057a9dbd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    g_data_057a9dbd = '\x01';
  }
  (__this->fields).__1__state = -3;
  System_Collections_Generic_List_Enumerator_GisketchGridPickerItem___Dispose
            ((System_Collections_Generic_List_Enumerator_GisketchGridPickerItem__o)in_stack_00000008,
             (MethodInfo_3213FB0 *)&(__this->fields).__7__wrap3);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3b68d70

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3b68d80

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<BuildCards>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o* __this, const MethodInfo* method);
// 0x3b68dc0

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23___ctor (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3b68050

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_IDisposable_Dispose (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, const MethodInfo* method);
// 0x3b68dd0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__MoveNext (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, const MethodInfo* method);
// 0x3b68de0

bool_conflict
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__MoveNext
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,MethodInfo *method
          )

{
  uint uVar1;
  int iVar2;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *pGVar3;
  System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *__this_00;
  System_String_o *pSVar4;
  UnityEngine_UI_Image_o *__this_01;
  bool_conflict bVar5;
  UnityEngine_ResourceRequest_o *pUVar6;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *unaff_RBX;
  UnityEngine_UI_Image_o *pUVar7;
  UnityEngine_Sprite_o *pUStack_68;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o GStack_60;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int32_t iStack_38;
  undefined4 uStack_34;
  
  pUVar7 = (UnityEngine_UI_Image_o *)__this;
  if (g_data_057a9dbe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchGridPickerRuntime_ThumbnailLoad_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ResourceRequest_LoadAsync_Sprite);
    pUVar7 = (UnityEngine_UI_Image_o *)&TypeInfo_Sprite;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9dbe = '\x01';
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
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
label_03b691a0:
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
    if (pGVar3 == (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) goto label_03b691b3;
    iVar2 = (__this->fields).generation;
    if ((iVar2 == (pGVar3->fields)._thumbnailGeneration) &&
       ((__this->fields)._load_5__3.fields.Generation == iVar2)) {
      pUVar7 = (__this->fields)._load_5__3.fields.Image;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pUVar6 = (__this->fields)._request_5__4;
        pUVar7 = (UnityEngine_UI_Image_o *)0x0;
        if (pUVar6 == (UnityEngine_ResourceRequest_o *)0x0) goto label_03b691b3;
        pUVar7 = (UnityEngine_UI_Image_o *)UnityEngine_ResourceRequest__get_asset(pUVar6,(MethodInfo *)0x0);
        unaff_RBX = (UnityEngine_UI_Image_o *)0x0;
        if ((pUVar7 != (UnityEngine_UI_Image_o *)0x0) &&
           (unaff_RBX = (UnityEngine_UI_Image_o *)0x0, pUVar7->klass == TypeInfo_Sprite)) {
          unaff_RBX = pUVar7;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar7 = unaff_RBX;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          pSVar4 = (__this->fields)._load_5__3.fields.ResourcePath;
          if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store
                    (pSVar4,(UnityEngine_Sprite_o *)unaff_RBX,(MethodInfo *)0x0);
          __this_01 = (__this->fields)._load_5__3.fields.Image;
          pUVar7 = (UnityEngine_UI_Image_o *)0x0;
          if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
            pUVar7 = unaff_RBX;
            UnityEngine_UI_Image__set_sprite(__this_01,(UnityEngine_Sprite_o *)unaff_RBX,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__FadeIn
                      ((__this->fields)._load_5__3.fields.Image,(MethodInfo *)pUVar7);
            (__this->fields).__2__current = (Il2CppObject *)0x0;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
            (__this->fields).__1__state = 4;
            goto label_03b691a0;
          }
          goto label_03b691b3;
        }
      }
    }
    goto label_03b68fa7;
  case 4:
    (__this->fields).__1__state = -1;
    pUVar7 = (UnityEngine_UI_Image_o *)&(__this->fields)._request_5__4;
    (__this->fields)._load_5__3.fields.Image = (UnityEngine_UI_Image_o *)0x0;
    (__this->fields)._load_5__3.fields.ResourcePath = (System_String_o *)0x0;
    *(undefined8 *)&(__this->fields)._load_5__3.fields.Generation = 0;
    (__this->fields)._request_5__4 = (UnityEngine_ResourceRequest_o *)0x0;
    il2cpp_runtime_helper_022b4080(pUVar7,0);
  }
  if (pGVar3 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) {
label_03b68fa7:
    if ((__this->fields).generation != (pGVar3->fields)._thumbnailGeneration) {
      return 0;
    }
    unaff_RBX = (UnityEngine_UI_Image_o *)&(__this->fields)._load_5__3;
    __this_00 = (pGVar3->fields)._thumbnailLoads;
    while (__this_00 != (System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *)0x0) {
      iVar2 = (__this->fields)._index_5__2;
      if ((__this_00->fields)._size <= iVar2) {
        if ((pGVar3->fields)._build == (UnityEngine_Coroutine_o *)0x0) {
          (pGVar3->fields)._thumbnailLoader = (UnityEngine_Coroutine_o *)0x0;
          il2cpp_runtime_helper_022b4080(&(pGVar3->fields)._thumbnailLoader,0);
          return 0;
        }
        (__this->fields).__2__current = (Il2CppObject *)0x0;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
        (__this->fields).__1__state = 2;
        goto label_03b691a0;
      }
      (__this->fields)._index_5__2 = iVar2 + 1;
      System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad___get_Item
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
       &(((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o *)unaff_RBX)->fields).Image =
           GStack_60.fields.Image._0_4_;
      *(undefined4 *)((long)&(__this->fields)._load_5__3.fields.Image + 4) = GStack_60.fields.Image._4_4_;
      *(undefined4 *)&(__this->fields)._load_5__3.fields.ResourcePath = GStack_60.fields.ResourcePath._0_4_;
      *(undefined4 *)((long)&(__this->fields)._load_5__3.fields.ResourcePath + 4) =
           GStack_60.fields.ResourcePath._4_4_;
      pUVar7 = unaff_RBX;
      il2cpp_runtime_helper_022b4080();
      if ((__this->fields)._load_5__3.fields.Generation == (__this->fields).generation) {
        pUVar7 = (((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o *)unaff_RBX)->fields).
                 Image;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          pSVar4 = (__this->fields)._load_5__3.fields.ResourcePath;
          if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
                            (pSVar4,&pUStack_68,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            pUVar6 = UnityEngine_Resources__LoadAsync_object_
                               ((__this->fields)._load_5__3.fields.ResourcePath,MethodInfo_ResourceRequest_LoadAsync_Sprite);
            (__this->fields)._request_5__4 = pUVar6;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._request_5__4,pUVar6);
            (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._request_5__4;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current);
            (__this->fields).__1__state = 3;
            goto label_03b691a0;
          }
          pUVar7 = (((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o *)unaff_RBX)->fields).
                   Image;
          Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__ShowLoaded(pUVar7,pUStack_68,method_00);
        }
      }
      if ((__this->fields).generation != (pGVar3->fields)._thumbnailGeneration) {
        return 0;
      }
      __this_00 = (pGVar3->fields)._thumbnailLoads;
    }
  }
label_03b691b3:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pUVar7->fields).m_CancellationTokenSource;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, const MethodInfo* method);
// 0x3b691c0

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,MethodInfo *method
          )

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, const MethodInfo* method);
// 0x3b691d0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime.<LoadThumbnails>d__23$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o* __this, const MethodInfo* method);
// 0x3b69210

Il2CppObject *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails_d__23_o *__this,MethodInfo *method
          )

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__get_Id (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, const MethodInfo* method);
// 0x3b652f0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__get_Id
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar1;
  
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    return (pGVar1->fields).Id;
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Setup (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o* definition, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b649b0

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
  long lVar4;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar5;
  System_String_array *values;
  System_String_o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_UI_GridLayoutGroup_o *__this_03;
  long *plVar8;
  MethodInfo *method_00;
  float fVar9;
  undefined1 auVar10 [12];
  undefined1 in_stack_ffffffffffffff78 [12];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool_conflict bVar15;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
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
  pSVar6 = "GridPicker.Setup";
  uVar11 = 0;
  if (definition == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    pGVar5 = (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *)&"null";
  }
  else {
    pGVar5 = &definition->fields;
  }
  detail = pGVar5->Id;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&local_50,pSVar6,detail,(MethodInfo *)0x0);
  ppGVar1 = &(__this->fields)._definition;
  (__this->fields)._definition = definition;
  il2cpp_runtime_helper_022b4080(ppGVar1,definition);
  (__this->fields)._theme = theme;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._theme,theme);
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  if (*ppGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    pGVar5 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)(g_data_057b9c00 + 0xb8);
    if (values != (System_String_array *)0x0) goto label_03b64b16;
label_03b64d99:
    il2cpp_runtime_helper_022b2c90();
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
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
    pGVar5 = &(*ppGVar1)->fields;
    if (values == (System_String_array *)0x0) goto label_03b64d99;
label_03b64b16:
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
    if ((int)values->max_length == 0) goto label_03b64d9e;
    values->m_Items[0] = pGVar5->Id;
    il2cpp_runtime_helper_022b4080(values->m_Items);
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
    if ((uint)values->max_length < 2) goto label_03b64da3;
    values->m_Items[1] = " items=";
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    uVar11 = 0;
    if ((*ppGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) &&
       (pGVar3 = ((*ppGVar1)->fields).Items, uVar11 = 0,
       pGVar3 != (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0)) {
      uVar11 = (undefined4)pGVar3->max_length;
    }
    pSVar6 = System_Int32__ToString((int32_t)&stack0xffffffffffffff84,(MethodInfo *)0x0);
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
    if ((uint)values->max_length < 3) goto label_03b64da8;
    values->m_Items[2] = pSVar6;
    il2cpp_runtime_helper_022b4080(values->m_Items + 2);
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
    if ((uint)values->max_length < 4) goto label_03b64dad;
    values->m_Items[3] = " columns=";
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
    if (definition == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) goto label_03b64db2;
    piVar2 = &(definition->fields).Columns;
    pSVar6 = System_Int32__ToString((int32_t)piVar2,(MethodInfo *)0x0);
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
    if ((uint)values->max_length < 5) goto label_03b64db7;
    values->m_Items[4] = pSVar6;
    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
    if ((uint)values->max_length < 6) goto label_03b64dbc;
    values->m_Items[5] = " item=";
    fVar9 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 5);
    pSVar6 = System_Single__ToString(fVar9,(MethodInfo *)&(definition->fields).ItemWidth);
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
    if ((uint)values->max_length < 7) goto label_03b64dc1;
    values->m_Items[6] = pSVar6;
    il2cpp_runtime_helper_022b4080(values->m_Items + 6);
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
    if ((uint)values->max_length < 8) goto label_03b64dc6;
    values->m_Items[7] = "x";
    fVar9 = (float)il2cpp_runtime_helper_022b4080(values->m_Items + 7);
    pSVar6 = System_Single__ToString(fVar9,(MethodInfo *)&(definition->fields).ItemHeight);
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
    if ((uint)values->max_length < 9) goto label_03b64dcb;
    values->m_Items[8] = pSVar6;
    il2cpp_runtime_helper_022b4080(values->m_Items + 8);
    pSVar6 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    uVar12 = local_50.fields._area._0_4_;
    uVar13 = local_50.fields._area._4_4_;
    uVar14 = local_50.fields._detail._0_4_;
    bVar15 = local_50.fields._detail._4_4_;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar12 = local_50.fields._area._0_4_;
      uVar13 = local_50.fields._area._4_4_;
      uVar14 = local_50.fields._detail._0_4_;
      bVar15 = local_50.fields._detail._4_4_;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("GridPicker.Setup",pSVar6,(MethodInfo *)0x0);
    pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_03b64dd0;
    __this_03 = (UnityEngine_UI_GridLayoutGroup_o *)
                UnityEngine_GameObject__AddComponent_object_(pUVar7,MethodInfo_GridLayoutGroup_AddComponent_GridLayoutGroup);
    if (__this_03 != (UnityEngine_UI_GridLayoutGroup_o *)0x0) {
      value.fields.x = (definition->fields).ItemWidth;
      value.fields.y = (definition->fields).ItemHeight;
      UnityEngine_UI_GridLayoutGroup__set_cellSize(__this_03,value,(MethodInfo *)0x0);
      UnityEngine_UI_GridLayoutGroup__set_spacing
                (__this_03,(UnityEngine_Vector2_o)0x4120000041200000,(MethodInfo *)0x0);
      UnityEngine_UI_GridLayoutGroup__set_constraint(__this_03,1,(MethodInfo *)0x0);
      UnityEngine_UI_GridLayoutGroup__set_constraintCount(__this_03,*piVar2,(MethodInfo *)0x0);
      UnityEngine_UI_GridLayoutGroup__set_startAxis(__this_03,0,(MethodInfo *)0x0);
      UnityEngine_UI_LayoutGroup__set_childAlignment
                ((UnityEngine_UI_LayoutGroup_o *)__this_03,0,(MethodInfo *)0x0);
      pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        method_00 = MethodInfo_LayoutElement_AddComponent_LayoutElement;
        UnityEngine_GameObject__AddComponent_object_(pUVar7,(MethodInfo_255A020 *)MethodInfo_LayoutElement_AddComponent_LayoutElement);
        Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild(__this,method_00);
        __this_00.fields._detail._4_4_ = uVar11;
        __this_00.fields._0_12_ = in_stack_ffffffffffffff78;
        __this_00.fields._startMs._0_4_ = uVar12;
        __this_00.fields._startMs._4_4_ = uVar13;
        __this_00.fields._enabled = uVar14;
        __this_00.fields._hotLoop = bVar15;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                  (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
        return;
      }
      goto label_03b64dda;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b64dda:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar4 = *plVar8;
    __cxa_end_catch();
    __this_01.fields._detail._4_4_ = uVar11;
    __this_01.fields._0_12_ = in_stack_ffffffffffffff78;
    __this_01.fields._startMs._0_4_ = uVar12;
    __this_01.fields._startMs._4_4_ = uVar13;
    __this_01.fields._enabled = uVar14;
    __this_01.fields._hotLoop = bVar15;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
    if (lVar4 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar4);
  }
  __this_02.fields._detail._4_4_ = uVar11;
  __this_02.fields._0_12_ = in_stack_ffffffffffffff78;
  __this_02.fields._startMs._0_4_ = uVar12;
  __this_02.fields._startMs._4_4_ = uVar13;
  __this_02.fields._enabled = uVar14;
  __this_02.fields._hotLoop = bVar15;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
  _Unwind_Resume(auVar10._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$SetQuery
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SetQuery (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, System_String_o* query, const MethodInfo* method);
// 0x3b65320

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SetQuery
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,System_String_o *query,
               MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (query == (System_String_o *)0x0) {
    query = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  bVar1 = System_String__Equals_3af50f0((__this->fields)._query,query,5,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  (__this->fields)._query = query;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._query);
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild(__this,(MethodInfo *)query);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Rebuild
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, const MethodInfo* method);
// 0x3b65b50

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Rebuild
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Coroutine_o **ppUVar2;
  int32_t iVar3;
  int length;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar4;
  System_Collections_Generic_List_GameObject__o *pSVar5;
  System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *pSVar6;
  long lVar7;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_04;
  bool_conflict bVar8;
  System_String_array *values;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar9;
  System_String_o *pSVar10;
  Il2CppObject *pIVar11;
  UnityEngine_Coroutine_o *pUVar12;
  long *plVar13;
  undefined8 unaff_R12;
  undefined1 auVar14 [12];
  undefined1 in_stack_ffffffffffffff48 [12];
  int32_t iVar15;
  System_Collections_Generic_List_T__o *pSVar16;
  Il2CppRGCTXData *pIVar17;
  System_Collections_Generic_List_T__o *local_78;
  Il2CppRGCTXData *pIStack_70;
  _union_249689 local_68;
  _union_14 _Stack_60;
  undefined1 local_50 [32];
  
  if (g_data_057a9dae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&" query='");
    il2cpp_runtime_helper_023445d0(&"' oldCards=");
    il2cpp_runtime_helper_023445d0(&"GridPicker.Rebuild");
    g_data_057a9dae = '\x01';
  }
  local_68.genericMethod = (UnityEngine_Object_o *)0x0;
  _Stack_60.genericMethod = (char *)0x0;
  local_78 = (System_Collections_Generic_List_T__o *)0x0;
  pIStack_70 = (Il2CppRGCTXData *)0x0;
  iVar15 = 0;
  pSVar16 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar17 = (Il2CppRGCTXData *)0x0;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  pGVar4 = (__this->fields)._definition;
  if (pGVar4 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    pGVar9 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)(g_data_057b9c00 + 0xb8);
    if (values != (System_String_array *)0x0) goto label_03b65c68;
label_03b66002:
    il2cpp_runtime_helper_022b2c90();
label_03b66007:
    il2cpp_runtime_helper_022b2ca0();
label_03b6600c:
    il2cpp_runtime_helper_022b2c90();
label_03b66011:
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(unaff_R12);
label_03b6601e:
    il2cpp_runtime_helper_022b2c90();
label_03b66023:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pGVar9 = &pGVar4->fields;
    if (values == (System_String_array *)0x0) goto label_03b66002;
label_03b65c68:
    if ((int)values->max_length == 0) goto label_03b66007;
    values->m_Items[0] = pGVar9->Id;
    il2cpp_runtime_helper_022b4080(values->m_Items);
    if ((uint)values->max_length < 2) goto label_03b66007;
    values->m_Items[1] = " query='";
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    if ((uint)values->max_length < 3) goto label_03b66007;
    values->m_Items[2] = (__this->fields)._query;
    il2cpp_runtime_helper_022b4080(values->m_Items + 2);
    if ((uint)values->max_length < 4) goto label_03b66007;
    values->m_Items[3] = "' oldCards=";
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    pSVar5 = (__this->fields)._cards;
    if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_03b66002;
    iVar15 = (pSVar5->fields)._size;
    pSVar10 = System_Int32__ToString((int32_t)&stack0xffffffffffffff54,(MethodInfo *)0x0);
    if ((uint)values->max_length < 5) goto label_03b66007;
    values->m_Items[4] = pSVar10;
    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
    pSVar10 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_50,"GridPicker.Rebuild",pSVar10,
               (MethodInfo *)0x0);
    local_68.genericMethod = (void *)local_50._16_8_;
    _Stack_60 = (_union_14)local_50._24_8_;
    local_78 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    pIStack_70 = (Il2CppRGCTXData *)local_50._8_8_;
    piVar1 = &(__this->fields)._thumbnailGeneration;
    *piVar1 = *piVar1 + 1;
    pUVar12 = (__this->fields)._build;
    if (pUVar12 != (UnityEngine_Coroutine_o *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                ((UnityEngine_MonoBehaviour_o *)__this,pUVar12,(MethodInfo *)0x0);
    }
    pUVar12 = (__this->fields)._thumbnailLoader;
    if (pUVar12 != (UnityEngine_Coroutine_o *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                ((UnityEngine_MonoBehaviour_o *)__this,pUVar12,(MethodInfo *)0x0);
    }
    pSVar6 = (__this->fields)._thumbnailLoads;
    if (pSVar6 == (System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *)0x0)
    goto label_03b6600c;
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar3 = (pSVar6->fields)._size;
    (pSVar6->fields)._size = 0;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)(pSVar6->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    pSVar5 = (__this->fields)._cards;
    if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_03b66011;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
               (System_Collections_Generic_List_object__o *)pSVar5,MethodInfo_List_1_T_Enumerator_UnityEngine_GameObject_GetEnumerator);
    ppUVar2 = &(__this->fields)._thumbnailLoader;
    pSVar16 = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    pIVar17 = (Il2CppRGCTXData *)local_50._8_8_;
    while (__this_00.fields._version = iVar15,
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_,
          __this_00.fields._index = in_stack_ffffffffffffff48._8_4_,
          __this_00.fields._current = (Il2CppObject *)pSVar16,
          bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58), (char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)local_50._16_8_,(MethodInfo *)0x0);
    }
    __this_01.fields._version = iVar15;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff48._0_8_;
    __this_01.fields._index = in_stack_ffffffffffffff48._8_4_;
    __this_01.fields._current = (Il2CppObject *)pSVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
    pSVar5 = (__this->fields)._cards;
    if (pSVar5 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_03b6601e;
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar5->fields)._size;
    (pSVar5->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (g_data_057a9daf == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_BuildCards_d__17);
      g_data_057a9daf = '\x01';
    }
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_BuildCards_d__17);
    System_Object___ctor(pIVar11,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar11[1].klass = 0;
    if (pIVar11 == (Il2CppObject *)0x0) goto label_03b66023;
    pIVar11[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(pIVar11 + 2,__this);
    pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar11,
                         (MethodInfo *)0x0);
    (__this->fields)._build = pUVar12;
    il2cpp_runtime_helper_022b4080();
    pGVar4 = (__this->fields)._definition;
    if (pGVar4 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      if ((char)(pGVar4->fields).LazyLoadThumbnails == '\0') {
label_03b65fc6:
        __this_02.fields._detail._4_4_ = iVar15;
        __this_02.fields._0_12_ = in_stack_ffffffffffffff48;
        __this_02.fields._startMs = (int64_t)pSVar16;
        __this_02.fields._24_8_ = pIVar17;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)&local_78);
        return;
      }
      iVar3 = (__this->fields)._thumbnailGeneration;
      if (g_data_057a9db5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_LoadThumbnails_d__23);
        g_data_057a9db5 = '\x01';
      }
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadThumbnails_d__23);
      System_Object___ctor(pIVar11,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar11[1].klass = 0;
      if (pIVar11 != (Il2CppObject *)0x0) {
        pIVar11[2].klass = (Il2CppClass *)__this;
        il2cpp_runtime_helper_022b4080(pIVar11 + 2,__this);
        *(int32_t *)&pIVar11[2].monitor = iVar3;
        pUVar12 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar11
                             ,(MethodInfo *)0x0);
        *ppUVar2 = pUVar12;
        il2cpp_runtime_helper_022b4080(ppUVar2,pUVar12);
        goto label_03b65fc6;
      }
      goto label_03b6602d;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b6602d:
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar7 = *plVar13;
    __cxa_end_catch();
    __this_03.fields._detail._4_4_ = iVar15;
    __this_03.fields._0_12_ = in_stack_ffffffffffffff48;
    __this_03.fields._startMs = (int64_t)pSVar16;
    __this_03.fields._24_8_ = pIVar17;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_03,(MethodInfo *)&local_78);
    if (lVar7 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_04.fields._detail._4_4_ = iVar15;
  __this_04.fields._0_12_ = in_stack_ffffffffffffff48;
  __this_04.fields._startMs = (int64_t)pSVar16;
  __this_04.fields._24_8_ = pIVar17;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_04,(MethodInfo *)&local_78);
  _Unwind_Resume(auVar14._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$BuildCards
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, const MethodInfo* method);
// 0x3b66110

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildCards
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,MethodInfo *method)

{
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  undefined4 uVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_02;
  
  if (g_data_057a9daf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuildCards_d__17);
    g_data_057a9daf = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_BuildCards_d__17);
  uVar1 = 0;
  pIVar3 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9db5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadThumbnails_d__23);
    g_data_057a9db5 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadThumbnails_d__23);
  uVar2 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar3);
    *(undefined4 *)&__this_01[2].monitor = uVar1;
    return (System_Collections_IEnumerator_o *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar2;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$FilteredItems
// il2cpp: System_Collections_Generic_List_GisketchGridPickerItem__o* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__FilteredItems (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, const MethodInfo* method);
// 0x3b66220

System_Collections_Generic_List_GisketchGridPickerItem__o *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__FilteredItems
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *pGVar1;
  int *piVar2;
  int32_t *piVar3;
  Il2CppArrayBounds *pIVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar9;
  Il2CppArrayBounds *pIVar10;
  System_Collections_Generic_List_T__c *pSVar11;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar12;
  System_Nullable_float__o stainScaleOverride;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_04;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar13;
  int32_t iVar14;
  System_String_array *__this_05;
  System_String_array *values;
  System_Collections_Generic_List_GisketchGridPickerItem__o *pSVar15;
  Il2CppObject *pIVar16;
  System_String_array *pSVar17;
  char **ppcVar18;
  System_String_o *pSVar19;
  System_String_o *pSVar20;
  System_Type_array *pSVar21;
  System_Type_o *pSVar22;
  long lVar23;
  UnityEngine_GameObject_o *pUVar24;
  UnityEngine_Transform_o *pUVar25;
  UnityEngine_Transform_o *pUVar26;
  UnityEngine_RectTransform_o *pUVar27;
  UnityEngine_UI_Selectable_o *pUVar28;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar29;
  UnityEngine_UI_Image_o *image;
  UnityEngine_Material_o *pUVar30;
  Il2CppClass *pIVar31;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_06;
  UnityEngine_Events_UnityAction_o *call;
  System_Collections_Generic_List_GisketchGridPickerItem__o *extraout_RAX;
  undefined8 uVar32;
  long *plVar33;
  System_Collections_Generic_List_GisketchGridPickerItem__o *extraout_RAX_00;
  long lVar34;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_String_array *pSVar35;
  System_String_array *unaff_RBP;
  void **ppvVar36;
  int iVar37;
  int iVar38;
  System_String_array *method_02;
  System_String_array *pSVar39;
  MethodInfo_24E7B40 *pMVar40;
  MethodInfo *pMVar41;
  MethodInfo_24E7B40 **__this_07;
  System_String_array *unaff_R12;
  System_String_o *unaff_R13;
  System_String_o **unaff_R14;
  ulong unaff_R15;
  float fVar42;
  float fVar43;
  UnityEngine_Color_o UVar44;
  undefined1 auVar45 [12];
  System_String_o *in_stack_fffffffffffffe68;
  System_String_o *in_stack_fffffffffffffe70;
  System_String_o *in_stack_fffffffffffffe78;
  System_String_o *in_stack_fffffffffffffe80;
  int iStack_16c;
  void **ppvStack_168;
  Il2CppObject *pIStack_160;
  UnityEngine_RectTransform_o *pUStack_158;
  System_String_array *pSStack_150;
  UnityEngine_UI_Selectable_o *pUStack_148;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *pGStack_140;
  undefined1 auStack_138 [44];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  _union_13 _Stack_100;
  _union_14 _Stack_f8;
  System_String_array *pSStack_f0;
  System_String_array *pSStack_e8;
  System_String_o *pSStack_e0;
  System_String_array *pSStack_d8;
  ulong uStack_d0;
  System_String_array *pSStack_c8;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 local_50;
  undefined4 uStack_4c;
  il2cpp_array_lower_bound_t iStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  il2cpp_array_lower_bound_t iStack_38;
  undefined4 uStack_34;
  float __x;
  
  if (g_data_057a9db0 == '\0') {
    uStack_a0 = (System_String_array *)0x3b66248;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_a0 = (System_String_array *)0x3b66254;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_GisketchGridPickerItem);
    uStack_a0 = (System_String_array *)0x3b66260;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchGridPickerItem);
    uStack_a0 = (System_String_array *)0x3b6626c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    uStack_a0 = (System_String_array *)0x3b66278;
    il2cpp_runtime_helper_023445d0(&" ");
    g_data_057a9db0 = '\x01';
  }
  uStack_a0 = (System_String_array *)0x3b6628e;
  __this_05 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchGridPickerItem);
  uStack_a0 = (System_String_array *)0x3b662a3;
  method_02 = MethodInfo_List_1_Gisketch_Aottg2UI_Code_GisketchGridPickerItem;
  pSVar17 = __this_05;
  System_Collections_Generic_List_GisketchGridPickerItem____ctor
            ((System_Collections_Generic_List_GisketchGridPickerItem__o *)__this_05,
             (MethodInfo_35E6930 *)MethodInfo_List_1_Gisketch_Aottg2UI_Code_GisketchGridPickerItem);
  pGVar8 = (__this->fields)._definition;
  pSVar35 = __this_05;
  if ((pGVar8 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) &&
     (pGVar9 = (pGVar8->fields).Items, pGVar9 != (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0))
  {
    if ((int)pGVar9->max_length < 1) {
      return (System_Collections_Generic_List_GisketchGridPickerItem__o *)__this_05;
    }
    unaff_R14 = &pGVar9->m_Items[0].fields.Keywords;
    unaff_R15 = 0;
    if ((pGVar9->max_length & 0xffffffff) != 0) {
      do {
        pGVar1 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *)(unaff_R14 + -3);
        pSVar35 = (System_String_array *)pGVar1->Key;
        unaff_R12 = (System_String_array *)unaff_R14[-2];
        pSVar19 = unaff_R14[-1];
        unaff_R13 = *unaff_R14;
        method_02 = (System_String_array *)&g_data_00000005;
        uStack_a0 = (System_String_array *)0x3b66366;
        pSVar17 = TypeInfo_string;
        values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
        if (values == (System_String_array *)0x0) goto label_03b664f8;
        unaff_RBP = values;
        if ((int)values->max_length == 0) break;
        pSVar17 = (System_String_array *)values->m_Items;
        values->m_Items[0] = (System_String_o *)unaff_R12;
        uStack_a0 = (System_String_array *)0x3b6638c;
        method_02 = unaff_R12;
        il2cpp_runtime_helper_022b4080();
        pSVar39 = " ";
        if ((uint)values->max_length < 2) break;
        pSVar17 = (System_String_array *)(values->m_Items + 1);
        values->m_Items[1] = (System_String_o *)" ";
        uStack_a0 = (System_String_array *)0x3b663ad;
        il2cpp_runtime_helper_022b4080();
        method_02 = pSVar39;
        if ((uint)values->max_length < 3) break;
        pSVar17 = (System_String_array *)(values->m_Items + 2);
        values->m_Items[2] = (System_String_o *)pSVar35;
        uStack_a0 = (System_String_array *)0x3b663c7;
        method_02 = pSVar35;
        il2cpp_runtime_helper_022b4080();
        pSVar39 = " ";
        if ((uint)values->max_length < 4) break;
        pSVar17 = (System_String_array *)(values->m_Items + 3);
        values->m_Items[3] = (System_String_o *)" ";
        uStack_a0 = (System_String_array *)0x3b663e8;
        il2cpp_runtime_helper_022b4080();
        method_02 = pSVar39;
        if ((uint)values->max_length < 5) break;
        values->m_Items[4] = unaff_R13;
        uStack_a0 = (System_String_array *)0x3b66405;
        il2cpp_runtime_helper_022b4080(values->m_Items + 4);
        method_02 = (System_String_array *)0x0;
        uStack_a0 = (System_String_array *)0x3b6640f;
        pSVar17 = values;
        pSVar20 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
        if (pSVar20 == (System_String_o *)0x0) goto label_03b664f8;
        uStack_a0 = (System_String_array *)0x3b66422;
        unaff_RBP = (System_String_array *)System_String__Trim(pSVar20,(MethodInfo *)0x0);
        pSVar17 = (System_String_array *)(__this->fields)._query;
        method_02 = (System_String_array *)0x0;
        uStack_a0 = (System_String_array *)0x3b66435;
        bVar13 = System_String__IsNullOrWhiteSpace((System_String_o *)pSVar17,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          if (unaff_RBP == (System_String_array *)0x0) goto label_03b664f8;
          method_02 = (System_String_array *)(__this->fields)._query;
          uStack_a0 = (System_String_array *)0x3b6645a;
          pSVar17 = unaff_RBP;
          iVar14 = System_String__IndexOf_3afbe10
                             ((System_String_o *)unaff_RBP,(System_String_o *)method_02,5,(MethodInfo *)0x0);
          if (-1 < iVar14) goto label_03b66462;
        }
        else {
label_03b66462:
          lVar23 = MethodInfo_Void_Add;
          pSVar17 = __this_05;
          if (__this_05 == (System_String_array *)0x0) goto label_03b664f8;
          piVar2 = (int *)((long)&__this_05->max_length + 4);
          *piVar2 = *piVar2 + 1;
          pIVar10 = __this_05->bounds;
          if (pIVar10 == (Il2CppArrayBounds *)0x0) goto label_03b664f8;
          uVar7 = *(uint *)&__this_05->max_length;
          lVar34 = (long)(int)uVar7;
          if (uVar7 < (uint)pIVar10[1].lower_bound) {
            *(uint *)&__this_05->max_length = uVar7 + 1;
            pSVar17 = (System_String_array *)(pIVar10 + lVar34 * 2 + 2);
            local_50 = SUB84(pSVar35,0);
            uStack_4c = (undefined4)((ulong)pSVar35 >> 0x20);
            iStack_48 = (il2cpp_array_lower_bound_t)unaff_R12;
            uStack_44 = (undefined4)((ulong)unaff_R12 >> 0x20);
            local_40 = SUB84(pSVar19,0);
            uStack_3c = (undefined4)((ulong)pSVar19 >> 0x20);
            iStack_38 = (il2cpp_array_lower_bound_t)unaff_R13;
            uStack_34 = (undefined4)((ulong)unaff_R13 >> 0x20);
            pIVar4 = pIVar10 + lVar34 * 2 + 3;
            *(undefined4 *)&pIVar4->length = local_40;
            *(undefined4 *)((long)&pIVar4->length + 4) = uStack_3c;
            pIVar4->lower_bound = iStack_38;
            *(undefined4 *)&pIVar4->field_0xc = uStack_34;
            pIVar10 = pIVar10 + lVar34 * 2 + 2;
            *(undefined4 *)&pIVar10->length = local_50;
            *(undefined4 *)((long)&pIVar10->length + 4) = uStack_4c;
            pIVar10->lower_bound = iStack_48;
            *(undefined4 *)&pIVar10->field_0xc = uStack_44;
            method_02 = (System_String_array *)0x0;
            uStack_a0 = (System_String_array *)0x3b664da;
            il2cpp_runtime_helper_022b4080();
          }
          else {
            method_02 = *(System_String_array **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70);
            uStack_a0 = (System_String_array *)0x3b66317;
            item.fields.Keywords = unaff_R13;
            item.fields.Key = pGVar1->Key;
            item.fields.Label = pGVar1->Label;
            item.fields.Sprite = pGVar1->Sprite;
            System_Collections_Generic_List_GisketchGridPickerItem___AddWithResize
                      ((System_Collections_Generic_List_GisketchGridPickerItem__o *)__this_05,item,
                       (MethodInfo_35E7350 *)method_02);
          }
        }
        unaff_R15 = unaff_R15 + 1;
        uVar7 = (uint)pGVar9->max_length;
        unaff_R14 = unaff_R14 + 4;
        if ((long)(int)uVar7 <= (long)unaff_R15) {
          return (System_Collections_Generic_List_GisketchGridPickerItem__o *)__this_05;
        }
      } while (unaff_R15 < uVar7);
    }
    uStack_a0 = (System_String_array *)0x3b664f8;
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b664f8:
  uStack_a0 = (System_String_array *)0x3b664fd;
  il2cpp_runtime_helper_022b2c90();
  iVar37 = (int)method_02;
  pSStack_f0 = (System_String_array *)((ulong)method_02 & 0xffffffff);
  __this_07 = (MethodInfo_24E7B40 **)pSVar17;
  iVar38 = iVar37;
  uStack_b0 = pSVar35;
  uStack_a8 = unaff_R14;
  uStack_a0 = unaff_RBP;
  if (g_data_057a9db1 == '\0') {
    __this_07 = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
    pSStack_c8 = (System_String_array *)0x3b66522;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9db1 = '\x01';
  }
  if ((System_Collections_Generic_List_T__c *)pSVar17->m_Items[0] !=
      (System_Collections_Generic_List_T__c *)0x0) {
    fVar43 = (float)*(int *)&(((System_Collections_Generic_List_T__c *)pSVar17->m_Items[0])->_1).byval_arg.
                             data;
    fVar42 = (float)iVar37;
    if (g_data_057a690d == '\0') {
      pSStack_c8 = (System_String_array *)0x3b66560;
      fStack_b8 = (float)iVar37;
      fStack_b4 = fVar43;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690d = '\x01';
      fVar42 = fStack_b8;
      fVar43 = fStack_b4;
    }
    __x = fVar42 / fVar43;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      pSStack_c8 = (System_String_array *)0x3b66595;
      fStack_b8 = fVar42 / fVar43;
      il2cpp_runtime_helper_02337ed0();
      __x = fStack_b8;
    }
    pSStack_c8 = (System_String_array *)0x3b665a0;
    fVar42 = ceilf(__x);
    unaff_RBP = (System_String_array *)0x1;
    if (0 < (int)fVar42) {
      unaff_RBP = (System_String_array *)(ulong)(uint)(int)fVar42;
    }
    pSStack_c8 = (System_String_array *)0x3b665c0;
    pMVar40 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
    __this_07 = (MethodInfo_24E7B40 **)pSVar17;
    pSStack_f0 = (System_String_array *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pSVar17,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    iVar38 = (int)pMVar40;
    pSVar11 = (System_Collections_Generic_List_T__c *)pSVar17->m_Items[0];
    if ((pSVar11 != (System_Collections_Generic_List_T__c *)0x0) && (pSStack_f0 != (System_String_array *)0x0)
       ) {
      iVar37 = *(int *)&(pSVar11->_1).byval_arg.data;
      pIVar31 = (pSStack_f0->obj).klass;
      iVar38 = (int)pIVar31->vtable[0x24].method;
      pSStack_c8 = (System_String_array *)0x3b66611;
      __this_07 = (MethodInfo_24E7B40 **)pSStack_f0;
      (*pIVar31->vtable[0x24].methodPtr)
                ((float)(iVar37 + -1) * 10.0 +
                 (float)iVar37 * *(float *)((long)&(pSVar11->_1).byval_arg.data + 4));
      if ((System_Collections_Generic_List_T__c *)pSVar17->m_Items[0] !=
          (System_Collections_Generic_List_T__c *)0x0) {
        pIVar31 = (pSStack_f0->obj).klass;
        vtableDispatch = pIVar31->vtable[0x26].methodPtr;
        pSVar15 = (System_Collections_Generic_List_GisketchGridPickerItem__o *)
                  (*vtableDispatch)
                            ((float)((int)unaff_RBP + -1) * 10.0 +
                             (float)(int)unaff_RBP *
                             (float)(((System_Collections_Generic_List_T__c *)pSVar17->m_Items[0])->_1).
                                    byval_arg.bits,pSStack_f0,pIVar31->vtable[0x26].method,extraout_RDX,
                             vtableDispatch);
        return pSVar15;
      }
    }
  }
  pSStack_c8 = (System_String_array *)0x3b6665f;
  il2cpp_runtime_helper_022b2c90();
  iStack_16c = iVar38;
  pSStack_e8 = unaff_R12;
  pSStack_e0 = unaff_R13;
  pSStack_d8 = pSVar17;
  uStack_d0 = unaff_R15;
  pSStack_c8 = unaff_RBP;
  if (g_data_057a9db2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_AddComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchButtonRelief_AddComponent_GisketchButtonRelief);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDisabledSelectableOpacity_AddComponent_GisketchD);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSurfaceMaterialOwner_AddComponent_GisketchSurfac);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCard_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"-item-");
    il2cpp_runtime_helper_023445d0(&"] ");
    il2cpp_runtime_helper_023445d0(&"gridPickerItem");
    il2cpp_runtime_helper_023445d0(&"[");
    il2cpp_runtime_helper_023445d0(&"shadow");
    il2cpp_runtime_helper_023445d0(&"GridPicker.CreateCard");
    il2cpp_runtime_helper_023445d0(&"AoTTG Button Face");
    g_data_057a9db2 = '\x01';
  }
  auStack_138._16_8_ = (Il2CppRGCTXData *)0x0;
  auStack_138._24_8_ = (char *)0x0;
  auStack_138._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_138._8_8_ = (Il2CppMethodPointer)0x0;
  pIVar16 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  System_Object___ctor(pIVar16,(MethodInfo *)0x0);
  if (pIVar16 == (Il2CppObject *)0x0) {
label_03b66f77:
    il2cpp_runtime_helper_022b2c90();
label_03b66f7c:
    il2cpp_runtime_helper_022b2ca0();
label_03b66f81:
    il2cpp_runtime_helper_022b2c90();
label_03b66f86:
    il2cpp_runtime_helper_022b2c90();
label_03b66f8b:
    il2cpp_runtime_helper_022b2ca0();
label_03b66f90:
    il2cpp_runtime_helper_022b2c90();
label_03b66f95:
    il2cpp_runtime_helper_022b2c90();
label_03b66f9a:
    il2cpp_runtime_helper_022b2c90();
label_03b66f9f:
    il2cpp_runtime_helper_022b2c90();
label_03b66fa4:
    il2cpp_runtime_helper_022b2c90();
label_03b66fa9:
    il2cpp_runtime_helper_022b2c90();
label_03b66fae:
    il2cpp_runtime_helper_022b2c90();
label_03b66fb3:
    il2cpp_runtime_helper_022b2c90();
label_03b66fb8:
    fVar42 = (float)il2cpp_runtime_helper_022b2c90();
label_03b66fbd:
    il2cpp_runtime_helper_022b2c90(fVar42);
label_03b66fc2:
    il2cpp_runtime_helper_022b2c90();
label_03b66fc7:
    il2cpp_runtime_helper_022b2c90();
label_03b66fcc:
    il2cpp_runtime_helper_022b2c90();
label_03b66fd1:
    il2cpp_runtime_helper_022b2c90();
label_03b66fd6:
    il2cpp_runtime_helper_022b2ca0();
label_03b66fdb:
    il2cpp_runtime_helper_022b2c90();
label_03b66fe0:
    il2cpp_runtime_helper_022b2c90();
label_03b66fe5:
    il2cpp_runtime_helper_022b2c90();
label_03b66fea:
    il2cpp_runtime_helper_022b2c90();
label_03b66fef:
    il2cpp_runtime_helper_022b2c90();
label_03b66ff4:
    fVar42 = (float)il2cpp_runtime_helper_022b2c90();
label_03b66ff9:
    il2cpp_runtime_helper_022b2c90(fVar42);
label_03b66ffe:
    il2cpp_runtime_helper_022b2c90();
label_03b67003:
    il2cpp_runtime_helper_022b2c90();
label_03b67008:
    il2cpp_runtime_helper_022b2c90();
label_03b6700d:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar16[1].klass = (Il2CppClass *)__this_07;
    il2cpp_runtime_helper_022b4080(pIVar16 + 1,__this_07);
    ppvVar36 = &pIVar16[1].monitor;
    *(undefined4 *)&pIVar16[2].monitor = (undefined4)uStack_a8;
    *(undefined4 *)((long)&pIVar16[2].monitor + 4) = uStack_a8._4_4_;
    *(undefined4 *)&pIVar16[3].klass = (undefined4)uStack_a0;
    *(undefined4 *)((long)&pIVar16[3].klass + 4) = uStack_a0._4_4_;
    *(float *)&pIVar16[1].monitor = fStack_b8;
    *(float *)((long)&pIVar16[1].monitor + 4) = fStack_b4;
    *(undefined4 *)&pIVar16[2].klass = (undefined4)uStack_b0;
    *(undefined4 *)((long)&pIVar16[2].klass + 4) = uStack_b0._4_4_;
    il2cpp_runtime_helper_022b4080(ppvVar36,0);
    pSVar17 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    if ((System_Collections_Generic_List_T__c *)((System_String_array *)__this_07)->m_Items[0] ==
        (System_Collections_Generic_List_T__c *)0x0) {
      ppcVar18 = *(char ***)(g_data_057b9c00 + 0xb8);
    }
    else {
      ppcVar18 = &(((System_Collections_Generic_List_T__c *)((System_String_array *)__this_07)->m_Items[0])->
                  _1).name;
    }
    if (pSVar17 == (System_String_array *)0x0) goto label_03b66f77;
    if ((int)pSVar17->max_length == 0) goto label_03b66f7c;
    pSVar17->m_Items[0] = (System_String_o *)*ppcVar18;
    il2cpp_runtime_helper_022b4080(pSVar17->m_Items);
    if ((uint)pSVar17->max_length < 2) goto label_03b66f7c;
    pSVar17->m_Items[1] = "[";
    il2cpp_runtime_helper_022b4080(pSVar17->m_Items + 1);
    pSVar19 = System_Int32__ToString((int32_t)&iStack_16c,(MethodInfo *)0x0);
    if ((uint)pSVar17->max_length < 3) goto label_03b66f7c;
    pSVar17->m_Items[2] = pSVar19;
    il2cpp_runtime_helper_022b4080(pSVar17->m_Items + 2);
    if ((uint)pSVar17->max_length < 4) goto label_03b66f7c;
    pSVar17->m_Items[3] = "] ";
    il2cpp_runtime_helper_022b4080(pSVar17->m_Items + 3);
    if ((uint)pSVar17->max_length < 5) goto label_03b66f7c;
    pSVar17->m_Items[4] = *ppvVar36;
    il2cpp_runtime_helper_022b4080(pSVar17->m_Items + 4);
    pSVar19 = System_String__Concat_3af7570(pSVar17,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar41 = "GridPicker.CreateCard";
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)(auStack_138 + 0x28),
               (System_String_o *)"GridPicker.CreateCard",pSVar19,(MethodInfo *)0x0);
    auStack_138._16_8_ = _Stack_100;
    auStack_138._24_8_ = _Stack_f8;
    auStack_138._4_4_ = uStack_10c;
    auStack_138._0_4_ = auStack_138._40_4_;
    auStack_138._12_4_ = uStack_104;
    auStack_138._8_4_ = uStack_108;
    if ((System_Collections_Generic_List_T__c *)((System_String_array *)__this_07)->m_Items[0] ==
        (System_Collections_Generic_List_T__c *)0x0) goto label_03b66f81;
    pSVar19 = (System_String_o *)
              (((System_Collections_Generic_List_T__c *)((System_String_array *)__this_07)->m_Items[0])->_1).
              name;
    pSVar20 = Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SafeId(*ppvVar36,pMVar41);
    pSVar19 = System_String__Concat_3af7150(pSVar19,"-item-",pSVar20,(MethodInfo *)0x0);
    pIStack_160 = pIVar16;
    pGStack_140 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *)ppvVar36;
    pSVar21 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar22 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (pSVar21 == (System_Type_array *)0x0) goto label_03b66f86;
    if ((pSVar22 == (System_Type_o *)0x0) || (lVar23 = il2cpp_runtime_helper_023051f0(pSVar22), lVar23 != 0)) {
      if ((int)pSVar21->max_length == 0) goto label_03b66f8b;
      pSVar21->m_Items[0] = pSVar22;
      il2cpp_runtime_helper_022b4080(pSVar21->m_Items,pSVar22);
      pUVar24 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar24,pSVar19,pSVar21,(MethodInfo *)0x0);
      ppvVar36 = &pIStack_160[3].monitor;
      pIStack_160[3].monitor = pUVar24;
      il2cpp_runtime_helper_022b4080(ppvVar36);
      if (*ppvVar36 == (UnityEngine_GameObject_o *)0x0) goto label_03b66f90;
      pUVar25 = UnityEngine_GameObject__get_transform(*ppvVar36,(MethodInfo *)0x0);
      pUVar26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
      if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto label_03b66f95;
      UnityEngine_Transform__SetParent_4e09e30(pUVar25,pUVar26,0,(MethodInfo *)0x0);
      lVar23 = MethodInfo_Void_Add;
      __this_00 = (System_Collections_Generic_List_object__o *)((System_String_array *)__this_07)->m_Items[2];
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b66f9a;
      pIVar16 = *ppvVar36;
      piVar3 = &(__this_00->fields)._version;
      *piVar3 = *piVar3 + 1;
      pSVar12 = (__this_00->fields)._items;
      if (pSVar12 == (System_Object_array *)0x0) goto label_03b66f9f;
      uVar7 = (__this_00->fields)._size;
      if (uVar7 < (uint)pSVar12->max_length) {
        (__this_00->fields)._size = uVar7 + 1;
        pSVar12->m_Items[(int)uVar7] = pIVar16;
        il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar7);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIVar16,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar23 + 0x20) + 0xc0) + 0x70));
      }
      if (*ppvVar36 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fa4;
      pUVar27 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(*ppvVar36,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      if ((System_Collections_Generic_List_T__c *)((System_String_array *)__this_07)->m_Items[0] ==
          (System_Collections_Generic_List_T__c *)0x0) goto label_03b66fa9;
      if (pUVar27 == (UnityEngine_RectTransform_o *)0x0) goto label_03b66fae;
      UnityEngine_RectTransform__set_sizeDelta
                (pUVar27,(UnityEngine_Vector2_o)
                         *(UnityEngine_Vector2_Fields *)
                          ((long)&(((System_Collections_Generic_List_T__c *)
                                   ((System_String_array *)__this_07)->m_Items[0])->_1).byval_arg.data + 4),
                 (MethodInfo *)0x0);
      if (*ppvVar36 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fb3;
      pIVar16 = UnityEngine_GameObject__AddComponent_object_(*ppvVar36,MethodInfo_Image_AddComponent_Image);
      if ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)((System_String_array *)__this_07)->m_Items[1] ==
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b66fb8;
      UVar44 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)
                          ((System_String_array *)__this_07)->m_Items[1],"shadow",
                          (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),(MethodInfo *)0x0);
      fVar42 = UVar44.fields.r;
      if (pIVar16 == (Il2CppObject *)0x0) goto label_03b66fbd;
      (*pIVar16->klass->vtable[0x17].methodPtr)(fVar42,UVar44.fields.b,pIVar16);
      if (*ppvVar36 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fc2;
      pUVar28 = (UnityEngine_UI_Selectable_o *)
                UnityEngine_GameObject__AddComponent_object_(*ppvVar36,MethodInfo_Button_AddComponent_Button);
      if (pUVar28 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b66fc7;
      pUStack_148 = pUVar28;
      UnityEngine_UI_Selectable__set_transition(pUVar28,0,(MethodInfo *)0x0);
      if (*ppvVar36 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fcc;
      UnityEngine_GameObject__AddComponent_object_(*ppvVar36,MethodInfo_GisketchDisabledSelectableOpacity_AddComponent_GisketchD);
      ppvStack_168 = ppvVar36;
      pSVar21 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
      pSVar22 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
      if (pSVar21 == (System_Type_array *)0x0) goto label_03b66fd1;
      if ((pSVar22 != (System_Type_o *)0x0) && (lVar23 = il2cpp_runtime_helper_023051f0(pSVar22), lVar23 == 0))
      goto label_03b67021;
      if ((int)pSVar21->max_length == 0) goto label_03b66fd6;
      pSVar21->m_Items[0] = pSVar22;
      il2cpp_runtime_helper_022b4080(pSVar21->m_Items,pSVar22);
      pUVar24 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      ppvVar36 = ppvStack_168;
      UnityEngine_GameObject___ctor_4dfc440(pUVar24,"AoTTG Button Face",pSVar21,(MethodInfo *)0x0);
      if (pUVar24 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fdb;
      pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
      if (*ppvVar36 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fe0;
      pUVar26 = UnityEngine_GameObject__get_transform(*ppvVar36,(MethodInfo *)0x0);
      if (pUVar25 == (UnityEngine_Transform_o *)0x0) goto label_03b66fe5;
      UnityEngine_Transform__SetParent_4e09e30(pUVar25,pUVar26,0,(MethodInfo *)0x0);
      pMVar41 = MethodInfo_RectTransform_GetComponent_RectTransform;
      pUVar27 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar24,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Stretch(pUVar27,pMVar41);
      if ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)((System_String_array *)__this_07)->m_Items[1] ==
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b66fea;
      pGVar29 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                          ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)
                           ((System_String_array *)__this_07)->m_Items[1],"gridPickerItem",(MethodInfo *)0x0);
      image = (UnityEngine_UI_Image_o *)UnityEngine_GameObject__AddComponent_object_(pUVar24,MethodInfo_Image_AddComponent_Image);
      if (pGVar29 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_03b66fef;
      if ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)((System_String_array *)__this_07)->m_Items[1] ==
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b66ff4;
      UVar44.fields.b = 1.0;
      UVar44.fields.a = 1.0;
      UVar44.fields.r = 1.0;
      UVar44.fields.g = 1.0;
      UVar44 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)
                          ((System_String_array *)__this_07)->m_Items[1],(pGVar29->fields).background,UVar44,
                          (MethodInfo *)0x0);
      fVar42 = UVar44.fields.r;
      if (image == (UnityEngine_UI_Image_o *)0x0) goto label_03b66ff9;
      pUStack_158 = pUVar27;
      pSStack_150 = (System_String_array *)__this_07;
      (*(image->klass->vtable)._23_set_color.methodPtr)
                (fVar42,UVar44.fields.b,image,(image->klass->vtable)._23_set_color.method);
      fVar42 = (float)(pGVar29->fields).wornStainScale.fields.hasValue;
      bVar5 = *(byte *)((long)&(pGVar29->fields).wornStainScale.fields.value + 1);
      uVar6 = *(ushort *)((long)&(pGVar29->fields).textured.fields.hasValue + 2);
      stainScaleOverride.fields = *(System_Nullable_float__Fields *)&(pGVar29->fields).textured.fields.value;
      if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar30 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
                          (fVar42,(uint)bVar5,(uint)(0xff < uVar6 || (char)uVar6 == '\0'),stainScaleOverride,0
                           ,0,(MethodInfo *)0x0);
      (*(image->klass->vtable)._33_set_material.methodPtr)
                (image,pUVar30,(image->klass->vtable)._33_set_material.method);
      pIVar16 = UnityEngine_GameObject__AddComponent_object_(pUVar24,MethodInfo_GisketchSurfaceMaterialOwner_AddComponent_GisketchSurfac);
      pUVar28 = pUStack_148;
      pSVar17 = pSStack_150;
      pIVar31 = (Il2CppClass *)(*(image->klass->vtable)._32_get_material.methodPtr)(image);
      if (pIVar16 == (Il2CppObject *)0x0) goto label_03b66ffe;
      pIVar16[2].klass = pIVar31;
      il2cpp_runtime_helper_022b4080(pIVar16 + 2,pIVar31);
      UnityEngine_UI_Selectable__set_targetGraphic
                (pUVar28,(UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
      if (*ppvStack_168 == (UnityEngine_GameObject_o *)0x0) goto label_03b67003;
      __this_06 = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)
                  UnityEngine_GameObject__AddComponent_object_(*ppvStack_168,MethodInfo_GisketchButtonRelief_AddComponent_GisketchButtonRelief);
      if (__this_06 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) goto label_03b67008;
      Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
                (__this_06,image,pUStack_158,(float)(pGVar29->fields).wornStainScale.fields.hasValue,
                 (UnityEngine_UI_RectMask2D_o *)0x0,(System_Nullable_float__o)(pGVar29->fields).relief.fields,
                 (MethodInfo *)0x0);
      pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
      pGVar1 = pGStack_140;
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildThumbnail
                ((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)pSVar17,pUVar25,
                 (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)*pGStack_140,method_00);
      pUVar25 = UnityEngine_GameObject__get_transform(pUVar24,(MethodInfo *)0x0);
      in_stack_fffffffffffffe68 = pGVar1->Key;
      in_stack_fffffffffffffe70 = pGVar1->Label;
      in_stack_fffffffffffffe78 = pGVar1->Sprite;
      in_stack_fffffffffffffe80 = pGVar1->Keywords;
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildLabel
                ((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)pSVar17,pUVar25,
                 (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)*pGVar1,method_01);
      __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar28->fields).m_CanvasGroupCache;
      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
        __this_02.fields._detail = in_stack_fffffffffffffe70;
        __this_02.fields._area = in_stack_fffffffffffffe68;
        __this_02.fields._startMs = (int64_t)in_stack_fffffffffffffe78;
        __this_02.fields._24_8_ = in_stack_fffffffffffffe80;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)auStack_138);
        return extraout_RAX;
      }
      goto label_03b6700d;
    }
  }
  uVar32 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar32);
label_03b67021:
  uVar32 = il2cpp_runtime_helper_0231b270();
  auVar45 = il2cpp_runtime_helper_022b2b10(uVar32);
  if (auVar45._8_4_ == 1) {
    plVar33 = (long *)__cxa_begin_catch(auVar45._0_8_);
    lVar23 = *plVar33;
    __cxa_end_catch();
    __this_03.fields._detail = in_stack_fffffffffffffe70;
    __this_03.fields._area = in_stack_fffffffffffffe68;
    __this_03.fields._startMs = (int64_t)in_stack_fffffffffffffe78;
    __this_03.fields._24_8_ = in_stack_fffffffffffffe80;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_03,(MethodInfo *)auStack_138);
    if (lVar23 == 0) {
      return extraout_RAX_00;
    }
    il2cpp_runtime_helper_022fefe0(lVar23);
  }
  __this_04.fields._detail = in_stack_fffffffffffffe70;
  __this_04.fields._area = in_stack_fffffffffffffe68;
  __this_04.fields._startMs = (int64_t)in_stack_fffffffffffffe78;
  __this_04.fields._24_8_ = in_stack_fffffffffffffe80;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_04,(MethodInfo *)auStack_138);
  _Unwind_Resume(auVar45._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$UpdateHeight
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__UpdateHeight (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, int32_t count, const MethodInfo* method);
// 0x3b66500

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__UpdateHeight
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,int32_t count,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar6;
  Il2CppMethodPointer vtableDispatch;
  void *pvVar7;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar8;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar9;
  System_Nullable_float__o stainScaleOverride;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_04;
  System_RuntimeTypeHandle_o handle;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *pGVar10;
  Il2CppClass *pIVar11;
  Il2CppObject *pIVar12;
  System_String_array *values;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  System_String_o *str2;
  System_Type_array *pSVar15;
  System_Type_o *pSVar16;
  long lVar17;
  UnityEngine_GameObject_o *pUVar18;
  UnityEngine_Transform_o *pUVar19;
  UnityEngine_Transform_o *pUVar20;
  UnityEngine_RectTransform_o *pUVar21;
  UnityEngine_UI_Selectable_o *pUVar22;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar23;
  UnityEngine_UI_Image_o *image;
  UnityEngine_Material_o *pUVar24;
  Il2CppClass *pIVar25;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_05;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar26;
  long *plVar27;
  undefined8 extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 unaff_RBX;
  int iVar28;
  undefined8 unaff_RBP;
  void **ppvVar29;
  int32_t iVar30;
  MethodInfo_24E7B40 *pMVar31;
  MethodInfo *pMVar32;
  MethodInfo_24E7B40 **__this_06;
  undefined8 unaff_R14;
  float fVar33;
  UnityEngine_Color_o UVar34;
  undefined1 auVar35 [12];
  System_String_o *in_stack_ffffffffffffff00;
  System_String_o *in_stack_ffffffffffffff08;
  System_String_o *in_stack_ffffffffffffff10;
  System_String_o *in_stack_ffffffffffffff18;
  int32_t iStack_d4;
  void **ppvStack_d0;
  Il2CppObject *pIStack_c8;
  UnityEngine_RectTransform_o *pUStack_c0;
  Il2CppClass *pIStack_b8;
  UnityEngine_UI_Selectable_o *pUStack_b0;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *pGStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  _union_13 _Stack_90;
  _union_14 _Stack_88;
  undefined1 auStack_78 [32];
  Il2CppClass *pIStack_58;
  float local_20;
  float local_1c;
  
  pIVar11 = (Il2CppClass *)(ulong)(uint)count;
  __this_06 = (MethodInfo_24E7B40 **)__this;
  iVar30 = count;
  if (g_data_057a9db1 == '\0') {
    __this_06 = &MethodInfo_LayoutElement_GetComponent_LayoutElement;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9db1 = '\x01';
  }
  pGVar6 = (__this->fields)._definition;
  if (pGVar6 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    fVar33 = (float)(pGVar6->fields).Columns;
    if (g_data_057a690d == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
      g_data_057a690d = '\x01';
      local_20 = (float)count;
      local_1c = fVar33;
    }
    fVar33 = (float)count / fVar33;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      local_20 = fVar33;
    }
    fVar33 = ceilf(fVar33);
    iVar28 = 1;
    if (0 < (int)fVar33) {
      iVar28 = (int)fVar33;
    }
    pMVar31 = MethodInfo_LayoutElement_GetComponent_LayoutElement;
    __this_06 = (MethodInfo_24E7B40 **)__this;
    pIVar11 = (Il2CppClass *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    iVar30 = (int32_t)pMVar31;
    pGVar6 = (__this->fields)._definition;
    if ((pGVar6 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) &&
       (pIVar11 != (Il2CppClass *)0x0)) {
      iVar4 = (pGVar6->fields).Columns;
      pIVar25 = (pIVar11->_1).image;
      iVar30 = (int32_t)pIVar25->vtable[0x24].method;
      __this_06 = (MethodInfo_24E7B40 **)pIVar11;
      (*pIVar25->vtable[0x24].methodPtr)
                ((float)(iVar4 + -1) * 10.0 + (float)iVar4 * (pGVar6->fields).ItemWidth);
      pGVar6 = (__this->fields)._definition;
      if (pGVar6 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
        pIVar25 = (pIVar11->_1).image;
        vtableDispatch = pIVar25->vtable[0x26].methodPtr;
        (*vtableDispatch)
                  ((float)(iVar28 + -1) * 10.0 + (float)iVar28 * (pGVar6->fields).ItemHeight,pIVar11,
                   pIVar25->vtable[0x26].method,extraout_RDX,vtableDispatch);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  iStack_d4 = iVar30;
  pIStack_58 = pIVar11;
  if (g_data_057a9db2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_AddComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchButtonRelief_AddComponent_GisketchButtonRelief);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDisabledSelectableOpacity_AddComponent_GisketchD);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSurfaceMaterialOwner_AddComponent_GisketchSurfac);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCard_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"-item-");
    il2cpp_runtime_helper_023445d0(&"] ");
    il2cpp_runtime_helper_023445d0(&"gridPickerItem");
    il2cpp_runtime_helper_023445d0(&"[");
    il2cpp_runtime_helper_023445d0(&"shadow");
    il2cpp_runtime_helper_023445d0(&"GridPicker.CreateCard");
    il2cpp_runtime_helper_023445d0(&"AoTTG Button Face");
    g_data_057a9db2 = '\x01';
  }
  _Stack_90.rgctx_data = (Il2CppRGCTXData *)0x0;
  _Stack_88.genericMethod = (char *)0x0;
  uStack_a0 = (Il2CppMethodPointer)0x0;
  uStack_98 = (Il2CppMethodPointer)0x0;
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  System_Object___ctor(pIVar12,(MethodInfo *)0x0);
  if (pIVar12 == (Il2CppObject *)0x0) {
label_03b66f77:
    il2cpp_runtime_helper_022b2c90();
label_03b66f7c:
    il2cpp_runtime_helper_022b2ca0();
label_03b66f81:
    il2cpp_runtime_helper_022b2c90();
label_03b66f86:
    il2cpp_runtime_helper_022b2c90();
label_03b66f8b:
    il2cpp_runtime_helper_022b2ca0();
label_03b66f90:
    il2cpp_runtime_helper_022b2c90();
label_03b66f95:
    il2cpp_runtime_helper_022b2c90();
label_03b66f9a:
    il2cpp_runtime_helper_022b2c90();
label_03b66f9f:
    il2cpp_runtime_helper_022b2c90();
label_03b66fa4:
    il2cpp_runtime_helper_022b2c90();
label_03b66fa9:
    il2cpp_runtime_helper_022b2c90();
label_03b66fae:
    il2cpp_runtime_helper_022b2c90();
label_03b66fb3:
    il2cpp_runtime_helper_022b2c90();
label_03b66fb8:
    fVar33 = (float)il2cpp_runtime_helper_022b2c90();
label_03b66fbd:
    il2cpp_runtime_helper_022b2c90(fVar33);
label_03b66fc2:
    il2cpp_runtime_helper_022b2c90();
label_03b66fc7:
    il2cpp_runtime_helper_022b2c90();
label_03b66fcc:
    il2cpp_runtime_helper_022b2c90();
label_03b66fd1:
    il2cpp_runtime_helper_022b2c90();
label_03b66fd6:
    il2cpp_runtime_helper_022b2ca0();
label_03b66fdb:
    il2cpp_runtime_helper_022b2c90();
label_03b66fe0:
    il2cpp_runtime_helper_022b2c90();
label_03b66fe5:
    il2cpp_runtime_helper_022b2c90();
label_03b66fea:
    il2cpp_runtime_helper_022b2c90();
label_03b66fef:
    il2cpp_runtime_helper_022b2c90();
label_03b66ff4:
    fVar33 = (float)il2cpp_runtime_helper_022b2c90();
label_03b66ff9:
    il2cpp_runtime_helper_022b2c90(fVar33);
label_03b66ffe:
    il2cpp_runtime_helper_022b2c90();
label_03b67003:
    il2cpp_runtime_helper_022b2c90();
label_03b67008:
    il2cpp_runtime_helper_022b2c90();
label_03b6700d:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar12[1].klass = (Il2CppClass *)__this_06;
    il2cpp_runtime_helper_022b4080(pIVar12 + 1,__this_06);
    ppvVar29 = &pIVar12[1].monitor;
    *(int *)&pIVar12[2].monitor = (int)unaff_R14;
    *(int *)((long)&pIVar12[2].monitor + 4) = (int)((ulong)unaff_R14 >> 0x20);
    *(int *)&pIVar12[3].klass = (int)unaff_RBP;
    *(int *)((long)&pIVar12[3].klass + 4) = (int)((ulong)unaff_RBP >> 0x20);
    *(float *)&pIVar12[1].monitor = local_20;
    *(float *)((long)&pIVar12[1].monitor + 4) = local_1c;
    *(int *)&pIVar12[2].klass = (int)unaff_RBX;
    *(int *)((long)&pIVar12[2].klass + 4) = (int)((ulong)unaff_RBX >> 0x20);
    il2cpp_runtime_helper_022b4080(ppvVar29,0);
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    pvVar7 = (((Il2CppClass *)__this_06)->_1).byval_arg.data;
    if (pvVar7 == (void *)0x0) {
      puVar13 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      puVar13 = (undefined8 *)((long)pvVar7 + 0x10);
    }
    if (values == (System_String_array *)0x0) goto label_03b66f77;
    if ((int)values->max_length == 0) goto label_03b66f7c;
    values->m_Items[0] = (System_String_o *)*puVar13;
    il2cpp_runtime_helper_022b4080(values->m_Items);
    if ((uint)values->max_length < 2) goto label_03b66f7c;
    values->m_Items[1] = "[";
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    pSVar14 = System_Int32__ToString((int32_t)&iStack_d4,(MethodInfo *)0x0);
    if ((uint)values->max_length < 3) goto label_03b66f7c;
    values->m_Items[2] = pSVar14;
    il2cpp_runtime_helper_022b4080(values->m_Items + 2);
    if ((uint)values->max_length < 4) goto label_03b66f7c;
    values->m_Items[3] = "] ";
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    if ((uint)values->max_length < 5) goto label_03b66f7c;
    values->m_Items[4] = *ppvVar29;
    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
    pSVar14 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar32 = "GridPicker.CreateCard";
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)auStack_78,
               (System_String_o *)"GridPicker.CreateCard",pSVar14,(MethodInfo *)0x0);
    _Stack_90 = (_union_13)auStack_78._16_8_;
    _Stack_88 = (_union_14)auStack_78._24_8_;
    uStack_a0 = (Il2CppMethodPointer)CONCAT44(auStack_78._4_4_,auStack_78._0_4_);
    uStack_98 = (Il2CppMethodPointer)CONCAT44(auStack_78._12_4_,auStack_78._8_4_);
    pvVar7 = (((Il2CppClass *)__this_06)->_1).byval_arg.data;
    if (pvVar7 == (void *)0x0) goto label_03b66f81;
    pSVar14 = *(System_String_o **)((long)pvVar7 + 0x10);
    str2 = Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SafeId(*ppvVar29,pMVar32);
    pSVar14 = System_String__Concat_3af7150(pSVar14,"-item-",str2,(MethodInfo *)0x0);
    pIStack_c8 = pIVar12;
    pGStack_a8 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *)ppvVar29;
    pSVar15 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar16 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (pSVar15 == (System_Type_array *)0x0) goto label_03b66f86;
    if ((pSVar16 == (System_Type_o *)0x0) || (lVar17 = il2cpp_runtime_helper_023051f0(pSVar16), lVar17 != 0)) {
      if ((int)pSVar15->max_length == 0) goto label_03b66f8b;
      pSVar15->m_Items[0] = pSVar16;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items,pSVar16);
      pUVar18 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar18,pSVar14,pSVar15,(MethodInfo *)0x0);
      ppvVar29 = &pIStack_c8[3].monitor;
      pIStack_c8[3].monitor = pUVar18;
      il2cpp_runtime_helper_022b4080(ppvVar29);
      if (*ppvVar29 == (UnityEngine_GameObject_o *)0x0) goto label_03b66f90;
      pUVar19 = UnityEngine_GameObject__get_transform(*ppvVar29,(MethodInfo *)0x0);
      pUVar20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_03b66f95;
      UnityEngine_Transform__SetParent_4e09e30(pUVar19,pUVar20,0,(MethodInfo *)0x0);
      lVar17 = MethodInfo_Void_Add;
      __this_00 = (((Il2CppClass *)__this_06)->_1).this_arg.data;
      if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_03b66f9a;
      pIVar12 = *ppvVar29;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar8 = (__this_00->fields)._items;
      if (pSVar8 == (System_Object_array *)0x0) goto label_03b66f9f;
      uVar5 = (__this_00->fields)._size;
      if (uVar5 < (uint)pSVar8->max_length) {
        (__this_00->fields)._size = uVar5 + 1;
        pSVar8->m_Items[(int)uVar5] = pIVar12;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items + (int)uVar5);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this_00,pIVar12,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
      }
      if (*ppvVar29 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fa4;
      pUVar21 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(*ppvVar29,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      pvVar7 = (((Il2CppClass *)__this_06)->_1).byval_arg.data;
      if (pvVar7 == (void *)0x0) goto label_03b66fa9;
      if (pUVar21 == (UnityEngine_RectTransform_o *)0x0) goto label_03b66fae;
      UnityEngine_RectTransform__set_sizeDelta
                (pUVar21,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)pvVar7 + 0x24),
                 (MethodInfo *)0x0);
      if (*ppvVar29 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fb3;
      pIVar12 = UnityEngine_GameObject__AddComponent_object_(*ppvVar29,MethodInfo_Image_AddComponent_Image);
      pGVar9 = *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)&(((Il2CppClass *)__this_06)->_1).byval_arg.bits
      ;
      if (pGVar9 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b66fb8;
      UVar34 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (pGVar9,"shadow",(UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                          (MethodInfo *)0x0);
      fVar33 = UVar34.fields.r;
      if (pIVar12 == (Il2CppObject *)0x0) goto label_03b66fbd;
      (*pIVar12->klass->vtable[0x17].methodPtr)(fVar33,UVar34.fields.b,pIVar12);
      if (*ppvVar29 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fc2;
      pUVar22 = (UnityEngine_UI_Selectable_o *)
                UnityEngine_GameObject__AddComponent_object_(*ppvVar29,MethodInfo_Button_AddComponent_Button);
      if (pUVar22 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b66fc7;
      pUStack_b0 = pUVar22;
      UnityEngine_UI_Selectable__set_transition(pUVar22,0,(MethodInfo *)0x0);
      if (*ppvVar29 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fcc;
      UnityEngine_GameObject__AddComponent_object_(*ppvVar29,MethodInfo_GisketchDisabledSelectableOpacity_AddComponent_GisketchD);
      ppvStack_d0 = ppvVar29;
      pSVar15 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
      pSVar16 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
      if (pSVar15 == (System_Type_array *)0x0) goto label_03b66fd1;
      if ((pSVar16 != (System_Type_o *)0x0) && (lVar17 = il2cpp_runtime_helper_023051f0(pSVar16), lVar17 == 0))
      goto label_03b67021;
      if ((int)pSVar15->max_length == 0) goto label_03b66fd6;
      pSVar15->m_Items[0] = pSVar16;
      il2cpp_runtime_helper_022b4080(pSVar15->m_Items,pSVar16);
      pUVar18 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      ppvVar29 = ppvStack_d0;
      UnityEngine_GameObject___ctor_4dfc440(pUVar18,"AoTTG Button Face",pSVar15,(MethodInfo *)0x0);
      if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fdb;
      pUVar19 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
      if (*ppvVar29 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fe0;
      pUVar20 = UnityEngine_GameObject__get_transform(*ppvVar29,(MethodInfo *)0x0);
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_03b66fe5;
      UnityEngine_Transform__SetParent_4e09e30(pUVar19,pUVar20,0,(MethodInfo *)0x0);
      pMVar32 = MethodInfo_RectTransform_GetComponent_RectTransform;
      pUVar21 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar18,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Stretch(pUVar21,pMVar32);
      pGVar9 = *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)&(((Il2CppClass *)__this_06)->_1).byval_arg.bits
      ;
      if (pGVar9 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b66fea;
      pGVar23 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar9,"gridPickerItem",(MethodInfo *)0x0);
      image = (UnityEngine_UI_Image_o *)UnityEngine_GameObject__AddComponent_object_(pUVar18,MethodInfo_Image_AddComponent_Image);
      if (pGVar23 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_03b66fef;
      pGVar9 = *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)&(((Il2CppClass *)__this_06)->_1).byval_arg.bits
      ;
      if (pGVar9 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b66ff4;
      UVar34.fields.b = 1.0;
      UVar34.fields.a = 1.0;
      UVar34.fields.r = 1.0;
      UVar34.fields.g = 1.0;
      UVar34 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (pGVar9,(pGVar23->fields).background,UVar34,(MethodInfo *)0x0);
      fVar33 = UVar34.fields.r;
      if (image == (UnityEngine_UI_Image_o *)0x0) goto label_03b66ff9;
      pUStack_c0 = pUVar21;
      pIStack_b8 = (Il2CppClass *)__this_06;
      (*(image->klass->vtable)._23_set_color.methodPtr)
                (fVar33,UVar34.fields.b,image,(image->klass->vtable)._23_set_color.method);
      fVar33 = (float)(pGVar23->fields).wornStainScale.fields.hasValue;
      bVar2 = *(byte *)((long)&(pGVar23->fields).wornStainScale.fields.value + 1);
      uVar3 = *(ushort *)((long)&(pGVar23->fields).textured.fields.hasValue + 2);
      stainScaleOverride.fields = *(System_Nullable_float__Fields *)&(pGVar23->fields).textured.fields.value;
      if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar24 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
                          (fVar33,(uint)bVar2,(uint)(0xff < uVar3 || (char)uVar3 == '\0'),stainScaleOverride,0
                           ,0,(MethodInfo *)0x0);
      (*(image->klass->vtable)._33_set_material.methodPtr)
                (image,pUVar24,(image->klass->vtable)._33_set_material.method);
      pIVar12 = UnityEngine_GameObject__AddComponent_object_(pUVar18,MethodInfo_GisketchSurfaceMaterialOwner_AddComponent_GisketchSurfac);
      pUVar22 = pUStack_b0;
      pIVar11 = pIStack_b8;
      pIVar25 = (Il2CppClass *)(*(image->klass->vtable)._32_get_material.methodPtr)(image);
      if (pIVar12 == (Il2CppObject *)0x0) goto label_03b66ffe;
      pIVar12[2].klass = pIVar25;
      il2cpp_runtime_helper_022b4080(pIVar12 + 2,pIVar25);
      UnityEngine_UI_Selectable__set_targetGraphic
                (pUVar22,(UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
      if (*ppvStack_d0 == (UnityEngine_GameObject_o *)0x0) goto label_03b67003;
      __this_05 = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)
                  UnityEngine_GameObject__AddComponent_object_(*ppvStack_d0,MethodInfo_GisketchButtonRelief_AddComponent_GisketchButtonRelief);
      if (__this_05 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) goto label_03b67008;
      Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
                (__this_05,image,pUStack_c0,(float)(pGVar23->fields).wornStainScale.fields.hasValue,
                 (UnityEngine_UI_RectMask2D_o *)0x0,(System_Nullable_float__o)(pGVar23->fields).relief.fields,
                 (MethodInfo *)0x0);
      pUVar19 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
      pGVar10 = pGStack_a8;
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildThumbnail
                ((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)pIVar11,pUVar19,
                 (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)*pGStack_a8,method_00);
      pUVar19 = UnityEngine_GameObject__get_transform(pUVar18,(MethodInfo *)0x0);
      in_stack_ffffffffffffff00 = pGVar10->Key;
      in_stack_ffffffffffffff08 = pGVar10->Label;
      in_stack_ffffffffffffff10 = pGVar10->Sprite;
      in_stack_ffffffffffffff18 = pGVar10->Keywords;
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildLabel
                ((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)pIVar11,pUVar19,
                 (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)*pGVar10,method_01);
      __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar22->fields).m_CanvasGroupCache;
      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
        __this_02.fields._detail = in_stack_ffffffffffffff08;
        __this_02.fields._area = in_stack_ffffffffffffff00;
        __this_02.fields._startMs = (int64_t)in_stack_ffffffffffffff10;
        __this_02.fields._24_8_ = in_stack_ffffffffffffff18;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)&uStack_a0);
        return;
      }
      goto label_03b6700d;
    }
  }
  uVar26 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar26);
label_03b67021:
  uVar26 = il2cpp_runtime_helper_0231b270();
  auVar35 = il2cpp_runtime_helper_022b2b10(uVar26);
  if (auVar35._8_4_ == 1) {
    plVar27 = (long *)__cxa_begin_catch(auVar35._0_8_);
    lVar17 = *plVar27;
    __cxa_end_catch();
    __this_03.fields._detail = in_stack_ffffffffffffff08;
    __this_03.fields._area = in_stack_ffffffffffffff00;
    __this_03.fields._startMs = (int64_t)in_stack_ffffffffffffff10;
    __this_03.fields._24_8_ = in_stack_ffffffffffffff18;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_03,(MethodInfo *)&uStack_a0);
    if (lVar17 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar17);
  }
  __this_04.fields._detail = in_stack_ffffffffffffff08;
  __this_04.fields._area = in_stack_ffffffffffffff00;
  __this_04.fields._startMs = (int64_t)in_stack_ffffffffffffff10;
  __this_04.fields._24_8_ = in_stack_ffffffffffffff18;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_04,(MethodInfo *)&uStack_a0);
  _Unwind_Resume(auVar35._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$CreateCard
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__CreateCard (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, int32_t index, const MethodInfo* method);
// 0x3b66660

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__CreateCard
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,int32_t index,MethodInfo *method)

{
  int32_t *piVar1;
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
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_03;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_04;
  System_RuntimeTypeHandle_o handle;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this_05;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *pGVar8;
  Il2CppObject *pIVar9;
  System_String_array *values;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar10;
  System_String_o *pSVar11;
  System_String_o *str2;
  System_Type_array *pSVar12;
  System_Type_o *pSVar13;
  long lVar14;
  UnityEngine_GameObject_o *pUVar15;
  UnityEngine_Transform_o *pUVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_RectTransform_o *pUVar18;
  UnityEngine_UI_Selectable_o *pUVar19;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar20;
  UnityEngine_UI_Image_o *image;
  UnityEngine_Material_o *pUVar21;
  Il2CppClass *pIVar22;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_06;
  UnityEngine_Events_UnityAction_o *call;
  undefined8 uVar23;
  long *plVar24;
  MethodInfo *method_00;
  MethodInfo *method_01;
  void **ppvVar25;
  MethodInfo *pMVar26;
  float fVar27;
  UnityEngine_Color_o UVar28;
  undefined1 auVar29 [12];
  System_String_o *in_stack_ffffffffffffff28;
  System_String_o *in_stack_ffffffffffffff30;
  System_String_o *in_stack_ffffffffffffff38;
  System_String_o *in_stack_ffffffffffffff40;
  int32_t local_ac;
  void **local_a8;
  Il2CppObject *local_a0;
  UnityEngine_RectTransform_o *local_98;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *local_90;
  UnityEngine_UI_Selectable_o *local_88;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  _union_13 local_68;
  _union_14 _Stack_60;
  undefined1 local_50 [32];
  
  local_ac = index;
  if (g_data_057a9db2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_AddComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchButtonRelief_AddComponent_GisketchButtonRelief);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDisabledSelectableOpacity_AddComponent_GisketchD);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchSurfaceMaterialOwner_AddComponent_GisketchSurfac);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSurfaceMaterial);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetValueOrDefault);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCard_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"-item-");
    il2cpp_runtime_helper_023445d0(&"] ");
    il2cpp_runtime_helper_023445d0(&"gridPickerItem");
    il2cpp_runtime_helper_023445d0(&"[");
    il2cpp_runtime_helper_023445d0(&"shadow");
    il2cpp_runtime_helper_023445d0(&"GridPicker.CreateCard");
    il2cpp_runtime_helper_023445d0(&"AoTTG Button Face");
    g_data_057a9db2 = '\x01';
  }
  local_68.rgctx_data = (Il2CppRGCTXData *)0x0;
  _Stack_60.genericMethod = (char *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  uStack_70 = (Il2CppMethodPointer)0x0;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
  System_Object___ctor(pIVar9,(MethodInfo *)0x0);
  if (pIVar9 == (Il2CppObject *)0x0) {
label_03b66f77:
    il2cpp_runtime_helper_022b2c90();
label_03b66f7c:
    il2cpp_runtime_helper_022b2ca0();
label_03b66f81:
    il2cpp_runtime_helper_022b2c90();
label_03b66f86:
    il2cpp_runtime_helper_022b2c90();
label_03b66f8b:
    il2cpp_runtime_helper_022b2ca0();
label_03b66f90:
    il2cpp_runtime_helper_022b2c90();
label_03b66f95:
    il2cpp_runtime_helper_022b2c90();
label_03b66f9a:
    il2cpp_runtime_helper_022b2c90();
label_03b66f9f:
    il2cpp_runtime_helper_022b2c90();
label_03b66fa4:
    il2cpp_runtime_helper_022b2c90();
label_03b66fa9:
    il2cpp_runtime_helper_022b2c90();
label_03b66fae:
    il2cpp_runtime_helper_022b2c90();
label_03b66fb3:
    il2cpp_runtime_helper_022b2c90();
label_03b66fb8:
    fVar27 = (float)il2cpp_runtime_helper_022b2c90();
label_03b66fbd:
    il2cpp_runtime_helper_022b2c90(fVar27);
label_03b66fc2:
    il2cpp_runtime_helper_022b2c90();
label_03b66fc7:
    il2cpp_runtime_helper_022b2c90();
label_03b66fcc:
    il2cpp_runtime_helper_022b2c90();
label_03b66fd1:
    il2cpp_runtime_helper_022b2c90();
label_03b66fd6:
    il2cpp_runtime_helper_022b2ca0();
label_03b66fdb:
    il2cpp_runtime_helper_022b2c90();
label_03b66fe0:
    il2cpp_runtime_helper_022b2c90();
label_03b66fe5:
    il2cpp_runtime_helper_022b2c90();
label_03b66fea:
    il2cpp_runtime_helper_022b2c90();
label_03b66fef:
    il2cpp_runtime_helper_022b2c90();
label_03b66ff4:
    fVar27 = (float)il2cpp_runtime_helper_022b2c90();
label_03b66ff9:
    il2cpp_runtime_helper_022b2c90(fVar27);
label_03b66ffe:
    il2cpp_runtime_helper_022b2c90();
label_03b67003:
    il2cpp_runtime_helper_022b2c90();
label_03b67008:
    il2cpp_runtime_helper_022b2c90();
label_03b6700d:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pIVar9[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(pIVar9 + 1,__this);
    ppvVar25 = &pIVar9[1].monitor;
    *(undefined4 *)&pIVar9[2].monitor = item.fields.Sprite._0_4_;
    *(undefined4 *)((long)&pIVar9[2].monitor + 4) = item.fields.Sprite._4_4_;
    *(undefined4 *)&pIVar9[3].klass = item.fields.Keywords._0_4_;
    *(undefined4 *)((long)&pIVar9[3].klass + 4) = item.fields.Keywords._4_4_;
    *(undefined4 *)&pIVar9[1].monitor = item.fields.Key._0_4_;
    *(undefined4 *)((long)&pIVar9[1].monitor + 4) = item.fields.Key._4_4_;
    *(undefined4 *)&pIVar9[2].klass = item.fields.Label._0_4_;
    *(undefined4 *)((long)&pIVar9[2].klass + 4) = item.fields.Label._4_4_;
    il2cpp_runtime_helper_022b4080(ppvVar25,0);
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    pGVar5 = (__this->fields)._definition;
    if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      pGVar10 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pGVar10 = &pGVar5->fields;
    }
    if (values == (System_String_array *)0x0) goto label_03b66f77;
    if ((int)values->max_length == 0) goto label_03b66f7c;
    values->m_Items[0] = pGVar10->Id;
    il2cpp_runtime_helper_022b4080(values->m_Items);
    if ((uint)values->max_length < 2) goto label_03b66f7c;
    values->m_Items[1] = "[";
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    pSVar11 = System_Int32__ToString((int32_t)&local_ac,(MethodInfo *)0x0);
    if ((uint)values->max_length < 3) goto label_03b66f7c;
    values->m_Items[2] = pSVar11;
    il2cpp_runtime_helper_022b4080(values->m_Items + 2);
    if ((uint)values->max_length < 4) goto label_03b66f7c;
    values->m_Items[3] = "] ";
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    if ((uint)values->max_length < 5) goto label_03b66f7c;
    values->m_Items[4] = *ppvVar25;
    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
    pSVar11 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar26 = "GridPicker.CreateCard";
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_50,
               (System_String_o *)"GridPicker.CreateCard",pSVar11,(MethodInfo *)0x0);
    local_68 = (_union_13)local_50._16_8_;
    _Stack_60 = (_union_14)local_50._24_8_;
    local_78 = (Il2CppMethodPointer)CONCAT44(local_50._4_4_,local_50._0_4_);
    uStack_70 = (Il2CppMethodPointer)CONCAT44(local_50._12_4_,local_50._8_4_);
    pGVar5 = (__this->fields)._definition;
    if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) goto label_03b66f81;
    pSVar11 = (pGVar5->fields).Id;
    str2 = Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SafeId(*ppvVar25,pMVar26);
    pSVar11 = System_String__Concat_3af7150(pSVar11,"-item-",str2,(MethodInfo *)0x0);
    local_a0 = pIVar9;
    local_80 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_Fields *)ppvVar25;
    pSVar12 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (pSVar12 == (System_Type_array *)0x0) goto label_03b66f86;
    if ((pSVar13 == (System_Type_o *)0x0) || (lVar14 = il2cpp_runtime_helper_023051f0(pSVar13), lVar14 != 0)) {
      if ((int)pSVar12->max_length == 0) goto label_03b66f8b;
      pSVar12->m_Items[0] = pSVar13;
      il2cpp_runtime_helper_022b4080(pSVar12->m_Items,pSVar13);
      pUVar15 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar15,pSVar11,pSVar12,(MethodInfo *)0x0);
      ppvVar25 = &local_a0[3].monitor;
      local_a0[3].monitor = pUVar15;
      il2cpp_runtime_helper_022b4080(ppvVar25);
      if (*ppvVar25 == (UnityEngine_GameObject_o *)0x0) goto label_03b66f90;
      pUVar16 = UnityEngine_GameObject__get_transform(*ppvVar25,(MethodInfo *)0x0);
      pUVar17 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_03b66f95;
      UnityEngine_Transform__SetParent_4e09e30(pUVar16,pUVar17,0,(MethodInfo *)0x0);
      lVar14 = MethodInfo_Void_Add;
      __this_00 = (__this->fields)._cards;
      if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_03b66f9a;
      pUVar15 = *ppvVar25;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar6 = (__this_00->fields)._items;
      if (pUVar6 == (UnityEngine_GameObject_array *)0x0) goto label_03b66f9f;
      uVar4 = (__this_00->fields)._size;
      if (uVar4 < (uint)pUVar6->max_length) {
        (__this_00->fields)._size = uVar4 + 1;
        pUVar6->m_Items[(int)uVar4] = pUVar15;
        il2cpp_runtime_helper_022b4080(pUVar6->m_Items + (int)uVar4);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pUVar15,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
      if (*ppvVar25 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fa4;
      pUVar18 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(*ppvVar25,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      pGVar5 = (__this->fields)._definition;
      if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) goto label_03b66fa9;
      if (pUVar18 == (UnityEngine_RectTransform_o *)0x0) goto label_03b66fae;
      value.fields.x = (pGVar5->fields).ItemWidth;
      value.fields.y = (pGVar5->fields).ItemHeight;
      UnityEngine_RectTransform__set_sizeDelta(pUVar18,value,(MethodInfo *)0x0);
      if (*ppvVar25 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fb3;
      pIVar9 = UnityEngine_GameObject__AddComponent_object_(*ppvVar25,MethodInfo_Image_AddComponent_Image);
      pGVar7 = (__this->fields)._theme;
      if (pGVar7 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b66fb8;
      UVar28 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (pGVar7,"shadow",(UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),
                          (MethodInfo *)0x0);
      fVar27 = UVar28.fields.r;
      if (pIVar9 == (Il2CppObject *)0x0) goto label_03b66fbd;
      (*pIVar9->klass->vtable[0x17].methodPtr)(fVar27,UVar28.fields.b,pIVar9);
      if (*ppvVar25 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fc2;
      pUVar19 = (UnityEngine_UI_Selectable_o *)
                UnityEngine_GameObject__AddComponent_object_(*ppvVar25,MethodInfo_Button_AddComponent_Button);
      if (pUVar19 == (UnityEngine_UI_Selectable_o *)0x0) goto label_03b66fc7;
      local_88 = pUVar19;
      UnityEngine_UI_Selectable__set_transition(pUVar19,0,(MethodInfo *)0x0);
      if (*ppvVar25 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fcc;
      UnityEngine_GameObject__AddComponent_object_(*ppvVar25,MethodInfo_GisketchDisabledSelectableOpacity_AddComponent_GisketchD);
      local_a8 = ppvVar25;
      pSVar12 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
      pSVar13 = System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
      if (pSVar12 == (System_Type_array *)0x0) goto label_03b66fd1;
      if ((pSVar13 != (System_Type_o *)0x0) && (lVar14 = il2cpp_runtime_helper_023051f0(pSVar13), lVar14 == 0))
      goto label_03b67021;
      if ((int)pSVar12->max_length == 0) goto label_03b66fd6;
      pSVar12->m_Items[0] = pSVar13;
      il2cpp_runtime_helper_022b4080(pSVar12->m_Items,pSVar13);
      pUVar15 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      ppvVar25 = local_a8;
      UnityEngine_GameObject___ctor_4dfc440(pUVar15,"AoTTG Button Face",pSVar12,(MethodInfo *)0x0);
      if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fdb;
      pUVar16 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
      if (*ppvVar25 == (UnityEngine_GameObject_o *)0x0) goto label_03b66fe0;
      pUVar17 = UnityEngine_GameObject__get_transform(*ppvVar25,(MethodInfo *)0x0);
      if (pUVar16 == (UnityEngine_Transform_o *)0x0) goto label_03b66fe5;
      UnityEngine_Transform__SetParent_4e09e30(pUVar16,pUVar17,0,(MethodInfo *)0x0);
      pMVar26 = MethodInfo_RectTransform_GetComponent_RectTransform;
      pUVar18 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(pUVar15,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Stretch(pUVar18,pMVar26);
      pGVar7 = (__this->fields)._theme;
      if (pGVar7 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b66fea;
      pGVar20 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar7,"gridPickerItem",(MethodInfo *)0x0);
      image = (UnityEngine_UI_Image_o *)UnityEngine_GameObject__AddComponent_object_(pUVar15,MethodInfo_Image_AddComponent_Image);
      if (pGVar20 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_03b66fef;
      pGVar7 = (__this->fields)._theme;
      if (pGVar7 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_03b66ff4;
      UVar28.fields.b = 1.0;
      UVar28.fields.a = 1.0;
      UVar28.fields.r = 1.0;
      UVar28.fields.g = 1.0;
      UVar28 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (pGVar7,(pGVar20->fields).background,UVar28,(MethodInfo *)0x0);
      fVar27 = UVar28.fields.r;
      if (image == (UnityEngine_UI_Image_o *)0x0) goto label_03b66ff9;
      local_98 = pUVar18;
      local_90 = __this;
      (*(image->klass->vtable)._23_set_color.methodPtr)
                (fVar27,UVar28.fields.b,image,(image->klass->vtable)._23_set_color.method);
      fVar27 = (float)(pGVar20->fields).wornStainScale.fields.hasValue;
      bVar2 = *(byte *)((long)&(pGVar20->fields).wornStainScale.fields.value + 1);
      uVar3 = *(ushort *)((long)&(pGVar20->fields).textured.fields.hasValue + 2);
      stainScaleOverride.fields = *(System_Nullable_float__Fields *)&(pGVar20->fields).textured.fields.value;
      if (*(int *)(TypeInfo_GisketchSurfaceMaterial + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar21 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
                          (fVar27,(uint)bVar2,(uint)(0xff < uVar3 || (char)uVar3 == '\0'),stainScaleOverride,0
                           ,0,(MethodInfo *)0x0);
      (*(image->klass->vtable)._33_set_material.methodPtr)
                (image,pUVar21,(image->klass->vtable)._33_set_material.method);
      pIVar9 = UnityEngine_GameObject__AddComponent_object_(pUVar15,MethodInfo_GisketchSurfaceMaterialOwner_AddComponent_GisketchSurfac);
      pUVar19 = local_88;
      __this_05 = local_90;
      pIVar22 = (Il2CppClass *)(*(image->klass->vtable)._32_get_material.methodPtr)(image);
      if (pIVar9 == (Il2CppObject *)0x0) goto label_03b66ffe;
      pIVar9[2].klass = pIVar22;
      il2cpp_runtime_helper_022b4080(pIVar9 + 2,pIVar22);
      UnityEngine_UI_Selectable__set_targetGraphic
                (pUVar19,(UnityEngine_UI_Graphic_o *)image,(MethodInfo *)0x0);
      if (*local_a8 == (UnityEngine_GameObject_o *)0x0) goto label_03b67003;
      __this_06 = (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)
                  UnityEngine_GameObject__AddComponent_object_(*local_a8,MethodInfo_GisketchButtonRelief_AddComponent_GisketchButtonRelief);
      if (__this_06 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) goto label_03b67008;
      Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
                (__this_06,image,local_98,(float)(pGVar20->fields).wornStainScale.fields.hasValue,
                 (UnityEngine_UI_RectMask2D_o *)0x0,(System_Nullable_float__o)(pGVar20->fields).relief.fields,
                 (MethodInfo *)0x0);
      pUVar16 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
      pGVar8 = local_80;
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildThumbnail
                (__this_05,pUVar16,(Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)*local_80,method_00);
      pUVar16 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0);
      in_stack_ffffffffffffff28 = pGVar8->Key;
      in_stack_ffffffffffffff30 = pGVar8->Label;
      in_stack_ffffffffffffff38 = pGVar8->Sprite;
      in_stack_ffffffffffffff40 = pGVar8->Keywords;
      Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildLabel
                (__this_05,pUVar16,(Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)*pGVar8,method_01);
      __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar19->fields).m_CanvasGroupCache;
      call = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
        __this_02.fields._detail = in_stack_ffffffffffffff30;
        __this_02.fields._area = in_stack_ffffffffffffff28;
        __this_02.fields._startMs = (int64_t)in_stack_ffffffffffffff38;
        __this_02.fields._24_8_ = in_stack_ffffffffffffff40;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)&local_78);
        return;
      }
      goto label_03b6700d;
    }
  }
  uVar23 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar23);
label_03b67021:
  uVar23 = il2cpp_runtime_helper_0231b270();
  auVar29 = il2cpp_runtime_helper_022b2b10(uVar23);
  if (auVar29._8_4_ == 1) {
    plVar24 = (long *)__cxa_begin_catch(auVar29._0_8_);
    lVar14 = *plVar24;
    __cxa_end_catch();
    __this_03.fields._detail = in_stack_ffffffffffffff30;
    __this_03.fields._area = in_stack_ffffffffffffff28;
    __this_03.fields._startMs = (int64_t)in_stack_ffffffffffffff38;
    __this_03.fields._24_8_ = in_stack_ffffffffffffff40;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_03,(MethodInfo *)&local_78);
    if (lVar14 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar14);
  }
  __this_04.fields._detail = in_stack_ffffffffffffff30;
  __this_04.fields._area = in_stack_ffffffffffffff28;
  __this_04.fields._startMs = (int64_t)in_stack_ffffffffffffff38;
  __this_04.fields._24_8_ = in_stack_ffffffffffffff40;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_04,(MethodInfo *)&local_78);
  _Unwind_Resume(auVar29._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$BuildThumbnail
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildThumbnail (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x3b67580

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildThumbnail
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,UnityEngine_Transform_o *parent,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar1;
  Il2CppClass *pIVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  System_RuntimeTypeHandle_o handle;
  System_String_array *values;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar3;
  System_String_o *detail;
  System_Type_array *components;
  System_Type_o *pSVar4;
  long lVar5;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_RectTransform_o *__this_05;
  UnityEngine_Sprite_o *value_00;
  undefined8 uVar6;
  long *plVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *in_R8;
  System_String_o *unaff_R12;
  undefined1 auVar8 [12];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool_conflict bVar16;
  undefined1 local_50 [32];
  
  if (g_data_057a9db3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"AoTTG Grid Thumbnail");
    il2cpp_runtime_helper_023445d0(&" sprite=");
    il2cpp_runtime_helper_023445d0(&"GridPicker.BuildThumbnail");
    g_data_057a9db3 = '\x01';
    method = extraout_RDX;
  }
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  bVar16 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5,method);
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    pGVar3 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)(g_data_057b9c00 + 0xb8);
    if (values != (System_String_array *)0x0) goto label_03b67675;
label_03b6796f:
    il2cpp_runtime_helper_022b2c90();
    item.fields.Sprite = unaff_R12;
label_03b67974:
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(item.fields.Sprite,(MethodInfo *)0x0);
    UnityEngine_UI_Image__set_sprite((UnityEngine_UI_Image_o *)values,value_00,(MethodInfo *)0x0);
    pIVar2 = (values->obj).klass;
    (*pIVar2->vtable[0x17].methodPtr)(0x3f800000,0x3f800000,values,pIVar2->vtable[0x17].method);
label_03b679c0:
    __this_00.fields._area._4_4_ = uVar10;
    __this_00.fields._area._0_4_ = uVar9;
    __this_00.fields._detail._0_4_ = uVar11;
    __this_00.fields._detail._4_4_ = uVar12;
    __this_00.fields._startMs._0_4_ = uVar13;
    __this_00.fields._startMs._4_4_ = uVar14;
    __this_00.fields._enabled = uVar15;
    __this_00.fields._hotLoop = bVar16;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
    return;
  }
  pGVar3 = &pGVar1->fields;
  if (values == (System_String_array *)0x0) goto label_03b6796f;
label_03b67675:
  if ((int)values->max_length == 0) {
label_03b679d9:
    il2cpp_runtime_helper_022b2ca0();
label_03b679de:
    il2cpp_runtime_helper_022b2c90();
label_03b679e3:
    il2cpp_runtime_helper_022b2ca0();
label_03b679e8:
    il2cpp_runtime_helper_022b2c90();
label_03b679ed:
    il2cpp_runtime_helper_022b2c90();
label_03b679f2:
    il2cpp_runtime_helper_022b2c90();
label_03b679f7:
    il2cpp_runtime_helper_022b2c90();
label_03b679fc:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    values->m_Items[0] = pGVar3->Id;
    il2cpp_runtime_helper_022b4080(values->m_Items);
    if ((uint)values->max_length < 2) goto label_03b679d9;
    values->m_Items[1] = " ";
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    if ((uint)values->max_length < 3) goto label_03b679d9;
    values->m_Items[2] = item.fields.Key;
    il2cpp_runtime_helper_022b4080(values->m_Items + 2);
    if ((uint)values->max_length < 4) goto label_03b679d9;
    values->m_Items[3] = " sprite=";
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    if ((uint)values->max_length < 5) goto label_03b679d9;
    values->m_Items[4] = item.fields.Sprite;
    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
    detail = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_50,"GridPicker.BuildThumbnail",detail,
               (MethodInfo *)0x0);
    components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    uVar9 = local_50._0_4_;
    uVar10 = local_50._4_4_;
    uVar11 = local_50._8_4_;
    uVar12 = local_50._12_4_;
    uVar13 = local_50._16_4_;
    uVar14 = local_50._20_4_;
    uVar15 = local_50._24_4_;
    bVar16 = local_50._28_4_;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar9 = local_50._0_4_;
      uVar10 = local_50._4_4_;
      uVar11 = local_50._8_4_;
      uVar12 = local_50._12_4_;
      uVar13 = local_50._16_4_;
      uVar14 = local_50._20_4_;
      uVar15 = local_50._24_4_;
      bVar16 = local_50._28_4_;
    }
    pSVar4 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_03b679de;
    if ((pSVar4 != (System_Type_o *)0x0) && (lVar5 = il2cpp_runtime_helper_023051f0(pSVar4), lVar5 == 0))
    goto label_03b67a06;
    if ((int)components->max_length == 0) goto label_03b679e3;
    components->m_Items[0] = pSVar4;
    il2cpp_runtime_helper_022b4080(components->m_Items,pSVar4);
    __this_03 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor_4dfc440(__this_03,"AoTTG Grid Thumbnail",components,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_GameObject_o *)0x0) goto label_03b679e8;
    __this_04 = UnityEngine_GameObject__get_transform(__this_03,(MethodInfo *)0x0);
    if (__this_04 == (UnityEngine_Transform_o *)0x0) goto label_03b679ed;
    UnityEngine_Transform__SetParent_4e09e30(__this_04,parent,0,(MethodInfo *)0x0);
    __this_05 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(__this_03,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (__this_05 == (UnityEngine_RectTransform_o *)0x0) goto label_03b679f2;
    UnityEngine_RectTransform__set_anchorMin
              (__this_05,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (__this_05,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot
              (__this_05,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    pGVar1 = (__this->fields)._definition;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) goto label_03b679f7;
    value.fields.x = (pGVar1->fields).ThumbnailWidth;
    value.fields.y = (pGVar1->fields).ThumbnailHeight;
    UnityEngine_RectTransform__set_sizeDelta(__this_05,value,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_05,(UnityEngine_Vector2_o)0xc140000000000000,(MethodInfo *)0x0);
    values = (System_String_array *)UnityEngine_GameObject__AddComponent_object_(__this_03,MethodInfo_Image_AddComponent_Image);
    if (values == (System_String_array *)0x0) goto label_03b679fc;
    UnityEngine_UI_Image__set_preserveAspect((UnityEngine_UI_Image_o *)values,1,(MethodInfo *)0x0);
    pIVar2 = (values->obj).klass;
    (*pIVar2->vtable[0x19].methodPtr)(values,0,pIVar2->vtable[0x19].method);
    pGVar1 = (__this->fields)._definition;
    if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      if ((char)(pGVar1->fields).LazyLoadThumbnails != '\0') {
        pIVar2 = (values->obj).klass;
        (*pIVar2->vtable[0x17].methodPtr)(0x3f800000,0x3f800000,values,pIVar2->vtable[0x17].method);
        Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__QueueThumbnail
                  (__this,(UnityEngine_UI_Image_o *)values,item.fields.Sprite,
                   (__this->fields)._thumbnailGeneration,in_R8);
        goto label_03b679c0;
      }
      goto label_03b67974;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b67a06:
  uVar6 = il2cpp_runtime_helper_0231b270();
  auVar8 = il2cpp_runtime_helper_022b2b10(uVar6);
  if (auVar8._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_01.fields._area._4_4_ = uVar10;
    __this_01.fields._area._0_4_ = uVar9;
    __this_01.fields._detail._0_4_ = uVar11;
    __this_01.fields._detail._4_4_ = uVar12;
    __this_01.fields._startMs._0_4_ = uVar13;
    __this_01.fields._startMs._4_4_ = uVar14;
    __this_01.fields._enabled = uVar15;
    __this_01.fields._hotLoop = bVar16;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_02.fields._area._4_4_ = uVar10;
  __this_02.fields._area._0_4_ = uVar9;
  __this_02.fields._detail._0_4_ = uVar11;
  __this_02.fields._detail._4_4_ = uVar12;
  __this_02.fields._startMs._0_4_ = uVar13;
  __this_02.fields._startMs._4_4_ = uVar14;
  __this_02.fields._enabled = uVar15;
  __this_02.fields._hotLoop = bVar16;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
  _Unwind_Resume(auVar8._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$QueueThumbnail
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__QueueThumbnail (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, UnityEngine_UI_Image_o* image, System_String_o* resourcePath, int32_t generation, const MethodInfo* method);
// 0x3b67ec0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__QueueThumbnail
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,UnityEngine_UI_Image_o *image,
               System_String_o *resourcePath,int32_t generation,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o *pGVar2;
  uint uVar3;
  System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *__this_00;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_array *pGVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o item;
  ulong uVar5;
  bool_conflict bVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 extraout_RDX;
  undefined8 *puVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar8 = (ulong)(uint)generation;
  if (g_data_057a9db4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9db4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar6 == '\0') &&
     (bVar6 = System_String__IsNullOrEmpty(resourcePath,(MethodInfo *)0x0), (char)bVar6 == '\0')) {
    __this_00 = (__this->fields)._thumbnailLoads;
    puVar9 = &uStack_58;
    uStack_58 = (System_String_o *)0x0;
    uStack_50 = 0;
    local_60 = image;
    il2cpp_runtime_helper_022b4080(&local_60,image);
    uStack_58 = resourcePath;
    il2cpp_runtime_helper_022b4080();
    uVar5 = MethodInfo_Void_Add;
    uStack_50 = CONCAT44(uStack_50._4_4_,generation);
    if (__this_00 != (System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *)0x0) {
      local_38 = uStack_50;
      local_48 = (undefined4)local_60;
      uStack_44 = local_60._4_4_;
      uStack_40 = (undefined4)uStack_58;
      uStack_3c = uStack_58._4_4_;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar4 = (__this_00->fields)._items;
      uVar8 = uVar5;
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
          il2cpp_runtime_helper_022b4080(pGVar4->m_Items + (int)uVar3,0);
          return;
        }
        item.fields.ResourcePath = uStack_58;
        item.fields.Image = local_60;
        item.fields._16_8_ = uStack_50;
        System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad___AddWithResize
                  (__this_00,item,*(MethodInfo_36D4F20 **)(*(long *)(*(long *)(uVar5 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
    uVar7 = (undefined4)uVar8;
    il2cpp_runtime_helper_022b2c90();
    *puVar9 = resourcePath;
    il2cpp_runtime_helper_022b4080();
    puVar9[1] = extraout_RDX;
    il2cpp_runtime_helper_022b4080(puVar9 + 1,extraout_RDX);
    *(undefined4 *)(puVar9 + 2) = uVar7;
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$LoadThumbnails
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, int32_t generation, const MethodInfo* method);
// 0x3b66180

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__LoadThumbnails
          (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,int32_t generation,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057a9db5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadThumbnails_d__23);
    g_data_057a9db5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadThumbnails_d__23);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    *(int32_t *)&__this_00[2].monitor = generation;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$ShowLoaded
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__ShowLoaded (UnityEngine_UI_Image_o* image, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
// 0x3b68070

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__ShowLoaded
               (UnityEngine_UI_Image_o *image,UnityEngine_Sprite_o *sprite,MethodInfo *method)

{
  void *pvVar1;
  bool_conflict bVar2;
  Il2CppObject *__this;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *tween;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_00;
  
  if (g_data_057a9db6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9db6 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar4 = (Il2CppClass *)sprite;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)sprite,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (image != (UnityEngine_UI_Image_o *)0x0) {
        UnityEngine_UI_Image__set_sprite(image,sprite,(MethodInfo *)0x0);
        (*(image->klass->vtable)._23_set_color.methodPtr)
                  (0x3f800000,0x3f800000,image,(image->klass->vtable)._23_set_color.method);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9db7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FadeIn_b__0);
        il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass25_0);
        g_data_057a9db7 = '\x01';
      }
      __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass25_0);
      __this_00 = __this;
      System_Object___ctor(__this,(MethodInfo *)0x0);
      if (__this != (Il2CppObject *)0x0) {
        pIVar3 = __this + 1;
        __this[1].klass = pIVar4;
        il2cpp_runtime_helper_022b4080(pIVar3);
        pIVar4 = __this[1].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pIVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          return;
        }
        __this_00 = (Il2CppObject *)0x0;
        if (pIVar3->klass != (Il2CppClass *)0x0) {
          (**(code **)((long)(pIVar3->klass->_1).image + 0x298))();
          pIVar4 = pIVar3->klass;
          __this_00 = (Il2CppObject *)0x0;
          if (pIVar4 != (Il2CppClass *)0x0) {
            pvVar1 = (pIVar4->_1).image;
            (**(code **)((long)pvVar1 + 0x2a8))(pIVar4,*(undefined8 *)((long)pvVar1 + 0x2b0));
            onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
            DG_Tweening_TweenCallback_float____ctor();
            t = DG_Tweening_DOVirtual__Float(0.0,1.0,0.12,onVirtualUpdate,(MethodInfo *)0x0);
            tween = (DG_Tweening_Tween_o *)
                    DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
            if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(tween,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$FadeIn
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__FadeIn (UnityEngine_UI_Image_o* image, const MethodInfo* method);
// 0x3b68130

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
  Il2CppObject *__this_00;
  
  if (g_data_057a9db7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FadeIn_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass25_0);
    g_data_057a9db7 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass25_0);
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    pIVar4 = __this + 1;
    __this[1].klass = (Il2CppClass *)image;
    il2cpp_runtime_helper_022b4080(pIVar4);
    pIVar1 = __this[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    __this_00 = (Il2CppObject *)0x0;
    if (pIVar4->klass != (Il2CppClass *)0x0) {
      (**(code **)((long)(pIVar4->klass->_1).image + 0x298))();
      pIVar1 = pIVar4->klass;
      __this_00 = (Il2CppObject *)0x0;
      if (pIVar1 != (Il2CppClass *)0x0) {
        pvVar2 = (pIVar1->_1).image;
        (**(code **)((long)pvVar2 + 0x2a8))(pIVar1,*(undefined8 *)((long)pvVar2 + 0x2b0));
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
        DG_Tweening_TweenCallback_float____ctor();
        t = DG_Tweening_DOVirtual__Float(0.0,1.0,0.12,onVirtualUpdate,(MethodInfo *)0x0);
        tween = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)t,1,MethodInfo_Tweener_SetUpdate_Tweener);
        if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(tween,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$BuildLabel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildLabel (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x3b67bb0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__BuildLabel
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,UnityEngine_Transform_o *parent,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o *pGVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *__this_01;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_array *pGVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_o item_00;
  bool_conflict bVar5;
  System_Type_array *components;
  System_Type_o *pSVar6;
  long lVar7;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  TMPro_TMP_Text_o *__this_04;
  TMPro_TMP_FontAsset_o *value;
  long lVar8;
  undefined4 uVar9;
  long in_RCX;
  MethodInfo *extraout_RDX;
  System_String_o *value_00;
  undefined8 extraout_RDX_00;
  System_RuntimeTypeHandle_o SVar10;
  UnityEngine_Object_o *x;
  System_String_o *pSVar11;
  undefined8 *puVar12;
  UnityEngine_GameObject_o *unaff_R12;
  UnityEngine_Color_o UVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  System_Type_o *pSStack_50;
  UnityEngine_GameObject_o *pUStack_48;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *pGStack_40;
  System_String_o *pSStack_38;
  
  if (g_data_057a9db8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG Grid Label");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"textMuted");
    g_data_057a9db8 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type,1,method);
  SVar10 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Type__GetTypeFromHandle(SVar10,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_03b67ea1:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    SVar10.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar6;
    if ((pSVar6 != (System_Type_o *)0x0) && (lVar7 = il2cpp_runtime_helper_023051f0(pSVar6), lVar7 == 0))
    goto label_03b67eab;
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar6;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar6);
      unaff_R12 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      in_RCX = 0;
      UnityEngine_GameObject___ctor_4dfc440(unaff_R12,"AoTTG Grid Label",components,(MethodInfo *)0x0);
      if ((unaff_R12 != (UnityEngine_GameObject_o *)0x0) &&
         (__this_02 = UnityEngine_GameObject__get_transform(unaff_R12,(MethodInfo *)0x0),
         __this_02 != (UnityEngine_Transform_o *)0x0)) {
        in_RCX = 0;
        UnityEngine_Transform__SetParent_4e09e30(__this_02,parent,0,(MethodInfo *)0x0);
        __this_03 = (UnityEngine_RectTransform_o *)
                    UnityEngine_GameObject__GetComponent_object_(unaff_R12,MethodInfo_RectTransform_GetComponent_RectTransform);
        if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(__this_03,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_03,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot(__this_03,(UnityEngine_Vector2_o)0x3f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMin
                    (__this_03,(UnityEngine_Vector2_o)0x4100000040c00000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMax
                    (__this_03,(UnityEngine_Vector2_o)0x42080000c0c00000,(MethodInfo *)0x0);
          __this_04 = (TMPro_TMP_Text_o *)UnityEngine_GameObject__AddComponent_object_(unaff_R12,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI)
          ;
          SVar10.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_03;
          if (__this_04 != (TMPro_TMP_Text_o *)0x0) {
            (*(__this_04->klass->vtable)._66_set_text.methodPtr)
                      (__this_04,item.fields.Label,(__this_04->klass->vtable)._66_set_text.method);
            TMPro_TMP_Text__set_fontSize(__this_04,15.0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            in_RCX = 0;
            value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                              ("text",500,item.fields.Label,0,(MethodInfo *)0x0);
            TMPro_TMP_Text__set_font(__this_04,value,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._theme;
            SVar10.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_04;
            parent = (UnityEngine_Transform_o *)item.fields.Label;
            if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              UVar13.fields.b = 1.0;
              UVar13.fields.a = 1.0;
              UVar13.fields.r = 1.0;
              UVar13.fields.g = 1.0;
              UVar13 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                 (__this_00,"textMuted",UVar13,(MethodInfo *)0x0);
              (*(__this_04->klass->vtable)._23_set_color.methodPtr)
                        (UVar13.fields.r,UVar13.fields._8_8_,__this_04,
                         (__this_04->klass->vtable)._23_set_color.method);
              TMPro_TMP_Text__set_alignment(__this_04,0x202,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_enableWordWrapping(__this_04,0,(MethodInfo *)0x0);
              TMPro_TMP_Text__set_overflowMode(__this_04,1,(MethodInfo *)0x0);
              vtableDispatch = (__this_04->klass->vtable)._25_set_raycastTarget.methodPtr;
              (*vtableDispatch)
                        (__this_04,0,(__this_04->klass->vtable)._25_set_raycastTarget.method,
                         vtableDispatch);
              return;
            }
          }
        }
      }
      goto label_03b67ea1;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03b67eab:
  lVar8 = il2cpp_runtime_helper_0231b270();
  x = (UnityEngine_Object_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  lVar7 = in_RCX;
  pSStack_50 = (System_Type_o *)SVar10.fields.value;
  pUStack_48 = unaff_R12;
  pGStack_40 = __this;
  pSStack_38 = (System_String_o *)parent;
  if (g_data_057a9db4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9db4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar5 == '\0') &&
     (bVar5 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0), (char)bVar5 == '\0')) {
    __this_01 = *(System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o **)(lVar8 + 0x38)
    ;
    puVar12 = &uStack_80;
    uStack_80 = (System_String_o *)0x0;
    uStack_78 = 0;
    uStack_88 = x;
    il2cpp_runtime_helper_022b4080(&uStack_88,x);
    pSVar11 = value_00;
    uStack_80 = value_00;
    il2cpp_runtime_helper_022b4080();
    lVar8 = MethodInfo_Void_Add;
    uStack_78 = CONCAT44(uStack_78._4_4_,(int)in_RCX);
    if (__this_01 != (System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *)0x0) {
      uStack_60 = uStack_78;
      uStack_70 = (undefined4)uStack_88;
      uStack_6c = uStack_88._4_4_;
      uStack_68 = (undefined4)uStack_80;
      uStack_64 = uStack_80._4_4_;
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar4 = (__this_01->fields)._items;
      lVar7 = lVar8;
      if (pGVar4 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_ThumbnailLoad_array *)0x0) {
        uVar3 = (__this_01->fields)._size;
        if (uVar3 < (uint)pGVar4->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          *(undefined8 *)&pGVar4->m_Items[(int)uVar3].fields.Generation = uStack_78;
          pGVar2 = pGVar4->m_Items + (int)uVar3;
          *(undefined4 *)&(pGVar2->fields).Image = (undefined4)uStack_88;
          *(undefined4 *)((long)&(pGVar2->fields).Image + 4) = uStack_88._4_4_;
          *(undefined4 *)&(pGVar2->fields).ResourcePath = (undefined4)uStack_80;
          *(undefined4 *)((long)&(pGVar2->fields).ResourcePath + 4) = uStack_80._4_4_;
          il2cpp_runtime_helper_022b4080(pGVar4->m_Items + (int)uVar3,0);
          return;
        }
        item_00.fields.ResourcePath = uStack_80;
        item_00.fields.Image = (UnityEngine_UI_Image_o *)uStack_88;
        item_00.fields._16_8_ = uStack_78;
        System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad___AddWithResize
                  (__this_01,item_00,
                   *(MethodInfo_36D4F20 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
    uVar9 = (undefined4)lVar7;
    il2cpp_runtime_helper_022b2c90();
    *puVar12 = pSVar11;
    il2cpp_runtime_helper_022b4080();
    puVar12[1] = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(puVar12 + 1,extraout_RDX_00);
    *(undefined4 *)(puVar12 + 2) = uVar9;
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x3b67480

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar1;
  Il2CppClass *pIVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_RuntimeTypeHandle_o handle;
  System_String_array *values;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar3;
  System_String_o *detail;
  System_Type_array *components;
  System_Type_o *pSVar4;
  long lVar5;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  UnityEngine_Sprite_o *value_00;
  undefined8 uVar6;
  System_String_o *unaff_RBX;
  long *plVar7;
  MethodInfo *in_R8;
  System_String_o *unaff_R12;
  undefined1 auVar8 [12];
  System_String_o *unaff_retaddr;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool_conflict bVar16;
  undefined1 auStack_68 [32];
  UnityEngine_RectTransform_o *pUStack_48;
  
  plVar7 = (long *)rect;
  if (g_data_057a694c == '\0') {
    plVar7 = &TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8)
               ,(MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_48 = rect;
  if (g_data_057a9db3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"AoTTG Grid Thumbnail");
    il2cpp_runtime_helper_023445d0(&" sprite=");
    il2cpp_runtime_helper_023445d0(&"GridPicker.BuildThumbnail");
    g_data_057a9db3 = '\x01';
  }
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  bVar16 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  pGVar1 = (((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)plVar7)->fields)._definition;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    pGVar3 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)(g_data_057b9c00 + 0xb8);
    if (values != (System_String_array *)0x0) goto label_03b67675;
label_03b6796f:
    il2cpp_runtime_helper_022b2c90();
label_03b67974:
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value_00 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(unaff_R12,(MethodInfo *)0x0);
    UnityEngine_UI_Image__set_sprite((UnityEngine_UI_Image_o *)values,value_00,(MethodInfo *)0x0);
    pIVar2 = (values->obj).klass;
    (*pIVar2->vtable[0x17].methodPtr)(0x3f800000,0x3f800000,values,pIVar2->vtable[0x17].method);
label_03b679c0:
    __this.fields._area._4_4_ = uVar10;
    __this.fields._area._0_4_ = uVar9;
    __this.fields._detail._0_4_ = uVar11;
    __this.fields._detail._4_4_ = uVar12;
    __this.fields._startMs._0_4_ = uVar13;
    __this.fields._startMs._4_4_ = uVar14;
    __this.fields._enabled = uVar15;
    __this.fields._hotLoop = bVar16;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this,(MethodInfo *)&stack0xffffffffffffff70);
    return;
  }
  pGVar3 = &pGVar1->fields;
  if (values == (System_String_array *)0x0) goto label_03b6796f;
label_03b67675:
  if ((int)values->max_length == 0) {
label_03b679d9:
    il2cpp_runtime_helper_022b2ca0();
label_03b679de:
    il2cpp_runtime_helper_022b2c90();
label_03b679e3:
    il2cpp_runtime_helper_022b2ca0();
label_03b679e8:
    il2cpp_runtime_helper_022b2c90();
label_03b679ed:
    il2cpp_runtime_helper_022b2c90();
label_03b679f2:
    il2cpp_runtime_helper_022b2c90();
label_03b679f7:
    il2cpp_runtime_helper_022b2c90();
label_03b679fc:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    values->m_Items[0] = pGVar3->Id;
    il2cpp_runtime_helper_022b4080(values->m_Items);
    if ((uint)values->max_length < 2) goto label_03b679d9;
    values->m_Items[1] = " ";
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    if ((uint)values->max_length < 3) goto label_03b679d9;
    values->m_Items[2] = unaff_RBX;
    il2cpp_runtime_helper_022b4080(values->m_Items + 2);
    if ((uint)values->max_length < 4) goto label_03b679d9;
    values->m_Items[3] = " sprite=";
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    if ((uint)values->max_length < 5) goto label_03b679d9;
    values->m_Items[4] = unaff_retaddr;
    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
    detail = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)auStack_68,"GridPicker.BuildThumbnail",detail,
               (MethodInfo *)0x0);
    components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    uVar9 = auStack_68._0_4_;
    uVar10 = auStack_68._4_4_;
    uVar11 = auStack_68._8_4_;
    uVar12 = auStack_68._12_4_;
    uVar13 = auStack_68._16_4_;
    uVar14 = auStack_68._20_4_;
    uVar15 = auStack_68._24_4_;
    bVar16 = auStack_68._28_4_;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar9 = auStack_68._0_4_;
      uVar10 = auStack_68._4_4_;
      uVar11 = auStack_68._8_4_;
      uVar12 = auStack_68._12_4_;
      uVar13 = auStack_68._16_4_;
      uVar14 = auStack_68._20_4_;
      uVar15 = auStack_68._24_4_;
      bVar16 = auStack_68._28_4_;
    }
    pSVar4 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_03b679de;
    if ((pSVar4 != (System_Type_o *)0x0) && (lVar5 = il2cpp_runtime_helper_023051f0(pSVar4), lVar5 == 0))
    goto label_03b67a06;
    if ((int)components->max_length == 0) goto label_03b679e3;
    components->m_Items[0] = pSVar4;
    il2cpp_runtime_helper_022b4080(components->m_Items,pSVar4);
    __this_02 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor_4dfc440(__this_02,"AoTTG Grid Thumbnail",components,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_03b679e8;
    __this_03 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_03b679ed;
    UnityEngine_Transform__SetParent_4e09e30(__this_03,(UnityEngine_Transform_o *)method,0,(MethodInfo *)0x0);
    __this_04 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(__this_02,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (__this_04 == (UnityEngine_RectTransform_o *)0x0) goto label_03b679f2;
    UnityEngine_RectTransform__set_anchorMin
              (__this_04,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (__this_04,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot
              (__this_04,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    pGVar1 = (((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)plVar7)->fields)._definition;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) goto label_03b679f7;
    value.fields.x = (pGVar1->fields).ThumbnailWidth;
    value.fields.y = (pGVar1->fields).ThumbnailHeight;
    UnityEngine_RectTransform__set_sizeDelta(__this_04,value,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_04,(UnityEngine_Vector2_o)0xc140000000000000,(MethodInfo *)0x0);
    values = (System_String_array *)UnityEngine_GameObject__AddComponent_object_(__this_02,MethodInfo_Image_AddComponent_Image);
    if (values == (System_String_array *)0x0) goto label_03b679fc;
    UnityEngine_UI_Image__set_preserveAspect((UnityEngine_UI_Image_o *)values,1,(MethodInfo *)0x0);
    pIVar2 = (values->obj).klass;
    (*pIVar2->vtable[0x19].methodPtr)(values,0,pIVar2->vtable[0x19].method);
    pGVar1 = (((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)plVar7)->fields)._definition;
    if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      unaff_R12 = unaff_retaddr;
      if ((char)(pGVar1->fields).LazyLoadThumbnails != '\0') {
        pIVar2 = (values->obj).klass;
        (*pIVar2->vtable[0x17].methodPtr)(0x3f800000,0x3f800000,values,pIVar2->vtable[0x17].method);
        Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__QueueThumbnail
                  ((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)plVar7,
                   (UnityEngine_UI_Image_o *)values,unaff_retaddr,
                   (((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)plVar7)->fields).
                   _thumbnailGeneration,in_R8);
        goto label_03b679c0;
      }
      goto label_03b67974;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b67a06:
  uVar6 = il2cpp_runtime_helper_0231b270();
  auVar8 = il2cpp_runtime_helper_022b2b10(uVar6);
  if (auVar8._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_00.fields._area._4_4_ = uVar10;
    __this_00.fields._area._0_4_ = uVar9;
    __this_00.fields._detail._0_4_ = uVar11;
    __this_00.fields._detail._4_4_ = uVar12;
    __this_00.fields._startMs._0_4_ = uVar13;
    __this_00.fields._startMs._4_4_ = uVar14;
    __this_00.fields._enabled = uVar15;
    __this_00.fields._hotLoop = bVar16;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_00,(MethodInfo *)&stack0xffffffffffffff70);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_01.fields._area._4_4_ = uVar10;
  __this_01.fields._area._0_4_ = uVar9;
  __this_01.fields._detail._0_4_ = uVar11;
  __this_01.fields._detail._4_4_ = uVar12;
  __this_01.fields._startMs._0_4_ = uVar13;
  __this_01.fields._startMs._4_4_ = uVar14;
  __this_01.fields._enabled = uVar15;
  __this_01.fields._hotLoop = bVar16;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_01,(MethodInfo *)&stack0xffffffffffffff70);
  _Unwind_Resume(auVar8._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$SafeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SafeId (System_String_o* value, const MethodInfo* method);
// 0x3b673f0

System_String_o *
Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__SafeId(System_String_o *value,MethodInfo *method)

{
  UnityEngine_Vector2_o value_00;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *pGVar1;
  Il2CppClass *pIVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *extraout_RAX;
  System_String_array *values;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields *pGVar6;
  System_Type_array *components;
  System_Type_o *pSVar7;
  long lVar8;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_RectTransform_o *__this_04;
  UnityEngine_Sprite_o *value_01;
  System_String_o *extraout_RAX_00;
  undefined8 uVar9;
  System_String_o *extraout_RAX_01;
  System_String_o *unaff_RBX;
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this_05;
  long *plVar10;
  MethodInfo *in_R8;
  System_String_o *unaff_R12;
  undefined1 auVar11 [12];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_70 [32];
  Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *pGStack_50;
  
  if (g_data_057a9db9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"item");
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"-");
    g_data_057a9db9 = '\x01';
  }
  pSVar5 = (System_String_o *)0x0;
  __this_05 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)value;
  bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return "item";
  }
  if ((value != (System_String_o *)0x0) &&
     (pSVar5 = " ", __this_05 = (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)value,
     pSVar4 = System_String__Replace_3af9030(value," ","-",(MethodInfo *)0x0),
     pSVar4 != (System_String_o *)0x0)) {
    pSVar5 = System_String__ToLowerInvariant(pSVar4,(MethodInfo *)0x0);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar10 = (long *)__this_05;
  if (g_data_057a694c == '\0') {
    plVar10 = &TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (__this_05 != (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              ((UnityEngine_RectTransform_o *)__this_05,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              ((UnityEngine_RectTransform_o *)__this_05,
               (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              ((UnityEngine_RectTransform_o *)__this_05,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              ((UnityEngine_RectTransform_o *)__this_05,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    return extraout_RAX;
  }
  il2cpp_runtime_helper_022b2c90();
  pGStack_50 = __this_05;
  if (g_data_057a9db3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&"AoTTG Grid Thumbnail");
    il2cpp_runtime_helper_023445d0(&" sprite=");
    il2cpp_runtime_helper_023445d0(&"GridPicker.BuildThumbnail");
    g_data_057a9db3 = '\x01';
  }
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  bVar3 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
  pGVar1 = (((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)plVar10)->fields)._definition;
  if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
    pGVar6 = *(Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_Fields **)(g_data_057b9c00 + 0xb8);
    if (values != (System_String_array *)0x0) goto label_03b67675;
label_03b6796f:
    il2cpp_runtime_helper_022b2c90();
label_03b67974:
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value_01 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(unaff_R12,(MethodInfo *)0x0);
    UnityEngine_UI_Image__set_sprite((UnityEngine_UI_Image_o *)values,value_01,(MethodInfo *)0x0);
    pIVar2 = (values->obj).klass;
    (*pIVar2->vtable[0x17].methodPtr)(0x3f800000,0x3f800000,values,pIVar2->vtable[0x17].method);
label_03b679c0:
    __this.fields._area._4_4_ = uVar13;
    __this.fields._area._0_4_ = uVar12;
    __this.fields._detail._0_4_ = uVar14;
    __this.fields._detail._4_4_ = uVar15;
    __this.fields._startMs._0_4_ = uVar16;
    __this.fields._startMs._4_4_ = uVar17;
    __this.fields._enabled = uVar18;
    __this.fields._hotLoop = bVar3;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this,(MethodInfo *)&stack0xffffffffffffff68);
    return extraout_RAX_00;
  }
  pGVar6 = &pGVar1->fields;
  if (values == (System_String_array *)0x0) goto label_03b6796f;
label_03b67675:
  if ((int)values->max_length == 0) {
label_03b679d9:
    il2cpp_runtime_helper_022b2ca0();
label_03b679de:
    il2cpp_runtime_helper_022b2c90();
label_03b679e3:
    il2cpp_runtime_helper_022b2ca0();
label_03b679e8:
    il2cpp_runtime_helper_022b2c90();
label_03b679ed:
    il2cpp_runtime_helper_022b2c90();
label_03b679f2:
    il2cpp_runtime_helper_022b2c90();
label_03b679f7:
    il2cpp_runtime_helper_022b2c90();
label_03b679fc:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    values->m_Items[0] = pGVar6->Id;
    il2cpp_runtime_helper_022b4080(values->m_Items);
    if ((uint)values->max_length < 2) goto label_03b679d9;
    values->m_Items[1] = " ";
    il2cpp_runtime_helper_022b4080(values->m_Items + 1);
    if ((uint)values->max_length < 3) goto label_03b679d9;
    values->m_Items[2] = value;
    il2cpp_runtime_helper_022b4080(values->m_Items + 2);
    if ((uint)values->max_length < 4) goto label_03b679d9;
    values->m_Items[3] = " sprite=";
    il2cpp_runtime_helper_022b4080(values->m_Items + 3);
    if ((uint)values->max_length < 5) goto label_03b679d9;
    values->m_Items[4] = unaff_RBX;
    il2cpp_runtime_helper_022b4080(values->m_Items + 4);
    pSVar4 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
              ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)auStack_70,"GridPicker.BuildThumbnail",pSVar4,
               (MethodInfo *)0x0);
    components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
    handle = TypeRef_RectTransform;
    uVar12 = auStack_70._0_4_;
    uVar13 = auStack_70._4_4_;
    uVar14 = auStack_70._8_4_;
    uVar15 = auStack_70._12_4_;
    uVar16 = auStack_70._16_4_;
    uVar17 = auStack_70._20_4_;
    uVar18 = auStack_70._24_4_;
    bVar3 = auStack_70._28_4_;
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      uVar12 = auStack_70._0_4_;
      uVar13 = auStack_70._4_4_;
      uVar14 = auStack_70._8_4_;
      uVar15 = auStack_70._12_4_;
      uVar16 = auStack_70._16_4_;
      uVar17 = auStack_70._20_4_;
      uVar18 = auStack_70._24_4_;
      bVar3 = auStack_70._28_4_;
    }
    pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_03b679de;
    if ((pSVar7 != (System_Type_o *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7), lVar8 == 0))
    goto label_03b67a06;
    if ((int)components->max_length == 0) goto label_03b679e3;
    components->m_Items[0] = pSVar7;
    il2cpp_runtime_helper_022b4080(components->m_Items,pSVar7);
    __this_02 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor_4dfc440(__this_02,"AoTTG Grid Thumbnail",components,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_03b679e8;
    __this_03 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
    if (__this_03 == (UnityEngine_Transform_o *)0x0) goto label_03b679ed;
    UnityEngine_Transform__SetParent_4e09e30(__this_03,(UnityEngine_Transform_o *)pSVar5,0,(MethodInfo *)0x0);
    __this_04 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__GetComponent_object_(__this_02,MethodInfo_RectTransform_GetComponent_RectTransform);
    if (__this_04 == (UnityEngine_RectTransform_o *)0x0) goto label_03b679f2;
    UnityEngine_RectTransform__set_anchorMin
              (__this_04,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (__this_04,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot
              (__this_04,(UnityEngine_Vector2_o)0x3f8000003f000000,(MethodInfo *)0x0);
    pGVar1 = (((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)plVar10)->fields)._definition;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) goto label_03b679f7;
    value_00.fields.x = (pGVar1->fields).ThumbnailWidth;
    value_00.fields.y = (pGVar1->fields).ThumbnailHeight;
    UnityEngine_RectTransform__set_sizeDelta(__this_04,value_00,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchoredPosition
              (__this_04,(UnityEngine_Vector2_o)0xc140000000000000,(MethodInfo *)0x0);
    values = (System_String_array *)UnityEngine_GameObject__AddComponent_object_(__this_02,MethodInfo_Image_AddComponent_Image);
    if (values == (System_String_array *)0x0) goto label_03b679fc;
    UnityEngine_UI_Image__set_preserveAspect((UnityEngine_UI_Image_o *)values,1,(MethodInfo *)0x0);
    pIVar2 = (values->obj).klass;
    (*pIVar2->vtable[0x19].methodPtr)(values,0,pIVar2->vtable[0x19].method);
    pGVar1 = (((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)plVar10)->fields)._definition;
    if (pGVar1 != (Gisketch_Aottg2UI_Code_GisketchGridPicker_RuntimeDefinition_o *)0x0) {
      unaff_R12 = unaff_RBX;
      if ((char)(pGVar1->fields).LazyLoadThumbnails != '\0') {
        pIVar2 = (values->obj).klass;
        (*pIVar2->vtable[0x17].methodPtr)(0x3f800000,0x3f800000,values,pIVar2->vtable[0x17].method);
        Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__QueueThumbnail
                  ((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)plVar10,
                   (UnityEngine_UI_Image_o *)values,unaff_RBX,
                   (((Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *)plVar10)->fields).
                   _thumbnailGeneration,in_R8);
        goto label_03b679c0;
      }
      goto label_03b67974;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_03b67a06:
  uVar9 = il2cpp_runtime_helper_0231b270();
  auVar11 = il2cpp_runtime_helper_022b2b10(uVar9);
  if (auVar11._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar8 = *plVar10;
    __cxa_end_catch();
    __this_00.fields._area._4_4_ = uVar13;
    __this_00.fields._area._0_4_ = uVar12;
    __this_00.fields._detail._0_4_ = uVar14;
    __this_00.fields._detail._4_4_ = uVar15;
    __this_00.fields._startMs._0_4_ = uVar16;
    __this_00.fields._startMs._4_4_ = uVar17;
    __this_00.fields._enabled = uVar18;
    __this_00.fields._hotLoop = bVar3;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_00,(MethodInfo *)&stack0xffffffffffffff68);
    if (lVar8 == 0) {
      return extraout_RAX_01;
    }
    il2cpp_runtime_helper_022fefe0(lVar8);
  }
  __this_01.fields._area._4_4_ = uVar13;
  __this_01.fields._area._0_4_ = uVar12;
  __this_01.fields._detail._0_4_ = uVar14;
  __this_01.fields._detail._4_4_ = uVar15;
  __this_01.fields._startMs._0_4_ = uVar16;
  __this_01.fields._startMs._4_4_ = uVar17;
  __this_01.fields._enabled = uVar18;
  __this_01.fields._hotLoop = bVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_01,(MethodInfo *)&stack0xffffffffffffff68);
  _Unwind_Resume(auVar11._0_8_);
}


// Gisketch.Aottg2UI.Code.GisketchGridPickerRuntime$$ItemCount
// il2cpp: int32_t Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime__ItemCount (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o* __this, const MethodInfo* method);
// 0x3b65b30

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
// 0x3b682e0

void Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime___ctor
               (Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *__this_00;
  System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *__this_01;
  
  if (g_data_057a9dba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_ThumbnailLoad);
    g_data_057a9dba = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_GameObject__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_GameObject);
  (__this->fields)._cards = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._cards,__this_00);
  __this_01 = (System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_ThumbnailLoad);
  System_Collections_Generic_List_GisketchGridPickerRuntime_ThumbnailLoad____ctor(__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Code_GisketchGridPickerRuntime);
  (__this->fields)._thumbnailLoads = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._thumbnailLoads,__this_01);
  (__this->fields)._query = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._query);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



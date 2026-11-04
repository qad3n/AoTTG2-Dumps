// Type: Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgSubtabStripRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__27$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27___ctor (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27___ctor(Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__27$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27__System_IDisposable_Dispose(Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__27$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27__MoveNext (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o* __this, const MethodInfo* method);
// 0x1823b93a0

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27__MoveNext
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o *__this,
               MethodInfo *method)

{
  float *pfVar1;
  int iVar2;
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this_00;
  float fVar3;
  float fVar4;
  
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *)0x0) goto label_1823b9509;
    (__this->fields)._start_5__2 = (__this_00->fields)._hoverAmount;
    (__this->fields)._elapsed_5__3 = 0.0;
  }
  else {
    if (iVar2 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  pfVar1 = &(__this->fields)._elapsed_5__3;
  if (*pfVar1 <= 0.08 && *pfVar1 != 0.08) {
    fVar4 = (__this->fields)._elapsed_5__3;
    fVar3 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    fVar3 = fVar3 + fVar4;
    (__this->fields)._elapsed_5__3 = fVar3;
    fVar3 = fVar3 / 0.08;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    fVar4 = (3.0 - (fVar3 + fVar3)) * fVar3 * fVar3;
    if (fVar4 < 0.0) {
      fVar4 = 0.0;
    }
    else if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *)0x0) {
      fVar3 = (__this->fields)._start_5__2;
      (__this_00->fields)._hoverAmount = ((__this->fields).target - fVar3) * fVar4 + fVar3;
      Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this_00,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  else if (__this_00 != (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *)0x0) {
    (__this_00->fields)._hoverAmount = (__this->fields).target;
    if ((__this->fields).clearAfter != false) {
      (__this_00->fields)._hoveredId = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._hoveredId,(void *)0x0);
    }
    Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this_00,(MethodInfo *)0x0);
    (__this_00->fields)._hoverTween = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._hoverTween,(void *)0x0);
    return false;
  }
label_1823b9509:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o* __this, const MethodInfo* method);
// 0x1823b9510

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_AnimateHover_d__27_System_Collections_IEnumerator
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__35$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35___ctor (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35___ctor(Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__35$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35__System_IDisposable_Dispose(Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__35$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35__MoveNext (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o* __this, const MethodInfo* method);
// 0x1823b96a0

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35__MoveNext
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this_00;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 != (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshUnderline(__this_00,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._geometryRefresh = (UnityEngine_Coroutine_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields)._geometryRefresh,(void *)0x0);
      return false;
    }
    ThrowNullReferenceException();
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__35$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o* __this, const MethodInfo* method);
// 0x1823b9740

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_RefreshGeometryNextFrame_d__35_System_Collections
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__35$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RegisterFactory (const MethodInfo* method);
// 0x1823b84c0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_184347cdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgSubtabStrip");
    Il2CppMethodInitialized_184347cdf = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime->static_fields->_registered == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_BuildRuntime,
               (MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgSubtabStrip",__this_00,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime->static_fields->_registered = true;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1823b71d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b735e: nop 

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *value;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint32_t weight;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar8;
  TMPro_TextMeshProUGUI_o *__this;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar9;
  TMPro_TMP_FontAsset_o *value_00;
  UnityEngine_Color_o *pUVar10;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_01;
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this_02;
  UnityEngine_RectTransform_o *value_01;
  uint uVar11;
  float value_02;
  System_String_o *local_res18;
  UnityEngine_Color_Fields local_78;
  UnityEngine_Color_Fields local_68 [3];
  
  if (Il2CppMethodInitialized_184347ce0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgSubtabStripRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_GetValueOrDefault_40bc658);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault_40c2078);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"textMuted");
    Il2CppMethodInitialized_184347ce0 = '\x01';
  }
  if (((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
      (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
     (pGVar2 = (context->fields).Theme, pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    pGVar8 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar2,(node->fields).style,(MethodInfo *)0x0);
    if (go != (UnityEngine_GameObject_o *)0x0) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
      if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        weight = 400;
        local_res18 = "header";
      }
      else {
        local_res18 = (pGVar8->fields).fontFamily;
        weight = System_Nullable_uint___GetValueOrDefault_adc220
                           ((System_Nullable_uint__o *)&(pGVar8->fields).fontWeight,400,
                            (MethodInfo_ADC220 *)MethodInfo_System_Nullable_int_GetValueOrDefault_40bc658);
      }
      if (Il2CppMethodInitialized_184347cea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
        Il2CppMethodInitialized_184347cea = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
      System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
      pGVar3 = (node->fields).deferredChildren;
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        for (uVar11 = 0; uVar1 = (uint)pGVar3->max_length, (int)uVar11 < (int)uVar1; uVar11 = uVar11 + 1) {
          if (uVar1 <= uVar11) {
            ThrowIndexOutOfRangeException();
          }
          if (pGVar3->m_Items[(int)uVar11] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_1823b7679;
            System_Text_StringBuilder__Append_197dca0
                      (__this_00,(pGVar3->m_Items[(int)uVar11]->fields).text,(MethodInfo *)0x0);
          }
        }
      }
      if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
        pSVar9 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
        }
        value_00 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                             (local_res18,weight,pSVar9,false,(MethodInfo *)0x0);
        if (__this != (TMPro_TextMeshProUGUI_o *)0x0) {
          TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)__this,value_00,(MethodInfo *)0x0);
          if (pGVar8 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
            value_02 = 30.0;
          }
          else {
            value_02 = System_Nullable_float___GetValueOrDefault_adc4c0
                                 (&(pGVar8->fields).fontSize,30.0,
                                  (MethodInfo_ADC4C0 *)
                                  MethodInfo_System_Nullable_float_GetValueOrDefault_40c2078);
          }
          TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this,value_02,(MethodInfo *)0x0);
          TMPro_TMP_Text__set_fontStyle((TMPro_TMP_Text_o *)__this,0,(MethodInfo *)0x0);
          TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this,0x1001,(MethodInfo *)0x0);
          TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)__this,false,(MethodInfo *)0x0);
          TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)__this,0,(MethodInfo *)0x0);
          TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)__this,true,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (__this,true,(__this->klass->vtable)._25_set_raycastTarget.method);
          pGVar2 = (context->fields).Theme;
          if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            local_78.r = 1.0;
            local_78.g = 1.0;
            local_78.b = 1.0;
            local_78.a = 1.0;
            pUVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                ((UnityEngine_Color_o *)local_68,pGVar2,"text",
                                 (UnityEngine_Color_o *)&local_78,(MethodInfo *)0x0);
            pGVar2 = (context->fields).Theme;
            if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              uVar4._0_4_ = (pUVar10->fields).r;
              uVar4._4_4_ = (pUVar10->fields).g;
              uVar5._0_4_ = (pUVar10->fields).b;
              uVar5._4_4_ = (pUVar10->fields).a;
              local_78.r = 1.0;
              local_78.g = 1.0;
              local_78.b = 1.0;
              local_78.a = 0.45;
              pUVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                  ((UnityEngine_Color_o *)local_68,pGVar2,"textMuted",
                                   (UnityEngine_Color_o *)&local_78,(MethodInfo *)0x0);
              uVar6._0_4_ = (pUVar10->fields).r;
              uVar6._4_4_ = (pUVar10->fields).g;
              uVar7._0_4_ = (pUVar10->fields).b;
              uVar7._4_4_ = (pUVar10->fields).a;
              local_78._0_8_ = uVar6;
              local_78._8_8_ = uVar7;
              local_68[0]._0_8_ = uVar4;
              local_68[0]._8_8_ = uVar5;
              pSVar9 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__BuildMarkup
                                 (node,(UnityEngine_Color_o *)local_68,(UnityEngine_Color_o *)&local_78,
                                  (MethodInfo *)0x0);
              (*(__this->klass->vtable)._66_set_text.methodPtr)
                        (__this,pSVar9,(__this->klass->vtable)._66_set_text.method);
              (*(__this->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                        (__this,false,false,(__this->klass->vtable)._106_ForceMeshUpdate.method);
              parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
              pGVar2 = (context->fields).Theme;
              if (pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                local_68[0].r = 1.0;
                local_68[0].g = 1.0;
                local_68[0].b = 1.0;
                local_68[0].a = 1.0;
                pUVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                    ((UnityEngine_Color_o *)&local_78,pGVar2,"primary",
                                     (UnityEngine_Color_o *)local_68,(MethodInfo *)0x0);
                local_68[0].r = (pUVar10->fields).r;
                local_68[0].g = (pUVar10->fields).g;
                local_68[0].b = (pUVar10->fields).b;
                local_68[0].a = (pUVar10->fields).a;
                __this_01 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__CreateUnderline
                                      (parent,(UnityEngine_Color_o *)local_68,(MethodInfo *)0x0);
                __this_02 = UnityEngine_GameObject__AddComponent_object_
                                      (go,(MethodInfo_6F4D60 *)
                                          MethodInfo_UnityEngine_GameObject_AddComponent_AottgSubtabStripRuntime
                                      );
                if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
                  value = (context->fields).Actions;
                  value_01 = UnityEngine_UI_Graphic__get_rectTransform
                                       ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0);
                  if (__this_02 != (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *)0x0) {
                    (__this_02->fields)._node = node;
                    Il2CppCodeGenWriteBarrier(&(__this_02->fields)._node,node);
                    (__this_02->fields)._actions = value;
                    Il2CppCodeGenWriteBarrier(&(__this_02->fields)._actions,value);
                    (__this_02->fields)._text = __this;
                    Il2CppCodeGenWriteBarrier(&(__this_02->fields)._text,__this);
                    (__this_02->fields)._underline = value_01;
                    Il2CppCodeGenWriteBarrier(&(__this_02->fields)._underline,value_01);
                    (__this_02->fields)._activeColor.fields.r = (float)uVar4;
                    (__this_02->fields)._activeColor.fields.g = uVar4._4_4_;
                    (__this_02->fields)._activeColor.fields.b = (float)uVar5;
                    (__this_02->fields)._activeColor.fields.a = uVar5._4_4_;
                    (__this_02->fields)._inactiveColor.fields.r = (float)uVar6;
                    (__this_02->fields)._inactiveColor.fields.g = uVar6._4_4_;
                    (__this_02->fields)._inactiveColor.fields.b = (float)uVar7;
                    (__this_02->fields)._inactiveColor.fields.a = uVar7._4_4_;
                    Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__QueueGeometryRefresh
                              (__this_02,(MethodInfo *)0x0);
                    return true;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_1823b7679:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Setup (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, TMPro_TextMeshProUGUI_o* text, UnityEngine_RectTransform_o* underline, UnityEngine_Color_o activeColor, UnityEngine_Color_o inactiveColor, const MethodInfo* method);
// 0x1823b86c0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,TMPro_TextMeshProUGUI_o *text,
               UnityEngine_RectTransform_o *underline,UnityEngine_Color_o *activeColor,
               UnityEngine_Color_o *inactiveColor,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (__this->fields)._node = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._node,node);
  (__this->fields)._actions = actions;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions,actions);
  (__this->fields)._text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._text,text);
  (__this->fields)._underline = underline;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._underline,underline);
  fVar1 = (activeColor->fields).g;
  fVar2 = (activeColor->fields).b;
  fVar3 = (activeColor->fields).a;
  (__this->fields)._activeColor.fields.r = (activeColor->fields).r;
  (__this->fields)._activeColor.fields.g = fVar1;
  (__this->fields)._activeColor.fields.b = fVar2;
  (__this->fields)._activeColor.fields.a = fVar3;
  fVar1 = (inactiveColor->fields).g;
  fVar2 = (inactiveColor->fields).b;
  fVar3 = (inactiveColor->fields).a;
  (__this->fields)._inactiveColor.fields.r = (inactiveColor->fields).r;
  (__this->fields)._inactiveColor.fields.g = fVar1;
  (__this->fields)._inactiveColor.fields.b = fVar2;
  (__this->fields)._inactiveColor.fields.a = fVar3;
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__QueueGeometryRefresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerMove (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823b7f50

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerMove
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_String_o *tabId;
  
  tabId = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__LinkAt(__this,eventData,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__SetHovered(__this,tabId,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823b7ef0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__SetHovered(__this,(System_String_o *)0x0,(MethodInfo *)0x0);
  bVar1 = System_String__Equals_196c550
                    ((__this->fields)._pressedId,(System_String_o *)0x0,5,(MethodInfo *)0x0);
  if (!bVar1) {
    (__this->fields)._pressedId = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pressedId,(void *)0x0);
    Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerDown (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823b7e90

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerDown
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  
  b = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__LinkAt(__this,eventData,(MethodInfo *)0x0);
  bVar1 = System_String__Equals_196c550((__this->fields)._pressedId,b,5,(MethodInfo *)0x0);
  if (!bVar1) {
    (__this->fields)._pressedId = b;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pressedId,b);
    Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerUp (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823b7f80

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerUp
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_196c550
                    ((__this->fields)._pressedId,(System_String_o *)0x0,5,(MethodInfo *)0x0);
  if (!bVar1) {
    (__this->fields)._pressedId = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pressedId,(void *)0x0);
    Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerClick
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerClick (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823b7e10

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerClick
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  bool bVar1;
  System_String_o *value;
  UnityEngine_GameObject_o *source;
  
  value = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__LinkAt(__this,eventData,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    actions = (__this->fields)._actions;
    node = (__this->fields)._node;
    source = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Dispatch(node,actions,source,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$LinkAt
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__LinkAt (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1823b7c60

System_String_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__LinkAt
          (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
          UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  TMPro_TMP_LinkInfo_array *pTVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  bool bVar6;
  uint uVar7;
  UnityEngine_Camera_o *camera;
  TMPro_TMP_TextInfo_o *pTVar8;
  System_String_o *value;
  UnityEngine_Vector3_o local_38 [4];
  
  if (Il2CppMethodInitialized_184347ce1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_TextUtilities);
    Il2CppMethodInitialized_184347ce1 = '\x01';
  }
  pTVar3 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((!bVar6) && ((__this->fields)._node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
     (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0)) {
    pTVar3 = (__this->fields)._text;
    fVar1 = (eventData->fields)._position_k__BackingField.fields.x;
    fVar2 = (eventData->fields)._position_k__BackingField.fields.y;
    camera = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
    if ((TypeInfo_TMPro_TMP_TextUtilities->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_TextUtilities);
    }
    local_38[0].fields.z = 0.0;
    local_38[0].fields.x = fVar1;
    local_38[0].fields.y = fVar2;
    uVar7 = TMPro_TMP_TextUtilities__FindIntersectingLink
                      ((TMPro_TMP_Text_o *)pTVar3,local_38,camera,(MethodInfo *)0x0);
    if (-1 < (int)uVar7) {
      pTVar3 = (__this->fields)._text;
      if ((pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) &&
         (pTVar8 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar3,(MethodInfo *)0x0),
         pTVar8 != (TMPro_TMP_TextInfo_o *)0x0)) {
        if ((pTVar8->fields).linkCount <= (int)uVar7) {
          return (System_String_o *)0x0;
        }
        pTVar3 = (__this->fields)._text;
        if (((pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) &&
            (pTVar8 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar3,(MethodInfo *)0x0),
            pTVar8 != (TMPro_TMP_TextInfo_o *)0x0)) &&
           (pTVar4 = (pTVar8->fields).linkInfo, pTVar4 != (TMPro_TMP_LinkInfo_array *)0x0)) {
          if ((uint)pTVar4->max_length <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          value = TMPro_TMP_LinkInfo__GetLinkID(pTVar4->m_Items + (int)uVar7,(MethodInfo *)0x0);
          pGVar5 = (__this->fields)._node;
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            bVar6 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Contains
                              ((pGVar5->fields).options,value,(MethodInfo *)0x0);
            if (!bVar6) {
              return (System_String_o *)0x0;
            }
            return value;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$SetHovered
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__SetHovered (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, System_String_o* tabId, const MethodInfo* method);
// 0x1823b85c0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__SetHovered
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,System_String_o *tabId,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *value;
  float target;
  
  bVar1 = System_String__Equals_196c550((__this->fields)._hoveredId,tabId,5,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((__this->fields)._hoverTween != (UnityEngine_Coroutine_o *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
                ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._hoverTween,(MethodInfo *)0x0);
    }
    bVar1 = System_String__IsNullOrEmpty(tabId,(MethodInfo *)0x0);
    if (bVar1) {
      target = 0.0;
    }
    else {
      (__this->fields)._hoveredId = tabId;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._hoveredId,tabId);
      target = 1.0;
      (__this->fields)._hoverAmount = 0.0;
    }
    routine = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover
                        (__this,target,bVar1,(MethodInfo *)0x0);
    value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    (__this->fields)._hoverTween = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hoverTween,value);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$AnimateHover
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, float target, bool clearAfter, const MethodInfo* method);
// 0x1823b61d0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover
          (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,float target,bool clearAfter,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_184347ce2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_AnimateHover_d__27);
    Il2CppMethodInitialized_184347ce2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_AnimateHover_d__27);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).target = target;
  (__this_00->fields).clearAfter = clearAfter;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$SetPressed
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__SetPressed (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, System_String_o* tabId, const MethodInfo* method);
// 0x1823b8670

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__SetPressed
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,System_String_o *tabId,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_196c550((__this->fields)._pressedId,tabId,5,(MethodInfo *)0x0);
  if (!bVar1) {
    (__this->fields)._pressedId = tabId;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._pressedId,tabId);
    Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$ApplyMeshEffects
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x1823b69e0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b6bb4: nop dword ptr [rax]
// asm:   0x1823b6bb8: nop dword ptr [rax + rax]
// asm:   0x1823b6cbe: nop 

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  TMPro_TextMeshProUGUI_o *pTVar9;
  TMPro_TMP_CharacterInfo_array *pTVar10;
  undefined8 uVar11;
  TMPro_TMP_MeshInfo_array *pTVar12;
  UnityEngine_Color32_array *pUVar13;
  TMPro_TMP_TextElement_o *pTVar14;
  UnityEngine_TextCore_Glyph_o *pUVar15;
  TMPro_TMP_FontAsset_o *pTVar16;
  UnityEngine_Material_o *pUVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  bool bVar23;
  UnityEngine_Color32_o UVar24;
  TMPro_TMP_TextInfo_o *pTVar25;
  TMPro_TMP_CharacterInfo_Fields *pTVar26;
  undefined8 *puVar27;
  TMPro_TMP_CharacterInfo_Fields *pTVar28;
  TMPro_TMP_CharacterInfo_Fields *pTVar29;
  int iVar30;
  longlong lVar31;
  float fVar32;
  UnityEngine_Color_o local_3c8;
  TMPro_TMP_LinkInfo_o local_3b8;
  undefined8 local_388 [6];
  uint local_358;
  uint uStack_344;
  undefined8 local_208 [46];
  char local_98;
  
  if (Il2CppMethodInitialized_184347ce3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347ce3 = '\x01';
  }
  pTVar9 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar23 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar23) {
    return;
  }
  pTVar9 = (__this->fields)._text;
  if (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar9->klass->vtable)._106_ForceMeshUpdate.methodPtr)
              (pTVar9,false,false,(pTVar9->klass->vtable)._106_ForceMeshUpdate.method);
    bVar23 = System_String__IsNullOrEmpty((__this->fields)._hoveredId,(MethodInfo *)0x0);
    if ((!bVar23) && (fVar32 = (__this->fields)._hoverAmount, 0.0 < fVar32)) {
      fVar1 = (__this->fields)._inactiveColor.fields.r;
      fVar2 = (__this->fields)._inactiveColor.fields.g;
      fVar3 = (__this->fields)._inactiveColor.fields.b;
      fVar4 = (__this->fields)._inactiveColor.fields.a;
      if (fVar32 < 0.0) {
        fVar32 = 0.0;
      }
      else if (1.0 < fVar32) {
        fVar32 = 1.0;
      }
      fVar5 = (__this->fields)._activeColor.fields.r;
      fVar6 = (__this->fields)._activeColor.fields.g;
      fVar7 = (__this->fields)._activeColor.fields.b;
      fVar8 = (__this->fields)._activeColor.fields.a;
      local_3b8.fields.linkID = (System_Char_array *)0x0;
      local_3b8.fields.textComponent = (TMPro_TMP_Text_o *)0x0;
      local_3b8.fields.hashCode = 0;
      local_3b8.fields.linkIdFirstCharacterIndex = 0;
      local_3b8.fields.linkIdLength = 0;
      local_3b8.fields.linkTextfirstCharacterIndex = 0;
      local_3b8.fields.linkTextLength = 0;
      local_3b8.fields._28_4_ = 0;
      bVar23 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__TryFindLink
                         (__this,(__this->fields)._hoveredId,&local_3b8,(MethodInfo *)0x0);
      if (bVar23) {
        local_3c8.fields.r = (fVar5 - fVar1) * fVar32 + fVar1;
        local_3c8.fields.g = (fVar6 - fVar2) * fVar32 + fVar2;
        local_3c8.fields.b = (fVar7 - fVar3) * fVar32 + fVar3;
        local_3c8.fields.a = (fVar8 - fVar4) * fVar32 + fVar4;
        UVar24 = UnityEngine_Color32__op_Implicit(&local_3c8,(MethodInfo *)0x0);
        iVar30 = 0;
        if (0 < local_3b8.fields.linkTextLength) {
          do {
            pTVar9 = (__this->fields)._text;
            if (((pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) ||
                (pTVar25 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar9,(MethodInfo *)0x0),
                pTVar25 == (TMPro_TMP_TextInfo_o *)0x0)) ||
               (pTVar10 = (pTVar25->fields).characterInfo, pTVar10 == (TMPro_TMP_CharacterInfo_array *)0x0))
            goto label_1823b6eb2;
            if ((uint)pTVar10->max_length <= (uint)(local_3b8.fields.linkTextfirstCharacterIndex + iVar30))
            goto label_1823b6eac;
            lVar31 = 2;
            pTVar28 = &pTVar10->m_Items[local_3b8.fields.linkTextfirstCharacterIndex + iVar30].fields;
            pTVar29 = pTVar28;
            puVar22 = local_388;
            do {
              puVar27 = puVar22;
              pTVar26 = pTVar29;
              uVar11 = *(undefined8 *)&pTVar26->index;
              pTVar14 = pTVar26->textElement;
              pUVar15 = pTVar26->alternativeGlyph;
              pTVar29 = (TMPro_TMP_CharacterInfo_Fields *)&(pTVar26->vertex_TL).fields.uv.fields.y;
              *puVar27 = *(undefined8 *)&pTVar26->elementType;
              puVar27[1] = uVar11;
              pTVar16 = pTVar26->fontAsset;
              pUVar17 = pTVar26->material;
              puVar27[2] = pTVar14;
              puVar27[3] = pUVar15;
              uVar11 = *(undefined8 *)&pTVar26->materialReferenceIndex;
              uVar18 = *(undefined8 *)&pTVar26->pointSize;
              puVar27[4] = pTVar16;
              puVar27[5] = pUVar17;
              uVar19 = *(undefined8 *)&pTVar26->pageNumber;
              uVar20 = *(undefined8 *)&(pTVar26->vertex_BL).fields.position.fields;
              puVar27[6] = uVar11;
              puVar27[7] = uVar18;
              uVar11 = *(undefined8 *)&(pTVar26->vertex_BL).fields.position.fields.z;
              uVar18 = *(undefined8 *)&(pTVar26->vertex_BL).fields.uv.fields.y;
              puVar27[8] = uVar19;
              puVar27[9] = uVar20;
              uVar19 = *(undefined8 *)&(pTVar26->vertex_BL).fields.uv.fields.w;
              uVar20 = *(undefined8 *)&(pTVar26->vertex_BL).fields.uv2.fields.y;
              puVar27[10] = uVar11;
              puVar27[0xb] = uVar18;
              uVar11 = *(undefined8 *)&(pTVar26->vertex_TL).fields.position.fields;
              uVar18 = *(undefined8 *)&(pTVar26->vertex_TL).fields.position.fields.z;
              puVar27[0xc] = uVar19;
              puVar27[0xd] = uVar20;
              puVar27[0xe] = uVar11;
              puVar27[0xf] = uVar18;
              lVar31 = lVar31 + -1;
              puVar22 = puVar27 + 0x10;
            } while (lVar31 != 0);
            uVar11 = *(undefined8 *)&(pTVar26->vertex_TL).fields.uv.fields.w;
            uVar18 = *(undefined8 *)&(pTVar26->vertex_TL).fields.uv2.fields.y;
            uVar19 = *(undefined8 *)&(pTVar26->vertex_TR).fields.position.fields;
            puVar27[0x10] = *(undefined8 *)pTVar29;
            puVar27[0x11] = uVar11;
            uVar11 = *(undefined8 *)&(pTVar26->vertex_TR).fields.position.fields.z;
            uVar20 = *(undefined8 *)&(pTVar26->vertex_TR).fields.uv.fields.y;
            puVar27[0x12] = uVar18;
            puVar27[0x13] = uVar19;
            uVar18 = *(undefined8 *)&(pTVar26->vertex_TR).fields.uv.fields.w;
            uVar19 = *(undefined8 *)&(pTVar26->vertex_TR).fields.uv2.fields.y;
            puVar27[0x14] = uVar11;
            puVar27[0x15] = uVar20;
            uVar11 = *(undefined8 *)&(pTVar26->vertex_BR).fields.position.fields;
            uVar20 = *(undefined8 *)&(pTVar26->vertex_BR).fields.position.fields.z;
            puVar27[0x16] = uVar18;
            puVar27[0x17] = uVar19;
            uVar18 = *(undefined8 *)&(pTVar26->vertex_BR).fields.uv.fields.y;
            uVar19 = *(undefined8 *)&(pTVar26->vertex_BR).fields.uv.fields.w;
            puVar27[0x18] = uVar11;
            puVar27[0x19] = uVar20;
            uVar20 = *(undefined8 *)&(pTVar26->vertex_BR).fields.uv2.fields.y;
            uVar21 = *(undefined8 *)&(pTVar26->topLeft).fields;
            uVar11 = *(undefined8 *)&(pTVar26->topLeft).fields.z;
            puVar27[0x1a] = uVar18;
            puVar27[0x1b] = uVar19;
            puVar27[0x1c] = uVar20;
            puVar27[0x1d] = uVar21;
            puVar27[0x1e] = uVar11;
            lVar31 = 2;
            puVar22 = local_208;
            do {
              pTVar29 = pTVar28;
              puVar27 = puVar22;
              uVar11 = *(undefined8 *)&pTVar29->index;
              pTVar14 = pTVar29->textElement;
              pUVar15 = pTVar29->alternativeGlyph;
              pTVar28 = (TMPro_TMP_CharacterInfo_Fields *)&(pTVar29->vertex_TL).fields.uv.fields.y;
              *puVar27 = *(undefined8 *)&pTVar29->elementType;
              puVar27[1] = uVar11;
              pTVar16 = pTVar29->fontAsset;
              pUVar17 = pTVar29->material;
              puVar27[2] = pTVar14;
              puVar27[3] = pUVar15;
              uVar11 = *(undefined8 *)&pTVar29->materialReferenceIndex;
              uVar18 = *(undefined8 *)&pTVar29->pointSize;
              puVar27[4] = pTVar16;
              puVar27[5] = pUVar17;
              uVar19 = *(undefined8 *)&pTVar29->pageNumber;
              uVar20 = *(undefined8 *)&(pTVar29->vertex_BL).fields.position.fields;
              puVar27[6] = uVar11;
              puVar27[7] = uVar18;
              uVar11 = *(undefined8 *)&(pTVar29->vertex_BL).fields.position.fields.z;
              uVar18 = *(undefined8 *)&(pTVar29->vertex_BL).fields.uv.fields.y;
              puVar27[8] = uVar19;
              puVar27[9] = uVar20;
              uVar19 = *(undefined8 *)&(pTVar29->vertex_BL).fields.uv.fields.w;
              uVar20 = *(undefined8 *)&(pTVar29->vertex_BL).fields.uv2.fields.y;
              puVar27[10] = uVar11;
              puVar27[0xb] = uVar18;
              uVar11 = *(undefined8 *)&(pTVar29->vertex_TL).fields.position.fields;
              uVar18 = *(undefined8 *)&(pTVar29->vertex_TL).fields.position.fields.z;
              puVar27[0xc] = uVar19;
              puVar27[0xd] = uVar20;
              puVar27[0xe] = uVar11;
              puVar27[0xf] = uVar18;
              lVar31 = lVar31 + -1;
              puVar22 = puVar27 + 0x10;
            } while (lVar31 != 0);
            uVar18 = *(undefined8 *)&(pTVar29->vertex_TL).fields.uv.fields.w;
            uVar11 = *(undefined8 *)&(pTVar29->topLeft).fields.z;
            uVar19 = *(undefined8 *)&(pTVar29->vertex_TL).fields.uv2.fields.y;
            uVar20 = *(undefined8 *)&(pTVar29->vertex_TR).fields.position.fields;
            puVar27[0x10] = *(undefined8 *)pTVar28;
            puVar27[0x11] = uVar18;
            uVar18 = *(undefined8 *)&(pTVar29->vertex_TR).fields.position.fields.z;
            uVar21 = *(undefined8 *)&(pTVar29->vertex_TR).fields.uv.fields.y;
            puVar27[0x12] = uVar19;
            puVar27[0x13] = uVar20;
            uVar19 = *(undefined8 *)&(pTVar29->vertex_TR).fields.uv.fields.w;
            uVar20 = *(undefined8 *)&(pTVar29->vertex_TR).fields.uv2.fields.y;
            puVar27[0x14] = uVar18;
            puVar27[0x15] = uVar21;
            uVar18 = *(undefined8 *)&(pTVar29->vertex_BR).fields.position.fields;
            uVar21 = *(undefined8 *)&(pTVar29->vertex_BR).fields.position.fields.z;
            puVar27[0x16] = uVar19;
            puVar27[0x17] = uVar20;
            uVar19 = *(undefined8 *)&(pTVar29->vertex_BR).fields.uv.fields.y;
            uVar20 = *(undefined8 *)&(pTVar29->vertex_BR).fields.uv.fields.w;
            puVar27[0x18] = uVar18;
            puVar27[0x19] = uVar21;
            uVar18 = *(undefined8 *)&(pTVar29->vertex_BR).fields.uv2.fields.y;
            uVar21 = *(undefined8 *)&(pTVar29->topLeft).fields;
            puVar27[0x1a] = uVar19;
            puVar27[0x1b] = uVar20;
            puVar27[0x1c] = uVar18;
            puVar27[0x1d] = uVar21;
            puVar27[0x1e] = uVar11;
            if (local_98 != '\0') {
              pTVar9 = (__this->fields)._text;
              if (((pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) ||
                  (pTVar25 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar9,(MethodInfo *)0x0),
                  pTVar25 == (TMPro_TMP_TextInfo_o *)0x0)) ||
                 (pTVar12 = (pTVar25->fields).meshInfo, pTVar12 == (TMPro_TMP_MeshInfo_array *)0x0)) {
label_1823b6eb2:
                ThrowNullReferenceException();
              }
              if ((uint)pTVar12->max_length <= local_358) {
label_1823b6eac:
                ThrowIndexOutOfRangeException();
              }
              pUVar13 = pTVar12->m_Items[(int)local_358].fields.colors32;
              if (pUVar13 == (UnityEngine_Color32_array *)0x0) goto label_1823b6eb2;
              lVar31 = (longlong)(int)uStack_344;
              if ((((uint)pUVar13->max_length <= uStack_344 + 3) ||
                  (pUVar13->m_Items[lVar31 + 3].fields._overlap_0._at_rgba.rgba =
                        (int32_t)UVar24.fields._overlap_0, (uint)pUVar13->max_length <= uStack_344 + 2)) ||
                 ((pUVar13->m_Items[lVar31 + 2].fields._overlap_0._at_rgba.rgba =
                        (int32_t)UVar24.fields._overlap_0, (uint)pUVar13->max_length <= uStack_344 + 1 ||
                  (pUVar13->m_Items[lVar31 + 1].fields._overlap_0._at_rgba.rgba =
                        (int32_t)UVar24.fields._overlap_0, (uint)pUVar13->max_length <= uStack_344))))
              goto label_1823b6eac;
              pUVar13->m_Items[lVar31].fields._overlap_0._at_rgba.rgba = (int32_t)UVar24.fields._overlap_0;
            }
            iVar30 = iVar30 + 1;
          } while (iVar30 < local_3b8.fields.linkTextLength);
        }
      }
    }
    bVar23 = System_String__IsNullOrEmpty((__this->fields)._pressedId,(MethodInfo *)0x0);
    if (!bVar23) {
      Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyLinkScale
                (__this,(__this->fields)._pressedId,0.96,(MethodInfo *)0x0);
    }
    pTVar9 = (__this->fields)._text;
    if (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0) {
      (*(pTVar9->klass->vtable)._108_UpdateVertexData.methodPtr)
                (pTVar9,0x11,(pTVar9->klass->vtable)._108_UpdateVertexData.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$ApplyLinkColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyLinkColor (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, System_String_o* tabId, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1823b6260
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b62c6: nop word ptr [rax + rax]
// asm:   0x1823b63ce: nop 
// asm:   0x1823b64f3: mov rdi, qword ptr [rsp + 0x370]

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyLinkColor
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,System_String_o *tabId,
               UnityEngine_Color_o *color,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  TMPro_TMP_CharacterInfo_array *pTVar2;
  undefined8 uVar3;
  TMPro_TMP_MeshInfo_array *pTVar4;
  UnityEngine_Color32_array *pUVar5;
  TMPro_TMP_TextElement_o *pTVar6;
  UnityEngine_TextCore_Glyph_o *pUVar7;
  TMPro_TMP_FontAsset_o *pTVar8;
  UnityEngine_Material_o *pUVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  TMPro_TMP_CharacterInfo_o *pTVar14;
  undefined8 *puVar15;
  bool bVar16;
  UnityEngine_Color32_o UVar17;
  TMPro_TMP_TextInfo_o *pTVar18;
  TMPro_TMP_CharacterInfo_o *pTVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong lVar22;
  TMPro_TMP_LinkInfo_o local_348;
  UnityEngine_Color_Fields local_318;
  undefined8 local_308 [6];
  uint local_2d8;
  uint uStack_2c4;
  undefined8 local_188 [46];
  char local_18;
  
  local_348.fields.linkID = (System_Char_array *)0x0;
  local_348.fields.textComponent = (TMPro_TMP_Text_o *)0x0;
  local_348.fields.hashCode = 0;
  local_348.fields.linkIdFirstCharacterIndex = 0;
  local_348.fields.linkIdLength = 0;
  local_348.fields.linkTextfirstCharacterIndex = 0;
  local_348.fields.linkTextLength = 0;
  local_348.fields._28_4_ = 0;
  bVar16 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__TryFindLink
                     (__this,tabId,&local_348,(MethodInfo *)0x0);
  if (bVar16) {
    local_318.r = (color->fields).r;
    local_318.g = (color->fields).g;
    local_318.b = (color->fields).b;
    local_318.a = (color->fields).a;
    UVar17 = UnityEngine_Color32__op_Implicit((UnityEngine_Color_o *)&local_318,(MethodInfo *)0x0);
    iVar21 = 0;
    if (0 < local_348.fields.linkTextLength) {
      do {
        pTVar1 = (__this->fields)._text;
        if (((pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) ||
            (pTVar18 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0),
            pTVar18 == (TMPro_TMP_TextInfo_o *)0x0)) ||
           (pTVar2 = (pTVar18->fields).characterInfo, pTVar2 == (TMPro_TMP_CharacterInfo_array *)0x0))
        goto label_1823b650c;
        if ((uint)pTVar2->max_length <= (uint)(local_348.fields.linkTextfirstCharacterIndex + iVar21))
        goto label_1823b6512;
        lVar22 = 2;
        pTVar14 = pTVar2->m_Items + (local_348.fields.linkTextfirstCharacterIndex + iVar21);
        puVar15 = local_308;
        do {
          puVar20 = puVar15;
          pTVar19 = pTVar14;
          uVar3 = *(undefined8 *)&(pTVar19->fields).index;
          pTVar6 = (pTVar19->fields).textElement;
          pUVar7 = (pTVar19->fields).alternativeGlyph;
          pTVar14 = (TMPro_TMP_CharacterInfo_o *)((longlong)&(pTVar19->fields).vertex_TL.fields.uv.fields + 4)
          ;
          *puVar20 = *(undefined8 *)&pTVar19->fields;
          puVar20[1] = uVar3;
          pTVar8 = (pTVar19->fields).fontAsset;
          pUVar9 = (pTVar19->fields).material;
          puVar20[2] = pTVar6;
          puVar20[3] = pUVar7;
          uVar3 = *(undefined8 *)&(pTVar19->fields).materialReferenceIndex;
          uVar10 = *(undefined8 *)&(pTVar19->fields).pointSize;
          puVar20[4] = pTVar8;
          puVar20[5] = pUVar9;
          uVar11 = *(undefined8 *)&(pTVar19->fields).pageNumber;
          uVar12 = *(undefined8 *)&(pTVar19->fields).vertex_BL.fields.position.fields;
          puVar20[6] = uVar3;
          puVar20[7] = uVar10;
          uVar3 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BL.fields.position.fields + 8);
          uVar10 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BL.fields.uv.fields + 4);
          puVar20[8] = uVar11;
          puVar20[9] = uVar12;
          uVar11 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BL.fields.uv.fields + 0xc);
          uVar12 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BL.fields.uv2.fields + 4);
          puVar20[10] = uVar3;
          puVar20[0xb] = uVar10;
          uVar3 = *(undefined8 *)&(pTVar19->fields).vertex_TL.fields.position.fields;
          uVar10 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TL.fields.position.fields + 8);
          puVar20[0xc] = uVar11;
          puVar20[0xd] = uVar12;
          puVar20[0xe] = uVar3;
          puVar20[0xf] = uVar10;
          lVar22 = lVar22 + -1;
          puVar15 = puVar20 + 0x10;
        } while (lVar22 != 0);
        uVar3 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TL.fields.uv.fields + 0xc);
        uVar10 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TL.fields.uv2.fields + 4);
        uVar11 = *(undefined8 *)&(pTVar19->fields).vertex_TR.fields.position.fields;
        puVar20[0x10] = *(undefined8 *)pTVar14;
        puVar20[0x11] = uVar3;
        uVar3 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TR.fields.position.fields + 8);
        uVar12 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TR.fields.uv.fields + 4);
        puVar20[0x12] = uVar10;
        puVar20[0x13] = uVar11;
        uVar10 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TR.fields.uv.fields + 0xc);
        uVar11 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TR.fields.uv2.fields + 4);
        puVar20[0x14] = uVar3;
        puVar20[0x15] = uVar12;
        uVar3 = *(undefined8 *)&(pTVar19->fields).vertex_BR.fields.position.fields;
        uVar12 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BR.fields.position.fields + 8);
        puVar20[0x16] = uVar10;
        puVar20[0x17] = uVar11;
        uVar10 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BR.fields.uv.fields + 4);
        uVar11 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BR.fields.uv.fields + 0xc);
        puVar20[0x18] = uVar3;
        puVar20[0x19] = uVar12;
        uVar12 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BR.fields.uv2.fields + 4);
        uVar13 = *(undefined8 *)&(pTVar19->fields).topLeft.fields;
        uVar3 = *(undefined8 *)&(pTVar19->fields).topLeft.fields.z;
        puVar20[0x1a] = uVar10;
        puVar20[0x1b] = uVar11;
        puVar20[0x1c] = uVar12;
        puVar20[0x1d] = uVar13;
        puVar20[0x1e] = uVar3;
        lVar22 = 2;
        pTVar14 = pTVar2->m_Items + (local_348.fields.linkTextfirstCharacterIndex + iVar21);
        puVar15 = local_188;
        do {
          puVar20 = puVar15;
          pTVar19 = pTVar14;
          uVar3 = *(undefined8 *)&(pTVar19->fields).index;
          pTVar6 = (pTVar19->fields).textElement;
          pUVar7 = (pTVar19->fields).alternativeGlyph;
          pTVar14 = (TMPro_TMP_CharacterInfo_o *)((longlong)&(pTVar19->fields).vertex_TL.fields.uv.fields + 4)
          ;
          *puVar20 = *(undefined8 *)&pTVar19->fields;
          puVar20[1] = uVar3;
          pTVar8 = (pTVar19->fields).fontAsset;
          pUVar9 = (pTVar19->fields).material;
          puVar20[2] = pTVar6;
          puVar20[3] = pUVar7;
          uVar3 = *(undefined8 *)&(pTVar19->fields).materialReferenceIndex;
          uVar10 = *(undefined8 *)&(pTVar19->fields).pointSize;
          puVar20[4] = pTVar8;
          puVar20[5] = pUVar9;
          uVar11 = *(undefined8 *)&(pTVar19->fields).pageNumber;
          uVar12 = *(undefined8 *)&(pTVar19->fields).vertex_BL.fields.position.fields;
          puVar20[6] = uVar3;
          puVar20[7] = uVar10;
          uVar3 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BL.fields.position.fields + 8);
          uVar10 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BL.fields.uv.fields + 4);
          puVar20[8] = uVar11;
          puVar20[9] = uVar12;
          uVar11 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BL.fields.uv.fields + 0xc);
          uVar12 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BL.fields.uv2.fields + 4);
          puVar20[10] = uVar3;
          puVar20[0xb] = uVar10;
          uVar3 = *(undefined8 *)&(pTVar19->fields).vertex_TL.fields.position.fields;
          uVar10 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TL.fields.position.fields + 8);
          puVar20[0xc] = uVar11;
          puVar20[0xd] = uVar12;
          puVar20[0xe] = uVar3;
          puVar20[0xf] = uVar10;
          lVar22 = lVar22 + -1;
          puVar15 = puVar20 + 0x10;
        } while (lVar22 != 0);
        uVar10 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TL.fields.uv.fields + 0xc);
        uVar3 = *(undefined8 *)&(pTVar19->fields).topLeft.fields.z;
        uVar11 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TL.fields.uv2.fields + 4);
        uVar12 = *(undefined8 *)&(pTVar19->fields).vertex_TR.fields.position.fields;
        puVar20[0x10] = *(undefined8 *)pTVar14;
        puVar20[0x11] = uVar10;
        uVar10 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TR.fields.position.fields + 8);
        uVar13 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TR.fields.uv.fields + 4);
        puVar20[0x12] = uVar11;
        puVar20[0x13] = uVar12;
        uVar11 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TR.fields.uv.fields + 0xc);
        uVar12 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_TR.fields.uv2.fields + 4);
        puVar20[0x14] = uVar10;
        puVar20[0x15] = uVar13;
        uVar10 = *(undefined8 *)&(pTVar19->fields).vertex_BR.fields.position.fields;
        uVar13 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BR.fields.position.fields + 8);
        puVar20[0x16] = uVar11;
        puVar20[0x17] = uVar12;
        uVar11 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BR.fields.uv.fields + 4);
        uVar12 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BR.fields.uv.fields + 0xc);
        puVar20[0x18] = uVar10;
        puVar20[0x19] = uVar13;
        uVar10 = *(undefined8 *)((longlong)&(pTVar19->fields).vertex_BR.fields.uv2.fields + 4);
        uVar13 = *(undefined8 *)&(pTVar19->fields).topLeft.fields;
        puVar20[0x1a] = uVar11;
        puVar20[0x1b] = uVar12;
        puVar20[0x1c] = uVar10;
        puVar20[0x1d] = uVar13;
        puVar20[0x1e] = uVar3;
        if (local_18 != '\0') {
          pTVar1 = (__this->fields)._text;
          if (((pTVar1 == (TMPro_TextMeshProUGUI_o *)0x0) ||
              (pTVar18 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0),
              pTVar18 == (TMPro_TMP_TextInfo_o *)0x0)) ||
             (pTVar4 = (pTVar18->fields).meshInfo, pTVar4 == (TMPro_TMP_MeshInfo_array *)0x0)) {
label_1823b650c:
            ThrowNullReferenceException();
          }
          if ((uint)pTVar4->max_length <= local_2d8) goto label_1823b6512;
          pUVar5 = pTVar4->m_Items[(int)local_2d8].fields.colors32;
          if (pUVar5 == (UnityEngine_Color32_array *)0x0) goto label_1823b650c;
          lVar22 = (longlong)(int)uStack_2c4;
          if ((uint)pUVar5->max_length <= uStack_2c4 + 3) {
label_1823b6512:
            ThrowIndexOutOfRangeException();
          }
          pUVar5->m_Items[lVar22 + 3].fields._overlap_0._at_rgba.rgba = (int32_t)UVar17.fields._overlap_0;
          if ((uint)pUVar5->max_length <= uStack_2c4 + 2) goto label_1823b6512;
          pUVar5->m_Items[lVar22 + 2].fields._overlap_0._at_rgba.rgba = (int32_t)UVar17.fields._overlap_0;
          if (((uint)pUVar5->max_length <= uStack_2c4 + 1) ||
             (pUVar5->m_Items[lVar22 + 1].fields._overlap_0._at_rgba.rgba = (int32_t)UVar17.fields._overlap_0,
             (uint)pUVar5->max_length <= uStack_2c4)) goto label_1823b6512;
          pUVar5->m_Items[lVar22].fields._overlap_0._at_rgba.rgba = (int32_t)UVar17.fields._overlap_0;
        }
        iVar21 = iVar21 + 1;
      } while (iVar21 < local_348.fields.linkTextLength);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$ApplyLinkScale
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyLinkScale (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, System_String_o* tabId, float scale, const MethodInfo* method);
// 0x1823b6520
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b66d9: nop dword ptr [rax]
// asm:   0x1823b67ad: xorps xmm9, xmm9
// asm:   0x1823b690e: mov r8d, r9d
// asm:   0x1823b698c: movaps xmm7, xmmword ptr [rsp + 0x4f0]
// asm:   0x1823b6994: movaps xmm6, xmmword ptr [rsp + 0x500]
// asm:   0x1823b699c: mov rbx, qword ptr [rsp + 0x520]
// asm:   0x1823b69a4: movaps xmm9, xmmword ptr [rsp + 0x4d0]
// asm:   0x1823b69ad: mov rdi, qword ptr [rsp + 0x528]

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyLinkScale
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,System_String_o *tabId,float scale,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  TMPro_TMP_CharacterInfo_array *pTVar4;
  undefined8 uVar5;
  TMPro_TMP_MeshInfo_array *pTVar6;
  UnityEngine_Vector3_array *pUVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int32_t iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  bool bVar23;
  TMPro_TMP_TextInfo_o *pTVar24;
  undefined8 *puVar25;
  longlong lVar26;
  undefined8 *puVar27;
  uint uVar28;
  ulonglong uVar29;
  int iVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  TMPro_TMP_LinkInfo_o local_4f8;
  undefined8 local_4c8 [6];
  uint local_498;
  uint uStack_484;
  float fStack_3d4;
  float local_3a8;
  float local_3a0;
  undefined8 local_348 [48];
  undefined8 local_1c8 [32];
  float local_c8;
  char local_58;
  
  local_4f8.fields.linkID = (System_Char_array *)0x0;
  local_4f8.fields.textComponent = (TMPro_TMP_Text_o *)0x0;
  local_4f8.fields.hashCode = 0;
  local_4f8.fields.linkIdFirstCharacterIndex = 0;
  local_4f8.fields.linkIdLength = 0;
  local_4f8.fields.linkTextfirstCharacterIndex = 0;
  local_4f8.fields.linkTextLength = 0;
  local_4f8.fields._28_4_ = 0;
  bVar23 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__TryFindLink
                     (__this,tabId,&local_4f8,(MethodInfo *)0x0);
  if ((!bVar23) || (iVar20 = local_4f8.fields.linkTextLength, local_4f8.fields.linkTextLength < 1)) {
    return;
  }
  pTVar3 = (__this->fields)._text;
  if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
    uVar28 = local_4f8.fields.linkTextfirstCharacterIndex;
    uVar29 = (ulonglong)local_4f8.fields.linkTextfirstCharacterIndex;
    pTVar24 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar3,(MethodInfo *)0x0);
    if ((pTVar24 != (TMPro_TMP_TextInfo_o *)0x0) &&
       (pTVar4 = (pTVar24->fields).characterInfo, pTVar4 != (TMPro_TMP_CharacterInfo_array *)0x0)) {
      il2cpp_runtime_helper_180354250(pTVar4,local_348,uVar29);
      pTVar3 = (__this->fields)._text;
      if ((pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) &&
         ((pTVar24 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar3,(MethodInfo *)0x0),
          pTVar24 != (TMPro_TMP_TextInfo_o *)0x0 &&
          (pTVar4 = (pTVar24->fields).characterInfo, pTVar4 != (TMPro_TMP_CharacterInfo_array *)0x0)))) {
        iVar30 = iVar20 + -1 + uVar28;
        lVar26 = 2;
        puVar21 = local_348;
        puVar22 = local_4c8;
        do {
          puVar27 = puVar22;
          puVar25 = puVar21;
          uVar5 = puVar25[1];
          uVar16 = puVar25[2];
          uVar17 = puVar25[3];
          *puVar27 = *puVar25;
          puVar27[1] = uVar5;
          uVar5 = puVar25[4];
          uVar18 = puVar25[5];
          puVar27[2] = uVar16;
          puVar27[3] = uVar17;
          uVar16 = puVar25[6];
          uVar17 = puVar25[7];
          puVar27[4] = uVar5;
          puVar27[5] = uVar18;
          uVar5 = puVar25[8];
          uVar18 = puVar25[9];
          puVar27[6] = uVar16;
          puVar27[7] = uVar17;
          uVar16 = puVar25[10];
          uVar17 = puVar25[0xb];
          puVar27[8] = uVar5;
          puVar27[9] = uVar18;
          uVar5 = puVar25[0xc];
          uVar18 = puVar25[0xd];
          puVar27[10] = uVar16;
          puVar27[0xb] = uVar17;
          uVar16 = puVar25[0xe];
          uVar17 = puVar25[0xf];
          puVar27[0xc] = uVar5;
          puVar27[0xd] = uVar18;
          puVar27[0xe] = uVar16;
          puVar27[0xf] = uVar17;
          lVar26 = lVar26 + -1;
          puVar21 = puVar25 + 0x10;
          puVar22 = puVar27 + 0x10;
        } while (lVar26 != 0);
        uVar5 = puVar25[0x11];
        uVar16 = puVar25[0x12];
        uVar17 = puVar25[0x13];
        puVar27[0x10] = puVar25[0x10];
        puVar27[0x11] = uVar5;
        uVar5 = puVar25[0x14];
        uVar18 = puVar25[0x15];
        puVar27[0x12] = uVar16;
        puVar27[0x13] = uVar17;
        uVar16 = puVar25[0x16];
        uVar17 = puVar25[0x17];
        puVar27[0x14] = uVar5;
        puVar27[0x15] = uVar18;
        uVar5 = puVar25[0x18];
        uVar18 = puVar25[0x19];
        puVar27[0x16] = uVar16;
        puVar27[0x17] = uVar17;
        uVar8 = *(undefined4 *)(puVar25 + 0x1a);
        uVar9 = *(undefined4 *)((longlong)puVar25 + 0xd4);
        uVar10 = *(undefined4 *)(puVar25 + 0x1b);
        uVar11 = *(undefined4 *)((longlong)puVar25 + 0xdc);
        puVar27[0x18] = uVar5;
        puVar27[0x19] = uVar18;
        uVar12 = *(undefined4 *)(puVar25 + 0x1c);
        uVar13 = *(undefined4 *)((longlong)puVar25 + 0xe4);
        uVar14 = *(undefined4 *)(puVar25 + 0x1d);
        uVar15 = *(undefined4 *)((longlong)puVar25 + 0xec);
        uVar5 = puVar25[0x1e];
        *(undefined4 *)(puVar27 + 0x1a) = uVar8;
        *(undefined4 *)((longlong)puVar27 + 0xd4) = uVar9;
        *(undefined4 *)(puVar27 + 0x1b) = uVar10;
        *(undefined4 *)((longlong)puVar27 + 0xdc) = uVar11;
        *(undefined4 *)(puVar27 + 0x1c) = uVar12;
        *(undefined4 *)((longlong)puVar27 + 0xe4) = uVar13;
        *(undefined4 *)(puVar27 + 0x1d) = uVar14;
        *(undefined4 *)((longlong)puVar27 + 0xec) = uVar15;
        puVar27[0x1e] = uVar5;
        il2cpp_runtime_helper_180354250(pTVar4,local_348,(longlong)iVar30);
        lVar26 = 2;
        puVar21 = local_348;
        puVar22 = local_1c8;
        do {
          puVar27 = puVar22;
          puVar25 = puVar21;
          uVar5 = puVar25[1];
          uVar16 = puVar25[2];
          uVar17 = puVar25[3];
          *puVar27 = *puVar25;
          puVar27[1] = uVar5;
          uVar5 = puVar25[4];
          uVar18 = puVar25[5];
          puVar27[2] = uVar16;
          puVar27[3] = uVar17;
          uVar16 = puVar25[6];
          uVar17 = puVar25[7];
          puVar27[4] = uVar5;
          puVar27[5] = uVar18;
          uVar5 = puVar25[8];
          uVar18 = puVar25[9];
          puVar27[6] = uVar16;
          puVar27[7] = uVar17;
          uVar16 = puVar25[10];
          uVar17 = puVar25[0xb];
          puVar27[8] = uVar5;
          puVar27[9] = uVar18;
          uVar5 = puVar25[0xc];
          uVar18 = puVar25[0xd];
          puVar27[10] = uVar16;
          puVar27[0xb] = uVar17;
          uVar16 = puVar25[0xe];
          uVar17 = puVar25[0xf];
          puVar27[0xc] = uVar5;
          puVar27[0xd] = uVar18;
          puVar27[0xe] = uVar16;
          puVar27[0xf] = uVar17;
          lVar26 = lVar26 + -1;
          puVar21 = puVar25 + 0x10;
          puVar22 = puVar27 + 0x10;
        } while (lVar26 != 0);
        uVar5 = puVar25[0x11];
        uVar16 = puVar25[0x12];
        uVar17 = puVar25[0x13];
        puVar27[0x10] = puVar25[0x10];
        puVar27[0x11] = uVar5;
        uVar5 = puVar25[0x14];
        uVar18 = puVar25[0x15];
        puVar27[0x12] = uVar16;
        puVar27[0x13] = uVar17;
        uVar16 = puVar25[0x16];
        uVar17 = puVar25[0x17];
        puVar27[0x14] = uVar5;
        puVar27[0x15] = uVar18;
        uVar5 = puVar25[0x18];
        uVar18 = puVar25[0x19];
        puVar27[0x16] = uVar16;
        puVar27[0x17] = uVar17;
        uVar16 = puVar25[0x1a];
        uVar17 = puVar25[0x1b];
        puVar27[0x18] = uVar5;
        puVar27[0x19] = uVar18;
        uVar18 = puVar25[0x1c];
        uVar19 = puVar25[0x1d];
        uVar5 = puVar25[0x1e];
        puVar27[0x1a] = uVar16;
        puVar27[0x1b] = uVar17;
        puVar27[0x1c] = uVar18;
        puVar27[0x1d] = uVar19;
        puVar27[0x1e] = uVar5;
        fVar33 = (local_3a8 + local_3a0) * 0.5;
        fVar32 = (local_c8 + fStack_3d4) * 0.5;
        while( true ) {
          if (iVar30 < (int)uVar28) {
            return;
          }
          pTVar3 = (__this->fields)._text;
          if (((pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) ||
              (pTVar24 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar3,(MethodInfo *)0x0),
              pTVar24 == (TMPro_TMP_TextInfo_o *)0x0)) ||
             (pTVar4 = (pTVar24->fields).characterInfo, pTVar4 == (TMPro_TMP_CharacterInfo_array *)0x0))
          break;
          il2cpp_runtime_helper_180354250(pTVar4,local_4c8,(longlong)(int)uVar29);
          lVar26 = 2;
          puVar21 = local_4c8;
          puVar22 = local_1c8;
          do {
            puVar27 = puVar22;
            puVar25 = puVar21;
            uVar5 = puVar25[1];
            uVar16 = puVar25[2];
            uVar17 = puVar25[3];
            *puVar27 = *puVar25;
            puVar27[1] = uVar5;
            uVar5 = puVar25[4];
            uVar18 = puVar25[5];
            puVar27[2] = uVar16;
            puVar27[3] = uVar17;
            uVar16 = puVar25[6];
            uVar17 = puVar25[7];
            puVar27[4] = uVar5;
            puVar27[5] = uVar18;
            uVar5 = puVar25[8];
            uVar18 = puVar25[9];
            puVar27[6] = uVar16;
            puVar27[7] = uVar17;
            uVar16 = puVar25[10];
            uVar17 = puVar25[0xb];
            puVar27[8] = uVar5;
            puVar27[9] = uVar18;
            uVar5 = puVar25[0xc];
            uVar18 = puVar25[0xd];
            puVar27[10] = uVar16;
            puVar27[0xb] = uVar17;
            uVar16 = puVar25[0xe];
            uVar17 = puVar25[0xf];
            puVar27[0xc] = uVar5;
            puVar27[0xd] = uVar18;
            puVar27[0xe] = uVar16;
            puVar27[0xf] = uVar17;
            lVar26 = lVar26 + -1;
            puVar21 = puVar25 + 0x10;
            puVar22 = puVar27 + 0x10;
          } while (lVar26 != 0);
          uVar5 = puVar25[0x11];
          uVar16 = puVar25[0x12];
          uVar17 = puVar25[0x13];
          puVar27[0x10] = puVar25[0x10];
          puVar27[0x11] = uVar5;
          uVar5 = puVar25[0x14];
          uVar18 = puVar25[0x15];
          puVar27[0x12] = uVar16;
          puVar27[0x13] = uVar17;
          uVar16 = puVar25[0x16];
          uVar17 = puVar25[0x17];
          puVar27[0x14] = uVar5;
          puVar27[0x15] = uVar18;
          uVar5 = puVar25[0x18];
          uVar18 = puVar25[0x19];
          puVar27[0x16] = uVar16;
          puVar27[0x17] = uVar17;
          uVar16 = puVar25[0x1a];
          uVar17 = puVar25[0x1b];
          puVar27[0x18] = uVar5;
          puVar27[0x19] = uVar18;
          uVar18 = puVar25[0x1c];
          uVar19 = puVar25[0x1d];
          uVar5 = puVar25[0x1e];
          puVar27[0x1a] = uVar16;
          puVar27[0x1b] = uVar17;
          puVar27[0x1c] = uVar18;
          puVar27[0x1d] = uVar19;
          puVar27[0x1e] = uVar5;
          if (local_58 != '\0') {
            pTVar3 = (__this->fields)._text;
            if (((pTVar3 == (TMPro_TextMeshProUGUI_o *)0x0) ||
                (pTVar24 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar3,(MethodInfo *)0x0),
                pTVar24 == (TMPro_TMP_TextInfo_o *)0x0)) ||
               (pTVar6 = (pTVar24->fields).meshInfo, pTVar6 == (TMPro_TMP_MeshInfo_array *)0x0)) break;
            if ((uint)pTVar6->max_length <= local_498) {
label_1823b69cd:
              ThrowIndexOutOfRangeException();
            }
            if ((int)uStack_484 < (int)(uStack_484 + 4)) {
              pUVar7 = pTVar6->m_Items[(int)local_498].fields.vertices;
              uVar28 = uStack_484;
              if (pUVar7 == (UnityEngine_Vector3_array *)0x0) break;
              do {
                if ((uint)pUVar7->max_length <= uVar28) goto label_1823b69cd;
                uVar31 = uVar28 + 1;
                fVar1 = pUVar7->m_Items[(int)uVar28].fields.y;
                fVar2 = pUVar7->m_Items[(int)uVar28].fields.z;
                pUVar7->m_Items[(int)uVar28].fields.x =
                     (pUVar7->m_Items[(int)uVar28].fields.x - fVar32) * scale + fVar32;
                pUVar7->m_Items[(int)uVar28].fields.y = (fVar1 - fVar33) * scale + fVar33;
                pUVar7->m_Items[(int)uVar28].fields.z = (fVar2 - 0.0) * scale + 0.0;
                uVar28 = uVar31;
              } while ((int)uVar31 < (int)(uStack_484 + 4));
            }
          }
          uVar28 = (int)uVar29 + 1;
          uVar29 = (ulonglong)uVar28;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$TryFindLink
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__TryFindLink (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, System_String_o* tabId, TMPro_TMP_LinkInfo_o* link, const MethodInfo* method);
// 0x1823b8770
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b87a9: nop dword ptr [rax]
// asm:   0x1823b8857: jmp 0x1823b87b0

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__TryFindLink
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,System_String_o *tabId,
               TMPro_TMP_LinkInfo_o *link,MethodInfo *method)

{
  TMPro_TMP_LinkInfo_o *pTVar1;
  TMPro_TMP_LinkInfo_array *pTVar2;
  TMPro_TMP_LinkInfo_Fields *pTVar3;
  bool bVar4;
  TMPro_TextMeshProUGUI_o *pTVar5;
  TMPro_TMP_TextInfo_o *pTVar6;
  System_String_o *a;
  uint uVar7;
  TMPro_TMP_LinkInfo_o local_58;
  
  local_58.fields.linkID = (System_Char_array *)0x0;
  pTVar5 = (__this->fields)._text;
  uVar7 = 0;
  local_58.fields.textComponent = (TMPro_TMP_Text_o *)0x0;
  local_58.fields.hashCode = 0;
  local_58.fields.linkIdFirstCharacterIndex = 0;
  local_58.fields.linkIdLength = 0;
  local_58.fields.linkTextfirstCharacterIndex = 0;
  local_58.fields.linkTextLength = 0;
  local_58.fields._28_4_ = 0;
  if (pTVar5 != (TMPro_TextMeshProUGUI_o *)0x0) {
    while (pTVar6 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar5,(MethodInfo *)0x0),
          pTVar6 != (TMPro_TMP_TextInfo_o *)0x0) {
      if ((pTVar6->fields).linkCount <= (int)uVar7) {
        (link->fields).textComponent = (TMPro_TMP_Text_o *)0x0;
        (link->fields).hashCode = 0;
        (link->fields).linkIdFirstCharacterIndex = 0;
        (link->fields).linkIdLength = 0;
        (link->fields).linkTextfirstCharacterIndex = 0;
        *(undefined8 *)&(link->fields).linkTextLength = 0;
        (link->fields).linkID = (System_Char_array *)0x0;
        return false;
      }
      pTVar5 = (__this->fields)._text;
      if (((pTVar5 == (TMPro_TextMeshProUGUI_o *)0x0) ||
          (pTVar6 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar5,(MethodInfo *)0x0),
          pTVar6 == (TMPro_TMP_TextInfo_o *)0x0)) ||
         (pTVar2 = (pTVar6->fields).linkInfo, pTVar2 == (TMPro_TMP_LinkInfo_array *)0x0)) break;
      if ((uint)pTVar2->max_length <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      pTVar1 = pTVar2->m_Items + (int)uVar7;
      local_58.fields.textComponent = (pTVar1->fields).textComponent;
      local_58.fields.hashCode = (pTVar1->fields).hashCode;
      local_58.fields.linkIdFirstCharacterIndex = (pTVar1->fields).linkIdFirstCharacterIndex;
      pTVar3 = &pTVar2->m_Items[(int)uVar7].fields;
      local_58.fields.linkIdLength = pTVar3->linkIdLength;
      local_58.fields.linkTextfirstCharacterIndex = pTVar3->linkTextfirstCharacterIndex;
      local_58.fields.linkTextLength = pTVar3->linkTextLength;
      local_58.fields._28_4_ = *(undefined4 *)&pTVar3->field_0x1c;
      local_58.fields.linkID = pTVar2->m_Items[(int)uVar7].fields.linkID;
      a = TMPro_TMP_LinkInfo__GetLinkID(&local_58,(MethodInfo *)0x0);
      bVar4 = System_String__Equals_196c550(a,tabId,5,(MethodInfo *)0x0);
      if (bVar4) {
        (link->fields).textComponent = local_58.fields.textComponent;
        (link->fields).hashCode = local_58.fields.hashCode;
        (link->fields).linkIdFirstCharacterIndex = local_58.fields.linkIdFirstCharacterIndex;
        (link->fields).linkIdLength = local_58.fields.linkIdLength;
        (link->fields).linkTextfirstCharacterIndex = local_58.fields.linkTextfirstCharacterIndex;
        (link->fields).linkTextLength = local_58.fields.linkTextLength;
        *(undefined4 *)&(link->fields).field_0x1c = local_58.fields._28_4_;
        (link->fields).linkID = local_58.fields.linkID;
        Il2CppCodeGenWriteBarrier((void **)link,(void *)0x0);
        return true;
      }
      pTVar5 = (__this->fields)._text;
      uVar7 = uVar7 + 1;
      if (pTVar5 == (TMPro_TextMeshProUGUI_o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x1823b7fd0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__QueueGeometryRefresh(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$QueueGeometryRefresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__QueueGeometryRefresh (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x1823b7fe0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__QueueGeometryRefresh
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *x;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o *routine;
  UnityEngine_Coroutine_o *value;
  
  if (Il2CppMethodInitialized_184347ce4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347ce4 = '\x01';
  }
  x = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0)
    ;
    if ((bVar1) && ((__this->fields)._geometryRefresh == (UnityEngine_Coroutine_o *)0x0)) {
      if (Il2CppMethodInitialized_184347ce5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_RefreshGeometryNextFrame_d__35);
        Il2CppMethodInitialized_184347ce5 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_RefreshGeometryNextFrame_d__35
                          );
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                         (MethodInfo *)0x0);
      (__this->fields)._geometryRefresh = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._geometryRefresh,value);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$RefreshGeometryNextFrame
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x1823b80d0

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame
          (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__35_o *__this_00;
  
  if (Il2CppMethodInitialized_184347ce5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_RefreshGeometryNextFrame_d__35);
    Il2CppMethodInitialized_184347ce5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_RefreshGeometryNextFrame_d__35
                        );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$RefreshUnderline
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshUnderline (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x1823b8140
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b82cd: nop dword ptr [rax]

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshUnderline
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  TMPro_TMP_CharacterInfo_array *pTVar4;
  undefined8 uVar5;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  bool bVar19;
  TMPro_TMP_TextInfo_o *pTVar20;
  undefined8 *puVar21;
  UnityEngine_GameObject_o *__this_00;
  undefined8 *puVar22;
  longlong lVar23;
  float fVar24;
  TMPro_TMP_LinkInfo_o local_4d8;
  undefined8 local_4a8 [37];
  float local_380;
  undefined8 local_328 [30];
  float fStack_234;
  undefined1 local_1a8 [256];
  float local_a8;
  
  if (Il2CppMethodInitialized_184347ce6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347ce6 = '\x01';
  }
  pTVar1 = (__this->fields)._text;
  local_4d8.fields.textComponent = (TMPro_TMP_Text_o *)0x0;
  local_4d8.fields.hashCode = 0;
  local_4d8.fields.linkIdFirstCharacterIndex = 0;
  local_4d8.fields.linkID = (System_Char_array *)0x0;
  local_4d8.fields.linkIdLength = 0;
  local_4d8.fields.linkTextfirstCharacterIndex = 0;
  local_4d8.fields.linkTextLength = 0;
  local_4d8.fields._28_4_ = 0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar19 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar19) {
    pUVar2 = (__this->fields)._underline;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar19 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar19) && ((__this->fields)._node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      pTVar1 = (__this->fields)._text;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                  (pTVar1,false,false,(pTVar1->klass->vtable)._106_ForceMeshUpdate.method);
        pGVar3 = (__this->fields)._node;
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          bVar19 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__TryFindLink
                             (__this,(pGVar3->fields).value,&local_4d8,(MethodInfo *)0x0);
          if ((bVar19) && (0 < local_4d8.fields.linkTextLength)) {
            pTVar1 = (__this->fields)._text;
            if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
              lVar23 = (longlong)local_4d8.fields.linkTextfirstCharacterIndex;
              pTVar20 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0);
              if ((pTVar20 != (TMPro_TMP_TextInfo_o *)0x0) &&
                 (pTVar4 = (pTVar20->fields).characterInfo, pTVar4 != (TMPro_TMP_CharacterInfo_array *)0x0)) {
                il2cpp_runtime_helper_180354250(pTVar4,local_4a8,lVar23);
                pTVar1 = (__this->fields)._text;
                if ((pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) &&
                   ((pTVar20 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0),
                    pTVar20 != (TMPro_TMP_TextInfo_o *)0x0 &&
                    (pTVar4 = (pTVar20->fields).characterInfo, pTVar4 != (TMPro_TMP_CharacterInfo_array *)0x0)
                    ))) {
                  lVar23 = 2;
                  puVar17 = local_4a8;
                  puVar18 = local_328;
                  do {
                    puVar22 = puVar18;
                    puVar21 = puVar17;
                    uVar5 = puVar21[1];
                    uVar14 = puVar21[2];
                    uVar15 = puVar21[3];
                    *puVar22 = *puVar21;
                    puVar22[1] = uVar5;
                    uVar5 = puVar21[4];
                    uVar16 = puVar21[5];
                    puVar22[2] = uVar14;
                    puVar22[3] = uVar15;
                    uVar14 = puVar21[6];
                    uVar15 = puVar21[7];
                    puVar22[4] = uVar5;
                    puVar22[5] = uVar16;
                    uVar5 = puVar21[8];
                    uVar16 = puVar21[9];
                    puVar22[6] = uVar14;
                    puVar22[7] = uVar15;
                    uVar14 = puVar21[10];
                    uVar15 = puVar21[0xb];
                    puVar22[8] = uVar5;
                    puVar22[9] = uVar16;
                    uVar5 = puVar21[0xc];
                    uVar16 = puVar21[0xd];
                    puVar22[10] = uVar14;
                    puVar22[0xb] = uVar15;
                    uVar14 = puVar21[0xe];
                    uVar15 = puVar21[0xf];
                    puVar22[0xc] = uVar5;
                    puVar22[0xd] = uVar16;
                    puVar22[0xe] = uVar14;
                    puVar22[0xf] = uVar15;
                    lVar23 = lVar23 + -1;
                    puVar17 = puVar21 + 0x10;
                    puVar18 = puVar22 + 0x10;
                  } while (lVar23 != 0);
                  uVar5 = puVar21[0x11];
                  uVar14 = puVar21[0x12];
                  uVar15 = puVar21[0x13];
                  puVar22[0x10] = puVar21[0x10];
                  puVar22[0x11] = uVar5;
                  uVar5 = puVar21[0x14];
                  uVar16 = puVar21[0x15];
                  puVar22[0x12] = uVar14;
                  puVar22[0x13] = uVar15;
                  uVar14 = puVar21[0x16];
                  uVar15 = puVar21[0x17];
                  puVar22[0x14] = uVar5;
                  puVar22[0x15] = uVar16;
                  uVar5 = puVar21[0x18];
                  uVar16 = puVar21[0x19];
                  puVar22[0x16] = uVar14;
                  puVar22[0x17] = uVar15;
                  uVar6 = *(undefined4 *)(puVar21 + 0x1a);
                  uVar7 = *(undefined4 *)((longlong)puVar21 + 0xd4);
                  uVar8 = *(undefined4 *)(puVar21 + 0x1b);
                  uVar9 = *(undefined4 *)((longlong)puVar21 + 0xdc);
                  puVar22[0x18] = uVar5;
                  puVar22[0x19] = uVar16;
                  uVar10 = *(undefined4 *)(puVar21 + 0x1c);
                  uVar11 = *(undefined4 *)((longlong)puVar21 + 0xe4);
                  uVar12 = *(undefined4 *)(puVar21 + 0x1d);
                  uVar13 = *(undefined4 *)((longlong)puVar21 + 0xec);
                  uVar5 = puVar21[0x1e];
                  *(undefined4 *)(puVar22 + 0x1a) = uVar6;
                  *(undefined4 *)((longlong)puVar22 + 0xd4) = uVar7;
                  *(undefined4 *)(puVar22 + 0x1b) = uVar8;
                  *(undefined4 *)((longlong)puVar22 + 0xdc) = uVar9;
                  *(undefined4 *)(puVar22 + 0x1c) = uVar10;
                  *(undefined4 *)((longlong)puVar22 + 0xe4) = uVar11;
                  *(undefined4 *)(puVar22 + 0x1d) = uVar12;
                  *(undefined4 *)((longlong)puVar22 + 0xec) = uVar13;
                  puVar22[0x1e] = uVar5;
                  il2cpp_runtime_helper_180354250(pTVar4,local_1a8);
                  pUVar2 = (__this->fields)._underline;
                  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMax
                              (pUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_anchorMin
                              (pUVar2,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    pUVar2 = (__this->fields)._underline;
                    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_pivot
                                (pUVar2,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                      pUVar2 = (__this->fields)._underline;
                      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                        value.fields.y = local_380 - 3.0;
                        value.fields.x = fStack_234;
                        UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value,(MethodInfo *)0x0);
                        pUVar2 = (__this->fields)._underline;
                        fVar24 = 0.0;
                        if (0.0 <= local_a8 - fStack_234) {
                          fVar24 = local_a8 - fStack_234;
                        }
                        if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                          value_00.fields.y = 3.0;
                          value_00.fields.x = fVar24;
                          UnityEngine_RectTransform__set_sizeDelta(pUVar2,value_00,(MethodInfo *)0x0);
                          pUVar2 = (__this->fields)._underline;
                          if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
                             (__this_00 = UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
                             __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                            bVar19 = true;
                            goto label_1823b8461;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pUVar2 = (__this->fields)._underline;
            if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
               (__this_00 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
               __this_00 != (UnityEngine_GameObject_o *)0x0)) {
              bVar19 = false;
label_1823b8461:
              UnityEngine_GameObject__SetActive(__this_00,bVar19,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$BuildMarkup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__BuildMarkup (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_Color_o active, UnityEngine_Color_o inactive, const MethodInfo* method);
// 0x1823b6ec0

System_String_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__BuildMarkup
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_Color_o *active,
          UnityEngine_Color_o *inactive,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  bool bVar4;
  int32_t iVar5;
  System_Runtime_Serialization_ObjectHolder_o *__this;
  System_Text_StringBuilder_o *pSVar6;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar7;
  System_String_o **ppSVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_res8 [2];
  UnityEngine_Color_o local_48 [2];
  
  if (Il2CppMethodInitialized_184347ce7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"0.###");
    il2cpp_codegen_initialize_runtime_metadata(&"\"><color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color></link>");
    il2cpp_codegen_initialize_runtime_metadata(&"<space=");
    il2cpp_codegen_initialize_runtime_metadata(&"<link=\"");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_184347ce7 = '\x01';
  }
  local_res8[0] = 0.0;
  __this = (System_Runtime_Serialization_ObjectHolder_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor((System_Text_StringBuilder_o *)__this,(MethodInfo *)0x0);
  if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (pGVar2 = (node->fields).deferredChildren,
     pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
    for (uVar9 = 0; uVar1 = (uint)pGVar2->max_length, (int)uVar9 < (int)uVar1; uVar9 = uVar9 + 1) {
      if (uVar1 <= uVar9) {
        ThrowIndexOutOfRangeException();
      }
      pGVar3 = pGVar2->m_Items[(int)uVar9];
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        bVar4 = System_String__IsNullOrEmpty((pGVar3->fields).id,(MethodInfo *)0x0);
        if (!bVar4) {
          if (__this == (System_Runtime_Serialization_ObjectHolder_o *)0x0) goto label_1823b71b2;
          iVar5 = System_Text_StringBuilder__get_Length
                            (__this,(MethodInfo *)0x0);
          if (0 < iVar5) {
            pSVar6 = System_Text_StringBuilder__Append_197dca0
                               ((System_Text_StringBuilder_o *)__this,"<space=",(MethodInfo *)0x0)
            ;
            local_res8[0] = 32.0;
            if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
            }
            provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
            pSVar7 = System_Single__ToString_1b4a0d0
                               (local_res8,"0.###",(System_IFormatProvider_o *)provider,
                                (MethodInfo *)0x0);
            if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_1823b71b2;
            pSVar6 = System_Text_StringBuilder__Append_197dca0(pSVar6,pSVar7,(MethodInfo *)0x0);
            if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_1823b71b2;
            System_Text_StringBuilder__Append_197dca0(pSVar6,">",(MethodInfo *)0x0);
          }
          bVar4 = System_String__Equals_196c550((pGVar3->fields).id,(node->fields).value,5,(MethodInfo *)0x0);
          if (bVar4) {
            fVar10 = (active->fields).r;
            fVar11 = (active->fields).g;
            fVar12 = (active->fields).b;
            fVar13 = (active->fields).a;
          }
          else {
            fVar10 = (inactive->fields).r;
            fVar11 = (inactive->fields).g;
            fVar12 = (inactive->fields).b;
            fVar13 = (inactive->fields).a;
          }
          pSVar6 = System_Text_StringBuilder__Append_197dca0
                             ((System_Text_StringBuilder_o *)__this,"<link=\"",(MethodInfo *)0x0);
          if (pSVar6 == (System_Text_StringBuilder_o *)0x0) {
label_1823b71b8:
            ThrowNullReferenceException();
          }
          pSVar6 = System_Text_StringBuilder__Append_197dca0(pSVar6,(pGVar3->fields).id,(MethodInfo *)0x0);
          if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_1823b71b8;
          pSVar6 = System_Text_StringBuilder__Append_197dca0(pSVar6,"\"><color=#",(MethodInfo *)0x0);
          local_48[0].fields.r = fVar10;
          local_48[0].fields.g = fVar11;
          local_48[0].fields.b = fVar12;
          local_48[0].fields.a = fVar13;
          pSVar7 = UnityEngine_ColorUtility__ToHtmlStringRGBA_2f00800(local_48,(MethodInfo *)0x0);
          if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_1823b71b8;
          pSVar6 = System_Text_StringBuilder__Append_197dca0(pSVar6,pSVar7,(MethodInfo *)0x0);
          if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_1823b71b8;
          pSVar6 = System_Text_StringBuilder__Append_197dca0(pSVar6,">",(MethodInfo *)0x0);
          if ((pGVar3->fields).text == (System_String_o *)0x0) {
            ppSVar8 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
          }
          else {
            ppSVar8 = &(pGVar3->fields).text;
          }
          if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_1823b71b2;
          pSVar6 = System_Text_StringBuilder__Append_197dca0(pSVar6,*ppSVar8,(MethodInfo *)0x0);
          if (pSVar6 == (System_Text_StringBuilder_o *)0x0) goto label_1823b71b2;
          System_Text_StringBuilder__Append_197dca0(pSVar6,"</color></link>",(MethodInfo *)0x0);
        }
      }
    }
  }
  if (__this != (System_Runtime_Serialization_ObjectHolder_o *)0x0) {
    pSVar7 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    return pSVar7;
  }
label_1823b71b2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Dispatch
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Dispatch (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, UnityEngine_GameObject_o* source, System_String_o* tabId, const MethodInfo* method);
// 0x1823b7990
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b7a09: nop dword ptr [rax]

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Dispatch
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,UnityEngine_GameObject_o *source,
               System_String_o *tabId,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  System_String_array *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c *pGVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  VirtualInvokeData *pVVar10;
  ushort uVar11;
  uint uVar12;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_78;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_58 [2];
  
  if (Il2CppMethodInitialized_184347ce8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    Il2CppMethodInitialized_184347ce8 = '\x01';
  }
  if (((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
      (actions != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0)) &&
     (pSVar3 = (node->fields).options, pSVar3 != (System_String_array *)0x0)) {
    for (uVar12 = 0; uVar1 = (uint)pSVar3->max_length, (int)uVar12 < (int)uVar1; uVar12 = uVar12 + 1) {
      if (uVar1 <= uVar12) {
        ThrowIndexOutOfRangeException();
      }
      bVar9 = System_String__Equals_196c550(pSVar3->m_Items[(int)uVar12],tabId,5,(MethodInfo *)0x0);
      if (bVar9) {
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
        if (__this == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar4 = (node->fields).id;
        (__this->fields).id = pSVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).id,pSVar4);
        (__this->fields).value = tabId;
        Il2CppCodeGenWriteBarrier(&(__this->fields).value,tabId);
        pSVar4 = (node->fields).action;
        local_78.fields.ElementId = (System_String_o *)0x0;
        local_78.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
        local_78.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        local_78.fields.InputSource = 0;
        local_78.fields._28_4_ = 0;
        Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_190b9a0
                  (&local_78,(node->fields).id,source,__this,1,(MethodInfo *)0x0);
        uVar7 = local_78.fields._24_8_;
        local_58[0].fields.Node = local_78.fields.Node;
        local_58[0].fields.GameObject = local_78.fields.GameObject;
        local_58[0].fields.ElementId = local_78.fields.ElementId;
        pGVar5 = actions->klass;
        uVar2 = (pGVar5->_2).interface_offsets_count;
        if (uVar2 == 0) goto label_1823b7b08;
        pIVar6 = (pGVar5->_1).interfaceOffsets;
        uVar11 = 0;
        goto label_1823b7af3;
      }
    }
  }
  return false;
  while (uVar11 = uVar11 + 1, uVar11 < uVar2) {
label_1823b7af3:
    if (pIVar6[uVar11].interfaceType ==
        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
      pVVar10 = pGVar5->vtable + pIVar6[uVar11].offset;
      goto label_1823b7b13;
    }
  }
label_1823b7b08:
  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                      ((Il2CppObject *)actions,
                       (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,0);
label_1823b7b13:
  uVar8 = local_78.fields._24_8_;
  local_78.fields.InputSource = (int32_t)uVar7;
  local_78.fields._28_4_ = SUB84(uVar7,4);
  local_58[0].fields.InputSource = local_78.fields.InputSource;
  local_58[0].fields._28_4_ = local_78.fields._28_4_;
  local_78.fields._24_8_ = uVar8;
  (*pVVar10->methodPtr)((Il2CppObject *)actions,pSVar4,local_58,pVVar10->method);
  return true;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$CreateUnderline
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__CreateUnderline (UnityEngine_Transform_o* parent, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1823b7710

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__CreateUnderline
          (UnityEngine_Transform_o *parent,UnityEngine_Color_o *color,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_184347ce9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Subtab Underline");
    Il2CppMethodInitialized_184347ce9 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1823b7945:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar1);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Subtab Underline",components,(MethodInfo *)0x0);
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Image);
            if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
              local_38.r = (color->fields).r;
              local_38.g = (color->fields).g;
              local_38.b = (color->fields).b;
              local_38.a = (color->fields).a;
              (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                        (pUVar3,(UnityEngine_Color_o *)&local_38,(pUVar3->klass->vtable)._23_set_color.method)
              ;
              (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (pUVar3,false,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
              UnityEngine_GameObject__SetActive(__this,false,(MethodInfo *)0x0);
              return pUVar3;
            }
          }
        }
        goto label_1823b7945;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Contains
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Contains (System_String_array* values, System_String_o* value, const MethodInfo* method);
// 0x1823b7690
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823b76ac: nop dword ptr [rax]

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Contains
               (System_String_array *values,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  if (values != (System_String_array *)0x0) {
    for (uVar3 = 0; uVar1 = (uint)values->max_length, (int)uVar3 < (int)uVar1; uVar3 = uVar3 + 1) {
      if (uVar1 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      bVar2 = System_String__Equals_196c550(values->m_Items[(int)uVar3],value,5,(MethodInfo *)0x0);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Labels
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Labels (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1823b7b90

System_String_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Labels
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184347cea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184347cea = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (pGVar2 = (node->fields).deferredChildren,
     pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
    for (uVar4 = 0; uVar1 = (uint)pGVar2->max_length, (int)uVar4 < (int)uVar1; uVar4 = uVar4 + 1) {
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      if (pGVar2->m_Items[(int)uVar4] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        if (__this == (System_Text_StringBuilder_o *)0x0) goto label_1823b7c4a;
        System_Text_StringBuilder__Append_197dca0
                  (__this,(pGVar2->m_Items[(int)uVar4]->fields).text,(MethodInfo *)0x0);
      }
    }
  }
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    pSVar3 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    return pSVar3;
  }
label_1823b7c4a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Smooth
// il2cpp: float Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Smooth (float value, const MethodInfo* method);
// 0x1823b8750

float Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Smooth(float value,MethodInfo *method)

{
  return (3.0 - (value + value)) * value * value;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime___ctor (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime___ctor(Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



// Type: Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgSubtabStripRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28___ctor (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e7f1e0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28___ctor
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o* __this, const MethodInfo* method);
// 0x5e7fbf0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28__MoveNext (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o* __this, const MethodInfo* method);
// 0x5e7fc00

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28__MoveNext
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o *__this,
               MethodInfo *method)

{
  float fVar1;
  int iVar2;
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this_00;
  float fVar3;
  float fVar4;
  
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    fVar4 = (__this->fields)._elapsed_5__3;
    if (0.08 <= fVar4) {
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *)0x0) {
        (__this_00->fields)._hoverAmount = (__this->fields).target;
        if ((__this->fields).clearAfter != false) {
          (__this_00->fields)._hoveredId = (System_String_o *)0x0;
          method = (MethodInfo *)0x0;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._hoveredId);
        }
        Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this_00,method);
        (__this_00->fields)._hoverTween = (UnityEngine_Coroutine_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields)._hoverTween);
        return false;
      }
      goto label_05e7fd62;
    }
  }
  else {
    if (iVar2 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *)0x0) goto label_05e7fd62;
    (__this->fields)._start_5__2 = (__this_00->fields)._hoverAmount;
    (__this->fields)._elapsed_5__3 = 0.0;
    fVar4 = 0.0;
  }
  fVar3 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  (__this->fields)._elapsed_5__3 = fVar3 + fVar4;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *)0x0) {
    fVar1 = (__this->fields)._start_5__2;
    fVar3 = (fVar3 + fVar4) / 0.08;
    fVar4 = 1.0;
    if (fVar3 <= 1.0) {
      fVar4 = fVar3;
    }
    fVar4 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar4);
    fVar3 = (3.0 - (fVar4 + fVar4)) * fVar4 * fVar4;
    fVar4 = 1.0;
    if (fVar3 <= 1.0) {
      fVar4 = fVar3;
    }
    (__this_00->fields)._hoverAmount =
         (float)(-(uint)(0.0 <= fVar3) & (uint)fVar4) * ((__this->fields).target - fVar1) + fVar1;
    Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this_00,method);
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
label_05e7fd62:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o* __this, const MethodInfo* method);
// 0x5e7fd70

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o* __this, const MethodInfo* method);
// 0x5e7fd80

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_AnimateHover_d__28_System_Collections_IEnumerator
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o* __this, const MethodInfo* method);
// 0x5e7fdc0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36___ctor (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e7f900

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36___ctor
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o* __this, const MethodInfo* method);
// 0x5e7fdd0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36__System_IDisposable_Dispose
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o *__this,
               MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36__MoveNext (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o* __this, const MethodInfo* method);
// 0x5e7fde0

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36__MoveNext
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this_00;
  
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshUnderline(__this_00,method);
    Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this_00,method);
    (__this_00->fields)._geometryRefresh = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._geometryRefresh);
  }
  return iVar1 == 0;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o* __this, const MethodInfo* method);
// 0x5e7fe60

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o* __this, const MethodInfo* method);
// 0x5e7fe70

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o *__this,
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
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_RefreshGeometryNextFrame_d__36_System_Collections
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o* __this, const MethodInfo* method);
// 0x5e7feb0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36__System_Collections_IEnumerator_get_Current
          (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RegisterFactory (const MethodInfo* method);
// 0x5e7d970

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07548810 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgSubtabStrip");
    Il2CppMethodInitialized_07548810 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime->static_fields->_registered != false) {
    return;
  }
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
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5e7de90

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar2;
  int32_t weight;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar3;
  TMPro_TextMeshProUGUI_o *__this;
  System_String_o *requiredText;
  TMPro_TMP_FontAsset_o *value;
  System_String_o *pSVar4;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this_01;
  MethodInfo *pMVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  UnityEngine_Color_o UVar8;
  UnityEngine_Color_o UVar9;
  float fStack_68;
  float fStack_64;
  float fStack_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_07548811 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgSubtabStripRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_GetValueOrDefault_719ae28);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault_719b178);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"textMuted");
    Il2CppMethodInitialized_07548811 = '\x01';
  }
  if (((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
      (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
     (pGVar1 = (context->fields).Theme, pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    pGVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar1,(node->fields).style,(MethodInfo *)0x0);
    if (go != (UnityEngine_GameObject_o *)0x0) {
      pMVar5 = MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI;
      __this = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        weight = 400;
        pSVar4 = "header";
      }
      else {
        pSVar4 = (pGVar3->fields).fontFamily;
        pMVar5 = (MethodInfo *)0x190;
        weight = System_Nullable_int___GetValueOrDefault_3cd4bf0
                           (&(pGVar3->fields).fontWeight,400,
                            (MethodInfo_3CD4BF0 *)MethodInfo_System_Nullable_int_GetValueOrDefault_719ae28);
      }
      requiredText = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Labels(node,pMVar5);
      value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                        (pSVar4,weight,requiredText,(MethodInfo *)0x0);
      if (__this != (TMPro_TextMeshProUGUI_o *)0x0) {
        TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)__this,value,(MethodInfo *)0x0);
        if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
          fVar6 = 30.0;
        }
        else {
          fVar6 = System_Nullable_float___GetValueOrDefault_3cda300
                            (&(pGVar3->fields).fontSize,30.0,
                             (MethodInfo_3CDA300 *)MethodInfo_System_Nullable_float_GetValueOrDefault_719b178)
          ;
        }
        fVar6 = Gisketch_Aottg2UI_Styling_GisketchTypography__FontSize(pSVar4,weight,fVar6,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)__this,fVar6,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_fontSizeMax
                  ((TMPro_TMP_Text_o *)__this,(__this->fields).m_fontSize,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_fontSizeMin
                  ((TMPro_TMP_Text_o *)__this,(__this->fields).m_fontSize * 0.6,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_enableAutoSizing((TMPro_TMP_Text_o *)__this,true,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_fontStyle((TMPro_TMP_Text_o *)__this,0,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)__this,0x1001,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)__this,false,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)__this,0,(MethodInfo *)0x0);
        TMPro_TMP_Text__set_richText((TMPro_TMP_Text_o *)__this,true,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (__this,true,(__this->klass->vtable)._25_set_raycastTarget.method);
        pGVar1 = (context->fields).Theme;
        if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          UVar7.fields.b = (float)(int)g_data_01005870;
          UVar7.fields.a = (float)g_data_01005870._4_4_;
          UVar7.fields.r = (float)(int)g_data_01005870;
          UVar7.fields.g = (float)g_data_01005870._4_4_;
          UVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                            (pGVar1,"text",UVar7,(MethodInfo *)0x0);
          pGVar1 = (context->fields).Theme;
          if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            UVar8.fields.b = (float)(int)g_data_010064b0;
            UVar8.fields.a = (float)g_data_010064b0._4_4_;
            UVar8.fields.r = 1.0;
            UVar8.fields.g = 1.0;
            pMVar5 = (MethodInfo *)"textMuted";
            UVar8 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                              (pGVar1,"textMuted",UVar8,(MethodInfo *)0x0);
            pSVar4 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__BuildMarkup(node,UVar7,UVar8,pMVar5);
            (*(__this->klass->vtable)._66_set_text.methodPtr)
                      (__this,pSVar4,(__this->klass->vtable)._66_set_text.method);
            (*(__this->klass->vtable)._106_ForceMeshUpdate.methodPtr)
                      (__this,false,false,(__this->klass->vtable)._106_ForceMeshUpdate.method);
            parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
            pGVar1 = (context->fields).Theme;
            if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              UVar9.fields.b = 1.0;
              UVar9.fields.a = 1.0;
              UVar9.fields.r = 1.0;
              UVar9.fields.g = 1.0;
              pMVar5 = (MethodInfo *)"primary";
              UVar9 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                (pGVar1,"primary",UVar9,(MethodInfo *)0x0);
              __this_00 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__CreateUnderline(parent,UVar9,pMVar5)
              ;
              __this_01 = UnityEngine_GameObject__AddComponent_object_
                                    (go,(MethodInfo_353B6A0 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_AottgSubtabStripRuntime
                                    );
              if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
                pGVar2 = (context->fields).Actions;
                pMVar5 = (MethodInfo *)
                         UnityEngine_UI_Graphic__get_rectTransform
                                   ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
                if (__this_01 != (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *)0x0) {
                  (__this_01->fields)._node = node;
                  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._node);
                  (__this_01->fields)._actions = pGVar2;
                  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._actions);
                  (__this_01->fields)._text = __this;
                  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._text);
                  (__this_01->fields)._underline = (UnityEngine_RectTransform_o *)pMVar5;
                  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._underline);
                  fStack_68 = UVar7.fields.r;
                  fStack_64 = UVar7.fields.g;
                  (__this_01->fields)._activeColor.fields.r = fStack_68;
                  (__this_01->fields)._activeColor.fields.g = fStack_64;
                  (__this_01->fields)._activeColor.fields.b = UVar7.fields.b;
                  (__this_01->fields)._activeColor.fields.a = UVar7.fields.a;
                  fStack_48 = UVar8.fields.r;
                  fStack_44 = UVar8.fields.g;
                  (__this_01->fields)._inactiveColor.fields.r = fStack_48;
                  (__this_01->fields)._inactiveColor.fields.g = fStack_44;
                  (__this_01->fields)._inactiveColor.fields.b = UVar8.fields.b;
                  (__this_01->fields)._inactiveColor.fields.a = UVar8.fields.a;
                  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__QueueGeometryRefresh(__this_01,pMVar5);
                  return true;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Setup (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, TMPro_TextMeshProUGUI_o* text, UnityEngine_RectTransform_o* underline, UnityEngine_Color_o activeColor, UnityEngine_Color_o inactiveColor, const MethodInfo* method);
// 0x5e7e950

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,TMPro_TextMeshProUGUI_o *text,
               UnityEngine_RectTransform_o *underline,UnityEngine_Color_o activeColor,
               UnityEngine_Color_o inactiveColor,MethodInfo *method)

{
  float fStack_68;
  float fStack_64;
  float fStack_48;
  float fStack_44;
  
  (__this->fields)._node = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._node);
  (__this->fields)._actions = actions;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actions);
  (__this->fields)._text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._text);
  (__this->fields)._underline = underline;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._underline);
  fStack_68 = activeColor.fields.r;
  fStack_64 = activeColor.fields.g;
  (__this->fields)._activeColor.fields.r = fStack_68;
  (__this->fields)._activeColor.fields.g = fStack_64;
  (__this->fields)._activeColor.fields.b = activeColor.fields.b;
  (__this->fields)._activeColor.fields.a = activeColor.fields.a;
  fStack_48 = inactiveColor.fields.r;
  fStack_44 = inactiveColor.fields.g;
  (__this->fields)._inactiveColor.fields.r = fStack_48;
  (__this->fields)._inactiveColor.fields.g = fStack_44;
  (__this->fields)._inactiveColor.fields.b = inactiveColor.fields.b;
  (__this->fields)._inactiveColor.fields.a = inactiveColor.fields.a;
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__QueueGeometryRefresh(__this,(MethodInfo *)underline);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerMove (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e7eae0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerMove
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_String_o *tabId;
  MethodInfo *method_00;
  
  tabId = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__LinkAt(__this,eventData,method);
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__SetHovered(__this,tabId,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerExit (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e7eda0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__SetHovered(__this,(System_String_o *)0x0,method);
  bVar1 = System_String__Equals_52ffe30
                    ((__this->fields)._pressedId,(System_String_o *)0x0,5,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  (__this->fields)._pressedId = (System_String_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pressedId);
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerDown (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e7ee30

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerDown
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__LinkAt(__this,eventData,method);
  bVar1 = System_String__Equals_52ffe30
                    ((__this->fields)._pressedId,(System_String_o *)method_00,5,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  (__this->fields)._pressedId = (System_String_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pressedId);
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerUp (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e7ee80

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerUp
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  bVar1 = System_String__Equals_52ffe30
                    ((__this->fields)._pressedId,(System_String_o *)0x0,5,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  (__this->fields)._pressedId = (System_String_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pressedId);
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerClick
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerClick (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e7eec0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnPointerClick
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions;
  bool bVar1;
  System_String_o *value;
  UnityEngine_GameObject_o *source;
  MethodInfo *in_R8;
  
  value = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__LinkAt(__this,eventData,method);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  node = (__this->fields)._node;
  actions = (__this->fields)._actions;
  source = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Dispatch(node,actions,source,value,in_R8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$LinkAt
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__LinkAt (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5e7eb00
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7ec4d: jmp 0x5e7eb68
// asm:   0x5e7ec52: xor ebx, ebx
// asm:   0x5e7ec54: jmp 0x5e7eb68

System_String_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__LinkAt
          (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,
          UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  TMPro_TMP_LinkInfo_array *pTVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  bool bVar5;
  uint uVar6;
  UnityEngine_Camera_o *camera;
  TMPro_TMP_TextInfo_o *pTVar7;
  System_String_o *value;
  MethodInfo *method_00;
  UnityEngine_Vector3_o position;
  
  if (Il2CppMethodInitialized_07548812 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_TextUtilities);
    Il2CppMethodInitialized_07548812 = '\x01';
  }
  pTVar2 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((!bVar5) && (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0)) &&
     ((__this->fields)._node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    pTVar2 = (__this->fields)._text;
    UVar1 = (eventData->fields)._position_k__BackingField.fields;
    camera = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
    if ((TypeInfo_TMPro_TMP_TextUtilities->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_TextUtilities);
    }
    position.fields.z = 0.0;
    position.fields._0_8_ = UVar1;
    uVar6 = TMPro_TMP_TextUtilities__FindIntersectingLink
                      ((TMPro_TMP_Text_o *)pTVar2,position,camera,(MethodInfo *)0x0);
    if (-1 < (int)uVar6) {
      pTVar2 = (__this->fields)._text;
      if ((pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) &&
         (pTVar7 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar2,(MethodInfo *)0x0),
         pTVar7 != (TMPro_TMP_TextInfo_o *)0x0)) {
        if ((pTVar7->fields).linkCount <= (int)uVar6) {
          return (System_String_o *)0x0;
        }
        pTVar2 = (__this->fields)._text;
        if (((pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) &&
            (pTVar7 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar2,(MethodInfo *)0x0),
            pTVar7 != (TMPro_TMP_TextInfo_o *)0x0)) &&
           (pTVar3 = (pTVar7->fields).linkInfo, pTVar3 != (TMPro_TMP_LinkInfo_array *)0x0)) {
          if ((uint)pTVar3->max_length <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          value = TMPro_TMP_LinkInfo__GetLinkID(pTVar3->m_Items + uVar6,(MethodInfo *)0x0);
          pGVar4 = (__this->fields)._node;
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            bVar5 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Contains
                              ((pGVar4->fields).options,value,method_00);
            if (bVar5) {
              return value;
            }
            return (System_String_o *)0x0;
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
// 0x5e7ec70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7ecdf: jmp 0x5e7ed28

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__SetHovered
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,System_String_o *tabId,
               MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  float local_2c;
  
  bVar1 = System_String__Equals_52ffe30((__this->fields)._hoveredId,tabId,5,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar2 = (__this->fields)._hoverTween;
  if (pUVar2 != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,pUVar2,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty(tabId,(MethodInfo *)0x0);
  if (!bVar1) {
    (__this->fields)._hoveredId = tabId;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._hoveredId);
    (__this->fields)._hoverAmount = 0.0;
    local_2c = 1.0;
  }
  else {
    local_2c = 0.0;
  }
  if (Il2CppMethodInitialized_07548813 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_AnimateHover_d__28);
    Il2CppMethodInitialized_07548813 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_AnimateHover_d__28);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).target = local_2c;
  (__this_00->fields).clearAfter = bVar1;
  pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                     ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                      (MethodInfo *)0x0);
  (__this->fields)._hoverTween = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hoverTween);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$AnimateHover
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, float target, bool clearAfter, const MethodInfo* method);
// 0x5e7f160

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover
          (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,float target,bool clearAfter,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__AnimateHover_d__28_o *__this_00;
  
  if (Il2CppMethodInitialized_07548813 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_AnimateHover_d__28);
    Il2CppMethodInitialized_07548813 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_AnimateHover_d__28);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).target = target;
  (__this_00->fields).clearAfter = clearAfter;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$SetPressed
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__SetPressed (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, System_String_o* tabId, const MethodInfo* method);
// 0x5e7ede0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__SetPressed
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,System_String_o *tabId,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_52ffe30((__this->fields)._pressedId,tabId,5,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  (__this->fields)._pressedId = tabId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pressedId);
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects(__this,(MethodInfo *)tabId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$ApplyMeshEffects
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x5e7f200

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyMeshEffects
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  TMPro_TextMeshProUGUI_o *pTVar10;
  bool bVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar12;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07548814 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548814 = '\x01';
  }
  pTVar10 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pTVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar11) {
    return;
  }
  pTVar10 = (__this->fields)._text;
  if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
    (*(pTVar10->klass->vtable)._106_ForceMeshUpdate.methodPtr)
              (pTVar10,false,false,(pTVar10->klass->vtable)._106_ForceMeshUpdate.method);
    bVar11 = System_String__IsNullOrEmpty((__this->fields)._hoveredId,(MethodInfo *)0x0);
    if ((!bVar11) && (fVar1 = (__this->fields)._hoverAmount, 0.0 < fVar1)) {
      uVar2 = (__this->fields)._activeColor.fields.r;
      uVar6 = (__this->fields)._activeColor.fields.g;
      uVar3 = (__this->fields)._activeColor.fields.b;
      uVar7 = (__this->fields)._activeColor.fields.a;
      uVar4 = (__this->fields)._inactiveColor.fields.r;
      uVar8 = (__this->fields)._inactiveColor.fields.g;
      uVar5 = (__this->fields)._inactiveColor.fields.b;
      uVar9 = (__this->fields)._inactiveColor.fields.a;
      fVar12 = 1.0;
      if (fVar1 <= 1.0) {
        fVar12 = fVar1;
      }
      fVar12 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar12);
      color.fields.r = ((float)uVar2 - (float)uVar4) * fVar12 + (float)uVar4;
      color.fields.g = ((float)uVar6 - (float)uVar8) * fVar12 + (float)uVar8;
      color.fields.b = ((float)uVar3 - (float)uVar5) * fVar12 + (float)uVar5;
      color.fields.a = ((float)uVar7 - (float)uVar9) * fVar12 + (float)uVar9;
      Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyLinkColor
                (__this,(__this->fields)._hoveredId,color,method_00);
    }
    bVar11 = System_String__IsNullOrEmpty((__this->fields)._pressedId,(MethodInfo *)0x0);
    if (!bVar11) {
      Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyLinkScale
                (__this,(__this->fields)._pressedId,0.96,method_01);
    }
    pTVar10 = (__this->fields)._text;
    if (pTVar10 != (TMPro_TextMeshProUGUI_o *)0x0) {
      (*(pTVar10->klass->vtable)._108_UpdateVertexData.methodPtr)
                (pTVar10,0x11,(pTVar10->klass->vtable)._108_UpdateVertexData.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$ApplyLinkColor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyLinkColor (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, System_String_o* tabId, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5e7f340
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7f39c: mov r15d, eax
// asm:   0x5e7f39f: jmp 0x5e7f3c1

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyLinkColor
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,System_String_o *tabId,
               UnityEngine_Color_o color,MethodInfo *method)

{
  uint uVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  TMPro_TMP_CharacterInfo_array *pTVar3;
  TMPro_TMP_MeshInfo_array *pTVar4;
  UnityEngine_Color32_array *pUVar5;
  bool bVar6;
  UnityEngine_Color32_Fields UVar7;
  TMPro_TMP_TextInfo_o *pTVar8;
  uint uVar9;
  MethodInfo *in_RCX;
  int iVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  TMPro_TMP_LinkInfo_o local_78;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_38._8_4_ = in_XMM1_Dc;
  local_38._0_8_ = color.fields._8_8_;
  local_38._12_4_ = in_XMM1_Dd;
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = color.fields._0_8_;
  local_48._12_4_ = in_XMM0_Dd;
  local_78.fields.linkIdLength = 0;
  local_78.fields.linkTextfirstCharacterIndex = 0;
  local_78.fields.linkTextLength = 0;
  local_78.fields._28_4_ = 0;
  local_78.fields.textComponent = (TMPro_TMP_Text_o *)0x0;
  local_78.fields.hashCode = 0;
  local_78.fields.linkIdFirstCharacterIndex = 0;
  local_78.fields.linkID = (System_Char_array *)0x0;
  bVar6 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__TryFindLink(__this,tabId,&local_78,in_RCX);
  if (bVar6) {
    iVar10 = 0;
    UVar7._overlap_0 = (_union_53531)il2cpp_runtime_helper_05334d00(local_48._0_4_,local_38._0_4_,0);
    if (0 < local_78.fields.linkTextLength) {
      do {
        pTVar2 = (__this->fields)._text;
        if (((pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) ||
            (pTVar8 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar2,(MethodInfo *)0x0),
            pTVar8 == (TMPro_TMP_TextInfo_o *)0x0)) ||
           (pTVar3 = (pTVar8->fields).characterInfo, pTVar3 == (TMPro_TMP_CharacterInfo_array *)0x0))
        goto label_05e7f4aa;
        uVar9 = local_78.fields.linkTextfirstCharacterIndex + iVar10;
        if ((uint)pTVar3->max_length <= uVar9) goto label_05e7f498;
        if ((pTVar3->m_Items[(int)uVar9].fields.isVisible & 1U) != 0) {
          pTVar2 = (__this->fields)._text;
          if (pTVar2 == (TMPro_TextMeshProUGUI_o *)0x0) {
label_05e7f4aa:
            ThrowNullReferenceException();
          }
          uVar1 = pTVar3->m_Items[(int)uVar9].fields.materialReferenceIndex;
          uVar9 = pTVar3->m_Items[(int)uVar9].fields.vertexIndex;
          pTVar8 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar2,(MethodInfo *)0x0);
          if ((pTVar8 == (TMPro_TMP_TextInfo_o *)0x0) ||
             (pTVar4 = (pTVar8->fields).meshInfo, pTVar4 == (TMPro_TMP_MeshInfo_array *)0x0))
          goto label_05e7f4aa;
          if ((uint)pTVar4->max_length <= uVar1) goto label_05e7f498;
          pUVar5 = pTVar4->m_Items[(int)uVar1].fields.colors32;
          if (pUVar5 == (UnityEngine_Color32_array *)0x0) goto label_05e7f4aa;
          if ((uint)pUVar5->max_length <= uVar9 + 3) {
label_05e7f498:
            ThrowIndexOutOfRangeException();
          }
          pUVar5->m_Items[(int)(uVar9 + 3)].fields._overlap_0._at_rgba.rgba = (int32_t)UVar7._overlap_0;
          if ((uint)pUVar5->max_length <= uVar9 + 2) goto label_05e7f498;
          pUVar5->m_Items[(int)(uVar9 + 2)].fields._overlap_0._at_rgba.rgba = (int32_t)UVar7._overlap_0;
          if (((uint)pUVar5->max_length <= uVar9 + 1) ||
             (pUVar5->m_Items[(int)(uVar9 + 1)].fields._overlap_0._at_rgba.rgba = (int32_t)UVar7._overlap_0,
             (uint)pUVar5->max_length <= uVar9)) goto label_05e7f498;
          pUVar5->m_Items[(int)uVar9].fields._overlap_0._at_rgba = (_struct_53532)UVar7._overlap_0;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_78.fields.linkTextLength);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$ApplyLinkScale
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyLinkScale (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, System_String_o* tabId, float scale, const MethodInfo* method);
// 0x5e7f4b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7f713: jmp 0x5e7f600

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__ApplyLinkScale
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,System_String_o *tabId,float scale,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  TMPro_TextMeshProUGUI_o *pTVar6;
  TMPro_TMP_CharacterInfo_array *pTVar7;
  TMPro_TMP_MeshInfo_array *pTVar8;
  UnityEngine_Vector3_array *pUVar9;
  int32_t iVar10;
  bool bVar11;
  TMPro_TMP_TextInfo_o *pTVar12;
  MethodInfo *in_RCX;
  long lVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  TMPro_TMP_LinkInfo_o local_68;
  undefined1 local_38 [16];
  
  local_68.fields.linkIdLength = 0;
  local_68.fields.linkTextfirstCharacterIndex = 0;
  local_68.fields.linkTextLength = 0;
  local_68.fields._28_4_ = 0;
  local_68.fields.textComponent = (TMPro_TMP_Text_o *)0x0;
  local_68.fields.hashCode = 0;
  local_68.fields.linkIdFirstCharacterIndex = 0;
  local_68.fields.linkID = (System_Char_array *)0x0;
  bVar11 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__TryFindLink(__this,tabId,&local_68,in_RCX);
  if ((!bVar11) || (iVar10 = local_68.fields.linkTextLength, local_68.fields.linkTextLength < 1)) {
    return;
  }
  pTVar6 = (__this->fields)._text;
  if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
    uVar15 = local_68.fields.linkTextfirstCharacterIndex;
    pTVar12 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar6,(MethodInfo *)0x0);
    if ((pTVar12 != (TMPro_TMP_TextInfo_o *)0x0) &&
       (pTVar7 = (pTVar12->fields).characterInfo, pTVar7 != (TMPro_TMP_CharacterInfo_array *)0x0)) {
      if ((uint)pTVar7->max_length <= uVar15) {
label_05e7f718:
        ThrowIndexOutOfRangeException();
      }
      pTVar6 = (__this->fields)._text;
      if (pTVar6 != (TMPro_TextMeshProUGUI_o *)0x0) {
        lVar13 = (long)(int)uVar15;
        fVar17 = pTVar7->m_Items[lVar13].fields.bottomLeft.fields.x;
        local_38 = ZEXT416((uint)pTVar7->m_Items[lVar13].fields.ascender);
        fVar18 = pTVar7->m_Items[lVar13].fields.descender;
        pTVar12 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar6,(MethodInfo *)0x0);
        if ((pTVar12 != (TMPro_TMP_TextInfo_o *)0x0) &&
           (pTVar7 = (pTVar12->fields).characterInfo, pTVar7 != (TMPro_TMP_CharacterInfo_array *)0x0)) {
          uVar16 = (uVar15 + iVar10) - 1;
          if (uVar16 < (uint)pTVar7->max_length) {
            if ((int)uVar16 < (int)uVar15) {
              return;
            }
            fVar17 = (pTVar7->m_Items[(int)uVar16].fields.topRight.fields.x + fVar17) * 0.5;
            fVar18 = (fVar18 + (float)local_38._0_4_) * 0.5;
            do {
              pTVar6 = (__this->fields)._text;
              if (((pTVar6 == (TMPro_TextMeshProUGUI_o *)0x0) ||
                  (pTVar12 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar6,(MethodInfo *)0x0),
                  pTVar12 == (TMPro_TMP_TextInfo_o *)0x0)) ||
                 (pTVar7 = (pTVar12->fields).characterInfo, pTVar7 == (TMPro_TMP_CharacterInfo_array *)0x0))
              goto label_05e7f71d;
              if ((uint)pTVar7->max_length <= uVar15) break;
              if ((pTVar7->m_Items[(int)uVar15].fields.isVisible & 1U) != 0) {
                pTVar6 = (__this->fields)._text;
                if (pTVar6 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_05e7f71d;
                uVar4 = pTVar7->m_Items[(int)uVar15].fields.materialReferenceIndex;
                iVar5 = pTVar7->m_Items[(int)uVar15].fields.vertexIndex;
                lVar13 = (long)iVar5;
                pTVar12 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar6,(MethodInfo *)0x0);
                if ((pTVar12 == (TMPro_TMP_TextInfo_o *)0x0) ||
                   (pTVar8 = (pTVar12->fields).meshInfo, pTVar8 == (TMPro_TMP_MeshInfo_array *)0x0))
                goto label_05e7f71d;
                if ((uint)pTVar8->max_length <= uVar4) break;
                if (iVar5 < 0x7ffffffc) {
                  pUVar9 = pTVar8->m_Items[(int)uVar4].fields.vertices;
                  if (pUVar9 == (UnityEngine_Vector3_array *)0x0) goto label_05e7f71d;
                  pfVar14 = &pUVar9->m_Items[lVar13].fields.z;
                  do {
                    if ((uint)pUVar9->max_length <= (uint)lVar13) goto label_05e7f718;
                    uVar2 = ((UnityEngine_Vector3_Fields *)(pfVar14 + -2))->x;
                    uVar3 = ((UnityEngine_Vector3_Fields *)(pfVar14 + -2))->y;
                    fVar1 = *pfVar14;
                    ((UnityEngine_Vector3_Fields *)(pfVar14 + -2))->x =
                         ((float)uVar2 - fVar17) * scale + fVar17;
                    ((UnityEngine_Vector3_Fields *)(pfVar14 + -2))->y =
                         ((float)uVar3 - fVar18) * scale + fVar18;
                    *pfVar14 = fVar1 * scale + 0.0;
                    lVar13 = lVar13 + 1;
                    pfVar14 = pfVar14 + 3;
                  } while (lVar13 < iVar5 + 4);
                }
              }
              uVar15 = uVar15 + 1;
              if ((int)uVar16 < (int)uVar15) {
                return;
              }
            } while( true );
          }
          goto label_05e7f718;
        }
      }
    }
  }
label_05e7f71d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$TryFindLink
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__TryFindLink (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, System_String_o* tabId, TMPro_TMP_LinkInfo_o* link, const MethodInfo* method);
// 0x5e7f730

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__TryFindLink
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,System_String_o *tabId,
               TMPro_TMP_LinkInfo_o *link,MethodInfo *method)

{
  undefined8 *puVar1;
  TMPro_TMP_LinkInfo_array *pTVar2;
  bool bVar3;
  TMPro_TMP_TextInfo_o *pTVar4;
  System_String_o *a;
  ulong uVar5;
  long lVar6;
  TMPro_TextMeshProUGUI_o *pTVar7;
  long lVar8;
  TMPro_TMP_LinkInfo_o local_58;
  
  local_58.fields.linkIdLength = 0;
  local_58.fields.linkTextfirstCharacterIndex = 0;
  local_58.fields.linkTextLength = 0;
  local_58.fields._28_4_ = 0;
  local_58.fields.textComponent = (TMPro_TMP_Text_o *)0x0;
  local_58.fields.hashCode = 0;
  local_58.fields.linkIdFirstCharacterIndex = 0;
  local_58.fields.linkID = (System_Char_array *)0x0;
  pTVar7 = (__this->fields)._text;
  if (pTVar7 != (TMPro_TextMeshProUGUI_o *)0x0) {
    lVar6 = 0x20;
    uVar5 = 0;
    while( true ) {
      pTVar4 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar7,(MethodInfo *)0x0);
      if (pTVar4 == (TMPro_TMP_TextInfo_o *)0x0) break;
      lVar8 = (long)(pTVar4->fields).linkCount;
      if (lVar8 <= (long)uVar5) {
        (link->fields).linkIdLength = 0;
        (link->fields).linkTextfirstCharacterIndex = 0;
        *(undefined8 *)&(link->fields).linkTextLength = 0;
        (link->fields).textComponent = (TMPro_TMP_Text_o *)0x0;
        (link->fields).hashCode = 0;
        (link->fields).linkIdFirstCharacterIndex = 0;
        (link->fields).linkID = (System_Char_array *)0x0;
label_05e7f85c:
        return (long)uVar5 < lVar8;
      }
      pTVar7 = (__this->fields)._text;
      if (pTVar7 == (TMPro_TextMeshProUGUI_o *)0x0) break;
      pTVar4 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar7,(MethodInfo *)0x0);
      if ((pTVar4 == (TMPro_TMP_TextInfo_o *)0x0) ||
         (pTVar2 = (pTVar4->fields).linkInfo, pTVar2 == (TMPro_TMP_LinkInfo_array *)0x0)) break;
      if ((uint)pTVar2->max_length <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      puVar1 = (undefined8 *)((long)pTVar2->m_Items + lVar6 + -0x20);
      local_58.fields.textComponent = (TMPro_TMP_Text_o *)*puVar1;
      local_58.fields._8_8_ = puVar1[1];
      puVar1 = (undefined8 *)((long)pTVar2->m_Items + lVar6 + -0x10);
      local_58.fields._16_8_ = *puVar1;
      local_58.fields._24_8_ = puVar1[1];
      local_58.fields.linkID = *(System_Char_array **)((long)&pTVar2->m_Items[0].fields.textComponent + lVar6)
      ;
      a = TMPro_TMP_LinkInfo__GetLinkID(&local_58,(MethodInfo *)0x0);
      bVar3 = System_String__Equals_52ffe30(a,tabId,5,(MethodInfo *)0x0);
      if (bVar3) {
        (link->fields).linkID = local_58.fields.linkID;
        (link->fields).linkIdLength = local_58.fields.linkIdLength;
        (link->fields).linkTextfirstCharacterIndex = local_58.fields.linkTextfirstCharacterIndex;
        (link->fields).linkTextLength = local_58.fields.linkTextLength;
        *(undefined4 *)&(link->fields).field_0x1c = local_58.fields._28_4_;
        (link->fields).textComponent = local_58.fields.textComponent;
        (link->fields).hashCode = local_58.fields.hashCode;
        (link->fields).linkIdFirstCharacterIndex = local_58.fields.linkIdFirstCharacterIndex;
        Il2CppCodeGenWriteBarrier((void **)link);
        goto label_05e7f85c;
      }
      lVar6 = lVar6 + 0x28;
      uVar5 = uVar5 + 1;
      pTVar7 = (__this->fields)._text;
      if (pTVar7 == (TMPro_TextMeshProUGUI_o *)0x0) break;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x5e7f880

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__QueueGeometryRefresh(__this,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$QueueGeometryRefresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__QueueGeometryRefresh (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x5e7e9f0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__QueueGeometryRefresh
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *x;
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o *__this_00;
  UnityEngine_Coroutine_o *pUVar2;
  
  if (Il2CppMethodInitialized_07548815 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548815 = '\x01';
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
      if (Il2CppMethodInitialized_07548816 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_RefreshGeometryNextFrame_d__36);
        Il2CppMethodInitialized_07548816 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_RefreshGeometryNextFrame_d__36
                            );
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
      pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                         ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                          (MethodInfo *)0x0);
      (__this->fields)._geometryRefresh = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._geometryRefresh);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$RefreshGeometryNextFrame
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x5e7f890

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame
          (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshGeometryNextFrame_d__36_o *__this_00;
  
  if (Il2CppMethodInitialized_07548816 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_RefreshGeometryNextFrame_d__36);
    Il2CppMethodInitialized_07548816 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_RefreshGeometryNextFrame_d__36
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$RefreshUnderline
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshUnderline (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x5e7f920

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__RefreshUnderline
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_RectTransform_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  TMPro_TMP_CharacterInfo_array *pTVar4;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  int32_t iVar5;
  int32_t iVar6;
  bool bVar7;
  TMPro_TMP_TextInfo_o *pTVar8;
  UnityEngine_GameObject_o *__this_00;
  uint uVar9;
  MethodInfo *method_00;
  long lVar10;
  float fVar11;
  float fVar12;
  TMPro_TMP_LinkInfo_o local_58;
  undefined1 local_28 [16];
  
  if (Il2CppMethodInitialized_07548817 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548817 = '\x01';
  }
  local_58.fields.linkIdLength = 0;
  local_58.fields.linkTextfirstCharacterIndex = 0;
  local_58.fields.linkTextLength = 0;
  local_58.fields._28_4_ = 0;
  local_58.fields.textComponent = (TMPro_TMP_Text_o *)0x0;
  local_58.fields.hashCode = 0;
  local_58.fields.linkIdFirstCharacterIndex = 0;
  local_58.fields.linkID = (System_Char_array *)0x0;
  pTVar1 = (__this->fields)._text;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    pUVar2 = (__this->fields)._underline;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar7) && ((__this->fields)._node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      pTVar1 = (__this->fields)._text;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        method_00 = (pTVar1->klass->vtable)._106_ForceMeshUpdate.method;
        (*(pTVar1->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar1,false,false,method_00);
        pGVar3 = (__this->fields)._node;
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          bVar7 = Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__TryFindLink
                            (__this,(pGVar3->fields).value,&local_58,method_00);
          if ((bVar7) && (iVar6 = local_58.fields.linkTextLength, 0 < local_58.fields.linkTextLength)) {
            pTVar1 = (__this->fields)._text;
            if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
              iVar5 = local_58.fields.linkTextfirstCharacterIndex;
              lVar10 = (long)local_58.fields.linkTextfirstCharacterIndex;
              pTVar8 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0);
              if ((pTVar8 != (TMPro_TMP_TextInfo_o *)0x0) &&
                 (pTVar4 = (pTVar8->fields).characterInfo, pTVar4 != (TMPro_TMP_CharacterInfo_array *)0x0)) {
                if ((uint)pTVar4->max_length <= (uint)iVar5) {
label_05e7fbb4:
                  ThrowIndexOutOfRangeException();
                }
                pTVar1 = (__this->fields)._text;
                if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
                  fVar12 = pTVar4->m_Items[lVar10].fields.bottomLeft.fields.x;
                  local_28 = ZEXT416((uint)pTVar4->m_Items[lVar10].fields.descender);
                  pTVar8 = TMPro_TMP_Text__get_textInfo((TMPro_TMP_Text_o *)pTVar1,(MethodInfo *)0x0);
                  if ((pTVar8 != (TMPro_TMP_TextInfo_o *)0x0) &&
                     (pTVar4 = (pTVar8->fields).characterInfo, pTVar4 != (TMPro_TMP_CharacterInfo_array *)0x0)
                     ) {
                    uVar9 = (iVar6 + iVar5) - 1;
                    if ((uint)pTVar4->max_length <= uVar9) goto label_05e7fbb4;
                    pUVar2 = (__this->fields)._underline;
                    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                      fVar11 = pTVar4->m_Items[(int)uVar9].fields.topRight.fields.x;
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
                          value.fields.y = (float)local_28._0_4_ + -3.0;
                          value.fields.x = fVar12;
                          UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value,(MethodInfo *)0x0);
                          pUVar2 = (__this->fields)._underline;
                          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                            fVar11 = fVar11 - fVar12;
                            fVar12 = 0.0;
                            if (0.0 <= fVar11) {
                              fVar12 = fVar11;
                            }
                            value_00.fields.y = 3.0;
                            value_00.fields.x = fVar12;
                            UnityEngine_RectTransform__set_sizeDelta(pUVar2,value_00,(MethodInfo *)0x0);
                            pUVar2 = (__this->fields)._underline;
                            if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
                               (__this_00 = UnityEngine_Component__get_gameObject
                                                      ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
                               __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                              bVar7 = true;
                              goto label_05e7fb9e;
                            }
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
              bVar7 = false;
label_05e7fb9e:
              UnityEngine_GameObject__SetActive(__this_00,bVar7,(MethodInfo *)0x0);
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
// 0x5e7e350
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7e650: jmp 0x5e7e6bb
// asm:   0x5e7e68e: jmp 0x5e7e6bb

System_String_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__BuildMarkup
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_Color_o active,
          UnityEngine_Color_o inactive,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  bool bVar4;
  int32_t iVar5;
  System_Text_StringBuilder_o *__this;
  ulong uVar6;
  System_Text_StringBuilder_o *pSVar7;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *pSVar8;
  int iVar9;
  ulong uVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined8 in_XMM2_Qb;
  undefined8 in_XMM3_Qb;
  float local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  UnityEngine_Color_o local_40;
  
  local_98 = inactive.fields._8_8_;
  local_a8 = inactive.fields._0_8_;
  uStack_70 = in_XMM1_Dc;
  local_78 = active.fields._8_8_;
  uStack_6c = in_XMM1_Dd;
  uStack_80 = in_XMM0_Dc;
  local_88 = active.fields._0_8_;
  uStack_7c = in_XMM0_Dd;
  uStack_a0 = in_XMM2_Qb;
  uStack_90 = in_XMM3_Qb;
  if (Il2CppMethodInitialized_07548818 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"0.###");
    il2cpp_codegen_initialize_runtime_metadata(&"\"><color=#");
    il2cpp_codegen_initialize_runtime_metadata(&"</color></link>");
    il2cpp_codegen_initialize_runtime_metadata(&"<space=");
    il2cpp_codegen_initialize_runtime_metadata(&"<link=\"");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_07548818 = '\x01';
  }
  local_ac = 0.0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (pGVar2 = (node->fields).deferredChildren,
     pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
    iVar9 = (int)pGVar2->max_length;
    uVar6 = pGVar2->max_length & 0xffffffff;
    if (__this == (System_Text_StringBuilder_o *)0x0) {
      if (iVar9 < 1) goto label_05e7e6bb;
      uVar10 = 0;
      do {
        if (uVar6 <= uVar10) goto label_05e7e6c0;
        if (pGVar2->m_Items[uVar10] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          bVar4 = System_String__IsNullOrEmpty((pGVar2->m_Items[uVar10]->fields).id,(MethodInfo *)0x0);
          if (!bVar4) goto label_05e7e6bb;
          uVar6 = (ulong)(uint)pGVar2->max_length;
        }
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < (long)(int)uVar6);
    }
    else if (0 < iVar9) {
      uVar10 = 0;
      do {
        if (uVar6 <= uVar10) {
label_05e7e6c0:
          ThrowIndexOutOfRangeException();
        }
        pGVar3 = pGVar2->m_Items[uVar10];
        if ((pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
           (bVar4 = System_String__IsNullOrEmpty((pGVar3->fields).id,(MethodInfo *)0x0), !bVar4)) {
          iVar5 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
          if (0 < iVar5) {
            pSVar7 = System_Text_StringBuilder__Append_530ed80(__this,"<space=",(MethodInfo *)0x0)
            ;
            local_ac = 32.0;
            if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
            }
            provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
            pSVar8 = System_Single__ToString_54d0ad0
                               (&local_ac,"0.###",(System_IFormatProvider_o *)provider,
                                (MethodInfo *)0x0);
            if ((pSVar7 == (System_Text_StringBuilder_o *)0x0) ||
               (pSVar7 = System_Text_StringBuilder__Append_530ed80(pSVar7,pSVar8,(MethodInfo *)0x0),
               pSVar7 == (System_Text_StringBuilder_o *)0x0)) goto label_05e7e6bb;
            System_Text_StringBuilder__Append_530ed80(pSVar7,">",(MethodInfo *)0x0);
          }
          if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05e7e6bb;
          bVar4 = System_String__Equals_52ffe30((pGVar3->fields).id,(node->fields).value,5,(MethodInfo *)0x0);
          local_58 = (float)local_88._0_4_;
          fStack_54 = (float)local_88._4_4_;
          uStack_50 = uStack_80;
          uStack_4c = uStack_7c;
          local_68 = (float)local_78._0_4_;
          fStack_64 = (float)local_78._4_4_;
          uStack_60 = uStack_70;
          uStack_5c = uStack_6c;
          if (!bVar4) {
            local_58 = (float)local_a8;
            fStack_54 = local_a8._4_4_;
            uStack_50 = (undefined4)uStack_a0;
            uStack_4c = uStack_a0._4_4_;
            local_68 = (float)local_98;
            fStack_64 = local_98._4_4_;
            uStack_60 = (undefined4)uStack_90;
            uStack_5c = uStack_90._4_4_;
          }
          pSVar7 = System_Text_StringBuilder__Append_530ed80(__this,"<link=\"",(MethodInfo *)0x0);
          if ((pSVar7 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar7 = System_Text_StringBuilder__Append_530ed80(pSVar7,(pGVar3->fields).id,(MethodInfo *)0x0)
             , pSVar7 == (System_Text_StringBuilder_o *)0x0)) goto label_05e7e6bb;
          pSVar7 = System_Text_StringBuilder__Append_530ed80(pSVar7,"\"><color=#",(MethodInfo *)0x0);
          local_40.fields.r = local_58;
          local_40.fields.g = fStack_54;
          local_40.fields.b = local_68;
          local_40.fields.a = fStack_64;
          pSVar8 = UnityEngine_ColorUtility__ToHtmlStringRGBA_68fe2e0(&local_40,(MethodInfo *)0x0);
          if ((pSVar7 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar7 = System_Text_StringBuilder__Append_530ed80(pSVar7,pSVar8,(MethodInfo *)0x0),
             pSVar7 == (System_Text_StringBuilder_o *)0x0)) goto label_05e7e6bb;
          pSVar7 = System_Text_StringBuilder__Append_530ed80(pSVar7,">",(MethodInfo *)0x0);
          pSVar8 = (pGVar3->fields).text;
          if (pSVar8 == (System_String_o *)0x0) {
            pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          }
          if ((pSVar7 == (System_Text_StringBuilder_o *)0x0) ||
             (pSVar7 = System_Text_StringBuilder__Append_530ed80(pSVar7,pSVar8,(MethodInfo *)0x0),
             pSVar7 == (System_Text_StringBuilder_o *)0x0)) goto label_05e7e6bb;
          System_Text_StringBuilder__Append_530ed80(pSVar7,"</color></link>",(MethodInfo *)0x0);
        }
        uVar10 = uVar10 + 1;
        uVar1 = (uint)pGVar2->max_length;
        uVar6 = (ulong)uVar1;
      } while ((long)uVar10 < (long)(int)uVar1);
    }
  }
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    pSVar8 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    return pSVar8;
  }
label_05e7e6bb:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Dispatch
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Dispatch (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, UnityEngine_GameObject_o* source, System_String_o* tabId, const MethodInfo* method);
// 0x5e7ef20
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7f089: nop dword ptr [rax]
// asm:   0x5e7f0bd: mov rdx, qword ptr [rax + 8]
// asm:   0x5e7f0c1: movaps xmm0, xmmword ptr [rsp + 0x40]
// asm:   0x5e7f0c6: movaps xmm1, xmmword ptr [rsp + 0x50]
// asm:   0x5e7f0cb: movups xmmword ptr [rsp + 0x10], xmm1
// asm:   0x5e7f0d0: movups xmmword ptr [rsp], xmm0
// asm:   0x5e7f0d4: mov rdi, r15
// asm:   0x5e7f0d7: mov rsi, rbx
// asm:   0x5e7f0da: call qword ptr [rax]
// asm:   0x5e7f0dc: mov al, 1
// asm:   0x5e7f0de: jmp 0x5e7efc3

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Dispatch
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,UnityEngine_GameObject_o *source,
               System_String_o *tabId,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_String_o *actionId;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c *pGVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  bool bVar5;
  ulong uVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  VirtualInvokeData *pVVar7;
  ulong uVar8;
  long lVar9;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o GStack_78;
  System_String_o *pSStack_58;
  UnityEngine_GameObject_o *pUStack_50;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGStack_48;
  int32_t iStack_40;
  undefined4 uStack_3c;
  
  if (Il2CppMethodInitialized_07548819 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    Il2CppMethodInitialized_07548819 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return false;
  }
  if (actions == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
    return false;
  }
  pSVar2 = (node->fields).options;
  if ((pSVar2 != (System_String_array *)0x0) && (0 < (int)pSVar2->max_length)) {
    uVar6 = pSVar2->max_length & 0xffffffff;
    uVar8 = 0;
    do {
      if (uVar6 <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      bVar5 = System_String__Equals_52ffe30(pSVar2->m_Items[uVar8],tabId,5,(MethodInfo *)0x0);
      if (bVar5) {
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
        if (__this == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          ThrowNullReferenceException();
        }
        (__this->fields).id = (node->fields).id;
        Il2CppCodeGenWriteBarrier(&(__this->fields).id);
        (__this->fields).value = tabId;
        Il2CppCodeGenWriteBarrier(&(__this->fields).value);
        actionId = (node->fields).action;
        GStack_78.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        GStack_78.fields.InputSource = 0;
        GStack_78.fields._28_4_ = 0;
        GStack_78.fields.ElementId = (System_String_o *)0x0;
        GStack_78.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
        Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_52ab380
                  (&GStack_78,(node->fields).id,source,__this,1,(MethodInfo *)0x0);
        pGStack_48 = GStack_78.fields.Node;
        iStack_40 = GStack_78.fields.InputSource;
        uStack_3c = GStack_78.fields._28_4_;
        pSStack_58 = GStack_78.fields.ElementId;
        pUStack_50 = GStack_78.fields.GameObject;
        pGVar3 = actions->klass;
        uVar6 = (ulong)(pGVar3->_2).interface_offsets_count;
        if (uVar6 == 0) goto label_05e7f09f;
        pIVar4 = (pGVar3->_1).interfaceOffsets;
        lVar9 = 0;
        goto label_05e7f090;
      }
      uVar8 = uVar8 + 1;
      uVar1 = (uint)pSVar2->max_length;
      uVar6 = (ulong)uVar1;
    } while ((long)uVar8 < (long)(int)uVar1);
  }
  return false;
  while (lVar9 = lVar9 + 0x10, uVar6 * 0x10 != lVar9) {
label_05e7f090:
    if (*(Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c **)((long)&pIVar4->interfaceType + lVar9) ==
        TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
      pVVar7 = pGVar3->vtable + *(int *)((long)&pIVar4->offset + lVar9);
      goto label_05e7f0bd;
    }
  }
label_05e7f09f:
  pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                     ((Il2CppObject *)actions,
                      (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,0);
label_05e7f0bd:
  context.fields.GameObject = pUStack_50;
  context.fields.ElementId = pSStack_58;
  context.fields.Node = pGStack_48;
  context.fields.InputSource = iStack_40;
  context.fields._28_4_ = uStack_3c;
  (*pVVar7->methodPtr)((Il2CppObject *)actions,actionId,context,pVVar7->method);
  return true;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$CreateUnderline
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__CreateUnderline (UnityEngine_Transform_o* parent, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5e7e6d0

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__CreateUnderline
          (UnityEngine_Transform_o *parent,UnityEngine_Color_o color,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_UI_Image_o *pUVar3;
  
  if (Il2CppMethodInitialized_0754881a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Subtab Underline");
    Il2CppMethodInitialized_0754881a = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_05e7e935:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_05e7e93f;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_05e7e93f;
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
label_05e7e93f:
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Subtab Underline",components,(MethodInfo *)0x0);
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Image);
            if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
              (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                        (pUVar3,color,(pUVar3->klass->vtable)._23_set_color.method);
              (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (pUVar3,false,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
              UnityEngine_GameObject__SetActive(__this,false,(MethodInfo *)0x0);
              return pUVar3;
            }
          }
        }
        goto label_05e7e935;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Contains
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Contains (System_String_array* values, System_String_o* value, const MethodInfo* method);
// 0x5e7f0f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e7f10c: nop dword ptr [rax]

bool Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Contains
               (System_String_array *values,System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((values == (System_String_array *)0x0) || ((int)values->max_length < 1)) {
    return false;
  }
  uVar3 = values->max_length & 0xffffffff;
  uVar4 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      ThrowIndexOutOfRangeException();
    }
    bVar2 = System_String__Equals_52ffe30(values->m_Items[uVar4],value,5,(MethodInfo *)0x0);
    if (bVar2) break;
    uVar4 = uVar4 + 1;
    uVar1 = (uint)values->max_length;
    uVar3 = (ulong)uVar1;
    if ((long)(int)uVar1 <= (long)uVar4) {
      return false;
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Labels
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Labels (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5e7e260

System_String_o *
Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Labels
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  int iVar2;
  System_Text_StringBuilder_o *__this;
  ulong uVar3;
  System_String_o *pSVar4;
  int iVar5;
  ulong uVar6;
  
  if (Il2CppMethodInitialized_0754881b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_0754881b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (pGVar1 = (node->fields).deferredChildren,
     pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
    iVar2 = (int)pGVar1->max_length;
    if (__this == (System_Text_StringBuilder_o *)0x0) {
      if (iVar2 < 1) goto label_05e7e341;
      iVar5 = 0;
      do {
        if (pGVar1->m_Items[iVar5] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
        goto label_05e7e341;
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
    else {
      if (iVar2 < 1) goto label_05e7e326;
      uVar3 = pGVar1->max_length & 0xffffffff;
      uVar6 = 0;
      do {
        if (uVar3 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        if (pGVar1->m_Items[uVar6] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          System_Text_StringBuilder__Append_530ed80
                    (__this,(pGVar1->m_Items[uVar6]->fields).text,(MethodInfo *)0x0);
          uVar3 = (ulong)(uint)pGVar1->max_length;
        }
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar3);
    }
  }
  if (__this == (System_Text_StringBuilder_o *)0x0) {
label_05e7e341:
    ThrowNullReferenceException();
  }
label_05e7e326:
  pSVar4 = (*(__this->klass->vtable)._3_ToString.methodPtr)(__this,(__this->klass->vtable)._3_ToString.method)
  ;
  return pSVar4;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Smooth
// il2cpp: float Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Smooth (float value, const MethodInfo* method);
// 0x5e7fbc0

float Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime__Smooth(float value,MethodInfo *method)

{
  return (3.0 - (value + value)) * value * value;
}


// Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime___ctor (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o* __this, const MethodInfo* method);
// 0x5e7fbe0

void Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



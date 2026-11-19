// Type: Gisketch.Aottg2UI.Building.GisketchFullscreenStretch
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchFullscreenStretch.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$Mark
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Mark (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x53904e0

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Mark
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542b2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFullscreenStretch);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFullscreenStretch);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b2b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFullscreenStretch);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFullscreenStretch;
      __this = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFullscreenStretch);
    }
    if (__this != (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) {
      Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply(__this,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$ApplyAll
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x53908a0

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542b2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchFullscreenStretch);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b2c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x1;
    pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       (root,true,
                        (MethodInfo_353C0B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchFullscreenStretch);
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (uint)pSVar3->max_length;
      if ((int)uVar2 < 1) {
        return;
      }
      uVar4 = 0;
      while( true ) {
        if (uVar2 <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        if ((Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)pSVar3->m_Items[(int)uVar4] ==
            (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) break;
        Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply
                  ((Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)pSVar3->m_Items[(int)uVar4],
                   method_00);
        uVar4 = uVar4 + 1;
        uVar2 = (uint)pSVar3->max_length;
        if ((int)uVar2 <= (int)uVar4) {
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o* __this, const MethodInfo* method);
// 0x53905c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53907bc: jmp 0x53907d9

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply
               (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o UVar2;
  bool bVar3;
  UnityEngine_RectTransform_o *__this_00;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07542b2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b2d = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar2 = UnityEngine_RectTransform__get_anchorMin(__this_00,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  fVar4 = UVar2.fields.x - UVar1.x;
  fVar5 = UVar2.fields.y - UVar1.y;
  if (fVar5 * fVar5 + fVar4 * fVar4 < 9.9999994e-11) {
    UVar2 = UnityEngine_RectTransform__get_anchorMax(__this_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07542885 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_07542885 = '\x01';
    }
    UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
    fVar4 = UVar2.fields.x - UVar1.x;
    fVar5 = UVar2.fields.y - UVar1.y;
    if (9.9999994e-11 <= fVar5 * fVar5 + fVar4 * fVar4) {
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
    }
    else {
      UVar2 = UnityEngine_RectTransform__get_offsetMin(__this_00,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
      fVar4 = UVar2.fields.x - UVar1.x;
      fVar5 = UVar2.fields.y - UVar1.y;
      if (fVar5 * fVar5 + fVar4 * fVar4 < 9.9999994e-11) {
        UVar2 = UnityEngine_RectTransform__get_offsetMax(__this_00,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
        fVar4 = UVar2.fields.x - UVar1.x;
        fVar5 = UVar2.fields.y - UVar1.y;
        if (fVar5 * fVar5 + fVar4 * fVar4 < 9.9999994e-11) {
          return;
        }
      }
    }
  }
  UnityEngine_RectTransform__set_anchorMin
            (__this_00,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
             ,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            (__this_00,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            (__this_00,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
             ,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            (__this_00,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
             ,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch___ctor (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o* __this, const MethodInfo* method);
// 0x5390960

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch___ctor
               (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



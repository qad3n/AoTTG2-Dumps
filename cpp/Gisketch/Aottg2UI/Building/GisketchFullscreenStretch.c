// Type: Gisketch.Aottg2UI.Building.GisketchFullscreenStretch
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchFullscreenStretch.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$Mark
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Mark (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x1819023c0

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Mark
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this;
  
  if (Il2CppMethodInitialized_1843421ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFullscreenStretch);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFullscreenStretch);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421ac = '\x01';
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
                       (go,(MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_GisketchFullscreenStretch);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFullscreenStretch);
    }
    if (__this != (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)0x0) {
      Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$ApplyAll
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x181901ff0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190206e: nop 
// asm:   0x181902094: mov rdi, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__this;
  bool bVar1;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843421ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchFullscreenStretch);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421ad = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((root == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                           (root,true,
                            (MethodInfo_6F5750 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchFullscreenStretch
                           ), pUVar2 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
label_1819020a5:
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pUVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pUVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      __this = (&pUVar2->m_Items[0].klass)[(int)uVar3];
      if (__this == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) goto label_1819020a5;
      Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply
                ((Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *)__this,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$Apply
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o* __this, const MethodInfo* method);
// 0x1819020b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1819023a4: movaps xmm7, xmmword ptr [rsp + 0x30]
// asm:   0x1819023a9: movaps xmm6, xmmword ptr [rsp + 0x40]
// asm:   0x1819023ae: movaps xmm8, xmmword ptr [rsp + 0x20]

void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Apply
               (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  MethodInfo *method_00;
  float in_XMM1_Da;
  float fVar4;
  float fVar5;
  float fStackX_1c;
  
  if (Il2CppMethodInitialized_1843421ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421ae = '\x01';
  }
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (__this_00 == (UnityEngine_RectTransform_o *)0x0) {
      ThrowNullReferenceException();
    }
    UVar2 = UnityEngine_RectTransform__get_anchorMin(__this_00,(MethodInfo *)0x0);
    fStackX_1c = UVar2.fields.y;
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    fVar4 = UVar2.fields.x - (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
    fStackX_1c = fStackX_1c - (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
    if (fStackX_1c * fStackX_1c + fVar4 * fVar4 < 9.9999994e-11) {
      UVar2 = UnityEngine_RectTransform__get_anchorMax(__this_00,(MethodInfo *)0x0);
      fStackX_1c = UVar2.fields.y;
      if (Il2CppMethodInitialized_184341f36 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_184341f36 = '\x01';
      }
      fVar4 = UVar2.fields.x - (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.x;
      fStackX_1c = fStackX_1c - (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields.y;
      if (fStackX_1c * fStackX_1c + fVar4 * fVar4 < 9.9999994e-11) {
        UVar2 = UnityEngine_RectTransform__get_offsetMin(__this_00,(MethodInfo *)0x0);
        fStackX_1c = UVar2.fields.y;
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        fVar4 = UVar2.fields.x - (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
        fStackX_1c = fStackX_1c - (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
        if (fStackX_1c * fStackX_1c + fVar4 * fVar4 < 9.9999994e-11) {
          UVar2 = UnityEngine_RectTransform__get_offsetMax(__this_00,(MethodInfo *)0x0);
          fStackX_1c = UVar2.fields.y;
          fVar4 = fStackX_1c;
          UVar3 = UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                            ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,method_00);
          fVar5 = UVar2.fields.x - UVar3.fields.x;
          fStackX_1c = UVar3.fields.y;
          if ((fVar4 - fStackX_1c) * (fVar4 - fStackX_1c) + fVar5 * fVar5 < 9.9999994e-11) {
            return;
          }
        }
      }
    }
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMin
              (__this_00,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (__this_00,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (__this_00,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (__this_00,
               (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchFullscreenStretch$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchFullscreenStretch___ctor (Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Building_GisketchFullscreenStretch___ctor(Gisketch_Aottg2UI_Building_GisketchFullscreenStretch_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



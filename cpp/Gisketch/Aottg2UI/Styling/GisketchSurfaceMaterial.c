// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSurfaceMaterial.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$get_Shared
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared (const MethodInfo* method);
// 0x18188c7f0

UnityEngine_Material_o * Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_184341f09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Material);
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Materials/AottgUiSurface");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch/AoTTG2 UI Surface");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG UI Textured Surface");
    Il2CppMethodInitialized_184341f09 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  pUVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = UnityEngine_Resources__Load_object_
                       ("GisketchUI/Materials/AottgUiSurface",
                        (MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_Material);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material = pUVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material,pUVar2);
    pUVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      x = (UnityEngine_Object_o *)UnityEngine_Shader__Find("Gisketch/AoTTG2 UI Surface",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
        UnityEngine_Material___ctor(pUVar2,(UnityEngine_Shader_o *)x,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Object__set_name((UnityEngine_Object_o *)pUVar2,"AoTTG UI Textured Surface",(MethodInfo *)0x0)
          ;
          UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)pUVar2,0x3d,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
          }
          TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material = pUVar2;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material,
                     pUVar2);
          Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults
                    (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material,
                     (MethodInfo *)0x0);
          return TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material;
        }
        ThrowNullReferenceException();
      }
      return (UnityEngine_Material_o *)0x0;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  return TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults (UnityEngine_Material_o* material, const MethodInfo* method);
// 0x18188aea0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults
               (UnityEngine_Material_o *material,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG_WORN");
    Il2CppMethodInitialized_184341f0a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (Il2CppMethodInitialized_184341f0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f0f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (material == (UnityEngine_Material_o *)0x0) goto label_18188b328;
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->FineScaleId
               ,205.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        FineStrengthId,0.0147,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        CoarseScaleId,72.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        CoarseStrengthId,0.0014,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        GradientStrengthId,0.0089,(MethodInfo *)0x0);
  }
  if (Il2CppMethodInitialized_184341f10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f10 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (material == (UnityEngine_Material_o *)0x0) goto label_18188b328;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (material == (UnityEngine_Material_o *)0x0) {
label_18188b328:
      ThrowNullReferenceException();
    }
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        LightFineScaleId,263.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        LightFineStrengthId,0.04,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        LightCoarseScaleId,120.0,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        LightCoarseStrengthId,0.007,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        LightGradientStrengthId,0.018,(MethodInfo *)0x0);
  }
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId,0.0,
             (MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      ReliefGradientId,0.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      ReliefLightAngleId,225.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      ReliefShadowSizeId,4.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->WornId,0.0,
             (MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushRevealId
             ,1.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      BrushRevealDirectionId,1.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakId
             ,0.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      BrushStreakStrengthId,0.46,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      BrushStreakScaleId,42.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      VerticalLightGradientId,0.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_2ee3980
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      HorizontalBlurId,0.0,(MethodInfo *)0x0);
  UnityEngine_Material__DisableKeyword(material,"AOTTG_WORN",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
            (material,0.18,0.34,18.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings(225.0,4.0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$Instance
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance (float relief, bool reliefGradient, bool worn, System_Nullable_float__o stainScaleOverride, bool brushStreak, bool verticalLightGradient, const MethodInfo* method);
// 0x18188bda0

UnityEngine_Material_o *
Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
          (float relief,bool reliefGradient,bool worn,System_Nullable_float__o stainScaleOverride,
          bool brushStreak,bool verticalLightGradient,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  uint uVar3;
  System_Collections_Generic_Dictionary_Material__float__o *__this;
  System_Collections_Generic_List_Material__o *__this_00;
  UnityEngine_Material_array *pUVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  UnityEngine_Material_o *source;
  UnityEngine_Material_o *__this_01;
  float fVar7;
  float fVar8;
  System_Nullable_float__Fields local_res20;
  
  local_res20 = stainScaleOverride.fields;
  if (Il2CppMethodInitialized_184341f0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG UI Surface Instance");
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG_WORN");
    Il2CppMethodInitialized_184341f0b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  source = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    return (UnityEngine_Material_o *)0x0;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
  UnityEngine_Material___ctor_2ee55e0(__this_01,source,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Material_o *)0x0) {
    UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_01,"AoTTG UI Surface Instance",(MethodInfo *)0x0);
    UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_01,0x34,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    UnityEngine_Material__SetFloat_2ee3980
              (__this_01,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId,
               relief,(MethodInfo *)0x0);
    fVar8 = 1.0;
    if (reliefGradient) {
      fVar7 = 1.0;
    }
    else {
      fVar7 = 0.0;
    }
    UnityEngine_Material__SetFloat_2ee3980
              (__this_01,
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefGradientId,
               fVar7,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (worn) {
      fVar7 = 1.0;
    }
    else {
      fVar7 = 0.0;
    }
    UnityEngine_Material__SetFloat_2ee3980
              (__this_01,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->WornId,
               fVar7,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    UnityEngine_Material__SetFloat_2ee3980
              (__this_01,
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushRevealId,1.0,
               (MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (__this_01,
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
               BrushRevealDirectionId,1.0,(MethodInfo *)0x0);
    if (brushStreak) {
      fVar7 = 1.0;
    }
    else {
      fVar7 = 0.0;
    }
    UnityEngine_Material__SetFloat_2ee3980
              (__this_01,
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakId,fVar7,
               (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (source != (UnityEngine_Material_o *)0x0) {
      iVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakStrengthId
      ;
      fVar7 = UnityEngine_Material__GetFloat_2ee2100(source,iVar2,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat_2ee3980(__this_01,iVar2,fVar7,(MethodInfo *)0x0);
      iVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakScaleId;
      fVar7 = UnityEngine_Material__GetFloat_2ee2100(source,iVar2,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat_2ee3980(__this_01,iVar2,fVar7,(MethodInfo *)0x0);
      if (!verticalLightGradient) {
        fVar8 = 0.0;
      }
      UnityEngine_Material__SetFloat_2ee3980
                (__this_01,
                 TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                 VerticalLightGradientId,fVar8,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      UnityEngine_Material__SetFloat_2ee3980
                (__this_01,
                 TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->HorizontalBlurId,
                 0.0,(MethodInfo *)0x0);
      if (worn) {
        UnityEngine_Material__EnableKeyword(__this_01,"AOTTG_WORN",(MethodInfo *)0x0);
      }
      else {
        UnityEngine_Material__DisableKeyword(__this_01,"AOTTG_WORN",(MethodInfo *)0x0);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      iVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefLightAngleId;
      fVar8 = UnityEngine_Material__GetFloat_2ee2100(source,iVar2,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat_2ee3980(__this_01,iVar2,fVar8,(MethodInfo *)0x0);
      iVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefShadowSizeId;
      fVar8 = UnityEngine_Material__GetFloat_2ee2100(source,iVar2,(MethodInfo *)0x0);
      UnityEngine_Material__SetFloat_2ee3980(__this_01,iVar2,fVar8,(MethodInfo *)0x0);
      if (local_res20.hasValue != false) {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        iVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->StainScaleId;
        fVar8 = System_Nullable_float___get_Value
                          ((System_Nullable_float__o *)&local_res20,
                           (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
        UnityEngine_Material__SetFloat_2ee3980(__this_01,iVar2,fVar8,(MethodInfo *)0x0);
        __this = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                 _stainScaleOverrides;
        fVar8 = System_Nullable_float___get_Value
                          ((System_Nullable_float__o *)&local_res20,
                           (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
        if (__this == (System_Collections_Generic_Dictionary_Material__float__o *)0x0) goto label_18188c2b1;
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)__this_01,
                   fVar8,(MethodInfo_1488DA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Material_float_set_Item);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      pMVar5 = MethodInfo_System_Collections_Generic_List_Material_Add;
      __this_00 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances;
      if (__this_00 != (System_Collections_Generic_List_Material__o *)0x0) {
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (__this_00->fields)._items;
        if (pUVar4 != (UnityEngine_Material_array *)0x0) {
          uVar3 = (__this_00->fields)._size;
          if ((uint)pUVar4->max_length <= uVar3) {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                       (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
            return __this_01;
          }
          (__this_00->fields)._size = uVar3 + 1;
          if (uVar3 < (uint)pUVar4->max_length) {
            pUVar4->m_Items[(int)uVar3] = __this_01;
            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar3,__this_01);
            return __this_01;
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
label_18188c2b1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyReliefLightAngle
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefLightAngle (float angle, const MethodInfo* method);
// 0x18188b5f0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefLightAngle(float angle,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  float shadowSize;
  
  if (Il2CppMethodInitialized_184341f0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f0c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  pUVar2 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    pUVar2 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Material_o *)0x0) {
      ThrowNullReferenceException();
    }
    shadowSize = UnityEngine_Material__GetFloat_2ee2100
                           (pUVar2,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                                   ReliefShadowSizeId,(MethodInfo *)0x0);
  }
  else {
    shadowSize = 4.0;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings(angle,shadowSize,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyReliefSettings
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings (float angle, float shadowSize, const MethodInfo* method);
// 0x18188b700
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18188b997: sub edi, 1
// asm:   0x18188b99a: js 0x18188b9a8
// asm:   0x18188b99c: mov rcx, qword ptr [rip + 0x27fac0d]  ; TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial
// asm:   0x18188b9a3: jmp 0x18188b853

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings
               (float angle,float shadowSize,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_Material__o *pSVar1;
  System_Collections_Generic_Dictionary_Material__float__o *__this;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  
  if (Il2CppMethodInitialized_184341f0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_float_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f0d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  pUVar3 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_18188b9bd;
    UnityEngine_Material__SetFloat_2ee3980
              (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      ReliefLightAngleId,angle,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      ReliefShadowSizeId,shadowSize,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances;
  if (pSVar1 != (System_Collections_Generic_List_Material__o *)0x0) {
    index = (pSVar1->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances;
      if (pSVar1 == (System_Collections_Generic_List_Material__o *)0x0) break;
      pUVar3 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Material_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (pUVar3 != (UnityEngine_Material_o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
          }
          __this = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                   _stainScaleOverrides;
          if (__this == (System_Collections_Generic_Dictionary_Material__float__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)pUVar3,
                     (MethodInfo_145AA00 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Material_float_Remove);
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances;
        if (pSVar1 == (System_Collections_Generic_List_Material__o *)0x0) break;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                   (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        if (pUVar3 == (UnityEngine_Material_o *)0x0) break;
        UnityEngine_Material__SetFloat_2ee3980
                  (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                          ReliefLightAngleId,angle,(MethodInfo *)0x0);
        UnityEngine_Material__SetFloat_2ee3980
                  (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                          ReliefShadowSizeId,shadowSize,(MethodInfo *)0x0);
      }
    }
  }
label_18188b9bd:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyWearSettings
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearSettings (float wearStrength, float chipStrength, float stainScale, const MethodInfo* method);
// 0x18188bae0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18188bbdf: nop 
// asm:   0x18188bc9a: movaps xmm6, xmm7
// asm:   0x18188bd50: sub edi, 1
// asm:   0x18188bd53: js 0x18188bd61
// asm:   0x18188bd55: mov rcx, qword ptr [rip + 0x27fa854]  ; TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial
// asm:   0x18188bd5c: jmp 0x18188bbe0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearSettings
               (float wearStrength,float chipStrength,float stainScale,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_Material__o *pSVar1;
  System_Collections_Generic_Dictionary_Material__float__o *pSVar2;
  bool bVar3;
  UnityEngine_Material_o *pUVar4;
  UnityEngine_UIElements_TextureId_o stainScale_00;
  UnityEngine_UIElements_TextureId_o local_res8 [2];
  
  if (Il2CppMethodInitialized_184341f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_float_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_float_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f0e = '\x01';
  }
  local_res8[0].fields.m_Index = (UnityEngine_UIElements_TextureId_Fields)0;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  pUVar4 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
            (pUVar4,wearStrength,chipStrength,stainScale,(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances;
  if (pSVar1 != (System_Collections_Generic_List_Material__o *)0x0) {
    index = (pSVar1->fields)._size;
    while( true ) {
      index = index + -1;
      if (index < 0) {
        return;
      }
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      pSVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances;
      if (pSVar1 == (System_Collections_Generic_List_Material__o *)0x0) break;
      pUVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_Material_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (pUVar4 != (UnityEngine_Material_o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
          }
          pSVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                   _stainScaleOverrides;
          if (pSVar2 == (System_Collections_Generic_Dictionary_Material__float__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)pUVar4,
                     (MethodInfo_145AA00 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Material_float_Remove);
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        pSVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances;
        if (pSVar1 == (System_Collections_Generic_List_Material__o *)0x0) break;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar1,index,
                   (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        pSVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                 _stainScaleOverrides;
        if (pSVar2 == (System_Collections_Generic_Dictionary_Material__float__o *)0x0) break;
        bVar3 = System_Collections_Generic_Dictionary_object__TextureId___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                           (Il2CppObject *)pUVar4,local_res8,
                           (MethodInfo_1461BD0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Material_float_TryGetValue);
        stainScale_00.fields.m_Index =
             (UnityEngine_UIElements_TextureId_Fields)(UnityEngine_UIElements_TextureId_Fields)stainScale;
        if (bVar3) {
          stainScale_00.fields.m_Index = local_res8[0].fields.m_Index;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                  (pUVar4,wearStrength,chipStrength,(float)stainScale_00.fields.m_Index,(MethodInfo *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset (UnityEngine_Material_o* material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength, const MethodInfo* method);
// 0x18188b490

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset
               (UnityEngine_Material_o *material,float fineScale,float fineStrength,float coarseScale,
               float coarseStrength,float gradientStrength,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f0f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (material == (UnityEngine_Material_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->FineScaleId
               ,fineScale,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        FineStrengthId,fineStrength,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        CoarseScaleId,coarseScale,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        CoarseStrengthId,coarseStrength,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        GradientStrengthId,gradientStrength,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyLightPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset (UnityEngine_Material_o* material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength, const MethodInfo* method);
// 0x18188b330

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset
               (UnityEngine_Material_o *material,float fineScale,float fineStrength,float coarseScale,
               float coarseStrength,float gradientStrength,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f10 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (material == (UnityEngine_Material_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        LightFineScaleId,fineScale,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        LightFineStrengthId,fineStrength,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        LightCoarseScaleId,coarseScale,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        LightCoarseStrengthId,coarseStrength,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        LightGradientStrengthId,gradientStrength,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyWearPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset (UnityEngine_Material_o* material, float wearStrength, float chipStrength, float stainScale, const MethodInfo* method);
// 0x18188b9d0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
               (UnityEngine_Material_o *material,float wearStrength,float chipStrength,float stainScale,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f11 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    if (material == (UnityEngine_Material_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        WearStrengthId,wearStrength,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        ChipStrengthId,chipStrength,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_2ee3980
              (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                        StainScaleId,stainScale,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial___cctor (const MethodInfo* method);
// 0x18188c2c0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial___cctor(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_Material__o *__this;
  System_Collections_Generic_Dictionary_Material__float__o *__this_00;
  
  if (Il2CppMethodInitialized_184341f12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_Material_float)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Material);
    il2cpp_codegen_initialize_runtime_metadata(&"_BrushStreakScale");
    il2cpp_codegen_initialize_runtime_metadata(&"_GradientStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_CoarseStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_ChipStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_BrushReveal");
    il2cpp_codegen_initialize_runtime_metadata(&"_LightFineScale");
    il2cpp_codegen_initialize_runtime_metadata(&"_ReliefShadowSize");
    il2cpp_codegen_initialize_runtime_metadata(&"_LightCoarseScale");
    il2cpp_codegen_initialize_runtime_metadata(&"_FineScale");
    il2cpp_codegen_initialize_runtime_metadata(&"_HorizontalBlur");
    il2cpp_codegen_initialize_runtime_metadata(&"_VerticalLightGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"_BrushStreakStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_LightCoarseStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_BrushRevealDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"_CoarseScale");
    il2cpp_codegen_initialize_runtime_metadata(&"_Relief");
    il2cpp_codegen_initialize_runtime_metadata(&"_FineStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_WearStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_LightGradientStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_LightFineStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_BrushStreak");
    il2cpp_codegen_initialize_runtime_metadata(&"_Worn");
    il2cpp_codegen_initialize_runtime_metadata(&"_StainScale");
    il2cpp_codegen_initialize_runtime_metadata(&"_ReliefGradient");
    il2cpp_codegen_initialize_runtime_metadata(&"_ReliefLightAngle");
    Il2CppMethodInitialized_184341f12 = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->FineScaleId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->FineStrengthId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->CoarseScaleId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->CoarseStrengthId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->GradientStrengthId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->LightFineScaleId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->LightFineStrengthId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->LightCoarseScaleId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->LightCoarseStrengthId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->LightGradientStrengthId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefGradientId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefLightAngleId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefShadowSizeId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->WornId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->WearStrengthId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ChipStrengthId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->StainScaleId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushRevealId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushRevealDirectionId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakStrengthId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakScaleId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->VerticalLightGradientId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->HorizontalBlurId = iVar1;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances,__this);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_Material_float_ctor);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_stainScaleOverrides = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_stainScaleOverrides,
             __this_00);
  return;
}



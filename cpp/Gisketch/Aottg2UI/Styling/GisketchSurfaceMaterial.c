// Type: Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchSurfaceMaterial.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$get_Shared
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared (const MethodInfo* method);
// 0x5333980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5333b8d: mov rdi, qword ptr [r15]

UnityEngine_Material_o * Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared(MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial_StaticFields *pGVar1;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Object_o *x;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754287a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Material);
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Materials/AottgUiSurface");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch/AoTTG2 UI Surface");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG UI Textured Surface");
    Il2CppMethodInitialized_0754287a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  pUVar3 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    pUVar3 = UnityEngine_Resources__Load_object_
                       ("GisketchUI/Materials/AottgUiSurface",
                        (MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Material);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields;
    pGVar1->_material = pUVar3;
    Il2CppCodeGenWriteBarrier(&pGVar1->_material);
    pUVar3 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      x = (UnityEngine_Object_o *)UnityEngine_Shader__Find("Gisketch/AoTTG2 UI Surface",(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        return (UnityEngine_Material_o *)0x0;
      }
      method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor
                ((UnityEngine_Material_o *)method_00,(UnityEngine_Shader_o *)x,(MethodInfo *)0x0);
      if (method_00 == (MethodInfo *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_Object__set_name((UnityEngine_Object_o *)method_00,"AoTTG UI Textured Surface",(MethodInfo *)0x0);
      UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)method_00,0x3d,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields;
      pGVar1->_material = (UnityEngine_Material_o *)method_00;
      Il2CppCodeGenWriteBarrier(&pGVar1->_material);
      Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults
                (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material,
                 method_00);
      goto label_05333b90;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
label_05333b90:
  return TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_material;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyDefaults
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults (UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5333bb0

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyDefaults
               (UnityEngine_Material_o *material,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754287b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&"AOTTG_WORN");
    Il2CppMethodInitialized_0754287b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset
            (material,205.0,0.0147,72.0,0.0014,0.0089,method);
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset
            (material,263.0,0.04,120.0,0.007,0.018,method);
  if (material == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId,0.0,
             (MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      ReliefGradientId,0.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      ReliefLightAngleId,225.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      ReliefShadowSizeId,4.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->WornId,0.0,
             (MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushRevealId
             ,1.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      BrushRevealDirectionId,1.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakId
             ,0.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      BrushStreakStrengthId,0.46,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      BrushStreakScaleId,42.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      VerticalLightGradientId,0.0,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      HorizontalBlurId,0.0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)"AOTTG_WORN";
  UnityEngine_Material__DisableKeyword(material,"AOTTG_WORN",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset(material,0.18,0.34,18.0,method_00);
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings(225.0,4.0,(MethodInfo *)material);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$Instance
// il2cpp: UnityEngine_Material_o* Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance (float relief, bool reliefGradient, bool worn, System_Nullable_float__o stainScaleOverride, bool brushStreak, bool verticalLightGradient, const MethodInfo* method);
// 0x5322ea0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53231dd: jmp 0x53231f1

UnityEngine_Material_o *
Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
          (float relief,bool reliefGradient,bool worn,System_Nullable_float__o stainScaleOverride,
          bool brushStreak,bool verticalLightGradient,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  uint32_t uVar3;
  uint uVar4;
  System_Collections_Generic_Dictionary_Material__float__o *__this;
  System_Collections_Generic_List_Material__o *__this_00;
  UnityEngine_Material_array *pUVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  UnityEngine_Material_o *source;
  UnityEngine_Material_o *__this_01;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial_c *method_00;
  float fVar8;
  bool local_40;
  System_Nullable_float__Fields local_38;
  
  local_38 = stainScaleOverride.fields;
  if (Il2CppMethodInitialized_0754287c == '\0') {
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
    Il2CppMethodInitialized_0754287c = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  source = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return (UnityEngine_Material_o *)0x0;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
  UnityEngine_Material___ctor_68dcfd0(__this_01,source,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_Material_o *)0x0) goto label_0532334f;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)__this_01,"AoTTG UI Surface Instance",(MethodInfo *)0x0);
  UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)__this_01,0x34,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (__this_01,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId,
             relief,(MethodInfo *)0x0);
  if (reliefGradient) {
    fVar8 = 1.0;
  }
  else {
    fVar8 = 0.0;
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (__this_01,
             TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefGradientId,fVar8
             ,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    if (!worn) goto label_0532304f;
label_05323062:
    fVar8 = 1.0;
  }
  else {
    if (worn) goto label_05323062;
label_0532304f:
    fVar8 = 0.0;
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (__this_01,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->WornId,fVar8
             ,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (__this_01,
             TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushRevealId,1.0,
             (MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (__this_01,
             TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushRevealDirectionId
             ,1.0,(MethodInfo *)0x0);
  fVar8 = 1.0;
  if (!brushStreak) {
    fVar8 = 0.0;
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (__this_01,
             TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakId,fVar8,
             (MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (source != (UnityEngine_Material_o *)0x0) {
    iVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakStrengthId;
    fVar8 = UnityEngine_Material__GetFloat_68e0ed0(source,iVar2,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_68e0ad0(__this_01,iVar2,fVar8,(MethodInfo *)0x0);
    iVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakScaleId;
    fVar8 = UnityEngine_Material__GetFloat_68e0ed0(source,iVar2,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_68e0ad0(__this_01,iVar2,fVar8,(MethodInfo *)0x0);
    if (verticalLightGradient) {
      fVar8 = 1.0;
    }
    else {
      fVar8 = 0.0;
    }
    UnityEngine_Material__SetFloat_68e0ad0
              (__this_01,
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
               VerticalLightGradientId,fVar8,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    UnityEngine_Material__SetFloat_68e0ad0
              (__this_01,
               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->HorizontalBlurId,0.0
               ,(MethodInfo *)0x0);
    if (worn) {
      UnityEngine_Material__EnableKeyword(__this_01,"AOTTG_WORN",(MethodInfo *)0x0);
      uVar3 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor;
    }
    else {
      UnityEngine_Material__DisableKeyword(__this_01,"AOTTG_WORN",(MethodInfo *)0x0);
      uVar3 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    iVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefLightAngleId;
    fVar8 = UnityEngine_Material__GetFloat_68e0ed0(source,iVar2,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_68e0ad0(__this_01,iVar2,fVar8,(MethodInfo *)0x0);
    iVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefShadowSizeId;
    fVar8 = UnityEngine_Material__GetFloat_68e0ed0(source,iVar2,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_68e0ad0(__this_01,iVar2,fVar8,(MethodInfo *)0x0);
    local_40 = stainScaleOverride.fields.hasValue;
    if (local_40 != false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      iVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->StainScaleId;
      fVar8 = System_Nullable_float___get_Value
                        ((System_Nullable_float__o *)&local_38,
                         (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
      UnityEngine_Material__SetFloat_68e0ad0(__this_01,iVar2,fVar8,(MethodInfo *)0x0);
      __this = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_stainScaleOverrides
      ;
      fVar8 = System_Nullable_float___get_Value
                        ((System_Nullable_float__o *)&local_38,
                         (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
      if (__this == (System_Collections_Generic_Dictionary_Material__float__o *)0x0) goto label_0532334f;
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)__this_01,
                 fVar8,(MethodInfo_4AB5450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Material_float_set_Item);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    pMVar6 = MethodInfo_System_Collections_Generic_List_Material_Add;
    __this_00 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances;
    if (__this_00 != (System_Collections_Generic_List_Material__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (__this_00->fields)._items;
      if (pUVar5 != (UnityEngine_Material_array *)0x0) {
        uVar4 = (__this_00->fields)._size;
        if (uVar4 < (uint)pUVar5->max_length) {
          (__this_00->fields)._size = uVar4 + 1;
          pUVar5->m_Items[(int)uVar4] = __this_01;
          Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar4);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        }
        return __this_01;
      }
    }
  }
label_0532334f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyReliefLightAngle
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefLightAngle (float angle, const MethodInfo* method);
// 0x5334440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53344fb: jmp 0x5334511

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefLightAngle(float angle,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial_c *pGVar4;
  Il2CppClass *klass;
  float shadowSize;
  
  if (Il2CppMethodInitialized_0754287d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754287d = '\x01';
  }
  pGVar4 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  pUVar3 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)pGVar4);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    pUVar3 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)pGVar4);
    if (pUVar3 == (UnityEngine_Material_o *)0x0) {
      ThrowNullReferenceException();
    }
    shadowSize = UnityEngine_Material__GetFloat_68e0ed0
                           (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                                   ReliefShadowSizeId,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial;
  }
  else {
    shadowSize = 4.0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial;
  }
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial =
       (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
  }
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings(angle,shadowSize,(MethodInfo *)klass)
  ;
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyReliefSettings
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings (float angle, float shadowSize, const MethodInfo* method);
// 0x5334190
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53342cc: lea r12, [rip + 0x1f614ed]  ; MethodInfo_System_Collections_Generic_List_Material_get_Item
// asm:   0x53342d3: lea r13, [rip + 0x1f614c6]  ; MethodInfo_System_Collections_Generic_List_Material_RemoveAt
// asm:   0x53342da: jmp 0x5334350
// asm:   0x53342ec: test rbx, rbx
// asm:   0x53342ef: je 0x533442c
// asm:   0x5334332: jmp 0x533441d
// asm:   0x5334341: jmp 0x533442c

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyReliefSettings
               (float angle,float shadowSize,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_Material__o *pSVar1;
  System_Collections_Generic_Dictionary_Material__float__o *__this;
  bool bVar2;
  UnityEngine_Material_o *pUVar3;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial_c *method_00;
  
  if (Il2CppMethodInitialized_0754287e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Material_float_Remove);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Count)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Material_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754287e = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  pUVar3 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)method_00);
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
    if (pUVar3 == (UnityEngine_Material_o *)0x0) goto label_0533442c;
    UnityEngine_Material__SetFloat_68e0ad0
              (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      ReliefLightAngleId,angle,(MethodInfo *)0x0);
    UnityEngine_Material__SetFloat_68e0ad0
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
      pUVar3 = System_Collections_Generic_List_object___get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_Material_get_Item);
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
          System_Collections_Generic_Dictionary_object__float___Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)pUVar3,
                     (MethodInfo_4AB6C10 *)
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
                   (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        if (pUVar3 == (UnityEngine_Material_o *)0x0) break;
        UnityEngine_Material__SetFloat_68e0ad0
                  (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                          ReliefLightAngleId,angle,(MethodInfo *)0x0);
        UnityEngine_Material__SetFloat_68e0ad0
                  (pUVar3,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                          ReliefShadowSizeId,shadowSize,(MethodInfo *)0x0);
      }
    }
  }
label_0533442c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyWearSettings
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearSettings (float wearStrength, float chipStrength, float stainScale, const MethodInfo* method);
// 0x5334540
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x533473e: jmp 0x53347dd
// asm:   0x53347a6: jmp 0x53347c7

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearSettings
               (float wearStrength,float chipStrength,float stainScale,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_List_Material__o *pSVar2;
  System_Collections_Generic_Dictionary_Material__float__o *pSVar3;
  bool bVar4;
  UnityEngine_Material_o *material;
  MethodInfo *material_00;
  int index;
  MethodInfo *in_RSI;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial_c *method_01;
  float stainScale_00;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_0754287f == '\0') {
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
    Il2CppMethodInitialized_0754287f = '\x01';
  }
  fStack_38 = 0.0;
  method_01 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  material = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)method_01);
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
            (material,wearStrength,chipStrength,stainScale,in_RSI);
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances;
  if (pSVar2 == (System_Collections_Generic_List_Material__o *)0x0) {
label_053347ec:
    ThrowNullReferenceException();
  }
  index = (pSVar2->fields)._size + -1;
  if (-1 < index) {
    do {
      while( true ) {
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        pSVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances;
        if (pSVar2 == (System_Collections_Generic_List_Material__o *)0x0) goto label_053347ec;
        material_00 = (MethodInfo *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                 (MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_Material_get_Item);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)material_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) break;
        if (material_00 != (MethodInfo *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0
             ) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
          }
          pSVar3 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                   _stainScaleOverrides;
          if (pSVar3 == (System_Collections_Generic_Dictionary_Material__float__o *)0x0) goto label_053347ec;
          System_Collections_Generic_Dictionary_object__float___Remove
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                     (Il2CppObject *)material_00,
                     (MethodInfo_4AB6C10 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Material_float_Remove);
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        }
        pSVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_instances;
        if (pSVar2 == (System_Collections_Generic_List_Material__o *)0x0) goto label_053347ec;
        System_Collections_Generic_List_object___RemoveAt
                  ((System_Collections_Generic_List_object__o *)pSVar2,index,
                   (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_Material_RemoveAt);
        index = index + -1;
        if (index < 0) {
          return;
        }
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
      }
      pSVar3 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->_stainScaleOverrides
      ;
      if (pSVar3 == (System_Collections_Generic_Dictionary_Material__float__o *)0x0) goto label_053347ec;
      method_00 = material_00;
      bVar4 = System_Collections_Generic_Dictionary_object__float___TryGetValue
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (Il2CppObject *)material_00,&fStack_38,
                         (MethodInfo_4AB7350 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Material_float_TryGetValue);
      if (bVar4) {
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor;
        stainScale_00 = fStack_38;
      }
      else {
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor;
        stainScale_00 = stainScale;
      }
      if (uVar1 == 0) {
        fStack_34 = stainScale_00;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
        stainScale_00 = fStack_34;
      }
      Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
                ((UnityEngine_Material_o *)material_00,wearStrength,chipStrength,stainScale_00,method_00);
      index = index + -1;
    } while (-1 < index);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset (UnityEngine_Material_o* material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength, const MethodInfo* method);
// 0x5333e10

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyPreset
               (UnityEngine_Material_o *material,float fineScale,float fineStrength,float coarseScale,
               float coarseStrength,float gradientStrength,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542880 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542880 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (material == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->FineScaleId,
             fineScale,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      FineStrengthId,fineStrength,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->CoarseScaleId
             ,coarseScale,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      CoarseStrengthId,coarseStrength,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      GradientStrengthId,gradientStrength,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyLightPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset (UnityEngine_Material_o* material, float fineScale, float fineStrength, float coarseScale, float coarseStrength, float gradientStrength, const MethodInfo* method);
// 0x5333f50

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyLightPreset
               (UnityEngine_Material_o *material,float fineScale,float fineStrength,float coarseScale,
               float coarseStrength,float gradientStrength,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542881 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542881 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (material == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      LightFineScaleId,fineScale,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      LightFineStrengthId,fineStrength,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      LightCoarseScaleId,coarseScale,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      LightCoarseStrengthId,coarseStrength,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      LightGradientStrengthId,gradientStrength,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$ApplyWearPreset
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset (UnityEngine_Material_o* material, float wearStrength, float chipStrength, float stainScale, const MethodInfo* method);
// 0x5334090

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__ApplyWearPreset
               (UnityEngine_Material_o *material,float wearStrength,float chipStrength,float stainScale,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542882 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542882 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)material,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
  }
  if (material == (UnityEngine_Material_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      WearStrengthId,wearStrength,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                      ChipStrengthId,chipStrength,(MethodInfo *)0x0);
  UnityEngine_Material__SetFloat_68e0ad0
            (material,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->StainScaleId,
             stainScale,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchSurfaceMaterial$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial___cctor (const MethodInfo* method);
// 0x5334800

void Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial_StaticFields *pGVar1;
  int32_t iVar2;
  System_Collections_Generic_List_Material__o *__this;
  System_Collections_Generic_Dictionary_Material__float__o *__this_00;
  
  if (Il2CppMethodInitialized_07542883 == '\0') {
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
    Il2CppMethodInitialized_07542883 = '\x01';
  }
  iVar2 = UnityEngine_Shader__PropertyToID("_FineScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->FineScaleId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_FineStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->FineStrengthId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_CoarseScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->CoarseScaleId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_CoarseStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->CoarseStrengthId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_GradientStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->GradientStrengthId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightFineScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->LightFineScaleId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightFineStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->LightFineStrengthId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightCoarseScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->LightCoarseScaleId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightCoarseStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->LightCoarseStrengthId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_LightGradientStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->LightGradientStrengthId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_Relief",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ReliefGradient",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefGradientId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ReliefLightAngle",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefLightAngleId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ReliefShadowSize",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ReliefShadowSizeId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_Worn",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->WornId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_WearStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->WearStrengthId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_ChipStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->ChipStrengthId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_StainScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->StainScaleId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushReveal",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushRevealId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushRevealDirection",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushRevealDirectionId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushStreak",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushStreakStrength",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakStrengthId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_BrushStreakScale",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->BrushStreakScaleId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_VerticalLightGradient",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->VerticalLightGradientId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_HorizontalBlur",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->HorizontalBlurId = iVar2;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Material);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Material_ctor);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields;
  pGVar1->_instances = __this;
  Il2CppCodeGenWriteBarrier(&pGVar1->_instances);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Material_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_Material_float_ctor);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields;
  pGVar1->_stainScaleOverrides = __this_00;
  Il2CppCodeGenWriteBarrier(&pGVar1->_stainScaleOverrides);
  return;
}



// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetImageShimmer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$SetEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled (UnityEngine_UI_Image_o* image, bool enabled, const MethodInfo* method);
// 0x58f7930

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled
               (UnityEngine_UI_Image_o *image,bool enabled,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo **in_RCX;
  
  if (Il2CppMethodInitialized_075455da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgGuildPresetImageShimmer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetImageShimmer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075455da = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (image != (UnityEngine_UI_Image_o *)0x0) {
    __this = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)image,
                        (MethodInfo_34B0830 *)
                        MethodInfo_UnityEngine_Component_GetComponent_AottgGuildPresetImageShimmer);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_058f7a21;
      in_RCX = &MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetImageShimmer;
      __this = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetImageShimmer);
    }
    if (__this != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__Configure
                (__this,image,enabled,(MethodInfo *)in_RCX);
      return;
    }
  }
label_058f7a21:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$Configure
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__Configure (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, UnityEngine_UI_Image_o* source, bool enabled, const MethodInfo* method);
// 0x58f7a60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f7adc: jmp 0x58f7b32

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__Configure
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,UnityEngine_UI_Image_o *source,
               bool enabled,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_UI_Image_o *method_00;
  
  if (Il2CppMethodInitialized_075455db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075455db = '\x01';
  }
  (__this->fields)._source = source;
  method_00 = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source);
  if (!enabled) {
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial(__this,(MethodInfo *)method_00);
    return;
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial(__this,(MethodInfo *)method_00);
  pUVar2 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((__this->fields)._enabled == false) {
      if (source == (UnityEngine_UI_Image_o *)0x0) goto label_058f7b32;
      pUVar2 = (*(source->klass->vtable)._32_get_material.methodPtr)
                         (source,(source->klass->vtable)._32_get_material.method);
      (__this->fields)._originalMaterial = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._originalMaterial);
    }
    else if (source == (UnityEngine_UI_Image_o *)0x0) {
label_058f7b32:
      ThrowNullReferenceException();
    }
    (*(source->klass->vtable)._33_set_material.methodPtr)
              (source,(__this->fields)._material,(source->klass->vtable)._33_set_material.method);
    (__this->fields)._enabled = true;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$EnsureMaterial
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x58f7be0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_Material_o **targetAddress;
  
  if (Il2CppMethodInitialized_075455dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"UI/AoTTG Guild Image Shimmer");
    Il2CppMethodInitialized_075455dc = '\x01';
  }
  pUVar2 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    x = (UnityEngine_Object_o *)UnityEngine_Shader__Find("UI/AoTTG Guild Image Shimmer",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      targetAddress = &(__this->fields)._material;
      pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor(pUVar2,(UnityEngine_Shader_o *)x,(MethodInfo *)0x0);
      *targetAddress = pUVar2;
      Il2CppCodeGenWriteBarrier(targetAddress);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$RestoreMaterial
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x58f7b40

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075455dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075455dd = '\x01';
  }
  pUVar1 = (__this->fields)._source;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar2) && ((__this->fields)._enabled != false)) {
    pUVar1 = (__this->fields)._source;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._33_set_material.methodPtr)
              (pUVar1,(__this->fields)._originalMaterial,(pUVar1->klass->vtable)._33_set_material.method);
  }
  (__this->fields)._originalMaterial = (UnityEngine_Material_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._originalMaterial);
  (__this->fields)._enabled = false;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__OnDestroy (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x58f7cd0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075455de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075455de = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial(__this,method);
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x58f7d60

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer___ctor
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



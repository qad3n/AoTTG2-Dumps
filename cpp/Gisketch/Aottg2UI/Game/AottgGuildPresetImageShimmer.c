// Type: Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGuildPresetImageShimmer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$SetEnabled
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled (UnityEngine_UI_Image_o* image, bool enabled, const MethodInfo* method);
// 0x181e13590
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1376d: mov rbp, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__SetEnabled
               (UnityEngine_UI_Image_o *image,bool enabled,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar2;
  
  if (Il2CppMethodInitialized_184344c67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgGuildPresetImageShimmer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetImageShimmer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c67 = '\x01';
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
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_AottgGuildPresetImageShimmer);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)image,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_181e13808;
      __this = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_6F4D60 *)
                          MethodInfo_UnityEngine_GameObject_AddComponent_AottgGuildPresetImageShimmer);
    }
    if (__this != (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *)0x0) {
      if (Il2CppMethodInitialized_184344c68 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184344c68 = '\x01';
      }
      (__this->fields)._source = image;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._source,image);
      if (!enabled) {
        Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial(__this,(MethodInfo *)0x0);
        return;
      }
      if (Il2CppMethodInitialized_184344c69 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        il2cpp_codegen_initialize_runtime_metadata(&"UI/AoTTG Guild Image Shimmer");
        Il2CppMethodInitialized_184344c69 = '\x01';
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
          pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
          UnityEngine_Material___ctor(pUVar2,(UnityEngine_Shader_o *)x,(MethodInfo *)0x0);
          (__this->fields)._material = pUVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._material,pUVar2);
        }
      }
      pUVar2 = (__this->fields)._material;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      if ((__this->fields)._enabled == false) {
        pUVar2 = (*(image->klass->vtable)._32_get_material.methodPtr)
                           (image,(image->klass->vtable)._32_get_material.method);
        (__this->fields)._originalMaterial = pUVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._originalMaterial,pUVar2);
      }
      (*(image->klass->vtable)._33_set_material.methodPtr)
                (image,(__this->fields)._material,(image->klass->vtable)._33_set_material.method);
      (__this->fields)._enabled = true;
      return;
    }
  }
label_181e13808:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$Configure
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__Configure (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, UnityEngine_UI_Image_o* source, bool enabled, const MethodInfo* method);
// 0x181e131b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e132c4: mov rbp, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__Configure
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,UnityEngine_UI_Image_o *source,
               bool enabled,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar2;
  
  if (Il2CppMethodInitialized_184344c68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c68 = '\x01';
  }
  (__this->fields)._source = source;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._source,source);
  if (enabled) {
    if (Il2CppMethodInitialized_184344c69 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      il2cpp_codegen_initialize_runtime_metadata(&"UI/AoTTG Guild Image Shimmer");
      Il2CppMethodInitialized_184344c69 = '\x01';
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
        pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
        UnityEngine_Material___ctor(pUVar2,(UnityEngine_Shader_o *)x,(MethodInfo *)0x0);
        (__this->fields)._material = pUVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._material,pUVar2);
      }
    }
    pUVar2 = (__this->fields)._material;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      if (source == (UnityEngine_UI_Image_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((__this->fields)._enabled == false) {
        pUVar2 = (*(source->klass->vtable)._32_get_material.methodPtr)
                           (source,(source->klass->vtable)._32_get_material.method);
        (__this->fields)._originalMaterial = pUVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._originalMaterial,pUVar2);
      }
      (*(source->klass->vtable)._33_set_material.methodPtr)
                (source,(__this->fields)._material,(source->klass->vtable)._33_set_material.method);
      (__this->fields)._enabled = true;
      return;
    }
  }
  else {
    Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial(__this,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$EnsureMaterial
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x181e13370
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e13444: mov rsi, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__EnsureMaterial
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar2;
  
  if (Il2CppMethodInitialized_184344c69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"UI/AoTTG Guild Image Shimmer");
    Il2CppMethodInitialized_184344c69 = '\x01';
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
      pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor(pUVar2,(UnityEngine_Shader_o *)x,(MethodInfo *)0x0);
      (__this->fields)._material = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._material,pUVar2);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$RestoreMaterial
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x181e134f0

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344c6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c6a = '\x01';
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
  Il2CppCodeGenWriteBarrier(&(__this->fields)._originalMaterial,(void *)0x0);
  (__this->fields)._enabled = false;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__OnDestroy (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x181e13460

void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344c6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344c6b = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer__RestoreMaterial(__this,(MethodInfo *)0x0);
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
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGuildPresetImageShimmer$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer___ctor (Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer___ctor(Gisketch_Aottg2UI_Game_AottgGuildPresetImageShimmer_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



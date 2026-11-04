// Type: Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchLogoMotionBlur.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$get_Blur
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, const MethodInfo* method);
// 0x1818856a0

float Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur
                (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184341f00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f00 = '\x01';
  }
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._material;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur);
    }
    if (pUVar1 != (UnityEngine_Material_o *)0x0) {
      fVar3 = UnityEngine_Material__GetFloat_2ee2100
                        (pUVar1,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur->static_fields->
                                BlurId,(MethodInfo *)0x0);
      return fVar3;
    }
    ThrowNullReferenceException();
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, UnityEngine_UI_Image_o* image, const MethodInfo* method);
// 0x1818854b0

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup
               (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,UnityEngine_UI_Image_o *image,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *pUVar2;
  
  if (Il2CppMethodInitialized_184341f01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch/AoTTG2 UI Sprite Blur");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG UI Logo Blur Instance");
    Il2CppMethodInitialized_184341f01 = '\x01';
  }
  x = (UnityEngine_Object_o *)UnityEngine_Shader__Find("Gisketch/AoTTG2 UI Sprite Blur",(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
      UnityEngine_Material___ctor(pUVar2,(UnityEngine_Shader_o *)x,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Object__set_name((UnityEngine_Object_o *)pUVar2,"AoTTG UI Logo Blur Instance",(MethodInfo *)0x0);
        UnityEngine_Object__set_hideFlags((UnityEngine_Object_o *)pUVar2,0x34,(MethodInfo *)0x0);
        (__this->fields)._material = pUVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._material,pUVar2);
        pUVar2 = (__this->fields)._material;
        if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur);
        }
        if ((pUVar2 != (UnityEngine_Material_o *)0x0) &&
           (UnityEngine_Material__SetFloat_2ee3980
                      (pUVar2,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur->static_fields->BlurId
                       ,0.0,(MethodInfo *)0x0), image != (UnityEngine_UI_Image_o *)0x0)) {
          (*(image->klass->vtable)._33_set_material.methodPtr)
                    (image,(__this->fields)._material,(image->klass->vtable)._33_set_material.method);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$SetBlur
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, float value, const MethodInfo* method);
// 0x1818853f0

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
               (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  float value_00;
  
  if (Il2CppMethodInitialized_184341f02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f02 = '\x01';
  }
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._material;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur);
    }
    if (pUVar1 == (UnityEngine_Material_o *)0x0) {
      ThrowNullReferenceException();
    }
    value_00 = 0.0;
    if (0.0 <= value) {
      value_00 = value;
    }
    UnityEngine_Material__SetFloat_2ee3980
              (pUVar1,TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur->static_fields->BlurId,
               value_00,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__OnDestroy (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, const MethodInfo* method);
// 0x181885320

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__OnDestroy
               (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Material_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184341f03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184341f03 = '\x01';
  }
  pUVar1 = (__this->fields)._material;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar1 = (__this->fields)._material;
    if (!bVar2) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_2f1fb90((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___ctor (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___ctor(Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___cctor (const MethodInfo* method);
// 0x181885650

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184341f04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata(&"_VerticalBlur");
    Il2CppMethodInitialized_184341f04 = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_VerticalBlur",(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur->static_fields->BlurId = iVar1;
  return;
}



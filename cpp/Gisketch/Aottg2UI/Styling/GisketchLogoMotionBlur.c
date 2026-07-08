// Type: Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchLogoMotionBlur.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$get_Blur
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, const MethodInfo* method);
// 0x3ac7ee0

float Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur
                (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this_00;
  bool_conflict bVar1;
  float fVar2;
  
  if (DAT_0570133a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLogoMotionBlur);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570133a = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._material;
    if (*(int *)(TypeInfo_GisketchLogoMotionBlur + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      fVar2 = UnityEngine_Material__GetFloat
                        (__this_00,**(int32_t **)(TypeInfo_GisketchLogoMotionBlur + 0xb8),(MethodInfo *)0x0);
      return fVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, UnityEngine_UI_Image_o* image, const MethodInfo* method);
// 0x3acbba0

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup
               (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,
               UnityEngine_UI_Image_o *image,MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  UnityEngine_Material_o *__this_00;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *__this_01;
  
  if (DAT_0570133b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLogoMotionBlur);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"Gisketch/AoTTG2 UI Sprite Blur");
    il2cpp_init_method_metadata(&"AoTTG UI Logo Blur Instance");
    DAT_0570133b = '\x01';
  }
  x = (UnityEngine_Object_o *)UnityEngine_Shader__Find("Gisketch/AoTTG2 UI Sprite Blur",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_01 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Material);
      UnityEngine_Material___ctor
                ((UnityEngine_Material_o *)__this_01,(UnityEngine_Shader_o *)x,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name(__this_01,"AoTTG UI Logo Blur Instance",(MethodInfo *)0x0);
        UnityEngine_Object__set_hideFlags(__this_01,0x34,(MethodInfo *)0x0);
        ppUVar1 = &(__this->fields)._material;
        (__this->fields)._material = (UnityEngine_Material_o *)__this_01;
        il2cpp_runtime_glue(ppUVar1,__this_01);
        __this_00 = (__this->fields)._material;
        if (*(int *)(TypeInfo_GisketchLogoMotionBlur + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (__this_00 != (UnityEngine_Material_o *)0x0) {
          UnityEngine_Material__SetFloat
                    (__this_00,**(int32_t **)(TypeInfo_GisketchLogoMotionBlur + 0xb8),0.0,(MethodInfo *)0x0);
          if (image != (UnityEngine_UI_Image_o *)0x0) {
            vtable_dispatch = (image->klass->vtable)._33_set_material.methodPtr;
            (*vtable_dispatch)
                      (image,*ppUVar1,(image->klass->vtable)._33_set_material.method,
                       vtable_dispatch);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$SetBlur
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, float value, const MethodInfo* method);
// 0x3ac7e20

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
               (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this_00;
  bool_conflict bVar1;
  float value_00;
  
  if (DAT_0570133c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLogoMotionBlur);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570133c = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._material;
    if (*(int *)(TypeInfo_GisketchLogoMotionBlur + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      value_00 = 0.0;
      if (0.0 <= value) {
        value_00 = value;
      }
      UnityEngine_Material__SetFloat
                (__this_00,**(int32_t **)(TypeInfo_GisketchLogoMotionBlur + 0xb8),value_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__OnDestroy (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, const MethodInfo* method);
// 0x3acbd30

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__OnDestroy
               (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (DAT_0570133d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_0570133d = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((char)bVar2 == '\0') {
    UnityEngine_Object__DestroyImmediate(pUVar1,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy(pUVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___ctor (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, const MethodInfo* method);
// 0x3acbdf0

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___ctor
               (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___cctor (const MethodInfo* method);
// 0x3acbe00

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (DAT_0570133e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLogoMotionBlur);
    il2cpp_init_method_metadata(&"_VerticalBlur");
    DAT_0570133e = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_VerticalBlur",(MethodInfo *)0x0);
  **(int32_t **)(TypeInfo_GisketchLogoMotionBlur + 0xb8) = iVar1;
  return;
}



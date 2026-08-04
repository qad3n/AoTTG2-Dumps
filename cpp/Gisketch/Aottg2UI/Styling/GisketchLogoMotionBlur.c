// Type: Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchLogoMotionBlur.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$get_Blur
// il2cpp: float Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, const MethodInfo* method);
// 0x3b32f20

float Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__get_Blur
                (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this_00;
  bool_conflict bVar1;
  Il2CppObject *__this_01;
  float fVar2;
  float extraout_XMM0_Da;
  
  if (g_data_057a9c52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLogoMotionBlur);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c52 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = (__this->fields)._material;
    __this_01 = TypeInfo_GisketchLogoMotionBlur;
    if (*(int *)((long)&TypeInfo_GisketchLogoMotionBlur[0xe].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (__this_00 != (UnityEngine_Material_o *)0x0) {
      fVar2 = UnityEngine_Material__GetFloat_4dcdb00
                        (__this_00,*(int32_t *)TypeInfo_GisketchLogoMotionBlur[0xb].monitor,(MethodInfo *)0x0);
      return fVar2;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    return extraout_XMM0_Da;
  }
  return 0.0;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$Setup
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, UnityEngine_UI_Image_o* image, const MethodInfo* method);
// 0x3b34da0

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup
               (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,UnityEngine_UI_Image_o *image,
               MethodInfo *method)

{
  UnityEngine_Material_o **ppUVar1;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Object_o *pUVar4;
  
  if (g_data_057a9c53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLogoMotionBlur);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"Gisketch/AoTTG2 UI Sprite Blur");
    il2cpp_runtime_helper_023445d0(&"AoTTG UI Logo Blur Instance");
    g_data_057a9c53 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("Gisketch/AoTTG2 UI Sprite Blur",(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_00 = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
      pUVar4 = __this_00;
      UnityEngine_Material___ctor
                ((UnityEngine_Material_o *)__this_00,(UnityEngine_Shader_o *)pUVar3,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name(__this_00,"AoTTG UI Logo Blur Instance",(MethodInfo *)0x0);
        UnityEngine_Object__set_hideFlags(__this_00,0x34,(MethodInfo *)0x0);
        ppUVar1 = &(__this->fields)._material;
        (__this->fields)._material = (UnityEngine_Material_o *)__this_00;
        il2cpp_runtime_helper_022b4080(ppUVar1);
        pUVar3 = (UnityEngine_Object_o *)(__this->fields)._material;
        pUVar4 = TypeInfo_GisketchLogoMotionBlur;
        if (*(int *)((long)&TypeInfo_GisketchLogoMotionBlur[9].monitor + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((pUVar3 != (UnityEngine_Object_o *)0x0) &&
           (UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar3,*(int32_t *)TypeInfo_GisketchLogoMotionBlur[7].fields.m_CachedPtr,0.0,
                       (MethodInfo *)0x0), pUVar4 = pUVar3, image != (UnityEngine_UI_Image_o *)0x0)) {
          vtableDispatch = (image->klass->vtable)._33_set_material.methodPtr;
          (*vtableDispatch)
                    (image,*ppUVar1,(image->klass->vtable)._33_set_material.method,vtableDispatch);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c55 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9c55 = '\x01';
      }
      pUVar3 = pUVar4[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      pUVar3 = pUVar4[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((char)bVar2 == '\0') {
        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$SetBlur
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, float value, const MethodInfo* method);
// 0x3b32e60

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__SetBlur
               (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this_00;
  Il2CppClass *pIVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  float value_00;
  
  if (g_data_057a9c54 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLogoMotionBlur);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c54 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  __this_00 = (__this->fields)._material;
  pIVar3 = TypeInfo_GisketchLogoMotionBlur;
  if (*(int *)((long)&TypeInfo_GisketchLogoMotionBlur[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (__this_00 != (UnityEngine_Material_o *)0x0) {
    value_00 = 0.0;
    if (0.0 <= value) {
      value_00 = value;
    }
    UnityEngine_Material__SetFloat_4dcd3b0
              (__this_00,*(int32_t *)TypeInfo_GisketchLogoMotionBlur[0xb].monitor,value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9c52 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLogoMotionBlur);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c52 = '\x01';
  }
  pIVar1 = pIVar3[2].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pIVar1 = pIVar3[2].klass;
    pIVar3 = TypeInfo_GisketchLogoMotionBlur;
    if (*(int *)((long)&TypeInfo_GisketchLogoMotionBlur[0xe].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (pIVar1 != (Il2CppClass *)0x0) {
      UnityEngine_Material__GetFloat_4dcdb00
                ((UnityEngine_Material_o *)pIVar1,*(int32_t *)TypeInfo_GisketchLogoMotionBlur[0xb].monitor,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar3,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__OnDestroy (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, const MethodInfo* method);
// 0x3b34f30

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__OnDestroy
               (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  
  if (g_data_057a9c55 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c55 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if ((char)bVar2 == '\0') {
    UnityEngine_Object__DestroyImmediate_4e01e00(pUVar1,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___ctor (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o* __this, const MethodInfo* method);
// 0x3b34ff0

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___ctor
               (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchLogoMotionBlur$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___cctor (const MethodInfo* method);
// 0x3b35000

void Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur___cctor(MethodInfo *method)

{
  int32_t iVar1;
  
  if (g_data_057a9c56 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLogoMotionBlur);
    il2cpp_runtime_helper_023445d0(&"_VerticalBlur");
    g_data_057a9c56 = '\x01';
  }
  iVar1 = UnityEngine_Shader__PropertyToID("_VerticalBlur",(MethodInfo *)0x0);
  **(int32_t **)(TypeInfo_GisketchLogoMotionBlur + 0xb8) = iVar1;
  return;
}



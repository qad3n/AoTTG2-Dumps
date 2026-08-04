// Type: Gisketch.Aottg2UI.Styling.GisketchIconLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchIconLoader.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchIconLoader$$Load
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load (System_String_o* icon, const MethodInfo* method);
// 0x3b34c90

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load(System_String_o *icon,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *path;
  UnityEngine_Sprite_o *pUVar2;
  MethodInfo *method_00;
  
  if (g_data_057a9c50 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sprite_Load_Sprite);
    g_data_057a9c50 = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (UnityEngine_Sprite_o *)0x0;
  }
  path = Gisketch_Aottg2UI_Styling_GisketchIconLoader__ResolvePath(icon,method_00);
  pUVar2 = (UnityEngine_Sprite_o *)UnityEngine_Resources__Load_object_(path,MethodInfo_Sprite_Load_Sprite);
  return pUVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchIconLoader$$ResolvePath
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchIconLoader__ResolvePath (System_String_o* icon, const MethodInfo* method);
// 0x3b34ce0

System_String_o *
Gisketch_Aottg2UI_Styling_GisketchIconLoader__ResolvePath(System_String_o *icon,MethodInfo *method)

{
  code *vtableDispatch;
  bool_conflict bVar1;
  int32_t iVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  undefined4 extraout_var_00;
  UnityEngine_Object_o *__this;
  undefined4 extraout_var_01;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  System_String_o *pSVar5;
  UnityEngine_Object_o *pUVar6;
  undefined4 extraout_var;
  
  pSVar5 = icon;
  if (g_data_057a9c51 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icons/kenney-icons/");
    il2cpp_runtime_helper_023445d0(&"UI/");
    pSVar5 = (System_String_o *)&"Icons/";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9c51 = '\x01';
  }
  if (icon != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(icon,"Icons/",(MethodInfo *)0x0);
    if (((char)bVar1 == '\0') &&
       (bVar1 = System_String__StartsWith(icon,"UI/",(MethodInfo *)0x0), (char)bVar1 == '\0')) {
      iVar2 = System_String__IndexOf(icon,0x2f,(MethodInfo *)0x0);
      pSVar5 = "Icons/kenney-icons/";
      if (-1 < iVar2) {
        pSVar5 = "Icons/";
      }
      pSVar5 = System_String__Concat_3ae5ba0(pSVar5,icon,(MethodInfo *)0x0);
      return pSVar5;
    }
    return icon;
  }
  il2cpp_runtime_helper_022b2c90();
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
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)CONCAT44(extraout_var,bVar1);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar4 = (System_String_o *)CONCAT44(extraout_var_00,bVar1);
    if ((char)bVar1 == '\0') {
      __this = (UnityEngine_Object_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
      pUVar6 = __this;
      UnityEngine_Material___ctor
                ((UnityEngine_Material_o *)__this,(UnityEngine_Shader_o *)pUVar3,(MethodInfo *)0x0);
      if (__this != (UnityEngine_Object_o *)0x0) {
        UnityEngine_Object__set_name(__this,"AoTTG UI Logo Blur Instance",(MethodInfo *)0x0);
        UnityEngine_Object__set_hideFlags(__this,0x34,(MethodInfo *)0x0);
        pSVar5[1].monitor = __this;
        il2cpp_runtime_helper_022b4080(&pSVar5[1].monitor);
        pUVar3 = pSVar5[1].monitor;
        pUVar6 = TypeInfo_GisketchLogoMotionBlur;
        if (*(int *)((long)&TypeInfo_GisketchLogoMotionBlur[9].monitor + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if ((pUVar3 != (UnityEngine_Object_o *)0x0) &&
           (UnityEngine_Material__SetFloat_4dcd3b0
                      ((UnityEngine_Material_o *)pUVar3,
                       *(int32_t *)((UnityEngine_Material_Fields *)&TypeInfo_GisketchLogoMotionBlur[7].fields)->m_CachedPtr,0.0,
                       (MethodInfo *)0x0), pUVar6 = pUVar3, method != (MethodInfo *)0x0)) {
          vtableDispatch = *(code **)(method->methodPointer + 0x348);
          pSVar5 = (System_String_o *)
                   (*vtableDispatch)
                             (method,pSVar5[1].monitor,*(undefined8 *)(method->methodPointer + 0x350),
                              vtableDispatch);
          return pSVar5;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9c55 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9c55 = '\x01';
      }
      pUVar3 = pUVar6[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        return (System_String_o *)CONCAT44(extraout_var_01,bVar1);
      }
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      pUVar3 = pUVar6[1].monitor;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((char)bVar1 == '\0') {
        UnityEngine_Object__DestroyImmediate_4e01e00(pUVar3,(MethodInfo *)0x0);
        return extraout_RAX_00;
      }
      UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  return pSVar4;
}



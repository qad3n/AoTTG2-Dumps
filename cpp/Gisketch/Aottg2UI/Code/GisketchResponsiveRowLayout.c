// Type: Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchResponsiveRowLayout.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout___cctor (const MethodInfo* method);
// 0x3b69220

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RegisterFactory (const MethodInfo* method);
// 0x3b69230

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RegisterFactory(MethodInfo *method)

{
  char cVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppType **ppIVar3;
  code *vtableDispatch;
  System_String_o *value;
  void *pvVar4;
  char cVar5;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  undefined1 *puVar8;
  MethodInfo_255A020 *pMVar9;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_GameObject_c *pUVar10;
  long extraout_RDX;
  MethodInfo *method_00;
  MethodInfo_255A020 *__this_02;
  MethodInfo_255A020 *__this_03;
  float fVar11;
  float fVar12;
  UnityEngine_Color_o UVar13;
  float fVar14;
  
  if (g_data_057a9dbf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchResponsiveRowLayout);
    il2cpp_runtime_helper_023445d0(&"ResponsiveRowLayout");
    g_data_057a9dbf = '\x01';
    if (*(int *)(TypeInfo_GisketchResponsiveRowLayout + 0xe4) == 0) goto label_03b69359;
label_03b69260:
    cVar1 = **(char **)(TypeInfo_GisketchResponsiveRowLayout + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_GisketchResponsiveRowLayout + 0xe4) != 0) goto label_03b69260;
label_03b69359:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = **(char **)(TypeInfo_GisketchResponsiveRowLayout + 0xb8);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = **(long **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  pvVar4 = MethodInfo_Boolean_BuildRuntime;
  pIVar7[1].klass = (Il2CppClass *)*(undefined8 *)((long)MethodInfo_Boolean_BuildRuntime + 8);
  pIVar7[2].monitor = pvVar4;
  pIVar7[2].klass = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b4080(pIVar7 + 2);
  cVar1 = *(char *)((long)pvVar4 + 0x52);
  pIVar7[4].klass = (Il2CppClass *)pIVar7;
  cVar5 = il2cpp_runtime_helper_022b2a80(pvVar4);
  if (cVar5 == '\0') {
    if (cVar1 == '\x03') {
      puVar8 = &label_02099410;
      goto label_03b69388;
    }
  }
  else {
    if (cVar1 == '\x04') {
      puVar8 = &label_02099440;
label_03b69388:
      pIVar7[1].monitor = puVar8;
      pIVar7[3].monitor = &label_020993a0;
      value = "ResponsiveRowLayout";
    }
    else {
      UVar13.fields._8_8_ = pIVar7[2].klass;
      pIVar7[1].monitor = pIVar7[1].klass;
      pIVar7[4].klass = (Il2CppClass *)UVar13.fields._8_8_;
      pIVar7[3].monitor = &label_020993a0;
      value = "ResponsiveRowLayout";
    }
    "ResponsiveRowLayout" = value;
    if (lVar2 != 0) {
      if (g_data_057a9e10 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
        g_data_057a9e10 = '\x01';
      }
      bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
label_03b693f2:
        if (*(int *)(TypeInfo_GisketchResponsiveRowLayout + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        **(undefined1 **)(TypeInfo_GisketchResponsiveRowLayout + 0xb8) = 1;
        return;
      }
      __this = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x10);
      if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this,(Il2CppObject *)value,pIVar7,MethodInfo_Void_set_Item);
        goto label_03b693f2;
      }
    }
    il2cpp_runtime_helper_022b2c90();
  }
  pMVar9 = (MethodInfo_255A020 *)il2cpp_runtime_helper_0231a840(0);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057a9dc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchResponsiveRowLayout_AddComponent_GisketchRespons);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = (MethodInfo_255A020 *)0x0;
  __this_03 = pMVar9;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (((pMVar9 == (MethodInfo_255A020 *)0x0) ||
        (__this_02 = MethodInfo_GisketchResponsiveRowLayout_AddComponent_GisketchRespons,
        __this_00 = (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pMVar9,MethodInfo_GisketchResponsiveRowLayout_AddComponent_GisketchRespons), __this_03 = pMVar9,
        extraout_RDX == 0)) || (__this_00 == (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      pMVar9 = __this_03;
      if (g_data_057a9dc1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
        pMVar9 = (MethodInfo_255A020 *)&"surfaceSoft";
        il2cpp_runtime_helper_023445d0();
        g_data_057a9dc1 = '\x01';
      }
      if (__this_02 == (MethodInfo_255A020 *)0x0) {
        fVar11 = 0.0;
        fVar12 = 0.0;
        UVar13.fields._8_8_ = 0;
        __this_02 = pMVar9;
      }
      else {
        UVar13.fields.a = 0.0;
        UVar13.fields.r = 0.0;
        UVar13.fields.g = 0.0;
        register0x00001240 = 0.0;
        UVar13 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_02,"surfaceSoft",UVar13,
                            (MethodInfo *)0x0);
        UVar13.fields._8_8_ = UVar13.fields._8_8_;
        fVar11 = UVar13.fields.r;
        fVar12 = UVar13.fields.g;
      }
      if (__this_03 != (MethodInfo_255A020 *)0x0) {
        *(float *)&__this_03[1].methodPointer = fVar11;
        *(float *)((long)&__this_03[1].methodPointer + 4) = fVar12;
        *(int *)&__this_03[1].virtualMethodPointer = (int)UVar13.fields._8_8_;
        *(int *)((long)&__this_03[1].virtualMethodPointer + 4) = (int)((ulong)UVar13.fields._8_8_ >> 0x20);
        *(undefined4 *)((long)&__this_03[1].virtualMethodPointer + 4) = 0x3f000000;
        pIVar7 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this_03,MethodInfo_Image_GetComponent_Image);
        if (pIVar7 == (Il2CppObject *)0x0) {
          __this_02 = __this_03;
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
          if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_03b69625;
          pIVar7 = UnityEngine_GameObject__AddComponent_object_(__this_01,MethodInfo_Image_AddComponent_Image);
        }
        __this_03->parameters = (Il2CppType **)pIVar7;
        il2cpp_runtime_helper_022b4080(&__this_03->parameters,pIVar7);
        ppIVar3 = __this_03->parameters;
        __this_02 = (MethodInfo_255A020 *)0x0;
        if (ppIVar3 != (Il2CppType **)0x0) {
          (**(code **)&(*ppIVar3)[0x2a].bits)(0,0,ppIVar3,(*ppIVar3)[0x2b].data);
          ppIVar3 = __this_03->parameters;
          __this_02 = (MethodInfo_255A020 *)0x0;
          if (ppIVar3 != (Il2CppType **)0x0) {
            vtableDispatch = *(code **)&(*ppIVar3)[0x2c].bits;
            (*vtableDispatch)(ppIVar3,1,(*ppIVar3)[0x2d].data,vtableDispatch);
            return;
          }
        }
      }
label_03b69625:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9dc2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
        g_data_057a9dc2 = '\x01';
      }
      pUVar10 = (UnityEngine_GameObject_c *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_02,MethodInfo_RectTransform_GetComponent_RectTransform)
      ;
      __this_02->klass = pUVar10;
      il2cpp_runtime_helper_022b4080(&__this_02->klass,pUVar10);
      return;
    }
    Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Setup
              (__this_00,*(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(extraout_RDX + 0x18),method_00);
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x3b69470

bool_conflict
Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__BuildRuntime
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Il2CppType **ppIVar1;
  code *vtableDispatch;
  uint uVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this;
  ulong extraout_RAX;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_c *pUVar6;
  MethodInfo *method_00;
  MethodInfo_255A020 *__this_01;
  MethodInfo_255A020 *__this_02;
  MethodInfo_255A020 *pMVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o UVar10;
  ulong uVar4;
  float fVar11;
  
  if (g_data_057a9dc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchResponsiveRowLayout_AddComponent_GisketchRespons);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc0 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (MethodInfo_255A020 *)0x0;
  __this_02 = (MethodInfo_255A020 *)go;
  uVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar4 = (ulong)uVar2;
  if ((char)uVar2 != '\0') {
    if (((go == (UnityEngine_GameObject_o *)0x0) ||
        (__this_01 = MethodInfo_GisketchResponsiveRowLayout_AddComponent_GisketchRespons,
        __this = (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)
                 UnityEngine_GameObject__AddComponent_object_(go,MethodInfo_GisketchResponsiveRowLayout_AddComponent_GisketchRespons),
        __this_02 = (MethodInfo_255A020 *)go,
        context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) ||
       (__this == (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)0x0)) {
      il2cpp_runtime_helper_022b2c90();
      pMVar7 = __this_02;
      if (g_data_057a9dc1 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
        pMVar7 = (MethodInfo_255A020 *)&"surfaceSoft";
        il2cpp_runtime_helper_023445d0();
        g_data_057a9dc1 = '\x01';
      }
      if (__this_01 == (MethodInfo_255A020 *)0x0) {
        fVar8 = 0.0;
        fVar9 = 0.0;
        UVar10.fields._8_8_ = 0;
        __this_01 = pMVar7;
      }
      else {
        UVar10.fields.a = 0.0;
        UVar10.fields.r = 0.0;
        UVar10.fields.g = 0.0;
        register0x00001240 = 0.0;
        UVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_01,"surfaceSoft",UVar10,
                            (MethodInfo *)0x0);
        UVar10.fields._8_8_ = UVar10.fields._8_8_;
        fVar8 = UVar10.fields.r;
        fVar9 = UVar10.fields.g;
      }
      if (__this_02 != (MethodInfo_255A020 *)0x0) {
        *(float *)&__this_02[1].methodPointer = fVar8;
        *(float *)((long)&__this_02[1].methodPointer + 4) = fVar9;
        *(int *)&__this_02[1].virtualMethodPointer = (int)UVar10.fields._8_8_;
        *(int *)((long)&__this_02[1].virtualMethodPointer + 4) = (int)((ulong)UVar10.fields._8_8_ >> 0x20);
        *(undefined4 *)((long)&__this_02[1].virtualMethodPointer + 4) = 0x3f000000;
        pIVar5 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)__this_02,MethodInfo_Image_GetComponent_Image);
        if (pIVar5 == (Il2CppObject *)0x0) {
          __this_01 = __this_02;
          __this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_03b69625;
          pIVar5 = UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_Image_AddComponent_Image);
        }
        __this_02->parameters = (Il2CppType **)pIVar5;
        il2cpp_runtime_helper_022b4080(&__this_02->parameters,pIVar5);
        ppIVar1 = __this_02->parameters;
        __this_01 = (MethodInfo_255A020 *)0x0;
        if (ppIVar1 != (Il2CppType **)0x0) {
          (**(code **)&(*ppIVar1)[0x2a].bits)(0,0,ppIVar1,(*ppIVar1)[0x2b].data);
          ppIVar1 = __this_02->parameters;
          __this_01 = (MethodInfo_255A020 *)0x0;
          if (ppIVar1 != (Il2CppType **)0x0) {
            vtableDispatch = *(code **)&(*ppIVar1)[0x2c].bits;
            bVar3 = (*vtableDispatch)(ppIVar1,1,(*ppIVar1)[0x2d].data,vtableDispatch);
            return bVar3;
          }
        }
      }
label_03b69625:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9dc2 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
        g_data_057a9dc2 = '\x01';
      }
      pUVar6 = (UnityEngine_GameObject_c *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_RectTransform_GetComponent_RectTransform);
      __this_01->klass = pUVar6;
      bVar3 = il2cpp_runtime_helper_022b4080(&__this_01->klass,pUVar6);
      return bVar3;
    }
    Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Setup(__this,(context->fields).Theme,method_00);
    uVar4 = extraout_RAX;
  }
  return (bool_conflict)CONCAT71((int7)(uVar4 >> 8),1);
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Setup (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b69510

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Setup
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  UnityEngine_UI_Image_o **ppUVar1;
  Il2CppMethodPointer vtableDispatch;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_Dictionary_string__GisketchMotionToken__o *pSVar3;
  System_String_o **ppSVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  float fVar8;
  
  ppSVar4 = (System_String_o **)__this;
  if (g_data_057a9dc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    ppSVar4 = &"surfaceSoft";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9dc1 = '\x01';
  }
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    UVar7.fields._8_8_ = 0;
    theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)ppSVar4;
  }
  else {
    UVar7.fields.a = 0.0;
    UVar7.fields.r = 0.0;
    UVar7.fields.g = 0.0;
    register0x00001240 = 0.0;
    UVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(theme,"surfaceSoft",UVar7,(MethodInfo *)0x0);
    UVar7.fields._8_8_ = UVar7.fields._8_8_;
    fVar5 = UVar7.fields.r;
    fVar6 = UVar7.fields.g;
  }
  if (__this != (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)0x0) {
    (__this->fields)._hoverColor.fields.r = fVar5;
    (__this->fields)._hoverColor.fields.g = fVar6;
    (__this->fields)._hoverColor.fields.b = (float)UVar7.fields._8_8_;
    (__this->fields)._hoverColor.fields.a = (float)((ulong)UVar7.fields._8_8_ >> 0x20);
    (__this->fields)._hoverColor.fields.a = 0.5;
    pUVar2 = (UnityEngine_UI_Image_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) {
      theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this;
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_03b69625;
      pUVar2 = (UnityEngine_UI_Image_o *)UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_Image_AddComponent_Image);
    }
    ppUVar1 = &(__this->fields)._background;
    (__this->fields)._background = pUVar2;
    il2cpp_runtime_helper_022b4080(ppUVar1,pUVar2);
    pUVar2 = (__this->fields)._background;
    theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
    if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
      (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                (0,0,pUVar2,(pUVar2->klass->vtable)._23_set_color.method);
      pUVar2 = *ppUVar1;
      theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0;
      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
        vtableDispatch = (pUVar2->klass->vtable)._25_set_raycastTarget.methodPtr;
        (*vtableDispatch)
                  (pUVar2,1,(pUVar2->klass->vtable)._25_set_raycastTarget.method,vtableDispatch);
        return;
      }
    }
  }
label_03b69625:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9dc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057a9dc2 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_string__GisketchMotionToken__o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)theme,MethodInfo_RectTransform_GetComponent_RectTransform);
  (((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)theme)->fields)._rect =
       (UnityEngine_RectTransform_o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)theme)->fields)._rect,pSVar3);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$Awake
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Awake (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x3b69630

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Awake
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if (g_data_057a9dc2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057a9dc2 = '\x01';
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields)._rect = pUVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rect,pUVar1);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__LateUpdate (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x3b69680

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__LateUpdate
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Canvas_o **__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Object_o *pUVar4;
  TMPro_TMP_FontAsset_o **ppTVar5;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  Gilzoide_FlexUi_FlexLayout_o *label;
  Gilzoide_FlexUi_FlexLayout_o *control;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  TMPro_TextMeshProUGUI_o *x;
  uint value;
  TMPro_TextMeshProUGUI_o *__this_01;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  TMPro_TextMeshProUGUI_o *pTStack_58;
  long *plStack_50;
  
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__CacheLabel(__this,method);
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyForCurrentWidth(__this,method);
  if (g_data_057a9dc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc9 = '\x01';
  }
  x = (TMPro_TextMeshProUGUI_o *)(__this->fields)._background;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar2 = (__this->fields)._background;
    if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      uVar8._0_4_ = (__this->fields)._hoverColor.fields.r;
      uVar8._4_4_ = (__this->fields)._hoverColor.fields.g;
      uVar9._0_4_ = (__this->fields)._hoverColor.fields.b;
      uVar9._4_4_ = (__this->fields)._hoverColor.fields.a;
    }
    __this_01 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_03b69a43;
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)(uVar8,uVar9);
  }
  x = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  __this_01 = x;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pTVar3 = (__this->fields)._label;
  if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
label_03b69a02:
    ppTVar5 = &(__this->fields)._normalFont;
  }
  else {
    x = (TMPro_TextMeshProUGUI_o *)(__this->fields)._hoverFont;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = 0;
    __this_01 = x;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto label_03b69a02;
    ppTVar5 = &(__this->fields)._hoverFont;
  }
  if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar3,*ppTVar5,(MethodInfo *)0x0);
    pTVar3 = (__this->fields)._label;
    value = 700;
    if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
      value = (__this->fields)._normalWeight;
    }
    __this_01 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
label_03b69a43:
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  plStack_50 = &TypeInfo_Object;
  pTStack_58 = x;
  if (g_data_057a9dc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc4 = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&(__this_01->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = &(__this_01->fields).m_Color;
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  else {
    pIVar7 = *(Il2CppObject **)&pUVar1->fields;
  }
  *(Il2CppObject **)&(__this_01->fields).m_Color.fields = pIVar7;
  il2cpp_runtime_helper_022b4080(pUVar1);
  label = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,0,method_00);
  control = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                      ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,1,method_01);
  pUVar4 = *(UnityEngine_Object_o **)&(__this_01->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)control,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar6 == '\0') &&
         ((__this_00 = &(__this_01->fields).m_Canvas, *(char *)&(__this_01->fields).m_Canvas == '\0' ||
          (bVar6 = System_Nullable_bool___get_Value((System_Nullable_bool__o)__this_00,MethodInfo_Boolean_get_Value),
          (byte)((byte)bVar6 ^ (byte)value) == 1)))) {
        uStack_60 = uStack_60 & 0xffffffffffff;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o)((long)&uStack_60 + 6),value & 0xff,MethodInfo_Nullable_1_Boolean);
        *(undefined2 *)__this_00 = uStack_60._6_2_;
        if ((byte)value == 0) {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,label,control,in_RCX);
        }
        else {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,label,control,in_RCX);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ApplyForCurrentWidth
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyForCurrentWidth (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x3b69860

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyForCurrentWidth
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_Fields *pUVar1;
  UnityEngine_RectTransform_o *x;
  UnityEngine_Object_o *pUVar2;
  uint *puVar3;
  void **__this_00;
  bool_conflict bVar4;
  undefined4 extraout_var;
  undefined8 extraout_RAX;
  undefined8 uVar5;
  Il2CppObject *pIVar6;
  Gilzoide_FlexUi_FlexLayout_o *label;
  Gilzoide_FlexUi_FlexLayout_o *control;
  undefined1 in_CL;
  undefined7 in_register_00000009;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_RectTransform_c *unaff_RBX;
  undefined8 unaff_RBP;
  uint value;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_RectTransform_c *__this_02;
  undefined8 *unaff_R12;
  undefined8 unaff_R13;
  TMPro_TMP_Text_o *unaff_R14;
  UnityEngine_RectTransform_o *unaff_R15;
  intptr_t iVar7;
  float fVar8;
  UnityEngine_RectTransform_c *pUVar9;
  UnityEngine_Rect_o UVar10;
  undefined8 uStack_40;
  UnityEngine_RectTransform_o *pUStack_38;
  
  if (g_data_057a9dc3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc3 = '\x01';
  }
  x = (__this->fields)._rect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar5 = CONCAT44(extraout_var,bVar4);
  fVar8 = 0.0;
  if ((char)bVar4 != '\0') {
    __this_01 = (__this->fields)._rect;
    if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
      uStack_40 = il2cpp_runtime_helper_022b2c90();
      register0x00000020 = (BADSPACEBASE *)&uStack_40;
      pUStack_38 = x;
      if (g_data_057a9dc9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9dc9 = '\x01';
      }
      unaff_RBX = __this_01[2].klass;
      unaff_R12 = &TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = 0;
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
label_03b69994:
        unaff_RBX = __this_01[2].monitor;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value = 0;
        __this_02 = unaff_RBX;
        bVar4 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return;
        }
        __this = __this_01[2].monitor;
        if (*(char *)((long)&__this_01[4].monitor + 2) == '\0') {
label_03b69a02:
          pUVar1 = &__this_01[2].fields;
        }
        else {
          unaff_RBX = __this_01[3].monitor;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          value = 0;
          __this_02 = unaff_RBX;
          bVar4 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') goto label_03b69a02;
          pUVar1 = (UnityEngine_RectTransform_Fields *)&__this_01[3].monitor;
        }
        if ((TMPro_TMP_Text_o *)__this != (TMPro_TMP_Text_o *)0x0) {
          TMPro_TMP_Text__set_font
                    ((TMPro_TMP_Text_o *)__this,(TMPro_TMP_FontAsset_o *)pUVar1->m_CachedPtr,(MethodInfo *)0x0
                    );
          value = 700;
          if (*(char *)((long)&__this_01[4].monitor + 2) == '\0') {
            value = *(uint *)&__this_01[3].klass;
          }
          __this_02 = (UnityEngine_RectTransform_c *)0x0;
          if (__this_01[2].monitor != (TMPro_TMP_Text_o *)0x0) {
            TMPro_TMP_Text__set_fontWeight(__this_01[2].monitor,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        if (*(char *)((long)&__this_01[4].monitor + 2) == '\0') {
          iVar7 = 0;
          pUVar9 = (UnityEngine_RectTransform_c *)0x0;
        }
        else {
          iVar7 = __this_01[3].fields.m_CachedPtr;
          pUVar9 = __this_01[4].klass;
        }
        __this_02 = (UnityEngine_RectTransform_c *)0x0;
        if (__this_01[2].klass != (UnityEngine_RectTransform_c *)0x0) {
          (**(code **)((long)((__this_01[2].klass)->_1).image + 0x2a8))(iVar7,pUVar9);
          goto label_03b69994;
        }
      }
      uVar5 = il2cpp_runtime_helper_022b2c90();
      goto Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Apply;
    }
    UVar10 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    fVar8 = UVar10.fields.m_Width;
    uVar5 = extraout_RAX;
  }
  uVar5 = CONCAT71((int7)((ulong)uVar5 >> 8),fVar8 <= 0.0);
  in_CL = 620.0 <= fVar8 || fVar8 <= 0.0;
  value = (uint)(byte)in_CL;
  __this_02 = (UnityEngine_RectTransform_c *)__this;
  __this = (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)unaff_R14;
  __this_01 = unaff_R15;
Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Apply:
  *(undefined8 *)((long)register0x00000020 + -8) = unaff_RBP;
  *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x10) = __this_01;
  *(Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o **)((long)register0x00000020 + -0x18) = __this;
  *(undefined8 *)((long)register0x00000020 + -0x20) = unaff_R13;
  *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
  *(UnityEngine_RectTransform_c **)((long)register0x00000020 + -0x30) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x38) = uVar5;
  if (g_data_057a9dc4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69a76;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69a82;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69a8e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69a9a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69aa6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc4 = '\x01';
  }
  pUVar2 = *(UnityEngine_Object_o **)&(__this_02->_1).byval_arg.bits;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69aca;
    il2cpp_runtime_helper_02337ed0();
  }
  puVar3 = &(__this_02->_1).byval_arg.bits;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69ada;
  bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69af6;
    pIVar6 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_02,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  else {
    pIVar6 = *(Il2CppObject **)puVar3;
  }
  *(Il2CppObject **)&(__this_02->_1).byval_arg.bits = pIVar6;
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69b05;
  il2cpp_runtime_helper_022b4080(puVar3);
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69b0f;
  label = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_02,0,method_00);
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69b1f;
  control = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                      ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_02,1,method_01);
  pUVar2 = *(UnityEngine_Object_o **)&(__this_02->_1).byval_arg.bits;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69b38;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69b44;
  bVar4 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69b5e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69b6a;
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69b84;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69b90;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)control,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        __this_00 = &(__this_02->_1).typeMetadataHandle;
        if (*(char *)&(__this_02->_1).typeMetadataHandle != '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69bb1;
          bVar4 = System_Nullable_bool___get_Value((System_Nullable_bool__o)__this_00,MethodInfo_Boolean_get_Value);
          if ((byte)((byte)bVar4 ^ (byte)value) != 1) {
            return;
          }
        }
        *(undefined2 *)((long)register0x00000020 + -0x32) = 0;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69bd9;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o)((long)register0x00000020 + -0x32),value & 0xff,MethodInfo_Nullable_1_Boolean);
        *(undefined2 *)__this_00 = *(undefined2 *)((long)register0x00000020 + -0x32);
        if ((byte)value == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69bfc;
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_02,label,control,
                     (MethodInfo *)CONCAT71(in_register_00000009,in_CL));
        }
        else {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b69bf5;
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_02,label,control,
                     (MethodInfo *)CONCAT71(in_register_00000009,in_CL));
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$Apply
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Apply (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, bool wide, const MethodInfo* method);
// 0x3b69a50

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Apply
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,bool_conflict wide,
               MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayout_o **ppGVar1;
  System_Nullable_bool__o *__this_00;
  bool_conflict bVar2;
  ulong in_RAX;
  Gilzoide_FlexUi_FlexLayout_o *pGVar3;
  Gilzoide_FlexUi_FlexLayout_o *label;
  Gilzoide_FlexUi_FlexLayout_o *control;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057a9dc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc4 = '\x01';
  }
  pGVar3 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppGVar1 = &(__this->fields)._root;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pGVar3 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  else {
    pGVar3 = *ppGVar1;
  }
  (__this->fields)._root = pGVar3;
  il2cpp_runtime_helper_022b4080(ppGVar1);
  label = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(__this,0,method_00);
  control = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(__this,1,method_01);
  pGVar3 = (__this->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)control,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        __this_00 = &(__this->fields)._wide;
        if (((char)(__this->fields)._wide.fields.hasValue != '\0') &&
           (bVar2 = System_Nullable_bool___get_Value((System_Nullable_bool__o)__this_00,MethodInfo_Boolean_get_Value),
           (byte)((byte)bVar2 ^ (byte)wide) != 1)) {
          return;
        }
        uStack_38 = uStack_38 & 0xffffffffffff;
        System_Nullable_bool____ctor((System_Nullable_bool__o)((long)&uStack_38 + 6),wide & 0xff,MethodInfo_Nullable_1_Boolean)
        ;
        *(undefined2 *)&(__this_00->fields).hasValue = uStack_38._6_2_;
        if ((byte)wide == 0) {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow(__this,label,control,in_RCX);
        }
        else {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide(__this,label,control,in_RCX);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ApplyWide
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* label, Gilzoide_FlexUi_FlexLayout_o* control, const MethodInfo* method);
// 0x3b69ca0

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,
               Gilzoide_FlexUi_FlexLayout_o *label,Gilzoide_FlexUi_FlexLayout_o *control,MethodInfo *method)

{
  undefined8 *puVar1;
  Gilzoide_FlexUi_FlexLayout_o **ppGVar2;
  System_Nullable_bool__o *__this_00;
  TMPro_TMP_Text_o *__this_01;
  bool_conflict bVar3;
  Gilzoide_FlexUi_FlexLayout_o *pGVar4;
  Gilzoide_FlexUi_FlexLayout_o *pGVar5;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *x;
  uint value;
  Gilzoide_FlexUi_FlexLayout_o *pGVar7;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this_03;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_90;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *pGStack_88;
  undefined8 *puStack_80;
  
  pGVar7 = label;
  if (g_data_057a9dc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9dc5 = '\x01';
  }
  pGVar4 = (__this->fields)._root;
  pGVar5 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    pGVar7 = (Gilzoide_FlexUi_FlexLayout_o *)0x2;
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection(pGVar4,2,(MethodInfo *)0x0);
    pGVar4 = (__this->fields)._root;
    pGVar5 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGVar7 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      Gilzoide_FlexUi_FlexLayout__set_FlexWrap(pGVar4,0,(MethodInfo *)0x0);
      pGVar4 = (__this->fields)._root;
      pGVar5 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        pGVar7 = (Gilzoide_FlexUi_FlexLayout_o *)0x2;
        Gilzoide_FlexUi_FlexLayout__set_AlignItems(pGVar4,2,(MethodInfo *)0x0);
        pGVar4 = (__this->fields)._root;
        pGVar5 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          pGVar7 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          Gilzoide_FlexUi_FlexLayout__set_GapColumn(pGVar4,14.0,(MethodInfo *)0x0);
          pGVar4 = (__this->fields)._root;
          pGVar5 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
            pGVar7 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
            Gilzoide_FlexUi_FlexLayout__set_GapRow(pGVar4,14.0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pGVar5 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
            GVar6 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(300.0,(MethodInfo *)0x0);
            if (label != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
              Gilzoide_FlexUi_FlexLayout__set_Width(label,GVar6,(MethodInfo *)0x0);
              GVar6 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(180.0,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_MinWidth(label,GVar6,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexGrow(label,0.0,(MethodInfo *)0x0);
              pGVar7 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
              Gilzoide_FlexUi_FlexLayout__set_FlexShrink(label,1.0,(MethodInfo *)0x0);
              pGVar5 = label;
              if (control != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                Gilzoide_FlexUi_FlexLayout__set_Width
                          (control,(Gilzoide_FlexUi_Yoga_YGValue_o)
                                   *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)
                                    (*(long *)(TypeInfo_YGValue + 0xb8) + 0x10),(MethodInfo *)0x0);
                GVar6 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(260.0,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_MinWidth(control,GVar6,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexGrow(control,1.0,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexShrink(control,1.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9dc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9dc6 = '\x01';
  }
  pGVar4 = *(Gilzoide_FlexUi_FlexLayout_o **)&(pGVar5->fields)._positionType;
  lVar8 = 0;
  if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection(pGVar4,0,(MethodInfo *)0x0);
    pGVar4 = *(Gilzoide_FlexUi_FlexLayout_o **)&(pGVar5->fields)._positionType;
    lVar8 = 0;
    if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__set_FlexWrap(pGVar4,0,(MethodInfo *)0x0);
      pGVar4 = *(Gilzoide_FlexUi_FlexLayout_o **)&(pGVar5->fields)._positionType;
      lVar8 = 0;
      if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        Gilzoide_FlexUi_FlexLayout__set_AlignItems(pGVar4,4,(MethodInfo *)0x0);
        pGVar4 = *(Gilzoide_FlexUi_FlexLayout_o **)&(pGVar5->fields)._positionType;
        lVar8 = 0;
        if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__set_GapColumn(pGVar4,8.0,(MethodInfo *)0x0);
          pGVar4 = *(Gilzoide_FlexUi_FlexLayout_o **)&(pGVar5->fields)._positionType;
          lVar8 = 0;
          if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
            Gilzoide_FlexUi_FlexLayout__set_GapRow(pGVar4,8.0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar8 = 0;
            GVar6 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
            if (pGVar7 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
              Gilzoide_FlexUi_FlexLayout__set_Width(pGVar7,GVar6,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_MinWidth
                        (pGVar7,(Gilzoide_FlexUi_Yoga_YGValue_o)
                                *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(TypeInfo_YGValue + 0xb8) + 8),
                         (MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexGrow(pGVar7,0.0,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexShrink(pGVar7,1.0,(MethodInfo *)0x0);
              lVar8 = 0;
              GVar6 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
              if (__this_02 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                Gilzoide_FlexUi_FlexLayout__set_Width(__this_02,GVar6,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_MinWidth
                          (__this_02,
                           (Gilzoide_FlexUi_Yoga_YGValue_o)
                           *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(TypeInfo_YGValue + 0xb8) + 8),
                           (MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexGrow(__this_02,0.0,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexShrink(__this_02,1.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)(lVar8 + 0x6a) = 1;
  if (g_data_057a9dc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc9 = '\x01';
  }
  x = *(Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o **)(lVar8 + 0x30);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(char *)(lVar8 + 0x6a) == '\0') {
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar8 + 0x58);
      uVar10 = *(undefined8 *)(lVar8 + 0x60);
    }
    __this_03 = (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)0x0;
    if (*(long **)(lVar8 + 0x30) == (long *)0x0) goto label_03b69a43;
    (**(code **)(**(long **)(lVar8 + 0x30) + 0x2a8))(uVar9,uVar10);
  }
  x = *(Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o **)(lVar8 + 0x38);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  __this_03 = x;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  __this_01 = *(TMPro_TMP_Text_o **)(lVar8 + 0x38);
  if (*(char *)(lVar8 + 0x6a) == '\0') {
label_03b69a02:
    puVar1 = (undefined8 *)(lVar8 + 0x40);
  }
  else {
    x = *(Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o **)(lVar8 + 0x50);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = 0;
    __this_03 = x;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto label_03b69a02;
    puVar1 = (undefined8 *)(lVar8 + 0x50);
  }
  if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_font(__this_01,(TMPro_TMP_FontAsset_o *)*puVar1,(MethodInfo *)0x0);
    value = 700;
    if (*(char *)(lVar8 + 0x6a) == '\0') {
      value = *(uint *)(lVar8 + 0x48);
    }
    __this_03 = (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)0x0;
    if (*(TMPro_TMP_Text_o **)(lVar8 + 0x38) != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight(*(TMPro_TMP_Text_o **)(lVar8 + 0x38),value,(MethodInfo *)0x0);
      return;
    }
  }
label_03b69a43:
  uStack_90 = il2cpp_runtime_helper_022b2c90();
  puStack_80 = &TypeInfo_Object;
  pGStack_88 = x;
  if (g_data_057a9dc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc4 = '\x01';
  }
  pGVar7 = (__this_03->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppGVar2 = &(__this_03->fields)._root;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pGVar7 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_03,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  else {
    pGVar7 = *ppGVar2;
  }
  (__this_03->fields)._root = pGVar7;
  il2cpp_runtime_helper_022b4080(ppGVar2);
  pGVar4 = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(__this_03,0,method_00);
  pGVar5 = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(__this_03,1,method_01);
  pGVar7 = (__this_03->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar3 == '\0') &&
         ((__this_00 = &(__this_03->fields)._wide, (char)(__this_03->fields)._wide.fields.hasValue == '\0' ||
          (bVar3 = System_Nullable_bool___get_Value((System_Nullable_bool__o)__this_00,MethodInfo_Boolean_get_Value),
          (byte)((byte)bVar3 ^ (byte)value) == 1)))) {
        uStack_90 = uStack_90 & 0xffffffffffff;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o)((long)&uStack_90 + 6),value & 0xff,MethodInfo_Nullable_1_Boolean);
        *(undefined2 *)&(__this_00->fields).hasValue = uStack_90._6_2_;
        if ((byte)value == 0) {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow(__this_03,pGVar4,pGVar5,method);
        }
        else {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide(__this_03,pGVar4,pGVar5,method);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ApplyNarrow
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, Gilzoide_FlexUi_FlexLayout_o* label, Gilzoide_FlexUi_FlexLayout_o* control, const MethodInfo* method);
// 0x3b69e30

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,
               Gilzoide_FlexUi_FlexLayout_o *label,Gilzoide_FlexUi_FlexLayout_o *control,MethodInfo *method)

{
  undefined8 *puVar1;
  Gilzoide_FlexUi_FlexLayout_o **ppGVar2;
  System_Nullable_bool__o *__this_00;
  TMPro_TMP_Text_o *__this_01;
  bool_conflict bVar3;
  Gilzoide_FlexUi_FlexLayout_o *pGVar4;
  Gilzoide_FlexUi_FlexLayout_o *label_00;
  Gilzoide_FlexUi_FlexLayout_o *control_00;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar5;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *x;
  uint value;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this_02;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *pGStack_70;
  undefined8 *puStack_68;
  
  if (g_data_057a9dc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9dc6 = '\x01';
  }
  pGVar4 = (__this->fields)._root;
  lVar6 = 0;
  if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection(pGVar4,0,(MethodInfo *)0x0);
    pGVar4 = (__this->fields)._root;
    lVar6 = 0;
    if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__set_FlexWrap(pGVar4,0,(MethodInfo *)0x0);
      pGVar4 = (__this->fields)._root;
      lVar6 = 0;
      if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        Gilzoide_FlexUi_FlexLayout__set_AlignItems(pGVar4,4,(MethodInfo *)0x0);
        pGVar4 = (__this->fields)._root;
        lVar6 = 0;
        if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__set_GapColumn(pGVar4,8.0,(MethodInfo *)0x0);
          pGVar4 = (__this->fields)._root;
          lVar6 = 0;
          if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
            Gilzoide_FlexUi_FlexLayout__set_GapRow(pGVar4,8.0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar6 = 0;
            GVar5 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
            if (label != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
              Gilzoide_FlexUi_FlexLayout__set_Width(label,GVar5,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_MinWidth
                        (label,(Gilzoide_FlexUi_Yoga_YGValue_o)
                               *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(TypeInfo_YGValue + 0xb8) + 8),
                         (MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexGrow(label,0.0,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexShrink(label,1.0,(MethodInfo *)0x0);
              lVar6 = 0;
              GVar5 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
              if (control != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                Gilzoide_FlexUi_FlexLayout__set_Width(control,GVar5,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_MinWidth
                          (control,(Gilzoide_FlexUi_Yoga_YGValue_o)
                                   *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)
                                    (*(long *)(TypeInfo_YGValue + 0xb8) + 8),(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexGrow(control,0.0,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexShrink(control,1.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)(lVar6 + 0x6a) = 1;
  if (g_data_057a9dc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc9 = '\x01';
  }
  x = *(Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o **)(lVar6 + 0x30);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(char *)(lVar6 + 0x6a) == '\0') {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar6 + 0x58);
      uVar8 = *(undefined8 *)(lVar6 + 0x60);
    }
    __this_02 = (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)0x0;
    if (*(long **)(lVar6 + 0x30) == (long *)0x0) goto label_03b69a43;
    (**(code **)(**(long **)(lVar6 + 0x30) + 0x2a8))(uVar7,uVar8);
  }
  x = *(Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o **)(lVar6 + 0x38);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  __this_02 = x;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  __this_01 = *(TMPro_TMP_Text_o **)(lVar6 + 0x38);
  if (*(char *)(lVar6 + 0x6a) == '\0') {
label_03b69a02:
    puVar1 = (undefined8 *)(lVar6 + 0x40);
  }
  else {
    x = *(Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o **)(lVar6 + 0x50);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = 0;
    __this_02 = x;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto label_03b69a02;
    puVar1 = (undefined8 *)(lVar6 + 0x50);
  }
  if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_font(__this_01,(TMPro_TMP_FontAsset_o *)*puVar1,(MethodInfo *)0x0);
    value = 700;
    if (*(char *)(lVar6 + 0x6a) == '\0') {
      value = *(uint *)(lVar6 + 0x48);
    }
    __this_02 = (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)0x0;
    if (*(TMPro_TMP_Text_o **)(lVar6 + 0x38) != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight(*(TMPro_TMP_Text_o **)(lVar6 + 0x38),value,(MethodInfo *)0x0);
      return;
    }
  }
label_03b69a43:
  uStack_78 = il2cpp_runtime_helper_022b2c90();
  puStack_68 = &TypeInfo_Object;
  pGStack_70 = x;
  if (g_data_057a9dc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc4 = '\x01';
  }
  pGVar4 = (__this_02->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppGVar2 = &(__this_02->fields)._root;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pGVar4 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_02,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  else {
    pGVar4 = *ppGVar2;
  }
  (__this_02->fields)._root = pGVar4;
  il2cpp_runtime_helper_022b4080(ppGVar2);
  label_00 = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(__this_02,0,method_00);
  control_00 = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(__this_02,1,method_01);
  pGVar4 = (__this_02->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)label_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)control_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar3 == '\0') &&
         ((__this_00 = &(__this_02->fields)._wide, (char)(__this_02->fields)._wide.fields.hasValue == '\0' ||
          (bVar3 = System_Nullable_bool___get_Value((System_Nullable_bool__o)__this_00,MethodInfo_Boolean_get_Value),
          (byte)((byte)bVar3 ^ (byte)value) == 1)))) {
        uStack_78 = uStack_78 & 0xffffffffffff;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o)((long)&uStack_78 + 6),value & 0xff,MethodInfo_Nullable_1_Boolean);
        *(undefined2 *)&(__this_00->fields).hasValue = uStack_78._6_2_;
        if ((byte)value == 0) {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow
                    (__this_02,label_00,control_00,method);
        }
        else {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide(__this_02,label_00,control_00,method);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$ChildFlex
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, int32_t index, const MethodInfo* method);
// 0x3b69c10

Gilzoide_FlexUi_FlexLayout_o *
Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
          (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,int32_t index,MethodInfo *method)

{
  undefined8 *puVar1;
  Gilzoide_FlexUi_FlexLayout_o **ppGVar2;
  System_Nullable_bool__o *__this_00;
  TMPro_TMP_Text_o *__this_01;
  byte bVar3;
  bool_conflict bVar4;
  int32_t iVar5;
  undefined4 extraout_var;
  Gilzoide_FlexUi_FlexLayout_o *extraout_RAX;
  Gilzoide_FlexUi_FlexLayout_o *pGVar6;
  Gilzoide_FlexUi_FlexLayout_o *pGVar7;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  Gilzoide_FlexUi_FlexLayout_o *extraout_RAX_00;
  Gilzoide_FlexUi_FlexLayout_o *extraout_RAX_01;
  UnityEngine_Transform_o *pUVar8;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *pGVar9;
  Gilzoide_FlexUi_FlexLayout_o *pGVar10;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar11;
  Gilzoide_FlexUi_FlexLayout_o *extraout_RAX_02;
  Gilzoide_FlexUi_FlexLayout_o *extraout_RAX_03;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Gilzoide_FlexUi_FlexLayout_o *__this_02;
  Gilzoide_FlexUi_FlexLayout_o *__this_03;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *pGVar12;
  uint value;
  Gilzoide_FlexUi_FlexLayout_o *pGVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_a8;
  Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *pGStack_a0;
  undefined8 *puStack_98;
  
  pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)(ulong)(uint)index;
  if (g_data_057a9dc7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    g_data_057a9dc7 = '\x01';
  }
  pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  pGVar12 = __this;
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    iVar5 = UnityEngine_Transform__get_childCount(pUVar8,(MethodInfo *)0x0);
    if (iVar5 <= index) {
      return (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    }
    pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    pGVar9 = (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pGVar12 = __this;
    if ((pGVar9 != (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)0x0) &&
       (pUVar8 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)pGVar9,index,(MethodInfo *)0x0),
       pGVar6 = pGVar10, pGVar12 = pGVar9, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
      pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_FlexLayout_GetComponent_FlexLayout);
      return pGVar10;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar10 = pGVar6;
  if (g_data_057a9dc5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9dc5 = '\x01';
  }
  pGVar7 = (pGVar12->fields)._root;
  pGVar13 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  if (pGVar7 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)0x2;
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection(pGVar7,2,(MethodInfo *)0x0);
    pGVar7 = (pGVar12->fields)._root;
    pGVar13 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if (pGVar7 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      Gilzoide_FlexUi_FlexLayout__set_FlexWrap(pGVar7,0,(MethodInfo *)0x0);
      pGVar7 = (pGVar12->fields)._root;
      pGVar13 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      if (pGVar7 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)0x2;
        Gilzoide_FlexUi_FlexLayout__set_AlignItems(pGVar7,2,(MethodInfo *)0x0);
        pGVar7 = (pGVar12->fields)._root;
        pGVar13 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        if (pGVar7 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          Gilzoide_FlexUi_FlexLayout__set_GapColumn(pGVar7,14.0,(MethodInfo *)0x0);
          pGVar7 = (pGVar12->fields)._root;
          pGVar13 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
          if (pGVar7 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
            pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
            Gilzoide_FlexUi_FlexLayout__set_GapRow(pGVar7,14.0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pGVar13 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
            GVar11 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(300.0,(MethodInfo *)0x0);
            if (pGVar6 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
              Gilzoide_FlexUi_FlexLayout__set_Width(pGVar6,GVar11,(MethodInfo *)0x0);
              GVar11 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(180.0,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_MinWidth(pGVar6,GVar11,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexGrow(pGVar6,0.0,(MethodInfo *)0x0);
              pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
              Gilzoide_FlexUi_FlexLayout__set_FlexShrink(pGVar6,1.0,(MethodInfo *)0x0);
              pGVar13 = pGVar6;
              if (__this_02 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                Gilzoide_FlexUi_FlexLayout__set_Width
                          (__this_02,
                           (Gilzoide_FlexUi_Yoga_YGValue_o)
                           *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(TypeInfo_YGValue + 0xb8) + 0x10),
                           (MethodInfo *)0x0);
                GVar11 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(260.0,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_MinWidth(__this_02,GVar11,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexGrow(__this_02,1.0,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexShrink(__this_02,1.0,(MethodInfo *)0x0);
                return extraout_RAX_02;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9dc6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    g_data_057a9dc6 = '\x01';
  }
  pGVar6 = *(Gilzoide_FlexUi_FlexLayout_o **)&(pGVar13->fields)._positionType;
  lVar14 = 0;
  if (pGVar6 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_FlexDirection(pGVar6,0,(MethodInfo *)0x0);
    pGVar6 = *(Gilzoide_FlexUi_FlexLayout_o **)&(pGVar13->fields)._positionType;
    lVar14 = 0;
    if (pGVar6 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      Gilzoide_FlexUi_FlexLayout__set_FlexWrap(pGVar6,0,(MethodInfo *)0x0);
      pGVar6 = *(Gilzoide_FlexUi_FlexLayout_o **)&(pGVar13->fields)._positionType;
      lVar14 = 0;
      if (pGVar6 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        Gilzoide_FlexUi_FlexLayout__set_AlignItems(pGVar6,4,(MethodInfo *)0x0);
        pGVar6 = *(Gilzoide_FlexUi_FlexLayout_o **)&(pGVar13->fields)._positionType;
        lVar14 = 0;
        if (pGVar6 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
          Gilzoide_FlexUi_FlexLayout__set_GapColumn(pGVar6,8.0,(MethodInfo *)0x0);
          pGVar6 = *(Gilzoide_FlexUi_FlexLayout_o **)&(pGVar13->fields)._positionType;
          lVar14 = 0;
          if (pGVar6 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
            Gilzoide_FlexUi_FlexLayout__set_GapRow(pGVar6,8.0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            lVar14 = 0;
            GVar11 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
            if (pGVar10 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
              Gilzoide_FlexUi_FlexLayout__set_Width(pGVar10,GVar11,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_MinWidth
                        (pGVar10,(Gilzoide_FlexUi_Yoga_YGValue_o)
                                 *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(TypeInfo_YGValue + 0xb8) + 8),
                         (MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexGrow(pGVar10,0.0,(MethodInfo *)0x0);
              Gilzoide_FlexUi_FlexLayout__set_FlexShrink(pGVar10,1.0,(MethodInfo *)0x0);
              lVar14 = 0;
              GVar11 = Gilzoide_FlexUi_Yoga_YGValue__Percent(100.0,(MethodInfo *)0x0);
              if (__this_03 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
                Gilzoide_FlexUi_FlexLayout__set_Width(__this_03,GVar11,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_MinWidth
                          (__this_03,
                           (Gilzoide_FlexUi_Yoga_YGValue_o)
                           *(Gilzoide_FlexUi_Yoga_YGValue_Fields *)(*(long *)(TypeInfo_YGValue + 0xb8) + 8),
                           (MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexGrow(__this_03,0.0,(MethodInfo *)0x0);
                Gilzoide_FlexUi_FlexLayout__set_FlexShrink(__this_03,1.0,(MethodInfo *)0x0);
                return extraout_RAX_03;
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)(lVar14 + 0x6a) = 1;
  if (g_data_057a9dc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc9 = '\x01';
  }
  pGVar12 = *(Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o **)(lVar14 + 0x30);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(char *)(lVar14 + 0x6a) == '\0') {
      uVar15 = 0;
      uVar16 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(lVar14 + 0x58);
      uVar16 = *(undefined8 *)(lVar14 + 0x60);
    }
    pGVar9 = (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)0x0;
    if (*(long **)(lVar14 + 0x30) == (long *)0x0) goto label_03b69a43;
    (**(code **)(**(long **)(lVar14 + 0x30) + 0x2a8))(uVar15,uVar16);
  }
  pGVar12 = *(Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o **)(lVar14 + 0x38);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  pGVar9 = pGVar12;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (Gilzoide_FlexUi_FlexLayout_o *)CONCAT44(extraout_var,bVar4);
  }
  __this_01 = *(TMPro_TMP_Text_o **)(lVar14 + 0x38);
  if (*(char *)(lVar14 + 0x6a) == '\0') {
label_03b69a02:
    puVar1 = (undefined8 *)(lVar14 + 0x40);
  }
  else {
    pGVar12 = *(Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o **)(lVar14 + 0x50);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = 0;
    pGVar9 = pGVar12;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto label_03b69a02;
    puVar1 = (undefined8 *)(lVar14 + 0x50);
  }
  if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_font(__this_01,(TMPro_TMP_FontAsset_o *)*puVar1,(MethodInfo *)0x0);
    value = 700;
    if (*(char *)(lVar14 + 0x6a) == '\0') {
      value = *(uint *)(lVar14 + 0x48);
    }
    pGVar9 = (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)0x0;
    if (*(TMPro_TMP_Text_o **)(lVar14 + 0x38) != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight(*(TMPro_TMP_Text_o **)(lVar14 + 0x38),value,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
label_03b69a43:
  uStack_a8 = il2cpp_runtime_helper_022b2c90();
  puStack_98 = &TypeInfo_Object;
  pGStack_a0 = pGVar12;
  if (g_data_057a9dc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc4 = '\x01';
  }
  pGVar10 = (pGVar9->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppGVar2 = &(pGVar9->fields)._root;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pGVar9,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  else {
    pGVar10 = *ppGVar2;
  }
  (pGVar9->fields)._root = pGVar10;
  il2cpp_runtime_helper_022b4080(ppGVar2);
  pGVar6 = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(pGVar9,0,method_00);
  pGVar7 = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex(pGVar9,1,method_01);
  pGVar10 = (pGVar9->fields)._root;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT44(extraout_var_00,bVar4);
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT44(extraout_var_01,bVar4);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)CONCAT44(extraout_var_02,bVar4);
      if ((char)bVar4 == '\0') {
        __this_00 = &(pGVar9->fields)._wide;
        if ((char)(pGVar9->fields)._wide.fields.hasValue != '\0') {
          bVar4 = System_Nullable_bool___get_Value((System_Nullable_bool__o)__this_00,MethodInfo_Boolean_get_Value);
          bVar3 = (byte)bVar4 ^ (byte)value;
          if (bVar3 != 1) {
            return (Gilzoide_FlexUi_FlexLayout_o *)
                   CONCAT71((int7)(CONCAT44(extraout_var_03,bVar4) >> 8),bVar3);
          }
        }
        uStack_a8 = uStack_a8 & 0xffffffffffff;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o)((long)&uStack_a8 + 6),value & 0xff,MethodInfo_Nullable_1_Boolean);
        *(undefined2 *)&(__this_00->fields).hasValue = uStack_a8._6_2_;
        if ((byte)value == 0) {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow(pGVar9,pGVar6,pGVar7,in_RCX);
          pGVar10 = extraout_RAX_01;
        }
        else {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide(pGVar9,pGVar6,pGVar7,in_RCX);
          pGVar10 = extraout_RAX_00;
        }
      }
    }
  }
  return pGVar10;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__OnPointerEnter (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b69fb0

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__OnPointerEnter
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Canvas_o **__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Object_o *pUVar4;
  TMPro_TMP_FontAsset_o **ppTVar5;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  Gilzoide_FlexUi_FlexLayout_o *label;
  Gilzoide_FlexUi_FlexLayout_o *control;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  TMPro_TextMeshProUGUI_o *x;
  uint value;
  TMPro_TextMeshProUGUI_o *__this_01;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  TMPro_TextMeshProUGUI_o *pTStack_58;
  long *plStack_50;
  
  *(undefined1 *)((long)&(__this->fields)._wide.fields.hasValue + 2) = 1;
  if (g_data_057a9dc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc9 = '\x01';
  }
  x = (TMPro_TextMeshProUGUI_o *)(__this->fields)._background;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar2 = (__this->fields)._background;
    if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      uVar8._0_4_ = (__this->fields)._hoverColor.fields.r;
      uVar8._4_4_ = (__this->fields)._hoverColor.fields.g;
      uVar9._0_4_ = (__this->fields)._hoverColor.fields.b;
      uVar9._4_4_ = (__this->fields)._hoverColor.fields.a;
    }
    __this_01 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_03b69a43;
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)(uVar8,uVar9);
  }
  x = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  __this_01 = x;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pTVar3 = (__this->fields)._label;
  if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
label_03b69a02:
    ppTVar5 = &(__this->fields)._normalFont;
  }
  else {
    x = (TMPro_TextMeshProUGUI_o *)(__this->fields)._hoverFont;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = 0;
    __this_01 = x;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto label_03b69a02;
    ppTVar5 = &(__this->fields)._hoverFont;
  }
  if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar3,*ppTVar5,(MethodInfo *)0x0);
    pTVar3 = (__this->fields)._label;
    value = 700;
    if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
      value = (__this->fields)._normalWeight;
    }
    __this_01 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
label_03b69a43:
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  plStack_50 = &TypeInfo_Object;
  pTStack_58 = x;
  if (g_data_057a9dc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc4 = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&(__this_01->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = &(__this_01->fields).m_Color;
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  else {
    pIVar7 = *(Il2CppObject **)&pUVar1->fields;
  }
  *(Il2CppObject **)&(__this_01->fields).m_Color.fields = pIVar7;
  il2cpp_runtime_helper_022b4080(pUVar1);
  label = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,0,method_00);
  control = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                      ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,1,method_01);
  pUVar4 = *(UnityEngine_Object_o **)&(__this_01->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)control,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar6 == '\0') &&
         ((__this_00 = &(__this_01->fields).m_Canvas, *(char *)&(__this_01->fields).m_Canvas == '\0' ||
          (bVar6 = System_Nullable_bool___get_Value((System_Nullable_bool__o)__this_00,MethodInfo_Boolean_get_Value),
          (byte)((byte)bVar6 ^ (byte)value) == 1)))) {
        uStack_60 = uStack_60 & 0xffffffffffff;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o)((long)&uStack_60 + 6),value & 0xff,MethodInfo_Nullable_1_Boolean);
        *(undefined2 *)__this_00 = uStack_60._6_2_;
        if ((byte)value == 0) {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,label,control,in_RCX);
        }
        else {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,label,control,in_RCX);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__OnPointerExit (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b69fc0

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__OnPointerExit
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Canvas_o **__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Object_o *pUVar4;
  TMPro_TMP_FontAsset_o **ppTVar5;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  Gilzoide_FlexUi_FlexLayout_o *label;
  Gilzoide_FlexUi_FlexLayout_o *control;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  TMPro_TextMeshProUGUI_o *x;
  uint value;
  TMPro_TextMeshProUGUI_o *__this_01;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  TMPro_TextMeshProUGUI_o *pTStack_58;
  long *plStack_50;
  
  *(undefined1 *)((long)&(__this->fields)._wide.fields.hasValue + 2) = 0;
  if (g_data_057a9dc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc9 = '\x01';
  }
  x = (TMPro_TextMeshProUGUI_o *)(__this->fields)._background;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar2 = (__this->fields)._background;
    if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      uVar8._0_4_ = (__this->fields)._hoverColor.fields.r;
      uVar8._4_4_ = (__this->fields)._hoverColor.fields.g;
      uVar9._0_4_ = (__this->fields)._hoverColor.fields.b;
      uVar9._4_4_ = (__this->fields)._hoverColor.fields.a;
    }
    __this_01 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_03b69a43;
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)(uVar8,uVar9);
  }
  x = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  __this_01 = x;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pTVar3 = (__this->fields)._label;
  if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
label_03b69a02:
    ppTVar5 = &(__this->fields)._normalFont;
  }
  else {
    x = (TMPro_TextMeshProUGUI_o *)(__this->fields)._hoverFont;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = 0;
    __this_01 = x;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto label_03b69a02;
    ppTVar5 = &(__this->fields)._hoverFont;
  }
  if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar3,*ppTVar5,(MethodInfo *)0x0);
    pTVar3 = (__this->fields)._label;
    value = 700;
    if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
      value = (__this->fields)._normalWeight;
    }
    __this_01 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
label_03b69a43:
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  plStack_50 = &TypeInfo_Object;
  pTStack_58 = x;
  if (g_data_057a9dc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc4 = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&(__this_01->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = &(__this_01->fields).m_Color;
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  else {
    pIVar7 = *(Il2CppObject **)&pUVar1->fields;
  }
  *(Il2CppObject **)&(__this_01->fields).m_Color.fields = pIVar7;
  il2cpp_runtime_helper_022b4080(pUVar1);
  label = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,0,method_00);
  control = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                      ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,1,method_01);
  pUVar4 = *(UnityEngine_Object_o **)&(__this_01->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)control,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar6 == '\0') &&
         ((__this_00 = &(__this_01->fields).m_Canvas, *(char *)&(__this_01->fields).m_Canvas == '\0' ||
          (bVar6 = System_Nullable_bool___get_Value((System_Nullable_bool__o)__this_00,MethodInfo_Boolean_get_Value),
          (byte)((byte)bVar6 ^ (byte)value) == 1)))) {
        uStack_60 = uStack_60 & 0xffffffffffff;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o)((long)&uStack_60 + 6),value & 0xff,MethodInfo_Nullable_1_Boolean);
        *(undefined2 *)__this_00 = uStack_60._6_2_;
        if ((byte)value == 0) {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,label,control,in_RCX);
        }
        else {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,label,control,in_RCX);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$CacheLabel
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__CacheLabel (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x3b696a0

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__CacheLabel
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_Canvas_o **__this_00;
  UnityEngine_Object_o *pUVar3;
  long *plVar4;
  TMPro_TMP_Text_o *__this_01;
  bool_conflict bVar5;
  int32_t iVar6;
  UnityEngine_Transform_o *pUVar7;
  TMPro_TextMeshProUGUI_o *pTVar8;
  TMPro_TextMeshProUGUI_o *pTVar9;
  System_String_o *requiredText;
  TMPro_TMP_FontAsset_o *pTVar10;
  undefined4 extraout_var;
  undefined8 extraout_RAX;
  undefined8 uVar11;
  Il2CppObject *pIVar12;
  Gilzoide_FlexUi_FlexLayout_o *label;
  Gilzoide_FlexUi_FlexLayout_o *control;
  bool bVar13;
  MethodInfo_24E7F00 **in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  TMPro_TextMeshProUGUI_o *pTVar14;
  undefined8 *puVar15;
  undefined8 unaff_RBP;
  TMPro_TextMeshProUGUI_o *__this_02;
  undefined8 unaff_R13;
  TMPro_TextMeshProUGUI_o *unaff_R15;
  UnityEngine_RectTransform_o *pUVar16;
  float fVar17;
  UnityEngine_CanvasRenderer_o *pUVar18;
  UnityEngine_Rect_o UVar19;
  undefined8 uStack_68;
  UnityEngine_Object_o *pUStack_60;
  long *plStack_58;
  TMPro_TextMeshProUGUI_o *pTStack_50;
  TMPro_TextMeshProUGUI_o *pTStack_48;
  undefined8 uStack_40;
  TMPro_TextMeshProUGUI_o *pTStack_38;
  TMPro_TextMeshProUGUI_o *pTStack_30;
  undefined1 auStack_28 [8];
  
  if (g_data_057a9dc8 == '\0') {
    pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b696c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
    pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b696cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b696d8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b696e4;
    il2cpp_runtime_helper_023445d0(&"text");
    g_data_057a9dc8 = '\x01';
  }
  pTVar14 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b69708;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b69714;
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b69726;
  pTVar9 = (TMPro_TextMeshProUGUI_o *)__this;
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b69739;
    iVar6 = UnityEngine_Transform__get_childCount(pUVar7,(MethodInfo *)0x0);
    if (iVar6 == 0) {
      return;
    }
    pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b69747;
    pTVar9 = (TMPro_TextMeshProUGUI_o *)__this;
    pTVar8 = (TMPro_TextMeshProUGUI_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
      pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b6975c;
      pUVar7 = UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)pTVar8,0,(MethodInfo *)0x0);
      pTVar9 = pTVar8;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pTVar14 = (TMPro_TextMeshProUGUI_o *)&(__this->fields)._label;
        in_RCX = &MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI;
        pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b69780;
        pTVar9 = (TMPro_TextMeshProUGUI_o *)
                 UnityEngine_Component__GetComponentInChildren_object_
                           ((UnityEngine_Component_o *)pUVar7,1,MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
        *(TMPro_TextMeshProUGUI_o **)pTVar14 = pTVar9;
        pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b6978e;
        il2cpp_runtime_helper_022b4080(pTVar14);
        unaff_R15 = *(TMPro_TextMeshProUGUI_o **)pTVar14;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b697a3;
          il2cpp_runtime_helper_02337ed0();
        }
        pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b697af;
        pTVar9 = unaff_R15;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return;
        }
        if (*(TMPro_TextMeshProUGUI_o **)pTVar14 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (__this->fields)._normalFont =
               (TMPro_TMP_FontAsset_o *)((*(TMPro_TextMeshProUGUI_o **)pTVar14)->fields).m_TextPreprocessor;
          pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b697df;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._normalFont);
          pTVar8 = (__this->fields)._label;
          pTVar9 = (TMPro_TextMeshProUGUI_o *)0x0;
          if (pTVar8 != (TMPro_TextMeshProUGUI_o *)0x0) {
            (__this->fields)._normalWeight = (int32_t)(pTVar8->fields).m_outlineWidth;
            pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b69802;
            requiredText = (System_String_o *)
                           (*(pTVar8->klass->vtable)._65_get_text.methodPtr)
                                     (pTVar8,(pTVar8->klass->vtable)._65_get_text.method);
            if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
              pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b6981d;
              il2cpp_runtime_helper_02337ed0();
            }
            pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b69839;
            pTVar10 = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                ("text",700,requiredText,0,(MethodInfo *)0x0);
            (__this->fields)._hoverFont = pTVar10;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._hoverFont,pTVar10);
            return;
          }
        }
      }
    }
  }
  pTStack_30 = (TMPro_TextMeshProUGUI_o *)0x3b6985c;
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  pTStack_38 = pTVar14;
  pTStack_30 = (TMPro_TextMeshProUGUI_o *)__this;
  if (g_data_057a9dc3 == '\0') {
    pTStack_48 = (TMPro_TextMeshProUGUI_o *)0x3b6987c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc3 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(pTVar9->fields).m_Material;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pTStack_48 = (TMPro_TextMeshProUGUI_o *)0x3b6989f;
    il2cpp_runtime_helper_02337ed0();
  }
  pTStack_48 = (TMPro_TextMeshProUGUI_o *)0x3b698ab;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar11 = CONCAT44(extraout_var,bVar5);
  fVar17 = 0.0;
  if ((char)bVar5 != '\0') {
    pTVar14 = (TMPro_TextMeshProUGUI_o *)(pTVar9->fields).m_Material;
    if (pTVar14 == (TMPro_TextMeshProUGUI_o *)0x0) {
      pTStack_48 = (TMPro_TextMeshProUGUI_o *)0x3b698f1;
      uStack_68 = il2cpp_runtime_helper_022b2c90();
      plStack_58 = &TypeInfo_Object;
      puVar15 = &uStack_68;
      pUStack_60 = pUVar3;
      pTStack_50 = pTVar9;
      pTStack_48 = unaff_R15;
      if (g_data_057a9dc9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9dc9 = '\x01';
      }
      pTVar8 = *(TMPro_TextMeshProUGUI_o **)&(pTVar14->fields).m_Color.fields.b;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      fVar17 = 0.0;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
label_03b69994:
        pTVar8 = *(TMPro_TextMeshProUGUI_o **)&(pTVar14->fields).m_SkipLayoutUpdate;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        fVar17 = 0.0;
        __this_02 = pTVar8;
        bVar5 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          return;
        }
        pTVar9 = *(TMPro_TextMeshProUGUI_o **)&(pTVar14->fields).m_SkipLayoutUpdate;
        if (*(char *)((long)&(pTVar14->fields).m_Canvas + 2) == '\0') {
label_03b69a02:
          pfVar1 = (float *)&(pTVar14->fields).m_RaycastTarget;
        }
        else {
          pTVar8 = *(TMPro_TextMeshProUGUI_o **)&(pTVar14->fields).m_RaycastPadding.fields.z;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          fVar17 = 0.0;
          __this_02 = pTVar8;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pTVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') goto label_03b69a02;
          pfVar1 = &(pTVar14->fields).m_RaycastPadding.fields.z;
        }
        if (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0) {
          TMPro_TMP_Text__set_font
                    ((TMPro_TMP_Text_o *)pTVar9,*(TMPro_TMP_FontAsset_o **)pfVar1,(MethodInfo *)0x0);
          __this_01 = *(TMPro_TMP_Text_o **)&(pTVar14->fields).m_SkipLayoutUpdate;
          fVar17 = 9.80909e-43;
          if (*(char *)((long)&(pTVar14->fields).m_Canvas + 2) == '\0') {
            fVar17 = (pTVar14->fields).m_RaycastPadding.fields.x;
          }
          __this_02 = (TMPro_TextMeshProUGUI_o *)0x0;
          if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
            TMPro_TMP_Text__set_fontWeight(__this_01,(int32_t)fVar17,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        plVar4 = *(long **)&(pTVar14->fields).m_Color.fields.b;
        if (*(char *)((long)&(pTVar14->fields).m_Canvas + 2) == '\0') {
          pUVar16 = (UnityEngine_RectTransform_o *)0x0;
          pUVar18 = (UnityEngine_CanvasRenderer_o *)0x0;
        }
        else {
          pUVar16 = (pTVar14->fields).m_RectTransform;
          pUVar18 = (pTVar14->fields).m_CanvasRenderer;
        }
        __this_02 = (TMPro_TextMeshProUGUI_o *)0x0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x2a8))(pUVar16,pUVar18);
          goto label_03b69994;
        }
      }
      uVar11 = il2cpp_runtime_helper_022b2c90();
      goto Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Apply;
    }
    pTStack_48 = (TMPro_TextMeshProUGUI_o *)0x3b698c5;
    UVar19 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)pTVar14,(MethodInfo *)0x0);
    fVar17 = UVar19.fields.m_Width;
    uVar11 = extraout_RAX;
  }
  uVar11 = CONCAT71((int7)((ulong)uVar11 >> 8),fVar17 <= 0.0);
  bVar13 = 620.0 <= fVar17 || fVar17 <= 0.0;
  in_RCX = (MethodInfo_24E7F00 **)CONCAT71((int7)((ulong)in_RCX >> 8),bVar13);
  fVar17 = (float)(uint)bVar13;
  puVar15 = (undefined8 *)auStack_28;
  pTVar8 = pTStack_38;
  __this_02 = pTVar9;
  pTVar9 = pTStack_30;
  pTVar14 = unaff_R15;
Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__Apply:
  *(undefined8 *)((long)puVar15 + -8) = unaff_RBP;
  *(TMPro_TextMeshProUGUI_o **)((long)puVar15 + -0x10) = pTVar14;
  *(TMPro_TextMeshProUGUI_o **)((long)puVar15 + -0x18) = pTVar9;
  *(undefined8 *)((long)puVar15 + -0x20) = unaff_R13;
  *(long **)((long)puVar15 + -0x28) = &TypeInfo_Object;
  *(TMPro_TextMeshProUGUI_o **)((long)puVar15 + -0x30) = pTVar8;
  *(undefined8 *)((long)puVar15 + -0x38) = uVar11;
  if (g_data_057a9dc4 == '\0') {
    *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69a76;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69a82;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69a8e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69a9a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69aa6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc4 = '\x01';
  }
  pUVar3 = *(UnityEngine_Object_o **)&(__this_02->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69aca;
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar2 = &(__this_02->fields).m_Color;
  *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69ada;
  bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69af6;
    pIVar12 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_02,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  else {
    pIVar12 = *(Il2CppObject **)&pUVar2->fields;
  }
  *(Il2CppObject **)&(__this_02->fields).m_Color.fields = pIVar12;
  *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69b05;
  il2cpp_runtime_helper_022b4080(pUVar2);
  *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69b0f;
  label = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_02,0,method_00);
  *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69b1f;
  control = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                      ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_02,1,method_01);
  pUVar3 = *(UnityEngine_Object_o **)&(__this_02->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69b38;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69b44;
  bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69b5e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69b6a;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69b84;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69b90;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)control,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        __this_00 = &(__this_02->fields).m_Canvas;
        if (*(char *)&(__this_02->fields).m_Canvas != '\0') {
          *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69bb1;
          bVar5 = System_Nullable_bool___get_Value((System_Nullable_bool__o)__this_00,MethodInfo_Boolean_get_Value);
          if ((byte)((byte)bVar5 ^ SUB41(fVar17,0)) != 1) {
            return;
          }
        }
        *(undefined2 *)((long)puVar15 + -0x32) = 0;
        *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69bd9;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o)((long)puVar15 + -0x32),(uint)fVar17 & 0xff,MethodInfo_Nullable_1_Boolean);
        *(undefined2 *)__this_00 = *(undefined2 *)((long)puVar15 + -0x32);
        if (SUB41(fVar17,0) == 0) {
          *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69bfc;
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_02,label,control,
                     (MethodInfo *)in_RCX);
        }
        else {
          *(undefined8 *)((long)puVar15 + -0x40) = 0x3b69bf5;
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_02,label,control,
                     (MethodInfo *)in_RCX);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$RefreshHover
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RefreshHover (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x3b69900

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__RefreshHover
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Canvas_o **__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  TMPro_TextMeshProUGUI_o *pTVar3;
  UnityEngine_Object_o *pUVar4;
  TMPro_TMP_FontAsset_o **ppTVar5;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  Gilzoide_FlexUi_FlexLayout_o *label;
  Gilzoide_FlexUi_FlexLayout_o *control;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  TMPro_TextMeshProUGUI_o *x;
  uint value;
  TMPro_TextMeshProUGUI_o *__this_01;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_60;
  TMPro_TextMeshProUGUI_o *pTStack_58;
  long *plStack_50;
  
  if (g_data_057a9dc9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc9 = '\x01';
  }
  x = (TMPro_TextMeshProUGUI_o *)(__this->fields)._background;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar2 = (__this->fields)._background;
    if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      uVar8._0_4_ = (__this->fields)._hoverColor.fields.r;
      uVar8._4_4_ = (__this->fields)._hoverColor.fields.g;
      uVar9._0_4_ = (__this->fields)._hoverColor.fields.b;
      uVar9._4_4_ = (__this->fields)._hoverColor.fields.a;
    }
    __this_01 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto label_03b69a43;
    (*(pUVar2->klass->vtable)._23_set_color.methodPtr)(uVar8,uVar9);
  }
  x = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  value = 0;
  __this_01 = x;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  pTVar3 = (__this->fields)._label;
  if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
label_03b69a02:
    ppTVar5 = &(__this->fields)._normalFont;
  }
  else {
    x = (TMPro_TextMeshProUGUI_o *)(__this->fields)._hoverFont;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = 0;
    __this_01 = x;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') goto label_03b69a02;
    ppTVar5 = &(__this->fields)._hoverFont;
  }
  if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)pTVar3,*ppTVar5,(MethodInfo *)0x0);
    pTVar3 = (__this->fields)._label;
    value = 700;
    if (*(char *)((long)&(__this->fields)._wide.fields.hasValue + 2) == '\0') {
      value = (__this->fields)._normalWeight;
    }
    __this_01 = (TMPro_TextMeshProUGUI_o *)0x0;
    if (pTVar3 != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar3,value,(MethodInfo *)0x0);
      return;
    }
  }
label_03b69a43:
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  plStack_50 = &TypeInfo_Object;
  pTStack_58 = x;
  if (g_data_057a9dc4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Boolean);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9dc4 = '\x01';
  }
  pUVar4 = *(UnityEngine_Object_o **)&(__this_01->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar1 = &(__this_01->fields).m_Color;
  bVar6 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pIVar7 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_01,MethodInfo_FlexLayout_GetComponent_FlexLayout);
  }
  else {
    pIVar7 = *(Il2CppObject **)&pUVar1->fields;
  }
  *(Il2CppObject **)&(__this_01->fields).m_Color.fields = pIVar7;
  il2cpp_runtime_helper_022b4080(pUVar1);
  label = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,0,method_00);
  control = Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ChildFlex
                      ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,1,method_01);
  pUVar4 = *(UnityEngine_Object_o **)&(__this_01->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)control,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (((char)bVar6 == '\0') &&
         ((__this_00 = &(__this_01->fields).m_Canvas, *(char *)&(__this_01->fields).m_Canvas == '\0' ||
          (bVar6 = System_Nullable_bool___get_Value((System_Nullable_bool__o)__this_00,MethodInfo_Boolean_get_Value),
          (byte)((byte)bVar6 ^ (byte)value) == 1)))) {
        uStack_60 = uStack_60 & 0xffffffffffff;
        System_Nullable_bool____ctor
                  ((System_Nullable_bool__o)((long)&uStack_60 + 6),value & 0xff,MethodInfo_Nullable_1_Boolean);
        *(undefined2 *)__this_00 = uStack_60._6_2_;
        if ((byte)value == 0) {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyNarrow
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,label,control,in_RCX);
        }
        else {
          Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout__ApplyWide
                    ((Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *)__this_01,label,control,in_RCX);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchResponsiveRowLayout$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout___ctor (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o* __this, const MethodInfo* method);
// 0x3b69fd0

void Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout___ctor
               (Gisketch_Aottg2UI_Code_GisketchResponsiveRowLayout_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}



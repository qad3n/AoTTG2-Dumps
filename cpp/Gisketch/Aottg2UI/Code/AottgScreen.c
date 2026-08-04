// Type: Gisketch.Aottg2UI.Code.AottgScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgScreen.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgScreen__get_RootStyle (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x3b60e60

System_String_o *
Gisketch_Aottg2UI_Code_AottgScreen__get_RootStyle
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,MethodInfo *method)

{
  if (g_data_057a9d72 == '\0') {
    il2cpp_runtime_helper_023445d0(&"screen");
    g_data_057a9d72 = '\x01';
  }
  return "screen";
}


// Gisketch.Aottg2UI.Code.AottgScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgScreen__get_RootLayout (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x3b60e90

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgScreen__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_04;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_05;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *extraout_RAX;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_String_o *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_06;
  System_String_o *in_R8;
  System_String_o *in_R9;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *in_stack_ffffffffffffffa0;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (g_data_057a9d73 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Center");
    g_data_057a9d73 = '\x01';
  }
  if (g_data_057a9d9b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
    il2cpp_runtime_helper_023445d0(&"percent");
    g_data_057a9d9b = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
  pSVar3 = (System_String_o *)0x0;
  pGVar6 = __this_01;
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_01->fields).value = 100.0;
    (__this_01->fields).unit = "percent";
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).unit);
    if (g_data_057a9d9b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchLength);
      il2cpp_runtime_helper_023445d0(&"percent");
      g_data_057a9d9b = '\x01';
    }
    __this_02 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchLength);
    pSVar3 = (System_String_o *)0x0;
    pGVar6 = __this_02;
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_02->fields).value = 100.0;
      (__this_02->fields).unit = "percent";
      il2cpp_runtime_helper_022b4080(&(__this_02->fields).unit);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column","Center","Center",(System_String_o *)0x0,(System_String_o *)0x0
                          ,0.0,__this_01,__this_02,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,in_stack_ffffffffffffffe0);
      return pGVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = in_RCX;
  if (g_data_057a9d74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenDefinition);
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057a9d74 = '\x01';
  }
  __this_03 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_03,pSVar3,in_stack_ffffffffffffffa0,method_00);
  (*pGVar6->klass[1]._1.byval_arg.data)(pGVar6,__this_03,*(undefined8 *)&pGVar6->klass[1]._1.byval_arg.bits);
  __this_04 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchScreenDefinition);
  __this_06 = __this_04;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)__this_04,(MethodInfo *)0x0);
  if (__this_04 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_04->fields).type = pSVar3;
    il2cpp_runtime_helper_022b4080(&__this_04->fields,pSVar3);
    (__this_04->fields).id = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).id,extraout_RDX);
    (__this_04->fields).text = (System_String_o *)in_RCX;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).text);
    bVar1 = System_String__IsNullOrEmpty(in_R8,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      in_R8 = pSVar3;
    }
    (__this_04->fields).textKey = in_R8;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).textKey,in_R8);
    (__this_04->fields).placeholder = in_R9;
    il2cpp_runtime_helper_022b4080(&(__this_04->fields).placeholder);
    __this_05 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    __this_06 = __this_05;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_05,(MethodInfo *)0x0);
    if (__this_05 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_05->fields).type = "Panel";
      il2cpp_runtime_helper_022b4080(&__this_05->fields);
      (__this_05->fields).id = pSVar3;
      il2cpp_runtime_helper_022b4080(&(__this_05->fields).id,pSVar3);
      pSVar3 = (System_String_o *)(*pGVar6->klass[1]._1.image)(pGVar6,pGVar6->klass[1]._1.gc_desc);
      (__this_05->fields).style = pSVar3;
      il2cpp_runtime_helper_022b4080(&(__this_05->fields).style,pSVar3);
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)
               (*(code *)pGVar6->klass[1]._1.name)(pGVar6,pGVar6->klass[1]._1.namespaze);
      __this_06 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_05->fields).search;
      (__this_05->fields).search = pGVar4;
      il2cpp_runtime_helper_022b4080();
      if (__this_03 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
        }
        __this_00 = (__this_03->fields)._children;
        __this_06 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
          pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                   System_Collections_Generic_List_object___ToArray
                             ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_GisketchNodeDefinition_ToArray);
          (__this_05->fields).deferredChildren = pGVar5;
          il2cpp_runtime_helper_022b4080(&(__this_05->fields).deferredChildren,pGVar5);
          (__this_04->fields).value = (System_String_o *)__this_05;
          il2cpp_runtime_helper_022b4080(&(__this_04->fields).value,__this_05);
          return (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)__this_04;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Code.AottgScreen$$BuildDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, System_String_o* id, System_String_o* title, System_String_o* searchTitle, System_String_o* searchGroup, System_String_o* backScreenId, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3b61020

Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *
Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,System_String_o *id,System_String_o *title,
          System_String_o *searchTitle,System_String_o *searchGroup,System_String_o *backScreenId,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *extraout_RAX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_04;
  
  method_00 = (MethodInfo *)searchTitle;
  if (g_data_057a9d74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchScreenDefinition);
    il2cpp_runtime_helper_023445d0(&"Panel");
    g_data_057a9d74 = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,id,actions,method_00);
  (*__this->klass[1]._1.image)(__this,__this_01,__this->klass[1]._1.gc_desc);
  __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchScreenDefinition);
  __this_04 = __this_02;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_02->fields).type = id;
    il2cpp_runtime_helper_022b4080(&__this_02->fields,id);
    (__this_02->fields).id = title;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).id,title);
    (__this_02->fields).text = searchTitle;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).text);
    bVar1 = System_String__IsNullOrEmpty(searchGroup,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      searchGroup = id;
    }
    (__this_02->fields).textKey = searchGroup;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).textKey,searchGroup);
    (__this_02->fields).placeholder = backScreenId;
    il2cpp_runtime_helper_022b4080(&(__this_02->fields).placeholder);
    __this_03 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    __this_04 = __this_03;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
    if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_03->fields).type = "Panel";
      il2cpp_runtime_helper_022b4080(&__this_03->fields);
      (__this_03->fields).id = id;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).id,id);
      pSVar2 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_RootStyle.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_RootStyle.method);
      (__this_03->fields).style = pSVar2;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).style,pSVar2);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)
               (*(__this->klass->vtable)._5_get_RootLayout.methodPtr)
                         (__this,(__this->klass->vtable)._5_get_RootLayout.method);
      __this_04 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)&(__this_03->fields).search;
      (__this_03->fields).search = pGVar3;
      il2cpp_runtime_helper_022b4080();
      if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        if (g_data_057a9d8f == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchNodeDefinition_ToArray);
          g_data_057a9d8f = '\x01';
        }
        __this_00 = (__this_01->fields)._children;
        __this_04 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                   System_Collections_Generic_List_object___ToArray
                             ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_GisketchNodeDefinition_ToArray);
          (__this_03->fields).deferredChildren = pGVar4;
          il2cpp_runtime_helper_022b4080(&(__this_03->fields).deferredChildren,pGVar4);
          (__this_02->fields).value = (System_String_o *)__this_03;
          il2cpp_runtime_helper_022b4080(&(__this_02->fields).value,__this_03);
          return (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)__this_02;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Code.AottgScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgScreen___ctor (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x3b61260

void Gisketch_Aottg2UI_Code_AottgScreen___ctor
               (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}



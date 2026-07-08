// Type: Gisketch.Aottg2UI.Code.AottgScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgScreen.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgScreen__get_RootStyle (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x3af5ca0

System_String_o *
Gisketch_Aottg2UI_Code_AottgScreen__get_RootStyle
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,MethodInfo *method)

{
  if (DAT_0570144f == '\0') {
    il2cpp_init_method_metadata(&"screen");
    DAT_0570144f = '\x01';
  }
  return "screen";
}


// Gisketch.Aottg2UI.Code.AottgScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgScreen__get_RootLayout (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x3af5cd0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgScreen__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  if (DAT_05701450 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Center");
    DAT_05701450 = '\x01';
  }
  if (DAT_0570147d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&"percent");
    DAT_0570147d = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_00->fields).value = 100.0;
    (__this_00->fields).unit = "percent";
    il2cpp_runtime_glue(&(__this_00->fields).unit);
    if (DAT_0570147d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
      il2cpp_init_method_metadata(&"percent");
      DAT_0570147d = '\x01';
    }
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_01->fields).value = 100.0;
      (__this_01->fields).unit = "percent";
      il2cpp_runtime_glue(&(__this_01->fields).unit);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column","Center","Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,__this_00,__this_01,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,in_stack_ffffffffffffffe0);
      return pGVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgScreen$$BuildDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, System_String_o* id, System_String_o* title, System_String_o* searchTitle, System_String_o* searchGroup, System_String_o* backScreenId, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3af5e60

Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *
Gisketch_Aottg2UI_Code_AottgScreen__BuildDefinition
          (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,System_String_o *id,System_String_o *title,
          System_String_o *searchTitle,System_String_o *searchGroup,System_String_o *backScreenId,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)searchTitle;
  if (DAT_05701451 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchScreenDefinition);
    il2cpp_init_method_metadata(&"Panel");
    DAT_05701451 = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_glue(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,id,actions,method_00);
  (*__this->klass[1]._1.image)(__this,__this_01,__this->klass[1]._1.gc_desc);
  __this_02 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchScreenDefinition);
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    (__this_02->fields).id = id;
    il2cpp_runtime_glue(&__this_02->fields,id);
    (__this_02->fields).title = title;
    il2cpp_runtime_glue(&(__this_02->fields).title,title);
    (__this_02->fields).searchTitle = searchTitle;
    il2cpp_runtime_glue(&(__this_02->fields).searchTitle);
    bVar1 = System_String__IsNullOrEmpty(searchGroup,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      searchGroup = id;
    }
    (__this_02->fields).searchGroup = searchGroup;
    il2cpp_runtime_glue(&(__this_02->fields).searchGroup,searchGroup);
    (__this_02->fields).backScreenId = backScreenId;
    il2cpp_runtime_glue(&(__this_02->fields).backScreenId);
    __this_03 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
    if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_03->fields).type = "Panel";
      il2cpp_runtime_glue(&__this_03->fields);
      (__this_03->fields).id = id;
      il2cpp_runtime_glue(&(__this_03->fields).id,id);
      pSVar2 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_RootStyle.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_RootStyle.method);
      (__this_03->fields).style = pSVar2;
      il2cpp_runtime_glue(&(__this_03->fields).style,pSVar2);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)
               (*(__this->klass->vtable)._5_get_RootLayout.methodPtr)
                         (__this,(__this->klass->vtable)._5_get_RootLayout.method);
      (__this_03->fields).search = pGVar3;
      il2cpp_runtime_glue(&(__this_03->fields).search,pGVar3);
      if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        if (DAT_05701471 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_GisketchNodeDefinition___ToArray);
          DAT_05701471 = '\x01';
        }
        __this_00 = (__this_01->fields)._children;
        if (__this_00 != (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) {
          pGVar4 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                   System_Collections_Generic_List<object>__ToArray
                             ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_GisketchNodeDefinition___ToArray);
          (__this_03->fields).deferredChildren = pGVar4;
          il2cpp_runtime_glue(&(__this_03->fields).deferredChildren,pGVar4);
          (__this_02->fields).root = __this_03;
          il2cpp_runtime_glue(&(__this_02->fields).root,__this_03);
          return __this_02;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgScreen___ctor (Gisketch_Aottg2UI_Code_AottgScreen_o* __this, const MethodInfo* method);
// 0x3af60a0

void Gisketch_Aottg2UI_Code_AottgScreen___ctor
               (Gisketch_Aottg2UI_Code_AottgScreen_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}



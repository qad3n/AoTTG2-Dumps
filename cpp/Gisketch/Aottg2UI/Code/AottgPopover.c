// Type: Gisketch.Aottg2UI.Code.AottgPopover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgPopover.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgPopover$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Code_AottgPopover__get_RootStyle (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, const MethodInfo* method);
// 0x3af57c0

System_String_o *
Gisketch_Aottg2UI_Code_AottgPopover__get_RootStyle
          (Gisketch_Aottg2UI_Code_AottgPopover_o *__this,MethodInfo *method)

{
  if (DAT_0570144c == '\0') {
    il2cpp_init_method_metadata(&"popover");
    DAT_0570144c = '\x01';
  }
  return "popover";
}


// Gisketch.Aottg2UI.Code.AottgPopover$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Code_AottgPopover__get_RootLayout (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, const MethodInfo* method);
// 0x3af57f0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Code_AottgPopover__get_RootLayout
          (Gisketch_Aottg2UI_Code_AottgPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  MethodInfo *in_stack_fffffffffffffff0;
  
  if (DAT_0570144d == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    DAT_0570144d = '\x01';
  }
  if (DAT_0570147c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchLength);
    il2cpp_init_method_metadata(&"point");
    DAT_0570147c = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)il2cpp_runtime_glue(TypeInfo_GisketchLength);
  Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    (__this_00->fields).value = 420.0;
    (__this_00->fields).unit = "point";
    il2cpp_runtime_glue(&(__this_00->fields).unit);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,10.0,__this_00,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,in_stack_fffffffffffffff0);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Code.AottgPopover$$BuildDefinition
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* attribute, Gisketch_Aottg2UI_Code_AottgActionRegistry_o* actions, const MethodInfo* method);
// 0x3af59b0

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Code_AottgPopover__BuildDefinition
          (Gisketch_Aottg2UI_Code_AottgPopover_o *__this,System_String_o *id,
          Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *attribute,
          Gisketch_Aottg2UI_Code_AottgActionRegistry_o *actions,MethodInfo *method)

{
  System_Collections_Generic_List_GisketchNodeDefinition__o *__this_00;
  undefined1 uVar1;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)actions;
  if (DAT_0570144e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchOverlayDefinition);
    il2cpp_init_method_metadata(&"Panel");
    DAT_0570144e = '\x01';
  }
  __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)il2cpp_runtime_glue(TypeInfo_AottgUi);
  Gisketch_Aottg2UI_Code_AottgUi___ctor(__this_01,id,actions,method_00);
  (*__this->klass[1]._1.image)(__this,__this_01,__this->klass[1]._1.gc_desc);
  __this_02 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchOverlayDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    (__this_02->fields).id = id;
    il2cpp_runtime_glue(&__this_02->fields);
    *(undefined1 *)&(__this_02->fields).modal = 0;
    if (attribute == (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (undefined1)(attribute->fields)._DismissOnBackdrop_k__BackingField;
    }
    *(undefined1 *)((long)&(__this_02->fields).modal + 1) = uVar1;
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


// Gisketch.Aottg2UI.Code.AottgPopover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgPopover___ctor (Gisketch_Aottg2UI_Code_AottgPopover_o* __this, const MethodInfo* method);
// 0x3af5c90

void Gisketch_Aottg2UI_Code_AottgPopover___ctor
               (Gisketch_Aottg2UI_Code_AottgPopover_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}



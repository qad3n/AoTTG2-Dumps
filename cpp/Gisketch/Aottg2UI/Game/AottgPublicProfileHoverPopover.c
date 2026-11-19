// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverPopover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___cctor (const MethodInfo* method);
// 0x590e600

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075456a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    Il2CppMethodInitialized_075456a0 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, const MethodInfo* method);
// 0x590e670

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<Build>b__5_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___Build_b__5_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x590e680

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___Build_b__5_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)card;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildLoading(card,(MethodInfo *)card);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildReady(card,method_00);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildError(card,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x590e6a0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields *pGVar4;
  System_Action_AottgUi__o *__this_00;
  
  if (Il2CppMethodInitialized_075456a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-loading-banner");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-loading-bio");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-loading-body");
    Il2CppMethodInitialized_075456a1 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(120.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (body,"public-profile-hover-loading-banner",pGVar3,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "profilePreviewBody";
  pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
  __this_00 = pGVar4->__9__6_1;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    }
    object = (Il2CppObject *)pGVar4->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    pGVar4->__9__6_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__6_1);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar1,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,style,__this_00,"public-profile-hover-loading-body",pGVar3,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (body,"public-profile-hover-loading-bio",pGVar3,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_1 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x590ea40

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_1
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this_00;
  
  if (Il2CppMethodInitialized_075456a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-loading-lines");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-loading-avatar");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    Il2CppMethodInitialized_075456a2 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (row,"public-profile-hover-loading-avatar",pGVar1,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "default";
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
  __this_00 = pGVar2->__9__6_2;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_2,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    pGVar2->__9__6_2 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__6_2);
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (row,style,__this_00,"public-profile-hover-loading-lines",pGVar1,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_2 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x590ecd0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_2
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_075456a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-loading-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-loading-name");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    Il2CppMethodInitialized_075456a3 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(210.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(30.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (names == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (names,"public-profile-hover-loading-name",pGVar3,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (names,"public-profile-hover-loading-display-name",pGVar3,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x590eec0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields *pGVar9;
  
  if (Il2CppMethodInitialized_075456a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_4);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-bio-row");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBannerFrame");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-footer");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-banner-frame");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-body");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBadges");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBio");
    Il2CppMethodInitialized_075456a4 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  pSVar2 = "profilePreviewBannerFrame";
  pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
  pSVar3 = pGVar9->__9__7_1;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar9->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    pGVar9->__9__7_1 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar9->__9__7_1);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                      ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar2,pSVar3,"public-profile-hover-banner-frame",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).clip = true;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      }
      pSVar2 = "profilePreviewBody";
      pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
      pSVar3 = pGVar9->__9__7_2;
      if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
          pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
        }
        pIVar1 = (Il2CppObject *)pGVar9->__9;
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)pSVar3,pIVar1,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_2,
                   (MethodInfo_4A81BE0 *)0x0);
        pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
        pGVar9->__9__7_2 = pSVar3;
        Il2CppCodeGenWriteBarrier(&pGVar9->__9__7_2);
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar4,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (body,pSVar2,pSVar3,"public-profile-hover-body",pGVar6,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      }
      pSVar2 = "default";
      pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
      pSVar3 = pGVar9->__9__7_3;
      if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
          pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
        }
        pIVar1 = (Il2CppObject *)pGVar9->__9;
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)pSVar3,pIVar1,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_3,
                   (MethodInfo_4A81BE0 *)0x0);
        pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
        pGVar9->__9__7_3 = pSVar3;
        Il2CppCodeGenWriteBarrier(&pGVar9->__9__7_3);
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,16.0,0.0,0.0
                          ,0.0,0.0,(MethodInfo *)0x0);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (body,pSVar2,pSVar3,"public-profile-hover-bio-row",pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar8 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar8,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (pGVar8->fields).visible = "publicProfile.hover.hasBio";
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).visible);
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).bind = pGVar8;
          Il2CppCodeGenWriteBarrier(&(pGVar7->fields).bind);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
          }
          pSVar2 = "default";
          pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
          pSVar3 = pGVar9->__9__7_4;
          if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
              pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
            }
            pIVar1 = (Il2CppObject *)pGVar9->__9;
            pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
            System_Action_object____ctor
                      ((System_Action_object__o *)pSVar3,pIVar1,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_4,
                       (MethodInfo_4A81BE0 *)0x0);
            pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
            pGVar9->__9__7_4 = pSVar3;
            Il2CppCodeGenWriteBarrier(&pGVar9->__9__7_4);
          }
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row",(System_String_o *)0x0,"Center",
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,16.0,0.0
                              ,0.0,0.0,0.0,(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                             (body,pSVar2,pSVar3,"public-profile-hover-footer",pGVar6,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar8 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar8,(MethodInfo *)0x0);
          if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
            (pGVar8->fields).visible = "publicProfile.hover.hasBadges";
            Il2CppCodeGenWriteBarrier(&(pGVar8->fields).visible);
            if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar7->fields).bind = pGVar8;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields).bind);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_1 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* banner, const MethodInfo* method);
// 0x590f5f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_1
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *banner,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_075456a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-banner");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    method_00 = &"publicProfile.hover.bannerSprite";
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.bannerSprite");
    Il2CppMethodInitialized_075456a5 = '\x01';
  }
  if (Il2CppMethodInitialized_0754564a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackground2Texture");
    method_00 = &"UI/Backgrounds/";
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Backgrounds/");
    Il2CppMethodInitialized_0754564a = '\x01';
  }
  presets = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners((MethodInfo *)method_00);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey
                     ((System_String_o *)0x0,presets,"MainBackground2Texture",
                      (MethodInfo *)&"MainBackground2Texture");
  pSVar1 = System_String__Concat_52f0320("UI/Backgrounds/",pSVar1,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(190.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (banner != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (banner,pSVar1,"profilePreviewBanner","public-profile-hover-banner",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).sprite = "publicProfile.hover.bannerSprite";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_2 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x590f7e0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_2
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields *pGVar6;
  
  if (Il2CppMethodInitialized_075456a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_5);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_6);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-names");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-avatar-frame");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewAvatarFrame");
    Il2CppMethodInitialized_075456a6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  pSVar2 = "profilePreviewAvatarFrame";
  pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
  pSVar3 = pGVar6->__9__7_5;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar6->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_5,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    pGVar6->__9__7_5 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar6->__9__7_5);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,35.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (row,pSVar2,pSVar3,"public-profile-hover-avatar-frame",pGVar5,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  pSVar2 = "default";
  pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
  pSVar3 = pGVar6->__9__7_6;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar6->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_6,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    pGVar6->__9__7_6 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar6->__9__7_6);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (row,pSVar2,pSVar3,"public-profile-hover-names",pGVar5,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_5 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x590fb20

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_5
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075456a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_7);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarBg");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-avatar-bg");
    Il2CppMethodInitialized_075456a7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "profileCardAvatarBg";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
  __this_00 = pGVar1->__9__7_7;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_7,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    pGVar1->__9__7_7 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__7_7);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (frame == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (frame,style,__this_00,"public-profile-hover-avatar-bg",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_7
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_7 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bg, const MethodInfo* method);
// 0x590fd00

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_7
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *bg,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_075456a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.avatarSprite");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewAvatar");
    method_00 = &"public-profile-hover-avatar";
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-avatar");
    Il2CppMethodInitialized_075456a8 = '\x01';
  }
  if (Il2CppMethodInitialized_07545649 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch1");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    method_00 = &"UI/Icons/Profile/";
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/");
    Il2CppMethodInitialized_07545649 = '\x01';
  }
  presets = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars((MethodInfo *)method_00);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AllowedKey
                     ((System_String_o *)0x0,presets,"Gisketch1",
                      (MethodInfo *)&"Gisketch1");
  pSVar1 = System_String__Concat_5301f10("UI/Icons/Profile/",pSVar1,"Icon",(MethodInfo *)0x0)
  ;
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (bg != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (bg,pSVar1,"profilePreviewAvatar","public-profile-hover-avatar",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).sprite = "publicProfile.hover.avatarSprite";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_6 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x590ff00

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_6
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_075456a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.displayName");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.characterName");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Character");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Contributor");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewName");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-character-name");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewHandle");
    Il2CppMethodInitialized_075456a9 = '\x01';
  }
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (names,"MainMenu.Profile.Character","profilePreviewName","public-profile-hover-character-name",
                        "publicProfile.hover.characterName",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                         (names,"MainMenu.Profile.Contributor","profilePreviewHandle","public-profile-hover-display-name",
                          "publicProfile.hover.displayName",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).layout = pGVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_3 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bio, const MethodInfo* method);
// 0x5910190

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_3
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *bio,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075456aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-bio");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.bio");
    il2cpp_codegen_initialize_runtime_metadata(&"profileHoverBio");
    Il2CppMethodInitialized_075456aa = '\x01';
  }
  if (bio != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (bio,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),"profileHoverBio",
                        "public-profile-hover-bio","publicProfile.hover.bio",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_4 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* badges, const MethodInfo* method);
// 0x59102f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_4
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *badges,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  
  if (Il2CppMethodInitialized_075456ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow);
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.badgesJson");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBadges");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-badges");
    Il2CppMethodInitialized_075456ab = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow);
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson","publicProfile.hover.hasBadges",
             (MethodInfo *)0x0);
  if (badges == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (badges,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildError>b__8_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildError_b__8_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x59103a0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildError_b__8_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_075456ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"icon");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBodyText");
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-error-text");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Unavailable");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-error-icon");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.errorText");
    Il2CppMethodInitialized_075456ac = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                       (body,"warning","icon","public-profile-hover-error-icon",
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      Gisketch_Aottg2UI_Code_AottgUi__TextKey
                (body,"MainMenu.Profile.Unavailable","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootStyle (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, const MethodInfo* method);
// 0x590dc50

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754569a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profileHoverDialog");
    Il2CppMethodInitialized_0754569a = '\x01';
  }
  return "profileHoverDialog";
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootLayout (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, const MethodInfo* method);
// 0x590dc80

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754569b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_0754569b = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(400.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__Build (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x590dd40

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__Build
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754569c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_Build_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-card");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewCard");
    Il2CppMethodInitialized_0754569c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "profilePreviewCard";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
  __this_00 = pGVar1->__9__5_0;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_Build_b__5_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    pGVar1->__9__5_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__5_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this_00,"public-profile-hover-card",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildLoading (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x590df10

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_0754569d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-loading");
    Il2CppMethodInitialized_0754569d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
  __this = pGVar1->__9__6_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    pGVar1->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__6_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,style,__this,"public-profile-hover-loading",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "publicProfile.hover.loading";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildReady (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x590e150

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildReady
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_0754569e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-ready");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.ready");
    Il2CppMethodInitialized_0754569e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
  __this = pGVar1->__9__7_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    pGVar1->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__7_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,style,__this,"public-profile-hover-ready",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "publicProfile.hover.ready";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildError (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x590e390

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildError
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_0754569f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildError_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.error");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-error");
    Il2CppMethodInitialized_0754569f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "profilePreviewBody";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
  __this = pGVar1->__9__8_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildError_b__8_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields;
    pGVar1->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__8_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,style,__this,"public-profile-hover-error",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "publicProfile.hover.error";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, const MethodInfo* method);
// 0x590e5f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgPopover___ctor
            ((Gisketch_Aottg2UI_Code_AottgPopover_o *)__this,(MethodInfo *)0x0);
  return;
}



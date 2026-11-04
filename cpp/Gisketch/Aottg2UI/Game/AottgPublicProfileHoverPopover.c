// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverPopover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___cctor (const MethodInfo* method);
// 0x181e41bd0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this;
  
  if (Il2CppMethodInitialized_184344d2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    Il2CppMethodInitialized_184344d2a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___ctor(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<Build>b__5_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___Build_b__5_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x181e3f7f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___Build_b__5_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildLoading(card,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildReady(card,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildError(card,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e3d4e0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d2b == '\0') {
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
    Il2CppMethodInitialized_184344d2b = '\x01';
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
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (body,"public-profile-hover-loading-banner",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    }
    style = "profilePreviewBody";
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__6_1;
    if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      }
      object = (Il2CppObject *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_1,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__6_1 =
           (System_Action_AottgUi__o *)__this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__6_1,
                 __this_00);
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar1,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,(System_Action_AottgUi__o *)__this_00,"public-profile-hover-loading-body",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (body,"public-profile-hover-loading-bio",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_1 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181e3d950

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_1
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d2c == '\0') {
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
    Il2CppMethodInitialized_184344d2c = '\x01';
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
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (row,"public-profile-hover-loading-avatar",pGVar1,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    }
    style = "default";
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__6_2;
    if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      }
      object = (Il2CppObject *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_2,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__6_2 =
           (System_Action_AottgUi__o *)__this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__6_2,
                 __this_00);
    }
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,8.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,style,(System_Action_AottgUi__o *)__this_00,"public-profile-hover-loading-lines",pGVar1,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_2 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x181e3dc90

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_2
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184344d2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-loading-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-loading-name");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    Il2CppMethodInitialized_184344d2d = '\x01';
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
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
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
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (names,"public-profile-hover-loading-display-name",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e3def0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar8;
  
  if (Il2CppMethodInitialized_184344d2e == '\0') {
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
    Il2CppMethodInitialized_184344d2e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  pSVar2 = "profilePreviewBannerFrame";
  pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_1;
  if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    }
    pIVar1 = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_1,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_1 =
         (System_Action_AottgUi__o *)pUVar3;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_1,
               pUVar3);
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
                       (body,pSVar2,(System_Action_AottgUi__o *)pUVar3,"public-profile-hover-banner-frame",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).clip = true;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      }
      pSVar2 = "profilePreviewBody";
      pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_2;
      if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
        pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (pUVar3,pIVar1,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_2,
                   (MethodInfo *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_2 =
             (System_Action_AottgUi__o *)pUVar3;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_2,
                   pUVar3);
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
                (body,pSVar2,(System_Action_AottgUi__o *)pUVar3,"public-profile-hover-body",pGVar6,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      }
      pSVar2 = "default";
      pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_3;
      if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor
            == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
        pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (pUVar3,pIVar1,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_3,
                   (MethodInfo *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_3 =
             (System_Action_AottgUi__o *)pUVar3;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_3,
                   pUVar3);
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
                         (body,pSVar2,(System_Action_AottgUi__o *)pUVar3,"public-profile-hover-bio-row",pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar8 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar8,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (pGVar8->fields).visible = "publicProfile.hover.hasBio";
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).visible,"publicProfile.hover.hasBio");
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).bind = pGVar8;
          Il2CppCodeGenWriteBarrier(&(pGVar7->fields).bind,pGVar8);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
          }
          pSVar2 = "default";
          pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_4;
          if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
            pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
            System_Action_object____ctor
                      (pUVar3,pIVar1,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_4,
                       (MethodInfo *)0x0);
            TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_4 =
                 (System_Action_AottgUi__o *)pUVar3;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->
                        __9__7_4,pUVar3);
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
                             (body,pSVar2,(System_Action_AottgUi__o *)pUVar3,"public-profile-hover-footer",pGVar6,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar8 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar8,(MethodInfo *)0x0);
          if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
            (pGVar8->fields).visible = "publicProfile.hover.hasBadges";
            Il2CppCodeGenWriteBarrier(&(pGVar8->fields).visible,"publicProfile.hover.hasBadges");
            if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
              (pGVar7->fields).bind = pGVar8;
              Il2CppCodeGenWriteBarrier(&(pGVar7->fields).bind,pGVar8);
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
// 0x181e3e720

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_1
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *banner,MethodInfo *method)

{
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-banner");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.bannerSprite");
    Il2CppMethodInitialized_184344d2f = '\x01';
  }
  sprite = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite
                     ((System_String_o *)0x0,(MethodInfo *)0x0);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (banner,sprite,"profilePreviewBanner","public-profile-hover-banner",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).sprite = "publicProfile.hover.bannerSprite";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite,"publicProfile.hover.bannerSprite");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_2 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181e3e8f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_2
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  
  if (Il2CppMethodInitialized_184344d30 == '\0') {
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
    Il2CppMethodInitialized_184344d30 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  pSVar2 = "profilePreviewAvatarFrame";
  pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_5;
  if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    }
    pIVar1 = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_5,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_5 =
         (System_Action_AottgUi__o *)pUVar3;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_5,
               pUVar3);
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
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar2,(System_Action_AottgUi__o *)pUVar3,"public-profile-hover-avatar-frame",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    }
    pSVar2 = "default";
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_6;
    if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
      pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar3,pIVar1,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_6,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_6 =
           (System_Action_AottgUi__o *)pUVar3;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_6,
                 pUVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar2,(System_Action_AottgUi__o *)pUVar3,"public-profile-hover-names",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_5 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x181e3ef20

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_5
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344d31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_7);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarBg");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-avatar-bg");
    Il2CppMethodInitialized_184344d31 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "profileCardAvatarBg";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_7;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    }
    object = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_7,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_7 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_7,
               __this_00);
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
  if (frame != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (frame,style,(System_Action_AottgUi__o *)__this_00,"public-profile-hover-avatar-bg",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_7
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_7 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bg, const MethodInfo* method);
// 0x181e3f4a0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_7
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *bg,MethodInfo *method)

{
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.avatarSprite");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewAvatar");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-avatar");
    Il2CppMethodInitialized_184344d32 = '\x01';
  }
  sprite = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite
                     ((System_String_o *)0x0,(MethodInfo *)0x0);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (bg,sprite,"profilePreviewAvatar","public-profile-hover-avatar",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).sprite = "publicProfile.hover.avatarSprite";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite,"publicProfile.hover.avatarSprite");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_6 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x181e3f160

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_6
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184344d33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.displayName");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.characterName");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Character");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Contributor");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewName");
    il2cpp_codegen_initialize_runtime_metadata(&"Contributor");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-character-name");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewHandle");
    Il2CppMethodInitialized_184344d33 = '\x01';
  }
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (names,"MainMenu.Profile.Character","Character","profilePreviewName",
                        "public-profile-hover-character-name","publicProfile.hover.characterName",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
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
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar4);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                         (names,"MainMenu.Profile.Contributor","Contributor","profilePreviewHandle",
                          "public-profile-hover-display-name","publicProfile.hover.displayName",
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
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
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,pGVar4);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_3 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bio, const MethodInfo* method);
// 0x181e3ecc0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_3
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *bio,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344d34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-bio");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.bio");
    il2cpp_codegen_initialize_runtime_metadata(&"profileHoverBio");
    Il2CppMethodInitialized_184344d34 = '\x01';
  }
  if (bio != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (bio,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"profileHoverBio",
                        "public-profile-hover-bio","publicProfile.hover.bio",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_4 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* badges, const MethodInfo* method);
// 0x181e3ee60

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_4
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *badges,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow);
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.badgesJson");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.hasBadges");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-badges");
    Il2CppMethodInitialized_184344d35 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow);
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson","publicProfile.hover.hasBadges",
             (MethodInfo *)0x0);
  if (badges != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (badges,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildError>b__8_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildError_b__8_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e3d2c0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildError_b__8_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344d36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"icon");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBodyText");
    il2cpp_codegen_initialize_runtime_metadata(&"Profile unavailable.");
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-error-text");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Unavailable");
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-error-icon");
    il2cpp_codegen_initialize_runtime_metadata(&"publicProfile.hover.errorText");
    Il2CppMethodInitialized_184344d36 = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                       (body,"warning","icon","public-profile-hover-error-icon",
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      Gisketch_Aottg2UI_Code_AottgUi__TextKey
                (body,"MainMenu.Profile.Unavailable","Profile unavailable.","profileCardBodyText","public-profile-hover-error-text",
                 "publicProfile.hover.errorText",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootStyle (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, const MethodInfo* method);
// 0x181e2c630

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344d24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profileHoverDialog");
    Il2CppMethodInitialized_184344d24 = '\x01';
  }
  return "profileHoverDialog";
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootLayout (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, const MethodInfo* method);
// 0x181e2c540

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344d25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344d25 = '\x01';
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
// 0x181e2c320

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__Build
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344d26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_Build_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    il2cpp_codegen_initialize_runtime_metadata(&"public-profile-hover-card");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewCard");
    Il2CppMethodInitialized_184344d26 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "profilePreviewCard";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__5_0;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    }
    object = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_Build_b__5_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__5_0 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__5_0,
               __this_00);
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
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this_00,"public-profile-hover-card",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildLoading (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x181e2be00

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d27 == '\0') {
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
    Il2CppMethodInitialized_184344d27 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__6_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    }
    object = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildLoading_b__6_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__6_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__6_0,
               __this);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,style,(System_Action_AottgUi__o *)__this,"public-profile-hover-loading",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "publicProfile.hover.loading";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"publicProfile.hover.loading");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildReady (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x181e2c090

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildReady
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d28 == '\0') {
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
    Il2CppMethodInitialized_184344d28 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    }
    object = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildReady_b__7_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__7_0,
               __this);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,style,(System_Action_AottgUi__o *)__this,"public-profile-hover-ready",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "publicProfile.hover.ready";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"publicProfile.hover.ready");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildError (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x181e2bb50

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildError
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d29 == '\0') {
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
    Il2CppMethodInitialized_184344d29 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
  }
  style = "profilePreviewBody";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__8_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c);
    }
    object = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c_BuildError_b__8_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__8_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_c->static_fields->__9__8_0,
               __this);
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
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,style,(System_Action_AottgUi__o *)__this,"public-profile-hover-error",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "publicProfile.hover.error";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"publicProfile.hover.error");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___ctor(Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgPopover___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}



// Type: Gisketch.Aottg2UI.Game.AottgGameCreatePicker
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreatePicker.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___cctor (const MethodInfo* method);
// 0x1823d55f0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o *__this;
  
  if (Il2CppMethodInitialized_184347dbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
    Il2CppMethodInitialized_184347dbd = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->static_fields->__9 =
       __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
              static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c$$<BuildLoadNodes>b__6_2
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___BuildLoadNodes_b__6_2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1823cdf40

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___BuildLoadNodes_b__6_2(Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o* __this, System_String_o* name, MethodInfo* method)

{
  System_String_o *sprite;
  
  sprite = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__return_storage_ptr__->fields).Key = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Sprite = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
            (__return_storage_ptr__,name,name,sprite,sprite,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c$$<InputText>b__10_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___InputText_b__10_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o* __this, TMPro_TMP_InputField_o* item, const MethodInfo* method);
// 0x1823ce160

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c___InputText_b__10_0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c_o *__this,
               TMPro_TMP_InputField_o *item,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *__this_00;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_184347dbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-name");
    Il2CppMethodInitialized_184347dbe = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (item != (TMPro_TMP_InputField_o *)0x0) {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      a = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,"game-create-preset-save-name",(MethodInfo *)0x0);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d40e0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347dbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_409f0b8
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_184347dbf = '\x01';
  }
  style = "popover";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_409f0b8
               ,(MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(670.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this_00,"game-create-preset-load-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x1823d42c0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_array *source;
  Il2CppObject *object;
  System_String_o *key;
  System_String_o *pSVar1;
  System_Func_T__TResult__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_String_o *pSVar2;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this_01;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_02;
  DG_Tweening_Core_DOSetter_Color2__o *__this_03;
  
  if (Il2CppMethodInitialized_184347dc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c_BuildLoadNodes_b__6_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_409f198
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_409f278
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Search presets");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Load.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Load.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Choose a preset to configure Sandbox.");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-list");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"LOAD PRESET");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load-description");
    Il2CppMethodInitialized_184347dc0 = '\x01';
  }
  pSVar2 = "GameCreate.Presets.Load.Title";
  pSVar1 = "LOAD PRESET";
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,pSVar1,(MethodInfo *)0x0);
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (panel,pSVar1,"header","game-create-preset-load-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "GameCreate.Presets.Load.Description";
    pSVar1 = "Choose a preset to configure Sandbox.";
    if (Il2CppMethodInitialized_184347dc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347dc8 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,pSVar1,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (panel,pSVar1,"text","game-create-preset-load-description",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    source = (__this->fields).names;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
    }
    pSVar1 = "game-create-preset-load-list";
    __this_00 = (System_Func_T__TResult__o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
                static_fields->__9__6_2;
    if (__this_00 == (System_Func_T__TResult__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)
                   TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
      }
      object = (Il2CppObject *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
               static_fields->__9;
      __this_00 = (System_Func_T__TResult__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_GisketchGridPickerItem)
      ;
      System_Func_object__GisketchGridPickerItem____ctor
                (__this_00,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c_BuildLoadNodes_b__6_2
                 ,(MethodInfo_1727D80 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->static_fields->
      __9__6_2 = (System_Func_string__GisketchGridPickerItem__o *)__this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
                  static_fields->__9__6_2,__this_00);
    }
    source_00 = System_Linq_Enumerable__Select_object__GisketchGridPickerItem_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)__this_00,
                           (MethodInfo_6C24F0 *)
                           MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
    items = System_Linq_Enumerable__ToArray_GisketchGridPickerItem_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                       (MethodInfo_6C7B40 *)MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    key = "GameCreate.Presets.Search";
    pSVar2 = "Search presets";
    if (Il2CppMethodInitialized_184347dc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347dc8 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar2,(MethodInfo *)0x0);
    __this_01 = (__this->fields).__9__3;
    if (__this_01 == (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
      System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_409f198
                 ,(MethodInfo_1468040 *)0x0);
      (__this->fields).__9__3 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3,__this_01);
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
              (__this_02,pSVar1,items,1,620.0,48.0,0.0,0.0,pSVar2,__this_01,500.0,false,true,(MethodInfo *)0x0
              );
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
    pSVar2 = "Back";
    pSVar1 = "Common.Back";
    if (Il2CppMethodInitialized_184347dc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347dc8 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,pSVar2,(MethodInfo *)0x0);
    __this_03 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__4;
    if (__this_03 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
      __this_03 = (DG_Tweening_Core_DOSetter_Color2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_03,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil_409f278
                 ,(MethodInfo_1387DC0 *)0x0);
      (__this->fields).__9__4 = (System_Action_GisketchActionContext__o *)__this_03;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__4,__this_03);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
              (panel,1,pSVar1,(System_Action_GisketchActionContext__o *)__this_03,"game-create-preset-load-back",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o selectContext, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x1823d47e0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                *__this,Gisketch_Aottg2UI_Actions_GisketchActionContext_o *selectContext,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *item,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar2;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_184347dc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"Unable to load game preset: ");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load");
    Il2CppMethodInitialized_184347dc1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__LoadPreset((item->fields).Key,(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields).root;
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
                (__this_00,"game-create-preset-load",true,(MethodInfo *)0x0);
      pGVar1 = (__this->fields).root;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar1,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  message = System_String__Concat_1969e50("Unable to load game preset: ",(item->fields).Key,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass6_0$$<BuildLoadNodes>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x1823d4900

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0___BuildLoadNodes_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                *__this,Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  if (Il2CppMethodInitialized_184347dc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load");
    Il2CppMethodInitialized_184347dc2 = '\x01';
  }
  pGVar1 = (__this->fields).root;
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
              (__this_00,"game-create-preset-load",true,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass8_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass8_0$$<BuildSaveNodes>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___BuildSaveNodes_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d4b10

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___BuildSaveNodes_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347dc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil_409f438
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-content");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_184347dc3 = '\x01';
  }
  style = "popover";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil_409f438
               ,(MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(670.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this_00,"game-create-preset-save-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass8_0$$<BuildSaveNodes>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___BuildSaveNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x1823d4cf0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___BuildSaveNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_184347dc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil_409f518
              );
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-name");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-error");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"SAVE PRESET");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Presets.Save.Description");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-title");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-description");
    il2cpp_codegen_initialize_runtime_metadata(&"Save the current Sandbox configuration under a new name.");
    Il2CppMethodInitialized_184347dc4 = '\x01';
  }
  pSVar1 = "GameCreate.Presets.Save.Title";
  pSVar3 = "SAVE PRESET";
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,pSVar3,(MethodInfo *)0x0);
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (panel,pSVar3,"header","game-create-preset-save-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "GameCreate.Presets.Save.Description";
    pSVar3 = "Save the current Sandbox configuration under a new name.";
    if (Il2CppMethodInitialized_184347dc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347dc8 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar3 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,pSVar3,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (panel,pSVar3,"text","game-create-preset-save-description",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrEmpty
                      (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker->
                       static_fields->_saveError,(MethodInfo *)0x0);
    if (!bVar2) {
      Gisketch_Aottg2UI_Code_AottgUi__Callout
                (panel,3,TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker->
                         static_fields->_saveError,"game-create-preset-save-error",(MethodInfo *)0x0);
    }
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                       (panel,"game-create-preset-save-name",pSVar3,0,"inputField",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,0.2,0x28,
                        (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      (pGVar6->fields).value = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).value,pSVar3);
      pSVar3 = "clear";
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
      if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil_409f518
                   ,(MethodInfo *)0x0);
        (__this->fields).__9__2 = (System_Action_AottgUi__o *)__this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,__this_00);
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","FlexEnd",(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (panel,pSVar3,(System_Action_AottgUi__o *)__this_00,"game-create-preset-save-actions",pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass8_0$$<BuildSaveNodes>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___BuildSaveNodes_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x1823d51e0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___BuildSaveNodes_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o
                *__this,Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar3;
  
  if (Il2CppMethodInitialized_184347dc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil_409f5f8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil_409f6d8
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-save");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save-back");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_184347dc5 = '\x01';
  }
  pSVar1 = "Back";
  pSVar2 = "Common.Back";
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,pSVar1,(MethodInfo *)0x0);
  pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__3;
  if (pDVar3 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
    pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pDVar3,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil_409f5f8
               ,(MethodInfo_1387DC0 *)0x0);
    (__this->fields).__9__3 = (System_Action_GisketchActionContext__o *)pDVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3,pDVar3);
  }
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
              (actions,1,pSVar2,(System_Action_GisketchActionContext__o *)pDVar3,"game-create-preset-save-back",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "Save";
    pSVar2 = "Common.Save";
    if (Il2CppMethodInitialized_184347dc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347dc8 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,pSVar1,(MethodInfo *)0x0);
    pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__4;
    if (pDVar3 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
      pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pDVar3,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil_409f6d8
                 ,(MethodInfo_1387DC0 *)0x0);
      (__this->fields).__9__4 = (System_Action_GisketchActionContext__o *)pDVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__4,pDVar3);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
              (actions,0,pSVar2,(System_Action_GisketchActionContext__o *)pDVar3,"game-create-preset-save-save",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass8_0$$<BuildSaveNodes>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___BuildSaveNodes_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x1823d5420

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___BuildSaveNodes_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o
                *__this,Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  if (Il2CppMethodInitialized_184347dc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save");
    Il2CppMethodInitialized_184347dc6 = '\x01';
  }
  pGVar1 = (__this->fields).root;
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
              (__this_00,"game-create-preset-save",true,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker.<>c__DisplayClass8_0$$<BuildSaveNodes>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___BuildSaveNodes_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext, const MethodInfo* method);
// 0x1823d5480

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0___BuildSaveNodes_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o
                *__this,Gisketch_Aottg2UI_Actions_GisketchActionContext_o *actionContext,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar2;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_184347dc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save");
    Il2CppMethodInitialized_184347dc7 = '\x01';
  }
  name = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__InputText
                   ((actionContext->fields).GameObject,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__SavePreset
                    (name,&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker->
                           static_fields->_saveError,(MethodInfo *)0x0);
  pGVar1 = (__this->fields).root;
  if (bVar2) {
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
                (__this_00,"game-create-preset-save",true,(MethodInfo *)0x0);
      pGVar1 = (__this->fields).root;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(pGVar1,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__ShowSave(pGVar1,(MethodInfo *)0x0)
  ;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$OpenLoad
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__OpenLoad (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823ccd20

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__OpenLoad
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *x_00;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o *object;
  System_String_array *value;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (Il2CppMethodInitialized_184347db6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load");
    Il2CppMethodInitialized_184347db6 = '\x01';
  }
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  if (Il2CppMethodInitialized_184347dbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347dbb = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_1823ccf4e;
    x_00 = UnityEngine_GameObject__GetComponentInParent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    x_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (Il2CppMethodInitialized_184347db8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load");
    Il2CppMethodInitialized_184347db8 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                 *)0x0) {
    (object->fields).root = x_00;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,x_00);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    value = Gisketch_Aottg2UI_Game_AottgGameCreateSession__PresetNames((MethodInfo *)0x0);
    (object->fields).names = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).names,value);
    __this = (object->fields).root;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil
               ,(MethodInfo *)0x0);
    if ((__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (pGVar2 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                           (__this,"game-create-preset-load",(System_Action_AottgUi__o *)__this_01,
                            "game-create-preset-load",(MethodInfo *)0x0),
       pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
      if ((int)pGVar2->max_length == 1) {
        if ((x_00 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
           (__this_00 = (x_00->fields)._Overlays_k__BackingField,
           __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_1823ccf4e;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
                  (__this_00,"game-create-preset-load",pGVar2->m_Items[0],true,true,true,0,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1823ccf4e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$OpenSave
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__OpenSave (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823ccf60

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__OpenSave
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_184347db7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347db7 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__get_IsSandbox((MethodInfo *)0x0);
  if (bVar1) {
    x = (UnityEngine_Object_o *)(context->fields).GameObject;
    if (Il2CppMethodInitialized_184347dbb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184347dbb = '\x01';
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (UnityEngine_Object_o *)0x0) {
        ThrowNullReferenceException();
      }
      root = UnityEngine_GameObject__GetComponentInParent_object_
                       ((UnityEngine_GameObject_o *)x,
                        (MethodInfo_6F53B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    }
    else {
      root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker->static_fields->
      _saveError = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker->
                  static_fields->_saveError,(void *)0x0);
      Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__ShowSave
                (root,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$BuildLoadNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__BuildLoadNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823cc8e0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__BuildLoadNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o *object;
  System_String_array *value;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_184347db8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-load");
    Il2CppMethodInitialized_184347db8 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass6_0_o
                 *)0x0) {
    (object->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    value = Gisketch_Aottg2UI_Game_AottgGameCreateSession__PresetNames((MethodInfo *)0x0);
    (object->fields).names = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).names,value);
    __this = (object->fields).root;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass6_0_Buil
               ,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"game-create-preset-load",(System_Action_AottgUi__o *)__this_00,
                          "game-create-preset-load",(MethodInfo *)0x0);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$ShowSave
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__ShowSave (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823cd120

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__ShowSave
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_184347db9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save");
    Il2CppMethodInitialized_184347db9 = '\x01';
  }
  if (Il2CppMethodInitialized_184347dba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save");
    Il2CppMethodInitialized_184347dba = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o
                 *)0x0) {
    (object->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
    __this = (object->fields).root;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil
               ,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"game-create-preset-save",(System_Action_AottgUi__o *)__this_01,
                          "game-create-preset-save",(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        if ((int)pGVar1->max_length == 1) {
          if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
             (__this_00 = (root->fields)._Overlays_k__BackingField,
             __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_1823cd265;
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
                    (__this_00,"game-create-preset-save",pGVar1->m_Items[0],true,true,true,0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
label_1823cd265:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$BuildSaveNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__BuildSaveNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823cca00

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__BuildSaveNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_184347dba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-preset-save");
    Il2CppMethodInitialized_184347dba = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker___c__DisplayClass8_0_o
                 *)0x0) {
    (object->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
    __this = (object->fields).root;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c__DisplayClass8_0_Buil
               ,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"game-create-preset-save",(System_Action_AottgUi__o *)__this_00,
                          "game-create-preset-save",(MethodInfo *)0x0);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__Root (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823cd0a0

Gisketch_Aottg2UI_GisketchUIRoot_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__Root
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_184347dbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347dbb = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                         (__this,(MethodInfo_6F53B0 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      return pGVar2;
    }
    ThrowNullReferenceException();
  }
  return (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreatePresetPicker$$InputText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__InputText (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x1823ccaf0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker__InputText
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  Il2CppObject *object;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Object_array *source_00;
  System_Func_TMP_InputField__bool__o *__this;
  TMPro_TMP_InputField_o *x;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347dbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_TMP_InputField);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_TMP_InputField_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c_InputText_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
    Il2CppMethodInitialized_184347dbc = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_1823ccd0e;
    pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_1823ccd0e;
    pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
  }
  else {
    pUVar2 = (UnityEngine_Transform_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      source_00 = UnityEngine_Component__GetComponentsInChildren_object_
                            ((UnityEngine_Component_o *)pUVar2,true,
                             (MethodInfo_665440 *)
                             MethodInfo_UnityEngine_Component_GetComponentsInChildren_TMP_InputField);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)
                   TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
      }
      __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
               static_fields->__9__10_0;
      if (__this == (System_Func_TMP_InputField__bool__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c);
        }
        object = (Il2CppObject *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
                 static_fields->__9;
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_TMP_InputField_bool);
        System_Func_object__bool____ctor
                  ((System_Predicate_object__o *)__this,object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c_InputText_b__10_0
                   ,(MethodInfo_B61EB0 *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->static_fields->
        __9__10_0 = __this;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreatePresetPicker_c->
                    static_fields->__9__10_0,__this);
      }
      x = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                     (System_Func_TSource__bool__o *)__this,
                     (MethodInfo_6BD2C0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_TMP_InputField);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) goto label_1823cccf7;
      if ((x != (TMPro_TMP_InputField_o *)0x0) &&
         (pSVar3 = (x->fields).m_Text, pSVar3 != (System_String_o *)0x0)) {
        pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
label_1823ccd0e:
    ThrowNullReferenceException();
  }
label_1823cccf7:
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.AottgGameCreateText$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x1823cd7f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,fallback,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___cctor (const MethodInfo* method);
// 0x1823d5660

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this;
  
  if (Il2CppMethodInitialized_184347dc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    Il2CppMethodInitialized_184347dc9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<OpenMap>b__13_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___OpenMap_b__13_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181e9a800

bool
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___OpenMap_b__13_0(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* name, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(line,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<OpenMode>b__14_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___OpenMode_b__14_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181e9a800

bool
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___OpenMode_b__14_0(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty(line,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildModeNodes>b__16_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1823cdff0

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347dca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_184347dca = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar1 = Map_BuiltinLevels__IsLogicBuiltin(value,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildModeNodes>b__16_4
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1823ce040

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347dcb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    Il2CppMethodInitialized_184347dcb = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  bVar1 = Map_BuiltinLevels__IsLogicBuiltin(value,(MethodInfo *)0x0);
  bVar2 = System_String__op_Equality
                    (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory,
                     "Builtin",(MethodInfo *)0x0);
  return bVar2 == bVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildModeNodes>b__16_5
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_5 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1823ce0d0

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildModeNodes_b__16_5
          (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *value,MethodInfo *method
          )

{
  System_String_o *sprite;
  System_String_o *keywords;
  
  if (Il2CppMethodInitialized_184347dcc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    Il2CppMethodInitialized_184347dcc = '\x01';
  }
  sprite = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  keywords = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory;
  (__return_storage_ptr__->fields).Key = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Sprite = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
            (__return_storage_ptr__,value,value,sprite,keywords,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildAddonNodes>b__18_6
// il2cpp: __f__AnonymousType0_string__int__o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildAddonNodes_b__18_6 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, int32_t index, const MethodInfo* method);
// 0x1823cddb0

__f__AnonymousType0_string__int__o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildAddonNodes_b__18_6
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *value,int32_t index,
          MethodInfo *method)

{
  System_Data_DataRowBuilder_o *__this_00;
  
  if (Il2CppMethodInitialized_184347dcd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_f__AnonymousType0_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_f__AnonymousType0_string_int);
    Il2CppMethodInitialized_184347dcd = '\x01';
  }
  __this_00 = (System_Data_DataRowBuilder_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_f__AnonymousType0_string_int);
  System_Data_DataRowBuilder___ctor
            (__this_00,(System_Data_DataTable_o *)value,index,MethodInfo_f__AnonymousType0_string_int_ctor);
  return (__f__AnonymousType0_string__int__o *)__this_00;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildCategoryTabs>b__20_0
// il2cpp: Gisketch_Aottg2UI_Game_AottgSubtab_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildCategoryTabs_b__20_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* category, const MethodInfo* method);
// 0x1823cde30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823cdeb4: mov rdi, qword ptr [rip + 0x1cc5b5d]  ; "Custom"
// asm:   0x1823cdebb: mov rbx, qword ptr [rip + 0x1d2ed1e]  ; "GameCreate.Picker.Category.Custom"

Gisketch_Aottg2UI_Game_AottgSubtab_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildCategoryTabs_b__20_0
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *category,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgSubtab_o *__this_00;
  System_String_o *fallback;
  
  if (Il2CppMethodInitialized_184347dce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Category.Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Category.Builtin");
    Il2CppMethodInitialized_184347dce = '\x01';
  }
  bVar1 = System_String__op_Equality(category,"Builtin",(MethodInfo *)0x0);
  pSVar2 = "GameCreate.Picker.Category.Custom";
  fallback = "Custom";
  if (bVar1) {
    pSVar2 = "GameCreate.Picker.Category.Builtin";
    fallback = "Builtin";
  }
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,fallback,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
  Gisketch_Aottg2UI_Game_AottgSubtab___ctor(__this_00,category,pSVar2,(MethodInfo *)0x0);
  return __this_00;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildMapNodes>b__30_5
// il2cpp: Gisketch_Aottg2UI_Game_AottgSubtab_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildMapNodes_b__30_5 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* category, const MethodInfo* method);
// 0x1823cdf90

Gisketch_Aottg2UI_Game_AottgSubtab_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildMapNodes_b__30_5
          (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *category,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgSubtab_o *__this_00;
  
  if (Il2CppMethodInitialized_184347dcf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
    Il2CppMethodInitialized_184347dcf = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtab);
  Gisketch_Aottg2UI_Game_AottgSubtab___ctor(__this_00,category,category,(MethodInfo *)0x0);
  return __this_00;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<BuildMapNodes>b__30_2
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildMapNodes_b__30_2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1808e13a0

System_String_o*
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___BuildMapNodes_b__30_2(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* value, MethodInfo* method)

{
  return (System_Linq_Expressions_Expression_o *)node;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c$$<ShowCustomContentManager>b__36_3
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___ShowCustomContentManager_b__36_3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1823cdf40

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c___ShowCustomContentManager_b__36_3
          (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c_o *__this,System_String_o *name,MethodInfo *method)

{
  System_String_o *sprite;
  
  sprite = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  (__return_storage_ptr__->fields).Key = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Sprite = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
            (__return_storage_ptr__,name,name,sprite,sprite,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$<BuildModeNodes>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823cf650

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347dd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker-content");
    Il2CppMethodInitialized_184347dd0 = '\x01';
  }
  style = "popover";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__2
               ,(MethodInfo *)0x0);
    (__this->fields).__9__2 = (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(670.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this_00,"game-create-mode-picker-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$<BuildModeNodes>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x1823cf830

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_array *pSVar1;
  Il2CppObject *pIVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *value;
  System_Action_string__o *value_00;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_Func_string__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_T__TResult__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o *object;
  System_String_o *id;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this_03;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *component;
  
  if (Il2CppMethodInitialized_184347dd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_5);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Mode.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"SELECT MODE");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker-title");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker");
    Il2CppMethodInitialized_184347dd1 = '\x01';
  }
  pSVar3 = "GameCreate.Picker.Mode.Title";
  pSVar4 = "SELECT MODE";
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar3,pSVar4,(MethodInfo *)0x0);
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (panel,pSVar4,"header","game-create-mode-picker-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar3 = "game-create-mode-picker";
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__3;
    pSVar1 = (__this->fields).categories;
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory;
    if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__3
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__3 = (System_Action_string__o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3,__this_00);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildCategoryTabs
              (panel,pSVar3,pSVar1,pSVar4,(System_Action_string__o *)__this_00,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).modes;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    }
    __this_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__16_4;
    if (__this_01 == (System_Func_string__bool__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      }
      pIVar2 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this_01,pIVar2,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_4,
                 (MethodInfo_B61EB0 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__16_4 = __this_01;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__16_4,__this_01)
      ;
    }
    source = System_Linq_Enumerable__Where_float_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                        (System_Func_TSource__bool__o *)__this_01,
                        (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    }
    __this_02 = (System_Func_T__TResult__o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__16_5;
    if (__this_02 == (System_Func_T__TResult__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      }
      pIVar2 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9;
      __this_02 = (System_Func_T__TResult__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_GisketchGridPickerItem)
      ;
      System_Func_object__GisketchGridPickerItem____ctor
                (__this_02,pIVar2,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_5,
                 (MethodInfo_1727D80 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__16_5 =
           (System_Func_string__GisketchGridPickerItem__o *)__this_02;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__16_5,__this_02)
      ;
    }
    source_00 = System_Linq_Enumerable__Select_object__GisketchGridPickerItem_
                          (source,(System_Func_TSource__TResult__o *)__this_02,
                           (MethodInfo_6C24F0 *)
                           MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
    items = System_Linq_Enumerable__ToArray_GisketchGridPickerItem_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                       (MethodInfo_6C7B40 *)MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory;
    if (pSVar4 != (System_String_o *)0x0) {
      value = (__this->fields).root;
      pSVar4 = System_String__ToLowerInvariant(pSVar4,(MethodInfo *)0x0);
      value_00 = (__this->fields).selected;
      if (Il2CppMethodInitialized_184347da2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0_BuildModePicker_b__0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0);
        il2cpp_codegen_initialize_runtime_metadata(&"Search modes");
        il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker-");
        il2cpp_codegen_initialize_runtime_metadata(&"-list");
        il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Mode.Search");
        Il2CppMethodInitialized_184347da2 = '\x01';
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o *)0x0) {
        (object->fields).root = value;
        Il2CppCodeGenWriteBarrier(&(object->fields).root,value);
        (object->fields).selected = value_00;
        Il2CppCodeGenWriteBarrier(&(object->fields).selected,value_00);
        id = System_String__Concat_1969b70
                       ("game-create-mode-picker-",pSVar4,"-list",(MethodInfo *)0x0);
        pSVar3 = "GameCreate.Picker.Mode.Search";
        pSVar4 = "Search modes";
        if (Il2CppMethodInitialized_184347dc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
          Il2CppMethodInitialized_184347dc8 = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar3,pSVar4,(MethodInfo *)0x0);
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
        System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
                  (__this_03,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0_BuildModePicker_b__0
                   ,(MethodInfo_1468040 *)0x0);
        component = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildListPicker
                              (id,items,pSVar4,__this_03,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass16_0$$<BuildModeNodes>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o* __this, System_String_o* category, const MethodInfo* method);
// 0x1823cfd40

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0___BuildModeNodes_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o *__this,
               System_String_o *category,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  System_String_o *id;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (Il2CppMethodInitialized_184347dd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker");
    Il2CppMethodInitialized_184347dd2 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory = category;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory,category);
  root = (__this->fields).root;
  pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModeNodes
                     (root,(__this->fields).modes,(__this->fields).selected,(MethodInfo *)0x0);
  id = "game-create-mode-picker";
  if (Il2CppMethodInitialized_184347da7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347da7 = '\x01';
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((int)pGVar2->max_length == 1) {
      x = (UnityEngine_Object_o *)
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          if ((int)pGVar2->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (root->fields)._Overlays_k__BackingField;
          if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                      (__this_00,id,pGVar2->m_Items[0],
                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor,
                       true,false,10.0,false,0,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_1823cfeb2;
      }
    }
    return;
  }
label_1823cfeb2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass17_0$$<BuildModePicker>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0___BuildModePicker_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o selectContext, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x1823cfec0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0___BuildModePicker_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *selectContext,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *item,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  System_Action_string__o *pSVar2;
  
  if (Il2CppMethodInitialized_184347dd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker");
    Il2CppMethodInitialized_184347dd3 = '\x01';
  }
  pGVar1 = (__this->fields).root;
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
              (__this_00,"game-create-mode-picker",true,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).selected;
    if (pSVar2 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)
                ((pSVar2->fields).method_code,(item->fields).Key,(pSVar2->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>g__HasBuiltin|0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_g__HasBuiltin_0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1823d0f60

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_g__HasBuiltin_0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347dd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_184347dd4 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).builtin;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)value,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__1
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x1823cffb0

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347dd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_184347dd4 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).builtin;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)value,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    return !bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d0010

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347dd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_184347dd5 = '\x01';
  }
  style = "popover";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__3;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__3
               ,(MethodInfo *)0x0);
    (__this->fields).__9__3 = (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(670.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this_00,"game-create-addon-picker-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x1823d01f0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_array *pSVar1;
  Il2CppObject *object;
  System_String_o *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_Func_T1__T2__TResult__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar4;
  System_Func___f__AnonymousType0_string__int___bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_T__TResult__o *__this_02;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_String_o *pSVar5;
  System_String_o *id;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this_03;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *component;
  
  if (Il2CppMethodInitialized_184347dd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_f__AnonymousType0_string_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_f__AnonymousType0_string_int_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Where_f__AnonymousType0_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_f__AnonymousType0_string_int_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_f__AnonymousType0_string_int_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_int_f__AnonymousType0_string_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildAddonNodes_b__18_6);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__9
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Search addons");
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-list");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Addons.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker-header");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker-");
    Il2CppMethodInitialized_184347dd6 = '\x01';
  }
  pSVar5 = "clear";
  pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__4;
  if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar3,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__4
               ,(MethodInfo *)0x0);
    (__this->fields).__9__4 = (System_Action_AottgUi__o *)pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__4,pUVar3);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,14.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (panel,pSVar5,(System_Action_AottgUi__o *)pUVar3,"game-create-addon-picker-header",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "game-create-addon-picker";
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__5;
    pSVar1 = (__this->fields).categories;
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory;
    if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                (pUVar3,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__5
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__5 = (System_Action_string__o *)pUVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__5,pUVar3);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildCategoryTabs
              (panel,pSVar2,pSVar1,pSVar5,(System_Action_string__o *)pUVar3,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).addons;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    }
    __this_00 = (System_Func_T1__T2__TResult__o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__18_6;
    if (__this_00 == (System_Func_T1__T2__TResult__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9;
      __this_00 = (System_Func_T1__T2__TResult__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_string_int_f__AnonymousType0_string_int);
      System_Func_object__uint__uint____ctor
                (__this_00,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildAddonNodes_b__18_6,
                 (MethodInfo_172BE70 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__18_6 =
           (System_Func_string__int____f__AnonymousType0_string__int___o *)__this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__18_6,__this_00)
      ;
    }
    pSVar4 = System_Linq_Enumerable__SelectMany_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                        (System_Func_TSource__IEnumerable_TResult___o *)__this_00,
                        (MethodInfo_6C1BA0 *)
                        MethodInfo_System_Linq_Enumerable_Select_string_f__AnonymousType0_string_int);
    __this_01 = (__this->fields).__9__7;
    if (__this_01 == (System_Func___f__AnonymousType0_string__int___bool__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_f__AnonymousType0_string_int_bool);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__7
                 ,(MethodInfo_B61EB0 *)0x0);
      (__this->fields).__9__7 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__7,__this_01);
    }
    source = System_Linq_Enumerable__Where_float_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                        (System_Func_TSource__bool__o *)__this_01,
                        (MethodInfo_6CA550 *)
                        MethodInfo_System_Linq_Enumerable_Where_f__AnonymousType0_string_int);
    __this_02 = (System_Func_T__TResult__o *)(__this->fields).__9__8;
    if (__this_02 == (System_Func_T__TResult__o *)0x0) {
      __this_02 = (System_Func_T__TResult__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_f__AnonymousType0_string_int_GisketchGridPickerItem);
      System_Func_object__GisketchGridPickerItem____ctor
                (__this_02,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__8
                 ,(MethodInfo_1727D80 *)0x0);
      (__this->fields).__9__8 =
           (System_Func___f__AnonymousType0_string__int___GisketchGridPickerItem__o *)__this_02;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__8,__this_02);
    }
    pSVar4 = System_Linq_Enumerable__Select_object__GisketchGridPickerItem_
                       (source,(System_Func_TSource__TResult__o *)__this_02,
                        (MethodInfo_6C24F0 *)
                        MethodInfo_System_Linq_Enumerable_Select_f__AnonymousType0_string_int_GisketchGridPickerItem
                       );
    items = System_Linq_Enumerable__ToArray_GisketchGridPickerItem_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar4,
                       (MethodInfo_6C7B40 *)MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory;
    if (pSVar5 != (System_String_o *)0x0) {
      pSVar5 = System_String__ToLowerInvariant(pSVar5,(MethodInfo *)0x0);
      id = System_String__Concat_1969b70("game-create-addon-picker-",pSVar5,"-list",(MethodInfo *)0x0)
      ;
      pSVar2 = "GameCreate.Picker.Addons.Search";
      pSVar5 = "Search addons";
      if (Il2CppMethodInitialized_184347dc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        Il2CppMethodInitialized_184347dc8 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,pSVar5,(MethodInfo *)0x0);
      __this_03 = (__this->fields).__9__9;
      if (__this_03 == (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
        System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
                  (__this_03,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__9
                   ,(MethodInfo_1468040 *)0x0);
        (__this->fields).__9__9 = __this_03;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__9,__this_03);
      }
      component = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildListPicker
                            (id,items,pSVar5,__this_03,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x1823d07c0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184347dd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__10
              );
    il2cpp_codegen_initialize_runtime_metadata(&"SELECT ADDONS");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Addons.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Done");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker-title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker-done");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Done");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    Il2CppMethodInitialized_184347dd7 = '\x01';
  }
  pSVar1 = "GameCreate.Picker.Addons.Title";
  pSVar2 = "SELECT ADDONS";
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,pSVar2,(MethodInfo *)0x0);
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (header,pSVar2,"header","game-create-addon-picker-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "Done";
    pSVar2 = "Common.Done";
    if (Il2CppMethodInitialized_184347dc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347dc8 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,pSVar1,(MethodInfo *)0x0);
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__10;
    if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__10
                 ,(MethodInfo_1387DC0 *)0x0);
      (__this->fields).__9__10 = (System_Action_GisketchActionContext__o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__10,__this_00);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                       (header,0,pSVar2,(System_Action_GisketchActionContext__o *)__this_00,
                        "game-create-addon-picker-done",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__10
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__10 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x1823cff40

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__10
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__,MethodInfo *method)

{
  System_Action_o *pSVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  if (Il2CppMethodInitialized_184347dd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    Il2CppMethodInitialized_184347dd8 = '\x01';
  }
  pSVar1 = (__this->fields).completed;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
  }
  pGVar2 = (__this->fields).root;
  if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar2->fields)._Overlays_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ClosePopover
              (__this_00,"game-create-addon-picker",true,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, System_String_o* category, const MethodInfo* method);
// 0x1823d0a90

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               System_String_o *category,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  System_String_o *id;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (Il2CppMethodInitialized_184347dd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    Il2CppMethodInitialized_184347dd9 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory = category;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory,category);
  root = (__this->fields).root;
  pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildAddonNodes
                     (root,(__this->fields).addons,(__this->fields).builtin,(__this->fields).isSelected,
                      (__this->fields).toggled,(__this->fields).completed,(MethodInfo *)0x0);
  id = "game-create-addon-picker";
  if (Il2CppMethodInitialized_184347da7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347da7 = '\x01';
  }
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((int)pGVar2->max_length == 1) {
      x = (UnityEngine_Object_o *)
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          if ((int)pGVar2->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          __this_00 = (root->fields)._Overlays_k__BackingField;
          if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                      (__this_00,id,pGVar2->m_Items[0],
                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor,
                       true,false,10.0,false,0,(MethodInfo *)0x0);
            return;
          }
        }
        goto label_1823d0c26;
      }
    }
    return;
  }
label_1823d0c26:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__7
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__7 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, __f__AnonymousType0_string__int__o* item, const MethodInfo* method);
// 0x1823d0c40

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__7
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               __f__AnonymousType0_string__int__o *item,MethodInfo *method)

{
  System_String_o *item_00;
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347dda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_f__AnonymousType0_string_int_get_value);
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    Il2CppMethodInitialized_184347dda = '\x01';
  }
  if (item != (__f__AnonymousType0_string__int__o *)0x0) {
    item_00 = (item->fields)._value_i__Field;
    if (Il2CppMethodInitialized_184347dd4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      Il2CppMethodInitialized_184347dd4 = '\x01';
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).builtin;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar1 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)item_00,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      bVar2 = System_String__op_Equality
                        (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory,
                         "Builtin",(MethodInfo *)0x0);
      return bVar2 == bVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__8
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__8 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, __f__AnonymousType0_string__int__o* item, const MethodInfo* method);
// 0x1823d0d00

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__8
          (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
          __f__AnonymousType0_string__int__o *item,MethodInfo *method)

{
  System_Func_int__bool__o *pSVar1;
  System_String_o *pSVar2;
  char cVar3;
  System_String_o *key;
  System_String_o *pSVar4;
  System_String_o *label;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184347ddb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_f__AnonymousType0_string_int_get_index);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_f__AnonymousType0_string_int_get_value);
    il2cpp_codegen_initialize_runtime_metadata(&"  |  ");
    il2cpp_codegen_initialize_runtime_metadata(&"SELECTED");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Addons.Selected");
    Il2CppMethodInitialized_184347ddb = '\x01';
  }
  if (item == (__f__AnonymousType0_string__int__o *)0x0) {
    ThrowNullReferenceException();
  }
  local_res8[0] = (item->fields)._index_i__Field;
  key = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  if ((__this->fields).isSelected != (System_Func_int__bool__o *)0x0) {
    pSVar1 = (__this->fields).isSelected;
    cVar3 = (*(code *)(pSVar1->fields).invoke_impl)
                      ((pSVar1->fields).method_code,(item->fields)._index_i__Field);
    pSVar2 = "GameCreate.Picker.Addons.Selected";
    pSVar4 = "SELECTED";
    if (cVar3 != '\0') {
      if (Il2CppMethodInitialized_184347dc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        Il2CppMethodInitialized_184347dc8 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,pSVar4,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969e50(pSVar4,"  |  ",(MethodInfo *)0x0);
      goto label_1823d0e2b;
    }
  }
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
label_1823d0e2b:
  label = System_String__Concat_1969e50(pSVar4,(item->fields)._value_i__Field,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory;
  (__return_storage_ptr__->fields).Key = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Sprite = (System_String_o *)0x0;
  (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
            (__return_storage_ptr__,key,label,pSVar4,pSVar2,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass18_0$$<BuildAddonNodes>b__9
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__9 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o selectContext, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x1823d0ea0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0___BuildAddonNodes_b__9
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *selectContext,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *item,MethodInfo *method)

{
  System_Action_int__o *pSVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184347ddc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    Il2CppMethodInitialized_184347ddc = '\x01';
  }
  local_res18[0] = 0;
  bVar2 = System_Int32__TryParse((item->fields).Key,local_res18,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar1 = (__this->fields).toggled;
    if (pSVar1 != (System_Action_int__o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)
                ((pSVar1->fields).method_code,local_res18[0],(pSVar1->fields).method);
    }
    root = (__this->fields).root;
    nodes = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildAddonNodes
                      (root,(__this->fields).addons,(__this->fields).builtin,(__this->fields).isSelected,
                       (__this->fields).toggled,(__this->fields).completed,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshPicker
              (root,"game-create-addon-picker",nodes,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass20_0$$<BuildCategoryTabs>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0___BuildCategoryTabs_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* category, const MethodInfo* method);
// 0x1823d0fc0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0___BuildCategoryTabs_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *category,
               MethodInfo *method)

{
  System_Action_string__o *pSVar1;
  
  pSVar1 = (__this->fields).changed;
  if (pSVar1 != (System_Action_string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,category,(pSVar1->fields).method);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d0ff0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347ddd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-content");
    Il2CppMethodInitialized_184347ddd = '\x01';
  }
  style = "popover";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__1
               ,(MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this_00,"game-create-titan-spawn-picker-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x1823d11d0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823d137f: movss xmm7, dword ptr [rip + 0xf87af1]
// asm:   0x1823d1387: xorps xmm6, xmm6
// asm:   0x1823d138a: movss xmm8, dword ptr [rip + 0xf87875]
// asm:   0x1823d1393: movss xmm9, dword ptr [rip + 0xf88308]
// asm:   0x1823d139c: nop dword ptr [rax]
// asm:   0x1823d150b: jmp 0x1823d13a0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *key;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  int iVar6;
  
  if (Il2CppMethodInitialized_184347dde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1_BuildTitanSpawnNodes_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.TitanSpawns.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"CUSTOM TITAN SPAWNS");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-row-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-actions");
    Il2CppMethodInitialized_184347dde = '\x01';
  }
  key = "GameCreate.Picker.TitanSpawns.Title";
  pSVar2 = "CUSTOM TITAN SPAWNS";
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar2,(MethodInfo *)0x0);
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    iVar6 = 0;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (panel,pSVar2,"header","game-create-titan-spawn-picker-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).labels;
    pSVar2 = "clear";
    while ("clear" = pSVar2, pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length <= iVar6) {
        pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
        if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
          pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (pUVar3,(Il2CppObject *)__this,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__2
                     ,(MethodInfo *)0x0);
          (__this->fields).__9__2 = (System_Action_AottgUi__o *)pUVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,pUVar3);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row","FlexEnd",(System_String_o *)0x0,
                            (System_String_o *)0x0,"Wrap",10.0,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (panel,pSVar2,(System_Action_AottgUi__o *)pUVar3,"game-create-titan-spawn-picker-actions",pGVar5,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o *)0x0) break;
      (object->fields).CS___8__locals1 = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,__this);
      (object->fields).index = iVar6;
      pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar3,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1_BuildTitanSpawnNodes_b__3
                 ,(MethodInfo *)0x0);
      pSVar2 = System_Int32__ToString(&(object->fields).index,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969e50("game-create-titan-spawn-picker-row-",pSVar2,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","SpaceBetween","Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,18.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (panel,"clear",(System_Action_AottgUi__o *)pUVar3,pSVar2,pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      iVar6 = iVar6 + 1;
      pSVar2 = "clear";
      pSVar1 = (__this->fields).labels;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x1823d1680

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar3;
  
  if (Il2CppMethodInitialized_184347ddf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__6
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Set all to 0");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-reset");
    il2cpp_codegen_initialize_runtime_metadata(&"Autofill remaining");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-autofill");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.TitanSpawns.Autofill");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.TitanSpawns.Reset");
    Il2CppMethodInitialized_184347ddf = '\x01';
  }
  pSVar1 = "GameCreate.Picker.TitanSpawns.Reset";
  pSVar2 = "Set all to 0";
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,pSVar2,(MethodInfo *)0x0);
  pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__5;
  if (pDVar3 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
    pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pDVar3,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__5
               ,(MethodInfo_1387DC0 *)0x0);
    (__this->fields).__9__5 = (System_Action_GisketchActionContext__o *)pDVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__5,pDVar3);
  }
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
              (actions,1,pSVar2,(System_Action_GisketchActionContext__o *)pDVar3,"game-create-titan-spawn-picker-reset",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "GameCreate.Picker.TitanSpawns.Autofill";
    pSVar2 = "Autofill remaining";
    if (Il2CppMethodInitialized_184347dc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347dc8 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,pSVar2,(MethodInfo *)0x0);
    pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__6;
    if (pDVar3 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
      pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (pDVar3,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__6
                 ,(MethodInfo_1387DC0 *)0x0);
      (__this->fields).__9__6 = (System_Action_GisketchActionContext__o *)pDVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__6,pDVar3);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
              (actions,0,pSVar2,(System_Action_GisketchActionContext__o *)pDVar3,"game-create-titan-spawn-picker-autofill",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext, const MethodInfo* method);
// 0x1823d18c0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *actionContext,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347de0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347de0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__ResetTitanSpawnProbabilities((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshTitanSpawn((__this->fields).root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_0$$<BuildTitanSpawnNodes>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o actionContext, const MethodInfo* method);
// 0x1823d1920

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0___BuildTitanSpawnNodes_b__6
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *actionContext,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347de1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184347de1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__AutofillTitanSpawnProbabilities((MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshTitanSpawn((__this->fields).root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_1$$<BuildTitanSpawnNodes>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___BuildTitanSpawnNodes_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x1823d1980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823d1ca1: mov rax, qword ptr [rip + 0x1d17da8]  ; "0"

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___BuildTitanSpawnNodes_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *pGVar2;
  System_String_array *pSVar3;
  System_Single_array *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_Globalization_CultureInfo_o *provider;
  
  if (Il2CppMethodInitialized_184347de2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1_BuildTitanSpawnNodes_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-label-");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker-input-");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_184347de2 = '\x01';
  }
  pGVar2 = (__this->fields).CS___8__locals1;
  if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *)0x0) &&
     (pSVar3 = (pGVar2->fields).labels, pSVar3 != (System_String_array *)0x0)) {
    uVar1 = (__this->fields).index;
    if ((uint)pSVar3->max_length <= uVar1) {
label_1823d1cd4:
      ThrowIndexOutOfRangeException();
    }
    pSVar6 = pSVar3->m_Items[(int)uVar1];
    pSVar5 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_1969e50("game-create-titan-spawn-picker-label-",pSVar5,(MethodInfo *)0x0);
    if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (row,pSVar6,"text",pSVar5,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar6 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
      id = System_String__Concat_1969e50("game-create-titan-spawn-picker-input-",pSVar6,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      pSVar5 = "0";
      pSVar6 = "inputField";
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__4;
      if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
        __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_00,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_1_BuildTitanSpawnNodes_b__4
                   ,(MethodInfo_1387DC0 *)0x0);
        (__this->fields).__9__4 = (System_Action_GisketchActionContext__o *)__this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__4,__this_00);
      }
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__InputField
                         (row,id,pSVar5,2,pSVar6,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,0.2,0,
                          (System_Action_GisketchActionContext__o *)__this_00,(MethodInfo *)0x0);
      pGVar2 = (__this->fields).CS___8__locals1;
      if ((pGVar2 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *)0x0) &&
         (pSVar4 = (pGVar2->fields).values, pSVar4 != (System_Single_array *)0x0)) {
        pSVar6 = "0";
        if ((__this->fields).index < (int)pSVar4->max_length) {
          uVar1 = (__this->fields).index;
          pSVar4 = (((__this->fields).CS___8__locals1)->fields).values;
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          if ((uint)pSVar4->max_length <= uVar1) goto label_1823d1cd4;
          pSVar6 = System_Single__ToString_1b49fe0
                             (pSVar4->m_Items + (int)uVar1,(System_IFormatProvider_o *)provider,
                              (MethodInfo *)0x0);
        }
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).value = pSVar6;
          Il2CppCodeGenWriteBarrier(&(pGVar7->fields).value,pSVar6);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass28_1$$<BuildTitanSpawnNodes>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___BuildTitanSpawnNodes_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o changeContext, const MethodInfo* method);
// 0x1823d1ce0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1___BuildTitanSpawnNodes_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_1_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *changeContext,MethodInfo *method)

{
  int32_t index;
  UnityEngine_GameObject_o *__this_00;
  float value;
  bool bVar1;
  TMPro_TMP_InputField_o *x;
  System_Globalization_CultureInfo_o *provider;
  System_String_o *s;
  float local_res10 [2];
  
  if (Il2CppMethodInitialized_184347de3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347de3 = '\x01';
  }
  local_res10[0] = 0.0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(changeContext->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (changeContext->fields).GameObject;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1823d1e61;
    x = UnityEngine_GameObject__GetComponent_object_
                  (__this_00,
                   (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
  }
  else {
    x = (TMPro_TMP_InputField_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (TMPro_TMP_InputField_o *)0x0) {
label_1823d1e61:
      ThrowNullReferenceException();
    }
    s = (x->fields).m_Text;
  }
  else if ((changeContext->fields).Node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    s = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    s = (((changeContext->fields).Node)->fields).value;
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  bVar1 = System_Single__TryParse_1b4a540
                    (s,0xa7,(System_IFormatProvider_o *)provider,local_res10,(MethodInfo *)0x0);
  value = local_res10[0];
  if (bVar1) {
    index = (__this->fields).index;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateSession__SetTitanSpawnProbability(index,value,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d1e70

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347de4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker-content");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_184347de4 = '\x01';
  }
  style = "popover";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__1,
               (MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(1200.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this_00,"game-create-map-picker-content",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x1823d2050

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_HashSet_string__o *object;
  System_String_o *pSVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o *object_00;
  System_String_o *pSVar4;
  System_Func_string__AottgSubtab__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *pSVar5;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *tabs;
  System_Action_T1__T2__o *__this_01;
  Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this_02;
  System_String_array *pSVar6;
  System_Func_string__IEnumerable_string___o *__this_03;
  System_Func_string__bool__o *__this_04;
  System_Func_string__string__o *__this_05;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Object_array *source_00;
  System_Func_T__TResult__o *__this_06;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_String_o *id;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this_07;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_08;
  int32_t columns;
  float thumbnailHeight;
  float thumbnailWidth;
  float itemHeight;
  float itemWidth;
  
  if (Il2CppMethodInitialized_184347de5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_GetMapNames);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_SelectMany_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_IEnumerable_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildMapNodes_b__30_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildMapNodes_b__30_5);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_1_BuildMapNodes_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"-custom-list");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Map.Title");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Map.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"SELECT MAP");
    il2cpp_codegen_initialize_runtime_metadata(&"Search maps");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker-categories");
    il2cpp_codegen_initialize_runtime_metadata(&"-preview-grid");
    Il2CppMethodInitialized_184347de5 = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_1);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if (object_00 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o *)0x0) {
    (object_00->fields).CS___8__locals1 = __this;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).CS___8__locals1,__this);
    pSVar2 = "GameCreate.Picker.Map.Title";
    pSVar4 = "SELECT MAP";
    if (Il2CppMethodInitialized_184347dc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347dc8 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,pSVar4,(MethodInfo *)0x0);
    if (panel == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823d2956;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (panel,pSVar4,"header","game-create-map-picker-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((__this->fields).showCategories != false) {
      pSVar6 = (__this->fields).categories;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      }
      __this_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__30_5;
      if (__this_00 == (System_Func_string__AottgSubtab__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_AottgSubtab);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,pIVar1,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildMapNodes_b__30_5,
                   (MethodInfo_16E67D0 *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__30_5 = __this_00;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__30_5,
                   __this_00);
      }
      pSVar5 = System_Linq_Enumerable__Select_Vector3__object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                          (System_Func_TSource__TResult__o *)__this_00,
                          (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_AottgSubtab);
      tabs = (Gisketch_Aottg2UI_Game_AottgSubtab_array *)
             System_Linq_Enumerable__ToArray_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                        (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_AottgSubtab);
      pSVar2 = "game-create-map-picker-categories";
      __this_01 = (System_Action_T1__T2__o *)(__this->fields).__9__6;
      pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory;
      if (__this_01 == (System_Action_T1__T2__o *)0x0) {
        __this_01 = (System_Action_T1__T2__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_string);
        System_Action_GisketchActionContext__object____ctor
                  (__this_01,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__6
                   ,(MethodInfo_1467A10 *)0x0);
        (__this->fields).__9__6 = (System_Action_GisketchActionContext__string__o *)__this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__6,__this_01);
      }
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
      Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor
                (__this_02,pSVar2,tabs,pSVar4,(System_Action_GisketchActionContext__string__o *)__this_01,
                 (MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
      if ((__this->fields).showCategories != false) {
        pSVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory;
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        pSVar6 = Map_BuiltinLevels__GetMapNames(pSVar4,(MethodInfo *)0x0);
        goto label_1823d254a;
      }
    }
    pSVar6 = (__this->fields).categories;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_IEnumerable_string);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_03,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_BuiltinLevels_GetMapNames,(MethodInfo_16E67D0 *)0x0);
    pSVar5 = System_Linq_Enumerable__SelectMany_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                        (System_Func_TSource__IEnumerable_TResult___o *)__this_03,
                        (MethodInfo_6C1BA0 *)MethodInfo_System_Linq_Enumerable_SelectMany_string_string);
    object = (__this->fields).allowed;
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    if (object != (System_Collections_Generic_HashSet_string__o *)0x0) {
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)__this_04,(Il2CppObject *)object,
                 (intptr_t)((Il2CppClass *)object->klass)->vtable[8].method,(MethodInfo_B61EB0 *)0x0);
      pSVar6 = (System_String_array *)
               System_Linq_Enumerable__Where_float_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                          (System_Func_TSource__bool__o *)__this_04,
                          (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
label_1823d254a:
      if ((__this->fields).showCategories == false) {
        (object_00->fields).custom = false;
      }
      else {
        bVar3 = System_String__Equals_196c550
                          (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory,
                           "Custom",5,(MethodInfo *)0x0);
        (object_00->fields).custom = bVar3;
        if (bVar3) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
          }
          __this_05 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__30_2;
          if (__this_05 == (System_Func_string__string__o *)0x0) {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9;
            __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_05,pIVar1,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildMapNodes_b__30_2,
                       (MethodInfo_16E67D0 *)0x0);
            TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__30_2 = __this_05;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__30_2,
                       __this_05);
          }
          if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
          }
          if (Il2CppMethodInitialized_184341f37 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
            Il2CppMethodInitialized_184341f37 = '\x01';
          }
          if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
          }
          pSVar6 = (System_String_array *)
                   System_Linq_Enumerable__OrderBy_object__object__6c13e0
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                              (System_Func_TSource__TKey__o *)__this_05,
                              (System_Collections_Generic_IComparer_TKey__o *)
                              TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                              (MethodInfo_6C13E0 *)
                              MethodInfo_System_Linq_Enumerable_OrderBy_string_string_4077450);
        }
      }
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      if (Il2CppMethodInitialized_184341f37 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
        Il2CppMethodInitialized_184341f37 = '\x01';
      }
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      source = System_Linq_Enumerable__Distinct_object__6bb210
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                          (System_Collections_Generic_IEqualityComparer_TSource__o *)
                          TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                          (MethodInfo_6BB210 *)MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
      source_00 = System_Linq_Enumerable__ToArray_object_
                            (source,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      __this_06 = (System_Func_T__TResult__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_GisketchGridPickerItem)
      ;
      System_Func_object__GisketchGridPickerItem____ctor
                (__this_06,(Il2CppObject *)object_00,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_1_BuildMapNodes_b__3
                 ,(MethodInfo_1727D80 *)0x0);
      pSVar5 = System_Linq_Enumerable__Select_object__GisketchGridPickerItem_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                          (System_Func_TSource__TResult__o *)__this_06,
                          (MethodInfo_6C24F0 *)
                          MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
      items = System_Linq_Enumerable__ToArray_GisketchGridPickerItem_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                         (MethodInfo_6C7B40 *)MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem
                        );
      pSVar4 = "-custom-list";
      if ((object_00->fields).custom == false) {
        pSVar4 = "-preview-grid";
      }
      id = System_String__Concat_1969e50("game-create-map-picker",pSVar4,(MethodInfo *)0x0);
      pSVar2 = "GameCreate.Picker.Map.Search";
      pSVar4 = "Search maps";
      if ((object_00->fields).custom == false) {
        itemWidth = 270.0;
        columns = 4;
        itemHeight = 265.0;
        thumbnailWidth = 240.0;
        thumbnailHeight = 190.0;
      }
      else {
        itemWidth = 1160.0;
        itemHeight = 52.0;
        thumbnailHeight = 0.0;
        thumbnailWidth = 0.0;
        columns = 1;
      }
      if (Il2CppMethodInitialized_184347dc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        Il2CppMethodInitialized_184347dc8 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,pSVar4,(MethodInfo *)0x0);
      __this_07 = (__this->fields).__9__4;
      if (__this_07 == (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
        __this_07 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
        System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
                  (__this_07,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__4
                   ,(MethodInfo_1468040 *)0x0);
        (__this->fields).__9__4 = __this_07;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__4,__this_07);
      }
      bVar3 = (object_00->fields).custom;
      __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker)
      ;
      Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
                (__this_08,id,items,columns,itemWidth,itemHeight,thumbnailWidth,thumbnailHeight,pSVar4,
                 __this_07,700.0,bVar3 == false,true,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_08,(MethodInfo *)0x0);
      return;
    }
  }
label_1823d2956:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* category, const MethodInfo* method);
// 0x1823d29e0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__6
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *category,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_184347de6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    Il2CppMethodInitialized_184347de6 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory = category;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory,category);
  root = (__this->fields).root;
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildMapNodes
                     (root,(__this->fields).allowed,(__this->fields).categories,true,(__this->fields).selected
                      ,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347da8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    Il2CppMethodInitialized_184347da8 = '\x01';
  }
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((int)pGVar1->max_length == 1) {
      if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
         (__this_00 = (root->fields)._Overlays_k__BackingField,
         __this_00 == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_1823d2ad0;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
                (__this_00,"game-create-map-picker",pGVar1->m_Items[0],true,true,false,0,(MethodInfo *)0x0);
    }
    return;
  }
label_1823d2ad0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_0$$<BuildMapNodes>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o selectContext, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x1823d2960

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0___BuildMapNodes_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *selectContext,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *item,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  System_Action_string__o *pSVar2;
  
  if (Il2CppMethodInitialized_184347de7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    Il2CppMethodInitialized_184347de7 = '\x01';
  }
  pGVar1 = (__this->fields).root;
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
              (__this_00,"game-create-map-picker",true,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).selected;
    if (pSVar2 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)
                ((pSVar2->fields).method_code,(item->fields).Key,(pSVar2->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass30_1$$<BuildMapNodes>b__3
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1___BuildMapNodes_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1823d2ae0

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1___BuildMapNodes_b__3
          (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *__return_storage_ptr__,
          Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_1_o *__this,System_String_o *name,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *pGVar1;
  System_String_o *sprite;
  System_String_o *keywords;
  
  if (Il2CppMethodInitialized_184347de8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    Il2CppMethodInitialized_184347de8 = '\x01';
  }
  if ((__this->fields).custom == false) {
    sprite = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PreviewSprite(name,(MethodInfo *)0x0);
  }
  else {
    sprite = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pGVar1 = (__this->fields).CS___8__locals1;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *)0x0) {
    if ((pGVar1->fields).showCategories == false) {
      if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
      }
      keywords = Map_BuiltinLevels__FindMapCategory(name,(MethodInfo *)0x0);
    }
    else {
      keywords = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory;
    }
    (__return_storage_ptr__->fields).Key = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).Sprite = (System_String_o *)0x0;
    (__return_storage_ptr__->fields).Keywords = (System_String_o *)0x0;
    Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
              (__return_storage_ptr__,name,name,sprite,keywords,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass31_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass31_0$$<MapCategories>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0___MapCategories_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o* __this, System_String_o* category, const MethodInfo* method);
// 0x1823d2be0

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0___MapCategories_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o *__this,
               System_String_o *category,MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *object;
  bool bVar1;
  System_String_array *source;
  System_Func_string__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_184347de9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    Il2CppMethodInitialized_184347de9 = '\x01';
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  source = Map_BuiltinLevels__GetMapNames(category,(MethodInfo *)0x0);
  object = (__this->fields).allowed;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  if (object != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
               (intptr_t)((Il2CppClass *)object->klass)->vtable[8].method,(MethodInfo_B61EB0 *)0x0);
    bVar1 = System_Linq_Enumerable__Any_object__6b6920
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (System_Func_TSource__bool__o *)__this_00,
                       (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823d2cb0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347dea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"-content");
    il2cpp_codegen_initialize_runtime_metadata(&"popover");
    Il2CppMethodInitialized_184347dea = '\x01';
  }
  style = "popover";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__1
               ,(MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
  }
  id = System_String__Concat_1969e50((__this->fields).id,"-content",(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(670.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,18.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,style,(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x1823d2ea0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *key;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_String_o *pSVar5;
  System_String_array *source;
  System_Func_T__TResult__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this_01;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_02;
  
  if (Il2CppMethodInitialized_184347deb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_ShowCustomContentManager_b__36_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__5
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Search custom content");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"-list");
    il2cpp_codegen_initialize_runtime_metadata(&"-description");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Manager.DeleteInstruction");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Select an item to delete.");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Manager.Search");
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    Il2CppMethodInitialized_184347deb = '\x01';
  }
  pSVar5 = "clear";
  pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__2;
  if (pUVar1 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar1,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__2
               ,(MethodInfo *)0x0);
    (__this->fields).__9__2 = (System_Action_AottgUi__o *)pUVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__2,pUVar1);
  }
  pSVar2 = System_String__Concat_1969e50((__this->fields).id,"-header",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,14.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (panel,pSVar5,(System_Action_AottgUi__o *)pUVar1,pSVar2,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "GameCreate.Sandbox.Custom.Manager.DeleteInstruction";
    pSVar5 = "Select an item to delete.";
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode ==
        false) {
      pSVar5 = (__this->fields).description;
    }
    else {
      if (Il2CppMethodInitialized_184347dc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        Il2CppMethodInitialized_184347dc8 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar5 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,pSVar5,(MethodInfo *)0x0);
    }
    pSVar2 = System_String__Concat_1969e50((__this->fields).id,"-description",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (panel,pSVar5,"text",pSVar2,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_1969e50((__this->fields).id,"-list",(MethodInfo *)0x0);
    source = (__this->fields).names;
    if (source == (System_String_array *)0x0) {
      source = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    }
    __this_00 = (System_Func_T__TResult__o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__36_3;
    if (__this_00 == (System_Func_T__TResult__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9;
      __this_00 = (System_Func_T__TResult__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_GisketchGridPickerItem)
      ;
      System_Func_object__GisketchGridPickerItem____ctor
                (__this_00,object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_ShowCustomContentManager_b__36_3,
                 (MethodInfo_1727D80 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__36_3 =
           (System_Func_string__GisketchGridPickerItem__o *)__this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__36_3,__this_00)
      ;
    }
    source_00 = System_Linq_Enumerable__Select_object__GisketchGridPickerItem_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)__this_00,
                           (MethodInfo_6C24F0 *)
                           MethodInfo_System_Linq_Enumerable_Select_string_GisketchGridPickerItem);
    items = System_Linq_Enumerable__ToArray_GisketchGridPickerItem_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                       (MethodInfo_6C7B40 *)MethodInfo_System_Linq_Enumerable_ToArray_GisketchGridPickerItem);
    key = "GameCreate.Sandbox.Custom.Manager.Search";
    pSVar2 = "Search custom content";
    if (Il2CppMethodInitialized_184347dc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347dc8 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar2,(MethodInfo *)0x0);
    __this_01 = (__this->fields).__9__4;
    if (__this_01 == (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
      System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
                (__this_01,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__4
                 ,(MethodInfo_1468040 *)0x0);
      (__this->fields).__9__4 = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__4,__this_01);
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
              (__this_02,pSVar5,items,1,620.0,48.0,0.0,0.0,pSVar2,__this_01,420.0,false,true,(MethodInfo *)0x0
              );
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_02,(MethodInfo *)0x0);
    pSVar5 = "clear";
    pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__5;
    if (pUVar1 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar1,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__5
                 ,(MethodInfo *)0x0);
      (__this->fields).__9__5 = (System_Action_AottgUi__o *)pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__5,pUVar1);
    }
    pSVar2 = System_String__Concat_1969e50((__this->fields).id,"-actions",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd",(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (panel,pSVar5,(System_Action_AottgUi__o *)pUVar1,pSVar2,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x1823d35a0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  
  if (Il2CppMethodInitialized_184347dec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__6
              );
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"-import");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"import");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Import");
    Il2CppMethodInitialized_184347dec = '\x01';
  }
  pSVar2 = (__this->fields).title;
  pSVar1 = System_String__Concat_1969e50((__this->fields).id,"-title",(MethodInfo *)0x0);
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (header,pSVar2,"header",pSVar1,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "Import";
    pSVar2 = "Common.Import";
    if (Il2CppMethodInitialized_184347dc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347dc8 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,pSVar1,(MethodInfo *)0x0);
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__6;
    if (__this_00 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
      __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
      System_Action_GisketchActionContext____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__6
                 ,(MethodInfo_1387DC0 *)0x0);
      (__this->fields).__9__6 = (System_Action_GisketchActionContext__o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__6,__this_00);
    }
    pSVar1 = System_String__Concat_1969e50((__this->fields).id,"-import",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
              (header,0,pSVar2,(System_Action_GisketchActionContext__o *)__this_00,pSVar1,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               "import",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__6 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x1823d3c00

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__6
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  System_Action_o *pSVar2;
  
  pGVar1 = (__this->fields).root;
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
              (__this_00,(__this->fields).id,true,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).import;
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x1823d3770

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *item,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  System_Action_string__o *pSVar2;
  
  if (Il2CppMethodInitialized_184347ded == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    Il2CppMethodInitialized_184347ded = '\x01';
  }
  pGVar1 = (__this->fields).root;
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
              (__this_00,(__this->fields).id,true,(MethodInfo *)0x0);
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode ==
        false) {
      pSVar2 = (__this->fields).modify;
    }
    else {
      pSVar2 = (__this->fields).delete;
    }
    if (pSVar2 != (System_Action_string__o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)
                ((pSVar2->fields).method_code,(item->fields).Key,(pSVar2->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x1823d3810
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823d393b: mov rsi, qword ptr [rip + 0x1cd72a6]  ; "Delete"
// asm:   0x1823d3942: mov rdi, qword ptr [rip + 0x1ca547f]  ; "Common.Delete"

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  System_String_o *pSVar1;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar2;
  System_String_o *id;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347dee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__9
              );
    il2cpp_codegen_initialize_runtime_metadata(&"-open-folder");
    il2cpp_codegen_initialize_runtime_metadata(&"trashcan");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Custom.Manager.OpenFolder");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"cross");
    il2cpp_codegen_initialize_runtime_metadata(&"-back");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Open Folder");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"open");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"-delete-mode");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Back");
    Il2CppMethodInitialized_184347dee = '\x01';
  }
  pSVar1 = "Delete";
  pSVar3 = "Common.Delete";
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode != false)
  {
    pSVar1 = "Cancel";
    pSVar3 = "Common.Cancel";
  }
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar3,pSVar1,(MethodInfo *)0x0);
  pDVar2 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__7;
  if (pDVar2 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
    pDVar2 = (DG_Tweening_Core_DOSetter_Color2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pDVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__7
               ,(MethodInfo_1387DC0 *)0x0);
    (__this->fields).__9__7 = (System_Action_GisketchActionContext__o *)pDVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__7,pDVar2);
  }
  id = System_String__Concat_1969e50((__this->fields).id,"-delete-mode",(MethodInfo *)0x0);
  pSVar3 = "trashcan";
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode != false)
  {
    pSVar3 = "cross";
  }
  if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
            (actions,1,pSVar1,(System_Action_GisketchActionContext__o *)pDVar2,id,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,pSVar3,(MethodInfo *)0x0);
  pSVar3 = "GameCreate.Sandbox.Custom.Manager.OpenFolder";
  pSVar1 = "Open Folder";
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar3,pSVar1,(MethodInfo *)0x0);
  pDVar2 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__8;
  if (pDVar2 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
    pDVar2 = (DG_Tweening_Core_DOSetter_Color2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pDVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__8
               ,(MethodInfo_1387DC0 *)0x0);
    (__this->fields).__9__8 = (System_Action_GisketchActionContext__o *)pDVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__8,pDVar2);
  }
  pSVar3 = System_String__Concat_1969e50((__this->fields).id,"-open-folder",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
            (actions,1,pSVar1,(System_Action_GisketchActionContext__o *)pDVar2,pSVar3,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"open",(MethodInfo *)0x0)
  ;
  pSVar3 = "Back";
  pSVar1 = "Common.Back";
  if (Il2CppMethodInitialized_184347dc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_184347dc8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,pSVar3,(MethodInfo *)0x0);
  pDVar2 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__9;
  if (pDVar2 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
    pDVar2 = (DG_Tweening_Core_DOSetter_Color2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pDVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__9
               ,(MethodInfo_1387DC0 *)0x0);
    (__this->fields).__9__9 = (System_Action_GisketchActionContext__o *)pDVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__9,pDVar2);
  }
  pSVar3 = System_String__Concat_1969e50((__this->fields).id,"-back",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
            (actions,1,pSVar1,(System_Action_GisketchActionContext__o *)pDVar2,pSVar3,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0
            );
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__7
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__7 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x1823d3c60

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__7
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347def == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    Il2CppMethodInitialized_184347def = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode =
       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode == false
  ;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowCustomContentManager
            ((__this->fields).root,(__this->fields).id,(__this->fields).title,(__this->fields).description,
             (__this->fields).names,(__this->fields).import,(__this->fields).modify,(__this->fields).delete,
             (__this->fields).openFolder,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__8
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__8 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x1823d3cf0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__8
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  pSVar1 = (__this->fields).openFolder;
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<>c__DisplayClass36_0$$<ShowCustomContentManager>b__9
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__9 (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x1823d3d10

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0___ShowCustomContentManager_b__9
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  
  pGVar1 = (__this->fields).root;
  if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
     (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseDialog
              (__this_00,(__this->fields).id,true,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26___ctor (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26___ctor(Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.IDisposable.Dispose
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_IDisposable_Dispose (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_IDisposable_Dispose(Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$MoveNext
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__MoveNext (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, const MethodInfo* method);
// 0x1823f4840

bool Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__MoveNext
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *__this,
               MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *pGVar3;
  UnityEngine_Object_o *x;
  bool bVar4;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_184347df1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347df1 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    bVar4 = System_String__IsNullOrEmpty((__this->fields).refreshedAnchorId,(MethodInfo *)0x0);
    if (!bVar4) {
      pGVar2 = (__this->fields).root;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        pGVar2 = (__this->fields).root;
        if (pGVar2 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (((pGVar2->fields)._Screens_k__BackingField !=
             (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)0x0) &&
           (pGVar3 = (pGVar2->fields)._Screens_k__BackingField,
           (pGVar3->fields)._active != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0)) {
          value = Gisketch_Aottg2UI_Building_GisketchView__Find
                            ((pGVar3->fields)._active,(__this->fields).refreshedAnchorId,(MethodInfo *)0x0);
          (__this->fields).anchor = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields).anchor,value);
        }
      }
    }
    pGVar2 = (__this->fields).root;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      x = (UnityEngine_Object_o *)(__this->fields).anchor;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawn
                  ((__this->fields).root,(__this->fields).anchor,(MethodInfo *)0x0);
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.Collections.IEnumerator.Reset
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_IEnumerator_Reset (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, const MethodInfo* method);
// 0x1823f49a0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_IEnumerator_Reset
               (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *__this,
               MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_ShowTitanSpawnNextFrame_d__26_System_Collections_IE
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker.<ShowTitanSpawnNextFrame>d__26$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_IEnumerator_get_Current (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26__System_Collections_IEnumerator_get_Current(Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenMap
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenMap (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_array* maps, System_String_o* currentMap, bool showCategories, System_Action_string__o* selected, const MethodInfo* method);
// 0x1823cb2b0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823cb3e0: mov r14, rbp
// asm:   0x1823cb6b5: mov ebx, ebp
// asm:   0x1823cb6b7: mov eax, ebp
// asm:   0x1823cb6b9: nop dword ptr [rax]
// asm:   0x1823cb78a: mov rsi, qword ptr [rip + 0x1ca26af]  ; "General"

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenMap
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_array *maps,
               System_String_o *currentMap,bool showCategories,System_Action_string__o *selected,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Il2CppObject *object;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  uint uVar2;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_Func_string__bool__o *pSVar3;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar4;
  System_Collections_Generic_HashSet_string__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o *object_00;
  System_String_array *pSVar5;
  System_String_array *source;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar7;
  System_String_o *category;
  
  if (Il2CppMethodInitialized_184347d9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3af0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_OpenMap_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    Il2CppMethodInitialized_184347d9e = '\x01';
  }
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  if (Il2CppMethodInitialized_184347db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347db3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  root = pGVar7;
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_1823cb83e;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor =
       (UnityEngine_GameObject_o *)x;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor,x);
  if (maps == (System_String_array *)0x0) {
    maps = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
  }
  pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__13_0;
  if (pSVar3 == (System_Func_string__bool__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar3,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_OpenMap_b__13_0,
               (MethodInfo_B61EB0 *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__13_0 = pSVar3;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__13_0,pSVar3);
  }
  pSVar4 = System_Linq_Enumerable__Where_float_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)maps,
                      (System_Func_TSource__bool__o *)pSVar3,
                      (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176dbf0
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)pSVar4,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_176DBF0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3af0);
  if (Il2CppMethodInitialized_184347db0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0_MapCategories_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0);
    Il2CppMethodInitialized_184347db0 = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if (object_00 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o *)0x0) {
    (object_00->fields).allowed = __this_00;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).allowed,__this_00);
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar5 = Map_BuiltinLevels__GetMapCategories((MethodInfo *)0x0);
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar3,(Il2CppObject *)object_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0_MapCategories_b__0,
               (MethodInfo_B61EB0 *)0x0);
    pSVar4 = System_Linq_Enumerable__Where_float_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar5,
                        (System_Func_TSource__bool__o *)pSVar3,
                        (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
    pSVar5 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       (pSVar4,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
    if (Il2CppMethodInitialized_184347db1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string_4070458);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
      il2cpp_codegen_initialize_runtime_metadata(&"General");
      Il2CppMethodInitialized_184347db1 = '\x01';
    }
    if (pSVar5 != (System_String_array *)0x0) {
      while (uVar2 = (uint)pGVar7, (int)uVar2 < (int)pSVar5->max_length) {
        if ((uint)pSVar5->max_length <= uVar2) goto label_1823cb844;
        category = pSVar5->m_Items[(int)uVar2];
        if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
        }
        source = Map_BuiltinLevels__GetMapNames(category,(MethodInfo *)0x0);
        if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
        }
        if (Il2CppMethodInitialized_184341f37 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
          Il2CppMethodInitialized_184341f37 = '\x01';
        }
        if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
        }
        bVar1 = System_Linq_Enumerable__Contains_object__6ba340
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (Il2CppObject *)currentMap,
                           (System_Collections_Generic_IEqualityComparer_TSource__o *)
                           TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                           (MethodInfo_6BA340 *)MethodInfo_System_Linq_Enumerable_Contains_string_4070458);
        if (bVar1) goto label_1823cb791;
        pGVar7 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)(ulonglong)(uVar2 + 1);
      }
      category = "General";
      if (pSVar5->max_length != 0) {
        if ((int)pSVar5->max_length == 0) {
label_1823cb844:
          ThrowIndexOutOfRangeException();
        }
        category = pSVar5->m_Items[0];
      }
label_1823cb791:
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory = category;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_mapCategory,category)
      ;
      pGVar6 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildMapNodes
                         (root,__this_00,pSVar5,showCategories,selected,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        if ((int)pGVar6->max_length == 1) {
          if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
             (__this = (root->fields)._Overlays_k__BackingField,
             __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_1823cb83e;
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
                    (__this,"game-create-map-picker",pGVar6->m_Items[0],true,true,true,0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
label_1823cb83e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenMode
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenMode (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_array* modes, System_Action_string__o* selected, const MethodInfo* method);
// 0x1823cb850

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenMode
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_array *modes,
               System_Action_string__o *selected,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Il2CppObject *object;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_Func_string__bool__o *pSVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_String_array *modes_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347d9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_IsLogicBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_OpenMode_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker");
    Il2CppMethodInitialized_184347d9f = '\x01';
  }
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  if (Il2CppMethodInitialized_184347db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347db3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_1823cbbbc;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor =
         (UnityEngine_GameObject_o *)x;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor,x);
    if (modes == (System_String_array *)0x0) {
      modes = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    }
    pSVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__14_0;
    if (pSVar2 == (System_Func_string__bool__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9;
      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)pSVar2,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_OpenMode_b__14_0,
                 (MethodInfo_B61EB0 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__14_0 = pSVar2;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__14_0,pSVar2);
    }
    source = System_Linq_Enumerable__Where_float_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)modes,
                        (System_Func_TSource__bool__o *)pSVar2,
                        (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
    modes_00 = (System_String_array *)
               System_Linq_Enumerable__ToArray_object_
                         (source,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar2,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_BuiltinLevels_IsLogicBuiltin,(MethodInfo_B61EB0 *)0x0);
    bVar1 = System_Linq_Enumerable__Any_object__6b6920
                      ((System_Collections_Generic_IEnumerable_TSource__o *)modes_00,
                       (System_Func_TSource__bool__o *)pSVar2,
                       (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    value = "Custom";
    if (bVar1) {
      value = "Builtin";
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory = value;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_modeCategory,value);
    pGVar3 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModeNodes
                       (root,modes_00,selected,(MethodInfo *)0x0);
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_1823cbbbc:
      ThrowNullReferenceException();
    }
    if ((int)pGVar3->max_length == 1) {
      if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
         (__this = (root->fields)._Overlays_k__BackingField,
         __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_1823cbbbc;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                (__this,"game-create-mode-picker",pGVar3->m_Items[0],(context->fields).GameObject,true,false,10.0,
                 true,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenAddons
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenAddons (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_array* addons, System_Func_int__bool__o* isSelected, System_Action_int__o* toggled, System_Action_o* completed, const MethodInfo* method);
// 0x1823cade0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenAddons
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_array *addons,
               System_Func_int__bool__o *isSelected,System_Action_int__o *toggled,System_Action_o *completed,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  System_String_array *collection;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_Func_string__bool__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347da0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3af0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    Il2CppMethodInitialized_184347da0 = '\x01';
  }
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  if (Il2CppMethodInitialized_184347db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347db3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_1823cb14b;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor =
       (UnityEngine_GameObject_o *)x;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor,x);
  if (addons == (System_String_array *)0x0) {
    addons = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
  }
  collection = Map_BuiltinLevels__GetBuiltinAddons((MethodInfo *)0x0);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176dbf0
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (System_Collections_Generic_IEnumerable_T__o *)collection,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_176DBF0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3af0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  if (__this_00 != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)(__this_00->klass->vtable)._8_Contains.method,(MethodInfo_B61EB0 *)0x0);
    bVar1 = System_Linq_Enumerable__Any_object__6b6920
                      ((System_Collections_Generic_IEnumerable_TSource__o *)addons,
                       (System_Func_TSource__bool__o *)__this_01,
                       (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    value = "Custom";
    if (bVar1) {
      value = "Builtin";
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory = value;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_addonCategory,value);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildAddonNodes
                       (root,addons,__this_00,isSelected,toggled,completed,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
      if ((int)pGVar2->max_length == 1) {
        if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
           (__this = (root->fields)._Overlays_k__BackingField,
           __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_1823cb14b;
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                  (__this,"game-create-addon-picker",pGVar2->m_Items[0],(context->fields).GameObject,true,false,
                   10.0,true,0,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1823cb14b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildModeNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModeNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_array* modes, System_Action_string__o* selected, const MethodInfo* method);
// 0x1823ca3a0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModeNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_array *modes,
          System_Action_string__o *selected,MethodInfo *method)

{
  Il2CppObject *object;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  bool hasBuiltin;
  bool hasCustom;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o *object_00;
  System_Func_string__bool__o *pSVar1;
  System_String_array *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  
  if (Il2CppMethodInitialized_184347da1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Map_BuiltinLevels_IsLogicBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker");
    Il2CppMethodInitialized_184347da1 = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if (object_00 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass16_0_o *)0x0) {
    (object_00->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).root,root);
    (object_00->fields).modes = modes;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).modes,modes);
    (object_00->fields).selected = selected;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).selected,selected);
    pSVar2 = (object_00->fields).modes;
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar1,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Map_BuiltinLevels_IsLogicBuiltin,(MethodInfo_B61EB0 *)0x0);
    hasBuiltin = System_Linq_Enumerable__Any_object__6b6920
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                            (System_Func_TSource__bool__o *)pSVar1,
                            (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    pSVar2 = (object_00->fields).modes;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    }
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__16_0;
    if (pSVar1 == (System_Func_string__bool__o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9;
      pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
      System_Func_object__bool____ctor
                ((System_Predicate_object__o *)pSVar1,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildModeNodes_b__16_0,
                 (MethodInfo_B61EB0 *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__16_0 = pSVar1;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__16_0,pSVar1);
    }
    hasCustom = System_Linq_Enumerable__Any_object__6b6920
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                           (System_Func_TSource__bool__o *)pSVar1,
                           (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PickerCategories
                       (hasBuiltin,hasCustom,(MethodInfo *)0x0);
    (object_00->fields).categories = pSVar2;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).categories,pSVar2);
    __this = (object_00->fields).root;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass16_0_BuildModeNodes_b__1
               ,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"game-create-mode-picker",(System_Action_AottgUi__o *)__this_00,
                          "game-create-mode-picker",(MethodInfo *)0x0);
      return pGVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildModePicker
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPicker_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModePicker (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, System_String_o* suffix, System_Action_string__o* selected, const MethodInfo* method);
// 0x1823ca600

Gisketch_Aottg2UI_Code_GisketchGridPicker_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildModePicker
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items
          ,System_String_o *suffix,System_Action_string__o *selected,MethodInfo *method)

{
  System_String_o *key;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o *object;
  System_String_o *id;
  System_String_o *pSVar1;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *__this;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *pGVar2;
  
  if (Il2CppMethodInitialized_184347da2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0_BuildModePicker_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Search modes");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-mode-picker-");
    il2cpp_codegen_initialize_runtime_metadata(&"-list");
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Picker.Mode.Search");
    Il2CppMethodInitialized_184347da2 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass17_0_o *)0x0) {
    (object->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
    (object->fields).selected = selected;
    Il2CppCodeGenWriteBarrier(&(object->fields).selected,selected);
    id = System_String__Concat_1969b70("game-create-mode-picker-",suffix,"-list",(MethodInfo *)0x0);
    key = "GameCreate.Picker.Mode.Search";
    pSVar1 = "Search modes";
    if (Il2CppMethodInitialized_184347dc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_184347dc8 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(key,pSVar1,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_GisketchGridPickerItem);
    System_Action_GisketchActionContext__GisketchGridPickerItem____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass17_0_BuildModePicker_b__0
               ,(MethodInfo_1468040 *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildListPicker
                       (id,items,pSVar1,__this,(MethodInfo *)0x0);
    return pGVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildAddonNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildAddonNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_array* addons, System_Collections_Generic_HashSet_string__o* builtin, System_Func_int__bool__o* isSelected, System_Action_int__o* toggled, System_Action_o* completed, const MethodInfo* method);
// 0x1823c9d40

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildAddonNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_array *addons,
          System_Collections_Generic_HashSet_string__o *builtin,System_Func_int__bool__o *isSelected,
          System_Action_int__o *toggled,System_Action_o *completed,MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  bool hasBuiltin;
  bool hasCustom;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *object;
  System_Func_string__bool__o *pSVar1;
  System_String_array *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  
  if (Il2CppMethodInitialized_184347da3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_g__HasBuiltin_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-addon-picker");
    Il2CppMethodInitialized_184347da3 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass18_0_o *)0x0) {
    (object->fields).builtin = builtin;
    Il2CppCodeGenWriteBarrier(&(object->fields).builtin,builtin);
    (object->fields).completed = completed;
    Il2CppCodeGenWriteBarrier(&(object->fields).completed,completed);
    (object->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
    (object->fields).addons = addons;
    Il2CppCodeGenWriteBarrier(&(object->fields).addons,addons);
    (object->fields).isSelected = isSelected;
    Il2CppCodeGenWriteBarrier(&(object->fields).isSelected,isSelected);
    (object->fields).toggled = toggled;
    Il2CppCodeGenWriteBarrier(&(object->fields).toggled,toggled);
    pSVar2 = (object->fields).addons;
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar1,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_g__HasBuiltin_0
               ,(MethodInfo_B61EB0 *)0x0);
    hasBuiltin = System_Linq_Enumerable__Any_object__6b6920
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                            (System_Func_TSource__bool__o *)pSVar1,
                            (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    pSVar2 = (object->fields).addons;
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)pSVar1,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__1
               ,(MethodInfo_B61EB0 *)0x0);
    hasCustom = System_Linq_Enumerable__Any_object__6b6920
                          ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                           (System_Func_TSource__bool__o *)pSVar1,
                           (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PickerCategories
                       (hasBuiltin,hasCustom,(MethodInfo *)0x0);
    (object->fields).categories = pSVar2;
    Il2CppCodeGenWriteBarrier(&(object->fields).categories,pSVar2);
    __this = (object->fields).root;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass18_0_BuildAddonNodes_b__2
               ,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"game-create-addon-picker",(System_Action_AottgUi__o *)__this_00,
                          "game-create-addon-picker",(MethodInfo *)0x0);
      return pGVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildListPicker
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPicker_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildListPicker (System_String_o* id, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* items, System_String_o* searchPlaceholder, System_Action_GisketchActionContext__GisketchGridPickerItem__o* selected, const MethodInfo* method);
// 0x1823ca1b0

Gisketch_Aottg2UI_Code_GisketchGridPicker_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildListPicker
          (System_String_o *id,Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items,
          System_String_o *searchPlaceholder,
          System_Action_GisketchActionContext__GisketchGridPickerItem__o *selected,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this;
  
  if (Il2CppMethodInitialized_184347da4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
    Il2CppMethodInitialized_184347da4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPicker);
  Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
            (__this,id,items,1,620.0,48.0,0.0,0.0,searchPlaceholder,selected,500.0,false,true,
             (MethodInfo *)0x0);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildCategoryTabs
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildCategoryTabs (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_array* categories, System_String_o* selected, System_Action_string__o* changed, const MethodInfo* method);
// 0x1823c9f50

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildCategoryTabs
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_array *categories,
               System_String_o *selected,System_Action_string__o *changed,MethodInfo *method)

{
  Il2CppObject *object;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o *object_00;
  System_String_o *id_00;
  System_Func_string__AottgSubtab__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  Gisketch_Aottg2UI_Game_AottgSubtab_array *tabs;
  System_Action_T1__T2__o *__this_00;
  Gisketch_Aottg2UI_Game_AottgSubtabStrip_o *__this_01;
  
  if (Il2CppMethodInitialized_184347da5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_AottgSubtab);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildCategoryTabs_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass20_0_BuildCategoryTabs_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
    il2cpp_codegen_initialize_runtime_metadata(&"-categories");
    Il2CppMethodInitialized_184347da5 = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass20_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if (object_00 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass20_0_o *)0x0) {
    (object_00->fields).changed = changed;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).changed,changed);
    if (categories != (System_String_array *)0x0) {
      if (1 < (int)categories->max_length) {
        id_00 = System_String__Concat_1969e50(id,"-categories",(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
        }
        __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__20_0;
        if (__this == (System_Func_string__AottgSubtab__o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c);
          }
          object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9
          ;
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_AottgSubtab);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c_BuildCategoryTabs_b__20_0,
                     (MethodInfo_16E67D0 *)0x0);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__20_0 = __this;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c->static_fields->__9__20_0,__this
                    );
        }
        source = System_Linq_Enumerable__Select_Vector3__object_
                           ((System_Collections_Generic_IEnumerable_TSource__o *)categories,
                            (System_Func_TSource__TResult__o *)__this,
                            (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_string_AottgSubtab);
        tabs = (Gisketch_Aottg2UI_Game_AottgSubtab_array *)
               System_Linq_Enumerable__ToArray_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_AottgSubtab);
        __this_00 = (System_Action_T1__T2__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext_string);
        System_Action_GisketchActionContext__object____ctor
                  (__this_00,(Il2CppObject *)object_00,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass20_0_BuildCategoryTabs_b__1
                   ,(MethodInfo_1467A10 *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgSubtabStrip)
        ;
        Gisketch_Aottg2UI_Game_AottgSubtabStrip___ctor
                  (__this_01,id_00,tabs,selected,(System_Action_GisketchActionContext__string__o *)__this_00,
                   (MethodInfo *)0x0);
        if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823ca1a4;
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
      }
      return;
    }
  }
label_1823ca1a4:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$PickerCategories
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PickerCategories (bool hasBuiltin, bool hasCustom, const MethodInfo* method);
// 0x1823cbf00
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823cbf74: mov rdx, qword ptr [rip + 0x1d09e4d]  ; "Builtin"
// asm:   0x1823cbf7b: jmp 0x1823cbf8f
// asm:   0x1823cbf88: mov rdx, qword ptr [rip + 0x1cc7a89]  ; "Custom"

System_String_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PickerCategories
          (bool hasBuiltin,bool hasCustom,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  
  if (Il2CppMethodInitialized_184347da6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin");
    Il2CppMethodInitialized_184347da6 = '\x01';
  }
  if (hasCustom && hasBuiltin) {
    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    pSVar2 = "Builtin";
    if (pSVar3 == (System_String_array *)0x0) goto label_1823cbffe;
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = "Builtin";
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar2);
      pSVar2 = "Custom";
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = "Custom";
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar2);
        return pSVar3;
      }
    }
  }
  else {
    pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,1);
    if (hasBuiltin) {
      if (pSVar3 == (System_String_array *)0x0) {
label_1823cbffe:
        ThrowNullReferenceException();
      }
      iVar1 = (int)pSVar3->max_length;
      pSVar2 = "Builtin";
    }
    else {
      if (pSVar3 == (System_String_array *)0x0) goto label_1823cbffe;
      iVar1 = (int)pSVar3->max_length;
      pSVar2 = "Custom";
    }
    if (iVar1 != 0) {
      pSVar3->m_Items[0] = pSVar2;
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar2);
      return pSVar3;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$RefreshPicker
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshPicker (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* id, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, const MethodInfo* method);
// 0x1823cc2e0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshPicker
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *id,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347da7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347da7 = '\x01';
  }
  if (nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_1823cc3e0:
    ThrowNullReferenceException();
  }
  if ((int)nodes->max_length == 1) {
    x = (UnityEngine_Object_o *)
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((int)nodes->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        __this = (root->fields)._Overlays_k__BackingField;
        if (__this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                    (__this,id,nodes->m_Items[0],
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_pickerAnchor,true,
                     false,10.0,false,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_1823cc3e0;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$RefreshMapPicker
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshMapPicker (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, const MethodInfo* method);
// 0x1823cc260

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshMapPicker
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  
  if (Il2CppMethodInitialized_184347da8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    Il2CppMethodInitialized_184347da8 = '\x01';
  }
  if (nodes != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((int)nodes->max_length == 1) {
      if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
         (__this = (root->fields)._Overlays_k__BackingField,
         __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_1823cc2da;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
                (__this,"game-create-map-picker",nodes->m_Items[0],true,true,false,0,(MethodInfo *)0x0);
    }
    return;
  }
label_1823cc2da:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenTitanSpawn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenTitanSpawn (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823cbd50

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenTitanSpawn
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *value;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (Il2CppMethodInitialized_184347da9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347da9 = '\x01';
  }
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  if (Il2CppMethodInitialized_184347db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347db3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_1823cbeec;
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    value = (context->fields).GameObject;
    if (Il2CppMethodInitialized_184347dac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
      il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker");
      Il2CppMethodInitialized_184347dac = '\x01';
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_titanSpawnAnchor = value;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_titanSpawnAnchor,value)
    ;
    pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildTitanSpawnNodes(root,(MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_1823cbeec:
      ThrowNullReferenceException();
    }
    if ((int)pGVar2->max_length == 1) {
      if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
         (__this = (root->fields)._Overlays_k__BackingField,
         __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_1823cbeec;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                (__this,"game-create-titan-spawn-picker",pGVar2->m_Items[0],
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_titanSpawnAnchor,true,
                 false,10.0,true,0,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenTitanSpawnAfterDropdown
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenTitanSpawnAfterDropdown (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* refreshedAnchorId, const MethodInfo* method);
// 0x1823cbbd0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenTitanSpawnAfterDropdown
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *refreshedAnchorId,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *__this_00;
  
  if (Il2CppMethodInitialized_184347daa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347daa = '\x01';
  }
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  if (Il2CppMethodInitialized_184347db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347db3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) goto label_1823cbd42;
    __this = UnityEngine_GameObject__GetComponentInParent_object_
                       ((UnityEngine_GameObject_o *)x,
                        (MethodInfo_6F53B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    __this = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  if (Il2CppMethodInitialized_184347dab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_ShowTitanSpawnNextFrame_d__26);
    Il2CppMethodInitialized_184347dab = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_ShowTitanSpawnNextFrame_d__26);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *)0x0) {
    (__this_00->fields).root = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).root,__this);
    (__this_00->fields).anchor = (UnityEngine_GameObject_o *)x;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).anchor,x);
    (__this_00->fields).refreshedAnchorId = refreshedAnchorId;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).refreshedAnchorId,refreshedAnchorId);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_1823cbd42:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$ShowTitanSpawnNextFrame
// il2cpp: System_Collections_IEnumerator_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame (Gisketch_Aottg2UI_GisketchUIRoot_o* root, UnityEngine_GameObject_o* anchor, System_String_o* refreshedAnchorId, const MethodInfo* method);
// 0x1823cc750

System_Collections_IEnumerator_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,UnityEngine_GameObject_o *anchor,
          System_String_o *refreshedAnchorId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *__this;
  
  if (Il2CppMethodInitialized_184347dab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_ShowTitanSpawnNextFrame_d__26);
    Il2CppMethodInitialized_184347dab = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_ShowTitanSpawnNextFrame_d__26);
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this,0,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawnNextFrame_d__26_o *)0x0) {
    (__this->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(__this->fields).root,root);
    (__this->fields).anchor = anchor;
    Il2CppCodeGenWriteBarrier(&(__this->fields).anchor,anchor);
    (__this->fields).refreshedAnchorId = refreshedAnchorId;
    Il2CppCodeGenWriteBarrier(&(__this->fields).refreshedAnchorId,refreshedAnchorId);
    return (System_Collections_IEnumerator_o *)__this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$ShowTitanSpawn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawn (Gisketch_Aottg2UI_GisketchUIRoot_o* root, UnityEngine_GameObject_o* anchor, const MethodInfo* method);
// 0x1823cc7f0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowTitanSpawn
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,UnityEngine_GameObject_o *anchor,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_184347dac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker");
    Il2CppMethodInitialized_184347dac = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_titanSpawnAnchor = anchor;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_titanSpawnAnchor,anchor);
  pGVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildTitanSpawnNodes(root,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((int)pGVar1->max_length == 1) {
      if ((root == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
         (__this = (root->fields)._Overlays_k__BackingField,
         __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_1823cc8ce;
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                (__this,"game-create-titan-spawn-picker",pGVar1->m_Items[0],
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_titanSpawnAnchor,true,
                 false,10.0,true,0,(MethodInfo *)0x0);
    }
    return;
  }
label_1823cc8ce:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildTitanSpawnNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildTitanSpawnNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823ca780
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823ca9cb: mov rdx, qword ptr [rip + 0x1d3354e]  ; "titan.TitanSpawnPunk"
// asm:   0x1823ca9d2: jmp 0x1823caa8f
// asm:   0x1823caa88: mov rdx, qword ptr [rip + 0x1d18159]  ; "Punk"

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildTitanSpawnNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *object;
  System_String_array *value;
  System_Single_array *value_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  
  if (Il2CppMethodInitialized_184347dad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker");
    il2cpp_codegen_initialize_runtime_metadata(&"Normal");
    il2cpp_codegen_initialize_runtime_metadata(&"Punk");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnJumper");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"Thrower");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnAbnormal");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnPunk");
    il2cpp_codegen_initialize_runtime_metadata(&"Jumper");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnNormal");
    il2cpp_codegen_initialize_runtime_metadata(&"Crawler");
    il2cpp_codegen_initialize_runtime_metadata(&"Abnormal");
    il2cpp_codegen_initialize_runtime_metadata(&"titan.TitanSpawnThrower");
    Il2CppMethodInitialized_184347dad = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass28_0_o *)0x0) {
    (object->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (Il2CppMethodInitialized_184347df0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      Il2CppMethodInitialized_184347df0 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    if (TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_showSandboxVariableNames ==
        false) {
      value = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
      pSVar2 = "Normal";
      if (value == (System_String_array *)0x0) goto label_1823cab36;
      if ((int)value->max_length == 0) goto label_1823cab3c;
      value->m_Items[0] = "Normal";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar2);
      pSVar2 = "Abnormal";
      if ((uint)value->max_length < 2) goto label_1823cab3c;
      value->m_Items[1] = "Abnormal";
      Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar2);
      pSVar2 = "Jumper";
      if ((uint)value->max_length < 3) goto label_1823cab3c;
      value->m_Items[2] = "Jumper";
      Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar2);
      pSVar2 = "Crawler";
      if ((uint)value->max_length < 4) goto label_1823cab3c;
      value->m_Items[3] = "Crawler";
      Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar2);
      pSVar2 = "Thrower";
      if ((uint)value->max_length < 5) goto label_1823cab3c;
      value->m_Items[4] = "Thrower";
      Il2CppCodeGenWriteBarrier(value->m_Items + 4,pSVar2);
      uVar1 = (uint)value->max_length;
      pSVar2 = "Punk";
    }
    else {
      value = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
      pSVar2 = "titan.TitanSpawnNormal";
      if (value == (System_String_array *)0x0) goto label_1823cab36;
      if ((int)value->max_length == 0) goto label_1823cab3c;
      value->m_Items[0] = "titan.TitanSpawnNormal";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar2);
      pSVar2 = "titan.TitanSpawnAbnormal";
      if ((uint)value->max_length < 2) goto label_1823cab3c;
      value->m_Items[1] = "titan.TitanSpawnAbnormal";
      Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar2);
      pSVar2 = "titan.TitanSpawnJumper";
      if ((uint)value->max_length < 3) goto label_1823cab3c;
      value->m_Items[2] = "titan.TitanSpawnJumper";
      Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar2);
      pSVar2 = "titan.TitanSpawnCrawler";
      if ((uint)value->max_length < 4) goto label_1823cab3c;
      value->m_Items[3] = "titan.TitanSpawnCrawler";
      Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar2);
      pSVar2 = "titan.TitanSpawnThrower";
      if ((uint)value->max_length < 5) goto label_1823cab3c;
      value->m_Items[4] = "titan.TitanSpawnThrower";
      Il2CppCodeGenWriteBarrier(value->m_Items + 4,pSVar2);
      uVar1 = (uint)value->max_length;
      pSVar2 = "titan.TitanSpawnPunk";
    }
    if (uVar1 < 6) {
label_1823cab3c:
      ThrowIndexOutOfRangeException();
    }
    value->m_Items[5] = pSVar2;
    Il2CppCodeGenWriteBarrier(value->m_Items + 5,pSVar2);
    (object->fields).labels = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).labels,value);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    value_00 = Gisketch_Aottg2UI_Game_AottgGameCreateSession__TitanSpawnProbabilities((MethodInfo *)0x0);
    (object->fields).values = value_00;
    Il2CppCodeGenWriteBarrier(&(object->fields).values,value_00);
    __this = (object->fields).root;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass28_0_BuildTitanSpawnNodes_b__0
               ,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"game-create-titan-spawn-picker",(System_Action_AottgUi__o *)__this_00,
                          "game-create-titan-spawn-picker",(MethodInfo *)0x0);
      return pGVar3;
    }
  }
label_1823cab36:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$RefreshTitanSpawn
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshTitanSpawn (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x1823cc3f0

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__RefreshTitanSpawn
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (Il2CppMethodInitialized_184347dae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-titan-spawn-picker");
    Il2CppMethodInitialized_184347dae = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildTitanSpawnNodes(root,(MethodInfo *)0x0);
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
label_1823cc4fd:
    ThrowNullReferenceException();
  }
  if ((int)pGVar2->max_length == 1) {
    x = (UnityEngine_Object_o *)
        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_titanSpawnAnchor;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
        if ((int)pGVar2->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        __this = (root->fields)._Overlays_k__BackingField;
        if (__this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicPopover
                    (__this,"game-create-titan-spawn-picker",pGVar2->m_Items[0],
                     TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_titanSpawnAnchor,
                     true,false,10.0,false,0,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_1823cc4fd;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$BuildMapNodes
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildMapNodes (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_Collections_Generic_HashSet_string__o* allowed, System_String_array* categories, bool showCategories, System_Action_string__o* selected, const MethodInfo* method);
// 0x1823ca270

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__BuildMapNodes
          (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_Collections_Generic_HashSet_string__o *allowed,
          System_String_array *categories,bool showCategories,System_Action_string__o *selected,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  
  if (Il2CppMethodInitialized_184347daf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-map-picker");
    Il2CppMethodInitialized_184347daf = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass30_0_o *)0x0) {
    (object->fields).showCategories = showCategories;
    (object->fields).categories = categories;
    Il2CppCodeGenWriteBarrier(&(object->fields).categories,categories);
    (object->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
    (object->fields).allowed = allowed;
    Il2CppCodeGenWriteBarrier(&(object->fields).allowed,allowed);
    (object->fields).selected = selected;
    Il2CppCodeGenWriteBarrier(&(object->fields).selected,selected);
    __this = (object->fields).root;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass30_0_BuildMapNodes_b__0,
               (MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (__this,"game-create-map-picker",(System_Action_AottgUi__o *)__this_00,
                          "game-create-map-picker",(MethodInfo *)0x0);
      return pGVar1;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$MapCategories
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__MapCategories (System_Collections_Generic_HashSet_string__o* allowed, const MethodInfo* method);
// 0x1823cacc0

System_String_array *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__MapCategories
          (System_Collections_Generic_HashSet_string__o *allowed,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o *object;
  System_String_array *pSVar1;
  System_Func_string__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  
  if (Il2CppMethodInitialized_184347db0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0_MapCategories_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0);
    Il2CppMethodInitialized_184347db0 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass31_0_o *)0x0) {
    (object->fields).allowed = allowed;
    Il2CppCodeGenWriteBarrier(&(object->fields).allowed,allowed);
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    pSVar1 = Map_BuiltinLevels__GetMapCategories((MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass31_0_MapCategories_b__0,
               (MethodInfo_B61EB0 *)0x0);
    source = System_Linq_Enumerable__Where_float_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                        (System_Func_TSource__bool__o *)__this,
                        (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
    pSVar1 = (System_String_array *)
             System_Linq_Enumerable__ToArray_object_
                       (source,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$CategoryFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__CategoryFor (System_String_o* mapName, System_String_array* categories, const MethodInfo* method);
// 0x1823cab50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823cabbd: nop dword ptr [rax]
// asm:   0x1823cac73: mov rax, rsi
// asm:   0x1823caca4: mov rax, qword ptr [rip + 0x1ca3195]  ; "General"
// asm:   0x1823cacab: jmp 0x1823cac76

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__CategoryFor
          (System_String_o *mapName,System_String_array *categories,MethodInfo *method)

{
  bool bVar1;
  System_String_array *source;
  System_String_o *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347db1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_BuiltinLevels);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Contains_string_4070458);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_184347db1 = '\x01';
  }
  if (categories == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  for (uVar3 = 0; (int)uVar3 < (int)categories->max_length; uVar3 = uVar3 + 1) {
    if ((uint)categories->max_length <= uVar3) goto label_1823cacb3;
    pSVar2 = categories->m_Items[(int)uVar3];
    if ((TypeInfo_Map_BuiltinLevels->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_BuiltinLevels);
    }
    source = Map_BuiltinLevels__GetMapNames(pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    if (Il2CppMethodInitialized_184341f37 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
      Il2CppMethodInitialized_184341f37 = '\x01';
    }
    if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    }
    bVar1 = System_Linq_Enumerable__Contains_object__6ba340
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,(Il2CppObject *)mapName,
                       (System_Collections_Generic_IEqualityComparer_TSource__o *)
                       TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                       (MethodInfo_6BA340 *)MethodInfo_System_Linq_Enumerable_Contains_string_4070458);
    if (bVar1) {
      return pSVar2;
    }
  }
  pSVar2 = "General";
  if (categories->max_length != 0) {
    if ((int)categories->max_length == 0) {
label_1823cacb3:
      ThrowIndexOutOfRangeException();
    }
    pSVar2 = categories->m_Items[0];
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$PreviewSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PreviewSprite (System_String_o* mapName, const MethodInfo* method);
// 0x1823cc010

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__PreviewSprite(System_String_o *mapName,MethodInfo *method)

{
  System_String_o *path;
  bool bVar1;
  int32_t iVar2;
  System_String_o *resourcePath;
  System_String_o *name;
  UnityEngine_Texture2D_o *pUVar3;
  UnityEngine_Sprite_o *sprite;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Sprite_o *local_res8;
  UnityEngine_Rect_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184347db2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"/Previews/");
    il2cpp_codegen_initialize_runtime_metadata(&"Previews/");
    Il2CppMethodInitialized_184347db2 = '\x01';
  }
  local_res8 = (UnityEngine_Sprite_o *)0x0;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  resourcePath = System_String__Concat_1969590
                           (TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps,"/Previews/",
                            mapName,"Preview",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
  }
  bVar1 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__TryGetCached
                    (resourcePath,&local_res8,(MethodInfo *)0x0);
  if (bVar1) {
    return resourcePath;
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  path = TypeInfo_Utility_ResourcePaths->static_fields->BuiltinMaps;
  name = System_String__Concat_1969b70("Previews/",mapName,"Preview",(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar3 = (UnityEngine_Texture2D_o *)
           ApplicationManagers_ResourceManager__LoadAsset(path,name,false,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Texture2D_o *)0x0) {
    texture = (UnityEngine_Texture2D_o *)0x0;
    if (pUVar3->klass == TypeInfo_UnityEngine_Texture2D) {
      texture = pUVar3;
    }
    if (texture != (UnityEngine_Texture2D_o *)0x0) {
      iVar2 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                        (texture,(texture->klass->vtable)._5_get_width.method);
      local_28[0].m_XMin = 0.0;
      local_28[0].m_YMin = 0.0;
      local_28[0].m_Width = (float)iVar2;
      iVar2 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                        (texture,(texture->klass->vtable)._7_get_height.method);
      local_28[0].m_Height = (float)iVar2;
      sprite = UnityEngine_Sprite__Create_2ed4530
                         (texture,(UnityEngine_Rect_o *)local_28,(UnityEngine_Vector2_o)0x3f0000003f000000,
                          (MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
      }
      Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Store(resourcePath,sprite,(MethodInfo *)0x0);
      return resourcePath;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$Root
// il2cpp: Gisketch_Aottg2UI_GisketchUIRoot_o* Gisketch_Aottg2UI_Game_AottgGameCreatePicker__Root (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823cc510

Gisketch_Aottg2UI_GisketchUIRoot_o *
Gisketch_Aottg2UI_Game_AottgGameCreatePicker__Root
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_184347db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347db3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                         (__this,(MethodInfo_6F53B0 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      return pGVar2;
    }
    ThrowNullReferenceException();
  }
  return (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$OpenCustomContentManager
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenCustomContentManager (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* id, System_String_o* title, System_String_o* description, System_String_array* names, System_Action_o* import, System_Action_string__o* modify, System_Action_string__o* delete, System_Action_o* openFolder, const MethodInfo* method);
// 0x1823cb160

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__OpenCustomContentManager
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *id,
               System_String_o *title,System_String_o *description,System_String_array *names,
               System_Action_o *import,System_Action_string__o *modify,System_Action_string__o *delete,
               System_Action_o *openFolder,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_184347db4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347db4 = '\x01';
  }
  x = (UnityEngine_Object_o *)(context->fields).GameObject;
  if (Il2CppMethodInitialized_184347db3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347db3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     ((UnityEngine_GameObject_o *)x,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker->static_fields->_customContentDeleteMode = false;
    Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowCustomContentManager
              (root,id,title,description,names,import,modify,delete,openFolder,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreatePicker$$ShowCustomContentManager
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowCustomContentManager (Gisketch_Aottg2UI_GisketchUIRoot_o* root, System_String_o* id, System_String_o* title, System_String_o* description, System_String_array* names, System_Action_o* import, System_Action_string__o* modify, System_Action_string__o* delete, System_Action_o* openFolder, const MethodInfo* method);
// 0x1823cc590

void Gisketch_Aottg2UI_Game_AottgGameCreatePicker__ShowCustomContentManager
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,System_String_o *id,System_String_o *title,
               System_String_o *description,System_String_array *names,System_Action_o *import,
               System_Action_string__o *modify,System_Action_string__o *delete,System_Action_o *openFolder,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  System_String_o *ownerId;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (Il2CppMethodInitialized_184347db5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0);
    Il2CppMethodInitialized_184347db5 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0
                     );
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreatePicker___c__DisplayClass36_0_o *)0x0) {
    (object->fields).title = title;
    Il2CppCodeGenWriteBarrier(&(object->fields).title,title);
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    (object->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
    (object->fields).import = import;
    Il2CppCodeGenWriteBarrier(&(object->fields).import,import);
    (object->fields).description = description;
    Il2CppCodeGenWriteBarrier(&(object->fields).description,description);
    (object->fields).names = names;
    Il2CppCodeGenWriteBarrier(&(object->fields).names,names);
    (object->fields).delete = delete;
    Il2CppCodeGenWriteBarrier(&(object->fields).delete,delete);
    (object->fields).modify = modify;
    Il2CppCodeGenWriteBarrier(&(object->fields).modify,modify);
    (object->fields).openFolder = openFolder;
    Il2CppCodeGenWriteBarrier(&(object->fields).openFolder,openFolder);
    pGVar1 = (object->fields).root;
    ownerId = (object->fields).id;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreatePicker_c__DisplayClass36_0_ShowCustomContentManager_b__0
               ,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_GisketchUIRoot__BuildDetachedNodes
                         (pGVar1,ownerId,(System_Action_AottgUi__o *)__this_00,(object->fields).id,
                          (MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        if ((int)pGVar2->max_length == 1) {
          pGVar1 = (object->fields).root;
          if ((pGVar1 == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) ||
             (__this = (pGVar1->fields)._Overlays_k__BackingField,
             __this == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) goto label_1823cc740;
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDynamicDialog
                    (__this,(object->fields).id,pGVar2->m_Items[0],true,true,true,0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
label_1823cc740:
  ThrowNullReferenceException();
}



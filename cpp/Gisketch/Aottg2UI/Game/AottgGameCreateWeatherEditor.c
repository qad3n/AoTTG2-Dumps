// Type: Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgGameCreateWeatherEditor.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___cctor (const MethodInfo* method);
// 0x181defd10

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o *__this;
  
  if (Il2CppMethodInitialized_184344a6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
    Il2CppMethodInitialized_184344a6f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$<Build>b__4_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___Build_b__4_2 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181deba20

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___Build_b__4_2
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_IntSetting_o *__this_00;
  Settings_WeatherSettings_o *pSVar2;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  UnityEngine_GameObject_o *__this_01;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_184344a70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344a70 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  if (Il2CppMethodInitialized_184344b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344b3a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField;
  if (pSVar1 != (Settings_InGameSet_o *)0x0) {
    __this_00 = (pSVar1->fields).WeatherIndex;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    if (Il2CppMethodInitialized_184344a61 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_184344a61 = '\x01';
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if ((((pSVar2 != (Settings_WeatherSettings_o *)0x0) &&
         (pSVar3 = (pSVar2->fields).WeatherSets, pSVar3 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)
         ) && (pSVar4 = (pSVar3->fields).SelectedSetIndex, pSVar4 != (Settings_IntSetting_o *)0x0)) &&
       (__this_00 != (Settings_IntSetting_o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)__this_00,(pSVar4->fields)._value,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      __this_01 = (context->fields).GameObject;
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        root = UnityEngine_GameObject__GetComponentInParent_object_
                         (__this_01,
                          (MethodInfo_6F53B0 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
        Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Refresh(root,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c$$<TryImport>b__13_0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___TryImport_b__13_0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o* __this, SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x181decd30

bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c___TryImport_b__13_0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c_o *__this,
               SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = (*(item->klass->vtable)._12_get_IsNumber.methodPtr)
                    (item,(item->klass->vtable)._12_get_IsNumber.method);
  if (bVar1) {
    fVar2 = (*(item->klass->vtable)._37_get_AsFloat.methodPtr)
                      (item,(item->klass->vtable)._37_get_AsFloat.method);
    if ((uint)ABS(fVar2) < 0x7f800001) {
      fVar2 = (*(item->klass->vtable)._37_get_AsFloat.methodPtr)
                        (item,(item->klass->vtable)._37_get_AsFloat.method);
      return ABS(fVar2) == INFINITY;
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass10_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_1___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass10_1$$<Vector>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_1___Vector_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_1_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x181decfc0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ded03d: movaps xmm1, xmm0
// asm:   0x181ded040: jmp 0x181ded04a
// asm:   0x181ded042: movaps xmm3, xmm0
// asm:   0x181ded045: jmp 0x181ded04a
// asm:   0x181ded047: movaps xmm2, xmm0

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_1___Vector_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_1_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_0_o *pGVar5;
  Settings_Vector3Setting_o *pSVar6;
  Settings_FloatSetting_o *pSVar7;
  Il2CppClass *klass;
  System_IndexOutOfRangeException_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184344a71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    Il2CppMethodInitialized_184344a71 = '\x01';
  }
  pGVar5 = (__this->fields).CS___8__locals1;
  if (((pGVar5 != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_0_o *)0x0) &&
      (pSVar6 = (pGVar5->fields).setting, pSVar6 != (Settings_Vector3Setting_o *)0x0)) &&
     (pSVar7 = (__this->fields).value, pSVar7 != (Settings_FloatSetting_o *)0x0)) {
    fVar1 = (pSVar7->fields)._value;
    iVar4 = (__this->fields).component;
    fVar2 = (pSVar6->fields)._value.fields.x;
    fVar3 = (pSVar6->fields)._value.fields.y;
    local_18.fields.z = (pSVar6->fields)._value.fields.z;
    local_18.fields.x = fVar1;
    local_18.fields.y = fVar3;
    if (((iVar4 != 0) && (local_18.fields.x = fVar2, local_18.fields.y = fVar1, iVar4 != 1)) &&
       (local_18.fields.z = fVar1, local_18.fields.y = fVar3, iVar4 != 2)) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IndexOutOfRangeException);
      __this_00 = (System_IndexOutOfRangeException_o *)il2cpp_codegen_object_new(klass);
      message = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
      System_IndexOutOfRangeException___ctor_1b27db0(__this_00,message,(MethodInfo *)0x0);
      lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_Vector3_set_Item);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    pGVar5 = (__this->fields).CS___8__locals1;
    if ((pGVar5 != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_0_o *)0x0) &&
       (pSVar6 = (pGVar5->fields).setting, pSVar6 != (Settings_Vector3Setting_o *)0x0)) {
      Settings_TypedSetting_Vector3___set_Value
                ((Settings_TypedSetting_Vector3__o *)pSVar6,&local_18,
                 (MethodInfo_E8F4F0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass11_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass11_0$$<Operate>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0___Operate_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x181ded1a0

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0___Operate_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0_o *__this,
               MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_SetNamePopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *name;
  Settings_WeatherSettings_o *pSVar4;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_ListSetting_T__o *pSVar7;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_InGameSet_o *pSVar8;
  Settings_IntSetting_o *pSVar9;
  Settings_WeatherSet_o *pSVar10;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  bool bVar11;
  int32_t iVar12;
  
  if (Il2CppMethodInitialized_184344a72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_WeatherSet_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_CopySelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_SetSettingsContainer_WeatherSet_CreateSet)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_WeatherSet_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    Il2CppMethodInitialized_184344a72 = '\x01';
  }
  pUVar1 = (__this->fields).menu;
  if (((pUVar1 != (UI_BaseMenu_o *)0x0) &&
      (pUVar2 = (pUVar1->fields).SetNamePopup, pUVar2 != (UI_SetNamePopup_o *)0x0)) &&
     (pSVar3 = (pUVar2->fields).NameSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    name = (pSVar3->fields)._value;
    bVar11 = System_String__op_Equality((__this->fields).operation,"Rename",(MethodInfo *)0x0);
    if (bVar11) {
      pSVar10 = (__this->fields).selected;
      if ((pSVar10 != (Settings_WeatherSet_o *)0x0) &&
         (pSVar3 = (pSVar10->fields).Name, pSVar3 != (Settings_StringSetting_o *)0x0)) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)name,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
label_181ded62b:
        root = (__this->fields).root;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
        }
        Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save(root,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
      }
      if (Il2CppMethodInitialized_184344a61 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        Il2CppMethodInitialized_184344a61 = '\x01';
      }
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
      if ((pSVar4 != (Settings_WeatherSettings_o *)0x0) &&
         (pSVar5 = (pSVar4->fields).WeatherSets, pSVar5 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)
         ) {
        pSVar6 = (pSVar5->fields).SelectedSetIndex;
        if (Il2CppMethodInitialized_184344a61 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
          Il2CppMethodInitialized_184344a61 = '\x01';
        }
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
        if ((((pSVar4 != (Settings_WeatherSettings_o *)0x0) &&
             (pSVar5 = (pSVar4->fields).WeatherSets,
             pSVar5 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) &&
            (pSVar7 = (pSVar5->fields).Sets, pSVar7 != (Settings_ListSetting_T__o *)0x0)) &&
           (__this_00 = (System_Collections_Generic_List_object__o *)(pSVar7->fields)._value,
           __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
          iVar12 = System_Collections_Generic_List_object___IndexOf
                             (__this_00,(Il2CppObject *)(__this->fields).selected,
                              (MethodInfo_942EC0 *)
                              MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf);
          if (pSVar6 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar6,iVar12,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            bVar11 = System_String__op_Equality
                               ((__this->fields).operation,"Create",(MethodInfo *)0x0);
            if (bVar11) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
              }
              if (Il2CppMethodInitialized_184344a61 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                Il2CppMethodInitialized_184344a61 = '\x01';
              }
              pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
              if ((pSVar4 == (Settings_WeatherSettings_o *)0x0) ||
                 (pSVar5 = (pSVar4->fields).WeatherSets,
                 pSVar5 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) goto label_181ded65d;
              Settings_SetSettingsContainer_object___CreateSet
                        ((Settings_SetSettingsContainer_T__o *)pSVar5,name,
                         (MethodInfo_C8E8E0 *)MethodInfo_Settings_SetSettingsContainer_WeatherSet_CreateSet);
            }
            else {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
              }
              if (Il2CppMethodInitialized_184344a61 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                Il2CppMethodInitialized_184344a61 = '\x01';
              }
              pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
              if ((pSVar4 == (Settings_WeatherSettings_o *)0x0) ||
                 (pSVar5 = (pSVar4->fields).WeatherSets,
                 pSVar5 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) goto label_181ded65d;
              Settings_SetSettingsContainer_object___CopySelectedSet
                        ((Settings_SetSettingsContainer_T__o *)pSVar5,name,
                         (MethodInfo_C8E740 *)
                         MethodInfo_Settings_SetSettingsContainer_WeatherSet_CopySelectedSet);
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
            }
            if (Il2CppMethodInitialized_184344a61 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
              Il2CppMethodInitialized_184344a61 = '\x01';
            }
            pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
            if ((pSVar4 != (Settings_WeatherSettings_o *)0x0) &&
               (pSVar5 = (pSVar4->fields).WeatherSets,
               pSVar5 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) {
              pSVar6 = (pSVar5->fields).SelectedSetIndex;
              if (Il2CppMethodInitialized_184344a61 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                Il2CppMethodInitialized_184344a61 = '\x01';
              }
              pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
              if (((pSVar4 != (Settings_WeatherSettings_o *)0x0) &&
                  (pSVar5 = (pSVar4->fields).WeatherSets,
                  pSVar5 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) &&
                 (pSVar7 = (pSVar5->fields).Sets, pSVar7 != (Settings_ListSetting_T__o *)0x0)) {
                iVar12 = Settings_ListSetting_object___GetCount
                                   (pSVar7,(MethodInfo_182B100 *)
                                           MethodInfo_Settings_ListSetting_WeatherSet_GetCount);
                if (pSVar6 != (Settings_IntSetting_o *)0x0) {
                  Settings_TypedSetting_int___set_Value
                            ((Settings_TypedSetting_int__o *)pSVar6,iVar12 + -1,
                             (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor
                      == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                  }
                  if (Il2CppMethodInitialized_184344b3a == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                    Il2CppMethodInitialized_184344b3a = '\x01';
                  }
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor
                      == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                  }
                  pSVar8 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                           _Working_k__BackingField;
                  if (pSVar8 != (Settings_InGameSet_o *)0x0) {
                    pSVar6 = (pSVar8->fields).WeatherIndex;
                    if (Il2CppMethodInitialized_184344a61 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                      Il2CppMethodInitialized_184344a61 = '\x01';
                    }
                    pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
                    if (((pSVar4 != (Settings_WeatherSettings_o *)0x0) &&
                        (pSVar5 = (pSVar4->fields).WeatherSets,
                        pSVar5 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) &&
                       ((pSVar9 = (pSVar5->fields).SelectedSetIndex, pSVar9 != (Settings_IntSetting_o *)0x0 &&
                        (pSVar6 != (Settings_IntSetting_o *)0x0)))) {
                      Settings_TypedSetting_int___set_Value
                                ((Settings_TypedSetting_int__o *)pSVar6,(pSVar9->fields)._value,
                                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                      goto label_181ded62b;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_181ded65d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass11_0$$<Operate>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0___Operate_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x181ded670

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0___Operate_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0_o *__this,
               MethodInfo *method)

{
  Settings_WeatherSettings_o *pSVar1;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar2;
  Settings_ListSetting_T__o *pSVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  Settings_InGameSet_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  int32_t index;
  int value;
  
  if (Il2CppMethodInitialized_184344a73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_WeatherSet_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_WeatherSet_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184344a73 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_184344a61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184344a61 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if ((((pSVar1 != (Settings_WeatherSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).WeatherSets, pSVar2 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
      && (pSVar3 = (pSVar2->fields).Sets, pSVar3 != (Settings_ListSetting_T__o *)0x0)) &&
     (pSVar4 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._value,
     pSVar4 != (System_Collections_Generic_List_object__o *)0x0)) {
    index = System_Collections_Generic_List_object___IndexOf
                      (pSVar4,(Il2CppObject *)(__this->fields).selected,
                       (MethodInfo_942EC0 *)MethodInfo_System_Collections_Generic_List_WeatherSet_IndexOf);
    if (index < 0) {
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    if (Il2CppMethodInitialized_184344a61 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      Il2CppMethodInitialized_184344a61 = '\x01';
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
    if (((pSVar1 != (Settings_WeatherSettings_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).WeatherSets, pSVar2 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0))
       && ((pSVar3 = (pSVar2->fields).Sets, pSVar3 != (Settings_ListSetting_T__o *)0x0 &&
           (pSVar4 = (System_Collections_Generic_List_object__o *)(pSVar3->fields)._value,
           pSVar4 != (System_Collections_Generic_List_object__o *)0x0)))) {
      System_Collections_Generic_List_object___RemoveAt
                (pSVar4,index,
                 (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_WeatherSet_RemoveAt);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      if (Il2CppMethodInitialized_184344b3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        Il2CppMethodInitialized_184344b3a = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
      }
      pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->_Working_k__BackingField
      ;
      if ((pSVar5 != (Settings_InGameSet_o *)0x0) &&
         (pSVar6 = (pSVar5->fields).WeatherIndex, pSVar6 != (Settings_IntSetting_o *)0x0)) {
        value = (pSVar6->fields)._value;
        if (Il2CppMethodInitialized_184344b3a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
          Il2CppMethodInitialized_184344b3a = '\x01';
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
        }
        pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                 _Working_k__BackingField;
        if (pSVar5 != (Settings_InGameSet_o *)0x0) {
          pSVar6 = (pSVar5->fields).WeatherIndex;
          if (value == index) {
            value = 0;
          }
          else if (index < value) {
            value = value + -1;
          }
          if (pSVar6 != (Settings_IntSetting_o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      ((Settings_TypedSetting_int__o *)pSVar6,value,
                       (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
            }
            if (Il2CppMethodInitialized_184344a61 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
              Il2CppMethodInitialized_184344a61 = '\x01';
            }
            pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
            if ((pSVar1 != (Settings_WeatherSettings_o *)0x0) &&
               (pSVar2 = (pSVar1->fields).WeatherSets,
               pSVar2 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) {
              pSVar6 = (pSVar2->fields).SelectedSetIndex;
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              if (Il2CppMethodInitialized_184344b3a == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
                Il2CppMethodInitialized_184344b3a = '\x01';
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
              }
              pSVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->static_fields->
                       _Working_k__BackingField;
              if (((pSVar5 != (Settings_InGameSet_o *)0x0) &&
                  (pSVar7 = (pSVar5->fields).WeatherIndex, pSVar7 != (Settings_IntSetting_o *)0x0)) &&
                 (pSVar6 != (Settings_IntSetting_o *)0x0)) {
                Settings_TypedSetting_int___set_Value
                          ((Settings_TypedSetting_int__o *)pSVar6,(pSVar7->fields)._value,
                           (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
                Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save
                          ((__this->fields).root,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass11_0$$<Operate>b__2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0___Operate_b__2 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x181ded9e0

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0___Operate_b__2
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0_o *__this,
               MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  UI_ImportPopup_o *pUVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *text;
  Settings_WeatherSet_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_BoolSetting_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  bool bVar6;
  Settings_WeatherSet_o *local_res8;
  System_String_o *local_res18 [2];
  
  if (Il2CppMethodInitialized_184344a74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184344a74 = '\x01';
  }
  local_res8 = (Settings_WeatherSet_o *)0x0;
  local_res18[0] = (System_String_o *)0x0;
  pUVar1 = (__this->fields).menu;
  if (((pUVar1 != (UI_BaseMenu_o *)0x0) &&
      (pUVar2 = (pUVar1->fields).ImportPopup, pUVar2 != (UI_ImportPopup_o *)0x0)) &&
     (pSVar3 = (pUVar2->fields).ImportSetting, pSVar3 != (Settings_StringSetting_o *)0x0)) {
    text = (pSVar3->fields)._value;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    bVar6 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__TryImport
                      (text,&local_res8,local_res18,(MethodInfo *)0x0);
    if (bVar6) {
      if (((local_res8 != (Settings_WeatherSet_o *)0x0) &&
          (pSVar4 = (__this->fields).selected, pSVar4 != (Settings_WeatherSet_o *)0x0)) &&
         ((pSVar3 = (pSVar4->fields).Name, pSVar3 != (Settings_StringSetting_o *)0x0 &&
          (pSVar5 = (local_res8->fields).Name, pSVar5 != (Settings_StringSetting_o *)0x0)))) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(pSVar3->fields)._value,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        if ((((local_res8 != (Settings_WeatherSet_o *)0x0) &&
             (pSVar4 = (__this->fields).selected, pSVar4 != (Settings_WeatherSet_o *)0x0)) &&
            (pSVar3 = (pSVar4->fields).UniqueId, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
           (pSVar5 = (local_res8->fields).UniqueId, pSVar5 != (Settings_StringSetting_o *)0x0)) {
          Settings_TypedSetting_object___set_Value
                    ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)(pSVar3->fields)._value,
                     (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
          if ((local_res8 != (Settings_WeatherSet_o *)0x0) &&
             (__this_00 = (local_res8->fields).Preset, __this_00 != (Settings_BoolSetting_o *)0x0)) {
            Settings_TypedSetting_bool___set_Value
                      ((Settings_TypedSetting_bool__o *)__this_00,false,
                       (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
            pSVar4 = (__this->fields).selected;
            if (pSVar4 != (Settings_WeatherSet_o *)0x0) {
              (*(pSVar4->klass->vtable)._10_Copy.methodPtr)
                        (pSVar4,(Settings_BaseSetting_o *)local_res8,(pSVar4->klass->vtable)._10_Copy.method);
              pUVar1 = (__this->fields).menu;
              if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
                 (pUVar2 = (pUVar1->fields).ImportPopup, pUVar2 != (UI_ImportPopup_o *)0x0)) {
                (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
                root = (__this->fields).root;
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
                }
                Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save(root,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      pUVar1 = (__this->fields).menu;
      if ((pUVar1 != (UI_BaseMenu_o *)0x0) &&
         (pUVar2 = (pUVar1->fields).ImportPopup, pUVar2 != (UI_ImportPopup_o *)0x0)) {
        UI_ImportPopup__ShowError(pUVar2,local_res18[0],(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass12_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass12_0$$<ImportSchedule>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0___ImportSchedule_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x181dedd80

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0___ImportSchedule_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0_o *__this,
               MethodInfo *method)

{
  UI_ImportPopup_o *pUVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_WeatherSet_o *pSVar3;
  Settings_StringSetting_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  bool bVar4;
  Weather_WeatherSchedule_o *__this_01;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184344a75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    Il2CppMethodInitialized_184344a75 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
  Weather_WeatherSchedule___ctor(__this_01,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).popup;
  if (((pUVar1 != (UI_ImportPopup_o *)0x0) &&
      (pSVar2 = (pUVar1->fields).ImportSetting, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (__this_01 != (Weather_WeatherSchedule_o *)0x0)) {
    value = Weather_WeatherSchedule__DeserializeFromCSV(__this_01,(pSVar2->fields)._value,(MethodInfo *)0x0);
    bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar4) {
      pSVar3 = (__this->fields).selected;
      if (((pSVar3 != (Settings_WeatherSet_o *)0x0) &&
          (pUVar1 = (__this->fields).popup, pUVar1 != (UI_ImportPopup_o *)0x0)) &&
         ((pSVar2 = (pUVar1->fields).ImportSetting, pSVar2 != (Settings_StringSetting_o *)0x0 &&
          (__this_00 = (pSVar3->fields).Schedule, __this_00 != (Settings_StringSetting_o *)0x0)))) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)(pSVar2->fields)._value,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        pUVar1 = (__this->fields).popup;
        if (pUVar1 != (UI_ImportPopup_o *)0x0) {
          (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
          root = (__this->fields).root;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
          }
          Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save(root,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pUVar1 = (__this->fields).popup;
      if (pUVar1 != (UI_ImportPopup_o *)0x0) {
        UI_ImportPopup__ShowError(pUVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass4_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0___Build_b__0 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x181deec10
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181deee0e: nop 
// asm:   0x181deef7b: mov eax, r13d
// asm:   0x181deef7e: jmp 0x181deef96

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0___Build_b__0
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  Il2CppClass *value;
  bool bVar1;
  byte bVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_1_o *object;
  System_String_o *text;
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Settings_SetSettingsContainer_WeatherSet__o *__this_01;
  uint uVar7;
  System_Nullable_bool__Fields local_res20 [4];
  
  if (Il2CppMethodInitialized_184344a76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_CanDeleteSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_1_Build_b__3);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    Il2CppMethodInitialized_184344a76 = '\x01';
  }
  pIVar4 = SZArrayNew(TypeInfo_string_array,7);
  pSVar5 = "Create";
  if (pIVar4 == (Il2CppObject *)0x0) {
label_181def011:
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar4[1].monitor != 0) {
    pIVar4[2].klass = (Il2CppClass *)"Create";
    Il2CppCodeGenWriteBarrier(&pIVar4[2].klass,pSVar5);
    pSVar5 = "Delete";
    if (1 < *(uint *)&pIVar4[1].monitor) {
      pIVar4[2].monitor = "Delete";
      Il2CppCodeGenWriteBarrier(&pIVar4[2].monitor,pSVar5);
      pSVar5 = "Rename";
      if (2 < *(uint *)&pIVar4[1].monitor) {
        pIVar4[3].klass = (Il2CppClass *)"Rename";
        Il2CppCodeGenWriteBarrier(&pIVar4[3].klass,pSVar5);
        pSVar5 = "Copy";
        if (3 < *(uint *)&pIVar4[1].monitor) {
          pIVar4[3].monitor = "Copy";
          Il2CppCodeGenWriteBarrier(&pIVar4[3].monitor,pSVar5);
          pSVar5 = "Import";
          if (4 < *(uint *)&pIVar4[1].monitor) {
            pIVar4[4].klass = (Il2CppClass *)"Import";
            Il2CppCodeGenWriteBarrier(&pIVar4[4].klass,pSVar5);
            pSVar5 = "Export";
            if (5 < *(uint *)&pIVar4[1].monitor) {
              pIVar4[4].monitor = "Export";
              Il2CppCodeGenWriteBarrier(&pIVar4[4].monitor,pSVar5);
              pSVar5 = "Save";
              if (6 < *(uint *)&pIVar4[1].monitor) {
                pIVar4[5].klass = (Il2CppClass *)"Save";
                Il2CppCodeGenWriteBarrier(&pIVar4[5].klass,pSVar5);
                uVar7 = 0;
                while( true ) {
                  if (*(int *)&pIVar4[1].monitor <= (int)uVar7) {
                    return;
                  }
                  if (*(uint *)&pIVar4[1].monitor <= uVar7) break;
                  value = (&pIVar4[2].klass)[(int)uVar7];
                  object = il2cpp_codegen_object_new
                                     ((Il2CppClass *)
                                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_1
                                     );
                  System_Object___ctor
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,
                             (MethodInfo *)0x0);
                  if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_1_o *)
                                0x0) goto label_181def011;
                  (object->fields).CS___8__locals1 = __this;
                  Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,__this);
                  (object->fields).name = (System_String_o *)value;
                  Il2CppCodeGenWriteBarrier(&(object->fields).name,value);
                  pSVar5 = (object->fields).name;
                  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                  }
                  text = UI_UIManager__GetLocaleCommon(pSVar5,(MethodInfo *)0x0);
                  __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                              il2cpp_codegen_object_new
                                        ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
                  System_Action_GisketchActionContext____ctor
                            (__this_00,(Il2CppObject *)object,
                             (intptr_t)
                             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_1_Build_b__3
                             ,(MethodInfo_1387DC0 *)0x0);
                  pSVar5 = (object->fields).name;
                  if (pSVar5 == (System_String_o *)0x0) goto label_181def011;
                  pSVar5 = System_String__ToLowerInvariant(pSVar5,(MethodInfo *)0x0);
                  pSVar5 = System_String__Concat_1969e50("game-create-weather-",pSVar5,(MethodInfo *)0x0);
                  if (actions == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_181def011;
                  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                                     (actions,1,text,(System_Action_GisketchActionContext__o *)__this_00,
                                      pSVar5,(System_String_o *)0x0,
                                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                                      (System_String_o *)0x0,(MethodInfo *)0x0);
                  bVar1 = System_String__op_Equality
                                    ((object->fields).name,"Delete",(MethodInfo *)0x0);
                  if (bVar1) {
                    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
                    }
                    __this_01 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__get_Sets
                                          ((MethodInfo *)0x0);
                    if (__this_01 == (Settings_SetSettingsContainer_WeatherSet__o *)0x0) goto label_181def011;
                    bVar2 = Settings_SetSettingsContainer_object___CanDeleteSelectedSet
                                      ((Settings_SetSettingsContainer_T__o *)__this_01,
                                       (MethodInfo_C8E620 *)
                                       MethodInfo_Settings_SetSettingsContainer_WeatherSet_CanDeleteSelectedSet
                                      );
                  }
                  else {
                    bVar3 = System_String__op_Inequality
                                      ((object->fields).name,"Rename",(MethodInfo *)0x0);
                    bVar1 = false;
                    if (bVar3) {
                      bVar1 = System_String__op_Inequality
                                        ((object->fields).name,"Import",(MethodInfo *)0x0);
                    }
                    bVar2 = (__this->fields).editable | bVar1;
                  }
                  local_res20[0].hasValue = false;
                  local_res20[0].value = false;
                  System_Nullable_bool____ctor
                            ((System_Data_SqlTypes_SqlByte_o *)local_res20,bVar2 != 0,
                             MethodInfo_System_Nullable_bool_ctor);
                  if (pGVar6 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  uVar7 = uVar7 + 1;
                  (pGVar6->fields).enabled.fields = local_res20[0];
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass4_0$$<Build>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0___Build_b__1 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x181def020

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0___Build_b__1
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  DG_Tweening_Core_DOSetter_Color2__o *pDVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  System_Nullable_bool__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_184344a77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_0_Build_b__4);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_0_Build_b__5);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-export-schedule");
    il2cpp_codegen_initialize_runtime_metadata(&"ExportSchedule");
    il2cpp_codegen_initialize_runtime_metadata(&"Export schedule");
    il2cpp_codegen_initialize_runtime_metadata(&"ImportSchedule");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-import-schedule");
    il2cpp_codegen_initialize_runtime_metadata(&"Import schedule");
    Il2CppMethodInitialized_184344a77 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  pSVar1 = "ImportSchedule";
  pSVar2 = "Import schedule";
  if (Il2CppMethodInitialized_184344a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
    Il2CppMethodInitialized_184344a6d = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50("GameCreate.Sandbox.Weather.",pSVar1,(MethodInfo *)0x0);
  pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     (pSVar1,pSVar2,(MethodInfo *)0x0);
  pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__4;
  if (pDVar3 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
    pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (pDVar3,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_0_Build_b__4,
               (MethodInfo_1387DC0 *)0x0);
    (__this->fields).__9__4 = (System_Action_GisketchActionContext__o *)pDVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__4,pDVar3);
  }
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                       (actions,1,pSVar2,(System_Action_GisketchActionContext__o *)pDVar3,
                        "game-create-weather-import-schedule",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    local_res8[0].hasValue = false;
    local_res8[0].value = false;
    System_Nullable_bool____ctor
              ((System_Data_SqlTypes_SqlByte_o *)local_res8,(__this->fields).editable,
               MethodInfo_System_Nullable_bool_ctor);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).enabled.fields = local_res8[0];
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
      }
      pSVar1 = "ExportSchedule";
      pSVar2 = "Export schedule";
      if (Il2CppMethodInitialized_184344a6d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
        Il2CppMethodInitialized_184344a6d = '\x01';
      }
      pSVar1 = System_String__Concat_1969e50("GameCreate.Sandbox.Weather.",pSVar1,(MethodInfo *)0x0);
      pSVar2 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         (pSVar1,pSVar2,(MethodInfo *)0x0);
      pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)(__this->fields).__9__5;
      if (pDVar3 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
        pDVar3 = (DG_Tweening_Core_DOSetter_Color2__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (pDVar3,(Il2CppObject *)__this,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_0_Build_b__5
                   ,(MethodInfo_1387DC0 *)0x0);
        (__this->fields).__9__5 = (System_Action_GisketchActionContext__o *)pDVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__9__5,pDVar3);
      }
      Gisketch_Aottg2UI_Code_AottgUi__Button_18c6fe0
                (actions,1,pSVar2,(System_Action_GisketchActionContext__o *)pDVar3,"game-create-weather-export-schedule",
                 (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass4_0$$<Build>b__4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0___Build_b__4 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181def2d0

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0___Build_b__4
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Settings_WeatherSet_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  UI_BaseMenu_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *value;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0_o *object;
  UI_ImportPopup_o *pUVar5;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_184344a78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_184344a78 = '\x01';
  }
  __this_00 = (context->fields).GameObject;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__GetComponentInParent_object_
                      (__this_00,
                       (MethodInfo_6F53B0 *)
                       MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    pSVar1 = (__this->fields).selected;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    if (Il2CppMethodInitialized_184344a69 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ImportPopup);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass12_0_ImportSchedule_b__0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass12_0);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_184344a69 = '\x01';
    }
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass12_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0_o *)0x0) {
      (object->fields).selected = pSVar1;
      Il2CppCodeGenWriteBarrier(&(object->fields).selected,pSVar1);
      (object->fields).root = value;
      Il2CppCodeGenWriteBarrier(&(object->fields).root,value);
      pSVar1 = (object->fields).selected;
      if ((pSVar1 != (Settings_WeatherSet_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).Preset, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar2->fields)._value != false) {
          return;
        }
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
        if (pUVar3 != (UI_BaseMenu_o *)0x0) {
          pUVar5 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                             ((Il2CppObject *)(pUVar3->fields).ImportPopup,
                              (MethodInfo_68B9A0 *)
                              MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ImportPopup);
          (object->fields).popup = pUVar5;
          Il2CppCodeGenWriteBarrier(&(object->fields).popup,pUVar5);
          pUVar5 = (object->fields).popup;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass12_0_ImportSchedule_b__0
                     ,(MethodInfo *)0x0);
          pSVar1 = (object->fields).selected;
          if (((pSVar1 != (Settings_WeatherSet_o *)0x0) &&
              (pSVar4 = (pSVar1->fields).Schedule, pSVar4 != (Settings_StringSetting_o *)0x0)) &&
             (pUVar5 != (UI_ImportPopup_o *)0x0)) {
            UI_ImportPopup__Show
                      (pUVar5,__this_01,true,"",(pSVar4->fields)._value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass4_0$$<Build>b__5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0___Build_b__5 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x181def4f0

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0___Build_b__5
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  Settings_WeatherSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  UI_ExportPopup_o *__this_00;
  
  if (Il2CppMethodInitialized_184344a79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ExportPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184344a79 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar1 != (UI_BaseMenu_o *)0x0) {
    __this_00 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                          ((Il2CppObject *)(pUVar1->fields).ExportPopup,
                           (MethodInfo_68B9A0 *)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ExportPopup);
    pSVar2 = (__this->fields).selected;
    if (((pSVar2 != (Settings_WeatherSet_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Schedule, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
       (__this_00 != (UI_ExportPopup_o *)0x0)) {
      UI_ExportPopup__Show(__this_00,(pSVar3->fields)._value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass4_1$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_1___ctor (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_1___ctor(Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor.<>c__DisplayClass4_1$$<Build>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_1___Build_b__3 (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_1_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181def5a0

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_1___Build_b__3
               (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_1_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o *pGVar1;
  Settings_WeatherSet_o *selected;
  System_String_o *operation;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  
  if (Il2CppMethodInitialized_184344a7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    Il2CppMethodInitialized_184344a7a = '\x01';
  }
  __this_00 = (context->fields).GameObject;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (__this_00,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    pGVar1 = (__this->fields).CS___8__locals1;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o *)0x0) {
      selected = (pGVar1->fields).selected;
      operation = (__this->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Operate(root,selected,operation,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$get_Sets
// il2cpp: Settings_SetSettingsContainer_WeatherSet__o* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__get_Sets (const MethodInfo* method);
// 0x181ddd2a0

Settings_SetSettingsContainer_WeatherSet__o *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__get_Sets(MethodInfo *method)

{
  Settings_WeatherSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344a61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184344a61 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (pSVar1 != (Settings_WeatherSettings_o *)0x0) {
    return (pSVar1->fields).WeatherSets;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Build (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181dda470

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int length;
  System_Collections_Generic_List_IAottgSettingsStateSync__o *pSVar3;
  Settings_WeatherSettings_o *pSVar4;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  Settings_IntSetting_o *method_00;
  Il2CppObject *object;
  Settings_StringSetting_o *method_01;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o *object_00;
  System_String_o *pSVar7;
  Settings_WeatherSet_o *pSVar8;
  Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_00;
  System_String_array *pSVar9;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *value;
  DG_Tweening_Core_DOSetter_Color2__o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *pGVar10;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar11;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter_o *pGVar14;
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this_02;
  bool bVar15;
  
  if (Il2CppMethodInitialized_184344a62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_Build_b__4_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_0_Build_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_0_Build_b__1);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Utility_Util_EnumToStringArray_WeatherSkybox);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    il2cpp_codegen_initialize_runtime_metadata(&"Wind direction");
    il2cpp_codegen_initialize_runtime_metadata(&"Flashlight");
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Loop schedule");
    il2cpp_codegen_initialize_runtime_metadata(&"FogDensity");
    il2cpp_codegen_initialize_runtime_metadata(&"Rain");
    il2cpp_codegen_initialize_runtime_metadata(&"Daylight");
    il2cpp_codegen_initialize_runtime_metadata(&"DaylightIntensity");
    il2cpp_codegen_initialize_runtime_metadata(&"WindForce");
    il2cpp_codegen_initialize_runtime_metadata(&"Fog color");
    il2cpp_codegen_initialize_runtime_metadata(&"Rain force");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-readonly");
    il2cpp_codegen_initialize_runtime_metadata(&"Daylight intensity");
    il2cpp_codegen_initialize_runtime_metadata(&"Wind");
    il2cpp_codegen_initialize_runtime_metadata(&"Builtin weather presets cannot be modified or deleted. Create or copy a set to customize it.");
    il2cpp_codegen_initialize_runtime_metadata(&"ReadOnly");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"Daylight direction");
    il2cpp_codegen_initialize_runtime_metadata(&"Ambient light");
    il2cpp_codegen_initialize_runtime_metadata(&"Snow force");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-schedule-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Skybox color");
    il2cpp_codegen_initialize_runtime_metadata(&"Wind force");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"Weather set");
    il2cpp_codegen_initialize_runtime_metadata(&"Use schedule");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"WindDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"AmbientLight");
    il2cpp_codegen_initialize_runtime_metadata(&"UseSchedule");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"Snow");
    il2cpp_codegen_initialize_runtime_metadata(&"SkyboxColor");
    il2cpp_codegen_initialize_runtime_metadata(&"Weather presets");
    il2cpp_codegen_initialize_runtime_metadata(&"Fog density");
    il2cpp_codegen_initialize_runtime_metadata(&"FogColor");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Manage weather sets here, then select them in General. Save to keep your changes.");
    il2cpp_codegen_initialize_runtime_metadata(&"DaylightDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"Skybox");
    il2cpp_codegen_initialize_runtime_metadata(&"RainForce");
    il2cpp_codegen_initialize_runtime_metadata(&"ScheduleLoop");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-set");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Description");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-description");
    il2cpp_codegen_initialize_runtime_metadata(&"SnowForce");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Thunder");
    Il2CppMethodInitialized_184344a62 = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  pSVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->Rows;
  if (pSVar3 != (System_Collections_Generic_List_IAottgSettingsStateSync__o *)0x0) {
    length = (pSVar3->fields)._size;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pSVar13 = "Weather presets";
    pSVar7 = "Title";
    if (Il2CppMethodInitialized_184344a6d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
      Il2CppMethodInitialized_184344a6d = '\x01';
    }
    pSVar7 = System_String__Concat_1969e50("GameCreate.Sandbox.Weather.",pSVar7,(MethodInfo *)0x0);
    pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       (pSVar7,pSVar13,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (ui,pSVar7,"header","game-create-weather-title",(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar13 = "Manage weather sets here, then select them in General. Save to keep your changes.";
      pSVar7 = "Description";
      if (Il2CppMethodInitialized_184344a6d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
        Il2CppMethodInitialized_184344a6d = '\x01';
      }
      pSVar7 = System_String__Concat_1969e50("GameCreate.Sandbox.Weather.",pSVar7,(MethodInfo *)0x0);
      pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                         (pSVar7,pSVar13,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (ui,pSVar7,"text","game-create-weather-description",(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184344a61 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
        Il2CppMethodInitialized_184344a61 = '\x01';
      }
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
      if ((pSVar4 != (Settings_WeatherSettings_o *)0x0) &&
         (pSVar5 = (pSVar4->fields).WeatherSets, pSVar5 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)
         ) {
        pSVar8 = (Settings_WeatherSet_o *)
                 Settings_SetSettingsContainer_object___GetSelectedSet
                           ((Settings_SetSettingsContainer_T__o *)pSVar5,
                            (MethodInfo_C8EAF0 *)
                            MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSelectedSet);
        if (object_00 != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass4_0_o *)0x0) {
          if (pSVar8 == (Settings_WeatherSet_o *)0x0) {
            (object_00->fields).selected = (Settings_WeatherSet_o *)0x0;
            pSVar8 = (Settings_WeatherSet_o *)0x0;
          }
          else {
            bVar2 = (TypeInfo_Settings_WeatherSet->_2).typeHierarchyDepth;
            if (((pSVar8->klass->_2).typeHierarchyDepth < bVar2) ||
               ((pSVar8->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_WeatherSet)) {
              il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
            }
            (object_00->fields).selected = pSVar8;
            bVar2 = (TypeInfo_Settings_WeatherSet->_2).typeHierarchyDepth;
            if (((pSVar8->klass->_2).typeHierarchyDepth < bVar2) ||
               ((pSVar8->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_WeatherSet)) {
              il2cpp_codegen_raise_invalid_cast_exception(pSVar8);
            }
          }
          Il2CppCodeGenWriteBarrier(&(object_00->fields).selected,pSVar8);
          pSVar8 = (object_00->fields).selected;
          if ((pSVar8 != (Settings_WeatherSet_o *)0x0) &&
             (pSVar6 = (pSVar8->fields).Preset, pSVar6 != (Settings_BoolSetting_o *)0x0)) {
            bVar15 = Il2CppMethodInitialized_184344a6d == '\0';
            (object_00->fields).editable = (pSVar6->fields)._value == false;
            pSVar13 = "Weather set";
            pSVar7 = "Set";
            if (bVar15) {
              il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
              Il2CppMethodInitialized_184344a6d = '\x01';
            }
            pSVar7 = System_String__Concat_1969e50("GameCreate.Sandbox.Weather.",pSVar7,(MethodInfo *)0x0);
            pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                               (pSVar7,pSVar13,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_184344a61 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
              Il2CppMethodInitialized_184344a61 = '\x01';
            }
            pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
            if ((pSVar4 != (Settings_WeatherSettings_o *)0x0) &&
               (pSVar5 = (pSVar4->fields).WeatherSets,
               pSVar5 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) {
              method_00 = (pSVar5->fields).SelectedSetIndex;
              __this = il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter);
              Gisketch_Aottg2UI_SettingsScreen_AottgIntSettingAdapter___ctor
                        ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,
                         (System_Reflection_MethodInfo_o *)method_00,(MethodInfo *)0x0);
              __this_00 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
              Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
                        (__this_00,"game-create-weather-set",pSVar7,1,
                         (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_184344a61 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                Il2CppMethodInitialized_184344a61 = '\x01';
              }
              pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
              if ((pSVar4 != (Settings_WeatherSettings_o *)0x0) &&
                 (pSVar5 = (pSVar4->fields).WeatherSets,
                 pSVar5 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0)) {
                pSVar9 = Settings_SetSettingsContainer_object___GetSetNames
                                   ((Settings_SetSettingsContainer_T__o *)pSVar5,
                                    (MethodInfo_C8EC20 *)
                                    MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
                value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__IndexedOptions
                                  (pSVar9,(MethodInfo *)0x0);
                if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
                  (__this_00->fields).Options = value;
                  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Options,value);
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
                  }
                  __this_01 = (DG_Tweening_Core_DOSetter_Color2__o *)
                              TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields->
                              __9__4_2;
                  if (__this_01 == (DG_Tweening_Core_DOSetter_Color2__o *)0x0) {
                    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c
                                );
                    }
                    object = (Il2CppObject *)
                             TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields->
                             __9;
                    __this_01 = (DG_Tweening_Core_DOSetter_Color2__o *)
                                il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
                    System_Action_GisketchActionContext____ctor
                              (__this_01,object,
                               (intptr_t)
                               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_Build_b__4_2,
                               (MethodInfo_1387DC0 *)0x0);
                    TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields->__9__4_2 =
                         (System_Action_GisketchActionContext__o *)__this_01;
                    Il2CppCodeGenWriteBarrier
                              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields
                                ->__9__4_2,__this_01);
                  }
                  (__this_00->fields).OnChanged = (System_Action_GisketchActionContext__o *)__this_01;
                  Il2CppCodeGenWriteBarrier(&(__this_00->fields).OnChanged,__this_01);
                  pGVar10 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
                            ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)pGVar10,
                             (System_String_o *)__this_00,(MethodInfo *)0x0);
                  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
                  }
                  pGVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Track_object_
                                      ((Il2CppObject *)pGVar10,
                                       (MethodInfo_68B8C0 *)
                                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgSettingRow
                                      );
                  Gisketch_Aottg2UI_Code_AottgUi__Component
                            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar10,(MethodInfo *)0x0);
                  pUVar11 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
                  System_Action_object____ctor
                            (pUVar11,(Il2CppObject *)object_00,
                             (intptr_t)
                             MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_0_Build_b__0
                             ,(MethodInfo *)0x0);
                  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
                  pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                      ("Row",(System_String_o *)0x0,(System_String_o *)0x0,
                                       (System_String_o *)0x0,"Wrap",12.0,width,
                                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                                       0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
                  Gisketch_Aottg2UI_Code_AottgUi__Panel
                            (ui,"clear",(System_Action_AottgUi__o *)pUVar11,
                             "game-create-weather-actions",pGVar12,
                             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                  if ((object_00->fields).editable == false) {
                    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
                    }
                    pSVar13 = "ReadOnly";
                    pSVar7 = "Builtin weather presets cannot be modified or deleted. Create or copy a set to customize it.";
                    if (Il2CppMethodInitialized_184344a6d == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
                      Il2CppMethodInitialized_184344a6d = '\x01';
                    }
                    pSVar13 = System_String__Concat_1969e50("GameCreate.Sandbox.Weather.",pSVar13,(MethodInfo *)0x0);
                    pSVar7 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                                       (pSVar13,pSVar7,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Code_AottgUi__Callout
                              (ui,2,pSVar7,"game-create-weather-readonly",(MethodInfo *)0x0);
                  }
                  pSVar8 = (object_00->fields).selected;
                  if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                    pSVar6 = (pSVar8->fields).UseSchedule;
                    pGVar14 = il2cpp_codegen_object_new
                                        ((Il2CppClass *)
                                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
                    Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor
                              ((Unity_Burst_BurstCompiler_FakeDelegate_o *)pGVar14,
                               (System_Reflection_MethodInfo_o *)pSVar6,(MethodInfo *)0x0);
                    bVar15 = (object_00->fields).editable;
                    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
                    }
                    pGVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row
                                        ("UseSchedule","Use schedule",0,
                                         (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)pGVar14,
                                         bVar15,(System_String_array *)0x0,(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Code_AottgUi__Component
                              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar10,(MethodInfo *)0x0);
                    pSVar8 = (object_00->fields).selected;
                    if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                      pSVar6 = (pSVar8->fields).ScheduleLoop;
                      pGVar14 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)
                                           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter);
                      Gisketch_Aottg2UI_SettingsScreen_AottgBoolSettingAdapter___ctor
                                ((Unity_Burst_BurstCompiler_FakeDelegate_o *)pGVar14,
                                 (System_Reflection_MethodInfo_o *)pSVar6,(MethodInfo *)0x0);
                      pGVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row
                                          ("ScheduleLoop","Loop schedule",0,
                                           (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)pGVar14,
                                           (object_00->fields).editable,(System_String_array *)0x0,
                                           (MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Code_AottgUi__Component
                                (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar10,(MethodInfo *)0x0);
                      pUVar11 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
                      System_Action_object____ctor
                                (pUVar11,(Il2CppObject *)object_00,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass4_0_Build_b__1
                                 ,(MethodInfo *)0x0);
                      pGVar12 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                          ("Row",(System_String_o *)0x0,(System_String_o *)0x0
                                           ,(System_String_o *)0x0,"Wrap",12.0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                           (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,
                                           0.0,0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Code_AottgUi__Panel
                                (ui,"clear",(System_Action_AottgUi__o *)pUVar11,
                                 "game-create-weather-schedule-actions",pGVar12,
                                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
                      pSVar8 = (object_00->fields).selected;
                      if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                        method_01 = (pSVar8->fields).Skybox;
                        __this_02 = il2cpp_codegen_object_new
                                              ((Il2CppClass *)
                                               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter
                                              );
                        Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor
                                  ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this_02,
                                   (System_Reflection_MethodInfo_o *)method_01,(MethodInfo *)0x0);
                        bVar15 = (object_00->fields).editable;
                        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                        }
                        pSVar9 = Utility_Util__EnumToStringArray___Il2CppFullySharedGenericType_
                                           ((MethodInfo_869FD0 *)
                                            MethodInfo_Utility_Util_EnumToStringArray_WeatherSkybox);
                        pGVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row
                                            ("Skybox","Skybox",1,
                                             (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)
                                             __this_02,bVar15,pSVar9,(MethodInfo *)0x0);
                        Gisketch_Aottg2UI_Code_AottgUi__Component
                                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar10,(MethodInfo *)0x0);
                        pSVar8 = (object_00->fields).selected;
                        if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                          Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
                                    (ui,"SkyboxColor","Skybox color",
                                     (pSVar8->fields).SkyboxColor,(object_00->fields).editable,
                                     (MethodInfo *)0x0);
                          pSVar8 = (object_00->fields).selected;
                          if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                            Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
                                      (ui,"Daylight","Daylight",
                                       (pSVar8->fields).Daylight,(object_00->fields).editable,
                                       (MethodInfo *)0x0);
                            pSVar8 = (object_00->fields).selected;
                            if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                              Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                        (ui,"DaylightIntensity","Daylight intensity",
                                         (pSVar8->fields).DaylightIntensity,(object_00->fields).editable,true,
                                         (MethodInfo *)0x0);
                              pSVar8 = (object_00->fields).selected;
                              if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Vector
                                          (ui,"DaylightDirection","Daylight direction",
                                           (pSVar8->fields).DaylightDirection,(object_00->fields).editable,
                                           (MethodInfo *)0x0);
                                pSVar8 = (object_00->fields).selected;
                                if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
                                            (ui,"AmbientLight","Ambient light",
                                             (pSVar8->fields).AmbientLight,(object_00->fields).editable,
                                             (MethodInfo *)0x0);
                                  pSVar8 = (object_00->fields).selected;
                                  if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                    Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
                                              (ui,"Flashlight","Flashlight",
                                               (pSVar8->fields).Flashlight,(object_00->fields).editable,
                                               (MethodInfo *)0x0);
                                    pSVar8 = (object_00->fields).selected;
                                    if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                      Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
                                                (ui,"FogColor","Fog color",
                                                 (pSVar8->fields).FogColor,(object_00->fields).editable,
                                                 (MethodInfo *)0x0);
                                      pSVar8 = (object_00->fields).selected;
                                      if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                        Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                  (ui,"FogDensity","Fog density",
                                                   (pSVar8->fields).FogDensity,(object_00->fields).editable,
                                                   false,(MethodInfo *)0x0);
                                        pSVar8 = (object_00->fields).selected;
                                        if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                          Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                    (ui,"Rain","Rain",
                                                     (pSVar8->fields).Rain,(object_00->fields).editable,true,
                                                     (MethodInfo *)0x0);
                                          pSVar8 = (object_00->fields).selected;
                                          if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                            Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                      (ui,"Thunder","Thunder",
                                                       (pSVar8->fields).Thunder,(object_00->fields).editable,
                                                       true,(MethodInfo *)0x0);
                                            pSVar8 = (object_00->fields).selected;
                                            if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                              Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                        (ui,"Snow","Snow",
                                                         (pSVar8->fields).Snow,(object_00->fields).editable,
                                                         true,(MethodInfo *)0x0);
                                              pSVar8 = (object_00->fields).selected;
                                              if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                                Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                          (ui,"Wind","Wind",
                                                           (pSVar8->fields).Wind,(object_00->fields).editable,
                                                           true,(MethodInfo *)0x0);
                                                pSVar8 = (object_00->fields).selected;
                                                if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                                  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Vector
                                                            (ui,"WindDirection","Wind direction",
                                                             (pSVar8->fields).WindDirection,
                                                             (object_00->fields).editable,(MethodInfo *)0x0);
                                                  pSVar8 = (object_00->fields).selected;
                                                  if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                                    Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                              (ui,"RainForce","Rain force",
                                                               (pSVar8->fields).RainForce,
                                                               (object_00->fields).editable,false,
                                                               (MethodInfo *)0x0);
                                                    pSVar8 = (object_00->fields).selected;
                                                    if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                                      Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                                (ui,"SnowForce",
                                                                 "Snow force",
                                                                 (pSVar8->fields).SnowForce,
                                                                 (object_00->fields).editable,false,
                                                                 (MethodInfo *)0x0);
                                                      pSVar8 = (object_00->fields).selected;
                                                      if (pSVar8 != (Settings_WeatherSet_o *)0x0) {
                                                                                                                
                                                       Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
                                                                 (ui,"WindForce",
                                                                  "Wind force",
                                                                  (pSVar8->fields).WindForce,
                                                                  (object_00->fields).editable,false,
                                                                  (MethodInfo *)0x0);
                                                       return;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Track<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Track_object_ (Il2CppObject* row, const MethodInfo_68B8C0* method);
// 0x18068b8c0

Il2CppObject *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Track_object_
          (Il2CppObject *row,MethodInfo_68B8C0 *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_18433df6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_Add);
    Il2CppMethodInitialized_18433df6d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_Add;
  __this = (System_Collections_Generic_List_object__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->Rows;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if ((uint)pSVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,row,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return row;
      }
      (__this->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[(int)uVar2] = row;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,row);
        return row;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$SyncState
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x181ddc210
// eh: try 0x181ddc300..0x181ddc3dc -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ddc349: nop dword ptr [rax]
// asm:   0x181ddc3ab: mov rdx, qword ptr [rip + 0x22a60b6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_Dispose
// asm:   0x181ddc3b2: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181ddc3b7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ddc3bc: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181ddc3c1: test rcx, rcx
// asm:   0x181ddc3c4: jne 0x181ddc3dc
// asm:   0x181ddc3dc: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_List_T__o *__this;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Il2CppObject *__this_00;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  ushort uVar6;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344a63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_GetEnumerator);
    Il2CppMethodInitialized_184344a63 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  __this = (System_Collections_Generic_List_T__o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->Rows;
  if (__this == (System_Collections_Generic_List_T__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_40,__this,
             (MethodInfo_91F180 *)
             MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_GetEnumerator);
  local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
  local_28.fields._index = local_40._8_4_;
  local_28.fields._version = local_40._12_4_;
  local_28.fields._current = local_30;
  local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_40._8_8_ = &local_28;
  do {
    bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (&local_28,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_MoveNext)
    ;
    __this_00 = local_28.fields._current;
    if (!bVar4) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_IAottgSettingsStateSync_Dispose);
      return;
    }
    if (local_28.fields._current == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = (local_28.fields._current)->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar6 = 0;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar6].interfaceType ==
            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync) {
          pVVar5 = pIVar2->vtable + pIVar3[uVar6].offset;
          goto label_181ddc372;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar1);
    }
    pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                       (local_28.fields._current,
                        (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_IAottgSettingsStateSync,0);
label_181ddc372:
    (*pVVar5->methodPtr)(__this_00,root,pVVar5->method);
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Row
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row (System_String_o* key, System_String_o* label, int32_t kind, Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o* adapter, bool editable, System_String_array* options, const MethodInfo* method);
// 0x181ddc010

Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row
          (System_String_o *key,System_String_o *label,int32_t kind,
          Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *adapter,bool editable,
          System_String_array *options,MethodInfo *method)

{
  System_String_o *id;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *pGVar2;
  
  if (Il2CppMethodInitialized_184344a64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-");
    Il2CppMethodInitialized_184344a64 = '\x01';
  }
  id = System_String__Concat_1969e50("game-create-weather-",key,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_184344a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
    Il2CppMethodInitialized_184344a6d = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50("GameCreate.Sandbox.Weather.",key,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     (pSVar1,label,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
            (__this,id,pSVar1,kind,adapter,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    (__this->fields).ShowValue = true;
    (__this->fields).Disabled = !editable;
    value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__StringOptions(options,(MethodInfo *)0x0);
    (__this->fields).Options = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Options,value);
    pGVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
              ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)pGVar2,(System_String_o *)__this,
               (MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Track_object_
                       ((Il2CppObject *)pGVar2,
                        (MethodInfo_68B8C0 *)
                        MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgSettingRow);
    return pGVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Float
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, System_String_o* label, Settings_FloatSetting_o* setting, bool editable, bool slider, const MethodInfo* method);
// 0x181ddb630

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Float
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,System_String_o *label,
               Settings_FloatSetting_o *setting,bool editable,bool slider,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *component;
  
  if (Il2CppMethodInitialized_184344a65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    Il2CppMethodInitialized_184344a65 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  component = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Row
                        (key,label,!slider + 3,
                         (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,editable,
                         (System_String_array *)0x0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Color
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, System_String_o* label, Settings_ColorSetting_o* setting, bool editable, const MethodInfo* method);
// 0x181ddb4a0

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Color
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,System_String_o *label,
               Settings_ColorSetting_o *setting,bool editable,MethodInfo *method)

{
  System_String_o *id;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_o *pGVar2;
  
  if (Il2CppMethodInitialized_184344a66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgColorSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-");
    Il2CppMethodInitialized_184344a66 = '\x01';
  }
  id = System_String__Concat_1969e50("game-create-weather-",key,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  if (Il2CppMethodInitialized_184344a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
    Il2CppMethodInitialized_184344a6d = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50("GameCreate.Sandbox.Weather.",key,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     (pSVar1,label,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingAdapter___ctor
            ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this,(System_Reflection_MethodInfo_o *)setting,
             (MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
            (__this_00,id,pSVar1,6,(Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
             (MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    (__this_00->fields).Disabled = !editable;
    pGVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow);
    Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow___ctor
              ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)pGVar2,(System_String_o *)__this_00,
               (MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Track_object_
                       ((Il2CppObject *)pGVar2,
                        (MethodInfo_68B8C0 *)
                        MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgColorSettingRow
                       );
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar2,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Vector
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Vector (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* key, System_String_o* label, Settings_Vector3Setting_o* setting, bool editable, const MethodInfo* method);
// 0x181ddccd0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ddd17a: mov rsi, qword ptr [rsp + 0xb8]
// asm:   0x181ddd182: xor r14d, r14d
// asm:   0x181ddd185: jmp 0x181ddcf00

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Vector
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *key,System_String_o *label,
               Settings_Vector3Setting_o *setting,bool editable,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_0_o *pGVar1;
  Settings_Vector3Setting_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_0_o *__this;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_1_o *object;
  Settings_FloatSetting_o *pSVar5;
  Il2CppObject *pIVar6;
  Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *__this_01;
  DG_Tweening_Core_DOSetter_Color2__o *__this_02;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *pGVar7;
  Il2CppClass *pIVar8;
  System_IndexOutOfRangeException_o *__this_03;
  MethodInfo *lastManagedFrame;
  float defaultValue;
  uint local_res20 [2];
  
  if (Il2CppMethodInitialized_184344a67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass10_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass10_1_Vector_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass10_1);
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"game-create-weather-");
    il2cpp_codegen_initialize_runtime_metadata(&"-label");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    Il2CppMethodInitialized_184344a67 = '\x01';
  }
  local_res20[0] = 0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass10_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_0_o *)0x0) {
    (__this->fields).setting = setting;
    Il2CppCodeGenWriteBarrier(&(__this->fields).setting,setting);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    if (Il2CppMethodInitialized_184344a6d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
      Il2CppMethodInitialized_184344a6d = '\x01';
    }
    pSVar3 = System_String__Concat_1969e50("GameCreate.Sandbox.Weather.",key,(MethodInfo *)0x0);
    pSVar3 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                       (pSVar3,label,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat_1969b70("game-create-weather-",key,"-label",(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (ui,pSVar3,"text",pSVar4,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      local_res20[0] = 0;
      while( true ) {
        object = il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass10_1);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
        if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_1_o *)0x0)
        break;
        (object->fields).CS___8__locals1 = __this;
        Il2CppCodeGenWriteBarrier(&(object->fields).CS___8__locals1,__this);
        pGVar1 = (object->fields).CS___8__locals1;
        (object->fields).component = local_res20[0];
        if ((pGVar1 == (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass10_0_o *)0x0) ||
           (pSVar2 = (pGVar1->fields).setting, pSVar2 == (Settings_Vector3Setting_o *)0x0)) break;
        if (local_res20[0] == 0) {
          defaultValue = (pSVar2->fields)._value.fields.x;
        }
        else if (local_res20[0] == 1) {
          defaultValue = (pSVar2->fields)._value.fields.y;
        }
        else {
          if (local_res20[0] != 2) {
            pIVar8 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_IndexOutOfRangeException);
            __this_03 = (System_IndexOutOfRangeException_o *)il2cpp_codegen_object_new(pIVar8);
            pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Invalid Vector3 index!");
            System_IndexOutOfRangeException___ctor_1b27db0(__this_03,pSVar3,(MethodInfo *)0x0);
            lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_Vector3_get_Item);
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,lastManagedFrame);
          }
          defaultValue = (pSVar2->fields)._value.fields.z;
        }
        pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
        Settings_FloatSetting___ctor_1f12570
                  (pSVar5,defaultValue,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
        (object->fields).value = pSVar5;
        Il2CppCodeGenWriteBarrier(&(object->fields).value,pSVar5);
        pSVar3 = System_Int32__ToString((int32_t *)local_res20,(MethodInfo *)0x0);
        pSVar4 = System_String__Concat_1969590
                           ("game-create-weather-",key,"-",pSVar3,(MethodInfo *)0x0);
        pIVar6 = SZArrayNew(TypeInfo_string_array,3);
        pSVar3 = "X";
        if (pIVar6 == (Il2CppObject *)0x0) break;
        if (*(int *)&pIVar6[1].monitor == 0) {
label_181ddd204:
          ThrowIndexOutOfRangeException();
        }
        pIVar6[2].klass = (Il2CppClass *)"X";
        Il2CppCodeGenWriteBarrier(&pIVar6[2].klass,pSVar3);
        pSVar3 = "Y";
        if (*(uint *)&pIVar6[1].monitor < 2) goto label_181ddd204;
        pIVar6[2].monitor = "Y";
        Il2CppCodeGenWriteBarrier(&pIVar6[2].monitor,pSVar3);
        pSVar3 = "Z";
        if (*(uint *)&pIVar6[1].monitor < 3) goto label_181ddd204;
        pIVar6[3].klass = (Il2CppClass *)"Z";
        Il2CppCodeGenWriteBarrier(&pIVar6[3].klass,pSVar3);
        if (*(uint *)&pIVar6[1].monitor <= local_res20[0]) goto label_181ddd204;
        pIVar8 = (&pIVar6[2].klass)[(int)local_res20[0]];
        pSVar5 = (object->fields).value;
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter);
        Gisketch_Aottg2UI_SettingsScreen_AottgFloatSettingAdapter___ctor
                  ((Unity_Burst_BurstCompiler_FakeDelegate_o *)__this_00,
                   (System_Reflection_MethodInfo_o *)pSVar5,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor
                              );
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor___ctor
                  (__this_01,pSVar4,(System_String_o *)pIVar8,4,
                   (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this_00,(MethodInfo *)0x0);
        if (__this_01 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) break;
        (__this_01->fields).Disabled = !editable;
        __this_02 = (DG_Tweening_Core_DOSetter_Color2__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
        System_Action_GisketchActionContext____ctor
                  (__this_02,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass10_1_Vector_b__0
                   ,(MethodInfo_1387DC0 *)0x0);
        (__this_01->fields).OnChanged = (System_Action_GisketchActionContext__o *)__this_02;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).OnChanged,__this_02);
        pGVar7 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor
                  ((System_Xml_Serialization_XmlTypeConvertorAttribute_o *)pGVar7,(System_String_o *)__this_01
                   ,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
        }
        pGVar7 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Track_object_
                           ((Il2CppObject *)pGVar7,
                            (MethodInfo_68B8C0 *)
                            MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_Track_AottgSettingRow
                           );
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)pGVar7,(MethodInfo *)0x0);
        local_res20[0] = local_res20[0] + 1;
        if (2 < (int)local_res20[0]) {
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Operate
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Operate (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Settings_WeatherSet_o* selected, System_String_o* operation, const MethodInfo* method);
// 0x181ddb8c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ddbade: mov rdx, qword ptr [rip + 0x231ca4b]  ; "Rename"
// asm:   0x181ddbae5: jmp 0x181ddbbdb
// asm:   0x181ddbbd4: mov rdx, qword ptr [rip + 0x22a8465]  ; "Copy"

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Operate
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,Settings_WeatherSet_o *selected,
               System_String_o *operation,MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  Settings_WeatherSet_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root_00;
  Settings_ListSetting_T__o *__this;
  bool bVar5;
  uint32_t uVar6;
  int32_t iVar7;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0_o *object;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  MethodInfo *pMVar9;
  UI_ExportPopup_o *__this_00;
  UI_SetNamePopup_o *__this_01;
  System_String_o *pSVar10;
  UnityEngine_Events_UnityAction_o *pUVar11;
  System_String_o *pSVar12;
  UI_ImportPopup_o *__this_02;
  Settings_SetSettingsContainer_WeatherSet__o *pSVar13;
  UI_ConfirmPopup_o *__this_03;
  
  if (Il2CppMethodInitialized_184344a68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ConfirmPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ExportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ImportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_SetNamePopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_WeatherSet_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass11_0_Operate_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass11_0_Operate_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass11_0_Operate_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"NewSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Create");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"Rename");
    il2cpp_codegen_initialize_runtime_metadata(&"DeleteWarning");
    il2cpp_codegen_initialize_runtime_metadata(&"Import");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Export");
    il2cpp_codegen_initialize_runtime_metadata(&"New set");
    Il2CppMethodInitialized_184344a68 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass11_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass11_0_o *)0x0)
  goto label_181ddbf83;
  (object->fields).operation = operation;
  Il2CppCodeGenWriteBarrier(&(object->fields).operation,operation);
  (object->fields).selected = selected;
  Il2CppCodeGenWriteBarrier(&(object->fields).selected,selected);
  (object->fields).root = root;
  Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  (object->fields).menu = pUVar1;
  Il2CppCodeGenWriteBarrier(&(object->fields).menu,pUVar1);
  pSVar10 = (object->fields).operation;
  uVar6 = _PrivateImplementationDetails___ComputeStringHash(pSVar10,(MethodInfo *)0x0);
  if (uVar6 < 0x5797ea6b) {
    if (uVar6 == 0x4d2d5d68) {
      bVar5 = System_String__op_Equality(pSVar10,"Save",(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      root_00 = (object->fields).root;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
      }
      Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save(root_00,(MethodInfo *)0x0);
      return;
    }
    if (uVar6 == 0x573e0af4) {
      bVar5 = System_String__op_Equality(pSVar10,"Import",(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      pSVar2 = (object->fields).selected;
      if ((pSVar2 != (Settings_WeatherSet_o *)0x0) &&
         (pSVar3 = (pSVar2->fields).Preset, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar3->fields)._value != false) {
          return;
        }
        pUVar1 = (object->fields).menu;
        if (pUVar1 != (UI_BaseMenu_o *)0x0) {
          __this_02 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                                ((Il2CppObject *)(pUVar1->fields).ImportPopup,
                                 (MethodInfo_68B9A0 *)
                                 MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ImportPopup
                                );
          pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass11_0_Operate_b__2
                     ,(MethodInfo *)0x0);
          if (__this_02 != (UI_ImportPopup_o *)0x0) {
            UI_ImportPopup__Show
                      (__this_02,pUVar11,true,"","",(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      if (uVar6 != 0x5797ea6a) {
        return;
      }
      bVar5 = System_String__op_Equality(pSVar10,"Delete",(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      pSVar2 = (object->fields).selected;
      if ((pSVar2 != (Settings_WeatherSet_o *)0x0) &&
         (pSVar3 = (pSVar2->fields).Preset, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar3->fields)._value != false) {
          return;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
        }
        pSVar13 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__get_Sets((MethodInfo *)0x0);
        if ((pSVar13 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0) &&
           (__this = (pSVar13->fields).Sets, __this != (Settings_ListSetting_T__o *)0x0)) {
          iVar7 = Settings_ListSetting_object___GetCount
                            (__this,(MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_WeatherSet_GetCount)
          ;
          if (iVar7 < 2) {
            return;
          }
          pUVar1 = (object->fields).menu;
          if (pUVar1 != (UI_BaseMenu_o *)0x0) {
            __this_03 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                                  ((Il2CppObject *)(pUVar1->fields).ConfirmPopup,
                                   (MethodInfo_68B9A0 *)
                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ConfirmPopup
                                  );
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar10 = UI_UIManager__GetLocaleCommon("DeleteWarning",(MethodInfo *)0x0);
            pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11,(Il2CppObject *)object,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass11_0_Operate_b__1
                       ,(MethodInfo *)0x0);
            pSVar12 = UI_UIManager__GetLocaleCommon("Delete",(MethodInfo *)0x0);
            if (__this_03 != (UI_ConfirmPopup_o *)0x0) {
              UI_ConfirmPopup__Show(__this_03,pSVar10,pUVar11,pSVar12,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    goto label_181ddbf83;
  }
  if (uVar6 < 0x990de47e) {
    pSVar12 = "Copy";
    if (uVar6 == 0x658f3664) goto label_181ddbbdb;
    if (uVar6 != 0x990de47d) {
      return;
    }
    bVar5 = System_String__op_Equality(pSVar10,"Create",(MethodInfo *)0x0);
    if (!bVar5) {
      return;
    }
  }
  else {
    pSVar12 = "Rename";
    if (uVar6 != 0xc80631f3) {
      if (uVar6 != 0xe86349d3) {
        return;
      }
      bVar5 = System_String__op_Equality(pSVar10,"Export",(MethodInfo *)0x0);
      if (!bVar5) {
        return;
      }
      pSVar2 = (object->fields).selected;
      if (pSVar2 != (Settings_WeatherSet_o *)0x0) {
        pSVar8 = (*(pSVar2->klass->vtable)._5_SerializeToJsonObject.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._5_SerializeToJsonObject.method);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pMVar9 = (MethodInfo *)SimpleJSONFixed_JSONNode__op_Implicit_1dc48c0(false,(MethodInfo *)0x0);
        if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          (*(pSVar8->klass->vtable)._8_set_Item.methodPtr)
                    (pSVar8,(System_Type_o *)"Preset",pMVar9);
          pUVar1 = (object->fields).menu;
          if (pUVar1 != (UI_BaseMenu_o *)0x0) {
            __this_00 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                                  ((Il2CppObject *)(pUVar1->fields).ExportPopup,
                                   (MethodInfo_68B9A0 *)
                                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ExportPopup
                                  );
            pSVar10 = (System_String_o *)(*(pSVar8->klass->vtable)._30_ToString.methodPtr)(pSVar8,4);
            if (__this_00 != (UI_ExportPopup_o *)0x0) {
              UI_ExportPopup__Show(__this_00,pSVar10,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto label_181ddbf83;
    }
label_181ddbbdb:
    bVar5 = System_String__op_Equality(pSVar10,pSVar12,(MethodInfo *)0x0);
    if (!bVar5) {
      return;
    }
  }
  bVar5 = System_String__op_Equality((object->fields).operation,"Rename",(MethodInfo *)0x0);
  if (bVar5) {
    pSVar2 = (object->fields).selected;
    if ((pSVar2 == (Settings_WeatherSet_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).Preset, pSVar3 == (Settings_BoolSetting_o *)0x0)) goto label_181ddbf83;
    if ((pSVar3->fields)._value != false) {
      return;
    }
  }
  pUVar1 = (object->fields).menu;
  if (pUVar1 != (UI_BaseMenu_o *)0x0) {
    __this_01 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                          ((Il2CppObject *)(pUVar1->fields).SetNamePopup,
                           (MethodInfo_68B9A0 *)
                           MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_SetNamePopup);
    bVar5 = System_String__op_Equality((object->fields).operation,"Rename",(MethodInfo *)0x0);
    if (bVar5) {
      pSVar2 = (object->fields).selected;
      if ((pSVar2 == (Settings_WeatherSet_o *)0x0) ||
         (pSVar4 = (pSVar2->fields).Name, pSVar4 == (Settings_StringSetting_o *)0x0)) goto label_181ddbf83;
      pSVar10 = (pSVar4->fields)._value;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
      }
      pSVar10 = Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Text
                          ("NewSet","New set",(MethodInfo *)0x0);
    }
    pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar11,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass11_0_Operate_b__0
               ,(MethodInfo *)0x0);
    pSVar12 = (object->fields).operation;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar12 = UI_UIManager__GetLocaleCommon(pSVar12,(MethodInfo *)0x0);
    if (__this_01 != (UI_SetNamePopup_o *)0x0) {
      UI_SetNamePopup__Show(__this_01,pSVar10,pUVar11,pSVar12,(System_String_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_181ddbf83:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$ImportSchedule
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__ImportSchedule (Gisketch_Aottg2UI_GisketchUIRoot_o* root, Settings_WeatherSet_o* selected, const MethodInfo* method);
// 0x181ddb700

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__ImportSchedule
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,Settings_WeatherSet_o *selected,MethodInfo *method)

{
  Settings_WeatherSet_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  UI_BaseMenu_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0_o *object;
  UI_ImportPopup_o *pUVar5;
  UnityEngine_Events_UnityAction_o *__this;
  
  if (Il2CppMethodInitialized_184344a69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ImportPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass12_0_ImportSchedule_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass12_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184344a69 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass12_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___c__DisplayClass12_0_o *)0x0) {
    (object->fields).selected = selected;
    Il2CppCodeGenWriteBarrier(&(object->fields).selected,selected);
    (object->fields).root = root;
    Il2CppCodeGenWriteBarrier(&(object->fields).root,root);
    pSVar1 = (object->fields).selected;
    if ((pSVar1 != (Settings_WeatherSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).Preset, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
      if ((pSVar2->fields)._value != false) {
        return;
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar3 != (UI_BaseMenu_o *)0x0) {
        pUVar5 = Gisketch_Aottg2UI_Game_AottgGisketchUiHost__AboveOverlay_object_
                           ((Il2CppObject *)(pUVar3->fields).ImportPopup,
                            (MethodInfo_68B9A0 *)
                            MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_AboveOverlay_ImportPopup);
        (object->fields).popup = pUVar5;
        Il2CppCodeGenWriteBarrier(&(object->fields).popup,pUVar5);
        pUVar5 = (object->fields).popup;
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this,(Il2CppObject *)object,
                   (intptr_t)
                   MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c__DisplayClass12_0_ImportSchedule_b__0
                   ,(MethodInfo *)0x0);
        pSVar1 = (object->fields).selected;
        if (((pSVar1 != (Settings_WeatherSet_o *)0x0) &&
            (pSVar4 = (pSVar1->fields).Schedule, pSVar4 != (Settings_StringSetting_o *)0x0)) &&
           (pUVar5 != (UI_ImportPopup_o *)0x0)) {
          UI_ImportPopup__Show
                    (pUVar5,__this,true,"",(pSVar4->fields)._value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$TryImport
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__TryImport (System_String_o* text, Settings_WeatherSet_o** imported, System_String_o** error, const MethodInfo* method);
// 0x181ddc450
// eh: try 0x181ddc628..0x181ddccb9 -> pad 0x18333c490 (+4 call sites) catch Il2CppExceptionWrapper
// asm: 112 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ddcafa: lea rcx, [rsp + 0x40]
// asm:   0x181ddcaff: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x181ddcb04: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181ddcb09: test rcx, rcx
// asm:   0x181ddcb0c: jne 0x181ddccb9
// asm:   0x181ddcb12: mov r14, qword ptr [rsp + 0x58]
// asm:   0x181ddcb17: movzx r13d, byte ptr [rsp + 0xc0]
// asm:   0x181ddccb9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320d00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320d05: push rbp
// asm:   0x183320d06: sub rsp, 0x20
// asm:   0x183320d0a: mov rbp, rdx
// asm:   0x183320d0d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183320d11: mov rcx, qword ptr [rax]
// asm:   0x183320d14: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183320d18: movabs rax, 0
// asm:   0x183320d22: add rsp, 0x20
// asm:   0x183320d26: pop rbp
// asm:   0x183320d27: ret 
// asm:   0x18333c490: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c495: push rbx
// asm:   0x18333c496: push rbp
// asm:   0x18333c497: push rsi
// asm:   0x18333c498: push rdi
// asm:   0x18333c499: push r14
// asm:   0x18333c49b: sub rsp, 0x20
// asm:   0x18333c49f: mov rbp, rdx
// asm:   0x18333c4a2: mov rsi, qword ptr [rbp + 0x60]
// asm:   0x18333c4a6: mov rbx, qword ptr [rsi]
// asm:   0x18333c4a9: lea rcx, [rip + 0xd3caa8]  ; TypeInfo_System_Exception
// asm:   0x18333c4b0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333c4b5: test rbx, rbx
// asm:   0x18333c4b8: je 0x18333c59a
// asm:   0x18333c4be: mov r8, qword ptr [rbx]
// asm:   0x18333c4c1: movzx ecx, byte ptr [rax + 0x130]
// asm:   0x18333c4c8: cmp byte ptr [r8 + 0x130], cl
// asm:   0x18333c4cf: jb 0x18333c4ea
// asm:   0x18333c4d1: movzx ecx, cl
// asm:   0x18333c4d4: dec ecx
// asm:   0x18333c4d6: movsxd rdx, ecx
// asm:   0x18333c4d9: mov rcx, qword ptr [r8 + 0xc8]
// asm:   0x18333c4e0: cmp qword ptr [rcx + rdx*8], rax
// asm:   0x18333c4e4: jne 0x18333c4ea
// asm:   0x18333c4e6: mov al, 1
// asm:   0x18333c4e8: jmp 0x18333c4ec
// asm:   0x18333c4ea: xor al, al
// asm:   0x18333c4ec: xor edi, edi
// asm:   0x18333c4ee: test al, al
// asm:   0x18333c4f0: cmovne rdi, rbx
// asm:   0x18333c4f4: test rdi, rdi
// asm:   0x18333c4f7: je 0x18333c59a
// asm:   0x18333c4fd: xor edx, edx
// asm:   0x18333c4ff: mov rcx, rdi
// asm:   0x18333c502: call 0x181b530c0  ; System_Type__GetType()
// asm:   0x18333c507: mov r14, rax
// asm:   0x18333c50a: lea rcx, [rip + 0xd7f16f]  ; TypeRef_System_Exception
// asm:   0x18333c511: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333c516: mov rbx, rax
// asm:   0x18333c519: mov rcx, qword ptr [rip + 0x1018980]
// asm:   0x18333c520: cmp dword ptr [rcx + 0xe4], 0
// asm:   0x18333c527: jne 0x18333c52e
// asm:   0x18333c529: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18333c52e: xor edx, edx
// asm:   0x18333c530: mov rcx, rbx
// asm:   0x18333c533: call 0x181b52e70  ; System_Type__GetTypeFromHandle()
// asm:   0x18333c538: xor r8d, r8d
// asm:   0x18333c53b: mov rdx, rax
// asm:   0x18333c53e: mov rcx, r14
// asm:   0x18333c541: call 0x180841f20  ; SimpleJSONFixed_JSONNode__Equals()
// asm:   0x18333c546: test al, al
// asm:   0x18333c548: jne 0x18333c54e
// asm:   0x18333c54a: xor ecx, ecx
// asm:   0x18333c54c: jmp 0x18333c58c
// asm:   0x18333c54e: mov rax, qword ptr [rdi]
// asm:   0x18333c551: mov rdx, qword ptr [rax + 0x190]
// asm:   0x18333c558: mov rcx, rdi
// asm:   0x18333c55b: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x18333c561: mov rbx, rax
// asm:   0x18333c564: test rax, rax
// asm:   0x18333c567: je 0x18333c595
// asm:   0x18333c569: lea rcx, [rip + 0xd96028]  ; "JSON Parse:"
// asm:   0x18333c570: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333c575: xor r9d, r9d
// asm:   0x18333c578: mov r8d, 4
// asm:   0x18333c57e: mov rdx, rax
// asm:   0x18333c581: mov rcx, rbx
// asm:   0x18333c584: call 0x1819722c0  ; System_String__StartsWith()
// asm:   0x18333c589: movzx ecx, al
// asm:   0x18333c58c: xor eax, eax
// asm:   0x18333c58e: test ecx, ecx
// asm:   0x18333c590: setne al
// asm:   0x18333c593: jmp 0x18333c59c
// asm:   0x18333c595: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x18333c59a: xor eax, eax
// asm:   0x18333c59c: test eax, eax
// asm:   0x18333c59e: setne al
// asm:   0x18333c5a1: test al, al
// asm:   0x18333c5a3: je 0x18333c5b5
// asm:   0x18333c5a5: movabs rax, 0
// asm:   0x18333c5af: jmp 0x18333c5cd
// asm:   0x18333c5b5: mov rax, qword ptr [rsi]
// asm:   0x18333c5b8: mov qword ptr [rbp + 0x68], rax
// asm:   0x18333c5bc: lea rdx, [rip + 0xc9f9c5]
// asm:   0x18333c5c3: lea rcx, [rbp + 0x68]
// asm:   0x18333c5c7: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333c5cd: add rsp, 0x20
// asm:   0x18333c5d1: pop r14
// asm:   0x18333c5d3: pop rdi
// asm:   0x18333c5d4: pop rsi
// asm:   0x18333c5d5: pop rbp
// asm:   0x18333c5d6: pop rbx
// asm:   0x18333c5d7: ret 

bool Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__TryImport
               (System_String_o *text,Settings_WeatherSet_o **imported,System_String_o **error,
               MethodInfo *method)

{
  byte bVar1;
  System_Collections_Specialized_OrderedDictionary_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  Il2CppObject *object;
  Settings_StringSetting_o *pSVar4;
  Settings_BoolSetting_o *__this;
  Il2CppType *handle;
  System_String_o **ppSVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  Settings_WeatherSet_o *__this_00;
  Il2CppObject *pIVar13;
  void *pvVar14;
  MethodInfo *pMVar15;
  System_Xml_Schema_XmlSchema_o *pSVar16;
  longlong *plVar17;
  System_Xml_Schema_XmlSchema_o *pSVar18;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_JSONNode__bool__o *__this_01;
  System_Type_o *enumType;
  Weather_WeatherSchedule_o *__this_02;
  MethodInfo *a;
  SimpleJSONFixed_JSONNode_o *pSVar19;
  byte bVar20;
  uint uVar21;
  uint local_res8 [2];
  Settings_WeatherSet_o **local_res10;
  System_String_o **local_res18;
  uint local_98 [2];
  Il2CppObject *local_90;
  Il2CppObject *local_88;
  undefined8 local_80;
  Il2CppObject **local_78;
  Il2CppObject **local_70;
  Settings_WeatherSet_o *local_68;
  Settings_WeatherSet_o *local_60;
  
  local_res10 = imported;
  local_res18 = error;
  if (Il2CppMethodInitialized_184344a6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BaseSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_WeatherSkybox);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_JSONNode_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONArray);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_TryImport_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSchedule);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Weather_WeatherSkybox);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Weather_WeatherSkybox);
    il2cpp_codegen_initialize_runtime_metadata(&"Invalid weather preset.");
    il2cpp_codegen_initialize_runtime_metadata(&"UniqueId");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"InvalidPreset");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    Il2CppMethodInitialized_184344a6a = '\x01';
  }
  local_98[0] = 0;
  local_90 = (Il2CppObject *)0x0;
  local_88 = (Il2CppObject *)0x0;
  *imported = (Settings_WeatherSet_o *)0x0;
  Il2CppCodeGenWriteBarrier(imported,(void *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
  }
  pSVar10 = "InvalidPreset";
  pSVar11 = "Invalid weather preset.";
  if (Il2CppMethodInitialized_184344a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
    Il2CppMethodInitialized_184344a6d = '\x01';
  }
  pSVar10 = System_String__Concat_1969e50("GameCreate.Sandbox.Weather.",pSVar10,(MethodInfo *)0x0);
  pSVar11 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                      (pSVar10,pSVar11,(MethodInfo *)0x0);
  *error = pSVar11;
  Il2CppCodeGenWriteBarrier(error,pSVar11);
  pSVar12 = SimpleJSONFixed_JSON__Parse(text,(MethodInfo *)0x0);
  if (pSVar12 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar20 = (TypeInfo_SimpleJSONFixed_JSONObject->_2).typeHierarchyDepth;
    if (((pSVar12->klass->_2).typeHierarchyDepth < bVar20) ||
       ((pSVar12->klass->_2).typeHierarchy[(ulonglong)bVar20 - 1] !=
        (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pSVar19 = (SimpleJSONFixed_JSONNode_o *)0x0;
    if (bVar6) {
      pSVar19 = pSVar12;
    }
    if (pSVar19 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSet);
      local_68 = __this_00;
      Settings_WeatherSet___ctor(__this_00,(MethodInfo *)0x0);
      if (((__this_00 == (Settings_WeatherSet_o *)0x0) ||
          (pSVar2 = (__this_00->fields).Settings,
          pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) ||
         (local_60 = __this_00,
         pIVar13 = (Il2CppObject *)
                   System_Collections_Specialized_OrderedDictionary__get_Keys(pSVar2,(MethodInfo *)0x0),
         pIVar13 == (Il2CppObject *)0x0)) {
label_181ddccbf:
        ThrowNullReferenceException();
      }
      bVar20 = 0;
      local_res8[0] = local_res8[0] & 0xffffff00;
      local_90 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,pIVar13);
      local_80 = 0;
      local_78 = &local_90;
      local_70 = &local_88;
      while( true ) {
        if (local_90 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar14 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_90);
        if ((char)pvVar14 == '\0') break;
        if (local_90 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pMVar15 = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_90);
        a = (MethodInfo *)0x0;
        if (pMVar15 != (MethodInfo *)0x0) {
          if (pMVar15->methodPointer == g_data_184354e50) {
            a = pMVar15;
          }
          if (a == (MethodInfo *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pMVar15);
          }
        }
        bVar6 = (*(pSVar19->klass->vtable)._28_HasKey.methodPtr)(pSVar19,a);
        if (bVar6) {
          pSVar2 = (__this_00->fields).Settings;
          if (pSVar2 == (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar13 = System_Collections_Specialized_OrderedDictionary__get_Item
                              (pSVar2,(Il2CppObject *)a,(MethodInfo *)0x0);
          if (pIVar13 != (Il2CppObject *)0x0) {
            bVar1 = (TypeInfo_Settings_BaseSetting->_2).typeHierarchyDepth;
            if (((pIVar13->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pIVar13->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Settings_BaseSetting)) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar13);
            }
          }
          pSVar16 = (*(pSVar19->klass->vtable)._7_get_Item.methodPtr)(pSVar19,a);
          if (pIVar13 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          plVar17 = (longlong *)
                    (*pIVar13->klass->vtable[5].methodPtr)(pIVar13,pIVar13->klass->vtable[5].method);
          if (plVar17 == (longlong *)0x0) {
            ThrowNullReferenceException();
          }
          iVar8 = (**(code **)(*plVar17 + 0x178))(plVar17,*(undefined8 *)(*plVar17 + 0x180));
          if (pSVar16 == (System_Xml_Schema_XmlSchema_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar3 = pSVar16->klass;
          iVar9 = (*(pSVar3->vtable)._4_OnAdd.methodPtr)
                            (pSVar16,(System_Type_o *)(pSVar3->vtable)._4_OnAdd.method,(MethodInfo *)pSVar3);
          if (iVar8 != iVar9) {
            il2cpp_runtime_helper_1806aa210(&local_78);
            return false;
          }
          pMVar15 = (MethodInfo *)*plVar17;
          bVar1 = (TypeInfo_SimpleJSONFixed_JSONArray->_2).typeHierarchyDepth;
          if ((bVar1 <= *(byte *)&pMVar15[3].return_type) &&
             (*(SimpleJSONFixed_JSONArray_c **)(pMVar15[2].name + (ulonglong)bVar1 * 8 + -8) ==
              TypeInfo_SimpleJSONFixed_JSONArray)) {
            pSVar3 = pSVar16->klass;
            bVar20 = (TypeInfo_SimpleJSONFixed_JSONArray->_2).typeHierarchyDepth;
            if (((pSVar3->_2).typeHierarchyDepth < bVar20) ||
               ((pSVar3->_2).typeHierarchy[(ulonglong)bVar20 - 1] !=
                (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONArray)) {
label_181ddc9b5:
              il2cpp_runtime_helper_1806aa210(&local_78);
              return false;
            }
            pSVar18 = (*(pSVar3->vtable)._11_get_NameAttribute.methodPtr)
                                (pSVar16,(pSVar3->vtable)._11_get_NameAttribute.method);
            iVar8 = (**(code **)(*plVar17 + 0x1e8))(plVar17,*(undefined8 *)(*plVar17 + 0x1f0));
            if ((int)pSVar18 != iVar8) goto label_181ddc9b5;
            source = (System_Collections_Generic_IEnumerable_TSource__o *)
                     (*((Il2CppClass *)pSVar16->klass)->vtable[27].methodPtr)
                               (pSVar16,((Il2CppClass *)pSVar16->klass)->vtable[27].method);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
            }
            __this_01 = TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields->
                        __9__13_0;
            if (__this_01 == (System_Func_JSONNode__bool__o *)0x0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c);
              }
              object = (Il2CppObject *)
                       TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields->__9;
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_JSONNode_bool);
              System_Func_object__bool____ctor
                        ((System_Predicate_object__o *)__this_01,object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c_TryImport_b__13_0,
                         (MethodInfo_B61EB0 *)0x0);
              TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields->__9__13_0 =
                   __this_01;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor_c->static_fields->
                          __9__13_0,__this_01);
            }
            pMVar15 = MethodInfo_System_Linq_Enumerable_Any_JSONNode;
            bVar6 = System_Linq_Enumerable__Any_object__6b6920
                              (source,(System_Func_TSource__bool__o *)__this_01,
                               (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_JSONNode);
            if (bVar6) goto label_181ddc9b5;
            bVar20 = (byte)local_res8[0];
          }
          cVar7 = (*(pSVar16->klass->vtable)._12_set_NameAttribute.methodPtr)
                            (pSVar16,(System_Type_o *)(pSVar16->klass->vtable)._12_set_NameAttribute.method,
                             pMVar15);
          if ((cVar7 != '\0') &&
             ((uVar21 = (*(code *)((Il2CppClass *)pSVar16->klass)->vtable[37].methodPtr)
                                  (pSVar16,((Il2CppClass *)pSVar16->klass)->vtable[37].method),
              0x7f800000 < (uVar21 & 0x7fffffff) ||
              (uVar21 = (*(code *)((Il2CppClass *)pSVar16->klass)->vtable[37].methodPtr)
                                  (pSVar16,((Il2CppClass *)pSVar16->klass)->vtable[37].method),
              (uVar21 & 0x7fffffff) == 0x7f800000)))) {
            il2cpp_runtime_helper_1806aa210(&local_78);
            return false;
          }
          (*pIVar13->klass->vtable[6].methodPtr)(pIVar13,pSVar16);
          bVar6 = System_String__op_Inequality((System_String_o *)a,"Name",(MethodInfo *)0x0);
          if ((bVar6) &&
             (bVar6 = System_String__op_Inequality
                                ((System_String_o *)a,"UniqueId",(MethodInfo *)0x0), bVar6)) {
            bVar6 = System_String__op_Inequality((System_String_o *)a,"Preset",(MethodInfo *)0x0)
            ;
            bVar20 = bVar20 | bVar6;
            local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar20);
            __this_00 = local_68;
          }
          else {
            local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar20);
            __this_00 = local_68;
          }
        }
      }
      local_88 = il2cpp_vm_Object_IsInst(local_90,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (local_88 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_88);
      }
      if (bVar20 != 0) {
        pSVar4 = (__this_00->fields).Skybox;
        if (pSVar4 == (Settings_StringSetting_o *)0x0) goto label_181ddccbf;
        pSVar11 = (pSVar4->fields)._value;
        if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e58);
        }
        bVar6 = System_Enum__TryParse_Int32Enum_
                          (pSVar11,(int32_t *)local_98,
                           (MethodInfo_6B1BB0 *)MethodInfo_System_Enum_TryParse_WeatherSkybox);
        handle = TypeRef_Weather_WeatherSkybox;
        if (bVar6) {
          if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354ea0);
          }
          enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
          local_res8[0] = local_98[0];
          pIVar13 = il2cpp_value_box((Il2CppClass *)TypeInfo_Weather_WeatherSkybox,local_res8);
          if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354e58);
          }
          bVar6 = System_Enum__IsDefined(enumType,pIVar13,(MethodInfo *)0x0);
          if (bVar6) {
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Weather_WeatherSchedule);
            Weather_WeatherSchedule___ctor(__this_02,(MethodInfo *)0x0);
            pSVar4 = (__this_00->fields).Schedule;
            if ((pSVar4 != (Settings_StringSetting_o *)0x0) && (__this_02 != (Weather_WeatherSchedule_o *)0x0)
               ) {
              pSVar11 = Weather_WeatherSchedule__DeserializeFromCSV
                                  (__this_02,(pSVar4->fields)._value,(MethodInfo *)0x0);
              ppSVar5 = local_res18;
              *local_res18 = pSVar11;
              Il2CppCodeGenWriteBarrier(local_res18,pSVar11);
              bVar6 = System_String__IsNullOrEmpty(*ppSVar5,(MethodInfo *)0x0);
              if (!bVar6) {
                return false;
              }
              __this = (__this_00->fields).Preset;
              if (__this != (Settings_BoolSetting_o *)0x0) {
                Settings_TypedSetting_bool___set_Value
                          ((Settings_TypedSetting_bool__o *)__this,false,
                           (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
                *local_res10 = __this_00;
                Il2CppCodeGenWriteBarrier(local_res10,__this_00);
                return true;
              }
            }
            goto label_181ddccbf;
          }
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Save
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x181ddc180

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Save
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Settings_WeatherSettings_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344a6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184344a6b = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->WeatherSettings;
  if (pSVar1 != (Settings_WeatherSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    }
    Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Refresh(root,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Refresh (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x181ddbf90

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Refresh
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344a6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    Il2CppMethodInitialized_184344a6c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateSession__RefreshSandboxContent((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateScreen);
  }
  Gisketch_Aottg2UI_Game_AottgGameCreateScreen__Refresh(root,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Text (System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x181ddc3f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor__Text
          (System_String_o *key,System_String_o *fallback,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344a6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GameCreate.Sandbox.Weather.");
    Il2CppMethodInitialized_184344a6d = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50("GameCreate.Sandbox.Weather.",key,(MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Game_AottgGameCreatePicker_AottgGameCreateText__Text
                     (pSVar1,fallback,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgGameCreateWeatherEditor$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___cctor (const MethodInfo* method);
// 0x181ddd210

void Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_IAottgSettingsStateSync__o *__this;
  
  if (Il2CppMethodInitialized_184344a6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_IAottgSettingsStateSync);
    Il2CppMethodInitialized_184344a6e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_IAottgSettingsStateSync);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_IAottgSettingsStateSync_ctor);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->Rows = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateWeatherEditor->static_fields->Rows,__this);
  return;
}



// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSkinSetActions.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$get_CurrentSettings
// il2cpp: Settings_ISetSettingsContainer_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentSettings (const MethodInfo* method);
// 0x18239e6f0

Settings_ISetSettingsContainer_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentSettings(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347b46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    Il2CppMethodInitialized_184347b46 = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$get_CurrentOperation
// il2cpp: int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentOperation (const MethodInfo* method);
// 0x18239e6b0

int32_t Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__get_CurrentOperation(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347b47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    Il2CppMethodInitialized_184347b47 = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_operation;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenCreate
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCreate (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, System_Action_o* afterChange, const MethodInfo* method);
// 0x18239e2f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCreate
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,
               Settings_ISetSettingsContainer_o *settings,System_Action_o *afterChange,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName
            (&local_28,settings,0,afterChange,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenRename
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenRename (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, System_Action_o* afterChange, const MethodInfo* method);
// 0x18239e550

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenRename
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,
               Settings_ISetSettingsContainer_o *settings,System_Action_o *afterChange,MethodInfo *method)

{
  void *pvVar1;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347b48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    Il2CppMethodInitialized_184347b48 = '\x01';
  }
  if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
    pvVar1 = InterfaceInvoker0_Invoke
                       (8,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,(Il2CppObject *)settings);
    if ((char)pvVar1 != '\0') {
      local_28.fields.ElementId = (context->fields).ElementId;
      local_28.fields.GameObject = (context->fields).GameObject;
      local_28.fields.Node = (context->fields).Node;
      local_28.fields.InputSource = (context->fields).InputSource;
      local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
      Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName
                (&local_28,settings,1,afterChange,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenCopy
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCopy (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, System_Action_o* afterChange, const MethodInfo* method);
// 0x18239e2b0

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenCopy
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,
               Settings_ISetSettingsContainer_o *settings,System_Action_o *afterChange,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName
            (&local_28,settings,2,afterChange,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenDelete
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenDelete (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, System_Action_o* afterChange, const MethodInfo* method);
// 0x18239e330

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenDelete
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,
               Settings_ISetSettingsContainer_o *settings,System_Action_o *afterChange,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  void *pvVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_184347b49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-skin-set-delete");
    Il2CppMethodInitialized_184347b49 = '\x01';
  }
  if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
    pvVar1 = InterfaceInvoker0_Invoke
                       (7,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,(Il2CppObject *)settings);
    if ((char)pvVar1 != '\0') {
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings = settings;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings,
                 settings);
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange = afterChange
      ;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange,
                 afterChange);
      __this = (context->fields).GameObject;
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                           (__this,(MethodInfo_6F53B0 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
        if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
           (__this_00 = (pGVar2->fields)._Overlays_k__BackingField,
           __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (__this_00,"setting-skin-set-delete",true,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$SelectedName
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__SelectedName (const MethodInfo* method);
// 0x18239e5f0

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__SelectedName(MethodInfo *method)

{
  Il2CppObject *obj;
  void *pvVar1;
  
  if (Il2CppMethodInitialized_184347b4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184347b4a = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings !=
      (Settings_ISetSettingsContainer_o *)0x0) {
    pvVar1 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,
                        (Il2CppObject *)
                        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->
                        _settings);
    if (pvVar1 != (void *)0x0) {
      obj = (Il2CppObject *)
            TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
      if (obj != (Il2CppObject *)0x0) {
        pvVar1 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,obj);
        if ((pvVar1 != (void *)0x0) && (*(longlong *)((longlong)pvVar1 + 0x30) != 0)) {
          return *(System_String_o **)(*(longlong *)((longlong)pvVar1 + 0x30) + 0x20);
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$ApplyName
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__ApplyName (System_String_o* name, const MethodInfo* method);
// 0x18239ded0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18239dfe0: mov rcx, qword ptr [rip + 0x1d28469]  ; TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions
// asm:   0x18239e0b9: mov rcx, qword ptr [rip + 0x1d28390]  ; TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__ApplyName(System_String_o *name,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  bool bVar3;
  void *pvVar4;
  Settings_TypedSetting_int__o *__this;
  Il2CppObject *pIVar5;
  undefined8 uVar6;
  Settings_ISetSettingsContainer_o *pSVar7;
  
  if (Il2CppMethodInitialized_184347b4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IListSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347b4b = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings ==
      (Settings_ISetSettingsContainer_o *)0x0) {
    return;
  }
  bVar3 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields;
  if (pGVar1->_operation == 0) {
    pSVar7 = pGVar1->_settings;
    if (pSVar7 == (Settings_ISetSettingsContainer_o *)0x0) goto label_18239e12e;
    uVar6 = 4;
  }
  else {
    if (pGVar1->_operation == 1) {
      if ((Il2CppObject *)pGVar1->_settings == (Il2CppObject *)0x0) goto label_18239e12e;
      pvVar4 = InterfaceInvoker0_Invoke
                         (8,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,
                          (Il2CppObject *)pGVar1->_settings);
      if ((char)pvVar4 != '\0') {
        pIVar5 = (Il2CppObject *)
                 TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
        if (((pIVar5 == (Il2CppObject *)0x0) ||
            (pvVar4 = InterfaceInvoker0_Invoke
                                (0,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,pIVar5),
            pvVar4 == (void *)0x0)) ||
           (*(Settings_TypedSetting_T__o **)((longlong)pvVar4 + 0x30) == (Settings_TypedSetting_T__o *)0x0))
        goto label_18239e12e;
        Settings_TypedSetting_object___set_Value
                  (*(Settings_TypedSetting_T__o **)((longlong)pvVar4 + 0x30),(Il2CppObject *)name,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        goto label_18239e0c0;
      }
    }
    if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_operation != 2)
    goto label_18239e0c0;
    pSVar7 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
    if (pSVar7 == (Settings_ISetSettingsContainer_o *)0x0) goto label_18239e12e;
    uVar6 = 5;
  }
  il2cpp_runtime_helper_180014780(uVar6,TypeInfo_Settings_ISetSettingsContainer,pSVar7,name);
  pIVar5 = (Il2CppObject *)
           TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
  if (pIVar5 != (Il2CppObject *)0x0) {
    __this = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,pIVar5);
    pIVar5 = (Il2CppObject *)
             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
    if (((pIVar5 != (Il2CppObject *)0x0) &&
        (pIVar5 = InterfaceInvoker0_Invoke(2,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,pIVar5),
        pIVar5 != (Il2CppObject *)0x0)) &&
       (pvVar4 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_Settings_IListSetting,pIVar5),
       __this != (Settings_TypedSetting_int__o *)0x0)) {
      Settings_TypedSetting_int___set_Value
                (__this,(int)pvVar4 + -1,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
label_18239e0c0:
      if (Il2CppMethodInitialized_184347b4e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions);
        Il2CppMethodInitialized_184347b4e = '\x01';
      }
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange;
      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange =
           (System_Action_o *)0x0;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange,
                 (void *)0x0);
      if (pSVar2 == (System_Action_o *)0x0) {
        return;
      }
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
      return;
    }
  }
label_18239e12e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$DeleteSelected
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__DeleteSelected (const MethodInfo* method);
// 0x18239e140

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__DeleteSelected(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  void *pvVar2;
  Settings_TypedSetting_int__o *__this;
  
  if (Il2CppMethodInitialized_184347b4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ISetSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_184347b4c = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings !=
      (Settings_ISetSettingsContainer_o *)0x0) {
    pvVar2 = InterfaceInvoker0_Invoke
                       (7,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,
                        (Il2CppObject *)
                        TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->
                        _settings);
    if ((char)pvVar2 != '\0') {
      pIVar1 = (Il2CppObject *)
               TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
      if (pIVar1 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(6,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,pIVar1);
        pIVar1 = (Il2CppObject *)
                 TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings;
        if (pIVar1 != (Il2CppObject *)0x0) {
          __this = InterfaceInvoker0_Invoke(1,(Il2CppClass *)TypeInfo_Settings_ISetSettingsContainer,pIVar1);
          if (__this != (Settings_TypedSetting_int__o *)0x0) {
            Settings_TypedSetting_int___set_Value
                      (__this,0,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
            Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__InvokeAfterChange((MethodInfo *)0x0);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$OpenName
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_ISetSettingsContainer_o* settings, int32_t operation, System_Action_o* afterChange, const MethodInfo* method);
// 0x18239e450

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__OpenName
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,
               Settings_ISetSettingsContainer_o *settings,int32_t operation,System_Action_o *afterChange,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347b4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"setting-skin-set-name");
    Il2CppMethodInitialized_184347b4d = '\x01';
  }
  if (settings != (Settings_ISetSettingsContainer_o *)0x0) {
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings = settings;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_settings,
               settings);
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_operation = operation;
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange = afterChange;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange,
               afterChange);
    __this = (context->fields).GameObject;
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                         (__this,(MethodInfo_6F53B0 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
      if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
         (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
         __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (__this_00,"setting-skin-set-name",true,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSkinSetActions$$InvokeAfterChange
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__InvokeAfterChange (const MethodInfo* method);
// 0x18239e230

void Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions__InvokeAfterChange(MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347b4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions)
    ;
    Il2CppMethodInitialized_184347b4e = '\x01';
  }
  pSVar1 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange;
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange =
       (System_Action_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSkinSetActions->static_fields->_afterChange,
             (void *)0x0);
  if (pSVar1 != (System_Action_o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    return;
  }
  return;
}



// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindCaptureDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_Title (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x445d920

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_Title
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae75d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&"Set Keybind");
    g_data_057ae75d = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x10),(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Set Keybind";
  }
  return *(System_String_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x10);
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_BodyScrollable (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x445d990

bool_conflict
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_RootLayout (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x445d9a0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_RootLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057ae75e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057ae75e = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(420.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_BodyLayout (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x445da70

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__get_BodyLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057ae75f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057ae75f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Open
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Settings_KeybindSetting_o* setting, int32_t slot, System_String_o* label, const MethodInfo* method);
// 0x445db30

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,Settings_KeybindSetting_o *setting,
               int32_t slot,System_String_o *label,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Settings_InputKey_array *__this;
  Il2CppArrayBounds *pIVar3;
  undefined1 *puVar4;
  bool_conflict bVar5;
  int iVar6;
  int32_t iVar7;
  Il2CppObject *pIVar8;
  System_String_o *keyStr;
  Settings_InputKey_o *pSVar9;
  int iVar10;
  MethodInfo *method_00;
  System_Collections_Generic_List_InputKey__o *__this_00;
  
  if (g_data_057ae760 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InputKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"setting-keybind-capture");
    g_data_057ae760 = '\x01';
  }
  if (setting != (Settings_KeybindSetting_o *)0x0) {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      Gisketch_Aottg2UI_SettingsScreen_AottgKeybindSettingRow__EnsureSlots(setting,method_00);
      **(undefined8 **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) = setting;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8),setting);
      iVar6 = 1;
      if (slot < 2) {
        iVar6 = slot;
      }
      iVar10 = 0;
      if (-1 < iVar6) {
        iVar10 = iVar6;
      }
      lVar2 = *(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
      *(int *)(lVar2 + 8) = iVar10;
      *(System_String_o **)(lVar2 + 0x10) = label;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x10,label);
      __this_00 = (setting->fields).InputKeys;
      if ((__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) &&
         (pIVar8 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,
                              *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 8),MethodInfo_InputKey_get_Item),
         pIVar8 != (Il2CppObject *)0x0)) {
        keyStr = (System_String_o *)
                 (*pIVar8->klass->vtable[3].methodPtr)(pIVar8,pIVar8->klass->vtable[3].method);
        pSVar9 = (Settings_InputKey_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InputKey);
        Settings_InputKey___ctor_40ffd90(pSVar9,keyStr,(MethodInfo *)0x0);
        lVar2 = *(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
        *(Settings_InputKey_o **)(lVar2 + 0x20) = pSVar9;
        il2cpp_runtime_helper_022b4080(lVar2 + 0x20,pSVar9);
        Gisketch_Aottg2UI_Actions_GisketchInputCapture__ForceEnd((MethodInfo *)0x0);
        __this_00 = (System_Collections_Generic_List_InputKey__o *)0x0;
        iVar7 = Gisketch_Aottg2UI_Actions_GisketchInputCapture__Begin((MethodInfo *)0x0);
        *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = iVar7;
        if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
          pIVar8 = UnityEngine_GameObject__GetComponentInParent_object_
                             (context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
          if (pIVar8 == (Il2CppObject *)0x0) {
            return;
          }
          if (pIVar8[8].monitor == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
            return;
          }
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (pIVar8[8].monitor,"setting-keybind-capture",0,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae76f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_InputKey);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        il2cpp_runtime_helper_023445d0(&"None");
        g_data_057ae76f = '\x01';
      }
      if (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
        __this = (__this_00->fields)._items;
        if (__this == (Settings_InputKey_array *)0x0) {
label_0445de51:
          il2cpp_runtime_helper_022b2c90();
        }
        else {
          iVar6 = (int)__this->max_length;
          while (iVar6 < 2) {
            pSVar9 = (Settings_InputKey_o *)il2cpp_runtime_helper_023052d0(TypeInfo_InputKey);
            Settings_InputKey___ctor_40ffd90(pSVar9,"None",(MethodInfo *)0x0);
            lVar2 = MethodInfo_Void_Add;
            puVar4 = (undefined1 *)((long)&__this->max_length + 4);
            *(int *)puVar4 = *(int *)puVar4 + 1;
            pIVar3 = __this->bounds;
            if (pIVar3 == (Il2CppArrayBounds *)0x0) goto label_0445de51;
            uVar1 = (uint)__this->max_length;
            if (uVar1 < (uint)pIVar3[1].lower_bound) {
              *(uint *)&__this->max_length = uVar1 + 1;
              (&pIVar3[2].length)[(int)uVar1] = (il2cpp_array_size_t)pSVar9;
              il2cpp_runtime_helper_022b4080(&pIVar3[2].length + (int)uVar1,pSVar9);
              __this = (__this_00->fields)._items;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar9,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              __this = (__this_00->fields)._items;
            }
            if (__this == (Settings_InputKey_array *)0x0) goto label_0445de51;
            iVar6 = (int)__this->max_length;
          }
        }
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__BuildBody (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x445de70

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__BuildBody
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  uint index;
  int index_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this_01;
  long lVar2;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_02;
  undefined8 uVar3;
  undefined8 uVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  System_Globalization_CultureInfo_o *provider;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  Il2CppObject *pIVar9;
  System_Action_GisketchActionContext__o *pSVar10;
  System_Action_GisketchActionContext__o *pSVar11;
  Settings_InputKey_o *pSVar12;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_04;
  System_String_o *text;
  long *plVar13;
  undefined1 *puVar14;
  undefined8 unaff_RBP;
  System_Action_GisketchActionContext__o *pSVar15;
  System_Action_GisketchActionContext__o *x;
  int32_t iVar16;
  System_String_o **ppSVar17;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *pSVar18;
  System_String_o *in_R8;
  System_String_o *in_R9;
  MethodInfo *in_stack_ffffffffffffff08;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (g_data_057ae761 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchNodeDefinition);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Current: ");
    il2cpp_runtime_helper_023445d0(&"AottgKeybindCaptureRuntime");
    il2cpp_runtime_helper_023445d0(&"setting-keybind-capture-reader");
    il2cpp_runtime_helper_023445d0(&"Press a key, mouse button, or scroll wheel.");
    il2cpp_runtime_helper_023445d0(&"text");
    il2cpp_runtime_helper_023445d0(&"setting-keybind-capture-prompt");
    ppSVar17 = &"setting-keybind-capture-current";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae761 = '\x01';
    __this = (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *)ppSVar17;
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__RegisterFactory((MethodInfo *)__this);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    method_00 = (MethodInfo *)body;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,"Press a key, mouse button, or scroll wheel.","text","setting-keybind-capture-prompt",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CurrentText(method_00);
    pSVar7 = System_String__Concat_3ae5ba0("Current: ",pSVar7,(MethodInfo *)0x0);
    in_R8 = (System_String_o *)0x0;
    in_R9 = (System_String_o *)0x0;
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,pSVar7,"text","setting-keybind-capture-current",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_03 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
    if (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_03->fields).type = "AottgKeybindCaptureRuntime";
      il2cpp_runtime_helper_022b4080(&__this_03->fields);
      (__this_03->fields).id = "setting-keybind-capture-reader";
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).id);
      if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
      pSVar7 = System_Int32__ToString_3cb4470
                         ((int)*(undefined8 *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18,
                          (System_IFormatProvider_o *)provider,(MethodInfo *)0x0);
      (__this_03->fields).value = pSVar7;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).value,pSVar7);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(1.0,(MethodInfo *)0x0);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      (__this_03->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar8;
      il2cpp_runtime_helper_022b4080(&(__this_03->fields).search,pGVar8);
      Gisketch_Aottg2UI_Code_AottgUi__Add(body,__this_03,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae769 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Build);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentFactory);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&"AottgKeybindCaptureRuntime");
    g_data_057ae769 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)**(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8)
  ;
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this_01 != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this_01,"AottgKeybindCaptureRuntime",factory,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae765 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae765 = '\x01';
  }
  lVar2 = **(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
  if (lVar2 != 0) {
    index = *(uint *)(*(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 1);
    pSVar15 = (System_Action_GisketchActionContext__o *)(ulong)index;
    if (-1 < (int)index) {
      pSVar18 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x10);
      if (pSVar18 != (System_Collections_Generic_List_object__o *)0x0) {
        if ((pSVar18->fields)._size <= (int)index) {
          return;
        }
        pIVar9 = System_Collections_Generic_List_object___get_Item(pSVar18,index,MethodInfo_InputKey_get_Item);
        if (pIVar9 != (Il2CppObject *)0x0) {
          vtableDispatch = pIVar9->klass->vtable[3].methodPtr;
          (*vtableDispatch)(pIVar9,pIVar9->klass->vtable[3].method,vtableDispatch);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae762 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Unbind);
        il2cpp_runtime_helper_023445d0(&"Unbind");
        il2cpp_runtime_helper_023445d0(&"Cancel");
        g_data_057ae762 = '\x01';
      }
      pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      pSVar11 = pSVar10;
      System_Action_GisketchActionContext____ctor();
      if (pSVar15 != (System_Action_GisketchActionContext__o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet_3a5fe60
                  ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)pSVar15,"Cancel",pSVar10,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x445e339;
        System_Action_GisketchActionContext____ctor();
        pSVar7 = "Unbind";
        pSVar10 = (System_Action_GisketchActionContext__o *)0x0;
        __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pSVar15->fields).method_ptr;
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          pGVar1 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pSVar15->fields).invoke_impl;
          if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                               (pGVar1,(System_String_o *)(pSVar15->fields).m_target,pSVar10,(MethodInfo *)0x0
                               );
          }
          Gisketch_Aottg2UI_Code_AottgUi__Button
                    ((Gisketch_Aottg2UI_Code_AottgUi_o *)pSVar15,(int32_t)pSVar7,text,pSVar6,in_R8,in_R9,enter
                     ,(System_String_o *)factory,in_stack_ffffffffffffff08);
          return;
        }
        pGVar1 = (__this_00->fields)._actions;
        if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                             (pGVar1,(__this_00->fields)._ownerId,pSVar11,(MethodInfo *)0x0);
        }
        Gisketch_Aottg2UI_Code_AottgUi__Button
                  (__this_00,0,pSVar7,pSVar6,(System_String_o *)0x0,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                   (MethodInfo *)factory);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      puVar14 = &stack0xffffffffffffff48;
      if (g_data_057ae763 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
        g_data_057ae763 = '\x01';
      }
      plVar13 = &TypeInfo_AottgKeybindCaptureDialog;
      pSVar12 = *(Settings_InputKey_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x20);
      if (pSVar12 != (Settings_InputKey_o *)0x0) {
        x = (System_Action_GisketchActionContext__o *)0x0;
        bVar5 = Settings_InputKey__ReadNextInput(pSVar12,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x20);
          if (pSVar7 == (System_String_o *)0x0) {
            pSVar6 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
          }
          else {
            plVar13 = (long *)pSVar10;
            pSVar6 = (System_String_o *)
                     (*(pSVar7->klass->vtable)._3_ToString.methodPtr)
                               (pSVar7,(pSVar7->klass->vtable)._3_ToString.method);
            puVar14 = &stack0xffffffffffffff60;
            x = pSVar11;
            pSVar7 = pSVar6;
            pSVar11 = pSVar15;
          }
          *(System_Action_GisketchActionContext__o **)(puVar14 + -8) = pSVar11;
          *(long **)(puVar14 + -0x10) = plVar13;
          *(System_String_o **)(puVar14 + -0x18) = pSVar6;
          if (g_data_057ae767 == '\0') {
            *(undefined8 *)(puVar14 + -0x20) = 0x445e40f;
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            *(undefined8 *)(puVar14 + -0x20) = 0x445e41b;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            *(undefined8 *)(puVar14 + -0x20) = 0x445e427;
            il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
            g_data_057ae767 = '\x01';
          }
          lVar2 = **(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
          if ((lVar2 != 0) && (index_00 = (int)(*(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8))[1], -1 < index_00)) {
            pSVar18 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x10);
            if (pSVar18 == (System_Collections_Generic_List_object__o *)0x0) {
label_0445e48c:
              iVar16 = (int32_t)pSVar18;
              *(undefined8 *)(puVar14 + -0x20) = 0x445e491;
              il2cpp_runtime_helper_022b2c90();
              *(System_Action_GisketchActionContext__o **)(puVar14 + -0x20) = x;
              if (g_data_057ae764 == '\0') {
                *(undefined8 *)(puVar14 + -0x28) = 0x445e4b8;
                il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
                g_data_057ae764 = '\x01';
              }
              *(undefined8 *)(puVar14 + -0x28) = 0x445e4c8;
              Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar16,(MethodInfo *)0x0);
              if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar16) {
                *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
              }
              return;
            }
            if (index_00 < (pSVar18->fields)._size) {
              *(undefined8 *)(puVar14 + -0x20) = 0x445e46b;
              pSVar12 = (Settings_InputKey_o *)
                        System_Collections_Generic_List_object___get_Item(pSVar18,index_00,MethodInfo_InputKey_get_Item);
              if (pSVar12 == (Settings_InputKey_o *)0x0) goto label_0445e48c;
              *(undefined8 *)(puVar14 + -0x20) = 0x445e47d;
              Settings_InputKey__LoadFromString(pSVar12,pSVar7,(MethodInfo *)0x0);
            }
          }
          uVar3 = *(undefined8 *)(puVar14 + -0x10);
          uVar4 = *(undefined8 *)(puVar14 + -8);
          *(undefined8 *)(puVar14 + -8) = unaff_RBP;
          *(undefined8 *)(puVar14 + -0x10) = uVar4;
          *(undefined8 *)(puVar14 + -0x18) = uVar3;
          if (g_data_057ae768 == '\0') {
            *(undefined8 *)(puVar14 + -0x20) = 0x445e56c;
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            *(undefined8 *)(puVar14 + -0x20) = 0x445e578;
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
            *(undefined8 *)(puVar14 + -0x20) = 0x445e584;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae768 = '\x01';
          }
          iVar16 = *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18);
          if (g_data_057ae764 == '\0') {
            *(undefined8 *)(puVar14 + -0x20) = 0x445e5b4;
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            g_data_057ae764 = '\x01';
          }
          *(undefined8 *)(puVar14 + -0x20) = 0x445e5c4;
          Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar16,(MethodInfo *)0x0);
          if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar16) {
            *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar14 + -0x20) = 0x445e5f2;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar14 + -0x20) = 0x445e5fe;
          pSVar15 = x;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (x == (System_Action_GisketchActionContext__o *)0x0) {
              *(undefined8 *)(puVar14 + -0x20) = 0x445e651;
              il2cpp_runtime_helper_022b2c90();
              System_Object___ctor((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
              return;
            }
            *(undefined8 *)(puVar14 + -0x20) = 0x445e619;
            __this_04 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                        UnityEngine_GameObject__GetComponentInParent_object_
                                  ((UnityEngine_GameObject_o *)x,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
            if (__this_04 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              __this_02 = (__this_04->fields)._Theme_k__BackingField;
              if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                *(undefined8 *)(puVar14 + -0x20) = 0x445e639;
                Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                          ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_02,1,
                           (MethodInfo *)0x0);
              }
              Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_04,(MethodInfo *)0x0);
              return;
            }
          }
          return;
        }
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__BuildFooter (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x445e280

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__BuildFooter
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  int index;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  long lVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  System_Action_GisketchActionContext__o *pSVar7;
  System_Action_GisketchActionContext__o *pSVar8;
  Settings_InputKey_o *pSVar9;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_02;
  System_String_o *text;
  MethodInfo *unaff_RBX;
  long *plVar10;
  undefined1 *puVar11;
  undefined8 unaff_RBP;
  System_String_o *pSVar12;
  System_Action_GisketchActionContext__o *x;
  int32_t iVar13;
  System_Collections_Generic_List_object__o *__this_03;
  System_String_o *in_R8;
  System_String_o *in_R9;
  MethodInfo *in_stack_ffffffffffffff90;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (g_data_057ae762 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Unbind);
    il2cpp_runtime_helper_023445d0(&"Unbind");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    g_data_057ae762 = '\x01';
  }
  pSVar7 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
  pSVar8 = pSVar7;
  System_Action_GisketchActionContext____ctor();
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet_3a5fe60(footer,"Cancel",pSVar7,(MethodInfo *)0x0);
    pSVar8 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
    enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x445e339;
    System_Action_GisketchActionContext____ctor();
    pSVar12 = "Unbind";
    pSVar7 = (System_Action_GisketchActionContext__o *)0x0;
    __this_00 = (footer->fields)._ui;
    if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar1 = (__this_00->fields)._actions;
      if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                           (pGVar1,(__this_00->fields)._ownerId,pSVar8,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_Code_AottgUi__Button
                (__this_00,0,pSVar12,pSVar6,(System_String_o *)0x0,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,unaff_RBX);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar1 = (((Gisketch_Aottg2UI_Code_AottgUi_o *)footer)->fields)._actions;
    if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
      pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    else {
      pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                         (pGVar1,(((Gisketch_Aottg2UI_Code_AottgUi_o *)footer)->fields)._ownerId,pSVar7,
                          (MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Code_AottgUi__Button
              ((Gisketch_Aottg2UI_Code_AottgUi_o *)footer,(int32_t)pSVar12,text,pSVar6,in_R8,in_R9,enter,
               (System_String_o *)unaff_RBX,in_stack_ffffffffffffff90);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  puVar11 = &stack0xffffffffffffffd0;
  if (g_data_057ae763 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    g_data_057ae763 = '\x01';
  }
  plVar10 = &TypeInfo_AottgKeybindCaptureDialog;
  pSVar9 = *(Settings_InputKey_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x20);
  if (pSVar9 != (Settings_InputKey_o *)0x0) {
    x = (System_Action_GisketchActionContext__o *)0x0;
    bVar5 = Settings_InputKey__ReadNextInput(pSVar9,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x20);
      if (pSVar12 == (System_String_o *)0x0) {
        pSVar6 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      }
      else {
        plVar10 = (long *)pSVar7;
        pSVar6 = (System_String_o *)
                 (*(pSVar12->klass->vtable)._3_ToString.methodPtr)
                           (pSVar12,(pSVar12->klass->vtable)._3_ToString.method);
        puVar11 = &stack0xffffffffffffffe8;
        x = pSVar8;
        pSVar12 = pSVar6;
        pSVar8 = (System_Action_GisketchActionContext__o *)footer;
      }
      *(System_Action_GisketchActionContext__o **)(puVar11 + -8) = pSVar8;
      *(long **)(puVar11 + -0x10) = plVar10;
      *(System_String_o **)(puVar11 + -0x18) = pSVar6;
      if (g_data_057ae767 == '\0') {
        *(undefined8 *)(puVar11 + -0x20) = 0x445e40f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
        *(undefined8 *)(puVar11 + -0x20) = 0x445e41b;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)(puVar11 + -0x20) = 0x445e427;
        il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
        g_data_057ae767 = '\x01';
      }
      lVar2 = **(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
      if ((lVar2 != 0) && (index = (int)(*(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8))[1], -1 < index)) {
        __this_03 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x10);
        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
label_0445e48c:
          iVar13 = (int32_t)__this_03;
          *(undefined8 *)(puVar11 + -0x20) = 0x445e491;
          il2cpp_runtime_helper_022b2c90();
          *(System_Action_GisketchActionContext__o **)(puVar11 + -0x20) = x;
          if (g_data_057ae764 == '\0') {
            *(undefined8 *)(puVar11 + -0x28) = 0x445e4b8;
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            g_data_057ae764 = '\x01';
          }
          *(undefined8 *)(puVar11 + -0x28) = 0x445e4c8;
          Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar13,(MethodInfo *)0x0);
          if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar13) {
            *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
          }
          return;
        }
        if (index < (__this_03->fields)._size) {
          *(undefined8 *)(puVar11 + -0x20) = 0x445e46b;
          pSVar9 = (Settings_InputKey_o *)
                   System_Collections_Generic_List_object___get_Item(__this_03,index,MethodInfo_InputKey_get_Item);
          if (pSVar9 == (Settings_InputKey_o *)0x0) goto label_0445e48c;
          *(undefined8 *)(puVar11 + -0x20) = 0x445e47d;
          Settings_InputKey__LoadFromString(pSVar9,pSVar12,(MethodInfo *)0x0);
        }
      }
      uVar3 = *(undefined8 *)(puVar11 + -0x10);
      uVar4 = *(undefined8 *)(puVar11 + -8);
      *(undefined8 *)(puVar11 + -8) = unaff_RBP;
      *(undefined8 *)(puVar11 + -0x10) = uVar4;
      *(undefined8 *)(puVar11 + -0x18) = uVar3;
      if (g_data_057ae768 == '\0') {
        *(undefined8 *)(puVar11 + -0x20) = 0x445e56c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
        *(undefined8 *)(puVar11 + -0x20) = 0x445e578;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        *(undefined8 *)(puVar11 + -0x20) = 0x445e584;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae768 = '\x01';
      }
      iVar13 = *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18);
      if (g_data_057ae764 == '\0') {
        *(undefined8 *)(puVar11 + -0x20) = 0x445e5b4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
        g_data_057ae764 = '\x01';
      }
      *(undefined8 *)(puVar11 + -0x20) = 0x445e5c4;
      Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar13,(MethodInfo *)0x0);
      if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar13) {
        *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar11 + -0x20) = 0x445e5f2;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar11 + -0x20) = 0x445e5fe;
      pSVar8 = x;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (x == (System_Action_GisketchActionContext__o *)0x0) {
          *(undefined8 *)(puVar11 + -0x20) = 0x445e651;
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
          return;
        }
        *(undefined8 *)(puVar11 + -0x20) = 0x445e619;
        __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                    UnityEngine_GameObject__GetComponentInParent_object_
                              ((UnityEngine_GameObject_o *)x,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        if (__this_02 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          __this_01 = (__this_02->fields)._Theme_k__BackingField;
          if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            *(undefined8 *)(puVar11 + -0x20) = 0x445e639;
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_01,1,(MethodInfo *)0x0);
          }
          Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_02,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$CaptureNext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CaptureNext (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x445e360

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CaptureNext
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int index;
  long lVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  undefined8 uVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  Settings_InputKey_o *pSVar6;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  long *unaff_RBX;
  long *plVar7;
  undefined1 *puVar8;
  undefined8 unaff_RBP;
  UnityEngine_Object_o *x;
  int32_t iVar9;
  System_String_o *serializedKey;
  System_Collections_Generic_List_object__o *__this_01;
  UnityEngine_Object_o *__this_02;
  UnityEngine_GameObject_o *unaff_R14;
  undefined1 auStack_18 [8];
  
  puVar8 = auStack_18;
  if (g_data_057ae763 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    g_data_057ae763 = '\x01';
  }
  plVar7 = &TypeInfo_AottgKeybindCaptureDialog;
  pSVar6 = *(Settings_InputKey_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x20);
  if (pSVar6 != (Settings_InputKey_o *)0x0) {
    x = (UnityEngine_Object_o *)0x0;
    bVar4 = Settings_InputKey__ReadNextInput(pSVar6,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      serializedKey = *(System_String_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x20);
      if (serializedKey == (System_String_o *)0x0) {
        pSVar5 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      }
      else {
        pSVar5 = (System_String_o *)
                 (*(serializedKey->klass->vtable)._3_ToString.methodPtr)
                           (serializedKey,(serializedKey->klass->vtable)._3_ToString.method);
        plVar7 = unaff_RBX;
        puVar8 = (undefined1 *)register0x00000020;
        x = (UnityEngine_Object_o *)source;
        serializedKey = pSVar5;
        source = unaff_R14;
      }
      *(UnityEngine_GameObject_o **)(puVar8 + -8) = source;
      *(long **)(puVar8 + -0x10) = plVar7;
      *(System_String_o **)(puVar8 + -0x18) = pSVar5;
      if (g_data_057ae767 == '\0') {
        *(undefined8 *)(puVar8 + -0x20) = 0x445e40f;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
        *(undefined8 *)(puVar8 + -0x20) = 0x445e41b;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
        *(undefined8 *)(puVar8 + -0x20) = 0x445e427;
        il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
        g_data_057ae767 = '\x01';
      }
      lVar1 = **(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
      if ((lVar1 != 0) && (index = (int)(*(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8))[1], -1 < index)) {
        __this_01 = *(System_Collections_Generic_List_object__o **)(lVar1 + 0x10);
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
label_0445e48c:
          iVar9 = (int32_t)__this_01;
          *(undefined8 *)(puVar8 + -0x20) = 0x445e491;
          il2cpp_runtime_helper_022b2c90();
          *(UnityEngine_Object_o **)(puVar8 + -0x20) = x;
          if (g_data_057ae764 == '\0') {
            *(undefined8 *)(puVar8 + -0x28) = 0x445e4b8;
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            g_data_057ae764 = '\x01';
          }
          *(undefined8 *)(puVar8 + -0x28) = 0x445e4c8;
          Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar9,(MethodInfo *)0x0);
          if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar9) {
            *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
          }
          return;
        }
        if (index < (__this_01->fields)._size) {
          *(undefined8 *)(puVar8 + -0x20) = 0x445e46b;
          pSVar6 = (Settings_InputKey_o *)
                   System_Collections_Generic_List_object___get_Item(__this_01,index,MethodInfo_InputKey_get_Item);
          if (pSVar6 == (Settings_InputKey_o *)0x0) goto label_0445e48c;
          *(undefined8 *)(puVar8 + -0x20) = 0x445e47d;
          Settings_InputKey__LoadFromString(pSVar6,serializedKey,(MethodInfo *)0x0);
        }
      }
      uVar2 = *(undefined8 *)(puVar8 + -0x10);
      uVar3 = *(undefined8 *)(puVar8 + -8);
      *(undefined8 *)(puVar8 + -8) = unaff_RBP;
      *(undefined8 *)(puVar8 + -0x10) = uVar3;
      *(undefined8 *)(puVar8 + -0x18) = uVar2;
      if (g_data_057ae768 == '\0') {
        *(undefined8 *)(puVar8 + -0x20) = 0x445e56c;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
        *(undefined8 *)(puVar8 + -0x20) = 0x445e578;
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        *(undefined8 *)(puVar8 + -0x20) = 0x445e584;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057ae768 = '\x01';
      }
      iVar9 = *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18);
      if (g_data_057ae764 == '\0') {
        *(undefined8 *)(puVar8 + -0x20) = 0x445e5b4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
        g_data_057ae764 = '\x01';
      }
      *(undefined8 *)(puVar8 + -0x20) = 0x445e5c4;
      Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar9,(MethodInfo *)0x0);
      if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar9) {
        *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
      }
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar8 + -0x20) = 0x445e5f2;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar8 + -0x20) = 0x445e5fe;
      __this_02 = x;
      bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (x == (UnityEngine_Object_o *)0x0) {
          *(undefined8 *)(puVar8 + -0x20) = 0x445e651;
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          return;
        }
        *(undefined8 *)(puVar8 + -0x20) = 0x445e619;
        __this_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                    UnityEngine_GameObject__GetComponentInParent_object_
                              ((UnityEngine_GameObject_o *)x,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
        if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
          __this = (__this_00->fields)._Theme_k__BackingField;
          if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
            *(undefined8 *)(puVar8 + -0x20) = 0x445e639;
            Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                      ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this,1,(MethodInfo *)0x0);
          }
          Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_00,(MethodInfo *)0x0);
          return;
        }
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$EndCapture
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__EndCapture (int32_t token, const MethodInfo* method);
// 0x445e4a0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__EndCapture(int32_t token,MethodInfo *method)

{
  if (g_data_057ae764 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    g_data_057ae764 = '\x01';
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(token,(MethodInfo *)0x0);
  if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == token) {
    *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$CurrentText
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CurrentText (const MethodInfo* method);
// 0x445e1d0

System_String_o * Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CurrentText(MethodInfo *method)

{
  uint index;
  int index_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar1;
  long lVar2;
  Il2CppMethodPointer vtableDispatch;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  bool_conflict bVar5;
  System_String_o *extraout_RAX;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  System_Action_GisketchActionContext__o *pSVar10;
  System_Action_GisketchActionContext__o *pSVar11;
  undefined4 extraout_var;
  Settings_InputKey_o *__this_01;
  undefined4 extraout_var_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_02;
  System_String_o *extraout_RAX_00;
  System_String_o *text;
  MethodInfo *unaff_RBX;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 unaff_RBP;
  System_Action_GisketchActionContext__o *pSVar14;
  System_Action_GisketchActionContext__o *x;
  int32_t iVar15;
  System_Collections_Generic_List_object__o *pSVar16;
  System_String_o *in_R8;
  System_String_o *in_R9;
  MethodInfo *in_stack_ffffffffffffff88;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  
  if (g_data_057ae765 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae765 = '\x01';
  }
  lVar2 = **(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
  if (lVar2 != 0) {
    index = *(uint *)(*(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 1);
    pSVar14 = (System_Action_GisketchActionContext__o *)(ulong)index;
    if (-1 < (int)index) {
      pSVar16 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x10);
      if (pSVar16 != (System_Collections_Generic_List_object__o *)0x0) {
        if ((pSVar16->fields)._size <= (int)index) {
          return "None";
        }
        pIVar8 = System_Collections_Generic_List_object___get_Item(pSVar16,index,MethodInfo_InputKey_get_Item);
        if (pIVar8 != (Il2CppObject *)0x0) {
          vtableDispatch = pIVar8->klass->vtable[3].methodPtr;
          pSVar9 = (System_String_o *)
                   (*vtableDispatch)(pIVar8,pIVar8->klass->vtable[3].method,vtableDispatch);
          return pSVar9;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae762 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Cancel);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Unbind);
        il2cpp_runtime_helper_023445d0(&"Unbind");
        il2cpp_runtime_helper_023445d0(&"Cancel");
        g_data_057ae762 = '\x01';
      }
      pSVar10 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
      pSVar11 = pSVar10;
      System_Action_GisketchActionContext____ctor();
      if (pSVar14 != (System_Action_GisketchActionContext__o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet_3a5fe60
                  ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)pSVar14,"Cancel",pSVar10,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Action_GisketchActionContext__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext);
        enter = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x445e339;
        System_Action_GisketchActionContext____ctor();
        pSVar9 = "Unbind";
        pSVar10 = (System_Action_GisketchActionContext__o *)0x0;
        __this = (Gisketch_Aottg2UI_Code_AottgUi_o *)(pSVar14->fields).method_ptr;
        if (__this == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          pGVar1 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)(pSVar14->fields).invoke_impl;
          if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
            pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                               (pGVar1,(System_String_o *)(pSVar14->fields).m_target,pSVar10,(MethodInfo *)0x0
                               );
          }
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button
                             ((Gisketch_Aottg2UI_Code_AottgUi_o *)pSVar14,(int32_t)pSVar9,text,pSVar6,in_R8,
                              in_R9,enter,(System_String_o *)unaff_RBX,in_stack_ffffffffffffff88);
          return (System_String_o *)pGVar7;
        }
        pGVar1 = (__this->fields)._actions;
        if (pGVar1 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        }
        else {
          pSVar6 = Gisketch_Aottg2UI_Code_AottgActionRegistry__Register
                             (pGVar1,(__this->fields)._ownerId,pSVar11,(MethodInfo *)0x0);
        }
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Button
                           (__this,0,pSVar9,pSVar6,(System_String_o *)0x0,(System_String_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                            unaff_RBX);
        return (System_String_o *)pGVar7;
      }
      il2cpp_runtime_helper_022b2c90();
      puVar13 = &stack0xffffffffffffffc8;
      if (g_data_057ae763 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
        g_data_057ae763 = '\x01';
      }
      plVar12 = &TypeInfo_AottgKeybindCaptureDialog;
      pSVar9 = *(System_String_o **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
      if (pSVar9[1].monitor != (Settings_InputKey_o *)0x0) {
        x = (System_Action_GisketchActionContext__o *)0x0;
        bVar5 = Settings_InputKey__ReadNextInput(pSVar9[1].monitor,(MethodInfo *)0x0);
        pSVar9 = (System_String_o *)CONCAT44(extraout_var,bVar5);
        if ((char)bVar5 != '\0') {
          pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x20);
          if (pSVar9 == (System_String_o *)0x0) {
            pSVar6 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
          }
          else {
            plVar12 = (long *)pSVar10;
            pSVar6 = (System_String_o *)
                     (*(pSVar9->klass->vtable)._3_ToString.methodPtr)
                               (pSVar9,(pSVar9->klass->vtable)._3_ToString.method);
            puVar13 = &stack0xffffffffffffffe0;
            x = pSVar11;
            pSVar9 = pSVar6;
            pSVar11 = pSVar14;
          }
          *(System_Action_GisketchActionContext__o **)(puVar13 + -8) = pSVar11;
          *(long **)(puVar13 + -0x10) = plVar12;
          *(System_String_o **)(puVar13 + -0x18) = pSVar6;
          if (g_data_057ae767 == '\0') {
            *(undefined8 *)(puVar13 + -0x20) = 0x445e40f;
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            *(undefined8 *)(puVar13 + -0x20) = 0x445e41b;
            il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
            *(undefined8 *)(puVar13 + -0x20) = 0x445e427;
            il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
            g_data_057ae767 = '\x01';
          }
          lVar2 = **(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
          if ((lVar2 != 0) && (index_00 = (int)(*(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8))[1], -1 < index_00)) {
            pSVar16 = *(System_Collections_Generic_List_object__o **)(lVar2 + 0x10);
            if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
label_0445e48c:
              iVar15 = (int32_t)pSVar16;
              *(undefined8 *)(puVar13 + -0x20) = 0x445e491;
              il2cpp_runtime_helper_022b2c90();
              *(System_Action_GisketchActionContext__o **)(puVar13 + -0x20) = x;
              if (g_data_057ae764 == '\0') {
                *(undefined8 *)(puVar13 + -0x28) = 0x445e4b8;
                il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
                g_data_057ae764 = '\x01';
              }
              *(undefined8 *)(puVar13 + -0x28) = 0x445e4c8;
              Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar15,(MethodInfo *)0x0);
              pSVar9 = *(System_String_o **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
              if (*(int *)&pSVar9[1].klass == iVar15) {
                *(undefined4 *)&pSVar9[1].klass = 0;
              }
              return pSVar9;
            }
            if (index_00 < (pSVar16->fields)._size) {
              *(undefined8 *)(puVar13 + -0x20) = 0x445e46b;
              __this_01 = (Settings_InputKey_o *)
                          System_Collections_Generic_List_object___get_Item(pSVar16,index_00,MethodInfo_InputKey_get_Item);
              if (__this_01 == (Settings_InputKey_o *)0x0) goto label_0445e48c;
              *(undefined8 *)(puVar13 + -0x20) = 0x445e47d;
              Settings_InputKey__LoadFromString(__this_01,pSVar9,(MethodInfo *)0x0);
            }
          }
          uVar3 = *(undefined8 *)(puVar13 + -0x10);
          uVar4 = *(undefined8 *)(puVar13 + -8);
          *(undefined8 *)(puVar13 + -8) = unaff_RBP;
          *(undefined8 *)(puVar13 + -0x10) = uVar4;
          *(undefined8 *)(puVar13 + -0x18) = uVar3;
          if (g_data_057ae768 == '\0') {
            *(undefined8 *)(puVar13 + -0x20) = 0x445e56c;
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            *(undefined8 *)(puVar13 + -0x20) = 0x445e578;
            il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
            *(undefined8 *)(puVar13 + -0x20) = 0x445e584;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057ae768 = '\x01';
          }
          iVar15 = *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18);
          if (g_data_057ae764 == '\0') {
            *(undefined8 *)(puVar13 + -0x20) = 0x445e5b4;
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
            g_data_057ae764 = '\x01';
          }
          *(undefined8 *)(puVar13 + -0x20) = 0x445e5c4;
          Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar15,(MethodInfo *)0x0);
          if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar15) {
            *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            *(undefined8 *)(puVar13 + -0x20) = 0x445e5f2;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar13 + -0x20) = 0x445e5fe;
          pSVar14 = x;
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pSVar9 = (System_String_o *)CONCAT44(extraout_var_00,bVar5);
          if ((char)bVar5 != '\0') {
            if (x == (System_Action_GisketchActionContext__o *)0x0) {
              *(undefined8 *)(puVar13 + -0x20) = 0x445e651;
              il2cpp_runtime_helper_022b2c90();
              System_Object___ctor((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
              return extraout_RAX;
            }
            *(undefined8 *)(puVar13 + -0x20) = 0x445e619;
            __this_02 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                        UnityEngine_GameObject__GetComponentInParent_object_
                                  ((UnityEngine_GameObject_o *)x,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
            pSVar9 = (System_String_o *)0x0;
            if (__this_02 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
              __this_00 = (__this_02->fields)._Theme_k__BackingField;
              if (__this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                *(undefined8 *)(puVar13 + -0x20) = 0x445e639;
                Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                          ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this_00,1,
                           (MethodInfo *)0x0);
              }
              Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_02,(MethodInfo *)0x0);
              return extraout_RAX_00;
            }
          }
          return pSVar9;
        }
      }
      return pSVar9;
    }
  }
  return "None";
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Cancel
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Cancel (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x445e4f0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Cancel
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int32_t token;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if (g_data_057ae768 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae768 = '\x01';
  }
  token = *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18);
  if (g_data_057ae764 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    g_data_057ae764 = '\x01';
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(token,(MethodInfo *)0x0);
  if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == token) {
    *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = context.fields.GameObject;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (__this_00->fields)._Theme_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this,1,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Unbind
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Unbind (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x445e510

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Unbind
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int index;
  long lVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  System_String_o *serializedKey;
  bool_conflict bVar2;
  Settings_InputKey_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  int32_t iVar3;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  
  if (g_data_057ae766 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    g_data_057ae766 = '\x01';
  }
  serializedKey = "None";
  if (g_data_057ae767 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    g_data_057ae767 = '\x01';
  }
  lVar1 = **(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
  if ((lVar1 != 0) && (index = (int)(*(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8))[1], -1 < index)) {
    __this_02 = *(System_Collections_Generic_List_object__o **)(lVar1 + 0x10);
    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
label_0445e48c:
      iVar3 = (int32_t)__this_02;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae764 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
        g_data_057ae764 = '\x01';
      }
      Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar3,(MethodInfo *)0x0);
      if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar3) {
        *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
      }
      return;
    }
    if (index < (__this_02->fields)._size) {
      __this_00 = (Settings_InputKey_o *)
                  System_Collections_Generic_List_object___get_Item(__this_02,index,MethodInfo_InputKey_get_Item);
      if (__this_00 == (Settings_InputKey_o *)0x0) goto label_0445e48c;
      Settings_InputKey__LoadFromString(__this_00,serializedKey,(MethodInfo *)0x0);
    }
  }
  if (g_data_057ae768 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae768 = '\x01';
  }
  iVar3 = *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18);
  if (g_data_057ae764 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    g_data_057ae764 = '\x01';
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar3,(MethodInfo *)0x0);
  if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar3) {
    *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = context.fields.GameObject;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_01 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (__this_01->fields)._Theme_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this,1,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Commit
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Commit (System_String_o* value, UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x445e3f0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Commit
               (System_String_o *value,UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int index;
  long lVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool_conflict bVar2;
  Settings_InputKey_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_01;
  int32_t iVar3;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  
  if (g_data_057ae767 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Item);
    g_data_057ae767 = '\x01';
  }
  lVar1 = **(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8);
  if ((lVar1 != 0) && (index = (int)(*(long **)(TypeInfo_AottgKeybindCaptureDialog + 0xb8))[1], -1 < index)) {
    __this_02 = *(System_Collections_Generic_List_object__o **)(lVar1 + 0x10);
    if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
label_0445e48c:
      iVar3 = (int32_t)__this_02;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae764 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
        g_data_057ae764 = '\x01';
      }
      Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar3,(MethodInfo *)0x0);
      if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar3) {
        *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
      }
      return;
    }
    if (index < (__this_02->fields)._size) {
      __this_00 = (Settings_InputKey_o *)
                  System_Collections_Generic_List_object___get_Item(__this_02,index,MethodInfo_InputKey_get_Item);
      if (__this_00 == (Settings_InputKey_o *)0x0) goto label_0445e48c;
      Settings_InputKey__LoadFromString(__this_00,value,(MethodInfo *)0x0);
    }
  }
  if (g_data_057ae768 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae768 = '\x01';
  }
  iVar3 = *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18);
  if (g_data_057ae764 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    g_data_057ae764 = '\x01';
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(iVar3,(MethodInfo *)0x0);
  if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == iVar3) {
    *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_03 = source;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (source == (UnityEngine_GameObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
      return;
    }
    __this_01 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_(source,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_01 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (__this_01->fields)._Theme_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this,1,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Close
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x445e500

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  int32_t token;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if (g_data_057ae768 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae768 = '\x01';
  }
  token = *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18);
  if (g_data_057ae764 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    g_data_057ae764 = '\x01';
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(token,(MethodInfo *)0x0);
  if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == token) {
    *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = context.fields.GameObject;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_(context.fields.GameObject,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (__this_00->fields)._Theme_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this,1,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$Close
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x445e550

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Close_435e550
               (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int32_t token;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if (g_data_057ae768 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae768 = '\x01';
  }
  token = *(int32_t *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18);
  if (g_data_057ae764 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgKeybindCaptureDialog);
    g_data_057ae764 = '\x01';
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(token,(MethodInfo *)0x0);
  if (*(int *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) == token) {
    *(undefined4 *)(*(long *)(TypeInfo_AottgKeybindCaptureDialog + 0xb8) + 0x18) = 0;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = source;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (source == (UnityEngine_GameObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)
                UnityEngine_GameObject__GetComponentInParent_object_(source,MethodInfo_GisketchUIRoot_GetComponentInParent_GisketchUIRoot);
    if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
      __this = (__this_00->fields)._Theme_k__BackingField;
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop
                  ((Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)__this,1,(MethodInfo *)0x0);
      }
      Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o* __this, const MethodInfo* method);
// 0x445e660

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}



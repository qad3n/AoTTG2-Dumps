// Type: Gisketch.Aottg2UI.Data.GisketchManifestDefinition
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Data/GisketchManifestDefinition.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___cctor (const MethodInfo* method);
// 0x3b5b0a0

void Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057a9d42 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9d42 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___ctor (Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_o* __this, const MethodInfo* method);
// 0x3b5b110

void Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___ctor
               (Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$<FindScreen>b__8_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___FindScreen_b__8_0 (Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_o* __this, Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* item, const MethodInfo* method);
// 0x3b5b120

System_String_o *
Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___FindScreen_b__8_0
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_o *__this,
          Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *item,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  System_ArgumentException_o *__this_00;
  
  if (item != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    return (item->fields).id;
  }
  il2cpp_runtime_helper_022b2c90();
  if (item != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    return (item->fields).id;
  }
  il2cpp_runtime_helper_022b2c90();
  if (item != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    return (item->fields).id;
  }
  il2cpp_runtime_helper_022b2c90();
  if (item != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    return (item->fields).id;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d43 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_DeserializeObject_GisketchScree);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057a9d43 = '\x01';
  }
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = (System_String_o *)
           Newtonsoft_Json_JsonConvert__DeserializeObject_object_((System_String_o *)__this,MethodInfo_GisketchScreenDefinition_DeserializeObject_GisketchScree);
  if ((pSVar2 != (System_String_o *)0x0) && (pSVar2[3].monitor != (void *)0x0)) {
    return pSVar2;
  }
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar3);
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid Gisketch screen JSON.");
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_FromJson);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar3);
  lVar1 = *(long *)&(__this_00->fields)._remoteStackIndex;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xf0), lVar1 != 0)) {
    return *(System_String_o **)(lVar1 + 0x10);
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$<FindDialog>b__9_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___FindDialog_b__9_0 (Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_o* __this, Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* item, const MethodInfo* method);
// 0x3b5b140

System_String_o *
Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___FindDialog_b__9_0
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *item,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  System_ArgumentException_o *__this_00;
  
  if (item != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    return (item->fields).id;
  }
  il2cpp_runtime_helper_022b2c90();
  if (item != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    return (item->fields).id;
  }
  il2cpp_runtime_helper_022b2c90();
  if (item != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    return (item->fields).id;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d43 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_DeserializeObject_GisketchScree);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057a9d43 = '\x01';
  }
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = (System_String_o *)
           Newtonsoft_Json_JsonConvert__DeserializeObject_object_((System_String_o *)__this,MethodInfo_GisketchScreenDefinition_DeserializeObject_GisketchScree);
  if ((pSVar2 != (System_String_o *)0x0) && (pSVar2[3].monitor != (void *)0x0)) {
    return pSVar2;
  }
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar3);
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid Gisketch screen JSON.");
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_FromJson);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar3);
  lVar1 = *(long *)&(__this_00->fields)._remoteStackIndex;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xf0), lVar1 != 0)) {
    return *(System_String_o **)(lVar1 + 0x10);
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$<FindPopover>b__10_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___FindPopover_b__10_0 (Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_o* __this, Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* item, const MethodInfo* method);
// 0x3b5b160

System_String_o *
Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___FindPopover_b__10_0
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_o *__this,
          Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *item,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  System_ArgumentException_o *__this_00;
  
  if (item != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    return (item->fields).id;
  }
  il2cpp_runtime_helper_022b2c90();
  if (item != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    return (item->fields).id;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d43 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_DeserializeObject_GisketchScree);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057a9d43 = '\x01';
  }
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = (System_String_o *)
           Newtonsoft_Json_JsonConvert__DeserializeObject_object_((System_String_o *)__this,MethodInfo_GisketchScreenDefinition_DeserializeObject_GisketchScree);
  if ((pSVar2 != (System_String_o *)0x0) && (pSVar2[3].monitor != (void *)0x0)) {
    return pSVar2;
  }
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar3);
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid Gisketch screen JSON.");
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_FromJson);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar3);
  lVar1 = *(long *)&(__this_00->fields)._remoteStackIndex;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xf0), lVar1 != 0)) {
    return *(System_String_o **)(lVar1 + 0x10);
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition.<>c$$<FindTooltip>b__11_0
// il2cpp: System_String_o* Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___FindTooltip_b__11_0 (Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_o* __this, Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o* item, const MethodInfo* method);
// 0x3b5b180

System_String_o *
Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c___FindTooltip_b__11_0
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition___c_o *__this,
          Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *item,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  undefined8 uVar3;
  System_ArgumentException_o *__this_00;
  
  if (item != (Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *)0x0) {
    return (item->fields).id;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d43 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_DeserializeObject_GisketchScree);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057a9d43 = '\x01';
  }
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = (System_String_o *)
           Newtonsoft_Json_JsonConvert__DeserializeObject_object_((System_String_o *)__this,MethodInfo_GisketchScreenDefinition_DeserializeObject_GisketchScree);
  if ((pSVar2 != (System_String_o *)0x0) && (pSVar2[3].monitor != (void *)0x0)) {
    return pSVar2;
  }
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar3);
  pSVar2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid Gisketch screen JSON.");
  System_ArgumentException___ctor_3c12490(__this_00,pSVar2,(MethodInfo *)0x0);
  uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_FromJson);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar3);
  lVar1 = *(long *)&(__this_00->fields)._remoteStackIndex;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xf0), lVar1 != 0)) {
    return *(System_String_o **)(lVar1 + 0x10);
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FromJson
// il2cpp: Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FromJson (System_String_o* json, const MethodInfo* method);
// 0x3b5aeb0

Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *
Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FromJson(System_String_o *json,MethodInfo *method)

{
  int iVar1;
  System_Object_array *items;
  long lVar2;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *pGVar3;
  undefined8 uVar4;
  System_ArgumentException_o *__this;
  System_String_o *pSVar5;
  System_Func_T__string__o *getId;
  int iVar6;
  
  if (g_data_057a9d3d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchManifestDefinition_DeserializeObject_GisketchMan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057a9d3d = '\x01';
  }
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
           Newtonsoft_Json_JsonConvert__DeserializeObject_object_(json,MethodInfo_GisketchManifestDefinition_DeserializeObject_GisketchMan);
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) {
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar4);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid Gisketch UI manifest JSON.");
    System_ArgumentException___ctor_3c12490(__this,pSVar5,(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchManifestDefinition_FromJson);
    il2cpp_runtime_helper_022b2b10();
    if (g_data_057a9d41 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Func_GisketchTooltipDefinition_string);
      il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTooltipDefinition_FindById_GisketchTooltipDefini);
      il2cpp_runtime_helper_023445d0(&MethodInfo_String_FindTooltip_b__11_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057a9d41 = '\x01';
    }
    items = (System_Object_array *)(__this->fields)._stackTraceString;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    else {
      getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
    }
    if (getId == (System_Func_T__string__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      getId = (System_Func_T__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_GisketchTooltipDefinition_string);
      System_Func_object__object____ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__string__o **)(lVar2 + 0x20) = getId;
      il2cpp_runtime_helper_022b4080(lVar2 + 0x20,getId);
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
             Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_
                       (items,pSVar5,getId,MethodInfo_GisketchTooltipDefinition_FindById_GisketchTooltipDefini);
    return pGVar3;
  }
  iVar1 = (pGVar3->fields).schemaVersion;
  iVar6 = 1;
  if (0 < iVar1) {
    iVar6 = iVar1;
  }
  (pGVar3->fields).schemaVersion = iVar6;
  return pGVar3;
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FindScreen
// il2cpp: Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b47d20

Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *
Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindScreen
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_array *items;
  long lVar1;
  System_Func_T__string__o *getId;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *pGVar2;
  
  if (g_data_057a9d3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_GisketchScreenDefinition_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchScreenDefinition_FindById_GisketchScreenDefiniti);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_FindScreen_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9d3e = '\x01';
  }
  items = (__this->fields).screens;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (getId == (System_Func_T__string__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    getId = (System_Func_T__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_GisketchScreenDefinition_string);
    System_Func_object__object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__string__o **)(lVar1 + 8) = getId;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,getId);
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)
           Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_
                     ((System_Object_array *)items,id,getId,MethodInfo_GisketchScreenDefinition_FindById_GisketchScreenDefiniti);
  return pGVar2;
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FindDialog
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b52a90

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindDialog
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *items;
  long lVar1;
  System_Func_T__string__o *getId;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar2;
  
  if (g_data_057a9d3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_GisketchOverlayDefinition_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayDefinition_FindById_GisketchOverlayDefini);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_FindDialog_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9d3f = '\x01';
  }
  items = (__this->fields).dialogs;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (getId == (System_Func_T__string__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    getId = (System_Func_T__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_GisketchOverlayDefinition_string);
    System_Func_object__object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__string__o **)(lVar1 + 0x10) = getId;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,getId);
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)
           Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_
                     ((System_Object_array *)items,id,getId,MethodInfo_GisketchOverlayDefinition_FindById_GisketchOverlayDefini);
  return pGVar2;
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FindPopover
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindPopover (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b52350

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindPopover
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_array *items;
  long lVar1;
  System_Func_T__string__o *getId;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar2;
  
  if (g_data_057a9d40 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_GisketchOverlayDefinition_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayDefinition_FindById_GisketchOverlayDefini);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_FindPopover_b__10_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9d40 = '\x01';
  }
  items = (__this->fields).popovers;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (getId == (System_Func_T__string__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    getId = (System_Func_T__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_GisketchOverlayDefinition_string);
    System_Func_object__object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__string__o **)(lVar1 + 0x18) = getId;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,getId);
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)
           Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_
                     ((System_Object_array *)items,id,getId,MethodInfo_GisketchOverlayDefinition_FindById_GisketchOverlayDefini);
  return pGVar2;
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FindTooltip
// il2cpp: Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o* Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindTooltip (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b5af70

Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *
Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindTooltip
          (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_array *items;
  long lVar1;
  System_Func_T__string__o *getId;
  Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *pGVar2;
  
  if (g_data_057a9d41 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_GisketchTooltipDefinition_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTooltipDefinition_FindById_GisketchTooltipDefini);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_FindTooltip_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9d41 = '\x01';
  }
  items = (__this->fields).tooltips;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (getId == (System_Func_T__string__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    getId = (System_Func_T__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_GisketchTooltipDefinition_string);
    System_Func_object__object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__string__o **)(lVar1 + 0x20) = getId;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,getId);
  }
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *)
           Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_
                     ((System_Object_array *)items,id,getId,MethodInfo_GisketchTooltipDefinition_FindById_GisketchTooltipDefini);
  return pGVar2;
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$FindById<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_ (System_Object_array* items, System_String_o* id, System_Func_T__string__o* getId, const MethodInfo_255B4C0* method);
// 0x265b4c0

Il2CppObject *
Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_
          (System_Object_array *items,System_String_o *id,System_Func_T__string__o *getId,
          MethodInfo_255B4C0 *method)

{
  bool_conflict bVar1;
  uint uVar2;
  System_String_o *a;
  ulong uVar3;
  uint uVar4;
  long extraout_RDX;
  ulong unaff_RBX;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  uint uStack_44;
  ulong uStack_40;
  System_Func_T__string__o *pSStack_38;
  
  if (method->rgctx_data == (MethodInfo_255B4C0_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
  }
  if (items != (System_Object_array *)0x0) {
    pSVar5 = (System_String_o *)0x0;
    a = id;
    bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (Il2CppObject *)0x0;
    }
    uVar2 = (uint)items->max_length;
    if (0 < (int)uVar2) {
      if (getId == (System_Func_T__string__o *)0x0) {
        uVar4 = 0;
        while (uVar4 < uVar2) {
          if (items->m_Items[(int)uVar4] != (Il2CppObject *)0x0) goto label_0265b59d;
          uVar4 = uVar4 + 1;
          if ((int)uVar2 <= (int)uVar4) {
            return (Il2CppObject *)0x0;
          }
        }
      }
      else {
        unaff_RBX = 0;
        uVar3 = items->max_length & 0xffffffff;
        if (uVar3 != 0) {
          do {
            pIVar6 = items->m_Items[unaff_RBX];
            if (pIVar6 != (Il2CppObject *)0x0) {
              a = (System_String_o *)
                  (*(code *)(getId->fields).invoke_impl)
                            ((getId->fields).method_code,pIVar6,(getId->fields).method);
              pSVar5 = id;
              bVar1 = System_String__Equals_3af50f0(a,id,5,(MethodInfo *)0x0);
              if ((char)bVar1 != '\0') {
                return pIVar6;
              }
              uVar3 = (ulong)(uint)items->max_length;
            }
            unaff_RBX = unaff_RBX + 1;
            if ((long)(int)uVar3 <= (long)unaff_RBX) {
              return (Il2CppObject *)0x0;
            }
          } while (unaff_RBX < uVar3);
        }
      }
      il2cpp_runtime_helper_022b2ca0();
label_0265b59d:
      il2cpp_runtime_helper_022b2c90();
      pIVar6 = (Il2CppObject *)((ulong)pSVar5 & 0xffffffff);
      uStack_40 = unaff_RBX;
      pSStack_38 = getId;
      if (*(long *)(extraout_RDX + 0x38) == 0) {
        il2cpp_runtime_helper_02300a20(extraout_RDX);
      }
      uStack_44 = 0;
      bVar1 = System_String__IsNullOrEmpty(a,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar1 = System_Enum__TryParse_Int32Enum__2501010
                          (a,1,(int32_t *)&uStack_44,
                           (MethodInfo_2501010 *)**(undefined8 **)(extraout_RDX + 0x38));
        if ((char)bVar1 != '\0') {
          pIVar6 = (Il2CppObject *)(ulong)uStack_44;
        }
      }
      return pIVar6;
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Data.GisketchManifestDefinition$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Data_GisketchManifestDefinition___ctor (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* __this, const MethodInfo* method);
// 0x3b5b090

void Gisketch_Aottg2UI_Data_GisketchManifestDefinition___ctor
               (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this,MethodInfo *method)

{
  (__this->fields).schemaVersion = 1;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}



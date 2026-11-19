// Type: Gisketch.Aottg2UI.Game.AottgServerRegion
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgServerRegion.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgServerRegion$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerRegion___ctor (Gisketch_Aottg2UI_Game_AottgServerRegion_o __this, System_String_o* id, System_String_o* label, int32_t region, System_String_o* mask, UnityEngine_Rect_o maskArea, UnityEngine_Vector2_o labelPoint, const MethodInfo* method);
// 0x58d27c0

void Gisketch_Aottg2UI_Game_AottgServerRegion___ctor
               (Gisketch_Aottg2UI_Game_AottgServerRegion_o *__this,System_String_o *id,System_String_o *label,
               int32_t region,System_String_o *mask,UnityEngine_Rect_o maskArea,
               UnityEngine_Vector2_o labelPoint,MethodInfo *method)

{
  System_String_o *pSVar1;
  float fStack_58;
  float fStack_54;
  
  if (Il2CppMethodInitialized_07545486 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/ServerSelect/");
    Il2CppMethodInitialized_07545486 = '\x01';
  }
  (__this->fields).Id = id;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).Label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Label);
  (__this->fields).Region = region;
  pSVar1 = System_String__Concat_52f0320("UI/Sprites/ServerSelect/",mask,(MethodInfo *)0x0);
  (__this->fields).MaskSprite = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MaskSprite);
  fStack_58 = maskArea.fields.m_XMin;
  fStack_54 = maskArea.fields.m_YMin;
  (__this->fields).MaskArea.fields.m_XMin = fStack_58;
  (__this->fields).MaskArea.fields.m_YMin = fStack_54;
  (__this->fields).MaskArea.fields.m_Width = maskArea.fields.m_Width;
  (__this->fields).MaskArea.fields.m_Height = maskArea.fields.m_Height;
  (__this->fields).LabelPoint.fields = labelPoint.fields;
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerRegion$$get_MapSprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgServerRegion__get_MapSprite (const MethodInfo* method);
// 0x58d2870

System_String_o * Gisketch_Aottg2UI_Game_AottgServerRegion__get_MapSprite(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545487 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/ServerSelect/WorldMap");
    Il2CppMethodInitialized_07545487 = '\x01';
  }
  return "UI/Sprites/ServerSelect/WorldMap";
}


// Gisketch.Aottg2UI.Game.AottgServerRegion$$Area
// il2cpp: UnityEngine_Rect_o Gisketch_Aottg2UI_Game_AottgServerRegion__Area (float centerX, float centerY, float width, float height, const MethodInfo* method);
// 0x58d28a0

UnityEngine_Rect_o
Gisketch_Aottg2UI_Game_AottgServerRegion__Area
          (float centerX,float centerY,float width,float height,MethodInfo *method)

{
  UnityEngine_Rect_o UVar1;
  
  UVar1.fields.m_XMin = centerX + width * -0.5;
  UVar1.fields.m_YMin = centerY + height * -0.5;
  UVar1.fields.m_Height = height;
  UVar1.fields.m_Width = width;
  return (UnityEngine_Rect_o)UVar1.fields;
}


// Gisketch.Aottg2UI.Game.AottgServerRegion$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerRegion___cctor (const MethodInfo* method);
// 0x58d28c0

void Gisketch_Aottg2UI_Game_AottgServerRegion___cctor(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgServerRegion_array *pGVar3;
  System_String_o *local_140;
  System_String_o *pSStack_138;
  undefined8 uStack_130;
  System_String_o *pSStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  System_String_o *local_108;
  System_String_o *pSStack_100;
  undefined8 uStack_f8;
  System_String_o *pSStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  System_String_o *local_d0;
  System_String_o *pSStack_c8;
  ulong uStack_c0;
  System_String_o *pSStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  System_String_o *local_98;
  System_String_o *pSStack_90;
  undefined8 uStack_88;
  System_String_o *pSStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  System_String_o *local_60;
  System_String_o *pSStack_58;
  undefined8 uStack_50;
  System_String_o *pSStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_07545488 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion);
    il2cpp_codegen_initialize_runtime_metadata(&"CN");
    il2cpp_codegen_initialize_runtime_metadata(&"ASIA");
    il2cpp_codegen_initialize_runtime_metadata(&"RegionChina");
    il2cpp_codegen_initialize_runtime_metadata(&"RegionNorthAmerica");
    il2cpp_codegen_initialize_runtime_metadata(&"sa");
    il2cpp_codegen_initialize_runtime_metadata(&"RegionSouthAmerica");
    il2cpp_codegen_initialize_runtime_metadata(&"SA");
    il2cpp_codegen_initialize_runtime_metadata(&"us");
    il2cpp_codegen_initialize_runtime_metadata(&"eu");
    il2cpp_codegen_initialize_runtime_metadata(&"RegionEurope");
    il2cpp_codegen_initialize_runtime_metadata(&"RegionAsia");
    il2cpp_codegen_initialize_runtime_metadata(&"asia");
    il2cpp_codegen_initialize_runtime_metadata(&"US");
    il2cpp_codegen_initialize_runtime_metadata(&"cn");
    il2cpp_codegen_initialize_runtime_metadata(&"EU");
    Il2CppMethodInitialized_07545488 = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Game_AottgServerRegion_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion_array,5);
  local_60 = "us";
  pSVar2 = "US";
  pSVar1 = "RegionNorthAmerica";
  local_38 = 0;
  uStack_30 = 0;
  pSStack_48 = (System_String_o *)0x0;
  uStack_40 = 0;
  pSStack_58 = (System_String_o *)0x0;
  uStack_50 = 0;
  if (Il2CppMethodInitialized_07545486 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/ServerSelect/");
    Il2CppMethodInitialized_07545486 = '\x01';
  }
  Il2CppCodeGenWriteBarrier(&local_60);
  pSStack_58 = pSVar2;
  Il2CppCodeGenWriteBarrier(&pSStack_58);
  uStack_50 = CONCAT44(uStack_50._4_4_,1);
  pSStack_48 = System_String__Concat_52f0320("UI/Sprites/ServerSelect/",pSVar1,(MethodInfo *)0x0);
  Il2CppCodeGenWriteBarrier(&pSStack_48);
  uStack_40 = 0x3ed24dd4bb2a64c0;
  local_38 = 0x3f163f143ee5119d;
  uStack_30 = 0x3f27ae143e54fdf4;
  if (pGVar3 == (Gisketch_Aottg2UI_Game_AottgServerRegion_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar3->max_length != 0) {
    pGVar3->m_Items[0].fields.LabelPoint.fields = (UnityEngine_Vector2_Fields)0x3f27ae143e54fdf4;
    pGVar3->m_Items[0].fields.MaskArea.fields.m_XMin = -0.0025999993;
    pGVar3->m_Items[0].fields.MaskArea.fields.m_YMin = 0.41075003;
    pGVar3->m_Items[0].fields.MaskArea.fields.m_Width = 0.4474;
    pGVar3->m_Items[0].fields.MaskArea.fields.m_Height = 0.5869;
    *(undefined8 *)&pGVar3->m_Items[0].fields.Region = uStack_50;
    pGVar3->m_Items[0].fields.MaskSprite = pSStack_48;
    pGVar3->m_Items[0].fields.Id = local_60;
    pGVar3->m_Items[0].fields.Label = pSStack_58;
    Il2CppCodeGenWriteBarrier((void **)pGVar3->m_Items);
    local_98 = "sa";
    pSVar2 = "SA";
    pSVar1 = "RegionSouthAmerica";
    local_70 = 0;
    uStack_68 = 0;
    pSStack_80 = (System_String_o *)0x0;
    uStack_78 = 0;
    pSStack_90 = (System_String_o *)0x0;
    uStack_88 = 0;
    if (Il2CppMethodInitialized_07545486 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/ServerSelect/");
      Il2CppMethodInitialized_07545486 = '\x01';
    }
    Il2CppCodeGenWriteBarrier(&local_98);
    pSStack_90 = pSVar2;
    Il2CppCodeGenWriteBarrier(&pSStack_90);
    uStack_88 = CONCAT44(uStack_88._4_4_,2);
    pSStack_80 = System_String__Concat_52f0320("UI/Sprites/ServerSelect/",pSVar1,(MethodInfo *)0x0);
    Il2CppCodeGenWriteBarrier(&pSStack_80);
    uStack_78 = 0xbc28c1503e7e1b08;
    local_70 = 0x3f0027523e03fe5d;
    uStack_68 = 0x3e9eb8523ea04189;
    if ((pGVar3->max_length & 0xfffffffe) != 0) {
      pGVar3->m_Items[1].fields.LabelPoint.fields = (UnityEngine_Vector2_Fields)0x3e9eb8523ea04189;
      pGVar3->m_Items[1].fields.MaskArea.fields.m_XMin = 0.24814999;
      pGVar3->m_Items[1].fields.MaskArea.fields.m_YMin = -0.010299996;
      pGVar3->m_Items[1].fields.MaskArea.fields.m_Width = 0.1289;
      pGVar3->m_Items[1].fields.MaskArea.fields.m_Height = 0.5006;
      *(undefined8 *)&pGVar3->m_Items[1].fields.Region = uStack_88;
      pGVar3->m_Items[1].fields.MaskSprite = pSStack_80;
      pGVar3->m_Items[1].fields.Id = local_98;
      pGVar3->m_Items[1].fields.Label = pSStack_90;
      Il2CppCodeGenWriteBarrier((void **)(pGVar3->m_Items + 1));
      local_d0 = "eu";
      pSVar2 = "RegionEurope";
      pSVar1 = "EU";
      local_a8 = 0;
      uStack_a0 = 0;
      pSStack_b8 = (System_String_o *)0x0;
      uStack_b0 = 0;
      pSStack_c8 = (System_String_o *)0x0;
      uStack_c0 = 0;
      if (Il2CppMethodInitialized_07545486 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/ServerSelect/");
        Il2CppMethodInitialized_07545486 = '\x01';
      }
      Il2CppCodeGenWriteBarrier(&local_d0);
      pSStack_c8 = pSVar1;
      Il2CppCodeGenWriteBarrier(&pSStack_c8);
      uStack_c0 = uStack_c0 & 0xffffffff00000000;
      pSStack_b8 = System_String__Concat_52f0320("UI/Sprites/ServerSelect/",pSVar2,(MethodInfo *)0x0);
      Il2CppCodeGenWriteBarrier(&pSStack_b8);
      uStack_b0 = 0x3f1219653ed3d70a;
      local_a8 = 0x3edba5e33e857a78;
      uStack_a0 = 0x3f347ae13f020c4a;
      if (2 < (uint)pGVar3->max_length) {
        pGVar3->m_Items[2].fields.LabelPoint.fields = (UnityEngine_Vector2_Fields)0x3f347ae13f020c4a;
        pGVar3->m_Items[2].fields.MaskArea.fields.m_XMin = 0.41375;
        pGVar3->m_Items[2].fields.MaskArea.fields.m_YMin = 0.5707;
        pGVar3->m_Items[2].fields.MaskArea.fields.m_Width = 0.2607;
        pGVar3->m_Items[2].fields.MaskArea.fields.m_Height = 0.429;
        *(ulong *)&pGVar3->m_Items[2].fields.Region = uStack_c0;
        pGVar3->m_Items[2].fields.MaskSprite = pSStack_b8;
        pGVar3->m_Items[2].fields.Id = local_d0;
        pGVar3->m_Items[2].fields.Label = pSStack_c8;
        Il2CppCodeGenWriteBarrier((void **)(pGVar3->m_Items + 2));
        local_108 = "asia";
        pSVar2 = "RegionAsia";
        pSVar1 = "ASIA";
        local_e0 = 0;
        uStack_d8 = 0;
        pSStack_f0 = (System_String_o *)0x0;
        uStack_e8 = 0;
        pSStack_100 = (System_String_o *)0x0;
        uStack_f8 = 0;
        if (Il2CppMethodInitialized_07545486 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/ServerSelect/");
          Il2CppMethodInitialized_07545486 = '\x01';
        }
        Il2CppCodeGenWriteBarrier(&local_108);
        pSStack_100 = pSVar1;
        Il2CppCodeGenWriteBarrier(&pSStack_100);
        uStack_f8 = CONCAT44(uStack_f8._4_4_,3);
        pSStack_f0 = System_String__Concat_52f0320("UI/Sprites/ServerSelect/",pSVar2,(MethodInfo *)0x0);
        Il2CppCodeGenWriteBarrier(&pSStack_f0);
        uStack_e8 = 0x3d6e97903f242268;
        local_e0 = 0x3f0dd97f3ea7fcb9;
        uStack_d8 = 0x3edc28f63f48f5c3;
        if ((pGVar3->max_length & 0xfffffffc) != 0) {
          pGVar3->m_Items[3].fields.LabelPoint.fields = (UnityEngine_Vector2_Fields)0x3edc28f63f48f5c3;
          pGVar3->m_Items[3].fields.MaskArea.fields.m_XMin = 0.64115;
          pGVar3->m_Items[3].fields.MaskArea.fields.m_YMin = 0.05825001;
          pGVar3->m_Items[3].fields.MaskArea.fields.m_Width = 0.3281;
          pGVar3->m_Items[3].fields.MaskArea.fields.m_Height = 0.5541;
          *(undefined8 *)&pGVar3->m_Items[3].fields.Region = uStack_f8;
          pGVar3->m_Items[3].fields.MaskSprite = pSStack_f0;
          pGVar3->m_Items[3].fields.Id = local_108;
          pGVar3->m_Items[3].fields.Label = pSStack_100;
          Il2CppCodeGenWriteBarrier((void **)(pGVar3->m_Items + 3));
          local_140 = "cn";
          pSVar2 = "RegionChina";
          pSVar1 = "CN";
          local_118 = 0;
          uStack_110 = 0;
          pSStack_128 = (System_String_o *)0x0;
          uStack_120 = 0;
          pSStack_138 = (System_String_o *)0x0;
          uStack_130 = 0;
          if (Il2CppMethodInitialized_07545486 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/ServerSelect/");
            Il2CppMethodInitialized_07545486 = '\x01';
          }
          Il2CppCodeGenWriteBarrier(&local_140);
          pSStack_138 = pSVar1;
          Il2CppCodeGenWriteBarrier(&pSStack_138);
          uStack_130 = CONCAT44(uStack_130._4_4_,4);
          pSStack_128 = System_String__Concat_52f0320("UI/Sprites/ServerSelect/",pSVar2,(MethodInfo *)0x0);
          Il2CppCodeGenWriteBarrier(&pSStack_128);
          uStack_120 = 0x3ef374bc3f2ca233;
          local_118 = 0x3e8f90973e30068e;
          uStack_110 = 0x3f1ae1483f428f5c;
          if (4 < (uint)pGVar3->max_length) {
            pGVar3->m_Items[4].fields.LabelPoint.fields = (UnityEngine_Vector2_Fields)0x3f1ae1483f428f5c;
            pGVar3->m_Items[4].fields.MaskArea.fields.m_XMin = 0.67434996;
            pGVar3->m_Items[4].fields.MaskArea.fields.m_YMin = 0.4755;
            pGVar3->m_Items[4].fields.MaskArea.fields.m_Width = 0.1719;
            pGVar3->m_Items[4].fields.MaskArea.fields.m_Height = 0.2804;
            *(undefined8 *)&pGVar3->m_Items[4].fields.Region = uStack_130;
            pGVar3->m_Items[4].fields.MaskSprite = pSStack_128;
            pGVar3->m_Items[4].fields.Id = local_140;
            pGVar3->m_Items[4].fields.Label = pSStack_138;
            Il2CppCodeGenWriteBarrier((void **)(pGVar3->m_Items + 4));
            TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->static_fields->All = pGVar3;
            Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgServerRegion->static_fields->All);
            return;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}



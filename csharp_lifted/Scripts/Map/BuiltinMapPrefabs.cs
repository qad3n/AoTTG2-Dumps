// ==================== AoTTG2 cross-reference ====================
// Type: Map.BuiltinMapPrefabs
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/BuiltinMapPrefabs.c
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinMapPrefabs.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Map;

[Token(Token = "0x20003E9")]
internal class BuiltinMapPrefabs
{
	[Token(Token = "0x40013F9")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _prefabList;

	[Token(Token = "0x40013FA")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, MapScriptBaseObject> AllPrefabs;

	[Token(Token = "0x40013FB")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, List<MapScriptBaseObject>> PrefabCategories;

	[Token(Token = "0x40013FC")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, MapScriptBaseObject> AllPrefabsLower;

	[Token(Token = "0x40013FD")]
	[FieldOffset(Offset = "0x20")]
	public static Dictionary<string, string> PrefabPreviews;

	[Token(Token = "0x40013FE")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<string, List<string>> PrefabVariants;

	[Token(Token = "0x40013FF")]
	[FieldOffset(Offset = "0x30")]
	public static Dictionary<string, string> VariantToBasePrefab;

	[Token(Token = "0x60018F2")]
	[Address(RVA = "0x5875C70", Offset = "0x5874C70", VA = "0x5875C70")]
	public static void Init()
	{
		// Lifted from source/cpp/Map/BuiltinMapPrefabs.c (Map.BuiltinMapPrefabs$$Init): 29 lines keep C-only constructs
		String* targetAddress;
		int piVar1;
		byte bVar2;
		uint uVar3;
		Dictionary<object, object> pSVar4;
		List<MapScriptComponent> __this;
		MapScriptComponent[] pMVar5;
		Object[] pSVar6;
		bool bVar8;
		Object __this_00;
		String pSVar9;
		JSONNode pSVar10;
		JSONNode pSVar11;
		JSONNode pSVar12;
		List<MapScriptBaseObject> __this_01;
		MapScriptSceneObject __this_02;
		MapScriptBaseMaterial pMVar13;
		MapScriptComponent __this_03;
		String pSVar14;
		List<string> __this_04;
		List<object> pSVar15;
		float fVar16;
		KeyValuePair<string, JSONNode> SVar17;
		String local_218;
		JSONNode.Enumerator local_200;
		JSONNode.Enumerator local_1b8;
		JSONNode.Enumerator local_168;
		JSONNode.Enumerator local_118;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_118.m_Array._list = null;
		local_118.m_Array._index = 0;
		local_118.m_Array._version = 0;
		local_118.m_Object._current.value = null;
		local_118.m_Object._getEnumeratorRetType = 0;
		local_118.m_Object._36_4_ = 0;
		local_118.m_Object._version = 0;
		local_118.m_Object._index = 0;
		local_118.m_Object._current.key = null;
		local_118.type = 0;
		local_118._4_4_ = 0;
		local_118.m_Object._dictionary = null;
		local_118.m_Array._current = null;
		local_c8.m_Array._list = null;
		local_c8.m_Array._index = 0;
		local_c8.m_Array._version = 0;
		local_c8.m_Object._current.value = null;
		local_c8.m_Object._getEnumeratorRetType = 0;
		local_c8.m_Object._36_4_ = 0;
		local_c8.m_Object._version = 0;
		local_c8.m_Object._index = 0;
		local_c8.m_Object._current.key = null;
		local_c8.type = 0;
		local_c8._4_4_ = 0;
		local_c8.m_Object._dictionary = null;
		local_c8.m_Array._current = null;
		local_168.m_Array._list = null;
		local_168.m_Array._index = 0;
		local_168.m_Array._version = 0;
		local_168.m_Object._current.value = null;
		local_168.m_Object._getEnumeratorRetType = 0;
		local_168.m_Object._36_4_ = 0;
		local_168.m_Object._version = 0;
		local_168.m_Object._index = 0;
		local_168.m_Object._current.key = null;
		local_168.type = 0;
		local_168._4_4_ = 0;
		local_168.m_Object._dictionary = null;
		local_168.m_Array._current = null;
		local_1b8.m_Array._list = null;
		local_1b8.m_Array._index = 0;
		local_1b8.m_Array._version = 0;
		local_1b8.m_Object._current.value = null;
		local_1b8.m_Object._getEnumeratorRetType = 0;
		local_1b8.m_Object._36_4_ = 0;
		local_1b8.m_Object._version = 0;
		local_1b8.m_Object._index = 0;
		local_1b8.m_Object._current.key = null;
		local_1b8.type = 0;
		local_1b8._4_4_ = 0;
		local_1b8.m_Object._dictionary = null;
		local_1b8.m_Array._current = null;
		pSVar9 = ResourcePaths.Info;
		__this_00 = ResourceManager.LoadAsset(pSVar9, "MapPrefabList", false, false);
		if (__this_00 != null) {
			bVar2 = (typeof(TextAsset)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar2) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(TextAsset))) {
				throw new InvalidCastException();
			}
			pSVar9 = __this_00.text;
			pSVar10 = JSON.Parse(pSVar9);
			BuiltinMapPrefabs._prefabList = pSVar10;
			pSVar10 = BuiltinMapPrefabs._prefabList;
			if (pSVar10 != null) {
				local_200 = pSVar10.Keys;
				local_c8.m_Array._current = local_200.m_Array._current;
				local_c8.m_Array._list = local_200.m_Array._list;
				local_c8.m_Array._index = local_200.m_Array._index;
				local_c8.m_Array._version = local_200.m_Array._version;
				local_c8.m_Object._current.value = local_200.m_Object._current.value;
				local_c8.m_Object._getEnumeratorRetType = local_200.m_Object._getEnumeratorRetType;
				local_c8.m_Object._36_4_ = local_200.m_Object._36_4_;
				local_c8.m_Object._version = local_200.m_Object._version;
				local_c8.m_Object._index = local_200.m_Object._index;
				local_c8.m_Object._current.key = local_200.m_Object._current.key;
				local_c8.type = local_200.type;
				local_c8._4_4_ = local_200._4_4_;
				local_c8.m_Object._dictionary = local_200.m_Object._dictionary;
				local_78 = local_c8.GetEnumerator();
				local_118.m_Array._current = local_78.m_Array._current;
				local_118.m_Array._list = local_78.m_Array._list;
				local_118.m_Array._index = local_78.m_Array._index;
				local_118.m_Array._version = local_78.m_Array._version;
				local_118.m_Object._current.value = local_78.m_Object._current.value;
				local_118.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
				local_118.m_Object._36_4_ = local_78.m_Object._36_4_;
				local_118.m_Object._version = local_78.m_Object._version;
				local_118.m_Object._index = local_78.m_Object._index;
				local_118.m_Object._current.key = local_78.m_Object._current.key;
				local_118.type = local_78.type;
				local_118._4_4_ = local_78._4_4_;
				local_118.m_Object._dictionary = local_78.m_Object._dictionary;
				bVar8 = local_118.MoveNext();
				if (bVar8) {
					do {
						local_218 = local_118.Current;
						pSVar10 = BuiltinMapPrefabs._prefabList;
						if (((pSVar10 == null) ||(pSVar10 = pSVar10.get_Item(local_218), pSVar10 == null)) ||(pSVar11 = pSVar10.get_Item("Info"), pSVar11 == null)) goto label_059770c9;
						bVar8 = pSVar11.HasKey("Category");
						if (bVar8) {
							pSVar12 = pSVar11.get_Item("Category");
							if (pSVar12 == null) goto label_059770c9;
							local_218 = pSVar12.get_Value();
						}
						pSVar4 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabCategories;
						if (pSVar4 == null) goto label_059770c9;
						bVar8 = pSVar4.ContainsKey((object)local_218);
						if (!bVar8) {
							pSVar4 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabCategories;
							__this_01 = il2cpp_codegen_object_new(typeof(List<MapScriptBaseObject>));
							__this_01 = new List<object>();
							if (pSVar4 == null) goto label_059770c9;
							pSVar4.Add((object)local_218, (object)__this_01);
						}
						pSVar10 = pSVar10.get_Item("Prefabs");
						if (pSVar10 == null) goto label_059770c9;
						local_200.unknown(pSVar10);
						local_168.m_Array._current = local_200.m_Array._current;
						local_168.m_Array._list = local_200.m_Array._list;
						local_168.m_Array._index = local_200.m_Array._index;
						local_168.m_Array._version = local_200.m_Array._version;
						local_168.m_Object._current.value = local_200.m_Object._current.value;
						local_168.m_Object._getEnumeratorRetType = local_200.m_Object._getEnumeratorRetType;
						local_168.m_Object._36_4_ = local_200.m_Object._36_4_;
						local_168.m_Object._version = local_200.m_Object._version;
						local_168.m_Object._index = local_200.m_Object._index;
						local_168.m_Object._current.key = local_200.m_Object._current.key;
						local_168.type = local_200.type;
						local_168._4_4_ = local_200._4_4_;
						local_168.m_Object._dictionary = local_200.m_Object._dictionary;
	label_059763ba: ;
						bVar8 = local_168.MoveNext();
						if (bVar8) {
							SVar17 = local_168.Current;
							pSVar10 = ((JSONNode)SVar17);
							__this_02 = new MapScriptSceneObject();
							pSVar12 = pSVar11.get_Item("Type");
							if ((pSVar12 != null) &&(pSVar9 = pSVar12.get_Value(), __this_02 != null)) {
								__this_02.Type = pSVar9;
								if ((pSVar10 == null) ||(pSVar12 = pSVar10.get_Item("Name"), pSVar12 == null)) goto label_059770c9;
								pSVar9 = pSVar12.get_Value();
								targetAddress = &__this_02.Name;
								__this_02.Name = pSVar9;
								pSVar9 = (String)**(ulong*)(g_data_07556758 + 0xb8);
								bVar8 = pSVar11.HasKey("AssetSameAsName");
								if (bVar8) {
									pSVar12 = pSVar11.get_Item("AssetSameAsName");
									if (pSVar12 == null) goto label_059770c9;
									bVar8 = pSVar12.get_AsBool();
									if (bVar8) {
										pSVar12 = pSVar10.get_Item("Name");
										if (pSVar12 == null) goto label_059770c9;
										pSVar9 = pSVar12.get_Value();
									}
								}
								bVar8 = pSVar10.HasKey("Asset");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("Asset");
									if (pSVar12 == null) goto label_059770c9;
									pSVar9 = pSVar12.get_Value();
								}
								bVar8 = (pSVar9 == (String)**(ulong*)(g_data_07556758 + 0xb8));
								if (bVar8) {
	label_05976618: ;
									pSVar9 = "None";
								}
								else {
									bVar8 = (pSVar9 == "None");
									pSVar14 = "";
									if (bVar8) goto label_05976618;
									bVar8 = pSVar11.HasKey("AssetBasePath");
									if (bVar8) {
										pSVar12 = pSVar11.get_Item("AssetBasePath");
										if ((pSVar12 == null) ||(pSVar14 = pSVar12.get_Value(), pSVar14 == null)) goto label_059770c9;
										bVar8 = pSVar14.EndsWith("/");
										if (!bVar8) {
											pSVar14 = String.Concat(pSVar14, "/");
										}
									}
									else {
										bVar8 = pSVar11.HasKey("AssetPrefix") ;
										if (bVar8) {
											pSVar12 = pSVar11.get_Item("AssetPrefix");
											if (pSVar12 == null) goto label_059770c9;
											pSVar14 = pSVar12.get_Value();
										}
									}
									pSVar9 = String.Concat(pSVar14, pSVar9);
								}
								__this_02.Asset = pSVar9;
								bVar8 = pSVar10.HasKey("Static");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("Static");
									if (pSVar12 == null) goto label_059770c9;
									bVar8 = pSVar12.get_AsBool();
									__this_02.Static = bVar8;
								}
								bVar8 = pSVar10.HasKey("Networked");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("Networked");
									if (pSVar12 == null) goto label_059770c9;
									bVar8 = pSVar12.get_AsBool();
									__this_02.Networked = bVar8;
								}
								bVar8 = pSVar10.HasKey("Visible");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("Visible");
									if (pSVar12 == null) goto label_059770c9;
									bVar8 = pSVar12.get_AsBool();
									__this_02.Visible = bVar8;
								}
								bVar8 = pSVar10.HasKey("CollideMode");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("CollideMode");
									if (pSVar12 == null) goto label_059770c9;
									pSVar9 = pSVar12.get_Value();
									__this_02.CollideMode = pSVar9;
								}
								bVar8 = pSVar10.HasKey("CollideWith");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("CollideWith");
									if (pSVar12 == null) goto label_059770c9;
									pSVar9 = pSVar12.get_Value();
									__this_02.CollideWith = pSVar9;
								}
								bVar8 = pSVar10.HasKey("Material");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("Material");
									if (pSVar12 == null) goto label_059770c9;
									pSVar9 = pSVar12.get_Value();
									pMVar13 = MapScriptSceneObject.DeserializeMaterial(pSVar9);
									__this_02.Material = pMVar13;
								}
								bVar8 = pSVar10.HasKey("Components");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("Components");
									if (pSVar12 == null) goto label_059770c9;
									local_200.unknown(pSVar12);
									local_1b8.m_Array._current = local_200.m_Array._current;
									local_1b8.m_Array._list = local_200.m_Array._list;
									local_1b8.m_Array._index = local_200.m_Array._index;
									local_1b8.m_Array._version = local_200.m_Array._version;
									local_1b8.m_Object._current.value = local_200.m_Object._current.value;
									local_1b8.m_Object._getEnumeratorRetType = local_200.m_Object._getEnumeratorRetType;
									local_1b8.m_Object._36_4_ = local_200.m_Object._36_4_;
									local_1b8.m_Object._version = local_200.m_Object._version;
									local_1b8.m_Object._index = local_200.m_Object._index;
									local_1b8.m_Object._current.key = local_200.m_Object._current.key;
									local_1b8.type = local_200.type;
									local_1b8._4_4_ = local_200._4_4_;
									local_1b8.m_Object._dictionary = local_200.m_Object._dictionary;
									while (bVar8 = local_1b8.MoveNext()) {
										SVar17 = local_1b8.Current;
										pSVar12 = ((JSONNode)SVar17);
										__this_03 = new MapScriptComponent();
										if ((pSVar12 == null) ||(pSVar9 = pSVar12.get_Value(), __this_03 == null)) goto label_059770c9;
										__this_03.Deserialize(pSVar9);
										__this = __this_02.Components;
										if (__this == null) goto label_059770c9;
										piVar1 = &__this._version;
										*piVar1 = *piVar1 + 1;
										pMVar5 = __this._items;
										if (pMVar5 == null) goto label_059770c9;
										uVar3 = __this._size;
										if (uVar3 < (uint)pMVar5.Length) {
											__this._size = uVar3 + 1;
											pMVar5[(int)uVar3] = __this_03;
										}
										else {
											__this.AddWithResize((object)__this_03);
										}
									}
								}
								bVar8 = pSVar10.HasKey("ScaleX");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("ScaleX");
									if (pSVar12 == null) goto label_059770c9;
									fVar16 = pSVar12.get_AsFloat();
									__this_02.ScaleX = fVar16;
								}
								bVar8 = pSVar10.HasKey("ScaleY");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("ScaleY");
									if (pSVar12 == null) goto label_059770c9;
									fVar16 = pSVar12.get_AsFloat();
									__this_02.ScaleX = fVar16;
								}
								bVar8 = pSVar10.HasKey("ScaleZ");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("ScaleZ");
									if (pSVar12 == null) goto label_059770c9;
									fVar16 = pSVar12.get_AsFloat();
									__this_02.ScaleX = fVar16;
								}
								bVar8 = pSVar10.HasKey("Preview");
								if (bVar8) {
									pSVar4 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabPreviews;
									pSVar9 = *targetAddress;
									pSVar12 = pSVar10.get_Item("Preview");
									if ((pSVar12 == null) ||(pSVar14 = pSVar12.get_Value(), pSVar4 == null)) goto label_059770c9;
									pSVar4.Add((object)pSVar9, (object)pSVar14);
								}
								bVar8 = pSVar10.HasKey("Variant");
								if (bVar8) {
									pSVar12 = pSVar10.get_Item("Variant");
									if (pSVar12 == null) goto label_059770c9;
									pSVar9 = pSVar12.get_Value();
									bVar8 = (pSVar9 != *targetAddress);
									if (bVar8) {
										pSVar4 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabVariants;
										if (pSVar4 == null) goto label_059770c9;
										bVar8 = pSVar4.ContainsKey((object)pSVar9);
										if (!bVar8) {
											pSVar4 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabVariants;
											__this_04 = new List<string>();
											if (pSVar4 == null) goto label_059770c9;
											pSVar4.Add((object)pSVar9, (object)__this_04);
										}
										pSVar4 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabVariants;
										if (pSVar4 == null) goto label_059770c9;
										pSVar15 = (List<object>)pSVar4.get_Item((object)pSVar9);
										if (pSVar15 == null) goto label_059770c9;
										pSVar14 = *targetAddress;
										piVar1 = &pSVar15._version;
										*piVar1 = *piVar1 + 1;
										pSVar6 = pSVar15._items;
										if (pSVar6 == null) goto label_059770c9;
										uVar3 = pSVar15._size;
										if (uVar3 < (uint)pSVar6.Length) {
											pSVar15._size = uVar3 + 1;
											pSVar6[(int)uVar3] = (object)pSVar14;
										}
										else {
											pSVar15.AddWithResize((object)pSVar14);
										}
										pSVar4 = (Dictionary<object, object>)BuiltinMapPrefabs.VariantToBasePrefab;
										if (pSVar4 == null) goto label_059770c9;
										pSVar4.set_Item((object)*targetAddress, (object)pSVar9);
									}
								}
								pSVar4 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabs;
								if (pSVar4 != null) {
									pSVar4.Add((object)__this_02.Name, (object)__this_02);
									pSVar9 = __this_02.Name;
									if (pSVar9 != null) {
										pSVar4 = (Dictionary<object, object>)BuiltinMapPrefabs.AllPrefabsLower;
										pSVar9 = pSVar9.ToLower();
										if (pSVar4 != null) {
											pSVar4.Add((object)pSVar9, (object)__this_02);
											bVar8 = pSVar10.HasKey("Hidden");
											if (!bVar8) goto label_05977036;
											pSVar10 = pSVar10.get_Item("Hidden");
											if (pSVar10 != null) goto code_r0x0597701b;
										}
									}
								}
							}
							goto label_059770c9;
						}
						bVar8 = local_118.MoveNext();
					} while (bVar8);
				}
				return;
			}
		}
	label_059770c9: ;
		throw new NullReferenceException();
	code_r0x0597701b: ;
		bVar8 = pSVar10.get_AsBool();
		if (!bVar8) {
	label_05977036: ;
			pSVar4 = (Dictionary<object, object>)BuiltinMapPrefabs.PrefabCategories;
			if (pSVar4 == null) goto label_059770c9;
			pSVar15 = (List<object>)pSVar4.get_Item((object)local_218);
			if (pSVar15 == null) goto label_059770c9;
			piVar1 = &pSVar15._version;
			*piVar1 = *piVar1 + 1;
			pSVar6 = pSVar15._items;
			if (pSVar6 == null) goto label_059770c9;
			uVar3 = pSVar15._size;
			if (uVar3 < (uint)pSVar6.Length) {
				pSVar15._size = uVar3 + 1;
				pSVar6[(int)uVar3] = (object)__this_02;
			}
			else {
				pSVar15.AddWithResize((object)__this_02);
			}
		}
		goto label_059763ba;
	}

	[Token(Token = "0x60018F3")]
	[Address(RVA = "0x58770E0", Offset = "0x58760E0", VA = "0x58770E0")]
	public BuiltinMapPrefabs()
	{
		// Lifted from source/cpp/Map/BuiltinMapPrefabs.c (Map.BuiltinMapPrefabs$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/BuiltinMapPrefabs.c.

	// Map.BuiltinMapPrefabs$$.cctor: 3 lines keep C-only constructs
	static BuiltinMapPrefabs()
	{
		Map_BuiltinMapPrefabs_StaticFields pMVar1;
		Dictionary<string, MapScriptBaseObject> pSVar2;
		Dictionary<string, List<MapScriptBaseObject>> __this;
		Dictionary<string, string> pSVar3;
		Dictionary<string, List<string>> __this_00;

		pSVar2 = il2cpp_codegen_object_new(typeof(Dictionary<string, MapScriptBaseObject>));
		pSVar2 = new Dictionary<object, object>();
		pMVar1 = typeof(BuiltinMapPrefabs).static_fields;
		pMVar1.AllPrefabs = pSVar2;
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, List<MapScriptBaseObject>>));
		__this = new Dictionary<object, object>();
		pMVar1 = typeof(BuiltinMapPrefabs).static_fields;
		pMVar1.PrefabCategories = __this;
		pSVar2 = il2cpp_codegen_object_new(typeof(Dictionary<string, MapScriptBaseObject>));
		pSVar2 = new Dictionary<object, object>();
		pMVar1 = typeof(BuiltinMapPrefabs).static_fields;
		pMVar1.AllPrefabsLower = pSVar2;
		pSVar3 = new Dictionary<string, string>();
		pMVar1 = typeof(BuiltinMapPrefabs).static_fields;
		pMVar1.PrefabPreviews = pSVar3;
		__this_00 = new Dictionary<string, List<string>>();
		pMVar1 = typeof(BuiltinMapPrefabs).static_fields;
		pMVar1.PrefabVariants = __this_00;
		pSVar3 = new Dictionary<string, string>();
		pMVar1 = typeof(BuiltinMapPrefabs).static_fields;
		pMVar1.VariantToBasePrefab = pSVar3;
		return;
	}
}

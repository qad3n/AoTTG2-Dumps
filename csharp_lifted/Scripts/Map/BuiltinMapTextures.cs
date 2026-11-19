// ==================== AoTTG2 cross-reference ====================
// Type: Map.BuiltinMapTextures
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/BuiltinMapTextures.c
// Prior real C# source (older reference): Assets/Scripts/Map/BuiltinMapTextures.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Map;

[Token(Token = "0x20003EA")]
internal class BuiltinMapTextures
{
	[Token(Token = "0x4001400")]
	[FieldOffset(Offset = "0x0")]
	private static JSONNode _textureList;

	[Token(Token = "0x4001401")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTextures;

	[Token(Token = "0x4001402")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, List<MapScriptBasicMaterial>> TextureCategories;

	[Token(Token = "0x4001403")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTexturesLower;

	[Token(Token = "0x4001404")]
	[FieldOffset(Offset = "0x20")]
	public static Dictionary<string, MapScriptBasicMaterial> AllTexturesNoLegacy;

	[Token(Token = "0x4001405")]
	[FieldOffset(Offset = "0x28")]
	public static Dictionary<string, string> LegacyTexturePaths;

	[Token(Token = "0x60018F5")]
	[Address(RVA = "0x58772F0", Offset = "0x58762F0", VA = "0x58772F0")]
	public static void Init()
	{
		// Lifted from source/cpp/Map/BuiltinMapTextures.c (Map.BuiltinMapTextures$$Init): 21 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		Dictionary<object, object> pSVar5;
		Object[] pSVar6;
		bool bVar7;
		Object __this;
		String pSVar8;
		JSONNode pSVar9;
		List<MapScriptBasicMaterial> __this_00;
		MapScriptBasicMaterial __this_01;
		JSONNode pSVar10;
		String str2;
		String pSVar11;
		List<object> __this_02;
		MethodInfo pMVar12;
		Dictionary<string, string> __this_03;
		float fVar13;
		float fVar14;
		KeyValuePair<string, JSONNode> aKeyValue;
		JSONNode.Enumerator local_1a8;
		JSONNode.Enumerator local_158;
		JSONNode.Enumerator local_110;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		local_1a8.m_Array._list = null;
		local_1a8.m_Array._index = 0;
		local_1a8.m_Array._version = 0;
		local_1a8.m_Object._current.value = null;
		local_1a8.m_Object._getEnumeratorRetType = 0;
		local_1a8.m_Object._36_4_ = 0;
		local_1a8.m_Object._version = 0;
		local_1a8.m_Object._index = 0;
		local_1a8.m_Object._current.key = null;
		local_1a8.type = 0;
		local_1a8._4_4_ = 0;
		local_1a8.m_Object._dictionary = null;
		local_1a8.m_Array._current = null;
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
		local_158.m_Array._list = null;
		local_158.m_Array._index = 0;
		local_158.m_Array._version = 0;
		local_158.m_Object._current.value = null;
		local_158.m_Object._getEnumeratorRetType = 0;
		local_158.m_Object._36_4_ = 0;
		local_158.m_Object._version = 0;
		local_158.m_Object._index = 0;
		local_158.m_Object._current.key = null;
		local_158.type = 0;
		local_158._4_4_ = 0;
		local_158.m_Object._dictionary = null;
		local_158.m_Array._current = null;
		pSVar8 = ResourcePaths.Info;
		__this = ResourceManager.LoadAsset(pSVar8, "MapTextureList", false, false);
		if (__this != null) {
			bVar2 = (typeof(TextAsset)._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar2) ||((__this.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(TextAsset))) {
				throw new InvalidCastException();
			}
			pSVar8 = __this.text;
			pSVar9 = JSON.Parse(pSVar8);
			BuiltinMapTextures._textureList = pSVar9;
			pSVar9 = BuiltinMapTextures._textureList;
			if (pSVar9 != null) {
				local_110 = pSVar9.Keys;
				local_c8.m_Array._current = local_110.m_Array._current;
				local_c8.m_Array._list = local_110.m_Array._list;
				local_c8.m_Array._index = local_110.m_Array._index;
				local_c8.m_Array._version = local_110.m_Array._version;
				local_c8.m_Object._current.value = local_110.m_Object._current.value;
				local_c8.m_Object._getEnumeratorRetType = local_110.m_Object._getEnumeratorRetType;
				local_c8.m_Object._36_4_ = local_110.m_Object._36_4_;
				local_c8.m_Object._version = local_110.m_Object._version;
				local_c8.m_Object._index = local_110.m_Object._index;
				local_c8.m_Object._current.key = local_110.m_Object._current.key;
				local_c8.type = local_110.type;
				local_c8._4_4_ = local_110._4_4_;
				local_c8.m_Object._dictionary = local_110.m_Object._dictionary;
				local_78 = local_c8.GetEnumerator();
				local_1a8.m_Array._current = local_78.m_Array._current;
				local_1a8.m_Array._list = local_78.m_Array._list;
				local_1a8.m_Array._index = local_78.m_Array._index;
				local_1a8.m_Array._version = local_78.m_Array._version;
				local_1a8.m_Object._current.value = local_78.m_Object._current.value;
				local_1a8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
				local_1a8.m_Object._36_4_ = local_78.m_Object._36_4_;
				local_1a8.m_Object._version = local_78.m_Object._version;
				local_1a8.m_Object._index = local_78.m_Object._index;
				local_1a8.m_Object._current.key = local_78.m_Object._current.key;
				local_1a8.type = local_78.type;
				local_1a8._4_4_ = local_78._4_4_;
				local_1a8.m_Object._dictionary = local_78.m_Object._dictionary;
				bVar7 = local_1a8.MoveNext();
				if (bVar7) {
					do {
						pSVar8 = local_1a8.Current;
						pSVar9 = BuiltinMapTextures._textureList;
						if (pSVar9 == null) goto label_05977b48;
						pSVar9 = pSVar9.get_Item(pSVar8);
						pSVar5 = (Dictionary<object, object>)BuiltinMapTextures.TextureCategories;
						__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<MapScriptBasicMaterial>));
						__this_00 = new List<object>();
						if (pSVar5 == null) goto label_05977b48;
						pSVar5.Add((object)pSVar8, (object)__this_00);
						if (pSVar9 == null) goto label_05977b48;
						local_110.unknown(pSVar9);
						local_158.m_Array._current = local_110.m_Array._current;
						local_158.m_Array._list = local_110.m_Array._list;
						local_158.m_Array._index = local_110.m_Array._index;
						local_158.m_Array._version = local_110.m_Array._version;
						local_158.m_Object._current.value = local_110.m_Object._current.value;
						local_158.m_Object._getEnumeratorRetType = local_110.m_Object._getEnumeratorRetType;
						local_158.m_Object._36_4_ = local_110.m_Object._36_4_;
						local_158.m_Object._version = local_110.m_Object._version;
						local_158.m_Object._index = local_110.m_Object._index;
						local_158.m_Object._current.key = local_110.m_Object._current.key;
						local_158.type = local_110.type;
						local_158._4_4_ = local_110._4_4_;
						local_158.m_Object._dictionary = local_110.m_Object._dictionary;
						while(true) {
							bVar7 = local_158.MoveNext();
							if (!bVar7) break;
							aKeyValue = local_158.Current;
							pSVar9 = ((JSONNode)aKeyValue);
							__this_01 = new MapScriptBasicMaterial();
							if (pSVar9 == null) goto label_05977b48;
							pSVar10 = pSVar9.get_Item("Name");
							if (pSVar10 == null) goto label_05977b48;
							str2 = pSVar10.get_Value();
							pSVar11 = String.Concat(pSVar8, "/", str2);
							if (__this_01 == null) goto label_05977b48;
							__this_01.Texture = pSVar11;
							bVar7 = pSVar9.HasKey("TilingX");
							fVar13 = 1.0;
							if (bVar7) {
								pSVar10 = pSVar9.get_Item("TilingX");
								if (pSVar10 == null) goto label_05977b48;
								fVar13 = pSVar10.get_AsFloat();
							}
							bVar7 = pSVar9.HasKey("TilingY");
							fVar14 = 1.0;
							if (bVar7) {
								pSVar10 = pSVar9.get_Item("TilingY");
								if (pSVar10 == null) goto label_05977b48;
								fVar14 = pSVar10.get_AsFloat();
							}
							__this_01.Tiling.x = fVar13;
							__this_01.Tiling.y = fVar14;
							pSVar5 = (Dictionary<object, object>)BuiltinMapTextures.AllTextures;
							if (pSVar5 == null) goto label_05977b48;
							pSVar5.Add((object)str2, (object)__this_01);
							if (str2 == null) goto label_05977b48;
							pSVar5 = (Dictionary<object, object>)BuiltinMapTextures.AllTexturesLower;
							pSVar11 = str2.ToLower();
							if (pSVar5 == null) goto label_05977b48;
							pSVar5.Add((object)pSVar11, (object)__this_01);
							pSVar5 = (Dictionary<object, object>)BuiltinMapTextures.TextureCategories;
							if (pSVar5 == null) goto label_05977b48;
							__this_02 = (List<object>)pSVar5.get_Item((object)pSVar8);
							pMVar12 = MethodInfo_System_Collections_Generic_List_MapScriptBasicMaterial_Add;
							if (__this_02 == null) goto label_05977b48;
							piVar1 = &__this_02._version;
							*piVar1 = *piVar1 + 1;
							pSVar6 = __this_02._items;
							if (pSVar6 == null) goto label_05977b48;
							uVar3 = __this_02._size;
							if (uVar3 < (uint)pSVar6.Length) {
								__this_02._size = uVar3 + 1;
								pSVar6[(int)uVar3] = (object)__this_01;
							}
							else {
								__this_02.AddWithResize((object)__this_01);
							}
							bVar7 = (pSVar8 == "Legacy");
							uVar4 = (typeof(BuiltinMapTextures)._2).cctor_finished_or_no_cctor;
							if (bVar7) {
								if (uVar4 == 0) {
								}
								__this_03 = BuiltinMapTextures.LegacyTexturePaths;
								pSVar9 = pSVar9.get_Item("Texture");
								if (pSVar9 == null) goto label_05977b48;
								__this_01 = (MapScriptBasicMaterial)pSVar9.get_Value();
								if (__this_03 == null) goto label_05977b48;
								pMVar12 = MethodInfo_System_Collections_Generic_Dictionary_string_string_Add;
							}
							else {
								if (uVar4 == 0) {
									__this_03 = (Dictionary<string, string>)BuiltinMapTextures.AllTexturesNoLegacy;
									pMVar12 = MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add;
								}
								else {
									__this_03 = (Dictionary<string, string>)BuiltinMapTextures.AllTexturesNoLegacy;
									pMVar12 = MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add;
								}
								MethodInfo_System_Collections_Generic_Dictionary_string_MapScriptBasicMaterial_Add = pMVar12;
								if (__this_03 == null) goto label_05977b48;
							}
							__this_03.Add((object)str2, (object)__this_01);
						}
						bVar7 = local_1a8.MoveNext();
					} while (bVar7);
				}
				return;
			}
		}
	label_05977b48: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60018F6")]
	[Address(RVA = "0x5877B70", Offset = "0x5876B70", VA = "0x5877B70")]
	public BuiltinMapTextures()
	{
		// Lifted from source/cpp/Map/BuiltinMapTextures.c (Map.BuiltinMapTextures$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/BuiltinMapTextures.c.

	// Map.BuiltinMapTextures$$.cctor: 4 lines keep C-only constructs
	static BuiltinMapTextures()
	{
		Map_BuiltinMapTextures_StaticFields pMVar1;
		Dictionary<string, MapScriptBasicMaterial> pSVar2;
		Dictionary<string, List<MapScriptBasicMaterial>> __this;
		Dictionary<string, string> __this_00;

		pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, MapScriptBasicMaterial>));
		pSVar2 = new Dictionary<object, object>();
		pMVar1 = typeof(BuiltinMapTextures).static_fields;
		pMVar1.AllTextures = pSVar2;
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, List<MapScriptBasicMaterial>>));
		__this = new Dictionary<object, object>();
		pMVar1 = typeof(BuiltinMapTextures).static_fields;
		pMVar1.TextureCategories = __this;
		pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, MapScriptBasicMaterial>));
		pSVar2 = new Dictionary<object, object>();
		pMVar1 = typeof(BuiltinMapTextures).static_fields;
		pMVar1.AllTexturesLower = pSVar2;
		pSVar2 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, MapScriptBasicMaterial>));
		pSVar2 = new Dictionary<object, object>();
		pMVar1 = typeof(BuiltinMapTextures).static_fields;
		pMVar1.AllTexturesNoLegacy = pSVar2;
		__this_00 = new Dictionary<string, string>();
		pMVar1 = typeof(BuiltinMapTextures).static_fields;
		pMVar1.LegacyTexturePaths = __this_00;
		return;
	}
}

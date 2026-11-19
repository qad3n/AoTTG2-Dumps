// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileControlSkinManager
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileControlSkinManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000751")]
internal static class MobileControlSkinManager
{
	[Token(Token = "0x40024F2")]
	private const string BuiltinSkinListAsset = "MobileControlSkinList";

	[Token(Token = "0x40024F3")]
	private const string DefaultBuiltinResourceRoot = "UI/Mobile/Controls";

	[Token(Token = "0x40024F4")]
	private const string CustomSourceName = "Custom";

	[Token(Token = "0x40024F5")]
	private const string CustomPrefix = "Custom/";

	[Token(Token = "0x40024F6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] ImageExtensions;

	[Token(Token = "0x40024F7")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, Sprite> _sprites;

	[Token(Token = "0x40024F8")]
	[FieldOffset(Offset = "0x10")]
	private static JSONNode _builtinSkinList;

	[Token(Token = "0x60046DB")]
	[Address(RVA = "0x5B73DE0", Offset = "0x5B72DE0", VA = "0x5B73DE0")]
	public static string[] GetSkinOptions()
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetSkinOptions): 6 lines keep C-only constructs
		object @object;
		IEnumerable<string> first;
		IEnumerable<string> second;
		System_Collections_Generic_IEnumerable_TSource__o source;
		UI_MobileControlSkinManager___c_StaticFields pUVar1;
		Func<string, string> __this;
		System_Linq_IOrderedEnumerable_TSource__o source_00;
		String[] pSVar2;

		first = MobileControlSkinManager.GetBuiltinSkinOptions();
		second = MobileControlSkinManager.GetCustomSkinOptions();
		source = Enumerable.Concat<string>((System_Collections_Generic_IEnumerable_TSource__o)first, (System_Collections_Generic_IEnumerable_TSource__o)second);
		if ((typeof(MobileControlSkinManager.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar1 = typeof(MobileControlSkinManager.c).static_fields;
			__this = pUVar1.__9__7_0;
		}
		else {
			pUVar1 = typeof(MobileControlSkinManager.c).static_fields;
			__this = pUVar1.__9__7_0;
		}
		if (__this == null) {
			if (((typeof(MobileControlSkinManager.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar1 = typeof(MobileControlSkinManager.c).static_fields;
			}
			@object = (object)pUVar1.__9;
			__this = new Func<string, string>(@object, (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_GetSkinOptions_b__7_0);
			pUVar1 = typeof(MobileControlSkinManager.c).static_fields;
			pUVar1.__9__7_0 = __this;
		}
		source_00 = Enumerable.OrderBy<string, string>(source, (System_Func_TSource__TKey__o)__this);
		pSVar2 = (String[])Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
		return pSVar2;
	}

	[Token(Token = "0x60046DC")]
	[Address(RVA = "0x5B745A0", Offset = "0x5B735A0", VA = "0x5B745A0")]
	public static string[] GetSkinSourceOptions()
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetSkinSourceOptions): 5 lines keep C-only constructs
		uint uVar1;
		IEnumerable<string> first;
		object second;
		System_Collections_Generic_IEnumerable_TSource__o pSVar2;
		String[] pSVar3;

		first = MobileControlSkinManager.GetBuiltinSourcePrefixes();
		second = new string[1];
		if (second == null) {
			throw new NullReferenceException();
		}
		if (*(int)&second[1].monitor == 0) {
			throw new IndexOutOfRangeException();
		}
		second[2].klass = (Il2CppClass *)"Custom";
		pSVar2 = Enumerable.Concat<string>((System_Collections_Generic_IEnumerable_TSource__o)first, (System_Collections_Generic_IEnumerable_TSource__o)second);
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = Enumerable.Distinct<string>(pSVar2, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		pSVar3 = (String[])Enumerable.ToArray<string>(pSVar2);
		return pSVar3;
	}

	[Token(Token = "0x60046DD")]
	[Address(RVA = "0x5B74B90", Offset = "0x5B73B90", VA = "0x5B74B90")]
	public static string NormalizeSkinReference(string path)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$NormalizeSkinReference): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_07547931 == false) {
			Il2CppMethodInitialized_07547931 = true;
			uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (((path == null) &&(path = (String)**(long*)(g_data_07556758 + 0xb8), path == null)) ||(pSVar3 = path.Replace(0x5c, 0x2f), pSVar3 == null)) {
			throw new NullReferenceException();
		}
		pSVar3 = pSVar3.TrimStart(0x2f);
		bVar2 = String.IsNullOrWhiteSpace(pSVar3);
		if (!bVar2) {
			if ((typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar2 = MobileControlSkinManager.IsResourceReference(pSVar3);
				if (bVar2) {
					return pSVar3;
				}
			}
			else {
				bVar2 = MobileControlSkinManager.IsResourceReference(pSVar3);
				if (bVar2) {
					return pSVar3;
				}
			}
			bVar2 = MobileControlSkinManager.IsCustomSkinReference(pSVar3);
			if (bVar2) {
				return pSVar3;
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x60046DE")]
	[Address(RVA = "0x5B74D90", Offset = "0x5B73D90", VA = "0x5B74D90")]
	public static bool IsCustomSkinReference(string path)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$IsCustomSkinReference): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_07547932 == false) {
			Il2CppMethodInitialized_07547932 = true;
			uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if ((((path == null) &&(path = (String)**(long*)(g_data_07556758 + 0xb8), path == null)) ||(pSVar3 = path.Replace(0x5c, 0x2f), pSVar3 == null)) || (pSVar3 = pSVar3.TrimStart(0x2f), pSVar3 == null)) {
			throw new NullReferenceException();
		}
		bVar2 = pSVar3.StartsWith("Custom/", 5);
		return bVar2;
	}

	[Token(Token = "0x60046DF")]
	[Address(RVA = "0x5B74E60", Offset = "0x5B73E60", VA = "0x5B74E60")]
	public static bool IsSkinReferenceFromSource(string path, string source)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$IsSkinReferenceFromSource): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;
		String a;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_07547933 == false) {
			Il2CppMethodInitialized_07547933 = true;
			uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if ((((source == null) &&(source = (String)**(long*)(g_data_07556758 + 0xb8), source == null)) ||(pSVar3 = source.Replace(0x5c, 0x2f), pSVar3 == null)) || (pSVar3 = pSVar3.TrimStart(0x2f), pSVar3 == null)) {
			throw new NullReferenceException();
		}
		pSVar3 = pSVar3.Trim(0x2f);
		bVar2 = String.IsNullOrWhiteSpace(pSVar3);
		if (bVar2) {
			return false;
		}
		method_00 = (MethodInfo *)"Custom";
		bVar2 = String.Equals(pSVar3, "Custom", 5);
		uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		if (!bVar2) {
			if (uVar1 == 0) {
			}
			a = MobileControlSkinManager.GetSkinSourceName(path);
			bVar2 = String.Equals(a, pSVar3, 5);
			return bVar2;
		}
		if (uVar1 == 0) {
		}
		bVar2 = MobileControlSkinManager.IsCustomSkinReference(path);
		return bVar2;
	}

	[Token(Token = "0x60046E0")]
	[Address(RVA = "0x5B74FC0", Offset = "0x5B73FC0", VA = "0x5B74FC0")]
	public static string GetSkinSourceName(string path)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetSkinSourceName): 3 lines keep C-only constructs
		bool bVar1;
		MobileControlSkinManager.c__DisplayClass12_0 __this;
		String pSVar2;
		MethodInfo method_00;
		String* ppSVar3;
		IEnumerable<string> source;
		Func<string, bool> __this_00;

		__this = new MobileControlSkinManager.c__DisplayClass12_0();
		if ((((path == null) &&(path = (String)**(long*)(g_data_07556758 + 0xb8), path == null)) ||(pSVar2 = path.Replace(0x5c, 0x2f), pSVar2 == null)) || ((pSVar2 = pSVar2.TrimStart(0x2f), pSVar2 == null ||(method_00 = (MethodInfo)pSVar2.Trim(0x2f), __this == null)))) {
			throw new NullReferenceException();
		}
		__this.normalized = (String)method_00;
		bVar1 = MobileControlSkinManager.IsCustomSkinReference(__this.normalized);
		if (bVar1) {
			ppSVar3 = &"Custom";
		}
		else {
			source = MobileControlSkinManager.GetBuiltinSourcePrefixes();
			__this_00 = new Func<string, bool>((object)__this, (intptr_t)MethodInfo_UI_MobileControlSkinManager_c__DisplayClass12_0_GetSkinSourceName_b__0);
			pSVar2 = Enumerable.FirstOrDefault<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00) ;
			if (pSVar2 != null) {
				return pSVar2;
			}
			ppSVar3 = *(String**)(g_data_07556758 + 0xb8);
		}
		return *ppSVar3;
	}

	[Token(Token = "0x60046E1")]
	[Address(RVA = "0x5B75190", Offset = "0x5B74190", VA = "0x5B75190")]
	public static string GetSkinDisplayName(string path)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetSkinDisplayName): clean
		bool bVar1;
		String pSVar2;
		String pSVar3;

		pSVar2 = MobileControlSkinManager.NormalizeSkinReference(path);
		bVar1 = String.IsNullOrEmpty(pSVar2);
		if (bVar1) {
			pSVar2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar3 = MobileControlSkinManager.GetSkinSourceName(pSVar2);
			bVar1 = String.IsNullOrWhiteSpace(pSVar3);
			if (!bVar1) {
				pSVar3 = String.Concat(pSVar3, "/");
				if (pSVar2 != null) {
					bVar1 = pSVar2.StartsWith(pSVar3, 5);
					if (!bVar1) {
						return pSVar2;
					}
					if (pSVar3 != null) {
						pSVar2 = pSVar2.Substring(pSVar3._stringLength);
						return pSVar2;
					}
				}
				throw new NullReferenceException();
			}
		}
		return pSVar2;
	}

	[Token(Token = "0x60046E2")]
	[Address(RVA = "0x5B73F60", Offset = "0x5B72F60", VA = "0x5B73F60")]
	private static IEnumerable<string> GetBuiltinSkinOptions()
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetBuiltinSkinOptions): 20 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		object @object;
		bool bVar3;
		JSONNode pSVar4;
		List<string> options;
		Il2CppClass pIVar5;
		System_Collections_Generic_IEnumerable_TSource__o source;
		UI_MobileControlSkinManager___c_StaticFields pUVar6;
		Func<string, string> __this;
		System_Linq_IOrderedEnumerable_TSource__o source_00;
		Object[] pSVar7;
		MethodInfo pMVar8;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		KeyValuePair<string, JSONNode> aKeyValue;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		pSVar4 = MobileControlSkinManager.GetBuiltinSkinList();
		bVar3 = (pSVar4 == null);
		if (bVar3) {
	label_05c74183: ;
			pMVar8 = MethodInfo_System_Array_Empty_string;
			if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
				pIVar5 = *(Il2CppClass*)((long)(pMVar8.field7_0x38).methodMetadataHandle + 0x10);
				bVar1 = (pIVar5._2).bitflags1;
			}
			else {
				pIVar5 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
				bVar1 = (pIVar5._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
				uVar2 = (pIVar5._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (pIVar5._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				pIVar5 = (pMVar8.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar5._2).bitflags1;
			}
			else {
				pIVar5 = (pMVar8.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar5._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			}
			return *(IEnumerable<string>*)pIVar5.static_fields;
		}
		if (pSVar4 != null) {
			bVar3 = pSVar4.HasKey("Sources");
			if (!bVar3) goto label_05c74183;
			options = new List<string>();
			pSVar4 = pSVar4.get_Item("Sources");
			if (pSVar4 != null) {
				local_78.unknown(pSVar4);
				bVar3 = local_78.MoveNext();
				if (bVar3) {
					do {
						aKeyValue = local_78.Current;
						pSVar4 = ((JSONNode)aKeyValue);
						pMVar8 = extraout_RDX;
						if ((typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor == 0) {
							pMVar8 = extraout_RDX_00;
						}
						MobileControlSkinManager.AddBuiltinSourceOptions(pSVar4, options);
						bVar3 = local_78.MoveNext();
					} while (bVar3);
				}
				source = Enumerable.Distinct<string>((System_Collections_Generic_IEnumerable_TSource__o)options);
				if ((typeof(MobileControlSkinManager.c)._2).cctor_finished_or_no_cctor == 0) {
					pUVar6 = typeof(MobileControlSkinManager.c).static_fields;
					__this = pUVar6.__9__14_0;
				}
				else {
					pUVar6 = typeof(MobileControlSkinManager.c).static_fields;
					__this = pUVar6.__9__14_0;
				}
				if (__this == null) {
					if (((typeof(MobileControlSkinManager.c))._2).cctor_finished_or_no_cctor == 0) {
						pUVar6 = typeof(MobileControlSkinManager.c).static_fields;
					}
					@object = (object)pUVar6.__9;
					__this = new Func<string, string>(@object, (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_GetBuiltinSkinOptions_b__14_0);
					pUVar6 = typeof(MobileControlSkinManager.c).static_fields;
					pUVar6.__9__14_0 = __this;
				}
				source_00 = Enumerable.OrderBy<string, string>(source, (System_Func_TSource__TKey__o)__this);
				pSVar7 = Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_00);
				return (IEnumerable<string>)pSVar7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046E3")]
	[Address(RVA = "0x5B75530", Offset = "0x5B74530", VA = "0x5B75530")]
	private static void AddBuiltinSourceOptions(JSONNode source, List<string> options)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$AddBuiltinSourceOptions): clean
		bool bVar1;
		String root;
		String prefix;

		bVar1 = (source == null);
		if ((options != null) && (!bVar1)) {
			root = MobileControlSkinManager.GetBuiltinResourceRoot(source);
			prefix = MobileControlSkinManager.GetBuiltinSourcePrefix(source);
			if (source == null) {
				throw new NullReferenceException();
			}
			bVar1 = source.HasKey("Skins");
			if (bVar1) {
				MobileControlSkinManager.AddBuiltinSkinSetOptions(source, root, prefix, options);
			}
			bVar1 = source.HasKey("Groups");
			if (bVar1) {
				MobileControlSkinManager.AddBuiltinGroupOptions(source, root, prefix, options);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60046E4")]
	[Address(RVA = "0x5B75980", Offset = "0x5B74980", VA = "0x5B75980")]
	private static void AddBuiltinSkinSetOptions(JSONNode source, string root, string prefix, List<string> options)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$AddBuiltinSkinSetOptions): 6 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		JSONNode pSVar3;
		String pSVar4;
		String pSVar5;
		MethodInfo method_00;
		String[] pSVar6;
		String optionRoot;
		KeyValuePair<string, JSONNode> SVar7;
		JSONNode.Enumerator local_110;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

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
		if ((source == null) ||(pSVar2 = source.get_Item("Skins"), pSVar2 == null)) {
	label_05c75ef1: ;
			throw new NullReferenceException();
		}
		local_110.unknown(pSVar2);
		local_78.m_Array._current = local_110.m_Array._current;
		local_78.m_Array._list = local_110.m_Array._list;
		local_78.m_Array._index = local_110.m_Array._index;
		local_78.m_Array._version = local_110.m_Array._version;
		local_78.m_Object._current.value = local_110.m_Object._current.value;
		local_78.m_Object._getEnumeratorRetType = local_110.m_Object._getEnumeratorRetType;
		local_78.m_Object._36_4_ = local_110.m_Object._36_4_;
		local_78.m_Object._version = local_110.m_Object._version;
		local_78.m_Object._index = local_110.m_Object._index;
		local_78.m_Object._current.key = local_110.m_Object._current.key;
		local_78.type = local_110.type;
		local_78._4_4_ = local_110._4_4_;
		local_78.m_Object._dictionary = local_110.m_Object._dictionary;
		bVar1 = local_78.MoveNext();
		if (bVar1) {
			do {
				SVar7 = local_78.Current;
				pSVar2 = ((JSONNode)SVar7);
				if ((pSVar2 == null) ||(pSVar3 = pSVar2.get_Item("Name"), pSVar3 == null)) goto label_05c75ef1;
				pSVar4 = pSVar3.get_Value();
				if ((((pSVar4 == null) &&(pSVar4 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar4 == null)) || (pSVar4 = pSVar4.Replace(0x5c, 0x2f), pSVar4 == null)) ||(pSVar4 = pSVar4.TrimStart(0x2f), pSVar4 == null)) goto label_05c75ef1;
				pSVar4 = pSVar4.Trim(0x2f);
				bVar1 = String.IsNullOrWhiteSpace(pSVar4);
				if ((!bVar1) &&(bVar1 = pSVar2.HasKey("Groups"))) {
					pSVar2 = pSVar2.get_Item("Groups");
					if (pSVar2 != null) {
						local_110.unknown(pSVar2);
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
	label_05c75cc0: ;
						do {
							bVar1 = local_c8.MoveNext();
							if (!bVar1) goto label_05c75ae0;
							SVar7 = local_c8.Current;
							pSVar2 = ((JSONNode)SVar7);
							if (pSVar2 == null) break;
							pSVar5 = pSVar2.get_Value();
							if ((pSVar5 == null) &&(pSVar5 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar5 == null )) break;
							pSVar5 = pSVar5.Replace(0x5c, 0x2f);
							if ((pSVar5 == null) ||(pSVar5 = pSVar5.TrimStart(0x2f), pSVar5 == null)) break;
							method_00 = (MethodInfo)pSVar5.Trim(0x2f);
							bVar1 = String.IsNullOrWhiteSpace((String)method_00);
							if (!bVar1) {
								pSVar6 = (String[])new string[3];
								if (pSVar6 == null) break;
								if ((int)pSVar6.Length != 0) {
									pSVar6[0] = root;
									if ((pSVar6.Length & 0xfffffffe) != 0) {
										pSVar6[1] = pSVar4;
										if (2 < (uint)pSVar6.Length) {
											pSVar6[2] = (String)method_00;
											pSVar5 = MobileControlSkinManager.CombineResourcePath(pSVar6);
											pSVar6 = (String[])new string[3];
											if (pSVar6 == null) break;
											if ((int)pSVar6.Length != 0) {
												pSVar6[0] = prefix;
												if ((pSVar6.Length & 0xfffffffe) != 0) {
													pSVar6[1] = pSVar4;
													if (2 < (uint)pSVar6.Length) {
														pSVar6[2] = (String)method_00;
														optionRoot = MobileControlSkinManager.CombineResourcePath(pSVar6);
														MobileControlSkinManager.AddBuiltinTextureOptions(pSVar5, optionRoot, options);
														goto label_05c75cc0;
													}
												}
											}
										}
									}
								}
								throw new IndexOutOfRangeException();
							}
						} while(true);
					}
					goto label_05c75ef1;
				}
	label_05c75ae0: ;
				bVar1 = local_78.MoveNext();
			} while (bVar1);
		}
		return;
	}

	[Token(Token = "0x60046E5")]
	[Address(RVA = "0x5B75F00", Offset = "0x5B74F00", VA = "0x5B75F00")]
	private static void AddBuiltinGroupOptions(JSONNode source, string root, string prefix, List<string> options)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$AddBuiltinGroupOptions): 2 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;
		MethodInfo method_00;
		String[] pSVar4;
		String optionRoot;
		KeyValuePair<string, JSONNode> aKeyValue;
		JSONNode.Enumerator SStack_c8;
		JSONNode.Enumerator SStack_78;

		if ((source == null) ||(pSVar2 = source.get_Item("Groups"), pSVar2 == null)) {
	label_05c76210: ;
			throw new NullReferenceException();
		}
		SStack_78.unknown(pSVar2);
		SStack_c8.m_Array._current = SStack_78.m_Array._current;
		SStack_c8.m_Array._list = SStack_78.m_Array._list;
		SStack_c8.m_Array._index = SStack_78.m_Array._index;
		SStack_c8.m_Array._version = SStack_78.m_Array._version;
		SStack_c8.m_Object._current.value = SStack_78.m_Object._current.value;
		SStack_c8.m_Object._getEnumeratorRetType = SStack_78.m_Object._getEnumeratorRetType;
		SStack_c8.m_Object._36_4_ = SStack_78.m_Object._36_4_;
		SStack_c8.m_Object._version = SStack_78.m_Object._version;
		SStack_c8.m_Object._index = SStack_78.m_Object._index;
		SStack_c8.m_Object._current.key = SStack_78.m_Object._current.key;
		SStack_c8.type = SStack_78.type;
		SStack_c8._4_4_ = SStack_78._4_4_;
		SStack_c8.m_Object._dictionary = SStack_78.m_Object._dictionary;
		bVar1 = SStack_c8.MoveNext();
		if (bVar1) {
			do {
				aKeyValue = SStack_c8.Current;
				pSVar2 = ((JSONNode)aKeyValue);
				if (pSVar2 == null) goto label_05c76210;
				pSVar3 = pSVar2.get_Value();
				if ((pSVar3 == null) &&(pSVar3 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar3 == null)) goto label_05c76210;
				pSVar3 = pSVar3.Replace(0x5c, 0x2f);
				if ((pSVar3 == null) ||(pSVar3 = pSVar3.TrimStart(0x2f), pSVar3 == null)) goto label_05c76210;
				method_00 = (MethodInfo)pSVar3.Trim(0x2f);
				bVar1 = String.IsNullOrWhiteSpace((String)method_00);
				if (!bVar1) {
					pSVar4 = (String[])new string[2];
					if (pSVar4 == null) goto label_05c76210;
					if ((int)pSVar4.Length == 0) {
	label_05c76215: ;
						throw new IndexOutOfRangeException();
					}
					pSVar4[0] = root;
					if ((pSVar4.Length & 0xfffffffe) == 0) goto label_05c76215;
					pSVar4[1] = (String)method_00;
					pSVar3 = MobileControlSkinManager.CombineResourcePath(pSVar4);
					pSVar4 = (String[])new string[2];
					if (pSVar4 == null) goto label_05c76210;
					if ((int)pSVar4.Length == 0) goto label_05c76215;
					pSVar4[0] = prefix;
					if ((pSVar4.Length & 0xfffffffe) == 0) goto label_05c76215;
					pSVar4[1] = (String)method_00;
					optionRoot = MobileControlSkinManager.CombineResourcePath(pSVar4);
					MobileControlSkinManager.AddBuiltinTextureOptions(pSVar3, optionRoot, options);
				}
				bVar1 = SStack_c8.MoveNext();
			} while (bVar1);
		}
		return;
	}

	[Token(Token = "0x60046E6")]
	[Address(RVA = "0x5B764F0", Offset = "0x5B754F0", VA = "0x5B764F0")]
	private static void AddBuiltinTextureOptions(string resourcePath, string optionRoot, List<string> options)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$AddBuiltinTextureOptions): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Object pUVar3;
		bool bVar4;
		Object[] pSVar5;
		ulong uVar6;
		String pSVar7;
		String[] pSVar8;
		MethodInfo pMVar9;
		ulong uVar10;

		pSVar5 = Resources.LoadAll<Sprite>(resourcePath);
		if (pSVar5 != null) {
			if (0 < (int)pSVar5.Length) {
				uVar6 = pSVar5.Length & 0xffffffff;
				uVar10 = 0;
				do {
					if (uVar6 <= uVar10) goto label_05c768a8;
					pUVar3 = (Object)pSVar5[uVar10];
					bVar4 = (pUVar3 == null);
					if (!bVar4) {
						if (pUVar3 == null) goto label_05c768ad;
						pSVar7 = pUVar3.name;
						bVar4 = String.IsNullOrWhiteSpace(pSVar7);
						if (!bVar4) {
							pSVar8 = (String[])new string[2];
							if (pSVar8 == null) goto label_05c768ad;
							if ((int)pSVar8.Length == 0) goto label_05c768a8;
							pSVar8[0] = optionRoot;
							pMVar9 = (MethodInfo)pUVar3.name;
							if ((pSVar8.Length & 0xfffffffe) == 0) goto label_05c768a8;
							pSVar8[1] = (String)pMVar9;
							pSVar7 = MobileControlSkinManager.CombineResourcePath(pSVar8);
							pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
							if (options == null) goto label_05c768ad;
							piVar1 = &options._version;
							*piVar1 = *piVar1 + 1;
							pSVar8 = options._items;
							if (pSVar8 == null) goto label_05c768ad;
							uVar2 = options._size;
							if (uVar2 < (uint)pSVar8.Length) {
								options._size = uVar2 + 1;
								pSVar8[(int)uVar2] = pSVar7;
							}
							else {
								options.AddWithResize((object)pSVar7);
							}
						}
					}
					uVar10 = uVar10 + 1;
					uVar2 = (uint)pSVar5.Length;
					uVar6 = (ulong)uVar2;
				} while ((long)uVar10 < (long)(int)uVar2);
			}
			pSVar5 = Resources.LoadAll<Texture2D>(resourcePath) ;
			if (pSVar5 != null) {
				if (0 < (int)pSVar5.Length) {
					uVar6 = pSVar5.Length & 0xffffffff;
					uVar10 = 0;
					do {
						if (uVar6 <= uVar10) {
	label_05c768a8: ;
							throw new IndexOutOfRangeException();
						}
						pUVar3 = (Object)pSVar5[uVar10];
						bVar4 = (pUVar3 == null);
						if (!bVar4) {
							if (pUVar3 == null) goto label_05c768ad;
							pSVar7 = pUVar3.name;
							bVar4 = String.IsNullOrWhiteSpace(pSVar7);
							if (!bVar4) {
								pSVar8 = (String[])new string[2];
								if (pSVar8 == null) goto label_05c768ad;
								if ((int)pSVar8.Length == 0) goto label_05c768a8;
								pSVar8[0] = optionRoot;
								pMVar9 = (MethodInfo)pUVar3.name;
								if ((pSVar8.Length & 0xfffffffe) == 0) goto label_05c768a8;
								pSVar8[1] = (String)pMVar9;
								pSVar7 = MobileControlSkinManager.CombineResourcePath(pSVar8);
								pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
								if (options == null) goto label_05c768ad;
								piVar1 = &options._version;
								*piVar1 = *piVar1 + 1;
								pSVar8 = options._items;
								if (pSVar8 == null) goto label_05c768ad;
								uVar2 = options._size;
								if (uVar2 < (uint)pSVar8.Length) {
									options._size = uVar2 + 1;
									pSVar8[(int)uVar2] = pSVar7;
								}
								else {
									options.AddWithResize((object)pSVar7);
								}
							}
						}
						uVar10 = uVar10 + 1;
						uVar2 = (uint)pSVar5.Length;
						uVar6 = (ulong)uVar2;
					} while ((long)uVar10 < (long)(int)uVar2);
				}
				return;
			}
		}
	label_05c768ad: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046E7")]
	[Address(RVA = "0x5B768C0", Offset = "0x5B758C0", VA = "0x5B768C0")]
	private static string GetBuiltinResourcePath(string builtinPath)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetBuiltinResourcePath): 2 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		String value;
		KeyValuePair<string, JSONNode> aKeyValue;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		pSVar2 = MobileControlSkinManager.GetBuiltinSkinList();
		bVar1 = (pSVar2 == null);
		if (!bVar1) {
			if (pSVar2 == null) {
	label_05c76a7a: ;
				throw new NullReferenceException();
			}
			bVar1 = pSVar2.HasKey("Sources");
			if (bVar1) {
				pSVar2 = pSVar2.get_Item("Sources");
				if (pSVar2 == null) goto label_05c76a7a;
				local_78.unknown(pSVar2);
				while (bVar1 = local_78.MoveNext()) {
					aKeyValue = local_78.Current;
					pSVar2 = ((JSONNode)aKeyValue);
					if ((typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor == 0) {
					}
					value = MobileControlSkinManager.GetBuiltinSourceResourcePath(pSVar2, builtinPath);
					bVar1 = String.IsNullOrWhiteSpace(value);
					if (!bVar1) {
						return value;
					}
				}
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x60046E8")]
	[Address(RVA = "0x5B76A80", Offset = "0x5B75A80", VA = "0x5B76A80")]
	private static string GetBuiltinSourceResourcePath(JSONNode source, string builtinPath)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetBuiltinSourceResourcePath): clean
		bool bVar1;
		String pSVar2;
		MethodInfo method_00;
		String value;
		String[] parts;

		bVar1 = (source == null);
		if (bVar1) {
	label_05c76ca4: ;
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if ((((builtinPath != null) ||(builtinPath = (String)**(long*)(g_data_07556758 + 0xb8), builtinPath != null)) &&(pSVar2 = builtinPath.Replace(0x5c, 0x2f), pSVar2 != null)) &&(pSVar2 = pSVar2.TrimStart(0x2f), pSVar2 != null)) {
			method_00 = (MethodInfo)pSVar2.Trim(0x2f);
			pSVar2 = MobileControlSkinManager.GetBuiltinSourcePrefix(source);
			bVar1 = String.IsNullOrWhiteSpace(pSVar2);
			if (!bVar1) {
				value = String.Concat(pSVar2, "/");
				if (method_00 == null) goto label_05c76cc8;
				bVar1 = method_00.StartsWith(value, 5);
				if (!bVar1) goto label_05c76ca4;
				if ((pSVar2 == null) ||(pSVar2 = method_00.Substring(pSVar2._stringLength), pSVar2 == null)) goto label_05c76cc8;
				method_00 = (MethodInfo)pSVar2.TrimStart(0x2f);
			}
			if ((typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar1 = MobileControlSkinManager.SourceContainsBuiltinPath(source, (String)method_00) ;
			if (!bVar1) goto label_05c76ca4;
			parts = (String[])new string[2];
			pSVar2 = MobileControlSkinManager.GetBuiltinResourceRoot(source);
			if (parts != null) {
				if ((int)parts.Length != 0) {
					parts[0] = pSVar2;
					if ((parts.Length & 0xfffffffe) != 0) {
						parts[1] = (String)method_00;
						pSVar2 = MobileControlSkinManager.CombineResourcePath(parts);
						return pSVar2;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05c76cc8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046E9")]
	[Address(RVA = "0x5B76CE0", Offset = "0x5B75CE0", VA = "0x5B76CE0")]
	private static bool SourceContainsBuiltinPath(JSONNode source, string sourcePath)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$SourceContainsBuiltinPath): 14 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		JSONNode pSVar3;
		JSONNode pSVar4;
		String pSVar5;
		String root;
		String[] parts;
		MethodInfo pMVar6;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		KeyValuePair<string, JSONNode> SVar7;
		JSONNode.Enumerator local_108;
		JSONNode.Enumerator local_c0;
		JSONNode.Enumerator local_78;

		local_108.m_Array._list = null;
		local_108.m_Array._index = 0;
		local_108.m_Array._version = 0;
		local_108.m_Object._current.value = null;
		local_108.m_Object._getEnumeratorRetType = 0;
		local_108.m_Object._36_4_ = 0;
		local_108.m_Object._version = 0;
		local_108.m_Object._index = 0;
		local_108.m_Object._current.key = null;
		local_108.type = 0;
		local_108._4_4_ = 0;
		local_108.m_Object._dictionary = null;
		local_108.m_Array._current = null;
		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		if (source == null) {
	label_05c772bc: ;
			throw new NullReferenceException();
		}
		bVar1 = source.HasKey("Skins");
		if (bVar1) {
			pSVar3 = source.get_Item("Skins");
			if (pSVar3 == null) goto label_05c772bc;
			local_c0.unknown(pSVar3);
			local_108.m_Array._current = local_c0.m_Array._current;
			local_108.m_Array._list = local_c0.m_Array._list;
			local_108.m_Array._index = local_c0.m_Array._index;
			local_108.m_Array._version = local_c0.m_Array._version;
			local_108.m_Object._current.value = local_c0.m_Object._current.value;
			local_108.m_Object._getEnumeratorRetType = local_c0.m_Object._getEnumeratorRetType;
			local_108.m_Object._36_4_ = local_c0.m_Object._36_4_;
			local_108.m_Object._version = local_c0.m_Object._version;
			local_108.m_Object._index = local_c0.m_Object._index;
			local_108.m_Object._current.key = local_c0.m_Object._current.key;
			local_108.type = local_c0.type;
			local_108._4_4_ = local_c0._4_4_;
			local_108.m_Object._dictionary = local_c0.m_Object._dictionary;
			bVar1 = local_108.MoveNext();
			if (bVar1) {
				do {
					SVar7 = local_108.Current;
					pSVar3 = ((JSONNode)SVar7);
					if ((pSVar3 == null) ||(pSVar4 = pSVar3.get_Item("Name"), pSVar4 == null)) goto label_05c772bc;
					pSVar5 = pSVar4.get_Value();
					if ((((pSVar5 == null) &&(pSVar5 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar5 == null)) || (pSVar5 = pSVar5.Replace(0x5c, 0x2f), pSVar5 == null)) ||(pSVar5 = pSVar5.TrimStart(0x2f), pSVar5 == null)) goto label_05c772bc;
					pSVar5 = pSVar5.Trim(0x2f);
					bVar1 = String.IsNullOrWhiteSpace(pSVar5);
					if ((!bVar1) &&(bVar1 = pSVar3.HasKey("Groups")) ) {
						pSVar3 = pSVar3.get_Item("Groups");
						if (pSVar3 == null) goto label_05c772bc;
						local_c0.unknown(pSVar3);
						local_78.m_Array._current = local_c0.m_Array._current;
						local_78.m_Array._list = local_c0.m_Array._list;
						local_78.m_Array._index = local_c0.m_Array._index;
						local_78.m_Array._version = local_c0.m_Array._version;
						local_78.m_Object._current.value = local_c0.m_Object._current.value;
						local_78.m_Object._getEnumeratorRetType = local_c0.m_Object._getEnumeratorRetType;
						local_78.m_Object._36_4_ = local_c0.m_Object._36_4_;
						local_78.m_Object._version = local_c0.m_Object._version;
						local_78.m_Object._index = local_c0.m_Object._index;
						local_78.m_Object._current.key = local_c0.m_Object._current.key;
						local_78.type = local_c0.type;
						local_78._4_4_ = local_c0._4_4_;
						local_78.m_Object._dictionary = local_c0.m_Object._dictionary;
						while (bVar1 = local_78.MoveNext()) {
							SVar7 = local_78.Current;
							pSVar3 = ((JSONNode)SVar7);
							parts = (String[])new string[2];
							if (parts == null) goto label_05c772bc;
							if ((int)parts.Length == 0) {
	label_05c772c1: ;
								throw new IndexOutOfRangeException();
							}
							parts[0] = pSVar5;
							if (pSVar3 == null) goto label_05c772bc;
							pMVar6 = (MethodInfo)pSVar3.get_Value();
							if ((parts.Length & 0xfffffffe) == 0) goto label_05c772c1;
							parts[1] = (String)pMVar6;
							root = MobileControlSkinManager.CombineResourcePath(parts);
							bVar1 = MobileControlSkinManager.IsSameOrChildPath(sourcePath, root);
							if (bVar1) {
								return true;
							}
						}
					}
					bVar1 = local_108.MoveNext();
				} while (bVar1);
			}
		}
		bVar1 = source.HasKey("Groups");
		if (bVar1) {
			pSVar3 = source.get_Item("Groups");
			if (pSVar3 == null) goto label_05c772bc;
			local_c0.unknown(pSVar3);
			local_108.m_Array._current = local_c0.m_Array._current;
			local_108.m_Array._list = local_c0.m_Array._list;
			local_108.m_Array._index = local_c0.m_Array._index;
			local_108.m_Array._version = local_c0.m_Array._version;
			local_108.m_Object._current.value = local_c0.m_Object._current.value;
			local_108.m_Object._getEnumeratorRetType = local_c0.m_Object._getEnumeratorRetType;
			local_108.m_Object._36_4_ = local_c0.m_Object._36_4_;
			local_108.m_Object._version = local_c0.m_Object._version;
			local_108.m_Object._index = local_c0.m_Object._index;
			local_108.m_Object._current.key = local_c0.m_Object._current.key;
			local_108.type = local_c0.type;
			local_108._4_4_ = local_c0._4_4_;
			local_108.m_Object._dictionary = local_c0.m_Object._dictionary;
			do {
				bVar1 = local_108.MoveNext();
				if (!bVar1) {
					return bVar1;
				}
				SVar7 = local_108.Current;
				pSVar3 = ((JSONNode)SVar7);
				if (pSVar3 == null) goto label_05c772bc;
				pSVar5 = pSVar3.get_Value();
				pMVar6 = extraout_RDX;
				if ((typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor == 0) {
					pMVar6 = extraout_RDX_00;
				}
				bVar2 = MobileControlSkinManager.IsSameOrChildPath(sourcePath, pSVar5);
			} while (!bVar2);
		}
		else {
			bVar1 = false;
		}
		return bVar1;
	}

	[Token(Token = "0x60046EA")]
	[Address(RVA = "0x5B772D0", Offset = "0x5B762D0", VA = "0x5B772D0")]
	private static bool IsSameOrChildPath(string path, string root)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$IsSameOrChildPath): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;
		String pSVar4;

		if (Il2CppMethodInitialized_0754793e == false) {
			Il2CppMethodInitialized_0754793e = true;
			uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (((((path != null) ||(path = (String)**(long*)(g_data_07556758 + 0xb8), path != null)) &&(pSVar3 = path.Replace(0x5c, 0x2f), pSVar3 != null)) && ((pSVar3 = pSVar3.TrimStart(0x2f), pSVar3 != null &&((pSVar3 = pSVar3.Trim(0x2f), root != null ||(root = (String)**(long*)(g_data_07556758 + 0xb8), root != null)))))) && ((pSVar4 = root.Replace(0x5c, 0x2f), pSVar4 != null && (pSVar4 = pSVar4.TrimStart(0x2f), pSVar4 != null)))) {
			pSVar4 = pSVar4.Trim(0x2f);
			bVar2 = String.Equals(pSVar3, pSVar4, 5);
			if (bVar2) {
				return true;
			}
			pSVar4 = String.Concat(pSVar4, "/");
			if (pSVar3 != null) {
				bVar2 = pSVar3.StartsWith(pSVar4, 5);
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046EB")]
	[Address(RVA = "0x5B75810", Offset = "0x5B74810", VA = "0x5B75810")]
	private static string GetBuiltinSourcePrefix(JSONNode source)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetBuiltinSourcePrefix): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		bVar1 = (source != null);
		if (!bVar1) {
	label_05c758ec: ;
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (source != null) {
			bVar1 = source.HasKey("Prefix");
			if (!bVar1) goto label_05c758ec;
			pSVar2 = source.get_Item("Prefix");
			if (pSVar2 != null) {
				pSVar3 = pSVar2.get_Value();
				if ((((pSVar3 != null) ||(pSVar3 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar3 != null)) && (pSVar3 = pSVar3.Replace(0x5c, 0x2f), pSVar3 != null)) &&(pSVar3 = pSVar3.TrimStart(0x2f), pSVar3 != null)) {
					pSVar3 = pSVar3.Trim(0x2f);
					return pSVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046EC")]
	[Address(RVA = "0x5B74730", Offset = "0x5B73730", VA = "0x5B74730")]
	private static IEnumerable<string> GetBuiltinSourcePrefixes()
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetBuiltinSourcePrefixes): 15 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		String[] pSVar5;
		bool bVar6;
		JSONNode pSVar7;
		List<string> __this;
		String pSVar8;
		System_Collections_Generic_IEnumerable_TSource__o source;
		Object[] pSVar9;
		Il2CppClass pIVar10;
		MethodInfo pMVar11;
		KeyValuePair<string, JSONNode> SVar12;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		pSVar7 = MobileControlSkinManager.GetBuiltinSkinList();
		bVar6 = (pSVar7 == null);
		if (bVar6) {
	label_05c749b1: ;
			pMVar11 = MethodInfo_System_Array_Empty_string;
			if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
				pIVar10 = *(Il2CppClass*)((long)(pMVar11.field7_0x38).methodMetadataHandle + 0x10);
				bVar2 = (pIVar10._2).bitflags1;
			}
			else {
				pIVar10 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
				bVar2 = (pIVar10._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				uVar3 = (pIVar10._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar3 = (pIVar10._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
				pIVar10 = (pMVar11.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar10._2).bitflags1;
			}
			else {
				pIVar10 = (pMVar11.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar10._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			}
			return *(IEnumerable<string>*)pIVar10.static_fields;
		}
		if (pSVar7 != null) {
			bVar6 = pSVar7.HasKey("Sources");
			if (!bVar6) goto label_05c749b1;
			__this = new List<string>();
			pSVar7 = pSVar7.get_Item("Sources");
			if (pSVar7 != null) {
				local_78.unknown(pSVar7);
				bVar6 = local_78.MoveNext();
				if (bVar6) {
					if (__this == null) {
						do {
							SVar12 = local_78.Current;
							pMVar11 = (MethodInfo)SVar12.value;
							pSVar7 = ((JSONNode)SVar12);
							pSVar8 = MobileControlSkinManager.GetBuiltinSourcePrefix(pSVar7);
							bVar6 = String.IsNullOrWhiteSpace(pSVar8);
							if (!bVar6) goto label_05c74b85;
							bVar6 = local_78.MoveNext();
						} while (bVar6);
					}
					else {
						do {
							SVar12 = local_78.Current;
							pMVar11 = (MethodInfo)SVar12.value;
							pSVar7 = ((JSONNode)SVar12);
							pSVar8 = MobileControlSkinManager.GetBuiltinSourcePrefix(pSVar7);
							bVar6 = String.IsNullOrWhiteSpace(pSVar8);
							pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
							if (!bVar6) {
								piVar1 = &__this._version;
								*piVar1 = *piVar1 + 1;
								pSVar5 = __this._items;
								if (pSVar5 == null) goto label_05c74b85;
								uVar4 = __this._size;
								if (uVar4 < (uint)pSVar5.Length) {
									__this._size = uVar4 + 1;
									pSVar5[(int)uVar4] = pSVar8;
								}
								else {
									__this.AddWithResize((object)pSVar8);
								}
							}
							bVar6 = local_78.MoveNext();
						} while (bVar6);
					}
				}
				if (Il2CppMethodInitialized_07542886 == false) {
					Il2CppMethodInitialized_07542886 = true;
					uVar3 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar3 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
				}
				source = Enumerable.Distinct<string>((System_Collections_Generic_IEnumerable_TSource__o)__this, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
				pSVar9 = Enumerable.ToArray<string>(source);
				return (IEnumerable<string>)pSVar9;
			}
		}
	label_05c74b85: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046ED")]
	[Address(RVA = "0x5B75690", Offset = "0x5B74690", VA = "0x5B75690")]
	private static string GetBuiltinResourceRoot(JSONNode source)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetBuiltinResourceRoot): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		bVar1 = (source != null);
		if (bVar1) {
			if (source != null) {
				bVar1 = source.HasKey("Root");
				if (!bVar1) {
					return "UI/Mobile/Controls";
				}
				pSVar2 = source.get_Item("Root");
				if (pSVar2 != null) {
					pSVar3 = pSVar2.get_Value();
					if ((((pSVar3 != null) ||(pSVar3 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar3 != null)) && (pSVar3 = pSVar3.Replace(0x5c, 0x2f), pSVar3 != null)) &&(pSVar3 = pSVar3.TrimStart(0x2f), pSVar3 != null)) {
						pSVar3 = pSVar3.TrimEnd(0x2f);
						bVar1 = String.IsNullOrWhiteSpace(pSVar3);
						if (bVar1) {
							return "UI/Mobile/Controls";
						}
						return pSVar3;
					}
				}
			}
			throw new NullReferenceException();
		}
		return "UI/Mobile/Controls";
	}

	[Token(Token = "0x60046EE")]
	[Address(RVA = "0x5B74310", Offset = "0x5B73310", VA = "0x5B74310")]
	private static IEnumerable<string> GetCustomSkinOptions()
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetCustomSkinOptions): 10 lines keep C-only constructs
		object @object;
		MobileControlSkinManager.c__DisplayClass26_0 __this;
		String[] source;
		Func<string, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o source_00;
		Func<string, string> pSVar1;
		System_Collections_Generic_IEnumerable_TResult__o source_01;
		UI_MobileControlSkinManager___c_StaticFields pUVar2;
		System_Linq_IOrderedEnumerable_TSource__o source_02;
		Object[] pSVar3;

		__this = new MobileControlSkinManager.c__DisplayClass26_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.root = FolderPaths.CustomControlSkins;
		Directory.CreateDirectory(__this.root);
		source = Directory.GetFiles(__this.root, "*.*", 1);
		__this_00 = new Func<string, bool>(null, (intptr_t)MethodInfo_UI_MobileControlSkinManager_IsImagePath);
		source_00 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		pSVar1 = new Func<string, string>((object)__this, (intptr_t)MethodInfo_UI_MobileControlSkinManager_c__DisplayClass26_0_GetCustomSkinOptions_b__0);
		source_01 = Enumerable.Select<string, string>(source_00, (System_Func_TSource__TResult__o)pSVar1);
		if ((typeof(MobileControlSkinManager.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar2 = typeof(MobileControlSkinManager.c).static_fields;
			pSVar1 = pUVar2.__9__26_1;
		}
		else {
			pUVar2 = typeof(MobileControlSkinManager.c).static_fields;
			pSVar1 = pUVar2.__9__26_1;
		}
		if (pSVar1 == null) {
			if (((typeof(MobileControlSkinManager.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar2 = typeof(MobileControlSkinManager.c).static_fields;
			}
			@object = (object)pUVar2.__9;
			pSVar1 = new Func<string, string>(@object, (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_GetCustomSkinOptions_b__26_1);
			pUVar2 = typeof(MobileControlSkinManager.c).static_fields;
			pUVar2.__9__26_1 = pSVar1;
		}
		source_02 = Enumerable.OrderBy<string, string>((System_Collections_Generic_IEnumerable_TSource__o)source_01, (System_Func_TSource__TKey__o)pSVar1);
		pSVar3 = Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)source_02);
		return (IEnumerable<string>)pSVar3;
	}

	[Token(Token = "0x60046EF")]
	[Address(RVA = "0x5B68660", Offset = "0x5B67660", VA = "0x5B68660")]
	public static void ApplySkin(Image image, MobileInputSkin skin, MobileInputControlShape shape)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$ApplySkin): 8 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		String relativePath;
		bool bVar3;
		Object x;
		_func_32 vtableDispatch;
		MethodInfo pMVar4;
		ulong uVar5;
		Color UVar6;

		bVar3 = ((Object)image == null);
		if (bVar3) {
			return;
		}
		if (skin == null) {
			skin.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			skin.PreserveAspect = true;
			skin = new MobileInputSkin();
			skin.R = 0.0;
			skin.G = 0.0;
			skin.B = 0.0;
			skin.A = 0.38;
		}
		x = null;
		pMVar4 = null;
		bVar3 = String.IsNullOrWhiteSpace(skin.Image);
		if (!bVar3) {
			relativePath = skin.Image;
			x = (Object)MobileControlSkinManager.GetSprite(relativePath);
		}
		bVar3 = (x != null);
		if (bVar3) {
			if (image == null) {
	label_05c68817: ;
				throw new NullReferenceException();
			}
			image.sprite = (Sprite)x;
			image.type = 0;
			image.preserveAspect = skin.PreserveAspect;
			vtableDispatch = (image.klass.vtable)._23_set_color.methodPtr;
			pMVar4 = (image.klass.vtable)._23_set_color.method;
			uVar5 = CONCAT44(skin.A, 0x3f800000);
			uVar1 = 0x3f800000;
			uVar2 = 0x3f800000;
		}
		else {
			MobileInputShapeUtil.ApplyShape(image, shape);
			if (image == null) goto label_05c68817;
			uVar1 = skin.R;
			uVar2 = skin.G;
			uVar5._0_4_ = skin.B;
			uVar5._4_4_ = skin.A;
			vtableDispatch = (image.klass.vtable)._23_set_color.methodPtr;
			pMVar4 = (image.klass.vtable)._23_set_color.method;
		}
		UVar6.g = (float)uVar2;
		UVar6.r = (float)uVar1;
		UVar6.b = (float)(int)uVar5;
		UVar6.a = (float)(int)((ulong)uVar5 >> 0x20);
		(*vtableDispatch)(image,UVar6,pMVar4);
		return;
	}

	[Token(Token = "0x60046F0")]
	[Address(RVA = "0x5B6D540", Offset = "0x5B6C540", VA = "0x5B6D540")]
	public static Sprite GetSprite(string relativePath)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetSprite): 1 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		Sprite value;
		Sprite local_20;

		local_20 = null;
		bVar2 = String.IsNullOrWhiteSpace(relativePath);
		value = null;
		if (!bVar2) {
			pSVar1 = (Dictionary<object, object>)MobileControlSkinManager._sprites;
			if (pSVar1 == null) {
	label_05c6d63b: ;
				throw new NullReferenceException();
			}
			bVar2 = pSVar1.TryGetValue((object)relativePath, (object*)&local_20);
			if (bVar2) {
				value = local_20;
			}
			else {
				value = MobileControlSkinManager.LoadSprite(relativePath);
				pSVar1 = (Dictionary<object, object>)MobileControlSkinManager._sprites;
				if (pSVar1 == null) goto label_05c6d63b;
				pSVar1.set_Item((object)relativePath, (object)value);
			}
		}
		return value;
	}

	[Token(Token = "0x60046F1")]
	[Address(RVA = "0x5B77470", Offset = "0x5B76470", VA = "0x5B77470")]
	private static Sprite LoadSprite(string relativePath)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$LoadSprite): 5 lines keep C-only constructs
		uint uVar1;
		String pSVar2;
		byte[] auVar3 = new byte[16];
		bool bVar4;
		int iVar5;
		int iVar6;
		String pSVar7;
		Sprite pUVar8;
		Byte[] data;
		Texture __this;

		pSVar7 = MobileControlSkinManager.NormalizeSkinReference(relativePath);
		bVar4 = String.IsNullOrWhiteSpace(pSVar7);
		if (bVar4) {
			return null;
		}
		bVar4 = MobileControlSkinManager.IsResourceReference(pSVar7);
		uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		if (bVar4) {
			if (uVar1 == 0) {
			}
			return pUVar8;
		}
		if (uVar1 == 0) {
		}
		pSVar2 = "Custom/";
		if (pSVar7 != null) {
			bVar4 = pSVar7.StartsWith("Custom/", 5);
			if (bVar4) {
				if (pSVar2 == null) goto label_05c77745;
				pSVar7 = pSVar7.Substring(pSVar2._stringLength);
			}
			pSVar2 = FolderPaths.CustomControlSkins;
			if (pSVar7 != null) {
				pSVar7 = pSVar7.Replace(0x2f, Path.DirectorySeparatorChar);
				pSVar7 = Path.Combine(pSVar2, pSVar7);
				bVar4 = File.Exists(pSVar7);
				if (bVar4) {
					data = File.ReadAllBytes(pSVar7);
					__this = new Texture2D(2, 2, 5, false);
					pSVar7 = Path.GetFileNameWithoutExtension(pSVar7);
					if (__this == null) goto label_05c77745;
					__this.name = pSVar7;
					__this.wrapMode = 1;
					__this.filterMode = 1;
					bVar4 = ImageConversion.LoadImage((Texture2D)__this, data);
					if (bVar4) {
						iVar5 = __this.get_width();
						iVar6 = __this.get_height();
						auVar3._4_4_ = (float)iVar6;
						auVar3._0_4_ = (float)iVar5;
						auVar3._8_8_ = 0;
						pUVar8 = Sprite.Create((Texture2D)__this, (Rect)(auVar3 << 0x40), (Vector2)0x3f0000003f000000);
						return pUVar8;
					}
					Object.Destroy((Object)__this);
				}
				return null;
			}
		}
	label_05c77745: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046F2")]
	[Address(RVA = "0x5B77750", Offset = "0x5B76750", VA = "0x5B77750")]
	private static Sprite GetBuiltinSprite(string normalized)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetBuiltinSprite): 5 lines keep C-only constructs
		byte[] auVar1 = new byte[16];
		bool bVar2;
		int iVar3;
		int iVar4;
		String path;
		Object x;
		Texture2D texture;
		Sprite pUVar5;

		path = MobileControlSkinManager.GetBuiltinResourcePath(normalized);
		x = (Object)Resources.Load<Sprite>(path);
		bVar2 = (x != null);
		if (!bVar2) {
			texture = Resources.Load<Texture2D>(path);
			x = null;
			bVar2 = ((Object)texture == null);
			if (!bVar2) {
				if (texture == null) {
					throw new NullReferenceException();
				}
				iVar3 = texture.get_width();
				iVar4 = texture.get_height();
				auVar1._4_4_ = (float)iVar4;
				auVar1._0_4_ = (float)iVar3;
				auVar1._8_8_ = 0;
				pUVar5 = Sprite.Create(texture, (Rect)(auVar1 << 0x40), (Vector2)0x3f0000003f000000);
				return pUVar5;
			}
		}
		return (Sprite)x;
	}

	[Token(Token = "0x60046F3")]
	[Address(RVA = "0x5B778A0", Offset = "0x5B768A0", VA = "0x5B778A0")]
	private static bool IsImagePath(string path)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$IsImagePath): 2 lines keep C-only constructs
		String[] source;
		bool bVar1;
		MobileControlSkinManager.c__DisplayClass31_0 __this;
		String pSVar2;
		Func<string, bool> __this_00;

		__this = new MobileControlSkinManager.c__DisplayClass31_0();
		pSVar2 = Path.GetExtension(path);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.extension = pSVar2;
		source = MobileControlSkinManager.ImageExtensions;
		__this_00 = new Func<string, bool>((object)__this, (intptr_t)MethodInfo_UI_MobileControlSkinManager_c__DisplayClass31_0_IsImagePath_b__0);
		bVar1 = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		return bVar1;
	}

	[Token(Token = "0x60046F4")]
	[Address(RVA = "0x5B779E0", Offset = "0x5B769E0", VA = "0x5B779E0")]
	private static string ToRelativePath(string root, string path)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$ToRelativePath): clean
		int iVar1;
		String pSVar3;
		Char[] trimChars;

		if ((root != null) && (path != null)) {
			pSVar3 = path.Substring(root._stringLength);
			trimChars = (Char[])new char[2];
			if (trimChars != null) {
				iVar1 = (int)trimChars.Length;
				if (iVar1 != 0) {
					trimChars[0] = Path.DirectorySeparatorChar;
					if (iVar1 != 1) {
						trimChars[1] = Path.AltDirectorySeparatorChar;
						if (pSVar3 != null) {
							pSVar3 = pSVar3.TrimStart(trimChars);
							if (((pSVar3 != null) ||(pSVar3 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar3 != null)) &&(pSVar3 = pSVar3.Replace(0x5c, 0x2f), pSVar3 != null)) {
								pSVar3 = pSVar3.TrimStart(0x2f);
								return pSVar3;
							}
						}
						goto label_05c77b2a;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05c77b2a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046F5")]
	[Address(RVA = "0x5B74CC0", Offset = "0x5B73CC0", VA = "0x5B74CC0")]
	private static string NormalizeRelativePath(string path)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$NormalizeRelativePath): clean
		String pSVar1;

		if ((path != null) ||(path = (String)**(long*)(g_data_07556758 + 0xb8), path != null)) {
			pSVar1 = path.Replace(0x5c, 0x2f);
			if (pSVar1 != null) {
				pSVar1 = pSVar1.TrimStart(0x2f);
				return pSVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60046F6")]
	[Address(RVA = "0x5B75300", Offset = "0x5B74300", VA = "0x5B75300")]
	private static JSONNode GetBuiltinSkinList()
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$GetBuiltinSkinList): 2 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		bool bVar4;
		Object pUVar5;
		String pSVar6;
		JSONNode pSVar7;
		Object x;

		pSVar7 = MobileControlSkinManager._builtinSkinList;
		bVar4 = (pSVar7 != null);
		if (bVar4) {
			goto label_05c754dc;
		}
		pSVar6 = ResourcePaths.Info;
		pUVar5 = ResourceManager.LoadAsset(pSVar6, "MobileControlSkinList", false, false);
		if (pUVar5 == null) {
	label_05c7545d: ;
			x = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar1 = (typeof(TextAsset)._2).typeHierarchyDepth;
			if ((pUVar5.klass._2).typeHierarchyDepth < bVar1) goto label_05c7545d;
			x = null;
			if ((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(TextAsset)) {
				x = pUVar5;
			}
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar4 = (x != null);
		if (bVar4) {
			if (x == null) {
				throw new NullReferenceException();
			}
			pSVar6 = x.text;
		}
		else {
			pSVar6 = "{}";
		}
		pSVar7 = JSON.Parse(pSVar6);
		MobileControlSkinManager._builtinSkinList = pSVar7;
	label_05c754dc: ;
		return MobileControlSkinManager._builtinSkinList;
	}

	[Token(Token = "0x60046F7")]
	[Address(RVA = "0x5B76220", Offset = "0x5B75220", VA = "0x5B76220")]
	private static string CombineResourcePath(params string[] parts)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$CombineResourcePath): 8 lines keep C-only constructs
		object pIVar1;
		Func<string, bool> pSVar2;
		System_Collections_Generic_IEnumerable_TSource__o pSVar3;
		Func<string, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o source;
		UI_MobileControlSkinManager___c_StaticFields pUVar4;
		String[] value;
		String pSVar5;

		pSVar5 = "/";
		pUVar4 = typeof(MobileControlSkinManager.c).static_fields;
		pSVar2 = pUVar4.__9__35_0;
		if (pSVar2 == null) {
			if ((typeof(MobileControlSkinManager.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar4 = typeof(MobileControlSkinManager.c).static_fields;
			}
			pIVar1 = (object)pUVar4.__9;
			pSVar2 = new Func<string, bool>(pIVar1, (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_CombineResourcePath_b__35_0);
			pUVar4 = typeof(MobileControlSkinManager.c).static_fields;
			pUVar4.__9__35_0 = pSVar2;
		}
		pSVar3 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)parts, (System_Func_TSource__bool__o)pSVar2);
		if ((typeof(MobileControlSkinManager.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar4 = typeof(MobileControlSkinManager.c).static_fields;
			__this = pUVar4.__9__35_1;
		}
		else {
			pUVar4 = typeof(MobileControlSkinManager.c).static_fields;
			__this = pUVar4.__9__35_1;
		}
		if (__this == null) {
			if (((typeof(MobileControlSkinManager.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar4 = typeof(MobileControlSkinManager.c).static_fields;
			}
			pIVar1 = (object)pUVar4.__9;
			__this = new Func<string, string>(pIVar1, (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_CombineResourcePath_b__35_1);
			pUVar4 = typeof(MobileControlSkinManager.c).static_fields;
			pUVar4.__9__35_1 = __this;
		}
		source = Enumerable.Select<string, string>(pSVar3, (System_Func_TSource__TResult__o)__this);
		if ((typeof(MobileControlSkinManager.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar4 = typeof(MobileControlSkinManager.c).static_fields;
			pSVar2 = pUVar4.__9__35_2;
		}
		else {
			pUVar4 = typeof(MobileControlSkinManager.c).static_fields;
			pSVar2 = pUVar4.__9__35_2;
		}
		if (pSVar2 == null) {
			if (((typeof(MobileControlSkinManager.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar4 = typeof(MobileControlSkinManager.c).static_fields;
			}
			pIVar1 = (object)pUVar4.__9;
			pSVar2 = new Func<string, bool>(pIVar1, (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_CombineResourcePath_b__35_2);
			pUVar4 = typeof(MobileControlSkinManager.c).static_fields;
			pUVar4.__9__35_2 = pSVar2;
		}
		pSVar3 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)pSVar2);
		value = (String[])Enumerable.ToArray<string>(pSVar3);
		pSVar5 = String.Join(pSVar5, value);
		return pSVar5;
	}

	[Token(Token = "0x60046F8")]
	[Address(RVA = "0x5B74D10", Offset = "0x5B73D10", VA = "0x5B74D10")]
	private static bool IsResourceReference(string path)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$IsResourceReference): clean
		bool bVar1;
		bool bVar2;
		String value;

		value = MobileControlSkinManager.GetSkinSourceName(path);
		bVar2 = false;
		bVar1 = String.IsNullOrEmpty(value);
		if (!bVar1) {
			bVar2 = MobileControlSkinManager.IsCustomSkinReference(path);
			bVar2 = !bVar2;
		}
		return bVar2;
	}

	[Token(Token = "0x60046F9")]
	[Address(RVA = "0x5B752B0", Offset = "0x5B742B0", VA = "0x5B752B0")]
	private static string StripSourcePrefix(string path, string prefix)
	{
		// Lifted from source/cpp/UI/MobileControlSkinManager.c (UI.MobileControlSkinManager$$StripSourcePrefix): clean
		bool bVar1;
		String pSVar2;

		if (path != null) {
			bVar1 = path.StartsWith(prefix, 5);
			if (!bVar1) {
				return path;
			}
			if (prefix != null) {
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileControlSkinManager.c.

	// UI.MobileControlSkinManager.<>c__DisplayClass12_0$$.ctor: clean
	private void c__DisplayClass12_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileControlSkinManager.<>c__DisplayClass26_0$$.ctor: clean
	private void c__DisplayClass26_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileControlSkinManager.<>c__DisplayClass31_0$$.ctor: clean
	private void c__DisplayClass31_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileControlSkinManager$$.cctor: clean
	static MobileControlSkinManager()
	{
		String[] pSVar2;
		Dictionary<string, Sprite> __this;

		pSVar2 = (String[])new string[3];
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = ".png";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = ".jpg";
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = ".jpeg";
					MobileControlSkinManager.ImageExtensions = pSVar2;
					__this = new Dictionary<string, Sprite>();
					MobileControlSkinManager._sprites = __this;
					return;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// UI.MobileControlSkinManager.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MobileControlSkinManager.c();
		MobileControlSkinManager.c.__9 = (MobileControlSkinManager.c)__this;
		return;
	}

	// UI.MobileControlSkinManager.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.MobileControlSkinManager.<>c$$<GetSkinOptions>b__7_0: clean
	private String c__GetSkinOptions_b__7_0(String path)
	{
		return path;
	}

	// UI.MobileControlSkinManager.<>c$$<GetBuiltinSkinOptions>b__14_0: clean
	private String c__GetBuiltinSkinOptions_b__14_0(String path)
	{
		return path;
	}

	// UI.MobileControlSkinManager.<>c$$<GetCustomSkinOptions>b__26_1: clean
	private String c__GetCustomSkinOptions_b__26_1(String path)
	{
		return path;
	}

	// UI.MobileControlSkinManager.<>c$$<CombineResourcePath>b__35_0: clean
	private bool c__CombineResourcePath_b__35_0(String part)
	{
		bool bVar1;

		bVar1 = String.IsNullOrWhiteSpace(part);
		return !bVar1;
	}

	// UI.MobileControlSkinManager.<>c$$<CombineResourcePath>b__35_1: clean
	private String c__CombineResourcePath_b__35_1(String part)
	{
		uint uVar1;
		String pSVar2;

		if (Il2CppMethodInitialized_0754794e == false) {
			Il2CppMethodInitialized_0754794e = true;
			uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if ((((part == null) &&(part = (String)**(long*)(g_data_07556758 + 0xb8), part == null)) ||(pSVar2 = part.Replace(0x5c, 0x2f), pSVar2 == null)) || (pSVar2 = pSVar2.TrimStart(0x2f), pSVar2 == null)) {
			throw new NullReferenceException();
		}
		pSVar2 = pSVar2.Trim(0x2f);
		return pSVar2;
	}

	// UI.MobileControlSkinManager.<>c$$<CombineResourcePath>b__35_2: clean
	private bool c__CombineResourcePath_b__35_2(String part)
	{
		bool bVar1;

		bVar1 = String.IsNullOrWhiteSpace(part);
		return !bVar1;
	}

	// UI.MobileControlSkinManager.<>c__DisplayClass12_0$$<GetSkinSourceName>b__0: clean
	private bool c__DisplayClass12_0__GetSkinSourceName_b__0(String prefix)
	{
		String __this_00;
		bool bVar1;
		String value;

		__this_00 = this.normalized;
		value = String.Concat(prefix, "/");
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.StartsWith(value, 5);
		return bVar1;
	}

	// UI.MobileControlSkinManager.<>c__DisplayClass26_0$$<GetCustomSkinOptions>b__0: clean
	private String c__DisplayClass26_0__GetCustomSkinOptions_b__0(String path)
	{
		String pSVar1;

		pSVar1 = this.root;
		if ((typeof(MobileControlSkinManager)._2).cctor_finished_or_no_cctor == 0) {
		}
		pSVar1 = MobileControlSkinManager.ToRelativePath(pSVar1, path);
		pSVar1 = String.Concat("Custom/", pSVar1);
		return pSVar1;
	}

	// UI.MobileControlSkinManager.<>c__DisplayClass31_0$$<IsImagePath>b__0: clean
	private bool c__DisplayClass31_0__IsImagePath_b__0(String x)
	{
		bool bVar1;

		bVar1 = String.Equals(x, this.extension, 5);
		return bVar1;
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CharacterData
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/CharacterData.c
// Prior real C# source (older reference): Assets/Scripts/Characters/CharacterData.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;

namespace Characters;

[Token(Token = "0x200069B")]
internal class CharacterData
{
	[Token(Token = "0x4001DCB")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode HumanWeaponInfo;

	[Token(Token = "0x4001DCC")]
	[FieldOffset(Offset = "0x8")]
	public static Dictionary<string, JSONNode> TitanAIInfos;

	[Token(Token = "0x4001DCD")]
	[FieldOffset(Offset = "0x10")]
	public static Dictionary<string, Dictionary<string, TitanAttackInfo>> TitanAttackInfos;

	[Token(Token = "0x6004031")]
	[Address(RVA = "0x5AE1A60", Offset = "0x5AE0A60", VA = "0x5AE1A60")]
	public static void Init()
	{
		// Lifted from source/cpp/Characters/CharacterData.c (Characters.CharacterData$$Init): 9 lines keep C-only constructs
		Il2CppClass str0;
		Dictionary<object, object> pSVar1;
		Dictionary<object, object> __this;
		object pIVar2;
		ulong uVar3;
		String name;
		String pSVar4;
		object value;
		JSONNode pSVar5;
		Dictionary<string, TitanAttackInfo> value_00;
		ulong uVar6;

		if (Il2CppMethodInitialized_075475c4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_Add) ;
			Il2CppMethodInitialized_075475c4 = true;
		}
		pIVar2 = new string[4];
		if (pIVar2 == null) {
	label_05be1df5: ;
			throw new NullReferenceException();
		}
		if (*(int)&pIVar2[1].monitor != 0) {
			pIVar2[2].klass = (Il2CppClass *)"Titan";
			if (((ulong)pIVar2[1].monitor & 0xfffffffe) != 0) {
				pIVar2[2].monitor = "Annie";
				if (2 < *(uint)&pIVar2[1].monitor) {
					pIVar2[3].klass = (Il2CppClass *)"Eren";
					if (((ulong)pIVar2[1].monitor & 0xfffffffc) != 0) {
						pIVar2[3].monitor = "WallColossal";
						if (0 < (int)pIVar2[1].monitor) {
							uVar3 = (ulong)pIVar2[1].monitor & 0xffffffff;
							uVar6 = 0;
							do {
								if (uVar3 <= uVar6) goto label_05be1dfa;
								str0 = (&pIVar2[2].klass)[uVar6];
								pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
								pSVar4 = ResourcePaths.CharacterData;
								name = String.Concat((String)str0, "AIInfo");
								if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor == 0) {
									il2cpp_codegen_runtime_class_init(typeof(ResourceManager)) ;
								}
								pSVar4 = ResourceManager.TryLoadText(pSVar4, name);
								value = (object)JSON.Parse(pSVar4);
								if (pSVar1 == null) goto label_05be1df5;
								pSVar1.Add((object)str0, value);
								pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
								if (pSVar1 == null) goto label_05be1df5;
								__this = (Dictionary<object, object>)CharacterData.TitanAttackInfos;
								pSVar5 = pSVar1.get_Item((object)str0);
								pSVar4 = String.Concat((String)str0, "Keyframes");
								value_00 = CharacterData.LoadTitanAttackInfos(pSVar5, pSVar4);
								if (__this == null) goto label_05be1df5;
								__this.Add((object)str0, (object)value_00);
								uVar6 = uVar6 + 1;
								uVar3 = (ulong)*(uint)&pIVar2[1].monitor;
							} while ((long)uVar6 < (long)(int)*(uint)&pIVar2[1].monitor);
						}
						pSVar4 = ResourcePaths.CharacterData;
						pSVar4 = ResourceManager.TryLoadText(pSVar4, "HumanWeaponInfo");
						pSVar5 = JSON.Parse(pSVar4);
						CharacterData.HumanWeaponInfo = pSVar5;
						return;
					}
				}
			}
		}
	label_05be1dfa: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004032")]
	[Address(RVA = "0x5AE1E00", Offset = "0x5AE0E00", VA = "0x5AE1E00")]
	private static Dictionary<string, TitanAttackInfo> LoadTitanAttackInfos(JSONNode info, string keyframeFile)
	{
		// Lifted from source/cpp/Characters/CharacterData.c (Characters.CharacterData$$LoadTitanAttackInfos): 5 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		JSONNode pSVar3;
		JSONNode __this;
		Dictionary<string, TitanAttackInfo> __this_00;
		JSONNode attackInfo;
		JSONNode keyframes;
		TitanAttackInfo __this_01;
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
		pSVar2 = ResourcePaths.CharacterData;
		pSVar2 = ResourceManager.TryLoadText(pSVar2, keyframeFile);
		pSVar3 = JSON.Parse(pSVar2);
		if (info != null) {
			__this = info.get_Item("AttackInfo");
			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, TitanAttackInfo>));
			__this_00 = new Dictionary<object, object>();
			if (__this != null) {
				local_78 = __this.Keys;
				local_c8.m_Array._current = local_78.m_Array._current;
				local_c8.m_Array._list = local_78.m_Array._list;
				local_c8.m_Array._index = local_78.m_Array._index;
				local_c8.m_Array._version = local_78.m_Array._version;
				local_c8.m_Object._current.value = local_78.m_Object._current.value;
				local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
				local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
				local_c8.m_Object._version = local_78.m_Object._version;
				local_c8.m_Object._index = local_78.m_Object._index;
				local_c8.m_Object._current.key = local_78.m_Object._current.key;
				local_c8.type = local_78.type;
				local_c8._4_4_ = local_78._4_4_;
				local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
				local_118 = local_c8.GetEnumerator();
				bVar1 = local_118.MoveNext();
				if (bVar1) {
					if (pSVar3 == null) {
						local_118.Current;
						throw new NullReferenceException();
					}
					do {
						pSVar2 = local_118.Current;
						bVar1 = pSVar3.HasKey(pSVar2);
						attackInfo = __this.get_Item(pSVar2);
						if (bVar1) {
							keyframes = pSVar3.get_Item(pSVar2);
						}
						else {
							keyframes = null;
						}
						__this_01 = new TitanAttackInfo(attackInfo, keyframes);
						if (__this_00 == null) goto label_05be20f2;
						__this_00.set_Item((object)pSVar2, (object)__this_01);
						bVar1 = local_118.MoveNext();
					} while (bVar1);
				}
				return __this_00;
			}
		}
	label_05be20f2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004033")]
	[Address(RVA = "0x5AE2110", Offset = "0x5AE1110", VA = "0x5AE2110")]
	public static JSONNode GetTitanAI(GameDifficulty difficulty, string titanType)
	{
		// Lifted from source/cpp/Characters/CharacterData.c (Characters.CharacterData$$GetTitanAI): 13 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		JSONNode pSVar3;
		String pSVar4;
		JSONNode pSVar5;
		byte[] auVar6 = new byte[16];
		Enum local_48;

		if (Il2CppMethodInitialized_075475c6 == false) {
			Il2CppMethodInitialized_075475c6 = true;
			if ((typeof(CharacterData)._2).cctor_finished_or_no_cctor == 0) goto label_05be21f5;
	label_05be2145: ;
			pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
		}
		else {
			if ((typeof(CharacterData)._2).cctor_finished_or_no_cctor != 0) goto label_05be2145;
	label_05be21f5: ;
			pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
		}
		if (pSVar1 == null) goto label_05be26d4;
		pSVar3 = pSVar1.get_Item((Il2CppObject *)"Titan");
		if (pSVar3 == null) goto label_05be26d4;
		pSVar3 = pSVar3.get_Item("SpawnRates");
		local_48.klass = (Enum)typeof(GameDifficulty);
		local_48.monitor = (IntPtr)0xffffffffffffffff;
		pSVar4 = local_48.ToString();
		if (pSVar3 == null) goto label_05be26d4;
		pSVar3 = pSVar3.get_Item(pSVar4);
		bVar2 = (titanType == "Default");
		if (bVar2) {
			pSVar4 = (String)Util.GetRandomFromWeightedNode(pSVar3);
			titanType = null;
			if (pSVar4 != null) {
				if ((Il2CppClass)pSVar4.klass != g_data_07556758) {
					throw new InvalidCastException();
				}
				titanType = pSVar4;
			}
		}
		pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
		if (((pSVar1 == null) ||(pSVar3 = pSVar1.get_Item((Il2CppObject *)"Titan"), pSVar3 == null)) ||(pSVar3 = pSVar3.get_Item("Default"), pSVar3 == null)) goto label_05be26d4;
		pSVar3 = pSVar3.Clone();
		pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
		if ((pSVar1 == null) ||(pSVar5 = pSVar1.get_Item((Il2CppObject *)"Titan"), pSVar5 == null)) goto label_05be26d4;
		pSVar5 = pSVar5.get_Item("DifficultyDefaults");
		local_48.klass = (Enum)typeof(GameDifficulty);
		local_48.monitor = (IntPtr)0xffffffffffffffff;
		pSVar4 = local_48.ToString();
		if (pSVar5 == null) goto label_05be26d4;
		bVar2 = pSVar5.HasKey(pSVar4);
		if (bVar2) {
			local_48.klass = (Enum)typeof(GameDifficulty);
			local_48.monitor = (IntPtr)0xffffffffffffffff;
			pSVar4 = local_48.ToString();
			auVar6 = (byte[])pSVar5.get_Item(pSVar4);
			if ((typeof(CharacterData)._2).cctor_finished_or_no_cctor == 0) {
			}
			CharacterData.CopyNode(pSVar3, auVar6._0_8_);
			if ((typeof(CharacterData)._2).cctor_finished_or_no_cctor == 0) goto label_05be24aa;
	label_05be2424: ;
			pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
		}
		else {
			if ((typeof(CharacterData)._2).cctor_finished_or_no_cctor != 0) goto label_05be2424;
	label_05be24aa: ;
			pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
		}
		if (((pSVar1 != null) &&(pSVar5 = pSVar1.get_Item((Il2CppObject *)"Titan"), pSVar5 != null)) &&(pSVar5 = pSVar5.get_Item(titanType), pSVar5 != null)) {
			auVar6 = (byte[])pSVar5.get_Item("Default");
			CharacterData.CopyNode(pSVar3, auVar6._0_8_);
			pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
			if ((pSVar1 != null) &&(pSVar5 = pSVar1.get_Item((Il2CppObject *)"Titan"), pSVar5 != null)) {
				pSVar5 = pSVar5.get_Item(titanType);
				local_48.klass = (Enum)typeof(GameDifficulty);
				local_48.monitor = (IntPtr)0xffffffffffffffff;
				pSVar4 = local_48.ToString();
				if (pSVar5 != null) {
					bVar2 = pSVar5.HasKey(pSVar4);
					if (bVar2) {
						pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
						if ((pSVar1 == null) ||(pSVar5 = pSVar1.get_Item((Il2CppObject *)"Titan"), pSVar5 == null)) goto label_05be26d4;
						pSVar5 = pSVar5.get_Item(titanType);
						local_48.klass = (Enum)typeof(GameDifficulty);
						local_48.monitor = (IntPtr)0xffffffffffffffff;
						pSVar4 = local_48.ToString();
						if (pSVar5 == null) goto label_05be26d4;
						auVar6 = (byte[])pSVar5.get_Item(pSVar4);
						CharacterData.CopyNode(pSVar3, auVar6._0_8_);
					}
					pSVar5 = ((JSONNode)"Titan");
					if (pSVar3 != null) {
						pSVar3.set_Item("Type", pSVar5);
						return pSVar3;
					}
				}
			}
		}
	label_05be26d4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004034")]
	[Address(RVA = "0x5AE2910", Offset = "0x5AE1910", VA = "0x5AE2910")]
	public static JSONNode GetShifterAI(GameDifficulty difficulty, string name)
	{
		// Lifted from source/cpp/Characters/CharacterData.c (Characters.CharacterData$$GetShifterAI): 2 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		JSONNode pSVar3;
		JSONNode pSVar4;
		String pSVar5;
		Enum local_48;

		if (Il2CppMethodInitialized_075475c7 == false) {
			Il2CppMethodInitialized_075475c7 = true;
			if ((typeof(CharacterData)._2).cctor_finished_or_no_cctor == 0) goto label_05be29bd;
	label_05be2941: ;
			pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
		}
		else {
			if ((typeof(CharacterData)._2).cctor_finished_or_no_cctor != 0) goto label_05be2941;
	label_05be29bd: ;
			pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
		}
		if (pSVar1 != null) {
			pSVar3 = pSVar1.get_Item((object)name);
			if ((pSVar3 != null) &&(pSVar3 = pSVar3.get_Item("Default"), pSVar3 != null)) {
				pSVar3 = pSVar3.Clone() ;
				pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
				if (pSVar1 != null) {
					pSVar4 = pSVar1.get_Item((object)name);
					local_48.klass = (Enum)typeof(GameDifficulty);
					local_48.monitor = (IntPtr)0xffffffffffffffff;
					pSVar5 = local_48.ToString();
					if (pSVar4 != null) {
						bVar2 = pSVar4.HasKey(pSVar5);
						if (bVar2) {
							pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
							if (pSVar1 == null) goto label_05be2c01;
							pSVar4 = pSVar1.get_Item((object)name);
							local_48.klass = (Enum)typeof(GameDifficulty);
							local_48.monitor = (IntPtr)0xffffffffffffffff;
							pSVar5 = local_48.ToString();
							if (pSVar4 == null) goto label_05be2c01;
							pSVar4 = pSVar4.get_Item(pSVar5);
							CharacterData.CopyNode(pSVar3, pSVar4);
						}
						pSVar1 = (Dictionary<object, object>)CharacterData.TitanAIInfos;
						if (((pSVar1 != null) &&(pSVar4 = pSVar1.get_Item((object)name), pSVar4 != null)) &&(pSVar4 = pSVar4.get_Item("Type"), pSVar4 != null)) {
							pSVar5 = pSVar4.get_Value();
							pSVar4 = ((JSONNode)pSVar5);
							if (pSVar3 != null) {
								pSVar3.set_Item("Type", pSVar4);
								return pSVar3;
							}
						}
					}
				}
			}
		}
	label_05be2c01: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004035")]
	[Address(RVA = "0x5AE26F0", Offset = "0x5AE16F0", VA = "0x5AE26F0")]
	private static void CopyNode(JSONNode current, JSONNode copy)
	{
		// Lifted from source/cpp/Characters/CharacterData.c (Characters.CharacterData$$CopyNode): 4 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		JSONNode pSVar3;
		String pSVar4;
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
		if (copy == null) {
	label_05be2905: ;
			throw new NullReferenceException();
		}
		local_78 = copy.Keys;
		local_c8.m_Array._current = local_78.m_Array._current;
		local_c8.m_Array._list = local_78.m_Array._list;
		local_c8.m_Array._index = local_78.m_Array._index;
		local_c8.m_Array._version = local_78.m_Array._version;
		local_c8.m_Object._current.value = local_78.m_Object._current.value;
		local_c8.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
		local_c8.m_Object._36_4_ = local_78.m_Object._36_4_;
		local_c8.m_Object._version = local_78.m_Object._version;
		local_c8.m_Object._index = local_78.m_Object._index;
		local_c8.m_Object._current.key = local_78.m_Object._current.key;
		local_c8.type = local_78.type;
		local_c8._4_4_ = local_78._4_4_;
		local_c8.m_Object._dictionary = local_78.m_Object._dictionary;
		local_118 = local_c8.GetEnumerator();
		bVar1 = local_118.MoveNext();
		if (bVar1) {
			if (current == null) {
				pSVar2 = local_118.Current;
				pSVar3 = ((JSONNode)pSVar2);
				if (pSVar3 != null) {
					pSVar3.get_Value();
					pSVar2 = pSVar3.get_Value();
					copy.get_Item(pSVar2);
				}
				goto label_05be2905;
			}
			do {
				pSVar2 = local_118.Current;
				pSVar3 = ((JSONNode)pSVar2);
				if (pSVar3 == null) goto label_05be2905;
				pSVar2 = pSVar3.get_Value();
				pSVar4 = pSVar3.get_Value();
				pSVar3 = copy.get_Item(pSVar4);
				current.set_Item(pSVar2, pSVar3);
				bVar1 = local_118.MoveNext();
			} while (bVar1);
		}
		return;
	}

	[Token(Token = "0x6004036")]
	[Address(RVA = "0x5AE2C10", Offset = "0x5AE1C10", VA = "0x5AE2C10")]
	public CharacterData()
	{
		// Lifted from source/cpp/Characters/CharacterData.c (Characters.CharacterData$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/CharacterData.c.

	// Characters.CharacterData$$.cctor: 1 lines keep C-only constructs
	static CharacterData()
	{
		Characters_CharacterData_StaticFields pCVar1;
		Dictionary<string, JSONNode> __this;
		Dictionary<string, Dictionary<string, TitanAttackInfo>> __this_00;

		__this = new Dictionary<string, JSONNode>();
		pCVar1 = typeof(CharacterData).static_fields;
		pCVar1.TitanAIInfos = __this;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, Dictionary<string, TitanAttackInfo>>));
		__this_00 = new Dictionary<object, object>();
		pCVar1 = typeof(CharacterData).static_fields;
		pCVar1.TitanAttackInfos = __this_00;
		return;
	}
}

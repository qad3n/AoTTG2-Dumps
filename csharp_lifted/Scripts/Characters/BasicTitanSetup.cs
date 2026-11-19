// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BasicTitanSetup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BasicTitanSetup.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitanSetup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x2000719")]
internal class BasicTitanSetup : MonoBehaviour
{
	[Token(Token = "0x400231D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static JSONNode Info;

	[Token(Token = "0x400231E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static int BodyCount;

	[Token(Token = "0x400231F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	public static int HeadCount;

	[Token(Token = "0x4002320")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public static int EyeCount;

	[Token(Token = "0x4002321")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public static int HairMCount;

	[Token(Token = "0x4002322")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public static int HairFCount;

	[Token(Token = "0x4002323")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static Dictionary<string, string> HairPrefabs;

	[Token(Token = "0x4002324")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public static List<string> AllHairs;

	[Token(Token = "0x4002325")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public static List<string> AIHairs;

	[Token(Token = "0x4002326")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public static List<int> AIEyes;

	[Token(Token = "0x4002327")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public static List<Color255> AIHairColors;

	[Token(Token = "0x4002328")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly HashSet<Material> _ownedMaterials;

	[Token(Token = "0x4002329")]
	private const string HairPrefabPath = "Titans/Hairs/Prefabs/";

	[Token(Token = "0x400232A")]
	private const string HeadPrefabPath = "Titans/Heads/Prefabs/";

	[Token(Token = "0x400232B")]
	private const string HeadPart = "TitanHead";

	[Token(Token = "0x400232C")]
	private const string HeadColliderPart = "TitanHeadCollider";

	[Token(Token = "0x400232D")]
	private const string EyesPart = "TitanEyes";

	[Token(Token = "0x400232E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static readonly string[] HeadParts;

	[Token(Token = "0x600453F")]
	[Address(RVA = "0x5B421B0", Offset = "0x5B411B0", VA = "0x5B421B0")]
	public static void PreloadAIAssets()
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$PreloadAIAssets): 6 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		InGameSet pSVar3;
		InGameTitanSettings pSVar4;
		BoolSetting pSVar5;
		String[] pSVar6;
		List<string> __this;
		Dictionary<object, object> __this_00;
		List<int> __this_01;
		bool bVar7;
		int iVar8;
		String str1;
		String pSVar9;
		ulong uVar10;
		String pSVar11;
		int iVar12;
		ulong uVar13;
		int local_88;
		int local_84;
		byte[] local_80 = new byte[16];
		String local_70;
		byte[] local_68 = new byte[8];
		String local_58;
		System_Collections_Generic_List_Enumerator_T__o local_48;

		local_68 = (byte[])0x0;
		local_58 = null;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		local_88 = 0;
		pSVar3 = SettingsManager.InGameCurrent;
		if (((pSVar3 != null) &&(pSVar4 = pSVar3.Titan, pSVar4 != null)) &&(pSVar5 = pSVar4.TitanStandardModels, pSVar5 != null)) {
			bVar7 = pSVar5._value;
			iVar12 = 0;
			while(true) {
				iVar8 = 1;
				local_84 = iVar12;
				if (bVar7 == false) {
					if ((typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor == 0) {
					}
					iVar8 = BasicTitanSetup.BodyCount;
				}
				if (iVar8 <= iVar12) break;
				pSVar11 = ResourcePaths.Characters;
				pSVar9 = CharacterPrefabs.BasicTitanPrefix;
				str1 = local_84.ToString();
				pSVar9 = String.Concat(pSVar9, str1);
				ResourceManager.LoadAsset(pSVar11, pSVar9, true, false);
				iVar12 = local_84 + 1;
			}
			iVar12 = 0;
			while(true) {
				iVar8 = 1;
				if (bVar7 == false) {
					if ((typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor == 0) {
					}
					iVar8 = BasicTitanSetup.HeadCount;
				}
				uVar1 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
				if (iVar8 <= iVar12) break;
				if (uVar1 == 0) {
				}
				pSVar6 = BasicTitanSetup.HeadParts;
				if (pSVar6 == null) goto label_05c42688;
				if (0 < (int)pSVar6.Length) {
					uVar10 = pSVar6.Length & 0xffffffff;
					uVar13 = 0;
					do {
						if (uVar10 <= uVar13) {
							throw new IndexOutOfRangeException();
						}
						pSVar11 = pSVar6[uVar13];
						if ((typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor == 0) {
						}
						BasicTitanSetup.LoadHeadPart(pSVar11, iVar12);
						uVar13 = uVar13 + 1;
						uVar2 = (uint)pSVar6.Length;
						uVar10 = (ulong)uVar2;
					} while ((long)uVar13 < (long)(int)uVar2);
				}
				iVar12 = iVar12 + 1;
			}
			if (uVar1 == 0) {
			}
			__this = BasicTitanSetup.AIHairs;
			if (__this != null) {
				local_80.GetEnumerator((List<object>)__this);
				local_58 = local_70;
				local_68 = (byte[])local_80._0_8_;
				local_80._0_8_ = null;
				local_80._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
				while(true) {
					bVar7 = local_68.MoveNext();
					pSVar11 = local_58;
					if (!bVar7) break;
					BasicTitanSetup.LoadHair(pSVar11);
					__this_00 = (Dictionary<object, object>)BasicTitanSetup.HairPrefabs;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					pSVar11 = __this_00.get_Item((object)pSVar11);
					HumanSetupMaterials.GetHairMaterial(pSVar11);
				}
				local_68.Dispose();
				__this_01 = BasicTitanSetup.AIEyes;
				if (__this_01 != null) {
					local_48 = __this_01.GetEnumerator();
					local_80._0_8_ = null;
					local_80._8_8_ = &local_48;
					while(true) {
						bVar7 = local_48.MoveNext();
						if (!bVar7) break;
						local_88 = (int32_t)local_48._current;
						pSVar11 = local_88.ToString();
						pSVar11 = String.Concat("Eye", pSVar11);
						HumanSetupMaterials.GetTitanEyeMaterial(pSVar11);
					}
					local_48.Dispose();
					return;
				}
			}
		}
	label_05c42688: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004540")]
	[Address(RVA = "0x5B42850", Offset = "0x5B41850", VA = "0x5B42850")]
	private static GameObject LoadHair(string hair)
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$LoadHair): 1 lines keep C-only constructs
		String path;
		Dictionary<object, object> __this;
		String pSVar1;
		Object pUVar2;

		path = ResourcePaths.Characters;
		__this = (Dictionary<object, object>)BasicTitanSetup.HairPrefabs;
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar1 = __this.get_Item((object)hair);
		pSVar1 = String.Concat("Titans/Hairs/Prefabs/", pSVar1);
		pUVar2 = ResourceManager.LoadAsset(path, pSVar1, true, false);
		if ((pUVar2 != null) &&(pUVar2.klass != (Object)typeof(GameObject))) {
			throw new InvalidCastException();
		}
		return (GameObject)pUVar2;
	}

	[Token(Token = "0x6004541")]
	[Address(RVA = "0x5B42980", Offset = "0x5B41980", VA = "0x5B42980")]
	public static void ResetCloth(Transform hairSocket)
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$ResetCloth): 1 lines keep C-only constructs
		bool bVar1;
		int index;
		Transform __this;
		Object pUVar2;
		GameObject pUVar3;
		String value;

		if (Il2CppMethodInitialized_0754781c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Cloth) ;
			Il2CppMethodInitialized_0754781c = true;
		}
		if (hairSocket != null) {
			index = hairSocket.childCount;
			while(true) {
				do {
					index = index + -1;
					if (index < 0) {
						return;
					}
					__this = hairSocket.GetChild(index);
					if (__this == null) goto label_05c42af7;
					pUVar2 = (Object)__this.GetComponentInChildren<Cloth>();
					bVar1 = (pUVar2 == null);
				} while (bVar1);
				pUVar3 = __this.gameObject;
				pUVar2 = (Object)Object.Instantiate<GameObject>((object)pUVar3, hairSocket);
				value = __this.name;
				if (pUVar2 == null) break;
				pUVar2.name = value;
				pUVar3 = __this.gameObject;
				if (pUVar3 == null) break;
				pUVar3.SetActive(false);
				__this.SetParent(null, false);
				pUVar2 = (Object)__this.gameObject;
				Object.Destroy(pUVar2);
			}
		}
	label_05c42af7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004542")]
	[Address(RVA = "0x5B42750", Offset = "0x5B41750", VA = "0x5B42750")]
	private static Transform LoadHeadPart(string part, int head)
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$LoadHeadPart): 1 lines keep C-only constructs
		String path;
		String pSVar1;
		Object __this;
		Transform pUVar2;
		int local_1c;

		local_1c = head;
		path = ResourcePaths.Characters;
		pSVar1 = local_1c.ToString();
		pSVar1 = String.Concat("Titans/Heads/Prefabs/", part, pSVar1);
		__this = ResourceManager.LoadAsset(path, pSVar1, true, false);
		if (__this == null) {
			throw new NullReferenceException();
		}
		if (__this.klass != (Object)typeof(GameObject)) {
			throw new InvalidCastException();
		}
		return pUVar2;
	}

	[Token(Token = "0x6004543")]
	[Address(RVA = "0x5B42B00", Offset = "0x5B41B00", VA = "0x5B42B00")]
	public static void Init()
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$Init): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Characters_BasicTitanSetup_StaticFields pCVar3;
		List<Color255> __this;
		Color255[] pUVar4;
		List<int> __this_00;
		Int32[] pSVar5;
		bool bVar6;
		int iVar7;
		int g;
		int b;
		int a;
		String pSVar8;
		JSONNode pSVar9;
		JSONArray pSVar10;
		JSONNode pSVar11;
		Color255 __this_01;
		HashSet<int> __this_02;
		KeyValuePair<string, JSONNode> SVar13;
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
		pSVar8 = ResourcePaths.CharacterData;
		pSVar8 = ResourceManager.TryLoadText(pSVar8, "TitanSetupInfo");
		pSVar9 = JSON.Parse(pSVar8);
		BasicTitanSetup.Info = pSVar9;
		pSVar9 = BasicTitanSetup.Info;
		if ((pSVar9 != null) &&(pSVar9 = pSVar9.get_Item("BodyCount"), pSVar9 != null)) {
			iVar7 = pSVar9.get_AsInt();
			pCVar3 = typeof(BasicTitanSetup).static_fields;
			pCVar3.BodyCount = iVar7;
			pSVar9 = pCVar3.Info;
			if ((pSVar9 != null) &&(pSVar9 = pSVar9.get_Item("HeadCount"), pSVar9 != null)) {
				iVar7 = pSVar9.get_AsInt();
				pCVar3 = typeof(BasicTitanSetup).static_fields;
				pCVar3.HeadCount = iVar7;
				pSVar9 = pCVar3.Info;
				if ((pSVar9 != null) &&(pSVar9 = pSVar9.get_Item("EyeCount"), pSVar9 != null)) {
					iVar7 = pSVar9.get_AsInt();
					pCVar3 = typeof(BasicTitanSetup).static_fields;
					pCVar3.EyeCount = iVar7;
					pSVar9 = pCVar3.Info;
					if ((pSVar9 != null) &&(pSVar9 = pSVar9.get_Item("HairM"), pSVar9 != null)) {
						iVar7 = pSVar9.get_Count();
						pCVar3 = typeof(BasicTitanSetup).static_fields;
						pCVar3.HairMCount = iVar7;
						pSVar9 = pCVar3.Info;
						if ((pSVar9 != null) &&(pSVar9 = pSVar9.get_Item("HairF"), pSVar9 != null)) {
							iVar7 = pSVar9.get_Count();
							BasicTitanSetup.HairFCount = iVar7;
							BasicTitanSetup.LoadHairs("HairM");
							BasicTitanSetup.LoadHairs("HairF");
							pSVar9 = BasicTitanSetup.Info;
							if ((pSVar9 != null) &&((pSVar9 = pSVar9.get_Item("HairColors"), pSVar9 != null &&(pSVar10 = pSVar9.get_AsArray(), pSVar10 != null)))) {
								local_78.GetEnumerator(pSVar10);
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
								bVar6 = local_c8.MoveNext();
								if (bVar6) {
									do {
										SVar13 = local_c8.Current;
										pSVar9 = ((JSONNode)SVar13);
										if (pSVar9 == null) goto label_05c433c9;
										__this = BasicTitanSetup.AIHairColors;
										pSVar11 = pSVar9.get_Item(0);
										if (pSVar11 == null) goto label_05c433c9;
										iVar7 = pSVar11.get_AsInt();
										pSVar11 = pSVar9.get_Item(1);
										if (pSVar11 == null) goto label_05c433c9;
										g = pSVar11.get_AsInt();
										pSVar11 = pSVar9.get_Item(2);
										if (pSVar11 == null) goto label_05c433c9;
										b = pSVar11.get_AsInt();
										pSVar9 = pSVar9.get_Item(3);
										if (pSVar9 == null) goto label_05c433c9;
										a = pSVar9.get_AsInt();
										__this_01 = new Color255(iVar7, g, b, a);
										if (__this == null) goto label_05c433c9;
										piVar1 = &__this._version;
										*piVar1 = *piVar1 + 1;
										pUVar4 = __this._items;
										if (pUVar4 == null) goto label_05c433c9;
										uVar2 = __this._size;
										if (uVar2 < (uint)pUVar4.Length) {
											__this._size = uVar2 + 1;
											pUVar4[(int)uVar2] = __this_01;
										}
										else {
											__this.AddWithResize((object)__this_01);
										}
										bVar6 = local_c8.MoveNext();
									} while (bVar6);
								}
								__this_02 = new HashSet<int>();
								pSVar9 = BasicTitanSetup.Info;
								if (((pSVar9 != null) &&(pSVar9 = pSVar9.get_Item("AIExcludedEyes"), pSVar9 != null)) &&(pSVar10 = pSVar9.get_AsArray(), pSVar10 != null)) {
									local_78.GetEnumerator(pSVar10);
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
									bVar6 = local_c8.MoveNext();
									if (bVar6) {
										if (__this_02 == null) {
											SVar13 = local_c8.Current;
											pSVar9 = ((JSONNode)SVar13);
											if (pSVar9 != null) {
												pSVar9.get_AsInt();
												throw new NullReferenceException();
											}
											goto label_05c433c9;
										}
										do {
											SVar13 = local_c8.Current;
											pSVar9 = ((JSONNode)SVar13);
											if (pSVar9 == null) goto label_05c433c9;
											iVar7 = pSVar9.get_AsInt();
											__this_02.Add(iVar7);
											bVar6 = local_c8.MoveNext();
										} while (bVar6);
									}
									if (__this_02 == null) {
										if (0 < BasicTitanSetup.EyeCount) goto label_05c433c9;
									}
									else {
										iVar7 = 0;
										while(true) {
											if (BasicTitanSetup.EyeCount <= iVar7) break;
											bVar6 = __this_02.Contains(iVar7);
											if (!bVar6) {
												__this_00 = BasicTitanSetup.AIEyes;
												if (__this_00 == null) goto label_05c433c9;
												piVar1 = &__this_00._version;
												*piVar1 = *piVar1 + 1;
												pSVar5 = __this_00._items;
												if (pSVar5 == null) goto label_05c433c9;
												uVar2 = __this_00._size;
												if (uVar2 < (uint)pSVar5.Length) {
													__this_00._size = uVar2 + 1;
													pSVar5[(int)uVar2] = iVar7;
												}
												else {
													__this_00.AddWithResize(iVar7);
												}
											}
											iVar7 = iVar7 + 1;
										}
									}
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05c433c9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004544")]
	[Address(RVA = "0x5B433F0", Offset = "0x5B423F0", VA = "0x5B433F0")]
	private static void LoadHairs(string key)
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$LoadHairs): 7 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<string> pSVar3;
		String[] pSVar4;
		Dictionary<object, object> __this;
		bool bVar6;
		int iVar7;
		String pSVar8;
		JSONNode pSVar9;
		String value;
		int iVar10;
		KeyValuePair<string, JSONNode> SVar11;
		int local_d4;
		HashSet<string> local_d0;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		if (Il2CppMethodInitialized_0754781f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_0754781f = true;
		}
		local_d4 = 0;
		local_d0 = new HashSet<string>();
		pSVar9 = BasicTitanSetup.Info;
		pSVar8 = String.Concat("AIExcluded", key);
		if ((pSVar9 != null) &&(pSVar9 = pSVar9.get_Item(pSVar8), pSVar9 != null)) {
			local_78.unknown(pSVar9);
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
			iVar10 = 0;
			bVar6 = local_c8.MoveNext();
			if (bVar6) {
				if (local_d0 == null) {
					SVar11 = local_c8.Current;
					pSVar9 = ((JSONNode)SVar11);
					if (pSVar9 != null) {
						pSVar9.get_Value();
						throw new NullReferenceException();
					}
					goto label_05c438b0;
				}
				do {
					SVar11 = local_c8.Current;
					pSVar9 = ((JSONNode)SVar11);
					if (pSVar9 == null) goto label_05c438b0;
					pSVar8 = pSVar9.get_Value();
					local_d0.Add((object)pSVar8);
					bVar6 = local_c8.MoveNext();
				} while (bVar6);
			}
			while(true) {
				local_d4 = iVar10;
				pSVar9 = BasicTitanSetup.Info;
				if ((pSVar9 == null) ||(pSVar9 = pSVar9.get_Item(key), pSVar9 == null)) break;
				iVar7 = pSVar9.get_Count();
				if (iVar7 <= iVar10) {
					return;
				}
				pSVar8 = local_d4.ToString();
				pSVar8 = String.Concat(key, pSVar8);
				pSVar9 = BasicTitanSetup.Info;
				if ((pSVar9 == null) ||(pSVar9 = pSVar9.get_Item(key), pSVar9 == null)) break;
				pSVar9 = pSVar9.get_Item(local_d4);
				value = ((JSONNode)pSVar9);
				pSVar3 = BasicTitanSetup.AllHairs;
				if (pSVar3 == null) break;
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				pSVar4 = pSVar3._items;
				if (pSVar4 == null) break;
				uVar2 = pSVar3._size;
				if (uVar2 < (uint)pSVar4.Length) {
					pSVar3._size = uVar2 + 1;
					pSVar4[(int)uVar2] = pSVar8;
				}
				else {
					pSVar3.AddWithResize((object)pSVar8);
				}
				__this = (Dictionary<object, object>)BasicTitanSetup.HairPrefabs;
				if ((__this == null) ||(__this.set_Item((object)pSVar8, (object)value), local_d0 == null)) break;
				bVar6 = local_d0.Contains((object)value);
				if (!bVar6) {
					pSVar3 = BasicTitanSetup.AIHairs;
					if (pSVar3 == null) break;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pSVar4 = pSVar3._items;
					if (pSVar4 == null) break;
					uVar2 = pSVar3._size;
					if (uVar2 < (uint)pSVar4.Length) {
						pSVar3._size = uVar2 + 1;
						pSVar4[(int)uVar2] = pSVar8;
					}
					else {
						pSVar3.AddWithResize((object)pSVar8);
					}
				}
				iVar10 = local_d4 + 1;
			}
		}
	label_05c438b0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004545")]
	[Address(RVA = "0x5B438D0", Offset = "0x5B428D0", VA = "0x5B438D0")]
	public static int[] GetRandomBodyHeadCombo([Optional] JSONNode node)
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$GetRandomBodyHeadCombo): 13 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int iVar3;
		uint uVar4;
		InGameSet pSVar5;
		InGameTitanSettings pSVar6;
		BoolSetting pSVar7;
		Dictionary<object, object> __this;
		Object[] pSVar8;
		Single[] pSVar9;
		Il2CppClass pIVar10;
		MethodInfo pMVar11;
		bool bVar12;
		int iVar13;
		Int32[] pSVar14;
		JSONNode pSVar15;
		List<object> __this_00;
		List<float> __this_01;
		object pIVar16;
		long plVar17;
		float item;
		KeyValuePair<string, JSONNode> SVar18;
		JSONNode.Enumerator local_c8;
		JSONNode.Enumerator local_78;

		pSVar14 = (Int32[])new int[2];
		pSVar5 = SettingsManager.InGameCurrent;
		if (((pSVar5 != null) &&(pSVar6 = pSVar5.Titan, pSVar6 != null)) &&(pSVar7 = pSVar6.TitanStandardModels, pSVar7 != null)) {
			if (pSVar7._value == false) {
				bVar12 = (node == null);
				if (bVar12) {
					__this = (Dictionary<object, object>)CharacterData.TitanAIInfos;
					if ((__this == null) ||(pSVar15 = __this.get_Item((Il2CppObject *)"Titan"), pSVar15 == null)) goto label_05c43e46;
					node = pSVar15.get_Item("Default");
				}
				if (node != null) {
					pSVar15 = node.get_Item("BodyHeadCombos");
					__this_00 = new List<object>();
					__this_01 = new List<float>();
					if (pSVar15 != null) {
						local_78.unknown(pSVar15);
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
						bVar12 = local_c8.MoveNext();
						if (bVar12) {
							if (__this_00 == null) {
								SVar18 = local_c8.Current;
								((JSONNode)SVar18);
								throw new NullReferenceException();
							}
							do {
								SVar18 = local_c8.Current;
								pIVar16 = (object)((JSONNode)SVar18);
								pMVar11 = MethodInfo_System_Collections_Generic_List_object_Add;
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pSVar8 = __this_00._items;
								if (pSVar8 == null) goto label_05c43e46;
								uVar4 = __this_00._size;
								if (uVar4 < (uint)pSVar8.Length) {
									__this_00._size = uVar4 + 1;
									pSVar8[(int)uVar4] = pIVar16;
								}
								else {
									__this_00.AddWithResize(pIVar16);
								}
								if (((pIVar16 == null) ||(plVar17 = (long)(*pIVar16.klass.vtable[7].methodPtr)(pIVar16,"Chance",pIVar16.klass.vtable[7].method ), plVar17 == null)) ||(item = (float)(**(code*)(*plVar17 + 0x388))(plVar17), pMVar11 = MethodInfo_System_Collections_Generic_List_float_Add, __this_01 == null)) goto label_05c43e46;
								piVar1 = &__this_01._version;
								*piVar1 = *piVar1 + 1;
								pSVar9 = __this_01._items;
								if (pSVar9 == null) goto label_05c43e46;
								uVar4 = __this_01._size;
								if (uVar4 < (uint)pSVar9.Length) {
									__this_01._size = uVar4 + 1;
									pSVar9[(int)uVar4] = item;
								}
								else {
									__this_01.AddWithResize(item);
								}
								bVar12 = local_c8.MoveNext();
							} while (bVar12);
						}
						pIVar16 = Util.GetRandomFromWeightedList(__this_00, __this_01);
						if (pIVar16 != null) {
							pIVar10 = pIVar16.klass;
							bVar2 = (typeof(JSONNode)._2).typeHierarchyDepth;
							if (((pIVar10._2).typeHierarchyDepth < bVar2) ||((pIVar10._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(JSONNode))) {
								throw new InvalidCastException();
							}
							plVar17 = (long)(*pIVar10.vtable[7].methodPtr)(pIVar16,"Body",pIVar10.vtable[7].method);
							if ((plVar17 != null) &&(iVar13 = (**(code*)(*plVar17 + 0x368))(plVar17,*(ulong)(*plVar17 + 0x370)), pSVar14 != null)) {
								if ((int)pSVar14.Length != 0) {
									pSVar14[0] = iVar13;
									plVar17 = (long)(*pIVar16.klass.vtable[7].methodPtr)(pIVar16,"Head",pIVar16.klass.vtable[7].method);
									if (plVar17 == null) goto label_05c43e46;
									iVar13 = (**(code*)(*plVar17 + 0x368))(plVar17,*(ulong)(*plVar17 + 0x370));
									if ((pSVar14.Length & 0xfffffffe) != 0) goto label_05c43e2e;
								}
	label_05c43e4b: ;
								throw new IndexOutOfRangeException();
							}
						}
					}
				}
			}
			else if (pSVar14 != null) {
				iVar3 = (int)pSVar14.Length;
				if (iVar3 != 0) {
					pSVar14[0] = 0;
					iVar13 = 0;
					if (iVar3 != 1) {
	label_05c43e2e: ;
						pSVar14[1] = iVar13;
						return pSVar14;
					}
				}
				goto label_05c43e4b;
			}
		}
	label_05c43e46: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004546")]
	[Address(RVA = "0x5B43EA0", Offset = "0x5B42EA0", VA = "0x5B43EA0")]
	public TitanCustomSet CreateRandomSet(int headPrefab)
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$CreateRandomSet): clean
		IntSetting pSVar1;
		StringSetting __this_00;
		List<string> list;
		ColorSetting pSVar2;
		int iVar3;
		TitanCustomSet __this_01;
		String value;
		Color255 pUVar4;

		__this_01 = new TitanCustomSet();
		if ((__this_01 != null) &&(pSVar1 = __this_01.Head, pSVar1 != null)) {
			pSVar1.Value = headPrefab;
			__this_00 = __this_01.Hair;
			list = BasicTitanSetup.AIHairs;
			value = MiscExtensions.GetRandomItem<string>((List<T>)list);
			if (__this_00 != null) {
				__this_00.Value = (object)value;
				pSVar2 = __this_01.HairColor;
				pUVar4 = MiscExtensions.GetRandomItem<Color255>((List<T>)BasicTitanSetup.AIHairColors);
				if (pSVar2 != null) {
					pSVar2.Value = (object)pUVar4;
					pSVar1 = __this_01.Eye;
					iVar3 = MiscExtensions.GetRandomItem<int>((List<T>)BasicTitanSetup.AIEyes);
					if (pSVar1 != null) {
						pSVar1.Value = iVar3;
						iVar3 = Random.Range(0xa0, 0x100);
						pSVar2 = __this_01.SkinColor;
						pUVar4 = new Color255(iVar3, iVar3, iVar3, 0xff);
						if (pSVar2 != null) {
							pSVar2.Value = (object)pUVar4;
							return __this_01;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004547")]
	[Address(RVA = "0x5B440D0", Offset = "0x5B430D0", VA = "0x5B440D0")]
	public void Load(TitanCustomSet set)
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$Load): 6 lines keep C-only constructs
		HashSet<Material> collection;
		HashSet<object> pSVar1;
		ColorSetting pSVar2;
		Color255 pUVar3;
		Renderer __this_00;
		Dictionary<object, object> __this_01;
		BasicTitanSetup __this_02;
		bool bVar4;
		int head;
		int index;
		uint uVar5;
		List<Material> __this_03;
		Transform pUVar6;
		BasicTitanSetup pCVar7;
		SkinnedMeshRenderer pUVar8;
		Material pUVar9;
		Transform pUVar10;
		Object pUVar11;
		String pSVar12;
		GameObject pUVar13;
		Object[] pSVar14;
		String texture;
		SkinnedMeshRenderer __this_04;
		Mesh pUVar15;
		Transform pUVar16;
		BoxCollider __this_05;
		MeshFilter __this_06;
		MeshFilter __this_07;
		MeshRenderer __this_08;
		BaseCharacter __this_09;
		BasicTitanSetup pCVar18;
		uint uVar19;
		Vector3 UVar20;
		Color UVar21;
		Quaternion UVar22;
		int local_8c;
		BasicTitanSetup local_88;
		BasicTitanSetup local_80;
		byte[] local_78 = new byte[12];
		uint uStack_6c;
		Object local_68;
		TitanCustomSet local_60;
		byte[] local_58 = new byte[8];
		Object local_48;
		List<Material> local_40;
		Material local_38;

		local_8c = 0;
		local_58 = (byte[])0x0;
		local_48 = null;
		collection = this._ownedMaterials;
		__this_03 = new List<Material>((IEnumerable<T>)collection);
		pSVar1 = (HashSet<object>)this._ownedMaterials;
		if (pSVar1 != null) {
			pSVar1.Clear();
			pUVar6 = this.transform;
			if ((pUVar6 != null) &&(pCVar7 = (BasicTitanSetup)pUVar6.Find("Amarture_VER2/Core/Controller.Body/hip/spine/chest/neck/head"), set != null)) {
				head = set.GetHead();
				pUVar6 = this.transform;
				if ((pUVar6 != null) &&(pUVar6 = pUVar6.Find("Body"), pUVar6 != null)) {
					pUVar8 = pUVar6.GetComponent<SkinnedMeshRenderer>();
					if (pUVar8 != null) {
						pUVar9 = pUVar8.material;
						pSVar1 = (HashSet<object>)this._ownedMaterials;
						if (pSVar1 != null) {
							pSVar1.Add((object)pUVar9);
							pSVar2 = set.SkinColor;
							if ((((pSVar2 != null) &&(pUVar3 = pSVar2._value, pUVar3 != null)) &&(UVar21 = pUVar3.ToColor(), pUVar9 != null)) &&((pUVar9.color = UVar21, pCVar7 != null &&(local_88 = pCVar7, local_40 = __this_03, local_38 = pUVar9, pUVar6 = pCVar7.Find("HairSocket") , pUVar6 != null)))) {
								index = pUVar6.childCount;
								while (true) {
									index = index + -1;
									if (!(-1 < index)) break;
									pUVar10 = pUVar6.GetChild(index);
									if (pUVar10 == null) goto label_05c44dbc;
									pUVar11 = (Object)pUVar10.gameObject;
									Object.DestroyImmediate(pUVar11);
								}
								local_80 = this;
								local_60 = set;
								pSVar12 = set.GetHair();
								pUVar13 = BasicTitanSetup.LoadHair(pSVar12);
								pUVar13 = Object.Instantiate<GameObject>((object)pUVar13) ;
								if ((pUVar13 != null) &&(pUVar10 = pUVar13.transform, pUVar10 != null)) {
									pUVar10.SetParent(pUVar6);
									pUVar6 = pUVar13.transform;
									if (pUVar6 != null) {
										pUVar6.localPosition = (Vector3)(Vector3.zeroVector);
										pUVar6 = pUVar13.transform;
										local_78._0_8_ = (List<T>)0xbfc90fdb;
										stack0xffffffffffffff90 =(System_Collections_Generic_List_Enumerator_object__o)((ulong)uStack_6c << 0x20);
										UVar22 = Quaternion.Internal_FromEulerRad((Vector3)local_78);
										if (pUVar6 != null) {
											pUVar6.localRotation = UVar22;
											pUVar6 = pUVar13.transform;
											if (pUVar6 != null) {
												pUVar6.localScale = (Vector3)(Vector3.oneVector);
												pSVar14 = pUVar13.GetComponentsInChildren<Renderer>();
												if (pSVar14 != null) {
													uVar5 = (uint)pSVar14.Length;
													if (0 < (int)uVar5) {
														uVar19 = 0;
														do {
															if (uVar5 <= uVar19) {
																throw new IndexOutOfRangeException();
															}
															__this_00 = (Renderer)pSVar14[(int)uVar19];
															__this_01 = (Dictionary<object, object>)BasicTitanSetup.HairPrefabs;
															if (__this_01 == null) goto label_05c44dbc;
															texture = __this_01.get_Item((object)pSVar12);
															pUVar9 = HumanSetupMaterials.GetHairMaterial(texture);
															if (__this_00 == null) goto label_05c44dbc;
															__this_00.material = pUVar9;
															pUVar9 = __this_00.material;
															pSVar1 = (HashSet<object>)local_80._ownedMaterials;
															if (pSVar1 == null) goto label_05c44dbc;
															pSVar1.Add((object)pUVar9);
															pSVar2 = local_60.HairColor;
															if (((pSVar2 == null) ||(pUVar3 = pSVar2._value, pUVar3 == null)) ||(UVar21 = pUVar3.ToColor(), pUVar9 == null)) goto label_05c44dbc;
															pUVar9.color = UVar21;
															uVar19 = uVar19 + 1;
															uVar5 = (uint)pSVar14.Length;
														} while ((int)uVar19 < (int)uVar5);
													}
													pCVar7 = local_80;
													pUVar6 = local_80.transform;
													if (pUVar6 != null) {
														pUVar6 = pUVar6.Find("Head") ;
														if ((typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor == 0) {
														}
														pUVar10 = BasicTitanSetup.LoadHeadPart("TitanHead", head);
														if ((pUVar6 != null) &&(pUVar8 = pUVar6.GetComponent<SkinnedMeshRenderer>(), pUVar8 != null)) {
															pUVar8.material = local_38;
															pUVar8 = pUVar6.GetComponent<SkinnedMeshRenderer>();
															if ((pUVar10 != null) &&((__this_04 = pUVar10.GetComponent<SkinnedMeshRenderer>(), __this_04 != null &&(pUVar15 = __this_04.sharedMesh, pUVar8 != null)))) {
																pUVar8.sharedMesh = pUVar15;
																pCVar18 = (Characters_BasicTitanSetup_o *)"TitanHeadCollider";
																pUVar6 = BasicTitanSetup.LoadHeadPart("TitanHeadCollider", head);
																__this_02 = local_88;
																pCVar18.CopyColliders(pUVar6, (Transform)local_88, true, false);
																if (pUVar6 != null) {
																	pUVar10 = pUVar6.Find("Bone");
																	pCVar18 = __this_02;
																	pUVar16 = __this_02.Find("Bone");
																	pCVar18.CopyColliders(pUVar10, pUVar16, false, false);
																	pUVar10 = pUVar6.Find("EyesHurtbox");
																	pCVar18 = __this_02;
																	pUVar16 = __this_02.Find("EyesHurtbox");
																	pCVar18.CopyColliders(pUVar10, pUVar16, false, true);
																	pUVar10 = pUVar6.Find("HairSocket");
																	pUVar16 = __this_02.Find("HairSocket");
																	if ((pUVar10 != null) &&(UVar20 = pUVar10.localPosition, pUVar16 != null)) {
																		pUVar16.localPosition = UVar20;
																		UVar22 = pUVar10.localRotation ;
																		pUVar16.localRotation = UVar22;
																		UVar20 = pUVar10.localScale;
																		pUVar16.localScale = UVar20;
																		pUVar10 = pUVar6.Find("Nose");
																		bVar4 = ((Object)pUVar10 != null);
																		if (bVar4) {
																			pUVar6 = pUVar6.Find("Nose");
																			pUVar13 = new GameObject();
																			if (pUVar13 == null) goto label_05c44dbc;
																			pUVar13.layer = PhysicsLayer. TitanPushbox;
																			pUVar10 = pUVar13.transform ;
																			if (pUVar10 == null) goto label_05c44dbc;
																			pUVar10.SetParent((Transform)local_88);
																			pUVar10 = pUVar13.transform ;
																			if ((pUVar6 == null) ||(UVar20 = pUVar6.localPosition, pUVar10 == null)) goto label_05c44dbc;
																			pUVar10.localPosition = UVar20 ;
																			pUVar10 = pUVar13.transform ;
																			UVar22 = pUVar6.localRotation;
																			if (pUVar10 == null) goto label_05c44dbc;
																			pUVar10.localRotation = UVar22 ;
																			pUVar10 = pUVar13.transform ;
																			UVar20 = pUVar6.localScale;
																			if (pUVar10 == null) goto label_05c44dbc;
																			pUVar10.localScale = UVar20;
																			__this_05 = pUVar13.AddComponent<BoxCollider>();
																			if (__this_05 == null) goto label_05c44dbc;
																			__this_05.center = (Vector3)(Vector3.zeroVector). fields;
																			__this_05.size = (Vector3)(Vector3.oneVector);
																		}
																		local_8c = local_60.GetEye();
																		pUVar6 = local_88.Find("Eyes");
																		if ((typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor == 0) {
																		}
																		pUVar10 = BasicTitanSetup.LoadHeadPart("TitanEyes", head);
																		if ((((pUVar6 != null) &&(__this_06 = pUVar6.GetComponent<MeshFilter>(), pUVar10 != null)) &&(__this_07 = pUVar10.GetComponent<MeshFilter>(), __this_07 != null)) &&(pUVar15 = __this_07.sharedMesh, __this_06 != null)) {
																			__this_06.sharedMesh = pUVar15;
																			__this_08 = pUVar6.GetComponent<MeshRenderer>();
																			pSVar12 = local_8c.ToString();
																			pSVar12 = String.Concat("Eye", pSVar12);
																			if ((typeof(HumanSetupMaterials)._2). cctor_finished_or_no_cctor == 0) {
																			}
																			pUVar9 = HumanSetupMaterials.GetTitanEyeMaterial(pSVar12);
																			if ((__this_08 != null) &&(__this_08.material = pUVar9, local_40 != null)) {
																				local_78.GetEnumerator((List<object>)local_40);
																				local_48 = local_68;
																				local_58 = (byte[])local_78._0_8_;
																				local_78._0_8_ = null;
																				unique0x10001359 =(System_Collections_Generic_List_Enumerator_object__o)local_58;
																				while (true) {
																					bVar4 = local_58.MoveNext();
																					pUVar11 = local_48;
																					if (!(bVar4)) break;
																					bVar4 = (pUVar11 != null);
																					if (bVar4) {
																						pSVar1 = (HashSet<object>)pCVar7._ownedMaterials;
																						if (pSVar1 == null) {
																							throw new NullReferenceException();
																						}
																						bVar4 = pSVar1.Contains((object)pUVar11);
																						if (!bVar4) {
																							Object.Destroy(pUVar11);
																						}
																					}
																				}
																				local_58.Dispose();
																				__this_09 = pCVar7.GetComponent<BaseCharacter>();
																				bVar4 = ((Object)__this_09 != null);
																				if (bVar4) {
																					if (__this_09 == null) goto label_05c44dbc;
																					__this_09.RefreshRenderers();
																				}
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
	label_05c44dbc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004548")]
	[Address(RVA = "0x5B44E40", Offset = "0x5B43E40", VA = "0x5B44E40")]
	private Material OwnInstance(Renderer renderer)
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$OwnInstance): clean
		HashSet<object> __this_00;
		Material item;

		if (renderer != null) {
			item = renderer.material;
			__this_00 = (HashSet<object>)this._ownedMaterials;
			if (__this_00 != null) {
				__this_00.Add((object)item);
				return item;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004549")]
	[Address(RVA = "0x5B450C0", Offset = "0x5B440C0", VA = "0x5B450C0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$OnDestroy): 2 lines keep C-only constructs
		HashSet<object> __this_00;
		object x;
		bool bVar1;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
		byte puStack_28;

		SStack_48._set = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		__this_00 = (HashSet<object>)this._ownedMaterials;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		SStack_48 = __this_00.GetEnumerator();
		puStack_28 = (byte)&SStack_48;
		while(true) {
			bVar1 = SStack_48.MoveNext();
			x = SStack_48._current;
			if (!bVar1) break;
			bVar1 = ((Object)x != null);
			if (bVar1) {
				Object.Destroy((Object)x);
			}
		}
		SStack_48.Dispose();
		return;
	}

	[Token(Token = "0x600454A")]
	[Address(RVA = "0x5B44EB0", Offset = "0x5B43EB0", VA = "0x5B44EB0")]
	protected void CopyColliders(Transform from, Transform to, bool capsule, bool moveTransform)
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$CopyColliders): 1 lines keep C-only constructs
		Component __this_00;
		Component __this_01;
		Transform pUVar1;
		Transform pUVar2;
		float fVar3;
		Quaternion value;
		Vector3 UVar4;

		if (Il2CppMethodInitialized_07547825 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider) ;
			Il2CppMethodInitialized_07547825 = true;
		}
		if (capsule) {
			if (((from == null) ||(__this_00 = (Component)from.GetComponent<CapsuleCollider>(), to == null)) ||((__this_01 = (Component)to.GetComponent<CapsuleCollider>(), __this_00 == null ||(UVar4 = __this_00.center, __this_01 == null)))) goto label_05c450b3;
			__this_01.center = UVar4;
			fVar3 = __this_00.radius;
			__this_01.radius = fVar3;
			fVar3 = __this_00.height;
			__this_01.height = fVar3;
		}
		else {
			if ((((from == null) ||(__this_00 = (Component)from.GetComponent<BoxCollider>(), to == null)) ||(__this_01 = (Component)to.GetComponent<BoxCollider>(), __this_00 == null)) ||(UVar4 = __this_00.center, __this_01 == null)) goto label_05c450b3;
			__this_01.center = UVar4;
			UVar4 = __this_00.size;
			__this_01.size = UVar4;
		}
		if (!moveTransform) {
			return;
		}
		pUVar1 = __this_01.transform;
		pUVar2 = __this_00.transform;
		if ((pUVar2 != null) &&(UVar4 = pUVar2.localPosition, pUVar1 != null)) {
			pUVar1.localPosition = UVar4;
			pUVar1 = __this_01.transform;
			pUVar2 = __this_00.transform;
			if ((pUVar2 != null) &&(value = pUVar2.localRotation, pUVar1 != null)) {
				pUVar1.localRotation = value;
				pUVar1 = __this_01.transform;
				pUVar2 = __this_00.transform;
				if ((pUVar2 != null) &&(UVar4 = pUVar2.localScale, pUVar1 != null)) {
					pUVar1.localScale = UVar4;
					return;
				}
			}
		}
	label_05c450b3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600454B")]
	[Address(RVA = "0x5B45250", Offset = "0x5B44250", VA = "0x5B45250")]
	public BasicTitanSetup()
	{
		// Lifted from source/cpp/Characters/BasicTitanSetup.c (Characters.BasicTitanSetup$$.ctor): clean
		HashSet<Material> __this_00;

		__this_00 = new HashSet<Material>();
		this._ownedMaterials = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/BasicTitanSetup.c.

	// Characters.BasicTitanSetup$$.cctor: clean
	static BasicTitanSetup()
	{
		Characters_BasicTitanSetup_StaticFields pCVar1;
		Dictionary<string, string> __this;
		List<string> pSVar2;
		List<int> __this_00;
		List<Color255> __this_01;
		String[] pSVar3;

		__this = new Dictionary<string, string>();
		pCVar1 = typeof(BasicTitanSetup).static_fields;
		pCVar1.HairPrefabs = __this;
		pSVar2 = new List<string>();
		pCVar1 = typeof(BasicTitanSetup).static_fields;
		pCVar1.AllHairs = pSVar2;
		pSVar2 = new List<string>();
		pCVar1 = typeof(BasicTitanSetup).static_fields;
		pCVar1.AIHairs = pSVar2;
		__this_00 = new List<int>();
		pCVar1 = typeof(BasicTitanSetup).static_fields;
		pCVar1.AIEyes = __this_00;
		__this_01 = new List<Color255>();
		pCVar1 = typeof(BasicTitanSetup).static_fields;
		pCVar1.AIHairColors = __this_01;
		pSVar3 = (String[])new string[3];
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar3.Length != 0) {
			pSVar3[0] = "TitanHead";
			if ((pSVar3.Length & 0xfffffffe) != 0) {
				pSVar3[1] = "TitanHeadCollider";
				if (2 < (uint)pSVar3.Length) {
					pSVar3[2] = "TitanEyes";
					pCVar1 = typeof(BasicTitanSetup).static_fields;
					pCVar1.HeadParts = pSVar3;
					return;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}

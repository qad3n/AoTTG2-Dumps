// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgEmoteCatalog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002FF")]
internal static class AottgEmoteCatalog
{
	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x57F44B0", Offset = "0x57F34B0", VA = "0x57F44B0")]
	public static AottgProfilePreset[] StickerPresets()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteCatalog.c (Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$StickerPresets): 5 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String pSVar3;
		AottgProfilePreset item;
		bool bVar4;
		int iVar5;
		MethodInfo __this;
		String[] pSVar6;
		ulong uVar7;
		String pSVar8;
		String pSVar9;
		AottgProfilePreset[] pGVar10;
		MethodInfo pMVar11;
		ulong uVar12;
		AottgProfilePreset local_48;

		__this = new List<AottgProfilePreset>();
		pSVar6 = AottgEmoteCatalog.AllStickers();
		if (pSVar6 != null) {
			iVar5 = (int)pSVar6.Length;
			if (__this != null) {
				if (0 < iVar5) {
					uVar7 = pSVar6.Length & 0xffffffff;
					uVar12 = 0;
					do {
						if (uVar7 <= uVar12) {
							throw new IndexOutOfRangeException();
						}
						pSVar3 = pSVar6[uVar12];
						bVar4 = String.IsNullOrEmpty(pSVar3);
						if (bVar4) {
							pSVar8 = "None";
						}
						else {
							if (pSVar3 == null) goto label_058f471f;
							pMVar11 = (MethodInfo *)"Emoji";
							pSVar8 = pSVar3.Replace("Emoji", (String)**(ulong*)(g_data_07556758 + 0xb8));
						}
						pSVar9 = AottgEmoteCatalog.Sprite(pSVar3);
						local_48.Key = null;
						local_48.Label = null;
						local_48.Sprite = null;
						local_48 = new AottgProfilePreset(pSVar3, pSVar8, pSVar9);
						piVar1 = (int)((long)&__this.name + 4);
						*piVar1 = *piVar1 + 1;
						pGVar10 = ((List<AottgProfilePreset>)&__this.invoker_method). _items;
						if (pGVar10 == null) goto label_058f471f;
						uVar2 = *(uint)&__this.name;
						if (uVar2 < (uint)pGVar10.Length) {
							*(uint)&__this.name = uVar2 + 1;
							pGVar10[(int)uVar2].Sprite = local_48.Sprite;
							pGVar10[(int)uVar2].Key = local_48.Key;
							pGVar10[(int)uVar2].Label = local_48.Label;
						}
						else {
							item.Label = local_48.Label;
							item.Key = local_48.Key;
							item.Sprite = local_48.Sprite;
							__this.AddWithResize(item);
						}
						uVar12 = uVar12 + 1;
						uVar2 = (uint)pSVar6.Length;
						uVar7 = (ulong)uVar2;
					} while ((long)uVar12 < (long)(int)uVar2);
				}
				pGVar10 = __this.ToArray();
				return pGVar10;
			}
			if (0 < iVar5) {
				pSVar3 = pSVar6[0];
				bVar4 = String.IsNullOrEmpty(pSVar3);
				if (bVar4) {
					pSVar8 = "None";
				}
				else {
					if (pSVar3 == null) goto label_058f471f;
					pMVar11 = (MethodInfo *)"Emoji";
					pSVar8 = pSVar3.Replace("Emoji", (String)**(ulong*)(g_data_07556758 + 0xb8));
				}
				pSVar9 = AottgEmoteCatalog.Sprite(pSVar3);
				local_48.Key = null;
				local_48.Label = null;
				local_48.Sprite = null;
				local_48 = new AottgProfilePreset(pSVar3, pSVar8, pSVar9);
				throw new NullReferenceException();
			}
		}
	label_058f471f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x57F4B90", Offset = "0x57F3B90", VA = "0x57F4B90")]
	public static string Sprite(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteCatalog.c (Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$Sprite): 2 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;
		String pSVar3;
		MethodInfo method_00;

		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar1 = String.IsNullOrEmpty(value);
		if (!bVar1) {
			if (value == null) {
				throw new NullReferenceException();
			}
			method_00 = (MethodInfo *)"Emoji";
			bVar1 = value.StartsWith("Emoji", 4);
			if (bVar1) {
				bVar1 = AottgEmoteCatalog.IsAnimated(value);
				if (bVar1) {
					ppSVar2 = &"_0";
				}
				else {
					ppSVar2 = *(String**)(g_data_07556758 + 0xb8);
				}
				pSVar3 = "UI/Icons/Emotes/";
				goto label_058f4c8f;
			}
		}
		ppSVar2 = &"Icon";
		pSVar3 = "UI/Icons/Profile/";
	label_058f4c8f: ;
		pSVar3 = String.Concat(pSVar3, value, *ppSVar2);
		return pSVar3;
	}

	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x57F4B10", Offset = "0x57F3B10", VA = "0x57F4B10")]
	private static string Label(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteCatalog.c (Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$Label): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return "None";
		}
		if (value == null) {
			throw new NullReferenceException();
		}
		pSVar2 = value.Replace("Emoji", (String)**(ulong*)(g_data_07556758 + 0xb8));
		return pSVar2;
	}

	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x57F4D10", Offset = "0x57F3D10", VA = "0x57F4D10")]
	public static bool IsAnimated(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteCatalog.c (Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$IsAnimated): clean
		uint uVar1;
		bool bVar2;
		String[] pSVar3;
		ulong uVar4;
		ulong uVar5;

		pSVar3 = (String[])new string[0];
		pSVar3 = AottgEmoteCatalog.ReadList("Data/Info/EmoteInfo", "AnimatedEmojis", pSVar3) ;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar3.Length < 1) {
			return false;
		}
		uVar4 = pSVar3.Length & 0xffffffff;
		uVar5 = 0;
		while(true) {
			if (uVar4 <= uVar5) {
				throw new IndexOutOfRangeException();
			}
			bVar2 = (pSVar3[uVar5] == value);
			if (bVar2) break;
			uVar5 = uVar5 + 1;
			uVar1 = (uint)pSVar3.Length;
			uVar4 = (ulong)uVar1;
			if ((long)(int)uVar1 <= (long)uVar5) {
				return false;
			}
		}
		return true;
	}

	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x57F4790", Offset = "0x57F3790", VA = "0x57F4790")]
	private static string[] AllStickers()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteCatalog.c (Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$AllStickers): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String pSVar3;
		String[] pSVar4;
		bool bVar6;
		String[] pSVar7;
		List<string> __this;
		ulong uVar8;
		ulong uVar9;
		long lVar10;

		pSVar7 = (String[])new string[4];
		if (pSVar7 == null) goto label_058f4afb;
		if ((int)pSVar7.Length != 0) {
			pSVar7[0] = "EmojiSmile";
			if ((pSVar7.Length & 0xfffffffe) != 0) {
				pSVar7[1] = "EmojiThumbsUp";
				if (2 < (uint)pSVar7.Length) {
					pSVar7[2] = "EmojiCool";
					if ((pSVar7.Length & 0xfffffffc) != 0) {
						pSVar7[3] = "EmojiLove";
						pSVar7 = AottgEmoteCatalog.ReadList("Data/Info/EmoteInfo", "AllEmojis", pSVar7);
						__this = new List<string>((IEnumerable<T>)pSVar7);
						pSVar7 = (String[])new string[0];
						pSVar7 = AottgEmoteCatalog.ReadList("Data/Info/ProfileIconInfo", "Icons", pSVar7);
						if (pSVar7 != null) {
							uVar8 = pSVar7.Length;
							if (__this == null) {
								if ((int)uVar8 < 1) goto label_058f4afb;
								lVar10 = 0;
								do {
									if ((uint)uVar8 <= (uint)lVar10) goto label_058f4b00;
									pSVar3 = pSVar7[lVar10];
									bVar6 = String.IsNullOrEmpty(pSVar3);
									if ((bVar6) || (pSVar3 == null)) goto label_058f4afb;
									bVar6 = pSVar3.StartsWith("Emoji", 4);
									if (!bVar6) goto label_058f4afb;
									uVar2 = (uint)pSVar7.Length;
									uVar8 = (ulong)uVar2;
									lVar10 = lVar10 + 1;
								} while ((int)lVar10 < (int)uVar2);
							}
							else if (0 < (int)uVar8) {
								uVar8 = uVar8 & 0xffffffff;
								uVar9 = 0;
								do {
									if (uVar8 <= uVar9) goto label_058f4b00;
									pSVar3 = pSVar7[uVar9];
									bVar6 = String.IsNullOrEmpty(pSVar3);
									if (bVar6) {
	label_058f4a23: ;
										piVar1 = &__this._version;
										*piVar1 = *piVar1 + 1;
										pSVar4 = __this._items;
										if (pSVar4 == null) goto label_058f4afb;
										uVar2 = __this._size;
										if (uVar2 < (uint)pSVar4.Length) {
											__this._size = uVar2 + 1;
											pSVar4[(int)uVar2] = pSVar3;
										}
										else {
											__this.AddWithResize((object)pSVar3);
										}
									}
									else {
										if (pSVar3 == null) goto label_058f4afb;
										bVar6 = pSVar3.StartsWith("Emoji", 4);
										if (!bVar6) goto label_058f4a23;
									}
									uVar9 = uVar9 + 1;
									uVar2 = (uint)pSVar7.Length;
									uVar8 = (ulong)uVar2;
								} while ((long)uVar9 < (long)(int)uVar2);
							}
							if (__this != null) {
								pSVar7 = (String[])__this.ToArray();
								return pSVar7;
							}
						}
	label_058f4afb: ;
						throw new NullReferenceException();
					}
				}
			}
		}
	label_058f4b00: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x57F4DE0", Offset = "0x57F3DE0", VA = "0x57F4DE0")]
	private static string[] ReadList(string path, string key, string[] fallback)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteCatalog.c (Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$ReadList): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		String[] pSVar5;
		bool bVar7;
		sbyte cVar8;
		Object x;
		String pSVar9;
		JSONNode a;
		JSONNode a_00;
		List<string> __this;
		object pIVar10;
		VirtualInvokeData pVVar11;
		ulong uVar12;
		long lVar13;
		object local_48;
		byte local_38;

		local_48 = null;
		x = (Object)Resources.Load<TextAsset>(path);
		bVar7 = (x == null);
		if (bVar7) {
			return fallback;
		}
		if (x == null) goto label_058f52ac;
		pSVar9 = x.text;
		a = JSON.Parse(pSVar9);
		a_00 = null;
		bVar7 = (a != null);
		if (bVar7) {
			if (a == null) goto label_058f52ac;
			a_00 = a.get_Item(key);
		}
		__this = new List<string>();
		bVar7 = (a_00 != null);
		if (bVar7) {
			if ((a_00 != null) &&(pIVar10 = (object)a_00.get_Children(), pIVar10 != null)) {
				pIVar3 = pIVar10.klass;
				uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
				pIVar10 = pIVar10.Dispose();
				local_38 = (byte)&local_48;
				do {
					local_48 = pIVar10;
					if (pIVar10 == null) {
						throw new NullReferenceException();
					}
					pIVar3 = pIVar10.klass;
					uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
					cVar8 = pIVar10.Dispose();
					pIVar10 = local_48;
					if (cVar8 == false) {
						if (local_48 == null) goto label_058f5264;
						pIVar3 = local_48.klass;
						uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
						if (uVar12 == 0) goto label_058f522f;
						pIVar4 = (pIVar3._1).interfaceOffsets;
						lVar13 = 0;
						goto label_058f5220;
					}
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					pIVar3 = local_48.klass;
					uVar12 = (ulong)(pIVar3._2).interface_offsets_count;
					pIVar10 = pIVar10.Dispose();
					if (pIVar10 == null) {
						throw new NullReferenceException();
					}
					pSVar9 = (String)(*pIVar10.klass.vtable[9].methodPtr)(pIVar10,pIVar10.klass.vtable[9].method);
					if (__this == null) {
	label_058f5298: ;
						throw new NullReferenceException();
					}
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar5 = __this._items;
					if (pSVar5 == null) goto label_058f5298;
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar5.Length) {
						__this._size = uVar2 + 1;
						pSVar5[(int)uVar2] = pSVar9;
						pIVar10 = local_48;
					}
					else {
						__this.AddWithResize((object)pSVar9);
						pIVar10 = local_48;
					}
				} while(true);
			}
			goto label_058f52ac;
		}
		goto label_058f5264;
		while (true) {
			lVar13 = lVar13 + 0x10;
			if (!(uVar12 * 0x10 != lVar13)) break;
	label_058f5220: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar13) == typeof(IDisposable)) {
				pVVar11 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar13);
				goto label_058f524d;
			}
		}
	label_058f522f: ;
	label_058f524d: ;
		pIVar10.Dispose();
	label_058f5264: ;
		if (__this != null) {
			if (0 < __this._size) {
				fallback = (String[])__this.ToArray();
			}
			return fallback;
		}
	label_058f52ac: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x57F4CB0", Offset = "0x57F3CB0", VA = "0x57F4CB0")]
	private static bool IsEmoji(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgEmoteCatalog.c (Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$IsEmoji): clean
		bool bVar1;

		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return false;
		}
		if (value == null) {
			throw new NullReferenceException();
		}
		bVar1 = value.StartsWith("Emoji", 4);
		return bVar1;
	}
}

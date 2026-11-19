// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomAssetEntry
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/CustomAssetEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x2000418")]
public class CustomAssetEntry
{
	[Token(Token = "0x4001525")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] PlatformKeys;

	[Token(Token = "0x4001526")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string[] PlatformNames;

	[Token(Token = "0x4001527")]
	[FieldOffset(Offset = "0x10")]
	public string Bundle;

	[Token(Token = "0x4001528")]
	[FieldOffset(Offset = "0x18")]
	public string DefaultUrl;

	[Token(Token = "0x4001529")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, string> PlatformUrls;

	[Token(Token = "0x170002B5")]
	public static string CurrentPlatformKey
	{
		[Token(Token = "0x6001A0D")]
		[Address(RVA = "0x58A4270", Offset = "0x58A3270", VA = "0x58A4270")]
		get
		{
			// Lifted from source/cpp/Map/CustomAssetEntry.c (Map.CustomAssetEntry$$get_CurrentPlatformKey): 1 lines keep C-only constructs
			uint uVar1;
			String* ppSVar2;

			if (Il2CppMethodInitialized_07545a9c == false) {
				Il2CppMethodInitialized_07545a9c = true;
				if ((typeof(Application)._2).cctor_finished_or_no_cctor != 0) goto label_059a4291;
		label_059a4321: ;
				uVar1 = Application.platform;
			}
			else {
				if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) goto label_059a4321;
		label_059a4291: ;
				uVar1 = Application.platform;
			}
			if ((int)uVar1 < 8) {
				if (uVar1 < 2) {
					return "mac";
				}
				ppSVar2 = &"win";
				if ((uVar1 != 2) && (uVar1 != 7)) {
		label_059a4351: ;
					return (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
			}
			else {
				ppSVar2 = &"linux";
				if ((uVar1 != 0x10) && (uVar1 != 0xd)) {
					if (uVar1 != 0xb) goto label_059a4351;
					ppSVar2 = &"android";
				}
			}
			return *ppSVar2;
		}
	}

	[Token(Token = "0x6001A07")]
	[Address(RVA = "0x589D5E0", Offset = "0x589C5E0", VA = "0x589D5E0")]
	public static CustomAssetEntry Parse(string str)
	{
		// Lifted from source/cpp/Map/CustomAssetEntry.c (Map.CustomAssetEntry$$Parse): 3 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> __this;
		int iVar2;
		bool bVar3;
		uint uVar4;
		int length;
		int iVar5;
		CustomAssetEntry __this_00;
		String[] pSVar6;
		String pSVar7;
		String pSVar8;
		String* targetAddress;
		long lVar9;

		__this_00 = new CustomAssetEntry();
		if ((str == null) ||(pSVar6 = str.Split(0x2c, 0), pSVar6 == null)) {
	label_0599d877: ;
			throw new NullReferenceException();
		}
		if (pSVar6.Length != 0) {
			if ((int)pSVar6.Length == 0) {
	label_0599d87c: ;
				throw new IndexOutOfRangeException();
			}
			if ((pSVar6[0] == null) ||(pSVar7 = (pSVar6[0]).Trim(), __this_00 == null)) goto label_0599d877;
			__this_00.Bundle = pSVar7;
			uVar4 = (uint)pSVar6.Length;
			if (1 < (int)uVar4) {
				targetAddress = &__this_00.DefaultUrl;
				lVar9 = 5;
				do {
					iVar2 = (int)lVar9;
					if (uVar4 <= iVar2 - 4U) goto label_0599d87c;
					if ((pSVar6[lVar9 + -4] == null) ||(pSVar7 = (pSVar6[lVar9 + -4]).Trim(), pSVar7 == null)) goto label_0599d877;
					length = pSVar7.IndexOf(0x3d);
					if (length < 1) {
						pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						uVar1 = (typeof(CustomAssetEntry)._2).cctor_finished_or_no_cctor;
					}
					else {
						pSVar8 = pSVar7.Substring(0, length);
						if (pSVar8 == null) goto label_0599d877;
						pSVar8 = pSVar8.ToLower();
						uVar1 = (typeof(CustomAssetEntry)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					iVar5 = Array.IndexOf<string>((Object[])CustomAssetEntry.PlatformKeys, (object)pSVar8);
					if (iVar5 < 0) {
						bVar3 = (*targetAddress == (String)**(ulong*)(g_data_07556758 + 0xb8));
						if (bVar3) {
							*targetAddress = pSVar7;
						}
					}
					else {
						__this = (Dictionary<object, object>)__this_00.PlatformUrls ;
						pSVar7 = pSVar7.Substring(length + 1);
						if ((pSVar7 == null) ||(pSVar7 = pSVar7.Trim(), __this == null)) goto label_0599d877;
						__this.set_Item((object)pSVar8, (object)pSVar7);
					}
					uVar4 = (uint)pSVar6.Length;
					lVar9 = lVar9 + 1;
				} while (iVar2 + -3 < (int)uVar4);
			}
		}
		return __this_00;
	}

	[Token(Token = "0x6001A08")]
	[Address(RVA = "0x58A3E80", Offset = "0x58A2E80", VA = "0x58A3E80")]
	public string Serialize()
	{
		// Lifted from source/cpp/Map/CustomAssetEntry.c (Map.CustomAssetEntry$$Serialize): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		String[] pSVar4;
		Dictionary<object, object> __this_00;
		String a;
		String[] pSVar5;
		bool bVar7;
		List<string> __this_01;
		ulong uVar8;
		String pSVar9;
		String* value;
		ulong uVar10;
		String local_38;

		__this_01 = new List<string>();
		if (__this_01 != null) {
			pSVar9 = this.Bundle;
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			pSVar4 = __this_01._items;
			if (pSVar4 != null) {
				uVar2 = __this_01._size;
				if (uVar2 < (uint)pSVar4.Length) {
					__this_01._size = uVar2 + 1;
					pSVar4[(int)uVar2] = pSVar9;
				}
				else {
					__this_01.AddWithResize((object)pSVar9);
				}
				pSVar9 = this.DefaultUrl;
				piVar1 = &__this_01._version;
				*piVar1 = *piVar1 + 1;
				pSVar4 = __this_01._items;
				if (pSVar4 != null) {
					uVar2 = __this_01._size;
					if (uVar2 < (uint)pSVar4.Length) {
						__this_01._size = uVar2 + 1;
						pSVar4[(int)uVar2] = pSVar9;
						uVar3 = (typeof(CustomAssetEntry)._2).cctor_finished_or_no_cctor;
					}
					else {
						__this_01.AddWithResize((object)pSVar9);
						uVar3 = (typeof(CustomAssetEntry)._2).cctor_finished_or_no_cctor;
					}
					if (uVar3 == 0) {
					}
					pSVar4 = CustomAssetEntry.PlatformKeys;
					if (pSVar4 != null) {
						if (0 < (int)pSVar4.Length) {
							uVar8 = pSVar4.Length & 0xffffffff;
							uVar10 = 0;
							do {
								if (uVar8 <= uVar10) {
									throw new IndexOutOfRangeException();
								}
								pSVar9 = pSVar4[uVar10];
								local_38 = null;
								bVar7 = (pSVar9 == (String)**(ulong*)(g_data_07556758 + 0xb8));
								value = &this.DefaultUrl;
								if (!bVar7) {
									__this_00 = (Dictionary<object, object>)this.PlatformUrls;
									if (__this_00 == null) goto label_059a41a9;
									value = &local_38;
									bVar7 = __this_00.TryGetValue((object)pSVar9, (object*)value) ;
									if (!bVar7) {
										value = *(String**)(g_data_07556758 + 0xb8);
									}
								}
								a = *value;
								bVar7 = (a != (String)**(ulong*)(g_data_07556758 + 0xb8));
								if (bVar7) {
									pSVar9 = String.Concat(pSVar9, "=", a);
									piVar1 = &__this_01._version;
									*piVar1 = *piVar1 + 1;
									pSVar5 = __this_01._items;
									if (pSVar5 == null) goto label_059a41a9;
									uVar2 = __this_01._size;
									if (uVar2 < (uint)pSVar5.Length) {
										__this_01._size = uVar2 + 1;
										pSVar5[(int)uVar2] = pSVar9;
									}
									else {
										__this_01.AddWithResize((object)pSVar9);
									}
								}
								uVar10 = uVar10 + 1;
								uVar2 = (uint)pSVar4.Length;
								uVar8 = (ulong)uVar2;
							} while ((long)uVar10 < (long)(int)uVar2);
						}
						pSVar9 = String.Join(",", (IEnumerable<string>)__this_01) ;
						return pSVar9;
					}
				}
			}
		}
	label_059a41a9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001A09")]
	[Address(RVA = "0x589D890", Offset = "0x589C890", VA = "0x589D890")]
	public string GetUrl()
	{
		// Lifted from source/cpp/Map/CustomAssetEntry.c (Map.CustomAssetEntry$$GetUrl): 9 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;
		String pSVar3;
		String* ppSVar4;
		Il2CppClass klass;
		String local_28;

		if (Il2CppMethodInitialized_07545a98 == false) {
			Il2CppMethodInitialized_07545a98 = true;
			uVar1 = (typeof(CustomAssetEntry)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomAssetEntry);
		}
		else {
			uVar1 = (typeof(CustomAssetEntry)._2).cctor_finished_or_no_cctor;
			klass = typeof(CustomAssetEntry);
		}
		typeof(CustomAssetEntry) = (CustomAssetEntry)klass;
		if (uVar1 == 0) {
			pSVar3 = CustomAssetEntry.CurrentPlatformKey;
		}
		else {
			pSVar3 = CustomAssetEntry.CurrentPlatformKey;
		}
		ppSVar4 = &local_28;
		local_28 = null;
		bVar2 = (pSVar3 == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar2) {
			ppSVar4 = &this.DefaultUrl;
		}
		else {
			__this_00 = (Dictionary<object, object>)this.PlatformUrls;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar2 = __this_00.TryGetValue((object)pSVar3, (object*)&local_28);
			if (!bVar2) {
				ppSVar4 = *(String**)(g_data_07556758 + 0xb8);
			}
		}
		pSVar3 = *ppSVar4;
		bVar2 = (pSVar3 != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (!bVar2) {
			pSVar3 = this.DefaultUrl;
		}
		return pSVar3;
	}

	[Token(Token = "0x6001A0A")]
	[Address(RVA = "0x58A41C0", Offset = "0x58A31C0", VA = "0x58A41C0")]
	public string GetPlatformUrl(string key)
	{
		// Lifted from source/cpp/Map/CustomAssetEntry.c (Map.CustomAssetEntry$$GetPlatformUrl): 3 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		String* value;
		String local_20;

		local_20 = null;
		bVar1 = (key == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar1) {
			value = &this.DefaultUrl;
		}
		else {
			__this_00 = (Dictionary<object, object>)this.PlatformUrls;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			value = &local_20;
			bVar1 = __this_00.TryGetValue((object)key, (object*)value);
			if (!bVar1) {
				value = *(String**)(g_data_07556758 + 0xb8);
			}
		}
		return *value;
	}

	[Token(Token = "0x6001A0B")]
	[Address(RVA = "0x58A4380", Offset = "0x58A3380", VA = "0x58A4380")]
	public void SetPlatformUrl(string key, string url)
	{
		// Lifted from source/cpp/Map/CustomAssetEntry.c (Map.CustomAssetEntry$$SetPlatformUrl): clean
		Dictionary<object, object> __this_00;
		bool bVar1;

		bVar1 = (key == (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar1) {
			this.DefaultUrl = url;
			return;
		}
		bVar1 = (url == (String)**(ulong*)(g_data_07556758 + 0xb8));
		__this_00 = (Dictionary<object, object>)this.PlatformUrls;
		if (bVar1) {
			if (__this_00 != null) {
				__this_00.Remove((object)key);
				return;
			}
		}
		else if (__this_00 != null) {
			__this_00.set_Item((object)key, (object)url);
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001A0C")]
	[Address(RVA = "0x58A4470", Offset = "0x58A3470", VA = "0x58A4470")]
	public static string GetPlatformKey(string name)
	{
		// Lifted from source/cpp/Map/CustomAssetEntry.c (Map.CustomAssetEntry$$GetPlatformKey): 1 lines keep C-only constructs
		String[] pSVar1;
		uint uVar2;
		String* ppSVar3;

		uVar2 = Array.IndexOf<string>((Object[])CustomAssetEntry.PlatformNames, (object)name);
		if ((int)uVar2 < 0) {
			ppSVar3 = *(String**)(g_data_07556758 + 0xb8);
		}
		else {
			pSVar1 = CustomAssetEntry.PlatformKeys;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			if ((uint)pSVar1.Length <= uVar2) {
				throw new IndexOutOfRangeException();
			}
			ppSVar3 = pSVar1.m_Items + uVar2;
		}
		return *ppSVar3;
	}

	[Token(Token = "0x6001A0E")]
	[Address(RVA = "0x58A3DC0", Offset = "0x58A2DC0", VA = "0x58A3DC0")]
	public CustomAssetEntry()
	{
		// Lifted from source/cpp/Map/CustomAssetEntry.c (Map.CustomAssetEntry$$.ctor): clean
		Dictionary<string, string> __this_00;

		this.Bundle = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this.DefaultUrl = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new Dictionary<string, string>();
		this.PlatformUrls = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Map/CustomAssetEntry.c.

	// Map.CustomAssetEntry$$.cctor: clean
	static CustomAssetEntry()
	{
		String[] pSVar2;

		pSVar2 = (String[])new string[4];
		if (pSVar2 == null) {
	label_059a475e: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "win";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "mac";
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = "linux";
					if ((pSVar2.Length & 0xfffffffc) != 0) {
						pSVar2[3] = "android";
						CustomAssetEntry.PlatformKeys = pSVar2;
						pSVar2 = (String[])new string[4];
						if (pSVar2 == null) goto label_059a475e;
						if ((int)pSVar2.Length != 0) {
							pSVar2[0] = "Windows";
							if ((pSVar2.Length & 0xfffffffe) != 0) {
								pSVar2[1] = "Mac";
								if (2 < (uint)pSVar2.Length) {
									pSVar2[2] = "Linux";
									if ((pSVar2.Length & 0xfffffffc) != 0) {
										pSVar2[3] = "Android";
										CustomAssetEntry.PlatformNames = pSVar2;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}

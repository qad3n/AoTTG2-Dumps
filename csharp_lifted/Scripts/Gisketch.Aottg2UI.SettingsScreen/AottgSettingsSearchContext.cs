// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200019F")]
internal readonly struct AottgSettingsSearchContext
{
	[Token(Token = "0x4000905")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string ScreenTitle;

	[Token(Token = "0x4000906")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string CategoryId;

	[Token(Token = "0x4000907")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string CategoryTitle;

	[Token(Token = "0x4000908")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string GroupId;

	[Token(Token = "0x4000909")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string GroupTitle;

	[Token(Token = "0x17000112")]
	public bool HasCategory
	{
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x5D4B4C0", Offset = "0x5D4A4C0", VA = "0x5D4B4C0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_HasCategory): clean
			bool bVar1;

			bVar1 = String.IsNullOrEmpty(this.CategoryId);
			return !bVar1;
		}
	}

	[Token(Token = "0x17000113")]
	public string SectionId
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x5D4B4D0", Offset = "0x5D4A4D0", VA = "0x5D4B4D0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_SectionId): clean
			return this.CategoryId;
		}
	}

	[Token(Token = "0x17000114")]
	public string SectionTitle
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x5D4B4E0", Offset = "0x5D4A4E0", VA = "0x5D4B4E0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_SectionTitle): clean
			bool bVar1;
			String pSVar2;
			String value;

			value = this.CategoryTitle;
			pSVar2 = this.GroupTitle;
			bVar1 = String.IsNullOrEmpty(value);
			if (bVar1) {
				value = pSVar2;
				if (pSVar2 == null) {
					value = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
			}
			else {
				bVar1 = String.IsNullOrEmpty(pSVar2);
				if (!bVar1) {
					pSVar2 = String.Concat(value, " > ", pSVar2);
					return pSVar2;
				}
			}
			return value;
		}
	}

	[Token(Token = "0x17000115")]
	public string GroupSearchTitle
	{
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x5D41850", Offset = "0x5D40850", VA = "0x5D41850")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$get_GroupSearchTitle): clean
			bool bVar1;
			String pSVar2;
			String value;

			value = this.CategoryTitle;
			pSVar2 = this.GroupTitle;
			bVar1 = String.IsNullOrEmpty(value);
			if (bVar1) {
				value = pSVar2;
				if (pSVar2 == null) {
					value = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
			}
			else {
				bVar1 = String.IsNullOrEmpty(pSVar2);
				if (!bVar1) {
					pSVar2 = String.Concat(value, " > ", pSVar2);
					return pSVar2;
				}
			}
			return value;
		}
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x5D3AEB0", Offset = "0x5D39EB0", VA = "0x5D3AEB0")]
	public AottgSettingsSearchContext(string categoryId, string categoryTitle)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$.ctor): clean
		String pSVar1;

		pSVar1 = Aottg2GisketchLocale.Text("Common.Settings");
		pSVar1 = AottgSettingsSearchContext.TitleCase(pSVar1);
		base(pSVar1, categoryId, categoryTitle, null, null);
		return;
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x5D4B400", Offset = "0x5D4A400", VA = "0x5D4B400")]
	private AottgSettingsSearchContext(string screenTitle, string categoryId, string categoryTitle, [Optional] string groupId, [Optional] string groupTitle)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$.ctor): clean
		String pSVar1;

		this.ScreenTitle = screenTitle;
		if (categoryId == null) {
			categoryId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this.CategoryId = categoryId;
		pSVar1 = AottgSettingsSearchContext.TitleCase(categoryTitle);
		this.CategoryTitle = pSVar1;
		if (groupId == null) {
			groupId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this.GroupId = groupId;
		pSVar1 = AottgSettingsSearchContext.TitleCase(groupTitle);
		this.GroupTitle = pSVar1;
		return;
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x5D41810", Offset = "0x5D40810", VA = "0x5D41810")]
	public AottgSettingsSearchContext ForGroup(string groupId, string groupTitle)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$ForGroup): clean
		String screenTitle;
		String categoryId;
		String categoryTitle;

		screenTitle = this.ScreenTitle;
		categoryId = this.CategoryId;
		categoryTitle = this.CategoryTitle;
		__return_storage_ptr__.CategoryTitle = null;
		__return_storage_ptr__.GroupId = null;
		__return_storage_ptr__.ScreenTitle = null;
		__return_storage_ptr__.CategoryId = null;
		__return_storage_ptr__.GroupTitle = null;
		__return_storage_ptr__ = new AottgSettingsSearchContext(screenTitle, categoryId, categoryTitle, groupId, groupTitle);
		return __return_storage_ptr__;
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x5D4B600", Offset = "0x5D4A600", VA = "0x5D4B600")]
	public string Title(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$Title): clean
		if (value == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return value;
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x5D418E0", Offset = "0x5D408E0", VA = "0x5D418E0")]
	public string Keywords(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$Keywords): clean
		String[] parts;
		String pSVar1;

		parts = (String[])new string[4];
		if (parts == null) {
			throw new NullReferenceException();
		}
		if ((int)parts.Length != 0) {
			parts[0] = this.ScreenTitle;
			if ((parts.Length & 0xfffffffe) != 0) {
				parts[1] = this.CategoryTitle;
				if (2 < (uint)parts.Length) {
					parts[2] = this.GroupTitle;
					if ((parts.Length & 0xfffffffc) != 0) {
						parts[3] = value;
						return pSVar1;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x5D4B180", Offset = "0x5D4A180", VA = "0x5D4B180")]
	public static string TitleCase(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$TitleCase): clean
		bool bVar1;
		ushort uVar2;
		StringBuilder __this;
		StringBuilder __this_00;
		String pSVar3;
		int index;
		int iVar5;
		StringBuilder __this_01;

		bVar1 = String.IsNullOrWhiteSpace(value);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (value != null) {
			iVar5 = value._stringLength;
			__this = new StringBuilder(iVar5);
			__this_00 = new StringBuilder();
			if (0 < value._stringLength) {
				if (__this == null) {
					if (__this_00 == null) {
						uVar2 = value.get_Chars(0);
						bVar1 = Char.IsLetterOrDigit(uVar2);
						if (!bVar1) {
	label_05e4b3e9: ;
							AottgSettingsSearchContext.AppendWord(null, __this_00);
							throw new NullReferenceException();
						}
						goto label_05e4b3e4;
					}
					iVar5 = 0;
					do {
						uVar2 = value.get_Chars(iVar5);
						bVar1 = Char.IsLetterOrDigit(uVar2);
						if (!bVar1) goto label_05e4b3e9;
						__this_00.Append(uVar2);
						iVar5 = iVar5 + 1;
					} while (iVar5 < value._stringLength);
				}
				else {
					index = 0;
					if (__this_00 == null) {
						do {
							uVar2 = value.get_Chars(index);
							bVar1 = Char.IsLetterOrDigit(uVar2);
							if (bVar1) goto label_05e4b3e4;
							AottgSettingsSearchContext.AppendWord(__this, null);
							__this.Append(uVar2);
							index = index + 1;
						} while (index < value._stringLength);
					}
					else {
						do {
							uVar2 = value.get_Chars(index);
							bVar1 = Char.IsLetterOrDigit(uVar2);
							__this_01 = __this_00;
							if (!bVar1) {
								AottgSettingsSearchContext.AppendWord(__this, __this_00);
								__this_01 = __this;
							}
							__this_01.Append(uVar2);
							index = index + 1;
						} while (index < value._stringLength);
					}
				}
			}
			AottgSettingsSearchContext.AppendWord(__this, __this_00);
			if ((__this != null) &&(pSVar3 = __this.ToString(), pSVar3 != null)) {
				pSVar3 = pSVar3.Trim();
				return pSVar3;
			}
		}
	label_05e4b3e4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x5D4B750", Offset = "0x5D4A750", VA = "0x5D4B750")]
	private static void AppendWord(StringBuilder result, StringBuilder word)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$AppendWord): clean
		bool bVar1;
		ushort uVar2;
		int iVar3;
		String pSVar4;
		String value;

		if (word == null) {
	label_05e4b861: ;
			throw new NullReferenceException();
		}
		iVar3 = word.Length;
		if (iVar3 == 0) {
			return;
		}
		pSVar4 = word.ToString();
		if (pSVar4 == null) goto label_05e4b861;
		value = pSVar4.ToUpperInvariant();
		bVar1 = AottgSettingsSearchContext.IsAcronym(value);
		if (bVar1) {
			if (result == null) goto label_05e4b861;
		}
		else {
			pSVar4 = pSVar4.ToLowerInvariant();
			if (pSVar4 == null) goto label_05e4b861;
			uVar2 = pSVar4.get_Chars(0);
			uVar2 = Char.ToUpperInvariant(uVar2);
			if (result == null) goto label_05e4b861;
			result.Append(uVar2);
			if (pSVar4._stringLength < 2) goto label_05e4b84a;
			value = pSVar4.Substring(1);
		}
		result.Append(value);
	label_05e4b84a: ;
		word.Length = 0;
		return;
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x5D4B870", Offset = "0x5D4A870", VA = "0x5D4B870")]
	private static bool IsAcronym(string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$IsAcronym): 2 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		String* ppSVar3;

		uVar2 = _PrivateImplementationDetails_.ComputeStringHash(value);
		if (uVar2 < 0x5942b41b) {
			if (uVar2 < 0x256778e7) {
				if (uVar2 == 0xad61c8) {
					ppSVar3 = &"FPS";
				}
				else {
					if (uVar2 != 0x256778e6) {
						return false;
					}
					ppSVar3 = &"HUD";
				}
			}
			else if (uVar2 == 0x25f56a30) {
				ppSVar3 = &"TS";
			}
			else if (uVar2 == 0x345d4ece) {
				ppSVar3 = &"TPS";
			}
			else {
				if (uVar2 != 0x5942b41a) {
					return false;
				}
				ppSVar3 = &"AOTTG";
			}
		}
		else if (uVar2 < 0x82da261b) {
			if (uVar2 == 0x82da261a) {
				ppSVar3 = &"CL";
			}
			else if (uVar2 == 0x65239864) {
				ppSVar3 = &"WOW";
			}
			else {
				if (uVar2 != 0x7bf3b2fb) {
					return false;
				}
				ppSVar3 = &"UI";
			}
		}
		else if (uVar2 == 0xadc8a7c8) {
			ppSVar3 = &"KDR";
		}
		else if (uVar2 == 0xe91aa979) {
			ppSVar3 = &"ODM";
		}
		else {
			if (uVar2 != 0xf3cda0fc) {
				return false;
			}
			ppSVar3 = &"FOV";
		}
		bVar1 = (value == *ppSVar3);
		if (bVar1) {
			return true;
		}
		return false;
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x5D4B570", Offset = "0x5D4A570", VA = "0x5D4B570")]
	private static string JoinPath(string first, string second)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$JoinPath): clean
		bool bVar1;
		String pSVar2;

		bVar1 = String.IsNullOrEmpty(first);
		if (bVar1) {
			if (second == null) {
				second = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
		}
		else {
			bVar1 = String.IsNullOrEmpty(second);
			if (!bVar1) {
				pSVar2 = String.Concat(first, " > ", second);
				return pSVar2;
			}
			second = first;
		}
		return second;
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x5D4B630", Offset = "0x5D4A630", VA = "0x5D4B630")]
	private static string JoinWords(params string[] parts)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext$$JoinWords): clean
		uint uVar1;
		bool bVar2;
		int iVar3;
		StringBuilder __this;
		ulong uVar4;
		String pSVar5;
		int iVar6;
		ulong uVar7;

		__this = new StringBuilder();
		if (parts != null) {
			iVar6 = (int)parts.Length;
			uVar4 = parts.Length & 0xffffffff;
			if (__this == null) {
				if (iVar6 < 1) goto label_05e4b74b;
				uVar7 = 0;
				do {
					if (uVar4 <= uVar7) goto label_05e4b746;
					bVar2 = String.IsNullOrWhiteSpace(parts[uVar7]);
					if (!bVar2) goto label_05e4b74b;
					uVar7 = uVar7 + 1;
					uVar1 = (uint)parts.Length;
					uVar4 = (ulong)uVar1;
				} while ((long)uVar7 < (long)(int)uVar1);
			}
			else {
				if (iVar6 < 1) goto label_05e4b72b;
				uVar7 = 0;
				do {
					if (uVar4 <= uVar7) {
	label_05e4b746: ;
						throw new IndexOutOfRangeException();
					}
					bVar2 = String.IsNullOrWhiteSpace(parts[uVar7]);
					if (!bVar2) {
						iVar3 = __this.Length;
						if (0 < iVar3) {
							__this.Append(0x20);
						}
						if ((uint)parts.Length <= uVar7) goto label_05e4b746;
						__this.Append(parts[uVar7]);
					}
					uVar7 = uVar7 + 1;
					uVar1 = (uint)parts.Length;
					uVar4 = (ulong)uVar1;
				} while ((long)uVar7 < (long)(int)uVar1);
			}
			if (__this != null) {
	label_05e4b72b: ;
				return pSVar5;
			}
		}
	label_05e4b74b: ;
		throw new NullReferenceException();
	}
}

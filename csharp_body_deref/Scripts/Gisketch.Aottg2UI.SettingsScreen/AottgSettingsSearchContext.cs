// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000192")]
internal readonly struct AottgSettingsSearchContext
{
	[Token(Token = "0x40008AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public readonly string ScreenTitle;

	[Token(Token = "0x40008B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string CategoryId;

	[Token(Token = "0x40008B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string CategoryTitle;

	[Token(Token = "0x40008B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string GroupId;

	[Token(Token = "0x40008B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string GroupTitle;

	[Token(Token = "0x1700010F")]
	public bool HasCategory
	{
		[Token(Token = "0x600088A")]
		[Address(RVA = "0x2393530", Offset = "0x2391B30", VA = "0x182393530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000110")]
	public string SectionId
	{
		[Token(Token = "0x600088B")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	public string SectionTitle
	{
		[Token(Token = "0x600088C")]
		[Address(RVA = "0x2393550", Offset = "0x2391B50", VA = "0x182393550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000112")]
	public string GroupSearchTitle
	{
		[Token(Token = "0x600088D")]
		[Address(RVA = "0x2393520", Offset = "0x2391B20", VA = "0x182393520")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x2393430", Offset = "0x2391A30", VA = "0x182393430")]
	public AottgSettingsSearchContext(string screenTitle, string categoryId, string categoryTitle, [Optional] string groupId, [Optional] string groupTitle)
	{
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x2392BD0", Offset = "0x23911D0", VA = "0x182392BD0")]
	public AottgSettingsSearchContext ForGroup(string groupId, string groupTitle)
	{
		return default(AottgSettingsSearchContext);
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x2393410", Offset = "0x2391A10", VA = "0x182393410")]
	public string Title(string value)
	{
		return null;
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x2393030", Offset = "0x2391630", VA = "0x182393030")]
	public string Keywords(string value)
	{
		return null;
	}

	[Token(Token = "0x6000891")]
	[Address(RVA = "0x23931C0", Offset = "0x23917C0", VA = "0x1823931C0")]
	public static string TitleCase(string value)
	{
		return null;
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x2392AC0", Offset = "0x23910C0", VA = "0x182392AC0")]
	private static void AppendWord(StringBuilder result, StringBuilder word)
	{
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x2392CE0", Offset = "0x23912E0", VA = "0x182392CE0")]
	private static bool IsAcronym(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x2392EA0", Offset = "0x23914A0", VA = "0x182392EA0")]
	private static string JoinPath(string first, string second)
	{
		return null;
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x2392F40", Offset = "0x2391540", VA = "0x182392F40")]
	private static string JoinWords(params string[] parts)
	{
		return null;
	}
}

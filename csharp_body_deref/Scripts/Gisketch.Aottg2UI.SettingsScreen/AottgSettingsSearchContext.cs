// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSearchContext
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSearchContext.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return default(bool);
		}
	}

	[Token(Token = "0x17000113")]
	public string SectionId
	{
		[Token(Token = "0x600091B")]
		[Address(RVA = "0x5D4B4D0", Offset = "0x5D4A4D0", VA = "0x5D4B4D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000114")]
	public string SectionTitle
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x5D4B4E0", Offset = "0x5D4A4E0", VA = "0x5D4B4E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000115")]
	public string GroupSearchTitle
	{
		[Token(Token = "0x600091D")]
		[Address(RVA = "0x5D41850", Offset = "0x5D40850", VA = "0x5D41850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x5D3AEB0", Offset = "0x5D39EB0", VA = "0x5D3AEB0")]
	public AottgSettingsSearchContext(string categoryId, string categoryTitle)
	{
	}

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x5D4B400", Offset = "0x5D4A400", VA = "0x5D4B400")]
	private AottgSettingsSearchContext(string screenTitle, string categoryId, string categoryTitle, [Optional] string groupId, [Optional] string groupTitle)
	{
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x5D41810", Offset = "0x5D40810", VA = "0x5D41810")]
	public AottgSettingsSearchContext ForGroup(string groupId, string groupTitle)
	{
		return default(AottgSettingsSearchContext);
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x5D4B600", Offset = "0x5D4A600", VA = "0x5D4B600")]
	public string Title(string value)
	{
		return null;
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x5D418E0", Offset = "0x5D408E0", VA = "0x5D418E0")]
	public string Keywords(string value)
	{
		return null;
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x5D4B180", Offset = "0x5D4A180", VA = "0x5D4B180")]
	public static string TitleCase(string value)
	{
		return null;
	}

	[Token(Token = "0x6000922")]
	[Address(RVA = "0x5D4B750", Offset = "0x5D4A750", VA = "0x5D4B750")]
	private static void AppendWord(StringBuilder result, StringBuilder word)
	{
	}

	[Token(Token = "0x6000923")]
	[Address(RVA = "0x5D4B870", Offset = "0x5D4A870", VA = "0x5D4B870")]
	private static bool IsAcronym(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000924")]
	[Address(RVA = "0x5D4B570", Offset = "0x5D4A570", VA = "0x5D4B570")]
	private static string JoinPath(string first, string second)
	{
		return null;
	}

	[Token(Token = "0x6000925")]
	[Address(RVA = "0x5D4B630", Offset = "0x5D4A630", VA = "0x5D4B630")]
	private static string JoinWords(params string[] parts)
	{
		return null;
	}
}

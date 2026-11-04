// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexFC
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000F3")]
internal sealed class RegexFC
{
	[Token(Token = "0x40003EB")]
	[FieldOffset(Offset = "0x10")]
	private RegexCharClass _cc;

	[Token(Token = "0x40003EC")]
	[FieldOffset(Offset = "0x18")]
	public bool _nullable;

	[Token(Token = "0x170000E6")]
	public bool CaseInsensitive
	{
		[Token(Token = "0x600057A")]
		[Address(RVA = "0xE8F450", Offset = "0xE8DA50", VA = "0x180E8F450")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600057B")]
		[Address(RVA = "0x18C3360", Offset = "0x18C1960", VA = "0x1818C3360")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x28584E0", Offset = "0x2856AE0", VA = "0x1828584E0")]
	public RegexFC(bool nullable)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x2858400", Offset = "0x2856A00", VA = "0x182858400")]
	public RegexFC(char ch, bool not, bool nullable, bool caseInsensitive)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x2858560", Offset = "0x2856B60", VA = "0x182858560")]
	public RegexFC(string charClass, bool nullable, bool caseInsensitive)
	{
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x2858200", Offset = "0x2856800", VA = "0x182858200")]
	public bool AddFC(RegexFC fc, bool concatenate)
	{
		return default(bool);
	}

	[Token(Token = "0x600057C")]
	[Address(RVA = "0x2858290", Offset = "0x2856890", VA = "0x182858290")]
	public string GetFirstChars(CultureInfo culture)
	{
		return null;
	}
}

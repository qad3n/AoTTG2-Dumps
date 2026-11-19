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

[Token(Token = "0x20000B4")]
internal sealed class RegexFC
{
	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x10")]
	private RegexCharClass _cc;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x18")]
	public bool _nullable;

	[Token(Token = "0x170000B7")]
	public bool CaseInsensitive
	{
		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x61F0DF0", Offset = "0x61EFDF0", VA = "0x61F0DF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x61F0E00", Offset = "0x61EFE00", VA = "0x61F0E00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x61F0B70", Offset = "0x61EFB70", VA = "0x61F0B70")]
	public RegexFC(bool nullable)
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x61F0C80", Offset = "0x61EFC80", VA = "0x61F0C80")]
	public RegexFC(char ch, bool not, bool nullable, bool caseInsensitive)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x61F0D70", Offset = "0x61EFD70", VA = "0x61F0D70")]
	public RegexFC(string charClass, bool nullable, bool caseInsensitive)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x61F0BE0", Offset = "0x61EFBE0", VA = "0x61F0BE0")]
	public bool AddFC(RegexFC fc, bool concatenate)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x61EFD50", Offset = "0x61EED50", VA = "0x61EFD50")]
	public string GetFirstChars(CultureInfo culture)
	{
		return null;
	}
}

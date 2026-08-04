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

[Token(Token = "0x20000B3")]
internal sealed class RegexFC
{
	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x10")]
	private RegexCharClass _cc;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x18")]
	public bool _nullable;

	[Token(Token = "0x170000AD")]
	public bool CaseInsensitive
	{
		[Token(Token = "0x600039D")]
		[Address(RVA = "0x49138F0", Offset = "0x49138F0", VA = "0x49138F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x4913900", Offset = "0x4913900", VA = "0x4913900")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x4913670", Offset = "0x4913670", VA = "0x4913670")]
	public RegexFC(bool nullable)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x4913780", Offset = "0x4913780", VA = "0x4913780")]
	public RegexFC(char ch, bool not, bool nullable, bool caseInsensitive)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x4913870", Offset = "0x4913870", VA = "0x4913870")]
	public RegexFC(string charClass, bool nullable, bool caseInsensitive)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x49136E0", Offset = "0x49136E0", VA = "0x49136E0")]
	public bool AddFC(RegexFC fc, bool concatenate)
	{
		return default(bool);
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4912740", Offset = "0x4912740", VA = "0x4912740")]
	public string GetFirstChars(CultureInfo culture)
	{
		return null;
	}
}

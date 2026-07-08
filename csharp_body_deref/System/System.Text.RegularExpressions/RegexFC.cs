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
		[Address(RVA = "0x45EE7F0", Offset = "0x45EE7F0", VA = "0x45EE7F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600039E")]
		[Address(RVA = "0x45EE800", Offset = "0x45EE800", VA = "0x45EE800")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x45EE570", Offset = "0x45EE570", VA = "0x45EE570")]
	public RegexFC(bool nullable)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x45EE680", Offset = "0x45EE680", VA = "0x45EE680")]
	public RegexFC(char ch, bool not, bool nullable, bool caseInsensitive)
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x45EE770", Offset = "0x45EE770", VA = "0x45EE770")]
	public RegexFC(string charClass, bool nullable, bool caseInsensitive)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x45EE5E0", Offset = "0x45EE5E0", VA = "0x45EE5E0")]
	public bool AddFC(RegexFC fc, bool concatenate)
	{
		return default(bool);
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x45ED640", Offset = "0x45ED640", VA = "0x45ED640")]
	public string GetFirstChars(CultureInfo culture)
	{
		return null;
	}
}

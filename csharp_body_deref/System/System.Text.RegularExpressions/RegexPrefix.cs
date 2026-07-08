using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000B9")]
internal readonly struct RegexPrefix
{
	[Token(Token = "0x170000B1")]
	internal bool CaseInsensitive
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x45FAA30", Offset = "0x45FAA30", VA = "0x45FAA30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000B2")]
	internal static RegexPrefix Empty
	{
		[Token(Token = "0x6000430")]
		[Address(RVA = "0x45FAA40", Offset = "0x45FAA40", VA = "0x45FAA40")]
		[CompilerGenerated]
		get
		{
			return default(RegexPrefix);
		}
	}

	[Token(Token = "0x170000B3")]
	internal string Prefix
	{
		[Token(Token = "0x6000431")]
		[Address(RVA = "0x45FAA90", Offset = "0x45FAA90", VA = "0x45FAA90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x45ED670", Offset = "0x45ED670", VA = "0x45ED670")]
	internal RegexPrefix(string prefix, bool ci)
	{
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.RegexPrefix
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000BA")]
internal readonly struct RegexPrefix
{
	[Token(Token = "0x170000BB")]
	internal bool CaseInsensitive
	{
		[Token(Token = "0x6000458")]
		[Address(RVA = "0x61FCA50", Offset = "0x61FBA50", VA = "0x61FCA50")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000BC")]
	internal static RegexPrefix Empty
	{
		[Token(Token = "0x6000459")]
		[Address(RVA = "0x61FCA60", Offset = "0x61FBA60", VA = "0x61FCA60")]
		[CompilerGenerated]
		get
		{
			return default(RegexPrefix);
		}
	}

	[Token(Token = "0x170000BD")]
	internal string Prefix
	{
		[Token(Token = "0x600045A")]
		[Address(RVA = "0x61FCAB0", Offset = "0x61FBAB0", VA = "0x61FCAB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x61EFD80", Offset = "0x61EED80", VA = "0x61EFD80")]
	internal RegexPrefix(string prefix, bool ci)
	{
	}
}

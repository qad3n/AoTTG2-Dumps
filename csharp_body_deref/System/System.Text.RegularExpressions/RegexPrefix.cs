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

[Token(Token = "0x20000B9")]
internal readonly struct RegexPrefix
{
	[Token(Token = "0x170000B1")]
	internal bool CaseInsensitive
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x491FB30", Offset = "0x491FB30", VA = "0x491FB30")]
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
		[Address(RVA = "0x491FB40", Offset = "0x491FB40", VA = "0x491FB40")]
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
		[Address(RVA = "0x491FB90", Offset = "0x491FB90", VA = "0x491FB90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x4912770", Offset = "0x4912770", VA = "0x4912770")]
	internal RegexPrefix(string prefix, bool ci)
	{
	}
}

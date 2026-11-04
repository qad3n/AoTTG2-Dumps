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

[Token(Token = "0x20000F9")]
internal readonly struct RegexPrefix
{
	[Token(Token = "0x170000EA")]
	internal bool CaseInsensitive
	{
		[Token(Token = "0x600060E")]
		[Address(RVA = "0xAE2930", Offset = "0xAE0F30", VA = "0x180AE2930")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EB")]
	internal static RegexPrefix Empty
	{
		[Token(Token = "0x600060F")]
		[Address(RVA = "0x286FE50", Offset = "0x286E450", VA = "0x18286FE50")]
		[CompilerGenerated]
		get
		{
			return default(RegexPrefix);
		}
	}

	[Token(Token = "0x170000EC")]
	internal string Prefix
	{
		[Token(Token = "0x6000610")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600060D")]
	[Address(RVA = "0x286FE20", Offset = "0x286E420", VA = "0x18286FE20")]
	internal RegexPrefix(string prefix, bool ci)
	{
	}
}

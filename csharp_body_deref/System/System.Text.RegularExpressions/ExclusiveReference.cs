// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.ExclusiveReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000A7")]
internal sealed class ExclusiveReference
{
	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x10")]
	private RegexRunner _ref;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x18")]
	private RegexRunner _obj;

	[Token(Token = "0x4000293")]
	[FieldOffset(Offset = "0x20")]
	private int _locked;

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x4904C10", Offset = "0x4904C10", VA = "0x4904C10")]
	public RegexRunner Get()
	{
		return null;
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x4904C70", Offset = "0x4904C70", VA = "0x4904C70")]
	public void Release(RegexRunner obj)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x4904D50", Offset = "0x4904D50", VA = "0x4904D50")]
	public ExclusiveReference()
	{
	}
}

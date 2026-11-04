// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.ExclusiveReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000E7")]
internal sealed class ExclusiveReference
{
	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x10")]
	private RegexRunner _ref;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x18")]
	private RegexRunner _obj;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x20")]
	private int _locked;

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x284AB10", Offset = "0x2849110", VA = "0x18284AB10")]
	public RegexRunner Get()
	{
		return null;
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x284AB80", Offset = "0x2849180", VA = "0x18284AB80")]
	public void Release(RegexRunner obj)
	{
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ExclusiveReference()
	{
	}
}

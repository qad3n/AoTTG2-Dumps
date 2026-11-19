// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.RegularExpressions.ExclusiveReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text.RegularExpressions;

[Token(Token = "0x20000A8")]
internal sealed class ExclusiveReference
{
	[Token(Token = "0x4000294")]
	[FieldOffset(Offset = "0x10")]
	private RegexRunner _ref;

	[Token(Token = "0x4000295")]
	[FieldOffset(Offset = "0x18")]
	private RegexRunner _obj;

	[Token(Token = "0x4000296")]
	[FieldOffset(Offset = "0x20")]
	private int _locked;

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x61E21C0", Offset = "0x61E11C0", VA = "0x61E21C0")]
	public RegexRunner Get()
	{
		return null;
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x61E2220", Offset = "0x61E1220", VA = "0x61E2220")]
	public void Release(RegexRunner obj)
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x61E2300", Offset = "0x61E1300", VA = "0x61E2300")]
	public ExclusiveReference()
	{
	}
}

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
	[Address(RVA = "0x45DFB10", Offset = "0x45DFB10", VA = "0x45DFB10")]
	public RegexRunner Get()
	{
		return null;
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x45DFB70", Offset = "0x45DFB70", VA = "0x45DFB70")]
	public void Release(RegexRunner obj)
	{
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x45DFC50", Offset = "0x45DFC50", VA = "0x45DFC50")]
	public ExclusiveReference()
	{
	}
}

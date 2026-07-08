using Il2CppDummyDll;

namespace DG.Tweening.Plugins.Options;

[Token(Token = "0x2000091")]
public struct StringOptions : IPlugOptions
{
	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x0")]
	public bool richTextEnabled;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x4")]
	public ScrambleMode scrambleMode;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x8")]
	public char[] scrambledChars;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x10")]
	internal int startValueStrippedLength;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x14")]
	internal int changeValueStrippedLength;

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x2319030", Offset = "0x2319030", VA = "0x2319030", Slot = "4")]
	public void Reset()
	{
	}
}

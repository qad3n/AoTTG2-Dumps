using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20005A1")]
internal class IgnoreScaler : BaseScaler
{
	[Token(Token = "0x4001B68")]
	[FieldOffset(Offset = "0x20")]
	public float Scale;

	[Token(Token = "0x6003A1E")]
	[Address(RVA = "0x3F80310", Offset = "0x3F80310", VA = "0x3F80310", Slot = "5")]
	public override void ApplyScale()
	{
	}

	[Token(Token = "0x6003A1F")]
	[Address(RVA = "0x3F803D0", Offset = "0x3F803D0", VA = "0x3F803D0")]
	public IgnoreScaler()
	{
	}
}

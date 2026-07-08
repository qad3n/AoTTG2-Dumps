using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000122")]
internal sealed class AottgCreditsBrushHeader : AottgComponent
{
	[Token(Token = "0x40006D3")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40006D4")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _text;

	[Token(Token = "0x6000615")]
	[Address(RVA = "0x406E580", Offset = "0x406E580", VA = "0x406E580")]
	public AottgCreditsBrushHeader(string id, string text)
	{
	}

	[Token(Token = "0x6000616")]
	[Address(RVA = "0x406E620", Offset = "0x406E620", VA = "0x406E620", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}

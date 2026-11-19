// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCreditsBrushHeader.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001FD")]
internal sealed class AottgCreditsBrushHeader : AottgComponent
{
	[Token(Token = "0x4000AAE")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000AAF")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _text;

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x5D7FEC0", Offset = "0x5D7EEC0", VA = "0x5D7FEC0")]
	public AottgCreditsBrushHeader(string id, string text)
	{
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x5D7FF60", Offset = "0x5D7EF60", VA = "0x5D7FF60", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}

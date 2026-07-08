using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000157")]
internal sealed class AottgCharacterNamePreviewPanel : AottgComponent
{
	[Token(Token = "0x40007C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float _width;

	[Token(Token = "0x40007C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly bool _liveDialog;

	[Token(Token = "0x40007C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _alignSelf;

	[Token(Token = "0x40007C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _fullWidth;

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x40CFFA0", Offset = "0x40CFFA0", VA = "0x40CFFA0")]
	public AottgCharacterNamePreviewPanel(string id, [Optional][DefaultParameterValue(420f)] float width, [Optional][DefaultParameterValue(false)] bool liveDialog, [Optional] string alignSelf, bool fullWidth = false)
	{
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x40D0010", Offset = "0x40D0010", VA = "0x40D0010", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}

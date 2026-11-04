// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBrushButton
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBrushButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E3")]
public sealed class AottgBrushButton : AottgComponent
{
	[Token(Token = "0x4000EAA")]
	private const string Brush = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x4000EAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgBrushSidePanelOption _option;

	[Token(Token = "0x4000EAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly GisketchMotionDefinition _enter;

	[Token(Token = "0x4000EAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly string _style;

	[Token(Token = "0x4000EAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly bool _hideSearch;

	[Token(Token = "0x4000EAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly string _id;

	[Token(Token = "0x6001210")]
	[Address(RVA = "0x1E28FF0", Offset = "0x1E275F0", VA = "0x181E28FF0")]
	public AottgBrushButton(AottgBrushSidePanelOption option, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue("mainMenuBrushButton")] string style, [Optional][DefaultParameterValue(false)] bool hideSearch, [Optional] string id)
	{
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x1E28DC0", Offset = "0x1E273C0", VA = "0x181E28DC0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}

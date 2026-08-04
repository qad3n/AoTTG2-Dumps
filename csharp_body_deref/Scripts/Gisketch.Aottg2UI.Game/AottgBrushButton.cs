// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBrushButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBrushButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001D5")]
public sealed class AottgBrushButton : AottgComponent
{
	[Token(Token = "0x40009E6")]
	private const string Brush = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x40009E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgBrushSidePanelOption _option;

	[Token(Token = "0x40009E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly GisketchMotionDefinition _enter;

	[Token(Token = "0x40009E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _style;

	[Token(Token = "0x40009EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly bool _hideSearch;

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x44330B0", Offset = "0x44330B0", VA = "0x44330B0")]
	public AottgBrushButton(AottgBrushSidePanelOption option, [Optional] GisketchMotionDefinition enter, string style = "mainMenuBrushButton", bool hideSearch = false)
	{
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x4433120", Offset = "0x4433120", VA = "0x4433120", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}

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

[Token(Token = "0x2000340")]
public sealed class AottgBrushButton : AottgComponent
{
	[Token(Token = "0x4001038")]
	private const string Brush = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x4001039")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgBrushSidePanelOption _option;

	[Token(Token = "0x400103A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly GisketchMotionDefinition _enter;

	[Token(Token = "0x400103B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly string _style;

	[Token(Token = "0x400103C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly bool _hideSearch;

	[Token(Token = "0x400103D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly string _id;

	[Token(Token = "0x400103E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private readonly float _maxWidth;

	[Token(Token = "0x6001462")]
	[Address(RVA = "0x5812240", Offset = "0x5811240", VA = "0x5812240")]
	public AottgBrushButton(AottgBrushSidePanelOption option, [Optional] GisketchMotionDefinition enter, [Optional][DefaultParameterValue("mainMenuBrushButton")] string style, [Optional][DefaultParameterValue(false)] bool hideSearch, [Optional] string id, float maxWidth = 0f)
	{
	}

	[Token(Token = "0x6001463")]
	[Address(RVA = "0x58122F0", Offset = "0x58112F0", VA = "0x58122F0")]
	public static string DisplayCase(string text)
	{
		return null;
	}

	[Token(Token = "0x6001464")]
	[Address(RVA = "0x5812360", Offset = "0x5811360", VA = "0x5812360", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}

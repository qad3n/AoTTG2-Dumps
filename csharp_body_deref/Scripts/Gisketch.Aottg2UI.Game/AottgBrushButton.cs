using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001A2")]
public sealed class AottgBrushButton : AottgComponent
{
	[Token(Token = "0x4000920")]
	private const string Brush = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x4000921")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgBrushSidePanelOption _option;

	[Token(Token = "0x4000922")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly GisketchMotionDefinition _enter;

	[Token(Token = "0x4000923")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _style;

	[Token(Token = "0x4000924")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly bool _hideSearch;

	[Token(Token = "0x60009A1")]
	[Address(RVA = "0x41017A0", Offset = "0x41017A0", VA = "0x41017A0")]
	public AottgBrushButton(AottgBrushSidePanelOption option, [Optional] GisketchMotionDefinition enter, string style = "mainMenuBrushButton", bool hideSearch = false)
	{
	}

	[Token(Token = "0x60009A2")]
	[Address(RVA = "0x4101810", Offset = "0x4101810", VA = "0x4101810", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}

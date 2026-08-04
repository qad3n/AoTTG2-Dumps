// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanelOption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001DB")]
public readonly struct AottgBrushSidePanelOption
{
	[Token(Token = "0x4000A11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _id;

	[Token(Token = "0x4000A12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x4000A13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string TextKey;

	[Token(Token = "0x4000A14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Icon;

	[Token(Token = "0x4000A15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string ActionId;

	[Token(Token = "0x4000A16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly Action<GisketchActionContext> Action;

	[Token(Token = "0x1700016B")]
	public string Id
	{
		[Token(Token = "0x6000B35")]
		[Address(RVA = "0x4433D30", Offset = "0x4433D30", VA = "0x4433D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x44347E0", Offset = "0x44347E0", VA = "0x44347E0")]
	public AottgBrushSidePanelOption(string label, string actionId, string icon)
	{
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x4434870", Offset = "0x4434870", VA = "0x4434870")]
	public AottgBrushSidePanelOption(string id, string label, string actionId, string icon, [Optional] string textKey)
	{
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x44348F0", Offset = "0x44348F0", VA = "0x44348F0")]
	public AottgBrushSidePanelOption(string label, Action<GisketchActionContext> action, string icon)
	{
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x4434980", Offset = "0x4434980", VA = "0x4434980")]
	public AottgBrushSidePanelOption(string id, string label, Action<GisketchActionContext> action, string icon, [Optional] string textKey)
	{
	}
}

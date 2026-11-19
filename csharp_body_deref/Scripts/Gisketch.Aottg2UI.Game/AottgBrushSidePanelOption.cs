// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBrushSidePanelOption.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000347")]
public readonly struct AottgBrushSidePanelOption
{
	[Token(Token = "0x400106D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _text;

	[Token(Token = "0x400106E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Id;

	[Token(Token = "0x400106F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string TextKey;

	[Token(Token = "0x4001070")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Icon;

	[Token(Token = "0x4001071")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string ActionId;

	[Token(Token = "0x4001072")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly Action<GisketchActionContext> Action;

	[Token(Token = "0x4001073")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly bool Searchable;

	[Token(Token = "0x4001074")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public readonly string Tooltip;

	[Token(Token = "0x4001075")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public readonly AottgBrushSidePanelOption[] StackedOptions;

	[Token(Token = "0x1700023B")]
	public string Text
	{
		[Token(Token = "0x600147B")]
		[Address(RVA = "0x5814290", Offset = "0x5813290", VA = "0x5814290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x5814130", Offset = "0x5813130", VA = "0x5814130")]
	public AottgBrushSidePanelOption(string id, string textKey, string actionId, string icon, [Optional][DefaultParameterValue(false)] bool searchable, [Optional] string tooltip)
	{
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x5814260", Offset = "0x5813260", VA = "0x5814260")]
	public AottgBrushSidePanelOption(string id, string textKey, Action<GisketchActionContext> action, string icon, [Optional][DefaultParameterValue(false)] bool searchable, [Optional] string tooltip)
	{
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x5814160", Offset = "0x5813160", VA = "0x5814160")]
	private AottgBrushSidePanelOption(string id, string textKey, string text, string actionId, Action<GisketchActionContext> action, string icon, bool searchable, string tooltip, AottgBrushSidePanelOption[] stackedOptions)
	{
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x5814320", Offset = "0x5813320", VA = "0x5814320")]
	public static AottgBrushSidePanelOption WithText(string id, string text, Action<GisketchActionContext> action, string icon)
	{
		return default(AottgBrushSidePanelOption);
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x5814370", Offset = "0x5813370", VA = "0x5814370")]
	public static AottgBrushSidePanelOption Stack(string id, params AottgBrushSidePanelOption[] options)
	{
		return default(AottgBrushSidePanelOption);
	}
}

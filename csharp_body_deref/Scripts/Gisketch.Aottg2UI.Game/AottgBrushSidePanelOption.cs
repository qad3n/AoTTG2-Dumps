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

[Token(Token = "0x20002E9")]
public readonly struct AottgBrushSidePanelOption
{
	[Token(Token = "0x4000ED8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _id;

	[Token(Token = "0x4000ED9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x4000EDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string TextKey;

	[Token(Token = "0x4000EDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Icon;

	[Token(Token = "0x4000EDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string ActionId;

	[Token(Token = "0x4000EDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly Action<GisketchActionContext> Action;

	[Token(Token = "0x4000EDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public readonly bool Searchable;

	[Token(Token = "0x4000EDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public readonly string Tooltip;

	[Token(Token = "0x170001FE")]
	public string Id
	{
		[Token(Token = "0x6001227")]
		[Address(RVA = "0x1E292E0", Offset = "0x1E278E0", VA = "0x181E292E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001223")]
	[Address(RVA = "0x1E29080", Offset = "0x1E27680", VA = "0x181E29080")]
	public AottgBrushSidePanelOption(string label, string actionId, string icon)
	{
	}

	[Token(Token = "0x6001224")]
	[Address(RVA = "0x1E29240", Offset = "0x1E27840", VA = "0x181E29240")]
	public AottgBrushSidePanelOption(string id, string label, string actionId, string icon, [Optional] string textKey, [Optional][DefaultParameterValue(false)] bool searchable, [Optional] string tooltip)
	{
	}

	[Token(Token = "0x6001225")]
	[Address(RVA = "0x1E291B0", Offset = "0x1E277B0", VA = "0x181E291B0")]
	public AottgBrushSidePanelOption(string label, Action<GisketchActionContext> action, string icon)
	{
	}

	[Token(Token = "0x6001226")]
	[Address(RVA = "0x1E29110", Offset = "0x1E27710", VA = "0x181E29110")]
	public AottgBrushSidePanelOption(string id, string label, Action<GisketchActionContext> action, string icon, [Optional] string textKey, [Optional][DefaultParameterValue(false)] bool searchable, [Optional] string tooltip)
	{
	}
}

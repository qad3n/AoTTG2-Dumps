// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateMapField
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapField.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200022E")]
internal sealed class AottgGameCreateMapField : AottgComponent
{
	[Token(Token = "0x4000B86")]
	private const string HoverNodeType = "GameCreateMapHover";

	[Token(Token = "0x4000B87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000B88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _mapName;

	[Token(Token = "0x4000B89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _actionId;

	[Token(Token = "0x4000B8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _editable;

	[Token(Token = "0x4000B8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private readonly int _selectableMapCount;

	[Token(Token = "0x4000B8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _tooltip;

	[Token(Token = "0x4000B8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _label;

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x5D97550", Offset = "0x5D96550", VA = "0x5D97550")]
	static AottgGameCreateMapField()
	{
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x5D97610", Offset = "0x5D96610", VA = "0x5D97610")]
	public AottgGameCreateMapField(string id, string mapName, string actionId, bool editable, int selectableMapCount, string tooltip, [Optional] string label)
	{
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x5D97760", Offset = "0x5D96760", VA = "0x5D97760", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x5D978E0", Offset = "0x5D968E0", VA = "0x5D978E0")]
	private static bool BuildHoverRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

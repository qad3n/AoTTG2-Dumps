// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateMapField
// Update status: NEW in this game update
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

[Token(Token = "0x2000213")]
internal sealed class AottgGameCreateMapField : AottgComponent
{
	[Token(Token = "0x4000B02")]
	private const string HoverNodeType = "GameCreateMapHover";

	[Token(Token = "0x4000B03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000B04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _mapName;

	[Token(Token = "0x4000B05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _actionId;

	[Token(Token = "0x4000B06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _editable;

	[Token(Token = "0x4000B07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private readonly int _selectableMapCount;

	[Token(Token = "0x4000B08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _tooltip;

	[Token(Token = "0x4000B09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _label;

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x23C9980", Offset = "0x23C7F80", VA = "0x1823C9980")]
	static AottgGameCreateMapField()
	{
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x23C9A40", Offset = "0x23C8040", VA = "0x1823C9A40")]
	public AottgGameCreateMapField(string id, string mapName, string actionId, bool editable, int selectableMapCount, string tooltip, [Optional] string label)
	{
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x23C87F0", Offset = "0x23C6DF0", VA = "0x1823C87F0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x23C86E0", Offset = "0x23C6CE0", VA = "0x1823C86E0")]
	private static bool BuildHoverRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

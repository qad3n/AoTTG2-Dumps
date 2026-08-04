// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgBadgeIconRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgBadgeIconRow.c
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

[Token(Token = "0x2000183")]
internal sealed class AottgBadgeIconRow : AottgComponent
{
	[Token(Token = "0x4000864")]
	private const string NodeType = "AottgBadgeIconRow";

	[Token(Token = "0x4000865")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000866")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float _size;

	[Token(Token = "0x4000867")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly float _gap;

	[Token(Token = "0x4000868")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _stateKey;

	[Token(Token = "0x4000869")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _visibleKey;

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x43FA9D0", Offset = "0x43FA9D0", VA = "0x43FA9D0")]
	static AottgBadgeIconRow()
	{
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x43FAA90", Offset = "0x43FAA90", VA = "0x43FAA90")]
	public AottgBadgeIconRow(string id, float size, [Optional][DefaultParameterValue(4f)] float gap, [Optional] string stateKey, [Optional] string visibleKey)
	{
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x43FAB10", Offset = "0x43FAB10", VA = "0x43FAB10", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x43FAD00", Offset = "0x43FAD00", VA = "0x43FAD00")]
	private static bool BuildRow(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

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

[Token(Token = "0x2000289")]
internal sealed class AottgBadgeIconRow : AottgComponent
{
	[Token(Token = "0x4000D05")]
	private const string NodeType = "AottgBadgeIconRow";

	[Token(Token = "0x4000D06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000D07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float _size;

	[Token(Token = "0x4000D08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly float _gap;

	[Token(Token = "0x4000D09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _stateKey;

	[Token(Token = "0x4000D0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _visibleKey;

	[Token(Token = "0x6000F48")]
	[Address(RVA = "0x1DF1450", Offset = "0x1DEFA50", VA = "0x181DF1450")]
	static AottgBadgeIconRow()
	{
	}

	[Token(Token = "0x6000F49")]
	[Address(RVA = "0x1DF1510", Offset = "0x1DEFB10", VA = "0x181DF1510")]
	public AottgBadgeIconRow(string id, float size, [Optional][DefaultParameterValue(4f)] float gap, [Optional] string stateKey, [Optional] string visibleKey)
	{
	}

	[Token(Token = "0x6000F4A")]
	[Address(RVA = "0x1DF1210", Offset = "0x1DEF810", VA = "0x181DF1210", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000F4B")]
	[Address(RVA = "0x1DF1100", Offset = "0x1DEF700", VA = "0x181DF1100")]
	private static bool BuildRow(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

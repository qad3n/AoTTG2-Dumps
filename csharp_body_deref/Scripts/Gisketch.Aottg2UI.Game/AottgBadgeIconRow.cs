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

[Token(Token = "0x20002E5")]
internal sealed class AottgBadgeIconRow : AottgComponent
{
	[Token(Token = "0x4000EA1")]
	private const string NodeType = "AottgBadgeIconRow";

	[Token(Token = "0x4000EA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000EA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float _size;

	[Token(Token = "0x4000EA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly float _gap;

	[Token(Token = "0x4000EA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _stateKey;

	[Token(Token = "0x4000EA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _visibleKey;

	[Token(Token = "0x6001196")]
	[Address(RVA = "0x57D6ED0", Offset = "0x57D5ED0", VA = "0x57D6ED0")]
	static AottgBadgeIconRow()
	{
	}

	[Token(Token = "0x6001197")]
	[Address(RVA = "0x57D6F90", Offset = "0x57D5F90", VA = "0x57D6F90")]
	public AottgBadgeIconRow(string id, float size, [Optional][DefaultParameterValue(4f)] float gap, [Optional] string stateKey, [Optional] string visibleKey)
	{
	}

	[Token(Token = "0x6001198")]
	[Address(RVA = "0x57D7010", Offset = "0x57D6010", VA = "0x57D7010", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001199")]
	[Address(RVA = "0x57D7200", Offset = "0x57D6200", VA = "0x57D7200")]
	private static bool BuildRow(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCarouselRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001FA")]
internal sealed class AottgGameCreateCarouselRow : AottgComponent
{
	[Token(Token = "0x4000A90")]
	private const string RuntimeNodeType = "GameCreateCarouselRuntime";

	[Token(Token = "0x4000A91")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000A92")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _count;

	[Token(Token = "0x4000A93")]
	[FieldOffset(Offset = "0x1C")]
	private readonly float _height;

	[Token(Token = "0x4000A94")]
	[FieldOffset(Offset = "0x20")]
	private readonly float _gap;

	[Token(Token = "0x4000A95")]
	[FieldOffset(Offset = "0x24")]
	private readonly float _paddingTop;

	[Token(Token = "0x4000A96")]
	[FieldOffset(Offset = "0x28")]
	private readonly int _selectedIndex;

	[Token(Token = "0x4000A97")]
	[FieldOffset(Offset = "0x30")]
	private readonly Action<AottgUi> _buildChoices;

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x23BF270", Offset = "0x23BD870", VA = "0x1823BF270")]
	static AottgGameCreateCarouselRow()
	{
	}

	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x23BF330", Offset = "0x23BD930", VA = "0x1823BF330")]
	public AottgGameCreateCarouselRow(string id, int count, float height, float gap, Action<AottgUi> buildChoices, float paddingTop = 0f, int selectedIndex = -1)
	{
	}

	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x23BE980", Offset = "0x23BCF80", VA = "0x1823BE980", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x23BE6D0", Offset = "0x23BCCD0", VA = "0x1823BE6D0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCarouselRow
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000215")]
internal sealed class AottgGameCreateCarouselRow : AottgComponent
{
	[Token(Token = "0x4000B0D")]
	private const string RuntimeNodeType = "GameCreateCarouselRuntime";

	[Token(Token = "0x4000B0E")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000B0F")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _count;

	[Token(Token = "0x4000B10")]
	[FieldOffset(Offset = "0x1C")]
	private readonly float _height;

	[Token(Token = "0x4000B11")]
	[FieldOffset(Offset = "0x20")]
	private readonly float _gap;

	[Token(Token = "0x4000B12")]
	[FieldOffset(Offset = "0x24")]
	private readonly float _paddingTop;

	[Token(Token = "0x4000B13")]
	[FieldOffset(Offset = "0x28")]
	private readonly int _selectedIndex;

	[Token(Token = "0x4000B14")]
	[FieldOffset(Offset = "0x30")]
	private readonly Action<AottgUi> _buildChoices;

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x5D8A5E0", Offset = "0x5D895E0", VA = "0x5D8A5E0")]
	static AottgGameCreateCarouselRow()
	{
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x5D8A6A0", Offset = "0x5D896A0", VA = "0x5D8A6A0")]
	public AottgGameCreateCarouselRow(string id, int count, float height, float gap, Action<AottgUi> buildChoices, float paddingTop = 0f, int selectedIndex = -1)
	{
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x5D8A730", Offset = "0x5D89730", VA = "0x5D8A730", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x5D8A8A0", Offset = "0x5D898A0", VA = "0x5D8A8A0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

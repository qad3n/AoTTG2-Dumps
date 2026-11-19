// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateCategoryRow.c
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

[Token(Token = "0x200021A")]
internal sealed class AottgGameCreateCategoryRow : AottgComponent
{
	[Token(Token = "0x4000B22")]
	private const string RuntimeNodeType = "GameCreateCategoryRowRuntime";

	[Token(Token = "0x4000B23")]
	internal const float ItemWidth = 260f;

	[Token(Token = "0x4000B24")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000B25")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _count;

	[Token(Token = "0x4000B26")]
	[FieldOffset(Offset = "0x1C")]
	private readonly float _height;

	[Token(Token = "0x4000B27")]
	[FieldOffset(Offset = "0x20")]
	private readonly float _gap;

	[Token(Token = "0x4000B28")]
	[FieldOffset(Offset = "0x24")]
	private readonly float _paddingTop;

	[Token(Token = "0x4000B29")]
	[FieldOffset(Offset = "0x28")]
	private readonly bool _wrap;

	[Token(Token = "0x4000B2A")]
	[FieldOffset(Offset = "0x30")]
	private readonly Action<AottgUi> _buildChoices;

	[Token(Token = "0x6000C87")]
	[Address(RVA = "0x5D8CF40", Offset = "0x5D8BF40", VA = "0x5D8CF40")]
	static AottgGameCreateCategoryRow()
	{
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x5D8D000", Offset = "0x5D8C000", VA = "0x5D8D000")]
	public AottgGameCreateCategoryRow(string id, int count, float height, float gap, Action<AottgUi> buildChoices, bool wrap = false, float paddingTop = 0f)
	{
	}

	[Token(Token = "0x6000C89")]
	[Address(RVA = "0x5D8D0A0", Offset = "0x5D8C0A0", VA = "0x5D8D0A0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x5D8D210", Offset = "0x5D8C210", VA = "0x5D8D210")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateCategoryRow
// Update status: NEW in this game update
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

[Token(Token = "0x20001FF")]
internal sealed class AottgGameCreateCategoryRow : AottgComponent
{
	[Token(Token = "0x4000AA5")]
	private const string RuntimeNodeType = "GameCreateCategoryRowRuntime";

	[Token(Token = "0x4000AA6")]
	internal const float ItemWidth = 260f;

	[Token(Token = "0x4000AA7")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000AA8")]
	[FieldOffset(Offset = "0x18")]
	private readonly int _count;

	[Token(Token = "0x4000AA9")]
	[FieldOffset(Offset = "0x1C")]
	private readonly float _height;

	[Token(Token = "0x4000AAA")]
	[FieldOffset(Offset = "0x20")]
	private readonly float _gap;

	[Token(Token = "0x4000AAB")]
	[FieldOffset(Offset = "0x24")]
	private readonly float _paddingTop;

	[Token(Token = "0x4000AAC")]
	[FieldOffset(Offset = "0x28")]
	private readonly bool _wrap;

	[Token(Token = "0x4000AAD")]
	[FieldOffset(Offset = "0x30")]
	private readonly Action<AottgUi> _buildChoices;

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x23C1FB0", Offset = "0x23C05B0", VA = "0x1823C1FB0")]
	static AottgGameCreateCategoryRow()
	{
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x23C2070", Offset = "0x23C0670", VA = "0x1823C2070")]
	public AottgGameCreateCategoryRow(string id, int count, float height, float gap, Action<AottgUi> buildChoices, bool wrap = false, float paddingTop = 0f)
	{
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x23C19F0", Offset = "0x23BFFF0", VA = "0x1823C19F0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x23C17A0", Offset = "0x23BFDA0", VA = "0x1823C17A0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

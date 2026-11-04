// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreview
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreview.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000291")]
internal sealed class AottgCharacterNamePreview : AottgComponent
{
	[Token(Token = "0x4000D2A")]
	private const string NodeType = "CharacterNamePreview";

	[Token(Token = "0x4000D2B")]
	internal const float LabelFontSize = 20f;

	[Token(Token = "0x4000D2C")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000D2D")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _liveDialog;

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x1DF8510", Offset = "0x1DF6B10", VA = "0x181DF8510")]
	static AottgCharacterNamePreview()
	{
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x1B44DB0", Offset = "0x1B433B0", VA = "0x181B44DB0")]
	public AottgCharacterNamePreview(string id, bool liveDialog = false)
	{
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x1DF8220", Offset = "0x1DF6820", VA = "0x181DF8220", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x1DF8400", Offset = "0x1DF6A00", VA = "0x181DF8400")]
	public static void Refresh(GameObject source)
	{
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x1DF7FE0", Offset = "0x1DF65E0", VA = "0x181DF7FE0")]
	private static bool BuildPreview(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

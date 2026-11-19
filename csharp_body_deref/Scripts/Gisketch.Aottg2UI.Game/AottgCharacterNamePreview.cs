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

[Token(Token = "0x20002ED")]
internal sealed class AottgCharacterNamePreview : AottgComponent
{
	[Token(Token = "0x4000EC3")]
	private const string NodeType = "CharacterNamePreview";

	[Token(Token = "0x4000EC4")]
	internal const float LabelFontSize = 20f;

	[Token(Token = "0x4000EC5")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000EC6")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _liveDialog;

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x57DD6E0", Offset = "0x57DC6E0", VA = "0x57DD6E0")]
	static AottgCharacterNamePreview()
	{
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x57DD7A0", Offset = "0x57DC7A0", VA = "0x57DD7A0")]
	public AottgCharacterNamePreview(string id, bool liveDialog = false)
	{
	}

	[Token(Token = "0x60011E9")]
	[Address(RVA = "0x57DD7D0", Offset = "0x57DC7D0", VA = "0x57DD7D0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x57DD980", Offset = "0x57DC980", VA = "0x57DD980")]
	public static void Refresh(GameObject source)
	{
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x57DE050", Offset = "0x57DD050", VA = "0x57DE050")]
	private static bool BuildPreview(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

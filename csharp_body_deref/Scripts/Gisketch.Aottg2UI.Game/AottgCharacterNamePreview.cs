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

[Token(Token = "0x200018B")]
internal sealed class AottgCharacterNamePreview : AottgComponent
{
	[Token(Token = "0x4000889")]
	private const string NodeType = "CharacterNamePreview";

	[Token(Token = "0x400088A")]
	internal const float LabelFontSize = 20f;

	[Token(Token = "0x400088B")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400088C")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _liveDialog;

	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x4401D00", Offset = "0x4401D00", VA = "0x4401D00")]
	static AottgCharacterNamePreview()
	{
	}

	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x4401BE0", Offset = "0x4401BE0", VA = "0x4401BE0")]
	public AottgCharacterNamePreview(string id, bool liveDialog = false)
	{
	}

	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x4401DC0", Offset = "0x4401DC0", VA = "0x4401DC0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x4401F70", Offset = "0x4401F70", VA = "0x4401F70")]
	public static void Refresh(GameObject source)
	{
	}

	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x4402610", Offset = "0x4402610", VA = "0x4402610")]
	private static bool BuildPreview(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

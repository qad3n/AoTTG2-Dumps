// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateChoiceTile.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000202")]
internal sealed class AottgGameCreateChoiceTile : AottgComponent
{
	[Token(Token = "0x4000ABC")]
	private const string HoverNodeType = "GameCreateChoiceHover";

	[Token(Token = "0x4000ABD")]
	private const string FrameNodeType = "GameCreateChoiceFrame";

	[Token(Token = "0x4000ABE")]
	internal const string DetailTitleId = "game-create-choice-detail-title";

	[Token(Token = "0x4000ABF")]
	internal const string DetailDescriptionId = "game-create-choice-detail-description";

	[Token(Token = "0x4000AC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000AC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x4000AC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _description;

	[Token(Token = "0x4000AC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _actionId;

	[Token(Token = "0x4000AC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _icon;

	[Token(Token = "0x4000AC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _previewSprite;

	[Token(Token = "0x4000AC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly int _index;

	[Token(Token = "0x4000AC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<GisketchActionContext> _select;

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x23C4D00", Offset = "0x23C3300", VA = "0x1823C4D00")]
	static AottgGameCreateChoiceTile()
	{
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x23C4E30", Offset = "0x23C3430", VA = "0x1823C4E30")]
	public AottgGameCreateChoiceTile(string id, string title, string description, string actionId, string icon, int index, [Optional] string previewSprite, [Optional] Action<GisketchActionContext> select)
	{
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x23C4780", Offset = "0x23C2D80", VA = "0x1823C4780", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x23C3AF0", Offset = "0x23C20F0", VA = "0x1823C3AF0")]
	internal static GisketchNodeDefinition BuildFavoriteButton(AottgUi ui, string id, bool favorite, Action<GisketchActionContext> toggle)
	{
		return null;
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x23C4520", Offset = "0x23C2B20", VA = "0x1823C4520")]
	private static bool BuildHoverRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x23C41F0", Offset = "0x23C27F0", VA = "0x1823C41F0")]
	private static bool BuildFrameRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x23C3D20", Offset = "0x23C2320", VA = "0x1823C3D20")]
	private static void BuildFavoritesArtwork(RectTransform parent, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x23C3720", Offset = "0x23C1D20", VA = "0x1823C3720")]
	private static void AddFavoriteStar(RectTransform parent, Sprite sprite, string layer, Vector2 position, float size, float angle, Color color)
	{
	}
}

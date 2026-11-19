// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateChoiceTile
// Update status: CHANGED in this game update
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

[Token(Token = "0x200021D")]
internal sealed class AottgGameCreateChoiceTile : AottgComponent
{
	[Token(Token = "0x4000B39")]
	private const string HoverNodeType = "GameCreateChoiceHover";

	[Token(Token = "0x4000B3A")]
	private const string FrameNodeType = "GameCreateChoiceFrame";

	[Token(Token = "0x4000B3B")]
	internal const string DetailTitleId = "game-create-choice-detail-title";

	[Token(Token = "0x4000B3C")]
	internal const string DetailDescriptionId = "game-create-choice-detail-description";

	[Token(Token = "0x4000B3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000B3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x4000B3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _description;

	[Token(Token = "0x4000B40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _actionId;

	[Token(Token = "0x4000B41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _icon;

	[Token(Token = "0x4000B42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _previewSprite;

	[Token(Token = "0x4000B43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly int _index;

	[Token(Token = "0x4000B44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<GisketchActionContext> _select;

	[Token(Token = "0x4000B45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly float _height;

	[Token(Token = "0x4000B46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Sprite _featuredStarSprite;

	[Token(Token = "0x17000168")]
	private static Sprite FeaturedStarSprite
	{
		[Token(Token = "0x6000CA4")]
		[Address(RVA = "0x5D90700", Offset = "0x5D8F700", VA = "0x5D90700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x5D8E760", Offset = "0x5D8D760", VA = "0x5D8E760")]
	static AottgGameCreateChoiceTile()
	{
	}

	[Token(Token = "0x6000C9E")]
	[Address(RVA = "0x5D8E890", Offset = "0x5D8D890", VA = "0x5D8E890")]
	public AottgGameCreateChoiceTile(string id, string title, string description, string actionId, string icon, int index, [Optional] string previewSprite, [Optional] Action<GisketchActionContext> select, float height = 0f)
	{
	}

	[Token(Token = "0x6000C9F")]
	[Address(RVA = "0x5D8E990", Offset = "0x5D8D990", VA = "0x5D8E990", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000CA0")]
	[Address(RVA = "0x5D8EEE0", Offset = "0x5D8DEE0", VA = "0x5D8EEE0")]
	internal static GisketchNodeDefinition BuildFavoriteButton(AottgUi ui, string id, bool favorite, Action<GisketchActionContext> toggle)
	{
		return null;
	}

	[Token(Token = "0x6000CA1")]
	[Address(RVA = "0x5D8F0B0", Offset = "0x5D8E0B0", VA = "0x5D8F0B0")]
	private static bool BuildHoverRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA2")]
	[Address(RVA = "0x5D8FCC0", Offset = "0x5D8ECC0", VA = "0x5D8FCC0")]
	private static bool BuildFrameRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CA3")]
	[Address(RVA = "0x5D900C0", Offset = "0x5D8F0C0", VA = "0x5D900C0")]
	private static void BuildFavoritesArtwork(RectTransform parent, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000CA5")]
	[Address(RVA = "0x5D90B50", Offset = "0x5D8FB50", VA = "0x5D90B50")]
	private static Sprite CreateFeaturedStarSprite()
	{
		return null;
	}

	[Token(Token = "0x6000CA6")]
	[Address(RVA = "0x5D91260", Offset = "0x5D90260", VA = "0x5D91260")]
	private static int FindCrossings(Vector2[] vertices, float y, float[] crossings)
	{
		return default(int);
	}

	[Token(Token = "0x6000CA7")]
	[Address(RVA = "0x5D91370", Offset = "0x5D90370", VA = "0x5D91370")]
	private static void AddSpanCoverage(float[] coverage, float left, float right, float weight)
	{
	}

	[Token(Token = "0x6000CA8")]
	[Address(RVA = "0x5D90420", Offset = "0x5D8F420", VA = "0x5D90420")]
	private static void BuildSandboxArtwork(RectTransform parent, GisketchBuildContext context)
	{
	}

	[Token(Token = "0x6000CA9")]
	[Address(RVA = "0x5D907B0", Offset = "0x5D8F7B0", VA = "0x5D907B0")]
	private static void AddFeaturedArtwork(RectTransform parent, Sprite sprite, string layer, Vector2 position, float size, float angle, Color color)
	{
	}
}

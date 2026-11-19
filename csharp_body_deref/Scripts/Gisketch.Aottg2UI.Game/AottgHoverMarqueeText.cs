// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeText
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgHoverMarqueeText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000207")]
public sealed class AottgHoverMarqueeText : AottgComponent
{
	[Token(Token = "0x4000ACB")]
	public const string NodeType = "AottgHoverMarqueeText";

	[Token(Token = "0x4000ACC")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000ACD")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000ACE")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _text;

	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x5D83DC0", Offset = "0x5D82DC0", VA = "0x5D83DC0")]
	static AottgHoverMarqueeText()
	{
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x5D81FF0", Offset = "0x5D80FF0", VA = "0x5D81FF0")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x5D83DD0", Offset = "0x5D82DD0", VA = "0x5D83DD0")]
	public AottgHoverMarqueeText(string id, string text)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x5D83E30", Offset = "0x5D82E30", VA = "0x5D83E30", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x5D83FF0", Offset = "0x5D82FF0", VA = "0x5D83FF0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

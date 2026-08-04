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

[Token(Token = "0x200015E")]
public sealed class AottgHoverMarqueeText : AottgComponent
{
	[Token(Token = "0x40007AF")]
	public const string NodeType = "AottgHoverMarqueeText";

	[Token(Token = "0x40007B0")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x40007B1")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007B2")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _text;

	[Token(Token = "0x60007AF")]
	[Address(RVA = "0x43E9DD0", Offset = "0x43E9DD0", VA = "0x43E9DD0")]
	static AottgHoverMarqueeText()
	{
	}

	[Token(Token = "0x60007B0")]
	[Address(RVA = "0x43E7ED0", Offset = "0x43E7ED0", VA = "0x43E7ED0")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x60007B1")]
	[Address(RVA = "0x43E9DE0", Offset = "0x43E9DE0", VA = "0x43E9DE0")]
	public AottgHoverMarqueeText(string id, string text)
	{
	}

	[Token(Token = "0x60007B2")]
	[Address(RVA = "0x43E9E40", Offset = "0x43E9E40", VA = "0x43E9E40", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60007B3")]
	[Address(RVA = "0x43EA010", Offset = "0x43EA010", VA = "0x43EA010")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

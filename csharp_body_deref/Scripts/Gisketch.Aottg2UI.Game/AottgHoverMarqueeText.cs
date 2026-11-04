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

[Token(Token = "0x20001ED")]
public sealed class AottgHoverMarqueeText : AottgComponent
{
	[Token(Token = "0x4000A53")]
	public const string NodeType = "AottgHoverMarqueeText";

	[Token(Token = "0x4000A54")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000A55")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000A56")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _text;

	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x23B49C0", Offset = "0x23B2FC0", VA = "0x1823B49C0")]
	static AottgHoverMarqueeText()
	{
	}

	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x23B4890", Offset = "0x23B2E90", VA = "0x1823B4890")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x23B49D0", Offset = "0x23B2FD0", VA = "0x1823B49D0")]
	public AottgHoverMarqueeText(string id, string text)
	{
	}

	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x23B4660", Offset = "0x23B2C60", VA = "0x1823B4660", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x23B4500", Offset = "0x23B2B00", VA = "0x1823B4500")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

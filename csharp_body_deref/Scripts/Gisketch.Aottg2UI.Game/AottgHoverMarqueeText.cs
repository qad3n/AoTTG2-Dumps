using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200012C")]
public sealed class AottgHoverMarqueeText : AottgComponent
{
	[Token(Token = "0x40006F0")]
	public const string NodeType = "AottgHoverMarqueeText";

	[Token(Token = "0x40006F1")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x40006F2")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40006F3")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _text;

	[Token(Token = "0x6000642")]
	[Address(RVA = "0x4072540", Offset = "0x4072540", VA = "0x4072540")]
	static AottgHoverMarqueeText()
	{
	}

	[Token(Token = "0x6000643")]
	[Address(RVA = "0x40706E0", Offset = "0x40706E0", VA = "0x40706E0")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000644")]
	[Address(RVA = "0x4072550", Offset = "0x4072550", VA = "0x4072550")]
	public AottgHoverMarqueeText(string id, string text)
	{
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x40725B0", Offset = "0x40725B0", VA = "0x40725B0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x4072780", Offset = "0x4072780", VA = "0x4072780")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

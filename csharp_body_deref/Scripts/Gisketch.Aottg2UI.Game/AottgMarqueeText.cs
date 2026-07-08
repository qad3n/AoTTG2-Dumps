using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000134")]
internal sealed class AottgMarqueeText : AottgComponent
{
	[Token(Token = "0x400070C")]
	private const string NodeType = "AottgMarqueeText";

	[Token(Token = "0x400070D")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400070E")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _stateKey;

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x4074EC0", Offset = "0x4074EC0", VA = "0x4074EC0")]
	static AottgMarqueeText()
	{
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x4073DC0", Offset = "0x4073DC0", VA = "0x4073DC0")]
	public AottgMarqueeText(string id, string stateKey)
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x4074F80", Offset = "0x4074F80", VA = "0x4074F80", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x4075120", Offset = "0x4075120", VA = "0x4075120")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

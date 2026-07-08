using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000159")]
internal sealed class AottgCharacterNamePreview : AottgComponent
{
	[Token(Token = "0x40007C8")]
	private const string NodeType = "CharacterNamePreview";

	[Token(Token = "0x40007C9")]
	internal const float LabelFontSize = 20f;

	[Token(Token = "0x40007CA")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007CB")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool _liveDialog;

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x40D06D0", Offset = "0x40D06D0", VA = "0x40D06D0")]
	static AottgCharacterNamePreview()
	{
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x40D05B0", Offset = "0x40D05B0", VA = "0x40D05B0")]
	public AottgCharacterNamePreview(string id, bool liveDialog = false)
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x40D0790", Offset = "0x40D0790", VA = "0x40D0790", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x40D0940", Offset = "0x40D0940", VA = "0x40D0940")]
	public static void Refresh(GameObject source)
	{
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x40D0F50", Offset = "0x40D0F50", VA = "0x40D0F50")]
	private static bool BuildPreview(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMarqueeText
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMarqueeText.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001F5")]
internal sealed class AottgMarqueeText : AottgComponent
{
	[Token(Token = "0x4000A6F")]
	private const string NodeType = "AottgMarqueeText";

	[Token(Token = "0x4000A70")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000A71")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _stateKey;

	[Token(Token = "0x4000A72")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _fallback;

	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x23B5B00", Offset = "0x23B4100", VA = "0x1823B5B00")]
	static AottgMarqueeText()
	{
	}

	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x23B5BC0", Offset = "0x23B41C0", VA = "0x1823B5BC0")]
	public AottgMarqueeText(string id, string stateKey)
	{
	}

	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x23B5C40", Offset = "0x23B4240", VA = "0x1823B5C40")]
	public AottgMarqueeText(string id, string stateKey, string fallback)
	{
	}

	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x23B5910", Offset = "0x23B3F10", VA = "0x1823B5910", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x23B5750", Offset = "0x23B3D50", VA = "0x1823B5750")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMarqueeText
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000166")]
internal sealed class AottgMarqueeText : AottgComponent
{
	[Token(Token = "0x40007CB")]
	private const string NodeType = "AottgMarqueeText";

	[Token(Token = "0x40007CC")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007CD")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _stateKey;

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x43EC760", Offset = "0x43EC760", VA = "0x43EC760")]
	static AottgMarqueeText()
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x43EB660", Offset = "0x43EB660", VA = "0x43EB660")]
	public AottgMarqueeText(string id, string stateKey)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x43EC820", Offset = "0x43EC820", VA = "0x43EC820", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x43EC9C0", Offset = "0x43EC9C0", VA = "0x43EC9C0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

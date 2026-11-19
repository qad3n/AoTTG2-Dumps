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

[Token(Token = "0x200020F")]
internal sealed class AottgMarqueeText : AottgComponent
{
	[Token(Token = "0x4000AE7")]
	private const string NodeType = "AottgMarqueeText";

	[Token(Token = "0x4000AE8")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000AE9")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _stateKey;

	[Token(Token = "0x4000AEA")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _fallback;

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x5D867A0", Offset = "0x5D857A0", VA = "0x5D867A0")]
	static AottgMarqueeText()
	{
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x5D856C0", Offset = "0x5D846C0", VA = "0x5D856C0")]
	public AottgMarqueeText(string id, string stateKey)
	{
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x5D86860", Offset = "0x5D85860", VA = "0x5D86860")]
	public AottgMarqueeText(string id, string stateKey, string fallback)
	{
	}

	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x5D868E0", Offset = "0x5D858E0", VA = "0x5D868E0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x5D86A90", Offset = "0x5D85A90", VA = "0x5D86A90")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

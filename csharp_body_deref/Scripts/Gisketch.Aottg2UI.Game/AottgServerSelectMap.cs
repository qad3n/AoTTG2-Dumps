// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgServerSelectMap
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectMap.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002DF")]
public sealed class AottgServerSelectMap : AottgComponent
{
	[Token(Token = "0x4000E80")]
	public const string NodeType = "AottgServerSelectMap";

	[Token(Token = "0x4000E81")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x6001162")]
	[Address(RVA = "0x57D2F70", Offset = "0x57D1F70", VA = "0x57D2F70")]
	static AottgServerSelectMap()
	{
	}

	[Token(Token = "0x6001163")]
	[Address(RVA = "0x57D2F80", Offset = "0x57D1F80", VA = "0x57D2F80")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6001164")]
	[Address(RVA = "0x57D30B0", Offset = "0x57D20B0", VA = "0x57D30B0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x57D3220", Offset = "0x57D2220", VA = "0x57D3220")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x57D38C0", Offset = "0x57D28C0", VA = "0x57D38C0")]
	public AottgServerSelectMap()
	{
	}
}

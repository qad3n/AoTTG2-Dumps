// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHover
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPublicProfileHover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001CB")]
public sealed class AottgPublicProfileHover : AottgComponent
{
	[Token(Token = "0x40009B2")]
	public const string NodeType = "PublicProfileHover";

	[Token(Token = "0x40009B3")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x40009B4")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40009B5")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _accountId;

	[Token(Token = "0x6000AD6")]
	[Address(RVA = "0x442EA20", Offset = "0x442EA20", VA = "0x442EA20")]
	static AottgPublicProfileHover()
	{
	}

	[Token(Token = "0x6000AD7")]
	[Address(RVA = "0x442EA30", Offset = "0x442EA30", VA = "0x442EA30")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000AD8")]
	[Address(RVA = "0x442EB60", Offset = "0x442EB60", VA = "0x442EB60")]
	public AottgPublicProfileHover(string id, string accountId)
	{
	}

	[Token(Token = "0x6000AD9")]
	[Address(RVA = "0x442EBA0", Offset = "0x442EBA0", VA = "0x442EBA0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x442EC20", Offset = "0x442EC20", VA = "0x442EC20")]
	public static GisketchNodeDefinition Node(string id, string accountId)
	{
		return null;
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x442EDB0", Offset = "0x442EDB0", VA = "0x442EDB0")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

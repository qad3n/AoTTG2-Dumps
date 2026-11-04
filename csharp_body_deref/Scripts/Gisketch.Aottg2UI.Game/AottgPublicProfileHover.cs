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

[Token(Token = "0x20002D4")]
public sealed class AottgPublicProfileHover : AottgComponent
{
	[Token(Token = "0x4000E6A")]
	public const string NodeType = "PublicProfileHover";

	[Token(Token = "0x4000E6B")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000E6C")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000E6D")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _accountId;

	[Token(Token = "0x60011A9")]
	[Address(RVA = "0x1E215C0", Offset = "0x1E1FBC0", VA = "0x181E215C0")]
	static AottgPublicProfileHover()
	{
	}

	[Token(Token = "0x60011AA")]
	[Address(RVA = "0x1E21490", Offset = "0x1E1FA90", VA = "0x181E21490")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x60011AB")]
	[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
	public AottgPublicProfileHover(string id, string accountId)
	{
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x1E210B0", Offset = "0x1E1F6B0", VA = "0x181E210B0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60011AD")]
	[Address(RVA = "0x1E212C0", Offset = "0x1E1F8C0", VA = "0x181E212C0")]
	public static GisketchNodeDefinition Node(string id, string accountId)
	{
		return null;
	}

	[Token(Token = "0x60011AE")]
	[Address(RVA = "0x1E20F70", Offset = "0x1E1F570", VA = "0x181E20F70")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

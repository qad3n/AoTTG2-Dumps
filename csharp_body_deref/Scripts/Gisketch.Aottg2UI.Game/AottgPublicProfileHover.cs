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

[Token(Token = "0x2000331")]
public sealed class AottgPublicProfileHover : AottgComponent
{
	[Token(Token = "0x4000FF8")]
	public const string NodeType = "PublicProfileHover";

	[Token(Token = "0x4000FF9")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000FFA")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000FFB")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _accountId;

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x580C1C0", Offset = "0x580B1C0", VA = "0x580C1C0")]
	static AottgPublicProfileHover()
	{
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x580C1D0", Offset = "0x580B1D0", VA = "0x580C1D0")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x580C300", Offset = "0x580B300", VA = "0x580C300")]
	public AottgPublicProfileHover(string id, string accountId)
	{
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x580C340", Offset = "0x580B340", VA = "0x580C340", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x580C3C0", Offset = "0x580B3C0", VA = "0x580C3C0")]
	public static GisketchNodeDefinition Node(string id, string accountId)
	{
		return null;
	}

	[Token(Token = "0x6001400")]
	[Address(RVA = "0x580C540", Offset = "0x580B540", VA = "0x580C540")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

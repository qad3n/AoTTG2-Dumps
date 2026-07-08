using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000198")]
public sealed class AottgPublicProfileHover : AottgComponent
{
	[Token(Token = "0x40008EC")]
	public const string NodeType = "PublicProfileHover";

	[Token(Token = "0x40008ED")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x40008EE")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40008EF")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _accountId;

	[Token(Token = "0x6000959")]
	[Address(RVA = "0x40FD0F0", Offset = "0x40FD0F0", VA = "0x40FD0F0")]
	static AottgPublicProfileHover()
	{
	}

	[Token(Token = "0x600095A")]
	[Address(RVA = "0x40FD100", Offset = "0x40FD100", VA = "0x40FD100")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x600095B")]
	[Address(RVA = "0x40FD230", Offset = "0x40FD230", VA = "0x40FD230")]
	public AottgPublicProfileHover(string id, string accountId)
	{
	}

	[Token(Token = "0x600095C")]
	[Address(RVA = "0x40FD270", Offset = "0x40FD270", VA = "0x40FD270", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600095D")]
	[Address(RVA = "0x40FD2F0", Offset = "0x40FD2F0", VA = "0x40FD2F0")]
	public static GisketchNodeDefinition Node(string id, string accountId)
	{
		return null;
	}

	[Token(Token = "0x600095E")]
	[Address(RVA = "0x40FD480", Offset = "0x40FD480", VA = "0x40FD480")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}
}

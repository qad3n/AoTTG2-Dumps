// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCustomServerWarning
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCustomServerWarning.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002BE")]
internal sealed class AottgCustomServerWarning : AottgComponent
{
	[Token(Token = "0x4000DF0")]
	private const string VisibleKey = "multiplayer.customServerWarning.visible";

	[Token(Token = "0x4000DF1")]
	private const string TextKey = "multiplayer.customServerWarning.text";

	[Token(Token = "0x4000DF2")]
	private const float CardPadding = 14f;

	[Token(Token = "0x4000DF3")]
	private const float IconSize = 28f;

	[Token(Token = "0x4000DF4")]
	private const float BorderWidth = 7f;

	[Token(Token = "0x4000DF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000DF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchLayoutDefinition _placement;

	[Token(Token = "0x6001095")]
	[Address(RVA = "0x57C6380", Offset = "0x57C5380", VA = "0x57C6380")]
	public AottgCustomServerWarning(string id, [Optional] GisketchLayoutDefinition placement)
	{
	}

	[Token(Token = "0x6001096")]
	[Address(RVA = "0x57C63C0", Offset = "0x57C53C0", VA = "0x57C63C0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001097")]
	[Address(RVA = "0x57C6600", Offset = "0x57C5600", VA = "0x57C6600")]
	public static void Sync()
	{
	}

	[Token(Token = "0x6001098")]
	[Address(RVA = "0x57C66A0", Offset = "0x57C56A0", VA = "0x57C66A0")]
	private static string Message()
	{
		return null;
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x57C68A0", Offset = "0x57C58A0", VA = "0x57C68A0")]
	private static string Text(string item)
	{
		return null;
	}
}

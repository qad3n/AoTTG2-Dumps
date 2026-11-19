// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRoomListOptionsPopover
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListOptionsPopover.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002D8")]
[AottgPopover("room-list-options", DismissOnBackdrop = true)]
public sealed class AottgRoomListOptionsPopover : AottgPopover
{
	[Token(Token = "0x4000E6A")]
	public const string Id = "room-list-options";

	[Token(Token = "0x170001F2")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001146")]
		[Address(RVA = "0x57D18C0", Offset = "0x57D08C0", VA = "0x57D18C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001147")]
	[Address(RVA = "0x57D1990", Offset = "0x57D0990", VA = "0x57D1990", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6001148")]
	[Address(RVA = "0x57D1A60", Offset = "0x57D0A60", VA = "0x57D1A60")]
	private static void Option(AottgUi ui, string id, string labelKey, BoolSetting setting)
	{
	}

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x57D1BD0", Offset = "0x57D0BD0", VA = "0x57D1BD0")]
	public AottgRoomListOptionsPopover()
	{
	}
}

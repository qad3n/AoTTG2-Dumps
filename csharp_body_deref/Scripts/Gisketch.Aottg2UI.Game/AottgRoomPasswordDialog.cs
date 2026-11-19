// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRoomPasswordDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRoomPasswordDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002DC")]
[AottgDialog("multiplayer-room-password")]
public sealed class AottgRoomPasswordDialog : AottgDialog
{
	[Token(Token = "0x4000E73")]
	public const string Id = "multiplayer-room-password";

	[Token(Token = "0x4000E74")]
	private const string InputId = "multiplayer-room-password-input";

	[Token(Token = "0x4000E75")]
	[FieldOffset(Offset = "0x0")]
	private static string _password;

	[Token(Token = "0x170001F3")]
	protected override string Title
	{
		[Token(Token = "0x6001153")]
		[Address(RVA = "0x57D1E90", Offset = "0x57D0E90", VA = "0x57D1E90", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001F4")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6001154")]
		[Address(RVA = "0x57D1EF0", Offset = "0x57D0EF0", VA = "0x57D1EF0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F5")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001155")]
		[Address(RVA = "0x57D1F00", Offset = "0x57D0F00", VA = "0x57D1F00", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001156")]
	[Address(RVA = "0x57D1FC0", Offset = "0x57D0FC0", VA = "0x57D1FC0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6001157")]
	[Address(RVA = "0x57D2430", Offset = "0x57D1430", VA = "0x57D2430", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6001158")]
	[Address(RVA = "0x57D2500", Offset = "0x57D1500", VA = "0x57D2500")]
	private static void Join(GisketchActionContext context)
	{
	}

	[Token(Token = "0x6001159")]
	[Address(RVA = "0x57D2650", Offset = "0x57D1650", VA = "0x57D2650")]
	public AottgRoomPasswordDialog()
	{
	}
}

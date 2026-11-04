// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangeAvatarDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B6")]
[AottgDialog("profile-change-avatar")]
public sealed class AottgChangeAvatarDialog : AottgDialog
{
	[Token(Token = "0x4000DFC")]
	public const string Id = "profile-change-avatar";

	[Token(Token = "0x4000DFD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgProfilePreset[] Avatars;

	[Token(Token = "0x4000DFE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AottgProfilePreset[] Banners;

	[Token(Token = "0x170001D7")]
	protected override string Title
	{
		[Token(Token = "0x60010E2")]
		[Address(RVA = "0x1E0E1E0", Offset = "0x1E0C7E0", VA = "0x181E0E1E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D8")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60010E3")]
		[Address(RVA = "0x1E0E1B0", Offset = "0x1E0C7B0", VA = "0x181E0E1B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D9")]
	protected override string RootStyle
	{
		[Token(Token = "0x60010E4")]
		[Address(RVA = "0x1E0E180", Offset = "0x1E0C780", VA = "0x181E0E180", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DA")]
	protected override string BodyStyle
	{
		[Token(Token = "0x60010E5")]
		[Address(RVA = "0x1E0E140", Offset = "0x1E0C740", VA = "0x181E0E140", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DB")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60010E6")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DC")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x60010E7")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001DD")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60010E8")]
		[Address(RVA = "0x1E0E170", Offset = "0x1E0C770", VA = "0x181E0E170", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001DE")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60010E9")]
		[Address(RVA = "0x1E0E130", Offset = "0x1E0C730", VA = "0x181E0E130", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x1E0DB60", Offset = "0x1E0C160", VA = "0x181E0DB60", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "19")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x60010EC")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgChangeAvatarDialog()
	{
	}
}

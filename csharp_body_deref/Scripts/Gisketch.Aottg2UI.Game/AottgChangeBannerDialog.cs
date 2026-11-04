// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangeBannerDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangeBannerDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B7")]
[AottgDialog("profile-change-banner")]
public sealed class AottgChangeBannerDialog : AottgDialog
{
	[Token(Token = "0x4000DFF")]
	public const string Id = "profile-change-banner";

	[Token(Token = "0x4000E00")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AottgProfilePreset[] Avatars;

	[Token(Token = "0x4000E01")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AottgProfilePreset[] Banners;

	[Token(Token = "0x170001DF")]
	protected override string Title
	{
		[Token(Token = "0x60010EE")]
		[Address(RVA = "0x1E0E8B0", Offset = "0x1E0CEB0", VA = "0x181E0E8B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E0")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60010EF")]
		[Address(RVA = "0x1E0E880", Offset = "0x1E0CE80", VA = "0x181E0E880", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E1")]
	protected override string RootStyle
	{
		[Token(Token = "0x60010F0")]
		[Address(RVA = "0x1E0E850", Offset = "0x1E0CE50", VA = "0x181E0E850", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E2")]
	protected override string BodyStyle
	{
		[Token(Token = "0x60010F1")]
		[Address(RVA = "0x1E0E820", Offset = "0x1E0CE20", VA = "0x181E0E820", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E3")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60010F2")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E4")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x60010F3")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001E5")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60010F4")]
		[Address(RVA = "0x1E0E170", Offset = "0x1E0C770", VA = "0x181E0E170", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E6")]
	protected override GisketchLayoutDefinition BodyLayout
	{
		[Token(Token = "0x60010F5")]
		[Address(RVA = "0x1E0E130", Offset = "0x1E0C730", VA = "0x181E0E130", Slot = "17")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x1E0E250", Offset = "0x1E0C850", VA = "0x181E0E250", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60010F7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "19")]
	protected override void BuildHeader(AottgUi header)
	{
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgChangeBannerDialog()
	{
	}
}

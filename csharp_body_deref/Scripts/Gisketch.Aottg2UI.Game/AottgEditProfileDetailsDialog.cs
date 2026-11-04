// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgEditProfileDetailsDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgEditProfileDetailsDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002B8")]
[AottgDialog("profile-edit-details")]
public sealed class AottgEditProfileDetailsDialog : AottgDialog
{
	[Token(Token = "0x4000E02")]
	public const string Id = "profile-edit-details";

	[Token(Token = "0x170001E7")]
	protected override string Title
	{
		[Token(Token = "0x60010FA")]
		[Address(RVA = "0x1E0FFF0", Offset = "0x1E0E5F0", VA = "0x181E0FFF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E8")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60010FB")]
		[Address(RVA = "0x1E0FFC0", Offset = "0x1E0E5C0", VA = "0x181E0FFC0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001E9")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x60010FC")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EA")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60010FD")]
		[Address(RVA = "0x1E0FEC0", Offset = "0x1E0E4C0", VA = "0x181E0FEC0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x1E0F660", Offset = "0x1E0DC60", VA = "0x181E0F660", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x1E0F880", Offset = "0x1E0DE80", VA = "0x181E0F880", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x1E0F320", Offset = "0x1E0D920", VA = "0x181E0F320")]
	private static void AccountNameInput(AottgUi ui)
	{
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x1E0FC00", Offset = "0x1E0E200", VA = "0x181E0FC00")]
	private static void LocalBioImport(AottgUi ui)
	{
	}

	[Token(Token = "0x6001102")]
	[Address(RVA = "0x1E0F9D0", Offset = "0x1E0DFD0", VA = "0x181E0F9D0")]
	private static void LabeledTextArea(AottgUi ui, string labelKey, string label, string id, string placeholderKey, string placeholder)
	{
	}

	[Token(Token = "0x6001103")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgEditProfileDetailsDialog()
	{
	}
}

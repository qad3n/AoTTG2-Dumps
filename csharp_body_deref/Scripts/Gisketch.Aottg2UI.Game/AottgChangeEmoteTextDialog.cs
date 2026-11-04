// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgChangeEmoteTextDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgChangeEmoteTextDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002A4")]
[AottgDialog("profile-change-emote-text")]
public sealed class AottgChangeEmoteTextDialog : AottgDialog
{
	[Token(Token = "0x4000DBC")]
	public const string Id = "profile-change-emote-text";

	[Token(Token = "0x4000DBD")]
	public const string InputId = "profile-change-emote-text-input";

	[Token(Token = "0x170001CE")]
	protected override string Title
	{
		[Token(Token = "0x6001089")]
		[Address(RVA = "0x1E0F2B0", Offset = "0x1E0D8B0", VA = "0x181E0F2B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CF")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600108A")]
		[Address(RVA = "0x1E0F280", Offset = "0x1E0D880", VA = "0x181E0F280", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D0")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x600108B")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D1")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600108C")]
		[Address(RVA = "0x1E0F180", Offset = "0x1E0D780", VA = "0x181E0F180", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x1E0ED00", Offset = "0x1E0D300", VA = "0x181E0ED00", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600108E")]
	[Address(RVA = "0x1E0EFD0", Offset = "0x1E0D5D0", VA = "0x181E0EFD0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x600108F")]
	[Address(RVA = "0x1E0F090", Offset = "0x1E0D690", VA = "0x181E0F090")]
	private static string TextValue(int index)
	{
		return null;
	}

	[Token(Token = "0x6001090")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgChangeEmoteTextDialog()
	{
	}
}

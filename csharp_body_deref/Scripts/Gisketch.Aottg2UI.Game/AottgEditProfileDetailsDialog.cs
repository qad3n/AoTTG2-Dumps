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

[Token(Token = "0x2000315")]
[AottgDialog("profile-edit-details")]
public sealed class AottgEditProfileDetailsDialog : AottgDialog
{
	[Token(Token = "0x4000F95")]
	public const string Id = "profile-edit-details";

	[Token(Token = "0x17000224")]
	protected override string Title
	{
		[Token(Token = "0x600134B")]
		[Address(RVA = "0x57FDA80", Offset = "0x57FCA80", VA = "0x57FDA80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000225")]
	protected override string TitleIcon
	{
		[Token(Token = "0x600134C")]
		[Address(RVA = "0x57FDAE0", Offset = "0x57FCAE0", VA = "0x57FDAE0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000226")]
	protected override bool GuardUnsavedChanges
	{
		[Token(Token = "0x600134D")]
		[Address(RVA = "0x57FDB10", Offset = "0x57FCB10", VA = "0x57FDB10", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000227")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600134E")]
		[Address(RVA = "0x57FDB20", Offset = "0x57FCB20", VA = "0x57FDB20", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x57FDBE0", Offset = "0x57FCBE0", VA = "0x57FDBE0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6001350")]
	[Address(RVA = "0x57FE5C0", Offset = "0x57FD5C0", VA = "0x57FE5C0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6001351")]
	[Address(RVA = "0x57FDEB0", Offset = "0x57FCEB0", VA = "0x57FDEB0")]
	private static void AccountNameInput(AottgUi ui)
	{
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x57FE190", Offset = "0x57FD190", VA = "0x57FE190")]
	private static void LocalBioImport(AottgUi ui)
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x57FE3D0", Offset = "0x57FD3D0", VA = "0x57FE3D0")]
	private static void LabeledTextArea(AottgUi ui, string labelKey, string id, string placeholderKey)
	{
	}

	[Token(Token = "0x6001354")]
	[Address(RVA = "0x57FE710", Offset = "0x57FD710", VA = "0x57FE710")]
	public AottgEditProfileDetailsDialog()
	{
	}
}

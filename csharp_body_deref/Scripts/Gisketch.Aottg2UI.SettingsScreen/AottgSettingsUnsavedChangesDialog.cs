// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsUnsavedChangesDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsUnsavedChangesDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001AC")]
[AottgDialog("settings-unsaved-changes")]
public sealed class AottgSettingsUnsavedChangesDialog : AottgDialog
{
	[Token(Token = "0x20001AD")]
	public enum ActionKind
	{
		[Token(Token = "0x4000920")]
		Back,
		[Token(Token = "0x4000921")]
		Load
	}

	[Token(Token = "0x400091D")]
	public const string Id = "settings-unsaved-changes";

	[Token(Token = "0x400091E")]
	[FieldOffset(Offset = "0x0")]
	private static ActionKind _actionKind;

	[Token(Token = "0x17000116")]
	protected override string Title
	{
		[Token(Token = "0x6000967")]
		[Address(RVA = "0x5D54F00", Offset = "0x5D53F00", VA = "0x5D54F00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000117")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000968")]
		[Address(RVA = "0x5D54F60", Offset = "0x5D53F60", VA = "0x5D54F60", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000118")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000969")]
		[Address(RVA = "0x5D54F70", Offset = "0x5D53F70", VA = "0x5D54F70", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600096A")]
	[Address(RVA = "0x5D55030", Offset = "0x5D54030", VA = "0x5D55030")]
	public static void Open(GisketchUIRoot root, ActionKind actionKind)
	{
	}

	[Token(Token = "0x600096B")]
	[Address(RVA = "0x5D550B0", Offset = "0x5D540B0", VA = "0x5D550B0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600096C")]
	[Address(RVA = "0x5D553D0", Offset = "0x5D543D0", VA = "0x5D553D0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x600096D")]
	[Address(RVA = "0x5D552E0", Offset = "0x5D542E0", VA = "0x5D552E0")]
	private static string Message(int count)
	{
		return null;
	}

	[Token(Token = "0x600096E")]
	[Address(RVA = "0x5D55510", Offset = "0x5D54510", VA = "0x5D55510")]
	public AottgSettingsUnsavedChangesDialog()
	{
	}
}

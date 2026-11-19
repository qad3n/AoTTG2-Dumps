// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchUnsavedChangesDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x20000A6")]
[AottgDialog("gisketch-unsaved-changes", DismissOnBackdrop = false)]
public sealed class GisketchUnsavedChangesDialog : AottgDialog
{
	[Token(Token = "0x400038C")]
	public const string Id = "gisketch-unsaved-changes";

	[Token(Token = "0x17000095")]
	protected override string Title
	{
		[Token(Token = "0x6000527")]
		[Address(RVA = "0x527B210", Offset = "0x527A210", VA = "0x527B210", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000096")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000528")]
		[Address(RVA = "0x527B270", Offset = "0x527A270", VA = "0x527B270", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000097")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000529")]
		[Address(RVA = "0x527B280", Offset = "0x527A280", VA = "0x527B280", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600052A")]
	[Address(RVA = "0x527B3A0", Offset = "0x527A3A0", VA = "0x527B3A0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x600052B")]
	[Address(RVA = "0x527B3F0", Offset = "0x527A3F0", VA = "0x527B3F0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x600052C")]
	[Address(RVA = "0x527B4B0", Offset = "0x527A4B0", VA = "0x527B4B0")]
	private static void Discard(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600052D")]
	[Address(RVA = "0x527B510", Offset = "0x527A510", VA = "0x527B510")]
	public GisketchUnsavedChangesDialog()
	{
	}
}

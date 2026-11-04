// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.GisketchUnsavedChangesDialog
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/GisketchUnsavedChangesDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x20000A0")]
[AottgDialog("gisketch-unsaved-changes", DismissOnBackdrop = false)]
public sealed class GisketchUnsavedChangesDialog : AottgDialog
{
	[Token(Token = "0x4000365")]
	public const string Id = "gisketch-unsaved-changes";

	[Token(Token = "0x17000095")]
	protected override string Title
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x18F33C0", Offset = "0x18F19C0", VA = "0x1818F33C0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000096")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000097")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x18F32C0", Offset = "0x18F18C0", VA = "0x1818F32C0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004DD")]
	[Address(RVA = "0x18F3140", Offset = "0x18F1740", VA = "0x1818F3140", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x18F31A0", Offset = "0x18F17A0", VA = "0x1818F31A0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x18F3260", Offset = "0x18F1860", VA = "0x1818F3260")]
	private static void Discard(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public GisketchUnsavedChangesDialog()
	{
	}
}

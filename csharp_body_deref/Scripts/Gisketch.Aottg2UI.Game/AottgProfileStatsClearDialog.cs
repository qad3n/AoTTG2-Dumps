// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileStatsClearDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using GameProgress;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200032B")]
[AottgDialog("profile-stats-clear-confirm")]
public sealed class AottgProfileStatsClearDialog : AottgDialog
{
	[Token(Token = "0x4000FE9")]
	public const string Id = "profile-stats-clear-confirm";

	[Token(Token = "0x4000FEA")]
	[FieldOffset(Offset = "0x0")]
	private static GameStatRecord? _record;

	[Token(Token = "0x4000FEB")]
	[FieldOffset(Offset = "0x8")]
	private static string _label;

	[Token(Token = "0x1700022C")]
	protected override string Title
	{
		[Token(Token = "0x60013E0")]
		[Address(RVA = "0x5809910", Offset = "0x5808910", VA = "0x5809910", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700022D")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x60013E1")]
		[Address(RVA = "0x5809A80", Offset = "0x5808A80", VA = "0x5809A80", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x1700022E")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60013E2")]
		[Address(RVA = "0x5809A90", Offset = "0x5808A90", VA = "0x5809A90", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700022F")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60013E3")]
		[Address(RVA = "0x5809AA0", Offset = "0x5808AA0", VA = "0x5809AA0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013E4")]
	[Address(RVA = "0x5809B60", Offset = "0x5808B60", VA = "0x5809B60")]
	internal static void Open(GisketchActionContext context, GameStatRecord record, string label)
	{
	}

	[Token(Token = "0x60013E5")]
	[Address(RVA = "0x5809CD0", Offset = "0x5808CD0", VA = "0x5809CD0")]
	internal static void OpenAll(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60013E6")]
	[Address(RVA = "0x5809DA0", Offset = "0x5808DA0", VA = "0x5809DA0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60013E7")]
	[Address(RVA = "0x5809F40", Offset = "0x5808F40", VA = "0x5809F40", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60013E8")]
	[Address(RVA = "0x5809A00", Offset = "0x5808A00", VA = "0x5809A00")]
	private static string Text(string item)
	{
		return null;
	}

	[Token(Token = "0x60013E9")]
	[Address(RVA = "0x5809C60", Offset = "0x5808C60", VA = "0x5809C60")]
	private static void Show(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60013EA")]
	[Address(RVA = "0x580A050", Offset = "0x5809050", VA = "0x580A050")]
	private static void Confirm(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60013EB")]
	[Address(RVA = "0x580A190", Offset = "0x5809190", VA = "0x580A190")]
	public AottgProfileStatsClearDialog()
	{
	}
}

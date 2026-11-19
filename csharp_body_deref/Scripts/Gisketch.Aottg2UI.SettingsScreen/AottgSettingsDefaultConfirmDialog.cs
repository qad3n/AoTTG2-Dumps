// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsDefaultConfirmDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsDefaultConfirmDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000182")]
[AottgDialog("settings-default-confirm")]
public sealed class AottgSettingsDefaultConfirmDialog : AottgDialog
{
	[Token(Token = "0x40008A5")]
	public const string Id = "settings-default-confirm";

	[Token(Token = "0x1700010C")]
	protected override string Title
	{
		[Token(Token = "0x600085E")]
		[Address(RVA = "0x5D3B210", Offset = "0x5D3A210", VA = "0x5D3B210", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700010D")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x600085F")]
		[Address(RVA = "0x5D3B270", Offset = "0x5D3A270", VA = "0x5D3B270", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x1700010E")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000860")]
		[Address(RVA = "0x5D3B280", Offset = "0x5D3A280", VA = "0x5D3B280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010F")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000861")]
		[Address(RVA = "0x5D3B290", Offset = "0x5D3A290", VA = "0x5D3B290", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x5D3B350", Offset = "0x5D3A350", VA = "0x5D3B350", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000863")]
	[Address(RVA = "0x5D3B3A0", Offset = "0x5D3A3A0", VA = "0x5D3B3A0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x5D3B430", Offset = "0x5D3A430", VA = "0x5D3B430")]
	public AottgSettingsDefaultConfirmDialog()
	{
	}
}

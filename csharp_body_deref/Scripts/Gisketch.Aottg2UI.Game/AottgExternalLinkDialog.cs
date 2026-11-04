// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001F0")]
[AottgDialog("external-link-confirm")]
public sealed class AottgExternalLinkDialog : AottgDialog
{
	[Token(Token = "0x4000A63")]
	public const string Id = "external-link-confirm";

	[Token(Token = "0x17000155")]
	protected override string Title
	{
		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x23AD6E0", Offset = "0x23ABCE0", VA = "0x1823AD6E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000156")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x23AD6B0", Offset = "0x23ABCB0", VA = "0x1823AD6B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000157")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000B63")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000158")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000B64")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000159")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000B65")]
		[Address(RVA = "0x23AD5B0", Offset = "0x23ABBB0", VA = "0x1823AD5B0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x23AD240", Offset = "0x23AB840", VA = "0x1823AD240", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x23AD4F0", Offset = "0x23ABAF0", VA = "0x1823AD4F0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public AottgExternalLinkDialog()
	{
	}
}

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

[Token(Token = "0x2000161")]
[AottgDialog("external-link-confirm")]
public sealed class AottgExternalLinkDialog : AottgDialog
{
	[Token(Token = "0x40007BF")]
	public const string Id = "external-link-confirm";

	[Token(Token = "0x1700011A")]
	protected override string Title
	{
		[Token(Token = "0x60007C7")]
		[Address(RVA = "0x43EB0F0", Offset = "0x43EB0F0", VA = "0x43EB0F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011B")]
	protected override string TitleIcon
	{
		[Token(Token = "0x60007C8")]
		[Address(RVA = "0x43EB120", Offset = "0x43EB120", VA = "0x43EB120", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011C")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x60007C9")]
		[Address(RVA = "0x43EB150", Offset = "0x43EB150", VA = "0x43EB150", Slot = "13")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x1700011D")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x60007CA")]
		[Address(RVA = "0x43EB160", Offset = "0x43EB160", VA = "0x43EB160", Slot = "12")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700011E")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x60007CB")]
		[Address(RVA = "0x43EB170", Offset = "0x43EB170", VA = "0x43EB170", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007CC")]
	[Address(RVA = "0x43EB240", Offset = "0x43EB240", VA = "0x43EB240", Slot = "19")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x60007CD")]
	[Address(RVA = "0x43EB480", Offset = "0x43EB480", VA = "0x43EB480", Slot = "20")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x60007CE")]
	[Address(RVA = "0x43EB510", Offset = "0x43EB510", VA = "0x43EB510")]
	public AottgExternalLinkDialog()
	{
	}
}

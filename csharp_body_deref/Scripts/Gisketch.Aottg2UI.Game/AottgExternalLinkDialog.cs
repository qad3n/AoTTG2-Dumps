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

[Token(Token = "0x200020A")]
[AottgDialog("external-link-confirm")]
public sealed class AottgExternalLinkDialog : AottgDialog
{
	[Token(Token = "0x4000ADB")]
	public const string Id = "external-link-confirm";

	[Token(Token = "0x1700015E")]
	protected override string Title
	{
		[Token(Token = "0x6000C25")]
		[Address(RVA = "0x5D85100", Offset = "0x5D84100", VA = "0x5D85100", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000C26")]
		[Address(RVA = "0x5D85160", Offset = "0x5D84160", VA = "0x5D85160", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000160")]
	protected override AottgButtonVariant Variant
	{
		[Token(Token = "0x6000C27")]
		[Address(RVA = "0x5D85190", Offset = "0x5D84190", VA = "0x5D85190", Slot = "14")]
		get
		{
			return default(AottgButtonVariant);
		}
	}

	[Token(Token = "0x17000161")]
	protected override bool BodyScrollable
	{
		[Token(Token = "0x6000C28")]
		[Address(RVA = "0x5D851A0", Offset = "0x5D841A0", VA = "0x5D851A0", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000162")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000C29")]
		[Address(RVA = "0x5D851B0", Offset = "0x5D841B0", VA = "0x5D851B0", Slot = "15")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x5D85270", Offset = "0x5D84270", VA = "0x5D85270", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x5D854A0", Offset = "0x5D844A0", VA = "0x5D854A0", Slot = "21")]
	protected override void BuildFooter(AottgDialogFooter footer)
	{
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x5D85530", Offset = "0x5D84530", VA = "0x5D85530")]
	public AottgExternalLinkDialog()
	{
	}
}

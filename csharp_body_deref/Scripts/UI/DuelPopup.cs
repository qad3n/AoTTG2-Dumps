using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000637")]
internal class DuelPopup : BasePopup
{
	[Token(Token = "0x4001EAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x17000C03")]
	protected override string Title
	{
		[Token(Token = "0x6003EE9")]
		[Address(RVA = "0x3FE6970", Offset = "0x3FE6970", VA = "0x3FE6970", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C04")]
	protected override float Width
	{
		[Token(Token = "0x6003EEA")]
		[Address(RVA = "0x3FE6990", Offset = "0x3FE6990", VA = "0x3FE6990", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C05")]
	protected override float Height
	{
		[Token(Token = "0x6003EEB")]
		[Address(RVA = "0x3FE69A0", Offset = "0x3FE69A0", VA = "0x3FE69A0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C06")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6003EEC")]
		[Address(RVA = "0x3FE69B0", Offset = "0x3FE69B0", VA = "0x3FE69B0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C07")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6003EED")]
		[Address(RVA = "0x3FE69C0", Offset = "0x3FE69C0", VA = "0x3FE69C0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C08")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6003EEE")]
		[Address(RVA = "0x3FE69D0", Offset = "0x3FE69D0", VA = "0x3FE69D0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003EEF")]
	[Address(RVA = "0x3FE6A00", Offset = "0x3FE6A00", VA = "0x3FE6A00", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003EF0")]
	[Address(RVA = "0x3FE6B50", Offset = "0x3FE6B50", VA = "0x3FE6B50", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003EF1")]
	[Address(RVA = "0x3FE6B60", Offset = "0x3FE6B60", VA = "0x3FE6B60", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6003EF2")]
	[Address(RVA = "0x3FE6E10", Offset = "0x3FE6E10", VA = "0x3FE6E10", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003EF3")]
	[Address(RVA = "0x3FE6F00", Offset = "0x3FE6F00", VA = "0x3FE6F00", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003EF4")]
	[Address(RVA = "0x3FE6A20", Offset = "0x3FE6A20", VA = "0x3FE6A20")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6003EF5")]
	[Address(RVA = "0x3FE6F10", Offset = "0x3FE6F10", VA = "0x3FE6F10")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003EF6")]
	[Address(RVA = "0x3FE6FF0", Offset = "0x3FE6FF0", VA = "0x3FE6FF0")]
	public DuelPopup()
	{
	}
}

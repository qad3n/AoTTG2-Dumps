using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000589")]
internal class CreateGameSelectMapPopup : BasePopup
{
	[Token(Token = "0x4001B1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public StringSetting SearchSetting;

	[Token(Token = "0x4001B20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private InputSettingElement _searchInput;

	[Token(Token = "0x17000B03")]
	protected override string Title
	{
		[Token(Token = "0x6003977")]
		[Address(RVA = "0x3F71840", Offset = "0x3F71840", VA = "0x3F71840", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B04")]
	protected override float Width
	{
		[Token(Token = "0x6003978")]
		[Address(RVA = "0x3F71860", Offset = "0x3F71860", VA = "0x3F71860", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B05")]
	protected override float Height
	{
		[Token(Token = "0x6003979")]
		[Address(RVA = "0x3F71870", Offset = "0x3F71870", VA = "0x3F71870", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B06")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600397A")]
		[Address(RVA = "0x3F71880", Offset = "0x3F71880", VA = "0x3F71880", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B07")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600397B")]
		[Address(RVA = "0x3F71890", Offset = "0x3F71890", VA = "0x3F71890", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B08")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600397C")]
		[Address(RVA = "0x3F718A0", Offset = "0x3F718A0", VA = "0x3F718A0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600397D")]
	[Address(RVA = "0x3F718D0", Offset = "0x3F718D0", VA = "0x3F718D0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x600397E")]
	[Address(RVA = "0x3F719B0", Offset = "0x3F719B0", VA = "0x3F719B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600397F")]
	[Address(RVA = "0x3F71C40", Offset = "0x3F71C40", VA = "0x3F71C40", Slot = "59")]
	protected virtual string[] GetCategories()
	{
		return null;
	}

	[Token(Token = "0x6003980")]
	[Address(RVA = "0x3F71DC0", Offset = "0x3F71DC0", VA = "0x3F71DC0", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6003981")]
	[Address(RVA = "0x3F71FE0", Offset = "0x3F71FE0", VA = "0x3F71FE0")]
	protected void OnTopBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003982")]
	[Address(RVA = "0x3F72000", Offset = "0x3F72000", VA = "0x3F72000", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003983")]
	[Address(RVA = "0x3F721F0", Offset = "0x3F721F0", VA = "0x3F721F0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003984")]
	[Address(RVA = "0x3F72210", Offset = "0x3F72210", VA = "0x3F72210")]
	public CreateGameSelectMapPopup()
	{
	}
}

using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000667")]
internal class TutorialPopup : BasePopup
{
	[Token(Token = "0x4001F3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string _basicTutorials;

	[Token(Token = "0x4001F3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string _advancedTutorials;

	[Token(Token = "0x4001F40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private string _miscTutorials;

	[Token(Token = "0x17000C78")]
	protected override string Title
	{
		[Token(Token = "0x600405B")]
		[Address(RVA = "0x3FFFE20", Offset = "0x3FFFE20", VA = "0x3FFFE20", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000C79")]
	protected override float Width
	{
		[Token(Token = "0x600405C")]
		[Address(RVA = "0x3FFFEC0", Offset = "0x3FFFEC0", VA = "0x3FFFEC0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C7A")]
	protected override float Height
	{
		[Token(Token = "0x600405D")]
		[Address(RVA = "0x3FFFED0", Offset = "0x3FFFED0", VA = "0x3FFFED0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C7B")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600405E")]
		[Address(RVA = "0x3FFFEE0", Offset = "0x3FFFEE0", VA = "0x3FFFEE0", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C7C")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600405F")]
		[Address(RVA = "0x3FFFEF0", Offset = "0x3FFFEF0", VA = "0x3FFFEF0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C7D")]
	protected override bool UseSound
	{
		[Token(Token = "0x6004060")]
		[Address(RVA = "0x3FFFF00", Offset = "0x3FFFF00", VA = "0x3FFFF00", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004061")]
	[Address(RVA = "0x3FFFF10", Offset = "0x3FFFF10", VA = "0x3FFFF10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004062")]
	[Address(RVA = "0x40002F0", Offset = "0x40002F0", VA = "0x40002F0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6004063")]
	[Address(RVA = "0x4000770", Offset = "0x4000770", VA = "0x4000770")]
	public TutorialPopup()
	{
	}
}

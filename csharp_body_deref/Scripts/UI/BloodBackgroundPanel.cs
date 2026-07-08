using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005C3")]
internal class BloodBackgroundPanel : BasePopup
{
	[Token(Token = "0x4001BD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected RawImage _loadingBackground;

	[Token(Token = "0x17000B2F")]
	protected override string Title
	{
		[Token(Token = "0x6003AED")]
		[Address(RVA = "0x3F8D6E0", Offset = "0x3F8D6E0", VA = "0x3F8D6E0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B30")]
	protected override float Width
	{
		[Token(Token = "0x6003AEE")]
		[Address(RVA = "0x3F8D700", Offset = "0x3F8D700", VA = "0x3F8D700", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B31")]
	protected override float Height
	{
		[Token(Token = "0x6003AEF")]
		[Address(RVA = "0x3F8D710", Offset = "0x3F8D710", VA = "0x3F8D710", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B32")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003AF0")]
		[Address(RVA = "0x3F8D720", Offset = "0x3F8D720", VA = "0x3F8D720", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B33")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003AF1")]
		[Address(RVA = "0x3F8D730", Offset = "0x3F8D730", VA = "0x3F8D730", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B34")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003AF2")]
		[Address(RVA = "0x3F8D740", Offset = "0x3F8D740", VA = "0x3F8D740", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000B35")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003AF3")]
		[Address(RVA = "0x3F8D750", Offset = "0x3F8D750", VA = "0x3F8D750", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003AF4")]
	[Address(RVA = "0x3F8D760", Offset = "0x3F8D760", VA = "0x3F8D760", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003AF5")]
	[Address(RVA = "0x3F8D830", Offset = "0x3F8D830", VA = "0x3F8D830", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003AF6")]
	[Address(RVA = "0x3F8D980", Offset = "0x3F8D980", VA = "0x3F8D980")]
	public BloodBackgroundPanel()
	{
	}
}

using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000629")]
internal class LoadingProgressPanel : BasePopup
{
	[Token(Token = "0x4001E5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected float SliderWidth;

	[Token(Token = "0x4001E5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xAC")]
	protected float SliderHeight;

	[Token(Token = "0x4001E5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _label;

	[Token(Token = "0x4001E5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Slider _slider;

	[Token(Token = "0x17000BE6")]
	protected override string Title
	{
		[Token(Token = "0x6003E72")]
		[Address(RVA = "0x3FDD250", Offset = "0x3FDD250", VA = "0x3FDD250", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BE7")]
	protected override string ThemePanel
	{
		[Token(Token = "0x6003E73")]
		[Address(RVA = "0x3FDD2B0", Offset = "0x3FDD2B0", VA = "0x3FDD2B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BE8")]
	protected override float Width
	{
		[Token(Token = "0x6003E74")]
		[Address(RVA = "0x3FDD2E0", Offset = "0x3FDD2E0", VA = "0x3FDD2E0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BE9")]
	protected override float Height
	{
		[Token(Token = "0x6003E75")]
		[Address(RVA = "0x3FDD2F0", Offset = "0x3FDD2F0", VA = "0x3FDD2F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BEA")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003E76")]
		[Address(RVA = "0x3FDD300", Offset = "0x3FDD300", VA = "0x3FDD300", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BEB")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003E77")]
		[Address(RVA = "0x3FDD310", Offset = "0x3FDD310", VA = "0x3FDD310", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BEC")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6003E78")]
		[Address(RVA = "0x3FDD320", Offset = "0x3FDD320", VA = "0x3FDD320", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BED")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6003E79")]
		[Address(RVA = "0x3FDD330", Offset = "0x3FDD330", VA = "0x3FDD330", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BEE")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003E7A")]
		[Address(RVA = "0x3FDD340", Offset = "0x3FDD340", VA = "0x3FDD340", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BEF")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003E7B")]
		[Address(RVA = "0x3FDD350", Offset = "0x3FDD350", VA = "0x3FDD350", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BF0")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x6003E7C")]
		[Address(RVA = "0x3FDD360", Offset = "0x3FDD360", VA = "0x3FDD360", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000BF1")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003E7D")]
		[Address(RVA = "0x3FDD370", Offset = "0x3FDD370", VA = "0x3FDD370", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000BF2")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003E7E")]
		[Address(RVA = "0x3FDD380", Offset = "0x3FDD380", VA = "0x3FDD380", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003E7F")]
	[Address(RVA = "0x3FDD390", Offset = "0x3FDD390", VA = "0x3FDD390", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E80")]
	[Address(RVA = "0x3FDCE30", Offset = "0x3FDCE30", VA = "0x3FDCE30")]
	public void ShowImmediate(float progress)
	{
	}

	[Token(Token = "0x6003E81")]
	[Address(RVA = "0x3FDCF20", Offset = "0x3FDCF20", VA = "0x3FDCF20")]
	public void Show(float progress)
	{
	}

	[Token(Token = "0x6003E82")]
	[Address(RVA = "0x3FDD8D0", Offset = "0x3FDD8D0", VA = "0x3FDD8D0")]
	private void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6003E83")]
	[Address(RVA = "0x3FDD930", Offset = "0x3FDD930", VA = "0x3FDD930")]
	public LoadingProgressPanel()
	{
	}
}

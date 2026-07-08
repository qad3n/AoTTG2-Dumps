using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000626")]
internal class LoadingBackgroundPanel : BasePopup
{
	[Token(Token = "0x4001E53")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected GameObject _background;

	[Token(Token = "0x4001E54")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public int BackgroundIndex;

	[Token(Token = "0x17000BDC")]
	protected override string Title
	{
		[Token(Token = "0x6003E59")]
		[Address(RVA = "0x3FDC190", Offset = "0x3FDC190", VA = "0x3FDC190", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BDD")]
	protected override float Width
	{
		[Token(Token = "0x6003E5A")]
		[Address(RVA = "0x3FDC1B0", Offset = "0x3FDC1B0", VA = "0x3FDC1B0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BDE")]
	protected override float Height
	{
		[Token(Token = "0x6003E5B")]
		[Address(RVA = "0x3FDC1C0", Offset = "0x3FDC1C0", VA = "0x3FDC1C0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BDF")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003E5C")]
		[Address(RVA = "0x3FDC1D0", Offset = "0x3FDC1D0", VA = "0x3FDC1D0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BE0")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003E5D")]
		[Address(RVA = "0x3FDC1E0", Offset = "0x3FDC1E0", VA = "0x3FDC1E0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BE1")]
	protected override bool ShowOnTop
	{
		[Token(Token = "0x6003E5E")]
		[Address(RVA = "0x3FDC1F0", Offset = "0x3FDC1F0", VA = "0x3FDC1F0", Slot = "52")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BE2")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003E5F")]
		[Address(RVA = "0x3FDC200", Offset = "0x3FDC200", VA = "0x3FDC200", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000BE3")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003E60")]
		[Address(RVA = "0x3FDC210", Offset = "0x3FDC210", VA = "0x3FDC210", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003E61")]
	[Address(RVA = "0x3FDC220", Offset = "0x3FDC220", VA = "0x3FDC220", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E62")]
	[Address(RVA = "0x3FDC2A0", Offset = "0x3FDC2A0", VA = "0x3FDC2A0")]
	public void SetRandomBackground(bool loading, bool seasonal = false)
	{
	}

	[Token(Token = "0x6003E63")]
	[Address(RVA = "0x3FDC460", Offset = "0x3FDC460", VA = "0x3FDC460")]
	public void SetBackground(bool loading, int backgroundIndex, string path = "MainBackgrounds")
	{
	}

	[Token(Token = "0x6003E64")]
	[Address(RVA = "0x3FDC960", Offset = "0x3FDC960", VA = "0x3FDC960", Slot = "58")]
	protected override float GetAnimationSpeed(float min, float max)
	{
		return default(float);
	}

	[Token(Token = "0x6003E65")]
	[Address(RVA = "0x3FDCA00", Offset = "0x3FDCA00", VA = "0x3FDCA00")]
	public LoadingBackgroundPanel()
	{
	}
}

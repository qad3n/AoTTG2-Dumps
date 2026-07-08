using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200061F")]
internal class StylebarPopup : BasePopup
{
	[Token(Token = "0x4001E2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _letterLabel;

	[Token(Token = "0x4001E2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _sentenceLabel;

	[Token(Token = "0x4001E2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x4001E2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _bottomLabel;

	[Token(Token = "0x4001E2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Image _bladeFill;

	[Token(Token = "0x4001E30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Image _bladeBackground;

	[Token(Token = "0x4001E31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Sprite[] _fillSprites;

	[Token(Token = "0x4001E32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Sprite[] _backgroundSprites;

	[Token(Token = "0x4001E33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private int _rank;

	[Token(Token = "0x17000BD1")]
	protected override string Title
	{
		[Token(Token = "0x6003E2A")]
		[Address(RVA = "0x3FD9230", Offset = "0x3FD9230", VA = "0x3FD9230", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BD2")]
	protected override float Width
	{
		[Token(Token = "0x6003E2B")]
		[Address(RVA = "0x3FD9250", Offset = "0x3FD9250", VA = "0x3FD9250", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD3")]
	protected override float Height
	{
		[Token(Token = "0x6003E2C")]
		[Address(RVA = "0x3FD9260", Offset = "0x3FD9260", VA = "0x3FD9260", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD4")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003E2D")]
		[Address(RVA = "0x3FD9270", Offset = "0x3FD9270", VA = "0x3FD9270", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD5")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003E2E")]
		[Address(RVA = "0x3FD9280", Offset = "0x3FD9280", VA = "0x3FD9280", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD6")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003E2F")]
		[Address(RVA = "0x3FD9290", Offset = "0x3FD9290", VA = "0x3FD9290", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000BD7")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003E30")]
		[Address(RVA = "0x3FD92A0", Offset = "0x3FD92A0", VA = "0x3FD92A0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003E31")]
	[Address(RVA = "0x3FD92B0", Offset = "0x3FD92B0", VA = "0x3FD92B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E32")]
	[Address(RVA = "0x3FD82D0", Offset = "0x3FD82D0", VA = "0x3FD82D0")]
	public void SetText(string letter, string sentence)
	{
	}

	[Token(Token = "0x6003E33")]
	[Address(RVA = "0x3FD95B0", Offset = "0x3FD95B0", VA = "0x3FD95B0")]
	public void SetColor(Color color)
	{
	}

	[Token(Token = "0x6003E34")]
	[Address(RVA = "0x3FD8270", Offset = "0x3FD8270", VA = "0x3FD8270")]
	public void SetScore(string score, string bottom)
	{
	}

	[Token(Token = "0x6003E35")]
	[Address(RVA = "0x3FD8250", Offset = "0x3FD8250", VA = "0x3FD8250")]
	public void SetFill(float fill)
	{
	}

	[Token(Token = "0x6003E36")]
	[Address(RVA = "0x3FD8330", Offset = "0x3FD8330", VA = "0x3FD8330")]
	public void SetRank(int rank)
	{
	}

	[Token(Token = "0x6003E37")]
	[Address(RVA = "0x3FD95E0", Offset = "0x3FD95E0", VA = "0x3FD95E0")]
	public StylebarPopup()
	{
	}
}

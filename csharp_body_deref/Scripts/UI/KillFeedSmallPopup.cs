using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005F8")]
internal class KillFeedSmallPopup : BasePopup
{
	[Token(Token = "0x4001D60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _leftLabel;

	[Token(Token = "0x4001D61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _rightLabel;

	[Token(Token = "0x4001D62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x4001D63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _backgroundLabel;

	[Token(Token = "0x4001D64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public float TimeLeft;

	[Token(Token = "0x4001D65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public string Killer;

	[Token(Token = "0x4001D66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	public string Victim;

	[Token(Token = "0x4001D67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public int Score;

	[Token(Token = "0x4001D68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public string Weapon;

	[Token(Token = "0x4001D69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private RawImage _image;

	[Token(Token = "0x17000B78")]
	protected override string Title
	{
		[Token(Token = "0x6003CCC")]
		[Address(RVA = "0x3FBE4C0", Offset = "0x3FBE4C0", VA = "0x3FBE4C0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B79")]
	protected override float Width
	{
		[Token(Token = "0x6003CCD")]
		[Address(RVA = "0x3FBE4E0", Offset = "0x3FBE4E0", VA = "0x3FBE4E0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B7A")]
	protected override float Height
	{
		[Token(Token = "0x6003CCE")]
		[Address(RVA = "0x3FBE4F0", Offset = "0x3FBE4F0", VA = "0x3FBE4F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B7B")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003CCF")]
		[Address(RVA = "0x3FBE500", Offset = "0x3FBE500", VA = "0x3FBE500", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B7C")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003CD0")]
		[Address(RVA = "0x3FBE510", Offset = "0x3FBE510", VA = "0x3FBE510", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B7D")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003CD1")]
		[Address(RVA = "0x3FBE520", Offset = "0x3FBE520", VA = "0x3FBE520", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000B7E")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003CD2")]
		[Address(RVA = "0x3FBE530", Offset = "0x3FBE530", VA = "0x3FBE530", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003CD3")]
	[Address(RVA = "0x3FBE540", Offset = "0x3FBE540", VA = "0x3FBE540", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003CD4")]
	[Address(RVA = "0x3FBE7D0", Offset = "0x3FBE7D0", VA = "0x3FBE7D0")]
	public void ShowImmediate(string killer, string victim, int score, string weapon, float timeLeft)
	{
	}

	[Token(Token = "0x6003CD5")]
	[Address(RVA = "0x3FBEA50", Offset = "0x3FBEA50", VA = "0x3FBEA50")]
	private string GetWeaponIcon(string weapon)
	{
		return null;
	}

	[Token(Token = "0x6003CD6")]
	[Address(RVA = "0x3FBEBC0", Offset = "0x3FBEBC0", VA = "0x3FBEBC0")]
	public KillFeedSmallPopup()
	{
	}
}

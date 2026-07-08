using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005F7")]
internal class KillFeedBigPopup : BasePopup
{
	[Token(Token = "0x4001D56")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _leftLabel;

	[Token(Token = "0x4001D57")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _rightLabel;

	[Token(Token = "0x4001D58")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x4001D59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _backgroundLabel;

	[Token(Token = "0x4001D5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RawImage _image;

	[Token(Token = "0x4001D5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public float TimeLeft;

	[Token(Token = "0x4001D5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	public string Killer;

	[Token(Token = "0x4001D5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public string Victim;

	[Token(Token = "0x4001D5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public int Score;

	[Token(Token = "0x4001D5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public string Weapon;

	[Token(Token = "0x17000B71")]
	protected override string Title
	{
		[Token(Token = "0x6003CC1")]
		[Address(RVA = "0x3FBDDA0", Offset = "0x3FBDDA0", VA = "0x3FBDDA0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B72")]
	protected override float Width
	{
		[Token(Token = "0x6003CC2")]
		[Address(RVA = "0x3FBDDC0", Offset = "0x3FBDDC0", VA = "0x3FBDDC0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B73")]
	protected override float Height
	{
		[Token(Token = "0x6003CC3")]
		[Address(RVA = "0x3FBDDD0", Offset = "0x3FBDDD0", VA = "0x3FBDDD0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B74")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003CC4")]
		[Address(RVA = "0x3FBDDE0", Offset = "0x3FBDDE0", VA = "0x3FBDDE0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B75")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003CC5")]
		[Address(RVA = "0x3FBDDF0", Offset = "0x3FBDDF0", VA = "0x3FBDDF0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B76")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003CC6")]
		[Address(RVA = "0x3FBDE00", Offset = "0x3FBDE00", VA = "0x3FBDE00", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000B77")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003CC7")]
		[Address(RVA = "0x3FBDE10", Offset = "0x3FBDE10", VA = "0x3FBDE10", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003CC8")]
	[Address(RVA = "0x3FBDE20", Offset = "0x3FBDE20", VA = "0x3FBDE20", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003CC9")]
	[Address(RVA = "0x3FBE0B0", Offset = "0x3FBE0B0", VA = "0x3FBE0B0")]
	public void Show(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x6003CCA")]
	[Address(RVA = "0x3FBE340", Offset = "0x3FBE340", VA = "0x3FBE340")]
	private string GetWeaponIcon(string weapon)
	{
		return null;
	}

	[Token(Token = "0x6003CCB")]
	[Address(RVA = "0x3FBE4B0", Offset = "0x3FBE4B0", VA = "0x3FBE4B0")]
	public KillFeedBigPopup()
	{
	}
}

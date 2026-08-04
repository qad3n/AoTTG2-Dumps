// ==================== AoTTG2 cross-reference ====================
// Type: UI.KillFeedBigPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/KillFeedBigPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillFeedBigPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000642")]
internal class KillFeedBigPopup : BasePopup
{
	[Token(Token = "0x4001E94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _leftLabel;

	[Token(Token = "0x4001E95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _rightLabel;

	[Token(Token = "0x4001E96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x4001E97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _backgroundLabel;

	[Token(Token = "0x4001E98")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private NameEffectApplier _leftStyle;

	[Token(Token = "0x4001E99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private NameEffectApplier _rightStyle;

	[Token(Token = "0x4001E9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private RawImage _image;

	[Token(Token = "0x4001E9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public float TimeLeft;

	[Token(Token = "0x4001E9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public string Killer;

	[Token(Token = "0x4001E9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public string Victim;

	[Token(Token = "0x4001E9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public int KillerActorNumber;

	[Token(Token = "0x4001E9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	public int VictimActorNumber;

	[Token(Token = "0x4001EA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public int Score;

	[Token(Token = "0x4001EA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public string Weapon;

	[Token(Token = "0x17000BE9")]
	protected override string Title
	{
		[Token(Token = "0x6003F0C")]
		[Address(RVA = "0x42CFFF0", Offset = "0x42CFFF0", VA = "0x42CFFF0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BEA")]
	protected override float Width
	{
		[Token(Token = "0x6003F0D")]
		[Address(RVA = "0x42D0010", Offset = "0x42D0010", VA = "0x42D0010", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BEB")]
	protected override float Height
	{
		[Token(Token = "0x6003F0E")]
		[Address(RVA = "0x42D0020", Offset = "0x42D0020", VA = "0x42D0020", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BEC")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003F0F")]
		[Address(RVA = "0x42D0030", Offset = "0x42D0030", VA = "0x42D0030", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BED")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003F10")]
		[Address(RVA = "0x42D0040", Offset = "0x42D0040", VA = "0x42D0040", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BEE")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003F11")]
		[Address(RVA = "0x42D0050", Offset = "0x42D0050", VA = "0x42D0050", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000BEF")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003F12")]
		[Address(RVA = "0x42D0060", Offset = "0x42D0060", VA = "0x42D0060", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003F13")]
	[Address(RVA = "0x42D0070", Offset = "0x42D0070", VA = "0x42D0070", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F14")]
	[Address(RVA = "0x42D03A0", Offset = "0x42D03A0", VA = "0x42D03A0")]
	public void Show(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x6003F15")]
	[Address(RVA = "0x42D03C0", Offset = "0x42D03C0", VA = "0x42D03C0")]
	public void Show(string killer, string victim, int score, string weapon, int killerActorNumber, int victimActorNumber)
	{
	}

	[Token(Token = "0x6003F16")]
	[Address(RVA = "0x42D06E0", Offset = "0x42D06E0", VA = "0x42D06E0")]
	private string GetWeaponIcon(string weapon)
	{
		return null;
	}

	[Token(Token = "0x6003F17")]
	[Address(RVA = "0x42D0850", Offset = "0x42D0850", VA = "0x42D0850")]
	public KillFeedBigPopup()
	{
	}
}

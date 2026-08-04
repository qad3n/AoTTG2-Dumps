// ==================== AoTTG2 cross-reference ====================
// Type: UI.KillFeedSmallPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/KillFeedSmallPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillFeedSmallPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using PatreonEffects;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000643")]
internal class KillFeedSmallPopup : BasePopup
{
	[Token(Token = "0x4001EA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _leftLabel;

	[Token(Token = "0x4001EA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _rightLabel;

	[Token(Token = "0x4001EA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x4001EA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _backgroundLabel;

	[Token(Token = "0x4001EA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private NameEffectApplier _leftStyle;

	[Token(Token = "0x4001EA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private NameEffectApplier _rightStyle;

	[Token(Token = "0x4001EA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	public float TimeLeft;

	[Token(Token = "0x4001EA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public string Killer;

	[Token(Token = "0x4001EAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public string Victim;

	[Token(Token = "0x4001EAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public int KillerActorNumber;

	[Token(Token = "0x4001EAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	public int VictimActorNumber;

	[Token(Token = "0x4001EAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public int Score;

	[Token(Token = "0x4001EAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public string Weapon;

	[Token(Token = "0x4001EAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private RawImage _image;

	[Token(Token = "0x17000BF0")]
	protected override string Title
	{
		[Token(Token = "0x6003F18")]
		[Address(RVA = "0x42D0860", Offset = "0x42D0860", VA = "0x42D0860", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BF1")]
	protected override float Width
	{
		[Token(Token = "0x6003F19")]
		[Address(RVA = "0x42D0880", Offset = "0x42D0880", VA = "0x42D0880", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF2")]
	protected override float Height
	{
		[Token(Token = "0x6003F1A")]
		[Address(RVA = "0x42D0890", Offset = "0x42D0890", VA = "0x42D0890", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF3")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003F1B")]
		[Address(RVA = "0x42D08A0", Offset = "0x42D08A0", VA = "0x42D08A0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF4")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003F1C")]
		[Address(RVA = "0x42D08B0", Offset = "0x42D08B0", VA = "0x42D08B0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF5")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003F1D")]
		[Address(RVA = "0x42D08C0", Offset = "0x42D08C0", VA = "0x42D08C0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000BF6")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003F1E")]
		[Address(RVA = "0x42D08D0", Offset = "0x42D08D0", VA = "0x42D08D0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003F1F")]
	[Address(RVA = "0x42D08E0", Offset = "0x42D08E0", VA = "0x42D08E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F20")]
	[Address(RVA = "0x42D0C10", Offset = "0x42D0C10", VA = "0x42D0C10")]
	public void ShowImmediate(string killer, string victim, int score, string weapon, float timeLeft)
	{
	}

	[Token(Token = "0x6003F21")]
	[Address(RVA = "0x42D0C30", Offset = "0x42D0C30", VA = "0x42D0C30")]
	public void ShowImmediate(string killer, string victim, int score, string weapon, float timeLeft, int killerActorNumber, int victimActorNumber)
	{
	}

	[Token(Token = "0x6003F22")]
	[Address(RVA = "0x42D0F40", Offset = "0x42D0F40", VA = "0x42D0F40")]
	private string GetWeaponIcon(string weapon)
	{
		return null;
	}

	[Token(Token = "0x6003F23")]
	[Address(RVA = "0x42D10B0", Offset = "0x42D10B0", VA = "0x42D10B0")]
	public KillFeedSmallPopup()
	{
	}
}

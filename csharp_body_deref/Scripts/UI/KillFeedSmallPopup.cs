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

[Token(Token = "0x200084C")]
internal class KillFeedSmallPopup : BasePopup
{
	[Token(Token = "0x40029E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _leftLabel;

	[Token(Token = "0x40029E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _rightLabel;

	[Token(Token = "0x40029E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x40029E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _backgroundLabel;

	[Token(Token = "0x40029E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private NameEffectApplier _leftStyle;

	[Token(Token = "0x40029EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private NameEffectApplier _rightStyle;

	[Token(Token = "0x40029EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	public float TimeLeft;

	[Token(Token = "0x40029EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public string Killer;

	[Token(Token = "0x40029ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public string Victim;

	[Token(Token = "0x40029EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public int KillerActorNumber;

	[Token(Token = "0x40029EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	public int VictimActorNumber;

	[Token(Token = "0x40029F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public int Score;

	[Token(Token = "0x40029F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public string Weapon;

	[Token(Token = "0x40029F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private RawImage _image;

	[Token(Token = "0x17000DC4")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004F4F")]
		[Address(RVA = "0x5C34510", Offset = "0x5C33510", VA = "0x5C34510", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000DC5")]
	protected override string Title
	{
		[Token(Token = "0x6004F50")]
		[Address(RVA = "0x5C34520", Offset = "0x5C33520", VA = "0x5C34520", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DC6")]
	protected override float Width
	{
		[Token(Token = "0x6004F51")]
		[Address(RVA = "0x5C34540", Offset = "0x5C33540", VA = "0x5C34540", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DC7")]
	protected override float Height
	{
		[Token(Token = "0x6004F52")]
		[Address(RVA = "0x5C34550", Offset = "0x5C33550", VA = "0x5C34550", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DC8")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004F53")]
		[Address(RVA = "0x5C34560", Offset = "0x5C33560", VA = "0x5C34560", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DC9")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004F54")]
		[Address(RVA = "0x5C34570", Offset = "0x5C33570", VA = "0x5C34570", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DCA")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004F55")]
		[Address(RVA = "0x5C34580", Offset = "0x5C33580", VA = "0x5C34580", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000DCB")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004F56")]
		[Address(RVA = "0x5C34590", Offset = "0x5C33590", VA = "0x5C34590", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004F57")]
	[Address(RVA = "0x5C345A0", Offset = "0x5C335A0", VA = "0x5C345A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004F58")]
	[Address(RVA = "0x5C34910", Offset = "0x5C33910", VA = "0x5C34910")]
	public void ShowImmediate(string killer, string victim, int score, string weapon, float timeLeft)
	{
	}

	[Token(Token = "0x6004F59")]
	[Address(RVA = "0x5C34930", Offset = "0x5C33930", VA = "0x5C34930")]
	public void ShowImmediate(string killer, string victim, int score, string weapon, float timeLeft, int killerActorNumber, int victimActorNumber)
	{
	}

	[Token(Token = "0x6004F5A")]
	[Address(RVA = "0x5C34BA0", Offset = "0x5C33BA0", VA = "0x5C34BA0")]
	public KillFeedSmallPopup()
	{
	}
}

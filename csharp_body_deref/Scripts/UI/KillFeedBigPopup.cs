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
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200084B")]
internal class KillFeedBigPopup : BasePopup
{
	[Token(Token = "0x40029D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _leftLabel;

	[Token(Token = "0x40029D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _rightLabel;

	[Token(Token = "0x40029D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x40029DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _backgroundLabel;

	[Token(Token = "0x40029DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private NameEffectApplier _leftStyle;

	[Token(Token = "0x40029DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private NameEffectApplier _rightStyle;

	[Token(Token = "0x40029DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private RawImage _image;

	[Token(Token = "0x40029DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public float TimeLeft;

	[Token(Token = "0x40029DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public string Killer;

	[Token(Token = "0x40029E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public string Victim;

	[Token(Token = "0x40029E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public int KillerActorNumber;

	[Token(Token = "0x40029E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	public int VictimActorNumber;

	[Token(Token = "0x40029E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public int Score;

	[Token(Token = "0x40029E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public string Weapon;

	[Token(Token = "0x17000DBC")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004F41")]
		[Address(RVA = "0x5C33C40", Offset = "0x5C32C40", VA = "0x5C33C40", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000DBD")]
	protected override string Title
	{
		[Token(Token = "0x6004F42")]
		[Address(RVA = "0x5C33C50", Offset = "0x5C32C50", VA = "0x5C33C50", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DBE")]
	protected override float Width
	{
		[Token(Token = "0x6004F43")]
		[Address(RVA = "0x5C33C70", Offset = "0x5C32C70", VA = "0x5C33C70", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DBF")]
	protected override float Height
	{
		[Token(Token = "0x6004F44")]
		[Address(RVA = "0x5C33C80", Offset = "0x5C32C80", VA = "0x5C33C80", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DC0")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004F45")]
		[Address(RVA = "0x5C33C90", Offset = "0x5C32C90", VA = "0x5C33C90", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DC1")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004F46")]
		[Address(RVA = "0x5C33CA0", Offset = "0x5C32CA0", VA = "0x5C33CA0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DC2")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004F47")]
		[Address(RVA = "0x5C33CB0", Offset = "0x5C32CB0", VA = "0x5C33CB0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000DC3")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004F48")]
		[Address(RVA = "0x5C33CC0", Offset = "0x5C32CC0", VA = "0x5C33CC0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004F49")]
	[Address(RVA = "0x5C33CD0", Offset = "0x5C32CD0", VA = "0x5C33CD0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004F4A")]
	[Address(RVA = "0x5C34040", Offset = "0x5C33040", VA = "0x5C34040")]
	public void Show(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x6004F4B")]
	[Address(RVA = "0x5C34060", Offset = "0x5C33060", VA = "0x5C34060")]
	public void Show(string killer, string victim, int score, string weapon, int killerActorNumber, int victimActorNumber)
	{
	}

	[Token(Token = "0x6004F4C")]
	[Address(RVA = "0x5C342D0", Offset = "0x5C332D0", VA = "0x5C342D0")]
	public static Texture2D LoadWeaponIcon(string weapon)
	{
		return null;
	}

	[Token(Token = "0x6004F4D")]
	[Address(RVA = "0x5C34390", Offset = "0x5C33390", VA = "0x5C34390")]
	private static string GetWeaponIcon(string weapon)
	{
		return null;
	}

	[Token(Token = "0x6004F4E")]
	[Address(RVA = "0x5C34500", Offset = "0x5C33500", VA = "0x5C34500")]
	public KillFeedBigPopup()
	{
	}
}

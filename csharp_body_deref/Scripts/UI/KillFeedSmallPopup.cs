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

[Token(Token = "0x200079F")]
internal class KillFeedSmallPopup : BasePopup
{
	[Token(Token = "0x4002665")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _leftLabel;

	[Token(Token = "0x4002666")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _rightLabel;

	[Token(Token = "0x4002667")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x4002668")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _backgroundLabel;

	[Token(Token = "0x4002669")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private NameEffectApplier _leftStyle;

	[Token(Token = "0x400266A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private NameEffectApplier _rightStyle;

	[Token(Token = "0x400266B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	public float TimeLeft;

	[Token(Token = "0x400266C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public string Killer;

	[Token(Token = "0x400266D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public string Victim;

	[Token(Token = "0x400266E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public int KillerActorNumber;

	[Token(Token = "0x400266F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	public int VictimActorNumber;

	[Token(Token = "0x4002670")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public int Score;

	[Token(Token = "0x4002671")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public string Weapon;

	[Token(Token = "0x4002672")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private RawImage _image;

	[Token(Token = "0x17000D48")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004A20")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D49")]
	protected override string Title
	{
		[Token(Token = "0x6004A21")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D4A")]
	protected override float Width
	{
		[Token(Token = "0x6004A22")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D4B")]
	protected override float Height
	{
		[Token(Token = "0x6004A23")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D4C")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004A24")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D4D")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004A25")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D4E")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004A26")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000D4F")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004A27")]
		[Address(RVA = "0x2245D40", Offset = "0x2244340", VA = "0x182245D40", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004A28")]
	[Address(RVA = "0x2257FE0", Offset = "0x22565E0", VA = "0x182257FE0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A29")]
	[Address(RVA = "0x2258300", Offset = "0x2256900", VA = "0x182258300")]
	public void ShowImmediate(string killer, string victim, int score, string weapon, float timeLeft)
	{
	}

	[Token(Token = "0x6004A2A")]
	[Address(RVA = "0x2258350", Offset = "0x2256950", VA = "0x182258350")]
	public void ShowImmediate(string killer, string victim, int score, string weapon, float timeLeft, int killerActorNumber, int victimActorNumber)
	{
	}

	[Token(Token = "0x6004A2B")]
	[Address(RVA = "0x2257E70", Offset = "0x2256470", VA = "0x182257E70")]
	private string GetWeaponIcon(string weapon)
	{
		return null;
	}

	[Token(Token = "0x6004A2C")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public KillFeedSmallPopup()
	{
	}
}

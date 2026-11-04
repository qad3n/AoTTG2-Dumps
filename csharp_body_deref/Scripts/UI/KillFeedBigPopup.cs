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

[Token(Token = "0x200079E")]
internal class KillFeedBigPopup : BasePopup
{
	[Token(Token = "0x4002657")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _leftLabel;

	[Token(Token = "0x4002658")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _rightLabel;

	[Token(Token = "0x4002659")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _scoreLabel;

	[Token(Token = "0x400265A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _backgroundLabel;

	[Token(Token = "0x400265B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private NameEffectApplier _leftStyle;

	[Token(Token = "0x400265C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private NameEffectApplier _rightStyle;

	[Token(Token = "0x400265D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private RawImage _image;

	[Token(Token = "0x400265E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public float TimeLeft;

	[Token(Token = "0x400265F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public string Killer;

	[Token(Token = "0x4002660")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public string Victim;

	[Token(Token = "0x4002661")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public int KillerActorNumber;

	[Token(Token = "0x4002662")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xFC")]
	public int VictimActorNumber;

	[Token(Token = "0x4002663")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public int Score;

	[Token(Token = "0x4002664")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public string Weapon;

	[Token(Token = "0x17000D40")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004A13")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D41")]
	protected override string Title
	{
		[Token(Token = "0x6004A14")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D42")]
	protected override float Width
	{
		[Token(Token = "0x6004A15")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D43")]
	protected override float Height
	{
		[Token(Token = "0x6004A16")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D44")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004A17")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D45")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004A18")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D46")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004A19")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000D47")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004A1A")]
		[Address(RVA = "0x2245D40", Offset = "0x2244340", VA = "0x182245D40", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004A1B")]
	[Address(RVA = "0x22576B0", Offset = "0x2255CB0", VA = "0x1822576B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A1C")]
	[Address(RVA = "0x22579D0", Offset = "0x2255FD0", VA = "0x1822579D0")]
	public void Show(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x6004A1D")]
	[Address(RVA = "0x2257A10", Offset = "0x2256010", VA = "0x182257A10")]
	public void Show(string killer, string victim, int score, string weapon, int killerActorNumber, int victimActorNumber)
	{
	}

	[Token(Token = "0x6004A1E")]
	[Address(RVA = "0x2257540", Offset = "0x2255B40", VA = "0x182257540")]
	private string GetWeaponIcon(string weapon)
	{
		return null;
	}

	[Token(Token = "0x6004A1F")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public KillFeedBigPopup()
	{
	}
}

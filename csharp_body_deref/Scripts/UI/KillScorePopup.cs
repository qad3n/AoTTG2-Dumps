// ==================== AoTTG2 cross-reference ====================
// Type: UI.KillScorePopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/KillScorePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillScorePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007A0")]
internal class KillScorePopup : BasePopup
{
	[Token(Token = "0x4002673")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _scoreLabel;

	[Token(Token = "0x4002674")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _backgroundLabel;

	[Token(Token = "0x4002675")]
	private const float ShakeDistance = 50f;

	[Token(Token = "0x4002676")]
	private const float ShakeDuration = 1f;

	[Token(Token = "0x4002677")]
	private const float ShakeDecay = 0.2f;

	[Token(Token = "0x4002678")]
	private const float DefaultOffset = 100f;

	[Token(Token = "0x4002679")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool _shakeFlip;

	[Token(Token = "0x400267A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	private float _shakeTimeLeft;

	[Token(Token = "0x400267B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private float _currentShakeDistance;

	[Token(Token = "0x400267C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	private float _lastShowTime;

	[Token(Token = "0x17000D50")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004A2D")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D51")]
	protected override string Title
	{
		[Token(Token = "0x6004A2E")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D52")]
	protected override float Width
	{
		[Token(Token = "0x6004A2F")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D53")]
	protected override float Height
	{
		[Token(Token = "0x6004A30")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D54")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004A31")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D55")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004A32")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D56")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004A33")]
		[Address(RVA = "0x565FB0", Offset = "0x5645B0", VA = "0x180565FB0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000D57")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004A34")]
		[Address(RVA = "0x2245D40", Offset = "0x2244340", VA = "0x182245D40", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004A35")]
	[Address(RVA = "0x2258790", Offset = "0x2256D90", VA = "0x182258790", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004A36")]
	[Address(RVA = "0x22589D0", Offset = "0x2256FD0", VA = "0x1822589D0")]
	public void Show(int score)
	{
	}

	[Token(Token = "0x6004A37")]
	[Address(RVA = "0x2258910", Offset = "0x2256F10", VA = "0x182258910")]
	public void ShowSnapshotViewer(int score)
	{
	}

	[Token(Token = "0x6004A38")]
	[Address(RVA = "0x2258BF0", Offset = "0x22571F0", VA = "0x182258BF0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004A39")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public KillScorePopup()
	{
	}
}

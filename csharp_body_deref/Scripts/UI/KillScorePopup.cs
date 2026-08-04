// ==================== AoTTG2 cross-reference ====================
// Type: UI.KillScorePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/KillScorePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillScorePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000644")]
internal class KillScorePopup : BasePopup
{
	[Token(Token = "0x4001EB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _scoreLabel;

	[Token(Token = "0x4001EB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _backgroundLabel;

	[Token(Token = "0x4001EB2")]
	private const float ShakeDistance = 50f;

	[Token(Token = "0x4001EB3")]
	private const float ShakeDuration = 1f;

	[Token(Token = "0x4001EB4")]
	private const float ShakeDecay = 0.2f;

	[Token(Token = "0x4001EB5")]
	private const float DefaultOffset = 100f;

	[Token(Token = "0x4001EB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool _shakeFlip;

	[Token(Token = "0x4001EB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	private float _shakeTimeLeft;

	[Token(Token = "0x4001EB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private float _currentShakeDistance;

	[Token(Token = "0x4001EB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	private float _lastShowTime;

	[Token(Token = "0x17000BF7")]
	protected override string Title
	{
		[Token(Token = "0x6003F24")]
		[Address(RVA = "0x42D10C0", Offset = "0x42D10C0", VA = "0x42D10C0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BF8")]
	protected override float Width
	{
		[Token(Token = "0x6003F25")]
		[Address(RVA = "0x42D10E0", Offset = "0x42D10E0", VA = "0x42D10E0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BF9")]
	protected override float Height
	{
		[Token(Token = "0x6003F26")]
		[Address(RVA = "0x42D10F0", Offset = "0x42D10F0", VA = "0x42D10F0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BFA")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003F27")]
		[Address(RVA = "0x42D1100", Offset = "0x42D1100", VA = "0x42D1100", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BFB")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003F28")]
		[Address(RVA = "0x42D1110", Offset = "0x42D1110", VA = "0x42D1110", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BFC")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003F29")]
		[Address(RVA = "0x42D1120", Offset = "0x42D1120", VA = "0x42D1120", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000BFD")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003F2A")]
		[Address(RVA = "0x42D1130", Offset = "0x42D1130", VA = "0x42D1130", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003F2B")]
	[Address(RVA = "0x42D1140", Offset = "0x42D1140", VA = "0x42D1140", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003F2C")]
	[Address(RVA = "0x42D12C0", Offset = "0x42D12C0", VA = "0x42D12C0")]
	public void Show(int score)
	{
	}

	[Token(Token = "0x6003F2D")]
	[Address(RVA = "0x42D14C0", Offset = "0x42D14C0", VA = "0x42D14C0")]
	public void ShowSnapshotViewer(int score)
	{
	}

	[Token(Token = "0x6003F2E")]
	[Address(RVA = "0x42D1580", Offset = "0x42D1580", VA = "0x42D1580")]
	private void Update()
	{
	}

	[Token(Token = "0x6003F2F")]
	[Address(RVA = "0x42D16A0", Offset = "0x42D16A0", VA = "0x42D16A0")]
	public KillScorePopup()
	{
	}
}

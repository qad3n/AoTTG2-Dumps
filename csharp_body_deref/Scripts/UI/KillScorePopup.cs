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

[Token(Token = "0x200084D")]
internal class KillScorePopup : BasePopup
{
	[Token(Token = "0x40029F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _scoreLabel;

	[Token(Token = "0x40029F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _backgroundLabel;

	[Token(Token = "0x40029F5")]
	private const float ShakeDistance = 50f;

	[Token(Token = "0x40029F6")]
	private const float ShakeDuration = 1f;

	[Token(Token = "0x40029F7")]
	private const float ShakeDecay = 0.2f;

	[Token(Token = "0x40029F8")]
	private const float DefaultOffset = 100f;

	[Token(Token = "0x40029F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool _shakeFlip;

	[Token(Token = "0x40029FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	private float _shakeTimeLeft;

	[Token(Token = "0x40029FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private float _currentShakeDistance;

	[Token(Token = "0x40029FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	private float _lastShowTime;

	[Token(Token = "0x17000DCC")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004F5B")]
		[Address(RVA = "0x5C34BB0", Offset = "0x5C33BB0", VA = "0x5C34BB0", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000DCD")]
	protected override string Title
	{
		[Token(Token = "0x6004F5C")]
		[Address(RVA = "0x5C34BC0", Offset = "0x5C33BC0", VA = "0x5C34BC0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000DCE")]
	protected override float Width
	{
		[Token(Token = "0x6004F5D")]
		[Address(RVA = "0x5C34BE0", Offset = "0x5C33BE0", VA = "0x5C34BE0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DCF")]
	protected override float Height
	{
		[Token(Token = "0x6004F5E")]
		[Address(RVA = "0x5C34BF0", Offset = "0x5C33BF0", VA = "0x5C34BF0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DD0")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004F5F")]
		[Address(RVA = "0x5C34C00", Offset = "0x5C33C00", VA = "0x5C34C00", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DD1")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004F60")]
		[Address(RVA = "0x5C34C10", Offset = "0x5C33C10", VA = "0x5C34C10", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DD2")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004F61")]
		[Address(RVA = "0x5C34C20", Offset = "0x5C33C20", VA = "0x5C34C20", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000DD3")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004F62")]
		[Address(RVA = "0x5C34C30", Offset = "0x5C33C30", VA = "0x5C34C30", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6004F63")]
	[Address(RVA = "0x5C34C40", Offset = "0x5C33C40", VA = "0x5C34C40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004F64")]
	[Address(RVA = "0x5C34E00", Offset = "0x5C33E00", VA = "0x5C34E00")]
	public void Show(int score)
	{
	}

	[Token(Token = "0x6004F65")]
	[Address(RVA = "0x5C35010", Offset = "0x5C34010", VA = "0x5C35010")]
	public void ShowSnapshotViewer(int score)
	{
	}

	[Token(Token = "0x6004F66")]
	[Address(RVA = "0x5C350D0", Offset = "0x5C340D0", VA = "0x5C350D0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004F67")]
	[Address(RVA = "0x5C35200", Offset = "0x5C34200", VA = "0x5C35200")]
	public KillScorePopup()
	{
	}
}

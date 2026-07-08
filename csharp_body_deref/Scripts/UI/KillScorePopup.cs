using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005F9")]
internal class KillScorePopup : BasePopup
{
	[Token(Token = "0x4001D6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private Text _scoreLabel;

	[Token(Token = "0x4001D6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _backgroundLabel;

	[Token(Token = "0x4001D6C")]
	private const float ShakeDistance = 50f;

	[Token(Token = "0x4001D6D")]
	private const float ShakeDuration = 1f;

	[Token(Token = "0x4001D6E")]
	private const float ShakeDecay = 0.2f;

	[Token(Token = "0x4001D6F")]
	private const float DefaultOffset = 100f;

	[Token(Token = "0x4001D70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool _shakeFlip;

	[Token(Token = "0x4001D71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	private float _shakeTimeLeft;

	[Token(Token = "0x4001D72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private float _currentShakeDistance;

	[Token(Token = "0x4001D73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	private float _lastShowTime;

	[Token(Token = "0x17000B7F")]
	protected override string Title
	{
		[Token(Token = "0x6003CD7")]
		[Address(RVA = "0x3FBEBD0", Offset = "0x3FBEBD0", VA = "0x3FBEBD0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B80")]
	protected override float Width
	{
		[Token(Token = "0x6003CD8")]
		[Address(RVA = "0x3FBEBF0", Offset = "0x3FBEBF0", VA = "0x3FBEBF0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B81")]
	protected override float Height
	{
		[Token(Token = "0x6003CD9")]
		[Address(RVA = "0x3FBEC00", Offset = "0x3FBEC00", VA = "0x3FBEC00", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B82")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003CDA")]
		[Address(RVA = "0x3FBEC10", Offset = "0x3FBEC10", VA = "0x3FBEC10", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B83")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003CDB")]
		[Address(RVA = "0x3FBEC20", Offset = "0x3FBEC20", VA = "0x3FBEC20", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B84")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003CDC")]
		[Address(RVA = "0x3FBEC30", Offset = "0x3FBEC30", VA = "0x3FBEC30", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x17000B85")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003CDD")]
		[Address(RVA = "0x3FBEC40", Offset = "0x3FBEC40", VA = "0x3FBEC40", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x6003CDE")]
	[Address(RVA = "0x3FBEC50", Offset = "0x3FBEC50", VA = "0x3FBEC50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003CDF")]
	[Address(RVA = "0x3FBEDD0", Offset = "0x3FBEDD0", VA = "0x3FBEDD0")]
	public void Show(int score)
	{
	}

	[Token(Token = "0x6003CE0")]
	[Address(RVA = "0x3FBEFD0", Offset = "0x3FBEFD0", VA = "0x3FBEFD0")]
	public void ShowSnapshotViewer(int score)
	{
	}

	[Token(Token = "0x6003CE1")]
	[Address(RVA = "0x3FBF090", Offset = "0x3FBF090", VA = "0x3FBF090")]
	private void Update()
	{
	}

	[Token(Token = "0x6003CE2")]
	[Address(RVA = "0x3FBF1B0", Offset = "0x3FBF1B0", VA = "0x3FBF1B0")]
	public KillScorePopup()
	{
	}
}

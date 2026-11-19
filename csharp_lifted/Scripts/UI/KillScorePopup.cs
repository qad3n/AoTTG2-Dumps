// ==================== AoTTG2 cross-reference ====================
// Type: UI.KillScorePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/KillScorePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/KillScorePopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$get_EscapeBehavior): clean
			return 2;
		}
	}

	[Token(Token = "0x17000DCD")]
	protected override string Title
	{
		[Token(Token = "0x6004F5C")]
		[Address(RVA = "0x5C34BC0", Offset = "0x5C33BC0", VA = "0x5C34BC0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$get_Title): clean
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
	}

	[Token(Token = "0x17000DCE")]
	protected override float Width
	{
		[Token(Token = "0x6004F5D")]
		[Address(RVA = "0x5C34BE0", Offset = "0x5C33BE0", VA = "0x5C34BE0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$get_Width): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DCF")]
	protected override float Height
	{
		[Token(Token = "0x6004F5E")]
		[Address(RVA = "0x5C34BF0", Offset = "0x5C33BF0", VA = "0x5C34BF0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$get_Height): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DD0")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004F5F")]
		[Address(RVA = "0x5C34C00", Offset = "0x5C33C00", VA = "0x5C34C00", Slot = "36")]
		get
		{
			// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$get_TopBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DD1")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004F60")]
		[Address(RVA = "0x5C34C10", Offset = "0x5C33C10", VA = "0x5C34C10", Slot = "37")]
		get
		{
			// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$get_BottomBarHeight): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000DD2")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004F61")]
		[Address(RVA = "0x5C34C20", Offset = "0x5C33C20", VA = "0x5C34C20", Slot = "54")]
		get
		{
			// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$get_PopupAnimationType): clean
			return 3;
		}
	}

	[Token(Token = "0x17000DD3")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004F62")]
		[Address(RVA = "0x5C34C30", Offset = "0x5C33C30", VA = "0x5C34C30", Slot = "51")]
		get
		{
			// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$get_AnimationTime): clean
			return 0.2;
		}
	}

	[Token(Token = "0x6004F63")]
	[Address(RVA = "0x5C34C40", Offset = "0x5C33C40", VA = "0x5C34C40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$Setup): 6 lines keep C-only constructs
		Text* targetAddress;
		Text* targetAddress_00;
		Transform pUVar1;
		GameObject pUVar2;
		Text pUVar3;

		this.Setup(parent);
		pUVar1 = this.transform;
		pUVar2 = ElementFactory.InstantiateAndBind(pUVar1, "Prefabs/InGame/KillScoreLabel");
		if (pUVar2 != null) {
			pUVar3 = pUVar2.GetComponent<Text>();
			targetAddress = &this._scoreLabel;
			this._scoreLabel = pUVar3;
			pUVar3 = this._scoreLabel;
			if (pUVar3 != null) {
				pUVar1 = pUVar3.transform;
				if (pUVar1 != null) {
					pUVar1 = pUVar1.Find("BackgroundLabel");
					if (pUVar1 != null) {
						pUVar3 = pUVar1.GetComponent<Text>();
						targetAddress_00 = &this._backgroundLabel;
						this._backgroundLabel = pUVar3;
						pUVar3 = this._scoreLabel;
						LanguageFonts.KeepDesignedFont(pUVar3);
						LanguageFonts.KeepDesignedFont(*targetAddress_00);
						pUVar3 = *targetAddress;
						if (pUVar3 != null) {
							pUVar1 = pUVar3.transform ;
							if (pUVar1 != null) {
								pUVar1 = pUVar1.parent;
								if (pUVar1 != null) {
									pUVar1 = pUVar1.Find("Border");
									if (pUVar1 != null) {
										pUVar2 = pUVar1.gameObject;
										if (pUVar2 != null) {
											pUVar2.SetActive(false);
											return;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F64")]
	[Address(RVA = "0x5C34E00", Offset = "0x5C33E00", VA = "0x5C34E00")]
	public void Show(int score)
	{
		// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$Show): 2 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Text pUVar3;
		UISettings pSVar4;
		FloatSetting pSVar5;
		GameObject obj;
		bool pbVar6;
		String pSVar7;
		int value;
		float fVar8;
		Vector2 offset;
		int local_20;
		float local_1c;

		local_20 = score;
		this._shakeTimeLeft = 0.0;
		local_1c = Time.time;
		obj = this.gameObject;
		uVar1 = (Vector3.upVector).x;
		uVar2 = (Vector3.upVector).y;
		offset.x = (float)uVar1 * 100.0;
		offset.y = (float)uVar2 * 100.0;
		ElementFactory.SetAnchor(obj, 4, 4, offset);
		if (1.0 <= local_1c - this._lastShowTime) {
			pbVar6 = &this.IsActive;
		}
		else {
			this._shakeTimeLeft = 1.0;
			this._currentShakeDistance = 50.0;
			pbVar6 = &this._shakeFlip;
		}
		*pbVar6 = false;
		this._lastShowTime = local_1c;
		pUVar3 = this._scoreLabel;
		pSVar7 = local_20.ToString();
		if (pUVar3 != null) {
			pUVar3.set_text(pSVar7);
			pUVar3 = this._backgroundLabel;
			pSVar7 = local_20.ToString();
			if (pUVar3 != null) {
				pUVar3.set_text(pSVar7);
				pSVar4 = SettingsManager.UISettings;
				if (((pSVar4 != null) &&(pSVar5 = pSVar4.KillScoreScale, pSVar5 != null)) &&(pUVar3 = this._scoreLabel, pUVar3 != null)) {
					fVar8 = (float)local_20 / 3000.0;
					if (1.0 <= fVar8) {
						fVar8 = 1.0;
					}
					value = (int)((float)((int)(fVar8 * 60.0) + 0x28) * pSVar5._value);
					pUVar3.fontSize = value;
					pUVar3 = this._backgroundLabel;
					if (pUVar3 != null) {
						pUVar3.fontSize = value;
						this.Show();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F65")]
	[Address(RVA = "0x5C35010", Offset = "0x5C34010", VA = "0x5C35010")]
	public void ShowSnapshotViewer(int score)
	{
		// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$ShowSnapshotViewer): clean
		Text pUVar1;
		String pSVar2;
		int local_14;

		pUVar1 = this._scoreLabel;
		pSVar2 = local_14.ToString();
		if (pUVar1 != null) {
			pUVar1.set_text(pSVar2);
			pUVar1 = this._backgroundLabel;
			pSVar2 = local_14.ToString();
			if (pUVar1 != null) {
				pUVar1.set_text(pSVar2);
				pUVar1 = this._scoreLabel;
				if (pUVar1 != null) {
					pUVar1.fontSize = 0x28;
					pUVar1 = this._backgroundLabel;
					if (pUVar1 != null) {
						pUVar1.fontSize = 0x28;
						this.ShowImmediate();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F66")]
	[Address(RVA = "0x5C350D0", Offset = "0x5C340D0", VA = "0x5C350D0")]
	private void Update()
	{
		// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$Update): 2 lines keep C-only constructs
		bool pbVar1;
		uint uVar2;
		uint uVar3;
		bool bVar4;
		Vector2 offset;
		GameObject obj;
		float fVar5;
		float fVar6;

		if ((this.IsActive != false) && (fVar6 = this._shakeTimeLeft, 0.0 < fVar6)) {
			fVar5 = Time.deltaTime;
			this._shakeTimeLeft = fVar6 - fVar5;
			bVar4 = this._shakeFlip;
			obj = this.gameObject;
			if (bVar4 == false) {
				fVar6 = 100.0 - this._currentShakeDistance;
			}
			else {
				fVar6 = this._currentShakeDistance + 100.0;
			}
			uVar2 = (Vector3.upVector).x;
			uVar3 = (Vector3.upVector).y;
			offset.y = fVar6 * (float)uVar3;
			offset.x = fVar6 * (float)uVar2;
			ElementFactory.SetAnchor(obj, 4, 4, offset);
			pbVar1 = &this._shakeFlip;
			*pbVar1 = (bool)(*pbVar1 ^ 1);
			fVar6 = Time.deltaTime;
			this._currentShakeDistance =(fVar6 * -0.2 * 60.0 + 1.0) * this._currentShakeDistance;
		}
		return;
	}

	[Token(Token = "0x6004F67")]
	[Address(RVA = "0x5C35200", Offset = "0x5C34200", VA = "0x5C35200")]
	public KillScorePopup()
	{
		// Lifted from source/cpp/UI/KillScorePopup.c (UI.KillScorePopup$$.ctor): clean
		base();
		return;
	}
}

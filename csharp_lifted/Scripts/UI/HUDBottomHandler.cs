// ==================== AoTTG2 cross-reference ====================
// Type: UI.HUDBottomHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/HUDBottomHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/HUDBottomHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200083F")]
internal class HUDBottomHandler : MonoBehaviour
{
	[Token(Token = "0x4002921")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Color FillLowColor;

	[Token(Token = "0x4002922")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Color BackgroundLowColor;

	[Token(Token = "0x4002923")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Color FillVeryLowColor;

	[Token(Token = "0x4002924")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Color BackgroundVeryLowColor;

	[Token(Token = "0x4002925")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Color FillNormalColor;

	[Token(Token = "0x4002926")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Color BladeFillNormalColor;

	[Token(Token = "0x4002927")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Color BackgroundNormalColor;

	[Token(Token = "0x4002928")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Color BackgroundEmptyColor;

	[Token(Token = "0x4002929")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Color StaminaFillNormalColor;

	[Token(Token = "0x400292A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Color StaminaFillLowColor;

	[Token(Token = "0x400292B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _hudBottom;

	[Token(Token = "0x400292C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Image _specialFill;

	[Token(Token = "0x400292D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Image _specialIconBackground;

	[Token(Token = "0x400292E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Image _specialIconFill;

	[Token(Token = "0x400292F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Image _gasFillLeft;

	[Token(Token = "0x4002930")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private Image _gasFillRight;

	[Token(Token = "0x4002931")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Image _gasBackground;

	[Token(Token = "0x4002932")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private string _currentSpecialIcon;

	[Token(Token = "0x4002933")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private string _newSpecialIcon;

	[Token(Token = "0x4002934")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Human _human;

	[Token(Token = "0x4002935")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private BaseCharacter _character;

	[Token(Token = "0x4002936")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private BasicTitan _playerTitan;

	[Token(Token = "0x4002937")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private float _gasAnimationTimeLeft;

	[Token(Token = "0x4002938")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private float _reloadAnimationTimeLeft;

	[Token(Token = "0x4002939")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private float _shootAnimationTimeLeft;

	[Token(Token = "0x400293A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Image _healthImage;

	[Token(Token = "0x400293B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private float _healthTimeLeft;

	[Token(Token = "0x400293C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private Image _perkCDImage;

	[Token(Token = "0x400293D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private Image _perkCDBackgroundImage;

	[Token(Token = "0x400293E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private float _perkCDTimeLeft;

	[Token(Token = "0x400293F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private Image _bladeFillLeft;

	[Token(Token = "0x4002940")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private Image _bladeFillRight;

	[Token(Token = "0x4002941")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private Image _bladeBackground;

	[Token(Token = "0x4002942")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private Image _bladeReload;

	[Token(Token = "0x4002943")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private Image _bladeOut;

	[Token(Token = "0x4002944")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private GameObject _bladeAmmoGroupLeft;

	[Token(Token = "0x4002945")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private GameObject _bladeAmmoGroupRight;

	[Token(Token = "0x4002946")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private List<GameObject> _bladeAmmoLeft;

	[Token(Token = "0x4002947")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<GameObject> _bladeAmmoRight;

	[Token(Token = "0x4002948")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private Image _ammoFillLeft;

	[Token(Token = "0x4002949")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private Image _ammoFillRight;

	[Token(Token = "0x400294A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private Text _ammoLabelLeft;

	[Token(Token = "0x400294B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private Text _ammoLabelRight;

	[Token(Token = "0x400294C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private Image _apgBackground;

	[Token(Token = "0x400294D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private Image _apgReload;

	[Token(Token = "0x400294E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private Image _apgShoot;

	[Token(Token = "0x400294F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private Image _apgAmmoBackground;

	[Token(Token = "0x4002950")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private Image _ahssBackgroundLeft;

	[Token(Token = "0x4002951")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private Image _ahssBackgroundRight;

	[Token(Token = "0x4002952")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private Image _ahssEmptyLeft;

	[Token(Token = "0x4002953")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	private Image _ahssEmptyRight;

	[Token(Token = "0x4002954")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private Image _ahssReloadLeft;

	[Token(Token = "0x4002955")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private Image _ahssReloadRight;

	[Token(Token = "0x4002956")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	private Image _ahssShootLeft;

	[Token(Token = "0x4002957")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	private Image _ahssShootRight;

	[Token(Token = "0x4002958")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private Image _tsBackground;

	[Token(Token = "0x4002959")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x228")]
	private Image _tsReload;

	[Token(Token = "0x400295A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x230")]
	private Image _tsShoot;

	[Token(Token = "0x400295B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	private Image _tsBombBackground;

	[Token(Token = "0x400295C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x240")]
	private Image _tsBombReload;

	[Token(Token = "0x400295D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x248")]
	private Image _bombFillLeft;

	[Token(Token = "0x400295E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x250")]
	private Image _bombFillRight;

	[Token(Token = "0x400295F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x258")]
	private bool _bombInCooldown;

	[Token(Token = "0x4002960")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x260")]
	private Slider _staminaSlider;

	[Token(Token = "0x4002961")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private Image _staminaFill;

	[Token(Token = "0x4002962")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x270")]
	private Dictionary<Image, Animator> _AnimationCache;

	[Token(Token = "0x6004EA4")]
	[Address(RVA = "0x5C22640", Offset = "0x5C21640", VA = "0x5C22640")]
	public void SetBottomHUD([Optional] BaseCharacter character)
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$SetBottomHUD): 106 lines keep C-only constructs
		BaseCharacter* targetAddress;
		Human* targetAddress_00;
		BasicTitan* targetAddress_01;
		GameObject* targetAddress_02;
		Image* ppUVar1;
		Image* ppUVar2;
		Image* ppUVar3;
		Image* ppUVar4;
		Image* ppUVar5;
		Image* targetAddress_03;
		Image* targetAddress_04;
		Image* targetAddress_05;
		Text* targetAddress_06;
		Text* targetAddress_07;
		GameObject* targetAddress_08;
		GameObject* targetAddress_09;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		byte bVar10;
		byte bVar11;
		int iVar12;
		Object pUVar13;
		BaseCharacter x;
		BasicTitan pCVar14;
		BasicTitan pCVar15;
		HumanSetup pCVar16;
		BaseShifter shifter;
		InGameSet pSVar17;
		InGameMiscSettings pSVar18;
		BoolSetting pSVar19;
		Human pCVar20;
		BasicTitan pCVar21;
		bool bVar22;
		uint uVar23;
		Text pUVar24;
		Slider pUVar25;
		Image pUVar26;
		Transform pUVar27;
		GameObject pUVar28;
		List<GameObject> pSVar29;
		object pIVar30;
		Il2CppClass pIVar31;
		BasicTitan pCVar32;
		long lVar33;
		Vector2 offset;
		ulong uVar34;
		Vector2 offset_00;
		ulong uVar35;
		Color UVar36;

		targetAddress = &this._character;
		this._character = character;
		targetAddress_00 = &this._human;
		this._human = null;
		targetAddress_01 = &this._playerTitan;
		this._playerTitan = null;
		pUVar13 = (Object)this._hudBottom;
		targetAddress_02 = &this._hudBottom;
		bVar22 = (pUVar13 != null);
		if (bVar22) {
			pUVar13 = (Object)*targetAddress_02;
			Object.Destroy(pUVar13);
		}
		x = *targetAddress;
		bVar22 = ((Object)x == null);
		pCVar32 = (BasicTitan)typeof(Human);
		pCVar21 = typeof(BasicTitan);
		if ((bVar22) ||(pCVar14 = (BasicTitan)*targetAddress, pCVar14 == null)) {
			return;
		}
		pCVar15 = pCVar14.klass;
		bVar10 = (pCVar15._2).typeHierarchyDepth;
		bVar11 = (typeof(Human)._2).typeHierarchyDepth;
		if ((bVar10 < bVar11) ||((pCVar15._2).typeHierarchy[(ulong)bVar11 - 1] != typeof(Human))) {
			bVar11 = (typeof(BasicTitan)._2).typeHierarchyDepth;
			if ((bVar10 < bVar11) ||((pCVar15._2).typeHierarchy[(ulong)bVar11 - 1] != typeof(BasicTitan))) {
				bVar11 = (typeof(BaseShifter)._2).typeHierarchyDepth;
				if (bVar10 < bVar11) {
					return;
				}
				if ((pCVar15._2).typeHierarchy[(ulong)bVar11 - 1] != typeof(BaseShifter)) {
					return;
				}
				pUVar27 = this.transform;
				shifter = (BaseShifter)this._character;
				if (shifter != null) {
					bVar10 = (typeof(BaseShifter)._2).typeHierarchyDepth;
					if (((shifter.klass._2).typeHierarchyDepth < bVar10) ||((shifter.klass._2).typeHierarchy[(ulong)bVar10 - 1] !=typeof(BaseShifter))) {
						throw new InvalidCastException();
					}
				}
				pUVar28 = ShifterHUD.Create(pUVar27, shifter);
				*targetAddress_02 = pUVar28;
				return;
			}
			*targetAddress_01 = pCVar14;
			pCVar32 = pCVar21;
			if ((bVar11 <= (pCVar14.klass._2).typeHierarchyDepth) &&((pCVar14.klass._2).typeHierarchy[(ulong)bVar11 - 1] == (Il2CppClass)pCVar21)) {
				pUVar27 = this.transform;
				pUVar28 = ElementFactory.InstantiateAndBind(pUVar27, "Prefabs/InGame/HUDBottomTitan");
				this._hudBottom = pUVar28;
				pUVar28 = this._hudBottom;
				if ((pUVar28 != null) &&((pUVar27 = pUVar28.transform, pUVar27 != null &&(pUVar27 = pUVar27.Find("StaminaBar"), pUVar27 != null)))) {
					pUVar25 = pUVar27.GetComponent<Slider>();
					this._staminaSlider = pUVar25;
					pUVar25 = this._staminaSlider;
					if ((pUVar25 != null) &&((pUVar27 = pUVar25.transform, pUVar27 != null &&(pUVar27 = pUVar27.Find("Fill Area/Fill"), pUVar27 != null)))) {
						pUVar26 = pUVar27.GetComponent<Image>();
						this._staminaFill = pUVar26;
						pUVar28 = this._hudBottom;
						if (pUVar28 != null) {
							pUVar28.AddComponent<HUDScaler>() ;
							pUVar28 = *targetAddress_02;
							uVar6 = (Vector3.upVector).x;
							uVar8 = (Vector3.upVector).y;
							offset.x = (float)uVar6 * 10.0;
							offset.y = (float)uVar8 * 10.0;
							ElementFactory.SetAnchor(pUVar28, 7, 7, offset);
							return;
						}
					}
				}
				goto label_05d24841;
			}
	label_05d2484b: ;
			throw new InvalidCastException();
		}
		*targetAddress_00 = (Human)pCVar14;
		if (((pCVar14.klass._2).typeHierarchyDepth < bVar11) ||((pCVar14.klass._2).typeHierarchy[(ulong)bVar11 - 1] != (Il2CppClass)pCVar32)) goto label_05d2484b;
		if ((*targetAddress_00 == null) ||(pCVar16 = ((*targetAddress_00).fields).Setup, pCVar16 == null)) goto label_05d24841;
		iVar12 = pCVar16.Weapon;
		if (iVar12 == 1) {
			pUVar27 = this.transform;
			pUVar28 = ElementFactory.InstantiateAndBind(pUVar27, "Prefabs/InGame/HUDBottomAHSS");
			this._hudBottom = pUVar28;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunBackgroundLeft"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			this._ahssBackgroundLeft = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunBackgroundRight"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			this._ahssBackgroundRight = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunEmptyLeft"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			this._ahssEmptyLeft = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunEmptyRight"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			this._ahssEmptyRight = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunReloadLeft"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar1 = &this._ahssReloadLeft;
			this._ahssReloadLeft = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunReloadRight"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar2 = &this._ahssReloadRight;
			this._ahssReloadRight = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunShootLeft"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			this._ahssShootLeft = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunShootRight"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			this._ahssShootRight = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunReloadLeft"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			*ppUVar1 = pUVar26;
			if (((*targetAddress_02 == null) ||(pUVar27 = (*targetAddress_02).transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunReloadRight"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			*ppUVar2 = pUVar26;
			if (((*targetAddress_02 == null) ||(pUVar27 = (*targetAddress_02).transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunAmmoLabelLeft"), pUVar27 == null)) goto label_05d24841;
			pUVar24 = pUVar27.GetComponent<Text>();
			this._ammoLabelLeft = pUVar24;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunAmmoLabelRight"), pUVar27 == null)) goto label_05d24841;
			pUVar24 = pUVar27.GetComponent<Text>();
			this._ammoLabelRight = pUVar24;
			pUVar26 = this._ahssEmptyLeft;
			if (pUVar26 == null) goto label_05d24841;
			pUVar26.set_color((Color)this.BackgroundVeryLowColor);
			pUVar26 = this._ahssEmptyRight;
			if (pUVar26 == null) goto label_05d24841;
			pUVar26.set_color((Color)this.BackgroundVeryLowColor);
			pUVar26 = this._ahssReloadLeft;
			if (pUVar26 == null) goto label_05d24841;
			pUVar26.set_color((Color)this.BackgroundVeryLowColor);
			pUVar26 = this._ahssReloadRight;
			if (pUVar26 == null) goto label_05d24841;
			pUVar26.set_color((Color)this.BackgroundVeryLowColor);
			pUVar26 = this._ahssShootLeft;
			if (pUVar26 == null) goto label_05d24841;
			pUVar26.set_color((Color)this.BackgroundLowColor);
			pUVar26 = this._ahssShootRight;
			if (pUVar26 == null) goto label_05d24841;
			uVar34._0_4_ = this.BackgroundLowColor.r;
			uVar34._4_4_ = this.BackgroundLowColor.g;
			uVar35._0_4_ = this.BackgroundLowColor.b;
			uVar35._4_4_ = this.BackgroundLowColor.a;
	label_05d236b6: ;
			UVar36.b = (float)(int)uVar35;
			UVar36.a = (float)(int)((ulong)uVar35 >> 0x20);
			UVar36.r = (float)(int)uVar34;
			UVar36.g = (float)(int)((ulong)uVar34 >> 0x20);
			pUVar26.set_color(UVar36);
		}
		else if (iVar12 == 2) {
			pUVar27 = this.transform;
			pUVar28 = ElementFactory.InstantiateAndBind(pUVar27, "Prefabs/InGame/HUDBottomTS");
			this._hudBottom = pUVar28;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("TSBackground"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar1 = &this._tsBackground;
			this._tsBackground = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("TSBombBackground"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar2 = &this._tsBombBackground;
			this._tsBombBackground = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("AmmoFillLeft"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar3 = &this._ammoFillLeft;
			this._ammoFillLeft = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("AmmoFillRight"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar4 = &this._ammoFillRight;
			this._ammoFillRight = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("BombFillLeft"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar5 = &this._bombFillLeft;
			this._bombFillLeft = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("BombFillRight"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			targetAddress_03 = &this._bombFillRight;
			this._bombFillRight = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("TSReload"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			targetAddress_04 = &this._tsReload;
			this._tsReload = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("TSBombReload"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			this._tsBombReload = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("TSShoot"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			targetAddress_05 = &this._tsShoot;
			this._tsShoot = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("AmmoLabelLeft"), pUVar27 == null)) goto label_05d24841;
			pUVar24 = pUVar27.GetComponent<Text>();
			targetAddress_06 = &this._ammoLabelLeft;
			this._ammoLabelLeft = pUVar24;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("AmmoLabelRight"), pUVar27 == null)) goto label_05d24841;
			pUVar24 = pUVar27.GetComponent<Text>();
			targetAddress_07 = &this._ammoLabelRight;
			this._ammoLabelRight = pUVar24;
			pUVar26 = this._tsReload;
			if (pUVar26 == null) goto label_05d24841;
			pUVar26.set_color((Color)this.BackgroundVeryLowColor);
			pSVar17 = SettingsManager.InGameCurrent;
			if (((pSVar17 == null) ||(pSVar18 = pSVar17.Misc, pSVar18 == null)) ||(pSVar19 = pSVar18.ThunderspearPVP, pSVar19 == null)) goto label_05d24841;
			if (pSVar19._value != false) {
				pUVar26 = *ppUVar1;
				if ((pUVar26 == null) ||(pUVar28 = pUVar26.gameObject, pUVar28 == null)) goto label_05d24841;
				pUVar28.SetActive(false);
				pUVar26 = *ppUVar2;
				if ((pUVar26 == null) ||(pUVar28 = pUVar26.gameObject, pUVar28 == null)) goto label_05d24841;
				pUVar28.SetActive(true);
				pUVar26 = *ppUVar3;
				if ((pUVar26 == null) ||(pUVar28 = pUVar26.gameObject, pUVar28 == null)) goto label_05d24841;
				pUVar28.SetActive(false);
				pUVar26 = *ppUVar4;
				if ((pUVar26 == null) ||(pUVar28 = pUVar26.gameObject, pUVar28 == null)) goto label_05d24841;
				pUVar28.SetActive(false);
				pUVar26 = *ppUVar5;
				if ((pUVar26 == null) ||(pUVar28 = pUVar26.gameObject, pUVar28 == null)) goto label_05d24841;
				pUVar28.SetActive(true);
				pUVar26 = *targetAddress_03;
				if ((pUVar26 == null) ||(pUVar28 = pUVar26.gameObject, pUVar28 == null)) goto label_05d24841;
				pUVar28.SetActive(true);
				pUVar26 = *targetAddress_04;
				if ((pUVar26 == null) ||(pUVar28 = pUVar26.gameObject, pUVar28 == null)) goto label_05d24841;
				pUVar28.SetActive(false);
				pUVar26 = *targetAddress_05;
				if ((pUVar26 == null) ||(pUVar28 = pUVar26.gameObject, pUVar28 == null)) goto label_05d24841;
				pUVar28.SetActive(false);
				pUVar24 = *targetAddress_06;
				if ((pUVar24 == null) ||(pUVar28 = pUVar24.gameObject, pUVar28 == null)) goto label_05d24841;
				pUVar28.SetActive(false);
				pUVar24 = *targetAddress_07;
				if ((pUVar24 == null) ||(pUVar28 = pUVar24.gameObject, pUVar28 == null)) goto label_05d24841;
				pUVar28.SetActive(false);
			}
		}
		else {
			if (iVar12 == 3) {
				pUVar27 = this.transform;
				pUVar28 = ElementFactory.InstantiateAndBind(pUVar27, "Prefabs/InGame/HUDBottomAPG");
				this._hudBottom = pUVar28;
				pUVar28 = this._hudBottom;
				if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunBackground"), pUVar27 == null)) goto label_05d24841;
				pUVar26 = pUVar27.GetComponent<Image>();
				this._apgBackground = pUVar26;
				pUVar28 = this._hudBottom;
				if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunAmmoFillLeft"), pUVar27 == null)) goto label_05d24841;
				pUVar26 = pUVar27.GetComponent<Image>();
				this._ammoFillLeft = pUVar26;
				pUVar28 = this._hudBottom;
				if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunAmmoFillRight"), pUVar27 == null)) goto label_05d24841;
				pUVar26 = pUVar27.GetComponent<Image>();
				this._ammoFillRight = pUVar26;
				pUVar28 = this._hudBottom;
				if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunReload"), pUVar27 == null)) goto label_05d24841;
				pUVar26 = pUVar27.GetComponent<Image>();
				this._apgReload = pUVar26;
				pUVar28 = this._hudBottom;
				if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunShoot"), pUVar27 == null)) goto label_05d24841;
				pUVar26 = pUVar27.GetComponent<Image>();
				this._apgShoot = pUVar26;
				pUVar28 = this._hudBottom;
				if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunAmmoBackground"), pUVar27 == null)) goto label_05d24841;
				pUVar26 = pUVar27.GetComponent<Image>();
				this._apgAmmoBackground = pUVar26;
				pUVar28 = this._hudBottom;
				if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunAmmoLabelLeft"), pUVar27 == null)) goto label_05d24841;
				pUVar24 = pUVar27.GetComponent<Text>();
				this._ammoLabelLeft = pUVar24;
				pUVar28 = this._hudBottom;
				if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("GunAmmoLabelRight"), pUVar27 == null)) goto label_05d24841;
				pUVar24 = pUVar27.GetComponent<Text>();
				this._ammoLabelRight = pUVar24;
				pUVar26 = this._apgReload;
				if (pUVar26 == null) goto label_05d24841;
				uVar34._0_4_ = this.BackgroundVeryLowColor.r;
				uVar34._4_4_ = this.BackgroundVeryLowColor.g;
				uVar35._0_4_ = this.BackgroundVeryLowColor.b;
				uVar35._4_4_ = this.BackgroundVeryLowColor.a;
				goto label_05d236b6;
			}
			pUVar27 = this.transform;
			pUVar28 = ElementFactory.InstantiateAndBind(pUVar27, "Prefabs/InGame/HUDBottomBlade");
			this._hudBottom = pUVar28;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("BladeBackground"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar1 = &this._bladeBackground;
			this._bladeBackground = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("BladeReload"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar2 = &this._bladeReload;
			this._bladeReload = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("BladeOut"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar3 = &this._bladeOut;
			this._bladeOut = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("BladeFillLeft"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar4 = &this._bladeFillLeft;
			this._bladeFillLeft = pUVar26;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("BladeFillRight"), pUVar27 == null)) goto label_05d24841;
			pUVar26 = pUVar27.GetComponent<Image>();
			ppUVar5 = &this._bladeFillRight;
			this._bladeFillRight = pUVar26;
			pSVar29 = new List<GameObject>();
			this._bladeAmmoLeft = pSVar29;
			pSVar29 = new List<GameObject>();
			this._bladeAmmoRight = pSVar29;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("BladeAmmoGroupLeft"), pUVar27 == null)) goto label_05d24841;
			pUVar28 = pUVar27.gameObject;
			targetAddress_08 = &this._bladeAmmoGroupLeft;
			this._bladeAmmoGroupLeft = pUVar28;
			pUVar28 = this._hudBottom;
			if (((pUVar28 == null) ||(pUVar27 = pUVar28.transform, pUVar27 == null)) ||(pUVar27 = pUVar27.Find("BladeAmmoGroupRight"), pUVar27 == null)) goto label_05d24841;
			pUVar28 = pUVar27.gameObject;
			targetAddress_09 = &this._bladeAmmoGroupRight;
			this._bladeAmmoGroupRight = pUVar28;
			pUVar26 = this._bladeOut;
			if (pUVar26 == null) goto label_05d24841;
			pUVar26.set_color((Color)this.BackgroundVeryLowColor);
			pCVar20 = this._human;
			if ((pCVar20 == null) ||(pCVar16 = pCVar20.Setup, pCVar16 == null)) goto label_05d24841;
			bVar22 = pCVar16.HasWeapon;
			if (!bVar22) {
				pIVar30 = new GameObject[7];
				pUVar26 = *ppUVar1;
				if ((pUVar26 == null) ||(pIVar31 = (Il2CppClass)pUVar26.gameObject, pIVar30 == null)) goto label_05d24841;
				if (*(int)&pIVar30[1].monitor == 0) goto label_05d24846;
				pIVar30[2].klass = pIVar31;
				pUVar26 = *ppUVar2;
				if (pUVar26 == null) goto label_05d24841;
				pUVar28 = pUVar26.gameObject;
				if (((ulong)pIVar30[1].monitor & 0xfffffffe) == 0) goto label_05d24846;
				pIVar30[2].monitor = pUVar28;
				pUVar26 = *ppUVar3;
				if (pUVar26 == null) goto label_05d24841;
				pIVar31 = (Il2CppClass)pUVar26.gameObject;
				if (*(uint)&pIVar30[1].monitor < 3) goto label_05d24846;
				pIVar30[3].klass = pIVar31;
				pUVar26 = *ppUVar4;
				if (pUVar26 == null) goto label_05d24841;
				pUVar28 = pUVar26.gameObject;
				if (((ulong)pIVar30[1].monitor & 0xfffffffc) == 0) goto label_05d24846;
				pIVar30[3].monitor = pUVar28;
				pUVar26 = *ppUVar5;
				if (pUVar26 == null) goto label_05d24841;
				pIVar31 = (Il2CppClass)pUVar26.gameObject;
				if (*(uint)&pIVar30[1].monitor < 5) goto label_05d24846;
				pIVar30[4].klass = pIVar31;
				if (*(uint)&pIVar30[1].monitor < 6) goto label_05d24846;
				pIVar30[4].monitor = *targetAddress_08;
				if (*(uint)&pIVar30[1].monitor < 7) goto label_05d24846;
				pIVar30[5].klass = (Il2CppClass)*targetAddress_09;
				uVar23 = *(uint)&pIVar30[1].monitor;
				if (0 < (int)uVar23) {
					lVar33 = 0;
					do {
						if (uVar23 <= (uint)lVar33) goto label_05d24846;
						if ((&pIVar30[2].klass)[lVar33] == null) goto label_05d24841;
						((&pIVar30[2].klass)[lVar33]).SetActive(false);
						uVar23 = *(uint)&pIVar30[1].monitor;
						lVar33 = lVar33 + 1;
					} while ((int)lVar33 < (int)uVar23);
				}
			}
		}
		if (*targetAddress_02 != null) {
			(*targetAddress_02).AddComponent<HUDScaler>();
			pUVar28 = *targetAddress_02;
			uVar7 = (Vector3.upVector).x;
			uVar9 = (Vector3.upVector).y;
			offset_00.x = (float)uVar7 * 10.0;
			offset_00.y = (float)uVar9 * 10.0;
			ElementFactory.SetAnchor(pUVar28, 7, 7, offset_00);
			if (((*targetAddress_02 != null) &&(pUVar27 = (*targetAddress_02).transform, pUVar27 != null)) &&(pUVar27 = pUVar27.Find("SpecialFill"), pUVar27 != null)) {
				pUVar26 = pUVar27.GetComponent<Image>();
				this._specialFill = pUVar26;
				pUVar28 = this._hudBottom;
				if (((pUVar28 != null) &&(pUVar27 = pUVar28.transform, pUVar27 != null)) &&(pUVar27 = pUVar27.Find("SpecialIconBackground"), pUVar27 != null)) {
					pUVar26 = pUVar27.GetComponent<Image>();
					this._specialIconBackground = pUVar26;
					pUVar28 = this._hudBottom;
					if (((pUVar28 != null) &&(pUVar27 = pUVar28.transform, pUVar27 != null)) &&(pUVar27 = pUVar27.Find("SpecialIconFill"), pUVar27 != null)) {
						pUVar26 = pUVar27.GetComponent<Image>();
						this._specialIconFill = pUVar26;
						pUVar28 = this._hudBottom;
						if (((pUVar28 != null) &&(pUVar27 = pUVar28.transform, pUVar27 != null)) &&(pUVar27 = pUVar27.Find("GasFillLeft"), pUVar27 != null)) {
							pUVar26 = pUVar27.GetComponent<Image>();
							ppUVar1 = &this._gasFillLeft;
							this._gasFillLeft = pUVar26;
							pUVar28 = this._hudBottom;
							if (((pUVar28 != null) &&(pUVar27 = pUVar28.transform, pUVar27 != null)) &&(pUVar27 = pUVar27.Find("GasFillRight"), pUVar27 != null)) {
								pUVar26 = pUVar27.GetComponent<Image>();
								ppUVar2 = &this._gasFillRight;
								this._gasFillRight = pUVar26;
								pUVar28 = this._hudBottom;
								if (((pUVar28 != null) &&(pUVar27 = pUVar28.transform, pUVar27 != null)) &&(pUVar27 = pUVar27.Find("GasBackground"), pUVar27 != null)) {
									pUVar26 = pUVar27.GetComponent<Image>();
									ppUVar3 = &this._gasBackground;
									this._gasBackground = pUVar26;
									pCVar20 = this._human;
									if ((pCVar20 != null) &&(pCVar16 = pCVar20.Setup, pCVar16 != null)) {
										bVar22 = pCVar16.HasODM;
										if (!bVar22) {
											pIVar30 = new GameObject[3];
											pUVar26 = *ppUVar3;
											if ((pUVar26 == null) ||(pIVar31 = (Il2CppClass)pUVar26.gameObject, pIVar30 == null)) goto label_05d24841;
											if (*(int)&pIVar30[1].monitor == 0) {
	label_05d24846: ;
												throw new IndexOutOfRangeException();
											}
											pIVar30[2].klass = pIVar31;
											pUVar26 = *ppUVar1;
											if (pUVar26 == null) goto label_05d24841;
											pUVar28 = pUVar26.gameObject;
											if (((ulong)pIVar30[1].monitor & 0xfffffffe) == 0) goto label_05d24846;
											pIVar30[2].monitor = pUVar28;
											pUVar26 = *ppUVar2;
											if (pUVar26 == null) goto label_05d24841;
											pIVar31 = (Il2CppClass)pUVar26.gameObject;
											if (*(uint)&pIVar30[1].monitor < 3) goto label_05d24846;
											pIVar30[3].klass = pIVar31;
											uVar23 = *(uint)&pIVar30[1].monitor;
											if (0 < (int)uVar23) {
												lVar33 = 0;
												do {
													if (uVar23 <= (uint)lVar33) goto label_05d24846;
													if ((&pIVar30[2].klass)[lVar33] == null) goto label_05d24841;
													((&pIVar30[2].klass)[lVar33]).SetActive(false);
													uVar23 = *(uint)&pIVar30[1].monitor;
													lVar33 = lVar33 + 1;
												} while ((int)lVar33 < (int)uVar23);
											}
										}
										this._currentSpecialIcon = "";
										pUVar28 = this._hudBottom;
										if (((pUVar28 != null) &&(pUVar27 = pUVar28.transform, pUVar27 != null)) &&(pUVar27 = pUVar27.Find("HealthBar"), pUVar27 != null)) {
											pUVar26 = pUVar27.GetComponent<Image>();
											this._healthImage = pUVar26;
											pUVar26 = this._healthImage;
											if (pUVar26 != null) {
												pUVar26.enabled = false;
												if (((*targetAddress_02 != null) &&(pUVar27 = (*targetAddress_02).transform, pUVar27 != null)) &&(pUVar27 = pUVar27.Find("PerkCDTimer"), pUVar27 != null)) {
													pUVar26 = pUVar27.GetComponent<Image>();
													ppUVar1 = &this._perkCDImage;
													this._perkCDImage = pUVar26;
													pUVar28 = this._hudBottom;
													if (((pUVar28 != null) &&(pUVar27 = pUVar28.transform, pUVar27 != null)) &&(pUVar27 = pUVar27.Find("PerkCDTimerBackground"), pUVar27 != null)) {
														pUVar26 = pUVar27.GetComponent<Image>();
														this._perkCDBackgroundImage = pUVar26;
														pUVar26 = this._perkCDBackgroundImage;
														if (pUVar26 != null) {
															pUVar26.enabled = false;
															pUVar26 = *ppUVar1;
															if (pUVar26 != null) {
																pUVar26.enabled = false;
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
						}
					}
				}
			}
		}
	label_05d24841: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EA5")]
	[Address(RVA = "0x5C24860", Offset = "0x5C23860", VA = "0x5C24860")]
	public void SetBottomHUDActive(bool active)
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$SetBottomHUDActive): clean
		Object x;
		GameObject __this_00;
		bool bVar1;

		x = (Object)this._hudBottom;
		bVar1 = (x != null);
		if (bVar1) {
			__this_00 = this._hudBottom;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(active);
			return;
		}
		return;
	}

	[Token(Token = "0x6004EA6")]
	[Address(RVA = "0x5C248E0", Offset = "0x5C238E0", VA = "0x5C248E0")]
	public void SetSpecialIcon(string icon)
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$SetSpecialIcon): clean
		this._newSpecialIcon = icon;
		return;
	}

	[Token(Token = "0x6004EA7")]
	[Address(RVA = "0x5C24900", Offset = "0x5C23900", VA = "0x5C24900")]
	public void ShakeGas()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$ShakeGas): clean
		Human x;
		Image x_00;
		bool bVar1;

		x = this._human;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			x_00 = this._gasBackground;
			bVar1 = ((Object)x_00 != null);
			if (bVar1) {
				this.StartAnimator(this._gasBackground);
				this.StartAnimator(this._gasFillLeft);
				this.StartAnimator(this._gasFillRight);
				this._gasAnimationTimeLeft = 0.4;
			}
		}
		return;
	}

	[Token(Token = "0x6004EA8")]
	[Address(RVA = "0x5C24A90", Offset = "0x5C23A90", VA = "0x5C24A90")]
	public void Reload()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$Reload): clean
		Human x;
		Object x_00;
		Image pUVar1;
		InGameSet pSVar2;
		InGameMiscSettings pSVar3;
		BoolSetting pSVar4;
		bool bVar5;
		GameObject pUVar6;
		Animator pUVar7;
		uint uVar8;

		x = this._human;
		bVar5 = ((Object)x == null);
		if (!bVar5) {
			x_00 = (Object)this._hudBottom;
			bVar5 = (x_00 == null);
			if (!bVar5) {
				pUVar1 = this._bladeBackground;
				bVar5 = ((Object)pUVar1 != null);
				if (bVar5) {
					pUVar1 = this._bladeOut;
					if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
						pUVar6.SetActive(false);
						pUVar1 = this._bladeBackground;
						if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
							pUVar6.SetActive(false);
							pUVar1 = this._bladeFillLeft;
							if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
								pUVar6.SetActive(false);
								pUVar1 = this._bladeFillRight;
								if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
									pUVar6.SetActive(false);
									pUVar1 = this._bladeReload;
									if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
										pUVar6.SetActive(true);
										pUVar1 = this._bladeReload;
										if ((pUVar1 != null) &&(pUVar7 = pUVar1.GetComponent<Animator>(), pUVar7 != null)) {
											pUVar7.Update(0.0);
											this._reloadAnimationTimeLeft = 1.0;
											return;
										}
									}
								}
							}
						}
					}
				}
				else {
					pUVar1 = this._apgBackground;
					bVar5 = ((Object)pUVar1 != null);
					if (bVar5) {
						pUVar1 = this._apgShoot;
						if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
							pUVar6.SetActive(false);
							pUVar1 = this._apgAmmoBackground;
							if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
								pUVar6.SetActive(false);
								pUVar1 = this._apgBackground;
								if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
									pUVar6.SetActive(false);
									pUVar1 = this._apgReload;
									if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
										pUVar6.SetActive(true);
										pUVar1 = this._apgReload;
										if ((pUVar1 != null) &&(pUVar7 = pUVar1.GetComponent<Animator>(), pUVar7 != null)) {
											pUVar7.Update(0.0);
											uVar8 = 0x3f4ccccd;
	label_05d24fa6: ;
											this._reloadAnimationTimeLeft = (float)(int)(ulong)uVar8;
											this._shootAnimationTimeLeft = (float)(int)((ulong)uVar8 >> 0x20);
											return;
										}
									}
								}
							}
						}
					}
					else {
						pUVar1 = this._ahssBackgroundLeft;
						bVar5 = ((Object)pUVar1 != null);
						if (bVar5) {
							pUVar1 = this._ahssShootLeft;
							if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
								pUVar6.SetActive(false);
								pUVar1 = this._ahssShootRight;
								if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
									pUVar6.SetActive(false);
									pUVar1 = this._ahssEmptyLeft;
									if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
										pUVar6.SetActive(false);
										pUVar1 = this._ahssEmptyRight;
										if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
											pUVar6.SetActive(false);
											pUVar1 = this._ahssBackgroundLeft;
											if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
												pUVar6.SetActive(false);
												pUVar1 = this._ahssBackgroundRight;
												if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
													pUVar6.SetActive(false);
													pUVar1 = this._ahssReloadLeft;
													if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
														pUVar6.SetActive(true);
														pUVar1 = this._ahssReloadRight;
														if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
															pUVar6.SetActive(true);
															pUVar1 = this._ahssReloadLeft;
															if ((pUVar1 != null) &&(pUVar7 = pUVar1.GetComponent<Animator>(), pUVar7 != null)) {
																pUVar7.Update(0.0);
																pUVar1 = this._ahssReloadRight;
																if ((pUVar1 != null) &&(pUVar7 = pUVar1.GetComponent<Animator>(), pUVar7 != null)) {
																	pUVar7.Update(0.0);
																	uVar8 = 0x3faa9fbe;
																	goto label_05d24fa6;
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else {
							pUVar1 = this._tsBackground;
							bVar5 = ((Object)pUVar1 != null);
							if (!bVar5) {
								return;
							}
							pSVar2 = SettingsManager.InGameCurrent;
							if (((pSVar2 != null) &&(pSVar3 = pSVar2.Misc, pSVar3 != null)) &&(pSVar4 = pSVar3.ThunderspearPVP, pSVar4 != null)) {
								if (pSVar4._value != false) {
									return;
								}
								pUVar1 = this._tsBackground;
								if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
									pUVar6.SetActive(false);
									pUVar1 = this._tsShoot;
									if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
										pUVar6.SetActive(false);
										pUVar1 = this._tsReload;
										if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
											pUVar6.SetActive(true);
											pUVar1 = this._tsReload;
											if ((pUVar1 != null) &&(pUVar7 = pUVar1.GetComponent<Animator>(), pUVar7 != null)) {
												pUVar7.Update(0.0);
												pUVar1 = this._ammoFillLeft;
												if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
													pUVar6.SetActive(false);
													pUVar1 = this._ammoFillRight;
													if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
														pUVar6.SetActive(false);
														uVar8 = 0x3f800000;
														goto label_05d24fa6;
													}
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
		}
		return;
	}

	[Token(Token = "0x6004EA9")]
	[Address(RVA = "0x5C25130", Offset = "0x5C24130", VA = "0x5C25130")]
	public void ShootAPG()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$ShootAPG): clean
		Human x;
		Object x_00;
		Image pUVar1;
		bool bVar2;
		GameObject pUVar3;
		Animator __this_00;

		x = this._human;
		bVar2 = ((Object)x == null);
		if (!bVar2) {
			x_00 = (Object)this._hudBottom;
			bVar2 = (x_00 == null);
			if (!bVar2) {
				pUVar1 = this._apgBackground;
				bVar2 = ((Object)pUVar1 == null);
				if (!bVar2) {
					pUVar1 = this._apgShoot;
					if ((pUVar1 != null) &&(pUVar3 = pUVar1.gameObject, pUVar3 != null)) {
						pUVar3.SetActive(true);
						pUVar1 = this._apgShoot;
						if ((pUVar1 != null) &&(__this_00 = pUVar1.GetComponent<Animator>(), __this_00 != null)) {
							__this_00.Update(0.0);
							pUVar1 = this._apgAmmoBackground;
							if ((pUVar1 != null) &&(pUVar3 = pUVar1.gameObject, pUVar3 != null)) {
								pUVar3.SetActive(true);
								pUVar1 = this._apgBackground;
								if ((pUVar1 != null) &&(pUVar3 = pUVar1.gameObject, pUVar3 != null)) {
									pUVar3.SetActive(false);
									pUVar1 = this._apgReload;
									if ((pUVar1 != null) &&(pUVar3 = pUVar1.gameObject, pUVar3 != null)) {
										pUVar3.SetActive(false);
										this._reloadAnimationTimeLeft = 0.0;
										this._shootAnimationTimeLeft = 0.5;
										return;
									}
								}
							}
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004EAA")]
	[Address(RVA = "0x5C252E0", Offset = "0x5C242E0", VA = "0x5C252E0")]
	public void ShootAHSS(bool left, bool right)
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$ShootAHSS): clean
		Human x;
		Object x_00;
		Image pUVar1;
		bool bVar2;
		GameObject pUVar3;
		Animator pUVar4;

		x = this._human;
		bVar2 = ((Object)x == null);
		if (!bVar2) {
			x_00 = (Object)this._hudBottom;
			bVar2 = (x_00 == null);
			if (bVar2) {
				return;
			}
			pUVar1 = this._ahssBackgroundLeft;
			bVar2 = ((Object)pUVar1 == null);
			if (bVar2) {
				return;
			}
			if (left) {
				pUVar1 = this._ahssShootLeft;
				if ((pUVar1 == null) ||(pUVar3 = pUVar1.gameObject, pUVar3 == null)) goto label_05d2558b;
				pUVar3.SetActive(true);
				pUVar1 = this._ahssShootLeft;
				if ((pUVar1 == null) ||(pUVar4 = pUVar1.GetComponent<Animator>(), pUVar4 == null)) goto label_05d2558b;
				pUVar4.Update(0.0);
				pUVar1 = this._ahssBackgroundLeft;
				if ((pUVar1 == null) ||(pUVar3 = pUVar1.gameObject, pUVar3 == null)) goto label_05d2558b;
				pUVar3.SetActive(false);
				pUVar1 = this._ahssEmptyLeft;
				if ((pUVar1 == null) ||(pUVar3 = pUVar1.gameObject, pUVar3 == null)) goto label_05d2558b;
				pUVar3.SetActive(false);
				pUVar1 = this._ahssReloadLeft;
				if ((pUVar1 == null) ||(pUVar3 = pUVar1.gameObject, pUVar3 == null)) goto label_05d2558b;
				pUVar3.SetActive(false);
			}
			if (right) {
				pUVar1 = this._ahssShootRight;
				if ((pUVar1 == null) ||(pUVar3 = pUVar1.gameObject, pUVar3 == null)) {
	label_05d2558b: ;
					throw new NullReferenceException();
				}
				pUVar3.SetActive(true);
				pUVar1 = this._ahssShootRight;
				if ((pUVar1 == null) ||(pUVar4 = pUVar1.GetComponent<Animator>(), pUVar4 == null)) goto label_05d2558b;
				pUVar4.Update(0.0);
				pUVar1 = this._ahssBackgroundRight;
				if ((pUVar1 == null) ||(pUVar3 = pUVar1.gameObject, pUVar3 == null)) goto label_05d2558b;
				pUVar3.SetActive(false);
				pUVar1 = this._ahssEmptyRight;
				if ((pUVar1 == null) ||(pUVar3 = pUVar1.gameObject, pUVar3 == null)) goto label_05d2558b;
				pUVar3.SetActive(false);
				pUVar1 = this._ahssReloadRight;
				if ((pUVar1 == null) ||(pUVar3 = pUVar1.gameObject, pUVar3 == null)) goto label_05d2558b;
				pUVar3.SetActive(false);
			}
			this._reloadAnimationTimeLeft = 0.0;
			this._shootAnimationTimeLeft = 0.667;
		}
		return;
	}

	[Token(Token = "0x6004EAB")]
	[Address(RVA = "0x5C25590", Offset = "0x5C24590", VA = "0x5C25590")]
	public void ShootTS()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$ShootTS): clean
		Human x;
		Object x_00;
		Image pUVar1;
		InGameSet pSVar2;
		InGameMiscSettings pSVar3;
		BoolSetting pSVar4;
		bool bVar5;
		GameObject pUVar6;
		Animator __this_00;

		x = this._human;
		bVar5 = ((Object)x == null);
		if (!bVar5) {
			x_00 = (Object)this._hudBottom;
			bVar5 = (x_00 == null);
			if (!bVar5) {
				pUVar1 = this._tsBackground;
				bVar5 = ((Object)pUVar1 == null);
				if (!bVar5) {
					pSVar2 = SettingsManager.InGameCurrent;
					if (((pSVar2 != null) &&(pSVar3 = pSVar2.Misc, pSVar3 != null)) &&(pSVar4 = pSVar3.ThunderspearPVP, pSVar4 != null)) {
						if (pSVar4._value != false) {
							return;
						}
						pUVar1 = this._tsShoot;
						if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
							pUVar6.SetActive(true);
							pUVar1 = this._tsShoot;
							if ((pUVar1 != null) &&(__this_00 = pUVar1.GetComponent<Animator>(), __this_00 != null)) {
								__this_00.Update(0.0);
								pUVar1 = this._tsBackground;
								if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
									pUVar6.SetActive(false);
									pUVar1 = this._tsReload;
									if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
										pUVar6.SetActive(false);
										pUVar1 = this._ammoFillLeft;
										if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
											pUVar6.SetActive(true);
											pUVar1 = this._ammoFillRight;
											if ((pUVar1 != null) &&(pUVar6 = pUVar1.gameObject, pUVar6 != null)) {
												pUVar6.SetActive(true);
												this._reloadAnimationTimeLeft = 0.0;
												this._shootAnimationTimeLeft = 1.0;
												return;
											}
										}
									}
								}
							}
						}
					}
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004EAC")]
	[Address(RVA = "0x5C257C0", Offset = "0x5C247C0", VA = "0x5C257C0")]
	private void Update()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$Update): 1 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		byte bVar3;
		Human pCVar4;
		BaseUseable pCVar5;
		BaseUseable pCVar6;
		BasicTitan x;
		bool bVar7;
		float fVar9;

		pCVar4 = this._human;
		bVar7 = ((Object)pCVar4 != null);
		if (bVar7) {
			fVar1 = this._reloadAnimationTimeLeft;
			fVar9 = Time.deltaTime;
			this._reloadAnimationTimeLeft = fVar1 - fVar9;
			fVar1 = this._gasAnimationTimeLeft;
			fVar9 = Time.deltaTime;
			this._gasAnimationTimeLeft = fVar1 - fVar9;
			fVar1 = this._shootAnimationTimeLeft;
			fVar9 = Time.deltaTime;
			this._shootAnimationTimeLeft = fVar1 - fVar9;
			this.UpdateHumanSpecial();
			this.UpdateGas();
			this.UpdatePerkTimer();
			pCVar4 = this._human;
			if (pCVar4 == null) {
				throw new NullReferenceException();
			}
			pCVar5 = pCVar4.Weapon;
			if (pCVar5 != null) {
				pCVar6 = pCVar5.klass;
				bVar2 = (pCVar6._2).typeHierarchyDepth;
				bVar3 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
				if ((bVar3 <= bVar2) &&((pCVar6._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar3)[-1].field_0x57] ==typeof(BladeWeapon))) {
					this.UpdateBlade();
					return;
				}
				bVar3 = (typeof(APGWeapon)._2).typeHierarchyDepth;
				if ((bVar3 <= bVar2) &&((pCVar6._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar3)[-1].field_0x57] ==typeof(APGWeapon))) {
					this.UpdateAPG();
					return;
				}
				bVar3 = (typeof(AHSSWeapon)._2).typeHierarchyDepth;
				if ((bVar3 <= bVar2) &&((pCVar6._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar3)[-1].field_0x57] ==typeof(AHSSWeapon))) {
					this.UpdateAHSS();
					return;
				}
				bVar3 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
				if ((bVar3 <= bVar2) &&((pCVar6._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar3)[-1].field_0x57] ==typeof(ThunderspearWeapon))) {
					this.UpdateTS();
					return;
				}
			}
		}
		else {
			x = this._playerTitan;
			bVar7 = ((Object)x != null);
			if (bVar7) {
				this.UpdatePlayerTitan();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004EAD")]
	[Address(RVA = "0x5C27F10", Offset = "0x5C26F10", VA = "0x5C27F10")]
	private void StopAnimator(Image obj)
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$StopAnimator): clean
		GameObject target;
		Dictionary<object, object> pSVar1;
		bool bVar2;
		Animator __this_00;
		float fVar3;

		target = this._hudBottom;
		bVar2 = MiscExtensions.GetActive(target);
		if (bVar2) {
			pSVar1 = (Dictionary<object, object>)this._AnimationCache;
			if (pSVar1 == null) goto label_05d2805e;
			bVar2 = pSVar1.ContainsKey((object)obj);
			if (bVar2) {
				pSVar1 = (Dictionary<object, object>)this._AnimationCache;
				if (pSVar1 == null) goto label_05d2805e;
				__this_00 = pSVar1.get_Item((object)obj);
			}
			else {
				if (obj == null) goto label_05d2805e;
				__this_00 = obj.GetComponent<Animator>();
				pSVar1 = (Dictionary<object, object>)this._AnimationCache;
				if (pSVar1 == null) goto label_05d2805e;
				pSVar1.Add((object)obj, (object)__this_00);
			}
			if (__this_00 == null) {
	label_05d2805e: ;
				throw new NullReferenceException();
			}
			fVar3 = __this_00.speed;
			if ((fVar3 != 0.0) || (NAN(fVar3))) {
				__this_00.Update(0.0);
				__this_00.speed = 0.0;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004EAE")]
	[Address(RVA = "0x5C249C0", Offset = "0x5C239C0", VA = "0x5C249C0")]
	private void StartAnimator(Image obj)
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$StartAnimator): clean
		GameObject target;
		bool bVar1;
		Animator __this_00;
		float fVar2;

		target = this._hudBottom;
		bVar1 = MiscExtensions.GetActive(target);
		if (!bVar1) {
			return;
		}
		if ((obj == null) ||(__this_00 = obj.GetComponent<Animator>(), __this_00 == null)) {
			throw new NullReferenceException();
		}
		fVar2 = __this_00.speed;
		if (fVar2 != 0.0) {
			return;
		}
		if (NAN(fVar2)) {
			return;
		}
		__this_00.Update(0.0);
		__this_00.speed = 1.0;
		return;
	}

	[Token(Token = "0x6004EAF")]
	[Address(RVA = "0x5C26120", Offset = "0x5C25120", VA = "0x5C26120")]
	private void UpdatePerkTimer()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$UpdatePerkTimer): clean
		Human pCVar1;
		HumanStats pCVar2;
		DivisivePowerPerk pAVar3;
		Image pUVar4;
		bool bVar5;
		float value;

		pCVar1 = this._human;
		if (((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) ||(pAVar3 = (DivisivePowerPerk)pCVar2.VerticalDashPerk, pAVar3 == null)) goto label_05d26301;
		bVar5 = pAVar3.PerkEnabled;
		if (bVar5) {
	label_05d2619c: ;
			pCVar1 = this._human;
			if (((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) ||(pAVar3 = (DivisivePowerPerk)pCVar2.OmniDashPerk, pAVar3 == null)) goto label_05d26301;
			bVar5 = pAVar3.PerkEnabled ;
			pCVar1 = this._human;
			if (bVar5) {
				if ((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) goto label_05d26301;
				pAVar3 = (DivisivePowerPerk)pCVar2.OmniDashPerk;
			}
			else {
				if (((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) ||(pAVar3 = (DivisivePowerPerk)pCVar2.VerticalDashPerk, pAVar3 == null)) goto label_05d26301;
				bVar5 = pAVar3.PerkEnabled;
				if (!bVar5) goto label_05d262d2;
				pCVar1 = this._human;
				if ((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) goto label_05d26301;
				pAVar3 = (DivisivePowerPerk)pCVar2.VerticalDashPerk;
			}
			if (pAVar3 == null) goto label_05d26301;
			value = pAVar3.GetPowerRatio();
			if ((0.0 < value) && ((value != 1.0 || (NAN(value))))) {
				pUVar4 = this._perkCDImage;
				if (pUVar4 != null) {
					pUVar4.enabled = true;
					pUVar4 = this._perkCDBackgroundImage;
					if (pUVar4 != null) {
						pUVar4.enabled = true;
						pUVar4 = this._perkCDImage;
						if (pUVar4 != null) {
							pUVar4.fillAmount = value;
							return;
						}
					}
				}
				goto label_05d26301;
			}
		}
		else {
			pCVar1 = this._human;
			if (((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) ||(pAVar3 = (DivisivePowerPerk)pCVar2.OmniDashPerk, pAVar3 == null)) goto label_05d26301;
			bVar5 = pAVar3.PerkEnabled ;
			if (bVar5) goto label_05d2619c;
		}
	label_05d262d2: ;
		pUVar4 = this._perkCDImage;
		if (pUVar4 != null) {
			pUVar4.enabled = false;
			pUVar4 = this._perkCDBackgroundImage;
			if (pUVar4 != null) {
				pUVar4.enabled = false;
				return;
			}
		}
	label_05d26301: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EB0")]
	[Address(RVA = "0x5C25A30", Offset = "0x5C24A30", VA = "0x5C25A30")]
	private void UpdateHumanSpecial()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$UpdateHumanSpecial): 9 lines keep C-only constructs
		String* targetAddress;
		Human pCVar1;
		BaseUseable __this_00;
		Image pUVar2;
		String path;
		byte[] auVar3 = new byte[16];
		bool bVar4;
		int iVar5;
		int iVar6;
		String name;
		Texture2D texture;
		Sprite value;
		GameObject pUVar7;
		float value_00;

		pCVar1 = this._human;
		if (pCVar1 == null) goto label_05d25e32;
		__this_00 = pCVar1.Special;
		if (__this_00 == null) {
			pUVar2 = this._specialFill;
			if (pUVar2 == null) goto label_05d25e32;
			pUVar2.fillAmount = 0.0;
			pUVar2 = this._specialIconFill;
			if (pUVar2 == null) goto label_05d25e32;
			pUVar2.fillAmount = 0.0;
		}
		else {
			value_00 = __this_00.GetCooldownRatio();
			pUVar2 = this._specialFill;
			if (pUVar2 == null) goto label_05d25e32;
			pUVar2.fillAmount = value_00;
			pUVar2 = this._specialIconFill;
			if (pUVar2 == null) goto label_05d25e32;
			pUVar2.fillAmount = value_00;
			bVar4 = (this._currentSpecialIcon != this._newSpecialIcon);
			if (bVar4) {
				targetAddress = &this._currentSpecialIcon;
				this._currentSpecialIcon = this._newSpecialIcon;
				bVar4 = (this._currentSpecialIcon != "");
				if (bVar4) {
					path = ResourcePaths.UI;
					name = String.Concat("Icons/Specials/", *targetAddress);
					texture = (Texture2D)ResourceManager.LoadAsset(path, name, true, false);
					if (texture == null) {
						throw new NullReferenceException();
					}
					if (texture.klass != typeof(Texture2D)) {
						throw new InvalidCastException();
					}
					iVar5 = texture.get_width();
					iVar6 = texture.get_height();
					auVar3._4_4_ = (float)iVar6;
					auVar3._0_4_ = (float)iVar5;
					auVar3._8_8_ = 0;
					value = Sprite.Create(texture, (Rect)(auVar3 << 0x40), (Vector2)0x3f0000003f000000);
					pUVar2 = this._specialIconBackground;
					if (pUVar2 == null) {
						throw new NullReferenceException();
					}
					pUVar2.sprite = value;
					pUVar2 = this._specialIconFill;
					if (pUVar2 == null) {
						throw new NullReferenceException();
					}
					pUVar2.sprite = value;
				}
			}
		}
		pUVar2 = this._specialIconBackground;
		if (pUVar2 != null) {
			pUVar7 = pUVar2.gameObject;
			pCVar1 = this._human;
			if (pCVar1 != null) {
				if (pCVar1.Special == null) {
					bVar4 = false;
				}
				else {
					bVar4 = (this._currentSpecialIcon != "");
				}
				if (pUVar7 != null) {
					pUVar7.SetActive(bVar4);
					pUVar2 = this._specialIconFill;
					if (pUVar2 != null) {
						pUVar7 = pUVar2.gameObject;
						pCVar1 = this._human;
						if (pCVar1 != null) {
							if (pCVar1.Special == null) {
								bVar4 = false;
							}
							else {
								bVar4 = (this._currentSpecialIcon != "") ;
							}
							if (pUVar7 != null) {
								pUVar7.SetActive(bVar4);
								return;
							}
						}
					}
				}
			}
		}
	label_05d25e32: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EB1")]
	[Address(RVA = "0x5C25E70", Offset = "0x5C24E70", VA = "0x5C25E70")]
	private void UpdateGas()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$UpdateGas): 12 lines keep C-only constructs
		float fVar1;
		Human pCVar2;
		HumanStats pCVar3;
		Image pUVar4;
		float value;
		ulong uVar5;
		ulong uVar6;
		Color UVar7;

		pCVar2 = this._human;
		if ((pCVar2 != null) &&(pCVar3 = pCVar2.Stats, pCVar3 != null)) {
			fVar1 = pCVar3.MaxGas;
			value = 0.0;
			if (0.0 < fVar1) {
				value = pCVar3.CurrentGas / fVar1;
			}
			pUVar4 = this._gasFillLeft;
			if (pUVar4 != null) {
				pUVar4.fillAmount = value;
				pUVar4 = this._gasFillRight;
				if (pUVar4 != null) {
					pUVar4.fillAmount = value;
					if (value <= 0.0) {
						pUVar4 = this._gasBackground;
						if (pUVar4 != null) {
							uVar5._0_4_ = this.BackgroundEmptyColor.r;
							uVar5._4_4_ = this.BackgroundEmptyColor.g;
							uVar6._0_4_ = this.BackgroundEmptyColor.b;
							uVar6._4_4_ = this.BackgroundEmptyColor.a;
	label_05d25fb2: ;
							UVar7.b = (float)(int)uVar6;
							UVar7.a = (float)(int)((ulong)uVar6 >> 0x20);
							UVar7.r = (float)(int)uVar5;
							UVar7.g = (float)(int)((ulong)uVar5 >> 0x20);
							pUVar4.set_color(UVar7);
							if (0.0 < this._gasAnimationTimeLeft) {
								return;
							}
							this.StopAnimator(this._gasBackground);
							this.StopAnimator(this._gasFillLeft);
							this.StopAnimator(this._gasFillRight);
							return;
						}
					}
					else if (value <= 0.15) {
						pUVar4 = this._gasFillLeft;
						if (pUVar4 != null) {
							pUVar4.set_color((Color)this.FillVeryLowColor);
							pUVar4 = this._gasFillRight;
							if (pUVar4 != null) {
								pUVar4.set_color((Color)this.FillVeryLowColor);
								pUVar4 = this._gasBackground;
								if (pUVar4 != null) {
									pUVar4.set_color((Color)this.BackgroundVeryLowColor);
									this.StartAnimator(this._gasBackground);
									this.StartAnimator(this._gasFillLeft);
									this.StartAnimator(this._gasFillRight);
									return;
								}
							}
						}
					}
					else {
						pUVar4 = this._gasFillLeft;
						if (value <= 0.3) {
							if (pUVar4 != null) {
								pUVar4.set_color((Color)this.FillLowColor);
								pUVar4 = this._gasFillRight;
								if (pUVar4 != null) {
									pUVar4.set_color((Color)this.FillLowColor);
									pUVar4 = this._gasBackground;
									if (pUVar4 != null) {
										uVar5._0_4_ = this.BackgroundLowColor.r;
										uVar5._4_4_ = this.BackgroundLowColor.g;
										uVar6._0_4_ = this.BackgroundLowColor.b;
										uVar6._4_4_ = this.BackgroundLowColor.a;
										goto label_05d25fb2;
									}
								}
							}
						}
						else if (pUVar4 != null) {
							pUVar4.set_color((Color)this.FillNormalColor);
							pUVar4 = this._gasFillRight;
							if (pUVar4 != null) {
								pUVar4.set_color((Color)this.FillNormalColor);
								pUVar4 = this._gasBackground;
								if (pUVar4 != null) {
									uVar5._0_4_ = this.BackgroundNormalColor.r;
									uVar5._4_4_ = this.BackgroundNormalColor.g;
									uVar6._0_4_ = this.BackgroundNormalColor.b;
									uVar6._4_4_ = this.BackgroundNormalColor.a;
									goto label_05d25fb2;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EB2")]
	[Address(RVA = "0x5C26310", Offset = "0x5C25310", VA = "0x5C26310")]
	private void UpdateBlade()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$UpdateBlade): 13 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		int iVar3;
		uint uVar4;
		Human pCVar5;
		BaseUseable pCVar6;
		Image pUVar7;
		List<GameObject> pSVar8;
		GameObject[] pUVar9;
		bool bVar11;
		GameObject pUVar12;
		Animator __this_00;
		Object pUVar13;
		Transform pUVar14;
		int iVar15;
		Image pUVar16;
		float fVar17;
		ulong uVar18;
		ulong uVar19;
		Color UVar20;
		Quaternion value;
		Vector3 UStack_40;

		pCVar5 = this._human;
		if ((pCVar5 == null) ||(pCVar6 = pCVar5.Weapon, pCVar6 == null)) goto label_05d26ad7;
		bVar2 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
		if (((pCVar6.klass._2).typeHierarchyDepth < bVar2) ||((pCVar6.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BladeWeapon))) {
			throw new InvalidCastException();
		}
		pUVar16 = this._bladeFillLeft;
		if (pUVar16 == null) goto label_05d26ad7;
		fVar17 = *(float)&(*(ulong)((sbyte)pCVar6 + 0x40)) / *(float)((long)&(*(ulong)((sbyte)pCVar6 + 0x38)) + 4);
		pUVar12 = pUVar16.gameObject;
		if (pUVar12 == null) goto label_05d26ad7;
		bVar11 = pUVar12.activeSelf;
		if (bVar11) {
			pUVar16 = this._bladeFillRight;
			if (pUVar16 == null) goto label_05d26ad7;
			pUVar7 = this._bladeFillLeft;
			pUVar16.fillAmount = fVar17;
			if (pUVar7 == null) goto label_05d26ad7;
			pUVar7.fillAmount = fVar17;
			pUVar16 = this._bladeFillLeft;
			if (fVar17 <= 0.25) {
				if (pUVar16 == null) goto label_05d26ad7;
				pUVar16.set_color((Color)this.FillVeryLowColor);
				pUVar16 = this._bladeFillRight;
				if (pUVar16 == null) goto label_05d26ad7;
				pUVar16.set_color((Color)this.FillVeryLowColor);
				pUVar16 = this._bladeBackground;
				if (pUVar16 == null) goto label_05d26ad7;
				uVar18._0_4_ = this.BackgroundVeryLowColor.r;
				uVar18._4_4_ = this.BackgroundVeryLowColor.g;
				uVar19._0_4_ = this.BackgroundVeryLowColor.b;
				uVar19._4_4_ = this.BackgroundVeryLowColor.a;
			}
			else {
				if (pUVar16 == null) goto label_05d26ad7;
				pUVar16.set_color((Color)this.BladeFillNormalColor);
				pUVar16 = this._bladeFillRight;
				if (pUVar16 == null) goto label_05d26ad7;
				pUVar16.set_color((Color)this.BladeFillNormalColor);
				pUVar16 = this._bladeBackground;
				if (pUVar16 == null) goto label_05d26ad7;
				uVar18._0_4_ = this.BackgroundNormalColor.r;
				uVar18._4_4_ = this.BackgroundNormalColor.g;
				uVar19._0_4_ = this.BackgroundNormalColor.b;
				uVar19._4_4_ = this.BackgroundNormalColor.a;
			}
			UVar20.b = (float)(int)uVar19;
			UVar20.a = (float)(int)((ulong)uVar19 >> 0x20);
			UVar20.r = (float)(int)uVar18;
			UVar20.g = (float)(int)((ulong)uVar18 >> 0x20);
			pUVar16.set_color(UVar20);
		}
		if (0.0 < fVar17) {
	label_05d265ec: ;
			pUVar16 = this._bladeBackground;
			if ((pUVar16 == null) ||(pUVar12 = pUVar16.gameObject, pUVar12 == null)) goto label_05d26ad7;
			bVar11 = pUVar12.activeSelf;
			if ((!bVar11) && (this._reloadAnimationTimeLeft <= 0.0)) {
				pUVar16 = this._bladeReload;
				if ((pUVar16 == null) ||(pUVar12 = pUVar16.gameObject, pUVar12 == null)) goto label_05d26ad7;
				pUVar12.SetActive(false);
				if (0.0 < fVar17) {
					pUVar16 = this._bladeBackground;
					if ((pUVar16 == null) ||(pUVar12 = pUVar16.gameObject, pUVar12 == null)) goto label_05d26ad7;
					pUVar12.SetActive(true);
					pUVar16 = this._bladeOut;
					if ((pUVar16 == null) ||(pUVar12 = pUVar16.gameObject, pUVar12 == null)) goto label_05d26ad7;
					pUVar12.SetActive(false);
					pUVar16 = this._bladeFillLeft;
					if ((pUVar16 == null) ||(pUVar12 = pUVar16.gameObject, pUVar12 == null)) goto label_05d26ad7;
					pUVar12.SetActive(true);
					pUVar16 = this._bladeFillRight;
					if ((pUVar16 == null) ||(pUVar12 = pUVar16.gameObject, pUVar12 == null)) goto label_05d26ad7;
					pUVar12.SetActive(true);
					pUVar16 = this._bladeFillRight;
					if (pUVar16 == null) goto label_05d26ad7;
					pUVar7 = this._bladeFillLeft;
					pUVar16.fillAmount = fVar17;
					if (pUVar7 == null) goto label_05d26ad7;
					pUVar7.fillAmount = fVar17;
				}
			}
		}
		else {
			pUVar16 = this._bladeOut;
			if ((pUVar16 == null) ||(pUVar12 = pUVar16.gameObject, pUVar12 == null)) goto label_05d26ad7;
			bVar11 = pUVar12.activeSelf;
			if (bVar11) goto label_05d265ec;
			pUVar16 = this._bladeReload;
			if ((pUVar16 == null) ||(pUVar12 = pUVar16.gameObject, pUVar12 == null)) goto label_05d26ad7;
			bVar11 = pUVar12.activeSelf;
			if (bVar11) goto label_05d265ec;
			pUVar16 = this._bladeOut;
			if ((pUVar16 == null) ||(pUVar12 = pUVar16.gameObject, pUVar12 == null)) goto label_05d26ad7;
			pUVar12.SetActive(true);
			pUVar16 = this._bladeOut;
			if ((pUVar16 == null) ||(__this_00 = pUVar16.GetComponent<Animator>(), __this_00 == null)) goto label_05d26ad7;
			__this_00.Update(0.0);
			pUVar16 = this._bladeBackground;
			if ((pUVar16 == null) ||(pUVar12 = pUVar16.gameObject, pUVar12 == null)) goto label_05d26ad7;
			pUVar12.SetActive(false);
		}
		pSVar8 = this._bladeAmmoLeft;
		if (pSVar8 != null) {
			iVar3 = pSVar8._size;
			fVar17 = (*(uint)((sbyte)pCVar6 + 0x48));
			if ((int)fVar17 < iVar3) {
				if (0 < iVar3 - (int)fVar17) {
					iVar15 = 0;
					do {
						pSVar8 = this._bladeAmmoLeft;
						if (pSVar8 == null) goto label_05d26ad7;
						pUVar13 = (Object)pSVar8.get_Item(0);
						Object.Destroy(pUVar13);
						pSVar8 = this._bladeAmmoRight;
						if (pSVar8 == null) goto label_05d26ad7;
						pUVar13 = (Object)pSVar8.get_Item(0);
						Object.Destroy(pUVar13);
						pSVar8 = this._bladeAmmoLeft;
						if (pSVar8 == null) goto label_05d26ad7;
						pSVar8.RemoveAt(0);
						pSVar8 = this._bladeAmmoRight;
						if (pSVar8 == null) goto label_05d26ad7;
						pSVar8.RemoveAt(0);
						iVar15 = iVar15 + 1;
					} while (iVar15 < iVar3 - (int)(*(uint)((sbyte)pCVar6 + 0x48)));
				}
			}
			else if ((iVar3 < (int)fVar17) && (0 < (int)fVar17 - iVar3)) {
				iVar15 = 0;
				do {
					pUVar12 = this._bladeAmmoGroupLeft;
					if (pUVar12 == null) goto label_05d26ad7;
					pSVar8 = this._bladeAmmoLeft;
					pUVar14 = pUVar12.transform;
					pUVar12 = ElementFactory.InstantiateAndBind(pUVar14, "Prefabs/InGame/HUDBladeAmmo");
					if (pSVar8 == null) goto label_05d26ad7;
					piVar1 = &pSVar8._version;
					*piVar1 = *piVar1 + 1;
					pUVar9 = pSVar8._items;
					if (pUVar9 == null) goto label_05d26ad7;
					uVar4 = pSVar8._size;
					if (uVar4 < (uint)pUVar9.Length) {
						pSVar8._size = uVar4 + 1;
						pUVar9[(int)uVar4] = pUVar12;
					}
					else {
						pSVar8.AddWithResize((object)pUVar12);
					}
					pUVar12 = this._bladeAmmoGroupRight;
					if (pUVar12 == null) goto label_05d26ad7;
					pUVar14 = pUVar12.transform;
					pUVar12 = ElementFactory.InstantiateAndBind(pUVar14, "Prefabs/InGame/HUDBladeAmmo");
					if (pUVar12 == null) goto label_05d26ad7;
					pUVar14 = pUVar12.transform;
					UStack_40.x = 0.0;
					UStack_40.y = 3.1415927;
					UStack_40.z = 0.0;
					value = Quaternion.Internal_FromEulerRad(ref UStack_40);
					if (pUVar14 == null) goto label_05d26ad7;
					pUVar14.localRotation = value;
					pSVar8 = this._bladeAmmoRight;
					if (pSVar8 == null) goto label_05d26ad7;
					piVar1 = &pSVar8._version;
					*piVar1 = *piVar1 + 1;
					pUVar9 = pSVar8._items;
					if (pUVar9 == null) goto label_05d26ad7;
					uVar4 = pSVar8._size;
					if (uVar4 < (uint)pUVar9.Length) {
						pSVar8._size = uVar4 + 1;
						pUVar9[(int)uVar4] = pUVar12;
					}
					else {
						pSVar8.AddWithResize((object)pUVar12);
					}
					iVar15 = iVar15 + 1;
				} while (iVar15 < (int)(*(uint)((sbyte)pCVar6 + 0x48)) - iVar3);
			}
			return;
		}
	label_05d26ad7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EB3")]
	[Address(RVA = "0x5C26AF0", Offset = "0x5C25AF0", VA = "0x5C26AF0")]
	private void UpdateAPG()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$UpdateAPG): 13 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		Human pCVar3;
		BaseUseable pCVar4;
		Image __this_00;
		Text pUVar5;
		Text pUVar6;
		bool bVar7;
		String pSVar8;
		GameObject pUVar9;
		Image pUVar10;
		float fVar11;
		ulong uVar12;
		ulong uVar13;
		Color UVar14;
		Color UVar15;
		Color UVar16;
		Color UVar17;
		Color UVar18;

		pCVar3 = this._human;
		if ((pCVar3 != null) &&(pCVar4 = pCVar3.Weapon, pCVar4 != null)) {
			bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
			if (((pCVar4.klass._2).typeHierarchyDepth < bVar1) ||((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(AmmoWeapon))) {
				throw new InvalidCastException();
			}
			iVar2 = *(int)((long)&(*(ulong)((sbyte)pCVar4 + 0x40)) + 4);
			fVar11 = (*(uint)((sbyte)pCVar4 + 0x48));
			if (iVar2 < 1) {
				if (fVar11 == -NAN) {
					fVar11 = 1.0;
				}
				else {
					fVar11 = 0.0;
				}
			}
			else {
				fVar11 = (float)(int)fVar11 / (float)iVar2;
			}
			pUVar10 = this._ammoFillRight;
			if (pUVar10 != null) {
				__this_00 = this._ammoFillLeft;
				pUVar10.fillAmount = fVar11;
				if (__this_00 != null) {
					__this_00.fillAmount = fVar11;
					if (fVar11 <= 0.0) {
						pUVar10 = this._apgBackground;
						if (pUVar10 == null) goto label_05d26f93;
						pUVar10.set_color((Color)this.BackgroundVeryLowColor);
						pUVar10 = this._apgAmmoBackground;
						if (pUVar10 == null) goto label_05d26f93;
						pUVar10.set_color((Color)this.BackgroundVeryLowColor);
						pUVar10 = this._apgShoot;
						if (pUVar10 == null) goto label_05d26f93;
						uVar12._0_4_ = this.BackgroundVeryLowColor.r;
						uVar12._4_4_ = this.BackgroundVeryLowColor.g;
						uVar13._0_4_ = this.BackgroundVeryLowColor.b;
						uVar13._4_4_ = this.BackgroundVeryLowColor.a;
					}
					else {
						pUVar10 = this._apgBackground;
						if (fVar11 <= 0.5) {
							if (pUVar10 == null) goto label_05d26f93;
							pUVar10.set_color((Color)this.BackgroundLowColor);
							pUVar10 = this._apgAmmoBackground;
							if (pUVar10 == null) goto label_05d26f93;
							pUVar10.set_color((Color)this.BackgroundLowColor);
							pUVar10 = this._apgShoot;
							if (pUVar10 == null) goto label_05d26f93;
							uVar12._0_4_ = this.BackgroundLowColor.r;
							uVar12._4_4_ = this.BackgroundLowColor.g;
							uVar13._0_4_ = this.BackgroundLowColor.b;
							uVar13._4_4_ = this.BackgroundLowColor.a;
						}
						else {
							if (pUVar10 == null) goto label_05d26f93;
							pUVar10.set_color((Color)this.BackgroundNormalColor);
							pUVar10 = this._apgAmmoBackground;
							if (pUVar10 == null) goto label_05d26f93;
							pUVar10.set_color((Color)this.BackgroundNormalColor);
							pUVar10 = this._apgShoot;
							if (pUVar10 == null) goto label_05d26f93;
							uVar12._0_4_ = this.BackgroundNormalColor.r;
							uVar12._4_4_ = this.BackgroundNormalColor.g;
							uVar13._0_4_ = this.BackgroundNormalColor.b;
							uVar13._4_4_ = this.BackgroundNormalColor.a;
						}
					}
					UVar14.b = (float)(int)uVar13;
					UVar14.a = (float)(int)((ulong)uVar13 >> 0x20);
					UVar14.r = (float)(int)uVar12;
					UVar14.g = (float)(int)((ulong)uVar12 >> 0x20);
					pUVar10.set_color(UVar14);
					pUVar5 = this._ammoLabelLeft;
					pUVar6 = this._ammoLabelRight;
					pSVar8 = ((*(ulong)((sbyte)pCVar4 + 0x40))).ToString();
					if ((pUVar6 != null) &&(pUVar6.set_text(pSVar8), pUVar5 != null)) {
						pUVar5.set_text(pSVar8);
						pUVar5 = this._ammoLabelLeft;
						if (*(int)&(*(ulong)((sbyte)pCVar4 + 0x40)) == 0) {
							if (pUVar5 == null) goto label_05d26f93;
							UVar17.b = 0.0;
							UVar17.a = 1.0;
							UVar17.r = 1.0;
							UVar17.g = 0.0;
							pUVar5.set_color(UVar17);
							pUVar5 = this._ammoLabelRight;
							if (pUVar5 == null) goto label_05d26f93;
							UVar18.b = 0.0;
							UVar18.a = 1.0;
							UVar18.r = 1.0;
							UVar18.g = 0.0;
							pUVar5.set_color(UVar18);
							pUVar10 = this._apgBackground;
						}
						else {
							if (pUVar5 == null) goto label_05d26f93;
							UVar15.b = 0.0;
							UVar15.a = 1.0;
							UVar15.r = 0.0;
							UVar15.g = 1.0;
							pUVar5.set_color(UVar15);
							pUVar5 = this._ammoLabelRight;
							if (pUVar5 == null) goto label_05d26f93;
							UVar16.b = 0.0;
							UVar16.a = 1.0;
							UVar16.r = 0.0;
							UVar16.g = 1.0;
							pUVar5.set_color(UVar16);
							pUVar10 = this._apgBackground;
						}
						if ((pUVar10 != null) &&(pUVar9 = pUVar10.gameObject, pUVar9 != null)) {
							bVar7 = pUVar9.activeSelf;
							if ((bVar7) ||((0.0 < this._reloadAnimationTimeLeft ||(0.0 < this._shootAnimationTimeLeft)))) {
								return;
							}
							pUVar10 = this._apgBackground;
							if ((pUVar10 != null) &&(pUVar9 = pUVar10.gameObject, pUVar9 != null)) {
								pUVar9.SetActive(true);
								pUVar10 = this._apgAmmoBackground;
								if ((pUVar10 != null) &&(pUVar9 = pUVar10.gameObject, pUVar9 != null)) {
									pUVar9.SetActive(false);
									pUVar10 = this._apgReload;
									if ((pUVar10 != null) &&(pUVar9 = pUVar10.gameObject, pUVar9 != null)) {
										pUVar9.SetActive(false);
										pUVar10 = this._apgShoot;
										if ((pUVar10 != null) &&(pUVar9 = pUVar10.gameObject, pUVar9 != null)) {
											pUVar9.SetActive(false);
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
	label_05d26f93: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EB4")]
	[Address(RVA = "0x5C26FA0", Offset = "0x5C25FA0", VA = "0x5C26FA0")]
	private void UpdateAHSS()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$UpdateAHSS): 15 lines keep C-only constructs
		IntPtr __this_00;
		Color pUVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		byte bVar6;
		Human pCVar7;
		BaseUseable pCVar8;
		Text pUVar9;
		Text pUVar10;
		bool bVar11;
		float fVar12;
		String pSVar13;
		GameObject pUVar14;
		Image pUVar15;
		ulong uVar16;
		ulong uVar17;
		Color UVar18;
		Color UVar19;
		Color UVar20;
		Color UVar21;
		Color UVar22;
		Color UVar23;

		pCVar7 = this._human;
		if ((pCVar7 == null) ||(pCVar8 = pCVar7.Weapon, pCVar8 == null)) goto label_05d2778c;
		bVar6 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
		if (((pCVar8.klass._2).typeHierarchyDepth < bVar6) ||((pCVar8.klass._2).typeHierarchy[(ulong)bVar6 - 1] != typeof(AmmoWeapon))) {
			throw new InvalidCastException();
		}
		pUVar9 = this._ammoLabelLeft;
		pUVar10 = this._ammoLabelRight;
		__this_00 = &(*(ulong)((sbyte)pCVar8 + 0x40));
		pSVar13 = __this_00.ToString();
		if ((pUVar10 == null) ||(pUVar10.set_text(pSVar13), pUVar9 == null)) goto label_05d2778c;
		pUVar9.set_text(pSVar13);
		pUVar9 = this._ammoLabelLeft;
		if (*(int)__this_00 == 0) {
			if (pUVar9 == null) goto label_05d2778c;
			UVar20.b = 0.0;
			UVar20.a = 1.0;
			UVar20.r = 1.0;
			UVar20.g = 0.0;
			pUVar9.set_color(UVar20);
			pUVar9 = this._ammoLabelRight;
			if (pUVar9 == null) goto label_05d2778c;
			UVar21.b = 0.0;
			UVar21.a = 1.0;
			UVar21.r = 1.0;
			UVar21.g = 0.0;
			pUVar9.set_color(UVar21);
			fVar12 = (*(uint)((sbyte)pCVar8 + 0x48));
			if (fVar12 != 1.4013e-45) goto label_05d270ea;
	label_05d27208: ;
			pUVar15 = this._ahssEmptyLeft;
			if (pUVar15 == null) goto label_05d2778c;
			pUVar1 = &this.BackgroundLowColor + (ulong)(*(int)__this_00 < 1) * 2;
			uVar2 = pUVar1.r;
			uVar4 = pUVar1.g;
			UVar22.g = (float)uVar4;
			UVar22.r = (float)uVar2;
			pUVar1 = &this.BackgroundLowColor + (ulong)(*(int)__this_00 < 1) * 2;
			uVar3 = pUVar1.b;
			uVar5 = pUVar1.a;
			UVar22.a = (float)uVar5;
			UVar22.b = (float)uVar3;
			pUVar15.set_color(UVar22);
			pUVar15 = this._ahssEmptyRight;
			if (pUVar15 == null) goto label_05d2778c;
			pUVar15.set_color((Color)this.BackgroundLowColor);
			pUVar15 = this._ahssBackgroundLeft;
			if (pUVar15 == null) goto label_05d2778c;
			pUVar15.set_color((Color)this.BackgroundLowColor);
			pUVar15 = this._ahssBackgroundRight;
			if (pUVar15 == null) goto label_05d2778c;
			pUVar15.set_color((Color)this.BackgroundLowColor);
			pUVar15 = this._ahssShootLeft;
			if (pUVar15 == null) goto label_05d2778c;
			pUVar15.set_color((Color)this.BackgroundLowColor);
			pUVar15 = this._ahssShootRight;
			if (pUVar15 == null) goto label_05d2778c;
			uVar16._0_4_ = this.BackgroundLowColor.r;
			uVar16._4_4_ = this.BackgroundLowColor.g;
			uVar17._0_4_ = this.BackgroundLowColor.b;
			uVar17._4_4_ = this.BackgroundLowColor.a;
		}
		else {
			if (pUVar9 == null) goto label_05d2778c;
			UVar18.b = 0.0;
			UVar18.a = 1.0;
			UVar18.r = 0.0;
			UVar18.g = 1.0;
			pUVar9.set_color(UVar18);
			pUVar9 = this._ammoLabelRight;
			if (pUVar9 == null) goto label_05d2778c;
			UVar19.b = 0.0;
			UVar19.a = 1.0;
			UVar19.r = 0.0;
			UVar19.g = 1.0;
			pUVar9.set_color(UVar19);
			fVar12 = (*(uint)((sbyte)pCVar8 + 0x48));
			if (fVar12 == 1.4013e-45) goto label_05d27208;
	label_05d270ea: ;
			if (fVar12 == 0.0) {
				pUVar15 = this._ahssEmptyLeft;
				if (pUVar15 == null) goto label_05d2778c;
				pUVar15.set_color((Color)this.BackgroundVeryLowColor);
				pUVar15 = this._ahssEmptyRight;
				if (pUVar15 == null) goto label_05d2778c;
				pUVar15.set_color((Color)this.BackgroundVeryLowColor);
				pUVar15 = this._ahssShootLeft;
				if (pUVar15 == null) goto label_05d2778c;
				pUVar15.set_color((Color)this.BackgroundVeryLowColor);
				pUVar15 = this._ahssShootRight;
				if (pUVar15 == null) goto label_05d2778c;
				uVar16._0_4_ = this.BackgroundVeryLowColor.r;
				uVar16._4_4_ = this.BackgroundVeryLowColor.g;
				uVar17._0_4_ = this.BackgroundVeryLowColor.b;
				uVar17._4_4_ = this.BackgroundVeryLowColor.a;
			}
			else {
				pUVar15 = this._ahssBackgroundLeft;
				if (pUVar15 == null) goto label_05d2778c;
				pUVar15.set_color((Color)this.BackgroundNormalColor);
				pUVar15 = this._ahssBackgroundRight;
				if (pUVar15 == null) goto label_05d2778c;
				uVar16._0_4_ = this.BackgroundNormalColor.r;
				uVar16._4_4_ = this.BackgroundNormalColor.g;
				uVar17._0_4_ = this.BackgroundNormalColor.b;
				uVar17._4_4_ = this.BackgroundNormalColor.a;
			}
		}
		UVar23.b = (float)(int)uVar17;
		UVar23.a = (float)(int)((ulong)uVar17 >> 0x20);
		UVar23.r = (float)(int)uVar16;
		UVar23.g = (float)(int)((ulong)uVar16 >> 0x20);
		pUVar15.set_color(UVar23);
		pUVar15 = this._ahssEmptyLeft;
		if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
		bVar11 = pUVar14.activeSelf;
		if ((bVar11) && (1 < (int)(*(uint)((sbyte)pCVar8 + 0x48)))) {
			pUVar15 = this._ahssEmptyLeft;
			if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
			pUVar14.SetActive(false);
			pUVar15 = this._ahssBackgroundLeft;
			if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
			pUVar14.SetActive(true);
		}
		pUVar15 = this._ahssEmptyRight;
		if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
		bVar11 = pUVar14.activeSelf;
		if ((bVar11) && (0 < (int)(*(uint)((sbyte)pCVar8 + 0x48)))) {
			pUVar15 = this._ahssEmptyRight;
			if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
			pUVar14.SetActive(false);
			pUVar15 = this._ahssBackgroundRight;
			if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
			pUVar14.SetActive(true);
		}
		pUVar15 = this._ahssShootLeft;
		if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
		bVar11 = pUVar14.activeSelf;
		if ((bVar11) && (this._shootAnimationTimeLeft <= 0.0)) {
			pUVar15 = this._ahssShootLeft;
			if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
			pUVar14.SetActive(false);
			pUVar15 = this._ahssEmptyLeft;
			if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
			pUVar14.SetActive(true);
		}
		pUVar15 = this._ahssShootRight;
		if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
		bVar11 = pUVar14.activeSelf;
		if ((bVar11) && (this._shootAnimationTimeLeft <= 0.0)) {
			pUVar15 = this._ahssShootRight;
			if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
			pUVar14.SetActive(false);
			pUVar15 = this._ahssEmptyRight;
			if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
			pUVar14.SetActive(true);
		}
		pUVar15 = this._ahssReloadLeft;
		if ((pUVar15 != null) &&(pUVar14 = pUVar15.gameObject, pUVar14 != null)) {
			bVar11 = pUVar14.activeSelf;
			if (!bVar11) {
				pUVar15 = this._ahssReloadRight;
				if ((pUVar15 == null) ||(pUVar14 = pUVar15.gameObject, pUVar14 == null)) goto label_05d2778c;
				bVar11 = pUVar14.activeSelf;
				if (!bVar11) {
					return;
				}
			}
			if (0.0 < this._reloadAnimationTimeLeft) {
				return;
			}
			pUVar15 = this._ahssReloadLeft;
			if ((pUVar15 != null) &&(pUVar14 = pUVar15.gameObject, pUVar14 != null)) {
				pUVar14.SetActive(false);
				pUVar15 = this._ahssReloadRight;
				if ((pUVar15 != null) &&(pUVar14 = pUVar15.gameObject, pUVar14 != null)) {
					pUVar14.SetActive(false);
					pUVar15 = this._ahssBackgroundRight;
					if ((pUVar15 != null) &&(pUVar14 = pUVar15.gameObject, pUVar14 != null)) {
						pUVar14.SetActive(0 < (int)(*(uint)((sbyte)pCVar8 + 0x48)));
						pUVar15 = this._ahssBackgroundLeft;
						if ((pUVar15 != null) &&(pUVar14 = pUVar15.gameObject, pUVar14 != null)) {
							pUVar14.SetActive(1 < (int)(*(uint)((sbyte)pCVar8 + 0x48)));
							pUVar15 = this._ahssEmptyRight;
							if ((pUVar15 != null) &&(pUVar14 = pUVar15.gameObject, pUVar14 != null)) {
								pUVar14.SetActive((int)(*(uint)((sbyte)pCVar8 + 0x48)) < 1);
								pUVar15 = this._ahssEmptyLeft;
								if ((pUVar15 != null) &&(pUVar14 = pUVar15.gameObject, pUVar14 != null)) {
									pUVar14.SetActive((int)(*(uint)((sbyte)pCVar8 + 0x48)) < 2);
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05d2778c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EB5")]
	[Address(RVA = "0x5C277A0", Offset = "0x5C267A0", VA = "0x5C277A0")]
	private void UpdateTS()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$UpdateTS): 13 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		Human pCVar3;
		BaseUseable __this_00;
		InGameSet pSVar4;
		InGameMiscSettings pSVar5;
		BoolSetting pSVar6;
		Image pUVar7;
		Text pUVar8;
		Text pUVar9;
		bool bVar10;
		GameObject pUVar11;
		Animator __this_01;
		String pSVar12;
		Image pUVar13;
		float fVar14;
		ulong uVar15;
		ulong uVar16;
		Color UVar17;
		Color UVar18;
		Color UVar19;
		Color UVar20;
		Color UVar21;

		pCVar3 = this._human;
		if (pCVar3 != null) {
			__this_00 = pCVar3.Weapon;
			if (__this_00 != null) {
				bVar1 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(ThunderspearWeapon))) {
					throw new InvalidCastException();
				}
			}
			pSVar4 = SettingsManager.InGameCurrent;
			if (((pSVar4 != null) &&(pSVar5 = pSVar4.Misc, pSVar5 != null)) &&(pSVar6 = pSVar5.ThunderspearPVP, pSVar6 != null)) {
				if (pSVar6._value == false) {
					if (__this_00 == null) goto label_05d27e28;
					iVar2 = *(int)((long)&(*(ulong)((sbyte)__this_00 + 0x40)) + 4);
					fVar14 = (*(uint)((sbyte)__this_00 + 0x48));
					if (iVar2 < 1) {
						if (fVar14 == -NAN) {
							fVar14 = 1.0;
						}
						else {
							fVar14 = 0.0;
						}
					}
					else {
						fVar14 = (float)(int)fVar14 / (float)iVar2;
					}
					pUVar13 = this._ammoFillRight;
					if (pUVar13 == null) goto label_05d27e28;
					pUVar7 = this._ammoFillLeft;
					pUVar13.fillAmount = fVar14;
					if (pUVar7 == null) goto label_05d27e28;
					pUVar7.fillAmount = fVar14;
					if (fVar14 <= 0.0) {
						pUVar13 = this._tsBackground;
						if (pUVar13 == null) goto label_05d27e28;
						pUVar13.set_color((Color)this.BackgroundVeryLowColor);
						pUVar13 = this._tsShoot;
						if (pUVar13 == null) goto label_05d27e28;
						uVar15._0_4_ = this.BackgroundVeryLowColor.r;
						uVar15._4_4_ = this.BackgroundVeryLowColor.g;
						uVar16._0_4_ = this.BackgroundVeryLowColor.b;
						uVar16._4_4_ = this.BackgroundVeryLowColor.a;
					}
					else {
						pUVar13 = this._tsBackground;
						if (fVar14 <= 0.5) {
							if (pUVar13 == null) goto label_05d27e28;
							pUVar13.set_color((Color)this.BackgroundLowColor);
							pUVar13 = this._tsShoot;
							if (pUVar13 == null) goto label_05d27e28;
							uVar15._0_4_ = this.BackgroundLowColor.r;
							uVar15._4_4_ = this.BackgroundLowColor.g;
							uVar16._0_4_ = this.BackgroundLowColor.b;
							uVar16._4_4_ = this.BackgroundLowColor.a;
						}
						else {
							if (pUVar13 == null) goto label_05d27e28;
							pUVar13.set_color((Color)this.BackgroundNormalColor);
							pUVar13 = this._tsShoot;
							if (pUVar13 == null) goto label_05d27e28;
							uVar15._0_4_ = this.BackgroundNormalColor.r;
							uVar15._4_4_ = this.BackgroundNormalColor.g;
							uVar16._0_4_ = this.BackgroundNormalColor.b;
							uVar16._4_4_ = this.BackgroundNormalColor.a;
						}
					}
					UVar17.b = (float)(int)uVar16;
					UVar17.a = (float)(int)((ulong)uVar16 >> 0x20);
					UVar17.r = (float)(int)uVar15;
					UVar17.g = (float)(int)((ulong)uVar15 >> 0x20);
					pUVar13.set_color(UVar17);
					pUVar8 = this._ammoLabelLeft;
					pUVar9 = this._ammoLabelRight;
					pSVar12 = ((*(ulong)((sbyte)__this_00 + 0x40))).ToString();
					if ((pUVar9 == null) ||(pUVar9.set_text(pSVar12), pUVar8 == null)) goto label_05d27e28;
					pUVar8.set_text(pSVar12);
					pUVar8 = this._ammoLabelLeft;
					if (*(int)&(*(ulong)((sbyte)__this_00 + 0x40)) == 0) {
						if (pUVar8 == null) goto label_05d27e28;
						UVar20.b = 0.0;
						UVar20.a = 1.0;
						UVar20.r = 1.0;
						UVar20.g = 0.0;
						pUVar8.set_color(UVar20);
						pUVar8 = this._ammoLabelRight;
						if (pUVar8 == null) goto label_05d27e28;
						UVar21.b = 0.0;
						UVar21.a = 1.0;
						UVar21.r = 1.0;
						UVar21.g = 0.0;
						pUVar8.set_color(UVar21);
						pUVar13 = this._tsBackground;
					}
					else {
						if (pUVar8 == null) goto label_05d27e28;
						UVar18.b = 0.0;
						UVar18.a = 1.0;
						UVar18.r = 0.0;
						UVar18.g = 1.0;
						pUVar8.set_color(UVar18);
						pUVar8 = this._ammoLabelRight;
						if (pUVar8 == null) goto label_05d27e28;
						UVar19.b = 0.0;
						UVar19.a = 1.0;
						UVar19.r = 0.0;
						UVar19.g = 1.0;
						pUVar8.set_color(UVar19);
						pUVar13 = this._tsBackground;
					}
					if ((pUVar13 == null) ||(pUVar11 = pUVar13.gameObject, pUVar11 == null)) goto label_05d27e28;
					bVar10 = pUVar11.activeSelf;
					if (bVar10) {
						return;
					}
					if (0.0 < this._reloadAnimationTimeLeft) {
						return;
					}
					if (0.0 < this._shootAnimationTimeLeft) {
						return;
					}
					pUVar13 = this._tsBackground;
					if ((pUVar13 == null) ||(pUVar11 = pUVar13.gameObject, pUVar11 == null)) goto label_05d27e28;
					pUVar11.SetActive(true);
					pUVar13 = this._tsReload;
					if ((pUVar13 == null) ||(pUVar11 = pUVar13.gameObject, pUVar11 == null)) goto label_05d27e28;
					pUVar11.SetActive(false);
					pUVar13 = this._tsShoot;
					if ((pUVar13 == null) ||(pUVar11 = pUVar13.gameObject, pUVar11 == null)) goto label_05d27e28;
					pUVar11.SetActive(false);
					pUVar13 = this._ammoFillLeft;
					if ((pUVar13 == null) ||(pUVar11 = pUVar13.gameObject, pUVar11 == null)) goto label_05d27e28;
					pUVar11.SetActive(true);
					pUVar13 = this._ammoFillRight;
				}
				else {
					if (__this_00 == null) goto label_05d27e28;
					fVar14 = __this_00.GetCooldownRatio();
					pUVar13 = this._bombFillRight;
					if (pUVar13 == null) goto label_05d27e28;
					pUVar7 = this._bombFillLeft;
					pUVar13.fillAmount = fVar14;
					if (pUVar7 == null) goto label_05d27e28;
					pUVar7.fillAmount = fVar14;
					if ((this._bombInCooldown != fVar14 < 1.0) &&(this._bombInCooldown = fVar14 < 1.0, 1.0 <= fVar14)) {
						pUVar13 = this._tsBombReload;
						if ((pUVar13 == null) ||(pUVar11 = pUVar13.gameObject, pUVar11 == null)) goto label_05d27e28;
						bVar10 = pUVar11.activeSelf;
						if (!bVar10) {
							pUVar13 = this._tsBombBackground;
							if ((pUVar13 == null) ||(pUVar11 = pUVar13.gameObject, pUVar11 == null)) goto label_05d27e28;
							pUVar11.SetActive(false);
							pUVar13 = this._tsBombReload;
							if ((pUVar13 == null) ||(pUVar11 = pUVar13.gameObject, pUVar11 == null)) goto label_05d27e28;
							pUVar11.SetActive(true);
							pUVar13 = this._tsBombReload;
							if ((pUVar13 == null) ||(__this_01 = pUVar13.GetComponent<Animator>(), __this_01 == null)) goto label_05d27e28;
							__this_01.Update(0.0);
							this._reloadAnimationTimeLeft = 0.5;
						}
					}
					pUVar13 = this._tsBombBackground;
					if ((pUVar13 == null) ||(pUVar11 = pUVar13.gameObject, pUVar11 == null)) goto label_05d27e28;
					bVar10 = pUVar11.activeSelf;
					if ((bVar10) || (0.0 < this._reloadAnimationTimeLeft)) {
						return;
					}
					pUVar13 = this._tsBombReload;
					if ((pUVar13 == null) ||(pUVar11 = pUVar13.gameObject, pUVar11 == null)) goto label_05d27e28;
					pUVar11.SetActive(false);
					pUVar13 = this._tsBombBackground;
				}
				if ((pUVar13 != null) &&(pUVar11 = pUVar13.gameObject, pUVar11 != null)) {
					pUVar11.SetActive(true);
					return;
				}
			}
		}
	label_05d27e28: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EB6")]
	[Address(RVA = "0x5C27E40", Offset = "0x5C26E40", VA = "0x5C27E40")]
	private void UpdatePlayerTitan()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$UpdatePlayerTitan): 8 lines keep C-only constructs
		BasicTitan pCVar1;
		Slider pUVar2;
		Image pUVar3;
		float fVar4;
		ulong uVar5;
		float fVar6;
		ulong uVar7;
		Color UVar8;

		pCVar1 = this._playerTitan;
		if ((pCVar1 != null) &&(pUVar2 = this._staminaSlider, pUVar2 != null)) {
			fVar4 = pCVar1.CurrentSprintStamina / pCVar1.MaxSprintStamina;
			fVar6 = 1.0;
			if (fVar4 <= 1.0) {
				fVar6 = fVar4;
			}
			pUVar2.set_value((float)(-(uint)(0.0 <= fVar4) & (uint)fVar6));
			pCVar1 = this._playerTitan;
			if (pCVar1 != null) {
				pUVar3 = this._staminaFill;
				if (pCVar1.CurrentSprintStamina <= 1.0) {
					if (pUVar3 == null) goto label_05d27eff;
					uVar5._0_4_ = this.StaminaFillLowColor.r;
					uVar5._4_4_ = this.StaminaFillLowColor.g;
					uVar7._0_4_ = this.StaminaFillLowColor.b;
					uVar7._4_4_ = this.StaminaFillLowColor.a;
				}
				else {
					if (pUVar3 == null) goto label_05d27eff;
					uVar5._0_4_ = this.StaminaFillNormalColor.r;
					uVar5._4_4_ = this.StaminaFillNormalColor.g;
					uVar7._0_4_ = this.StaminaFillNormalColor.b;
					uVar7._4_4_ = this.StaminaFillNormalColor.a;
				}
				UVar8.b = (float)(int)uVar7;
				UVar8.a = (float)(int)((ulong)uVar7 >> 0x20);
				UVar8.r = (float)(int)uVar5;
				UVar8.g = (float)(int)((ulong)uVar5 >> 0x20);
				pUVar3.set_color(UVar8);
				return;
			}
		}
	label_05d27eff: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EB7")]
	[Address(RVA = "0x5C28070", Offset = "0x5C27070", VA = "0x5C28070")]
	public HUDBottomHandler()
	{
		// Lifted from source/cpp/UI/HUDBottomHandler.c (UI.HUDBottomHandler$$.ctor): 1 lines keep C-only constructs
		Dictionary<Image, Animator> __this_00;

		if (Il2CppMethodInitialized_07547dea == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(Dictionary<Image, Animator>)) ;
			Il2CppMethodInitialized_07547dea = true;
		}
		this.FillLowColor.r = 1.0;
		this.FillLowColor.g = 0.5;
		this.FillLowColor.b = 0.0;
		this.FillLowColor.a = 0.5;
		this.BackgroundLowColor.r = 1.0;
		this.BackgroundLowColor.g = 0.75;
		this.BackgroundLowColor.b = 0.5;
		this.BackgroundLowColor.a = 1.0;
		this.FillVeryLowColor.r = 1.0;
		this.FillVeryLowColor.g = 0.0;
		this.FillVeryLowColor.b = 0.0;
		this.FillVeryLowColor.a = 0.5;
		this.BackgroundVeryLowColor.r = 1.0;
		this.BackgroundVeryLowColor.g = 0.5;
		this.BackgroundVeryLowColor.b = 0.5;
		this.BackgroundVeryLowColor.a = 1.0;
		this.FillNormalColor.r = 1.0;
		this.FillNormalColor.g = 1.0;
		this.FillNormalColor.b = 1.0;
		this.FillNormalColor.a = 0.5;
		this.BladeFillNormalColor.r = 1.0;
		this.BladeFillNormalColor.g = 1.0;
		this.BladeFillNormalColor.b = 1.0;
		this.BladeFillNormalColor.a = 0.75;
		this.BackgroundNormalColor.r = 1.0;
		this.BackgroundNormalColor.g = 1.0;
		this.BackgroundNormalColor.b = 1.0;
		this.BackgroundNormalColor.a = 1.0;
		this.BackgroundEmptyColor.r = 1.0;
		this.BackgroundEmptyColor.g = 0.25;
		this.BackgroundEmptyColor.b = 0.25;
		this.BackgroundEmptyColor.a = 1.0;
		this.StaminaFillNormalColor.r = 0.77;
		this.StaminaFillNormalColor.g = 0.77;
		this.StaminaFillNormalColor.b = 0.77;
		this.StaminaFillNormalColor.a = 1.0;
		this.StaminaFillLowColor.r = 0.77;
		this.StaminaFillLowColor.g = 0.5;
		this.StaminaFillLowColor.b = 0.5;
		this.StaminaFillLowColor.a = 1.0;
		this._currentSpecialIcon = "";
		this._newSpecialIcon = "";
		__this_00 = new Dictionary<Image, Animator>();
		this._AnimationCache = __this_00;
		base();
		return;
	}
}

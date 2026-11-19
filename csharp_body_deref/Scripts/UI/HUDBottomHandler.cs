// ==================== AoTTG2 cross-reference ====================
// Type: UI.HUDBottomHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/HUDBottomHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/HUDBottomHandler.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}

	[Token(Token = "0x6004EA5")]
	[Address(RVA = "0x5C24860", Offset = "0x5C23860", VA = "0x5C24860")]
	public void SetBottomHUDActive(bool active)
	{
	}

	[Token(Token = "0x6004EA6")]
	[Address(RVA = "0x5C248E0", Offset = "0x5C238E0", VA = "0x5C248E0")]
	public void SetSpecialIcon(string icon)
	{
	}

	[Token(Token = "0x6004EA7")]
	[Address(RVA = "0x5C24900", Offset = "0x5C23900", VA = "0x5C24900")]
	public void ShakeGas()
	{
	}

	[Token(Token = "0x6004EA8")]
	[Address(RVA = "0x5C24A90", Offset = "0x5C23A90", VA = "0x5C24A90")]
	public void Reload()
	{
	}

	[Token(Token = "0x6004EA9")]
	[Address(RVA = "0x5C25130", Offset = "0x5C24130", VA = "0x5C25130")]
	public void ShootAPG()
	{
	}

	[Token(Token = "0x6004EAA")]
	[Address(RVA = "0x5C252E0", Offset = "0x5C242E0", VA = "0x5C252E0")]
	public void ShootAHSS(bool left, bool right)
	{
	}

	[Token(Token = "0x6004EAB")]
	[Address(RVA = "0x5C25590", Offset = "0x5C24590", VA = "0x5C25590")]
	public void ShootTS()
	{
	}

	[Token(Token = "0x6004EAC")]
	[Address(RVA = "0x5C257C0", Offset = "0x5C247C0", VA = "0x5C257C0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004EAD")]
	[Address(RVA = "0x5C27F10", Offset = "0x5C26F10", VA = "0x5C27F10")]
	private void StopAnimator(Image obj)
	{
	}

	[Token(Token = "0x6004EAE")]
	[Address(RVA = "0x5C249C0", Offset = "0x5C239C0", VA = "0x5C249C0")]
	private void StartAnimator(Image obj)
	{
	}

	[Token(Token = "0x6004EAF")]
	[Address(RVA = "0x5C26120", Offset = "0x5C25120", VA = "0x5C26120")]
	private void UpdatePerkTimer()
	{
	}

	[Token(Token = "0x6004EB0")]
	[Address(RVA = "0x5C25A30", Offset = "0x5C24A30", VA = "0x5C25A30")]
	private void UpdateHumanSpecial()
	{
	}

	[Token(Token = "0x6004EB1")]
	[Address(RVA = "0x5C25E70", Offset = "0x5C24E70", VA = "0x5C25E70")]
	private void UpdateGas()
	{
	}

	[Token(Token = "0x6004EB2")]
	[Address(RVA = "0x5C26310", Offset = "0x5C25310", VA = "0x5C26310")]
	private void UpdateBlade()
	{
	}

	[Token(Token = "0x6004EB3")]
	[Address(RVA = "0x5C26AF0", Offset = "0x5C25AF0", VA = "0x5C26AF0")]
	private void UpdateAPG()
	{
	}

	[Token(Token = "0x6004EB4")]
	[Address(RVA = "0x5C26FA0", Offset = "0x5C25FA0", VA = "0x5C26FA0")]
	private void UpdateAHSS()
	{
	}

	[Token(Token = "0x6004EB5")]
	[Address(RVA = "0x5C277A0", Offset = "0x5C267A0", VA = "0x5C277A0")]
	private void UpdateTS()
	{
	}

	[Token(Token = "0x6004EB6")]
	[Address(RVA = "0x5C27E40", Offset = "0x5C26E40", VA = "0x5C27E40")]
	private void UpdatePlayerTitan()
	{
	}

	[Token(Token = "0x6004EB7")]
	[Address(RVA = "0x5C28070", Offset = "0x5C27070", VA = "0x5C28070")]
	public HUDBottomHandler()
	{
	}
}

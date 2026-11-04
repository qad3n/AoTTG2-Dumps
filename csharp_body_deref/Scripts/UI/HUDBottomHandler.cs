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

[Token(Token = "0x2000794")]
internal class HUDBottomHandler : MonoBehaviour
{
	[Token(Token = "0x40025AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Color FillLowColor;

	[Token(Token = "0x40025AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Color BackgroundLowColor;

	[Token(Token = "0x40025B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Color FillVeryLowColor;

	[Token(Token = "0x40025B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Color BackgroundVeryLowColor;

	[Token(Token = "0x40025B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Color FillNormalColor;

	[Token(Token = "0x40025B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Color BladeFillNormalColor;

	[Token(Token = "0x40025B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Color BackgroundNormalColor;

	[Token(Token = "0x40025B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Color BackgroundEmptyColor;

	[Token(Token = "0x40025B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Color StaminaFillNormalColor;

	[Token(Token = "0x40025B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Color StaminaFillLowColor;

	[Token(Token = "0x40025B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _hudBottom;

	[Token(Token = "0x40025B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Image _specialFill;

	[Token(Token = "0x40025BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Image _specialIconBackground;

	[Token(Token = "0x40025BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Image _specialIconFill;

	[Token(Token = "0x40025BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Image _gasFillLeft;

	[Token(Token = "0x40025BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private Image _gasFillRight;

	[Token(Token = "0x40025BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Image _gasBackground;

	[Token(Token = "0x40025BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private string _currentSpecialIcon;

	[Token(Token = "0x40025C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private string _newSpecialIcon;

	[Token(Token = "0x40025C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Human _human;

	[Token(Token = "0x40025C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private BaseCharacter _character;

	[Token(Token = "0x40025C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private BasicTitan _playerTitan;

	[Token(Token = "0x40025C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private float _gasAnimationTimeLeft;

	[Token(Token = "0x40025C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private float _reloadAnimationTimeLeft;

	[Token(Token = "0x40025C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private float _shootAnimationTimeLeft;

	[Token(Token = "0x40025C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Image _healthImage;

	[Token(Token = "0x40025C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private float _healthTimeLeft;

	[Token(Token = "0x40025C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private Image _perkCDImage;

	[Token(Token = "0x40025CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private Image _perkCDBackgroundImage;

	[Token(Token = "0x40025CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private float _perkCDTimeLeft;

	[Token(Token = "0x40025CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private Image _bladeFillLeft;

	[Token(Token = "0x40025CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private Image _bladeFillRight;

	[Token(Token = "0x40025CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private Image _bladeBackground;

	[Token(Token = "0x40025CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private Image _bladeReload;

	[Token(Token = "0x40025D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private Image _bladeOut;

	[Token(Token = "0x40025D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private GameObject _bladeAmmoGroupLeft;

	[Token(Token = "0x40025D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private GameObject _bladeAmmoGroupRight;

	[Token(Token = "0x40025D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private List<GameObject> _bladeAmmoLeft;

	[Token(Token = "0x40025D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<GameObject> _bladeAmmoRight;

	[Token(Token = "0x40025D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private Image _ammoFillLeft;

	[Token(Token = "0x40025D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private Image _ammoFillRight;

	[Token(Token = "0x40025D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private Text _ammoLabelLeft;

	[Token(Token = "0x40025D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private Text _ammoLabelRight;

	[Token(Token = "0x40025D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private Image _apgBackground;

	[Token(Token = "0x40025DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private Image _apgReload;

	[Token(Token = "0x40025DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private Image _apgShoot;

	[Token(Token = "0x40025DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private Image _apgAmmoBackground;

	[Token(Token = "0x40025DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private Image _ahssBackgroundLeft;

	[Token(Token = "0x40025DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private Image _ahssBackgroundRight;

	[Token(Token = "0x40025DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private Image _ahssEmptyLeft;

	[Token(Token = "0x40025E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	private Image _ahssEmptyRight;

	[Token(Token = "0x40025E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private Image _ahssReloadLeft;

	[Token(Token = "0x40025E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private Image _ahssReloadRight;

	[Token(Token = "0x40025E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	private Image _ahssShootLeft;

	[Token(Token = "0x40025E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	private Image _ahssShootRight;

	[Token(Token = "0x40025E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private Image _tsBackground;

	[Token(Token = "0x40025E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x228")]
	private Image _tsReload;

	[Token(Token = "0x40025E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x230")]
	private Image _tsShoot;

	[Token(Token = "0x40025E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	private Image _tsBombBackground;

	[Token(Token = "0x40025E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x240")]
	private Image _tsBombReload;

	[Token(Token = "0x40025EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x248")]
	private Image _bombFillLeft;

	[Token(Token = "0x40025EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x250")]
	private Image _bombFillRight;

	[Token(Token = "0x40025EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x258")]
	private bool _bombInCooldown;

	[Token(Token = "0x40025ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x260")]
	private Slider _staminaSlider;

	[Token(Token = "0x40025EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private Image _staminaFill;

	[Token(Token = "0x40025EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x270")]
	private Dictionary<Image, Animator> _AnimationCache;

	[Token(Token = "0x600497D")]
	[Address(RVA = "0x2246530", Offset = "0x2244B30", VA = "0x182246530")]
	public void SetBottomHUD([Optional] BaseCharacter character)
	{
	}

	[Token(Token = "0x600497E")]
	[Address(RVA = "0x22464A0", Offset = "0x2244AA0", VA = "0x1822464A0")]
	public void SetBottomHUDActive(bool active)
	{
	}

	[Token(Token = "0x600497F")]
	[Address(RVA = "0x1BD5920", Offset = "0x1BD3F20", VA = "0x181BD5920")]
	public void SetSpecialIcon(string icon)
	{
	}

	[Token(Token = "0x6004980")]
	[Address(RVA = "0x2248780", Offset = "0x2246D80", VA = "0x182248780")]
	public void ShakeGas()
	{
	}

	[Token(Token = "0x6004981")]
	[Address(RVA = "0x2245DC0", Offset = "0x22443C0", VA = "0x182245DC0")]
	public void Reload()
	{
	}

	[Token(Token = "0x6004982")]
	[Address(RVA = "0x2248B10", Offset = "0x2247110", VA = "0x182248B10")]
	public void ShootAPG()
	{
	}

	[Token(Token = "0x6004983")]
	[Address(RVA = "0x2248850", Offset = "0x2246E50", VA = "0x182248850")]
	public void ShootAHSS(bool left, bool right)
	{
	}

	[Token(Token = "0x6004984")]
	[Address(RVA = "0x2248CD0", Offset = "0x22472D0", VA = "0x182248CD0")]
	public void ShootTS()
	{
	}

	[Token(Token = "0x6004985")]
	[Address(RVA = "0x224B3D0", Offset = "0x22499D0", VA = "0x18224B3D0")]
	private void Update()
	{
	}

	[Token(Token = "0x6004986")]
	[Address(RVA = "0x2248FF0", Offset = "0x22475F0", VA = "0x182248FF0")]
	private void StopAnimator(Image obj)
	{
	}

	[Token(Token = "0x6004987")]
	[Address(RVA = "0x2248F20", Offset = "0x2247520", VA = "0x182248F20")]
	private void StartAnimator(Image obj)
	{
	}

	[Token(Token = "0x6004988")]
	[Address(RVA = "0x224AB10", Offset = "0x2249110", VA = "0x18224AB10")]
	private void UpdatePerkTimer()
	{
	}

	[Token(Token = "0x6004989")]
	[Address(RVA = "0x224A740", Offset = "0x2248D40", VA = "0x18224A740")]
	private void UpdateHumanSpecial()
	{
	}

	[Token(Token = "0x600498A")]
	[Address(RVA = "0x224A480", Offset = "0x2248A80", VA = "0x18224A480")]
	private void UpdateGas()
	{
	}

	[Token(Token = "0x600498B")]
	[Address(RVA = "0x2249CE0", Offset = "0x22482E0", VA = "0x182249CE0")]
	private void UpdateBlade()
	{
	}

	[Token(Token = "0x600498C")]
	[Address(RVA = "0x22498B0", Offset = "0x2247EB0", VA = "0x1822498B0")]
	private void UpdateAPG()
	{
	}

	[Token(Token = "0x600498D")]
	[Address(RVA = "0x2249160", Offset = "0x2247760", VA = "0x182249160")]
	private void UpdateAHSS()
	{
	}

	[Token(Token = "0x600498E")]
	[Address(RVA = "0x224ADE0", Offset = "0x22493E0", VA = "0x18224ADE0")]
	private void UpdateTS()
	{
	}

	[Token(Token = "0x600498F")]
	[Address(RVA = "0x224AD00", Offset = "0x2249300", VA = "0x18224AD00")]
	private void UpdatePlayerTitan()
	{
	}

	[Token(Token = "0x6004990")]
	[Address(RVA = "0x224B730", Offset = "0x2249D30", VA = "0x18224B730")]
	public HUDBottomHandler()
	{
	}
}

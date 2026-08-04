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

[Token(Token = "0x2000639")]
internal class HUDBottomHandler : MonoBehaviour
{
	[Token(Token = "0x4001DF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Color FillLowColor;

	[Token(Token = "0x4001DFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Color BackgroundLowColor;

	[Token(Token = "0x4001DFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Color FillVeryLowColor;

	[Token(Token = "0x4001DFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Color BackgroundVeryLowColor;

	[Token(Token = "0x4001DFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Color FillNormalColor;

	[Token(Token = "0x4001DFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Color BladeFillNormalColor;

	[Token(Token = "0x4001DFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Color BackgroundNormalColor;

	[Token(Token = "0x4001E00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Color BackgroundEmptyColor;

	[Token(Token = "0x4001E01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Color StaminaFillNormalColor;

	[Token(Token = "0x4001E02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Color StaminaFillLowColor;

	[Token(Token = "0x4001E03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _hudBottom;

	[Token(Token = "0x4001E04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Image _specialFill;

	[Token(Token = "0x4001E05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Image _specialIconBackground;

	[Token(Token = "0x4001E06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Image _specialIconFill;

	[Token(Token = "0x4001E07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Image _gasFillLeft;

	[Token(Token = "0x4001E08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private Image _gasFillRight;

	[Token(Token = "0x4001E09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Image _gasBackground;

	[Token(Token = "0x4001E0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private string _currentSpecialIcon;

	[Token(Token = "0x4001E0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private string _newSpecialIcon;

	[Token(Token = "0x4001E0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Human _human;

	[Token(Token = "0x4001E0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private BaseCharacter _character;

	[Token(Token = "0x4001E0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private BasicTitan _playerTitan;

	[Token(Token = "0x4001E0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private float _gasAnimationTimeLeft;

	[Token(Token = "0x4001E10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private float _reloadAnimationTimeLeft;

	[Token(Token = "0x4001E11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private float _shootAnimationTimeLeft;

	[Token(Token = "0x4001E12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Image _healthImage;

	[Token(Token = "0x4001E13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private float _healthTimeLeft;

	[Token(Token = "0x4001E14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private Image _perkCDImage;

	[Token(Token = "0x4001E15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private Image _perkCDBackgroundImage;

	[Token(Token = "0x4001E16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private float _perkCDTimeLeft;

	[Token(Token = "0x4001E17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private Image _bladeFillLeft;

	[Token(Token = "0x4001E18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private Image _bladeFillRight;

	[Token(Token = "0x4001E19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private Image _bladeBackground;

	[Token(Token = "0x4001E1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private Image _bladeReload;

	[Token(Token = "0x4001E1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private Image _bladeOut;

	[Token(Token = "0x4001E1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private GameObject _bladeAmmoGroupLeft;

	[Token(Token = "0x4001E1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private GameObject _bladeAmmoGroupRight;

	[Token(Token = "0x4001E1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private List<GameObject> _bladeAmmoLeft;

	[Token(Token = "0x4001E1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<GameObject> _bladeAmmoRight;

	[Token(Token = "0x4001E20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private Image _ammoFillLeft;

	[Token(Token = "0x4001E21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private Image _ammoFillRight;

	[Token(Token = "0x4001E22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private Text _ammoLabelLeft;

	[Token(Token = "0x4001E23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private Text _ammoLabelRight;

	[Token(Token = "0x4001E24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private Image _apgBackground;

	[Token(Token = "0x4001E25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private Image _apgReload;

	[Token(Token = "0x4001E26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private Image _apgShoot;

	[Token(Token = "0x4001E27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private Image _apgAmmoBackground;

	[Token(Token = "0x4001E28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private Image _ahssBackgroundLeft;

	[Token(Token = "0x4001E29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private Image _ahssBackgroundRight;

	[Token(Token = "0x4001E2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private Image _ahssEmptyLeft;

	[Token(Token = "0x4001E2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	private Image _ahssEmptyRight;

	[Token(Token = "0x4001E2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private Image _ahssReloadLeft;

	[Token(Token = "0x4001E2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private Image _ahssReloadRight;

	[Token(Token = "0x4001E2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	private Image _ahssShootLeft;

	[Token(Token = "0x4001E2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	private Image _ahssShootRight;

	[Token(Token = "0x4001E30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private Image _tsBackground;

	[Token(Token = "0x4001E31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x228")]
	private Image _tsReload;

	[Token(Token = "0x4001E32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x230")]
	private Image _tsShoot;

	[Token(Token = "0x4001E33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	private Image _tsBombBackground;

	[Token(Token = "0x4001E34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x240")]
	private Image _tsBombReload;

	[Token(Token = "0x4001E35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x248")]
	private Image _bombFillLeft;

	[Token(Token = "0x4001E36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x250")]
	private Image _bombFillRight;

	[Token(Token = "0x4001E37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x258")]
	private bool _bombInCooldown;

	[Token(Token = "0x4001E38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x260")]
	private Slider _staminaSlider;

	[Token(Token = "0x4001E39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private Image _staminaFill;

	[Token(Token = "0x4001E3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x270")]
	private Dictionary<Image, Animator> _AnimationCache;

	[Token(Token = "0x6003E87")]
	[Address(RVA = "0x42C05C0", Offset = "0x42C05C0", VA = "0x42C05C0")]
	public void SetBottomHUD([Optional] BaseCharacter character)
	{
	}

	[Token(Token = "0x6003E88")]
	[Address(RVA = "0x42C2320", Offset = "0x42C2320", VA = "0x42C2320")]
	public void SetBottomHUDActive(bool active)
	{
	}

	[Token(Token = "0x6003E89")]
	[Address(RVA = "0x42C23A0", Offset = "0x42C23A0", VA = "0x42C23A0")]
	public void SetSpecialIcon(string icon)
	{
	}

	[Token(Token = "0x6003E8A")]
	[Address(RVA = "0x42C23C0", Offset = "0x42C23C0", VA = "0x42C23C0")]
	public void ShakeGas()
	{
	}

	[Token(Token = "0x6003E8B")]
	[Address(RVA = "0x42C2550", Offset = "0x42C2550", VA = "0x42C2550")]
	public void Reload()
	{
	}

	[Token(Token = "0x6003E8C")]
	[Address(RVA = "0x42C2C00", Offset = "0x42C2C00", VA = "0x42C2C00")]
	public void ShootAPG()
	{
	}

	[Token(Token = "0x6003E8D")]
	[Address(RVA = "0x42C2DB0", Offset = "0x42C2DB0", VA = "0x42C2DB0")]
	public void ShootAHSS(bool left, bool right)
	{
	}

	[Token(Token = "0x6003E8E")]
	[Address(RVA = "0x42C3060", Offset = "0x42C3060", VA = "0x42C3060")]
	public void ShootTS()
	{
	}

	[Token(Token = "0x6003E8F")]
	[Address(RVA = "0x42C3290", Offset = "0x42C3290", VA = "0x42C3290")]
	private void Update()
	{
	}

	[Token(Token = "0x6003E90")]
	[Address(RVA = "0x42C5A70", Offset = "0x42C5A70", VA = "0x42C5A70")]
	private void StopAnimator(Image obj)
	{
	}

	[Token(Token = "0x6003E91")]
	[Address(RVA = "0x42C2480", Offset = "0x42C2480", VA = "0x42C2480")]
	private void StartAnimator(Image obj)
	{
	}

	[Token(Token = "0x6003E92")]
	[Address(RVA = "0x42C3C40", Offset = "0x42C3C40", VA = "0x42C3C40")]
	private void UpdatePerkTimer()
	{
	}

	[Token(Token = "0x6003E93")]
	[Address(RVA = "0x42C3500", Offset = "0x42C3500", VA = "0x42C3500")]
	private void UpdateHumanSpecial()
	{
	}

	[Token(Token = "0x6003E94")]
	[Address(RVA = "0x42C3990", Offset = "0x42C3990", VA = "0x42C3990")]
	private void UpdateGas()
	{
	}

	[Token(Token = "0x6003E95")]
	[Address(RVA = "0x42C3E10", Offset = "0x42C3E10", VA = "0x42C3E10")]
	private void UpdateBlade()
	{
	}

	[Token(Token = "0x6003E96")]
	[Address(RVA = "0x42C45F0", Offset = "0x42C45F0", VA = "0x42C45F0")]
	private void UpdateAPG()
	{
	}

	[Token(Token = "0x6003E97")]
	[Address(RVA = "0x42C4AD0", Offset = "0x42C4AD0", VA = "0x42C4AD0")]
	private void UpdateAHSS()
	{
	}

	[Token(Token = "0x6003E98")]
	[Address(RVA = "0x42C52E0", Offset = "0x42C52E0", VA = "0x42C52E0")]
	private void UpdateTS()
	{
	}

	[Token(Token = "0x6003E99")]
	[Address(RVA = "0x42C59A0", Offset = "0x42C59A0", VA = "0x42C59A0")]
	private void UpdatePlayerTitan()
	{
	}

	[Token(Token = "0x6003E9A")]
	[Address(RVA = "0x42C5BD0", Offset = "0x42C5BD0", VA = "0x42C5BD0")]
	public HUDBottomHandler()
	{
	}
}

using System.Collections.Generic;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005EE")]
internal class HUDBottomHandler : MonoBehaviour
{
	[Token(Token = "0x4001CBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Color FillLowColor;

	[Token(Token = "0x4001CBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private Color BackgroundLowColor;

	[Token(Token = "0x4001CBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Color FillVeryLowColor;

	[Token(Token = "0x4001CBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Color BackgroundVeryLowColor;

	[Token(Token = "0x4001CC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Color FillNormalColor;

	[Token(Token = "0x4001CC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Color BladeFillNormalColor;

	[Token(Token = "0x4001CC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Color BackgroundNormalColor;

	[Token(Token = "0x4001CC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Color BackgroundEmptyColor;

	[Token(Token = "0x4001CC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private Color StaminaFillNormalColor;

	[Token(Token = "0x4001CC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Color StaminaFillLowColor;

	[Token(Token = "0x4001CC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private GameObject _hudBottom;

	[Token(Token = "0x4001CC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Image _specialFill;

	[Token(Token = "0x4001CC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Image _specialIconBackground;

	[Token(Token = "0x4001CC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Image _specialIconFill;

	[Token(Token = "0x4001CCA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private Image _gasFillLeft;

	[Token(Token = "0x4001CCB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private Image _gasFillRight;

	[Token(Token = "0x4001CCC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private Image _gasBackground;

	[Token(Token = "0x4001CCD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private string _currentSpecialIcon;

	[Token(Token = "0x4001CCE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private string _newSpecialIcon;

	[Token(Token = "0x4001CCF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private Human _human;

	[Token(Token = "0x4001CD0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private BaseCharacter _character;

	[Token(Token = "0x4001CD1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private BasicTitan _playerTitan;

	[Token(Token = "0x4001CD2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private float _gasAnimationTimeLeft;

	[Token(Token = "0x4001CD3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private float _reloadAnimationTimeLeft;

	[Token(Token = "0x4001CD4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private float _shootAnimationTimeLeft;

	[Token(Token = "0x4001CD5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Image _healthImage;

	[Token(Token = "0x4001CD6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private float _healthTimeLeft;

	[Token(Token = "0x4001CD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private Image _perkCDImage;

	[Token(Token = "0x4001CD8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private Image _perkCDBackgroundImage;

	[Token(Token = "0x4001CD9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private float _perkCDTimeLeft;

	[Token(Token = "0x4001CDA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private Image _bladeFillLeft;

	[Token(Token = "0x4001CDB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private Image _bladeFillRight;

	[Token(Token = "0x4001CDC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private Image _bladeBackground;

	[Token(Token = "0x4001CDD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private Image _bladeReload;

	[Token(Token = "0x4001CDE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private Image _bladeOut;

	[Token(Token = "0x4001CDF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private GameObject _bladeAmmoGroupLeft;

	[Token(Token = "0x4001CE0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private GameObject _bladeAmmoGroupRight;

	[Token(Token = "0x4001CE1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private List<GameObject> _bladeAmmoLeft;

	[Token(Token = "0x4001CE2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private List<GameObject> _bladeAmmoRight;

	[Token(Token = "0x4001CE3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private Image _ammoFillLeft;

	[Token(Token = "0x4001CE4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private Image _ammoFillRight;

	[Token(Token = "0x4001CE5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private Text _ammoLabelLeft;

	[Token(Token = "0x4001CE6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private Text _ammoLabelRight;

	[Token(Token = "0x4001CE7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private Image _apgBackground;

	[Token(Token = "0x4001CE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private Image _apgReload;

	[Token(Token = "0x4001CE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private Image _apgShoot;

	[Token(Token = "0x4001CEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private Image _apgAmmoBackground;

	[Token(Token = "0x4001CEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private Image _ahssBackgroundLeft;

	[Token(Token = "0x4001CEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private Image _ahssBackgroundRight;

	[Token(Token = "0x4001CED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private Image _ahssEmptyLeft;

	[Token(Token = "0x4001CEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	private Image _ahssEmptyRight;

	[Token(Token = "0x4001CEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private Image _ahssReloadLeft;

	[Token(Token = "0x4001CF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private Image _ahssReloadRight;

	[Token(Token = "0x4001CF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	private Image _ahssShootLeft;

	[Token(Token = "0x4001CF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	private Image _ahssShootRight;

	[Token(Token = "0x4001CF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private Image _tsBackground;

	[Token(Token = "0x4001CF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x228")]
	private Image _tsReload;

	[Token(Token = "0x4001CF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x230")]
	private Image _tsShoot;

	[Token(Token = "0x4001CF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	private Image _tsBombBackground;

	[Token(Token = "0x4001CF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x240")]
	private Image _tsBombReload;

	[Token(Token = "0x4001CF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x248")]
	private Image _bombFillLeft;

	[Token(Token = "0x4001CF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x250")]
	private Image _bombFillRight;

	[Token(Token = "0x4001CFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x258")]
	private bool _bombInCooldown;

	[Token(Token = "0x4001CFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x260")]
	private Slider _staminaSlider;

	[Token(Token = "0x4001CFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private Image _staminaFill;

	[Token(Token = "0x4001CFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x270")]
	private Dictionary<Image, Animator> _AnimationCache;

	[Token(Token = "0x6003C3D")]
	[Address(RVA = "0x3FAE4D0", Offset = "0x3FAE4D0", VA = "0x3FAE4D0")]
	public void SetBottomHUD([Optional] BaseCharacter character)
	{
	}

	[Token(Token = "0x6003C3E")]
	[Address(RVA = "0x3FB0230", Offset = "0x3FB0230", VA = "0x3FB0230")]
	public void SetBottomHUDActive(bool active)
	{
	}

	[Token(Token = "0x6003C3F")]
	[Address(RVA = "0x3FB02B0", Offset = "0x3FB02B0", VA = "0x3FB02B0")]
	public void SetSpecialIcon(string icon)
	{
	}

	[Token(Token = "0x6003C40")]
	[Address(RVA = "0x3FB02D0", Offset = "0x3FB02D0", VA = "0x3FB02D0")]
	public void ShakeGas()
	{
	}

	[Token(Token = "0x6003C41")]
	[Address(RVA = "0x3FB0460", Offset = "0x3FB0460", VA = "0x3FB0460")]
	public void Reload()
	{
	}

	[Token(Token = "0x6003C42")]
	[Address(RVA = "0x3FB0B10", Offset = "0x3FB0B10", VA = "0x3FB0B10")]
	public void ShootAPG()
	{
	}

	[Token(Token = "0x6003C43")]
	[Address(RVA = "0x3FB0CC0", Offset = "0x3FB0CC0", VA = "0x3FB0CC0")]
	public void ShootAHSS(bool left, bool right)
	{
	}

	[Token(Token = "0x6003C44")]
	[Address(RVA = "0x3FB0F70", Offset = "0x3FB0F70", VA = "0x3FB0F70")]
	public void ShootTS()
	{
	}

	[Token(Token = "0x6003C45")]
	[Address(RVA = "0x3FB11A0", Offset = "0x3FB11A0", VA = "0x3FB11A0")]
	private void Update()
	{
	}

	[Token(Token = "0x6003C46")]
	[Address(RVA = "0x3FB3990", Offset = "0x3FB3990", VA = "0x3FB3990")]
	private void StopAnimator(Image obj)
	{
	}

	[Token(Token = "0x6003C47")]
	[Address(RVA = "0x3FB0390", Offset = "0x3FB0390", VA = "0x3FB0390")]
	private void StartAnimator(Image obj)
	{
	}

	[Token(Token = "0x6003C48")]
	[Address(RVA = "0x3FB1B50", Offset = "0x3FB1B50", VA = "0x3FB1B50")]
	private void UpdatePerkTimer()
	{
	}

	[Token(Token = "0x6003C49")]
	[Address(RVA = "0x3FB1410", Offset = "0x3FB1410", VA = "0x3FB1410")]
	private void UpdateHumanSpecial()
	{
	}

	[Token(Token = "0x6003C4A")]
	[Address(RVA = "0x3FB18A0", Offset = "0x3FB18A0", VA = "0x3FB18A0")]
	private void UpdateGas()
	{
	}

	[Token(Token = "0x6003C4B")]
	[Address(RVA = "0x3FB1D20", Offset = "0x3FB1D20", VA = "0x3FB1D20")]
	private void UpdateBlade()
	{
	}

	[Token(Token = "0x6003C4C")]
	[Address(RVA = "0x3FB2510", Offset = "0x3FB2510", VA = "0x3FB2510")]
	private void UpdateAPG()
	{
	}

	[Token(Token = "0x6003C4D")]
	[Address(RVA = "0x3FB29F0", Offset = "0x3FB29F0", VA = "0x3FB29F0")]
	private void UpdateAHSS()
	{
	}

	[Token(Token = "0x6003C4E")]
	[Address(RVA = "0x3FB3200", Offset = "0x3FB3200", VA = "0x3FB3200")]
	private void UpdateTS()
	{
	}

	[Token(Token = "0x6003C4F")]
	[Address(RVA = "0x3FB38C0", Offset = "0x3FB38C0", VA = "0x3FB38C0")]
	private void UpdatePlayerTitan()
	{
	}

	[Token(Token = "0x6003C50")]
	[Address(RVA = "0x3FB3AF0", Offset = "0x3FB3AF0", VA = "0x3FB3AF0")]
	public HUDBottomHandler()
	{
	}
}

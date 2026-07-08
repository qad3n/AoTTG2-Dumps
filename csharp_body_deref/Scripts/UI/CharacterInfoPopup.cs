using System.Runtime.InteropServices;
using Characters;
using ExitGames.Client.Photon;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using PatreonEffects;
using Photon.Realtime;
using Settings;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005C9")]
internal class CharacterInfoPopup : BasePopup
{
	[Token(Token = "0x4001BE8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected TextMeshProUGUI _guildLabel;

	[Token(Token = "0x4001BE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected TextMeshProUGUI _nameLabel;

	[Token(Token = "0x4001BEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Image _nameBackground;

	[Token(Token = "0x4001BEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected GameObject _healthbar;

	[Token(Token = "0x4001BEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected Image _healthbarFill;

	[Token(Token = "0x4001BED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected TextMeshProUGUI _healthbarLabel;

	[Token(Token = "0x4001BEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private GameObject _guildRow;

	[Token(Token = "0x4001BEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private AottgBadgeIconRowRuntime _guildBadges;

	[Token(Token = "0x4001BF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private NameEffectController _guildEffect;

	[Token(Token = "0x4001BF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private NameEffectController _guildPresetEffect;

	[Token(Token = "0x4001BF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private NameEffectController _nameEffect;

	[Token(Token = "0x4001BF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private Image _guildPresetImage;

	[Token(Token = "0x4001BF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public BaseCharacter Character;

	[Token(Token = "0x4001BF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public Vector3 Offset;

	[Token(Token = "0x4001BF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	public float Range;

	[Token(Token = "0x4001BF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Color _settingsNameColor;

	[Token(Token = "0x4001BF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Color _settingsBackgroundColor;

	[Token(Token = "0x4001BF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private NameStyleType _settingsStyleType;

	[Token(Token = "0x4001BFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x144")]
	private bool _forceNameColorEnabled;

	[Token(Token = "0x4001BFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x145")]
	private bool _applyForceNameColor;

	[Token(Token = "0x4001BFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x146")]
	private bool _settingsApplyToMe;

	[Token(Token = "0x4001BFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x147")]
	private bool _teamsEnabled;

	[Token(Token = "0x4001BFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private string _name;

	[Token(Token = "0x4001BFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private int _minNameLength;

	[Token(Token = "0x4001C00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x154")]
	private int _maxNameLength;

	[Token(Token = "0x4001C01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private string _lastName;

	[Token(Token = "0x4001C02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private string _lastGuild;

	[Token(Token = "0x4001C03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private string _lastTeam;

	[Token(Token = "0x17000B37")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003B13")]
		[Address(RVA = "0x3F92FC0", Offset = "0x3F92FC0", VA = "0x3F92FC0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B38")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003B14")]
		[Address(RVA = "0x3F92FD0", Offset = "0x3F92FD0", VA = "0x3F92FD0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6003B15")]
	[Address(RVA = "0x3F92FE0", Offset = "0x3F92FE0", VA = "0x3F92FE0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B16")]
	[Address(RVA = "0x3F93970", Offset = "0x3F93970", VA = "0x3F93970")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x6003B17")]
	[Address(RVA = "0x3F93A80", Offset = "0x3F93A80", VA = "0x3F93A80")]
	private void Character_OnPlayerPropertiesChanged(Hashtable changedProps)
	{
	}

	[Token(Token = "0x6003B18")]
	[Address(RVA = "0x3F93E20", Offset = "0x3F93E20", VA = "0x3F93E20")]
	private void SettingsManager_OnSettingsChanged()
	{
	}

	[Token(Token = "0x6003B19")]
	[Address(RVA = "0x3F94800", Offset = "0x3F94800", VA = "0x3F94800")]
	public void SetName(string name)
	{
	}

	[Token(Token = "0x6003B1A")]
	[Address(RVA = "0x3F92BC0", Offset = "0x3F92BC0", VA = "0x3F92BC0")]
	public void Load(BaseCharacter character, Vector3 offset, float range)
	{
	}

	[Token(Token = "0x6003B1B")]
	[Address(RVA = "0x3F955D0", Offset = "0x3F955D0", VA = "0x3F955D0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6003B1C")]
	[Address(RVA = "0x3F927F0", Offset = "0x3F927F0", VA = "0x3F927F0")]
	public void ToggleName(bool toggle)
	{
	}

	[Token(Token = "0x6003B1D")]
	[Address(RVA = "0x3F92610", Offset = "0x3F92610", VA = "0x3F92610")]
	public void ToggleHealthbar(bool toggle)
	{
	}

	[Token(Token = "0x6003B1E")]
	[Address(RVA = "0x3F92680", Offset = "0x3F92680", VA = "0x3F92680")]
	public void SetHealthbar(int currentHealth, int maxHealth, Color color)
	{
	}

	[Token(Token = "0x6003B1F")]
	[Address(RVA = "0x3F94F30", Offset = "0x3F94F30", VA = "0x3F94F30")]
	private void UpdateEffectOverlay(string guild, string nameText, string guildPresetId)
	{
	}

	[Token(Token = "0x6003B20")]
	[Address(RVA = "0x3F95860", Offset = "0x3F95860", VA = "0x3F95860")]
	private static void ClearEffect(TextMeshProUGUI tmp, ref NameEffectController controller, Color fallbackColor)
	{
	}

	[Token(Token = "0x6003B21")]
	[Address(RVA = "0x3F95970", Offset = "0x3F95970", VA = "0x3F95970")]
	private static void ApplyEffect(TextMeshProUGUI tmp, ref NameEffectController controller, ResolvedNameEffect effect)
	{
	}

	[Token(Token = "0x6003B22")]
	[Address(RVA = "0x3F93300", Offset = "0x3F93300", VA = "0x3F93300")]
	private void SetupGuildBadges()
	{
	}

	[Token(Token = "0x6003B23")]
	[Address(RVA = "0x3F94D00", Offset = "0x3F94D00", VA = "0x3F94D00")]
	private void RefreshGuildBadges(Player owner)
	{
	}

	[Token(Token = "0x6003B24")]
	[Address(RVA = "0x3F95770", Offset = "0x3F95770", VA = "0x3F95770")]
	private void SetGuildRowSpacing(bool imageGuild)
	{
	}

	[Token(Token = "0x6003B25")]
	[Address(RVA = "0x3F94B00", Offset = "0x3F94B00", VA = "0x3F94B00")]
	private string GuildPresetId(Player owner)
	{
		return null;
	}

	[Token(Token = "0x6003B26")]
	[Address(RVA = "0x3F95BD0", Offset = "0x3F95BD0", VA = "0x3F95BD0")]
	private string CharacterInfoJson(Player owner)
	{
		return null;
	}

	[Token(Token = "0x6003B27")]
	[Address(RVA = "0x3F94A00", Offset = "0x3F94A00", VA = "0x3F94A00")]
	private Player OwnerPlayer()
	{
		return null;
	}

	[Token(Token = "0x6003B28")]
	[Address(RVA = "0x3F95D90", Offset = "0x3F95D90", VA = "0x3F95D90")]
	public CharacterInfoPopup()
	{
	}
}

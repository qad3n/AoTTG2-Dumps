// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterInfoPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterInfoPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterInfoPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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

[Token(Token = "0x200076A")]
internal class CharacterInfoPopup : BasePopup
{
	[Token(Token = "0x40024AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected TextMeshProUGUI _guildLabel;

	[Token(Token = "0x40024AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected TextMeshProUGUI _nameLabel;

	[Token(Token = "0x40024AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Image _nameBackground;

	[Token(Token = "0x40024AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected GameObject _healthbar;

	[Token(Token = "0x40024B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected Image _healthbarFill;

	[Token(Token = "0x40024B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected TextMeshProUGUI _healthbarLabel;

	[Token(Token = "0x40024B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private GameObject _guildRow;

	[Token(Token = "0x40024B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private AottgBadgeIconRowRuntime _guildBadges;

	[Token(Token = "0x40024B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private NameEffectController _guildEffect;

	[Token(Token = "0x40024B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private NameEffectController _guildPresetEffect;

	[Token(Token = "0x40024B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private NameEffectController _nameEffect;

	[Token(Token = "0x40024B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private Image _guildPresetImage;

	[Token(Token = "0x40024B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public BaseCharacter Character;

	[Token(Token = "0x40024B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public Vector3 Offset;

	[Token(Token = "0x40024BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	public float Range;

	[Token(Token = "0x40024BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Color _settingsNameColor;

	[Token(Token = "0x40024BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Color _settingsBackgroundColor;

	[Token(Token = "0x40024BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private NameStyleType _settingsStyleType;

	[Token(Token = "0x40024BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x144")]
	private bool _forceNameColorEnabled;

	[Token(Token = "0x40024BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x145")]
	private bool _applyForceNameColor;

	[Token(Token = "0x40024C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x146")]
	private bool _settingsApplyToMe;

	[Token(Token = "0x40024C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x147")]
	private bool _teamsEnabled;

	[Token(Token = "0x40024C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private string _name;

	[Token(Token = "0x40024C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private int _minNameLength;

	[Token(Token = "0x40024C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x154")]
	private int _maxNameLength;

	[Token(Token = "0x40024C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private string _lastName;

	[Token(Token = "0x40024C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private string _lastGuild;

	[Token(Token = "0x40024C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private string _lastTeam;

	[Token(Token = "0x17000CEB")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004804")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000CEC")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004805")]
		[Address(RVA = "0x22258B0", Offset = "0x2223EB0", VA = "0x1822258B0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000CED")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004806")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6004807")]
	[Address(RVA = "0x2224C50", Offset = "0x2223250", VA = "0x182224C50", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004808")]
	[Address(RVA = "0x2223160", Offset = "0x2221760", VA = "0x182223160")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x6004809")]
	[Address(RVA = "0x2222DC0", Offset = "0x22213C0", VA = "0x182222DC0")]
	private void InGameManager_PlayerInfoUpdated(int actorNumber)
	{
	}

	[Token(Token = "0x600480A")]
	[Address(RVA = "0x2222600", Offset = "0x2220C00", VA = "0x182222600")]
	private void Character_OnPlayerPropertiesChanged(Hashtable changedProps)
	{
	}

	[Token(Token = "0x600480B")]
	[Address(RVA = "0x2223AE0", Offset = "0x22220E0", VA = "0x182223AE0")]
	private void SettingsManager_OnSettingsChanged()
	{
	}

	[Token(Token = "0x600480C")]
	[Address(RVA = "0x22238B0", Offset = "0x2221EB0", VA = "0x1822238B0")]
	public void SetName(string name)
	{
	}

	[Token(Token = "0x600480D")]
	[Address(RVA = "0x2222F80", Offset = "0x2221580", VA = "0x182222F80")]
	public void Load(BaseCharacter character, Vector3 offset, float range)
	{
	}

	[Token(Token = "0x600480E")]
	[Address(RVA = "0x2222340", Offset = "0x2220940", VA = "0x182222340")]
	private bool CanApplySettings()
	{
		return default(bool);
	}

	[Token(Token = "0x600480F")]
	[Address(RVA = "0x2222E00", Offset = "0x2221400", VA = "0x182222E00")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6004810")]
	[Address(RVA = "0x2225050", Offset = "0x2223650", VA = "0x182225050")]
	public void ToggleName(bool toggle)
	{
	}

	[Token(Token = "0x6004811")]
	[Address(RVA = "0x2224FE0", Offset = "0x22235E0", VA = "0x182224FE0")]
	public void ToggleHealthbar(bool toggle)
	{
	}

	[Token(Token = "0x6004812")]
	[Address(RVA = "0x2223700", Offset = "0x2221D00", VA = "0x182223700")]
	public void SetHealthbar(int currentHealth, int maxHealth, Color color)
	{
	}

	[Token(Token = "0x6004813")]
	[Address(RVA = "0x22250C0", Offset = "0x22236C0", VA = "0x1822250C0")]
	private void UpdateEffectOverlay(string guild, string nameText, string guildPresetId)
	{
	}

	[Token(Token = "0x6004814")]
	[Address(RVA = "0x22229B0", Offset = "0x2220FB0", VA = "0x1822229B0")]
	private static void ClearEffect(TextMeshProUGUI tmp, ref NameEffectController controller, Color fallbackColor)
	{
	}

	[Token(Token = "0x6004815")]
	[Address(RVA = "0x2222130", Offset = "0x2220730", VA = "0x182222130")]
	private static void ApplyEffect(TextMeshProUGUI tmp, ref NameEffectController controller, ResolvedNameEffect effect)
	{
	}

	[Token(Token = "0x6004816")]
	[Address(RVA = "0x2224590", Offset = "0x2222B90", VA = "0x182224590")]
	private void SetupGuildBadges()
	{
	}

	[Token(Token = "0x6004817")]
	[Address(RVA = "0x22233D0", Offset = "0x22219D0", VA = "0x1822233D0")]
	private void RefreshGuildBadges(Player owner)
	{
	}

	[Token(Token = "0x6004818")]
	[Address(RVA = "0x2223610", Offset = "0x2221C10", VA = "0x182223610")]
	private void SetGuildRowSpacing(bool imageGuild)
	{
	}

	[Token(Token = "0x6004819")]
	[Address(RVA = "0x2222AB0", Offset = "0x22210B0", VA = "0x182222AB0")]
	private string GuildPresetId(Player owner)
	{
		return null;
	}

	[Token(Token = "0x600481A")]
	[Address(RVA = "0x2222440", Offset = "0x2220A40", VA = "0x182222440")]
	private string CharacterInfoJson(Player owner)
	{
		return null;
	}

	[Token(Token = "0x600481B")]
	[Address(RVA = "0x22232E0", Offset = "0x22218E0", VA = "0x1822232E0")]
	private Player OwnerPlayer()
	{
		return null;
	}

	[Token(Token = "0x600481C")]
	[Address(RVA = "0x2225830", Offset = "0x2223E30", VA = "0x182225830")]
	public CharacterInfoPopup()
	{
	}
}

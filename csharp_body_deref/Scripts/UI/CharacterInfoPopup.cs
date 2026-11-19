// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterInfoPopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000814")]
internal class CharacterInfoPopup : BasePopup
{
	[Token(Token = "0x4002821")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected TextMeshProUGUI _guildLabel;

	[Token(Token = "0x4002822")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected TextMeshProUGUI _nameLabel;

	[Token(Token = "0x4002823")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Image _nameBackground;

	[Token(Token = "0x4002824")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected GameObject _healthbar;

	[Token(Token = "0x4002825")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected Image _healthbarFill;

	[Token(Token = "0x4002826")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected TextMeshProUGUI _healthbarLabel;

	[Token(Token = "0x4002827")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private GameObject _guildRow;

	[Token(Token = "0x4002828")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private AottgBadgeIconRowRuntime _guildBadges;

	[Token(Token = "0x4002829")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private NameEffectController _guildEffect;

	[Token(Token = "0x400282A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private NameEffectController _guildPresetEffect;

	[Token(Token = "0x400282B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private NameEffectController _nameEffect;

	[Token(Token = "0x400282C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private Image _guildPresetImage;

	[Token(Token = "0x400282D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public BaseCharacter Character;

	[Token(Token = "0x400282E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public Vector3 Offset;

	[Token(Token = "0x400282F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	public float Range;

	[Token(Token = "0x4002830")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Color _settingsNameColor;

	[Token(Token = "0x4002831")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Color _settingsBackgroundColor;

	[Token(Token = "0x4002832")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private NameStyleType _settingsStyleType;

	[Token(Token = "0x4002833")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x144")]
	private bool _forceNameColorEnabled;

	[Token(Token = "0x4002834")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x145")]
	private bool _applyForceNameColor;

	[Token(Token = "0x4002835")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x146")]
	private bool _settingsApplyToMe;

	[Token(Token = "0x4002836")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x147")]
	private bool _teamsEnabled;

	[Token(Token = "0x4002837")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private string _name;

	[Token(Token = "0x4002838")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private int _minNameLength;

	[Token(Token = "0x4002839")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x154")]
	private int _maxNameLength;

	[Token(Token = "0x400283A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private string _lastName;

	[Token(Token = "0x400283B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private string _lastGuild;

	[Token(Token = "0x400283C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private string _lastTeam;

	[Token(Token = "0x17000D67")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004D24")]
		[Address(RVA = "0x5C022A0", Offset = "0x5C012A0", VA = "0x5C022A0", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D68")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6004D25")]
		[Address(RVA = "0x5C022B0", Offset = "0x5C012B0", VA = "0x5C022B0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D69")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004D26")]
		[Address(RVA = "0x5C022C0", Offset = "0x5C012C0", VA = "0x5C022C0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6004D27")]
	[Address(RVA = "0x5C022D0", Offset = "0x5C012D0", VA = "0x5C022D0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004D28")]
	[Address(RVA = "0x5C02CF0", Offset = "0x5C01CF0", VA = "0x5C02CF0")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x6004D29")]
	[Address(RVA = "0x5C02E70", Offset = "0x5C01E70", VA = "0x5C02E70")]
	private void InGameManager_PlayerInfoUpdated(int actorNumber)
	{
	}

	[Token(Token = "0x6004D2A")]
	[Address(RVA = "0x5C03A90", Offset = "0x5C02A90", VA = "0x5C03A90")]
	private void Character_OnPlayerPropertiesChanged(Hashtable changedProps)
	{
	}

	[Token(Token = "0x6004D2B")]
	[Address(RVA = "0x5C02FA0", Offset = "0x5C01FA0", VA = "0x5C02FA0")]
	private void SettingsManager_OnSettingsChanged()
	{
	}

	[Token(Token = "0x6004D2C")]
	[Address(RVA = "0x5C03F10", Offset = "0x5C02F10", VA = "0x5C03F10")]
	public void SetName(string name)
	{
	}

	[Token(Token = "0x6004D2D")]
	[Address(RVA = "0x5C01E00", Offset = "0x5C00E00", VA = "0x5C01E00")]
	public void Load(BaseCharacter character, Vector3 offset, float range)
	{
	}

	[Token(Token = "0x6004D2E")]
	[Address(RVA = "0x5C03E30", Offset = "0x5C02E30", VA = "0x5C03E30")]
	private bool CanApplySettings()
	{
		return default(bool);
	}

	[Token(Token = "0x6004D2F")]
	[Address(RVA = "0x5C04BE0", Offset = "0x5C03BE0", VA = "0x5C04BE0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6004D30")]
	[Address(RVA = "0x5C019D0", Offset = "0x5C009D0", VA = "0x5C019D0")]
	public void ToggleName(bool toggle)
	{
	}

	[Token(Token = "0x6004D31")]
	[Address(RVA = "0x5C017F0", Offset = "0x5C007F0", VA = "0x5C017F0")]
	public void ToggleHealthbar(bool toggle)
	{
	}

	[Token(Token = "0x6004D32")]
	[Address(RVA = "0x5C01860", Offset = "0x5C00860", VA = "0x5C01860")]
	public void SetHealthbar(int currentHealth, int maxHealth, Color color)
	{
	}

	[Token(Token = "0x6004D33")]
	[Address(RVA = "0x5C04530", Offset = "0x5C03530", VA = "0x5C04530")]
	private void UpdateEffectOverlay(string guild, string nameText, string guildPresetId)
	{
	}

	[Token(Token = "0x6004D34")]
	[Address(RVA = "0x5C04E70", Offset = "0x5C03E70", VA = "0x5C04E70")]
	private static void ClearEffect(TextMeshProUGUI tmp, ref NameEffectController controller, Color fallbackColor)
	{
	}

	[Token(Token = "0x6004D35")]
	[Address(RVA = "0x5C04F80", Offset = "0x5C03F80", VA = "0x5C04F80")]
	private static void ApplyEffect(TextMeshProUGUI tmp, ref NameEffectController controller, ResolvedNameEffect effect)
	{
	}

	[Token(Token = "0x6004D36")]
	[Address(RVA = "0x5C02670", Offset = "0x5C01670", VA = "0x5C02670")]
	private void SetupGuildBadges()
	{
	}

	[Token(Token = "0x6004D37")]
	[Address(RVA = "0x5C04300", Offset = "0x5C03300", VA = "0x5C04300")]
	private void RefreshGuildBadges(Player owner)
	{
	}

	[Token(Token = "0x6004D38")]
	[Address(RVA = "0x5C04D80", Offset = "0x5C03D80", VA = "0x5C04D80")]
	private void SetGuildRowSpacing(bool imageGuild)
	{
	}

	[Token(Token = "0x6004D39")]
	[Address(RVA = "0x5C04150", Offset = "0x5C03150", VA = "0x5C04150")]
	private string GuildPresetId(Player owner)
	{
		return null;
	}

	[Token(Token = "0x6004D3A")]
	[Address(RVA = "0x5C051E0", Offset = "0x5C041E0", VA = "0x5C051E0")]
	private string CharacterInfoJson(Player owner)
	{
		return null;
	}

	[Token(Token = "0x6004D3B")]
	[Address(RVA = "0x5C02EA0", Offset = "0x5C01EA0", VA = "0x5C02EA0")]
	private Player OwnerPlayer()
	{
		return null;
	}

	[Token(Token = "0x6004D3C")]
	[Address(RVA = "0x5C053A0", Offset = "0x5C043A0", VA = "0x5C053A0")]
	public CharacterInfoPopup()
	{
	}
}

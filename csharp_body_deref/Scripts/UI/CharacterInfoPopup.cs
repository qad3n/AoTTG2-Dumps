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

[Token(Token = "0x200060E")]
internal class CharacterInfoPopup : BasePopup
{
	[Token(Token = "0x4001CFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	protected TextMeshProUGUI _guildLabel;

	[Token(Token = "0x4001CFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected TextMeshProUGUI _nameLabel;

	[Token(Token = "0x4001CFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected Image _nameBackground;

	[Token(Token = "0x4001CFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	protected GameObject _healthbar;

	[Token(Token = "0x4001CFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	protected Image _healthbarFill;

	[Token(Token = "0x4001D00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	protected TextMeshProUGUI _healthbarLabel;

	[Token(Token = "0x4001D01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private GameObject _guildRow;

	[Token(Token = "0x4001D02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private AottgBadgeIconRowRuntime _guildBadges;

	[Token(Token = "0x4001D03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private NameEffectController _guildEffect;

	[Token(Token = "0x4001D04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private NameEffectController _guildPresetEffect;

	[Token(Token = "0x4001D05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private NameEffectController _nameEffect;

	[Token(Token = "0x4001D06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private Image _guildPresetImage;

	[Token(Token = "0x4001D07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public BaseCharacter Character;

	[Token(Token = "0x4001D08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public Vector3 Offset;

	[Token(Token = "0x4001D09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	public float Range;

	[Token(Token = "0x4001D0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private Color _settingsNameColor;

	[Token(Token = "0x4001D0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private Color _settingsBackgroundColor;

	[Token(Token = "0x4001D0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private NameStyleType _settingsStyleType;

	[Token(Token = "0x4001D0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x144")]
	private bool _forceNameColorEnabled;

	[Token(Token = "0x4001D0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x145")]
	private bool _applyForceNameColor;

	[Token(Token = "0x4001D0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x146")]
	private bool _settingsApplyToMe;

	[Token(Token = "0x4001D10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x147")]
	private bool _teamsEnabled;

	[Token(Token = "0x4001D11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private string _name;

	[Token(Token = "0x4001D12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private int _minNameLength;

	[Token(Token = "0x4001D13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x154")]
	private int _maxNameLength;

	[Token(Token = "0x4001D14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private string _lastName;

	[Token(Token = "0x4001D15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private string _lastGuild;

	[Token(Token = "0x4001D16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private string _lastTeam;

	[Token(Token = "0x17000BA1")]
	protected override float AnimationTime
	{
		[Token(Token = "0x6003D23")]
		[Address(RVA = "0x42A0FC0", Offset = "0x42A0FC0", VA = "0x42A0FC0", Slot = "51")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BA2")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003D24")]
		[Address(RVA = "0x42A0FD0", Offset = "0x42A0FD0", VA = "0x42A0FD0", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6003D25")]
	[Address(RVA = "0x42A0FE0", Offset = "0x42A0FE0", VA = "0x42A0FE0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003D26")]
	[Address(RVA = "0x42A19F0", Offset = "0x42A19F0", VA = "0x42A19F0")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x6003D27")]
	[Address(RVA = "0x42A1B70", Offset = "0x42A1B70", VA = "0x42A1B70")]
	private void InGameManager_PlayerInfoUpdated(int actorNumber)
	{
	}

	[Token(Token = "0x6003D28")]
	[Address(RVA = "0x42A27A0", Offset = "0x42A27A0", VA = "0x42A27A0")]
	private void Character_OnPlayerPropertiesChanged(Hashtable changedProps)
	{
	}

	[Token(Token = "0x6003D29")]
	[Address(RVA = "0x42A1CA0", Offset = "0x42A1CA0", VA = "0x42A1CA0")]
	private void SettingsManager_OnSettingsChanged()
	{
	}

	[Token(Token = "0x6003D2A")]
	[Address(RVA = "0x42A2C20", Offset = "0x42A2C20", VA = "0x42A2C20")]
	public void SetName(string name)
	{
	}

	[Token(Token = "0x6003D2B")]
	[Address(RVA = "0x42A0B30", Offset = "0x42A0B30", VA = "0x42A0B30")]
	public void Load(BaseCharacter character, Vector3 offset, float range)
	{
	}

	[Token(Token = "0x6003D2C")]
	[Address(RVA = "0x42A2B40", Offset = "0x42A2B40", VA = "0x42A2B40")]
	private bool CanApplySettings()
	{
		return default(bool);
	}

	[Token(Token = "0x6003D2D")]
	[Address(RVA = "0x42A38C0", Offset = "0x42A38C0", VA = "0x42A38C0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6003D2E")]
	[Address(RVA = "0x42A0760", Offset = "0x42A0760", VA = "0x42A0760")]
	public void ToggleName(bool toggle)
	{
	}

	[Token(Token = "0x6003D2F")]
	[Address(RVA = "0x42A0580", Offset = "0x42A0580", VA = "0x42A0580")]
	public void ToggleHealthbar(bool toggle)
	{
	}

	[Token(Token = "0x6003D30")]
	[Address(RVA = "0x42A05F0", Offset = "0x42A05F0", VA = "0x42A05F0")]
	public void SetHealthbar(int currentHealth, int maxHealth, Color color)
	{
	}

	[Token(Token = "0x6003D31")]
	[Address(RVA = "0x42A3250", Offset = "0x42A3250", VA = "0x42A3250")]
	private void UpdateEffectOverlay(string guild, string nameText, string guildPresetId)
	{
	}

	[Token(Token = "0x6003D32")]
	[Address(RVA = "0x42A3B50", Offset = "0x42A3B50", VA = "0x42A3B50")]
	private static void ClearEffect(TextMeshProUGUI tmp, ref NameEffectController controller, Color fallbackColor)
	{
	}

	[Token(Token = "0x6003D33")]
	[Address(RVA = "0x42A3C60", Offset = "0x42A3C60", VA = "0x42A3C60")]
	private static void ApplyEffect(TextMeshProUGUI tmp, ref NameEffectController controller, ResolvedNameEffect effect)
	{
	}

	[Token(Token = "0x6003D34")]
	[Address(RVA = "0x42A1380", Offset = "0x42A1380", VA = "0x42A1380")]
	private void SetupGuildBadges()
	{
	}

	[Token(Token = "0x6003D35")]
	[Address(RVA = "0x42A3020", Offset = "0x42A3020", VA = "0x42A3020")]
	private void RefreshGuildBadges(Player owner)
	{
	}

	[Token(Token = "0x6003D36")]
	[Address(RVA = "0x42A3A60", Offset = "0x42A3A60", VA = "0x42A3A60")]
	private void SetGuildRowSpacing(bool imageGuild)
	{
	}

	[Token(Token = "0x6003D37")]
	[Address(RVA = "0x42A2E20", Offset = "0x42A2E20", VA = "0x42A2E20")]
	private string GuildPresetId(Player owner)
	{
		return null;
	}

	[Token(Token = "0x6003D38")]
	[Address(RVA = "0x42A3EC0", Offset = "0x42A3EC0", VA = "0x42A3EC0")]
	private string CharacterInfoJson(Player owner)
	{
		return null;
	}

	[Token(Token = "0x6003D39")]
	[Address(RVA = "0x42A1BA0", Offset = "0x42A1BA0", VA = "0x42A1BA0")]
	private Player OwnerPlayer()
	{
		return null;
	}

	[Token(Token = "0x6003D3A")]
	[Address(RVA = "0x42A4080", Offset = "0x42A4080", VA = "0x42A4080")]
	public CharacterInfoPopup()
	{
	}
}

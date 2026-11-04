// ==================== AoTTG2 cross-reference ====================
// Type: UI.InGameMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/InGameMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/InGameMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Photon.Realtime;
using TMPro;
using UnityEngine;
using UnityEngine.UIElements;

namespace UI;

[Token(Token = "0x2000797")]
internal class InGameMenu : BaseMenu
{
	[Token(Token = "0x2000799")]
	[CompilerGenerated]
	private sealed class _003CWaitAndShowBlood_003Ed__113 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400263F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002640")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002641")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public InGameMenu _003C_003E4__this;

		[Token(Token = "0x17000D3C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60049E2")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D3D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60049E4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60049DF")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndShowBlood_003Ed__113(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60049E0")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60049E1")]
		[Address(RVA = "0x226E190", Offset = "0x226C790", VA = "0x18226E190", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60049E3")]
		[Address(RVA = "0x226E270", Offset = "0x226C870", VA = "0x18226E270", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40025FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public EmoteHandler EmoteHandler;

	[Token(Token = "0x40025FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public ItemHandler ItemHandler;

	[Token(Token = "0x40025FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public ActionHandler ActionHandler;

	[Token(Token = "0x40025FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public CharacterInfoHandler CharacterInfoHandler;

	[Token(Token = "0x4002600")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public HUDBottomHandler HUDBottomHandler;

	[Token(Token = "0x4002601")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public StylebarHandler StylebarHandler;

	[Token(Token = "0x4002602")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public GameObject NapeLock;

	[Token(Token = "0x4002603")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public ChatPanel ChatPanel;

	[Token(Token = "0x4002604")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	public FeedPanel FeedPanel;

	[Token(Token = "0x4002605")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public VoiceChatPanel VoiceChatPanel;

	[Token(Token = "0x4002606")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public GameObject TopLeftHud;

	[Token(Token = "0x4002607")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public GameObject KDRReference;

	[Token(Token = "0x4002608")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public KDRPanel KDRPanel;

	[Token(Token = "0x4002609")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public Telemetry TelemetryPanel;

	[Token(Token = "0x400260A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public BasePopup _settingsPopup;

	[Token(Token = "0x400260B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public BasePopup _pausePopup;

	[Token(Token = "0x400260C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	public BasePopup _characterPopup;

	[Token(Token = "0x400260D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	public BasePopup _characterChangePopup;

	[Token(Token = "0x400260E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	public BasePopup _scoreboardPopup;

	[Token(Token = "0x400260F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	public BasePopup _mapPopup;

	[Token(Token = "0x4002610")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	public BasePopup _songPopup;

	[Token(Token = "0x4002611")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	public CustomAssetUrlPopup _customAssetUrlPopup;

	[Token(Token = "0x4002612")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	public CustomAssetVideoUrlPopup _customAssetVideoUrlPopup;

	[Token(Token = "0x4002613")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	public SnapshotPopup _snapshotPopup;

	[Token(Token = "0x4002614")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	public GlobalPauseGamePopup _globalPauseGamePopup;

	[Token(Token = "0x4002615")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	public CutsceneDialoguePanel _cutsceneDialoguePanel;

	[Token(Token = "0x4002616")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	public bool SkipAHSSInput;

	[Token(Token = "0x4002617")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private InGameBackgroundMenu _backgroundMenu;

	[Token(Token = "0x4002618")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private KillFeedBigPopup _killFeedBigPopup;

	[Token(Token = "0x4002619")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private List<KillFeedSmallPopup> _killFeedSmallPopups;

	[Token(Token = "0x400261A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private KillScorePopup _killScorePopup;

	[Token(Token = "0x400261B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private InGameLabel _topCenterLabel;

	[Token(Token = "0x400261C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private InGameLabel _topLeftLabel;

	[Token(Token = "0x400261D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private InGameLabel _topRightLabel;

	[Token(Token = "0x400261E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private InGameLabel _middleCenterLabel;

	[Token(Token = "0x400261F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private InGameLabel _middleLeftLabel;

	[Token(Token = "0x4002620")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private InGameLabel _middleRightLabel;

	[Token(Token = "0x4002621")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private InGameLabel _bottomLeftLabel;

	[Token(Token = "0x4002622")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private InGameLabel _bottomRightLabel;

	[Token(Token = "0x4002623")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private InGameLabel _bottomCenterLabel;

	[Token(Token = "0x4002624")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private bool _showingBlood;

	[Token(Token = "0x4002625")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	public GameObject _minimapPanel;

	[Token(Token = "0x4002626")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private List<BasePopup> _allPausePopups;

	[Token(Token = "0x4002627")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private Dictionary<string, InGameLabel> _labels;

	[Token(Token = "0x4002628")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	private bool _legacyLabels;

	[Token(Token = "0x4002629")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private Dictionary<string, float> _labelTimeLeft;

	[Token(Token = "0x400262A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private Dictionary<string, bool> _labelHasTimeLeft;

	[Token(Token = "0x400262B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	private List<string> labelsToDeactivate;

	[Token(Token = "0x400262C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	private float _killScoreTimeLeft;

	[Token(Token = "0x400262D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21C")]
	private float _snapshotTimeLeft;

	[Token(Token = "0x400262E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private string _middleCenterText;

	[Token(Token = "0x400262F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x228")]
	private string _bottomRightText;

	[Token(Token = "0x4002630")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x230")]
	private string _bottomCenterText;

	[Token(Token = "0x4002631")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	private string _topLeftText;

	[Token(Token = "0x4002632")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x240")]
	public float _spectateUpdateTimeLeft;

	[Token(Token = "0x4002633")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x244")]
	public int _spectateCount;

	[Token(Token = "0x4002634")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x248")]
	private InGameManager _gameManager;

	[Token(Token = "0x4002635")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x250")]
	private Dictionary<string, BasePopup> _customPopups;

	[Token(Token = "0x4002636")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x258")]
	private string[] trackedProperties;

	[Token(Token = "0x4002637")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x260")]
	private UIDocument _uiDocument;

	[Token(Token = "0x4002638")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private int _lastDismissedMenuFrame;

	[Token(Token = "0x4002639")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26C")]
	public bool ScoreboardDismissedUntilRelease;

	[Token(Token = "0x400263A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26D")]
	public bool MapDismissedUntilRelease;

	[Token(Token = "0x17000D3B")]
	public VisualElement RootVisualElement
	{
		[Token(Token = "0x600499E")]
		[Address(RVA = "0x2253EE0", Offset = "0x22524E0", VA = "0x182253EE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600499F")]
	[Address(RVA = "0x2251460", Offset = "0x224FA60", VA = "0x182251460", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60049A0")]
	[Address(RVA = "0x224C1A0", Offset = "0x224A7A0", VA = "0x18224C1A0")]
	public void ApplyUISettings()
	{
	}

	[Token(Token = "0x60049A1")]
	[Address(RVA = "0x2251360", Offset = "0x224F960", VA = "0x182251360")]
	public void SetupTopLeftHud()
	{
	}

	[Token(Token = "0x60049A2")]
	[Address(RVA = "0x2252530", Offset = "0x2250B30", VA = "0x182252530")]
	public void ToggleUI(bool toggle)
	{
	}

	[Token(Token = "0x60049A3")]
	[Address(RVA = "0x224EB90", Offset = "0x224D190", VA = "0x18224EB90")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60049A4")]
	[Address(RVA = "0x224C2B0", Offset = "0x224A8B0", VA = "0x18224C2B0")]
	public void CreateCustomPopup(string name, string title, float width, float height)
	{
	}

	[Token(Token = "0x60049A5")]
	[Address(RVA = "0x224CC70", Offset = "0x224B270", VA = "0x18224CC70")]
	public CustomPopup GetCustomPopup(string name)
	{
		return null;
	}

	[Token(Token = "0x60049A6")]
	[Address(RVA = "0x224EBE0", Offset = "0x224D1E0", VA = "0x18224EBE0")]
	public bool IsCustomPopupActive(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60049A7")]
	[Address(RVA = "0x224CC00", Offset = "0x224B200", VA = "0x18224CC00")]
	public List<string> GetAllCustomPopups()
	{
		return null;
	}

	[Token(Token = "0x60049A8")]
	[Address(RVA = "0x2250C10", Offset = "0x224F210", VA = "0x182250C10")]
	public void SetupMinimap()
	{
	}

	[Token(Token = "0x60049A9")]
	[Address(RVA = "0x2251250", Offset = "0x224F850", VA = "0x182251250")]
	public void SetupSnapshot()
	{
	}

	[Token(Token = "0x60049AA")]
	[Address(RVA = "0x2250000", Offset = "0x224E600", VA = "0x182250000")]
	private void SetupChat()
	{
	}

	[Token(Token = "0x60049AB")]
	[Address(RVA = "0x2250340", Offset = "0x224E940", VA = "0x182250340")]
	private void SetupLabels()
	{
	}

	[Token(Token = "0x60049AC")]
	[Address(RVA = "0x224C3F0", Offset = "0x224A9F0", VA = "0x18224C3F0")]
	private InGameLabel CreateLabel(string label, Transform parent, ElementStyle style, TextAlignmentOptions alignment, TextAnchor anchor, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x60049AD")]
	[Address(RVA = "0x224FBC0", Offset = "0x224E1C0", VA = "0x18224FBC0")]
	public void SetLegacyLabels(bool legacy)
	{
	}

	[Token(Token = "0x60049AE")]
	[Address(RVA = "0x2250B30", Offset = "0x224F130", VA = "0x182250B30")]
	private void SetupLoading()
	{
	}

	[Token(Token = "0x60049AF")]
	[Address(RVA = "0x224EDD0", Offset = "0x224D3D0", VA = "0x18224EDD0")]
	public void OnFinishLoading()
	{
	}

	[Token(Token = "0x60049B0")]
	[Address(RVA = "0x224C100", Offset = "0x224A700", VA = "0x18224C100")]
	public bool AllowMap()
	{
		return default(bool);
	}

	[Token(Token = "0x60049B1")]
	[Address(RVA = "0x224E960", Offset = "0x224CF60", VA = "0x18224E960")]
	public static bool InMenu()
	{
		return default(bool);
	}

	[Token(Token = "0x60049B2")]
	[Address(RVA = "0x2252590", Offset = "0x2250B90", VA = "0x182252590")]
	public bool TryDismissGameplayMenu()
	{
		return default(bool);
	}

	[Token(Token = "0x60049B3")]
	[Address(RVA = "0x224C4E0", Offset = "0x224AAE0", VA = "0x18224C4E0")]
	private static BasePopup FindTopmostPopup(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60049B4")]
	[Address(RVA = "0x224FED0", Offset = "0x224E4D0", VA = "0x18224FED0")]
	public void SetPauseMenu(bool enabled)
	{
	}

	[Token(Token = "0x60049B5")]
	[Address(RVA = "0x2252450", Offset = "0x2250A50", VA = "0x182252450")]
	public void ToggleScoreboardMenu()
	{
	}

	[Token(Token = "0x60049B6")]
	[Address(RVA = "0x224FF70", Offset = "0x224E570", VA = "0x18224FF70")]
	public void SetScoreboardMenu(bool enabled, bool fromClick)
	{
	}

	[Token(Token = "0x60049B7")]
	[Address(RVA = "0x2252370", Offset = "0x2250970", VA = "0x182252370")]
	public void ToggleMapMenu()
	{
	}

	[Token(Token = "0x60049B8")]
	[Address(RVA = "0x224FDE0", Offset = "0x224E3E0", VA = "0x18224FDE0")]
	public void SetMapMenu(bool enabled, bool fromClick)
	{
	}

	[Token(Token = "0x60049B9")]
	[Address(RVA = "0x224F330", Offset = "0x224D930", VA = "0x18224F330")]
	public void SetCharacterMenu(bool enabled)
	{
	}

	[Token(Token = "0x60049BA")]
	[Address(RVA = "0x2251B70", Offset = "0x2250170", VA = "0x182251B70")]
	public void ShowCharacterChangeMenu()
	{
	}

	[Token(Token = "0x60049BB")]
	[Address(RVA = "0x2251C80", Offset = "0x2250280", VA = "0x182251C80")]
	public void ShowCutsceneMenu(string icon, string title, string content, bool full)
	{
	}

	[Token(Token = "0x60049BC")]
	[Address(RVA = "0x224E930", Offset = "0x224CF30", VA = "0x18224E930")]
	public void HideCutsceneMenu()
	{
	}

	[Token(Token = "0x60049BD")]
	[Address(RVA = "0x224EC80", Offset = "0x224D280", VA = "0x18224EC80")]
	public bool IsPauseMenuActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60049BE")]
	[Address(RVA = "0x2251AE0", Offset = "0x22500E0", VA = "0x182251AE0")]
	public void ShowBlood()
	{
	}

	[Token(Token = "0x60049BF")]
	[Address(RVA = "0x2252310", Offset = "0x2250910", VA = "0x182252310")]
	public void ShowSnapshot(Texture2D texture)
	{
	}

	[Token(Token = "0x60049C0")]
	[Address(RVA = "0x2252100", Offset = "0x2250700", VA = "0x182252100")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x60049C1")]
	[Address(RVA = "0x2251FB0", Offset = "0x22505B0", VA = "0x182251FB0")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon, int killerActorNumber, int victimActorNumber)
	{
	}

	[Token(Token = "0x60049C2")]
	[Address(RVA = "0x2251E50", Offset = "0x2250450", VA = "0x182251E50")]
	private void ShowKillFeedPushSmall(string killer, string victim, int score, string weapon, float timeLeft, int killerActorNumber, int victimActorNumber, int index)
	{
	}

	[Token(Token = "0x60049C3")]
	[Address(RVA = "0x2252250", Offset = "0x2250850", VA = "0x182252250")]
	public void ShowKillScore(int score, bool force = false)
	{
	}

	[Token(Token = "0x60049C4")]
	[Address(RVA = "0x224E690", Offset = "0x224CC90", VA = "0x18224E690")]
	public int GetStylebarRank()
	{
		return default(int);
	}

	[Token(Token = "0x60049C5")]
	[Address(RVA = "0x224F590", Offset = "0x224DB90", VA = "0x18224F590")]
	public void SetLabelActive(string label, bool active)
	{
	}

	[Token(Token = "0x60049C6")]
	[Address(RVA = "0x224F7B0", Offset = "0x224DDB0", VA = "0x18224F7B0")]
	public void SetLabelBackgroundColor(string label, Color color)
	{
	}

	[Token(Token = "0x60049C7")]
	[Address(RVA = "0x224F630", Offset = "0x224DC30", VA = "0x18224F630")]
	public void SetLabelBackgroundColorAll(Color color)
	{
	}

	[Token(Token = "0x60049C8")]
	[Address(RVA = "0x224F560", Offset = "0x224DB60", VA = "0x18224F560")]
	public void SetKDRPanelActive(bool active)
	{
	}

	[Token(Token = "0x60049C9")]
	[Address(RVA = "0x224FE80", Offset = "0x224E480", VA = "0x18224FE80")]
	public void SetMinimapActive(bool active)
	{
	}

	[Token(Token = "0x60049CA")]
	[Address(RVA = "0x224F480", Offset = "0x224DA80", VA = "0x18224F480")]
	public void SetChatPanelActive(bool active)
	{
	}

	[Token(Token = "0x60049CB")]
	[Address(RVA = "0x224F4C0", Offset = "0x224DAC0", VA = "0x18224F4C0")]
	public void SetFeedPanelActive(bool active)
	{
	}

	[Token(Token = "0x60049CC")]
	[Address(RVA = "0x224F290", Offset = "0x224D890", VA = "0x18224F290")]
	public void SetBottomHUDActive(bool active)
	{
	}

	[Token(Token = "0x60049CD")]
	[Address(RVA = "0x224FB00", Offset = "0x224E100", VA = "0x18224FB00")]
	public void SetLabel(string label, string message, float time)
	{
	}

	[Token(Token = "0x60049CE")]
	[Address(RVA = "0x224F860", Offset = "0x224DE60", VA = "0x18224F860")]
	private void SetLabelText(string label, string message)
	{
	}

	[Token(Token = "0x60049CF")]
	[Address(RVA = "0x2253B20", Offset = "0x2252120", VA = "0x182253B20")]
	[IteratorStateMachine(typeof(_003CWaitAndShowBlood_003Ed__113))]
	private IEnumerator WaitAndShowBlood()
	{
		return null;
	}

	[Token(Token = "0x60049D0")]
	[Address(RVA = "0x2252800", Offset = "0x2250E00", VA = "0x182252800")]
	private void Update()
	{
	}

	[Token(Token = "0x60049D1")]
	[Address(RVA = "0x224C200", Offset = "0x224A800", VA = "0x18224C200")]
	private string CombineLines(string first, string second)
	{
		return null;
	}

	[Token(Token = "0x60049D2")]
	[Address(RVA = "0x224CD20", Offset = "0x224B320", VA = "0x18224CD20")]
	private string GetKeybindStrings()
	{
		return null;
	}

	[Token(Token = "0x60049D3")]
	[Address(RVA = "0x224D360", Offset = "0x224B960", VA = "0x18224D360")]
	private string GetPlayerListEntry(Player player)
	{
		return null;
	}

	[Token(Token = "0x60049D4")]
	[Address(RVA = "0x224C660", Offset = "0x224AC60", VA = "0x18224C660")]
	private string GetAggregateStats(IGrouping<string, Player> group)
	{
		return null;
	}

	[Token(Token = "0x60049D5")]
	[Address(RVA = "0x224E5B0", Offset = "0x224CBB0", VA = "0x18224E5B0")]
	private string GetPlayerList()
	{
		return null;
	}

	[Token(Token = "0x60049D6")]
	[Address(RVA = "0x224DE20", Offset = "0x224C420", VA = "0x18224DE20")]
	private string GetPlayerListTeams()
	{
		return null;
	}

	[Token(Token = "0x60049D7")]
	[Address(RVA = "0x224E720", Offset = "0x224CD20", VA = "0x18224E720")]
	private void HideAllMenus([Optional] BasePopup keep)
	{
	}

	[Token(Token = "0x60049D8")]
	[Address(RVA = "0x2250D10", Offset = "0x224F310", VA = "0x182250D10", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x60049D9")]
	[Address(RVA = "0x2253B90", Offset = "0x2252190", VA = "0x182253B90")]
	public InGameMenu()
	{
	}
}

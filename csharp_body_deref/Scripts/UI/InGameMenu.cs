using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using GameManagers;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

namespace UI;

[Token(Token = "0x20005F0")]
internal class InGameMenu : BaseMenu
{
	[Token(Token = "0x20005F2")]
	[CompilerGenerated]
	private sealed class _003CWaitAndShowBlood_003Ed__102 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001D3E")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001D3F")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001D40")]
		[FieldOffset(Offset = "0x20")]
		public InGameMenu _003C_003E4__this;

		[Token(Token = "0x17000B6D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003C91")]
			[Address(RVA = "0x3FBB460", Offset = "0x3FBB460", VA = "0x3FBB460", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B6E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003C93")]
			[Address(RVA = "0x3FBB4B0", Offset = "0x3FBB4B0", VA = "0x3FBB4B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003C8E")]
		[Address(RVA = "0x3FB6B60", Offset = "0x3FB6B60", VA = "0x3FB6B60")]
		[DebuggerHidden]
		public _003CWaitAndShowBlood_003Ed__102(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003C8F")]
		[Address(RVA = "0x3FBB340", Offset = "0x3FBB340", VA = "0x3FBB340", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003C90")]
		[Address(RVA = "0x3FBB350", Offset = "0x3FBB350", VA = "0x3FBB350", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003C92")]
		[Address(RVA = "0x3FBB470", Offset = "0x3FBB470", VA = "0x3FBB470", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001CFF")]
	[FieldOffset(Offset = "0x98")]
	public EmoteHandler EmoteHandler;

	[Token(Token = "0x4001D00")]
	[FieldOffset(Offset = "0xA0")]
	public ItemHandler ItemHandler;

	[Token(Token = "0x4001D01")]
	[FieldOffset(Offset = "0xA8")]
	public CharacterInfoHandler CharacterInfoHandler;

	[Token(Token = "0x4001D02")]
	[FieldOffset(Offset = "0xB0")]
	public HUDBottomHandler HUDBottomHandler;

	[Token(Token = "0x4001D03")]
	[FieldOffset(Offset = "0xB8")]
	public StylebarHandler StylebarHandler;

	[Token(Token = "0x4001D04")]
	[FieldOffset(Offset = "0xC0")]
	public GameObject NapeLock;

	[Token(Token = "0x4001D05")]
	[FieldOffset(Offset = "0xC8")]
	public ChatPanel ChatPanel;

	[Token(Token = "0x4001D06")]
	[FieldOffset(Offset = "0xD0")]
	public FeedPanel FeedPanel;

	[Token(Token = "0x4001D07")]
	[FieldOffset(Offset = "0xD8")]
	public VoiceChatPanel VoiceChatPanel;

	[Token(Token = "0x4001D08")]
	[FieldOffset(Offset = "0xE0")]
	public GameObject TopLeftHud;

	[Token(Token = "0x4001D09")]
	[FieldOffset(Offset = "0xE8")]
	public GameObject KDRReference;

	[Token(Token = "0x4001D0A")]
	[FieldOffset(Offset = "0xF0")]
	public KDRPanel KDRPanel;

	[Token(Token = "0x4001D0B")]
	[FieldOffset(Offset = "0xF8")]
	public Telemetry TelemetryPanel;

	[Token(Token = "0x4001D0C")]
	[FieldOffset(Offset = "0x100")]
	public BasePopup _settingsPopup;

	[Token(Token = "0x4001D0D")]
	[FieldOffset(Offset = "0x108")]
	public BasePopup _createGamePopup;

	[Token(Token = "0x4001D0E")]
	[FieldOffset(Offset = "0x110")]
	public BasePopup _pausePopup;

	[Token(Token = "0x4001D0F")]
	[FieldOffset(Offset = "0x118")]
	public BasePopup _characterPopup;

	[Token(Token = "0x4001D10")]
	[FieldOffset(Offset = "0x120")]
	public BasePopup _characterChangePopup;

	[Token(Token = "0x4001D11")]
	[FieldOffset(Offset = "0x128")]
	public BasePopup _scoreboardPopup;

	[Token(Token = "0x4001D12")]
	[FieldOffset(Offset = "0x130")]
	public BasePopup _mapPopup;

	[Token(Token = "0x4001D13")]
	[FieldOffset(Offset = "0x138")]
	public BasePopup _selectMapPopup;

	[Token(Token = "0x4001D14")]
	[FieldOffset(Offset = "0x140")]
	public BasePopup _songPopup;

	[Token(Token = "0x4001D15")]
	[FieldOffset(Offset = "0x148")]
	public SkillTooltipPopup SkillTooltipPopup;

	[Token(Token = "0x4001D16")]
	[FieldOffset(Offset = "0x150")]
	public CustomAssetUrlPopup _customAssetUrlPopup;

	[Token(Token = "0x4001D17")]
	[FieldOffset(Offset = "0x158")]
	public SnapshotPopup _snapshotPopup;

	[Token(Token = "0x4001D18")]
	[FieldOffset(Offset = "0x160")]
	public GlobalPauseGamePopup _globalPauseGamePopup;

	[Token(Token = "0x4001D19")]
	[FieldOffset(Offset = "0x168")]
	public CutsceneDialoguePanel _cutsceneDialoguePanel;

	[Token(Token = "0x4001D1A")]
	[FieldOffset(Offset = "0x170")]
	public bool SkipAHSSInput;

	[Token(Token = "0x4001D1B")]
	[FieldOffset(Offset = "0x178")]
	private InGameBackgroundMenu _backgroundMenu;

	[Token(Token = "0x4001D1C")]
	[FieldOffset(Offset = "0x180")]
	private KillFeedBigPopup _killFeedBigPopup;

	[Token(Token = "0x4001D1D")]
	[FieldOffset(Offset = "0x188")]
	private List<KillFeedSmallPopup> _killFeedSmallPopups;

	[Token(Token = "0x4001D1E")]
	[FieldOffset(Offset = "0x190")]
	private KillScorePopup _killScorePopup;

	[Token(Token = "0x4001D1F")]
	[FieldOffset(Offset = "0x198")]
	private Text _topCenterLabel;

	[Token(Token = "0x4001D20")]
	[FieldOffset(Offset = "0x1A0")]
	private Text _topLeftLabel;

	[Token(Token = "0x4001D21")]
	[FieldOffset(Offset = "0x1A8")]
	private Text _topRightLabel;

	[Token(Token = "0x4001D22")]
	[FieldOffset(Offset = "0x1B0")]
	private Text _middleCenterLabel;

	[Token(Token = "0x4001D23")]
	[FieldOffset(Offset = "0x1B8")]
	private Text _middleLeftLabel;

	[Token(Token = "0x4001D24")]
	[FieldOffset(Offset = "0x1C0")]
	private Text _middleRightLabel;

	[Token(Token = "0x4001D25")]
	[FieldOffset(Offset = "0x1C8")]
	private Text _bottomLeftLabel;

	[Token(Token = "0x4001D26")]
	[FieldOffset(Offset = "0x1D0")]
	private Text _bottomRightLabel;

	[Token(Token = "0x4001D27")]
	[FieldOffset(Offset = "0x1D8")]
	private Text _bottomCenterLabel;

	[Token(Token = "0x4001D28")]
	[FieldOffset(Offset = "0x1E0")]
	private bool _showingBlood;

	[Token(Token = "0x4001D29")]
	[FieldOffset(Offset = "0x1E8")]
	public GameObject _minimapPanel;

	[Token(Token = "0x4001D2A")]
	[FieldOffset(Offset = "0x1F0")]
	private List<BasePopup> _allPausePopups;

	[Token(Token = "0x4001D2B")]
	[FieldOffset(Offset = "0x1F8")]
	private Dictionary<string, float> _labelTimeLeft;

	[Token(Token = "0x4001D2C")]
	[FieldOffset(Offset = "0x200")]
	private Dictionary<string, bool> _labelHasTimeLeft;

	[Token(Token = "0x4001D2D")]
	[FieldOffset(Offset = "0x208")]
	private List<string> labelsToDeactivate;

	[Token(Token = "0x4001D2E")]
	[FieldOffset(Offset = "0x210")]
	private float _killScoreTimeLeft;

	[Token(Token = "0x4001D2F")]
	[FieldOffset(Offset = "0x214")]
	private float _snapshotTimeLeft;

	[Token(Token = "0x4001D30")]
	[FieldOffset(Offset = "0x218")]
	private string _middleCenterText;

	[Token(Token = "0x4001D31")]
	[FieldOffset(Offset = "0x220")]
	private string _bottomRightText;

	[Token(Token = "0x4001D32")]
	[FieldOffset(Offset = "0x228")]
	private string _bottomCenterText;

	[Token(Token = "0x4001D33")]
	[FieldOffset(Offset = "0x230")]
	private string _topLeftText;

	[Token(Token = "0x4001D34")]
	[FieldOffset(Offset = "0x238")]
	public float _spectateUpdateTimeLeft;

	[Token(Token = "0x4001D35")]
	[FieldOffset(Offset = "0x23C")]
	public int _spectateCount;

	[Token(Token = "0x4001D36")]
	[FieldOffset(Offset = "0x240")]
	private InGameManager _gameManager;

	[Token(Token = "0x4001D37")]
	[FieldOffset(Offset = "0x248")]
	private Dictionary<string, BasePopup> _customPopups;

	[Token(Token = "0x4001D38")]
	[FieldOffset(Offset = "0x250")]
	private string[] trackedProperties;

	[Token(Token = "0x4001D39")]
	[FieldOffset(Offset = "0x258")]
	private UIDocument _uiDocument;

	[Token(Token = "0x17000B6C")]
	public VisualElement RootVisualElement
	{
		[Token(Token = "0x6003C55")]
		[Address(RVA = "0x3FB3D00", Offset = "0x3FB3D00", VA = "0x3FB3D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C56")]
	[Address(RVA = "0x3FB3D20", Offset = "0x3FB3D20", VA = "0x3FB3D20", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003C57")]
	[Address(RVA = "0x3FB4FB0", Offset = "0x3FB4FB0", VA = "0x3FB4FB0")]
	public void ApplyUISettings()
	{
	}

	[Token(Token = "0x6003C58")]
	[Address(RVA = "0x3FB40D0", Offset = "0x3FB40D0", VA = "0x3FB40D0")]
	public void SetupTopLeftHud()
	{
	}

	[Token(Token = "0x6003C59")]
	[Address(RVA = "0x3FB5000", Offset = "0x3FB5000", VA = "0x3FB5000")]
	public void ToggleUI(bool toggle)
	{
	}

	[Token(Token = "0x6003C5A")]
	[Address(RVA = "0x3FB5060", Offset = "0x3FB5060", VA = "0x3FB5060")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C5B")]
	[Address(RVA = "0x3FB50B0", Offset = "0x3FB50B0", VA = "0x3FB50B0")]
	public void CreateCustomPopup(string name, string title, float width, float height)
	{
	}

	[Token(Token = "0x6003C5C")]
	[Address(RVA = "0x3FB51F0", Offset = "0x3FB51F0", VA = "0x3FB51F0")]
	public CustomPopup GetCustomPopup(string name)
	{
		return null;
	}

	[Token(Token = "0x6003C5D")]
	[Address(RVA = "0x3FB5290", Offset = "0x3FB5290", VA = "0x3FB5290")]
	public bool IsCustomPopupActive(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C5E")]
	[Address(RVA = "0x3FB5330", Offset = "0x3FB5330", VA = "0x3FB5330")]
	public List<string> GetAllCustomPopups()
	{
		return null;
	}

	[Token(Token = "0x6003C5F")]
	[Address(RVA = "0x3FB4CE0", Offset = "0x3FB4CE0", VA = "0x3FB4CE0")]
	public void SetupMinimap()
	{
	}

	[Token(Token = "0x6003C60")]
	[Address(RVA = "0x3FB4DD0", Offset = "0x3FB4DD0", VA = "0x3FB4DD0")]
	public void SetupSnapshot()
	{
	}

	[Token(Token = "0x6003C61")]
	[Address(RVA = "0x3FB49F0", Offset = "0x3FB49F0", VA = "0x3FB49F0")]
	private void SetupChat()
	{
	}

	[Token(Token = "0x6003C62")]
	[Address(RVA = "0x3FB41C0", Offset = "0x3FB41C0", VA = "0x3FB41C0")]
	private void SetupLabels()
	{
	}

	[Token(Token = "0x6003C63")]
	[Address(RVA = "0x3FB3FE0", Offset = "0x3FB3FE0", VA = "0x3FB3FE0")]
	private void SetupLoading()
	{
	}

	[Token(Token = "0x6003C64")]
	[Address(RVA = "0x3FB5390", Offset = "0x3FB5390", VA = "0x3FB5390")]
	public void OnFinishLoading()
	{
	}

	[Token(Token = "0x6003C65")]
	[Address(RVA = "0x3FB5790", Offset = "0x3FB5790", VA = "0x3FB5790")]
	public bool AllowMap()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C66")]
	[Address(RVA = "0x3FAB880", Offset = "0x3FAB880", VA = "0x3FAB880")]
	public static bool InMenu()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C67")]
	[Address(RVA = "0x3FB5810", Offset = "0x3FB5810", VA = "0x3FB5810")]
	public void SetPauseMenu(bool enabled)
	{
	}

	[Token(Token = "0x6003C68")]
	[Address(RVA = "0x3FB5A60", Offset = "0x3FB5A60", VA = "0x3FB5A60")]
	public void ToggleScoreboardMenu()
	{
	}

	[Token(Token = "0x6003C69")]
	[Address(RVA = "0x3FB5B40", Offset = "0x3FB5B40", VA = "0x3FB5B40")]
	public void SetScoreboardMenu(bool enabled, bool fromClick)
	{
	}

	[Token(Token = "0x6003C6A")]
	[Address(RVA = "0x3FB5BC0", Offset = "0x3FB5BC0", VA = "0x3FB5BC0")]
	public void ToggleMapMenu()
	{
	}

	[Token(Token = "0x6003C6B")]
	[Address(RVA = "0x3FB5CA0", Offset = "0x3FB5CA0", VA = "0x3FB5CA0")]
	public void SetMapMenu(bool enabled, bool fromClick)
	{
	}

	[Token(Token = "0x6003C6C")]
	[Address(RVA = "0x3FB5D20", Offset = "0x3FB5D20", VA = "0x3FB5D20")]
	public void SetCharacterMenu(bool enabled)
	{
	}

	[Token(Token = "0x6003C6D")]
	[Address(RVA = "0x3FB5E70", Offset = "0x3FB5E70", VA = "0x3FB5E70")]
	public void ShowCharacterChangeMenu()
	{
	}

	[Token(Token = "0x6003C6E")]
	[Address(RVA = "0x3FB5FC0", Offset = "0x3FB5FC0", VA = "0x3FB5FC0")]
	public void ShowCutsceneMenu(string icon, string title, string content, bool full)
	{
	}

	[Token(Token = "0x6003C6F")]
	[Address(RVA = "0x3FB5FE0", Offset = "0x3FB5FE0", VA = "0x3FB5FE0")]
	public void HideCutsceneMenu()
	{
	}

	[Token(Token = "0x6003C70")]
	[Address(RVA = "0x3FB58B0", Offset = "0x3FB58B0", VA = "0x3FB58B0")]
	public bool IsPauseMenuActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C71")]
	[Address(RVA = "0x3FB6010", Offset = "0x3FB6010", VA = "0x3FB6010")]
	public void ShowBlood()
	{
	}

	[Token(Token = "0x6003C72")]
	[Address(RVA = "0x3FB6110", Offset = "0x3FB6110", VA = "0x3FB6110")]
	public void ShowSnapshot(Texture2D texture)
	{
	}

	[Token(Token = "0x6003C73")]
	[Address(RVA = "0x3FB6160", Offset = "0x3FB6160", VA = "0x3FB6160")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x6003C74")]
	[Address(RVA = "0x3FB6260", Offset = "0x3FB6260", VA = "0x3FB6260")]
	private void ShowKillFeedPushSmall(string killer, string victim, int score, string weapon, float timeLeft, int index)
	{
	}

	[Token(Token = "0x6003C75")]
	[Address(RVA = "0x3FB6360", Offset = "0x3FB6360", VA = "0x3FB6360")]
	public void ShowKillScore(int score, bool force = false)
	{
	}

	[Token(Token = "0x6003C76")]
	[Address(RVA = "0x3FB6410", Offset = "0x3FB6410", VA = "0x3FB6410")]
	public int GetStylebarRank()
	{
		return default(int);
	}

	[Token(Token = "0x6003C77")]
	[Address(RVA = "0x3FB6490", Offset = "0x3FB6490", VA = "0x3FB6490")]
	public void SetLabelActive(string label, bool active)
	{
	}

	[Token(Token = "0x6003C78")]
	[Address(RVA = "0x3FB66C0", Offset = "0x3FB66C0", VA = "0x3FB66C0")]
	public void SetKDRPanelActive(bool active)
	{
	}

	[Token(Token = "0x6003C79")]
	[Address(RVA = "0x3FB66E0", Offset = "0x3FB66E0", VA = "0x3FB66E0")]
	public void SetMinimapActive(bool active)
	{
	}

	[Token(Token = "0x6003C7A")]
	[Address(RVA = "0x3FB6720", Offset = "0x3FB6720", VA = "0x3FB6720")]
	public void SetChatPanelActive(bool active)
	{
	}

	[Token(Token = "0x6003C7B")]
	[Address(RVA = "0x3FB6750", Offset = "0x3FB6750", VA = "0x3FB6750")]
	public void SetFeedPanelActive(bool active)
	{
	}

	[Token(Token = "0x6003C7C")]
	[Address(RVA = "0x3FB67F0", Offset = "0x3FB67F0", VA = "0x3FB67F0")]
	public void SetBottomHUDActive(bool active)
	{
	}

	[Token(Token = "0x6003C7D")]
	[Address(RVA = "0x3FB6880", Offset = "0x3FB6880", VA = "0x3FB6880")]
	public void SetLabel(string label, string message, float time)
	{
	}

	[Token(Token = "0x6003C7E")]
	[Address(RVA = "0x3FB6930", Offset = "0x3FB6930", VA = "0x3FB6930")]
	private void SetLabelText(string label, string message)
	{
	}

	[Token(Token = "0x6003C7F")]
	[Address(RVA = "0x3FB60A0", Offset = "0x3FB60A0", VA = "0x3FB60A0")]
	[IteratorStateMachine(typeof(_003CWaitAndShowBlood_003Ed__102))]
	private IEnumerator WaitAndShowBlood()
	{
		return null;
	}

	[Token(Token = "0x6003C80")]
	[Address(RVA = "0x3FB6B80", Offset = "0x3FB6B80", VA = "0x3FB6B80")]
	private void Update()
	{
	}

	[Token(Token = "0x6003C81")]
	[Address(RVA = "0x3FB7D80", Offset = "0x3FB7D80", VA = "0x3FB7D80")]
	private string GetKeybindStrings()
	{
		return null;
	}

	[Token(Token = "0x6003C82")]
	[Address(RVA = "0x3FB8520", Offset = "0x3FB8520", VA = "0x3FB8520")]
	private string GetPlayerListEntry(Player player)
	{
		return null;
	}

	[Token(Token = "0x6003C83")]
	[Address(RVA = "0x3FB8FA0", Offset = "0x3FB8FA0", VA = "0x3FB8FA0")]
	private string GetAggregateStats(IGrouping<string, Player> group)
	{
		return null;
	}

	[Token(Token = "0x6003C84")]
	[Address(RVA = "0x3FB9710", Offset = "0x3FB9710", VA = "0x3FB9710")]
	private string GetPlayerList()
	{
		return null;
	}

	[Token(Token = "0x6003C85")]
	[Address(RVA = "0x3FB97F0", Offset = "0x3FB97F0", VA = "0x3FB97F0")]
	private string GetPlayerListTeams()
	{
		return null;
	}

	[Token(Token = "0x6003C86")]
	[Address(RVA = "0x3FB4EB0", Offset = "0x3FB4EB0", VA = "0x3FB4EB0")]
	private void HideAllMenus()
	{
	}

	[Token(Token = "0x6003C87")]
	[Address(RVA = "0x3FBA680", Offset = "0x3FBA680", VA = "0x3FBA680", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003C88")]
	[Address(RVA = "0x3FBADE0", Offset = "0x3FBADE0", VA = "0x3FBADE0")]
	public InGameMenu()
	{
	}
}

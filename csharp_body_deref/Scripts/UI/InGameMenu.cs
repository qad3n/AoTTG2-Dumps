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
using GameManagers;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UIElements;

namespace UI;

[Token(Token = "0x200063B")]
internal class InGameMenu : BaseMenu
{
	[Token(Token = "0x200063D")]
	[CompilerGenerated]
	private sealed class _003CWaitAndShowBlood_003Ed__104 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001E7C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001E7D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001E7E")]
		[FieldOffset(Offset = "0x20")]
		public InGameMenu _003C_003E4__this;

		[Token(Token = "0x17000BE5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003EDC")]
			[Address(RVA = "0x42CD510", Offset = "0x42CD510", VA = "0x42CD510", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BE6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003EDE")]
			[Address(RVA = "0x42CD560", Offset = "0x42CD560", VA = "0x42CD560", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003ED9")]
		[Address(RVA = "0x42CD400", Offset = "0x42CD400", VA = "0x42CD400")]
		[DebuggerHidden]
		public _003CWaitAndShowBlood_003Ed__104(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003EDA")]
		[Address(RVA = "0x42CD420", Offset = "0x42CD420", VA = "0x42CD420", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003EDB")]
		[Address(RVA = "0x42CD430", Offset = "0x42CD430", VA = "0x42CD430", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003EDD")]
		[Address(RVA = "0x42CD520", Offset = "0x42CD520", VA = "0x42CD520", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001E3C")]
	[FieldOffset(Offset = "0x98")]
	public EmoteHandler EmoteHandler;

	[Token(Token = "0x4001E3D")]
	[FieldOffset(Offset = "0xA0")]
	public ItemHandler ItemHandler;

	[Token(Token = "0x4001E3E")]
	[FieldOffset(Offset = "0xA8")]
	public CharacterInfoHandler CharacterInfoHandler;

	[Token(Token = "0x4001E3F")]
	[FieldOffset(Offset = "0xB0")]
	public HUDBottomHandler HUDBottomHandler;

	[Token(Token = "0x4001E40")]
	[FieldOffset(Offset = "0xB8")]
	public StylebarHandler StylebarHandler;

	[Token(Token = "0x4001E41")]
	[FieldOffset(Offset = "0xC0")]
	public GameObject NapeLock;

	[Token(Token = "0x4001E42")]
	[FieldOffset(Offset = "0xC8")]
	public ChatPanel ChatPanel;

	[Token(Token = "0x4001E43")]
	[FieldOffset(Offset = "0xD0")]
	public FeedPanel FeedPanel;

	[Token(Token = "0x4001E44")]
	[FieldOffset(Offset = "0xD8")]
	public VoiceChatPanel VoiceChatPanel;

	[Token(Token = "0x4001E45")]
	[FieldOffset(Offset = "0xE0")]
	public GameObject TopLeftHud;

	[Token(Token = "0x4001E46")]
	[FieldOffset(Offset = "0xE8")]
	public GameObject KDRReference;

	[Token(Token = "0x4001E47")]
	[FieldOffset(Offset = "0xF0")]
	public KDRPanel KDRPanel;

	[Token(Token = "0x4001E48")]
	[FieldOffset(Offset = "0xF8")]
	public Telemetry TelemetryPanel;

	[Token(Token = "0x4001E49")]
	[FieldOffset(Offset = "0x100")]
	public BasePopup _settingsPopup;

	[Token(Token = "0x4001E4A")]
	[FieldOffset(Offset = "0x108")]
	public BasePopup _createGamePopup;

	[Token(Token = "0x4001E4B")]
	[FieldOffset(Offset = "0x110")]
	public BasePopup _pausePopup;

	[Token(Token = "0x4001E4C")]
	[FieldOffset(Offset = "0x118")]
	public BasePopup _characterPopup;

	[Token(Token = "0x4001E4D")]
	[FieldOffset(Offset = "0x120")]
	public BasePopup _characterChangePopup;

	[Token(Token = "0x4001E4E")]
	[FieldOffset(Offset = "0x128")]
	public BasePopup _scoreboardPopup;

	[Token(Token = "0x4001E4F")]
	[FieldOffset(Offset = "0x130")]
	public BasePopup _mapPopup;

	[Token(Token = "0x4001E50")]
	[FieldOffset(Offset = "0x138")]
	public BasePopup _selectMapPopup;

	[Token(Token = "0x4001E51")]
	[FieldOffset(Offset = "0x140")]
	public BasePopup _songPopup;

	[Token(Token = "0x4001E52")]
	[FieldOffset(Offset = "0x148")]
	public SkillTooltipPopup SkillTooltipPopup;

	[Token(Token = "0x4001E53")]
	[FieldOffset(Offset = "0x150")]
	public CustomAssetUrlPopup _customAssetUrlPopup;

	[Token(Token = "0x4001E54")]
	[FieldOffset(Offset = "0x158")]
	public CustomAssetVideoUrlPopup _customAssetVideoUrlPopup;

	[Token(Token = "0x4001E55")]
	[FieldOffset(Offset = "0x160")]
	public SnapshotPopup _snapshotPopup;

	[Token(Token = "0x4001E56")]
	[FieldOffset(Offset = "0x168")]
	public GlobalPauseGamePopup _globalPauseGamePopup;

	[Token(Token = "0x4001E57")]
	[FieldOffset(Offset = "0x170")]
	public CutsceneDialoguePanel _cutsceneDialoguePanel;

	[Token(Token = "0x4001E58")]
	[FieldOffset(Offset = "0x178")]
	public bool SkipAHSSInput;

	[Token(Token = "0x4001E59")]
	[FieldOffset(Offset = "0x180")]
	private InGameBackgroundMenu _backgroundMenu;

	[Token(Token = "0x4001E5A")]
	[FieldOffset(Offset = "0x188")]
	private KillFeedBigPopup _killFeedBigPopup;

	[Token(Token = "0x4001E5B")]
	[FieldOffset(Offset = "0x190")]
	private List<KillFeedSmallPopup> _killFeedSmallPopups;

	[Token(Token = "0x4001E5C")]
	[FieldOffset(Offset = "0x198")]
	private KillScorePopup _killScorePopup;

	[Token(Token = "0x4001E5D")]
	[FieldOffset(Offset = "0x1A0")]
	private Text _topCenterLabel;

	[Token(Token = "0x4001E5E")]
	[FieldOffset(Offset = "0x1A8")]
	private Text _topLeftLabel;

	[Token(Token = "0x4001E5F")]
	[FieldOffset(Offset = "0x1B0")]
	private Text _topRightLabel;

	[Token(Token = "0x4001E60")]
	[FieldOffset(Offset = "0x1B8")]
	private Text _middleCenterLabel;

	[Token(Token = "0x4001E61")]
	[FieldOffset(Offset = "0x1C0")]
	private Text _middleLeftLabel;

	[Token(Token = "0x4001E62")]
	[FieldOffset(Offset = "0x1C8")]
	private Text _middleRightLabel;

	[Token(Token = "0x4001E63")]
	[FieldOffset(Offset = "0x1D0")]
	private Text _bottomLeftLabel;

	[Token(Token = "0x4001E64")]
	[FieldOffset(Offset = "0x1D8")]
	private Text _bottomRightLabel;

	[Token(Token = "0x4001E65")]
	[FieldOffset(Offset = "0x1E0")]
	private Text _bottomCenterLabel;

	[Token(Token = "0x4001E66")]
	[FieldOffset(Offset = "0x1E8")]
	private bool _showingBlood;

	[Token(Token = "0x4001E67")]
	[FieldOffset(Offset = "0x1F0")]
	public GameObject _minimapPanel;

	[Token(Token = "0x4001E68")]
	[FieldOffset(Offset = "0x1F8")]
	private List<BasePopup> _allPausePopups;

	[Token(Token = "0x4001E69")]
	[FieldOffset(Offset = "0x200")]
	private Dictionary<string, float> _labelTimeLeft;

	[Token(Token = "0x4001E6A")]
	[FieldOffset(Offset = "0x208")]
	private Dictionary<string, bool> _labelHasTimeLeft;

	[Token(Token = "0x4001E6B")]
	[FieldOffset(Offset = "0x210")]
	private List<string> labelsToDeactivate;

	[Token(Token = "0x4001E6C")]
	[FieldOffset(Offset = "0x218")]
	private float _killScoreTimeLeft;

	[Token(Token = "0x4001E6D")]
	[FieldOffset(Offset = "0x21C")]
	private float _snapshotTimeLeft;

	[Token(Token = "0x4001E6E")]
	[FieldOffset(Offset = "0x220")]
	private string _middleCenterText;

	[Token(Token = "0x4001E6F")]
	[FieldOffset(Offset = "0x228")]
	private string _bottomRightText;

	[Token(Token = "0x4001E70")]
	[FieldOffset(Offset = "0x230")]
	private string _bottomCenterText;

	[Token(Token = "0x4001E71")]
	[FieldOffset(Offset = "0x238")]
	private string _topLeftText;

	[Token(Token = "0x4001E72")]
	[FieldOffset(Offset = "0x240")]
	public float _spectateUpdateTimeLeft;

	[Token(Token = "0x4001E73")]
	[FieldOffset(Offset = "0x244")]
	public int _spectateCount;

	[Token(Token = "0x4001E74")]
	[FieldOffset(Offset = "0x248")]
	private InGameManager _gameManager;

	[Token(Token = "0x4001E75")]
	[FieldOffset(Offset = "0x250")]
	private Dictionary<string, BasePopup> _customPopups;

	[Token(Token = "0x4001E76")]
	[FieldOffset(Offset = "0x258")]
	private string[] trackedProperties;

	[Token(Token = "0x4001E77")]
	[FieldOffset(Offset = "0x260")]
	private UIDocument _uiDocument;

	[Token(Token = "0x17000BE4")]
	public VisualElement RootVisualElement
	{
		[Token(Token = "0x6003E9F")]
		[Address(RVA = "0x42C5DE0", Offset = "0x42C5DE0", VA = "0x42C5DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003EA0")]
	[Address(RVA = "0x42C5E00", Offset = "0x42C5E00", VA = "0x42C5E00", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003EA1")]
	[Address(RVA = "0x42C7040", Offset = "0x42C7040", VA = "0x42C7040")]
	public void ApplyUISettings()
	{
	}

	[Token(Token = "0x6003EA2")]
	[Address(RVA = "0x42C61B0", Offset = "0x42C61B0", VA = "0x42C61B0")]
	public void SetupTopLeftHud()
	{
	}

	[Token(Token = "0x6003EA3")]
	[Address(RVA = "0x42C7090", Offset = "0x42C7090", VA = "0x42C7090")]
	public void ToggleUI(bool toggle)
	{
	}

	[Token(Token = "0x6003EA4")]
	[Address(RVA = "0x42C70F0", Offset = "0x42C70F0", VA = "0x42C70F0")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EA5")]
	[Address(RVA = "0x42C7140", Offset = "0x42C7140", VA = "0x42C7140")]
	public void CreateCustomPopup(string name, string title, float width, float height)
	{
	}

	[Token(Token = "0x6003EA6")]
	[Address(RVA = "0x42C7280", Offset = "0x42C7280", VA = "0x42C7280")]
	public CustomPopup GetCustomPopup(string name)
	{
		return null;
	}

	[Token(Token = "0x6003EA7")]
	[Address(RVA = "0x42C7320", Offset = "0x42C7320", VA = "0x42C7320")]
	public bool IsCustomPopupActive(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6003EA8")]
	[Address(RVA = "0x42C73C0", Offset = "0x42C73C0", VA = "0x42C73C0")]
	public List<string> GetAllCustomPopups()
	{
		return null;
	}

	[Token(Token = "0x6003EA9")]
	[Address(RVA = "0x42C6DC0", Offset = "0x42C6DC0", VA = "0x42C6DC0")]
	public void SetupMinimap()
	{
	}

	[Token(Token = "0x6003EAA")]
	[Address(RVA = "0x42C6EB0", Offset = "0x42C6EB0", VA = "0x42C6EB0")]
	public void SetupSnapshot()
	{
	}

	[Token(Token = "0x6003EAB")]
	[Address(RVA = "0x42C6AD0", Offset = "0x42C6AD0", VA = "0x42C6AD0")]
	private void SetupChat()
	{
	}

	[Token(Token = "0x6003EAC")]
	[Address(RVA = "0x42C62A0", Offset = "0x42C62A0", VA = "0x42C62A0")]
	private void SetupLabels()
	{
	}

	[Token(Token = "0x6003EAD")]
	[Address(RVA = "0x42C60C0", Offset = "0x42C60C0", VA = "0x42C60C0")]
	private void SetupLoading()
	{
	}

	[Token(Token = "0x6003EAE")]
	[Address(RVA = "0x42C7420", Offset = "0x42C7420", VA = "0x42C7420")]
	public void OnFinishLoading()
	{
	}

	[Token(Token = "0x6003EAF")]
	[Address(RVA = "0x42C7820", Offset = "0x42C7820", VA = "0x42C7820")]
	public bool AllowMap()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EB0")]
	[Address(RVA = "0x42BD970", Offset = "0x42BD970", VA = "0x42BD970")]
	public static bool InMenu()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EB1")]
	[Address(RVA = "0x42C78A0", Offset = "0x42C78A0", VA = "0x42C78A0")]
	public void SetPauseMenu(bool enabled)
	{
	}

	[Token(Token = "0x6003EB2")]
	[Address(RVA = "0x42C7AF0", Offset = "0x42C7AF0", VA = "0x42C7AF0")]
	public void ToggleScoreboardMenu()
	{
	}

	[Token(Token = "0x6003EB3")]
	[Address(RVA = "0x42C7BD0", Offset = "0x42C7BD0", VA = "0x42C7BD0")]
	public void SetScoreboardMenu(bool enabled, bool fromClick)
	{
	}

	[Token(Token = "0x6003EB4")]
	[Address(RVA = "0x42C7C50", Offset = "0x42C7C50", VA = "0x42C7C50")]
	public void ToggleMapMenu()
	{
	}

	[Token(Token = "0x6003EB5")]
	[Address(RVA = "0x42C7D30", Offset = "0x42C7D30", VA = "0x42C7D30")]
	public void SetMapMenu(bool enabled, bool fromClick)
	{
	}

	[Token(Token = "0x6003EB6")]
	[Address(RVA = "0x42C7DB0", Offset = "0x42C7DB0", VA = "0x42C7DB0")]
	public void SetCharacterMenu(bool enabled)
	{
	}

	[Token(Token = "0x6003EB7")]
	[Address(RVA = "0x42C7F00", Offset = "0x42C7F00", VA = "0x42C7F00")]
	public void ShowCharacterChangeMenu()
	{
	}

	[Token(Token = "0x6003EB8")]
	[Address(RVA = "0x42C8050", Offset = "0x42C8050", VA = "0x42C8050")]
	public void ShowCutsceneMenu(string icon, string title, string content, bool full)
	{
	}

	[Token(Token = "0x6003EB9")]
	[Address(RVA = "0x42C8070", Offset = "0x42C8070", VA = "0x42C8070")]
	public void HideCutsceneMenu()
	{
	}

	[Token(Token = "0x6003EBA")]
	[Address(RVA = "0x42C7940", Offset = "0x42C7940", VA = "0x42C7940")]
	public bool IsPauseMenuActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EBB")]
	[Address(RVA = "0x42C80A0", Offset = "0x42C80A0", VA = "0x42C80A0")]
	public void ShowBlood()
	{
	}

	[Token(Token = "0x6003EBC")]
	[Address(RVA = "0x42C81A0", Offset = "0x42C81A0", VA = "0x42C81A0")]
	public void ShowSnapshot(Texture2D texture)
	{
	}

	[Token(Token = "0x6003EBD")]
	[Address(RVA = "0x42C81F0", Offset = "0x42C81F0", VA = "0x42C81F0")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x6003EBE")]
	[Address(RVA = "0x42C8210", Offset = "0x42C8210", VA = "0x42C8210")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon, int killerActorNumber, int victimActorNumber)
	{
	}

	[Token(Token = "0x6003EBF")]
	[Address(RVA = "0x42C8330", Offset = "0x42C8330", VA = "0x42C8330")]
	private void ShowKillFeedPushSmall(string killer, string victim, int score, string weapon, float timeLeft, int killerActorNumber, int victimActorNumber, int index)
	{
	}

	[Token(Token = "0x6003EC0")]
	[Address(RVA = "0x42C8460", Offset = "0x42C8460", VA = "0x42C8460")]
	public void ShowKillScore(int score, bool force = false)
	{
	}

	[Token(Token = "0x6003EC1")]
	[Address(RVA = "0x42C8510", Offset = "0x42C8510", VA = "0x42C8510")]
	public int GetStylebarRank()
	{
		return default(int);
	}

	[Token(Token = "0x6003EC2")]
	[Address(RVA = "0x42C8590", Offset = "0x42C8590", VA = "0x42C8590")]
	public void SetLabelActive(string label, bool active)
	{
	}

	[Token(Token = "0x6003EC3")]
	[Address(RVA = "0x42C87C0", Offset = "0x42C87C0", VA = "0x42C87C0")]
	public void SetKDRPanelActive(bool active)
	{
	}

	[Token(Token = "0x6003EC4")]
	[Address(RVA = "0x42C87E0", Offset = "0x42C87E0", VA = "0x42C87E0")]
	public void SetMinimapActive(bool active)
	{
	}

	[Token(Token = "0x6003EC5")]
	[Address(RVA = "0x42C8820", Offset = "0x42C8820", VA = "0x42C8820")]
	public void SetChatPanelActive(bool active)
	{
	}

	[Token(Token = "0x6003EC6")]
	[Address(RVA = "0x42C8850", Offset = "0x42C8850", VA = "0x42C8850")]
	public void SetFeedPanelActive(bool active)
	{
	}

	[Token(Token = "0x6003EC7")]
	[Address(RVA = "0x42C88F0", Offset = "0x42C88F0", VA = "0x42C88F0")]
	public void SetBottomHUDActive(bool active)
	{
	}

	[Token(Token = "0x6003EC8")]
	[Address(RVA = "0x42C8980", Offset = "0x42C8980", VA = "0x42C8980")]
	public void SetLabel(string label, string message, float time)
	{
	}

	[Token(Token = "0x6003EC9")]
	[Address(RVA = "0x42C8A30", Offset = "0x42C8A30", VA = "0x42C8A30")]
	private void SetLabelText(string label, string message)
	{
	}

	[Token(Token = "0x6003ECA")]
	[Address(RVA = "0x42C8130", Offset = "0x42C8130", VA = "0x42C8130")]
	[IteratorStateMachine(typeof(_003CWaitAndShowBlood_003Ed__104))]
	private IEnumerator WaitAndShowBlood()
	{
		return null;
	}

	[Token(Token = "0x6003ECB")]
	[Address(RVA = "0x42C8C60", Offset = "0x42C8C60", VA = "0x42C8C60")]
	private void Update()
	{
	}

	[Token(Token = "0x6003ECC")]
	[Address(RVA = "0x42C9E60", Offset = "0x42C9E60", VA = "0x42C9E60")]
	private string GetKeybindStrings()
	{
		return null;
	}

	[Token(Token = "0x6003ECD")]
	[Address(RVA = "0x42CA600", Offset = "0x42CA600", VA = "0x42CA600")]
	private string GetPlayerListEntry(Player player)
	{
		return null;
	}

	[Token(Token = "0x6003ECE")]
	[Address(RVA = "0x42CB080", Offset = "0x42CB080", VA = "0x42CB080")]
	private string GetAggregateStats(IGrouping<string, Player> group)
	{
		return null;
	}

	[Token(Token = "0x6003ECF")]
	[Address(RVA = "0x42CB7F0", Offset = "0x42CB7F0", VA = "0x42CB7F0")]
	private string GetPlayerList()
	{
		return null;
	}

	[Token(Token = "0x6003ED0")]
	[Address(RVA = "0x42CB8D0", Offset = "0x42CB8D0", VA = "0x42CB8D0")]
	private string GetPlayerListTeams()
	{
		return null;
	}

	[Token(Token = "0x6003ED1")]
	[Address(RVA = "0x42C6F90", Offset = "0x42C6F90", VA = "0x42C6F90")]
	private void HideAllMenus()
	{
	}

	[Token(Token = "0x6003ED2")]
	[Address(RVA = "0x42CC5F0", Offset = "0x42CC5F0", VA = "0x42CC5F0", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003ED3")]
	[Address(RVA = "0x42CCE90", Offset = "0x42CCE90", VA = "0x42CCE90")]
	public InGameMenu()
	{
	}
}

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

[Token(Token = "0x2000842")]
internal class InGameMenu : BaseMenu
{
	[Token(Token = "0x2000843")]
	private sealed class HudText
	{
		[Token(Token = "0x40029AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly string RestartingIn;

		[Token(Token = "0x40029B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly string SpectatePrevious;

		[Token(Token = "0x40029B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly string SpectateNext;

		[Token(Token = "0x40029B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly string SpectateJoin;

		[Token(Token = "0x40029B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly string SpectatingPlayer;

		[Token(Token = "0x40029B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public readonly string Spectating;

		[Token(Token = "0x40029B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public readonly string Sandbox;

		[Token(Token = "0x40029B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		public readonly string Interpolation;

		[Token(Token = "0x40029B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		public readonly string On;

		[Token(Token = "0x40029B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		public readonly string Off;

		[Token(Token = "0x40029B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		public readonly string Position;

		[Token(Token = "0x40029BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		public readonly string SpectatorCount;

		[Token(Token = "0x6004F05")]
		[Address(RVA = "0x5C30FF0", Offset = "0x5C2FFF0", VA = "0x5C30FF0")]
		private static string Locale(string item)
		{
			return null;
		}

		[Token(Token = "0x6004F06")]
		[Address(RVA = "0x5C29050", Offset = "0x5C28050", VA = "0x5C29050")]
		public HudText()
		{
		}
	}

	[Token(Token = "0x2000846")]
	[CompilerGenerated]
	private sealed class _003CWaitAndShowBlood_003Ed__118 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40029C0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40029C1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40029C2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public InGameMenu _003C_003E4__this;

		[Token(Token = "0x17000DB8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004F11")]
			[Address(RVA = "0x5C31440", Offset = "0x5C30440", VA = "0x5C31440", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DB9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004F13")]
			[Address(RVA = "0x5C31490", Offset = "0x5C30490", VA = "0x5C31490", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004F0E")]
		[Address(RVA = "0x5C2D2E0", Offset = "0x5C2C2E0", VA = "0x5C2D2E0")]
		[DebuggerHidden]
		public _003CWaitAndShowBlood_003Ed__118(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004F0F")]
		[Address(RVA = "0x5C31320", Offset = "0x5C30320", VA = "0x5C31320", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004F10")]
		[Address(RVA = "0x5C31330", Offset = "0x5C30330", VA = "0x5C31330", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004F12")]
		[Address(RVA = "0x5C31450", Offset = "0x5C30450", VA = "0x5C31450", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002970")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public EmoteHandler EmoteHandler;

	[Token(Token = "0x4002971")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public ItemHandler ItemHandler;

	[Token(Token = "0x4002972")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public ActionHandler ActionHandler;

	[Token(Token = "0x4002973")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public CharacterInfoHandler CharacterInfoHandler;

	[Token(Token = "0x4002974")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	public HUDBottomHandler HUDBottomHandler;

	[Token(Token = "0x4002975")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	public StylebarHandler StylebarHandler;

	[Token(Token = "0x4002976")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	public GameObject NapeLock;

	[Token(Token = "0x4002977")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	public ChatPanel ChatPanel;

	[Token(Token = "0x4002978")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	public FeedPanel FeedPanel;

	[Token(Token = "0x4002979")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public VoiceChatPanel VoiceChatPanel;

	[Token(Token = "0x400297A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public GameObject TopLeftHud;

	[Token(Token = "0x400297B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	public GameObject KDRReference;

	[Token(Token = "0x400297C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	public KDRPanel KDRPanel;

	[Token(Token = "0x400297D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	public Telemetry TelemetryPanel;

	[Token(Token = "0x400297E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	public BasePopup _characterPopup;

	[Token(Token = "0x400297F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public BasePopup _characterChangePopup;

	[Token(Token = "0x4002980")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	public BasePopup _scoreboardPopup;

	[Token(Token = "0x4002981")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	public BasePopup _mapPopup;

	[Token(Token = "0x4002982")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	public BasePopup _songPopup;

	[Token(Token = "0x4002983")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	public CustomAssetUrlPopup _customAssetUrlPopup;

	[Token(Token = "0x4002984")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	public CustomAssetVideoUrlPopup _customAssetVideoUrlPopup;

	[Token(Token = "0x4002985")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	public SnapshotPopup _snapshotPopup;

	[Token(Token = "0x4002986")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	public GlobalPauseGamePopup _globalPauseGamePopup;

	[Token(Token = "0x4002987")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	public CutsceneDialoguePanel _cutsceneDialoguePanel;

	[Token(Token = "0x4002988")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	public bool SkipAHSSInput;

	[Token(Token = "0x4002989")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private InGameBackgroundMenu _backgroundMenu;

	[Token(Token = "0x400298A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private KillFeedBigPopup _killFeedBigPopup;

	[Token(Token = "0x400298B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private List<KillFeedSmallPopup> _killFeedSmallPopups;

	[Token(Token = "0x400298C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private KillScorePopup _killScorePopup;

	[Token(Token = "0x400298D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	private InGameLabel _topCenterLabel;

	[Token(Token = "0x400298E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	private InGameLabel _topLeftLabel;

	[Token(Token = "0x400298F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	private InGameLabel _topRightLabel;

	[Token(Token = "0x4002990")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	private InGameLabel _middleCenterLabel;

	[Token(Token = "0x4002991")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	private InGameLabel _middleLeftLabel;

	[Token(Token = "0x4002992")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	private InGameLabel _middleRightLabel;

	[Token(Token = "0x4002993")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	private InGameLabel _bottomLeftLabel;

	[Token(Token = "0x4002994")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	private InGameLabel _bottomRightLabel;

	[Token(Token = "0x4002995")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private InGameLabel _bottomCenterLabel;

	[Token(Token = "0x4002996")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private bool _showingBlood;

	[Token(Token = "0x4002997")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	public GameObject _minimapPanel;

	[Token(Token = "0x4002998")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private List<BasePopup> _allPausePopups;

	[Token(Token = "0x4002999")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private Dictionary<string, InGameLabel> _labels;

	[Token(Token = "0x400299A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	private bool _legacyLabels;

	[Token(Token = "0x400299B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	private Dictionary<string, float> _labelTimeLeft;

	[Token(Token = "0x400299C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	private Dictionary<string, bool> _labelHasTimeLeft;

	[Token(Token = "0x400299D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	private List<string> labelsToDeactivate;

	[Token(Token = "0x400299E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	private float _killScoreTimeLeft;

	[Token(Token = "0x400299F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20C")]
	private float _snapshotTimeLeft;

	[Token(Token = "0x40029A0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	private string _middleCenterText;

	[Token(Token = "0x40029A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	private string _bottomRightText;

	[Token(Token = "0x40029A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private string _bottomCenterText;

	[Token(Token = "0x40029A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x228")]
	private string _topLeftText;

	[Token(Token = "0x40029A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x230")]
	public float _spectateUpdateTimeLeft;

	[Token(Token = "0x40029A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x234")]
	public int _spectateCount;

	[Token(Token = "0x40029A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	private InGameManager _gameManager;

	[Token(Token = "0x40029A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x240")]
	private Dictionary<string, BasePopup> _customPopups;

	[Token(Token = "0x40029A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x248")]
	private string[] trackedProperties;

	[Token(Token = "0x40029A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x250")]
	private UIDocument _uiDocument;

	[Token(Token = "0x40029AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x258")]
	private PanelSettings _panelSettings;

	[Token(Token = "0x40029AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x260")]
	private int _lastDismissedMenuFrame;

	[Token(Token = "0x40029AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x264")]
	public bool ScoreboardDismissedUntilRelease;

	[Token(Token = "0x40029AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x265")]
	public bool MapDismissedUntilRelease;

	[Token(Token = "0x40029AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private HudText _hudText;

	[Token(Token = "0x17000DB7")]
	public VisualElement RootVisualElement
	{
		[Token(Token = "0x6004EC5")]
		[Address(RVA = "0x5C28A60", Offset = "0x5C27A60", VA = "0x5C28A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004EC6")]
	[Address(RVA = "0x5C28A80", Offset = "0x5C27A80", VA = "0x5C28A80", Slot = "6")]
	public override void RebuildPopups()
	{
	}

	[Token(Token = "0x6004EC7")]
	[Address(RVA = "0x5C299C0", Offset = "0x5C289C0", VA = "0x5C299C0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004EC8")]
	[Address(RVA = "0x5C2B090", Offset = "0x5C2A090", VA = "0x5C2B090")]
	public void ApplyUISettings()
	{
	}

	[Token(Token = "0x6004EC9")]
	[Address(RVA = "0x5C2AE60", Offset = "0x5C29E60", VA = "0x5C2AE60")]
	private void ApplyCustomLogicPanelSettings()
	{
	}

	[Token(Token = "0x6004ECA")]
	[Address(RVA = "0x5C2B0F0", Offset = "0x5C2A0F0", VA = "0x5C2B0F0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004ECB")]
	[Address(RVA = "0x5C29EA0", Offset = "0x5C28EA0", VA = "0x5C29EA0")]
	public void SetupTopLeftHud()
	{
	}

	[Token(Token = "0x6004ECC")]
	[Address(RVA = "0x5C2B170", Offset = "0x5C2A170", VA = "0x5C2B170")]
	public void ToggleUI(bool toggle)
	{
	}

	[Token(Token = "0x6004ECD")]
	[Address(RVA = "0x5C2B1D0", Offset = "0x5C2A1D0", VA = "0x5C2B1D0")]
	public bool IsActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6004ECE")]
	[Address(RVA = "0x5C2B220", Offset = "0x5C2A220", VA = "0x5C2B220")]
	public void CreateCustomPopup(string name, string title, float width, float height)
	{
	}

	[Token(Token = "0x6004ECF")]
	[Address(RVA = "0x5C2B350", Offset = "0x5C2A350", VA = "0x5C2B350")]
	public CustomPopup GetCustomPopup(string name)
	{
		return null;
	}

	[Token(Token = "0x6004ED0")]
	[Address(RVA = "0x5C2B3F0", Offset = "0x5C2A3F0", VA = "0x5C2B3F0")]
	public bool IsCustomPopupActive(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6004ED1")]
	[Address(RVA = "0x5C2B490", Offset = "0x5C2A490", VA = "0x5C2B490")]
	public List<string> GetAllCustomPopups()
	{
		return null;
	}

	[Token(Token = "0x6004ED2")]
	[Address(RVA = "0x5C2AA40", Offset = "0x5C29A40", VA = "0x5C2AA40")]
	public void SetupMinimap()
	{
	}

	[Token(Token = "0x6004ED3")]
	[Address(RVA = "0x5C2AB40", Offset = "0x5C29B40", VA = "0x5C2AB40")]
	public void SetupSnapshot()
	{
	}

	[Token(Token = "0x6004ED4")]
	[Address(RVA = "0x5C2A730", Offset = "0x5C29730", VA = "0x5C2A730")]
	private void SetupChat()
	{
	}

	[Token(Token = "0x6004ED5")]
	[Address(RVA = "0x5C29FB0", Offset = "0x5C28FB0", VA = "0x5C29FB0")]
	private void SetupLabels()
	{
	}

	[Token(Token = "0x6004ED6")]
	[Address(RVA = "0x5C2B4F0", Offset = "0x5C2A4F0", VA = "0x5C2B4F0")]
	private InGameLabel CreateLabel(string label, Transform parent, ElementStyle style, TextAlignmentOptions alignment, TextAnchor anchor, Vector2 offset)
	{
		return null;
	}

	[Token(Token = "0x6004ED7")]
	[Address(RVA = "0x5C2B5E0", Offset = "0x5C2A5E0", VA = "0x5C2B5E0")]
	public void SetLegacyLabels(bool legacy)
	{
	}

	[Token(Token = "0x6004ED8")]
	[Address(RVA = "0x5C29DB0", Offset = "0x5C28DB0", VA = "0x5C29DB0")]
	private void SetupLoading()
	{
	}

	[Token(Token = "0x6004ED9")]
	[Address(RVA = "0x5C2B830", Offset = "0x5C2A830", VA = "0x5C2B830")]
	public void OnFinishLoading()
	{
	}

	[Token(Token = "0x6004EDA")]
	[Address(RVA = "0x5C297B0", Offset = "0x5C287B0", VA = "0x5C297B0")]
	private void SetupGameplayPopups()
	{
	}

	[Token(Token = "0x6004EDB")]
	[Address(RVA = "0x5C2BA30", Offset = "0x5C2AA30", VA = "0x5C2BA30")]
	public bool AllowMap()
	{
		return default(bool);
	}

	[Token(Token = "0x6004EDC")]
	[Address(RVA = "0x5C1F610", Offset = "0x5C1E610", VA = "0x5C1F610")]
	public static bool InMenu()
	{
		return default(bool);
	}

	[Token(Token = "0x6004EDD")]
	[Address(RVA = "0x5C2BAB0", Offset = "0x5C2AAB0", VA = "0x5C2BAB0")]
	public bool TryDismissGameplayMenu()
	{
		return default(bool);
	}

	[Token(Token = "0x6004EDE")]
	[Address(RVA = "0x5C2BD20", Offset = "0x5C2AD20", VA = "0x5C2BD20")]
	private static BasePopup FindTopmostPopup(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004EDF")]
	[Address(RVA = "0x5C2BE90", Offset = "0x5C2AE90", VA = "0x5C2BE90")]
	public void SetPauseMenu(bool enabled)
	{
	}

	[Token(Token = "0x6004EE0")]
	[Address(RVA = "0x5C2C0C0", Offset = "0x5C2B0C0", VA = "0x5C2C0C0")]
	public void ToggleScoreboardMenu()
	{
	}

	[Token(Token = "0x6004EE1")]
	[Address(RVA = "0x5C2C190", Offset = "0x5C2B190", VA = "0x5C2C190")]
	public void SetScoreboardMenu(bool enabled, bool fromClick)
	{
	}

	[Token(Token = "0x6004EE2")]
	[Address(RVA = "0x5C2C210", Offset = "0x5C2B210", VA = "0x5C2C210")]
	public void ToggleMapMenu()
	{
	}

	[Token(Token = "0x6004EE3")]
	[Address(RVA = "0x5C2C2F0", Offset = "0x5C2B2F0", VA = "0x5C2C2F0")]
	public void SetMapMenu(bool enabled, bool fromClick)
	{
	}

	[Token(Token = "0x6004EE4")]
	[Address(RVA = "0x5C2C380", Offset = "0x5C2B380", VA = "0x5C2C380")]
	public void SetCharacterMenu(bool enabled)
	{
	}

	[Token(Token = "0x6004EE5")]
	[Address(RVA = "0x5C2C4D0", Offset = "0x5C2B4D0", VA = "0x5C2C4D0")]
	public void ShowCharacterChangeMenu()
	{
	}

	[Token(Token = "0x6004EE6")]
	[Address(RVA = "0x5C2C620", Offset = "0x5C2B620", VA = "0x5C2C620")]
	public void ShowCutsceneMenu(string icon, string title, string content, bool full)
	{
	}

	[Token(Token = "0x6004EE7")]
	[Address(RVA = "0x5C2C640", Offset = "0x5C2B640", VA = "0x5C2C640")]
	public void HideCutsceneMenu()
	{
	}

	[Token(Token = "0x6004EE8")]
	[Address(RVA = "0x5C2BF30", Offset = "0x5C2AF30", VA = "0x5C2BF30")]
	public bool IsPauseMenuActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6004EE9")]
	[Address(RVA = "0x5C2C670", Offset = "0x5C2B670", VA = "0x5C2C670")]
	public void ShowBlood()
	{
	}

	[Token(Token = "0x6004EEA")]
	[Address(RVA = "0x5C2C770", Offset = "0x5C2B770", VA = "0x5C2C770")]
	public void ShowSnapshot(Texture2D texture)
	{
	}

	[Token(Token = "0x6004EEB")]
	[Address(RVA = "0x5C2C7C0", Offset = "0x5C2B7C0", VA = "0x5C2C7C0")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon)
	{
	}

	[Token(Token = "0x6004EEC")]
	[Address(RVA = "0x5C2C7E0", Offset = "0x5C2B7E0", VA = "0x5C2C7E0")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon, int killerActorNumber, int victimActorNumber)
	{
	}

	[Token(Token = "0x6004EED")]
	[Address(RVA = "0x5C2C900", Offset = "0x5C2B900", VA = "0x5C2C900")]
	private void ShowKillFeedPushSmall(string killer, string victim, int score, string weapon, float timeLeft, int killerActorNumber, int victimActorNumber, int index)
	{
	}

	[Token(Token = "0x6004EEE")]
	[Address(RVA = "0x5C2CA30", Offset = "0x5C2BA30", VA = "0x5C2CA30")]
	public void ShowKillScore(int score, bool force = false)
	{
	}

	[Token(Token = "0x6004EEF")]
	[Address(RVA = "0x5C2CAE0", Offset = "0x5C2BAE0", VA = "0x5C2CAE0")]
	public int GetStylebarRank()
	{
		return default(int);
	}

	[Token(Token = "0x6004EF0")]
	[Address(RVA = "0x5C2CB60", Offset = "0x5C2BB60", VA = "0x5C2CB60")]
	public void SetLabelActive(string label, bool active)
	{
	}

	[Token(Token = "0x6004EF1")]
	[Address(RVA = "0x5C2CBF0", Offset = "0x5C2BBF0", VA = "0x5C2CBF0")]
	public void SetLabelBackgroundColor(string label, Color color)
	{
	}

	[Token(Token = "0x6004EF2")]
	[Address(RVA = "0x5C2CCA0", Offset = "0x5C2BCA0", VA = "0x5C2CCA0")]
	public void SetLabelBackgroundColorAll(Color color)
	{
	}

	[Token(Token = "0x6004EF3")]
	[Address(RVA = "0x5C2CE40", Offset = "0x5C2BE40", VA = "0x5C2CE40")]
	public void SetKDRPanelActive(bool active)
	{
	}

	[Token(Token = "0x6004EF4")]
	[Address(RVA = "0x5C2CE70", Offset = "0x5C2BE70", VA = "0x5C2CE70")]
	public void SetMinimapActive(bool active)
	{
	}

	[Token(Token = "0x6004EF5")]
	[Address(RVA = "0x5C2CEB0", Offset = "0x5C2BEB0", VA = "0x5C2CEB0")]
	public void SetChatPanelActive(bool active)
	{
	}

	[Token(Token = "0x6004EF6")]
	[Address(RVA = "0x5C2CEE0", Offset = "0x5C2BEE0", VA = "0x5C2CEE0")]
	public void SetFeedPanelActive(bool active)
	{
	}

	[Token(Token = "0x6004EF7")]
	[Address(RVA = "0x5C2CF80", Offset = "0x5C2BF80", VA = "0x5C2CF80")]
	public void SetBottomHUDActive(bool active)
	{
	}

	[Token(Token = "0x6004EF8")]
	[Address(RVA = "0x5C2D010", Offset = "0x5C2C010", VA = "0x5C2D010")]
	public void SetLabel(string label, string message, float time)
	{
	}

	[Token(Token = "0x6004EF9")]
	[Address(RVA = "0x5C2D0D0", Offset = "0x5C2C0D0", VA = "0x5C2D0D0")]
	private void SetLabelText(string label, string message)
	{
	}

	[Token(Token = "0x6004EFA")]
	[Address(RVA = "0x5C2C700", Offset = "0x5C2B700", VA = "0x5C2C700")]
	[IteratorStateMachine(typeof(_003CWaitAndShowBlood_003Ed__118))]
	private IEnumerator WaitAndShowBlood()
	{
		return null;
	}

	[Token(Token = "0x6004EFB")]
	[Address(RVA = "0x5C2D300", Offset = "0x5C2C300", VA = "0x5C2D300")]
	private void Update()
	{
	}

	[Token(Token = "0x6004EFC")]
	[Address(RVA = "0x5C2E450", Offset = "0x5C2D450", VA = "0x5C2E450")]
	private string CombineLines(string first, string second)
	{
		return null;
	}

	[Token(Token = "0x6004EFD")]
	[Address(RVA = "0x5C2E4D0", Offset = "0x5C2D4D0", VA = "0x5C2E4D0")]
	private string GetKeybindStrings()
	{
		return null;
	}

	[Token(Token = "0x6004EFE")]
	[Address(RVA = "0x5C2EA00", Offset = "0x5C2DA00", VA = "0x5C2EA00")]
	private string GetPlayerListEntry(Player player)
	{
		return null;
	}

	[Token(Token = "0x6004EFF")]
	[Address(RVA = "0x5C2F3F0", Offset = "0x5C2E3F0", VA = "0x5C2F3F0")]
	private string GetAggregateStats(IGrouping<string, Player> group)
	{
		return null;
	}

	[Token(Token = "0x6004F00")]
	[Address(RVA = "0x5C2FB20", Offset = "0x5C2EB20", VA = "0x5C2FB20")]
	private string GetPlayerList()
	{
		return null;
	}

	[Token(Token = "0x6004F01")]
	[Address(RVA = "0x5C2FC00", Offset = "0x5C2EC00", VA = "0x5C2FC00")]
	private string GetPlayerListTeams()
	{
		return null;
	}

	[Token(Token = "0x6004F02")]
	[Address(RVA = "0x5C2AC20", Offset = "0x5C29C20", VA = "0x5C2AC20")]
	private void HideAllMenus([Optional] BasePopup keep)
	{
	}

	[Token(Token = "0x6004F03")]
	[Address(RVA = "0x5C309E0", Offset = "0x5C2F9E0", VA = "0x5C309E0", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004F04")]
	[Address(RVA = "0x5C30C70", Offset = "0x5C2FC70", VA = "0x5C30C70")]
	public InGameMenu()
	{
	}
}

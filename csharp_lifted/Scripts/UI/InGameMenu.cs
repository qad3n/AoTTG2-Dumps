// ==================== AoTTG2 cross-reference ====================
// Type: UI.InGameMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/InGameMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/InGameMenu.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu.HudText$$Locale): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("InGame", "Hud", item, "", "");
			return pSVar1;
		}

		[Token(Token = "0x6004F06")]
		[Address(RVA = "0x5C29050", Offset = "0x5C28050", VA = "0x5C29050")]
		public HudText()
		{
			// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu.HudText$$.ctor): clean
			uint uVar1;
			String pSVar2;

			pSVar2 = "RestartingIn";
			if (Il2CppMethodInitialized_07547e20 == false) {
				Il2CppMethodInitialized_07547e20 = true;
				pSVar2 = "RestartingIn";
			}
			"RestartingIn" = pSVar2;
			if (Il2CppMethodInitialized_07547e1f == false) {
				Il2CppMethodInitialized_07547e1f = true;
				uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(UIManager))._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.RestartingIn = pSVar2;
			pSVar2 = "SpectatePrevious";
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.SpectatePrevious = pSVar2;
			pSVar2 = "SpectateNext";
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.SpectateNext = pSVar2;
			pSVar2 = "SpectateJoin";
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.SpectateJoin = pSVar2;
			pSVar2 = "SpectatingPlayer";
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.SpectatingPlayer = pSVar2;
			pSVar2 = "Spectating";
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.Spectating = pSVar2;
			pSVar2 = "Sandbox";
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.Sandbox = pSVar2;
			pSVar2 = "Interpolation";
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.Interpolation = pSVar2;
			pSVar2 = "On";
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.On = pSVar2;
			pSVar2 = "Off";
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.Off = pSVar2;
			pSVar2 = "Position";
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.Position = pSVar2;
			pSVar2 = "SpectatorCount";
			pSVar2 = UIManager.GetLocale("InGame", "Hud", pSVar2, "", "");
			this.SpectatorCount = pSVar2;
			base();
			return;
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
				// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu.<WaitAndShowBlood>d__118$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu.<WaitAndShowBlood>d__118$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004F0E")]
		[Address(RVA = "0x5C2D2E0", Offset = "0x5C2C2E0", VA = "0x5C2D2E0")]
		[DebuggerHidden]
		public _003CWaitAndShowBlood_003Ed__118(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu.<WaitAndShowBlood>d__118$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004F0F")]
		[Address(RVA = "0x5C31320", Offset = "0x5C30320", VA = "0x5C31320", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu.<WaitAndShowBlood>d__118$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004F10")]
		[Address(RVA = "0x5C31330", Offset = "0x5C30330", VA = "0x5C31330", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu.<WaitAndShowBlood>d__118$$MoveNext): clean
			int iVar1;
			InGameMenu pUVar2;
			InGameBackgroundMenu pUVar3;
			BloodBackgroundPanel pUVar4;
			WaitForSeconds __this_00;

			iVar1 = this.__1__state;
			pUVar2 = this.__4__this;
			if (iVar1 == 0) {
				this.__1__state = -1;
				if (((pUVar2 == null) ||(pUVar3 = pUVar2._backgroundMenu, pUVar3 == null)) ||(pUVar4 = pUVar3._bloodBackgroundPanel, pUVar4 == null)) {
		label_05d31436: ;
					throw new NullReferenceException();
				}
				pUVar4.Show();
				__this_00 = new WaitForSeconds(5.0);
				this.__2__current = (object)__this_00;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				if (((pUVar2 == null) ||(pUVar3 = pUVar2._backgroundMenu, pUVar3 == null)) ||(pUVar4 = pUVar3._bloodBackgroundPanel, pUVar4 == null)) goto label_05d31436;
				pUVar4.Hide();
				pUVar2._showingBlood = false;
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6004F12")]
		[Address(RVA = "0x5C31450", Offset = "0x5C30450", VA = "0x5C31450", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu.<WaitAndShowBlood>d__118$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_InGameMenu_WaitAndShowBlood_d__118_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
			// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$get_RootVisualElement): clean
			UIDocument __this_00;
			VisualElement pUVar1;

			__this_00 = this._uiDocument;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return pUVar1;
		}
	}

	[Token(Token = "0x6004EC6")]
	[Address(RVA = "0x5C28A80", Offset = "0x5C27A80", VA = "0x5C28A80", Slot = "6")]
	public override void RebuildPopups()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$RebuildPopups): 10 lines keep C-only constructs
		int piVar1;
		GlobalPauseGamePopup* targetAddress;
		ChatPanel pUVar2;
		CustomAssetUrlPopup pUVar3;
		CustomAssetVideoUrlPopup pUVar4;
		BasePopup pUVar5;
		Dictionary<object, object> __this_00;
		List<BasePopup> pSVar6;
		HashSet<object> __this_01;
		bool bVar7;
		int iVar8;
		InGameMenu.c__DisplayClass66_0 __this_02;
		InGameMenu.HudText __this_03;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o collection;
		HashSet<BasePopup> __this_04;
		Object pUVar9;
		Predicate<T> match;
		Transform pUVar10;
		GlobalPauseGamePopup pUVar11;
		ulong uVar13;
		byte[] auStack_78 = new byte[8];
		Object pUStack_68;
		byte[] auStack_58 = new byte[16];
		Object pUStack_48;
		ulong uStack_40;
		InGameMenu.c__DisplayClass66_0 pUStack_38;

		auStack_78 = (byte[])0x0;
		pUStack_68 = null;
		__this_02 = new InGameMenu.c__DisplayClass66_0();
		__this_03 = new InGameMenu.HudText();
		this._hudText = __this_03;
		pUVar2 = this.ChatPanel;
		bVar7 = ((Object)pUVar2 != null);
		if (bVar7) {
			pUVar2 = this.ChatPanel;
			if (pUVar2 == null) goto label_05d28fc6;
			pUVar2.ApplyLanguageFont();
		}
		pUVar3 = this._customAssetUrlPopup;
		if (pUVar3 != null) {
			if (pUVar3.IsActive != false) {
				return;
			}
			pUVar4 = this._customAssetVideoUrlPopup;
			if (pUVar4 != null) {
				if (pUVar4.IsActive != false) {
					return;
				}
				pUVar5 = this._characterPopup;
				uVar13 = 0;
				bVar7 = ((Object)pUVar5 != null);
				if (bVar7) {
					pUVar5 = this._characterPopup;
					if (pUVar5 == null) goto label_05d28fc6;
					uVar13 = (ulong)pUVar5.IsActive;
				}
				__this_00 = (Dictionary<object, object>)this._customPopups;
				if (__this_00 != null) {
					collection = __this_00.Values;
					__this_04 = new HashSet<BasePopup>((IEnumerable<T>)collection);
					if (__this_02 != null) {
						__this_02.customPopups = __this_04;
						uStack_40 = uVar13;
						pUStack_38 = __this_02;
						pSVar6 = this._popups;
						if (pSVar6 != null) {
							auStack_58.GetEnumerator((List<object>)pSVar6);
							pUStack_68 = pUStack_48;
							auStack_78 = (byte[])auStack_58._0_8_;
							auStack_58._0_8_ = null;
							auStack_58._8_8_ = auStack_78;
							while(true) {
								bVar7 = auStack_78.MoveNext();
								pUVar9 = pUStack_68;
								if (!bVar7) break;
								bVar7 = (pUVar9 != null);
								if (bVar7) {
									__this_01 = (HashSet<object>)__this_02.customPopups;
									if (__this_01 == null) {
										throw new NullReferenceException();
									}
									bVar7 = __this_01.Contains((object)pUVar9);
									if (!bVar7) {
										if (pUVar9 == null) {
											throw new NullReferenceException();
										}
										pUVar9 = (Object)pUVar9.gameObject;
										Object.Destroy(pUVar9);
									}
								}
							}
							auStack_78.Dispose();
							pSVar6 = this._popups;
							match = new Predicate<BasePopup>((object)pUStack_38, (intptr_t)MethodInfo_UI_InGameMenu_c__DisplayClass66_0_RebuildPopups_b__0);
							if (pSVar6 != null) {
								pSVar6.RemoveAll(match) ;
								pSVar6 = this._allPausePopups;
								if (pSVar6 != null) {
									piVar1 = &pSVar6._version;
									*piVar1 = *piVar1 + 1;
									iVar8 = pSVar6._size;
									pSVar6._size = 0;
									if (0 < iVar8) {
										Array.Clear((Array)pSVar6._items, 0, iVar8);
									}
									this._characterChangePopup = null;
									this.SetupPopups();
									pUVar11 = this._globalPauseGamePopup;
									if ((pUVar11 != null) &&(pUVar10 = pUVar11.transform, pUVar10 != null)) {
										targetAddress = &this._globalPauseGamePopup;
										iVar8 = pUVar10.GetSiblingIndex();
										pUVar11 = *targetAddress;
										if (pUVar11 != null) {
											pUVar9 = (Object)pUVar11.gameObject;
											Object.Destroy(pUVar9);
											pUVar10 = this.transform;
											pUVar11 = ElementFactory.CreateDefaultPopup<GlobalPauseGamePopup>(pUVar10, false) ;
											this._globalPauseGamePopup = pUVar11;
											pUVar11 = this._globalPauseGamePopup;
											if ((pUVar11 != null) &&(pUVar10 = pUVar11.transform, pUVar10 != null)) {
												pUVar10.SetSiblingIndex(iVar8);
												bVar7 = ((Object)this._gameManager == null);
												if (bVar7) {
													return;
												}
												this.SetupGameplayPopups();
												if ((int)uStack_40 == 0) {
													return;
												}
												pUVar5 = this._characterPopup;
												if (pUVar5 != null) {
													pUVar5.Show();
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05d28fc6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EC7")]
	[Address(RVA = "0x5C299C0", Offset = "0x5C289C0", VA = "0x5C299C0", Slot = "4")]
	public override void Setup()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$Setup): clean
		GameObject pUVar1;
		EmoteHandler pUVar2;
		ItemHandler pUVar3;
		ActionHandler pUVar4;
		HUDBottomHandler pUVar5;
		CharacterInfoHandler pUVar6;
		StylebarHandler pUVar7;
		Transform pUVar8;
		SongPopup method_00;
		UIDocument pUVar9;
		PanelSettings pUVar10;

		this.Setup();
		this.SetupLoading();
		this.SetupTopLeftHud();
		this.SetupLabels();
		pUVar1 = this.gameObject;
		if (pUVar1 != null) {
			pUVar2 = pUVar1.AddComponent<EmoteHandler>();
			this.EmoteHandler = pUVar2;
			pUVar1 = this.gameObject;
			if (pUVar1 != null) {
				pUVar3 = pUVar1.AddComponent<ItemHandler>();
				this.ItemHandler = pUVar3;
				pUVar1 = this.gameObject;
				if (pUVar1 != null) {
					pUVar4 = pUVar1.AddComponent<ActionHandler>();
					this.ActionHandler = pUVar4;
					pUVar1 = this.gameObject;
					if (pUVar1 != null) {
						pUVar5 = pUVar1.AddComponent<HUDBottomHandler>();
						this.HUDBottomHandler = pUVar5;
						pUVar1 = this.gameObject;
						if (pUVar1 != null) {
							pUVar6 = pUVar1.AddComponent<CharacterInfoHandler>();
							this.CharacterInfoHandler = pUVar6;
							pUVar1 = this.gameObject;
							if (pUVar1 != null) {
								pUVar7 = pUVar1.AddComponent<StylebarHandler>();
								this.StylebarHandler = pUVar7;
								pUVar1 = this.gameObject;
								if (pUVar1 != null) {
									pUVar1.AddComponent<CrosshairHandler>();
									pUVar8 = this.transform;
									pUVar1 = ElementFactory.InstantiateAndBind(pUVar8, "Prefabs/InGame/NapeLockImage") ;
									this.NapeLock = pUVar1;
									pUVar1 = this.NapeLock;
									if (pUVar1 != null) {
										pUVar1.SetActive(false);
										this.SetupChat();
										this.SetupMinimap();
										pUVar8 = this.transform;
										method_00 = ElementFactory.CreateDefaultPopup<SongPopup>(pUVar8, false);
										this._songPopup = (BasePopup)method_00;
										this.SetupSnapshot();
										this.HideAllMenus(null);
										pUVar9 = this.GetComponent<UIDocument>();
										this._uiDocument = pUVar9;
										pUVar9 = this._uiDocument;
										if (pUVar9 != null) {
											pUVar10 = pUVar9.panelSettings;
											pUVar10 = Object.Instantiate<PanelSettings>((object)pUVar10);
											this._panelSettings = pUVar10;
											pUVar9 = this._uiDocument;
											if (pUVar9 != null) {
												pUVar10 = this._panelSettings;
												pUVar9.panelSettings = pUVar10;
												this.ApplyCustomLogicPanelSettings();
												pUVar8 = this.transform;
												AottgMobileUi.CreateControls(pUVar8, this);
												return;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EC8")]
	[Address(RVA = "0x5C2B090", Offset = "0x5C2A090", VA = "0x5C2B090")]
	public void ApplyUISettings()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ApplyUISettings): clean
		GameObject __this_00;
		TopLeftHUD __this_01;

		__this_00 = this.TopLeftHud;
		if (__this_00 != null) {
			__this_01 = __this_00.GetComponent<TopLeftHUD>();
			if (__this_01 != null) {
				__this_01.ApplySettings();
				this.ApplyCustomLogicPanelSettings();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EC9")]
	[Address(RVA = "0x5C2AE60", Offset = "0x5C29E60", VA = "0x5C2AE60")]
	private void ApplyCustomLogicPanelSettings()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ApplyCustomLogicPanelSettings): 8 lines keep C-only constructs
		UISettings __this_00;
		PanelSettings pUVar1;
		UIDocument pUVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		bool bVar5;
		Length v;
		VisualElement pUVar6;
		object pIVar7;
		VirtualInvokeData pVVar8;
		ulong uVar9;
		long lVar10;
		float fVar11;
		StyleLength UVar12;

		__this_00 = SettingsManager.UISettings;
		if (__this_00 != null) {
			pUVar1 = this._panelSettings;
			fVar11 = __this_00.AppliedMasterScale;
			if (pUVar1 != null) {
				pUVar1.m_Scale = fVar11;
				bVar5 = MobilePlatformUtility.IsMobileRuntime();
				if (!bVar5) {
					return;
				}
				fVar11 = AottgMobileMenuSafeArea.HorizontalInset();
				v = Length.Percent(fVar11 * 100.0);
				pUVar2 = this._uiDocument;
				if (pUVar2 != null) {
					pUVar6 = pUVar2.rootVisualElement;
					if (pUVar6 != null) {
						pIVar7 = (object)pUVar6.style;
						UVar12 = ((StyleLength)v);
						if (pIVar7 != null) {
							pIVar3 = pIVar7.klass;
							uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
							if (uVar9 != 0) {
								pIVar4 = (pIVar3._1).interfaceOffsets;
								lVar10 = 0;
								do {
									if (*(IStyle*)((long)&pIVar4.interfaceType + lVar10) == typeof(IStyle)) {
										pVVar8 = pIVar3.vtable + (*(int)((long)&pIVar4.offset + lVar10) + 0x4d);
										goto label_05d2afb4;
									}
									lVar10 = lVar10 + 0x10;
								} while (uVar9 * 0x10 != lVar10);
							}
							pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7, typeof(IStyle), 0x4d);
	label_05d2afb4: ;
							(*pVVar8.methodPtr)(pIVar7,UVar12,pVVar8.method);
							pUVar2 = this._uiDocument;
							if (pUVar2 != null) {
								pUVar6 = pUVar2.rootVisualElement;
								if (pUVar6 != null) {
									pIVar7 = (object)pUVar6.style;
									UVar12 = ((StyleLength)v);
									if (pIVar7 != null) {
										pIVar3 = pIVar7.klass;
										uVar9 = (ulong)(pIVar3._2).interface_offsets_count;
										if (uVar9 != 0) {
											pIVar4 = (pIVar3._1).interfaceOffsets;
											lVar10 = 0;
											do {
												if (*(IStyle*)((long)&pIVar4.interfaceType + lVar10) == typeof(IStyle)) {
													pVVar8 = pIVar3.vtable + (*(int)((long)&pIVar4.offset + lVar10) + 0x4f);
													goto label_05d2b065;
												}
												lVar10 = lVar10 + 0x10;
											} while (uVar9 * 0x10 != lVar10);
										}
										pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar7, typeof(IStyle), 0x4f);
	label_05d2b065: ;
										(*pVVar8.methodPtr)(pIVar7,UVar12,pVVar8.method);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004ECA")]
	[Address(RVA = "0x5C2B0F0", Offset = "0x5C2A0F0", VA = "0x5C2B0F0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$OnDestroy): clean
		PanelSettings pUVar1;
		bool bVar2;

		pUVar1 = this._panelSettings;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._panelSettings;
			Object.Destroy((Object)pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x6004ECB")]
	[Address(RVA = "0x5C29EA0", Offset = "0x5C28EA0", VA = "0x5C29EA0")]
	public void SetupTopLeftHud()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetupTopLeftHud): clean
		Transform parent;
		GameObject obj;
		TopLeftHUD pUVar1;

		parent = this.transform;
		obj = ElementFactory.InstantiateAndSetupPanel<TopLeftHUD>(parent, "Prefabs/InGame/TopLeftHUD", false);
		ElementFactory.SetAnchor(obj, 0, 0, (Vector2)0xc100000041200000);
		this.TopLeftHud = obj;
		if (obj != null) {
			pUVar1 = obj.GetComponent<TopLeftHUD>();
			if (pUVar1 != null) {
				this.KDRReference = pUVar1.kdrAndLabel;
				pUVar1 = obj.GetComponent<TopLeftHUD>() ;
				if (pUVar1 != null) {
					this.KDRPanel = pUVar1._kdr;
					obj.SetActive(true);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004ECC")]
	[Address(RVA = "0x5C2B170", Offset = "0x5C2A170", VA = "0x5C2B170")]
	public void ToggleUI(bool toggle)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ToggleUI): clean
		Canvas __this_00;

		__this_00 = this.GetComponent<Canvas>();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.enabled = toggle;
		return;
	}

	[Token(Token = "0x6004ECD")]
	[Address(RVA = "0x5C2B1D0", Offset = "0x5C2A1D0", VA = "0x5C2B1D0")]
	public bool IsActive()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$IsActive): clean
		bool bVar1;
		Canvas __this_00;

		__this_00 = this.GetComponent<Canvas>();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x6004ECE")]
	[Address(RVA = "0x5C2B220", Offset = "0x5C2A220", VA = "0x5C2B220")]
	public void CreateCustomPopup(string name, string title, float width, float height)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$CreateCustomPopup): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<BasePopup> __this_00;
		BasePopup[] pUVar3;
		Dictionary<object, object> __this_01;
		Transform parent;
		GameObject __this_02;
		CustomPopup item;

		parent = this.transform;
		__this_02 = ElementFactory.InstantiateAndSetupCustomPopup(parent, title, width, height, false);
		if (__this_02 != null) {
			item = __this_02.GetComponent<CustomPopup>();
			__this_00 = this._popups;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = __this_00._items;
				if (pUVar3 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pUVar3.Length) {
						__this_00._size = uVar2 + 1;
						pUVar3[(int)uVar2] = (BasePopup)item;
					}
					else {
						__this_00.AddWithResize((object)item);
					}
					__this_01 = (Dictionary<object, object>)this._customPopups;
					if (__this_01 != null) {
						__this_01.set_Item((object)name, (object)item);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004ECF")]
	[Address(RVA = "0x5C2B350", Offset = "0x5C2A350", VA = "0x5C2B350")]
	public CustomPopup GetCustomPopup(string name)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$GetCustomPopup): 1 lines keep C-only constructs
		byte bVar1;
		Dictionary<object, object> __this_00;
		CustomPopup pUVar2;

		__this_00 = (Dictionary<object, object>)this._customPopups;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pUVar2 = (CustomPopup)__this_00.get_Item((object)name);
		if (pUVar2 != null) {
			bVar1 = (typeof(CustomPopup)._2).typeHierarchyDepth;
			if (((pUVar2.klass._2).typeHierarchyDepth < bVar1) ||((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(CustomPopup))) {
				throw new InvalidCastException();
			}
		}
		return pUVar2;
	}

	[Token(Token = "0x6004ED0")]
	[Address(RVA = "0x5C2B3F0", Offset = "0x5C2A3F0", VA = "0x5C2B3F0")]
	public bool IsCustomPopupActive(string name)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$IsCustomPopupActive): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		BasePopup pUVar3;

		pSVar1 = (Dictionary<object, object>)this._customPopups;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey((object)name);
			if (!bVar2) {
				return false;
			}
			pSVar1 = (Dictionary<object, object>)this._customPopups;
			if (pSVar1 != null) {
				pUVar3 = pSVar1.get_Item((object)name);
				if (pUVar3 != null) {
					return pUVar3.IsActive != false;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004ED1")]
	[Address(RVA = "0x5C2B490", Offset = "0x5C2A490", VA = "0x5C2B490")]
	public List<string> GetAllCustomPopups()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$GetAllCustomPopups): 2 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o source;
		List<string> pSVar1;

		__this_00 = (Dictionary<object, object>)this._customPopups;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		source = __this_00.Keys;
		pSVar1 = (List<string>)Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
		return pSVar1;
	}

	[Token(Token = "0x6004ED2")]
	[Address(RVA = "0x5C2AA40", Offset = "0x5C29A40", VA = "0x5C2AA40")]
	public void SetupMinimap()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetupMinimap): 4 lines keep C-only constructs
		GameObject* targetAddress;
		int iVar1;
		Transform parent;
		GameObject pUVar2;

		if (Il2CppMethodInitialized_07547dfa == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_MinimapHandler) ;
			Il2CppMethodInitialized_07547dfa = true;
		}
		parent = this.transform;
		pUVar2 = ElementFactory.InstantiateAndBind(parent, "Minimap/Prefabs/MinimapPanel");
		targetAddress = &this._minimapPanel;
		this._minimapPanel = pUVar2;
		ElementFactory.SetAnchor(this._minimapPanel, 2, 2, (Vector2)0xc1200000c1200000);
		pUVar2 = this._minimapPanel;
		if (pUVar2 != null) {
			pUVar2.AddComponent<MinimapScaler>();
			pUVar2 = *targetAddress;
			if (pUVar2 != null) {
				pUVar2.SetActive(false);
				iVar1 = SystemInfo.graphicsDeviceType;
				if (iVar1 == 4) {
					return;
				}
				pUVar2 = this.gameObject;
				if (pUVar2 != null) {
					pUVar2.AddComponent<MinimapHandler>() ;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004ED3")]
	[Address(RVA = "0x5C2AB40", Offset = "0x5C29B40", VA = "0x5C2AB40")]
	public void SetupSnapshot()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetupSnapshot): 1 lines keep C-only constructs
		Transform pUVar1;
		GameObject __this_00;
		SnapshotPopup pUVar2;

		pUVar1 = this.transform;
		__this_00 = ElementFactory.InstantiateAndSetupPanel<SnapshotPopup>(pUVar1, "Prefabs/Snapshot/SnapshotPopup", false);
		if (__this_00 != null) {
			pUVar2 = __this_00.GetComponent<SnapshotPopup>();
			this._snapshotPopup = pUVar2;
			pUVar1 = __this_00.transform;
			if (pUVar1 != null) {
				pUVar1.localScale = (Vector3)ZEXT812(0x3f4ccccd3f4ccccd);
				ElementFactory.SetAnchor(__this_00, 0, 0, (Vector2)0xc302000041a00000);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004ED4")]
	[Address(RVA = "0x5C2A730", Offset = "0x5C29730", VA = "0x5C2A730")]
	private void SetupChat()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetupChat): 1 lines keep C-only constructs
		UISettings pSVar1;
		BoolSetting pSVar2;
		InGameLabel pUVar3;
		Text __this_00;
		TextMeshProUGUI __this_01;
		IntSetting pSVar4;
		Transform pUVar5;
		GameObject pUVar6;
		FeedPanel pUVar7;
		Settings_SettingsManager_StaticFields pSVar8;
		VoiceChatPanel pUVar9;
		ChatPanel pUVar10;

		if (Il2CppMethodInitialized_07547dfc == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_VoiceChatPanel) ;
			Il2CppMethodInitialized_07547dfc = true;
		}
		pSVar8 = typeof(SettingsManager).static_fields;
		pSVar1 = pSVar8.UISettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.FeedConsole, pSVar2 == null)) goto label_05d2aa3a;
		if (pSVar2._value != false) {
			pSVar2 = pSVar1.GameFeed;
			if (pSVar2 == null) goto label_05d2aa3a;
			if (pSVar2._value != false) {
				pUVar3 = this._bottomRightLabel;
				if (pUVar3 == null) goto label_05d2aa3a;
				if (pUVar3._legacy == false) {
					__this_01 = pUVar3._tmpText;
					if (__this_01 == null) goto label_05d2aa3a;
					pUVar5 = __this_01.transform;
				}
				else {
					__this_00 = pUVar3._legacyText;
					if (__this_00 == null) goto label_05d2aa3a;
					pUVar5 = __this_00.transform;
				}
				pUVar6 = ElementFactory.InstantiateAndSetupPanel<FeedPanel>(pUVar5, "Prefabs/InGame/FeedPanel", true);
				if (pUVar6 == null) goto label_05d2aa3a;
				pUVar7 = pUVar6.GetComponent<FeedPanel>();
				this.FeedPanel = pUVar7;
				pUVar7 = this.FeedPanel;
				if (pUVar7 == null) goto label_05d2aa3a;
				pUVar6 = pUVar7.gameObject;
				ElementFactory.SetAnchor(pUVar6, 2, 2, (Vector2)0xc248000000000000);
				pSVar8 = typeof(SettingsManager).static_fields;
			}
		}
		if ((pSVar8.SoundSettings == null) ||(pSVar4 = pSVar8.SoundSettings.VoiceChatInput, pSVar4 == null)) goto label_05d2aa3a;
		if (pSVar4._value != 2) {
			pUVar5 = this.transform;
			pUVar6 = ElementFactory.InstantiateAndSetupPanel<VoiceChatPanel>(pUVar5, "Prefabs/InGame/VoiceChatPanel", true);
			if (pUVar6 == null) goto label_05d2aa3a;
			pUVar9 = pUVar6.GetComponent<VoiceChatPanel>();
			this.VoiceChatPanel = pUVar9;
			pUVar9 = this.VoiceChatPanel;
			if (pUVar9 == null) goto label_05d2aa3a;
			pUVar6 = pUVar9.gameObject;
			ElementFactory.SetAnchor(pUVar6, 3, 3, (Vector2)0x4120000041200000);
		}
		pUVar5 = this.transform;
		pUVar6 = ElementFactory.InstantiateAndSetupPanel<ChatPanel>(pUVar5, "Prefabs/InGame/ChatPanel", true);
		if (pUVar6 != null) {
			pUVar10 = pUVar6.GetComponent<ChatPanel>();
			this.ChatPanel = pUVar10;
			pUVar10 = this.ChatPanel;
			if (pUVar10 != null) {
				pUVar6 = pUVar10.gameObject;
				ElementFactory.SetAnchor(pUVar6, 6, 6, (Vector2)0x4120000041200000);
				return;
			}
		}
	label_05d2aa3a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004ED5")]
	[Address(RVA = "0x5C29FB0", Offset = "0x5C28FB0", VA = "0x5C29FB0")]
	private void SetupLabels()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetupLabels): 9 lines keep C-only constructs
		int piVar1;
		KillScorePopup* targetAddress;
		KillFeedBigPopup* targetAddress_00;
		uint uVar2;
		uint uVar3;
		UISettings pSVar4;
		IntSetting pSVar5;
		List<KillFeedSmallPopup> __this_00;
		KillFeedSmallPopup[] pUVar6;
		InGameMenu.HudText __this_01;
		ElementStyle __this_02;
		Transform pUVar8;
		InGameLabel pUVar9;
		KillScorePopup pUVar10;
		GameObject pUVar11;
		KillFeedBigPopup pUVar12;
		KillFeedSmallPopup __this_03;
		int iVar13;
		int iVar14;
		ulong local_48;

		if (Il2CppMethodInitialized_07547dfd == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_KillFeedScaler) ;
			Il2CppMethodInitialized_07547dfd = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_0754708d == false) {
			Il2CppMethodInitialized_0754708d = true;
			uVar2 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(CustomLogicUIBuiltin))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		this._legacyLabels = CustomLogicUIBuiltin._legacyLabels;
		__this_01 = new InGameMenu.HudText();
		this._hudText = __this_01;
		__this_02 = new ElementStyle(0x16, 120.0, 20.0, "DefaultPanel");
		pUVar8 = this.transform;
		pUVar9 = this.CreateLabel("TopCenter", pUVar8, __this_02, 0x202, 1, (Vector2)0xc120000000000000);
		this._topCenterLabel = pUVar9;
		pUVar11 = this.KDRReference;
		if (pUVar11 != null) {
			pUVar8 = pUVar11.transform;
			pUVar9 = this.CreateLabel("TopLeft", pUVar8, __this_02, 0x201, 0, (Vector2)0xc120000041200000);
			this._topLeftLabel = pUVar9;
			pUVar8 = this.transform;
			pUVar9 = this.CreateLabel("TopRight", pUVar8, __this_02, 0x204, 2, (Vector2)0xc1200000c1200000);
			this._topRightLabel = pUVar9;
			pUVar8 = this.transform;
			pUVar9 = this.CreateLabel("MiddleCenter", pUVar8, __this_02, 0x202, 4, (Vector2)0x42c8000000000000);
			this._middleCenterLabel = pUVar9;
			pUVar8 = this.transform;
			pUVar9 = this.CreateLabel("MiddleRight", pUVar8, __this_02, 0x202, 5, (Vector2)0xc1200000);
			this._middleRightLabel = pUVar9;
			pUVar8 = this.transform;
			pUVar9 = this.CreateLabel("MiddleLeft", pUVar8, __this_02, 0x202, 3, (Vector2)0x41200000);
			this._middleLeftLabel = pUVar9;
			pUVar8 = this.transform;
			pUVar9 = this.CreateLabel("BottomCenter", pUVar8, __this_02, 0x202, 7, (Vector2)0x4120000000000000);
			this._bottomCenterLabel = pUVar9;
			pUVar8 = this.transform;
			pUVar9 = this.CreateLabel("BottomLeft", pUVar8, __this_02, 0x201, 6, (Vector2)0x4120000041200000);
			this._bottomLeftLabel = pUVar9;
			pUVar8 = this.transform;
			pUVar9 = this.CreateLabel("BottomRight", pUVar8, __this_02, 0x204, 8, (Vector2)0x41200000c1200000);
			this._bottomRightLabel = pUVar9;
			pUVar8 = this.transform;
			pUVar10 = ElementFactory.CreateDefaultPopup<KillScorePopup>(pUVar8, false) ;
			targetAddress = &this._killScorePopup;
			this._killScorePopup = pUVar10;
			pUVar10 = this._killScorePopup;
			if ((pUVar10 != null) &&(pUVar11 = pUVar10.gameObject, pUVar11 != null)) {
				pUVar11.AddComponent<IgnoreScaler>();
				pUVar10 = *targetAddress;
				if (pUVar10 != null) {
					pUVar11 = pUVar10.gameObject;
					ElementFactory.SetAnchor(pUVar11, 4, 4, (Vector2)0x42c8000000000000);
					pUVar8 = this.transform;
					pUVar12 = ElementFactory.CreateDefaultPopup<KillFeedBigPopup>(pUVar8, false);
					targetAddress_00 = &this._killFeedBigPopup;
					this._killFeedBigPopup = pUVar12;
					pUVar12 = this._killFeedBigPopup;
					if ((pUVar12 != null) &&(pUVar11 = pUVar12.gameObject, pUVar11 != null)) {
						pUVar11.AddComponent<KillFeedScaler>();
						pUVar12 = *targetAddress_00;
						if (pUVar12 != null) {
							pUVar11 = pUVar12.gameObject;
							ElementFactory.SetAnchor(pUVar11, 1, 4, (Vector2)0xc2f0000000000000);
							pSVar4 = SettingsManager.UISettings;
							if ((pSVar4 != null) &&(pSVar5 = pSVar4.KillFeedCount, pSVar5 != null)) {
								iVar14 = pSVar5._value + -1;
								if (0 < iVar14) {
									iVar13 = 0;
									do {
										while(true) {
											pUVar8 = this.transform;
											__this_03 = ElementFactory.CreateDefaultPopup<KillFeedSmallPopup>(pUVar8, false) ;
											if ((__this_03 == null) ||(pUVar11 = __this_03.gameObject, pUVar11 == null)) goto label_05d2a724;
											pUVar11.AddComponent<KillFeedScaler>();
											pUVar11 = __this_03.gameObject;
											local_48 = (ulong)(uint)((float)iVar13 * -35.0 + -162.0);
											ElementFactory.SetAnchor(pUVar11, 1, 4, (Vector2)(local_48 << 0x20));
											__this_00 = this._killFeedSmallPopups;
											if (__this_00 == null) goto label_05d2a724;
											piVar1 = &__this_00._version;
											*piVar1 = *piVar1 + 1;
											pUVar6 = __this_00._items;
											if (pUVar6 == null) goto label_05d2a724;
											uVar3 = __this_00._size;
											if ((uint)pUVar6.Length <= uVar3) break;
											__this_00._size = uVar3 + 1;
											pUVar6[(int)uVar3] = __this_03;
											iVar13 = iVar13 + 1;
											if (iVar14 == iVar13) {
												return;
											}
										}
										__this_00.AddWithResize((object)__this_03);
										iVar13 = iVar13 + 1;
									} while (iVar14 != iVar13);
								}
								return;
							}
						}
					}
				}
			}
		}
	label_05d2a724: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004ED6")]
	[Address(RVA = "0x5C2B4F0", Offset = "0x5C2A4F0", VA = "0x5C2B4F0")]
	private InGameLabel CreateLabel(string label, Transform parent, ElementStyle style, TextAlignmentOptions alignment, TextAnchor anchor, Vector2 offset)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$CreateLabel): clean
		bool legacy;
		Dictionary<object, object> __this_00;
		InGameLabel __this_01;

		legacy = this._legacyLabels;
		__this_01 = new InGameLabel();
		__this_01._parent = parent;
		__this_01._style = style;
		__this_01._alignment = alignment;
		__this_01._anchor = anchor;
		__this_01._offset = offset;
		__this_01.SetLegacy(legacy);
		__this_00 = (Dictionary<object, object>)this._labels;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.set_Item((object)label, (object)__this_01);
		return __this_01;
	}

	[Token(Token = "0x6004ED7")]
	[Address(RVA = "0x5C2B5E0", Offset = "0x5C2A5E0", VA = "0x5C2B5E0")]
	public void SetLegacyLabels(bool legacy)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetLegacyLabels): 4 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		FeedPanel pUVar1;
		InGameLabel pUVar2;
		Text __this_01;
		TextMeshProUGUI __this_02;
		bool bVar3;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_03;
		Transform __this_04;
		Transform parent;
		byte[] auStack_58 = new byte[8];
		InGameLabel pUStack_48;
		byte[] auStack_40 = new byte[16];
		InGameLabel pUStack_30;

		auStack_58 = (byte[])0x0;
		pUStack_48 = null;
		if (this._legacyLabels != legacy) {
			__this_00 = (Dictionary<object, object>)this._labels;
			if ((__this_00 == null) ||(__this_03 = __this_00.Values , __this_03 == null)) goto label_05d2b7c4;
			auStack_40.GetEnumerator(__this_03);
			pUStack_48 = pUStack_30;
			auStack_58 = (byte[])auStack_40._0_8_;
			auStack_40._0_8_ = null;
			auStack_40._8_8_ = auStack_58;
			while(true) {
				bVar3 = auStack_58.MoveNext();
				if (!bVar3) break;
				if (pUStack_48 == null) {
					throw new NullReferenceException();
				}
				pUStack_48.SetLegacy(legacy);
			}
			auStack_58.Dispose();
			pUVar1 = this.FeedPanel;
			bVar3 = ((Object)pUVar1 != null);
			if (bVar3) {
				pUVar1 = this.FeedPanel;
				if (pUVar1 == null) {
	label_05d2b7c4: ;
					throw new NullReferenceException();
				}
				__this_04 = pUVar1.transform;
				pUVar2 = this._bottomRightLabel;
				if (pUVar2 == null) goto label_05d2b7c4;
				if (pUVar2._legacy == false) {
					__this_02 = pUVar2._tmpText;
					if (__this_02 == null) goto label_05d2b7c4;
					parent = __this_02.transform;
				}
				else {
					__this_01 = pUVar2._legacyText;
					if (__this_01 == null) goto label_05d2b7c4;
					parent = __this_01.transform;
				}
				if (__this_04 == null) goto label_05d2b7c4;
				__this_04.SetParent(parent, false);
			}
			this._legacyLabels = legacy;
		}
		return;
	}

	[Token(Token = "0x6004ED8")]
	[Address(RVA = "0x5C29DB0", Offset = "0x5C28DB0", VA = "0x5C29DB0")]
	private void SetupLoading()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetupLoading): 3 lines keep C-only constructs
		InGameBackgroundMenu* targetAddress;
		InGameBackgroundMenu pUVar1;
		Transform pUVar2;
		GlobalPauseGamePopup pUVar3;

		pUVar1 = ElementFactory.CreateMenu<InGameBackgroundMenu>("Prefabs/Panels/BackgroundMenu");
		targetAddress = &this._backgroundMenu;
		this._backgroundMenu = pUVar1;
		pUVar1 = this._backgroundMenu;
		if (pUVar1 != null) {
			pUVar1.Setup();
			pUVar1 = *targetAddress;
			if (pUVar1 != null) {
				pUVar2 = pUVar1.transform;
				if (pUVar2 != null) {
					pUVar2.SetAsFirstSibling();
					pUVar2 = this.transform;
					pUVar3 = ElementFactory.CreateDefaultPopup<GlobalPauseGamePopup>(pUVar2, false);
					this._globalPauseGamePopup = pUVar3;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004ED9")]
	[Address(RVA = "0x5C2B830", Offset = "0x5C2A830", VA = "0x5C2B830")]
	public void OnFinishLoading()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$OnFinishLoading): 2 lines keep C-only constructs
		byte bVar1;
		InGameManager pGVar2;
		GeneralSettings pSVar3;
		BoolSetting pSVar4;
		InGameManager pGVar5;
		bool bVar6;
		Transform parent;
		CutsceneDialoguePanel pUVar7;
		GameObject pUVar8;
		InGameMenu __this_00;

		this.SetupGameplayPopups();
		parent = this.transform;
		pUVar7 = ElementFactory.CreateDefaultPopup<CutsceneDialoguePanel>(parent, false);
		this._cutsceneDialoguePanel = pUVar7;
		pUVar7 = this._cutsceneDialoguePanel;
		if (pUVar7 != null) {
			pUVar8 = pUVar7.gameObject;
			ElementFactory.SetAnchor(pUVar8, 7, 7, (Vector2)0x42c8000000000000);
			pGVar5 = typeof(InGameManager);
			pGVar2 = (InGameManager)SceneLoader.CurrentGameManager;
			if (pGVar2 == null) {
				this._gameManager = null;
			}
			else {
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
	label_05d2ba1c: ;
					throw new InvalidCastException();
				}
				this._gameManager = pGVar2;
				if (((pGVar2.klass._2).typeHierarchyDepth < bVar1) ||((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pGVar5)) goto label_05d2ba1c;
			}
			__this_00 = (InGameMenu)this._minimapPanel;
			bVar6 = ((Object)__this_00 != null);
			if (!bVar6) {
				return;
			}
			pSVar3 = SettingsManager.GeneralSettings;
			if ((pSVar3 != null) &&(pSVar4 = pSVar3.MinimapEnabled, pSVar4 != null)) {
				if (pSVar4._value == false) {
					return;
				}
				bVar6 = __this_00.AllowMap();
				if (!bVar6) {
					return;
				}
				pUVar8 = this._minimapPanel;
				if (pUVar8 != null) {
					pUVar8.SetActive(true);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EDA")]
	[Address(RVA = "0x5C297B0", Offset = "0x5C287B0", VA = "0x5C297B0")]
	private void SetupGameplayPopups()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetupGameplayPopups): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<BasePopup> pSVar3;
		BasePopup pUVar4;
		BasePopup[] pUVar5;
		Transform pUVar7;
		CharacterPopup pUVar8;
		ScoreboardPopup pUVar9;
		MapPopup pUVar10;

		pUVar7 = this.transform;
		pUVar8 = ElementFactory.CreateDefaultPopup<CharacterPopup>(pUVar7, false);
		this._characterPopup = (BasePopup)pUVar8;
		pUVar7 = this.transform;
		pUVar9 = ElementFactory.CreateDefaultPopup<ScoreboardPopup>(pUVar7, false);
		this._scoreboardPopup = (BasePopup)pUVar9;
		pUVar7 = this.transform;
		pUVar10 = ElementFactory.CreateDefaultPopup<MapPopup>(pUVar7, false);
		this._mapPopup = (BasePopup)pUVar10;
		pSVar3 = this._popups;
		if (pSVar3 != null) {
			pUVar4 = this._characterPopup;
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			pUVar5 = pSVar3._items;
			if (pUVar5 != null) {
				uVar2 = pSVar3._size;
				if (uVar2 < (uint)pUVar5.Length) {
					pSVar3._size = uVar2 + 1;
					pUVar5[(int)uVar2] = pUVar4;
				}
				else {
					pSVar3.AddWithResize((object)pUVar4);
				}
				pSVar3 = this._popups;
				if (pSVar3 != null) {
					pUVar4 = this._scoreboardPopup;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pUVar5 = pSVar3._items;
					if (pUVar5 != null) {
						uVar2 = pSVar3._size;
						if (uVar2 < (uint)pUVar5.Length) {
							pSVar3._size = uVar2 + 1;
							pUVar5[(int)uVar2] = pUVar4;
						}
						else {
							pSVar3.AddWithResize((object)pUVar4);
						}
						pSVar3 = this._popups;
						if (pSVar3 != null) {
							pUVar4 = this._mapPopup;
							piVar1 = &pSVar3._version;
							*piVar1 = *piVar1 + 1;
							pUVar5 = pSVar3._items;
							if (pUVar5 != null) {
								uVar2 = pSVar3._size;
								if (uVar2 < (uint)pUVar5.Length) {
									pSVar3._size = uVar2 + 1;
									pUVar5[(int)uVar2] = pUVar4;
									return;
								}
								pSVar3.AddWithResize((object)pUVar4);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EDB")]
	[Address(RVA = "0x5C2BA30", Offset = "0x5C2AA30", VA = "0x5C2BA30")]
	public bool AllowMap()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$AllowMap): clean
		InGameSet pSVar1;
		InGameMiscSettings pSVar2;
		BoolSetting pSVar3;

		pSVar1 = SettingsManager.InGameCurrent;
		if (((pSVar1 != null) &&(pSVar2 = pSVar1.Misc, pSVar2 != null)) &&(pSVar3 = pSVar2.GlobalMinimapDisable, pSVar3 != null)) {
			if (pSVar3._value != false) {
				return false;
			}
			pSVar3 = pSVar2.RealismMode;
			if (pSVar3 != null) {
				return pSVar3._value == false;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EDC")]
	[Address(RVA = "0x5C1F610", Offset = "0x5C1E610", VA = "0x5C1F610")]
	public static bool InMenu()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$InMenu): 4 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseMenu pUVar3;
		List<BasePopup> __this;
		ActionHandler __this_00;
		bool bVar4;
		int iVar5;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		byte local_30;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar3 = UIManager.CurrentMenu;
		}
		else {
			pUVar3 = UIManager.CurrentMenu;
		}
		if (pUVar3 != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if (((pUVar3.klass._2).typeHierarchyDepth < bVar1) ||((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
		}
		bVar4 = MobileLayoutEditorOverlay.IsOpen;
		if ((!bVar4) &&(bVar4 = AottgGisketchUiHost.IsInGameOverlayActive, !bVar4 )) {
			if (pUVar3 == null) {
	label_05d1f812: ;
				throw new NullReferenceException();
			}
			iVar2 = *(int)&(*(ulong)((sbyte)pUVar3 + 0x260));
			iVar5 = Time.frameCount;
			if (iVar2 != iVar5) {
				__this = pUVar3._popups;
				if (__this == null) goto label_05d1f812;
				local_58 = __this.GetEnumerator();
				local_30 = (byte)&local_58;
				do {
					bVar4 = local_58.MoveNext();
					if (!bVar4) {
						local_58.Dispose();
						if ((*(ulong)((sbyte)pUVar3 + 0x98)) != null) {
							if (*(sbyte)&(((*(Il2CppClass*)((sbyte)pUVar3 + 0x98)))._1).element_class != false) {
								return true;
							}
							if ((*(ulong)((sbyte)pUVar3 + 0xa0)) != null) {
								if (*(sbyte)((long)(*(ulong)((sbyte)pUVar3 + 0xa0)) + 0x28) != false) {
									return true;
								}
								__this_00 = (ActionHandler)(*(ulong)((sbyte)pUVar3 + 0xa8));
								if (__this_00 != null) {
									bVar4 = __this_00.BlocksInput;
									return bVar4;
								}
							}
						}
						goto label_05d1f812;
					}
					if (local_58._current == null) {
						throw new NullReferenceException();
					}
				} while (*(sbyte)&local_58._current[9].klass == false);
				local_58.Dispose();
			}
		}
		return true;
	}

	[Token(Token = "0x6004EDD")]
	[Address(RVA = "0x5C2BAB0", Offset = "0x5C2AAB0", VA = "0x5C2BAB0")]
	public bool TryDismissGameplayMenu()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$TryDismissGameplayMenu): clean
		int iVar1;
		InputSettings pSVar2;
		GeneralInputSettings pSVar3;
		BasePopup pUVar4;
		KeybindSetting pSVar5;
		bool bVar6;
		int iVar7;
		Transform parent;
		BasePopup x;

		iVar1 = this._lastDismissedMenuFrame;
		iVar7 = Time.frameCount;
		if (iVar1 == iVar7) {
			return true;
		}
		bVar6 = AottgGisketchUiHost.IsInGameOverlayActive;
		if (bVar6) {
			return false;
		}
		parent = this.transform;
		x = InGameMenu.FindTopmostPopup(parent);
		bVar6 = ((Object)x == null);
		if (bVar6) {
			return false;
		}
		if (x == null) goto label_05d2bd1b;
		bVar6 = x.DismissFromEscape();
		if (!bVar6) {
			return false;
		}
		iVar7 = Time.frameCount;
		this._lastDismissedMenuFrame = iVar7;
		GisketchInputCapture.BlockThisFrame();
		this.SkipAHSSInput = true;
		pSVar2 = SettingsManager.InputSettings;
		if (pSVar2 == null) goto label_05d2bd1b;
		pSVar3 = pSVar2.General;
		pUVar4 = this._scoreboardPopup;
		bVar6 = ((Object)pUVar4 == null);
		if (bVar6) {
	label_05d2bc39: ;
			if ((pSVar3 == null) ||(pSVar5 = pSVar3.ToggleScoreboard, pSVar5 == null)) goto label_05d2bd1b;
			bVar6 = pSVar5.GetKey(false);
		}
		else {
			pUVar4 = this._scoreboardPopup;
			if (pUVar4 == null) goto label_05d2bd1b;
			if (pUVar4.IsActive == false) goto label_05d2bc39;
			bVar6 = false;
		}
		this.ScoreboardDismissedUntilRelease = bVar6;
		pUVar4 = this._mapPopup;
		bVar6 = ((Object)pUVar4 == null);
		if (!bVar6) {
			pUVar4 = this._mapPopup;
			if (pUVar4 == null) goto label_05d2bd1b;
			if (pUVar4.IsActive != false) {
				bVar6 = false;
				goto label_05d2bcc2;
			}
		}
		if ((pSVar3 != null) &&(pSVar5 = pSVar3.ToggleMap, pSVar5 != null)) {
			bVar6 = pSVar5.GetKey(false);
	label_05d2bcc2: ;
			this.MapDismissedUntilRelease = bVar6;
			if ((x.IsActive == false) &&(bVar6 = x.get_PlayEscapeSound())) {
				UIManager.PlaySound(1);
			}
			return true;
		}
	label_05d2bd1b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EDE")]
	[Address(RVA = "0x5C2BD20", Offset = "0x5C2AD20", VA = "0x5C2BD20")]
	private static BasePopup FindTopmostPopup(Transform parent)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$FindTopmostPopup): clean
		bool bVar1;
		uint index;
		int iVar2;
		GameObject __this;
		BasePopup x;
		Transform parent_00;
		BasePopup x_00;

		if ((parent == null) ||(__this = parent.gameObject, __this == null)) {
	label_05d2be89: ;
			throw new NullReferenceException();
		}
		x_00 = null;
		bVar1 = __this.activeInHierarchy;
		if (bVar1) {
			x = parent.GetComponent<BasePopup>();
			bVar1 = ((Object)x != null);
			if (bVar1) {
				if (x == null) goto label_05d2be89;
				if (x.IsActive == false) {
					return null;
				}
			}
			index = parent.childCount;
			do {
				index = index - 1;
				if ((int)index < 0) {
					bVar1 = ((Object)x != null);
					if (!bVar1) {
						return null;
					}
					if (x != null) {
						iVar2 = x.get_EscapeBehavior();
						if (iVar2 == 2) {
							x = null;
						}
						return x;
					}
					goto label_05d2be89;
				}
				parent_00 = parent.GetChild(index);
				x_00 = InGameMenu.FindTopmostPopup(parent_00);
				bVar1 = ((Object)x_00 != null);
			} while (!bVar1);
		}
		return x_00;
	}

	[Token(Token = "0x6004EDF")]
	[Address(RVA = "0x5C2BE90", Offset = "0x5C2AE90", VA = "0x5C2BE90")]
	public void SetPauseMenu(bool enabled)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetPauseMenu): 2 lines keep C-only constructs
		bool bVar1;
		Canvas __this_00;
		undefined7 in_register_00000031;

		if ((int)(MethodInfo)CONCAT71(in_register_00000031, enabled) == 0) {
			this.HideAllMenus(this._characterPopup);
			AottgGisketchUiHost.HideInGameOverlay(true);
			this.SkipAHSSInput = true;
		}
		else {
			bVar1 = this.IsPauseMenuActive();
			if (!bVar1) {
				this.HideAllMenus(this._characterPopup);
				AottgGisketchUiHost.ShowPause();
			}
		}
		__this_00 = this.GetComponent<Canvas>();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.enabled = true;
		return;
	}

	[Token(Token = "0x6004EE0")]
	[Address(RVA = "0x5C2C0C0", Offset = "0x5C2B0C0", VA = "0x5C2C0C0")]
	public void ToggleScoreboardMenu()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ToggleScoreboardMenu): clean
		BasePopup pUVar1;
		bool bVar2;
		MethodInfo method_00;
		Canvas __this_00;

		pUVar1 = this._scoreboardPopup;
		if (pUVar1 != null) {
			method_00 = (MethodInfo)pUVar1.gameObject;
			if (method_00 != null) {
				bVar2 = method_00.activeSelf;
				if (bVar2) {
					pUVar1 = this._scoreboardPopup;
					if (pUVar1 == null) goto label_05d2c186;
					pUVar1.Hide();
				}
				else {
					bVar2 = InGameMenu.InMenu();
					if (!bVar2) {
						this.HideAllMenus(null);
						pUVar1 = this._scoreboardPopup;
						if (pUVar1 == null) goto label_05d2c186;
						pUVar1.Show();
					}
				}
				__this_00 = this.GetComponent<Canvas>();
				if (__this_00 != null) {
					__this_00.enabled = true;
					return;
				}
			}
		}
	label_05d2c186: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EE1")]
	[Address(RVA = "0x5C2C190", Offset = "0x5C2B190", VA = "0x5C2C190")]
	public void SetScoreboardMenu(bool enabled, bool fromClick)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetScoreboardMenu): 2 lines keep C-only constructs
		BasePopup pUVar1;
		bool bVar2;
		undefined7 in_register_00000031;

		if ((int)CONCAT71(in_register_00000031, enabled) == 0) {
			pUVar1 = this._scoreboardPopup;
			if (pUVar1 != null) {
				pUVar1.Hide();
				if (fromClick) {
					this.SkipAHSSInput = true;
					return;
				}
				return;
			}
		}
		else {
			bVar2 = InGameMenu.InMenu();
			if (bVar2) {
				return;
			}
			this.HideAllMenus(null);
			pUVar1 = this._scoreboardPopup;
			if (pUVar1 != null) {
				pUVar1.Show();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EE2")]
	[Address(RVA = "0x5C2C210", Offset = "0x5C2B210", VA = "0x5C2C210")]
	public void ToggleMapMenu()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ToggleMapMenu): clean
		BasePopup pUVar1;
		bool bVar2;
		InGameMenu __this_00;
		Canvas __this_01;

		pUVar1 = this._mapPopup;
		if (pUVar1 != null) {
			__this_00 = (InGameMenu)pUVar1.gameObject;
			if (__this_00 != null) {
				bVar2 = __this_00.activeSelf;
				if (bVar2) {
					pUVar1 = this._mapPopup;
					if (pUVar1 == null) goto label_05d2c2df;
					pUVar1.Hide();
				}
				else {
					bVar2 = InGameMenu.InMenu();
					if (!bVar2) {
						bVar2 = __this_00.AllowMap();
						if (bVar2) {
							this.HideAllMenus(null);
							pUVar1 = this._mapPopup;
							if (pUVar1 == null) goto label_05d2c2df;
							pUVar1.Show();
						}
					}
				}
				__this_01 = this.GetComponent<Canvas>();
				if (__this_01 != null) {
					__this_01.enabled = true;
					return;
				}
			}
		}
	label_05d2c2df: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EE3")]
	[Address(RVA = "0x5C2C2F0", Offset = "0x5C2B2F0", VA = "0x5C2C2F0")]
	public void SetMapMenu(bool enabled, bool fromClick)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetMapMenu): 2 lines keep C-only constructs
		BasePopup pUVar1;
		bool bVar2;
		undefined7 in_register_00000031;
		MethodInfo method_00;
		InGameMenu __this_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000031, enabled);
		if ((int)method_00 == 0) {
			pUVar1 = this._mapPopup;
			if (pUVar1 == null) {
	label_05d2c36c: ;
				throw new NullReferenceException();
			}
			pUVar1.Hide();
			if (fromClick) {
				this.SkipAHSSInput = true;
			}
		}
		else {
			__this_00 = this;
			bVar2 = InGameMenu.InMenu();
			if (!bVar2) {
				bVar2 = __this_00.AllowMap();
				if (bVar2) {
					this.HideAllMenus(null);
					pUVar1 = this._mapPopup;
					if (pUVar1 != null) {
						pUVar1.Show();
						return;
					}
					goto label_05d2c36c;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004EE4")]
	[Address(RVA = "0x5C2C380", Offset = "0x5C2B380", VA = "0x5C2C380")]
	public void SetCharacterMenu(bool enabled)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetCharacterMenu): 2 lines keep C-only constructs
		BasePopup pUVar1;
		bool bVar2;
		Canvas __this_00;
		Object* method_01;

		if (Il2CppMethodInitialized_07547e07 == false) {
			method_01 = &typeof(Object);
			Il2CppMethodInitialized_07547e07 = true;
		}
		if (enabled) {
			bVar2 = InGameMenu.InMenu();
			if (!bVar2) {
				this.HideAllMenus(null);
				pUVar1 = this._characterPopup;
				if (pUVar1 == null) goto label_05d2c4c0;
				pUVar1.Show();
				InGameManager.UpdateRoundPlayerProperties();
			}
		}
		else {
			pUVar1 = this._characterPopup;
			if (pUVar1 == null) goto label_05d2c4c0;
			pUVar1.Hide();
			pUVar1 = this._characterChangePopup;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._characterChangePopup;
				if (pUVar1 == null) goto label_05d2c4c0;
				pUVar1.Hide();
			}
		}
		__this_00 = this.GetComponent<Canvas>();
		if (__this_00 != null) {
			__this_00.enabled = true;
			return;
		}
	label_05d2c4c0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EE5")]
	[Address(RVA = "0x5C2C4D0", Offset = "0x5C2B4D0", VA = "0x5C2C4D0")]
	public void ShowCharacterChangeMenu()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ShowCharacterChangeMenu): 7 lines keep C-only constructs
		int piVar1;
		BasePopup* targetAddress;
		uint uVar2;
		BasePopup pUVar3;
		List<BasePopup> __this_00;
		BasePopup[] pUVar4;
		bool bVar6;
		Transform parent;
		CharacterChangePopup pUVar7;
		Object* method_01;

		if (Il2CppMethodInitialized_07547e08 == false) {
			method_01 = &typeof(Object);
			Il2CppMethodInitialized_07547e08 = true;
		}
		bVar6 = InGameMenu.InMenu();
		if (bVar6) {
			return;
		}
		this.HideAllMenus(null);
		pUVar3 = this._characterChangePopup;
		targetAddress = &this._characterChangePopup;
		bVar6 = ((Object)pUVar3 == null);
		if (bVar6) {
			parent = this.transform;
			pUVar7 = ElementFactory.CreateDefaultPopup<CharacterChangePopup>(parent, false);
			this._characterChangePopup = (BasePopup)pUVar7;
			__this_00 = this._popups;
			if (__this_00 == null) goto label_05d2c60c;
			pUVar3 = this._characterChangePopup;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pUVar4 = __this_00._items;
			if (pUVar4 == null) goto label_05d2c60c;
			uVar2 = __this_00._size;
			if (uVar2 < (uint)pUVar4.Length) {
				__this_00._size = uVar2 + 1;
				pUVar4[(int)uVar2] = pUVar3;
			}
			else {
				__this_00.AddWithResize((object)pUVar3);
			}
		}
		pUVar3 = *targetAddress;
		if (pUVar3 != null) {
			pUVar3.Show();
			return;
		}
	label_05d2c60c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EE6")]
	[Address(RVA = "0x5C2C620", Offset = "0x5C2B620", VA = "0x5C2C620")]
	public void ShowCutsceneMenu(string icon, string title, string content, bool full)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ShowCutsceneMenu): clean
		CutsceneDialoguePanel __this_00;

		__this_00 = this._cutsceneDialoguePanel;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Show(icon, title, content, full);
		return;
	}

	[Token(Token = "0x6004EE7")]
	[Address(RVA = "0x5C2C640", Offset = "0x5C2B640", VA = "0x5C2C640")]
	public void HideCutsceneMenu()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$HideCutsceneMenu): clean
		CutsceneDialoguePanel pUVar1;

		pUVar1 = this._cutsceneDialoguePanel;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.Hide();
		return;
	}

	[Token(Token = "0x6004EE8")]
	[Address(RVA = "0x5C2BF30", Offset = "0x5C2AF30", VA = "0x5C2BF30")]
	public bool IsPauseMenuActive()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$IsPauseMenuActive): 2 lines keep C-only constructs
		List<BasePopup> __this_00;
		bool bVar1;
		bool bVar2;
		GameObject __this_01;
		int iVar3;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_28;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		bVar1 = AottgGisketchUiHost.IsInGameOverlayActive;
		bVar2 = true;
		if (!bVar1) {
			__this_00 = this._allPausePopups;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			local_48 = __this_00.GetEnumerator();
			local_28 = (byte)&local_48;
			do {
				bVar2 = local_48.MoveNext();
				if (!bVar2) {
					iVar3 = 6;
					goto label_05d2c021;
				}
				if ((Component)local_48._current == null) {
					throw new NullReferenceException();
				}
				__this_01 = local_48._current.gameObject;
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				bVar1 = __this_01.activeSelf;
			} while (!bVar1);
			iVar3 = 5;
	label_05d2c021: ;
			local_48.Dispose();
			bVar2 = iVar3 == 5 && bVar2;
		}
		return bVar2;
	}

	[Token(Token = "0x6004EE9")]
	[Address(RVA = "0x5C2C670", Offset = "0x5C2B670", VA = "0x5C2C670")]
	public void ShowBlood()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ShowBlood): clean
		InGameMenu.d__118<WaitAndShowBlood> __this_00;

		if (this._showingBlood != false) {
			return;
		}
		this._showingBlood = true;
		__this_00 = new InGameMenu.d__118<WaitAndShowBlood>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6004EEA")]
	[Address(RVA = "0x5C2C770", Offset = "0x5C2B770", VA = "0x5C2C770")]
	public void ShowSnapshot(Texture2D texture)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ShowSnapshot): clean
		SnapshotPopup pUVar1;

		pUVar1 = this._snapshotPopup;
		if (pUVar1 != null) {
			pUVar1.Load(texture);
			pUVar1 = this._snapshotPopup;
			if (pUVar1 != null) {
				pUVar1.Show();
				this._snapshotTimeLeft = 2.0;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EEB")]
	[Address(RVA = "0x5C2C7C0", Offset = "0x5C2B7C0", VA = "0x5C2C7C0")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ShowKillFeed): clean


		this.ShowKillFeed(killer, victim, score, weapon, -1, -1);
		return;
	}

	[Token(Token = "0x6004EEC")]
	[Address(RVA = "0x5C2C7E0", Offset = "0x5C2B7E0", VA = "0x5C2C7E0")]
	public void ShowKillFeed(string killer, string victim, int score, string weapon, int killerActorNumber, int victimActorNumber)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ShowKillFeed): clean
		float timeLeft;
		UISettings pSVar1;
		IntSetting pSVar2;
		KillFeedBigPopup __this_00;

		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.KillFeedCount, pSVar2 == null)) {
	label_05d2c8f4: ;
			throw new NullReferenceException();
		}
		if (0 < pSVar2._value) {
			__this_00 = this._killFeedBigPopup;
			if (__this_00 == null) goto label_05d2c8f4;
			timeLeft = __this_00.TimeLeft;
			if (0.0 < timeLeft) {
				this.ShowKillFeedPushSmall(__this_00.Killer, __this_00.Victim, __this_00.Score, __this_00.Weapon, timeLeft, __this_00.KillerActorNumber, __this_00.VictimActorNumber, 0);
				__this_00 = this._killFeedBigPopup;
				if (__this_00 == null) goto label_05d2c8f4;
			}
			__this_00.Show(killer, victim, score, weapon, killerActorNumber, victimActorNumber);
		}
		return;
	}

	[Token(Token = "0x6004EED")]
	[Address(RVA = "0x5C2C900", Offset = "0x5C2B900", VA = "0x5C2C900")]
	private void ShowKillFeedPushSmall(string killer, string victim, int score, string weapon, float timeLeft, int killerActorNumber, int victimActorNumber, int index)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ShowKillFeedPushSmall): clean
		float timeLeft_00;
		List<KillFeedSmallPopup> __this_00;
		KillFeedSmallPopup __this_01;

		__this_00 = this._killFeedSmallPopups;
		if (__this_00 == null) {
	label_05d2ca24: ;
			throw new NullReferenceException();
		}
		if (index < __this_00._size) {
			__this_01 = __this_00.get_Item(index);
			if (__this_01 == null) goto label_05d2ca24;
			timeLeft_00 = __this_01.TimeLeft;
			if (0.0 < timeLeft_00) {
				this.ShowKillFeedPushSmall(__this_01.Killer, __this_01.Victim, __this_01.Score, __this_01.Weapon, timeLeft_00, __this_01.KillerActorNumber, __this_01.VictimActorNumber, index + 1);
			}
			__this_01.ShowImmediate(killer, victim, score, weapon, timeLeft, killerActorNumber, victimActorNumber);
		}
		return;
	}

	[Token(Token = "0x6004EEE")]
	[Address(RVA = "0x5C2CA30", Offset = "0x5C2BA30", VA = "0x5C2CA30")]
	public void ShowKillScore(int score, bool force = false)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$ShowKillScore): clean
		CustomLogicEvaluator pCVar1;
		KillScorePopup __this_00;
		StylebarHandler __this_01;

		if (!force) {
			pCVar1 = CustomLogicManager.Evaluator;
			if (pCVar1 == null) goto label_05d2cad2;
			if (pCVar1.DefaultShowKillScore == false) {
				return;
			}
		}
		__this_00 = this._killScorePopup;
		if (__this_00 != null) {
			__this_00.Show(score);
			this._killScoreTimeLeft = 3.0;
			__this_01 = this.StylebarHandler;
			if (__this_01 != null) {
				__this_01.OnHit(score);
				return;
			}
		}
	label_05d2cad2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EEF")]
	[Address(RVA = "0x5C2CAE0", Offset = "0x5C2BAE0", VA = "0x5C2CAE0")]
	public int GetStylebarRank()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$GetStylebarRank): clean
		StylebarHandler pUVar1;
		bool bVar2;
		int iVar3;

		pUVar1 = this.StylebarHandler;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.StylebarHandler;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
		}
		return iVar3;
	}

	[Token(Token = "0x6004EF0")]
	[Address(RVA = "0x5C2CB60", Offset = "0x5C2BB60", VA = "0x5C2CB60")]
	public void SetLabelActive(string label, bool active)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetLabelActive): 2 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		object pIStack_20;

		pIStack_20 = null;
		__this_00 = (Dictionary<object, object>)this._labels;
		if (__this_00 == null) {
	label_05d2cbe4: ;
			throw new NullReferenceException();
		}
		bVar1 = __this_00.TryGetValue((object)label, ref pIStack_20);
		if (bVar1) {
			if ((pIStack_20 == null) || (pIStack_20[6].klass == null)) goto label_05d2cbe4;
			pIStack_20[6].klass.SetActive(active);
		}
		return;
	}

	[Token(Token = "0x6004EF1")]
	[Address(RVA = "0x5C2CBF0", Offset = "0x5C2BBF0", VA = "0x5C2CBF0")]
	public void SetLabelBackgroundColor(string label, Color color)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetLabelBackgroundColor): 13 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		Il2CppClass pIVar1;
		IntPtr pvVar2;
		bool bVar3;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		object pIStack_40;
		byte[] auStack_38 = new byte[16];
		byte[] auStack_28 = new byte[16];

		auStack_28._8_4_ = in_XMM1_Dc;
		auStack_28._0_8_ = color._8_8_;
		auStack_28._12_4_ = in_XMM1_Dd;
		auStack_38._8_4_ = in_XMM0_Dc;
		auStack_38._0_8_ = color._0_8_;
		auStack_38._12_4_ = in_XMM0_Dd;
		pIStack_40 = null;
		__this_00 = (Dictionary<object, object>)this._labels;
		if (__this_00 != null) {
			bVar3 = __this_00.TryGetValue((object)label, ref pIStack_40);
			if (!bVar3) {
				return;
			}
			if (pIStack_40 != null) {
				if (*(sbyte)&pIStack_40[5].monitor != false) {
					return;
				}
				pIVar1 = pIStack_40[5].klass;
				if (pIVar1 != null) {
					pvVar2 = (pIVar1._1).image;
					(**(code*)((long)pvVar2 + 0x2a8))(auStack_38._0_4_,auStack_28._0_4_,pIVar1,*(ulong)((long)pvVar2 + 0x2b0));
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EF2")]
	[Address(RVA = "0x5C2CCA0", Offset = "0x5C2BCA0", VA = "0x5C2CCA0")]
	public void SetLabelBackgroundColorAll(Color color)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetLabelBackgroundColorAll): 16 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		Il2CppClass pIVar1;
		IntPtr pvVar2;
		bool bVar3;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_01;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_68;
		byte puStack_40;
		byte[] auStack_38 = new byte[16];
		byte[] auStack_28 = new byte[16];

		auStack_28._8_4_ = in_XMM1_Dc;
		auStack_28._0_8_ = color._8_8_;
		auStack_28._12_4_ = in_XMM1_Dd;
		auStack_38._8_4_ = in_XMM0_Dc;
		auStack_38._0_8_ = color._0_8_;
		auStack_38._12_4_ = in_XMM0_Dd;
		SStack_68._dictionary = null;
		SStack_68._index = 0;
		SStack_68._version = 0;
		SStack_68._currentValue = null;
		__this_00 = (Dictionary<object, object>)this._labels;
		if (__this_00 != null) {
			__this_01 = __this_00.Values;
			if (__this_01 != null) {
				SStack_68 = __this_01.GetEnumerator();
				puStack_40 = (byte)&SStack_68;
				while(true) {
					do {
						bVar3 = SStack_68.MoveNext();
						if (!bVar3) {
							SStack_68.Dispose();
							return;
						}
						if (SStack_68._currentValue == null) goto label_05d2cdce;
					} while (*(sbyte)&SStack_68._currentValue[5].monitor != false);
					pIVar1 = SStack_68._currentValue[5].klass;
					if (pIVar1 == null) break;
					pvVar2 = (pIVar1._1).image;
					(**(code*)((long)pvVar2 + 0x2a8))(auStack_38._0_4_,auStack_28._0_4_,pIVar1,*(ulong)((long)pvVar2 + 0x2b0));
				}
	label_05d2cdce: ;
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EF3")]
	[Address(RVA = "0x5C2CE40", Offset = "0x5C2BE40", VA = "0x5C2CE40")]
	public void SetKDRPanelActive(bool active)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetKDRPanelActive): clean
		KDRPanel __this_00;
		GameObject __this_01;

		__this_00 = this.KDRPanel;
		if (__this_00 != null) {
			__this_01 = __this_00.gameObject;
			if (__this_01 != null) {
				__this_01.SetActive(active);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EF4")]
	[Address(RVA = "0x5C2CE70", Offset = "0x5C2BE70", VA = "0x5C2CE70")]
	public void SetMinimapActive(bool active)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetMinimapActive): clean
		GameObject __this_00;
		bool bVar1;

		bVar1 = this.AllowMap();
		if (!bVar1) {
			return;
		}
		__this_00 = this._minimapPanel;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetActive(active);
		return;
	}

	[Token(Token = "0x6004EF5")]
	[Address(RVA = "0x5C2CEB0", Offset = "0x5C2BEB0", VA = "0x5C2CEB0")]
	public void SetChatPanelActive(bool active)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetChatPanelActive): clean
		ChatPanel __this_00;
		GameObject __this_01;

		__this_00 = this.ChatPanel;
		if (__this_00 != null) {
			__this_01 = __this_00.gameObject;
			if (__this_01 != null) {
				__this_01.SetActive(active);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EF6")]
	[Address(RVA = "0x5C2CEE0", Offset = "0x5C2BEE0", VA = "0x5C2CEE0")]
	public void SetFeedPanelActive(bool active)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetFeedPanelActive): clean
		UISettings pSVar1;
		BoolSetting pSVar2;
		FeedPanel __this_00;
		GameObject __this_01;

		pSVar1 = SettingsManager.UISettings;
		if ((pSVar1 != null) &&(pSVar2 = pSVar1.FeedConsole, pSVar2 != null)) {
			if (pSVar2._value == false) {
				return;
			}
			__this_00 = this.FeedPanel;
			if (__this_00 != null) {
				__this_01 = __this_00.gameObject;
				if (__this_01 != null) {
					__this_01.SetActive(active);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EF7")]
	[Address(RVA = "0x5C2CF80", Offset = "0x5C2BF80", VA = "0x5C2CF80")]
	public void SetBottomHUDActive(bool active)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetBottomHUDActive): clean
		HUDBottomHandler pUVar1;
		Object x;
		GameObject __this_00;
		bool bVar2;

		pUVar1 = this.HUDBottomHandler;
		if (pUVar1 != null) {
			x = (Object)pUVar1._hudBottom;
			bVar2 = (x != null);
			if (!bVar2) {
				return;
			}
			__this_00 = pUVar1._hudBottom;
			if (__this_00 != null) {
				__this_00.SetActive(active);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EF8")]
	[Address(RVA = "0x5C2D010", Offset = "0x5C2C010", VA = "0x5C2D010")]
	public void SetLabel(string label, string message, float time)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetLabel): clean
		Dictionary<string, bool> __this_00;
		Dictionary<string, float> __this_01;

		this.SetLabelText(label, message);
		__this_00 = this._labelHasTimeLeft;
		if (__this_00 != null) {
			__this_00.set_Item((object)label, (bool)(-(time != 0.0) & 1));
			__this_01 = this._labelTimeLeft;
			if (__this_01 != null) {
				__this_01.set_Item((object)label, time);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EF9")]
	[Address(RVA = "0x5C2D0D0", Offset = "0x5C2C0D0", VA = "0x5C2D0D0")]
	private void SetLabelText(string label, string message)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetLabelText): 5 lines keep C-only constructs
		bool bVar1;
		InGameLabel __this_00;
		String* targetAddress;

		bVar1 = (label == "TopCenter");
		if (bVar1) {
			__this_00 = this._topCenterLabel;
		}
		else {
			bVar1 = (label == "TopLeft");
			if (bVar1) {
				this._topLeftText = message;
				targetAddress = &this._topLeftText;
	label_05d2d1b5: ;
				return;
			}
			bVar1 = (label == "TopRight");
			if (bVar1) {
				__this_00 = this._topRightLabel;
			}
			else {
				bVar1 = (label == "MiddleCenter");
				if (bVar1) {
					this._middleCenterText = message;
					targetAddress = &this._middleCenterText;
					goto label_05d2d1b5;
				}
				bVar1 = (label == "MiddleLeft");
				if (bVar1) {
					__this_00 = this._middleLeftLabel;
				}
				else {
					bVar1 = (label == "MiddleRight");
					if (bVar1) {
						__this_00 = this._middleRightLabel;
					}
					else {
						bVar1 = (label == "BottomLeft");
						if (!bVar1) {
							bVar1 = (label == "BottomRight");
							if (bVar1) {
								this._bottomRightText = message;
								targetAddress = &this._bottomRightText;
							}
							else {
								bVar1 = (label == "BottomCenter");
								if (!bVar1) {
									return;
								}
								this._bottomCenterText = message;
								targetAddress = &this._bottomCenterText;
							}
							goto label_05d2d1b5;
						}
						__this_00 = this._bottomLeftLabel;
					}
				}
			}
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Text = message;
		return;
	}

	[Token(Token = "0x6004EFA")]
	[Address(RVA = "0x5C2C700", Offset = "0x5C2B700", VA = "0x5C2C700")]
	[IteratorStateMachine(typeof(_003CWaitAndShowBlood_003Ed__118))]
	private IEnumerator WaitAndShowBlood()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$WaitAndShowBlood): clean
		InGameMenu.d__118<WaitAndShowBlood> __this_00;

		__this_00 = new InGameMenu.d__118<WaitAndShowBlood>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004EFB")]
	[Address(RVA = "0x5C2D300", Offset = "0x5C2C300", VA = "0x5C2D300")]
	private void Update()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$Update): 43 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		int iVar4;
		uint uVar5;
		InGameManager pGVar6;
		GlobalPauseGamePopup pUVar7;
		List<string> pSVar8;
		Dictionary<string, bool> pSVar9;
		Dictionary<string, float> pSVar10;
		String[] pSVar11;
		InGameMenu.HudText pUVar12;
		BaseCamera pCVar13;
		BaseCamera pCVar14;
		IntPtr pvVar15;
		long lVar16;
		Player player;
		InGameCharacterSettings pSVar17;
		IntSetting pSVar18;
		BaseCharacter pCVar19;
		InputSettings pSVar20;
		GeneralInputSettings pSVar21;
		KeybindSetting pSVar22;
		Il2CppClass arg0;
		InGameSet pSVar23;
		BoolSetting pSVar24;
		KillFeedBigPopup pUVar25;
		KillScorePopup pUVar26;
		List<KillFeedSmallPopup> __this_00;
		SnapshotPopup pUVar27;
		bool bVar28;
		int iVar29;
		object pIVar30;
		String pSVar31;
		Player[] pPVar32;
		ulong uVar33;
		String pSVar34;
		String pSVar35;
		MethodInfo method_00;
		MethodInfo pMVar36;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_07;
		MethodInfo extraout_RDX_08;
		MethodInfo extraout_RDX_09;
		MethodInfo extraout_RDX_10;
		int iVar37;
		InGameLabel pUVar38;
		ulong uVar39;
		float fVar40;
		float fVar41;
		byte[] auStack_c0 = new byte[16];
		String pSStack_b0;
		object pIStack_a8;
		int iStack_a0;
		uint uStack_9c;
		byte[] auStack_98 = new byte[8];
		String pSStack_88;
		byte[] auStack_78 = new byte[8];
		String pSStack_68;
		object pIStack_60;
		ulong uStack_58;
		System_Collections_Generic_List_Enumerator_object__o SStack_48;

		pSStack_68 = null;
		pIStack_60 = null;
		auStack_78 = (byte[])0x0;
		uStack_58._0_4_ = 0;
		uStack_58._4_4_ = 0;
		auStack_98 = (byte[])0x0;
		pSStack_88 = null;
		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		pGVar6 = this._gameManager;
		bVar28 = ((Object)pGVar6 == null);
		if (bVar28) {
			return;
		}
		pGVar6 = this._gameManager;
		if (pGVar6 == null) goto label_05d2e2dd;
		pUVar7 = this._globalPauseGamePopup;
		if (pGVar6.GlobalPause == false) {
			if (pUVar7 == null) goto label_05d2e2dd;
			pUVar7.Hide();
			pSVar8 = this.labelsToDeactivate;
		}
		else {
			if (pUVar7 == null) goto label_05d2e2dd;
			pMVar36 = (pUVar7.klass.vtable)._21_Show.method;
			pUVar7.Show();
			pGVar6 = this._gameManager;
			if ((pGVar6 == null) ||(pUVar7 = this._globalPauseGamePopup, pUVar7 == null)) goto label_05d2e2dd;
			pUVar7.SetTimeLeft(pGVar6.PauseTimeLeft);
			pSVar8 = this.labelsToDeactivate;
		}
		if (pSVar8 == null) goto label_05d2e2dd;
		piVar1 = &pSVar8._version;
		*piVar1 = *piVar1 + 1;
		iVar29 = pSVar8._size;
		pSVar8._size = 0;
		if (0 < iVar29) {
			Array.Clear((Array)pSVar8._items, 0, iVar29);
		}
		pSVar9 = this._labelHasTimeLeft;
		if (pSVar9 == null) goto label_05d2e2dd;
		auStack_c0.GetEnumerator((Dictionary<TKey, TValue>)pSVar9) ;
		uStack_58._0_4_ = iStack_a0;
		uStack_58._4_4_ = uStack_9c;
		pSStack_68 = pSStack_b0;
		pIStack_60 = pIStack_a8;
		auStack_78 = (byte[])auStack_c0._0_8_;
		auStack_c0._0_8_ = null;
		auStack_c0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o)auStack_78;
	label_05d2d685: ;
		bVar28 = auStack_78.MoveNext();
		pSVar31 = pSStack_68;
		if (bVar28) {
			if ((char)pIStack_60 != false) {
				pSVar10 = this._labelTimeLeft;
				if (pSVar10 == null) {
					throw new NullReferenceException();
				}
				fVar40 = pSVar10.get_Item((object)pSStack_68);
				fVar41 = Time.deltaTime;
				pSVar10.set_Item((object)pSVar31, fVar40 - fVar41) ;
				pSVar10 = this._labelTimeLeft;
				if (pSVar10 == null) {
					throw new NullReferenceException();
				}
				fVar40 = pSVar10.get_Item((object)pSVar31);
				pMVar36 = MethodInfo_System_Collections_Generic_List_string_Add;
				if (fVar40 <= 0.0) {
					pSVar8 = this.labelsToDeactivate;
					if (pSVar8 != null) {
						piVar1 = &pSVar8._version;
						*piVar1 = *piVar1 + 1;
						pSVar11 = pSVar8._items;
						if (pSVar11 != null) {
							uVar3 = pSVar8._size;
							if (uVar3 < (uint)pSVar11.Length) {
								pMVar36 = (MethodInfo)(ulong)(uVar3 + 1);
								pSVar8._size = uVar3 + 1;
								pSVar11[(int)uVar3] = pSVar31;
							}
							else {
								pSVar8.AddWithResize((object)pSVar31);
							}
							this.SetLabelText(pSVar31, "");
							goto label_05d2d685;
						}
					}
					throw new NullReferenceException();
				}
			}
			goto label_05d2d685;
		}
		auStack_78.Dispose();
		pSVar8 = this.labelsToDeactivate;
		if (pSVar8 == null) goto label_05d2e2dd;
		auStack_c0.GetEnumerator((List<object>)pSVar8);
		pSStack_88 = pSStack_b0;
		auStack_98 = (byte[])auStack_c0._0_8_;
		auStack_c0._0_8_ = null;
		auStack_c0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o)auStack_98;
		while (bVar28 = auStack_98.MoveNext()) {
			pSVar9 = this._labelHasTimeLeft;
			if (pSVar9 == null) {
				throw new NullReferenceException();
			}
			pSVar9.set_Item((object)pSStack_88, false);
		}
		auStack_98.Dispose();
		pGVar6 = this._gameManager;
		if (pGVar6 == null) goto label_05d2e2dd;
		pUVar38 = this._middleCenterLabel;
		if (pGVar6.IsEnding == false) {
			if (pUVar38 == null) goto label_05d2e2dd;
			pSVar31 = this._middleCenterText;
			pMVar36 = extraout_RDX;
		}
		else {
			pUVar12 = this._hudText;
			if (pUVar12 == null) goto label_05d2e2dd;
			pSVar34 = this._middleCenterText;
			pSVar31 = pUVar12.RestartingIn;
			auStack_c0._0_4_ = (int)pGVar6.EndTimeLeft;
			pIVar30 = (object)auStack_c0;
			pSVar31 = String.Format(pSVar31, pIVar30);
			if (this._legacyLabels == false) {
				bVar28 = String.IsNullOrEmpty(pSVar34);
				pMVar36 = extraout_RDX_01;
				if (!bVar28) {
					bVar28 = String.IsNullOrEmpty(pSVar31);
					if (!bVar28) goto label_05d2d8bc;
					pMVar36 = extraout_RDX_02;
					pSVar31 = pSVar34;
				}
			}
			else {
	label_05d2d8bc: ;
				pSVar31 = String.Concat(pSVar34, "\n", pSVar31);
				pMVar36 = extraout_RDX_00;
			}
			if (pUVar38 == null) goto label_05d2e2dd;
		}
		pUVar38.Text = pSVar31;
		pCVar13 = SceneLoader.CurrentCamera;
		if (pCVar13 != null) {
			bVar2 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((pCVar13.klass._2).typeHierarchyDepth < bVar2) ||((pCVar13.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(InGameCamera))) {
				throw new InvalidCastException();
			}
		}
		fVar40 = this._spectateUpdateTimeLeft;
		fVar41 = Time.deltaTime;
		fVar40 = fVar40 - fVar41;
		this._spectateUpdateTimeLeft = fVar40;
		if (fVar40 <= 0.0) {
			this._spectateUpdateTimeLeft = 1.0;
			if (pCVar13 == null) goto label_05d2e2dd;
			pCVar14 = (*(ulong)((sbyte)pCVar13 + 0x38));
			iVar37 = 0;
			bVar28 = ((Object)pCVar14 != null);
			if (bVar28) {
				if (((((*(ulong)((sbyte)pCVar13 + 0x38)) == null) ||(pvVar15 = (((*(Il2CppClass*)((sbyte)pCVar13 + 0x38)))._1), pvVar15 == null)) ||(lVar16 = *(long)((long)pvVar15 + 0x20), lVar16 == 0)) ||(lVar16 = *(long)(lVar16 + 0x80), lVar16 == 0)) goto label_05d2e2dd;
				iVar4 = *(int)(lVar16 + 0x18);
				iVar37 = 0;
				pPVar32 = PhotonNetwork.PlayerList;
				if (pPVar32 == null) goto label_05d2e2dd;
				if (0 < (int)pPVar32.Length) {
					uVar33 = pPVar32.Length & 0xffffffff;
					uVar39 = 0;
					iVar37 = 0;
					do {
						if (uVar33 <= uVar39) {
							throw new IndexOutOfRangeException();
						}
						player = pPVar32[uVar39];
						iVar29 = PhotonExtensions.GetIntProperty(player, PlayerProperty.SpectateID, -1);
						iVar37 = iVar37 + (uint)(iVar29 == iVar4);
						uVar39 = uVar39 + 1;
						uVar3 = (uint)pPVar32.Length;
						uVar33 = (ulong)uVar3;
					} while ((long)uVar39 < (long)(int)uVar3);
				}
			}
			this._spectateCount = iVar37;
		}
		pSVar17 = SettingsManager.InGameCharacterSettings;
		if ((pSVar17 == null) ||(pSVar18 = pSVar17.ChooseStatus, pSVar18 == null)) goto label_05d2e2dd;
		if (pSVar18._value == 1) {
	label_05d2db99: ;
			pSVar20 = SettingsManager.InputSettings;
			if ((pSVar20 == null) ||(pSVar18 = pSVar17.ChooseStatus, pSVar18 == null)) goto label_05d2e2dd;
			if (pSVar18._value == 0) {
				if (pCVar13 == null) goto label_05d2e2dd;
				pCVar14 = (*(ulong)((sbyte)pCVar13 + 0x38));
				uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				pSVar31 = "";
			}
			else {
				pUVar12 = this._hudText;
				if (((pUVar12 == null) ||(pSVar21 = pSVar20.General, pSVar21 == null)) ||(pSVar22 = pSVar21.SpectatePreviousPlayer, pSVar22 == null)) goto label_05d2e2dd;
				pSVar31 = pUVar12.SpectatePrevious;
				pSVar34 = pSVar22.ToString();
				pSVar34 = ChatManager.GetColorString(pSVar34, 3, false);
				pSVar31 = String.Format(pSVar31, (object)pSVar34);
				pSVar31 = String.Concat(pSVar31, ", ");
				pUVar12 = this._hudText;
				if ((pUVar12 == null) ||(pSVar22 = pSVar21.SpectateNextPlayer, pSVar22 == null)) goto label_05d2e2dd;
				pSVar34 = pUVar12.SpectateNext;
				pSVar35 = pSVar22.ToString();
				pSVar35 = ChatManager.GetColorString(pSVar35, 3, false);
				pSVar34 = String.Format(pSVar34, (object)pSVar35);
				pSVar31 = String.Concat(pSVar31, pSVar34, ", ");
				pUVar12 = this._hudText;
				if ((pUVar12 == null) ||(pSVar22 = pSVar21.ChangeCharacter, pSVar22 == null)) goto label_05d2e2dd;
				pSVar34 = pUVar12.SpectateJoin;
				pSVar35 = pSVar22.ToString();
				pSVar35 = ChatManager.GetColorString(pSVar35, 3, false);
				pSVar34 = String.Format(pSVar34, (object)pSVar35);
				pSVar31 = String.Concat(pSVar31, pSVar34, ", ");
				if ((pCVar13 == null) || ((*(ulong)((sbyte)pCVar13 + 0x40)) == null)) goto label_05d2e2dd;
				iVar29 = ((*(ulong)((sbyte)pCVar13 + 0x40))).Current();
				auStack_c0._0_4_ = iVar29;
				pIVar30 = (object)auStack_c0;
				pSVar34 = String.Format("{0}: ", pIVar30);
				pSVar22 = pSVar21.ChangeCamera;
				if (pSVar22 == null) goto label_05d2e2dd;
				pSVar35 = pSVar22.ToString();
				pSVar35 = ChatManager.GetColorString(pSVar35, 3, false);
				pSVar31 = String.Concat(pSVar31, pSVar34, pSVar35);
				pCVar14 = (*(ulong)((sbyte)pCVar13 + 0x38));
				uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			if (uVar5 == 0) {
			}
			bVar28 = ((Object)pCVar14 != null);
			if (bVar28) {
				pGVar6 = this._gameManager;
				if (pGVar6 == null) goto label_05d2e2dd;
				pCVar14 = (*(ulong)((sbyte)pCVar13 + 0x38));
				pCVar19 = pGVar6.CurrentCharacter;
				bVar28 = ((Object)pCVar14 != (Object)pCVar19);
				if (!bVar28) goto label_05d2de91;
				pUVar12 = this._hudText;
				if ((pUVar12 == null) || ((*(ulong)((sbyte)pCVar13 + 0x38)) == null)) goto label_05d2e2dd;
				pSVar34 = pUVar12.SpectatingPlayer;
				arg0 = (((*(Il2CppClass*)((sbyte)pCVar13 + 0x38)))._1).castClass;
				auStack_c0._0_4_ = this._spectateCount;
				pIVar30 = (object)auStack_c0;
				pSVar34 = String.Format(pSVar34, (object)arg0, pIVar30);
			}
			else {
	label_05d2de91: ;
				pUVar12 = this._hudText;
				if (pUVar12 == null) goto label_05d2e2dd;
				pSVar34 = pUVar12.Spectating;
			}
			method_00 = (MethodInfo)String.Concat(pSVar34, " ", pSVar31);
			pUVar38 = this._bottomCenterLabel;
			pMVar36 = (MethodInfo)this._bottomCenterText;
			if (this._legacyLabels == false) {
				bVar28 = String.IsNullOrEmpty((String)pMVar36);
				if (!bVar28) {
					bVar28 = String.IsNullOrEmpty((String)method_00);
					if (!bVar28) goto label_05d2def0;
					method_00 = pMVar36;
				}
			}
			else {
	label_05d2def0: ;
				method_00 = (MethodInfo)String.Concat((String)pMVar36, "\n", (String)method_00);
			}
			if (pUVar38 == null) goto label_05d2e2dd;
		}
		else {
			pGVar6 = this._gameManager;
			if (pGVar6 == null) goto label_05d2e2dd;
			pCVar19 = pGVar6.CurrentCharacter;
			bVar28 = ((Object)pCVar19 == null);
			if (bVar28) goto label_05d2db99;
			pGVar6 = this._gameManager;
			if ((pGVar6 == null) ||(pCVar19 = pGVar6.CurrentCharacter, pCVar19 == null)) goto label_05d2e2dd;
			if (pCVar19.Dead != false) goto label_05d2db99;
			pUVar38 = this._bottomCenterLabel;
			if (pUVar38 == null) goto label_05d2e2dd;
			method_00 = (MethodInfo)this._bottomCenterText;
		}
		pUVar38.Text = (String)method_00;
		pSVar31 = this.GetKeybindStrings();
		pSVar23 = SettingsManager.InGameCurrent;
		if ((pSVar23 == null) ||(pSVar24 = pSVar23.Sandbox, pSVar24 == null)) goto label_05d2e2dd;
		if (pSVar24._value == false) goto label_05d2e01f;
		pUVar12 = this._hudText;
		if (pUVar12 == null) goto label_05d2e2dd;
		pSVar34 = pUVar12.Sandbox;
		if (this._legacyLabels == false) {
			bVar28 = String.IsNullOrEmpty(pSVar34);
			if (!bVar28) {
				bVar28 = String.IsNullOrEmpty(pSVar31);
				if (!bVar28) goto label_05d2dfe4;
				pSVar31 = pSVar34;
			}
		}
		else {
	label_05d2dfe4: ;
			pSVar31 = String.Concat(pSVar34, "\n", pSVar31);
		}
	label_05d2e01f: ;
		pUVar38 = this._bottomRightLabel;
		bVar28 = String.IsNullOrEmpty(pSVar31);
		pSVar34 = this._bottomRightText;
		pMVar36 = extraout_RDX_07;
		if (!bVar28) {
			if (this._legacyLabels == false) {
				bVar28 = String.IsNullOrEmpty(pSVar34);
				if (bVar28) {
					pMVar36 = extraout_RDX_09;
					pSVar34 = pSVar31;
				}
				else {
					bVar28 = String.IsNullOrEmpty(pSVar31);
					pMVar36 = extraout_RDX_10;
					if (!bVar28) goto label_05d2e061;
				}
			}
			else {
	label_05d2e061: ;
				pSVar34 = String.Concat(pSVar34, "\n", pSVar31);
				pMVar36 = extraout_RDX_08;
			}
		}
		if (pUVar38 != null) {
			pUVar38.Text = pSVar34;
			pUVar38 = this._topLeftLabel;
			if (pUVar38 != null) {
				pUVar38.Text = this._topLeftText;
				pUVar25 = this._killFeedBigPopup;
				if (pUVar25 != null) {
					fVar40 = pUVar25.TimeLeft;
					fVar41 = Time.deltaTime;
					pUVar25.TimeLeft = fVar40 - fVar41;
					pUVar25 = this._killFeedBigPopup;
					if (pUVar25 != null) {
						if ((pUVar25.IsActive != false) && (pUVar25.TimeLeft <= 0.0)) {
							pUVar25.Hide();
						}
						fVar40 = this._killScoreTimeLeft;
						fVar41 = Time.deltaTime;
						fVar40 = fVar40 - fVar41;
						this._killScoreTimeLeft = fVar40;
						if (fVar40 <= 0.0) {
							pUVar26 = this._killScorePopup;
							if (pUVar26 == null) goto label_05d2e2dd;
							pUVar26.Hide();
						}
						__this_00 = this._killFeedSmallPopups;
						if (__this_00 != null) {
							SStack_48 = __this_00.GetEnumerator();
							auStack_c0._0_8_ = null;
							auStack_c0._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o)&SStack_48;
							while(true) {
								bVar28 = SStack_48.MoveNext();
								pIVar30 = SStack_48._current;
								if (!bVar28) break;
								if (SStack_48._current == null) {
									throw new NullReferenceException();
								}
								fVar40 = *(float)&SStack_48._current[0xd].monitor;
								fVar41 = Time.deltaTime;
								fVar40 = fVar40 - fVar41;
								*(float)&pIVar30[0xd].monitor = fVar40;
								if ((*(sbyte)&pIVar30[9].klass != false) && (fVar40 <= 0.0)) {
									(*pIVar30.klass.vtable[0x16].methodPtr)(pIVar30,pIVar30.klass.vtable[0x16].method);
								}
							}
							SStack_48.Dispose();
							fVar40 = this._snapshotTimeLeft;
							fVar41 = Time.deltaTime;
							fVar40 = fVar40 - fVar41;
							this._snapshotTimeLeft = fVar40;
							pUVar27 = this._snapshotPopup;
							if (pUVar27 != null) {
								if ((pUVar27.IsActive != false) && (fVar40 <= 0.0)) {
									pUVar27.Hide();
								}
								return;
							}
						}
					}
				}
			}
		}
	label_05d2e2dd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EFC")]
	[Address(RVA = "0x5C2E450", Offset = "0x5C2D450", VA = "0x5C2E450")]
	private string CombineLines(string first, string second)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$CombineLines): clean
		bool bVar1;
		String pSVar2;

		if (this._legacyLabels != false) {
	label_05d2e483: ;
			pSVar2 = String.Concat(first, "\n", second);
			return pSVar2;
		}
		bVar1 = String.IsNullOrEmpty(first);
		if (!bVar1) {
			bVar1 = String.IsNullOrEmpty(second);
			if (!bVar1) goto label_05d2e483;
			second = first;
		}
		return second;
	}

	[Token(Token = "0x6004EFD")]
	[Address(RVA = "0x5C2E4D0", Offset = "0x5C2D4D0", VA = "0x5C2E4D0")]
	private string GetKeybindStrings()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$GetKeybindStrings): 4 lines keep C-only constructs
		byte bVar1;
		BaseCamera pCVar2;
		UISettings pSVar3;
		BoolSetting pSVar4;
		BaseGameManager pGVar5;
		Object x;
		long plVar6;
		Rigidbody __this_00;
		InGameMenu.HudText pUVar7;
		IntSetting pSVar8;
		BaseComponentCache pUVar9;
		Transform pUVar10;
		BaseCamera pCVar11;
		IntPtr pvVar12;
		bool bVar13;
		int iVar14;
		String pSVar15;
		String pSVar16;
		String arg1;
		String arg2;
		object arg0;
		Vector3 local_50;
		int local_44;
		String local_40;
		InGameMenu local_38;

		pSVar16 = "";
		local_50 = (Vector3)ZEXT812(0);
		pCVar2 = SceneLoader.CurrentCamera;
		if (pCVar2 != null) {
			bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
				throw new InvalidCastException();
			}
		}
		pSVar3 = SettingsManager.UISettings;
		if ((pSVar3 != null) &&(pSVar4 = pSVar3.ShowInterpolation, pSVar4 != null)) {
			if (pSVar4._value != false) {
				pGVar5 = SceneLoader.CurrentGameManager;
				if (pGVar5 == null) goto label_05d2e9eb;
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if (((pGVar5.klass._2).typeHierarchyDepth < bVar1) ||((pGVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
					throw new InvalidCastException();
				}
				x = (*(ulong)((sbyte)pGVar5 + 0x80));
				bVar13 = (x != null);
				if ((bVar13) && (plVar6 = (*(ulong)((sbyte)pGVar5 + 0x80)), plVar6 != null)) {
					bVar1 = (typeof(Human)._2).typeHierarchyDepth;
					if ((bVar1 <= *(byte)(*plVar6 + 0x130)) &&(*(Human*)(*(long)(*plVar6 + 200) + -8 + (ulong)bVar1 * 8) == typeof(Human))) {
						if ((plVar6[0x10] == 0) ||(__this_00 = *(Rigidbody*)(plVar6[0x10] + 0x18), __this_00 == null)) goto label_05d2e9eb;
						iVar14 = __this_00.interpolation;
						pUVar7 = this._hudText;
						if (iVar14 == 1) {
							if (pUVar7 == null) goto label_05d2e9eb;
							pSVar16 = pUVar7.Interpolation;
							pSVar15 = pUVar7.On;
						}
						else {
							if (pUVar7 == null) goto label_05d2e9eb;
							pSVar16 = pUVar7.Interpolation;
							pSVar15 = pUVar7.Off;
						}
						pSVar15 = ChatManager.GetColorString(pSVar15, 3, false);
						pSVar16 = String.Format(pSVar16, (object)pSVar15);
					}
				}
			}
			pSVar3 = SettingsManager.UISettings;
			if ((pSVar3 != null) &&(pSVar8 = pSVar3.Coordinates, pSVar8 != null)) {
				if (pSVar8._value == 2) {
					if (((pCVar2 == null) ||(pUVar9 = pCVar2.Cache, pUVar9 == null)) ||(pUVar10 = pUVar9.Transform, pUVar10 == null)) goto label_05d2e9eb;
					local_50 = pUVar10.position;
					pCVar11 = (*(ulong)((sbyte)pCVar2 + 0x38));
					bVar13 = ((Object)pCVar11 != null);
					if (bVar13) {
						if ((((*(ulong)((sbyte)pCVar2 + 0x38)) == null) ||(pvVar12 = (((*(Il2CppClass*)((sbyte)pCVar2 + 0x38)))._1), pvVar12 == null)) ||(pUVar10 = *(Transform*)((long)pvVar12 + 0x10), pUVar10 == null)) goto label_05d2e9eb;
						local_50 = pUVar10.position;
					}
					pUVar7 = this._hudText;
					local_40 = pSVar16;
					local_38 = this;
					if (pUVar7 == null) goto label_05d2e9eb;
					pSVar16 = pUVar7.Position;
					pSVar15 = local_50.ToString("F0");
					arg1 = local_50.y.ToString("F0");
					arg2 = local_50.z.ToString("F0");
					pSVar15 = String.Format(pSVar16, (object)pSVar15, (object)arg1, (object)arg2);
					pSVar16 = local_40;
					bVar13 = (local_40 != "");
					if (bVar13) {
						pSVar15 = String.Concat(pSVar15, "\n");
					}
					pSVar16 = String.Concat(pSVar15, pSVar16);
					this = local_38;
				}
				else if (pCVar2 == null) goto label_05d2e9eb;
				pCVar11 = (*(ulong)((sbyte)pCVar2 + 0x38));
				bVar13 = ((Object)pCVar11 != null);
				if ((bVar13) && (0 < this._spectateCount)) {
					if ((*(ulong)((sbyte)pCVar2 + 0x38)) == null) goto label_05d2e9eb;
					bVar13 = ((*(ulong)((sbyte)pCVar2 + 0x38))).IsMainCharacter();
					if (bVar13) {
						pUVar7 = this._hudText;
						if (pUVar7 == null) goto label_05d2e9eb;
						pSVar15 = pUVar7.SpectatorCount;
						local_44 = this._spectateCount;
						arg0 = (object)local_44;
						pSVar15 = String.Format(pSVar15, arg0);
						bVar13 = (pSVar16 != "");
						if (bVar13) {
							pSVar15 = String.Concat(pSVar15, "\n");
						}
						pSVar16 = String.Concat(pSVar15, pSVar16);
					}
				}
				return pSVar16;
			}
		}
	label_05d2e9eb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EFE")]
	[Address(RVA = "0x5C2EA00", Offset = "0x5C2DA00", VA = "0x5C2EA00")]
	private string GetPlayerListEntry(Player player)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$GetPlayerListEntry): 5 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		int id;
		uint uVar3;
		InGameSet pSVar4;
		InGameMiscSettings pSVar5;
		IntSetting pSVar6;
		bool bVar7;
		bool includeMC;
		String pSVar8;
		String pSVar9;
		String pSVar10;
		String pSVar11;
		String* ppSVar12;
		String[] pSVar13;
		CustomLogicEvaluator pCVar14;
		object pIVar15;
		ulong uVar16;

		pSVar8 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Status, "");
		bVar7 = (pSVar8 != PlayerStatus.Alive);
		if (bVar7) {
			uVar1 = (typeof(PlayerProperty)._2).cctor_finished_or_no_cctor;
			pSVar8 = " <color=red>*dead*</color> ";
		}
		else {
			uVar1 = (typeof(PlayerProperty)._2).cctor_finished_or_no_cctor;
			pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (uVar1 == 0) {
		}
		pSVar9 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Team, "");
		pSVar10 = TeamInfo.GetTeamColor(pSVar9);
		pSVar4 = SettingsManager.InGameCurrent;
		if (((pSVar4 == null) ||(pSVar5 = pSVar4.Misc, pSVar5 == null)) ||(pSVar6 = pSVar5.PVP, pSVar6 == null)) goto label_05d2f3de;
		iVar2 = pSVar6._value;
		pSVar11 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Character, "");
		bVar7 = (pSVar9 == TeamInfo.None);
		if (bVar7) {
			pSVar9 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		uVar1 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
		if (iVar2 == 2) {
			if (uVar1 == 0) {
			}
			bVar7 = (pSVar9 == TeamInfo.Blue);
			if (bVar7) {
				ppSVar12 = &" B ";
			}
			else {
				bVar7 = (pSVar9 == TeamInfo.Red);
				if (bVar7) {
					ppSVar12 = &" R ";
				}
				else {
	label_05d2ee47: ;
					bVar7 = (pSVar9 == TeamInfo.Titan);
					if (bVar7) {
						ppSVar12 = &" T ";
					}
					else {
						bVar7 = (pSVar9 == TeamInfo.Human);
						if (bVar7) {
							ppSVar12 = &" H ";
						}
						else {
							ppSVar12 = *(String**)(g_data_07556758 + 0xb8);
						}
					}
				}
			}
			pSVar9 = *ppSVar12;
		}
		else {
			if (uVar1 == 0) {
			}
			bVar7 = (pSVar9 == TeamInfo.Blue);
			if (!bVar7) {
				bVar7 = (pSVar9 == TeamInfo.Red);
				if (!bVar7) goto label_05d2ee47;
			}
			bVar7 = (pSVar11 == PlayerCharacter.Human);
			if (bVar7) {
	label_05d2edd6: ;
				pSVar11 = " H ";
				pSVar9 = TeamInfo.Human;
			}
			else {
				bVar7 = (pSVar11 == PlayerCharacter.Shifter);
				if (bVar7) goto label_05d2edd6;
				bVar7 = (pSVar11 == PlayerCharacter.Titan);
				pSVar11 = " T ";
				if (!bVar7) goto label_05d2ef2b;
				pSVar9 = TeamInfo.Titan;
			}
			pSVar10 = TeamInfo.GetTeamColor(pSVar9);
			pSVar9 = pSVar11;
		}
	label_05d2ef2b: ;
		pSVar9 = Util.ColorText(pSVar9, pSVar10);
		pSVar10 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Loadout, "");
		bVar7 = (pSVar10 == HumanLoadout.APG);
		if (bVar7) {
			ppSVar12 = &" APG ";
		}
		else {
			bVar7 = (pSVar10 == HumanLoadout.AHSS);
			if (bVar7) {
				ppSVar12 = &" AHSS ";
			}
			else {
				bVar7 = (pSVar10 == HumanLoadout.Thunderspear);
				if (bVar7) {
					ppSVar12 = &" TS ";
				}
				else {
					ppSVar12 = *(String**)(g_data_07556758 + 0xb8);
				}
			}
		}
		pSVar10 = *ppSVar12;
		pSVar13 = (String[])new string[5];
		if (player != null) {
			id = player.actorNumber;
			includeMC = player.IsMasterClient;
			bVar7 = player.IsLocal;
			pSVar11 = ChatManager.GetIDString(id, includeMC, bVar7);
			if (pSVar13 != null) {
				if ((int)pSVar13.Length != 0) {
					pSVar13[0] = pSVar11;
					if ((pSVar13.Length & 0xfffffffe) != 0) {
						pSVar13[1] = pSVar8;
						if (2 < (uint)pSVar13.Length) {
							pSVar13[2] = pSVar9;
							if ((pSVar13.Length & 0xfffffffc) != 0) {
								pSVar13[3] = pSVar10;
								pSVar8 = PhotonExtensions.GetStringProperty(player, PlayerProperty.Name, "");
								if (4 < (uint)pSVar13.Length) {
									pSVar13[4] = pSVar8;
									pSVar9 = String.Concat(pSVar13);
									pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
									if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
										pCVar14 = CustomLogicManager.Evaluator;
									}
									else {
										pCVar14 = CustomLogicManager.Evaluator;
									}
									if (pCVar14 != null) {
										if (((typeof(CustomLogicManager))._2). cctor_finished_or_no_cctor == 0) {
											pCVar14 = CustomLogicManager.Evaluator;
											if (pCVar14 == null) goto label_05d2f3de;
										}
										bVar7 = (pCVar14.ScoreboardProperty != (String)**(ulong*)(g_data_07556758 + 0xb8));
										if (bVar7) {
											pCVar14 = CustomLogicManager.Evaluator;
											if (pCVar14 != null) {
												pIVar15 = PhotonExtensions.GetCustomProperty(player, pCVar14.ScoreboardProperty);
												if (pIVar15 == null) {
													pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
												}
												else {
													pSVar8 = (String)(*pIVar15.klass.vtable[3].methodPtr)(pIVar15,pIVar15.klass.vtable[3].method);
												}
	label_05d2f38f: ;
												pSVar8 = String.Concat(pSVar9, ": ", pSVar8);
												pSVar8 = Util.SizeText(pSVar8, 0x13);
												return pSVar8;
											}
											goto label_05d2f3de;
										}
									}
									pSVar13 = this.trackedProperties;
									if (pSVar13 != null) {
										uVar16 = 0;
										do {
											uVar3 = (uint)pSVar13.Length;
											if ((long)(int)uVar3 <= (long)uVar16) goto label_05d2f38f;
											if (uVar3 <= uVar16) goto label_05d2f3e3;
											pIVar15 = PhotonExtensions.GetCustomProperty(player, pSVar13[uVar16]);
											if (pIVar15 == null) {
												pSVar10 = (String)**(ulong*)(g_data_07556758 + 0xb8);
											}
											else {
												pSVar10 = (String)(*pIVar15.klass.vtable[3].methodPtr)(pIVar15,pIVar15.klass.vtable[3].method);
											}
											pSVar8 = String.Concat(pSVar8, pSVar10);
											pSVar13 = this.trackedProperties;
											if (pSVar13 == null) break;
											if ((long)uVar16 < (long)((int)pSVar13.Length + -1)) {
												pSVar8 = String.Concat(pSVar8, " / ");
												pSVar13 = this.trackedProperties;
											}
											uVar16 = uVar16 + 1;
										} while (pSVar13 != null);
									}
									goto label_05d2f3de;
								}
							}
						}
					}
				}
	label_05d2f3e3: ;
				throw new IndexOutOfRangeException();
			}
		}
	label_05d2f3de: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004EFF")]
	[Address(RVA = "0x5C2F3F0", Offset = "0x5C2E3F0", VA = "0x5C2F3F0")]
	private string GetAggregateStats(IGrouping<string, Player> group)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$GetAggregateStats): 16 lines keep C-only constructs
		IGrouping<string, Player> pSVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Il2CppClass pIVar3;
		bool bVar4;
		int iVar5;
		VirtualInvokeData pVVar6;
		Player player;
		Object[] args;
		String pSVar7;
		String pSVar8;
		object pIVar9;
		object pIVar10;
		ulong uVar11;
		long lVar12;
		int local_74;
		int local_70;
		int local_6c;
		int local_5c;
		object local_58;
		int local_4c;
		int local_48;
		int local_44;
		ulong local_40;
		object* local_38;

		local_58 = null;
		if (group != null) {
			pSVar1 = group.klass;
			uVar11 = (ulong)(pSVar1._2).interface_offsets_count;
			local_58 = group.get_Key();
			local_40 = 0;
			local_38 = &local_58;
			if (local_58 != null) {
				local_74 = 0;
				local_70 = 0;
				local_6c = 0;
				local_5c = 0;
				do {
					pIVar9 = local_58;
					pIVar3 = local_58.klass;
					uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
					bVar4 = pIVar9.get_Key();
					pIVar9 = local_58;
					if (!bVar4) {
						if (local_58 == null) goto label_05d2f786;
						pIVar3 = local_58.klass;
						uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
						if (uVar11 == 0) goto label_05d2f75f;
						pIVar2 = (pIVar3._1).interfaceOffsets;
						lVar12 = 0;
						goto label_05d2f750;
					}
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					pIVar3 = local_58.klass;
					uVar11 = (ulong)(pIVar3._2).interface_offsets_count;
					player = (Player)pIVar9.get_Key();
					iVar5 = PhotonExtensions.GetIntProperty(player, PlayerProperty.Kills, 0);
					local_74 = iVar5 + local_74;
					iVar5 = PhotonExtensions.GetIntProperty(player, PlayerProperty.Deaths, 0);
					local_70 = iVar5 + local_70;
					iVar5 = PhotonExtensions.GetIntProperty(player, PlayerProperty.HighestDamage, 0);
					local_6c = iVar5 + local_6c;
					iVar5 = PhotonExtensions.GetIntProperty(player, PlayerProperty.TotalDamage, 0);
					local_5c = iVar5 + local_5c;
				} while (local_58 != null);
			}
			throw new NullReferenceException();
		}
		goto label_05d2fa7e;
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar11 * 0x10 != lVar12)) break;
	label_05d2f750: ;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar12) == typeof(IDisposable)) {
				pVVar6 = pIVar3.vtable + *(int)((long)&pIVar2.offset + lVar12);
				goto label_05d2f77d;
			}
		}
	label_05d2f75f: ;
	label_05d2f77d: ;
		pIVar9.get_Key();
	label_05d2f786: ;
		args = (Object[])new object[5];
		pSVar1 = group.klass;
		uVar11 = (ulong)(pSVar1._2).interface_offsets_count;
		pSVar7 = group.get_Key();
		pSVar1 = group.klass;
		uVar11 = (ulong)(pSVar1._2).interface_offsets_count;
		pSVar8 = group.get_Key();
		pSVar8 = TeamInfo.GetTeamColor(pSVar8);
		pSVar7 = Util.ColorText(pSVar7, pSVar8);
		if (args != null) {
			if ((pSVar7 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)pSVar7, (((args.obj).klass)._1).element_class), pIVar9 == null)) {
	label_05d2fa6f: ;
				pIVar9 = new ArrayTypeMismatchException();
				throw pIVar9;
			}
			if ((int)args.Length != 0) {
				args[0] = (object)pSVar7;
				local_40 = CONCAT44(local_40._4_4_, local_74);
				pIVar9 = (object)local_40;
				if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((args.obj).klass)._1).element_class), pIVar10 == null)) goto label_05d2fa6f;
				if ((args.Length & 0xfffffffe) != 0) {
					args[1] = pIVar9;
					local_44 = local_70;
					pIVar9 = (object)local_44;
					if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((args.obj).klass)._1).element_class), pIVar10 == null)) goto label_05d2fa6f;
					if (2 < (uint)args.Length) {
						args[2] = pIVar9;
						local_48 = local_6c;
						pIVar9 = (object)local_48;
						if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((args.obj).klass)._1).element_class), pIVar10 == null)) goto label_05d2fa6f;
						if ((args.Length & 0xfffffffc) != 0) {
							args[3] = pIVar9;
							local_4c = local_5c;
							pIVar9 = (object)local_4c;
							if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((args.obj).klass)._1).element_class), pIVar10 == null)) goto label_05d2fa6f;
							if (4 < (uint)args.Length) {
								args[4] = pIVar9;
								pSVar7 = String.Format("{0}: {1}/{2}/{3}/{4}\n", args);
								return pSVar7;
							}
						}
					}
				}
			}
			throw new IndexOutOfRangeException();
		}
	label_05d2fa7e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F00")]
	[Address(RVA = "0x5C2FB20", Offset = "0x5C2EB20", VA = "0x5C2FB20")]
	private string GetPlayerList()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$GetPlayerList): clean
		uint uVar1;
		Player[] pPVar2;
		ulong uVar3;
		String str1;
		String str0;
		ulong uVar4;

		str0 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pPVar2 = PhotonNetwork.PlayerList;
		if (pPVar2 == null) {
			throw new NullReferenceException();
		}
		if (0 < (int)pPVar2.Length) {
			uVar3 = pPVar2.Length & 0xffffffff;
			uVar4 = 0;
			do {
				if (uVar3 <= uVar4) {
					throw new IndexOutOfRangeException();
				}
				str1 = this.GetPlayerListEntry(pPVar2[uVar4]);
				str0 = String.Concat(str0, str1, "\n");
				uVar4 = uVar4 + 1;
				uVar1 = (uint)pPVar2.Length;
				uVar3 = (ulong)uVar1;
			} while ((long)uVar4 < (long)(int)uVar1);
		}
		return str0;
	}

	[Token(Token = "0x6004F01")]
	[Address(RVA = "0x5C2FC00", Offset = "0x5C2EC00", VA = "0x5C2FC00")]
	private string GetPlayerListTeams()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$GetPlayerListTeams): 29 lines keep C-only constructs
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		InGameMenu pUVar3;
		sbyte cVar4;
		bool bVar5;
		Player[] pPVar6;
		Func<Player, bool> pSVar7;
		object pIVar8;
		System_Collections_Generic_IEnumerable_TSource__o source;
		UI_InGameMenu___c_StaticFields pUVar9;
		Func<Player, string> __this_00;
		object pIVar10;
		VirtualInvokeData pVVar11;
		InGameMenu pUVar12;
		String pSVar13;
		String pSVar14;
		Player pPVar15;
		ulong uVar16;
		long lVar17;
		object pIStack_68;
		InGameMenu pUStack_60;
		InGameMenu* ppUStack_50;
		InGameMenu pUStack_48;
		object* ppIStack_38;

		pUStack_48 = this;
		pUStack_60 = null;
		pIStack_68 = null;
		pSVar14 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pPVar6 = PhotonNetwork.PlayerList;
		if ((typeof(InGameMenu.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar9 = typeof(InGameMenu.c).static_fields;
			pSVar7 = pUVar9.__9__125_0;
		}
		else {
			pUVar9 = typeof(InGameMenu.c).static_fields;
			pSVar7 = pUVar9.__9__125_0;
		}
		if (pSVar7 == null) {
			if (((typeof(InGameMenu.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar9 = typeof(InGameMenu.c).static_fields;
			}
			pIVar8 = (object)pUVar9.__9;
			pSVar7 = new Func<Player, bool>(pIVar8, (intptr_t)MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__125_0);
			pUVar9 = typeof(InGameMenu.c).static_fields;
			pUVar9.__9__125_0 = pSVar7;
		}
		pIVar8 = (object)Enumerable.Where<Player>((System_Collections_Generic_IEnumerable_TSource__o)pPVar6, (System_Func_TSource__bool__o)pSVar7);
		pPVar6 = PhotonNetwork.PlayerList;
		if ((typeof(InGameMenu.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar9 = typeof(InGameMenu.c).static_fields;
			pSVar7 = pUVar9.__9__125_1;
		}
		else {
			pUVar9 = typeof(InGameMenu.c).static_fields;
			pSVar7 = pUVar9.__9__125_1;
		}
		if (pSVar7 == null) {
			if (((typeof(InGameMenu.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar9 = typeof(InGameMenu.c).static_fields;
			}
			pIVar10 = (object)pUVar9.__9;
			pSVar7 = new Func<Player, bool>(pIVar10, (intptr_t)MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__125_1);
			pUVar9 = typeof(InGameMenu.c).static_fields;
			pUVar9.__9__125_1 = pSVar7;
		}
		source = Enumerable.Where<Player>((System_Collections_Generic_IEnumerable_TSource__o)pPVar6, (System_Func_TSource__bool__o)pSVar7);
		if ((typeof(InGameMenu.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar9 = typeof(InGameMenu.c).static_fields;
			__this_00 = pUVar9.__9__125_2;
		}
		else {
			pUVar9 = typeof(InGameMenu.c).static_fields;
			__this_00 = pUVar9.__9__125_2;
		}
		if (__this_00 == null) {
			if (((typeof(InGameMenu.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar9 = typeof(InGameMenu.c).static_fields;
			}
			pIVar10 = (object)pUVar9.__9;
			__this_00 = new Func<Player, string>(pIVar10, (intptr_t)MethodInfo_UI_InGameMenu_c_GetPlayerListTeams_b__125_2);
			pUVar9 = typeof(InGameMenu.c).static_fields;
			pUVar9.__9__125_2 = __this_00;
		}
		pIVar10 = (object)Enumerable.GroupBy<Player, string>(source, (System_Func_TSource__TKey__o)__this_00);
		if (pIVar10 != null) {
			pIVar1 = pIVar10.klass;
			uVar16 = (ulong)(pIVar1._2).interface_offsets_count;
			pUVar12 = (InGameMenu)pIVar10.MoveNext();
			ppUStack_50 = &pUStack_60;
	joined_r0x05d30008: ;
			pUStack_60 = pUVar12;
			if (pUVar12 == null) {
				throw new NullReferenceException();
			}
			pIVar1 = (Il2CppClass)pUVar12.klass;
			uVar16 = (ulong)(pIVar1._2).interface_offsets_count;
			cVar4 = pUVar12.MoveNext();
			pUVar12 = pUStack_60;
			if (cVar4 != false) {
				if (pUStack_60 == null) {
					throw new NullReferenceException();
				}
				pUVar3 = pUStack_60.klass;
				uVar16 = (ulong)(pUVar3._2).interface_offsets_count;
				pIVar10 = pUVar12.MoveNext();
				pSVar13 = pUVar12.GetAggregateStats((IGrouping<string, Player>)pIVar10);
				pSVar14 = String.Concat(pSVar14, pSVar13);
				if (pIVar10 == null) {
					throw new NullReferenceException();
				}
				pIVar1 = pIVar10.klass;
				uVar16 = (ulong)(pIVar1._2).interface_offsets_count;
				pIVar10 = pIVar10.MoveNext();
				ppIStack_38 = &pIStack_68;
				do {
					pIStack_68 = pIVar10;
					if (pIVar10 == null) {
						throw new NullReferenceException();
					}
					pIVar1 = pIVar10.klass;
					uVar16 = (ulong)(pIVar1._2).interface_offsets_count;
					cVar4 = pIVar10.MoveNext();
					pIVar10 = pIStack_68;
					if (cVar4 == false) goto label_05d30300;
					if (pIStack_68 == null) {
						throw new NullReferenceException();
					}
					pIVar1 = pIStack_68.klass;
					uVar16 = (ulong)(pIVar1._2).interface_offsets_count;
					pPVar15 = (Player)pIVar10.MoveNext();
					pSVar13 = pUStack_48.GetPlayerListEntry(pPVar15);
					pSVar14 = String.Concat(pSVar14, "\t", pSVar13, "\n");
					pIVar10 = pIStack_68;
				} while(true);
			}
			if (pUStack_60 == null) goto label_05d30466;
			pUVar3 = pUStack_60.klass;
			uVar16 = (ulong)(pUVar3._2).interface_offsets_count;
			if (uVar16 == 0) goto label_05d3043f;
			pIVar2 = (pUVar3._1).interfaceOffsets;
			lVar17 = 0;
			goto label_05d30430;
		}
		goto label_05d3070e;
	label_05d30300: ;
		pUVar12 = pUStack_60;
		if (pIStack_68 != null) {
			pIVar1 = pIStack_68.klass;
			uVar16 = (ulong)(pIVar1._2).interface_offsets_count;
			pIVar10.MoveNext();
			pUVar12 = pUStack_60;
		}
		goto joined_r0x05d30008;
		while (true) {
			lVar17 = lVar17 + 0x10;
			if (!(uVar16 * 0x10 != lVar17)) break;
	label_05d306a0: ;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar17) == typeof(IDisposable)) {
				pVVar11 = pIVar1.vtable + *(int)((long)&pIVar2.offset + lVar17);
				goto label_05d306cd;
			}
		}
	label_05d306af: ;
	label_05d306cd: ;
		pIVar10.MoveNext();
		return pSVar14;
		while (true) {
			lVar17 = lVar17 + 0x10;
			if (!(uVar16 * 0x10 != lVar17)) break;
	label_05d30430: ;
			if (*(IDisposable*)((long)&pIVar2.interfaceType + lVar17) == typeof(IDisposable)) {
				pVVar11 = (VirtualInvokeData)(&(pUVar3.vtable)._0_Equals + *(int)((long)&pIVar2.offset + lVar17));
				goto label_05d3045d;
			}
		}
	label_05d3043f: ;
	label_05d3045d: ;
		pUVar12.MoveNext();
	label_05d30466: ;
		if (pIVar8 != null) {
			pIVar1 = pIVar8.klass;
			uVar16 = (ulong)(pIVar1._2).interface_offsets_count;
			pIStack_68 = pIVar8.MoveNext();
			ppUStack_50 = (InGameMenu*)&pIStack_68;
			do {
				pIVar10 = pIStack_68;
				if (pIStack_68 == null) {
					throw new NullReferenceException();
				}
				pIVar1 = pIStack_68.klass;
				uVar16 = (ulong)(pIVar1._2).interface_offsets_count;
				bVar5 = pIVar10.MoveNext();
				pIVar10 = pIStack_68;
				if (!bVar5) {
					if (pIStack_68 == null) {
						return pSVar14;
					}
					pIVar1 = pIStack_68.klass;
					uVar16 = (ulong)(pIVar1._2).interface_offsets_count;
					if (uVar16 == 0) goto label_05d306af;
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar17 = 0;
					goto label_05d306a0;
				}
				if (pIStack_68 == null) {
					throw new NullReferenceException();
				}
				pIVar1 = pIStack_68.klass;
				uVar16 = (ulong)(pIVar1._2).interface_offsets_count;
				pPVar15 = (Player)pIVar10.MoveNext();
				pSVar13 = (String)(*pIVar8.klass.vtable[3].methodPtr)(pIVar8,pIVar8.klass.vtable[3].method);
				pSVar14 = String.Concat(pSVar14, pSVar13, ":\n");
				pSVar13 = pUStack_48.GetPlayerListEntry(pPVar15);
				pSVar14 = String.Concat(pSVar14, "\t", pSVar13, "\n");
			} while(true);
		}
	label_05d3070e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F02")]
	[Address(RVA = "0x5C2AC20", Offset = "0x5C29C20", VA = "0x5C2AC20")]
	private void HideAllMenus([Optional] BasePopup keep)
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$HideAllMenus): 10 lines keep C-only constructs
		List<BasePopup> __this_00;
		Object pUVar1;
		ulong uVar2;
		EmoteHandler pUVar3;
		BasePopup pUVar4;
		ItemHandler __this_01;
		ActionHandler __this_02;
		Object x;
		bool bVar5;
		byte[] local_60 = new byte[16];
		Object local_50;
		byte[] local_48 = new byte[16];
		Object local_38;

		__this_00 = this._popups;
		if (__this_00 != null) {
			local_60.GetEnumerator((List<object>)__this_00);
			local_38 = local_50;
			local_48._0_8_ = local_60._0_8_;
			local_48._8_8_ = local_60._8_8_;
			local_60._0_8_ = null;
			local_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_48;
			while(true) {
				bVar5 = local_48.MoveNext();
				x = local_38;
				if (!bVar5) break;
				bVar5 = (x != (Object)keep);
				if (bVar5) {
					if (x == null) {
						throw new NullReferenceException();
					}
					pUVar1 = x.klass;
					uVar2._0_2_ = ((Il2CppClass)pUVar1).vtable[22].method;
					uVar2._2_2_ = pUVar1[1]._2.vtable_count;
					uVar2._4_2_ = pUVar1[1]._2.interfaces_count;
					uVar2._6_2_ = pUVar1[1]._2.interface_offsets_count;
					(**(code*)&((Il2CppClass)pUVar1).vtable[22].methodPtr)(x,uVar2);
				}
			}
			local_48.Dispose();
			pUVar3 = this.EmoteHandler;
			if (pUVar3 != null) {
				pUVar4 = pUVar3._emoteWheelPopup;
				if (pUVar4 != null) {
					pUVar4.Hide();
					pUVar3.IsActive = false;
					__this_01 = this.ItemHandler;
					if (__this_01 != null) {
						__this_01.SetItemWheel(false);
						__this_02 = this.ActionHandler;
						if (__this_02 != null) {
							__this_02.SetActionWheel(false);
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F03")]
	[Address(RVA = "0x5C309E0", Offset = "0x5C2F9E0", VA = "0x5C309E0", Slot = "5")]
	protected override void SetupPopups()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$SetupPopups): 8 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<BasePopup> pSVar3;
		BasePopup[] pUVar4;
		Transform pUVar6;
		CustomAssetUrlPopup pUVar7;
		CustomAssetVideoUrlPopup pUVar8;

		this.SetupPopups();
		pUVar6 = this.transform;
		pUVar7 = ElementFactory.CreateDefaultPopup<CustomAssetUrlPopup>(pUVar6, false);
		if (pUVar7 != null) {
			pUVar7 = pUVar7.GetComponent<CustomAssetUrlPopup>();
			this._customAssetUrlPopup = pUVar7;
			pUVar6 = this.transform;
			pUVar8 = ElementFactory.CreateDefaultPopup<CustomAssetVideoUrlPopup>(pUVar6, false);
			if (pUVar8 != null) {
				pUVar8 = pUVar8.GetComponent<CustomAssetVideoUrlPopup>();
				this._customAssetVideoUrlPopup = pUVar8;
				pSVar3 = this._popups;
				if (pSVar3 != null) {
					pUVar7 = this._customAssetUrlPopup;
					piVar1 = &pSVar3._version;
					*piVar1 = *piVar1 + 1;
					pUVar4 = pSVar3._items;
					if (pUVar4 != null) {
						uVar2 = pSVar3._size;
						if (uVar2 < (uint)pUVar4.Length) {
							pSVar3._size = uVar2 + 1;
							pUVar4[(int)uVar2] = (BasePopup)pUVar7;
						}
						else {
							pSVar3.AddWithResize((object)pUVar7);
						}
						pSVar3 = this._popups;
						if (pSVar3 != null) {
							pUVar8 = this._customAssetVideoUrlPopup;
							piVar1 = &pSVar3._version;
							*piVar1 = *piVar1 + 1;
							pUVar4 = pSVar3._items;
							if (pUVar4 != null) {
								uVar2 = pSVar3._size;
								if (uVar2 < (uint)pUVar4.Length) {
									pSVar3._size = uVar2 + 1;
									pUVar4[(int)uVar2] = (BasePopup)pUVar8;
								}
								else {
									pSVar3.AddWithResize((object)pUVar8);
								}
								pSVar3 = this._allPausePopups;
								if (pSVar3 != null) {
									pUVar7 = this._customAssetUrlPopup;
									piVar1 = &pSVar3._version;
									*piVar1 = *piVar1 + 1;
									pUVar4 = pSVar3._items;
									if (pUVar4 != null) {
										uVar2 = pSVar3._size;
										if (uVar2 < (uint)pUVar4.Length) {
											pSVar3._size = uVar2 + 1;
											pUVar4[(int)uVar2] = (BasePopup)pUVar7;
										}
										else {
											pSVar3.AddWithResize((object)pUVar7);
										}
										pSVar3 = this._allPausePopups;
										if (pSVar3 != null) {
											pUVar8 = this._customAssetVideoUrlPopup;
											piVar1 = &pSVar3._version;
											*piVar1 = *piVar1 + 1;
											pUVar4 = pSVar3._items;
											if (pUVar4 != null) {
												uVar2 = pSVar3._size;
												if (uVar2 < (uint)pUVar4.Length) {
													pSVar3._size = uVar2 + 1;
													pUVar4[(int)uVar2] = (BasePopup)pUVar8;
													return;
												}
												pSVar3.AddWithResize((object)pUVar8);
												return;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F04")]
	[Address(RVA = "0x5C30C70", Offset = "0x5C2FC70", VA = "0x5C30C70")]
	public InGameMenu()
	{
		// Lifted from source/cpp/UI/InGameMenu.c (UI.InGameMenu$$.ctor): clean
		List<KillFeedSmallPopup> __this_00;
		List<BasePopup> __this_01;
		Dictionary<string, InGameLabel> __this_02;
		Dictionary<string, float> __this_03;
		Dictionary<string, bool> __this_04;
		List<string> __this_05;
		Dictionary<string, BasePopup> __this_06;
		String[] pSVar1;

		__this_00 = new List<KillFeedSmallPopup>();
		this._killFeedSmallPopups = __this_00;
		__this_01 = new List<BasePopup>();
		this._allPausePopups = __this_01;
		__this_02 = new Dictionary<string, InGameLabel>();
		this._labels = __this_02;
		this._legacyLabels = true;
		__this_03 = new Dictionary<string, float>();
		this._labelTimeLeft = __this_03;
		__this_04 = new Dictionary<string, bool>();
		this._labelHasTimeLeft = __this_04;
		__this_05 = new List<string>();
		this.labelsToDeactivate = __this_05;
		__this_06 = new Dictionary<string, BasePopup>();
		this._customPopups = __this_06;
		pSVar1 = (String[])new string[4];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "Kills";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "Deaths";
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = "HighestDamage";
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = "TotalDamage";
						this.trackedProperties = pSVar1;
						this._lastDismissedMenuFrame = -1;
						base();
						return;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/InGameMenu.c.

	// UI.InGameMenu.<>c__DisplayClass66_0$$.ctor: clean
	private void c__DisplayClass66_0__ctor()
	{
		base();
		return;
	}

	// UI.InGameMenu.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new InGameMenu.c();
		InGameMenu.c.__9 = (InGameMenu.c)__this;
		return;
	}

	// UI.InGameMenu.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__125_0: clean
	private bool c__GetPlayerListTeams_b__125_0(Player e)
	{
		bool bVar1;
		String a;

		a = PhotonExtensions.GetStringProperty(e, PlayerProperty.Team, "");
		bVar1 = (a == TeamInfo.None);
		return bVar1;
	}

	// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__125_1: clean
	private bool c__GetPlayerListTeams_b__125_1(Player e)
	{
		bool bVar1;
		String a;

		a = PhotonExtensions.GetStringProperty(e, PlayerProperty.Team, "");
		bVar1 = (a != TeamInfo.None);
		return bVar1;
	}

	// UI.InGameMenu.<>c$$<GetPlayerListTeams>b__125_2: clean
	private String c__GetPlayerListTeams_b__125_2(Player e)
	{
		String pSVar1;

		pSVar1 = PhotonExtensions.GetStringProperty(e, PlayerProperty.Team, "");
		return pSVar1;
	}

	// UI.InGameMenu.<>c__DisplayClass66_0$$<RebuildPopups>b__0: clean
	private bool c__DisplayClass66_0__RebuildPopups_b__0(BasePopup popup)
	{
		HashSet<object> __this_00;
		bool bVar1;

		__this_00 = (HashSet<object>)this.customPopups;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.Contains((object)popup);
		return !bVar1;
	}
}

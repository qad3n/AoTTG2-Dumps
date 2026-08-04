// ==================== AoTTG2 cross-reference ====================
// Type: UI.MainMenu
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/MainMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200069B")]
internal class MainMenu : BaseMenu
{
	[Token(Token = "0x200069C")]
	[CompilerGenerated]
	private sealed class _003CWaitAndChangeBackground_003Ed__33 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002068")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002069")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400206A")]
		[FieldOffset(Offset = "0x20")]
		public MainMenu _003C_003E4__this;

		[Token(Token = "0x17000CA4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041FE")]
			[Address(RVA = "0x4308770", Offset = "0x4308770", VA = "0x4308770", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000CA5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004200")]
			[Address(RVA = "0x43087C0", Offset = "0x43087C0", VA = "0x43087C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60041FB")]
		[Address(RVA = "0x4307EA0", Offset = "0x4307EA0", VA = "0x4307EA0")]
		[DebuggerHidden]
		public _003CWaitAndChangeBackground_003Ed__33(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60041FC")]
		[Address(RVA = "0x4308690", Offset = "0x4308690", VA = "0x4308690", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60041FD")]
		[Address(RVA = "0x43086A0", Offset = "0x43086A0", VA = "0x43086A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60041FF")]
		[Address(RVA = "0x4308780", Offset = "0x4308780", VA = "0x4308780", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002050")]
	[FieldOffset(Offset = "0x98")]
	public BasePopup _createGamePopup;

	[Token(Token = "0x4002051")]
	[FieldOffset(Offset = "0xA0")]
	public BasePopup _selectMapPopup;

	[Token(Token = "0x4002052")]
	[FieldOffset(Offset = "0xA8")]
	public BasePopup _multiplayerMapPopup;

	[Token(Token = "0x4002053")]
	[FieldOffset(Offset = "0xB0")]
	public BasePopup _settingsPopup;

	[Token(Token = "0x4002054")]
	[FieldOffset(Offset = "0xB8")]
	public BasePopup _toolsPopup;

	[Token(Token = "0x4002055")]
	[FieldOffset(Offset = "0xC0")]
	public BasePopup _multiplayerRoomListPopup;

	[Token(Token = "0x4002056")]
	[FieldOffset(Offset = "0xC8")]
	public BasePopup _duelPopup;

	[Token(Token = "0x4002057")]
	[FieldOffset(Offset = "0xD0")]
	public BasePopup _editProfilePopup;

	[Token(Token = "0x4002058")]
	[FieldOffset(Offset = "0xD8")]
	public BasePopup _leaderboardPopup;

	[Token(Token = "0x4002059")]
	[FieldOffset(Offset = "0xE0")]
	public BasePopup _socialPopup;

	[Token(Token = "0x400205A")]
	[FieldOffset(Offset = "0xE8")]
	public BasePopup _aboutPopup;

	[Token(Token = "0x400205B")]
	[FieldOffset(Offset = "0xF0")]
	public BasePopup _questPopup;

	[Token(Token = "0x400205C")]
	[FieldOffset(Offset = "0xF8")]
	public BasePopup _tutorialPopup;

	[Token(Token = "0x400205D")]
	[FieldOffset(Offset = "0x100")]
	public BasePopup _modLoginPopup;

	[Token(Token = "0x400205E")]
	[FieldOffset(Offset = "0x108")]
	public BasePopup _advancedConfigurationPopup;

	[Token(Token = "0x400205F")]
	[FieldOffset(Offset = "0x110")]
	public OutdatedPopup _outdatedPopup;

	[Token(Token = "0x4002060")]
	[FieldOffset(Offset = "0x118")]
	public MainBackgroundMenu _backgroundMenu;

	[Token(Token = "0x4002061")]
	[FieldOffset(Offset = "0x120")]
	protected Text _multiplayerStatusLabel;

	[Token(Token = "0x4002062")]
	[FieldOffset(Offset = "0x128")]
	protected string _lastButtonClicked;

	[Token(Token = "0x4002063")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode MainBackgroundInfo;

	[Token(Token = "0x4002064")]
	protected const float ChangeBackgroundTime = 20f;

	[Token(Token = "0x4002065")]
	[FieldOffset(Offset = "0x8")]
	private static bool ShowedOutdated;

	[Token(Token = "0x4002066")]
	[FieldOffset(Offset = "0x130")]
	private GameObject _gisketchHost;

	[Token(Token = "0x4002067")]
	[FieldOffset(Offset = "0x138")]
	private AottgMainMenuTipPanelController _tipPanel;

	[Token(Token = "0x60041EB")]
	[Address(RVA = "0x4306410", Offset = "0x4306410", VA = "0x4306410", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60041EC")]
	[Address(RVA = "0x4306550", Offset = "0x4306550", VA = "0x4306550")]
	private void SetupMainBackground()
	{
	}

	[Token(Token = "0x60041ED")]
	[Address(RVA = "0x4306B90", Offset = "0x4306B90", VA = "0x4306B90")]
	public void ShowMultiplayerRoomListPopup()
	{
	}

	[Token(Token = "0x60041EE")]
	[Address(RVA = "0x4306BD0", Offset = "0x4306BD0", VA = "0x4306BD0")]
	public void ShowMultiplayerMapPopup()
	{
	}

	[Token(Token = "0x60041EF")]
	[Address(RVA = "0x4306C10", Offset = "0x4306C10", VA = "0x4306C10")]
	public void OpenIntroAction(string name)
	{
	}

	[Token(Token = "0x60041F0")]
	[Address(RVA = "0x43070F0", Offset = "0x43070F0", VA = "0x43070F0", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x60041F1")]
	[Address(RVA = "0x4306640", Offset = "0x4306640", VA = "0x4306640")]
	private void SetupIntroPanel()
	{
	}

	[Token(Token = "0x60041F2")]
	[Address(RVA = "0x43068A0", Offset = "0x43068A0", VA = "0x43068A0")]
	private void SetupLabels()
	{
	}

	[Token(Token = "0x60041F3")]
	[Address(RVA = "0x4307E60", Offset = "0x4307E60", VA = "0x4307E60")]
	private void ChangeMainBackground()
	{
	}

	[Token(Token = "0x60041F4")]
	[Address(RVA = "0x4306B20", Offset = "0x4306B20", VA = "0x4306B20")]
	[IteratorStateMachine(typeof(_003CWaitAndChangeBackground_003Ed__33))]
	private IEnumerator WaitAndChangeBackground()
	{
		return null;
	}

	[Token(Token = "0x60041F5")]
	[Address(RVA = "0x4307EC0", Offset = "0x4307EC0", VA = "0x4307EC0")]
	private void Update()
	{
	}

	[Token(Token = "0x60041F6")]
	[Address(RVA = "0x43084A0", Offset = "0x43084A0", VA = "0x43084A0")]
	private bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x60041F7")]
	[Address(RVA = "0x4306C20", Offset = "0x4306C20", VA = "0x4306C20")]
	private void OnIntroButtonClick(string name)
	{
	}

	[Token(Token = "0x60041F8")]
	[Address(RVA = "0x4307DB0", Offset = "0x4307DB0", VA = "0x4307DB0")]
	private static string GisketchThemePath()
	{
		return null;
	}

	[Token(Token = "0x60041F9")]
	[Address(RVA = "0x4308600", Offset = "0x4308600", VA = "0x4308600")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60041FA")]
	[Address(RVA = "0x4308680", Offset = "0x4308680", VA = "0x4308680")]
	public MainMenu()
	{
	}
}

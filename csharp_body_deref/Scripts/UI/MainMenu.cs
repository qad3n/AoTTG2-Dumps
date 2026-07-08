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

[Token(Token = "0x200064F")]
internal class MainMenu : BaseMenu
{
	[Token(Token = "0x2000650")]
	[CompilerGenerated]
	private sealed class _003CWaitAndChangeBackground_003Ed__32 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001F13")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001F14")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001F15")]
		[FieldOffset(Offset = "0x20")]
		public MainMenu _003C_003E4__this;

		[Token(Token = "0x17000C2A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FA1")]
			[Address(RVA = "0x3FF4480", Offset = "0x3FF4480", VA = "0x3FF4480", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C2B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FA3")]
			[Address(RVA = "0x3FF44D0", Offset = "0x3FF44D0", VA = "0x3FF44D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003F9E")]
		[Address(RVA = "0x3FF3BB0", Offset = "0x3FF3BB0", VA = "0x3FF3BB0")]
		[DebuggerHidden]
		public _003CWaitAndChangeBackground_003Ed__32(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003F9F")]
		[Address(RVA = "0x3FF43A0", Offset = "0x3FF43A0", VA = "0x3FF43A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003FA0")]
		[Address(RVA = "0x3FF43B0", Offset = "0x3FF43B0", VA = "0x3FF43B0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003FA2")]
		[Address(RVA = "0x3FF4490", Offset = "0x3FF4490", VA = "0x3FF4490", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001EFC")]
	[FieldOffset(Offset = "0x98")]
	public BasePopup _createGamePopup;

	[Token(Token = "0x4001EFD")]
	[FieldOffset(Offset = "0xA0")]
	public BasePopup _selectMapPopup;

	[Token(Token = "0x4001EFE")]
	[FieldOffset(Offset = "0xA8")]
	public BasePopup _multiplayerMapPopup;

	[Token(Token = "0x4001EFF")]
	[FieldOffset(Offset = "0xB0")]
	public BasePopup _settingsPopup;

	[Token(Token = "0x4001F00")]
	[FieldOffset(Offset = "0xB8")]
	public BasePopup _toolsPopup;

	[Token(Token = "0x4001F01")]
	[FieldOffset(Offset = "0xC0")]
	public BasePopup _multiplayerRoomListPopup;

	[Token(Token = "0x4001F02")]
	[FieldOffset(Offset = "0xC8")]
	public BasePopup _duelPopup;

	[Token(Token = "0x4001F03")]
	[FieldOffset(Offset = "0xD0")]
	public BasePopup _editProfilePopup;

	[Token(Token = "0x4001F04")]
	[FieldOffset(Offset = "0xD8")]
	public BasePopup _leaderboardPopup;

	[Token(Token = "0x4001F05")]
	[FieldOffset(Offset = "0xE0")]
	public BasePopup _socialPopup;

	[Token(Token = "0x4001F06")]
	[FieldOffset(Offset = "0xE8")]
	public BasePopup _aboutPopup;

	[Token(Token = "0x4001F07")]
	[FieldOffset(Offset = "0xF0")]
	public BasePopup _questPopup;

	[Token(Token = "0x4001F08")]
	[FieldOffset(Offset = "0xF8")]
	public BasePopup _tutorialPopup;

	[Token(Token = "0x4001F09")]
	[FieldOffset(Offset = "0x100")]
	public BasePopup _modLoginPopup;

	[Token(Token = "0x4001F0A")]
	[FieldOffset(Offset = "0x108")]
	public OutdatedPopup _outdatedPopup;

	[Token(Token = "0x4001F0B")]
	[FieldOffset(Offset = "0x110")]
	public MainBackgroundMenu _backgroundMenu;

	[Token(Token = "0x4001F0C")]
	[FieldOffset(Offset = "0x118")]
	protected Text _multiplayerStatusLabel;

	[Token(Token = "0x4001F0D")]
	[FieldOffset(Offset = "0x120")]
	protected string _lastButtonClicked;

	[Token(Token = "0x4001F0E")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode MainBackgroundInfo;

	[Token(Token = "0x4001F0F")]
	protected const float ChangeBackgroundTime = 20f;

	[Token(Token = "0x4001F10")]
	[FieldOffset(Offset = "0x8")]
	private static bool ShowedOutdated;

	[Token(Token = "0x4001F11")]
	[FieldOffset(Offset = "0x128")]
	private GameObject _gisketchHost;

	[Token(Token = "0x4001F12")]
	[FieldOffset(Offset = "0x130")]
	private AottgMainMenuTipPanelController _tipPanel;

	[Token(Token = "0x6003F8E")]
	[Address(RVA = "0x3FF21E0", Offset = "0x3FF21E0", VA = "0x3FF21E0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6003F8F")]
	[Address(RVA = "0x3FF2320", Offset = "0x3FF2320", VA = "0x3FF2320")]
	private void SetupMainBackground()
	{
	}

	[Token(Token = "0x6003F90")]
	[Address(RVA = "0x3FF2960", Offset = "0x3FF2960", VA = "0x3FF2960")]
	public void ShowMultiplayerRoomListPopup()
	{
	}

	[Token(Token = "0x6003F91")]
	[Address(RVA = "0x3FF29A0", Offset = "0x3FF29A0", VA = "0x3FF29A0")]
	public void ShowMultiplayerMapPopup()
	{
	}

	[Token(Token = "0x6003F92")]
	[Address(RVA = "0x3FF29E0", Offset = "0x3FF29E0", VA = "0x3FF29E0")]
	public void OpenIntroAction(string name)
	{
	}

	[Token(Token = "0x6003F93")]
	[Address(RVA = "0x3FF2EC0", Offset = "0x3FF2EC0", VA = "0x3FF2EC0", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003F94")]
	[Address(RVA = "0x3FF2410", Offset = "0x3FF2410", VA = "0x3FF2410")]
	private void SetupIntroPanel()
	{
	}

	[Token(Token = "0x6003F95")]
	[Address(RVA = "0x3FF2670", Offset = "0x3FF2670", VA = "0x3FF2670")]
	private void SetupLabels()
	{
	}

	[Token(Token = "0x6003F96")]
	[Address(RVA = "0x3FF3B70", Offset = "0x3FF3B70", VA = "0x3FF3B70")]
	private void ChangeMainBackground()
	{
	}

	[Token(Token = "0x6003F97")]
	[Address(RVA = "0x3FF28F0", Offset = "0x3FF28F0", VA = "0x3FF28F0")]
	[IteratorStateMachine(typeof(_003CWaitAndChangeBackground_003Ed__32))]
	private IEnumerator WaitAndChangeBackground()
	{
		return null;
	}

	[Token(Token = "0x6003F98")]
	[Address(RVA = "0x3FF3BD0", Offset = "0x3FF3BD0", VA = "0x3FF3BD0")]
	private void Update()
	{
	}

	[Token(Token = "0x6003F99")]
	[Address(RVA = "0x3FF41B0", Offset = "0x3FF41B0", VA = "0x3FF41B0")]
	private bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F9A")]
	[Address(RVA = "0x3FF29F0", Offset = "0x3FF29F0", VA = "0x3FF29F0")]
	private void OnIntroButtonClick(string name)
	{
	}

	[Token(Token = "0x6003F9B")]
	[Address(RVA = "0x3FF3AC0", Offset = "0x3FF3AC0", VA = "0x3FF3AC0")]
	private static string GisketchThemePath()
	{
		return null;
	}

	[Token(Token = "0x6003F9C")]
	[Address(RVA = "0x3FF4310", Offset = "0x3FF4310", VA = "0x3FF4310")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003F9D")]
	[Address(RVA = "0x3FF4390", Offset = "0x3FF4390", VA = "0x3FF4390")]
	public MainMenu()
	{
	}
}

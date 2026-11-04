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
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007F6")]
internal class MainMenu : BaseMenu
{
	[Token(Token = "0x20007F7")]
	[CompilerGenerated]
	private sealed class _003CWaitAndChangeBackground_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400283C")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400283D")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400283E")]
		[FieldOffset(Offset = "0x20")]
		public MainMenu _003C_003E4__this;

		[Token(Token = "0x17000DEA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004CF2")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DEB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004CF4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004CEF")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndChangeBackground_003Ed__30(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004CF0")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004CF1")]
		[Address(RVA = "0x229D390", Offset = "0x229B990", VA = "0x18229D390", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004CF3")]
		[Address(RVA = "0x229D510", Offset = "0x229BB10", VA = "0x18229D510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002828")]
	[FieldOffset(Offset = "0x98")]
	public BasePopup _multiplayerMapPopup;

	[Token(Token = "0x4002829")]
	[FieldOffset(Offset = "0xA0")]
	public BasePopup _settingsPopup;

	[Token(Token = "0x400282A")]
	[FieldOffset(Offset = "0xA8")]
	public BasePopup _toolsPopup;

	[Token(Token = "0x400282B")]
	[FieldOffset(Offset = "0xB0")]
	public BasePopup _multiplayerRoomListPopup;

	[Token(Token = "0x400282C")]
	[FieldOffset(Offset = "0xB8")]
	public BasePopup _duelPopup;

	[Token(Token = "0x400282D")]
	[FieldOffset(Offset = "0xC0")]
	public BasePopup _editProfilePopup;

	[Token(Token = "0x400282E")]
	[FieldOffset(Offset = "0xC8")]
	public BasePopup _leaderboardPopup;

	[Token(Token = "0x400282F")]
	[FieldOffset(Offset = "0xD0")]
	public BasePopup _socialPopup;

	[Token(Token = "0x4002830")]
	[FieldOffset(Offset = "0xD8")]
	public BasePopup _aboutPopup;

	[Token(Token = "0x4002831")]
	[FieldOffset(Offset = "0xE0")]
	public BasePopup _questPopup;

	[Token(Token = "0x4002832")]
	[FieldOffset(Offset = "0xE8")]
	public BasePopup _tutorialPopup;

	[Token(Token = "0x4002833")]
	[FieldOffset(Offset = "0xF0")]
	public BasePopup _modLoginPopup;

	[Token(Token = "0x4002834")]
	[FieldOffset(Offset = "0xF8")]
	public BasePopup _advancedConfigurationPopup;

	[Token(Token = "0x4002835")]
	[FieldOffset(Offset = "0x100")]
	public OutdatedPopup _outdatedPopup;

	[Token(Token = "0x4002836")]
	[FieldOffset(Offset = "0x108")]
	public MainBackgroundMenu _backgroundMenu;

	[Token(Token = "0x4002837")]
	[FieldOffset(Offset = "0x110")]
	protected Text _multiplayerStatusLabel;

	[Token(Token = "0x4002838")]
	[FieldOffset(Offset = "0x118")]
	protected string _lastButtonClicked;

	[Token(Token = "0x4002839")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode MainBackgroundInfo;

	[Token(Token = "0x400283A")]
	protected const float ChangeBackgroundTime = 20f;

	[Token(Token = "0x400283B")]
	[FieldOffset(Offset = "0x120")]
	private AottgMainMenuTipPanelController _tipPanel;

	[Token(Token = "0x6004CE0")]
	[Address(RVA = "0x228F380", Offset = "0x228D980", VA = "0x18228F380", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004CE1")]
	[Address(RVA = "0x228E750", Offset = "0x228CD50", VA = "0x18228E750")]
	private void SetupMainBackground()
	{
	}

	[Token(Token = "0x6004CE2")]
	[Address(RVA = "0x228F600", Offset = "0x228DC00", VA = "0x18228F600")]
	public void ShowMultiplayerRoomListPopup()
	{
	}

	[Token(Token = "0x6004CE3")]
	[Address(RVA = "0x228F5B0", Offset = "0x228DBB0", VA = "0x18228F5B0")]
	public void ShowMultiplayerMapPopup()
	{
	}

	[Token(Token = "0x6004CE4")]
	[Address(RVA = "0x228E450", Offset = "0x228CA50", VA = "0x18228E450")]
	public void OpenIntroAction(string name)
	{
	}

	[Token(Token = "0x6004CE5")]
	[Address(RVA = "0x21B9E00", Offset = "0x21B8400", VA = "0x1821B9E00")]
	public void ClosePopups()
	{
	}

	[Token(Token = "0x6004CE6")]
	[Address(RVA = "0x228E840", Offset = "0x228CE40", VA = "0x18228E840", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6004CE7")]
	[Address(RVA = "0x228E460", Offset = "0x228CA60", VA = "0x18228E460")]
	private void SetupIntroPanel()
	{
	}

	[Token(Token = "0x6004CE8")]
	[Address(RVA = "0x228E490", Offset = "0x228CA90", VA = "0x18228E490")]
	private void SetupLabels()
	{
	}

	[Token(Token = "0x6004CE9")]
	[Address(RVA = "0x228DE00", Offset = "0x228C400", VA = "0x18228DE00")]
	private void ChangeMainBackground()
	{
	}

	[Token(Token = "0x6004CEA")]
	[Address(RVA = "0x228FA70", Offset = "0x228E070", VA = "0x18228FA70")]
	[IteratorStateMachine(typeof(_003CWaitAndChangeBackground_003Ed__30))]
	private IEnumerator WaitAndChangeBackground()
	{
		return null;
	}

	[Token(Token = "0x6004CEB")]
	[Address(RVA = "0x228F650", Offset = "0x228DC50", VA = "0x18228F650")]
	private void Update()
	{
	}

	[Token(Token = "0x6004CEC")]
	[Address(RVA = "0x228DEF0", Offset = "0x228C4F0", VA = "0x18228DEF0")]
	private bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x6004CED")]
	[Address(RVA = "0x228E020", Offset = "0x228C620", VA = "0x18228E020")]
	private void OnIntroButtonClick(string name)
	{
	}

	[Token(Token = "0x6004CEE")]
	[Address(RVA = "0x21DA7E0", Offset = "0x21D8DE0", VA = "0x1821DA7E0")]
	public MainMenu()
	{
	}
}

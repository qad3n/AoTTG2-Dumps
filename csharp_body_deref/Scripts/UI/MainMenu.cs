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

namespace UI;

[Token(Token = "0x2000882")]
internal class MainMenu : BaseMenu
{
	[Token(Token = "0x2000883")]
	[CompilerGenerated]
	private sealed class _003CWaitAndChangeBackground_003Ed__16 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B16")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B17")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B18")]
		[FieldOffset(Offset = "0x20")]
		public MainMenu _003C_003E4__this;

		[Token(Token = "0x17000E2F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005124")]
			[Address(RVA = "0x5C58500", Offset = "0x5C57500", VA = "0x5C58500", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E30")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005126")]
			[Address(RVA = "0x5C58550", Offset = "0x5C57550", VA = "0x5C58550", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005121")]
		[Address(RVA = "0x5C58290", Offset = "0x5C57290", VA = "0x5C58290")]
		[DebuggerHidden]
		public _003CWaitAndChangeBackground_003Ed__16(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005122")]
		[Address(RVA = "0x5C58420", Offset = "0x5C57420", VA = "0x5C58420", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005123")]
		[Address(RVA = "0x5C58430", Offset = "0x5C57430", VA = "0x5C58430", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005125")]
		[Address(RVA = "0x5C58510", Offset = "0x5C57510", VA = "0x5C58510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002B0F")]
	[FieldOffset(Offset = "0x98")]
	public BasePopup _leaderboardPopup;

	[Token(Token = "0x4002B10")]
	[FieldOffset(Offset = "0xA0")]
	public BasePopup _questPopup;

	[Token(Token = "0x4002B11")]
	[FieldOffset(Offset = "0xA8")]
	public MainBackgroundMenu _backgroundMenu;

	[Token(Token = "0x4002B12")]
	[FieldOffset(Offset = "0xB0")]
	protected string _lastButtonClicked;

	[Token(Token = "0x4002B13")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode MainBackgroundInfo;

	[Token(Token = "0x4002B14")]
	protected const float ChangeBackgroundTime = 20f;

	[Token(Token = "0x4002B15")]
	[FieldOffset(Offset = "0xB8")]
	private AottgMainMenuTipPanelController _tipPanel;

	[Token(Token = "0x6005114")]
	[Address(RVA = "0x5C57AD0", Offset = "0x5C56AD0", VA = "0x5C57AD0", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6005115")]
	[Address(RVA = "0x5C57C20", Offset = "0x5C56C20", VA = "0x5C57C20")]
	private void SetupMainBackground()
	{
	}

	[Token(Token = "0x6005116")]
	[Address(RVA = "0x5C57DB0", Offset = "0x5C56DB0", VA = "0x5C57DB0")]
	public void ShowMultiplayerRoomList()
	{
	}

	[Token(Token = "0x6005117")]
	[Address(RVA = "0x5C57E50", Offset = "0x5C56E50", VA = "0x5C57E50")]
	public void ShowMultiplayerServerSelect()
	{
	}

	[Token(Token = "0x6005118")]
	[Address(RVA = "0x5C57EF0", Offset = "0x5C56EF0", VA = "0x5C57EF0")]
	public void OpenIntroAction(string name)
	{
	}

	[Token(Token = "0x6005119")]
	[Address(RVA = "0x5C58070", Offset = "0x5C57070", VA = "0x5C58070")]
	public void ClosePopups()
	{
	}

	[Token(Token = "0x600511A")]
	[Address(RVA = "0x5C58090", Offset = "0x5C57090", VA = "0x5C58090", Slot = "5")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x600511B")]
	[Address(RVA = "0x5C57D10", Offset = "0x5C56D10", VA = "0x5C57D10")]
	private void SetupIntroPanel()
	{
	}

	[Token(Token = "0x600511C")]
	[Address(RVA = "0x5C58250", Offset = "0x5C57250", VA = "0x5C58250")]
	private void ChangeMainBackground()
	{
	}

	[Token(Token = "0x600511D")]
	[Address(RVA = "0x5C57D40", Offset = "0x5C56D40", VA = "0x5C57D40")]
	[IteratorStateMachine(typeof(_003CWaitAndChangeBackground_003Ed__16))]
	private IEnumerator WaitAndChangeBackground()
	{
		return null;
	}

	[Token(Token = "0x600511E")]
	[Address(RVA = "0x5C582B0", Offset = "0x5C572B0", VA = "0x5C582B0")]
	private bool IsPopupActive()
	{
		return default(bool);
	}

	[Token(Token = "0x600511F")]
	[Address(RVA = "0x5C57F00", Offset = "0x5C56F00", VA = "0x5C57F00")]
	private void OnIntroButtonClick(string name)
	{
	}

	[Token(Token = "0x6005120")]
	[Address(RVA = "0x5C58410", Offset = "0x5C57410", VA = "0x5C58410")]
	public MainMenu()
	{
	}
}

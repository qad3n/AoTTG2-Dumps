// ==================== AoTTG2 cross-reference ====================
// Type: UI.SongPopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/SongPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007C3")]
internal class SongPopup : BasePopup
{
	[Token(Token = "0x20007C4")]
	[CompilerGenerated]
	private sealed class _003CShowNextSongPopup_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400273D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400273E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400273F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public SongPopup _003C_003E4__this;

		[Token(Token = "0x17000D91")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004B68")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D92")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004B6A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004B65")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CShowNextSongPopup_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004B66")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004B67")]
		[Address(RVA = "0x2283060", Offset = "0x2281660", VA = "0x182283060", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004B69")]
		[Address(RVA = "0x22832C0", Offset = "0x22818C0", VA = "0x1822832C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400273A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private ushort ienumCount;

	[Token(Token = "0x400273B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _songName;

	[Token(Token = "0x400273C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _authorName;

	[Token(Token = "0x17000D82")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6004B51")]
		[Address(RVA = "0x846F80", Offset = "0x845580", VA = "0x180846F80", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000D83")]
	protected override float Width
	{
		[Token(Token = "0x6004B52")]
		[Address(RVA = "0x227FD70", Offset = "0x227E370", VA = "0x18227FD70", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D84")]
	protected override float Height
	{
		[Token(Token = "0x6004B53")]
		[Address(RVA = "0x21C3380", Offset = "0x21C1980", VA = "0x1821C3380", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D85")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004B54")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D86")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6004B55")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D87")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004B56")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D88")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004B57")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D89")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004B58")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D8A")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6004B59")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D8B")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6004B5A")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D8C")]
	protected override float BottomBarSpacing
	{
		[Token(Token = "0x6004B5B")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D8D")]
	protected override int BottomBarPadding
	{
		[Token(Token = "0x6004B5C")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "39")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D8E")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6004B5D")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D8F")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6004B5E")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000D90")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004B5F")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6004B60")]
	[Address(RVA = "0x227F5E0", Offset = "0x227DBE0", VA = "0x18227F5E0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004B61")]
	[Address(RVA = "0x227F1F0", Offset = "0x227D7F0", VA = "0x18227F1F0")]
	public void ChangeSongInfo(string name)
	{
	}

	[Token(Token = "0x6004B62")]
	[Address(RVA = "0x227F370", Offset = "0x227D970", VA = "0x18227F370")]
	public static void ParseMusicString(string input, out List<string> authors, out string song)
	{
	}

	[Token(Token = "0x6004B63")]
	[Address(RVA = "0x227FD00", Offset = "0x227E300", VA = "0x18227FD00")]
	[IteratorStateMachine(typeof(_003CShowNextSongPopup_003Ed__36))]
	public IEnumerator ShowNextSongPopup()
	{
		return null;
	}

	[Token(Token = "0x6004B64")]
	[Address(RVA = "0x21C11A0", Offset = "0x21BF7A0", VA = "0x1821C11A0")]
	public SongPopup()
	{
	}
}

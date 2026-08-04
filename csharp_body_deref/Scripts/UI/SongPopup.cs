// ==================== AoTTG2 cross-reference ====================
// Type: UI.SongPopup
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000667")]
internal class SongPopup : BasePopup
{
	[Token(Token = "0x2000668")]
	[CompilerGenerated]
	private sealed class _003CShowNextSongPopup_003Ed__34 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001F62")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001F63")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001F64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public SongPopup _003C_003E4__this;

		[Token(Token = "0x17000C47")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600406C")]
			[Address(RVA = "0x42EA8C0", Offset = "0x42EA8C0", VA = "0x42EA8C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000C48")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600406E")]
			[Address(RVA = "0x42EA910", Offset = "0x42EA910", VA = "0x42EA910", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004069")]
		[Address(RVA = "0x42EA780", Offset = "0x42EA780", VA = "0x42EA780")]
		[DebuggerHidden]
		public _003CShowNextSongPopup_003Ed__34(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600406A")]
		[Address(RVA = "0x42EA7B0", Offset = "0x42EA7B0", VA = "0x42EA7B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600406B")]
		[Address(RVA = "0x42EA7C0", Offset = "0x42EA7C0", VA = "0x42EA7C0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600406D")]
		[Address(RVA = "0x42EA8D0", Offset = "0x42EA8D0", VA = "0x42EA8D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001F5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private ushort ienumCount;

	[Token(Token = "0x4001F60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _songName;

	[Token(Token = "0x4001F61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _authorName;

	[Token(Token = "0x17000C39")]
	protected override float Width
	{
		[Token(Token = "0x6004056")]
		[Address(RVA = "0x42E9B50", Offset = "0x42E9B50", VA = "0x42E9B50", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C3A")]
	protected override float Height
	{
		[Token(Token = "0x6004057")]
		[Address(RVA = "0x42E9B60", Offset = "0x42E9B60", VA = "0x42E9B60", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C3B")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004058")]
		[Address(RVA = "0x42E9B70", Offset = "0x42E9B70", VA = "0x42E9B70", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C3C")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6004059")]
		[Address(RVA = "0x42E9B80", Offset = "0x42E9B80", VA = "0x42E9B80", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000C3D")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x600405A")]
		[Address(RVA = "0x42E9B90", Offset = "0x42E9B90", VA = "0x42E9B90", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C3E")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x600405B")]
		[Address(RVA = "0x42E9BA0", Offset = "0x42E9BA0", VA = "0x42E9BA0", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C3F")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x600405C")]
		[Address(RVA = "0x42E9BB0", Offset = "0x42E9BB0", VA = "0x42E9BB0", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C40")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x600405D")]
		[Address(RVA = "0x42E9BC0", Offset = "0x42E9BC0", VA = "0x42E9BC0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C41")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x600405E")]
		[Address(RVA = "0x42E9BD0", Offset = "0x42E9BD0", VA = "0x42E9BD0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C42")]
	protected override float BottomBarSpacing
	{
		[Token(Token = "0x600405F")]
		[Address(RVA = "0x42E9BE0", Offset = "0x42E9BE0", VA = "0x42E9BE0", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000C43")]
	protected override int BottomBarPadding
	{
		[Token(Token = "0x6004060")]
		[Address(RVA = "0x42E9BF0", Offset = "0x42E9BF0", VA = "0x42E9BF0", Slot = "39")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C44")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6004061")]
		[Address(RVA = "0x42E9C00", Offset = "0x42E9C00", VA = "0x42E9C00", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C45")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6004062")]
		[Address(RVA = "0x42E9C10", Offset = "0x42E9C10", VA = "0x42E9C10", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000C46")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6004063")]
		[Address(RVA = "0x42E9C20", Offset = "0x42E9C20", VA = "0x42E9C20", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6004064")]
	[Address(RVA = "0x42E9C30", Offset = "0x42E9C30", VA = "0x42E9C30", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004065")]
	[Address(RVA = "0x42EA290", Offset = "0x42EA290", VA = "0x42EA290")]
	public void ChangeSongInfo(string name)
	{
	}

	[Token(Token = "0x6004066")]
	[Address(RVA = "0x42EA3F0", Offset = "0x42EA3F0", VA = "0x42EA3F0")]
	public static void ParseMusicString(string input, out List<string> authors, out string song)
	{
	}

	[Token(Token = "0x6004067")]
	[Address(RVA = "0x42EA710", Offset = "0x42EA710", VA = "0x42EA710")]
	[IteratorStateMachine(typeof(_003CShowNextSongPopup_003Ed__34))]
	public IEnumerator ShowNextSongPopup()
	{
		return null;
	}

	[Token(Token = "0x6004068")]
	[Address(RVA = "0x42EA7A0", Offset = "0x42EA7A0", VA = "0x42EA7A0")]
	public SongPopup()
	{
	}
}

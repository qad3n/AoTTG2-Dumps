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

[Token(Token = "0x200086F")]
internal class SongPopup : BasePopup
{
	[Token(Token = "0x2000870")]
	[CompilerGenerated]
	private sealed class _003CShowNextSongPopup_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002ABD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002ABE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002ABF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public SongPopup _003C_003E4__this;

		[Token(Token = "0x17000E02")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005088")]
			[Address(RVA = "0x5C50830", Offset = "0x5C4F830", VA = "0x5C50830", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000E03")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600508A")]
			[Address(RVA = "0x5C50880", Offset = "0x5C4F880", VA = "0x5C50880", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005085")]
		[Address(RVA = "0x5C50700", Offset = "0x5C4F700", VA = "0x5C50700")]
		[DebuggerHidden]
		public _003CShowNextSongPopup_003Ed__36(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005086")]
		[Address(RVA = "0x5C50730", Offset = "0x5C4F730", VA = "0x5C50730", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005087")]
		[Address(RVA = "0x5C50740", Offset = "0x5C4F740", VA = "0x5C50740", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005089")]
		[Address(RVA = "0x5C50840", Offset = "0x5C4F840", VA = "0x5C50840", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002ABA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private ushort ienumCount;

	[Token(Token = "0x4002ABB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _songName;

	[Token(Token = "0x4002ABC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _authorName;

	[Token(Token = "0x17000DF3")]
	public override PopupEscapeBehavior EscapeBehavior
	{
		[Token(Token = "0x6005071")]
		[Address(RVA = "0x5C4FB20", Offset = "0x5C4EB20", VA = "0x5C4FB20", Slot = "55")]
		get
		{
			return default(PopupEscapeBehavior);
		}
	}

	[Token(Token = "0x17000DF4")]
	protected override float Width
	{
		[Token(Token = "0x6005072")]
		[Address(RVA = "0x5C4FB30", Offset = "0x5C4EB30", VA = "0x5C4FB30", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DF5")]
	protected override float Height
	{
		[Token(Token = "0x6005073")]
		[Address(RVA = "0x5C4FB40", Offset = "0x5C4EB40", VA = "0x5C4FB40", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DF6")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6005074")]
		[Address(RVA = "0x5C4FB50", Offset = "0x5C4EB50", VA = "0x5C4FB50", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DF7")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6005075")]
		[Address(RVA = "0x5C4FB60", Offset = "0x5C4EB60", VA = "0x5C4FB60", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000DF8")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6005076")]
		[Address(RVA = "0x5C4FB70", Offset = "0x5C4EB70", VA = "0x5C4FB70", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DF9")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005077")]
		[Address(RVA = "0x5C4FB80", Offset = "0x5C4EB80", VA = "0x5C4FB80", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000DFA")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6005078")]
		[Address(RVA = "0x5C4FB90", Offset = "0x5C4EB90", VA = "0x5C4FB90", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000DFB")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6005079")]
		[Address(RVA = "0x5C4FBA0", Offset = "0x5C4EBA0", VA = "0x5C4FBA0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DFC")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x600507A")]
		[Address(RVA = "0x5C4FBB0", Offset = "0x5C4EBB0", VA = "0x5C4FBB0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DFD")]
	protected override float BottomBarSpacing
	{
		[Token(Token = "0x600507B")]
		[Address(RVA = "0x5C4FBC0", Offset = "0x5C4EBC0", VA = "0x5C4FBC0", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000DFE")]
	protected override int BottomBarPadding
	{
		[Token(Token = "0x600507C")]
		[Address(RVA = "0x5C4FBD0", Offset = "0x5C4EBD0", VA = "0x5C4FBD0", Slot = "39")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000DFF")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x600507D")]
		[Address(RVA = "0x5C4FBE0", Offset = "0x5C4EBE0", VA = "0x5C4FBE0", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E00")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x600507E")]
		[Address(RVA = "0x5C4FBF0", Offset = "0x5C4EBF0", VA = "0x5C4FBF0", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000E01")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x600507F")]
		[Address(RVA = "0x5C4FC00", Offset = "0x5C4EC00", VA = "0x5C4FC00", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6005080")]
	[Address(RVA = "0x5C4FC10", Offset = "0x5C4EC10", VA = "0x5C4FC10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005081")]
	[Address(RVA = "0x5C50230", Offset = "0x5C4F230", VA = "0x5C50230")]
	public void ChangeSongInfo(string name)
	{
	}

	[Token(Token = "0x6005082")]
	[Address(RVA = "0x5C50380", Offset = "0x5C4F380", VA = "0x5C50380")]
	public static void ParseMusicString(string input, out List<string> authors, out string song)
	{
	}

	[Token(Token = "0x6005083")]
	[Address(RVA = "0x5C50690", Offset = "0x5C4F690", VA = "0x5C50690")]
	[IteratorStateMachine(typeof(_003CShowNextSongPopup_003Ed__36))]
	public IEnumerator ShowNextSongPopup()
	{
		return null;
	}

	[Token(Token = "0x6005084")]
	[Address(RVA = "0x5C50720", Offset = "0x5C4F720", VA = "0x5C50720")]
	public SongPopup()
	{
	}
}

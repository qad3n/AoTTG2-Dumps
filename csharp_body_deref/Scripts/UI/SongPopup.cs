using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200061C")]
internal class SongPopup : BasePopup
{
	[Token(Token = "0x200061D")]
	[CompilerGenerated]
	private sealed class _003CShowNextSongPopup_003Ed__34 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001E1B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001E1C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001E1D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public SongPopup _003C_003E4__this;

		[Token(Token = "0x17000BCF")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003E1F")]
			[Address(RVA = "0x3FD7EA0", Offset = "0x3FD7EA0", VA = "0x3FD7EA0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BD0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003E21")]
			[Address(RVA = "0x3FD7EF0", Offset = "0x3FD7EF0", VA = "0x3FD7EF0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003E1C")]
		[Address(RVA = "0x3FD7D60", Offset = "0x3FD7D60", VA = "0x3FD7D60")]
		[DebuggerHidden]
		public _003CShowNextSongPopup_003Ed__34(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003E1D")]
		[Address(RVA = "0x3FD7D90", Offset = "0x3FD7D90", VA = "0x3FD7D90", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003E1E")]
		[Address(RVA = "0x3FD7DA0", Offset = "0x3FD7DA0", VA = "0x3FD7DA0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003E20")]
		[Address(RVA = "0x3FD7EB0", Offset = "0x3FD7EB0", VA = "0x3FD7EB0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001E18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private ushort ienumCount;

	[Token(Token = "0x4001E19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private Text _songName;

	[Token(Token = "0x4001E1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private Text _authorName;

	[Token(Token = "0x17000BC1")]
	protected override float Width
	{
		[Token(Token = "0x6003E09")]
		[Address(RVA = "0x3FD7130", Offset = "0x3FD7130", VA = "0x3FD7130", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC2")]
	protected override float Height
	{
		[Token(Token = "0x6003E0A")]
		[Address(RVA = "0x3FD7140", Offset = "0x3FD7140", VA = "0x3FD7140", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC3")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6003E0B")]
		[Address(RVA = "0x3FD7150", Offset = "0x3FD7150", VA = "0x3FD7150", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BC4")]
	protected override bool DoublePanelDivider
	{
		[Token(Token = "0x6003E0C")]
		[Address(RVA = "0x3FD7160", Offset = "0x3FD7160", VA = "0x3FD7160", Slot = "14")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BC5")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6003E0D")]
		[Address(RVA = "0x3FD7170", Offset = "0x3FD7170", VA = "0x3FD7170", Slot = "11")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC6")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6003E0E")]
		[Address(RVA = "0x3FD7180", Offset = "0x3FD7180", VA = "0x3FD7180", Slot = "9")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BC7")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6003E0F")]
		[Address(RVA = "0x3FD7190", Offset = "0x3FD7190", VA = "0x3FD7190", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BC8")]
	protected override float TopBarHeight
	{
		[Token(Token = "0x6003E10")]
		[Address(RVA = "0x3FD71A0", Offset = "0x3FD71A0", VA = "0x3FD71A0", Slot = "36")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC9")]
	protected override float BottomBarHeight
	{
		[Token(Token = "0x6003E11")]
		[Address(RVA = "0x3FD71B0", Offset = "0x3FD71B0", VA = "0x3FD71B0", Slot = "37")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BCA")]
	protected override float BottomBarSpacing
	{
		[Token(Token = "0x6003E12")]
		[Address(RVA = "0x3FD71C0", Offset = "0x3FD71C0", VA = "0x3FD71C0", Slot = "38")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BCB")]
	protected override int BottomBarPadding
	{
		[Token(Token = "0x6003E13")]
		[Address(RVA = "0x3FD71D0", Offset = "0x3FD71D0", VA = "0x3FD71D0", Slot = "39")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BCC")]
	protected override int TitleFontSize
	{
		[Token(Token = "0x6003E14")]
		[Address(RVA = "0x3FD71E0", Offset = "0x3FD71E0", VA = "0x3FD71E0", Slot = "40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BCD")]
	protected override int ButtonFontSize
	{
		[Token(Token = "0x6003E15")]
		[Address(RVA = "0x3FD71F0", Offset = "0x3FD71F0", VA = "0x3FD71F0", Slot = "41")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000BCE")]
	protected override PopupAnimation PopupAnimationType
	{
		[Token(Token = "0x6003E16")]
		[Address(RVA = "0x3FD7200", Offset = "0x3FD7200", VA = "0x3FD7200", Slot = "54")]
		get
		{
			return default(PopupAnimation);
		}
	}

	[Token(Token = "0x6003E17")]
	[Address(RVA = "0x3FD7210", Offset = "0x3FD7210", VA = "0x3FD7210", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003E18")]
	[Address(RVA = "0x3FD7870", Offset = "0x3FD7870", VA = "0x3FD7870")]
	public void ChangeSongInfo(string name)
	{
	}

	[Token(Token = "0x6003E19")]
	[Address(RVA = "0x3FD79D0", Offset = "0x3FD79D0", VA = "0x3FD79D0")]
	public static void ParseMusicString(string input, out List<string> authors, out string song)
	{
	}

	[Token(Token = "0x6003E1A")]
	[Address(RVA = "0x3FD7CF0", Offset = "0x3FD7CF0", VA = "0x3FD7CF0")]
	[IteratorStateMachine(typeof(_003CShowNextSongPopup_003Ed__34))]
	public IEnumerator ShowNextSongPopup()
	{
		return null;
	}

	[Token(Token = "0x6003E1B")]
	[Address(RVA = "0x3FD7D80", Offset = "0x3FD7D80", VA = "0x3FD7D80")]
	public SongPopup()
	{
	}
}

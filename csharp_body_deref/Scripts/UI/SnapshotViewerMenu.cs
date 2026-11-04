// ==================== AoTTG2 cross-reference ====================
// Type: UI.SnapshotViewerMenu
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SnapshotViewerMenu.c
// Prior real C# source (older reference): Assets/Scripts/UI/SnapshotViewerMenu/SnapshotViewerMenu.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200087E")]
internal class SnapshotViewerMenu : BaseMenu
{
	[Token(Token = "0x200087F")]
	[CompilerGenerated]
	private sealed class _003CSaveCoroutine_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002A4D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002A4E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002A4F")]
		[FieldOffset(Offset = "0x20")]
		public SnapshotViewerMenu _003C_003E4__this;

		[Token(Token = "0x17000EEE")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005181")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000EEF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005183")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600517E")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CSaveCoroutine_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600517F")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005180")]
		[Address(RVA = "0x22FDF10", Offset = "0x22FC510", VA = "0x1822FDF10", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005182")]
		[Address(RVA = "0x22FE470", Offset = "0x22FCA70", VA = "0x1822FE470", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002A45")]
	[FieldOffset(Offset = "0x98")]
	private SnapshotViewerMainPanel _mainPanel;

	[Token(Token = "0x4002A46")]
	[FieldOffset(Offset = "0xA0")]
	private SnapshotPopup _snapshotPopup;

	[Token(Token = "0x4002A47")]
	[FieldOffset(Offset = "0xA8")]
	private KillScorePopup _killScorePopup;

	[Token(Token = "0x4002A48")]
	[FieldOffset(Offset = "0xB0")]
	private Text _nameLabel;

	[Token(Token = "0x4002A49")]
	[FieldOffset(Offset = "0xB8")]
	private Text _statusLabel;

	[Token(Token = "0x4002A4A")]
	[FieldOffset(Offset = "0xC0")]
	private int _width;

	[Token(Token = "0x4002A4B")]
	[FieldOffset(Offset = "0xC4")]
	private int _height;

	[Token(Token = "0x4002A4C")]
	[FieldOffset(Offset = "0xC8")]
	private Texture2D _currentSnapshot;

	[Token(Token = "0x6005179")]
	[Address(RVA = "0x22FD910", Offset = "0x22FBF10", VA = "0x1822FD910", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x600517A")]
	[Address(RVA = "0x22FD890", Offset = "0x22FBE90", VA = "0x1822FD890")]
	public void Save()
	{
	}

	[Token(Token = "0x600517B")]
	[Address(RVA = "0x22FD820", Offset = "0x22FBE20", VA = "0x1822FD820")]
	[IteratorStateMachine(typeof(_003CSaveCoroutine_003Ed__10))]
	private IEnumerator SaveCoroutine()
	{
		return null;
	}

	[Token(Token = "0x600517C")]
	[Address(RVA = "0x22FD450", Offset = "0x22FBA50", VA = "0x1822FD450")]
	public void LoadSnapshot(int index)
	{
	}

	[Token(Token = "0x600517D")]
	[Address(RVA = "0x21DA7E0", Offset = "0x21D8DE0", VA = "0x1821DA7E0")]
	public SnapshotViewerMenu()
	{
	}
}

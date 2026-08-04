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

[Token(Token = "0x20006FF")]
internal class SnapshotViewerMenu : BaseMenu
{
	[Token(Token = "0x2000700")]
	[CompilerGenerated]
	private sealed class _003CSaveCoroutine_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40021B5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40021B6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40021B7")]
		[FieldOffset(Offset = "0x20")]
		public SnapshotViewerMenu _003C_003E4__this;

		[Token(Token = "0x17000D8E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004548")]
			[Address(RVA = "0x4353120", Offset = "0x4353120", VA = "0x4353120", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D8F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600454A")]
			[Address(RVA = "0x4353170", Offset = "0x4353170", VA = "0x4353170", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004545")]
		[Address(RVA = "0x4352B90", Offset = "0x4352B90", VA = "0x4352B90")]
		[DebuggerHidden]
		public _003CSaveCoroutine_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004546")]
		[Address(RVA = "0x4352BC0", Offset = "0x4352BC0", VA = "0x4352BC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004547")]
		[Address(RVA = "0x4352BD0", Offset = "0x4352BD0", VA = "0x4352BD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004549")]
		[Address(RVA = "0x4353130", Offset = "0x4353130", VA = "0x4353130", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40021AD")]
	[FieldOffset(Offset = "0x98")]
	private SnapshotViewerMainPanel _mainPanel;

	[Token(Token = "0x40021AE")]
	[FieldOffset(Offset = "0xA0")]
	private SnapshotPopup _snapshotPopup;

	[Token(Token = "0x40021AF")]
	[FieldOffset(Offset = "0xA8")]
	private KillScorePopup _killScorePopup;

	[Token(Token = "0x40021B0")]
	[FieldOffset(Offset = "0xB0")]
	private Text _nameLabel;

	[Token(Token = "0x40021B1")]
	[FieldOffset(Offset = "0xB8")]
	private Text _statusLabel;

	[Token(Token = "0x40021B2")]
	[FieldOffset(Offset = "0xC0")]
	private int _width;

	[Token(Token = "0x40021B3")]
	[FieldOffset(Offset = "0xC4")]
	private int _height;

	[Token(Token = "0x40021B4")]
	[FieldOffset(Offset = "0xC8")]
	private Texture2D _currentSnapshot;

	[Token(Token = "0x6004540")]
	[Address(RVA = "0x4352630", Offset = "0x4352630", VA = "0x4352630", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x6004541")]
	[Address(RVA = "0x4352070", Offset = "0x4352070", VA = "0x4352070")]
	public void Save()
	{
	}

	[Token(Token = "0x6004542")]
	[Address(RVA = "0x4352B20", Offset = "0x4352B20", VA = "0x4352B20")]
	[IteratorStateMachine(typeof(_003CSaveCoroutine_003Ed__10))]
	private IEnumerator SaveCoroutine()
	{
		return null;
	}

	[Token(Token = "0x6004543")]
	[Address(RVA = "0x43520F0", Offset = "0x43520F0", VA = "0x43520F0")]
	public void LoadSnapshot(int index)
	{
	}

	[Token(Token = "0x6004544")]
	[Address(RVA = "0x4352BB0", Offset = "0x4352BB0", VA = "0x4352BB0")]
	public SnapshotViewerMenu()
	{
	}
}

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006B1")]
internal class SnapshotViewerMenu : BaseMenu
{
	[Token(Token = "0x20006B2")]
	[CompilerGenerated]
	private sealed class _003CSaveCoroutine_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002058")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002059")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400205A")]
		[FieldOffset(Offset = "0x20")]
		public SnapshotViewerMenu _003C_003E4__this;

		[Token(Token = "0x17000D14")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60042E1")]
			[Address(RVA = "0x403DD50", Offset = "0x403DD50", VA = "0x403DD50", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D15")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60042E3")]
			[Address(RVA = "0x403DDA0", Offset = "0x403DDA0", VA = "0x403DDA0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60042DE")]
		[Address(RVA = "0x403D7C0", Offset = "0x403D7C0", VA = "0x403D7C0")]
		[DebuggerHidden]
		public _003CSaveCoroutine_003Ed__10(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60042DF")]
		[Address(RVA = "0x403D7F0", Offset = "0x403D7F0", VA = "0x403D7F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60042E0")]
		[Address(RVA = "0x403D800", Offset = "0x403D800", VA = "0x403D800", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60042E2")]
		[Address(RVA = "0x403DD60", Offset = "0x403DD60", VA = "0x403DD60", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002050")]
	[FieldOffset(Offset = "0x98")]
	private SnapshotViewerMainPanel _mainPanel;

	[Token(Token = "0x4002051")]
	[FieldOffset(Offset = "0xA0")]
	private SnapshotPopup _snapshotPopup;

	[Token(Token = "0x4002052")]
	[FieldOffset(Offset = "0xA8")]
	private KillScorePopup _killScorePopup;

	[Token(Token = "0x4002053")]
	[FieldOffset(Offset = "0xB0")]
	private Text _nameLabel;

	[Token(Token = "0x4002054")]
	[FieldOffset(Offset = "0xB8")]
	private Text _statusLabel;

	[Token(Token = "0x4002055")]
	[FieldOffset(Offset = "0xC0")]
	private int _width;

	[Token(Token = "0x4002056")]
	[FieldOffset(Offset = "0xC4")]
	private int _height;

	[Token(Token = "0x4002057")]
	[FieldOffset(Offset = "0xC8")]
	private Texture2D _currentSnapshot;

	[Token(Token = "0x60042D9")]
	[Address(RVA = "0x403D260", Offset = "0x403D260", VA = "0x403D260", Slot = "4")]
	public override void Setup()
	{
	}

	[Token(Token = "0x60042DA")]
	[Address(RVA = "0x403CCA0", Offset = "0x403CCA0", VA = "0x403CCA0")]
	public void Save()
	{
	}

	[Token(Token = "0x60042DB")]
	[Address(RVA = "0x403D750", Offset = "0x403D750", VA = "0x403D750")]
	[IteratorStateMachine(typeof(_003CSaveCoroutine_003Ed__10))]
	private IEnumerator SaveCoroutine()
	{
		return null;
	}

	[Token(Token = "0x60042DC")]
	[Address(RVA = "0x403CD20", Offset = "0x403CD20", VA = "0x403CD20")]
	public void LoadSnapshot(int index)
	{
	}

	[Token(Token = "0x60042DD")]
	[Address(RVA = "0x403D7E0", Offset = "0x403D7E0", VA = "0x403D7E0")]
	public SnapshotViewerMenu()
	{
	}
}

// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CoroutineWithData
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CoroutineWithData.c
// Prior real C# source (older reference): Assets/Scripts/Utility/CoroutineWithData.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200072B")]
internal class CoroutineWithData
{
	[Token(Token = "0x200072C")]
	[CompilerGenerated]
	private sealed class _003CRun_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400228D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400228E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400228F")]
		[FieldOffset(Offset = "0x20")]
		public CoroutineWithData _003C_003E4__this;

		[Token(Token = "0x17000DB1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004695")]
			[Address(RVA = "0x438C7D0", Offset = "0x438C7D0", VA = "0x438C7D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000DB2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004697")]
			[Address(RVA = "0x438C820", Offset = "0x438C820", VA = "0x438C820", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004692")]
		[Address(RVA = "0x438C620", Offset = "0x438C620", VA = "0x438C620")]
		[DebuggerHidden]
		public _003CRun_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004693")]
		[Address(RVA = "0x438C640", Offset = "0x438C640", VA = "0x438C640", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004694")]
		[Address(RVA = "0x438C650", Offset = "0x438C650", VA = "0x438C650", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004696")]
		[Address(RVA = "0x438C7E0", Offset = "0x438C7E0", VA = "0x438C7E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400228A")]
	[FieldOffset(Offset = "0x18")]
	public object Result;

	[Token(Token = "0x400228B")]
	[FieldOffset(Offset = "0x20")]
	private IEnumerator _target;

	[Token(Token = "0x400228C")]
	[FieldOffset(Offset = "0x28")]
	public bool Done;

	[Token(Token = "0x17000DB0")]
	public Coroutine Coroutine
	{
		[Token(Token = "0x600468E")]
		[Address(RVA = "0x438C4E0", Offset = "0x438C4E0", VA = "0x438C4E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600468F")]
		[Address(RVA = "0x438C4F0", Offset = "0x438C4F0", VA = "0x438C4F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004690")]
	[Address(RVA = "0x438C500", Offset = "0x438C500", VA = "0x438C500")]
	public CoroutineWithData(MonoBehaviour owner, IEnumerator target)
	{
	}

	[Token(Token = "0x6004691")]
	[Address(RVA = "0x438C5B0", Offset = "0x438C5B0", VA = "0x438C5B0")]
	[IteratorStateMachine(typeof(_003CRun_003Ed__8))]
	private IEnumerator Run()
	{
		return null;
	}
}

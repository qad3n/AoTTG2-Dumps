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

[Token(Token = "0x2000921")]
internal class CoroutineWithData
{
	[Token(Token = "0x2000922")]
	[CompilerGenerated]
	private sealed class _003CRun_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002E07")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002E08")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002E09")]
		[FieldOffset(Offset = "0x20")]
		public CoroutineWithData _003C_003E4__this;

		[Token(Token = "0x17000EFD")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6005665")]
			[Address(RVA = "0x5CEB4D0", Offset = "0x5CEA4D0", VA = "0x5CEB4D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000EFE")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005667")]
			[Address(RVA = "0x5CEB520", Offset = "0x5CEA520", VA = "0x5CEB520", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6005662")]
		[Address(RVA = "0x5CEB320", Offset = "0x5CEA320", VA = "0x5CEB320")]
		[DebuggerHidden]
		public _003CRun_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6005663")]
		[Address(RVA = "0x5CEB340", Offset = "0x5CEA340", VA = "0x5CEB340", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6005664")]
		[Address(RVA = "0x5CEB350", Offset = "0x5CEA350", VA = "0x5CEB350", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6005666")]
		[Address(RVA = "0x5CEB4E0", Offset = "0x5CEA4E0", VA = "0x5CEB4E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002E04")]
	[FieldOffset(Offset = "0x18")]
	public object Result;

	[Token(Token = "0x4002E05")]
	[FieldOffset(Offset = "0x20")]
	private IEnumerator _target;

	[Token(Token = "0x4002E06")]
	[FieldOffset(Offset = "0x28")]
	public bool Done;

	[Token(Token = "0x17000EFC")]
	public Coroutine Coroutine
	{
		[Token(Token = "0x600565E")]
		[Address(RVA = "0x5CEB1E0", Offset = "0x5CEA1E0", VA = "0x5CEB1E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600565F")]
		[Address(RVA = "0x5CEB1F0", Offset = "0x5CEA1F0", VA = "0x5CEB1F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005660")]
	[Address(RVA = "0x5CEB200", Offset = "0x5CEA200", VA = "0x5CEB200")]
	public CoroutineWithData(MonoBehaviour owner, IEnumerator target)
	{
	}

	[Token(Token = "0x6005661")]
	[Address(RVA = "0x5CEB2B0", Offset = "0x5CEA2B0", VA = "0x5CEB2B0")]
	[IteratorStateMachine(typeof(_003CRun_003Ed__8))]
	private IEnumerator Run()
	{
		return null;
	}
}

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

[Token(Token = "0x20008B6")]
internal class CoroutineWithData
{
	[Token(Token = "0x20008B7")]
	[CompilerGenerated]
	private sealed class _003CRun_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002B50")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002B51")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002B52")]
		[FieldOffset(Offset = "0x20")]
		public CoroutineWithData _003C_003E4__this;

		[Token(Token = "0x17000F1A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600530E")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000F1B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6005310")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600530B")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRun_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600530C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600530D")]
		[Address(RVA = "0x2340140", Offset = "0x233E740", VA = "0x182340140", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600530F")]
		[Address(RVA = "0x2340220", Offset = "0x233E820", VA = "0x182340220", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002B4D")]
	[FieldOffset(Offset = "0x18")]
	public object Result;

	[Token(Token = "0x4002B4E")]
	[FieldOffset(Offset = "0x20")]
	private IEnumerator _target;

	[Token(Token = "0x4002B4F")]
	[FieldOffset(Offset = "0x28")]
	public bool Done;

	[Token(Token = "0x17000F19")]
	public Coroutine Coroutine
	{
		[Token(Token = "0x6005307")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005308")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005309")]
	[Address(RVA = "0x23329D0", Offset = "0x2330FD0", VA = "0x1823329D0")]
	public CoroutineWithData(MonoBehaviour owner, IEnumerator target)
	{
	}

	[Token(Token = "0x600530A")]
	[Address(RVA = "0x2332960", Offset = "0x2330F60", VA = "0x182332960")]
	[IteratorStateMachine(typeof(_003CRun_003Ed__8))]
	private IEnumerator Run()
	{
		return null;
	}
}

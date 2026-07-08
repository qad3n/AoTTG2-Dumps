using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x20006E3")]
internal class CoroutineWithData
{
	[Token(Token = "0x20006E4")]
	[CompilerGenerated]
	private sealed class _003CRun_003Ed__8 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002134")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002135")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002136")]
		[FieldOffset(Offset = "0x20")]
		public CoroutineWithData _003C_003E4__this;

		[Token(Token = "0x17000D3F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600444A")]
			[Address(RVA = "0x405BE70", Offset = "0x405BE70", VA = "0x405BE70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000D40")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600444C")]
			[Address(RVA = "0x405BEC0", Offset = "0x405BEC0", VA = "0x405BEC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004447")]
		[Address(RVA = "0x405BCC0", Offset = "0x405BCC0", VA = "0x405BCC0")]
		[DebuggerHidden]
		public _003CRun_003Ed__8(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004448")]
		[Address(RVA = "0x405BCE0", Offset = "0x405BCE0", VA = "0x405BCE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004449")]
		[Address(RVA = "0x405BCF0", Offset = "0x405BCF0", VA = "0x405BCF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600444B")]
		[Address(RVA = "0x405BE80", Offset = "0x405BE80", VA = "0x405BE80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4002131")]
	[FieldOffset(Offset = "0x18")]
	public object Result;

	[Token(Token = "0x4002132")]
	[FieldOffset(Offset = "0x20")]
	private IEnumerator _target;

	[Token(Token = "0x4002133")]
	[FieldOffset(Offset = "0x28")]
	public bool Done;

	[Token(Token = "0x17000D3E")]
	public Coroutine Coroutine
	{
		[Token(Token = "0x6004443")]
		[Address(RVA = "0x405BB80", Offset = "0x405BB80", VA = "0x405BB80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004444")]
		[Address(RVA = "0x405BB90", Offset = "0x405BB90", VA = "0x405BB90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004445")]
	[Address(RVA = "0x405BBA0", Offset = "0x405BBA0", VA = "0x405BBA0")]
	public CoroutineWithData(MonoBehaviour owner, IEnumerator target)
	{
	}

	[Token(Token = "0x6004446")]
	[Address(RVA = "0x405BC50", Offset = "0x405BC50", VA = "0x405BC50")]
	[IteratorStateMachine(typeof(_003CRun_003Ed__8))]
	private IEnumerator Run()
	{
		return null;
	}
}

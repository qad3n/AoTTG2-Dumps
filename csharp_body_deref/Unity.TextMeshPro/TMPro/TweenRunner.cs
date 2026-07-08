using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200001C")]
internal class TweenRunner<T> where T : struct, ITweenValue
{
	[Token(Token = "0x200001D")]
	[CompilerGenerated]
	private sealed class _003CStart_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000081")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000082")]
		[FieldOffset(Offset = "0x0")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000083")]
		[FieldOffset(Offset = "0x0")]
		public T tweenInfo;

		[Token(Token = "0x4000084")]
		[FieldOffset(Offset = "0x0")]
		private float _003CelapsedTime_003E5__2;

		[Token(Token = "0x17000016")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000081")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000017")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000083")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600007E")]
		[DebuggerHidden]
		public _003CStart_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600007F")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000080")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000082")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x0")]
	protected MonoBehaviour m_CoroutineContainer;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x0")]
	protected IEnumerator m_Tween;

	[Token(Token = "0x6000079")]
	[IteratorStateMachine(typeof(TweenRunner<>._003CStart_003Ed__2))]
	private static IEnumerator Start(T tweenInfo)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	public void Init(MonoBehaviour coroutineContainer)
	{
	}

	[Token(Token = "0x600007B")]
	public void StartTween(T info)
	{
	}

	[Token(Token = "0x600007C")]
	public void StopTween()
	{
	}

	[Token(Token = "0x600007D")]
	public TweenRunner()
	{
	}
}

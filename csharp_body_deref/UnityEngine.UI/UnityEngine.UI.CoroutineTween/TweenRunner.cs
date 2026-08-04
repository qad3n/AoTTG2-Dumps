// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.CoroutineTween.TweenRunner
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UI.CoroutineTween;

[Token(Token = "0x2000090")]
internal class TweenRunner<T> where T : struct, ITweenValue
{
	[Token(Token = "0x2000091")]
	[CompilerGenerated]
	private sealed class _003CStart_003Ed__2 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000287")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000288")]
		[FieldOffset(Offset = "0x0")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000289")]
		[FieldOffset(Offset = "0x0")]
		public T tweenInfo;

		[Token(Token = "0x400028A")]
		[FieldOffset(Offset = "0x0")]
		private float _003CelapsedTime_003E5__2;

		[Token(Token = "0x17000167")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000584")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000168")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000586")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000581")]
		[DebuggerHidden]
		public _003CStart_003Ed__2(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000582")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000583")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000585")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000285")]
	[FieldOffset(Offset = "0x0")]
	protected MonoBehaviour m_CoroutineContainer;

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x0")]
	protected IEnumerator m_Tween;

	[Token(Token = "0x600057C")]
	[IteratorStateMachine(typeof(TweenRunner<>._003CStart_003Ed__2))]
	private static IEnumerator Start(T tweenInfo)
	{
		return null;
	}

	[Token(Token = "0x600057D")]
	public void Init(MonoBehaviour coroutineContainer)
	{
	}

	[Token(Token = "0x600057E")]
	public void StartTween(T info)
	{
	}

	[Token(Token = "0x600057F")]
	public void StopTween()
	{
	}

	[Token(Token = "0x6000580")]
	public TweenRunner()
	{
	}
}

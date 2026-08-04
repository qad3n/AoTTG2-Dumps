// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Framer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Framer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200003D")]
public class Framer<T>
{
	[Token(Token = "0x200003E")]
	[CompilerGenerated]
	private sealed class _003CFrame_003Ed__4 : IEnumerable<T[]>, IEnumerable, IEnumerator<T[]>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000106")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000107")]
		[FieldOffset(Offset = "0x0")]
		private T[] _003C_003E2__current;

		[Token(Token = "0x4000108")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x4000109")]
		[FieldOffset(Offset = "0x0")]
		public Framer<T> _003C_003E4__this;

		[Token(Token = "0x400010A")]
		[FieldOffset(Offset = "0x0")]
		private T[] buf;

		[Token(Token = "0x400010B")]
		[FieldOffset(Offset = "0x0")]
		public T[] _003C_003E3__buf;

		[Token(Token = "0x400010C")]
		[FieldOffset(Offset = "0x0")]
		private int _003CbufPos_003E5__2;

		[Token(Token = "0x17000059")]
		private T[] System_002ECollections_002EGeneric_002EIEnumerator_003CT_005B_005D_003E_002ECurrent
		{
			[Token(Token = "0x6000148")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700005A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600014A")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000145")]
		[DebuggerHidden]
		public _003CFrame_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000146")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000147")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000149")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x600014B")]
		[DebuggerHidden]
		private IEnumerator<T[]> System_002ECollections_002EGeneric_002EIEnumerable_003CT_005B_005D_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x600014C")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x0")]
	protected T[] frame;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x0")]
	protected int sizeofT;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x0")]
	protected int framePos;

	[Token(Token = "0x6000143")]
	public Framer(int frameSize)
	{
	}

	[Token(Token = "0x6000144")]
	[IteratorStateMachine(typeof(Framer<>._003CFrame_003Ed__4))]
	public virtual IEnumerable<T[]> Frame(T[] buf)
	{
		return null;
	}
}

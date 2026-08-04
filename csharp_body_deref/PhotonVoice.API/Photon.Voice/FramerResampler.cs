// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.FramerResampler
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

[Token(Token = "0x200003F")]
public class FramerResampler<T> : Framer<T>
{
	[Token(Token = "0x2000040")]
	[CompilerGenerated]
	private sealed class _003CFrame_003Ed__14 : IEnumerable<T[]>, IEnumerable, IEnumerator<T[]>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400011A")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003E1__state;

		[Token(Token = "0x400011B")]
		[FieldOffset(Offset = "0x0")]
		private T[] _003C_003E2__current;

		[Token(Token = "0x400011C")]
		[FieldOffset(Offset = "0x0")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x400011D")]
		[FieldOffset(Offset = "0x0")]
		private T[] bufT;

		[Token(Token = "0x400011E")]
		[FieldOffset(Offset = "0x0")]
		public T[] _003C_003E3__bufT;

		[Token(Token = "0x400011F")]
		[FieldOffset(Offset = "0x0")]
		public FramerResampler<T> _003C_003E4__this;

		[Token(Token = "0x4000120")]
		[FieldOffset(Offset = "0x0")]
		private int _003CbufPos_003E5__2;

		[Token(Token = "0x4000121")]
		[FieldOffset(Offset = "0x0")]
		private int _003CbufLen_003E5__3;

		[Token(Token = "0x4000122")]
		[FieldOffset(Offset = "0x0")]
		private float[] _003Cbuf_003E5__4;

		[Token(Token = "0x4000123")]
		[FieldOffset(Offset = "0x0")]
		private float[] _003Cframe_003E5__5;

		[Token(Token = "0x4000124")]
		[FieldOffset(Offset = "0x0")]
		private float _003CdeltaK_003E5__6;

		[Token(Token = "0x4000125")]
		[FieldOffset(Offset = "0x0")]
		private short[] _003Cbuf_003E5__7;

		[Token(Token = "0x4000126")]
		[FieldOffset(Offset = "0x0")]
		private short[] _003Cframe_003E5__8;

		[Token(Token = "0x1700005B")]
		private T[] System_002ECollections_002EGeneric_002EIEnumerator_003CT_005B_005D_003E_002ECurrent
		{
			[Token(Token = "0x6000152")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700005C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000154")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600014F")]
		[DebuggerHidden]
		public _003CFrame_003Ed__14(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000150")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000151")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000153")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000155")]
		[DebuggerHidden]
		private IEnumerator<T[]> System_002ECollections_002EGeneric_002EIEnumerable_003CT_005B_005D_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000156")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x0")]
	protected bool TisFloat;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x0")]
	protected bool interpolate;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x0")]
	protected int channels;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x0")]
	protected int resampleNum;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x0")]
	protected int resampleDen;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x0")]
	protected float resampleRatioInv;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x0")]
	protected int delta;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x0")]
	private T inSampleCh1;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x0")]
	private T inSampleCh2;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x0")]
	private float inSampleCh1Interp;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x0")]
	private float inSampleCh2Interp;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x0")]
	private float inSampleCh1InterpChange;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x0")]
	private float inSampleCh2InterpChange;

	[Token(Token = "0x600014D")]
	public FramerResampler(int frameSize, int channels, int resampleNum, int resampleDen, bool interpolate)
	{
	}

	[Token(Token = "0x600014E")]
	[IteratorStateMachine(typeof(FramerResampler<>._003CFrame_003Ed__14))]
	public override IEnumerable<T[]> Frame(T[] bufT)
	{
		return null;
	}
}

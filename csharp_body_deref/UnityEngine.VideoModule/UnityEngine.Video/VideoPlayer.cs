// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Video.VideoPlayer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Video;

[Token(Token = "0x200000C")]
[UnityEngine.Bindings.NativeHeader("Modules/Video/Public/VideoPlayer.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class VideoPlayer : Behaviour
{
	[Token(Token = "0x200000D")]
	public delegate void EventHandler(VideoPlayer source);

	[Token(Token = "0x200000E")]
	public delegate void ErrorEventHandler(VideoPlayer source, string message);

	[Token(Token = "0x200000F")]
	public delegate void FrameReadyEventHandler(VideoPlayer source, long frameIdx);

	[Token(Token = "0x2000010")]
	public delegate void TimeEventHandler(VideoPlayer source, double seconds);

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x18")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private EventHandler prepareCompleted;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private EventHandler loopPointReached;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private EventHandler started;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private EventHandler frameDropped;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x38")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private ErrorEventHandler errorReceived;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private EventHandler seekCompleted;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private TimeEventHandler clockResyncOccurred;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private FrameReadyEventHandler frameReady;

	[Token(Token = "0x17000001")]
	public VideoSource source
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x3312310", Offset = "0x3310910", VA = "0x183312310")]
		get
		{
			return default(VideoSource);
		}
	}

	[Token(Token = "0x17000002")]
	[UnityEngine.Bindings.NativeName("VideoUrl")]
	public string url
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x33124A0", Offset = "0x3310AA0", VA = "0x1833124A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x3312980", Offset = "0x3310F80", VA = "0x183312980")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool isPrepared
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x33120D0", Offset = "0x33106D0", VA = "0x1833120D0")]
		[UnityEngine.Bindings.NativeName("IsPrepared")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	public bool isPlaying
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x3312010", Offset = "0x3310610", VA = "0x183312010")]
		[UnityEngine.Bindings.NativeName("IsPlaying")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000005")]
	public bool isPaused
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x3311F50", Offset = "0x3310550", VA = "0x183311F50")]
		[UnityEngine.Bindings.NativeName("IsPaused")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000006")]
	[UnityEngine.Bindings.NativeName("SecPosition")]
	public double time
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x33123D0", Offset = "0x33109D0", VA = "0x1833123D0")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x33128A0", Offset = "0x3310EA0", VA = "0x1833128A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	[UnityEngine.Bindings.NativeName("FramePosition")]
	public long frame
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x3311DD0", Offset = "0x33103D0", VA = "0x183311DD0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x3312600", Offset = "0x3310C00", VA = "0x183312600")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float playbackSpeed
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x3312250", Offset = "0x3310850", VA = "0x183312250")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x33127C0", Offset = "0x3310DC0", VA = "0x1833127C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	[UnityEngine.Bindings.NativeName("Loop")]
	public bool isLooping
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x3311E90", Offset = "0x3310490", VA = "0x183311E90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x33126E0", Offset = "0x3310CE0", VA = "0x1833126E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public ulong frameCount
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x3311C50", Offset = "0x3310250", VA = "0x183311C50")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x1700000B")]
	public float frameRate
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x3311D10", Offset = "0x3310310", VA = "0x183311D10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000C")]
	[UnityEngine.Bindings.NativeName("Duration")]
	public double length
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x3312190", Offset = "0x3310790", VA = "0x183312190")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x3311A10", Offset = "0x3310010", VA = "0x183311A10")]
	public void Prepare()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x3311950", Offset = "0x330FF50", VA = "0x183311950")]
	public void Play()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x3311890", Offset = "0x330FE90", VA = "0x183311890")]
	public void Pause()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x3311B90", Offset = "0x3310190", VA = "0x183311B90")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x3311AD0", Offset = "0x33100D0", VA = "0x183311AD0")]
	public void StepForward()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3311790", Offset = "0x330FD90", VA = "0x183311790")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokePrepareCompletedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x3311710", Offset = "0x330FD10", VA = "0x183311710")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeFrameReadyCallback_Internal(VideoPlayer source, long frameIdx)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x3311750", Offset = "0x330FD50", VA = "0x183311750")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeLoopPointReachedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x3311810", Offset = "0x330FE10", VA = "0x183311810")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeStartedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x33116D0", Offset = "0x330FCD0", VA = "0x1833116D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeFrameDroppedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3311690", Offset = "0x330FC90", VA = "0x183311690")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeErrorReceivedCallback_Internal(VideoPlayer source, string errorStr)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x33117D0", Offset = "0x330FDD0", VA = "0x1833117D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeSeekCompletedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3311650", Offset = "0x330FC50", VA = "0x183311650")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeClockResyncOccurredCallback_Internal(VideoPlayer source, double seconds)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x33122D0", Offset = "0x33108D0", VA = "0x1833122D0")]
	private static extern VideoSource get_source_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x3312450", Offset = "0x3310A50", VA = "0x183312450")]
	private static extern void get_url_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x3312930", Offset = "0x3310F30", VA = "0x183312930")]
	private static extern void set_url_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x33119D0", Offset = "0x330FFD0", VA = "0x1833119D0")]
	private static extern void Prepare_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x3312090", Offset = "0x3310690", VA = "0x183312090")]
	private static extern bool get_isPrepared_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x3311910", Offset = "0x330FF10", VA = "0x183311910")]
	private static extern void Play_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x3311850", Offset = "0x330FE50", VA = "0x183311850")]
	private static extern void Pause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x3311B50", Offset = "0x3310150", VA = "0x183311B50")]
	private static extern void Stop_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x3311FD0", Offset = "0x33105D0", VA = "0x183311FD0")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x3311F10", Offset = "0x3310510", VA = "0x183311F10")]
	private static extern bool get_isPaused_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x3312390", Offset = "0x3310990", VA = "0x183312390")]
	private static extern double get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x3312850", Offset = "0x3310E50", VA = "0x183312850")]
	private static extern void set_time_Injected(IntPtr _unity_self, double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x3311D90", Offset = "0x3310390", VA = "0x183311D90")]
	private static extern long get_frame_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x33125B0", Offset = "0x3310BB0", VA = "0x1833125B0")]
	private static extern void set_frame_Injected(IntPtr _unity_self, long value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x3311A90", Offset = "0x3310090", VA = "0x183311A90")]
	private static extern void StepForward_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x3312210", Offset = "0x3310810", VA = "0x183312210")]
	private static extern float get_playbackSpeed_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x3312770", Offset = "0x3310D70", VA = "0x183312770")]
	private static extern void set_playbackSpeed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x3311E50", Offset = "0x3310450", VA = "0x183311E50")]
	private static extern bool get_isLooping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x3312690", Offset = "0x3310C90", VA = "0x183312690")]
	private static extern void set_isLooping_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x3311C10", Offset = "0x3310210", VA = "0x183311C10")]
	private static extern ulong get_frameCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x3311CD0", Offset = "0x33102D0", VA = "0x183311CD0")]
	private static extern float get_frameRate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3312150", Offset = "0x3310750", VA = "0x183312150")]
	private static extern double get_length_Injected(IntPtr _unity_self);
}

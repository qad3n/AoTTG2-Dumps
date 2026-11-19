// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Video.VideoPlayer
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6D20F70", Offset = "0x6D1FF70", VA = "0x6D20F70")]
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
		[Address(RVA = "0x6D21020", Offset = "0x6D20020", VA = "0x6D21020")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x6D21170", Offset = "0x6D20170", VA = "0x6D21170")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool isPrepared
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x6D21410", Offset = "0x6D20410", VA = "0x6D21410")]
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
		[Address(RVA = "0x6D216D0", Offset = "0x6D206D0", VA = "0x6D216D0")]
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
		[Address(RVA = "0x6D21780", Offset = "0x6D20780", VA = "0x6D21780")]
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
		[Address(RVA = "0x6D21830", Offset = "0x6D20830", VA = "0x6D21830")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x6D218E0", Offset = "0x6D208E0", VA = "0x6D218E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	[UnityEngine.Bindings.NativeName("FramePosition")]
	public long frame
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x6D219C0", Offset = "0x6D209C0", VA = "0x6D219C0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x6D21A70", Offset = "0x6D20A70", VA = "0x6D21A70")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float playbackSpeed
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x6D21BE0", Offset = "0x6D20BE0", VA = "0x6D21BE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x6D21C90", Offset = "0x6D20C90", VA = "0x6D21C90")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	[UnityEngine.Bindings.NativeName("Loop")]
	public bool isLooping
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x6D21D70", Offset = "0x6D20D70", VA = "0x6D21D70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x6D21E20", Offset = "0x6D20E20", VA = "0x6D21E20")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public ulong frameCount
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x6D21EE0", Offset = "0x6D20EE0", VA = "0x6D21EE0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x1700000B")]
	public float frameRate
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x6D21F90", Offset = "0x6D20F90", VA = "0x6D21F90")]
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
		[Address(RVA = "0x6D22040", Offset = "0x6D21040", VA = "0x6D22040")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x6D21360", Offset = "0x6D20360", VA = "0x6D21360")]
	public void Prepare()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x6D214C0", Offset = "0x6D204C0", VA = "0x6D214C0")]
	public void Play()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x6D21570", Offset = "0x6D20570", VA = "0x6D21570")]
	public void Pause()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x6D21620", Offset = "0x6D20620", VA = "0x6D21620")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x6D21B30", Offset = "0x6D20B30", VA = "0x6D21B30")]
	public void StepForward()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x6D220F0", Offset = "0x6D210F0", VA = "0x6D220F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokePrepareCompletedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x6D22120", Offset = "0x6D21120", VA = "0x6D22120")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeFrameReadyCallback_Internal(VideoPlayer source, long frameIdx)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x6D22150", Offset = "0x6D21150", VA = "0x6D22150")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeLoopPointReachedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x6D22180", Offset = "0x6D21180", VA = "0x6D22180")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeStartedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x6D221B0", Offset = "0x6D211B0", VA = "0x6D221B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeFrameDroppedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x6D221E0", Offset = "0x6D211E0", VA = "0x6D221E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeErrorReceivedCallback_Internal(VideoPlayer source, string errorStr)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6D22210", Offset = "0x6D21210", VA = "0x6D22210")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeSeekCompletedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x6D22240", Offset = "0x6D21240", VA = "0x6D22240")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeClockResyncOccurredCallback_Internal(VideoPlayer source, double seconds)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6D20FF0", Offset = "0x6D1FFF0", VA = "0x6D20FF0")]
	private static extern VideoSource get_source_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x6D21130", Offset = "0x6D20130", VA = "0x6D21130")]
	private static extern void get_url_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x6D21320", Offset = "0x6D20320", VA = "0x6D21320")]
	private static extern void set_url_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x6D213E0", Offset = "0x6D203E0", VA = "0x6D213E0")]
	private static extern void Prepare_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x6D21490", Offset = "0x6D20490", VA = "0x6D21490")]
	private static extern bool get_isPrepared_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x6D21540", Offset = "0x6D20540", VA = "0x6D21540")]
	private static extern void Play_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6D215F0", Offset = "0x6D205F0", VA = "0x6D215F0")]
	private static extern void Pause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x6D216A0", Offset = "0x6D206A0", VA = "0x6D216A0")]
	private static extern void Stop_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x6D21750", Offset = "0x6D20750", VA = "0x6D21750")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x6D21800", Offset = "0x6D20800", VA = "0x6D21800")]
	private static extern bool get_isPaused_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x6D218B0", Offset = "0x6D208B0", VA = "0x6D218B0")]
	private static extern double get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x6D21970", Offset = "0x6D20970", VA = "0x6D21970")]
	private static extern void set_time_Injected(IntPtr _unity_self, double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x6D21A40", Offset = "0x6D20A40", VA = "0x6D21A40")]
	private static extern long get_frame_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x6D21AF0", Offset = "0x6D20AF0", VA = "0x6D21AF0")]
	private static extern void set_frame_Injected(IntPtr _unity_self, long value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x6D21BB0", Offset = "0x6D20BB0", VA = "0x6D21BB0")]
	private static extern void StepForward_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x6D21C60", Offset = "0x6D20C60", VA = "0x6D21C60")]
	private static extern float get_playbackSpeed_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x6D21D20", Offset = "0x6D20D20", VA = "0x6D21D20")]
	private static extern void set_playbackSpeed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x6D21DF0", Offset = "0x6D20DF0", VA = "0x6D21DF0")]
	private static extern bool get_isLooping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x6D21EA0", Offset = "0x6D20EA0", VA = "0x6D21EA0")]
	private static extern void set_isLooping_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x6D21F60", Offset = "0x6D20F60", VA = "0x6D21F60")]
	private static extern ulong get_frameCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x6D22010", Offset = "0x6D21010", VA = "0x6D22010")]
	private static extern float get_frameRate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x6D220C0", Offset = "0x6D210C0", VA = "0x6D220C0")]
	private static extern double get_length_Injected(IntPtr _unity_self);
}

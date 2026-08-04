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
[UnityEngine.Scripting.RequiredByNativeCode]
[RequireComponent(typeof(Transform))]
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private EventHandler prepareCompleted;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x20")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private EventHandler loopPointReached;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x28")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private EventHandler started;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x30")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private EventHandler frameDropped;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x38")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private ErrorEventHandler errorReceived;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x40")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private EventHandler seekCompleted;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x48")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
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
		[Address(RVA = "0x510A660", Offset = "0x510A660", VA = "0x510A660")]
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
		[Address(RVA = "0x510A730", Offset = "0x510A730", VA = "0x510A730")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x510A800", Offset = "0x510A800", VA = "0x510A800")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool isPrepared
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x510A9B0", Offset = "0x510A9B0", VA = "0x510A9B0")]
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
		[Address(RVA = "0x510ACF0", Offset = "0x510ACF0", VA = "0x510ACF0")]
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
		[Address(RVA = "0x510ADC0", Offset = "0x510ADC0", VA = "0x510ADC0")]
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
		[Address(RVA = "0x510AE90", Offset = "0x510AE90", VA = "0x510AE90")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x510AF60", Offset = "0x510AF60", VA = "0x510AF60")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	[UnityEngine.Bindings.NativeName("FramePosition")]
	public long frame
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x510B060", Offset = "0x510B060", VA = "0x510B060")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x510B130", Offset = "0x510B130", VA = "0x510B130")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public float playbackSpeed
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x510B2E0", Offset = "0x510B2E0", VA = "0x510B2E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x510B3B0", Offset = "0x510B3B0", VA = "0x510B3B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	[UnityEngine.Bindings.NativeName("Loop")]
	public bool isLooping
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x510B4B0", Offset = "0x510B4B0", VA = "0x510B4B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x510B580", Offset = "0x510B580", VA = "0x510B580")]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public ulong frameCount
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x510B660", Offset = "0x510B660", VA = "0x510B660")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x1700000B")]
	public float frameRate
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x510B730", Offset = "0x510B730", VA = "0x510B730")]
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
		[Address(RVA = "0x510B800", Offset = "0x510B800", VA = "0x510B800")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x510A8E0", Offset = "0x510A8E0", VA = "0x510A8E0")]
	public void Prepare()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x510AA80", Offset = "0x510AA80", VA = "0x510AA80")]
	public void Play()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x510AB50", Offset = "0x510AB50", VA = "0x510AB50")]
	public void Pause()
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x510AC20", Offset = "0x510AC20", VA = "0x510AC20")]
	public void Stop()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x510B210", Offset = "0x510B210", VA = "0x510B210")]
	public void StepForward()
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x510B8D0", Offset = "0x510B8D0", VA = "0x510B8D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokePrepareCompletedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x510B900", Offset = "0x510B900", VA = "0x510B900")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeFrameReadyCallback_Internal(VideoPlayer source, long frameIdx)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x510B930", Offset = "0x510B930", VA = "0x510B930")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeLoopPointReachedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x510B960", Offset = "0x510B960", VA = "0x510B960")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeStartedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x510B990", Offset = "0x510B990", VA = "0x510B990")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeFrameDroppedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x510B9C0", Offset = "0x510B9C0", VA = "0x510B9C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeErrorReceivedCallback_Internal(VideoPlayer source, string errorStr)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x510B9F0", Offset = "0x510B9F0", VA = "0x510B9F0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeSeekCompletedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x510BA20", Offset = "0x510BA20", VA = "0x510BA20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeClockResyncOccurredCallback_Internal(VideoPlayer source, double seconds)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x510A700", Offset = "0x510A700", VA = "0x510A700")]
	private static extern VideoSource get_source_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x510A7D0", Offset = "0x510A7D0", VA = "0x510A7D0")]
	private static extern string get_url_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x510A8A0", Offset = "0x510A8A0", VA = "0x510A8A0")]
	private static extern void set_url_Injected(IntPtr _unity_self, string value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x510A980", Offset = "0x510A980", VA = "0x510A980")]
	private static extern void Prepare_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x510AA50", Offset = "0x510AA50", VA = "0x510AA50")]
	private static extern bool get_isPrepared_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x510AB20", Offset = "0x510AB20", VA = "0x510AB20")]
	private static extern void Play_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x510ABF0", Offset = "0x510ABF0", VA = "0x510ABF0")]
	private static extern void Pause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x510ACC0", Offset = "0x510ACC0", VA = "0x510ACC0")]
	private static extern void Stop_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x510AD90", Offset = "0x510AD90", VA = "0x510AD90")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x510AE60", Offset = "0x510AE60", VA = "0x510AE60")]
	private static extern bool get_isPaused_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x510AF30", Offset = "0x510AF30", VA = "0x510AF30")]
	private static extern double get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x510B010", Offset = "0x510B010", VA = "0x510B010")]
	private static extern void set_time_Injected(IntPtr _unity_self, double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x510B100", Offset = "0x510B100", VA = "0x510B100")]
	private static extern long get_frame_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x510B1D0", Offset = "0x510B1D0", VA = "0x510B1D0")]
	private static extern void set_frame_Injected(IntPtr _unity_self, long value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x510B2B0", Offset = "0x510B2B0", VA = "0x510B2B0")]
	private static extern void StepForward_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x510B380", Offset = "0x510B380", VA = "0x510B380")]
	private static extern float get_playbackSpeed_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x510B460", Offset = "0x510B460", VA = "0x510B460")]
	private static extern void set_playbackSpeed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x510B550", Offset = "0x510B550", VA = "0x510B550")]
	private static extern bool get_isLooping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x510B620", Offset = "0x510B620", VA = "0x510B620")]
	private static extern void set_isLooping_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000034")]
	[Address(RVA = "0x510B700", Offset = "0x510B700", VA = "0x510B700")]
	private static extern ulong get_frameCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x510B7D0", Offset = "0x510B7D0", VA = "0x510B7D0")]
	private static extern float get_frameRate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x510B8A0", Offset = "0x510B8A0", VA = "0x510B8A0")]
	private static extern double get_length_Injected(IntPtr _unity_self);
}

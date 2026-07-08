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
	public bool isPrepared
	{
		[Token(Token = "0x6000004")]
		[Address(RVA = "0x4DE2C30", Offset = "0x4DE2C30", VA = "0x4DE2C30")]
		[UnityEngine.Bindings.NativeName("IsPrepared")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public bool isPlaying
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4DE2F70", Offset = "0x4DE2F70", VA = "0x4DE2F70")]
		[UnityEngine.Bindings.NativeName("IsPlaying")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000003")]
	public bool isPaused
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4DE3040", Offset = "0x4DE3040", VA = "0x4DE3040")]
		[UnityEngine.Bindings.NativeName("IsPaused")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000004")]
	[UnityEngine.Bindings.NativeName("SecPosition")]
	public double time
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4DE3110", Offset = "0x4DE3110", VA = "0x4DE3110")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4DE31E0", Offset = "0x4DE31E0", VA = "0x4DE31E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	[UnityEngine.Bindings.NativeName("FramePosition")]
	public long frame
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4DE32E0", Offset = "0x4DE32E0", VA = "0x4DE32E0")]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4DE33B0", Offset = "0x4DE33B0", VA = "0x4DE33B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public float playbackSpeed
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4DE3560", Offset = "0x4DE3560", VA = "0x4DE3560")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4DE3630", Offset = "0x4DE3630", VA = "0x4DE3630")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	[UnityEngine.Bindings.NativeName("Loop")]
	public bool isLooping
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4DE3730", Offset = "0x4DE3730", VA = "0x4DE3730")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4DE3800", Offset = "0x4DE3800", VA = "0x4DE3800")]
		set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public ulong frameCount
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4DE38E0", Offset = "0x4DE38E0", VA = "0x4DE38E0")]
		get
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x17000009")]
	public float frameRate
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4DE39B0", Offset = "0x4DE39B0", VA = "0x4DE39B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700000A")]
	[UnityEngine.Bindings.NativeName("Duration")]
	public double length
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4DE3A80", Offset = "0x4DE3A80", VA = "0x4DE3A80")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4DE2B60", Offset = "0x4DE2B60", VA = "0x4DE2B60")]
	public void Prepare()
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4DE2D00", Offset = "0x4DE2D00", VA = "0x4DE2D00")]
	public void Play()
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4DE2DD0", Offset = "0x4DE2DD0", VA = "0x4DE2DD0")]
	public void Pause()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4DE2EA0", Offset = "0x4DE2EA0", VA = "0x4DE2EA0")]
	public void Stop()
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4DE3490", Offset = "0x4DE3490", VA = "0x4DE3490")]
	public void StepForward()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x4DE3B50", Offset = "0x4DE3B50", VA = "0x4DE3B50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokePrepareCompletedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x4DE3B80", Offset = "0x4DE3B80", VA = "0x4DE3B80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeFrameReadyCallback_Internal(VideoPlayer source, long frameIdx)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4DE3BB0", Offset = "0x4DE3BB0", VA = "0x4DE3BB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeLoopPointReachedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x4DE3BE0", Offset = "0x4DE3BE0", VA = "0x4DE3BE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeStartedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4DE3C10", Offset = "0x4DE3C10", VA = "0x4DE3C10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeFrameDroppedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4DE3C40", Offset = "0x4DE3C40", VA = "0x4DE3C40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeErrorReceivedCallback_Internal(VideoPlayer source, string errorStr)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4DE3C70", Offset = "0x4DE3C70", VA = "0x4DE3C70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeSeekCompletedCallback_Internal(VideoPlayer source)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4DE3CA0", Offset = "0x4DE3CA0", VA = "0x4DE3CA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeClockResyncOccurredCallback_Internal(VideoPlayer source, double seconds)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4DE2C00", Offset = "0x4DE2C00", VA = "0x4DE2C00")]
	private static extern void Prepare_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4DE2CD0", Offset = "0x4DE2CD0", VA = "0x4DE2CD0")]
	private static extern bool get_isPrepared_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4DE2DA0", Offset = "0x4DE2DA0", VA = "0x4DE2DA0")]
	private static extern void Play_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4DE2E70", Offset = "0x4DE2E70", VA = "0x4DE2E70")]
	private static extern void Pause_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4DE2F40", Offset = "0x4DE2F40", VA = "0x4DE2F40")]
	private static extern void Stop_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x4DE3010", Offset = "0x4DE3010", VA = "0x4DE3010")]
	private static extern bool get_isPlaying_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x4DE30E0", Offset = "0x4DE30E0", VA = "0x4DE30E0")]
	private static extern bool get_isPaused_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4DE31B0", Offset = "0x4DE31B0", VA = "0x4DE31B0")]
	private static extern double get_time_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4DE3290", Offset = "0x4DE3290", VA = "0x4DE3290")]
	private static extern void set_time_Injected(IntPtr _unity_self, double value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4DE3380", Offset = "0x4DE3380", VA = "0x4DE3380")]
	private static extern long get_frame_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4DE3450", Offset = "0x4DE3450", VA = "0x4DE3450")]
	private static extern void set_frame_Injected(IntPtr _unity_self, long value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000029")]
	[Address(RVA = "0x4DE3530", Offset = "0x4DE3530", VA = "0x4DE3530")]
	private static extern void StepForward_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x4DE3600", Offset = "0x4DE3600", VA = "0x4DE3600")]
	private static extern float get_playbackSpeed_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x4DE36E0", Offset = "0x4DE36E0", VA = "0x4DE36E0")]
	private static extern void set_playbackSpeed_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x4DE37D0", Offset = "0x4DE37D0", VA = "0x4DE37D0")]
	private static extern bool get_isLooping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x4DE38A0", Offset = "0x4DE38A0", VA = "0x4DE38A0")]
	private static extern void set_isLooping_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x4DE3980", Offset = "0x4DE3980", VA = "0x4DE3980")]
	private static extern ulong get_frameCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x4DE3A50", Offset = "0x4DE3A50", VA = "0x4DE3A50")]
	private static extern float get_frameRate_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x4DE3B20", Offset = "0x4DE3B20", VA = "0x4DE3B20")]
	private static extern double get_length_Injected(IntPtr _unity_self);
}
